#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: hkMemoryResourceContainer::vf10 */
uint F_00e18330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  undefined * pvVar2;
  LPVOID pvVar3;
  
  pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x34))(param_1,0)));
  if (pvVar2 == (undefined *)0x0) {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 4))))
                               (*(int * PTR32 *)((int)pvVar3 + 0x2c),0x28)));
    *(undefined2 *)((int)pvVar2 + 4) = 0x28;
    pvVar2 = (undefined *)F_00e181c0(pvVar2,param_1);
    if (pvVar2 != (undefined *)0x0) {
      F_00d919e0(pvVar2);
    }
    if (*(uint *)(this + 0x20) == (*(uint *)(this + 0x24) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this + 0x1c,4);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x1c) + *(int *)(this + 0x20) * 4)));
    if (puVar1 != (undefined4 *)0x0) {
      if (pvVar2 != (undefined *)0x0) {
        F_00d919e0(pvVar2);
      }
      *puVar1 = pvVar2;
    }
    *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    *(undefined * PTR32 *)((int)pvVar2 + 0xc) = this;
    F_00d91a80(pvVar2);
  }
  return (uint)pvVar2;
}

/* ref: FUN_00e18400 */
uint F_00e18400(unsigned int gen_a0)
{
  GEN_ENTER(0xe18400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this,local_8);
  return (uint)this;
}

/* ref: FUN_00e18420 */
uint F_00e18420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe18420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da3a20(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e18430 */
uint F_00e18430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe18430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da4190(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e184a0 */
uint F_00e184a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe184a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e184f0 */
uint F_00e184f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe184f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e18540 */
uint F_00e18540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18540u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e18550 */
uint F_00e18550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18550u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e185a0 */
uint F_00e185a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe185a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00e185f0 */
uint F_00e185f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe185f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e18610 */
uint F_00e18610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00e18630 */
unsigned int F_00e18630(unsigned int gen_a0)
{
  GEN_ENTER(0xe18630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00e18660 */
uint F_00e18660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00e18680 */
unsigned int F_00e18680(unsigned int gen_a0)
{
  GEN_ENTER(0xe18680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00e186b0 */
unsigned int F_00e186b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe186b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (0 < param_2) {
    do {
      if (param_1 != 0) {
        F_00d91340(param_1);
        F_00d91340(param_1 + 4);
      }
      param_1 = param_1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}

/* ref: FUN_00e18760 */
unsigned int F_00e18760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe18760u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e187a0 */
unsigned int F_00e187a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe187a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e187d0 */
uint F_00e187d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe187d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00e187f0 */
uint F_00e187f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe187f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e18810 */
uint F_00e18810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00e18840 */
uint F_00e18840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18840u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00e18850 */
uint F_00e18850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe18850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e18870 */
uint F_00e18870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00e188a0 */
uint F_00e188a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe188a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00e188b0 */
uint F_00e188b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe188b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00e188d0 */
uint F_00e188d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe188d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: hkMemoryResourceHandle::vf3 */
uint F_00e18950(void)
{
  GEN_ENTER(0xe18950u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkMemoryResourceContainer::vf3 */
uint F_00e189b0(void)
{
  GEN_ENTER(0xe189b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00e189e0 */
unsigned int F_00e189e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe189e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: hkResourceMap::vf1 */
uint F_00e18a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x114e3e0));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,4);
  }
  return (uint)this;
}

/* ref: FUN_00e18a50 */
uint F_00e18a50(unsigned int gen_a0)
{
  GEN_ENTER(0xe18a50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00e18a80 */
uint F_00e18a80(unsigned int gen_a0)
{
  GEN_ENTER(0xe18a80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00e18b80 */
uint F_00e18b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  iVar1 = *(int *)this + *(int *)((int)this + 4) * 8;
  if (iVar1 != 0) {
    F_00d91340(iVar1);
    F_00d91340(iVar1 + 4);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00e18be0 */
uint F_00e18be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18be0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(int *)(in_ecx + 4) = *(int *)(in_ecx + 4) - param_2;
  return param_2;
}

/* ref: FUN_00e18bf0 */
uint F_00e18bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe18bf0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e18c30 */
uint F_00e18c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = param_1 + iVar1;
  return iVar1 * 0x10 + *(int *)this;
}

/* ref: FUN_00e18c50 */
uint F_00e18c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe18c50u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e18c90 */
uint F_00e18c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe18c90u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e18cf0 */
unsigned int F_00e18cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe18cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        if ((undefined *)*param_3 != (undefined *)0x0) {
          F_00d919e0((undefined *)*param_3);
        }
        *param_1 = *param_3;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}

/* ref: FUN_00e18d30 */
unsigned int F_00e18d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe18d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        if ((undefined *)*param_3 != (undefined *)0x0) {
          F_00d919e0((undefined *)*param_3);
        }
        *param_1 = *param_3;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}

/* ref: FUN_00e18d70 */
uint F_00e18d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18d70u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e18db0 */
unsigned int F_00e18db0(unsigned int gen_a0)
{
  GEN_ENTER(0xe18db0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00e18de0 */
unsigned int F_00e18de0(unsigned int gen_a0)
{
  GEN_ENTER(0xe18de0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00e18e20 */
uint F_00e18e20(unsigned int gen_a0)
{
  GEN_ENTER(0xe18e20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00e18e50 */
uint F_00e18e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18e50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e18e90 */
uint F_00e18e90(unsigned int gen_a0)
{
  GEN_ENTER(0xe18e90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00e18ec0 */
uint F_00e18ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18ec0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e18f00 */
uint F_00e18f00(unsigned int gen_a0)
{
  GEN_ENTER(0xe18f00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00e18f30 */
uint F_00e18f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18f30u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e18f70 */
uint F_00e18f70(unsigned int gen_a0)
{
  GEN_ENTER(0xe18f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *(int *)this + *(int *)((int)this + 4) * 8;
  if (iVar1 != 0) {
    F_00d91340(iVar1);
    F_00d91340(iVar1 + 4);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00e18fc0 */
uint F_00e18fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe18fc0u, gen_a0, gen_a1, 0u, 0u);
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
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e19000 */
uint F_00e19000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19000u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e19040 */
uint F_00e19040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19040u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e19080 */
uint F_00e19080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe19080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  
  if (param_3 < 0) {
    param_3 = *(int *)((int)this + 4);
  }
  if ((int)param_2 < param_3) {
    piVar1 = (int *)(*(int *)this + param_2 * 4);
    do {
      if (*piVar1 == *param_1) {
        return param_2;
      }
      param_2 = param_2 + 1;
      piVar1 = piVar1 + 1;
    } while ((int)param_2 < param_3);
  }
  return 0xffffffff;
}

/* ref: FUN_00e190c0 */
uint F_00e190c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe190c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  uVar2 = *(uint *)this;
  puVar1 = ((undefined4 *)GEN_TOP((uVar2 + *(int *)((int)this + 4) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    if ((undefined *)*param_2 != (undefined *)0x0) {
      uVar2 = F_00d919e0((undefined *)*param_2);
    }
    *puVar1 = *param_2;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar2;
}

/* ref: FUN_00e19110 */
uint F_00e19110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe19110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  
  if (param_3 < 0) {
    param_3 = *(int *)((int)this + 4);
  }
  if ((int)param_2 < param_3) {
    piVar1 = (int *)(*(int *)this + param_2 * 4);
    do {
      if (*piVar1 == *param_1) {
        return param_2;
      }
      param_2 = param_2 + 1;
      piVar1 = piVar1 + 1;
    } while ((int)param_2 < param_3);
  }
  return 0xffffffff;
}

/* ref: FUN_00e19150 */
uint F_00e19150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe19150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  uVar2 = *(uint *)this;
  puVar1 = ((undefined4 *)GEN_TOP((uVar2 + *(int *)((int)this + 4) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    if ((undefined *)*param_2 != (undefined *)0x0) {
      uVar2 = F_00d919e0((undefined *)*param_2);
    }
    *puVar1 = *param_2;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar2;
}

/* ref: FUN_00e191a0 */
uint F_00e191a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe191a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e191e0 */
unsigned int F_00e191e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe191e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e19210 */
uint F_00e19210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19210u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e19250 */
uint F_00e19250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19250u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e19290 */
uint F_00e19290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19290u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e192d0 */
uint F_00e192d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe192d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if (*(uint *)((int)this + 4) == uVar2) {
    uVar2 = F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((uint *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  if (puVar1 != (uint *)0x0) {
    if ((undefined *)*param_1 != (undefined *)0x0) {
      F_00d919e0((undefined *)*param_1);
    }
    uVar2 = *param_1;
    *puVar1 = uVar2;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar2;
}

/* ref: FUN_00e19320 */
uint F_00e19320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if (*(uint *)((int)this + 4) == uVar2) {
    uVar2 = F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((uint *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  if (puVar1 != (uint *)0x0) {
    if ((undefined *)*param_1 != (undefined *)0x0) {
      F_00d919e0((undefined *)*param_1);
    }
    uVar2 = *param_1;
    *puVar1 = uVar2;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar2;
}

/* ref: FUN_00e19370 */
uint F_00e19370(unsigned int gen_a0)
{
  GEN_ENTER(0xe19370u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e193a0 */
unsigned int F_00e193a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe193a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e19400 */
uint F_00e19400(unsigned int gen_a0)
{
  GEN_ENTER(0xe19400u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e19440 */
uint F_00e19440(unsigned int gen_a0)
{
  GEN_ENTER(0xe19440u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e19480 */
uint F_00e19480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19480u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e194f0 */
unsigned int F_00e194f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe194f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e19520 */
unsigned int F_00e19520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19520u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e195d0 */
unsigned int F_00e195d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe195d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  
  iVar2 = *(int *)this;
  iVar1 = param_1 * 4;
  this_00 = *(undefined * PTR32 *)(iVar2 + iVar1);
  if (this_00 != (undefined *)0x0) {
    F_00d91a80(this_00);
  }
  *(undefined4 *)(iVar2 + iVar1) = 0;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  iVar2 = (*(int *)((int)this + 4) - param_1) * 4;
  puVar3 = (undefined4 *)(*(int *)this + iVar1);
  if (0 < iVar2) {
    iVar2 = (iVar2 - 1U >> 2) + 1;
    do {
      *puVar3 = puVar3[1];
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e19630 */
uint F_00e19630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19630u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e19670 */
unsigned int F_00e19670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  
  iVar2 = *(int *)this;
  iVar1 = param_1 * 4;
  this_00 = *(undefined * PTR32 *)(iVar2 + iVar1);
  if (this_00 != (undefined *)0x0) {
    F_00d91a80(this_00);
  }
  *(undefined4 *)(iVar2 + iVar1) = 0;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  iVar2 = (*(int *)((int)this + 4) - param_1) * 4;
  puVar3 = (undefined4 *)(*(int *)this + iVar1);
  if (0 < iVar2) {
    iVar2 = (iVar2 - 1U >> 2) + 1;
    do {
      *puVar3 = puVar3[1];
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e196d0 */
uint F_00e196d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe196d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e19710 */
uint F_00e19710(unsigned int gen_a0)
{
  GEN_ENTER(0xe19710u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e19780 */
uint F_00e19780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19780u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e197f0 */
uint F_00e197f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe197f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e19860 */
uint F_00e19860(unsigned int gen_a0)
{
  GEN_ENTER(0xe19860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00da3e20((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x114e3e0));
  return uVar1;
}

/* ref: FUN_00e19880 */
unsigned int F_00e19880(unsigned int gen_a0)
{
  GEN_ENTER(0xe19880u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x14);
  }
  return 0;
}

/* ref: hkContainerResourceMap::vf1 */
uint F_00e198b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe198b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00da3e20(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x114e3e0));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0x14);
  }
  return (uint)this;
}

/* ref: FUN_00e198f0 */
uint F_00e198f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe198f0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e19960 */
uint F_00e19960(unsigned int gen_a0)
{
  GEN_ENTER(0xe19960u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e199d0 */
uint F_00e199d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe199d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e19a40 */
uint F_00e19a40(unsigned int gen_a0)
{
  GEN_ENTER(0xe19a40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00e19a70 */
uint F_00e19a70(unsigned int gen_a0)
{
  GEN_ENTER(0xe19a70u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e19ae0 */
uint F_00e19ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xe19ae0u, gen_a0, 0u, 0u, 0u);
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

/* ref: hkMemoryResourceHandle::vf0 */
uint F_00e19b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e17fd0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: hkMemoryResourceContainer::vf9 */
uint F_00e19b90(unsigned int gen_a0)
{
  GEN_ENTER(0xe19b90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: FUN_00e19ba0 */
uint F_00e19ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xe19ba0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkMemoryResourceContainer::vf7 */
uint F_00e19bd0(unsigned int gen_a0)
{
  GEN_ENTER(0xe19bd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: hkMemoryResourceContainer::vf0 */
uint F_00e19be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e18250(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e19c20 */
uint F_00e19c20(unsigned int gen_a0)
{
  GEN_ENTER(0xe19c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00dc17f0(this);
  uVar1 = F_00dc1690(this);
  return uVar1;
}

/* ref: FUN_00e19c30 */
uint F_00e19c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19c30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *in_ecx != 0;
  return param_2;
}

/* ref: FUN_00e19c70 */
uint F_00e19c70(unsigned int gen_a0)
{
  GEN_ENTER(0xe19c70u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  if (*in_ecx == 9) {
    return in_ecx[2];
  }
  return 0xffffffff;
}

/* ref: FUN_00e19c80 */
uint F_00e19c80(unsigned int gen_a0)
{
  GEN_ENTER(0xe19c80u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  if (*in_ecx == 6) {
    return in_ecx[2];
  }
  return 0;
}

/* ref: FUN_00e19c90 */
uint F_00e19c90(unsigned int gen_a0)
{
  GEN_ENTER(0xe19c90u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = *param_1;
    uVar2 = (uVar2 << 1 | (uint)((int)uVar2 < 0)) ^ iVar1 * -0x61c8864f;
    if (iVar1 == 6) {
      uVar2 = uVar2 ^ (uint)param_1;
    }
    else if (iVar1 == 9) {
      uVar2 = uVar2 ^ param_1[2];
    }
    param_1 = (int *)param_1[1];
  } while (param_1 != (int *)0x0);
  return uVar2;
}

/* ref: FUN_00e19cd0 */
uint F_00e19cd0(unsigned int gen_a0)
{
  GEN_ENTER(0xe19cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00e19c90(this);
  if (uVar1 == 0xffffffff) {
    uVar1 = 0x7af1f32a;
  }
  return uVar1;
}

/* ref: FUN_00e19cf0 */
uint F_00e19cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe19cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *(int *)this;
  if ((iVar1 != *param_2) || (*(int *)((int)this + 4) != param_2[1])) {
    *param_1 = 0;
    return (uint)param_1;
  }
  if ((iVar1 != 6) && (iVar1 != 9)) {
    *param_1 = 1;
    return (uint)param_1;
  }
  *param_1 = *(int *)((int)this + 8) == param_2[2];
  return (uint)param_1;
}

/* ref: FUN_00e19d40 */
uint F_00e19d40(unsigned int gen_a0)
{
  GEN_ENTER(0xe19d40u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(in_ecx + 4);
  while (uVar1 = uVar2, uVar1 != 0) {
    in_ecx = uVar1;
    uVar2 = *(uint *)(uVar1 + 4);
  }
  return in_ecx;
}

/* ref: FUN_00e19e60 */
unsigned int F_00e19e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00e19d60(this,param_1);
  return 0;
}

/* ref: FUN_00e19e80 */
uint F_00e19e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe19e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  do {
    piVar2 = param_3;
    if ((param_2 == (int *)0x0) || (piVar2 = param_2, param_3 == (int *)0x0)) {
      if (piVar2 == (int *)0x0) {
        *param_1 = 1;
        return (uint)param_1;
      }
      *param_1 = 0;
      return (uint)param_1;
    }
    iVar1 = *param_2;
    if (iVar1 != *param_3) goto LAB_00e19ef7;
    if (iVar1 == 6) {
      uVar3 = F_00e19c80(param_2);
      uVar4 = F_00e19c80(param_3);
      if ((uVar3 == 0) || (uVar4 == 0)) {
        *param_1 = 1;
        return (uint)param_1;
      }
      uVar3 = F_00da0d20(uVar3,uVar4);
      bVar5 = uVar3 == 0;
LAB_00e19edc: ;
      if (!bVar5) {
LAB_00e19ef7: ;
        *param_1 = 0;
        return (uint)param_1;
      }
    }
    else if (iVar1 == 9) {
      uVar3 = F_00e19c70(param_2);
      uVar4 = F_00e19c70(param_3);
      bVar5 = uVar3 == uVar4;
      goto LAB_00e19edc;
    }
    param_2 = (int *)param_2[1];
    param_3 = (int *)param_3[1];
  } while( true );
}

/* ref: FUN_00e19f20 */
uint F_00e19f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe19f20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 == this) {
    *param_1 = 1;
    return (uint)param_1;
  }
  F_00e19e80(param_1,this,param_2);
  return (uint)param_1;
}

/* ref: FUN_00e19fc0 */
unsigned int F_00e19fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe19fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * pvVar2;
  undefined * puVar3;
  
  do {
    if (param_1 == (undefined4 *)0x0) {
      return 0;
    }
    pvVar2 = param_2;
    switch((unsigned int)(uintptr_t)(*param_1)) {
    case 0: ;
      puVar3 = &REFG(undefined, 0x11261a0);
      break;
    case 1: ;
      puVar3 = &REFG(undefined, 0x1145964);
      break;
    case 2: ;
      puVar3 = &REFG(undefined, 0x113a370);
      break;
    case 3: ;
      puVar3 = &REFG(undefined, 0x11187b8);
      break;
    case 4: ;
      puVar3 = &REFG(undefined, 0x114e614);
      break;
    case 5: ;
      puVar3 = &REFG(undefined, 0x114e610);
      break;
    case 6: ;
      puVar3 = &REFG(undefined, 0x1118a38);
      uVar1 = F_00e19c80(param_1);
      pvVar2 = (undefined *)F_00d9fe80(param_2,&REFG(undefined, 0x11186a8));
      pvVar2 = (undefined *)F_00d9fe80(pvVar2,uVar1);
      break;
    case 7: ;
      puVar3 = &REFG(undefined, 0x111869c);
      break;
    case 8: ;
      puVar3 = &REFG(undefined, 0x1126194);
      break;
    case 9: ;
      puVar3 = &REFG(undefined, 0x1092088);
      uVar1 = F_00e19c70(param_1);
      pvVar2 = (undefined *)F_00d9fe80(param_2,&REFG(undefined, 0x1092090));
      pvVar2 = (undefined *)F_00d9ff40(pvVar2,uVar1);
      break;
    default: ;
      goto switchD_00e19fde_default;
    }
    F_00d9fe80(pvVar2,puVar3);
switchD_00e19fde_default: ;
    param_1 = (undefined4 *)param_1[1];
  } while( true );
}

/* ref: FUN_00e1a0b0 */
uint F_00e1a0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1a0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *param_2 = 0;
  switch((unsigned int)(uintptr_t)(*param_1)) {
  case 2: ;
    return 1;
  case 3: ;
    return 3;
  case 4: ;
    return 2;
  case 5: ;
    return 10;
  case 6: ;
    uVar1 = F_00e19c80(param_1);
    *param_2 = uVar1;
    return 9;
  case 7: ;
    if (*(int *)param_1[1] == 6) {
      uVar1 = F_00e19c80((int *)param_1[1]);
      *param_2 = uVar1;
      return 8;
    }
    break;
  case 9: ;
    if (*(int *)param_1[1] == 3) {
      uVar1 = F_00e19c70(param_1);
      switch((unsigned int)(uintptr_t)(uVar1)) {
      case 4: ;
        return 4;
      case 8: ;
        return 5;
      case 0xc: ;
        return 6;
      case 0x10: ;
        return 7;
      }
    }
  }
  return 0;
}

/* ref: FUN_00e1a1a0 */
uint F_00e1a1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1a1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da4190((undefined *)((int)this + 0x34),param_1,0);
  return uVar1;
}

/* ref: FUN_00e1a240 */
uint F_00e1a240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1a240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * this_00;
  uint uVar1;
  uint uVar2;
  undefined * this_01;
  undefined4 * puVar3;
  
  this_00 = (undefined4 *)F_00e1a1a0(this,param_1);
  if (this_00 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)((int)this + 0x50);
    this_00 = (undefined4 *)*puVar3;
    if (this_00 == (undefined4 *)0x0) {
      this_00 = *(undefined4 * PTR32 *)((int)this + 0x70);
      if (this_00 < *(undefined4 * PTR32 *)((int)this + 0x74)) {
        *(int *)((int)this + 0x84) = *(int *)((int)this + 0x84) + -1;
        *(int *)((int)this + 0x70) = *(int *)((int)this + 0x54) + (int)this_00;
      }
      else {
        this_00 = (undefined4 *)F_00dc1990(puVar3);
      }
    }
    else {
      *(int *)((int)this + 0x84) = *(int *)((int)this + 0x84) + -1;
      *puVar3 = *this_00;
    }
    this_01 = (undefined *)((int)this + 0x34);
    *this_00 = 6;
    this_00[1] = 0;
    uVar1 = F_00da3ae0(this_01,param_1);
    F_00da3e40(this_01,&(*(char *)(gen_frame + 0xb)),uVar1);
    if ((*(char *)(gen_frame + 0xb)) == '\0') {
      uVar2 = F_00da0f10(param_1,&REFG(undefined * PTR32, 0x13516ac));
      F_00da3a20(this_01,uVar2,this_00);
    }
    else {
      uVar2 = F_00da3990(this_01,uVar1);
      F_00da39d0(this_01,uVar1,this_00);
    }
    this_00[2] = uVar2;
    puVar3 = this_00;
    uVar1 = F_00e19cd0(this_00);
    F_0105bcf0((undefined *)((int)this + 0x44),uVar1,puVar3);
  }
  return (uint)this_00;
}

/* ref: FUN_00e1a310 */
unsigned int F_00e1a310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1a310u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  param_2[1] = 0;
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 4)) {
    if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,4);
    }
    *(int *)(*param_2 + param_2[1] * 4) = param_1;
    param_2[1] = param_2[1] + 1;
  }
  return 0;
}

/* ref: FUN_00e1a370 */
uint F_00e1a370(unsigned int gen_a0)
{
  GEN_ENTER(0xe1a370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114e61c));
  F_00dc14d0((undefined *)((int)this + 0x50));
  F_0105bc30((undefined *)((int)this + 0x44));
  F_00e1b470((undefined *)((int)this + 0x34));
  uVar1 = F_00da3e20((undefined *)((int)this + 0x34));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00e1a3b0 */
uint F_00e1a3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1a3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * this_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char * pcVar7;
  undefined8 * puVar8;
  uint * puVar9;
  
  uVar5 = F_00e19cd0(param_1);
  this_00 = (int *)((int)this + 0x44);
  uVar6 = F_0105bd60(this_00,uVar5);
  iVar1 = *(int *)((int)this + 0x4c);
  if (iVar1 < (int)uVar6) {
LAB_00e1a438: ;
    puVar8 = *(undefined8 * PTR32 *)((int)this + 0x50);
    if (puVar8 == (undefined8 *)0x0) {
      puVar8 = *(undefined8 * PTR32 *)((int)this + 0x70);
      if (puVar8 < *(undefined8 * PTR32 *)((int)this + 0x74)) {
        *(int *)((int)this + 0x84) = *(int *)((int)this + 0x84) + -1;
        *(int *)((int)this + 0x70) = *(int *)((int)this + 0x54) + (int)puVar8;
      }
      else {
        puVar8 = (undefined8 *)F_00dc1990((undefined4 *)((int)this + 0x50));
      }
    }
    else {
      *(int *)((int)this + 0x84) = *(int *)((int)this + 0x84) + -1;
      *(undefined4 *)((int)this + 0x50) = *(undefined4 *)puVar8;
    }
    *puVar8 = *param_1;
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(param_1 + 1);
    F_0105bcf0(this_00,uVar5,puVar8);
    return (uint)puVar8;
  }
  iVar2 = *this_00;
LAB_00e1a3e5: ;
  uVar3 = *(uint *)(iVar2 + 4 + uVar6 * 8);
  pcVar7 = (char *)F_00e19cf0(param_1,&(*(undefined1 *)(gen_frame + 0xb)),uVar3);
  if (*pcVar7 != '\0') {
    return uVar3;
  }
  uVar6 = uVar6 + 1;
  iVar4 = *(int *)((int)this + 0x4c);
  do {
    if ((int)uVar6 <= iVar4) {
      puVar9 = (uint *)(iVar2 + uVar6 * 8);
      do {
        if (*puVar9 == 0xffffffff) {
          uVar6 = iVar4 + 1;
LAB_00e1a42b: ;
          if (iVar1 < (int)uVar6) goto LAB_00e1a438;
          goto LAB_00e1a3e5;
        }
        if (*puVar9 == uVar5) goto LAB_00e1a42b;
        uVar6 = uVar6 + 1;
        puVar9 = puVar9 + 2;
      } while ((int)uVar6 <= iVar4);
    }
    uVar6 = 0;
  } while( true );
}

/* ref: FUN_00e1a4a0 */
unsigned int F_00e1a4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1a4a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 in_ecx;
  int * piVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  
  piVar2 = param_2;
  iVar3 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)((int)this + 0x4c);
  if (-1 < iVar1) {
    piVar5 = *(int * PTR32 *)((int)this + 0x44);
    do {
      if (*piVar5 != -1) break;
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 2;
    } while (iVar3 <= iVar1);
  }
  param_2 = (int *)iVar3;
  if (iVar3 <= iVar1) {
    do {
      in_ecx = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x44) + 4 + (int)((int)(uintptr_t)param_2) * 8)));
      uVar4 = F_00e19d40(in_ecx);
      if (uVar4 == param_1) {
        if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar2,4);
        }
        *(undefined4 *)(*piVar2 + piVar2[1] * 4) = in_ecx;
        piVar2[1] = piVar2[1] + 1;
      }
      iVar1 = *(int *)((int)this + 0x4c);
      param_2 = (int *)((int)param_2 + 1);
      if ((int)param_2 <= iVar1) {
        piVar5 = ((int *)GEN_TOP((*(int *)((int)this + 0x44) + (int)((int)(uintptr_t)param_2) * 8)));
        do {
          if (*piVar5 != -1) break;
          param_2 = (int *)((int)param_2 + 1);
          piVar5 = piVar5 + 2;
        } while ((int)param_2 <= iVar1);
      }
    } while ((int)param_2 <= iVar1);
  }
  return 0;
}

/* ref: FUN_00e1a550 */
uint F_00e1a550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1a550u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined * this_00;
  
  uVar1 = (*(undefined4 *)&gen_args[1]);
  uVar3 = F_00e1a1a0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  uVar2 = (*(undefined4 *)&gen_args[2]);
  uVar4 = uVar3;
  if ((uVar3 != 0) && (uVar4 = F_00e1a1a0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[2])), uVar4 == 0)) {
    this_00 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)));
    F_00e1b630(this_00,uVar1);
    uVar4 = F_00da3ae0(this_00,uVar2);
    F_00da3e40(this_00,(int)&(*(undefined4 *)&gen_args[1]) + 3,uVar4);
    if ((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 3)) == '\0') {
      uVar4 = F_00da0f10(uVar2,&REFG(undefined * PTR32, 0x13516ac));
      F_00da3a20(this_00,uVar4,uVar3);
      *(uint *)(uVar3 + 8) = uVar4;
      return uVar3;
    }
    uVar5 = F_00da3990(this_00,uVar4);
    F_00da39d0(this_00,uVar4,uVar3);
    *(uint *)(uVar3 + 8) = uVar5;
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00e1a5f0 */
unsigned int F_00e1a5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe1a5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  if (((char)param_3 != '\0') && (*param_1 == 0)) {
    if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_5,4);
    }
    *(int * PTR32 *)(*param_5 + param_5[1] * 4) = param_1;
    param_5[1] = param_5[1] + 1;
  }
  return 0;
}

/* ref: FUN_00e1a640 */
uint F_00e1a640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1a640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 7;
  (*(undefined4 *)(gen_frame + 0x4)) = param_1;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  uVar1 = F_00e1a3b0(this,&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00e1a670 */
uint F_00e1a670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1a670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 8;
  (*(undefined4 *)(gen_frame + 0x4)) = param_1;
  uVar1 = F_00e1a3b0(this,&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00e1a6a0 */
uint F_00e1a6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1a6a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x4)) = param_1;
  (*(undefined4 *)(gen_frame + 0x0)) = 9;
  (*(undefined4 *)(gen_frame + 0x8)) = param_2;
  uVar1 = F_00e1a3b0(this,&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00e1a6d0 */
uint F_00e1a6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1a6d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  if (param_1[1] != param_2) {
    iVar1 = *param_1;
    if (iVar1 != 7) {
      if (iVar1 == 8) {
        uVar2 = F_00e1a670(this,param_2);
        return uVar2;
      }
      if (iVar1 != 9) {
        return 0;
      }
      uVar2 = F_00e19c70(param_1);
      uVar2 = F_00e1a6a0(this,param_2,uVar2);
      return uVar2;
    }
    param_1 = (int *)F_00e1a640(this,param_2);
  }
  return (uint)param_1;
}

/* ref: FUN_00e1a730 */
uint F_00e1a730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1a730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + param_1 * 4 + 0xc);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = F_00e1a670(this,iVar1);
  return uVar2;
}

/* ref: FUN_00e1a750 */
uint F_00e1a750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1a750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00e1a240(this,param_1);
  uVar1 = F_00e1a640(this,uVar1);
  return uVar1;
}

/* ref: FUN_00e1a770 */
uint F_00e1a770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1a770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar3 = F_00e19cd0(param_2);
  uVar4 = F_0105bd60((int *)((int)this + 0x44),uVar3);
  if (*(int *)((int)this + 0x4c) < (int)uVar4) {
LAB_00e1a7d6: ;
    *param_1 = 0;
    return (uint)param_1;
  }
  iVar1 = *(int *)((int)this + 0x44);
LAB_00e1a7a0: ;
  if (*(undefined * PTR32 *)(iVar1 + 4 + uVar4 * 8) == param_2) {
    *param_1 = 1;
    return (uint)param_1;
  }
  iVar2 = *(int *)((int)this + 0x4c);
  uVar4 = uVar4 + 1;
  do {
    if ((int)uVar4 <= iVar2) {
      puVar5 = (uint *)(iVar1 + uVar4 * 8);
      do {
        if (*puVar5 == 0xffffffff) {
          uVar4 = iVar2 + 1;
LAB_00e1a7d1: ;
          if (*(int *)((int)this + 0x4c) < (int)uVar4) goto LAB_00e1a7d6;
          goto LAB_00e1a7a0;
        }
        if (*puVar5 == uVar3) goto LAB_00e1a7d1;
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 2;
      } while ((int)uVar4 <= iVar2);
    }
    uVar4 = 0;
  } while( true );
}

/* ref: FUN_00e1aa20 */
uint F_00e1aa20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1aa20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)(param_1 & 0xf)) {
  case 0: ;
    uVar1 = *(uint *)((int)this + 0x10);
    break;
  case 1: ;
    uVar1 = *(uint *)((int)this + 0x14);
    break;
  case 2: ;
    uVar1 = *(uint *)((int)this + 0x1c);
    break;
  case 3: ;
    uVar1 = *(uint *)((int)this + 0x18);
    break;
  case 4: ;
    uVar1 = F_00e1a6a0(this,*(undefined4 *)((int)this + 0x18),4);
    break;
  case 5: ;
    uVar1 = F_00e1a6a0(this,*(undefined4 *)((int)this + 0x18),8);
    break;
  case 6: ;
    uVar1 = F_00e1a6a0(this,*(undefined4 *)((int)this + 0x18),0xc);
    break;
  case 7: ;
    uVar1 = F_00e1a6a0(this,*(undefined4 *)((int)this + 0x18),0x10);
    break;
  case 8: ;
    if (param_2 == 0) {
      uVar1 = F_00e1a640(this,*(undefined4 *)((int)this + 8));
    }
    else {
      uVar1 = F_00e1a240(this,param_2);
      uVar1 = F_00e1a640(this,uVar1);
    }
    break;
  case 9: ;
    if (param_2 == 0) {
      uVar1 = *(uint *)((int)this + 8);
    }
    else {
      uVar1 = F_00e1a240(this,param_2);
    }
    break;
  case 10: ;
    uVar1 = *(uint *)((int)this + 0x20);
    break;
  default: ;
    goto switchD_00e1aa38_default;
  }
  if (uVar1 != 0) {
    if ((param_1 & 0x10) == 0) {
      if ((param_1 & 0x20) != 0) {
        uVar1 = F_00e1a6a0(this,uVar1,param_3);
      }
      return uVar1;
    }
    uVar1 = F_00e1a670(this,uVar1);
    return uVar1;
  }
switchD_00e1aa38_default: ;
  return 0;
}

/* ref: FUN_00e1ab30 */
uint F_00e1ab30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1ab30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x18)) = 0x80000000;
  F_00da04b0(((undefined1 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x10)));
  F_00e19e60(this,((undefined1 *)(gen_frame + 0x4)));
  if ((*(uint *)(gen_frame + 0x14)) == ((*(uint *)(gen_frame + 0x18)) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x10)),1);
  }
  *(undefined1 *)((*(int *)(gen_frame + 0x10)) + (*(uint *)(gen_frame + 0x14))) = 0;
  (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) + 1;
  F_00d91480(param_1,(*(int *)(gen_frame + 0x10)));
  F_00d9fda0(((undefined1 *)(gen_frame + 0x4)));
  (*(uint *)(gen_frame + 0x14)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x18))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x10)),(*(uint *)(gen_frame + 0x18)) & 0x3fffffff);
  }
  return (uint)param_1;
}

