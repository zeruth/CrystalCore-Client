#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
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
uint F_00df6b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
  return (uint)this;
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
  int * piVar3;
  
  piVar3 = param_2;
  while( true ) {
    if (piVar3 == (int *)0x0) {
      *param_1 = 0;
      return (uint)param_1;
    }
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
    uVar1 = F_00da0d20(uVar2,uVar1);
    if (uVar1 == 0) break;
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3)));
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
  int * piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  in_ecx = *(uint *)(this + 0xc);
  iVar5 = param_1[1] * 0x10 + *param_1;
  piVar3 = param_1;
  if (in_ecx != 0) {
    do {
      uVar1 = F_00d92850(in_ecx);
      iVar5 = iVar5 + uVar1 * -0x10;
      iVar4 = 0;
      iVar6 = iVar5;
      if (0 < (int)uVar1) {
        do {
          uVar2 = F_00d92860(in_ecx,iVar4);
          F_00df7ce0(this,*(undefined4 *)(this + 0x10),uVar2,iVar6);
          uVar2 = F_00d92bc0(in_ecx,iVar4);
          *(uint *)(iVar6 + 0xc) = uVar2;
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + 0x10;
        } while (iVar4 < (int)uVar1);
      }
      in_ecx = F_00d92620(in_ecx);
    } while (in_ecx != 0);
    piVar3 = (int *)0x0;
  }
  return (uint)piVar3;
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
  GEN_ENTER(0xdf8110u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
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
    uVar8 = F_0105a750(((undefined1 *)(gen_frame + 0x4)));
    (*(uint *)(gen_frame + 0x18)) = uVar8;
    uVar8 = F_0105a8f0(((undefined1 *)(gen_frame + 0x4)));
    uVar8 = F_00da5ff0(uVar8);
    uVar7 = (uint)*(byte *)(param_1 + 0xc);
    (*(uint *)(gen_frame + 0x14)) = uVar8;
    uVar8 = F_00da5fd0(param_1);
    if (uVar7 != 0x19) {
      uVar3 = F_00da5f30(uVar7);
      param_1 = (uint)*(short *)(uVar3 + 8);
      goto LAB_00df8339;
    }
    goto LAB_00df82cb;
  default: ;
    (*(uint *)(gen_frame + 0x18)) = 0;
    (*(uint *)(gen_frame + 0x14)) = 0;
    uVar8 = 0;
    break;
  case 0x16: ;
  case 0x1a: ;
    puVar2 = (uint *)F_0105a750(((undefined1 *)(gen_frame + 0x4)));
    uVar8 = *puVar2;
    uVar7 = puVar2[1];
    (*(uint * PTR32 *)(gen_frame + 0xc)) = puVar2;
    goto LAB_00df825f;
  case 0x1b: ;
    uVar8 = F_0105a750(((undefined1 *)(gen_frame + 0x4)));
    (*(uint * PTR32 *)(gen_frame + 0xc)) = (uint *)(uVar8 + 4);
    (*(uint *)(gen_frame + 0x18)) = *(uint *)(uVar8 + 4);
    (*(uint *)(gen_frame + 0x14)) = *(uint *)(uVar8 + 8);
    puVar2 = (uint *)F_0105a750(((undefined1 *)(gen_frame + 0x4)));
    uVar8 = *puVar2;
    if (uVar8 != 0) {
      param_1 = F_00d929c0(uVar8);
      uVar7 = 0x19;
      goto LAB_00df8339;
    }
    break;
  case 0x22: ;
    puVar4 = (ushort *)F_0105a750(((undefined1 *)(gen_frame + 0x4)));
    uVar7 = (uint)*puVar4;
    uVar8 = (uint)puVar4[1] + (int)puVar4;
LAB_00df825f: ;
    (*(uint *)(gen_frame + 0x18)) = uVar8;
    (*(uint *)(gen_frame + 0x14)) = uVar7;
    uVar8 = F_00da5fd0(param_1);
    uVar7 = (uint)*(byte *)(param_1 + 0xd);
    uVar3 = F_00da5f30(uVar7);
    param_1 = (uint)*(short *)(uVar3 + 8);
    if (uVar7 == 0) {
      pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar5 + 0x2c) + 4))))
                                  (*(int * PTR32 *)((int)pvVar5 + 0x2c),0x34)));
      *(undefined2 *)((int)this_00 + 4) = 0x34;
      uVar8 = F_00df7270(this_00,*(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x14),0,0,0,0,0,0,0,0);
      return uVar8;
    }
    if (param_1 == 0xffffffff) {
LAB_00df82cb: ;
      param_1 = F_00d929c0(uVar8);
    }
    goto LAB_00df8339;
  }
  uVar7 = 0;
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
  puVar6[7] = uVar7;
  puVar6[9] = uVar8;
  puVar6[0xc] = (*(uint * PTR32 *)(gen_frame + 0xc));
  uVar8 = ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,uVar7,0,uVar8,0);
  puVar6[10] = uVar8;
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
  GEN_ENTER(0xdf85d0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
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
  int * piVar1;
  int iVar2;
  undefined * in_ecx;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  
  in_ecx = (*(undefined * PTR32 *)&gen_args[1]);
  uVar4 = F_00d93010((*(undefined * PTR32 *)&gen_args[1]),0);
  (*(uint *)(gen_frame + 0x8)) = uVar4;
  uVar5 = (*(uint *)(gen_frame + 0x8));
  if (*(char *)((*(int *)&gen_args[0]) + 0x4c) != '\0') {
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 3)) = (undefined1)(uVar4 >> 0x18);
    (*((undefined1 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + 2)))) = (undefined1)(uVar4 >> 0x10);
    (*((undefined1 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + 1)))) = (undefined1)(uVar4 >> 8);
    uVar3 = (*((undefined1 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + 1))));
    (*((undefined2 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + 0)))) = CONCAT11((*((undefined1 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + 2)))),(*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 3)));
    (*(undefined * PTR32 *)&gen_args[1]) = ((undefined *)GEN_TOP(CONCAT13((char)uVar4,CONCAT12(uVar3,(*((undefined2 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + 0))))))));
    uVar4 = (uint)(*(undefined * PTR32 *)&gen_args[1]);
  }
  piVar1 = *(int * PTR32 *)((*(int *)&gen_args[0]) + 0x1c);
  (*(uint *)(gen_frame + 0x0)) = uVar4;
  (*(undefined1 *)(gen_frame + 0x4)) = 9;
  (*(uint *)(gen_frame + 0x8)) = uVar5;
  ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,&(*(uint *)(gen_frame + 0x0)),5);
  uVar5 = F_00d92610(in_ecx);
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 0x1c) + 0x20))))(*(int * PTR32 *)((*(int *)&gen_args[0]) + 0x1c));
  F_00da3a20((undefined *)((*(int *)&gen_args[0]) + 0x30),uVar5,uVar4 - (*(int *)&gen_args[2]));
  iVar2 = **(int * PTR32 *)((*(int *)&gen_args[0]) + 0x1c);
  uVar4 = F_00da0e60(uVar5);
  uVar5 = ((code *)*(gen_code32 *)(iVar2 + 0x10))(*(undefined4 *)((*(int *)&gen_args[0]) + 0x1c),uVar5,uVar4 + 1);
  return uVar5;
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
  undefined4 uVar1;
  code * pcVar2;
  uint uVar3;
  
  F_00da1030(&(*(undefined4 *)(gen_frame + 0x8)),0xffffffff,0x40);
  uVar1 = *in_eax;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x57e0e057;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x10c0c010;
  ((undefined1 *)(gen_frame + 0x30))[0] = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
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
  pcVar2 = *(gen_code32 *)(*in_edi + 0xc);
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
  (*pcVar2)(in_edi,param_3,&(*(undefined4 *)(gen_frame + 0x8)),&REFG(undefined, 0x15e3704),&(*(undefined4 *)(gen_frame + 0x48)));
  uVar3 = F_00e1d4f0(&(*(undefined4 *)(gen_frame + 0x48)));
  return uVar3;
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
  code * pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 * puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar4 = (*(int *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x64)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00da68d0(((undefined1 *)(gen_frame + 0x0)),*(undefined4 *)((*(int *)&gen_args[1]) + 0x1c),(uint)*(byte *)((*(int *)&gen_args[1]) + 0x4c));
  (*(int *)(gen_frame + 0x60)) = 0;
  if (0 < *(int *)((*(int *)&gen_args[1]) + 8)) {
    (*(int *)(gen_frame + 0x6c)) = 0;
    (*(int *)(gen_frame + 0x68)) = 0;
    do {
      iVar9 = *(int *)(iVar4 + 4) + (*(int *)(gen_frame + 0x68));
      uVar7 = 0;
      piVar1 = ((int *)GEN_TOP((*(int *)(iVar4 + 0x40) + 0xc + (*(int *)(gen_frame + 0x6c)))));
      (*(int *)(gen_frame + 0x7c)) = 0;
      (*(uint *)(gen_frame + 0x80)) = 0;
      (*(int *)(gen_frame + 0x84)) = ((int)0x80000000);
      uVar5 = piVar1[1] * 3;
      (*(int *)(gen_frame + 0x5c)) = iVar9;
      if (0 < (int)uVar5) {
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x7c)),uVar5 & ((int)uVar5 < 0) - 1,4);
        uVar7 = (*(uint *)(gen_frame + 0x80));
      }
      iVar8 = uVar5 - uVar7;
      (*(int *)(gen_frame + 0x88)) = iVar8;
      puVar6 = (undefined4 *)((*(int *)(gen_frame + 0x7c)) + uVar7 * 4);
      if (0 < iVar8) {
        for (; iVar9 = (*(int *)(gen_frame + 0x5c)), iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar6 = 0xffffffff;
          puVar6 = puVar6 + 1;
        }
      }
      (*(uint *)(gen_frame + 0x80)) = uVar5;
      (*(int *)(gen_frame + 0x88)) = 0;
      if (0 < piVar1[1]) {
        (*(undefined * PTR32 *)(gen_frame + 0x54)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x14);
        (*(int *)(gen_frame + 0x58)) = 0;
        (*(int *)&gen_args[1]) = 0;
        do {
          uVar5 = F_00dbd970((*(undefined * PTR32 *)(gen_frame + 0x54)),*(undefined4 *)(*piVar1 + 4 + (*(int *)&gen_args[1])),0xfffffffd);
          if ((-1 < (int)uVar5) && (-1 < *((int *)GEN_TOP((*(int *)(iVar4 + 0x10) + uVar5 * 8))))) {
            *(int *)((*(int *)(gen_frame + 0x58)) + (*(int *)(gen_frame + 0x7c))) = *(int *)(*piVar1 + (*(int *)&gen_args[1])) - *(int *)(iVar9 + 0x14);
            *(undefined4 *)((*(int *)(gen_frame + 0x58)) + 4 + (*(int *)(gen_frame + 0x7c))) =
                 *((undefined4 *)GEN_TOP((*(int *)(iVar4 + 0x10) + uVar5 * 8)));
            *(undefined4 *)((*(int *)(gen_frame + 0x58)) + 8 + (*(int *)(gen_frame + 0x7c))) =
                 *((undefined4 *)GEN_TOP((*(int *)(iVar4 + 0x10) + 4 + uVar5 * 8)));
            (*(int *)(gen_frame + 0x58)) = (*(int *)(gen_frame + 0x58)) + 0xc;
            iVar9 = (*(int *)(gen_frame + 0x5c));
          }
          (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) + 0x10;
          iVar8 = (*(int *)(gen_frame + 0x88)) + 1;
          (*(int *)(gen_frame + 0x88)) = iVar8;
        } while (iVar8 < piVar1[1]);
      }
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar4 + 0x1c) + 0x1c))))
                (*(int * PTR32 *)(iVar4 + 0x1c),*(int *)(iVar9 + 0x1c) + *(int *)(iVar9 + 0x14),0);
      F_00da6db0(((undefined1 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x7c)),(*(uint *)(gen_frame + 0x80)));
      (*(uint *)(gen_frame + 0x80)) = 0;
      if (-1 < (*(int *)(gen_frame + 0x84))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x7c)),(*(int *)(gen_frame + 0x84)) * 4);
      }
      iVar9 = *(int *)(iVar4 + 4) + (*(int *)(gen_frame + 0x68));
      piVar1 = ((int *)GEN_TOP((*(int *)(iVar4 + 0x40) + 0x18 + (*(int *)(gen_frame + 0x6c)))));
      (*(int *)(gen_frame + 0x7c)) = 0;
      (*(int *)(gen_frame + 0x70)) = 0;
      (*(uint *)(gen_frame + 0x74)) = 0;
      (*(int *)(gen_frame + 0x78)) = ((int)0x80000000);
      uVar5 = piVar1[1] * 3;
      (*(int *)(gen_frame + 0x84)) = 0x80000000;
      (*(int *)(gen_frame + 0x88)) = iVar9;
      if (0 < (int)uVar5) {
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x70)),((int)uVar5 < 0) - 1 & uVar5,4);
      }
      (*(uint *)(gen_frame + 0x74)) = uVar5;
      iVar8 = 0;
      if (0 < piVar1[1]) {
        iVar10 = 0;
        do {
          *(int *)((*(int *)(gen_frame + 0x70)) + iVar10) = *(int *)(*piVar1 + iVar8 * 8) - *(int *)((*(int *)(gen_frame + 0x88)) + 0x14);
          *(undefined4 *)((*(int *)(gen_frame + 0x70)) + 4 + iVar10) = 0;
          uVar5 = F_00da4190((undefined *)(iVar4 + 0x30),*(undefined4 *)(*piVar1 + 4 + iVar8 * 8),
                               0xffffffff);
          *(uint *)((*(int *)(gen_frame + 0x70)) + 8 + iVar10) = uVar5;
          iVar8 = iVar8 + 1;
          iVar10 = iVar10 + 0xc;
          iVar9 = (*(int *)(gen_frame + 0x88));
        } while (iVar8 < piVar1[1]);
      }
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar4 + 0x1c) + 0x1c))))
                (*(int * PTR32 *)(iVar4 + 0x1c),*(int *)(iVar9 + 0x20) + *(int *)(iVar9 + 0x14),0);
      F_00da6db0(((undefined1 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x70)),(*(uint *)(gen_frame + 0x74)));
      (*(uint *)(gen_frame + 0x74)) = 0;
      if (-1 < (*(int *)(gen_frame + 0x78))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x70)),(*(int *)(gen_frame + 0x78)) * 4);
      }
      (*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) + 0x30;
      (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + 0x34;
      iVar9 = (*(int *)(gen_frame + 0x60)) + 1;
      (*(int *)(gen_frame + 0x70)) = 0;
      (*(int *)(gen_frame + 0x78)) = 0x80000000;
      (*(int *)(gen_frame + 0x60)) = iVar9;
      (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0x64));
    } while (iVar9 < *(int *)(iVar4 + 8));
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar4 + 0x1c) + 0x1c))))(*(int * PTR32 *)(iVar4 + 0x1c),(*(undefined4 *)&gen_args[2]),0);
  (*(int *)&gen_args[1]) = 0;
  if (0 < *(int *)(iVar4 + 8)) {
    iVar9 = 0;
    do {
      iVar8 = *(int *)(iVar4 + 4);
      (*(undefined4 *)(gen_frame + 0x18)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x24)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x30)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x3c)) = 0x80000000;
      pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)(iVar4 + 0x20) + 0xc)));
      uVar3 = *(undefined4 *)(iVar4 + 0x1c);
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0;
      (*(undefined4 *)(gen_frame + 0x34)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      (*pcVar2)(iVar4 + 0x20,uVar3,iVar8 + iVar9,&REFG(undefined, 0x15e36d4),&(*(undefined4 *)(gen_frame + 0x10)));
      F_00e1d4f0(&(*(undefined4 *)(gen_frame + 0x10)));
      (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) + 1;
      iVar9 = iVar9 + 0x30;
      (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0x64));
    } while ((*(int *)&gen_args[1]) < *(int *)(iVar4 + 8));
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar4 + 0x1c) + 0x1c))))(*(int * PTR32 *)(iVar4 + 0x1c),0x18,0);
  puVar6 = (undefined4 *)F_00e1d7a0(iVar4 + 0x20);
  (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),(char)((uint)*puVar6 >> 8) != (*(undefined1 *)((char *)&REFG(undefined4, 0x135491c) + 1)));
  F_00da68d0(((undefined1 *)(gen_frame + 0x44)),*(undefined4 *)(iVar4 + 0x1c),(*(int *)&gen_args[1]));
  F_00da6c50(((undefined1 *)(gen_frame + 0x44)),*((undefined4 *)GEN_TOP((*(int *)(iVar4 + 0x10) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c))) * 8))));
  F_00da6c50(((undefined1 *)(gen_frame + 0x44)),*((undefined4 *)GEN_TOP((*(int *)(iVar4 + 0x10) + 4 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c))) * 8)))
              );
  uVar3 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))) * 0x18)));
  F_00da6c50(((undefined1 *)(gen_frame + 0x44)),0);
  uVar5 = F_00d92610(uVar3);
  uVar5 = F_00da4190((undefined *)(iVar4 + 0x30),uVar5,0xffffffff);
  F_00da6c50(((undefined1 *)(gen_frame + 0x44)),uVar5);
  F_00da6900(((undefined1 *)(gen_frame + 0x44)));
  uVar5 = F_00da6900(((undefined1 *)(gen_frame + 0x0)));
  return uVar5;
}