/* ref: FUN_00e1abe0 */
uint F_00e1abe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1abe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  ((int *)(gen_frame + 0x0))[1] = 0;
  ((int *)(gen_frame + 0x0))[2] = 0;
  ((int *)(gen_frame + 0x0))[0] = param_1;
  uVar1 = F_00e1a3b0(this,((int *)(gen_frame + 0x0)));
  *(uint *)((int)this + param_1 * 4 + 0xc) = uVar1;
  return uVar1;
}

/* ref: FUN_00e1ac10 */
uint F_00e1ac10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1ac10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_ECX = 0;
  int iVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)&gen_args[1]) = F_00e19c80((*(uint *)&gen_args[1]));
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0x80000000;
  F_00e1a4a0((*(undefined * PTR32 *)&gen_args[0]),extraout_ECX,&(*(int *)(gen_frame + 0xc)));
  uVar2 = (*(uint *)(gen_frame + 0x10));
  (*(int *)(gen_frame + 0x8)) = ((int)0x80000000);
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  if (0 < (int)(*(uint *)(gen_frame + 0x10))) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x10)) & ((int)(*(uint *)(gen_frame + 0x10)) < 0) - 1,4);
  }
  (*(uint *)(gen_frame + 0x4)) = uVar2;
  iVar4 = 0;
  if (0 < (int)(*(uint *)(gen_frame + 0x10))) {
    do {
      uVar2 = F_00e19cd0(*(undefined * PTR32 *)((*(int *)(gen_frame + 0xc)) + iVar4 * 4));
      *(uint *)((*(int *)(gen_frame + 0x0)) + iVar4 * 4) = uVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(*(uint *)(gen_frame + 0x10)));
  }
  iVar4 = 0;
  if (0 < (int)(*(uint *)(gen_frame + 0x10))) {
    do {
      puVar1 = *(undefined4 * PTR32 *)((*(int *)(gen_frame + 0xc)) + iVar4 * 4);
      F_0105cc90((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x44),*(undefined4 *)((*(int *)(gen_frame + 0x0)) + iVar4 * 4),puVar1);
      iVar4 = iVar4 + 1;
      *puVar1 = 0;
      puVar1[1] = 0;
      (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0x18));
    } while (iVar4 < (int)(*(uint *)(gen_frame + 0x10)));
  }
  this_00 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)));
  uVar2 = F_00da3ae0(this_00,(*(uint *)&gen_args[1]));
  F_00da3e40(this_00,(int)&(*(uint *)&gen_args[1]) + 3,uVar2);
  if ((*(undefined1 *)((char *)&(*(uint *)&gen_args[1]) + 3)) != '\0') {
    uVar3 = F_00da3990(this_00,uVar2);
    F_00da0f40(uVar3,&REFG(undefined * PTR32, 0x13516ac));
    F_00da3b70(this_00,uVar2);
  }
  (*(uint *)(gen_frame + 0x4)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x8)) * 4);
  }
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0x80000000;
  if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
    (*(uint *)(gen_frame + 0x14)) = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) * 4)
    ;
  }
  return (*(uint *)(gen_frame + 0x14));
}

/* ref: FUN_00e1ad70 */
uint F_00e1ad70(unsigned int gen_a0)
{
  GEN_ENTER(0xe1ad70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * this_00;
  undefined4 * puVar1;
  int iVar2;
  
  this_00 = (undefined4 *)((int)this + 0x50);
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  F_00dc18d0(this_00,((code *)REFP(0xe1a5f0)),0,&(*(int *)(gen_frame + 0x0)));
  iVar2 = 0;
  if (0 < (*(int *)(gen_frame + 0x4))) {
    do {
      puVar1 = *(undefined4 * PTR32 *)((*(int *)(gen_frame + 0x0)) + iVar2 * 4);
      *(int *)((int)this + 0x84) = *(int *)((int)this + 0x84) + 1;
      *puVar1 = *this_00;
      iVar2 = iVar2 + 1;
      *this_00 = puVar1;
    } while (iVar2 < (*(int *)(gen_frame + 0x4)));
  }
  F_00dc17f0(this_00);
  F_00dc1690(this_00);
  (*(int *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    (*(uint *)(gen_frame + 0x8)) = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4)
    ;
  }
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: FUN_00e1ae10 */
uint F_00e1ae10(unsigned int gen_a0)
{
  GEN_ENTER(0xe1ae10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * this_00;
  uint uVar1;
  undefined4 * puVar2;
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114e61c));
  F_00da3de0((undefined *)((int)this + 0x34),local_8);
  F_0105cae0((undefined *)((int)this + 0x44));
  F_00dc1c00((undefined *)((int)this + 0x50),0xc,4,0x800,0,0);
  F_00da1030((int)this + 0xc,0,0x28);
  F_00e1abe0(this,1);
  F_00e1abe0(this,4);
  F_00e1abe0(this,3);
  F_00e1abe0(this,5);
  F_00e1abe0(this,2);
  this_00 = *(undefined4 * PTR32 *)((int)this + 0x50);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = *(undefined4 * PTR32 *)((int)this + 0x70);
    if (this_00 < *(undefined4 * PTR32 *)((int)this + 0x74)) {
      *(int *)((int)this + 0x84) = *(int *)((int)this + 0x84) + -1;
      *(int *)((int)this + 0x70) = *(int *)((int)this + 0x54) + (int)this_00;
    }
    else {
      this_00 = (undefined4 *)F_00dc1990((undefined *)((int)this + 0x50));
    }
  }
  else {
    *(int *)((int)this + 0x84) = *(int *)((int)this + 0x84) + -1;
    *(undefined4 *)((int)this + 0x50) = *this_00;
  }
  *this_00 = 6;
  this_00[1] = 0;
  this_00[2] = 0;
  puVar2 = this_00;
  uVar1 = F_00e19cd0(this_00);
  F_0105bcf0((undefined *)((int)this + 0x44),uVar1,puVar2);
  *(undefined4 * PTR32 *)((int)this + 8) = this_00;
  return (uint)this;
}

/* ref: FUN_00e1af00 */
uint F_00e1af00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1af00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  uint uVar2;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000010;
  uVar1 = param_1;
  do {
    if ((*(uint *)(gen_frame + 0x4)) == ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),4);
    }
    uVar2 = (*(uint *)(gen_frame + 0x4));
    *(uint *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + (*(uint *)(gen_frame + 0x4)) * 4) = uVar1;
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
    uVar1 = *(uint *)(uVar1 + 4);
  } while (uVar1 != 0);
  if (*(uint *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + (*(uint *)(gen_frame + 0x4)) * 4 + -4) != param_2) {
    for (; -1 < (int)uVar2; uVar2 = uVar2 - 1) {
      param_2 = F_00e1a6d0(this,*(undefined4 *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + uVar2 * 4),param_2);
    }
    (*(uint *)(gen_frame + 0x4)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
    }
    return param_2;
  }
  (*(uint *)(gen_frame + 0x4)) = uVar1;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
  }
  return param_1;
}

/* ref: FUN_00e1aff0 */
uint F_00e1aff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1aff0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char * pcVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (*(uint *)&gen_args[1]);
  pcVar1 = (char *)F_00e1a770((*(undefined * PTR32 *)&gen_args[0]),(int)&(*(uint *)&gen_args[1]) + 3,(*(uint *)&gen_args[1]));
  if (*pcVar1 != '\0') {
    return uVar2;
  }
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0x8)) = -0x7ffffff0;
  F_00e1a310(uVar2,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  iVar3 = **(int * PTR32 *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + (*(int *)(gen_frame + 0x4)) * 4 + -4);
  if (iVar3 == 6) {
    uVar2 = F_00e19c80(*(int * PTR32 *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + (*(int *)(gen_frame + 0x4)) * 4 + -4));
    uVar2 = F_00e1a240((*(undefined * PTR32 *)&gen_args[0]),uVar2);
  }
  else {
    uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar3 * 4 + 0xc)));
  }
  if (uVar2 == 0) {
    (*(int *)(gen_frame + 0x4)) = 0;
    if (-1 < (*(int *)(gen_frame + 0x8))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x8)) * 4);
    }
    return 0;
  }
  for (iVar3 = (*(int *)(gen_frame + 0x4)) + -2; -1 < iVar3; iVar3 = iVar3 + -1) {
    uVar2 = F_00e1a6d0((*(undefined * PTR32 *)&gen_args[0]),*(undefined4 *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + iVar3 * 4),uVar2);
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x8)) * 4);
  }
  return uVar2;
}

/* ref: FUN_00e1b110 */
uint F_00e1b110(unsigned int gen_a0)
{
  GEN_ENTER(0xe1b110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this,local_8);
  return (uint)this;
}

/* ref: FUN_00e1b130 */
uint F_00e1b130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da4190(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e1b140 */
uint F_00e1b140(unsigned int gen_a0)
{
  GEN_ENTER(0xe1b140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0105cae0(this);
  return (uint)this;
}

/* ref: FUN_00e1b150 */
unsigned int F_00e1b150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_0105bcf0(this,param_1,param_2);
  return 0;
}

/* ref: FUN_00e1b160 */
uint F_00e1b160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0105bd60(this,param_1);
  return uVar1;
}

/* ref: FUN_00e1b170 */
uint F_00e1b170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0105cc90(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e1b180 */
uint F_00e1b180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da3a20(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e1b190 */
uint F_00e1b190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da3ae0(this,param_1);
  return uVar1;
}

/* ref: FUN_00e1b1a0 */
uint F_00e1b1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da3990(in_ecx,param_2);
  return uVar1;
}

/* ref: FUN_00e1b1b0 */
uint F_00e1b1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b1b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da39d0(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e1b1c0 */
uint F_00e1b1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b1c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00da3e40(in_ecx,param_2,param_3);
  return param_2;
}

/* ref: FUN_00e1b1e0 */
unsigned int F_00e1b1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00da3b70(this,param_1);
  return 0;
}

/* ref: FUN_00e1b200 */
uint F_00e1b200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da39f0(this,param_1);
  return uVar1;
}

/* ref: FUN_00e1b220 */
uint F_00e1b220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b220u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 4 + param_2 * 8);
}

/* ref: FUN_00e1b230 */
uint F_00e1b230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b230u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00e1b280 */
uint F_00e1b280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b280u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e1b2b0 */
byte F_00e1b2b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe1b2b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 != -1;
}

/* ref: FUN_00e1b2c0 */
byte F_00e1b2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b2c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 == param_2;
}

/* ref: FUN_00e1b2d0 */
uint F_00e1b2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1b2d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00e1b310 */
unsigned int F_00e1b310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b310u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e1b340 */
uint F_00e1b340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e1b360 */
uint F_00e1b360(unsigned int gen_a0)
{
  GEN_ENTER(0xe1b360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this,local_8);
  return (uint)this;
}

/* ref: FUN_00e1b380 */
uint F_00e1b380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b380u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e1b3f0 */
uint F_00e1b3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b3f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 4 + param_2 * 8);
}

/* ref: FUN_00e1b400 */
uint F_00e1b400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b400u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00e1b440 */
unsigned int F_00e1b440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da3990(this,param_1);
  F_00da0f40(uVar1,&REFG(undefined * PTR32, 0x13516ac));
  F_00da3b70(this,param_1);
  return 0;
}

/* ref: FUN_00e1b470 */
unsigned int F_00e1b470(unsigned int gen_a0)
{
  GEN_ENTER(0xe1b470u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e1b4f0 */
uint F_00e1b4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b4f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = *(int *)((int)this + 8);
  uVar2 = param_1 + 1;
  do {
    if ((int)uVar2 <= iVar1) {
      piVar3 = (int *)(*(int *)this + uVar2 * 8);
      do {
        if (*piVar3 == -1) {
          return iVar1 + 1;
        }
        if (*piVar3 == param_2) {
          return uVar2;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 2;
      } while ((int)uVar2 <= iVar1);
    }
    uVar2 = 0;
  } while( true );
}

/* ref: FUN_00e1b540 */
unsigned int F_00e1b540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b540u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e1b580 */
uint F_00e1b580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b580u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e1b5c0 */
uint F_00e1b5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1b5c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00e1b5e0 */
uint F_00e1b5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b5e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e1b620 */
uint F_00e1b620(unsigned int gen_a0)
{
  GEN_ENTER(0xe1b620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00e1b470(this);
  uVar1 = F_00da3e20(this);
  return uVar1;
}

/* ref: FUN_00e1b630 */
uint F_00e1b630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b630u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00da3ae0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  F_00da3e40((*(undefined * PTR32 *)&gen_args[0]),(int)&(*(undefined4 *)&gen_args[1]) + 3,uVar1);
  if ((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 3)) != '\0') {
    uVar2 = F_00da3990((*(undefined * PTR32 *)&gen_args[0]),uVar1);
    F_00da0f40(uVar2,&REFG(undefined * PTR32, 0x13516ac));
    F_00da3b70((*(undefined * PTR32 *)&gen_args[0]),uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_00e1b6b0 */
unsigned int F_00e1b6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b6b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e1b6e0 */
uint F_00e1b6e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1b6e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = *(int *)((int)this + 8);
  uVar2 = param_1 + 1;
  do {
    if ((int)uVar2 <= iVar1) {
      piVar3 = (int *)(*(int *)this + uVar2 * 8);
      do {
        if (*piVar3 == -1) {
          return iVar1 + 1;
        }
        if (*piVar3 == param_2) {
          return uVar2;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 2;
      } while ((int)uVar2 <= iVar1);
    }
    uVar2 = 0;
  } while( true );
}

/* ref: FUN_00e1b730 */
uint F_00e1b730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b730u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e1b770 */
uint F_00e1b770(unsigned int gen_a0)
{
  GEN_ENTER(0xe1b770u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e1b7b0 */
uint F_00e1b7b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe1b7b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00e1b7e0 */
uint F_00e1b7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe1b7e0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e1b820 */
uint F_00e1b820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(int *)this = (int)this + 0xc;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0x80000010;
  return (uint)this;
}

/* ref: hkTypeManager::vf0 */
uint F_00e1b840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e1a370(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e1b880 */
uint F_00e1b880(unsigned int gen_a0)
{
  GEN_ENTER(0xe1b880u, gen_a0, 0u, 0u, 0u);
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

/* ref: hkStaticClassNameRegistry::vf3 */
uint F_00e1b8c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe1b8c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: FUN_00e1b8d0 */
unsigned int F_00e1b8d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe1b8d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0x14) == 0) {
    F_00e05570(*(undefined4 *)((int)this + 0xc),*(undefined4 *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x14) = 1;
  }
  return 0;
}

/* ref: FUN_00e1b900 */
unsigned int F_00e1b900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1b900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x114e62c));
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = 1;
  *(undefined4 *)((int)this + 8) = param_3;
  return 0;
}

/* ref: hkStaticClassNameRegistry::vf4 */
uint F_00e1b940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00e1b8d0(this);
  piVar1 = *(int * PTR32 *)(this + 0xc);
  iVar4 = 0;
  if (*piVar1 != 0) {
    iVar3 = 0;
    do {
      uVar2 = F_00d92610(*(undefined4 *)((int)piVar1 + iVar3));
      uVar2 = F_00da0d20(param_1,uVar2);
      piVar1 = *(int * PTR32 *)(this + 0xc);
      if (uVar2 == 0) {
        return piVar1[iVar4];
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar4 * 4;
    } while (piVar1[iVar4] != 0);
  }
  return 0;
}

/* ref: FUN_00e1b9a0 */
unsigned int F_00e1b9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1b9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x114e62c));
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 8) = param_3;
  return 0;
}

/* ref: hkStaticClassNameRegistry::vf5 */
unsigned int F_00e1b9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1b9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  
  F_00e1b8d0(this);
  piVar4 = *(int * PTR32 *)(this + 0xc);
  iVar5 = 0;
  iVar1 = *piVar4;
  while (iVar1 != 0) {
    piVar4 = piVar4 + 1;
    iVar5 = iVar5 + 1;
    iVar1 = *piVar4;
  }
  iVar2 = param_1[1];
  iVar1 = iVar2 + iVar5;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_1,iVar3,4);
  }
  param_1[1] = param_1[1] + iVar5;
  iVar1 = *param_1;
  piVar4 = *(int * PTR32 *)(this + 0xc);
  iVar5 = 0;
  if (*piVar4 != 0) {
    iVar3 = 0;
    do {
      *(int *)(iVar3 + iVar1 + iVar2 * 4) = *piVar4;
      iVar5 = iVar5 + 1;
      iVar3 = iVar5 * 4;
      piVar4 = ((int *)GEN_TOP((*(int *)(this + 0xc) + iVar3)));
    } while (*piVar4 != 0);
  }
  return 0;
}

/* ref: FUN_00e1ba70 */
uint F_00e1ba70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1ba70u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e1bab0 */
uint F_00e1bab0(unsigned int gen_a0)
{
  GEN_ENTER(0xe1bab0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkStaticClassNameRegistry::vf0 */
uint F_00e1bae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1bae0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e1bb20 */
uint F_00e1bb20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1bb20u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e1bb70 */
uint F_00e1bb70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1bb70u, gen_a0, gen_a1, 0u, 0u);
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
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar4,4);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_1;
  return *(int *)this + iVar2 * 4;
}

/* ref: FUN_00e1bbf0 */
uint F_00e1bbf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1bbf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x10);
  if (param_1 <= (int)((*(int *)((int)this + 0x18) - uVar1) + *(int *)((int)this + 0x14))) {
    uVar1 = uVar1 + param_1;
    *(uint *)((int)this + 0x10) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00e1bc10 */
unsigned int F_00e1bc10(unsigned int gen_a0)
{
  GEN_ENTER(0xe1bc10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * pcVar1;
  
  for (pcVar1 = ((char *)GEN_TOP((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x14))));
      pcVar1 < *(char * PTR32 *)((int)this + 0x10); pcVar1 = pcVar1 + 1) {
    if ((*pcVar1 == '\r') || (*pcVar1 == '\n')) {
      *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 1;
      *(undefined4 *)((int)this + 0x28) = 0;
    }
  }
  *(int *)((int)this + 0xc) = (int)*(char * PTR32 *)((int)this + 0x10) - *(int *)((int)this + 0x14);
  return 0;
}

/* ref: FUN_00e1bc60 */
uint F_00e1bc60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1bc60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)(in_ecx + 0x14) + *(int *)(in_ecx + 0xc) + param_2;
  *(uint *)(in_ecx + 0x10) = uVar1;
  return uVar1;
}

/* ref: FUN_00e1bc80 */
unsigned int F_00e1bc80(unsigned int gen_a0)
{
  GEN_ENTER(0xe1bc80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xc);
  *(int *)((int)this + 8) = iVar1;
  if (0x400 < iVar1) {
    F_00da1020(*(int *)((int)this + 0x14),iVar1 + *(int *)((int)this + 0x14),
                 *(int *)((int)this + 0x18) - iVar1);
    iVar1 = *(int *)((int)this + 0x18) - *(int *)((int)this + 8);
    *(int *)((int)this + 0x18) = iVar1;
    *((undefined1 *)GEN_TOP((iVar1 + *(int *)((int)this + 0x14)))) = 0;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) - *(int *)((int)this + 8);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) - *(int *)((int)this + 8);
    *(undefined4 *)((int)this + 8) = 0;
  }
  return 0;
}

/* ref: FUN_00e1bcd0 */
uint F_00e1bcd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1bcd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114e648));
  puVar1 = (undefined4 *)((int)this + 0x14);
  *puVar1 = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  *(undefined * PTR32 *)((int)this + 0x20) = param_1;
  F_00d919e0(param_1);
  if ((*(uint *)((int)this + 0x1c) & 0x3fffffff) == 0) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),puVar1,1,1);
  }
  *(undefined4 *)((int)this + 0x18) = 1;
  *(undefined1 *)*puVar1 = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x10) = *puVar1;
  return (uint)this;
}

/* ref: FUN_00e1bd60 */
uint F_00e1bd60(unsigned int gen_a0)
{
  GEN_ENTER(0xe1bd60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114e648));
  F_00d91a80(*(undefined * PTR32 *)((int)this + 0x20));
  uVar1 = *(uint *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x18) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x14),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00e1bdb0 */
uint F_00e1bdb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1bdb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if (param_1 < 0x100) {
    param_1 = 0x100;
  }
  iVar3 = *(int *)((int)this + 0x14);
  iVar4 = *(int *)((int)this + 0x18);
  iVar5 = *(int *)((int)this + 0x18);
  piVar1 = (int *)((int)this + 0x14);
  iVar2 = iVar4 + param_1 + 1;
  uVar6 = *(uint *)((int)this + 0x1c) & 0x3fffffff;
  if ((int)uVar6 < iVar2) {
    iVar7 = uVar6 * 2;
    if (iVar7 <= iVar2) {
      iVar7 = iVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar1,iVar7,1);
  }
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + param_1 + 1;
  uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20) + 0x10))))
                    (*(int * PTR32 *)((int)this + 0x20),*piVar1 + iVar4,param_1);
  *(undefined1 *)(*piVar1 + uVar6 + iVar5) = 0;
  *(uint *)((int)this + 0x18) = uVar6 + iVar5;
  if (*piVar1 != iVar3) {
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (*piVar1 - iVar3);
  }
  return (uVar6 + iVar5) - iVar5;
}

/* ref: FUN_00e1be60 */
uint F_00e1be60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1be60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0x10);
  iVar1 = (*(int *)((int)this + 0x18) - iVar3) + *(int *)((int)this + 0x14);
  if (iVar1 < param_3) {
    F_00e1bdb0(this,param_3 - iVar1);
    iVar3 = *(int *)((int)this + 0x10);
    if ((*(int *)((int)this + 0x18) - iVar3) + *(int *)((int)this + 0x14) < param_3) {
      *param_1 = 0;
      return (uint)param_1;
    }
  }
  uVar2 = F_00da0d60(iVar3,param_2,param_3);
  *param_1 = uVar2 == 0;
  return (uint)param_1;
}

/* ref: FUN_00e1bec0 */
uint F_00e1bec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1bec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da0e60(param_2);
  F_00e1be60(this,param_1,param_2,uVar1);
  return param_1;
}

/* ref: FUN_00e1bef0 */
uint F_00e1bef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1bef0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  uint uVar2;
  char * pcVar3;
  
  uVar1 = (*(undefined4 *)&gen_args[2]);
  uVar2 = F_00da0e60((*(undefined4 *)&gen_args[2]));
  pcVar3 = (char *)F_00e1be60((*(undefined * PTR32 *)&gen_args[0]),(int)&(*(undefined4 *)&gen_args[2]) + 3,uVar1,uVar2);
  if (*pcVar3 != '\0') {
    if ((int)uVar2 <=
        (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) - *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)))) {
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + uVar2;
    }
    *(*(undefined1 * PTR32 *)&gen_args[1]) = 1;
    return (uint)(*(undefined1 * PTR32 *)&gen_args[1]);
  }
  *(*(undefined1 * PTR32 *)&gen_args[1]) = 0;
  return (uint)(*(undefined1 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00e1bf50 */
uint F_00e1bf50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1bf50u, gen_a0, gen_a1, 0u, 0u);
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
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar4,1);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_1;
  return *(int *)this + iVar2;
}

/* ref: FUN_00e1bfa0 */
uint F_00e1bfa0(unsigned int gen_a0)
{
  GEN_ENTER(0xe1bfa0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00e1bfd0 */
uint F_00e1bfd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1bfd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 0x18) - *(int *)((int)this + 0x10)) + *(int *)((int)this + 0x14);
  if ((int)uVar1 < param_1) {
    F_00e1bdb0(this,param_1 - uVar1);
    uVar1 = (*(int *)((int)this + 0x18) - *(int *)((int)this + 0x10)) + *(int *)((int)this + 0x14);
  }
  return uVar1;
}

/* ref: hkParserBuffer::vf0 */
uint F_00e1c000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1c000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e1bd60(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e1c040 */
uint F_00e1c040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1c040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00e1c060 */
uint F_00e1c060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1c060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  uVar1 = param_1[1];
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00e1c0c0 */
uint F_00e1c0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1c0c0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(bool *)param_1 = (byte)((char)param_2 - 0x30U) < 10;
  return param_1;
}

/* ref: FUN_00e1c0f0 */
uint F_00e1c0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1c0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  ulonglong * param_2 = (ulonglong *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  char * pcVar2;
  char * pcVar3;
  char * pcVar4;
  ulonglong uVar5;
  
  pcVar2 = (char *)*param_1;
  pcVar3 = (char *)param_1[1];
  if (pcVar3 != pcVar2 && -1 < (int)pcVar3 - (int)pcVar2) {
    pcVar4 = pcVar2;
    if (*pcVar2 == '-') {
      pcVar4 = pcVar2 + 1;
    }
    if (pcVar4 < pcVar3) {
      cVar1 = *pcVar4;
      while ((byte)(cVar1 - 0x30U) < 10) {
        pcVar4 = pcVar4 + 1;
        if (pcVar3 <= pcVar4) {
          F_00da0e40(((undefined1 *)(gen_frame + 0xc)),pcVar2,(int)pcVar3 - (int)pcVar2);
          ((undefined1 *)(gen_frame + 0xc))[(int)pcVar3 - (int)pcVar2] = 0;
          uVar5 = F_00da0ea0(((undefined1 *)(gen_frame + 0xc)),0);
          *param_2 = uVar5;
          return 0;
        }
        cVar1 = *pcVar4;
      }
    }
  }
  return 1;
}