/* ref: FUN_00df8f30 */
uint F_00df8f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdf8f30u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int * in_edi = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*in_edi + 0x20))(in_edi);
  (*(uint *)(gen_frame + 0x38)) = uVar1;
  (*(undefined1 * PTR32 *)(gen_frame + 0xc)) = ((undefined1 *)(gen_frame + 0x18));
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0x80000020;
  if (0x20 < in_eax) {
    iVar2 = 0x40;
    if (0x3f < in_eax) {
      iVar2 = in_eax;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0xc)),iVar2,1);
  }
  if (0 < in_eax - (*(int *)(gen_frame + 0x10))) {
    F_00c48350((*(undefined1 * PTR32 *)(gen_frame + 0xc)) + (*(int *)(gen_frame + 0x10)),-1,in_eax - (*(int *)(gen_frame + 0x10)));
  }
  uVar3 = in_eax - 1U & (*(uint *)(gen_frame + 0x38));
  (*(int *)(gen_frame + 0x10)) = in_eax;
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*in_edi + 0x10))(in_edi,(*(undefined1 * PTR32 *)(gen_frame + 0xc)),in_eax - uVar3);
  }
  (*(int *)(gen_frame + 0x10)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) & 0x3fffffff);
  }
  return uVar1;
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
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  int * piVar7;
  undefined * pvVar8;
  int iVar9;
  int iVar10;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  iVar10 = (*(int * PTR32 *)&gen_args[1])[1];
  (*(undefined * PTR32 *)(gen_frame + 0x78)) = (*(undefined * PTR32 *)&gen_args[0]);
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[7])) + 0x20))))(((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[7])));
  *(uint *)(iVar10 + 0x14) = uVar4;
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((uint)(*(int * PTR32 *)&gen_args[1]) & 0xffffff00)));
  F_00da3de0(((undefined1 *)(gen_frame + 0x38)),(*(int * PTR32 *)&gen_args[1]));
  ((undefined * PTR32 *)(gen_frame + 0x48))[0] = &REFG(undefined, 0x15da330);
  ((undefined * PTR32 *)(gen_frame + 0x48))[1] = &REFG(undefined, 0x15da2a0);
  ((undefined * PTR32 *)(gen_frame + 0x48))[2] = &REFG(undefined, 0x15da300);
  ((undefined * PTR32 *)(gen_frame + 0x48))[3] = &REFG(undefined, 0x15da2d0);
  (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
  do {
    uVar4 = F_00d92610(((undefined * PTR32 *)(gen_frame + 0x48))[(int)((int)(*(int * PTR32 *)&gen_args[1]))]);
    F_00da3a20(((undefined1 *)(gen_frame + 0x38)),uVar4,1);
    F_00df8910(piVar3,((undefined * PTR32 *)(gen_frame + 0x48))[(int)((int)(*(int * PTR32 *)&gen_args[1]))],*(undefined4 *)(iVar10 + 0x14));
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 1)));
  } while ((int)(*(int * PTR32 *)&gen_args[1]) < 4);
  (*(int *)(gen_frame + 0x68)) = 0;
  if (0 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)))) {
    (*(uint *)(gen_frame + 0x74)) = 0;
    do {
      uVar4 = F_00d92610(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + (*(uint *)(gen_frame + 0x74)) + 4))));
      uVar4 = F_00da3ae0(((undefined1 *)(gen_frame + 0x38)),uVar4);
      F_00da3e40(((undefined1 *)(gen_frame + 0x38)),(int)&(*(int * PTR32 *)&gen_args[1]) + 3,uVar4);
      if ((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3)))) == '\0') {
        uVar4 = F_00d92610(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + (*(uint *)(gen_frame + 0x74)) + 4))));
        F_00da3a20(((undefined1 *)(gen_frame + 0x38)),uVar4,1);
        F_00df8910(piVar3,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 4 + (*(uint *)(gen_frame + 0x74))))),
                     *(undefined4 *)(iVar10 + 0x14));
      }
      (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 0x18;
      iVar5 = (*(int *)(gen_frame + 0x68)) + 1;
      (*(int *)(gen_frame + 0x68)) = iVar5;
    } while (iVar5 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))));
  }
  F_00df8f30(0x10,piVar3[7]);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)piVar3[7] + 0x20))((int *)piVar3[7]);
  iVar5 = uVar4 - *(int *)(iVar10 + 0x14);
  *(int *)(iVar10 + 0x18) = iVar5;
  *(int *)(iVar10 + 0x1c) = iVar5;
  *(int *)(iVar10 + 0x20) = iVar5;
  *(int *)(iVar10 + 0x24) = iVar5;
  *(int *)(iVar10 + 0x28) = iVar5;
  *(int *)(iVar10 + 0x2c) = iVar5;
  F_00da3e20(((undefined1 *)(gen_frame + 0x38)));
  iVar10 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0xc);
  if ((int)(piVar3[6] & 0x3fffffffU) < iVar10) {
    iVar5 = (piVar3[6] & 0x3fffffffU) * 2;
    if (iVar5 <= iVar10) {
      iVar5 = iVar10;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar3 + 4,iVar5,8);
  }
  iVar5 = 0;
  if (iVar10 != piVar3[5] && -1 < iVar10 - piVar3[5]) {
    do {
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar10 - piVar3[5]);
  }
  piVar3[5] = iVar10;
  (*(int * PTR32 *)&gen_args[1]) = (int *)piVar3[2];
  if ((int)(piVar3[0x12] & 0x3fffffffU) < (int)(*(int * PTR32 *)&gen_args[1])) {
    iVar10 = (piVar3[0x12] & 0x3fffffffU) * 2;
    iVar5 = (int)(*(int * PTR32 *)&gen_args[1]);
    if ((int)(*(int * PTR32 *)&gen_args[1]) < iVar10) {
      iVar5 = iVar10;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar3 + 0x10,iVar5,0x34);
  }
  iVar10 = (piVar3[0x11] - (int)(*(int * PTR32 *)&gen_args[1])) + -1;
  if (-1 < iVar10) {
    pvVar8 = ((undefined *)GEN_TOP((iVar10 * 0x34 + (int)(*(int * PTR32 *)&gen_args[1]) * 0x34 + piVar3[0x10])));
    do {
      F_00e1d4f0(pvVar8);
      pvVar8 = (undefined *)((int)pvVar8 + -0x34);
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
  }
  iVar10 = (int)(*(int * PTR32 *)&gen_args[1]) - piVar3[0x11];
  if (0 < iVar10) {
    puVar6 = (undefined4 *)(piVar3[0x11] * 0x34 + piVar3[0x10] + 0x14);
    do {
      if (puVar6 != (undefined4 *)0x14) {
        puVar6[-5] = 0;
        puVar6[-4] = 0;
        puVar6[-3] = 0x80000000;
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0x80000000;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0x80000000;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[6] = 0x80000000;
        puVar6[7] = 0;
      }
      puVar6 = puVar6 + 0xd;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  piVar3[0x11] = (int)(*(int * PTR32 *)&gen_args[1]);
  uVar4 = F_00dfb4e0((*(undefined * PTR32 *)(gen_frame + 0x78)),REFG(undefined * PTR32, 0x13548cc));
  (*(uint *)(gen_frame + 0x5c)) = uVar4;
  (*(uint *)(gen_frame + 0x74)) = 1;
  if (1 < piVar3[2]) {
    (*(int *)(gen_frame + 0x70)) = 0x34;
    (*(int *)(gen_frame + 0x68)) = 0x30;
    do {
      iVar9 = piVar3[1] + (*(int *)(gen_frame + 0x68));
      uVar4 = ((code *)*(gen_code32 *)(*(int *)piVar3[7] + 0x20))((int *)piVar3[7]);
      *(uint *)(iVar9 + 0x14) = uVar4;
      iVar5 = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x18)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x24)) = 0x80000000;
      (*(uint *)(gen_frame + 0x30)) = 0x80000000;
      iVar10 = *piVar3;
      (*(int *)(gen_frame + 0x4)) = 0;
      (*(int *)(gen_frame + 0x8)) = 0;
      (*(int *)(gen_frame + 0x10)) = 0;
      (*(uint *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(int *)(gen_frame + 0x20)) = 0;
      (*(int *)(gen_frame + 0x28)) = 0;
      (*(uint *)(gen_frame + 0x2c)) = 0;
      (*(undefined4 *)(gen_frame + 0x34)) = 0;
      if ((*(char *)(iVar10 + 8) == '\0') && ((*(uint *)(gen_frame + 0x74)) == (*(uint *)(gen_frame + 0x5c)))) {
        if (0 < *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0xc)) {
          iVar10 = 0;
          do {
            if (*((uint *)GEN_TOP((iVar10 + 0x10 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 8)))) == (*(uint *)(gen_frame + 0x5c))) {
              *(undefined4 *)(piVar3[4] + iVar5 * 8) = 0xffffffff;
              *(undefined4 *)(piVar3[4] + 4 + iVar5 * 8) = 0xffffffff;
            }
            iVar5 = iVar5 + 1;
            iVar10 = iVar10 + 0x18;
          } while (iVar5 < *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0xc));
        }
      }
      else {
        (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
        if (0 < *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0xc)) {
          (*(int *)(gen_frame + 0x6c)) = 0;
          do {
            piVar7 = ((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 8) + (*(int *)(gen_frame + 0x6c)))));
            (*(int * PTR32 *)(gen_frame + 0x60)) = piVar7;
            if (piVar7[4] == (*(uint *)(gen_frame + 0x74))) {
              (*(uint *)(gen_frame + 0x64)) = piVar7[1];
              (*(undefined * PTR32 *)(gen_frame + 0x58)) = (undefined *)*piVar7;
              iVar5 = (int)(*(int * PTR32 *)&gen_args[1]) * 8;
              *(uint *)(iVar5 + piVar3[4]) = (*(uint *)(gen_frame + 0x74));
              iVar10 = piVar3[4];
              uVar4 = ((code *)*(gen_code32 *)(*(int *)piVar3[7] + 0x20))((int *)piVar3[7]);
              *(uint *)(iVar10 + iVar5 + 4) = uVar4 - *(int *)(iVar9 + 0x14);
              if ((*(uint *)(gen_frame + 0x64)) == 0) {
                ((code *)*(gen_code32 *)(*(int *)piVar3[7] + 0x10))((int *)piVar3[7],*(*(int * PTR32 *)(gen_frame + 0x60)),(*(int * PTR32 *)(gen_frame + 0x60))[5]);
              }
              else {
                ((code *)*(gen_code32 *)(piVar3[8] + 0xc))(piVar3 + 8,piVar3[7],(*(undefined * PTR32 *)(gen_frame + 0x58)),(*(uint *)(gen_frame + 0x64)),&(*(int *)(gen_frame + 0x4)));
              }
            }
            (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + 0x18;
            (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 1)));
          } while ((int)(*(int * PTR32 *)&gen_args[1]) < *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0xc));
        }
      }
      iVar10 = 0;
      if (0 < (*(int *)(gen_frame + 0x8))) {
        do {
          piVar7 = (int *)((*(int *)(gen_frame + 0x4)) + iVar10 * 8);
          *piVar7 = *piVar7 - *(int *)(iVar9 + 0x14);
          piVar7 = (int *)((*(int *)(gen_frame + 0x4)) + 4 + iVar10 * 8);
          *piVar7 = *piVar7 - *(int *)(iVar9 + 0x14);
          iVar10 = iVar10 + 1;
        } while (iVar10 < (*(int *)(gen_frame + 0x8)));
      }
      (*(int * PTR32 *)&gen_args[1]) = (int *)((*(uint *)(gen_frame + 0x14)) - 1);
      if (-1 < (int)(*(int * PTR32 *)&gen_args[1])) {
        (*(undefined * PTR32 *)(gen_frame + 0x58)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x20);
        iVar10 = (int)(*(int * PTR32 *)&gen_args[1]) * 0x10;
        do {
          uVar4 = F_00dbd970((*(undefined * PTR32 *)(gen_frame + 0x58)),*(undefined4 *)((*(int *)(gen_frame + 0x10)) + 4 + iVar10),0);
          (*(uint *)(gen_frame + 0x64)) = uVar4;
          if (uVar4 != 0) {
            (*(int * PTR32 *)(gen_frame + 0x60)) = (int *)((*(int *)(gen_frame + 0x10)) + iVar10);
            if ((*(uint *)(gen_frame + 0x2c)) == ((*(uint *)(gen_frame + 0x30)) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x28)),8);
            }
            piVar7 = (int *)((*(int *)(gen_frame + 0x28)) + (*(uint *)(gen_frame + 0x2c)) * 8);
            (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x2c)) + 1;
            *piVar7 = *(*(int * PTR32 *)(gen_frame + 0x60)) - *(int *)(iVar9 + 0x14);
            piVar7[1] = (*(uint *)(gen_frame + 0x64));
            uVar4 = (*(uint *)(gen_frame + 0x14)) - 1;
            (*(uint *)(gen_frame + 0x14)) = uVar4;
            if ((int *)uVar4 != (*(int * PTR32 *)&gen_args[1])) {
              puVar6 = (undefined4 *)((*(int *)(gen_frame + 0x10)) + iVar10);
              iVar5 = (uVar4 * 0x10 + (*(int *)(gen_frame + 0x10))) - (int)puVar6;
              (*(int * PTR32 *)(gen_frame + 0x60)) = (int *)&REFG(undefined, 0x4);
              do {
                *puVar6 = *(undefined4 *)(iVar5 + (int)puVar6);
                puVar6 = puVar6 + 1;
                piVar7 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x60)) + -1);
                (*(int * PTR32 *)(gen_frame + 0x60)) = piVar7;
              } while (piVar7 != (int *)0x0);
            }
          }
          (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) - 1)));
          iVar10 = iVar10 + -0x10;
        } while (-1 < (int)(*(int * PTR32 *)&gen_args[1]));
      }
      F_00da68d0(((undefined * PTR32 *)(gen_frame + 0x48)),piVar3[7],(uint)*(byte *)(piVar3 + 0x13));
      uVar4 = ((code *)*(gen_code32 *)(*(int *)piVar3[7] + 0x20))((int *)piVar3[7]);
      *(uint *)(iVar9 + 0x18) = uVar4 - *(int *)(iVar9 + 0x14);
      F_00da6970(((undefined * PTR32 *)(gen_frame + 0x48)),(*(int *)(gen_frame + 0x4)),4,(*(int *)(gen_frame + 0x8)) * 2);
      F_00df8f30(0x10,piVar3[7]);
      uVar4 = ((code *)*(gen_code32 *)(*(int *)piVar3[7] + 0x20))((int *)piVar3[7]);
      *(uint *)(iVar9 + 0x1c) = uVar4 - *(int *)(iVar9 + 0x14);
      ((code *)*(gen_code32 *)(*(int *)piVar3[7] + 0x1c))((int *)piVar3[7],(*(uint *)(gen_frame + 0x14)) * 0xc,1);
      F_00df99d0((undefined *)((*(int *)(gen_frame + 0x70)) + 0xc + piVar3[0x10]),&(*(int *)(gen_frame + 0x10)));
      F_00df8f30(0x10,piVar3[7]);
      uVar4 = ((code *)*(gen_code32 *)(*(int *)piVar3[7] + 0x20))((int *)piVar3[7]);
      *(uint *)(iVar9 + 0x20) = uVar4 - *(int *)(iVar9 + 0x14);
      ((code *)*(gen_code32 *)(*(int *)piVar3[7] + 0x1c))((int *)piVar3[7],(*(int *)(gen_frame + 0x20)) * 0xc,1);
      F_00df9a50((undefined *)((*(int *)(gen_frame + 0x70)) + 0x18 + piVar3[0x10]),&(*(undefined4 *)(gen_frame + 0x1c)));
      F_00df8f30(0x10,piVar3[7]);
      uVar4 = ((code *)*(gen_code32 *)(*(int *)piVar3[7] + 0x20))((int *)piVar3[7]);
      *(uint *)(iVar9 + 0x24) = uVar4 - *(int *)(iVar9 + 0x14);
      iVar10 = 0;
      if (-1 < *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x34)) {
        piVar7 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x2c);
        do {
          if (*piVar7 != -1) break;
          iVar10 = iVar10 + 1;
          piVar7 = piVar7 + 2;
        } while (iVar10 <= *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x34));
      }
      (*(int *)(gen_frame + 0x6c)) = iVar10;
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((uint)(*(int * PTR32 *)&gen_args[1]) & 0xffffff)));
      pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x78));
      if (iVar10 <= *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x34)) {
        do {
          uVar4 = F_00dbd970((undefined *)((int)pvVar8 + 0x14),
                               *((undefined4 *)GEN_TOP((*(int *)((int)pvVar8 + 0x2c) + (*(int *)(gen_frame + 0x6c)) * 8))),
                               0xffffffff);
          if ((-1 < (int)uVar4) &&
             (*((uint *)GEN_TOP((*(int *)((int)pvVar8 + 8) + 0x10 + uVar4 * 0x18))) == (*(uint *)(gen_frame + 0x74)))) {
            uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x78)) + 0x2c) + 4 + (*(int *)(gen_frame + 0x6c)) * 8)));
            uVar2 = *(undefined4 *)(piVar3[4] + 4 + uVar4 * 8);
            (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(CONCAT13(1,GEN_PIECE(&(*(int * PTR32 *)&gen_args[1]), 0, 3))));
            F_00da6c50(((undefined * PTR32 *)(gen_frame + 0x48)),uVar2);
            uVar4 = F_00da0e60(uVar1);
            F_00da6ae0(((undefined * PTR32 *)(gen_frame + 0x48)),uVar1,uVar4 + 1);
            F_00df8f30(4,piVar3[7]);
            pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x78));
          }
          iVar10 = *(int *)((int)pvVar8 + 0x34);
          iVar5 = (*(int *)(gen_frame + 0x6c)) + 1;
          if (iVar5 <= iVar10) {
            piVar7 = ((int *)GEN_TOP((*(int *)((int)pvVar8 + 0x2c) + iVar5 * 8)));
            do {
              if (*piVar7 != -1) break;
              iVar5 = iVar5 + 1;
              piVar7 = piVar7 + 2;
            } while (iVar5 <= iVar10);
          }
          (*(int *)(gen_frame + 0x6c)) = iVar5;
        } while (iVar5 <= iVar10);
        if ((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[1]) + 3)))) != '\0') {
          F_00da6c50(((undefined * PTR32 *)(gen_frame + 0x48)),0xffffffff);
          F_00df8f30(0x10,piVar3[7]);
        }
      }
      uVar4 = ((code *)*(gen_code32 *)(*(int *)piVar3[7] + 0x20))((int *)piVar3[7]);
      iVar10 = *(int *)(iVar9 + 0x14);
      (*(int * PTR32 *)&gen_args[1]) = (int *)0x0;
      *(uint *)(iVar9 + 0x28) = uVar4 - iVar10;
      if (0 < (int)(*(uint *)(gen_frame + 0x2c))) {
        do {
          iVar10 = (*(int *)(gen_frame + 0x28)) + (int)(*(int * PTR32 *)&gen_args[1]) * 8;
          F_00da6c50(((undefined * PTR32 *)(gen_frame + 0x48)),*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x28)) + (int)(*(int * PTR32 *)&gen_args[1]) * 8))));
          uVar4 = F_00da0e60(*(undefined4 *)(iVar10 + 4));
          F_00da6ae0(((undefined * PTR32 *)(gen_frame + 0x48)),*(undefined4 *)(iVar10 + 4),uVar4 + 1);
          F_00df8f30(4,piVar3[7]);
          (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 1)));
        } while ((int)(*(int * PTR32 *)&gen_args[1]) < (int)(*(uint *)(gen_frame + 0x2c)));
      }
      if ((*(uint *)(gen_frame + 0x2c)) != 0) {
        F_00da6c50(((undefined * PTR32 *)(gen_frame + 0x48)),0xffffffff);
        F_00df9ad0((undefined *)((*(int *)(gen_frame + 0x70)) + 0x24 + piVar3[0x10]),&(*(int *)(gen_frame + 0x28)));
        F_00df8f30(0x10,piVar3[7]);
      }
      uVar4 = ((code *)*(gen_code32 *)(*(int *)piVar3[7] + 0x20))((int *)piVar3[7]);
      *(uint *)(iVar9 + 0x2c) = uVar4 - *(int *)(iVar9 + 0x14);
      F_00da6900(((undefined * PTR32 *)(gen_frame + 0x48)));
      F_00e1d4f0(&(*(int *)(gen_frame + 0x4)));
      (*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) + 0x30;
      (*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + 0x34;
      uVar4 = (*(uint *)(gen_frame + 0x74)) + 1;
      (*(uint *)(gen_frame + 0x74)) = uVar4;
    } while ((int)uVar4 < piVar3[2]);
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
  uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x20))(piVar2);
  (*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x28)) = &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x5c));
  (*(uint *)(gen_frame + 0x68)) = uVar4;
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
uint F_00df99d0(unsigned int gen_a0, unsigned int gen_a1)
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
  return (uint)param_1;
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
uint F_00df9a50(unsigned int gen_a0, unsigned int gen_a1)
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
  return (uint)param_1;
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
uint F_00df9ad0(unsigned int gen_a0, unsigned int gen_a1)
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
  return (uint)param_1;
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
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      *puVar1 = *param_3;
      puVar1[1] = param_3[1];
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
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
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 4;
  puVar1 = param_1;
  do {
    *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
    puVar1 = puVar1 + 1;
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
  int iVar2;
  uint uVar3;
  
  uVar1 = param_2;
  iVar2 = param_1;
  uVar3 = param_2;
  if (0 < (int)param_2) {
    do {
      if (iVar2 != 0) {
        uVar1 = F_00da1030(iVar2,0,4);
      }
      iVar2 = iVar2 + 0x30;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return uVar1;
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
    if (iVar3 <= param_2) {
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

/* ref: FUN_00dfa450 */
uint F_00dfa450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfa450u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00dfa490 */
uint F_00dfa490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfa490u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,0x34);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dfa4d0 */
uint F_00dfa4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfa4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e1d4f0(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0x34);
  }
  return (uint)this;
}

/* ref: FUN_00dfa510 */
uint F_00dfa510(unsigned int gen_a0)
{
  GEN_ENTER(0xdfa510u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkSubStreamWriter::vf0 */
uint F_00dfa540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfa540u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dfa580 */
uint F_00dfa580(unsigned int gen_a0)
{
  GEN_ENTER(0xdfa580u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkBinaryPackfileWriter::vf0 */
uint F_00dfa5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfa5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00df8900(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dfa610 */
unsigned int F_00dfa610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfa610u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dfa640 */
uint F_00dfa640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfa640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dfa680 */
uint F_00dfa680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfa680u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0x10);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00dfa6c0 */
uint F_00dfa6c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdfa6c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00dfa6f0 */
uint F_00dfa6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfa6f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,0x30);
  }
  uVar2 = param_2 - *(int *)((int)this + 4);
  iVar3 = *(int *)((int)this + 4) * 0x30 + *(int *)this;
  uVar1 = uVar2;
  if (0 < (int)uVar2) {
    do {
      if (iVar3 != 0) {
        uVar2 = F_00da1030(iVar3,0,4);
      }
      iVar3 = iVar3 + 0x30;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00dfa770 */
uint F_00dfa770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfa770u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00dfa7b0 */
unsigned int F_00dfa7b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdfa7b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00dfa810 */
uint F_00dfa810(unsigned int gen_a0)
{
  GEN_ENTER(0xdfa810u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfa850 */
uint F_00dfa850(unsigned int gen_a0)
{
  GEN_ENTER(0xdfa850u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfa890 */
uint F_00dfa890(unsigned int gen_a0)
{
  GEN_ENTER(0xdfa890u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfa8d0 */
uint F_00dfa8d0(unsigned int gen_a0)
{
  GEN_ENTER(0xdfa8d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfa910 */
uint F_00dfa910(unsigned int gen_a0)
{
  GEN_ENTER(0xdfa910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfa950 */
uint F_00dfa950(unsigned int gen_a0)
{
  GEN_ENTER(0xdfa950u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfa990 */
unsigned int F_00dfa990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfa990u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 + -1;
  if (-1 < iVar1) {
    this = (undefined *)(iVar1 * 0x34 + param_1);
    do {
      F_00e1d4f0(this);
      this = (undefined *)((int)this + -0x34);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: FUN_00dfa9c0 */
uint F_00dfa9c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdfa9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(iVar2 * 0x34 + uVar1);
    do {
      uVar1 = F_00e1d4f0(this_00);
      this_00 = (undefined *)((int)this_00 + -0x34);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00dfa9f0 */
uint F_00dfa9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfa9f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dfaa40 */
uint F_00dfaa40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfaa40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0x30);
  }
  uVar2 = param_1 - *(int *)((int)this + 4);
  iVar3 = *(int *)((int)this + 4) * 0x30 + *(int *)this;
  uVar1 = uVar2;
  if (0 < (int)uVar2) {
    do {
      if (iVar3 != 0) {
        uVar2 = F_00da1030(iVar3,0,4);
      }
      iVar3 = iVar3 + 0x30;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00dfaac0 */
uint F_00dfaac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfaac0u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,8);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00dfab00 */
unsigned int F_00dfab00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfab00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,4);
  }
  iVar3 = *(int *)((int)this + 4);
  iVar1 = *(int *)this;
  iVar4 = param_1 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *(undefined4 *)(iVar1 + iVar3 * 4 + iVar5 * 4) = *param_2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *(int *)((int)this + 4) = param_1;
  return 0;
}

/* ref: FUN_00dfab60 */
uint F_00dfab60(unsigned int gen_a0)
{
  GEN_ENTER(0xdfab60u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfaba0 */
uint F_00dfaba0(unsigned int gen_a0)
{
  GEN_ENTER(0xdfaba0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfabe0 */
uint F_00dfabe0(unsigned int gen_a0)
{
  GEN_ENTER(0xdfabe0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfac20 */
uint F_00dfac20(unsigned int gen_a0)
{
  GEN_ENTER(0xdfac20u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfac60 */
uint F_00dfac60(unsigned int gen_a0)
{
  GEN_ENTER(0xdfac60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfaca0 */
uint F_00dfaca0(unsigned int gen_a0)
{
  GEN_ENTER(0xdfaca0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dface0 */
uint F_00dface0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdface0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(int *)this = (int)this + 0xc;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0x80000020;
  return (uint)this;
}

/* ref: FUN_00dfad00 */
uint F_00dfad00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfad00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(iVar2 * 0x34 + *(int *)this);
    do {
      F_00e1d4f0(this_00);
      this_00 = (undefined *)((int)this_00 + -0x34);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x34);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfad60 */
uint F_00dfad60(unsigned int gen_a0)
{
  GEN_ENTER(0xdfad60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x80000000;
  *(undefined4 *)((int)this + 0x30) = 0;
  return (uint)this;
}

/* ref: FUN_00dfad90 */
uint F_00dfad90(unsigned int gen_a0)
{
  GEN_ENTER(0xdfad90u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfadd0 */
uint F_00dfadd0(unsigned int gen_a0)
{
  GEN_ENTER(0xdfadd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(iVar2 * 0x34 + *(int *)this);
    do {
      F_00e1d4f0(this_00);
      this_00 = (undefined *)((int)this_00 + -0x34);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x34);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfae30 */
unsigned int F_00dfae30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfae30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = (undefined4 *)(param_1 + 0x14);
    iVar2 = param_2;
    do {
      if (puVar1 != (undefined4 *)0x14) {
        puVar1[-5] = 0;
        puVar1[-4] = 0;
        puVar1[-3] = 0x80000000;
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0x80000000;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0x80000000;
        puVar1[7] = 0;
      }
      puVar1 = puVar1 + 0xd;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00dfae90 */
unsigned int F_00dfae90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfae90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * this_00;
  
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,0x34);
  }
  iVar3 = (*(int *)((int)this + 4) - param_2) + -1;
  if (-1 < iVar3) {
    this_00 = (undefined *)(iVar3 * 0x34 + param_2 * 0x34 + *(int *)this);
    do {
      F_00e1d4f0(this_00);
      this_00 = (undefined *)((int)this_00 + -0x34);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  iVar3 = param_2 - *(int *)((int)this + 4);
  if (0 < iVar3) {
    puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) * 0x34 + *(int *)this + 0x14)));
    do {
      if (puVar2 != (undefined4 *)0x14) {
        puVar2[-5] = 0;
        puVar2[-4] = 0;
        puVar2[-3] = 0x80000000;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0x80000000;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0x80000000;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0x80000000;
        puVar2[7] = 0;
      }
      puVar2 = puVar2 + 0xd;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(int *)((int)this + 4) = param_2;
  return 0;
}

/* ref: FUN_00dfaf50 */
uint F_00dfaf50(unsigned int gen_a0)
{
  GEN_ENTER(0xdfaf50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(iVar2 * 0x34 + *(int *)this);
    do {
      F_00e1d4f0(this_00);
      this_00 = (undefined *)((int)this_00 + -0x34);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x34);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfafb0 */
uint F_00dfafb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfafb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  *(uint *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  F_00e1da60((undefined *)((int)this + 0x20),param_1 + 4,0,2);
  param_1 = param_1 & 0xffffff00;
  F_00da3de0((undefined *)((int)this + 0x30),param_1);
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0x80000000;
  *(bool *)((int)this + 0x4c) = (*(undefined1 *)((char *)&REFG(undefined4, 0x135491c) + 1)) != *(char *)(uVar1 + 5);
  return (uint)this;
}

/* ref: FUN_00dfb020 */
uint F_00dfb020(unsigned int gen_a0)
{
  GEN_ENTER(0xdfb020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x44) + -1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((iVar2 * 0x34 + *(int *)((int)this + 0x40))));
    do {
      F_00e1d4f0(this_00);
      this_00 = (undefined *)((int)this_00 + -0x34);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 0x48);
  *(undefined4 *)((int)this + 0x44) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x40),(uVar1 & 0x3fffffff) * 0x34);
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x48) = 0x80000000;
  F_00da3e20((undefined *)((int)this + 0x30));
  F_00e1d740((undefined *)((int)this + 0x20));
  uVar1 = *(uint *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x14) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x10),uVar1 * 8);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0xc);
  *(undefined4 *)((int)this + 8) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 4),
                       (uVar1 & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x80000000;
  return uVar1;
}

/* ref: FUN_00dfb0f0 */
unsigned int F_00dfb0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfb0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * this_00;
  
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0x34);
  }
  iVar3 = (*(int *)((int)this + 4) - param_1) + -1;
  if (-1 < iVar3) {
    this_00 = (undefined *)(iVar3 * 0x34 + param_1 * 0x34 + *(int *)this);
    do {
      F_00e1d4f0(this_00);
      this_00 = (undefined *)((int)this_00 + -0x34);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  iVar3 = param_1 - *(int *)((int)this + 4);
  if (0 < iVar3) {
    puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) * 0x34 + *(int *)this + 0x14)));
    do {
      if (puVar2 != (undefined4 *)0x14) {
        puVar2[-5] = 0;
        puVar2[-4] = 0;
        puVar2[-3] = 0x80000000;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0x80000000;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0x80000000;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0x80000000;
        puVar2[7] = 0;
      }
      puVar2 = puVar2 + 0xd;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(int *)((int)this + 4) = param_1;
  return 0;
}

/* ref: FUN_00dfb1c0 */
uint F_00dfb1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfb1c0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  uint in_edi = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char * pcVar1;
  uint uVar2;
  
  pcVar1 = (char *)F_00d929e0(in_edi,&(*(undefined1 *)(gen_frame + 0xb)));
  if (*pcVar1 == '\0') {
    return in_edi;
  }
  if (in_esi != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*in_esi + 0x14))(in_esi,param_3);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00dfb200 */
uint F_00dfb200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfb200u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da0ce0(param_1,param_2,&REFG(undefined, 0x113bdcc),"hk_2011.3.1-r1");
  return uVar1;
}

/* ref: hkPackfileWriter::vf4 */
uint F_00dfb220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdfb220u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)this;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x14))))(REFG(int * PTR32, 0x15e3738),param_3);
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0xc))(this,param_1,param_2,uVar2);
  return uVar2;
}

/* ref: hkPackfileWriter::vf5 */
uint F_00dfb250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfb250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd970(this + 0x14,param_1,0xffffffff);
  if (-1 < (int)uVar1) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 8) + 0x10 + uVar1 * 0x18))) = 0xfffffffe;
  }
  F_00dbd8b0(this + 0x14,&REFG(undefined * PTR32, 0x13516ac),param_1,0xfffffffe);
  uVar1 = F_00dbd8b0(this + 0x20,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: hkPackfileWriter::vf6 */
uint F_00dfb2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfb2b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this + 0x2c,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dfb2d0 */
uint F_00dfb2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdfb2d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  uint uVar2;
  
  F_00e05630(((undefined1 *)(gen_frame + 0x28)));
  uVar1 = 0;
  if ((char)param_4 == '\0') {
    uVar1 = 2;
  }
  F_00e1da60(((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x28)),0,uVar1);
  F_0105aa30(((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)));
  F_00e1d840(((undefined1 *)(gen_frame + 0x8)),((undefined * PTR32 * PTR32 *)(gen_frame + 0x18)),param_1,param_2,param_3);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x18))[0] = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  uVar2 = F_00e1d740(((undefined1 *)(gen_frame + 0x8)));
  return uVar2;
}

/* ref: FUN_00dfb330 */
uint F_00dfb330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfb330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  code * pcVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  undefined * pvVar4;
  char * pcVar5;
  
  pcVar5 = "hkClass";
  uVar2 = F_00d92610(param_2);
  uVar2 = F_00da0d20(uVar2,pcVar5);
  if (uVar2 != 0) {
    pcVar5 = "hkClassEnum";
    uVar2 = F_00d92610(param_2);
    uVar2 = F_00da0d20(uVar2,pcVar5);
    if (uVar2 == 0) {
      uVar2 = F_00da4190((undefined *)((int)this + 0x48),*param_1,0);
      if (uVar2 != 0) {
        uVar3 = F_00dbd970((undefined *)((int)this + 0x14),uVar2,0xffffffff);
        F_00dbd8b0((undefined *)((int)this + 0x14),&REFG(undefined * PTR32, 0x13516ac),param_1,uVar3);
        F_00dbd8b0((undefined *)((int)this + 0x58),&REFG(undefined * PTR32, 0x13516ac),param_1,uVar2);
        return 0;
      }
      F_00da3a20((undefined *)((int)this + 0x48),*param_1,param_1);
    }
    return 1;
  }
  uVar2 = F_00d92610(param_1);
  this_00 = (undefined *)F_00da4190((undefined *)((int)this + 0x38),uVar2,0);
  if (this_00 != (undefined *)0x0) {
    uVar2 = F_00d93010(this_00,0);
    uVar3 = F_00d93010(param_1,0);
    if (uVar3 != uVar2) {
      F_00da0a80(((undefined1 *)(gen_frame + 0x200)),((undefined1 *)(gen_frame + 0x0)),0x200);
      pcVar5 = 
      ". Perhaps you have called setContents on data which has not been updated to the current version."
      ;
      uVar2 = F_00d92610(param_1);
      pvVar4 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x200)),"Conflicting metadata found for class ");
      pvVar4 = (undefined *)F_00d9fe80(pvVar4,uVar2);
      F_00d9fe80(pvVar4,pcVar5);
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                        (REFG(int * PTR32, 0x15dff78),3,0x2518721c,((undefined1 *)(gen_frame + 0x0)),"Packfile\\hkPackfileWriter.cpp",0xb8);
      if (uVar2 != 0) {
        pcVar1 = ((code *)GEN_TOP(swi(3)));
        uVar2 = (*pcVar1)();
        return uVar2;
      }
      F_00d9fda0(((undefined1 *)(gen_frame + 0x200)));
    }
    uVar2 = F_00dbd970((undefined *)((int)this + 0x14),this_00,0xffffffff);
    F_00dbd8b0((undefined *)((int)this + 0x14),&REFG(undefined * PTR32, 0x13516ac),param_1,uVar2);
    F_00dbd8b0((undefined *)((int)this + 0x58),&REFG(undefined * PTR32, 0x13516ac),param_1,this_00);
    return 0;
  }
  uVar2 = F_00d92610(param_1);
  F_00da3a20((undefined *)((int)this + 0x38),uVar2,param_1);
  return 1;
}

/* ref: FUN_00dfb4e0 */
uint F_00dfb4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfb4e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(uint *)&gen_args[1]);
  uVar2 = F_00da3eb0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))),(*(uint *)&gen_args[1]),&(*(uint *)&gen_args[1]));
  if (uVar2 == 0) {
    return (*(uint *)&gen_args[1]);
  }
  uVar2 = F_00da1210(uVar1);
  uVar1 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x68)));
  F_00da3a20(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))),uVar2,uVar1);
  if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x68))) == (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))),4);
  }
  *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x68))) * 4))) = uVar2;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x68))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x68))) + 1;
  return uVar1;
}