/* ref: FUN_00e1c170 */
uint F_00e1c170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1c170u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  pcVar2 = *(char * PTR32 *)param_1;
  iVar3 = *(int *)(param_1 + 4) - (int)pcVar2;
  if ((0 < iVar3) && (iVar3 < 0x21)) {
    if (*pcVar2 != 'x') {
      uVar5 = F_00e1df40(param_1,param_2);
      return uVar5;
    }
    if (iVar3 == 9) {
      uVar5 = 0;
      iVar3 = 0;
      do {
        cVar1 = pcVar2[iVar3 + 1];
        if ((byte)(cVar1 - 0x30U) < 10) {
          uVar4 = (int)cVar1 - 0x30;
        }
        else if ((byte)(cVar1 + 0xbfU) < 6) {
          uVar4 = (int)cVar1 - 0x37;
        }
        else {
          if (5 < (byte)(cVar1 + 0x9fU)) {
            return 1;
          }
          uVar4 = (int)cVar1 - 0x57;
        }
        iVar3 = iVar3 + 1;
        uVar5 = uVar5 << 4 | uVar4;
      } while (iVar3 < 8);
      *param_2 = uVar5;
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00e1c210 */
uint F_00e1c210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1c210u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  char * pcVar1;
  
  pcVar1 = (char *)*param_2;
  while( true ) {
    if ((char *)param_2[1] <= pcVar1) {
      *param_1 = 0;
      return (uint)param_1;
    }
    if (*pcVar1 == '&') break;
    pcVar1 = pcVar1 + 1;
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00e1c240 */
uint F_00e1c240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1c240u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char * pcVar1;
  char * pcVar2;
  char * pcVar3;
  uint uVar4;
  int iVar5;
  
  F_00da4850(param_2);
  pcVar1 = (char *)param_1[1];
  pcVar3 = (char *)*param_1;
joined_r0x00e1c25e: ;
  do {
    while( true ) {
      if (pcVar1 <= pcVar3) {
        return 0;
      }
      pcVar2 = pcVar3;
      if (*pcVar3 == '&') break;
      do {
        pcVar2 = pcVar2 + 1;
        if (pcVar1 <= pcVar2) break;
      } while (*pcVar2 != '&');
      F_00da4bf0(param_2,pcVar3,(int)pcVar2 - (int)pcVar3);
      pcVar3 = pcVar2;
    }
    iVar5 = (int)pcVar1 - (int)pcVar3;
    if ((iVar5 < 5) || (uVar4 = F_00da0d60(pcVar3 + 1,&REFG(undefined, 0x114e66c),4), uVar4 != 0)) {
      if (3 < iVar5) {
        uVar4 = F_00da0d60(pcVar3 + 1,&REFG(undefined, 0x114e668),3);
        if (uVar4 == 0) {
          F_00da4bf0(param_2,&REFG(undefined, 0x1126164),1);
          pcVar3 = pcVar3 + 4;
          goto joined_r0x00e1c25e;
        }
        uVar4 = F_00da0d60(pcVar3 + 1,&REFG(undefined, 0x114e664),3);
        if (uVar4 == 0) {
          F_00da4bf0(param_2,&REFG(undefined, 0x112615c),1);
          pcVar3 = pcVar3 + 4;
          goto joined_r0x00e1c25e;
        }
      }
      if (5 < iVar5) {
        uVar4 = F_00da0d60(pcVar3 + 1,"quot;",5);
        if (uVar4 == 0) {
          F_00da4bf0(param_2,&REFG(undefined, 0x114b548),1);
          pcVar3 = pcVar3 + 6;
          goto joined_r0x00e1c25e;
        }
        uVar4 = F_00da0d60(pcVar3 + 1,"apos;",5);
        if (uVar4 == 0) {
          F_00da4bf0(param_2,&REFG(undefined, 0x11264a4),1);
          pcVar3 = pcVar3 + 6;
          goto joined_r0x00e1c25e;
        }
      }
      if (((pcVar3[1] != '#') || (9 < (byte)(pcVar3[2] - 0x30U))) ||
         (pcVar2 = pcVar3 + 2, iVar5 < 4)) {
        return 1;
      }
      while( true ) {
        if (pcVar1 <= pcVar2) {
          return 1;
        }
        if (9 < (byte)(*pcVar2 - 0x30U)) break;
        pcVar2 = pcVar2 + 1;
      }
      if (pcVar1 <= pcVar2) {
        return 1;
      }
      if (*pcVar2 != ';') {
        return 1;
      }
      iVar5 = (int)pcVar2 - (int)pcVar3;
      if (0x10 < iVar5) {
        return 1;
      }
      F_00da0e40(&(*(undefined1 *)(gen_frame + 0xc)),pcVar3 + 2,iVar5 + -2);
      ((gen_frame + 0xa))[iVar5] = 0;
      uVar4 = F_00da0e80(&(*(undefined1 *)(gen_frame + 0xc)),0);
      if (0xff < uVar4) {
        return 1;
      }
      (*(undefined1 *)(gen_frame + 0xc)) = (char)uVar4;
      (*(undefined1 *)(gen_frame + 0xd)) = 0;
      F_00da4bf0(param_2,&(*(undefined1 *)(gen_frame + 0xc)),0xffffffff);
      pcVar3 = pcVar2 + 1;
      goto joined_r0x00e1c25e;
    }
    F_00da4bf0(param_2,&REFG(undefined, 0x1126170),1);
    pcVar3 = pcVar3 + 5;
  } while( true );
}

/* ref: FUN_00e1c430 */
uint F_00e1c430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1c430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = F_00da4190((undefined *)((int)this + 8),param_1,0xffffffff);
  if ((int)uVar3 < 0) {
    return 1;
  }
  piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0x68) + uVar3 * 8)));
  iVar4 = *(int *)((int)this + 0x4c) + *(int *)((int)this + 0x40);
  iVar2 = piVar1[1];
  *param_2 = *piVar1 + iVar4;
  param_2[1] = iVar2 + iVar4;
  return 0;
}

/* ref: FUN_00e1c480 */
uint F_00e1c480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1c480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int iVar2;
  
  if (0 < *(int *)((int)this + 0x6c)) {
    iVar2 = *(int *)((int)this + 0x4c) + *(int *)((int)this + 0x40);
    piVar1 = *(int * PTR32 *)((int)this + 0x68);
    *param_1 = *piVar1 + iVar2;
    param_1[1] = piVar1[1] + iVar2;
    return (uint)param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00e1c4c0 */
uint F_00e1c4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1c4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x48);
  *param_1 = *(int *)((int)this + 0x4c) + *(int *)((int)this + 0x44);
  param_1[1] = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00e1c4e0 */
uint F_00e1c4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1c4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * in_esi = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  undefined4 uVar5;
  undefined * puVar6;
  
  uVar2 = F_00e1c480(in_esi,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar2 = F_0105a4c0(param_2,uVar2);
  iVar4 = 0;
  if (0 < *(int *)((int)in_esi + 0x1c)) {
    do {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)in_esi + 0x18) + iVar4 * 4)));
      puVar6 = &REFG(undefined, 0x1118a3c);
      uVar5 = uVar1;
      pvVar3 = (undefined *)F_00d9fe80(param_2,&REFG(undefined, 0x10919e8));
      pvVar3 = (undefined *)F_00d9fe80(pvVar3,uVar5);
      F_00d9fe80(pvVar3,puVar6);
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      F_00e1c430(in_esi,uVar1,&(*(undefined4 *)(gen_frame + 0x4)));
      uVar2 = F_0105a4c0(param_2,&(*(undefined4 *)(gen_frame + 0x4)));
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)in_esi + 0x1c));
  }
  return uVar2;
}

/* ref: FUN_00e1c560 */
uint F_00e1c560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1c560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(char * PTR32 *)(gen_frame + 0x14)) = (char *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x18)) = (char *)0x0;
  uVar1 = F_00e1c430(this,param_1,&(*(char * PTR32 *)(gen_frame + 0x14)));
  if (((uVar1 == 0) && (*(*(char * PTR32 *)(gen_frame + 0x14)) == '\"')) && (*(char *)((int)(*(char * PTR32 *)(gen_frame + 0x18)) + -1) == '\"')) {
    (*(char * PTR32 *)(gen_frame + 0x14)) = (*(char * PTR32 *)(gen_frame + 0x14)) + 1;
    (*(char * PTR32 *)(gen_frame + 0x18)) = (char *)((int)(*(char * PTR32 *)(gen_frame + 0x18)) + -1);
    (*(undefined8 *)(gen_frame + 0xc)) = 0;
    uVar1 = F_00e1c0f0(&(*(char * PTR32 *)(gen_frame + 0x14)),&(*(undefined8 *)(gen_frame + 0xc)));
    *param_2 = (undefined4)(*(undefined8 *)(gen_frame + 0xc));
    return uVar1;
  }
  return 1;
}

/* ref: FUN_00e1c5d0 */
uint F_00e1c5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1c5d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = F_00e1c430(this,param_2,((undefined1 *)(gen_frame + 0x4)));
  *(bool *)param_1 = uVar1 == 0;
  return param_1;
}

/* ref: FUN_00e1c600 */
uint F_00e1c600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1c600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(char * PTR32 *)(gen_frame + 0x4)) = (char *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x8)) = (char *)0x0;
  uVar1 = F_00e1c430(this,param_1,&(*(char * PTR32 *)(gen_frame + 0x4)));
  if (((uVar1 == 0) && (*(*(char * PTR32 *)(gen_frame + 0x4)) == '\"')) && (*(char *)((int)(*(char * PTR32 *)(gen_frame + 0x8)) + -1) == '\"')) {
    (*(char * PTR32 *)(gen_frame + 0x4)) = (*(char * PTR32 *)(gen_frame + 0x4)) + 1;
    (*(char * PTR32 *)(gen_frame + 0x8)) = (char *)((int)(*(char * PTR32 *)(gen_frame + 0x8)) + -1);
    uVar1 = F_00e1c170((uint)&(*(char * PTR32 *)(gen_frame + 0x4)),param_2);
    return uVar1;
  }
  return 1;
}

/* ref: FUN_00e1c660 */
uint F_00e1c660(unsigned int gen_a0)
{
  GEN_ENTER(0xe1c660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 0x6c) == (*(uint *)((int)this + 0x70) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x68),8);
  }
  piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0x68) + *(int *)((int)this + 0x6c) * 8)));
  *(int *)((int)this + 0x6c) = *(int *)((int)this + 0x6c) + 1;
  *piVar1 = *(int *)((int)this + 0x44) - *(int *)((int)this + 0x40);
  uVar2 = (*(int *)((int)this + 0x48) - *(int *)((int)this + 0x4c)) - *(int *)((int)this + 0x40);
  piVar1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00e1c6b0 */
uint F_00e1c6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1c6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114e678));
  F_00da3de0((undefined *)((int)this + 8),local_8);
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x80000000;
  F_00e25550((undefined *)((int)this + 0x30),param_1);
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0x80000000;
  *(undefined4 *)((int)this + 0x74) = 6;
  return (uint)this;
}

/* ref: FUN_00e1c720 */
uint F_00e1c720(unsigned int gen_a0)
{
  GEN_ENTER(0xe1c720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  int iVar5;
  int iVar6;
  int iVar7;
  uint local_8;
  
  F_00da3cd0((undefined *)((int)this + 8));
  iVar7 = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  if (1 < *(int *)((int)this + 0x6c)) {
    piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0x68) + 8)));
    iVar6 = (*(int *)((int)this + 0x6c) - 2U >> 1) + 1;
    do {
      piVar1 = piVar3 + 1;
      iVar5 = *piVar3;
      piVar3 = piVar3 + 4;
      iVar6 = iVar6 + -1;
      iVar7 = iVar7 + 1 + (*piVar1 - iVar5);
    } while (iVar6 != 0);
  }
  uVar4 = *(uint *)((int)this + 0x2c) & 0x3fffffff;
  if ((int)uVar4 < iVar7) {
    iVar6 = uVar4 * 2;
    if ((int)(uVar4 * 2) <= iVar7) {
      iVar6 = iVar7;
    }
    bVar2 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x24),iVar6,1);
    uVar4 = CONCAT31(extraout_var,bVar2);
  }
  *(int *)((int)this + 0x28) = iVar7;
  iVar7 = *(int *)((int)this + 0x24);
  local_8 = 1;
  if (1 < *(int *)((int)this + 0x6c)) {
    do {
      piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0x68) + local_8 * 8)));
      iVar6 = *piVar3;
      iVar5 = piVar3[1] - iVar6;
      F_00da0e40(iVar7,*(int *)((int)this + 0x4c) + iVar6 + *(int *)((int)this + 0x40),iVar5);
      *(undefined1 *)(iVar5 + iVar7) = 0;
      if (*(uint *)((int)this + 0x1c) == (*(uint *)((int)this + 0x20) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x18),4);
      }
      *((int *)GEN_TOP((*(int *)((int)this + 0x18) + *(int *)((int)this + 0x1c) * 4))) = iVar7;
      *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 1;
      F_00da3a20((undefined *)((int)this + 8),iVar7,local_8 + 1);
      uVar4 = local_8 + 2;
      iVar7 = iVar5 + 1 + iVar7;
      local_8 = uVar4;
    } while ((int)uVar4 < *(int *)((int)this + 0x6c));
  }
  return uVar4;
}

/* ref: FUN_00e1c830 */
uint F_00e1c830(unsigned int gen_a0)
{
  GEN_ENTER(0xe1c830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  bool bVar2;
  
  uVar1 = F_00e25a70((undefined *)((int)this + 0x30));
  if (uVar1 == 0xb) {
    uVar1 = F_00e25a70((undefined *)((int)this + 0x30));
    if (uVar1 == 8) {
      F_00e1c660(this);
      uVar1 = F_00e25a70((undefined *)((int)this + 0x30));
      return (-(uint)(uVar1 != 6) & 3) + 3;
    }
  }
  else {
    bVar2 = uVar1 == 8;
    while (bVar2) {
      F_00e1c660(this);
      uVar1 = F_00e25a70((undefined *)((int)this + 0x30));
      if (uVar1 == 6) {
        F_00e1c720(this);
        return 1;
      }
      if (uVar1 != 8) {
        if (uVar1 != 0xb) {
          return 6;
        }
        uVar1 = F_00e25a70((undefined *)((int)this + 0x30));
        F_00e1c720(this);
        return (uint)(uVar1 != 6) * 4 + 2;
      }
      F_00e1c660(this);
      uVar1 = F_00e25a70((undefined *)((int)this + 0x30));
      if (uVar1 != 9) {
        return 6;
      }
      uVar1 = F_00e25a70((undefined *)((int)this + 0x30));
      bVar2 = uVar1 == 10;
    }
  }
  return 6;
}

/* ref: FUN_00e1c8f0 */
uint F_00e1c8f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe1c8f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00e25a70((undefined *)((int)this + 0x30));
  if (uVar1 == 8) {
    while( true ) {
      F_00e1c660(this);
      uVar1 = F_00e25a70((undefined *)((int)this + 0x30));
      if (uVar1 == 7) {
        F_00e1c720(this);
        return 0;
      }
      if (uVar1 != 8) break;
      F_00e1c660(this);
      uVar1 = F_00e25a70((undefined *)((int)this + 0x30));
      if (uVar1 != 9) {
        return 6;
      }
      uVar1 = F_00e25a70((undefined *)((int)this + 0x30));
      if (uVar1 != 10) {
        return 6;
      }
    }
  }
  return 6;
}

/* ref: FUN_00e1c950 */
uint F_00e1c950(unsigned int gen_a0)
{
  GEN_ENTER(0xe1c950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x1c) = 0;
  F_00da3cd0((undefined *)((int)this + 8));
  F_00e1bc80((undefined *)((int)this + 0x38));
  *(undefined4 *)((int)this + 0x6c) = 0;
  uVar1 = F_00e25a70((undefined *)((int)this + 0x30));
  while (uVar1 < 6) {
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0: ;
      uVar1 = F_00e1c830(this);
      return uVar1;
    case 1: ;
      uVar1 = F_00e1c8f0(this);
      return uVar1;
    case 2: ;
      return 4;
    case 3: ;
      return 5;
    case 4: ;
      uVar1 = F_00e25a70((undefined *)((int)this + 0x30));
      break;
    case 5: ;
      return 7;
    }
  }
  return 6;
}

/* ref: FUN_00e1c9e0 */
uint F_00e1c9e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe1c9e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00e1c950(this);
  *(uint *)((int)this + 0x74) = uVar1;
  return uVar1;
}

/* ref: FUN_00e1c9f0 */
unsigned int F_00e1c9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1c9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  undefined * this_00;
  undefined * puVar3;
  
  do {
    uVar1 = F_00e1c9e0(this);
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0: ;
      F_00d9fe80(param_1,&REFG(undefined, 0x114e68c));
      F_00e1c4e0(this,param_1);
      F_00d9fe80(param_1,&REFG(undefined, 0x114e688));
      break;
    case 1: ;
    case 2: ;
      F_00d9fe80(param_1,&REFG(undefined, 0x1126164));
      F_00e1c4e0(this,param_1);
      if (uVar1 == 2) {
        F_00d9fe80(param_1,&REFG(undefined, 0x1080808));
      }
      F_00d9fe80(param_1,&REFG(undefined, 0x114d124));
      break;
    case 3: ;
      puVar3 = &REFG(undefined, 0x114d124);
      uVar1 = F_00e1c480(this,((undefined1 *)(gen_frame + 0x14)));
      uVar2 = F_00d9fe80(param_1,&REFG(undefined, 0x114e684));
      this_00 = (undefined *)F_0105a4c0(uVar2,uVar1);
      F_00d9fe80(this_00,puVar3);
      break;
    case 4: ;
    case 5: ;
      uVar1 = F_00e1c4c0(this,((undefined1 *)(gen_frame + 0xc)));
      F_0105a4c0(param_1,uVar1);
      break;
    case 6: ;
    case 7: ;
      return 0;
    }
  } while( true );
}

/* ref: FUN_00e1caf0 */
uint F_00e1caf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1caf0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e1cb20 */
uint F_00e1cb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1cb20u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e1cb30 */
uint F_00e1cb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1cb30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e1cb80 */
uint F_00e1cb80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1cb80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x14) + *(int *)((int)this + 8);
  *param_1 = iVar1 + param_2;
  param_1[1] = iVar1 + param_3;
  return (uint)param_1;
}

/* ref: FUN_00e1cba0 */
uint F_00e1cba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1cba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x18);
  *param_1 = *(int *)((int)this + 0x1c) + *(int *)((int)this + 0x14);
  param_1[1] = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00e1cbd0 */
uint F_00e1cbd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1cbd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x1c) + *(int *)((int)this + 0x10);
  *param_1 = iVar1 + param_2;
  param_1[1] = iVar1 + param_3;
  return (uint)param_1;
}

/* ref: FUN_00e1cc10 */
uint F_00e1cc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1cc10u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e1cc50 */
uint F_00e1cc50(unsigned int gen_a0)
{
  GEN_ENTER(0xe1cc50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00e1cc80 */
uint F_00e1cc80(unsigned int gen_a0)
{
  GEN_ENTER(0xe1cc80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkXmlStreamParser::vf0 */
uint F_00e1ccb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1ccb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00df5bb0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e1ccf0 */
uint F_00e1ccf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1ccf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return param_1;
}

/* ref: FUN_00e1cd10 */
uint F_00e1cd10(unsigned int gen_a0)
{
  GEN_ENTER(0xe1cd10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 100))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0xc)));
  return (*(uint *)(gen_frame + 0x14));
}

/* ref: hkDataWorldNative::vf12 */
unsigned int F_00e1cd40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1cd40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: hkDataWorldNative::vf13 */
unsigned int F_00e1cd50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1cd50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: hkDataWorldNative::vf14 */
unsigned int F_00e1cd60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1cd60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: hkDataWorldNative::vf15 */
unsigned int F_00e1cd70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1cd70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: hkDataWorldNative::vf18 */
unsigned int F_00e1cd80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1cd80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: hkDataWorldNative::vf19 */
unsigned int F_00e1cd90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1cd90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: hkDataWorldNative::vf20 */
unsigned int F_00e1cda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1cda0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: hkDataWorldNative::vf21 */
unsigned int F_00e1cdb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1cdb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: hkDataWorldNative::vf22 */
unsigned int F_00e1cdc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1cdc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: hkDataWorldNative::vf17 */
unsigned int F_00e1cdd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1cdd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: hkDataWorldNative::vf23 */
uint F_00e1cde0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1cde0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: hkDataWorldNative::vf16 */
unsigned int F_00e1cdf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe1cdf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: FUN_00e1ce00 */
unsigned int F_00e1ce00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1ce00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x18))))(*(int * PTR32 *)this);
  iVar2 = 0;
  if (0 < (int)uVar1) {
    iVar3 = 0;
    do {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x1c))))(*(int * PTR32 *)this,iVar2,*param_1 + iVar3);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x10;
    } while (iVar2 < (int)uVar1);
  }
  return 0;
}