/* ref: FUN_00dfb560 */
uint F_00dfb560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdfb560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint in_ecx;
  
  uVar1 = F_00dbd970((undefined *)((int)this + 0x9c),param_1,0xffffffff);
  if (uVar1 == 0xffffffff) {
    uVar1 = F_00d92610(param_2);
    uVar1 = F_00da4190((undefined *)((int)this + 0xa8),uVar1,0xffffffff);
    in_ecx = param_2;
    if (uVar1 == 0xffffffff) {
      while (in_ecx = F_00d92620(in_ecx), in_ecx != 0) {
        uVar1 = F_00d92610(in_ecx);
        uVar1 = F_00da4190((undefined *)((int)this + 0xa8),uVar1,0xffffffff);
        if (uVar1 != 0xffffffff) {
          return uVar1;
        }
      }
      uVar1 = F_00dfb4e0(this,param_3);
    }
  }
  return uVar1;
}

/* ref: hkPackfileWriter::vf8 */
uint F_00dfb5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfb5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dfb4e0(this,param_1);
  return uVar1;
}

/* ref: hkPackfileWriter::vf9 */
uint F_00dfb5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfb5f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dfb4e0(this,param_2);
  uVar1 = F_00dbd8b0(this + 0x9c,&REFG(undefined * PTR32, 0x13516ac),param_1,uVar1);
  return uVar1;
}