/* ref: FUN_00e1ce50 */
unsigned int F_00e1ce50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1ce50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  uint * puVar6;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = this;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 8))))(*(int * PTR32 *)this);
  *param_1 = uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0xc))))(*(int * PTR32 *)this);
  param_1[1] = uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x10))))(*(int * PTR32 *)this);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x10))))(*(int * PTR32 *)this)));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
  }
  param_1[2] = uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x18))))(*(int * PTR32 *)this);
  puVar6 = param_1 + 3;
  if ((int)(param_1[5] & 0x3fffffff) < (int)uVar1) {
    uVar3 = (param_1[5] & 0x3fffffff) * 2;
    if ((int)uVar3 <= (int)uVar1) {
      uVar3 = uVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),puVar6,uVar3,0xc);
  }
  iVar4 = 0;
  if (uVar1 != param_1[4] && -1 < (int)(uVar1 - param_1[4])) {
    do {
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uVar1 - param_1[4]));
  }
  iVar4 = 0;
  param_1[4] = uVar1;
  if (0 < (int)uVar1) {
    param_1 = (uint *)0x0;
    do {
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      ((code *)*(gen_code32 *)(*(int *)*(*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 0x1c))((int *)*(*(undefined4 * PTR32 *)(gen_frame + 0x18)),iVar4,&(*(undefined4 *)(gen_frame + 0x8)));
      puVar5 = (undefined4 *)(*puVar6 + (int)param_1);
      param_1 = (uint *)((int)param_1 + 0xc);
      iVar4 = iVar4 + 1;
      *puVar5 = (*(undefined4 *)(gen_frame + 0x8));
      puVar5[1] = (*(undefined4 *)(gen_frame + 0x10));
    } while (iVar4 < (int)uVar1);
  }
  return 0;
}

/* ref: FUN_00e1cf50 */
uint F_00e1cf50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe1cf50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this)));
  if (param_4 == 0) {
    uVar2 = F_00e1a800(this_00,param_3);
    uVar1 = uVar2;
  }
  else {
    (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
    (*(uint *)(gen_frame + 0x8)) = 0x80000080;
    (*(undefined4 *)(gen_frame + 0x4)) = 1;
    ((undefined1 *)(gen_frame + 0xc))[0] = 0;
    F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),param_3,0xffffffff);
    F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),&REFG(undefined, 0x11186a8),0xffffffff);
    F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),param_4,0xffffffff);
    F_00da4bf0(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),&REFG(undefined, 0x1118a38),0xffffffff);
    uVar1 = F_00e1a800(this_00,(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    uVar2 = (*(uint *)(gen_frame + 0x8));
    if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
    }
    (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = (undefined1 *)0x0;
    (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  }
  if (uVar1 != 0) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this,param_1,param_2,uVar1,param_5);
  }
  return uVar2;
}

/* ref: FUN_00e1d370 */
uint F_00e1d370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1d370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00e1d390 */
unsigned int F_00e1d390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1d390u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e1d3c0 */
unsigned int F_00e1d3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1d3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 4)) {
    do {
      iVar1 = iVar2 * 8;
      iVar3 = iVar2 * 8;
      iVar2 = iVar2 + 1;
      *((int *)GEN_TOP((param_1 + *(int *)(*(int *)this + iVar3)))) =
           *(int *)(*(int *)this + 4 + iVar1) + param_1;
    } while (iVar2 < *(int *)((int)this + 4));
  }
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x10)) {
    iVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      *((undefined4 *)GEN_TOP((param_1 + *((int *)GEN_TOP((*(int *)((int)this + 0xc) + iVar3)))))) =
           *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 4 + iVar3)));
      iVar3 = iVar3 + 0x10;
    } while (iVar2 < *(int *)((int)this + 0x10));
  }
  return 0;
}

/* ref: FUN_00e1d410 */
unsigned int F_00e1d410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1d410u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  undefined * pvVar4;
  uint uVar5;
  uint uVar6;
  uint local_8;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) == 0) {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 4))))
                               (*(int * PTR32 *)((int)pvVar3 + 0x2c),0x10)));
    if (pvVar4 == (undefined *)0x0) {
      pvVar4 = (undefined *)0x0;
    }
    else {
      local_8 = local_8 & 0xffffff00;
      F_00da3de0(pvVar4,local_8);
    }
    *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = pvVar4;
  }
  uVar2 = (*(undefined4 *)&gen_args[2]);
  pvVar4 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
  uVar5 = F_00da3ae0(pvVar4,(*(undefined4 *)&gen_args[2]));
  F_00da3e40(pvVar4,(int)&(*(undefined4 *)&gen_args[2]) + 3,uVar5);
  if ((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[2]) + 3)) == '\0') {
    uVar6 = F_00da0f10(uVar2,&REFG(undefined * PTR32, 0x13516ac));
    F_00da3a20(pvVar4,uVar6,0);
  }
  else {
    uVar6 = F_00da3990(pvVar4,uVar5);
    F_00da39d0(pvVar4,uVar5,0);
  }
  if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) == (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))),8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) * 8)));
  *puVar1 = (*(undefined4 *)&gen_args[1]);
  puVar1[1] = uVar6;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) + 1;
  return 0;
}

/* ref: FUN_00e1d4f0 */
uint F_00e1d4f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe1d4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  LPVOID pvVar1;
  uint uVar2;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x30);
  if (this_00 != (undefined *)0x0) {
    F_00df5070(this_00);
    F_00da3e20(this_00);
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this_00,0x10);
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  if ((*(uint *)((int)this + 0x2c) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x24),
               *(uint *)((int)this + 0x2c) * 8);
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x80000000;
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
               *(uint *)((int)this + 0x14) << 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
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

/* ref: FUN_00e1d5f0 */
uint F_00e1d5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1d5f0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e1d630 */
unsigned int F_00e1d630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1d630u, gen_a0, gen_a1, 0u, 0u);
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
  return 0;
}

/* ref: FUN_00e1d670 */
uint F_00e1d670(unsigned int gen_a0)
{
  GEN_ENTER(0xe1d670u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00e1d690 */
unsigned int F_00e1d690(unsigned int gen_a0)
{
  GEN_ENTER(0xe1d690u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x10);
  }
  return 0;
}

/* ref: FUN_00e1d6c0 */
uint F_00e1d6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1d6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00df5070(this);
  F_00da3e20(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0x10);
  }
  return (uint)this;
}

/* ref: FUN_00e1d740 */
uint F_00e1d740(unsigned int gen_a0)
{
  GEN_ENTER(0xe1d740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x114e6ac));
  uVar1 = F_00d91a80(*(undefined * PTR32 *)((int)this + 8));
  if (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0) {
    uVar1 = F_00d91a80(*(undefined * PTR32 *)((int)this + 0xc));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkPlatformObjectWriter::vf4 */
uint F_00e1d770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1d770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,param_2,param_3);
  return (uint)(uVar1 != param_3);
}

/* ref: FUN_00e1d7a0 */
uint F_00e1d7a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe1d7a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 8) + 0xc;
}

/* ref: FUN_00e1d7b0 */
uint F_00e1d7b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1d7b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(uint *)&gen_args[1]);
  uVar1 = F_00dbd9c0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),(*(uint *)&gen_args[1]),&(*(uint *)&gen_args[1]));
  if (uVar1 == 0) {
    return (*(uint *)&gen_args[1]);
  }
  uVar2 = F_00e25db0(uVar2,&REFG(undefined, 0x15da330),((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),0,0,0);
  if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) == (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))),4);
  }
  *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) * 4))) = uVar2;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 1;
  F_00e05b60((*(undefined * PTR32 *)&gen_args[2]),uVar2,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14,1);
  return uVar2;
}

/* ref: hkPlatformObjectWriter::vf3 */
uint F_00e1d840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe1d840u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * this_00;
  uint uVar1;
  char * pcVar2;
  undefined4 uVar3;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  if (this_00 == (undefined *)0x0) {
    (*(uint *)(gen_frame + 0x48)) = (*(uint *)&gen_args[3]);
  }
  else {
    uVar1 = F_00e1d7a0((*(undefined * PTR32 *)&gen_args[0]));
    (*(uint *)(gen_frame + 0x48)) = F_00e1d7b0(this_00,(*(uint *)&gen_args[3]),uVar1);
  }
  F_0105aa30(((undefined1 *)(gen_frame + 0x34)));
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc))) != 0) {
    pcVar2 = "hkClass";
    uVar1 = F_00d92610((*(uint *)(gen_frame + 0x48)));
    uVar1 = F_00da0d20(uVar1,pcVar2);
    if (uVar1 == 0) {
      uVar1 = F_00e1d7a0((*(undefined * PTR32 *)&gen_args[0]));
      (*(uint *)(gen_frame + 0x48)) = F_00e1d7b0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc))),&REFG(undefined, 0x15da330),uVar1);
      uVar1 = F_00e1d7a0((*(undefined * PTR32 *)&gen_args[0]));
      (*(uint *)(gen_frame + 0x44)) = F_00e1d7b0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc))),(*(undefined4 *)&gen_args[2]),uVar1);
      uVar3 = 0;
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[1]) + 0x20))))((*(undefined * PTR32 *)&gen_args[1]));
      F_0105a9d0(((undefined1 *)(gen_frame + 0x34)),uVar1,uVar3);
      (*(undefined4 *)(gen_frame + 0x8)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x14)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x20)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x2c)) = 0x80000000;
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      (*(undefined4 *)(gen_frame + 0x24)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0xc))))
                (*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))),(*(uint *)(gen_frame + 0x44)),(*(uint *)&gen_args[3]),(*(undefined * PTR32 *)&gen_args[1]),(*(uint *)(gen_frame + 0x48)),&(*(undefined4 *)(gen_frame + 0x0)));
      (*(undefined * PTR32 *)&gen_args[1]) = ((undefined1 *)(gen_frame + 0x34));
      F_00e1d4f0(&(*(undefined4 *)(gen_frame + 0x0)));
    }
  }
  ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0xc))))
            (*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))),(*(undefined4 *)&gen_args[2]),(*(uint *)&gen_args[3]),(*(undefined * PTR32 *)&gen_args[1]),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)&gen_args[4]));
  pcVar2 = ((char *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[1]) + 0xc))))((*(undefined * PTR32 *)&gen_args[1]),(int)&(*(uint *)&gen_args[3]) + 3)));
  return (uint)(*pcVar2 == '\0');
}

/* ref: FUN_00e1d980 */
uint F_00e1d980(unsigned int gen_a0)
{
  GEN_ENTER(0xe1d980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114e6c4));
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0x80000000;
  return (uint)this;
}

/* ref: FUN_00e1d9c0 */
uint F_00e1d9c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe1d9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114e6c4));
  if (0 < *(int *)((int)this + 0x24)) {
    do {
      F_00e25d30(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20) + iVar2 * 4))));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x24));
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  if (-1 < *(int *)((int)this + 0x28)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x20),
               *(int *)((int)this + 0x28) * 4);
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0x80000000;
  F_00dbdb20((undefined *)((int)this + 0x14),&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  uVar1 = F_00dbdb20((undefined *)((int)this + 8),&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00e1da60 */
uint F_00e1da60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1da60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPVOID pvVar1;
  undefined * pvVar2;
  uint uVar3;
  char * pcVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x114e6ac));
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                             (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x18)));
  *(undefined2 *)((int)pvVar2 + 4) = 0x18;
  F_00e05640(&(*(undefined * PTR32 *)(gen_frame + 0x8)),&REFG(undefined4, 0x135491c));
  uVar3 = F_00e26520(pvVar2,&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_1,param_3);
  *(uint *)((int)this + 8) = uVar3;
  pcVar4 = (char *)F_00e1d7a0(this);
  if ((((*pcVar4 == (char)REFG(undefined4, 0x135491c)) && (pcVar4[1] == (char)((uint)REFG(undefined4, 0x135491c) >> 8))) &&
      (pcVar4[2] == (*(undefined1 *)((char *)&REFG(undefined4, 0x135491c) + 2)))) && (pcVar4[3] == (*(undefined1 *)((char *)&REFG(undefined4, 0x135491c) + 3)))) {
    *(undefined4 *)((int)this + 0xc) = 0;
    return (uint)this;
  }
  if (param_2 != (undefined *)0x0) {
    F_00d919e0(param_2);
    *(undefined * PTR32 *)((int)this + 0xc) = param_2;
    return (uint)this;
  }
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                             (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x2c)));
  *(undefined2 *)((int)pvVar2 + 4) = 0x2c;
  uVar3 = F_00e1d980(pvVar2);
  *(uint *)((int)this + 0xc) = uVar3;
  return (uint)this;
}

/* ref: FUN_00e1db50 */
uint F_00e1db50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1db50u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e1dba0 */
uint F_00e1dba0(unsigned int gen_a0)
{
  GEN_ENTER(0xe1dba0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00e1dbd0 */
uint F_00e1dbd0(unsigned int gen_a0)
{
  GEN_ENTER(0xe1dbd0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00e1dc00 */
uint F_00e1dc00(unsigned int gen_a0)
{
  GEN_ENTER(0xe1dc00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00e1dc30 */
uint F_00e1dc30(unsigned int gen_a0)
{
  GEN_ENTER(0xe1dc30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkPlatformObjectWriter::vf0 */
uint F_00e1dc80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1dc80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e1d740(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e1dcc0 */
uint F_00e1dcc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1dcc0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e1dd20 */
uint F_00e1dd20(unsigned int gen_a0)
{
  GEN_ENTER(0xe1dd20u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e1dd60 */
uint F_00e1dd60(unsigned int gen_a0)
{
  GEN_ENTER(0xe1dd60u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e1dda0 */
uint F_00e1dda0(unsigned int gen_a0)
{
  GEN_ENTER(0xe1dda0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkPlatformObjectWriter::Cache::vf0 */
uint F_00e1ddd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1ddd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e1d9c0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e1de10 */
uint F_00e1de10(unsigned int gen_a0)
{
  GEN_ENTER(0xe1de10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e1de20 */
uint F_00e1de20(unsigned int gen_a0)
{
  GEN_ENTER(0xe1de20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if ((param_1 & 0x7f800000) != 0x7f800000) {
    return 5;
  }
  if (param_1 == 0x7f800000) {
    return 1;
  }
  if (param_1 == 0xff800000) {
    return 0;
  }
  if (param_1 == 0xffc00000) {
    return 4;
  }
  return ~(param_1 >> 0x1f) & 1 | 2;
}

/* ref: FUN_00e1de80 */
uint F_00e1de80(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1de80u, 0u, gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00e1de20((undefined4)gen_fl2bits(param_1));
  if (uVar1 == 5) {
    uVar1 = F_00da4890(param_2,&REFG(undefined, 0x114e73c),(int)(ulonglong)gen_d2bits((double)param_1),
                         (int)((ulonglong)gen_d2bits((double)param_1) >> 0x20));
    return uVar1;
  }
  uVar1 = F_00da46f0(param_2,(&REFG(undefined * PTR32, 0x114e70c))[uVar1]);
  return uVar1;
}

/* ref: FUN_00e1ded0 */
uint F_00e1ded0(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1ded0u, 0u, gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00e1de20((undefined4)gen_fl2bits(param_1));
  if (uVar1 == 5) {
    F_00da4890(param_2,&REFG(undefined, 0x114e73c),(int)(ulonglong)gen_d2bits((double)param_1),
                 (int)((ulonglong)gen_d2bits((double)param_1) >> 0x20));
    uVar1 = F_00da4230(param_2,0x2e,0,0x7fffffff);
    if (uVar1 == 0xffffffff) {
      uVar1 = F_00da4d70(param_2,&REFG(undefined, 0x114e740));
    }
    return uVar1;
  }
  uVar1 = F_00da46f0(param_2,(&REFG(undefined * PTR32, 0x114e70c))[uVar1]);
  return uVar1;
}

/* ref: FUN_00e1df40 */
uint F_00e1df40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1df40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char * pcVar1;
  char * pcVar2;
  undefined4 * this;
  char * pcVar3;
  int iVar4;
  float fVar5;
  
  this = (*(undefined4 * PTR32 *)&gen_args[0]);
  pcVar3 = ((char *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[0])[1]));
  pcVar1 = ((char *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0])));
  pcVar2 = pcVar1;
  if (0x40 < (int)pcVar3 - (int)pcVar1) {
    return 1;
  }
  while( true ) {
    if (pcVar3 <= pcVar2) {
      F_00da0e40(((undefined1 *)(gen_frame + 0x8)),pcVar1,(int)pcVar3 - (int)pcVar1);
      ((undefined1 *)(gen_frame + 0x8))[(int)pcVar3 - (int)pcVar1] = 0;
      fVar5 = F_00da0ec0(((undefined1 *)(gen_frame + 0x8)));
      *(*(float * PTR32 *)&gen_args[1]) = fVar5;
      return 0;
    }
    if (*pcVar2 == '#') break;
    pcVar2 = pcVar2 + 1;
  }
  iVar4 = 0;
  do {
    pcVar3 = (char *)F_0105a5b0(this,(int)&(*(undefined4 * PTR32 *)&gen_args[0]) + 3,(&REFG(undefined * PTR32, 0x114e70c))[iVar4]);
    if (*pcVar3 != '\0') {
      *(*(float * PTR32 *)&gen_args[1]) = gen_bits2f((&REFG(float, 0x114e724))[iVar4]);
      return 0;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  return 1;
}

/* ref: FUN_00e1dff0 */
uint F_00e1dff0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xe1dff0u, gen_a0, 0u, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00e1de20((undefined4)gen_fl2bits(param_2));
  uVar2 = F_00e1de20((undefined4)gen_fl2bits(param_3));
  if (uVar1 != uVar2) {
    *param_1 = 0;
    return (uint)param_1;
  }
  if ((uVar1 == 5) &&
     ((GEN_ISNAN(param_2) || GEN_ISNAN(param_3)) == ((GEN_ISNAN(param_2) || GEN_ISNAN(param_3)) || param_2 == param_3))) {
    *param_1 = 0;
    return (uint)param_1;
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00e1e050 */
uint F_00e1e050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1e050u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = (char *)(param_1 + *param_2);
  uVar3 = 0;
  cVar1 = *pcVar2;
  while (cVar1 != '\0') {
    uVar3 = uVar3 + 1;
    cVar1 = pcVar2[uVar3];
  }
  do {
    uVar3 = uVar3 + 1;
  } while ((uVar3 & 3) != 0);
  *param_2 = *param_2 + uVar3;
  return (uint)pcVar2;
}

/* ref: FUN_00e1e080 */
uint F_00e1e080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1e080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)((int)this + 0x24);
  iVar1 = uVar5 + param_1;
  (*(int *)(gen_frame + 0x8)) = 0;
  if (*(uint *)((int)this + 0x28) != uVar5 && -1 < (int)(*(uint *)((int)this + 0x28) - uVar5)) {
    do {
      uVar3 = F_00e1e1c0(iVar1,&(*(int *)(gen_frame + 0x8)));
      if (uVar3 == 0xffffffff) {
        return 0xffffffff;
      }
      uVar4 = F_00e1e050(iVar1,&(*(int *)(gen_frame + 0x8)));
      if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,8);
      }
      puVar2 = (uint *)(*param_2 + param_2[1] * 8);
      uVar5 = param_2[1] + 1;
      param_2[1] = uVar5;
      *puVar2 = uVar4;
      puVar2[1] = uVar3 + param_1;
    } while ((*(int *)(gen_frame + 0x8)) < *(int *)((int)this + 0x28) - *(int *)((int)this + 0x24));
  }
  return uVar5;
}

/* ref: FUN_00e1e120 */
uint F_00e1e120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1e120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)((int)this + 0x28);
  iVar1 = uVar5 + param_1;
  (*(int *)(gen_frame + 0x8)) = 0;
  if (*(uint *)((int)this + 0x2c) != uVar5 && -1 < (int)(*(uint *)((int)this + 0x2c) - uVar5)) {
    do {
      uVar3 = F_00e1e1c0(iVar1,&(*(int *)(gen_frame + 0x8)));
      if (uVar3 == 0xffffffff) {
        return 0xffffffff;
      }
      uVar4 = F_00e1e050(iVar1,&(*(int *)(gen_frame + 0x8)));
      if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,8);
      }
      puVar2 = (uint *)(*param_2 + param_2[1] * 8);
      uVar5 = param_2[1] + 1;
      param_2[1] = uVar5;
      *puVar2 = uVar4;
      puVar2[1] = uVar3 + param_1;
    } while ((*(int *)(gen_frame + 0x8)) < *(int *)((int)this + 0x2c) - *(int *)((int)this + 0x28));
  }
  return uVar5;
}

/* ref: FUN_00e1e1c0 */
uint F_00e1e1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1e1c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  return *(uint *)(iVar1 + param_1);
}

/* ref: FUN_00e1e220 */
uint F_00e1e220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1e220u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e1e260 */
uint F_00e1e260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1e260u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e1e2a0 */
uint F_00e1e2a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe1e2a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00e1e2d0 */
uint F_00e1e2d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe1e2d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00e1e300 */
uint F_00e1e300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1e300u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00e1e310 */
uint F_00e1e310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1e310u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00e1e380 */
uint F_00e1e380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1e380u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = (*(uint *)(in_ecx + 4) & 0x80000000) == 0;
  return param_2;
}

/* ref: FUN_00e1e3a0 */
uint F_00e1e3a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe1e3a0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  return (uint)(((*(uint *)&gen_args[0]) - 1 & (*(uint *)&gen_args[0])) == 0);
}

/* ref: FUN_00e1e3c0 */
uint F_00e1e3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1e3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00e1e3d0 */
uint F_00e1e3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1e3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00e1e5c0 */
uint F_00e1e5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1e5c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x18;
}

/* ref: FUN_00e1e610 */
uint F_00e1e610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1e610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)this + 4 + param_2 * 0xc);
  *param_1 = *(undefined4 *)(*(int *)this + param_2 * 0xc);
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00e1e630 */
uint F_00e1e630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1e630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)(*(int *)this + 8 + param_1 * 0xc) = param_2;
  return param_1 * 3;
}

/* ref: FUN_00e1e650 */
unsigned int F_00e1e650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1e650u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e1e680 */
uint F_00e1e680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1e680u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00e1e6a0 */
uint F_00e1e6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1e6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = F_00e07250(this,param_1,param_2);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    *param_3 = *(undefined4 *)(*(int *)this + 8 + uVar1 * 0xc);
    return 0;
  }
  return 1;
}

/* ref: FUN_00e1e6f0 */
uint F_00e1e6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1e6f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e1e750 */
uint F_00e1e750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1e750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  *(undefined4 *)this = param_1;
  *(uint *)((int)this + 4) = param_2 | 0x80000000;
  *(uint *)((int)this + 8) = param_3 - 1U;
  return param_3 - 1U;
}

/* ref: FUN_00e1e770 */
uint F_00e1e770(unsigned int gen_a0)
{
  GEN_ENTER(0xe1e770u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e1e790 */
unsigned int F_00e1e790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1e790u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e1e7e0 */
unsigned int F_00e1e7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1e7e0u, gen_a0, gen_a1, 0u, 0u);
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
  return 0;
}

/* ref: FUN_00e1ee40 */
uint F_00e1ee40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1ee40u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  undefined4 * puVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  
  puVar3 = (*(undefined4 * PTR32 *)&gen_args[3]);
  iVar2 = *((int *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[3])[2]));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((iVar2 == 9) && (*((int *)GEN_TOP((((int *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[3])[2])))[1])) != 3)) {
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))) + 0xc))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))),&(*(int * PTR32 *)(gen_frame + 0xc)),*(*(undefined4 * PTR32 *)&gen_args[3]));
    piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x28))((*(int * PTR32 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)))));
    if (piVar4 != (int *)0x0) {
      *(short *)((int)piVar4 + 6) = *(short *)((int)piVar4 + 6) + 1;
      piVar4[2] = piVar4[2] + 1;
    }
    (*(int * PTR32 *)&gen_args[2]) = piVar4;
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))) + 0xc))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))),&(*(int * PTR32 *)(gen_frame + 0xc)),*puVar3);
    piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x28))((*(int * PTR32 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)))));
    if (piVar5 != (int *)0x0) {
      *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + 1;
      piVar5[2] = piVar5[2] + 1;
    }
    (*(int * PTR32 *)&gen_args[1]) = piVar5;
    uVar6 = F_00e19c70(puVar3[2]);
    ((code *)*(gen_code32 *)(*piVar5 + 0x10))(piVar5,uVar6);
    uVar6 = F_00e19c70(puVar3[2]);
    uVar6 = F_00e1e830((*(undefined * PTR32 *)(gen_frame + 0x18)),&(*(int * PTR32 *)&gen_args[1]),&(*(int * PTR32 *)&gen_args[2]),uVar6);
    *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + -1;
    piVar1 = piVar5 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      uVar6 = ((code *)*(gen_code32 *)*piVar5)(piVar5,1);
    }
    if (piVar4 == (int *)0x0) {
      return uVar6;
    }
  }
  else {
    if (iVar2 != 8) {
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))) + 0xc))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))),&(*(int * PTR32 *)(gen_frame + 0xc)),*(*(undefined4 * PTR32 *)&gen_args[3]));
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))) + 0xc))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))),((undefined1 *)(gen_frame + 0x14)),*puVar3);
      uVar6 = F_00e1ff00((*(undefined * PTR32 *)&gen_args[0]),(*(int * PTR32 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(uint)((undefined1 *)(gen_frame + 0x14)));
      return uVar6;
    }
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))) + 0xc))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))),&(*(int * PTR32 *)(gen_frame + 0xc)),*(*(undefined4 * PTR32 *)&gen_args[3]));
    piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x28))((*(int * PTR32 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)))));
    if (piVar4 != (int *)0x0) {
      *(short *)((int)piVar4 + 6) = *(short *)((int)piVar4 + 6) + 1;
      piVar4[2] = piVar4[2] + 1;
    }
    (*(int * PTR32 *)&gen_args[2]) = piVar4;
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))) + 0xc))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))),&(*(int * PTR32 *)(gen_frame + 0xc)),*puVar3);
    piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x28))((*(int * PTR32 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)))));
    if (piVar5 != (int *)0x0) {
      *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + 1;
      piVar5[2] = piVar5[2] + 1;
    }
    (*(int * PTR32 *)&gen_args[1]) = piVar5;
    uVar6 = ((code *)*(gen_code32 *)(*piVar4 + 0x14))(piVar4);
    ((code *)*(gen_code32 *)(*piVar5 + 0x10))(piVar5,uVar6);
    uVar6 = ((code *)*(gen_code32 *)(*piVar4 + 0x14))(piVar4);
    uVar6 = F_00e1e830((*(undefined * PTR32 *)(gen_frame + 0x18)),&(*(int * PTR32 *)&gen_args[1]),&(*(int * PTR32 *)&gen_args[2]),uVar6);
    *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + -1;
    piVar1 = piVar5 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      uVar6 = ((code *)*(gen_code32 *)*piVar5)(piVar5,1);
    }
  }
  *(short *)((int)piVar4 + 6) = *(short *)((int)piVar4 + 6) + -1;
  piVar5 = piVar4 + 2;
  *piVar5 = *piVar5 + -1;
  if (*piVar5 != 0) {
    return uVar6;
  }
  uVar6 = ((code *)*(gen_code32 *)*piVar4)(piVar4,1);
  return uVar6;
}

/* ref: FUN_00e1f040 */
uint F_00e1f040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1f040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_00e1f070 */
uint F_00e1f070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1f070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined8 * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined * this_00;
  int * piVar5;
  int * in_ecx;
  undefined4 * puVar6;
  uint * puVar7;
  int iVar8;
  undefined4 uVar9;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = this;
  (*(uint *)(gen_frame + 0x38)) = 0;
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x24))))(*(int * PTR32 *)this,param_1);
  if (uVar3 == 0) {
    (*(int *)(gen_frame + 0x20)) = 0;
    (*(uint *)(gen_frame + 0x24)) = 0;
    (*(uint *)(gen_frame + 0x28)) = 0x80000000;
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x20)),10,0x18);
    uVar3 = param_1;
    while ((uVar3 != 0 &&
           (uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x24))))(*(int * PTR32 *)this,uVar3), uVar4 == 0))) {
      (*(int * PTR32 *)(gen_frame + 0x30)) = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x24))))
                                  (*(int * PTR32 *)((int)this + 4),uVar3)));
      if ((*(uint *)(gen_frame + 0x24)) == ((*(uint *)(gen_frame + 0x28)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x20)),0x18);
      }
      iVar8 = (*(int *)(gen_frame + 0x20)) + (*(uint *)(gen_frame + 0x24)) * 0x18;
      if (iVar8 != 0) {
        *(undefined4 *)(iVar8 + 0xc) = 0;
        *(undefined4 *)(iVar8 + 0x10) = 0;
        *(undefined4 *)(iVar8 + 0x14) = 0x80000000;
      }
      iVar8 = (*(uint *)(gen_frame + 0x24)) * 0x18;
      (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x24)) + 1;
      F_00e1ce50(&(*(int * PTR32 *)(gen_frame + 0x30)),(*(int *)(gen_frame + 0x20)) + iVar8);
      uVar3 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x30)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x30)));
      if (uVar3 == 0) {
        uVar3 = 0;
      }
      else {
        (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x38)) | 1;
        piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x30)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x30)))));
        uVar3 = ((code *)*(gen_code32 *)(*piVar5 + 8))(piVar5);
      }
      if (((*(uint *)(gen_frame + 0x38)) & 1) != 0) {
        (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x38)) & 0xfffffffe;
      }
    }
    (*(int *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x24)) - 1;
    if (-1 < (*(int *)(gen_frame + 0x2c))) {
      (*(int * PTR32 *)(gen_frame + 0x30)) = (int *)((*(int *)(gen_frame + 0x2c)) * 0x18);
      do {
        iVar8 = 0;
        puVar6 = (undefined4 *)((*(int *)(gen_frame + 0x20)) + (int)(*(int * PTR32 *)(gen_frame + 0x30)));
        (*(int *)(gen_frame + 0x14)) = 0;
        (*(uint *)(gen_frame + 0x18)) = 0;
        (*(uint *)(gen_frame + 0x1c)) = 0x80000000;
        (*(undefined4 *)(gen_frame + 0x8)) = *puVar6;
        (*(undefined4 *)(gen_frame + 0xc)) = puVar6[1];
        (*(undefined4 *)(gen_frame + 0x10)) = puVar6[2];
        uVar3 = puVar6[4];
        if (0 < (int)uVar3) {
          F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x14)),((int)uVar3 < 0) - 1 & uVar3,0xc);
        }
        (*(uint *)(gen_frame + 0x18)) = uVar3;
        if (0 < (int)uVar3) {
          (*(uint *)(gen_frame + 0x38)) = uVar3;
          do {
            iVar2 = puVar6[3];
            puVar1 = (undefined8 *)(iVar8 + (*(int *)(gen_frame + 0x14)));
            *puVar1 = *(undefined8 *)(iVar2 + iVar8);
            *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(iVar2 + 8 + iVar8);
            uVar9 = *(undefined4 *)(iVar2 + 4 + iVar8);
            this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 0x2c))((int *)*(*(undefined4 * PTR32 *)(gen_frame + 0x34)))));
            uVar3 = F_00e1aff0(this_00,uVar9);
            iVar8 = iVar8 + 0xc;
            (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x38)) - 1;
            *(uint *)((int)puVar1 + 4) = uVar3;
          } while ((*(uint *)(gen_frame + 0x38)) != 0);
        }
        ((code *)*(gen_code32 *)(*(int *)*(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 0xc))((int *)*(*(undefined4 * PTR32 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x8)));
        (*(uint *)(gen_frame + 0x18)) = 0;
        if (-1 < (int)(*(uint *)(gen_frame + 0x1c))) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                    (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x14)),((*(uint *)(gen_frame + 0x1c)) & 0x3fffffff) * 0xc);
        }
        (*(int * PTR32 *)(gen_frame + 0x30)) = (*(int * PTR32 *)(gen_frame + 0x30)) + -6;
        (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + -1;
        this = (*(undefined4 * PTR32 *)(gen_frame + 0x34));
      } while (-1 < (*(int *)(gen_frame + 0x2c)));
    }
    piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x24))))
                              (*(int * PTR32 *)((int)this + 4),param_1)));
    iVar8 = 0;
    uVar3 = ((code *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5);
    if (0 < (int)uVar3) {
      do {
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(int *)(gen_frame + 0x14)) = 0;
        (*(uint *)(gen_frame + 0x18)) = 0;
        (*(uint *)(gen_frame + 0x1c)) = 0;
        ((code *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5,iVar8,&(*(undefined4 *)(gen_frame + 0x10)));
        in_ecx = (int *)F_00e19d40((*(uint *)(gen_frame + 0x18)));
        if (*in_ecx == 6) {
          uVar3 = F_00e19c80(in_ecx);
          F_00e1f070((*(undefined4 * PTR32 *)(gen_frame + 0x34)),uVar3);
        }
        iVar8 = iVar8 + 1;
        uVar3 = ((code *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5);
      } while (iVar8 < (int)uVar3);
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)*(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 0x24))((int *)*(*(undefined4 * PTR32 *)(gen_frame + 0x34)),param_1);
    iVar8 = (*(uint *)(gen_frame + 0x24)) - 1;
    if (-1 < iVar8) {
      puVar7 = (uint *)((*(int *)(gen_frame + 0x20)) + 0x14 + iVar8 * 0x18);
      do {
        puVar7[-1] = 0;
        if (-1 < (int)*puVar7) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                    (&REFG(undefined * PTR32, 0x13516ac),puVar7[-2],(*puVar7 & 0x3fffffff) * 0xc);
        }
        puVar7[-2] = 0;
        *puVar7 = 0x80000000;
        iVar8 = iVar8 + -1;
        puVar7 = puVar7 + -6;
      } while (-1 < iVar8);
    }
    (*(uint *)(gen_frame + 0x24)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x28))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x20)),((*(uint *)(gen_frame + 0x28)) & 0x3fffffff) * 0x18);
    }
  }
  return uVar3;
}

/* ref: FUN_00e1f390 */
uint F_00e1f390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1f390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * in_ecx;
  int iVar4;
  int iVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)*param_2 + 0x24))((int *)*param_2);
  if ((int)(param_1[2] & 0x3fffffffU) < (int)uVar1) {
    uVar3 = (param_1[2] & 0x3fffffffU) * 2;
    if ((int)uVar3 <= (int)uVar1) {
      uVar3 = uVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),param_1,uVar3,0x10);
  }
  iVar4 = uVar1 - param_1[1];
  if (0 < iVar4) {
    puVar2 = (undefined4 *)(param_1[1] * 0x10 + *param_1 + 8);
    do {
      if (puVar2 != (undefined4 *)0x8) {
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar2 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = uVar1;
  ((code *)*(gen_code32 *)(*(int *)*param_2 + 0x30))((int *)*param_2,param_1);
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0x80000000;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)*param_3 + 0x24))((int *)*param_3);
  if ((int)((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) < (int)uVar1) {
    uVar3 = ((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) * 2;
    if ((int)uVar3 <= (int)uVar1) {
      uVar3 = uVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0xc)),uVar3,0x10);
  }
  iVar4 = uVar1 - (*(uint *)(gen_frame + 0x10));
  iVar5 = 0;
  if (0 < iVar4) {
    puVar2 = (undefined4 *)((*(uint *)(gen_frame + 0x10)) * 0x10 + (*(int *)(gen_frame + 0xc)) + 8);
    do {
      if (puVar2 != (undefined4 *)0x8) {
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar2 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  (*(uint *)(gen_frame + 0x10)) = uVar1;
  ((code *)*(gen_code32 *)(*(int *)*param_3 + 0x30))((int *)*param_3,&(*(int *)(gen_frame + 0xc)));
  iVar4 = 0;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)*param_3 + 0x24))((int *)*param_3);
  if (0 < (int)uVar1) {
    do {
      in_ecx = (int *)F_00e19d40(*(undefined4 *)(iVar5 + 8 + (*(int *)(gen_frame + 0xc))));
      if (*in_ecx == 6) {
        uVar1 = F_00e19c80(in_ecx);
        F_00e1f070((*(undefined * PTR32 *)(gen_frame + 0x18)),uVar1);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x10;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)*param_3 + 0x24))((int *)*param_3);
    } while (iVar4 < (int)uVar1);
  }
  (*(uint *)(gen_frame + 0x10)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
    (*(uint *)(gen_frame + 0x14)) = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) << 4);
  }
  return (*(uint *)(gen_frame + 0x14));
}

/* ref: FUN_00e1f510 */
uint F_00e1f510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1f510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x14)) = ((code *)*(gen_code32 *)(*(int *)*param_1 + 8))((int *)*param_1);
  iVar1 = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0x80000000;
  (*(uint *)(gen_frame + 0x18)) = ((code *)*(gen_code32 *)(*(int *)*param_2 + 8))((int *)*param_2);
  F_00e1f390(this,&(*(int *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x14)),&(*(uint *)(gen_frame + 0x18)));
  if (0 < (*(int *)(gen_frame + 0xc))) {
    iVar2 = 0;
    do {
      F_00e1ee40(this,param_1,param_2,iVar2 + (*(int *)(gen_frame + 0x8)));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar1 < (*(int *)(gen_frame + 0xc)));
  }
  (*(int *)(gen_frame + 0xc)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x10))) {
    (*(uint *)(gen_frame + 0x10)) = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                         (&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x10)) << 4);
  }
  return (*(uint *)(gen_frame + 0x10));
}

/* ref: FUN_00e1f5c0 */
uint F_00e1f5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1f5c0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  int * piVar5;
  
  piVar1 = (*(int * PTR32 *)&gen_args[2]);
  piVar5 = ((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2])));
  if (piVar5 == (int *)0x0) {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 4))(piVar5,&(*(undefined4 *)(gen_frame + 0x20)))));
  uVar4 = F_00e06a20(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),*puVar3,puVar3[1],((undefined1 *)(gen_frame + 0x10)));
  if (uVar4 == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))))(*(int * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),((undefined1 *)(gen_frame + 0x10)));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*piVar1 + 8))((int *)*piVar1)));
  uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 8))(piVar5);
  (*(int * PTR32 *)&gen_args[2]) = (int *)F_00e1f070((*(undefined * PTR32 *)&gen_args[0]),uVar4);
  piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))))(*(int * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[2]),0)));
  (*(int * PTR32 *)(gen_frame + 0x28)) = piVar5;
  if (piVar5 != (int *)0x0) {
    *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + 1;
    piVar5[2] = piVar5[2] + 1;
  }
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  if (piVar5 == (int *)0x0) {
    puVar3 = &(*(undefined4 *)(gen_frame + 0x18));
  }
  else {
    puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 4))(piVar5,((undefined1 *)(gen_frame + 0x8)))));
  }
  (*(undefined4 *)(gen_frame + 0x20)) = *puVar3;
  piVar2 = (int *)*piVar1;
  (*(undefined4 *)(gen_frame + 0x24)) = puVar3[1];
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  if (piVar2 == (int *)0x0) {
    puVar3 = &(*(undefined4 *)(gen_frame + 0x18));
  }
  else {
    puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,((undefined1 *)(gen_frame + 0x0)))));
  }
  F_00e068a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),&REFG(undefined * PTR32, 0x13516ac),*puVar3,puVar3[1],(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)));
  F_00e1f510((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)(gen_frame + 0x28)),piVar1);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = piVar5;
  if (piVar5 != (int *)0x0) {
    *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + 1;
    piVar5[2] = piVar5[2] + 1;
    *(short *)((int)piVar5 + 6) = *(short *)((int)piVar5 + 6) + -1;
    piVar1 = piVar5 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*piVar5)(piVar5,1);
    }
  }
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00e1f710 */
uint F_00e1f710(unsigned int gen_a0)
{
  GEN_ENTER(0xe1f710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4),&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
  F_00e1f5c0(this,&(*(undefined4 * PTR32 *)(gen_frame + 0x8)),uVar2);
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x8)) != (undefined4 *)0x0) {
    *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 6) + -1;
    piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x8)) + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x8)))((*(undefined4 * PTR32 *)(gen_frame + 0x8)),1);
    }
  }
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0) {
    *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 6) + -1;
    piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x4)))((*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
    }
  }
  return 0;
}