/* ref: hkPackfileWriter::vf10 */
uint F_00dfb620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfb620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00dfb4e0(this,param_2);
  uVar2 = F_00d92610(param_1);
  uVar1 = F_00da3a20(this + 0xa8,uVar2,uVar1);
  return uVar1;
}

/* ref: FUN_00dfb650 */
byte F_00dfb650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xdfb650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined8 * puVar1;
  uint uVar2;
  
  uVar2 = F_00dfb560(this,param_3,param_4,param_5);
  if (*(uint *)((int)this + 0xc) == (*(uint *)((int)this + 0x10) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 8),0x18);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 8) + *(int *)((int)this + 0xc) * 0x18)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = CONCAT44(param_2,param_1);
    puVar1[1] = CONCAT44(param_4,param_3);
    puVar1[2] = CONCAT44(0xffffffff,uVar2);
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  *(int *)((int)this + 0x98) = *(int *)((int)this + 0x98) + (uint)(param_2 == &REFG(undefined, 0x15da330));
  *(int *)((int)this + 0x94) = *(int *)((int)this + 0x94) + (uint)(param_2 != &REFG(undefined, 0x15da330));
  return param_2 == &REFG(undefined, 0x15da330);
}

/* ref: FUN_00dfb710 */
uint F_00dfb710(unsigned int gen_a0)
{
  GEN_ENTER(0xdfb710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  LPVOID pvVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x114cee8));
  if (0 < *(int *)((int)this + 0x68)) {
    do {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 100) + iVar4 * 4)));
      pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      F_00d924b0(*(undefined4 *)((int)pvVar2 + 0x2c),uVar1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)this + 0x68));
  }
  F_00dbdb20((undefined *)((int)this + 0xc4),&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  iVar4 = *(int *)((int)this + 0xc0);
  *(undefined4 *)((int)this + 0xbc) = 0;
  if (-1 < iVar4) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xb8),iVar4 * 8);
  }
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0x80000000;
  F_00da3e20((undefined *)((int)this + 0xa8));
  F_00dbdb20((undefined *)((int)this + 0x9c),&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  uVar3 = *(uint *)((int)this + 0x88);
  *(undefined4 *)((int)this + 0x84) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x80),uVar3 * 8);
  }
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x88) = 0x80000000;
  F_00da3e20((undefined *)((int)this + 0x70));
  uVar3 = *(uint *)((int)this + 0x6c);
  *(undefined4 *)((int)this + 0x68) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 100),uVar3 * 4);
  }
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0x80000000;
  F_00dbdb20((undefined *)((int)this + 0x58),&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  F_00da3e20((undefined *)((int)this + 0x48));
  F_00da3e20((undefined *)((int)this + 0x38));
  F_00dbdb20((undefined *)((int)this + 0x2c),&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  F_00dbdb20((undefined *)((int)this + 0x20),&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  F_00dbdb20((undefined *)((int)this + 0x14),&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  uVar3 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar3) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),
                       (uVar3 & 0x3fffffff) * 0x18);
  }
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar3;
}

/* ref: FUN_00dfb8f0 */
uint F_00dfb8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xdfb8f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x260];
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined * pvVar5;
  int iVar6;
  int iVar7;
  char * pcVar8;
  char * pcVar9;
  char * pcVar10;
  
  iVar4 = (*(int *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x258)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
  piVar2 = (int *)F_00dbd930(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),(*(int *)&gen_args[1]));
  iVar6 = (*(uint *)&gen_args[2]);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) < (int)piVar2) {
    uVar3 = F_00dfb1c0((*(undefined4 *)&gen_args[3]),(*(uint *)&gen_args[2]),iVar4);
    iVar4 = (*(int *)&gen_args[1]);
    if (uVar3 == 0) {
      F_00da0a80(((undefined1 *)(gen_frame + 0x240)),((undefined1 *)(gen_frame + 0xc)),0x200);
      pcVar10 = 
      "Saved file will not generate warnings (or asserts) on load but NULL pointers may cause runtime crashes."
      ;
      pcVar9 = "All saved pointers to (*(undefined * PTR32 *)&gen_args[0]) object will be set to NULL.\n";
      pcVar8 = ". Derived class will not be serialized unless added to class registry.\n";
      uVar3 = F_00d92610(iVar6);
      pvVar5 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x240)),"Found an un-registered class derived from ");
      pvVar5 = (undefined *)F_00d9fe80(pvVar5,uVar3);
      pvVar5 = (undefined *)F_00d9fe80(pvVar5,pcVar8);
      pvVar5 = (undefined *)F_00d9fe80(pvVar5,pcVar9);
      F_00d9fe80(pvVar5,pcVar10);
      ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                (REFG(int * PTR32, 0x15dff78),1,0xabbaabba,((undefined1 *)(gen_frame + 0xc)),"Packfile\\hkPackfileWriter.cpp",0x127);
      F_00d9fda0(((undefined1 *)(gen_frame + 0x240)));
      iVar4 = (*(int *)&gen_args[1]);
      F_00dbd8b0((*(undefined * PTR32 *)(gen_frame + 0x258)),&REFG(undefined * PTR32, 0x13516ac),(*(int *)&gen_args[1]),0xffffffff);
      if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84))) == (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))),8);
      }
      piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84))) * 8)));
      *piVar2 = iVar4;
      piVar2[1] = iVar6;
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84))) + 1;
    }
    else {
      (*(uint *)(gen_frame + 0x254)) = uVar3;
      if ((*(int * PTR32 *)&gen_args[4]) != (int *)0x0) {
        ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[4]) + 0xc))))((*(int * PTR32 *)&gen_args[4]),&(*(int *)&gen_args[1]),&(*(uint *)(gen_frame + 0x254)));
      }
      if ((*(int *)&gen_args[1]) == 0) {
        uVar3 = F_00dbd8b0((*(undefined * PTR32 *)(gen_frame + 0x258)),&REFG(undefined * PTR32, 0x13516ac),iVar4,0xffffffff);
        return uVar3;
      }
      uVar3 = F_00dfb330((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]),(*(uint *)(gen_frame + 0x254)));
      pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x258));
      piVar2 = (int *)0x0;
      if ((uVar3 != 0) &&
         ((iVar4 == (*(int *)&gen_args[1]) ||
          (piVar2 = (int *)F_00dbd930((*(undefined * PTR32 *)(gen_frame + 0x258)),(*(int *)&gen_args[1])), *(int *)((int)pvVar5 + 8) < (int)piVar2)))
         ) {
        F_00dbd8b0(pvVar5,&REFG(undefined * PTR32, 0x13516ac),iVar4,*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))));
        if ((*(int *)&gen_args[1]) != iVar4) {
          F_00dbd8b0(pvVar5,&REFG(undefined * PTR32, 0x13516ac),(*(int *)&gen_args[1]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))));
          F_00dbd8b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))),&REFG(undefined * PTR32, 0x13516ac),(*(int *)&gen_args[1]),iVar4);
        }
        F_00dfb650((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]),(*(uint *)(gen_frame + 0x254)),iVar4,(*(uint *)&gen_args[2]),(*(undefined4 *)&gen_args[5]));
        F_00dfad60(((undefined1 *)(gen_frame + 0x20c)));
        F_00dfb2d0((*(int *)&gen_args[1]),(*(uint *)(gen_frame + 0x254)),((undefined1 *)(gen_frame + 0x20c)),(uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xdd))));
        (*(int *)(gen_frame + 0x250)) = 0;
        if (0 < (*(int *)(gen_frame + 0x21c))) {
          (*(uint *)&gen_args[2]) = 0;
          iVar4 = (*(int *)(gen_frame + 0x218));
          do {
            iVar6 = *(int *)((*(uint *)&gen_args[2]) + 8 + iVar4);
            iVar1 = *(int *)((*(uint *)&gen_args[2]) + 4 + iVar4);
            (*(int *)(gen_frame + 0x24c)) = iVar6;
            iVar7 = (*(uint *)&gen_args[2]);
            if ((iVar6 != 0) && (iVar1 != 0)) {
              if ((*(int *)((*(uint *)&gen_args[2]) + 0xc + iVar4) != 0) &&
                 (uVar3 = F_00dbd930(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c))),iVar1),
                 *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa4))) < (int)uVar3)) {
                uVar3 = F_00dfb4e0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[5]));
                uVar3 = F_00dbd970(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c))),(*(int *)&gen_args[1]),uVar3);
                F_00dbd8b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c))),&REFG(undefined * PTR32, 0x13516ac),iVar1,uVar3);
              }
              iVar7 = (*(uint *)&gen_args[2]);
              F_00dfb8f0((*(undefined * PTR32 *)&gen_args[0]),iVar1,(*(int *)(gen_frame + 0x24c)),(*(undefined4 *)&gen_args[3]),(*(int * PTR32 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]));
              iVar4 = (*(int *)(gen_frame + 0x218));
              if (((*(int *)&gen_args[1]) != iVar1) &&
                 ((*(uint *)&gen_args[2]) = F_00dbd970((*(undefined * PTR32 *)(gen_frame + 0x258)),iVar1,0xffffffff), iVar4 = (*(int *)(gen_frame + 0x218)),
                 (*(uint *)&gen_args[2]) != 0xffffffff)) {
                F_00dfc750(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb8))),(*(int *)&gen_args[1]),&(*(uint *)&gen_args[2]));
                iVar4 = (*(int *)(gen_frame + 0x218));
              }
            }
            iVar6 = (*(int *)(gen_frame + 0x250)) + 1;
            (*(uint *)&gen_args[2]) = iVar7 + 0x10;
            (*(int *)(gen_frame + 0x250)) = iVar6;
          } while (iVar6 < (*(int *)(gen_frame + 0x21c)));
        }
        F_00dfb8f0((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)(gen_frame + 0x254)),(uint)&REFG(undefined, 0x15da330),(*(undefined4 *)&gen_args[3]),(*(int * PTR32 *)&gen_args[4]),REFG(undefined * PTR32, 0x13548cc));
        uVar3 = F_00e1d4f0(((undefined1 *)(gen_frame + 0x20c)));
        return uVar3;
      }
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_00dfbc00 */
uint F_00dfbc00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfbc00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  uint uVar1;
  int local_8;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x114cee8));
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  uVar1 = (uint)((int)(uintptr_t)this) >> 8;
  local_8 = uVar1 << 8;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  F_00da3de0((undefined *)((int)this + 0x38),local_8);
  local_8 = uVar1 << 8;
  F_00da3de0((undefined *)((int)this + 0x48),local_8);
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0xffffffff;
  local_8 = uVar1 << 8;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0x80000000;
  F_00da3de0((undefined *)((int)this + 0x70),local_8);
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0x80000000;
  local_8 = uVar1 << 8;
  *(undefined4 *)((int)this + 0x8c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x90) = 0xffffffff;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0xffffffff;
  F_00da3de0((undefined *)((int)this + 0xa8),local_8);
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0x80000000;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0xffffffff;
  *(undefined4 *)((int)this + 0xd0) = 0xffffffff;
  *(undefined8 *)((int)this + 0xd4) = *param_1;
  *(undefined8 *)((int)this + 0xdc) = param_1[1];
  F_00dbd8b0((undefined *)((int)this + 0x14),&REFG(undefined * PTR32, 0x13516ac),&REFG(undefined, 0x15da300),0xffffffff);
  F_00dbd8b0((undefined *)((int)this + 0x14),&REFG(undefined * PTR32, 0x13516ac),&REFG(undefined, 0x15da2a0),0xffffffff);
  F_00dbd8b0((undefined *)((int)this + 0x14),&REFG(undefined * PTR32, 0x13516ac),&REFG(undefined, 0x15da330),0xffffffff);
  return (uint)this;
}

/* ref: hkPackfileWriter::vf3 */
uint F_00dfbd80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdfbd80u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int * piVar1;
  char * pcVar2;
  uint uVar3;
  uint uVar4;
  
  piVar1 = (*(int * PTR32 *)&gen_args[3]);
  if ((*(int * PTR32 *)&gen_args[3]) == (int *)0x0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x14))))(REFG(int * PTR32, 0x15e3738))));
  }
  uVar3 = (*(uint *)&gen_args[2]);
  pcVar2 = (char *)F_00d929e0((*(uint *)&gen_args[2]),(int)&(*(uint *)&gen_args[2]) + 3);
  if (*pcVar2 != '\0') {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1,(*(undefined4 *)&gen_args[1]));
  }
  F_00dfb8f0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),uVar3,(*(int * PTR32 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),REFG(undefined * PTR32, 0x13548c8));
  uVar4 = F_00dbd970((*(undefined * PTR32 *)&gen_args[0]) + 0x14,(*(undefined4 *)&gen_args[1]),0xffffffff);
  *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x8c))) = uVar4;
  uVar3 = F_00dbd970((*(undefined * PTR32 *)&gen_args[0]) + 0x14,uVar3,0xffffffff);
  *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x90))) = uVar3;
  return uVar3;
}

/* ref: FUN_00dfbe10 */
uint F_00dfbe10(unsigned int gen_a0)
{
  GEN_ENTER(0xdfbe10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this,local_8);
  return (uint)this;
}

/* ref: FUN_00dfbe30 */
uint F_00dfbe30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfbe30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da3a20(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dfbe40 */
uint F_00dfbe40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfbe40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da4190(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dfbe50 */
uint F_00dfbe50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfbe50u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00da3eb0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[1]));
  if (uVar1 == 0) {
    *(*(undefined4 * PTR32 *)&gen_args[2]) = (*(undefined4 *)&gen_args[1]);
    return 0;
  }
  return 1;
}

/* ref: FUN_00dfbe80 */
uint F_00dfbe80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfbe80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd970(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dfbe90 */
uint F_00dfbe90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfbe90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da4190(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dfbea0 */
uint F_00dfbea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfbea0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00dfbf60 */
unsigned int F_00dfbf60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfbf60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      *puVar1 = *param_3;
      puVar1[1] = param_3[1];
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00dfbf90 */
uint F_00dfbf90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfbf90u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00dfbfa0 */
uint F_00dfbfa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfbfa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0x18);
  return uVar1;
}

/* ref: FUN_00dfbfc0 */
uint F_00dfbfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfbfc0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00dfbfd0 */
uint F_00dfbfd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfbfd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00dfc010 */
uint F_00dfc010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfc010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00dfc120 */
uint F_00dfc120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfc120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dfc140 */
uint F_00dfc140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfc140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dfc180 */
uint F_00dfc180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfc180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dfc1c0 */
uint F_00dfc1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfc1c0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00dfc200 */
unsigned int F_00dfc200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfc200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
        puVar1[2] = param_3[2];
      }
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00dfc270 */
uint F_00dfc270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfc270u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dfc2d0 */
uint F_00dfc2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfc2d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd930(this,param_2);
  *(bool *)param_1 = (int)uVar1 <= *(int *)((int)this + 8);
  return param_1;
}

/* ref: FUN_00dfc330 */
uint F_00dfc330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfc330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dfc390 */
uint F_00dfc390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfc390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd930(this,param_2);
  *(bool *)param_1 = (int)uVar1 <= *(int *)((int)this + 8);
  return param_1;
}

/* ref: FUN_00dfc3b0 */
uint F_00dfc3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfc3b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x18);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0x18)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dfc410 */
uint F_00dfc410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfc410u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dfc460 */
uint F_00dfc460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfc460u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dfc4a0 */
uint F_00dfc4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfc4a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dfc4e0 */
uint F_00dfc4e0(unsigned int gen_a0)
{
  GEN_ENTER(0xdfc4e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00dfc510 */
uint F_00dfc510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfc510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0x18);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0x18)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dfc570 */
uint F_00dfc570(unsigned int gen_a0)
{
  GEN_ENTER(0xdfc570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x18);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfc5c0 */
uint F_00dfc5c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdfc5c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfc600 */
uint F_00dfc600(unsigned int gen_a0)
{
  GEN_ENTER(0xdfc600u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfc640 */
uint F_00dfc640(unsigned int gen_a0)
{
  GEN_ENTER(0xdfc640u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfc680 */
uint F_00dfc680(unsigned int gen_a0)
{
  GEN_ENTER(0xdfc680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x18);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfc6d0 */
uint F_00dfc6d0(unsigned int gen_a0)
{
  GEN_ENTER(0xdfc6d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfc710 */
uint F_00dfc710(unsigned int gen_a0)
{
  GEN_ENTER(0xdfc710u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dfc750 */
uint F_00dfc750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfc750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00dbd970((undefined *)((int)this + 0xc),param_1,0xffffffff);
  uVar3 = F_00dfc640(this);
  puVar1 = (undefined4 *)(*(int *)this + uVar3 * 8);
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  uVar2 = F_00dbd8b0((undefined *)((int)this + 0xc),&REFG(undefined * PTR32, 0x13516ac),param_1,uVar3);
  return uVar2;
}

/* ref: FUN_00dfc7a0 */
uint F_00dfc7a0(unsigned int gen_a0)
{
  GEN_ENTER(0xdfc7a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00dbdb20((undefined *)((int)this + 0xc),&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
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

/* ref: FUN_00dfc800 */
uint F_00dfc800(unsigned int gen_a0)
{
  GEN_ENTER(0xdfc800u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkPackfileWriter::vf0 */
uint F_00dfc850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfc850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00dfb710(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dfc890 */
uint F_00dfc890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfc890u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *in_ecx == 6;
  return param_2;
}

/* ref: FUN_00dfc8b0 */
uint F_00dfc8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfc8b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *in_ecx == 7;
  return param_2;
}

/* ref: FUN_00dfc8d0 */
uint F_00dfc8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfc8d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *in_ecx == 4;
  return param_2;
}

/* ref: FUN_00dfc8f0 */
uint F_00dfc8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfc8f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *in_ecx == 5;
  return param_2;
}

/* ref: FUN_00dfc920 */
uint F_00dfc920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfc920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if ((*(int *)this == *param_1) && (*(int *)((int)this + 4) == param_1[1])) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00dfc950 */
uint F_00dfc950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfc950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x10))))(*(int * PTR32 *)this);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00dfc990 */
uint F_00dfc990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xdfc990u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x18))))
                    (*(int * PTR32 *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00dfc9a0 */
uint F_00dfc9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xdfc9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x1c))))
                    (*(int * PTR32 *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00dfc9b0 */
uint F_00dfc9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xdfc9b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x20))))
                    (*(int * PTR32 *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00dfc9c0 */
uint F_00dfc9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfc9c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x24))))(*(int * PTR32 *)this,param_1,param_2);
  return param_1;
}