/* ref: FUN_00e1f770 */
uint F_00e1f770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1f770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0x18);
  return uVar1;
}

/* ref: FUN_00e1f790 */
unsigned int F_00e1f790(unsigned int gen_a0)
{
  GEN_ENTER(0xe1f790u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x18);
  }
  return 0;
}

/* ref: FUN_00e1f7e0 */
uint F_00e1f7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe1f7e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00e1f800 */
unsigned int F_00e1f800(unsigned int gen_a0)
{
  GEN_ENTER(0xe1f800u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00e1f830 */
uint F_00e1f830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1f830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00e07250(this,param_2,param_3);
  *(bool *)param_1 = (int)uVar1 <= *(int *)((int)this + 8);
  return param_1;
}

/* ref: FUN_00e1f860 */
uint F_00e1f860(unsigned int gen_a0)
{
  GEN_ENTER(0xe1f860u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00e1f880 */
unsigned int F_00e1f880(unsigned int gen_a0)
{
  GEN_ENTER(0xe1f880u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00e1f8c0 */
uint F_00e1f8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1f8c0u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,0x18);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e1f900 */
uint F_00e1f900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1f900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00e1e790(this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00e1f920 */
uint F_00e1f920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1f920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00e07250(this,param_1,param_2);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    F_00e07310(this,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_00e1f960 */
uint F_00e1f960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1f960u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,0x18);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e1f9a0 */
uint F_00e1f9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1f9a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00e1f900(this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00e1f9c0 */
uint F_00e1f9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe1f9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  uint uVar1;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    uVar1 = F_00e07420(this,param_1,*(int *)((int)this + 8) * 2 + 2);
    *param_5 = uVar1;
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    *param_5 = 0;
  }
  uVar1 = F_00e071a0(this,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00e1fa20 */
unsigned int F_00e1fa20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe1fa20u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00e07420(this,param_1,*(int *)((int)this + 8) * 2 + 2);
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

/* ref: FUN_00e1faa0 */
uint F_00e1faa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe1faa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00e1f9c0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00e1fad0 */
unsigned int F_00e1fad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1fad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00e1fa20(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_00e1faf0 */
unsigned int F_00e1faf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1faf0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  
  if (0 < param_2) {
    puVar1 = (undefined4 *)(param_1 + 0x14);
    do {
      if (puVar1 != (undefined4 *)0x14) {
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
      }
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}

/* ref: FUN_00e1fb20 */
uint F_00e1fb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1fb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)*(uint *)((int)this + 0x14)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),
               (*(uint *)((int)this + 0x14) & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0x18);
  }
  return (uint)this;
}

/* ref: FUN_00e1fb90 */
uint F_00e1fb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1fb90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x18);
  }
  iVar1 = *(int *)this + *(int *)((int)this + 4) * 0x18;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0x80000000;
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 0x18;
}

/* ref: FUN_00e1fbf0 */
unsigned int F_00e1fbf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1fbf0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint * puVar1;
  int iVar2;
  
  iVar2 = param_2 + -1;
  if (-1 < iVar2) {
    puVar1 = (uint *)(param_1 + 0x14 + iVar2 * 0x18);
    do {
      puVar1[-1] = 0;
      if (-1 < (int)*puVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar1[-2],(*puVar1 & 0x3fffffff) * 0xc);
      }
      puVar1[-2] = 0;
      *puVar1 = 0x80000000;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + -6;
    } while (-1 < iVar2);
  }
  return 0;
}

/* ref: FUN_00e1fc50 */
uint F_00e1fc50(unsigned int gen_a0)
{
  GEN_ENTER(0xe1fc50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,0x18);
  }
  iVar1 = *(int *)this + *(int *)((int)this + 4) * 0x18;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0x80000000;
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 0x18;
}

/* ref: FUN_00e1fca0 */
unsigned int F_00e1fca0(unsigned int gen_a0)
{
  GEN_ENTER(0xe1fca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    puVar1 = (uint *)(*(int *)this + 0x14 + iVar2 * 0x18);
    do {
      puVar1[-1] = 0;
      if (-1 < (int)*puVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar1[-2],(*puVar1 & 0x3fffffff) * 0xc);
      }
      puVar1[-2] = 0;
      *puVar1 = 0x80000000;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + -6;
    } while (-1 < iVar2);
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  *(undefined4 *)((int)this + 4) = 0;
  return 0;
}

/* ref: FUN_00e1fd20 */
uint F_00e1fd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1fd20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(*(int *)this + 0x14 + iVar3 * 0x18);
    do {
      puVar2[-1] = 0;
      if (-1 < (int)*puVar2) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar2[-2],(*puVar2 & 0x3fffffff) * 0xc);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      puVar2 = puVar2 + -6;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x18);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e200c0 */
uint F_00e200c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe200c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 100))))(*(int * PTR32 *)this,*(undefined4 *)((int)this + 4),param_1);
  return uVar1;
}

/* ref: FUN_00e200e0 */
uint F_00e200e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe200e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return param_1;
}

/* ref: FUN_00e20100 */
uint F_00e20100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe20100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_1 + 8))((int *)*param_1)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x10))))(*(int * PTR32 *)this,uVar2);
  return uVar2;
}

/* ref: FUN_00e20130 */
uint F_00e20130(unsigned int gen_a0)
{
  GEN_ENTER(0xe20130u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  if ((0 < in_eax) && ((in_eax < 0x13 || (in_eax == 0x1e)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00e20150 */
uint F_00e20150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe20150u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char * pcVar5;
  undefined4 * puVar6;
  
  piVar1 = (*(int * PTR32 *)&gen_args[2]);
  if (*(*(int * PTR32 *)&gen_args[2]) == 0) {
    return 0;
  }
  this_00 = (undefined *)F_00da5fd0((*(undefined * PTR32 *)&gen_args[1]));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*piVar1 + 8))((int *)*piVar1)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))))(*(int * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]),uVar2);
  }
  if (this_00 != (undefined *)0x0) {
    if (uVar3 == 0) {
      return 0;
    }
    uVar4 = F_00d92610(this_00);
    uVar2 = F_00da0d20(uVar4,uVar2);
    if (uVar2 != 0) {
      pcVar5 = (char *)F_00d92650(this_00,(int)&(*(int * PTR32 *)&gen_args[2]) + 3,uVar3);
      if (*pcVar5 != '\0') {
        return uVar3;
      }
      puVar6 = (undefined4 *)F_00da6010((*(undefined * PTR32 *)&gen_args[1]),"hk.DataObjectType");
      if (puVar6 != (undefined4 *)0x0) {
        this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))))(*(int * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]),*(undefined4 *)*puVar6)))
        ;
        pcVar5 = (char *)F_00d92650(this_00,(int)&(*(undefined * PTR32 *)&gen_args[1]) + 3,uVar3);
        if (*pcVar5 != '\0') {
          return uVar3;
        }
      }
    }
    return (uint)this_00;
  }
  return uVar3;
}

/* ref: FUN_00e20230 */
uint F_00e20230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe20230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  if ((*(char *)((int)param_2 + 0xc) != '\x18') && (*(char *)((int)param_2 + 0xc) != '\x1f')) {
    return 1;
  }
  if (*(int *)((int)param_2 + 8) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)*param_3 + 0x30))((int *)*param_3,param_3[1]);
    F_00da6250(param_2,param_1,uVar1);
  }
  return 0;
}

/* ref: FUN_00e20280 */
unsigned int F_00e20280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe20280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  uint * puVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  LPVOID pvVar6;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)*param_2 + 8))((int *)*param_2);
  if (uVar2 != 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_2 + 8))((int *)*param_2)));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
    if (uVar2 != 0) {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_2 + 8))((int *)*param_2)));
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x10))))(*(int * PTR32 *)this,uVar2);
      if (uVar2 != 0) {
        piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_2 + 8))((int *)*param_2)));
        ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
        F_00d92a10(uVar2);
        uVar4 = F_00d929c0(uVar2);
        uVar5 = F_00e062e0(uVar2,param_2);
        uVar4 = uVar4 + uVar5;
        pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar6 + 0x2c) + 4))))
                          (*(int * PTR32 *)((int)pvVar6 + 0x2c),uVar4);
        if (*(uint *)(param_3 + 0x10) == (*(uint *)(param_3 + 0x14) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516a4),(int *)(param_3 + 0xc),8);
        }
        puVar1 = ((uint *)GEN_TOP((*(int *)(param_3 + 0xc) + *(int *)(param_3 + 0x10) * 8)));
        *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
        *puVar1 = uVar5;
        puVar1[1] = uVar4;
        F_00da1030(uVar5,0,uVar4);
        param_1[1] = uVar2;
        *param_1 = uVar5;
        return 0;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return 0;
}

/* ref: FUN_00e22120 */
uint F_00e22120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe22120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint * puVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  int * piVar7;
  uint * puVar8;
  undefined4 * puVar9;
  LPVOID pvVar10;
  uint * puVar11;
  int iVar12;
  int iVar13;
  
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)0x0;
  uVar4 = F_00e20100(this,param_2);
  (*(uint *)(gen_frame + 0x38)) = uVar4;
  uVar5 = F_00d929c0(uVar4);
  (*(int *)(gen_frame + 0x30)) = (uVar5 + 0xf & 0xfffffff0) + param_1;
  do {
    if (uVar4 == 0) {
      return (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x58));
    }
    (*(int *)(gen_frame + 0x48)) = 0;
    uVar5 = F_00d92850(uVar4);
    if (0 < (int)uVar5) {
      do {
        puVar6 = (undefined4 *)F_00d92860(uVar4,(*(int *)(gen_frame + 0x48)));
        puVar11 = ((uint *)GEN_TOP(((uint)*(ushort *)((int)puVar6 + 0x12) + param_1)));
        (*(uint *)(gen_frame + 0x4c)) = (uint)*(byte *)(puVar6 + 3);
        ((code *)*(gen_code32 *)(*(int *)*param_2 + 0xc))((int *)*param_2,&(*(int * PTR32 *)(gen_frame + 0x28)),*puVar6);
        if (((*(int * PTR32 *)(gen_frame + 0x28)) == (int *)0x0) ||
           (uVar5 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x68))((*(int * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c))), uVar5 == 0)) {
          (*(undefined4 *)(gen_frame + 0x0)) = 0;
          (*(undefined4 *)(gen_frame + 0x4)) = 0;
          (*(undefined4 *)(gen_frame + 0x8)) = 0;
          (*(int *)(gen_frame + 0xc)) = 0;
          if ((*(int * PTR32 *)(gen_frame + 0x28)) != (int *)0x0) {
            ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 100))((*(int * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),&(*(undefined4 *)(gen_frame + 0x0)));
          }
          if (*(char *)(puVar6 + 3) == '\x16') {
            puVar11[2] = 0x80000000;
          }
          uVar5 = F_00d92ab0(uVar4,(*(int *)(gen_frame + 0x48)));
          if ((uVar5 == 0) ||
             (uVar5 = ((code *)*(gen_code32 *)(*(int *)*param_2 + 0x6c))((int *)*param_2), uVar5 == 0)) {
            if ((((*(int * PTR32 *)(gen_frame + 0x28)) != (int *)0x0) && ((*(int *)(gen_frame + 0xc)) != 0)) ||
               (((*(uint *)(gen_frame + 0x4c)) == 0x19 && ((*(ushort *)(puVar6 + 4) & 0x400) == 0)))) goto LAB_00e22255;
          }
          else {
            uVar5 = F_00da6030(puVar6);
            uVar4 = F_00d92bc0(uVar4,(*(int *)(gen_frame + 0x48)));
            F_00da1010(puVar11,uVar4,uVar5);
          }
          goto LAB_00e22812;
        }