/* ref: FUN_00dfc9e0 */
uint F_00dfc9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfc9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x38))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 4),param_1)
  ;
  return uVar1;
}

/* ref: FUN_00dfca10 */
uint F_00dfca10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfca10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  param_1[1] = param_2;
  return (uint)param_1;
}

/* ref: FUN_00dfca60 */
uint F_00dfca60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfca60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 100))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 4));
  *param_1 = uVar1;
  if (uVar1 != 0) {
    *(short *)(uVar1 + 6) = *(short *)(uVar1 + 6) + 1;
    *(int *)(uVar1 + 8) = *(int *)(uVar1 + 8) + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00dfca90 */
uint F_00dfca90(unsigned int gen_a0)
{
  GEN_ENTER(0xdfca90u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)(*in_ecx)) {
  case 1: ;
    return 0x1126468;
  case 2: ;
    return 0x114c8bc;
  case 3: ;
    return 0x114c8b4;
  case 4: ;
    return 0x112673c;
  case 5: ;
    return 0x11393bc;
  case 6: ;
    return 0x114c8a8;
  case 7: ;
    return 0x114c8b0;
  case 9: ;
    if (*(int *)in_ecx[1] == 3) {
      uVar1 = F_00e19c70(in_ecx);
      switch((unsigned int)(uintptr_t)(uVar1)) {
      case 4: ;
        return 0x114d040;
      case 8: ;
        return 0x114d038;
      case 0xc: ;
        return 0x114d030;
      case 0x10: ;
        return 0x114d028;
      }
    }
  }
  return 0;
}

/* ref: FUN_00dfcb50 */
uint F_00dfcb50(unsigned int gen_a0)
{
  GEN_ENTER(0xdfcb50u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  switch((unsigned int)(uintptr_t)(*in_eax)) {
  case 1: ;
    return 0x20;
  case 2: ;
    return 0x10;
  case 3: ;
  case 4: ;
    return 8;
  default: ;
    return 1;
  case 6: ;
    return 0xffffffff;
  }
}

/* ref: FUN_00dfcbb0 */
uint F_00dfcbb0(unsigned int gen_a0)
{
  GEN_ENTER(0xdfcbb0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  bool bVar7;
  float10 extraout_ST0;
  longlong lVar8;
  
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_1 + 4))((int *)*param_1)));
  iVar6 = *piVar2;
  if (iVar6 == 8) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_1 + 100))((int *)*param_1,param_1[1])));
    if (piVar2 != (int *)0x0) {
      *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
      piVar2[2] = piVar2[2] + 1;
    }
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
    piVar1 = piVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*piVar2)(piVar2,1);
    }
    return uVar3;
  }
  if (iVar6 != 9) {
    switch((unsigned int)(uintptr_t)(iVar6)) {
    case 2: ;
    case 4: ;
      lVar8 = ((gen_lcode *)*(gen_code32 *)(*(int *)*param_1 + 0x54))((int *)*param_1,param_1[1]);
      if (lVar8 != 0) {
        return 1;
      }
      break;
    case 3: ;
      extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)*param_1 + 0x3c))((int *)*param_1,param_1[1]);
      bVar7 = GEN_ISNAN(extraout_ST0) || GEN_ISNAN((float10)0);
      if (bVar7 == (bVar7 || extraout_ST0 == (float10)0)) {
        return 1;
      }
      break;
    case 5: ;
      uVar3 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x34))((int *)*param_1,param_1[1]);
      return (uint)(uVar3 != 0);
    case 6: ;
    case 7: ;
      puVar5 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_1 + 0x5c))((int *)*param_1,param_1[1])));
      if (puVar5 != (undefined4 *)0x0) {
        *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + 1;
        puVar5[2] = puVar5[2] + 1;
      }
      if (puVar5 != (undefined4 *)0x0) {
        *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + -1;
        piVar2 = puVar5 + 2;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
        }
      }
      return (uint)(puVar5 != (undefined4 *)0x0);
    }
    return 0;
  }
  if ((*(int *)piVar2[1] == 3) &&
     ((((iVar6 = piVar2[2], iVar6 == 4 || (iVar6 == 8)) || (iVar6 == 0xc)) || (iVar6 == 0x10)))) {
    return 1;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_1 + 100))((int *)*param_1,param_1[1])));
  if (piVar2 != (int *)0x0) {
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
  iVar6 = 0;
  if (0 < (int)uVar3) {
    do {
      (*(int * PTR32 *)(gen_frame + 0x4)) = piVar2;
      (*(int *)(gen_frame + 0x8)) = iVar6;
      uVar4 = F_00dfcbb0(&(*(int * PTR32 *)(gen_frame + 0x4)));
      if (uVar4 != 0) {
        *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
        piVar1 = piVar2 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          ((code *)*(gen_code32 *)*piVar2)(piVar2,1);
        }
        return 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)uVar3);
  }
  *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
  piVar1 = piVar2 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    ((code *)*(gen_code32 *)*piVar2)(piVar2,1);
  }
  return 0;
}

/* ref: FUN_00dfcdb0 */
uint F_00dfcdb0(unsigned int gen_a0)
{
  GEN_ENTER(0xdfcdb0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  bool bVar7;
  float10 extraout_ST0;
  longlong lVar8;
  
  piVar2 = (int *)F_00e1cd10(in_eax);
  iVar6 = *piVar2;
  if (iVar6 == 8) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*in_eax + 0x28))((int *)*in_eax,in_eax[1])));
    if (piVar2 != (int *)0x0) {
      *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
      piVar2[2] = piVar2[2] + 1;
    }
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
    piVar1 = piVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*piVar2)(piVar2,1);
    }
    return uVar3;
  }
  if (iVar6 != 9) {
    switch((unsigned int)(uintptr_t)(iVar6)) {
    case 2: ;
    case 4: ;
      lVar8 = ((gen_lcode *)*(gen_code32 *)(*(int *)*in_eax + 0x30))((int *)*in_eax,in_eax[1]);
      if (lVar8 != 0) {
        return 1;
      }
      break;
    case 3: ;
      extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)*in_eax + 0x3c))((int *)*in_eax,in_eax[1]);
      bVar7 = GEN_ISNAN(extraout_ST0) || GEN_ISNAN((float10)0);
      if (bVar7 == (bVar7 || extraout_ST0 == (float10)0)) {
        return 1;
      }
      break;
    case 5: ;
      uVar3 = ((code *)*(gen_code32 *)(*(int *)*in_eax + 0x2c))((int *)*in_eax,in_eax[1]);
      return (uint)(uVar3 != 0);
    case 6: ;
    case 7: ;
      puVar5 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*in_eax + 0x34))((int *)*in_eax,in_eax[1])));
      if (puVar5 != (undefined4 *)0x0) {
        *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + 1;
        puVar5[2] = puVar5[2] + 1;
      }
      if (puVar5 != (undefined4 *)0x0) {
        *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + -1;
        piVar2 = puVar5 + 2;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
        }
      }
      return (uint)(puVar5 != (undefined4 *)0x0);
    }
    return 0;
  }
  if ((*(int *)piVar2[1] == 3) &&
     ((((iVar6 = piVar2[2], iVar6 == 4 || (iVar6 == 8)) || (iVar6 == 0xc)) || (iVar6 == 0x10)))) {
    return 1;
  }
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*in_eax + 0x28))((int *)*in_eax,in_eax[1])));
  if (piVar2 != (int *)0x0) {
    *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
    piVar2[2] = piVar2[2] + 1;
  }
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2);
  iVar6 = 0;
  if (0 < (int)uVar3) {
    (*(int * PTR32 *)(gen_frame + 0x4)) = piVar2;
    do {
      (*(int *)(gen_frame + 0x8)) = iVar6;
      uVar4 = F_00dfcbb0(&(*(int * PTR32 *)(gen_frame + 0x4)));
      if (uVar4 != 0) {
        *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
        piVar1 = piVar2 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          ((code *)*(gen_code32 *)*piVar2)(piVar2,1);
        }
        return 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)uVar3);
  }
  *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + -1;
  piVar1 = piVar2 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    ((code *)*(gen_code32 *)*piVar2)(piVar2,1);
  }
  return 0;
}

/* ref: FUN_00dfcfa0 */
uint F_00dfcfa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdfcfa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char cVar1;
  char * pcVar2;
  
  F_00e003a0(((byte *)(gen_frame + 0x0)),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]));
  F_00dff330(((undefined1 *)(gen_frame + 0x14)),(*(undefined4 *)&gen_args[1]));
  F_00dff070(((byte *)(gen_frame + 0x0)),(*(undefined4 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]));
  ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x14))))((*(int * PTR32 *)&gen_args[2]));
  pcVar2 = ((char *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0xc))))((*(int * PTR32 *)&gen_args[2]),(int)&(*(undefined4 *)&gen_args[4]) + 3)));
  cVar1 = *pcVar2;
  F_00dffe80(((undefined1 *)(gen_frame + 0x14)));
  ((byte *)(gen_frame + 0x0))[4] = 0;
  ((byte *)(gen_frame + 0x0))[5] = 0;
  ((byte *)(gen_frame + 0x0))[6] = 0;
  ((byte *)(gen_frame + 0x0))[7] = 0;
  if (-1 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) & 0x3fffffff);
  }
  return (uint)(cVar1 == '\0');
}

/* ref: FUN_00dfd030 */
uint F_00dfd030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfd030u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(*(uint * PTR32 *)&gen_args[0]) >> 4) * -0x61c8864f & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00dfd050 */
uint F_00dfd050(unsigned int gen_a0)
{
  GEN_ENTER(0xdfd050u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0xffffffff;
  return (uint)param_1;
}

/* ref: FUN_00dfd060 */
byte F_00dfd060(unsigned int gen_a0)
{
  GEN_ENTER(0xdfd060u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  return *param_1 != -1;
}

/* ref: FUN_00dfd070 */
uint F_00dfd070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfd070u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00dfd0c0 */
uint F_00dfd0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfd0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dfd0d0 */
uint F_00dfd0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfd0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dfd100 */
uint F_00dfd100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfd100u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dfd110 */
uint F_00dfd110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfd110u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dfd1a0 */
uint F_00dfd1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfd1a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = (*(uint *)(in_ecx + 4) & 0x80000000) == 0;
  return param_2;
}

/* ref: FUN_00dfd1c0 */
uint F_00dfd1c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdfd1c0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  return (uint)(((*(uint *)&gen_args[0]) - 1 & (*(uint *)&gen_args[0])) == 0);
}

/* ref: FUN_00dfd210 */
uint F_00dfd210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfd210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)this + 4 + param_2 * 0xc);
  *param_1 = *(undefined4 *)(*(int *)this + param_2 * 0xc);
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00dfd230 */
uint F_00dfd230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfd230u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 8 + param_2 * 0xc);
}

/* ref: FUN_00dfd250 */
uint F_00dfd250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfd250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)(*(int *)this + 8 + param_1 * 0xc) = param_2;
  return param_1 * 3;
}

/* ref: FUN_00dfd270 */
unsigned int F_00dfd270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfd270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *(int *)((int)this + 8)) {
    piVar2 = (int *)(*(int *)this + iVar1 * 0xc);
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (iVar1 <= *(int *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_00dfd2a0 */
uint F_00dfd2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfd2a0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00dfd2c0 */
uint F_00dfd2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdfd2c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_00dfdf20(this,param_1,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar3 = (param_2 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  iVar4 = uVar3 * 0xc;
  uVar2 = 1;
  if (*(int *)(iVar1 + iVar4) != -1) {
    do {
      if ((*(uint *)(iVar1 + iVar4) == param_2) && (*(int *)(iVar1 + 4 + iVar4) == param_3)) {
        uVar2 = 0;
        goto LAB_00dfd336;
      }
      uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
      iVar4 = uVar3 * 0xc;
    } while (*(int *)(iVar4 + iVar1) != -1);
    uVar2 = 1;
  }
LAB_00dfd336: ;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + uVar2;
  iVar4 = uVar3 * 0xc;
  *(uint *)(iVar1 + iVar4) = param_2;
  *(int *)(iVar1 + 4 + iVar4) = param_3;
  *(undefined4 *)(iVar4 + 8 + *(int *)this) = param_4;
  return uVar2;
}

/* ref: FUN_00dfd370 */
uint F_00dfd370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfd370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar1 = *(uint *)((int)this + 8);
  if (0 < (int)uVar1) {
    iVar2 = *(int *)this;
    uVar4 = (param_1 >> 4) * -0x61c8864f & uVar1;
    iVar3 = *(int *)(iVar2 + uVar4 * 0xc);
    while (iVar3 != -1) {
      puVar5 = (uint *)(iVar2 + uVar4 * 0xc);
      if ((*puVar5 == param_1) && (puVar5[1] == param_2)) {
        return uVar4;
      }
      uVar4 = uVar4 + 1 & uVar1;
      iVar3 = *(int *)(iVar2 + uVar4 * 0xc);
    }
  }
  return uVar1 + 1;
}

/* ref: FUN_00dfd3d0 */
uint F_00dfd3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdfd3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar1 = *(uint *)((int)this + 8);
  if (0 < (int)uVar1) {
    iVar2 = *(int *)this;
    uVar4 = (param_1 >> 4) * -0x61c8864f & uVar1;
    iVar3 = *(int *)(iVar2 + uVar4 * 0xc);
    while (iVar3 != -1) {
      puVar5 = (uint *)(iVar2 + uVar4 * 0xc);
      if ((*puVar5 == param_1) && (puVar5[1] == param_2)) {
        return *(uint *)(iVar2 + 8 + uVar4 * 0xc);
      }
      uVar4 = uVar4 + 1 & uVar1;
      iVar3 = *(int *)(iVar2 + uVar4 * 0xc);
    }
  }
  return param_3;
}

/* ref: FUN_00dfd430 */
uint F_00dfd430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdfd430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = F_00dfd370(this,param_1,param_2);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    *param_3 = *(undefined4 *)(*(int *)this + 8 + uVar1 * 0xc);
    return 0;
  }
  return 1;
}

/* ref: FUN_00dfd470 */
unsigned int F_00dfd470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfd470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  *(undefined4 *)(*(int *)this + param_1 * 0xc) = 0xffffffff;
  uVar7 = *(uint *)((int)this + 8);
  uVar5 = uVar7 + param_1 & uVar7;
  iVar1 = *(int *)(*(int *)this + uVar5 * 0xc);
  while (iVar1 != -1) {
    uVar5 = uVar5 + uVar7 & uVar7;
    iVar1 = *(int *)(*(int *)this + uVar5 * 0xc);
  }
  uVar6 = uVar5 + 1 & uVar7;
  uVar5 = param_1 + 1 & uVar7;
  iVar2 = uVar5 * 0xc;
  iVar1 = *(int *)(*(int *)this + iVar2);
  uVar4 = param_1;
  while (iVar1 != -1) {
    iVar1 = *(int *)this;
    uVar7 = (*(uint *)(iVar1 + iVar2) >> 4) * -0x61c8864f & uVar7;
    param_1 = uVar4;
    if ((((uVar5 < uVar6) || (uVar7 <= uVar4)) &&
        ((uVar4 <= uVar5 || ((uVar7 <= uVar4 && (uVar5 < uVar7)))))) &&
       ((uVar7 <= uVar4 || (uVar6 <= uVar7)))) {
      iVar3 = uVar4 * 0xc;
      *(undefined4 *)(iVar3 + iVar1) = *(undefined4 *)(iVar1 + iVar2);
      *(undefined4 *)(iVar3 + 4 + iVar1) = *(undefined4 *)(iVar1 + 4 + iVar2);
      *(undefined4 *)(iVar3 + 8 + *(int *)this) = *(undefined4 *)(*(int *)this + 8 + iVar2);
      *(undefined4 *)(iVar2 + *(int *)this) = 0xffffffff;
      param_1 = uVar5;
    }
    uVar7 = *(uint *)((int)this + 8);
    uVar5 = uVar5 + 1 & uVar7;
    iVar2 = uVar5 * 0xc;
    uVar4 = param_1;
    iVar1 = *(int *)(iVar2 + *(int *)this);
  }
  return 0;
}

/* ref: FUN_00dfd560 */
uint F_00dfd560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfd560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  int local_8;
  
  uVar1 = *(uint *)((int)this + 8);
  if (-1 < (int)uVar1) {
    puVar2 = *(uint * PTR32 *)this;
    local_8 = uVar1 + 1;
    puVar5 = puVar2;
    do {
      uVar3 = *puVar5;
      if (uVar3 != 0xffffffff) {
        uVar4 = (uVar3 >> 4) * -0x61c8864f;
        while( true ) {
          uVar4 = uVar4 & uVar1;
          if ((puVar2[uVar4 * 3] == uVar3) && (puVar2[uVar4 * 3 + 1] == puVar5[1])) break;
          uVar4 = uVar4 + 1;
        }
      }
      puVar5 = puVar5 + 3;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00dfd5c0 */
uint F_00dfd5c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdfd5c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 8) + 1;
  if (0 < iVar1) {
    in_EAX = 0;
    do {
      *(undefined4 *)(in_EAX + *(int *)this) = 0xffffffff;
      in_EAX = in_EAX + 0xc;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0x80000000;
  return in_EAX;
}

/* ref: FUN_00dfd5f0 */
uint F_00dfd5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfd5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dfd5c0(this);
  if ((*(uint *)((int)this + 4) & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))
                      (param_1,*(undefined4 *)this,(*(int *)((int)this + 8) * 3 + 3) * 4);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_00dfd640 */
uint F_00dfd640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdfd640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  *(undefined4 *)this = param_1;
  *(uint *)((int)this + 4) = param_2 | 0x80000000;
  *(uint *)((int)this + 8) = param_3 - 1U;
  return param_3 - 1U;
}

/* ref: FUN_00dfd660 */
uint F_00dfd660(unsigned int gen_a0)
{
  GEN_ENTER(0xdfd660u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_1 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 2);
  }
  return iVar1 * 0xc;
}

/* ref: FUN_00dfd680 */
unsigned int F_00dfd680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfd680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 / 0xc;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0x80000000;
  *(uint *)((int)this + 8) = uVar2 - 1;
  if (uVar2 != 0) {
    iVar1 = 0;
    do {
      *(undefined4 *)(iVar1 + *(int *)this) = 0xffffffff;
      iVar1 = iVar1 + 0xc;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00dfd6d0 */
uint F_00dfd6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfd6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = *param_1;
  uVar2 = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = param_1[1];
  uVar3 = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 8) = param_1[2];
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00dfd730 */
uint F_00dfd730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfd730u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00dfd780 */
uint F_00dfd780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfd780u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00dfd7d0 */
uint F_00dfd7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfd7d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00dfd800 */
unsigned int F_00dfd800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfd800u, gen_a0, gen_a1, 0u, 0u);
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
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00dfd850 */
unsigned int F_00dfd850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfd850u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = (undefined4 *)(param_1 + 8);
    iVar2 = param_2;
    do {
      if (puVar1 != (undefined4 *)0x8) {
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00dfd880 */
uint F_00dfd880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfd880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00dfd8a0 */
uint F_00dfd8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfd8a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00dfd8b0 */
uint F_00dfd8b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfd8b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00dfd8d0 */
uint F_00dfd8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfd8d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00dfd900 */
uint F_00dfd900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfd900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00dfd930 */
uint F_00dfd930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfd930u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  if ((*in_ecx == 7) && (*(int *)in_ecx[1] == 6)) {
    *param_2 = 1;
    return (uint)param_2;
  }
  *param_2 = 0;
  return (uint)param_2;
}

/* ref: FUN_00dfd960 */
unsigned int F_00dfd960(unsigned int gen_a0)
{
  GEN_ENTER(0xdfd960u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00dfd990 */
uint F_00dfd990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfd990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  
  piVar4 = *(int * PTR32 *)this;
  ((int *)(gen_frame + 0x14))[0] = 0;
  ((int *)(gen_frame + 0x14))[1] = 0;
  if (piVar4 == (int *)0x0) {
    piVar4 = ((int *)(gen_frame + 0x14));
  }
  else {
    piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4,((undefined1 *)(gen_frame + 0xc)))));
  }
  piVar1 = (int *)*param_1;
  iVar2 = piVar4[1];
  iVar3 = *piVar4;
  ((int *)(gen_frame + 0x14))[0] = 0;
  ((int *)(gen_frame + 0x14))[1] = 0;
  if (piVar1 == (int *)0x0) {
    piVar4 = ((int *)(gen_frame + 0x14));
  }
  else {
    piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,((undefined1 *)(gen_frame + 0xc)))));
  }
  if ((iVar3 == *piVar4) && (iVar2 == piVar4[1])) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00dfda00 */
byte F_00dfda00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfda00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  
  piVar4 = *(int * PTR32 *)this;
  ((int *)(gen_frame + 0x14))[0] = 0;
  ((int *)(gen_frame + 0x14))[1] = 0;
  if (piVar4 == (int *)0x0) {
    piVar4 = ((int *)(gen_frame + 0x14));
  }
  else {
    piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4,((undefined1 *)(gen_frame + 0xc)))));
  }
  piVar1 = (int *)*param_1;
  iVar2 = piVar4[1];
  iVar3 = *piVar4;
  ((int *)(gen_frame + 0x14))[0] = 0;
  ((int *)(gen_frame + 0x14))[1] = 0;
  if (piVar1 == (int *)0x0) {
    piVar4 = ((int *)(gen_frame + 0x14));
  }
  else {
    piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,((undefined1 *)(gen_frame + 0x4)))));
  }
  if ((iVar3 == *piVar4) && (iVar2 == piVar4[1])) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00dfda90 */
uint F_00dfda90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfda90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  piVar1 = (int *)*param_1;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  if (piVar1 == (int *)0x0) {
    puVar2 = &(*(undefined4 *)(gen_frame + 0x14));
  }
  else {
    puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,((undefined1 *)(gen_frame + 0xc)))));
  }
  uVar3 = F_00dfd3d0(this,*puVar2,puVar2[1],0xffffffff);
  return uVar3;
}

/* ref: FUN_00dfdae0 */
uint F_00dfdae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfdae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x14))((int *)*param_1);
  (*(uint *)(gen_frame + 0x24)) = uVar2;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x18))((int *)*param_1,uVar2);
  do {
    if (uVar2 == 0) {
      return 0;
    }
    ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x24))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x24)));
    puVar3 = (undefined4 *)F_00e1cd10(&(*(int * PTR32 *)(gen_frame + 0xc)));
    piVar4 = (int *)F_00e19d40(puVar3);
    if (*piVar4 == 6) {
      switch((unsigned int)(uintptr_t)(*puVar3)) {
      case 6: ;
        piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x34))((*(int * PTR32 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)))));
        (*(int * PTR32 *)(gen_frame + 0x20)) = piVar4;
        if (piVar4 != (int *)0x0) {
          *(short *)((int)piVar4 + 6) = *(short *)((int)piVar4 + 6) + 1;
          piVar4[2] = piVar4[2] + 1;
        }
        F_00dfdae0(this,&(*(int * PTR32 *)(gen_frame + 0x20)));
        piVar4 = (*(int * PTR32 *)(gen_frame + 0x20));
        break;
      case 7: ;
        piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x34))((*(int * PTR32 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)))));
        (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar4;
        if (piVar4 != (int *)0x0) {
          *(short *)((int)piVar4 + 6) = *(short *)((int)piVar4 + 6) + 1;
          piVar4[2] = piVar4[2] + 1;
        }
        F_00dff330(this,&(*(int * PTR32 *)(gen_frame + 0x1c)));
        piVar4 = (*(int * PTR32 *)(gen_frame + 0x1c));
        break;
      case 8: ;
      case 9: ;
        iVar5 = *(int *)puVar3[1];
        if ((iVar5 == 7) && (*((int *)GEN_TOP(((int *)puVar3[1])[1])) == 6)) {
          piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x28))((*(int * PTR32 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)))));
          if (piVar4 != (int *)0x0) {
            *(short *)((int)piVar4 + 6) = *(short *)((int)piVar4 + 6) + 1;
            piVar4[2] = piVar4[2] + 1;
          }
          uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0x14))(piVar4);
          iVar5 = 0;
          if (0 < (int)uVar2) {
            do {
              puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,iVar5)));
              (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar3;
              if (puVar3 != (undefined4 *)0x0) {
                *(short *)((int)puVar3 + 6) = *(short *)((int)puVar3 + 6) + 1;
                puVar3[2] = puVar3[2] + 1;
              }
              F_00dff330((*(undefined * PTR32 *)(gen_frame + 0x28)),&(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
              if ((*(undefined4 * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0) {
                *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 6) + -1;
                piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 2;
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x18)))((*(undefined4 * PTR32 *)(gen_frame + 0x18)),1);
                }
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < (int)uVar2);
          }
        }
        else {
          if (iVar5 != 6) goto switchD_00dfdb4d_default;
          piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x28))((*(int * PTR32 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)))));
          if (piVar4 != (int *)0x0) {
            *(short *)((int)piVar4 + 6) = *(short *)((int)piVar4 + 6) + 1;
            piVar4[2] = piVar4[2] + 1;
          }
          uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0x14))(piVar4);
          iVar5 = 0;
          if (0 < (int)uVar2) {
            do {
              puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,iVar5)));
              (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = puVar3;
              if (puVar3 != (undefined4 *)0x0) {
                *(short *)((int)puVar3 + 6) = *(short *)((int)puVar3 + 6) + 1;
                puVar3[2] = puVar3[2] + 1;
              }
              F_00dfdae0((*(undefined * PTR32 *)(gen_frame + 0x28)),&(*(undefined4 * PTR32 *)(gen_frame + 0x14)));
              if ((*(undefined4 * PTR32 *)(gen_frame + 0x14)) != (undefined4 *)0x0) {
                *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x14)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x14)) + 6) + -1;
                piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x14)) + 2;
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x14)))((*(undefined4 * PTR32 *)(gen_frame + 0x14)),1);
                }
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < (int)uVar2);
          }
        }
        *(short *)((int)piVar4 + 6) = *(short *)((int)piVar4 + 6) + -1;
        piVar1 = piVar4 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 != 0) goto switchD_00dfdb4d_default;
        puVar3 = (undefined4 *)*piVar4;
        goto LAB_00dfdd09;
      default: ;
        goto switchD_00dfdb4d_default;
      }
      if (piVar4 != (int *)0x0) {
        *(short *)((int)piVar4 + 6) = *(short *)((int)piVar4 + 6) + -1;
        piVar1 = piVar4 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          puVar3 = (undefined4 *)*piVar4;
LAB_00dfdd09: ;
          (*(code *)*puVar3)(piVar4,1);
        }
      }
    }
switchD_00dfdb4d_default: ;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x1c))((int *)*param_1,(*(uint *)(gen_frame + 0x24)));
    (*(uint *)(gen_frame + 0x24)) = uVar2;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x18))((int *)*param_1,uVar2);
    this = (*(undefined * PTR32 *)(gen_frame + 0x28));
  } while( true );
}