LAB_00e22255: ;
        uVar4 = F_00da5ff0(puVar6);
        if (uVar4 == 0) {
          uVar4 = 1;
          (*(uint * PTR32 *)(gen_frame + 0x40)) = (uint *)F_00da6030(puVar6);
        }
        else {
          uVar4 = F_00da5ff0(puVar6);
          uVar5 = F_00da6030(puVar6);
          (*(uint * PTR32 *)(gen_frame + 0x40)) = (uint *)((int)uVar5 / (int)uVar4);
        }
        uVar5 = (ushort)~*(ushort *)(puVar6 + 4) >> 9 & 1;
        (*(uint *)(gen_frame + 0x50)) = uVar5;
        switch((unsigned int)(uintptr_t)((*(uint *)(gen_frame + 0x4c)))) {
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
        case 0x19: ;
        case 0x1c: ;
        case 0x1d: ;
        case 0x1e: ;
        case 0x20: ;
        case 0x21: ;
          if (uVar4 == 1) {
            iVar12 = param_3;
            uVar4 = F_00da5fd0(puVar6);
            (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)
                      F_00e23ad0((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar11,(*(uint *)(gen_frame + 0x4c)),(uint)&(*(int * PTR32 *)(gen_frame + 0x28)),uVar4,uVar5,iVar12);
          }
          else {
            piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)))));
            if (piVar7 != (int *)0x0) {
              *(short *)((int)piVar7 + 6) = *(short *)((int)piVar7 + 6) + 1;
              piVar7[2] = piVar7[2] + 1;
            }
            (*(uint *)(gen_frame + 0x44)) = 0;
            uVar4 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
            if (0 < (int)uVar4) {
              do {
                if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != (undefined4 *)0x0) break;
                (*(int * PTR32 *)(gen_frame + 0x20)) = piVar7;
                (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x44));
                uVar4 = (*(uint *)(gen_frame + 0x50));
                iVar12 = param_3;
                uVar5 = F_00da5fd0(puVar6);
                (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)
                          F_00e23690((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar11,(*(uint *)(gen_frame + 0x4c)),(uint)&(*(int * PTR32 *)(gen_frame + 0x20)),uVar5,uVar4,iVar12);
                (*(uint *)(gen_frame + 0x44)) = (*(uint *)(gen_frame + 0x44)) + 1;
                puVar11 = (uint *)((int)puVar11 + (int)(*(uint * PTR32 *)(gen_frame + 0x40)));
                uVar4 = ((code *)*(gen_code32 *)(*piVar7 + 0x14))(piVar7);
              } while ((int)(*(uint *)(gen_frame + 0x44)) < (int)uVar4);
            }
            *(short *)((int)piVar7 + 6) = *(short *)((int)piVar7 + 6) + -1;
            piVar1 = piVar7 + 2;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              ((code *)*(gen_code32 *)*piVar7)(piVar7,1);
            }
          }
          break;
        default: ;
          goto switchD_00e222a6_caseD_13;
        case 0x14: ;
          if (*(char *)((int)puVar6 + 0xd) == '\x02') {
            if (uVar4 == 1) {
              (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)
                        F_00e23ad0((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar11,0x1d,(uint)&(*(int * PTR32 *)(gen_frame + 0x28)),0,uVar5,param_3);
            }
            else {
              puVar8 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)))));
              if (puVar8 != (uint *)0x0) {
                *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + 1;
                puVar8[2] = puVar8[2] + 1;
              }
              iVar12 = 0;
              uVar4 = ((code *)*(gen_code32 *)(*puVar8 + 0x14))(puVar8);
              if (0 < (int)uVar4) {
                do {
                  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != (undefined4 *)0x0) break;
                  (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar8;
                  (*(int *)(gen_frame + 0x1c)) = iVar12;
                  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)
                            F_00e23690((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar11,0x1d,(uint)&(*(uint * PTR32 *)(gen_frame + 0x18)),0,(*(uint *)(gen_frame + 0x50)),param_3);
                  puVar11 = (uint *)((int)puVar11 + (int)(*(uint * PTR32 *)(gen_frame + 0x40)));
                  iVar12 = iVar12 + 1;
                  uVar4 = ((code *)*(gen_code32 *)(*puVar8 + 0x14))(puVar8);
                } while (iVar12 < (int)uVar4);
              }
              *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + -1;
              puVar11 = puVar8 + 2;
              *puVar11 = *puVar11 - 1;
              if (*puVar11 == 0) {
                puVar6 = (undefined4 *)*puVar8;
                goto LAB_00e22806;
              }
            }
            break;
          }
          if (*(char *)((int)puVar6 + 0xd) != '\x19') break;
          if (uVar4 == 1) {
            puVar8 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x34))((*(int * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)))));
            pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x54));
            (*(uint * PTR32 *)(gen_frame + 0x3c)) = puVar8;
            if (puVar8 != (uint *)0x0) {
              *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + 1;
              puVar8[2] = puVar8[2] + 1;
            }
            uVar4 = (*(uint *)(gen_frame + 0x50));
            iVar12 = param_3;
            uVar5 = F_00e20150((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar6,&(*(uint * PTR32 *)(gen_frame + 0x3c)));
            (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)
                      F_00e23ad0(pvVar3,puVar11,(*(uint *)(gen_frame + 0x4c)),(uint)&(*(int * PTR32 *)(gen_frame + 0x28)),uVar5,uVar4,iVar12);
            if (puVar8 != (uint *)0x0) {
              *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + -1;
              puVar11 = puVar8 + 2;
              *puVar11 = *puVar11 - 1;
              if (*puVar11 == 0) {
                puVar6 = (undefined4 *)*puVar8;
                goto LAB_00e22806;
              }
            }
            break;
          }
          puVar8 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)))));
          if (puVar8 != (uint *)0x0) {
            *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + 1;
            puVar8[2] = puVar8[2] + 1;
          }
          (*(uint *)(gen_frame + 0x44)) = 0;
          uVar4 = ((code *)*(gen_code32 *)(*puVar8 + 0x14))(puVar8);
          if (0 < (int)uVar4) {
            (*(uint * PTR32 *)(gen_frame + 0x3c)) = puVar11;
            do {
              if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != (undefined4 *)0x0) break;
              puVar9 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*puVar8 + 0x5c))(puVar8,(*(uint *)(gen_frame + 0x44)))));
              (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar9;
              if (puVar9 != (undefined4 *)0x0) {
                *(short *)((int)puVar9 + 6) = *(short *)((int)puVar9 + 6) + 1;
                puVar9[2] = puVar9[2] + 1;
              }
              (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x44));
              (*(uint * PTR32 *)(gen_frame + 0x10)) = puVar8;
              uVar4 = (*(uint *)(gen_frame + 0x50));
              iVar12 = param_3;
              uVar5 = F_00e20150((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar6,&(*(undefined4 * PTR32 *)(gen_frame + 0x58)));
              (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)
                        F_00e23690((*(undefined * PTR32 *)(gen_frame + 0x54)),(*(uint * PTR32 *)(gen_frame + 0x3c)),(*(uint *)(gen_frame + 0x4c)),(uint)&(*(uint * PTR32 *)(gen_frame + 0x10)),uVar5,uVar4,iVar12);
              if (puVar9 != (undefined4 *)0x0) {
                *(short *)((int)puVar9 + 6) = *(short *)((int)puVar9 + 6) + -1;
                piVar7 = puVar9 + 2;
                *piVar7 = *piVar7 + -1;
                if (*piVar7 == 0) {
                  ((code *)*(gen_code32 *)*puVar9)(puVar9,1);
                }
              }
              (*(uint * PTR32 *)(gen_frame + 0x3c)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x3c)) + (int)(*(uint * PTR32 *)(gen_frame + 0x40)));
              uVar5 = (*(uint *)(gen_frame + 0x44)) + 1;
              (*(uint *)(gen_frame + 0x44)) = uVar5;
              uVar4 = ((code *)*(gen_code32 *)(*puVar8 + 0x14))(puVar8);
            } while ((int)uVar5 < (int)uVar4);
          }
          goto LAB_00e223dc;
        case 0x16: ;
        case 0x1a: ;
          if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x54)) + 4) != 0) {
            if (*(char *)(puVar6 + 3) == '\x1a') {
              return 1;
            }
            if (*(char *)((int)puVar6 + 0xd) == '\x1c') {
              return 1;
            }
            if (*(char *)((int)puVar6 + 0xd) == '\x1d') {
              return 1;
            }
          }
          puVar8 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)))));
          (*(uint * PTR32 *)(gen_frame + 0x3c)) = puVar8;
          if (puVar8 != (uint *)0x0) {
            *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + 1;
            puVar8[2] = puVar8[2] + 1;
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)F_00e203a0((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar11,puVar6,&(*(uint * PTR32 *)(gen_frame + 0x3c)),param_3);
          goto LAB_00e223d1;
        case 0x18: ;
        case 0x1f: ;
          (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)F_00e20230(puVar11,puVar6,&(*(int * PTR32 *)(gen_frame + 0x28)),(*(uint *)(gen_frame + 0x38)));
          break;
        case 0x1b: ;
          if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x54)) + 4) != 0) {
            return 1;
          }
          (*(uint * PTR32 *)(gen_frame + 0x40)) = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)))));
          if ((*(uint * PTR32 *)(gen_frame + 0x40)) != (uint *)0x0) {
            *(short *)((int)(*(uint * PTR32 *)(gen_frame + 0x40)) + 6) = *(short *)((int)(*(uint * PTR32 *)(gen_frame + 0x40)) + 6) + 1;
            (*(uint * PTR32 *)(gen_frame + 0x40))[2] = (*(uint * PTR32 *)(gen_frame + 0x40))[2] + 1;
          }
          puVar8 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(*(uint * PTR32 *)(gen_frame + 0x40)) + 0x5c))((*(uint * PTR32 *)(gen_frame + 0x40)),0)));
          (*(uint * PTR32 *)(gen_frame + 0x3c)) = puVar8;
          if (puVar8 != (uint *)0x0) {
            *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + 1;
            puVar8[2] = puVar8[2] + 1;
          }
          uVar4 = F_00e20150((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar6,&(*(uint * PTR32 *)(gen_frame + 0x3c)));
          *puVar11 = uVar4;
          if (puVar8 != (uint *)0x0) {
            *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + -1;
            puVar2 = puVar8 + 2;
            *puVar2 = *puVar2 - 1;
            if (*puVar2 == 0) {
              ((code *)*(gen_code32 *)*puVar8)(puVar8,1);
            }
          }
          uVar4 = ((code *)*(gen_code32 *)(*(*(uint * PTR32 *)(gen_frame + 0x40)) + 0x14))((*(uint * PTR32 *)(gen_frame + 0x40)));
          puVar11[2] = uVar4;
          uVar5 = F_00d929c0(*puVar11);
          uVar4 = puVar11[2];
          (*(uint *)(gen_frame + 0x44)) = uVar5;
          pvVar10 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
          (*(uint * PTR32 *)(gen_frame + 0x3c)) = (uint *)(uVar4 * uVar5);
          uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar10 + 0x2c) + 0xc))))
                            (*(int * PTR32 *)((int)pvVar10 + 0x2c),&(*(uint * PTR32 *)(gen_frame + 0x3c)));
          puVar11[1] = uVar4;
          F_00da1030(uVar4,0,(*(uint * PTR32 *)(gen_frame + 0x3c)));
          iVar12 = puVar11[2] * (*(uint *)(gen_frame + 0x44));
          (*(uint * PTR32 *)(gen_frame + 0x3c)) = (uint *)puVar11[1];
          if (*(uint *)(param_3 + 0x10) == (*(uint *)(param_3 + 0x14) & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516a4),(int *)(param_3 + 0xc),8);
          }
          piVar7 = ((int *)GEN_TOP((*(int *)(param_3 + 0xc) + *(int *)(param_3 + 0x10) * 8)));
          *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
          iVar13 = 0;
          *piVar7 = (int)(*(uint * PTR32 *)(gen_frame + 0x3c));
          piVar7[1] = iVar12;
          if (0 < (int)puVar11[2]) {
            iVar12 = 0;
            do {
              if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != (undefined4 *)0x0) break;
              (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(*(uint * PTR32 *)(gen_frame + 0x40)) + 0x5c))((*(uint * PTR32 *)(gen_frame + 0x40)),iVar13)));
              if ((*(undefined4 * PTR32 *)(gen_frame + 0x34)) != (undefined4 *)0x0) {
                *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 6) + 1;
                (*(undefined4 * PTR32 *)(gen_frame + 0x34))[2] = (*(undefined4 * PTR32 *)(gen_frame + 0x34))[2] + 1;
              }
              (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)F_00e22120((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar11[1] + iVar12,&(*(undefined4 * PTR32 *)(gen_frame + 0x34)),param_3);
              if ((*(undefined4 * PTR32 *)(gen_frame + 0x34)) != (undefined4 *)0x0) {
                *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 6) + -1;
                piVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 2;
                *piVar7 = *piVar7 + -1;
                if (*piVar7 == 0) {
                  ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x34)))((*(undefined4 * PTR32 *)(gen_frame + 0x34)),1);
                }
              }
              iVar12 = iVar12 + (*(uint *)(gen_frame + 0x44));
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)puVar11[2]);
          }
          *(short *)((int)(*(uint * PTR32 *)(gen_frame + 0x40)) + 6) = *(short *)((int)(*(uint * PTR32 *)(gen_frame + 0x40)) + 6) + -1;
          puVar11 = (*(uint * PTR32 *)(gen_frame + 0x40)) + 2;
          *puVar11 = *puVar11 - 1;
          if (*puVar11 == 0) {
            puVar6 = (undefined4 *)*(*(uint * PTR32 *)(gen_frame + 0x40));
            puVar8 = (*(uint * PTR32 *)(gen_frame + 0x40));
LAB_00e22806: ;
            (*(code *)*puVar6)(puVar8,1);
          }
          break;
        case 0x22: ;
          if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x54)) + 4) != 0) {
            if (*(char *)(puVar6 + 3) == '\x1a') {
              return 1;
            }
            if (*(char *)((int)puVar6 + 0xd) == '\x1c') {
              return 1;
            }
            if (*(char *)((int)puVar6 + 0xd) == '\x1d') {
              return 1;
            }
          }
          puVar8 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)))));
          (*(uint * PTR32 *)(gen_frame + 0x3c)) = puVar8;
          if (puVar8 != (uint *)0x0) {
            *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + 1;
            puVar8[2] = puVar8[2] + 1;
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)
                    F_00e21460((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar11,(uint)puVar6,&(*(uint * PTR32 *)(gen_frame + 0x3c)),param_3,&(*(int *)(gen_frame + 0x30)),param_1);
LAB_00e223d1: ;
          if (puVar8 != (uint *)0x0) {
LAB_00e223dc: ;
            *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + -1;
            puVar11 = puVar8 + 2;
            *puVar11 = *puVar11 - 1;
            if (*puVar11 == 0) {
              ((code *)*(gen_code32 *)*puVar8)(puVar8,1);
            }
          }
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) == (undefined4 *)0x1) {
switchD_00e222a6_caseD_13: ;
          return 1;
        }
LAB_00e22812: ;
        uVar4 = (*(uint *)(gen_frame + 0x38));
        iVar12 = (*(int *)(gen_frame + 0x48)) + 1;
        (*(int *)(gen_frame + 0x48)) = iVar12;
        uVar5 = F_00d92850((*(uint *)(gen_frame + 0x38)));
      } while (iVar12 < (int)uVar5);
    }
    uVar4 = F_00d92620(uVar4);
    (*(uint *)(gen_frame + 0x38)) = uVar4;
  } while( true );
}

/* ref: FUN_00e228b0 */
uint F_00e228b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xe228b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00e228c0 */
uint F_00e228c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe228c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[1]);
  (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1])));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[1]));
  *puVar1 = (*(undefined4 * PTR32 *)&gen_args[1]);
  return uVar2;
}

/* ref: FUN_00e228f0 */
uint F_00e228f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe228f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e22920 */
uint F_00e22920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe22920u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e22960 */
uint F_00e22960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe22960u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 8)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 7U)) >> 3;
  return uVar2;
}

/* ref: FUN_00e229a0 */
uint F_00e229a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe229a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 8)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 7U)) >> 3;
  return uVar2;
}

/* ref: FUN_00e229e0 */
uint F_00e229e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe229e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e22a20 */
uint F_00e22a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe22a20u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e22a50 */
uint F_00e22a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe22a50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) << 4)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
  return uVar2;
}

/* ref: FUN_00e22a90 */
uint F_00e22a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe22a90u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 0x30)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)(*(int * PTR32 *)&gen_args[1]) / 0x30;
  return uVar2;
}

/* ref: FUN_00e22ad0 */
uint F_00e22ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe22ad0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 0x30)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)(*(int * PTR32 *)&gen_args[1]) / 0x30;
  return uVar2;
}

/* ref: FUN_00e22b10 */
uint F_00e22b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe22b10u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e22b50 */
uint F_00e22b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe22b50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e22b90 */
uint F_00e22b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe22b90u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e22bd0 */
uint F_00e22bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe22bd0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 8)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 7U)) >> 3;
  return uVar2;
}

/* ref: FUN_00e22c10 */
uint F_00e22c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe22c10u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e22c50 */
uint F_00e22c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe22c50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e22ca0 */
uint F_00e22ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe22ca0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *(int *)(in_ecx + 8) != 0;
  return param_2;
}

/* ref: FUN_00e22e00 */
uint F_00e22e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe22e00u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e22e40 */
uint F_00e22e40(unsigned int gen_a0)
{
  GEN_ENTER(0xe22e40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00e22e60 */
uint F_00e22e60(unsigned int gen_a0)
{
  GEN_ENTER(0xe22e60u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  undefined4 * puVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[0]);
  (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0])));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(undefined4 * PTR32 *)&gen_args[0]));
  *puVar1 = (*(undefined4 * PTR32 *)&gen_args[0]);
  return uVar3;
}

/* ref: FUN_00e22e90 */
uint F_00e22e90(unsigned int gen_a0)
{
  GEN_ENTER(0xe22e90u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  undefined4 * puVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[0]);
  (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0])));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(undefined4 * PTR32 *)&gen_args[0]));
  *puVar1 = (*(undefined4 * PTR32 *)&gen_args[0]);
  return uVar3;
}

/* ref: FUN_00e22ec0 */
uint F_00e22ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xe22ec0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  undefined4 * puVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[0]);
  (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0])));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(undefined4 * PTR32 *)&gen_args[0]));
  *puVar1 = (*(undefined4 * PTR32 *)&gen_args[0]);
  return uVar3;
}

/* ref: FUN_00e22ef0 */
uint F_00e22ef0(unsigned int gen_a0)
{
  GEN_ENTER(0xe22ef0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  undefined4 * puVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[0]);
  (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0])));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(undefined4 * PTR32 *)&gen_args[0]));
  *puVar1 = (*(undefined4 * PTR32 *)&gen_args[0]);
  return uVar3;
}

/* ref: FUN_00e22f20 */
uint F_00e22f20(unsigned int gen_a0)
{
  GEN_ENTER(0xe22f20u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 2)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)(*(int * PTR32 *)&gen_args[0]) / 2;
  return uVar3;
}

/* ref: FUN_00e22f60 */
uint F_00e22f60(unsigned int gen_a0)
{
  GEN_ENTER(0xe22f60u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 2)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)(*(int * PTR32 *)&gen_args[0]) / 2;
  return uVar3;
}

/* ref: FUN_00e22fa0 */
uint F_00e22fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xe22fa0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 4)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
  return uVar3;
}

/* ref: FUN_00e22fe0 */
uint F_00e22fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xe22fe0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 4)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
  return uVar3;
}

/* ref: FUN_00e23020 */
uint F_00e23020(unsigned int gen_a0)
{
  GEN_ENTER(0xe23020u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 8)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 7U)) >> 3;
  return uVar3;
}

/* ref: FUN_00e23070 */
uint F_00e23070(unsigned int gen_a0)
{
  GEN_ENTER(0xe23070u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 8)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 7U)) >> 3;
  return uVar3;
}

/* ref: FUN_00e230c0 */
uint F_00e230c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe230c0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 4)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
  return uVar3;
}

/* ref: FUN_00e23100 */
uint F_00e23100(unsigned int gen_a0)
{
  GEN_ENTER(0xe23100u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 4)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
  return uVar3;
}

/* ref: FUN_00e23140 */
uint F_00e23140(unsigned int gen_a0)
{
  GEN_ENTER(0xe23140u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 2)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)(*(int * PTR32 *)&gen_args[0]) / 2;
  return uVar3;
}

/* ref: FUN_00e23180 */
uint F_00e23180(unsigned int gen_a0)
{
  GEN_ENTER(0xe23180u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) << 4)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 0xfU)) >> 4;
  return uVar3;
}

/* ref: FUN_00e231c0 */
uint F_00e231c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe231c0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) << 4)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 0xfU)) >> 4;
  return uVar3;
}

/* ref: FUN_00e23200 */
uint F_00e23200(unsigned int gen_a0)
{
  GEN_ENTER(0xe23200u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 0x30)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)(*(int * PTR32 *)&gen_args[0]) / 0x30;
  return uVar3;
}

/* ref: FUN_00e23250 */
uint F_00e23250(unsigned int gen_a0)
{
  GEN_ENTER(0xe23250u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 0x30)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)(*(int * PTR32 *)&gen_args[0]) / 0x30;
  return uVar3;
}

/* ref: FUN_00e232a0 */
uint F_00e232a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe232a0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 0x30)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)(*(int * PTR32 *)&gen_args[0]) / 0x30;
  return uVar3;
}

/* ref: FUN_00e232f0 */
uint F_00e232f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe232f0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) << 6)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 0x3fU)) >> 6;
  return uVar3;
}

/* ref: FUN_00e23330 */
uint F_00e23330(unsigned int gen_a0)
{
  GEN_ENTER(0xe23330u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) << 6)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 0x3fU)) >> 6;
  return uVar3;
}

/* ref: FUN_00e23370 */
uint F_00e23370(unsigned int gen_a0)
{
  GEN_ENTER(0xe23370u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 4)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
  return uVar3;
}

/* ref: FUN_00e233b0 */
uint F_00e233b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe233b0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 8)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 7U)) >> 3;
  return uVar3;
}

/* ref: FUN_00e23400 */
uint F_00e23400(unsigned int gen_a0)
{
  GEN_ENTER(0xe23400u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 4)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
  return uVar3;
}

/* ref: FUN_00e23440 */
uint F_00e23440(unsigned int gen_a0)
{
  GEN_ENTER(0xe23440u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar1 = (*(int * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) * 4)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x2c),&(*(int * PTR32 *)&gen_args[0]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[0]) + ((int)(*(int * PTR32 *)&gen_args[0]) >> 0x1f & 3U)) >> 2;
  return uVar3;
}

/* ref: FUN_00e23490 */
uint F_00e23490(unsigned int gen_a0)
{
  GEN_ENTER(0xe23490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,8);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00e234c0 */
uint F_00e234c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe234c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x10);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return iVar1 * 0x10 + *(int *)this;
}

/* ref: FUN_00e23500 */
uint F_00e23500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe23500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 0x10) == (*(uint *)((int)this + 0x14) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),(int *)((int)this + 0xc),8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10) * 8)));
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return param_2;
}

/* ref: FUN_00e23540 */
uint F_00e23540(unsigned int gen_a0)
{
  GEN_ENTER(0xe23540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,0x10);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return iVar1 * 0x10 + *(int *)this;
}

/* ref: FUN_00e23570 */
ulonglong F_00e23570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe23570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int iVar2;
  int * piVar3;
  undefined4 in_EDX = 0;
  undefined4 extraout_EDX = 0;
  undefined4 extraout_EDX_00 = 0;
  
  piVar3 = (int *)*param_1;
  ((int *)(gen_frame + 0x14))[0] = 0;
  ((int *)(gen_frame + 0x14))[1] = 0;
  if (piVar3 == (int *)0x0) {
    piVar3 = ((int *)(gen_frame + 0x14));
  }
  else {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,((undefined1 *)(gen_frame + 0xc)))));
    in_EDX = extraout_EDX;
  }
  iVar1 = *piVar3;
  iVar2 = piVar3[1];
  if ((iVar1 != 0) || (iVar2 != 0)) {
    if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,0x10);
      in_EDX = extraout_EDX_00;
    }
    piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this)));
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    *piVar3 = iVar1;
    piVar3[1] = iVar2;
    piVar3[2] = param_2;
    in_EDX = CONCAT31((int3)((uint)in_EDX >> 8),param_3 != 0);
    *(bool *)((int)piVar3 + 0xd) = param_3 != 0;
    *(undefined1 *)(piVar3 + 3) = 0;
  }
  return CONCAT44(in_EDX,piVar3);
}

/* ref: FUN_00e23600 */
ulonglong F_00e23600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe23600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int iVar2;
  int * piVar3;
  undefined4 in_EDX = 0;
  undefined4 extraout_EDX = 0;
  undefined4 extraout_EDX_00 = 0;
  
  piVar3 = (int *)*param_1;
  ((int *)(gen_frame + 0x14))[0] = 0;
  ((int *)(gen_frame + 0x14))[1] = 0;
  if (piVar3 == (int *)0x0) {
    piVar3 = ((int *)(gen_frame + 0x14));
  }
  else {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,((undefined1 *)(gen_frame + 0xc)))));
    in_EDX = extraout_EDX;
  }
  iVar1 = *piVar3;
  iVar2 = piVar3[1];
  if ((iVar1 != 0) || (iVar2 != 0)) {
    if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,0x10);
      in_EDX = extraout_EDX_00;
    }
    piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this)));
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    *piVar3 = iVar1;
    piVar3[1] = iVar2;
    piVar3[2] = param_2;
    in_EDX = CONCAT31((int3)((uint)in_EDX >> 8),param_3 != 0);
    *(bool *)((int)piVar3 + 0xd) = param_3 != 0;
    *(undefined1 *)(piVar3 + 3) = 1;
  }
  return CONCAT44(in_EDX,piVar3);
}

/* ref: FUN_00e23f00 */
byte F_00e23f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe23f00u, gen_a0, gen_a1, 0u, 0u);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined * this;
  char * pcVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*in_esi + 0x10))(in_esi);
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*in_esi + 0x10))(in_esi,param_2)));
  pcVar2 = (char *)F_00d92650(this,&(*(undefined1 *)(gen_frame + 0xb)),uVar1);
  return *pcVar2 != '\0';
}

/* ref: hkObjectResource::vf3 */
uint F_00e23f40(void)
{
  GEN_ENTER(0xe23f40u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkObjectResource::vf5 */
unsigned int F_00e23f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe23f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: hkObjectResource::vf8 */
unsigned int F_00e23f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe23f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,param_1,param_2);
  if (uVar1 != 0) {
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
  }
  return 0;
}

/* ref: hkObjectResource::vf7 */
uint F_00e23f90(unsigned int gen_a0)
{
  GEN_ENTER(0xe23f90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d92610(*(undefined4 *)(in_ecx + 0xc));
  return uVar1;
}

/* ref: FUN_00e23fa0 */
unsigned int F_00e23fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe23fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x10));
  }
  *(undefined * PTR32 *)((int)this + 0x10) = param_1;
  return 0;
}

/* ref: FUN_00e23fd0 */
unsigned int F_00e23fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe23fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x14));
  }
  *(undefined * PTR32 *)((int)this + 0x14) = param_1;
  return 0;
}