/* ref: FUN_00dfdd50 */
uint F_00dfdd50(unsigned int gen_a0)
{
  GEN_ENTER(0xdfdd50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00dfdd70 */
unsigned int F_00dfdd70(unsigned int gen_a0)
{
  GEN_ENTER(0xdfdd70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00dfddc0 */
uint F_00dfddc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdfddc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00dfd2c0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00dfdde0 */
uint F_00dfdde0(unsigned int gen_a0)
{
  GEN_ENTER(0xdfdde0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00dfde00 */
unsigned int F_00dfde00(unsigned int gen_a0)
{
  GEN_ENTER(0xdfde00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00dfde30 */
uint F_00dfde30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdfde30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00dfd370(this,param_2,param_3);
  *(bool *)param_1 = (int)uVar1 <= *(int *)((int)this + 8);
  return param_1;
}

/* ref: FUN_00dfdec0 */
uint F_00dfdec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfdec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00dfd680(this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00dfdee0 */
uint F_00dfdee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfdee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dfd370(this,param_1,param_2);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    F_00dfd470(this,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_00dfdf20 */
uint F_00dfdf20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfdf20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int * piVar8;
  
  iVar7 = param_2;
  if (param_2 < 9) {
    iVar7 = 8;
  }
  uVar1 = *(uint *)((int)this + 4);
  piVar2 = *(int * PTR32 *)this;
  iVar6 = *(int *)((int)this + 8) + 1;
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,iVar7 * 0xc);
  if (uVar3 != 0) {
    *(uint *)this = uVar3;
    if (0 < iVar7) {
      iVar4 = 0;
      iVar5 = iVar7;
      do {
        *(undefined4 *)(iVar4 + *(int *)this) = 0xffffffff;
        iVar4 = iVar4 + 0xc;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *(undefined4 *)((int)this + 4) = 0;
    *(int *)((int)this + 8) = iVar7 + -1;
    piVar8 = piVar2;
    param_2 = iVar6;
    if (0 < iVar6) {
      do {
        if (*piVar8 != -1) {
          F_00dfd2c0(this,param_1,*piVar8,piVar8[1],piVar8[2]);
        }
        iVar7 = param_2 + -1;
        piVar8 = piVar8 + 3;
        param_2 = iVar7;
      } while (iVar7 != 0);
    }
    if ((uVar1 & 0x80000000) == 0) {
      ((code *)*(gen_code32 *)(*param_1 + 8))(param_1,piVar2,iVar6 * 0xc);
    }
    return 0;
  }
  return 1;
}

/* ref: FUN_00dfdff0 */
uint F_00dfdff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfdff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  iVar2 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar2 + 1;
  return *(int *)this + iVar2 * 4;
}

/* ref: FUN_00dfe040 */
unsigned int F_00dfe040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfe040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00dfe070 */
unsigned int F_00dfe070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfe070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *param_3;
      }
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00dfe0a0 */
uint F_00dfe0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfe0a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dfe0e0 */
uint F_00dfe0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfe0e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00dfe130 */
uint F_00dfe130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfe130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,4);
  }
  return (uint)this;
}

/* ref: FUN_00dfe160 */
uint F_00dfe160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfe160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,1);
  }
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4))));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dfe1a0 */
uint F_00dfe1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfe1a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00dfdec0(this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00dfe1c0 */
uint F_00dfe1c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdfe1c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  iVar2 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar2 + 1;
  return *(int *)this + iVar2 * 4;
}

/* ref: FUN_00dfe200 */
uint F_00dfe200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xdfe200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  uint uVar1;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    uVar1 = F_00dfdf20(this,param_1,*(int *)((int)this + 8) * 2 + 2);
    *param_5 = uVar1;
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    *param_5 = 0;
  }
  uVar1 = F_00dfd2c0(this,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00dfe260 */
unsigned int F_00dfe260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdfe260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_00dfdf20(this,param_1,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar2 = *(int *)this;
  uVar4 = (param_2 >> 4) * -0x61c8864f;
  while( true ) {
    uVar4 = uVar4 & *(uint *)((int)this + 8);
    piVar1 = (int *)(iVar2 + uVar4 * 0xc);
    if ((*(uint *)(iVar2 + uVar4 * 0xc) == param_2) && (piVar1[1] == param_3)) break;
    if (*piVar1 == -1) {
      iVar3 = uVar4 * 0xc;
      *(uint *)(iVar2 + iVar3) = param_2;
      *(int *)(iVar2 + 4 + iVar3) = param_3;
      *(undefined4 *)(iVar3 + 8 + *(int *)this) = param_4;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      return 0;
    }
    uVar4 = uVar4 + 1;
  }
  return 0;
}

/* ref: FUN_00dfe2e0 */
uint F_00dfe2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfe2e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = 8;
  if (8 < param_2 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_2 * 2);
  }
  uVar2 = F_00dfdf20(this,param_1,iVar1);
  return uVar2;
}

/* ref: FUN_00dfe310 */
uint F_00dfe310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfe310u, gen_a0, gen_a1, gen_a2, 0u);
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
  return (uint)puVar1;
}

/* ref: FUN_00dfe360 */
uint F_00dfe360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfe360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dfe3a0 */
unsigned int F_00dfe3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfe3a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,0x10);
  }
  iVar3 = param_2 - *(int *)((int)this + 4);
  if (0 < iVar3) {
    puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this + 8)));
    do {
      if (puVar2 != (undefined4 *)0x8) {
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(int *)((int)this + 4) = param_2;
  return 0;
}

/* ref: FUN_00dfe410 */
uint F_00dfe410(unsigned int gen_a0)
{
  GEN_ENTER(0xdfe410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dfe450 */
uint F_00dfe450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdfe450u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dfe4a0 */
uint F_00dfe4a0(unsigned int gen_a0)
{
  GEN_ENTER(0xdfe4a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 * puVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = *(int *)((int)this + 0xc) + *(int *)((int)this + 4);
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < (int)uVar7) {
    uVar3 = uVar3 * 2;
    if ((int)uVar3 <= (int)uVar7) {
      uVar3 = uVar7;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,uVar3,1);
  }
  iVar1 = *(int *)((int)this + 4);
  iVar2 = *(int *)this;
  iVar4 = uVar7 - iVar1;
  iVar6 = 0;
  if (0 < iVar4) {
    do {
      *(undefined1 *)(iVar6 + iVar2 + iVar1) = *(undefined1 *)((int)this + 0x10);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  *(uint *)((int)this + 4) = uVar7;
  if (uVar7 == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,1);
  }
  puVar5 = ((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + *(int *)this)));
  *puVar5 = 0;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  return (uint)puVar5;
}

/* ref: FUN_00dfe520 */
uint F_00dfe520(unsigned int gen_a0)
{
  GEN_ENTER(0xdfe520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  int iVar4;
  
  *((undefined1 *)GEN_TOP(((*(int *)((int)this + 4) - *(int *)((int)this + 0xc)) + *(int *)this))) = 0;
  iVar4 = *(int *)((int)this + 4) - *(int *)((int)this + 0xc);
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar4) {
    iVar3 = uVar2 * 2;
    if ((int)(uVar2 * 2) <= iVar4) {
      iVar3 = iVar4;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = iVar4;
  return uVar2;
}

/* ref: FUN_00dfe570 */
uint F_00dfe570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfe570u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  
  piVar1 = (*(int * PTR32 *)&gen_args[2]);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))),&(*(int * PTR32 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[2]));
    ((int *)(gen_frame + 0x24))[0] = 0;
    ((int *)(gen_frame + 0x24))[1] = 0;
    if ((*(int * PTR32 *)&gen_args[2]) == (int *)0x0) {
      piVar5 = ((int *)(gen_frame + 0x24));
    }
    else {
      piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 4))))((*(int * PTR32 *)&gen_args[2]),((undefined1 *)(gen_frame + 0x14)))));
    }
    iVar3 = *piVar5;
    piVar4 = (int *)*piVar1;
    (*(int *)(gen_frame + 0x20)) = piVar5[1];
    ((int *)(gen_frame + 0x24))[0] = 0;
    ((int *)(gen_frame + 0x24))[1] = 0;
    if (piVar4 == (int *)0x0) {
      piVar5 = ((int *)(gen_frame + 0x24));
    }
    else {
      piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4,((undefined1 *)(gen_frame + 0xc)))));
    }
    if ((iVar3 != *piVar5) || ((*(int *)(gen_frame + 0x20)) != piVar5[1])) {
      piVar1 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)));
      if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) == (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,4);
      }
      puVar2 = ((undefined4 *)GEN_TOP((*piVar1 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) * 4)));
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
      }
      piVar1 = ((int *)GEN_TOP((*piVar1 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) * 4)));
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) + 1;
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0) {
        *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) + 1;
        (*(int * PTR32 *)&gen_args[2])[2] = (*(int * PTR32 *)&gen_args[2])[2] + 1;
      }
      puVar2 = (undefined4 *)*piVar1;
      if (puVar2 != (undefined4 *)0x0) {
        *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
        piVar5 = puVar2 + 2;
        *piVar5 = *piVar5 + -1;
        if (*piVar5 == 0) {
          ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        }
      }
      *piVar1 = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[1]) = (int)(*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0) {
        *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) + 1;
        (*(int * PTR32 *)&gen_args[2])[2] = (*(int * PTR32 *)&gen_args[2])[2] + 1;
        if ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0) {
          *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) + -1;
          piVar1 = (*(int * PTR32 *)&gen_args[2]) + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))))((*(int * PTR32 *)&gen_args[2]),1);
          }
        }
      }
      return (uint)(*(int * PTR32 *)&gen_args[1]);
    }
    if ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0) {
      *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) + -1;
      piVar5 = (*(int * PTR32 *)&gen_args[2]) + 2;
      *piVar5 = *piVar5 + -1;
      if (*piVar5 == 0) {
        ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))))((*(int * PTR32 *)&gen_args[2]),1);
      }
    }
  }
  iVar3 = *piVar1;
  *(*(int * PTR32 *)&gen_args[1]) = iVar3;
  if (iVar3 != 0) {
    *(short *)(iVar3 + 6) = *(short *)(iVar3 + 6) + 1;
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
  }
  return (uint)(*(int * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00dfe6e0 */
uint F_00dfe6e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfe6e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  char * pcVar6;
  int iVar7;
  undefined3 extraout_var = 0;
  int iVar8;
  
  uVar1 = param_2;
  (*(uint *)(gen_frame + 0x18)) = 0;
  F_00dfe4a0(this);
  uVar3 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x14))((int *)*param_1);
  uVar4 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x18))((int *)*param_1,uVar3);
  do {
    if (uVar4 == 0) {
      *((undefined1 *)GEN_TOP(((*(int *)((int)this + 4) - *(int *)((int)this + 0xc)) + *(int *)this))) = 0;
      iVar8 = *(int *)((int)this + 4) - *(int *)((int)this + 0xc);
      uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
      if ((int)uVar3 < iVar8) {
        iVar7 = uVar3 * 2;
        if ((int)(uVar3 * 2) <= iVar8) {
          iVar7 = iVar8;
        }
        bVar2 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar7,1);
        uVar3 = CONCAT31(extraout_var,bVar2);
      }
      *(int *)((int)this + 4) = iVar8;
      return uVar3;
    }
    ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x24))((int *)*param_1,&(*(int * PTR32 *)(gen_frame + 0x8)),uVar3);
    piVar5 = (int *)F_00e1cd10(&(*(int * PTR32 *)(gen_frame + 0x8)));
    uVar4 = F_00dfcdb0(&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (uVar4 != 0) {
      iVar8 = *piVar5;
      if ((iVar8 == 8) ||
         ((iVar8 == 9 &&
          ((*(int *)piVar5[1] != 3 ||
           ((((iVar7 = piVar5[2], iVar7 != 4 && (iVar7 != 8)) && (iVar7 != 0xc)) && (iVar7 != 0x10))
           )))))) {
        param_2 = "tuple";
        if (iVar8 == 9) {
          pcVar6 = (char *)F_00e19c70(piVar5);
        }
        else {
          (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) | 1;
          param_2 = "array";
          piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)))));
          (*(int * PTR32 *)(gen_frame + 0x10)) = piVar5;
          if (piVar5 != (int *)0x0) {
            *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + 1;
            piVar5[2] = piVar5[2] + 1;
          }
          pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x14))(piVar5)));
        }
        (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar6;
        if ((((*(uint *)(gen_frame + 0x18)) & 1) != 0) && ((*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) & 0xfffffffe, (*(int * PTR32 *)(gen_frame + 0x10)) != (int *)0x0)) {
          *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x10)) + 6) = *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x10)) + 6) + -1;
          piVar5 = (*(int * PTR32 *)(gen_frame + 0x10)) + 2;
          *piVar5 = *piVar5 + -1;
          if (*piVar5 == 0) {
            ((code *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x10)))((*(int * PTR32 *)(gen_frame + 0x10)),1);
          }
        }
        uVar4 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x20))((int *)*param_1,uVar3);
        F_00da00e0(uVar1,"\n%s<%s name=\"%s\" size=\"%i\">",*(undefined4 *)this,param_2,uVar4,
                     (*(char * PTR32 *)(gen_frame + 0x14)));
        F_00dfffc0(this,&(*(int * PTR32 *)(gen_frame + 0x8)),uVar1);
        pcVar6 = param_2;
      }
      else {
        pcVar6 = (char *)F_00dfca90(piVar5);
        (*(char * PTR32 *)(gen_frame + 0x14)) = pcVar6;
        if ((*piVar5 == 5) &&
           (uVar4 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 0x2c))((*(int * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc))), uVar4 == 0)) {
          uVar4 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x20))((int *)*param_1,uVar3);
          F_00da00e0(uVar1,"\n%s<null name=\"%s\"/>",*(undefined4 *)this,uVar4);
          goto LAB_00dfe8b2;
        }
        uVar4 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x20))((int *)*param_1,uVar3);
        F_00da00e0(uVar1,"\n%s<%s name=\"%s\">",*(undefined4 *)this,(*(char * PTR32 *)(gen_frame + 0x14)),uVar4);
        F_00dfffc0(this,&(*(int * PTR32 *)(gen_frame + 0x8)),uVar1);
        pcVar6 = (*(char * PTR32 *)(gen_frame + 0x14));
      }
      F_00da00e0(uVar1,"</%s>",pcVar6);
    }
LAB_00dfe8b2: ;
    uVar3 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x1c))((int *)*param_1,uVar3);
    uVar4 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x18))((int *)*param_1,uVar3);
  } while( true );
}

/* ref: FUN_00dfe930 */
uint F_00dfe930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdfe930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  piVar3 = (int *)*param_1;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  if (piVar3 == (int *)0x0) {
    puVar1 = &(*(undefined4 *)(gen_frame + 0x14));
  }
  else {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,((undefined1 *)(gen_frame + 0xc)))));
  }
  uVar2 = F_00dfd3d0((undefined *)((int)this + 0x14),*puVar1,puVar1[1],0xffffffff);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_1 + 8))((int *)*param_1)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
  F_00da00e0(param_2,"\n%s<object id=\"#%04i\" type=\"%s\">",*(undefined4 *)this,uVar2,uVar4);
  F_00dfe6e0(this,param_1,param_2);
  uVar2 = F_00da00e0(param_2,"\n%s</object>",*(undefined4 *)this);
  return uVar2;
}

/* ref: FUN_00dfe9c0 */
uint F_00dfe9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdfe9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00dfe200(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00dfe9f0 */
unsigned int F_00dfe9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdfe9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00dfe260(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3);
  return 0;
}

