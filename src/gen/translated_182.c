#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
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
uint F_00e1b900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  return (uint)this;
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
uint F_00e1b9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  return (uint)this;
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
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x20);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114e648));
  F_00d91a80(this_00);
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
          ((undefined1 *)(gen_frame + 0xc))[(int)((int)pcVar3 - (int)pcVar2)] = 0;
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

/* ref: FUN_00e1d060 */
uint F_00e1d060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1d060u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int * piVar1;
  undefined4 * in_ecx;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  float10 extraout_ST0;
  
  in_ecx = (undefined4 *)F_00e1cd10(param_3);
  switch((unsigned int)(uintptr_t)(*in_ecx)) {
  case 2: ;
  case 4: ;
    uVar3 = ((code *)*(gen_code32 *)(*(int *)*param_3 + 0x30))((int *)*param_3,param_3[1]);
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0x44))(param_1,param_2,uVar3);
    return uVar3;
  case 3: ;
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)*param_3 + 0x3c))((int *)*param_3,param_3[1]);
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0x50))(param_2,(undefined4)gen_fl2bits((float)extraout_ST0));
    return uVar3;
  case 5: ;
    uVar3 = ((code *)*(gen_code32 *)(*(int *)*param_3 + 0x2c))((int *)*param_3,param_3[1]);
    in_ecx = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x54))(param_1,param_2,uVar3)));
    break;
  case 6: ;
  case 7: ;
    puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*param_3 + 0x34))((int *)*param_3,param_3[1])));
    if (puVar2 != (undefined4 *)0x0) {
      *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
      puVar2[2] = puVar2[2] + 1;
    }
    in_ecx = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x5c))(param_1,param_2,puVar2)));
    if (puVar2 != (undefined4 *)0x0) {
      in_ecx = (undefined4 *)0xffffffff;
      *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
      piVar1 = puVar2 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        return uVar3;
      }
    }
    break;
  case 8: ;
    break;
  case 9: ;
    if (*(int *)in_ecx[1] == 3) {
      uVar3 = F_00e19c70(in_ecx);
      uVar4 = ((code *)*(gen_code32 *)(*(int *)*param_3 + 0x38))((int *)*param_3,param_3[1],uVar3);
      uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0x48))(param_1,param_2,uVar4,uVar3);
      return uVar3;
    }
    break;
  default: ;
    goto switchD_00e1d07e_default;
  }
switchD_00e1d07e_default: ;
  return (uint)in_ecx;
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
uint F_00e1d410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
  return (uint)puVar1;
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
  uVar2 = *(uint *)((int)this + 0x2c);
  *(undefined4 *)((int)this + 0x28) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x24),uVar2 * 8);
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x80000000;
  uVar2 = *(uint *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x1c) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18),uVar2 * 8);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  uVar2 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),uVar2 << 4);
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
uint F_00e1d630(unsigned int gen_a0, unsigned int gen_a1)
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
  return (uint)puVar1;
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
  int * piVar1;
  uint uVar2;
  undefined * phVar3;
  char * pcVar4;
  undefined4 uVar5;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  if (this_00 == (undefined *)0x0) {
    (*(uint *)(gen_frame + 0x48)) = (*(uint *)&gen_args[3]);
  }
  else {
    uVar2 = F_00e1d7a0((*(undefined * PTR32 *)&gen_args[0]));
    uVar2 = F_00e1d7b0(this_00,(*(uint *)&gen_args[3]),uVar2);
    (*(uint *)(gen_frame + 0x48)) = uVar2;
  }
  F_0105aa30(((undefined1 *)(gen_frame + 0x34)));
  phVar3 = (*(undefined * PTR32 *)&gen_args[1]);
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc))) != 0) {
    pcVar4 = "hkClass";
    uVar2 = F_00d92610((*(uint *)(gen_frame + 0x48)));
    uVar2 = F_00da0d20(uVar2,pcVar4);
    if (uVar2 == 0) {
      uVar2 = F_00e1d7a0((*(undefined * PTR32 *)&gen_args[0]));
      uVar2 = F_00e1d7b0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc))),&REFG(undefined, 0x15da330),uVar2);
      (*(uint *)(gen_frame + 0x48)) = uVar2;
      uVar2 = F_00e1d7a0((*(undefined * PTR32 *)&gen_args[0]));
      uVar2 = F_00e1d7b0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc))),(*(undefined4 *)&gen_args[2]),uVar2);
      (*(uint *)(gen_frame + 0x44)) = uVar2;
      uVar5 = 0;
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[1]) + 0x20))))((*(undefined * PTR32 *)&gen_args[1]));
      F_0105a9d0(((undefined1 *)(gen_frame + 0x34)),uVar2,uVar5);
      piVar1 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8)));
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
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,(*(uint *)(gen_frame + 0x44)),(*(uint *)&gen_args[3]),(*(undefined * PTR32 *)&gen_args[1]),(*(uint *)(gen_frame + 0x48)),&(*(undefined4 *)(gen_frame + 0x0)));
      phVar3 = ((undefined1 *)(gen_frame + 0x34));
      F_00e1d4f0(&(*(undefined4 *)(gen_frame + 0x0)));
    }
  }
  ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0xc))))
            (*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))),(*(undefined4 *)&gen_args[2]),(*(uint *)&gen_args[3]),phVar3,(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)&gen_args[4]));
  pcVar4 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)phVar3 + 0xc))(phVar3,(int)&(*(uint *)&gen_args[3]) + 3)));
  return (uint)(*pcVar4 == '\0');
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
  iVar2 = *(int *)((int)this + 0x28);
  *(undefined4 *)((int)this + 0x24) = 0;
  if (-1 < iVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x20),iVar2 * 4);
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
  GEN_ENTER(0xe1de80u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
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
  GEN_ENTER(0xe1ded0u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
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
      ((undefined1 *)(gen_frame + 0x8))[(int)((int)pcVar3 - (int)pcVar1)] = 0;
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
  GEN_ENTER(0xe1dff0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
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
  uVar3 = *(uint *)((int)this + 0x28);
  iVar1 = uVar5 + param_1;
  (*(int *)(gen_frame + 0x8)) = 0;
  if (uVar3 != uVar5 && -1 < (int)(uVar3 - uVar5)) {
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
  uVar3 = *(uint *)((int)this + 0x2c);
  iVar1 = uVar5 + param_1;
  (*(int *)(gen_frame + 0x8)) = 0;
  if (uVar3 != uVar5 && -1 < (int)(uVar3 - uVar5)) {
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

/* ref: FUN_00e1e400 */
uint F_00e1e400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1e400u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * puVar4;
  float10 extraout_ST0;
  
  puVar4 = (*(undefined4 * PTR32 *)&gen_args[3]);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))) + 4))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))))));
  piVar2 = (int *)(*piVar1 + -2);
  switch((unsigned int)(uintptr_t)(piVar2)) {
  case (int *)0x0: ;
  case (int *)0x2: ;
    uVar3 = ((code *)*(gen_code32 *)(*(int *)*puVar4 + 0x4c))((int *)*puVar4,puVar4[1]);
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x50))))((*(int * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),uVar3);
    return uVar3;
  case (int *)0x1: ;
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)*puVar4 + 0x3c))((int *)*puVar4,puVar4[1]);
    (*(float *)(gen_frame + 0x8)) = (float)extraout_ST0;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x40))))((*(undefined4 *)&gen_args[2]),(undefined4)gen_fl2bits((float)extraout_ST0));
    return uVar3;
  case (int *)0x3: ;
    uVar3 = ((code *)*(gen_code32 *)(*(int *)*puVar4 + 0x34))((int *)*puVar4,puVar4[1]);
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x38))))((*(int * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),uVar3)));
    break;
  case (int *)0x4: ;
  case (int *)0x5: ;
    (*(undefined4 * PTR32 *)&gen_args[3]) = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*puVar4 + 0x5c))((int *)*puVar4,puVar4[1])));
    if ((*(undefined4 * PTR32 *)&gen_args[3]) != (undefined4 *)0x0) {
      *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[3]) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[3]) + 6))) + 1;
      (*(undefined4 * PTR32 *)&gen_args[3])[2] = (*(undefined4 * PTR32 *)&gen_args[3])[2] + 1;
    }
    puVar4 = (undefined4 *)F_00e1f5c0((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(undefined4 * PTR32 *)&gen_args[3]));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x60))))((*(int * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),*puVar4);
    piVar2 = (*(int * PTR32 *)(gen_frame + 0x4));
    if ((*(int * PTR32 *)(gen_frame + 0x4)) != (int *)0x0) {
      *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x4)) + 6) = *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x4)) + 6) + -1;
      piVar1 = (*(int * PTR32 *)(gen_frame + 0x4)) + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x4)))((*(int * PTR32 *)(gen_frame + 0x4)),1)));
      }
    }
    if ((*(undefined4 * PTR32 *)&gen_args[3]) != (undefined4 *)0x0) {
      *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[3]) + 6))) = *((short *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[3]) + 6))) + -1;
      piVar1 = (*(undefined4 * PTR32 *)&gen_args[3]) + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[3]))))((*(undefined4 * PTR32 *)&gen_args[3]),1);
        return uVar3;
      }
    }
    break;
  case (int *)0x7: ;
    piVar2 = (int *)piVar1[1];
    if (*piVar2 == 3) {
      F_00e19c70(piVar1);
      uVar3 = ((code *)*(gen_code32 *)(*(int *)*puVar4 + 0x2c))((int *)*puVar4,puVar4[1]);
      F_00e19c70(piVar1);
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x30))))((*(int * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),uVar3);
      return uVar3;
    }
  }
  return (uint)piVar2;
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
uint F_00e1e7e0(unsigned int gen_a0, unsigned int gen_a1)
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
  return (uint)param_1;
}

/* ref: FUN_00e1e830 */
uint F_00e1e830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1e830u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int * piVar6;
  uint uVar7;
  undefined4 * puVar8;
  int iVar9;
  float10 extraout_ST0;
  
  piVar6 = (*(int * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = (*(undefined * PTR32 *)&gen_args[0]);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))) + 4))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))));
  uVar4 = (*(uint *)&gen_args[3]);
  uVar3 = *piVar2 - 2;
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
  case 2: ;
    iVar9 = 0;
    if (0 < (int)(*(uint *)&gen_args[3])) {
      do {
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x4c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))),iVar9);
        uVar3 = ((code *)*(gen_code32 *)(*(int *)*piVar6 + 0x50))((int *)*piVar6,iVar9,uVar3);
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)uVar4);
      return uVar3;
    }
    break;
  case 1: ;
    iVar9 = 0;
    if (0 < (int)(*(uint *)&gen_args[3])) {
      do {
        extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x3c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))),iVar9);
        (*(uint *)&gen_args[3]) = (uint)gen_fl2bits((float)extraout_ST0);
        uVar3 = ((code *)*(gen_code32 *)(*(int *)*piVar6 + 0x40))(iVar9,(*(uint *)&gen_args[3]));
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)uVar4);
      return uVar3;
    }
    break;
  case 3: ;
    iVar9 = 0;
    if (0 < (int)(*(uint *)&gen_args[3])) {
      do {
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x34))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))),iVar9);
        uVar3 = ((code *)*(gen_code32 *)(*(int *)*piVar6 + 0x38))((int *)*piVar6,iVar9,uVar3);
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)uVar4);
    }
    break;
  case 4: ;
    ((code *)*(gen_code32 *)(*(int *)*piVar6 + 0x10))((int *)*piVar6,(*(uint *)&gen_args[3]));
    piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x18))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))))));
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0x24))(piVar6);
    (*(uint *)(gen_frame + 0xc)) = 0;
    (*(uint *)(gen_frame + 0x10)) = 0;
    (*(uint *)(gen_frame + 0x14)) = 0x80000000;
    if (uVar4 == 0) {
      uVar3 = 0;
LAB_00e1eba5: ;
      uVar7 = 0x80000000;
    }
    else {
      (*(uint *)(gen_frame + 0x2c)) = uVar4 << 4;
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(uint *)(gen_frame + 0x2c)));
      uVar7 = (int)((*(uint *)(gen_frame + 0x2c)) + ((int)(*(uint *)(gen_frame + 0x2c)) >> 0x1f & 0xfU)) >> 4;
      if (uVar7 == 0) goto LAB_00e1eba5;
    }
    (*(uint *)(gen_frame + 0xc)) = uVar3;
    (*(uint *)(gen_frame + 0x10)) = uVar4;
    (*(uint *)(gen_frame + 0x14)) = uVar7;
    if (0 < (int)uVar4) {
      puVar5 = (undefined4 *)(uVar3 + 8);
      uVar3 = uVar4;
      do {
        if (puVar5 != (undefined4 *)0x8) {
          puVar5[-2] = 0;
          puVar5[-1] = 0;
          *puVar5 = 0;
          puVar5[1] = 0;
        }
        puVar5 = puVar5 + 4;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    ((code *)*(gen_code32 *)(*piVar6 + 0x30))(piVar6,&(*(uint *)(gen_frame + 0xc)));
    if (0 < (int)uVar4) {
      (*(uint *)(gen_frame + 0x2c)) = 0;
      (*(uint *)(gen_frame + 0x24)) = uVar4;
      do {
        puVar5 = (undefined4 *)((*(uint *)(gen_frame + 0x2c)) + (*(uint *)(gen_frame + 0xc)));
        iVar9 = *(int *)puVar5[2];
        if ((iVar9 == 8) || ((iVar9 == 9 && (*((int *)GEN_TOP(((int *)puVar5[2])[1])) != 3)))) {
          piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))) + 0x28))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))),*puVar5)));
          (*(int * PTR32 *)(gen_frame + 0x30)) = piVar6;
          if (piVar6 != (int *)0x0) {
            *(short *)((int)piVar6 + 6) = *(short *)((int)piVar6 + 6) + 1;
            piVar6[2] = piVar6[2] + 1;
          }
          piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x28))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))),*puVar5)));
          (*(int * PTR32 *)(gen_frame + 0x34)) = piVar6;
          if (piVar6 != (int *)0x0) {
            *(short *)((int)piVar6 + 6) = *(short *)((int)piVar6 + 6) + 1;
            piVar6[2] = piVar6[2] + 1;
          }
          uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0x14))(piVar6);
          ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x30)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x30)),uVar4);
          uVar4 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x34)) + 0x14))((*(int * PTR32 *)(gen_frame + 0x34)));
          F_00e1e830((*(undefined * PTR32 *)(gen_frame + 0x38)),(int *)&(*(int * PTR32 *)(gen_frame + 0x30)),&(*(int * PTR32 *)(gen_frame + 0x34)),uVar4);
          if ((*(int * PTR32 *)(gen_frame + 0x34)) != (int *)0x0) {
            *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x34)) + 6) = *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x34)) + 6) + -1;
            piVar6 = (*(int * PTR32 *)(gen_frame + 0x34)) + 2;
            *piVar6 = *piVar6 + -1;
            if (*piVar6 == 0) {
              ((code *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x34)))((*(int * PTR32 *)(gen_frame + 0x34)),1);
            }
          }
          if ((*(int * PTR32 *)(gen_frame + 0x30)) != (int *)0x0) {
            *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x30)) + 6) = *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x30)) + 6) + -1;
            piVar6 = (*(int * PTR32 *)(gen_frame + 0x30)) + 2;
            *piVar6 = *piVar6 + -1;
            if (*piVar6 == 0) {
              ((code *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x30)))((*(int * PTR32 *)(gen_frame + 0x30)),1);
            }
          }
        }
        else if (iVar9 != 1) {
          puVar8 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))) + 0x28))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))),*puVar5)));
          if (puVar8 != (undefined4 *)0x0) {
            *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + 1;
            puVar8[2] = puVar8[2] + 1;
          }
          puVar5 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x28))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))),*puVar5)));
          if (puVar5 != (undefined4 *)0x0) {
            *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + 1;
            puVar5[2] = puVar5[2] + 1;
          }
          iVar9 = 0;
          if (0 < (int)(*(uint *)&gen_args[3])) {
            (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar5;
            do {
              (*(int *)(gen_frame + 0x1c)) = iVar9;
              F_00e1e400((*(undefined * PTR32 *)(gen_frame + 0x38)),puVar8,iVar9,&(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
              iVar9 = iVar9 + 1;
            } while (iVar9 < (int)(*(uint *)&gen_args[3]));
          }
          if (puVar5 != (undefined4 *)0x0) {
            *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + -1;
            piVar6 = puVar5 + 2;
            *piVar6 = *piVar6 + -1;
            if (*piVar6 == 0) {
              ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
            }
          }
          if (puVar8 != (undefined4 *)0x0) {
            *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + -1;
            piVar6 = puVar8 + 2;
            *piVar6 = *piVar6 + -1;
            if (*piVar6 == 0) {
              ((code *)*(gen_code32 *)*puVar8)(puVar8,1);
            }
          }
        }
        (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x2c)) + 0x10;
        uVar4 = (*(uint *)(gen_frame + 0x24)) - 1;
        (*(uint *)(gen_frame + 0x24)) = uVar4;
      } while (uVar4 != 0);
    }
    (*(uint *)(gen_frame + 0x10)) = 0;
    uVar3 = (*(uint *)(gen_frame + 0x14));
    if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) << 4);
      return uVar4;
    }
    break;
  case 5: ;
    uVar3 = ((code *)*(gen_code32 *)(*(int *)*piVar6 + 0x10))((int *)*piVar6,(*(uint *)&gen_args[3]));
    iVar9 = 0;
    if (0 < (int)uVar4) {
      do {
        puVar5 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x5c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))),iVar9)));
        (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar5;
        if (puVar5 != (undefined4 *)0x0) {
          *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + 1;
          puVar5[2] = puVar5[2] + 1;
        }
        piVar2 = (int *)*piVar6;
        puVar5 = (undefined4 *)F_00e1f5c0((*(undefined * PTR32 *)(gen_frame + 0x38)),&(*(undefined4 * PTR32 *)(gen_frame + 0x20)),&(*(undefined4 * PTR32 *)(gen_frame + 0x28)));
        ((code *)*(gen_code32 *)(*piVar2 + 0x60))(piVar2,iVar9,*puVar5);
        puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x20));
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (undefined4 *)0x0) {
          *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x20)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x20)) + 6) + -1;
          piVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x20)) + 2;
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            puVar5 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20)))((*(undefined4 * PTR32 *)(gen_frame + 0x20)),1)));
          }
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x28)) != (undefined4 *)0x0) {
          *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x28)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x28)) + 6) + -1;
          piVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x28)) + 2;
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            puVar5 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x28)))((*(undefined4 * PTR32 *)(gen_frame + 0x28)),1)));
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)(*(uint *)&gen_args[3]));
      return (uint)puVar5;
    }
    break;
  case 6: ;
    uVar3 = ((code *)*(gen_code32 *)(*(int *)*piVar6 + 0x10))((int *)*piVar6,(*(uint *)&gen_args[3]));
    iVar9 = 0;
    if (0 < (int)uVar4) {
      do {
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*piVar6 + 100))((int *)*piVar6,iVar9)));
        (*(int * PTR32 *)(gen_frame + 0x34)) = piVar2;
        if (piVar2 != (int *)0x0) {
          *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
          piVar2[2] = piVar2[2] + 1;
        }
        (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 100))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))),iVar9)));
        if ((*(int * PTR32 *)&gen_args[1]) != (int *)0x0) {
          *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) + 1;
          (*(int * PTR32 *)&gen_args[1])[2] = (*(int * PTR32 *)&gen_args[1])[2] + 1;
        }
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x14))))((*(int * PTR32 *)&gen_args[1]));
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x34)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x34)),uVar4);
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x14))))((*(int * PTR32 *)&gen_args[1]));
        F_00e1e830((*(undefined * PTR32 *)(gen_frame + 0x38)),(int *)&(*(int * PTR32 *)(gen_frame + 0x34)),&(*(int * PTR32 *)&gen_args[1]),uVar4);
        piVar2 = (*(int * PTR32 *)&gen_args[1]);
        if ((*(int * PTR32 *)&gen_args[1]) != (int *)0x0) {
          *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) + -1;
          piVar1 = (*(int * PTR32 *)&gen_args[1]) + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]),1)));
          }
        }
        if ((*(int * PTR32 *)(gen_frame + 0x34)) != (int *)0x0) {
          *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x34)) + 6) = *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x34)) + 6) + -1;
          piVar1 = (*(int * PTR32 *)(gen_frame + 0x34)) + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x34)))((*(int * PTR32 *)(gen_frame + 0x34)),1)));
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)(*(uint *)&gen_args[3]));
      return (uint)piVar2;
    }
    break;
  case 7: ;
    uVar3 = F_00e19c70(piVar2);
    uVar4 = (*(uint *)&gen_args[3]);
    iVar9 = *(int *)piVar2[1];
    (*(uint *)(gen_frame + 0x2c)) = uVar3;
    if (iVar9 == 3) {
      iVar9 = 0;
      if (0 < (int)(*(uint *)&gen_args[3])) {
        do {
          uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 0x2c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))),iVar9);
          uVar3 = ((code *)*(gen_code32 *)(*(int *)*piVar6 + 0x30))((int *)*piVar6,iVar9,uVar3);
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)uVar4);
        return uVar3;
      }
    }
    else {
      uVar3 = ((code *)*(gen_code32 *)(*(int *)*piVar6 + 0x10))((int *)*piVar6,(*(uint *)&gen_args[3]));
      iVar9 = 0;
      if (0 < (int)uVar4) {
        do {
          piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))) + 100))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[2]))),iVar9)));
          (*(int * PTR32 *)(gen_frame + 0x30)) = piVar2;
          if (piVar2 != (int *)0x0) {
            *(short *)((int)piVar2 + 6) = *(short *)((int)piVar2 + 6) + 1;
            piVar2[2] = piVar2[2] + 1;
          }
          (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*piVar6 + 100))((int *)*piVar6,iVar9)));
          if ((*(int * PTR32 *)&gen_args[1]) != (int *)0x0) {
            *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) + 1;
            (*(int * PTR32 *)&gen_args[1])[2] = (*(int * PTR32 *)&gen_args[1])[2] + 1;
          }
          ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x10))))((*(int * PTR32 *)&gen_args[1]),(*(uint *)(gen_frame + 0x2c)));
          F_00e1e830((*(undefined * PTR32 *)(gen_frame + 0x38)),(int *)&(*(int * PTR32 *)&gen_args[1]),&(*(int * PTR32 *)(gen_frame + 0x30)),(*(uint *)(gen_frame + 0x2c)));
          piVar2 = (*(int * PTR32 *)&gen_args[1]);
          if ((*(int * PTR32 *)&gen_args[1]) != (int *)0x0) {
            *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) + -1;
            piVar1 = (*(int * PTR32 *)&gen_args[1]) + 2;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[1]))))((*(int * PTR32 *)&gen_args[1]),1)));
            }
          }
          if ((*(int * PTR32 *)(gen_frame + 0x30)) != (int *)0x0) {
            *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x30)) + 6) = *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x30)) + 6) + -1;
            piVar1 = (*(int * PTR32 *)(gen_frame + 0x30)) + 2;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x30)))((*(int * PTR32 *)(gen_frame + 0x30)),1)));
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)(*(uint *)&gen_args[3]));
        return (uint)piVar2;
      }
    }
  }
  return uVar3;
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
  code * pcVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  int iVar7;
  undefined * this_00;
  int * in_ecx;
  undefined4 * puVar8;
  uint * puVar9;
  undefined4 uVar10;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = this;
  (*(uint *)(gen_frame + 0x38)) = 0;
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x24))))(*(int * PTR32 *)this,param_1);
  if (uVar4 == 0) {
    (*(int *)(gen_frame + 0x20)) = 0;
    (*(uint *)(gen_frame + 0x24)) = 0;
    (*(uint *)(gen_frame + 0x28)) = 0x80000000;
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x20)),10,0x18);
    uVar4 = param_1;
    while ((uVar4 != 0 &&
           (uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x24))))(*(int * PTR32 *)this,uVar4), uVar5 == 0))) {
      piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x24))))
                                (*(int * PTR32 *)((int)this + 4),uVar4)));
      (*(int * PTR32 *)(gen_frame + 0x30)) = piVar6;
      if ((*(uint *)(gen_frame + 0x24)) == ((*(uint *)(gen_frame + 0x28)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x20)),0x18);
      }
      iVar7 = (*(int *)(gen_frame + 0x20)) + (*(uint *)(gen_frame + 0x24)) * 0x18;
      if (iVar7 != 0) {
        *(undefined4 *)(iVar7 + 0xc) = 0;
        *(undefined4 *)(iVar7 + 0x10) = 0;
        *(undefined4 *)(iVar7 + 0x14) = 0x80000000;
      }
      iVar7 = (*(uint *)(gen_frame + 0x24)) * 0x18;
      (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x24)) + 1;
      F_00e1ce50(&(*(int * PTR32 *)(gen_frame + 0x30)),(*(int *)(gen_frame + 0x20)) + iVar7);
      uVar4 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x30)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x30)));
      if (uVar4 == 0) {
        uVar4 = 0;
      }
      else {
        (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x38)) | 1;
        piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x30)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x30)))));
        uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 8))(piVar6);
      }
      if (((*(uint *)(gen_frame + 0x38)) & 1) != 0) {
        (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x38)) & 0xfffffffe;
      }
    }
    iVar7 = (*(uint *)(gen_frame + 0x24)) - 1;
    (*(int *)(gen_frame + 0x2c)) = iVar7;
    if (-1 < iVar7) {
      (*(int * PTR32 *)(gen_frame + 0x30)) = (int *)(iVar7 * 0x18);
      do {
        iVar7 = 0;
        puVar8 = (undefined4 *)((*(int *)(gen_frame + 0x20)) + (int)(*(int * PTR32 *)(gen_frame + 0x30)));
        (*(int *)(gen_frame + 0x14)) = 0;
        (*(uint *)(gen_frame + 0x18)) = 0;
        (*(uint *)(gen_frame + 0x1c)) = 0x80000000;
        (*(undefined4 *)(gen_frame + 0x8)) = *puVar8;
        (*(undefined4 *)(gen_frame + 0xc)) = puVar8[1];
        (*(undefined4 *)(gen_frame + 0x10)) = puVar8[2];
        uVar4 = puVar8[4];
        if (0 < (int)uVar4) {
          F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x14)),((int)uVar4 < 0) - 1 & uVar4,0xc);
        }
        (*(uint *)(gen_frame + 0x18)) = uVar4;
        if (0 < (int)uVar4) {
          (*(uint *)(gen_frame + 0x38)) = uVar4;
          do {
            iVar2 = puVar8[3];
            puVar1 = (undefined8 *)(iVar7 + (*(int *)(gen_frame + 0x14)));
            *puVar1 = *(undefined8 *)(iVar2 + iVar7);
            *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(iVar2 + 8 + iVar7);
            uVar10 = *(undefined4 *)(iVar2 + 4 + iVar7);
            this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 0x2c))((int *)*(*(undefined4 * PTR32 *)(gen_frame + 0x34)))));
            uVar5 = F_00e1aff0(this_00,uVar10);
            iVar7 = iVar7 + 0xc;
            uVar4 = (*(uint *)(gen_frame + 0x38)) - 1;
            (*(uint *)(gen_frame + 0x38)) = uVar4;
            *(uint *)((int)puVar1 + 4) = uVar5;
          } while (uVar4 != 0);
        }
        ((code *)*(gen_code32 *)(*(int *)*(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 0xc))((int *)*(*(undefined4 * PTR32 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x8)));
        (*(uint *)(gen_frame + 0x18)) = 0;
        if (-1 < (int)(*(uint *)(gen_frame + 0x1c))) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                    (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x14)),((*(uint *)(gen_frame + 0x1c)) & 0x3fffffff) * 0xc);
        }
        (*(int * PTR32 *)(gen_frame + 0x30)) = (*(int * PTR32 *)(gen_frame + 0x30)) + -6;
        iVar7 = (*(int *)(gen_frame + 0x2c)) + -1;
        (*(int *)(gen_frame + 0x2c)) = iVar7;
        this = (*(undefined4 * PTR32 *)(gen_frame + 0x34));
      } while (-1 < iVar7);
    }
    piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x24))))
                              (*(int * PTR32 *)((int)this + 4),param_1)));
    iVar7 = 0;
    uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0x24))(piVar6);
    if (0 < (int)uVar4) {
      do {
        pcVar3 = *(gen_code32 *)(*piVar6 + 0x28);
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(int *)(gen_frame + 0x14)) = 0;
        (*(uint *)(gen_frame + 0x18)) = 0;
        (*(uint *)(gen_frame + 0x1c)) = 0;
        (*pcVar3)(piVar6,iVar7,&(*(undefined4 *)(gen_frame + 0x10)));
        in_ecx = (int *)F_00e19d40((*(uint *)(gen_frame + 0x18)));
        if (*in_ecx == 6) {
          uVar4 = F_00e19c80(in_ecx);
          F_00e1f070((*(undefined4 * PTR32 *)(gen_frame + 0x34)),uVar4);
        }
        iVar7 = iVar7 + 1;
        uVar4 = ((code *)*(gen_code32 *)(*piVar6 + 0x24))(piVar6);
      } while (iVar7 < (int)uVar4);
    }
    uVar4 = ((code *)*(gen_code32 *)(*(int *)*(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 0x24))((int *)*(*(undefined4 * PTR32 *)(gen_frame + 0x34)),param_1);
    iVar7 = (*(uint *)(gen_frame + 0x24)) - 1;
    if (-1 < iVar7) {
      puVar9 = (uint *)((*(int *)(gen_frame + 0x20)) + 0x14 + iVar7 * 0x18);
      do {
        uVar5 = *puVar9;
        puVar9[-1] = 0;
        if (-1 < (int)uVar5) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                    (&REFG(undefined * PTR32, 0x13516ac),puVar9[-2],(uVar5 & 0x3fffffff) * 0xc);
        }
        puVar9[-2] = 0;
        *puVar9 = 0x80000000;
        iVar7 = iVar7 + -1;
        puVar9 = puVar9 + -6;
      } while (-1 < iVar7);
    }
    (*(uint *)(gen_frame + 0x24)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x28))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x20)),((*(uint *)(gen_frame + 0x28)) & 0x3fffffff) * 0x18);
    }
  }
  return uVar4;
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
  uVar1 = (*(uint *)(gen_frame + 0x14));
  if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) << 4);
  }
  return uVar1;
}

/* ref: FUN_00e1f510 */
uint F_00e1f510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe1f510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 8))((int *)*param_1);
  piVar1 = (int *)*param_2;
  iVar3 = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0x80000000;
  iVar4 = *piVar1;
  (*(uint *)(gen_frame + 0x14)) = uVar2;
  uVar2 = ((code *)*(gen_code32 *)(iVar4 + 8))(piVar1);
  (*(uint *)(gen_frame + 0x18)) = uVar2;
  F_00e1f390(this,&(*(int *)(gen_frame + 0x8)),&(*(uint *)(gen_frame + 0x14)),&(*(uint *)(gen_frame + 0x18)));
  if (0 < (*(int *)(gen_frame + 0xc))) {
    iVar4 = 0;
    do {
      F_00e1ee40(this,param_1,param_2,iVar4 + (*(int *)(gen_frame + 0x8)));
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < (*(int *)(gen_frame + 0xc)));
  }
  (*(int *)(gen_frame + 0xc)) = 0;
  uVar2 = (*(uint *)(gen_frame + 0x10));
  if (-1 < (int)(*(uint *)(gen_frame + 0x10))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x10)) << 4)
    ;
  }
  return uVar2;
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
  code * pcVar2;
  undefined4 uVar3;
  int * piVar4;
  undefined4 * puVar5;
  uint uVar6;
  int * piVar7;
  
  piVar1 = (*(int * PTR32 *)&gen_args[2]);
  piVar7 = ((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2])));
  if (piVar7 == (int *)0x0) {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  pcVar2 = *(gen_code32 *)(*piVar7 + 4);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  puVar5 = ((undefined4 *)GEN_TOP((*pcVar2)(piVar7,&(*(undefined4 *)(gen_frame + 0x20)))));
  uVar6 = F_00e06a20(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),*puVar5,puVar5[1],((undefined1 *)(gen_frame + 0x10)));
  if (uVar6 == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))))(*(int * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),((undefined1 *)(gen_frame + 0x10)));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*piVar1 + 8))((int *)*piVar1)));
  uVar6 = ((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7);
  (*(int * PTR32 *)&gen_args[2]) = (int *)F_00e1f070((*(undefined * PTR32 *)&gen_args[0]),uVar6);
  piVar7 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))))(*(int * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[2]),0)));
  (*(int * PTR32 *)(gen_frame + 0x28)) = piVar7;
  if (piVar7 != (int *)0x0) {
    *(short *)((int)piVar7 + 6) = *(short *)((int)piVar7 + 6) + 1;
    piVar7[2] = piVar7[2] + 1;
  }
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  if (piVar7 == (int *)0x0) {
    puVar5 = &(*(undefined4 *)(gen_frame + 0x18));
  }
  else {
    puVar5 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 4))(piVar7,((undefined1 *)(gen_frame + 0x8)))));
  }
  uVar3 = puVar5[1];
  (*(undefined4 *)(gen_frame + 0x20)) = *puVar5;
  piVar4 = (int *)*piVar1;
  (*(undefined4 *)(gen_frame + 0x24)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  if (piVar4 == (int *)0x0) {
    puVar5 = &(*(undefined4 *)(gen_frame + 0x18));
  }
  else {
    puVar5 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4,((undefined1 *)(gen_frame + 0x0)))));
  }
  F_00e068a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),&REFG(undefined * PTR32, 0x13516ac),*puVar5,puVar5[1],(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)));
  F_00e1f510((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)(gen_frame + 0x28)),piVar1);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = piVar7;
  if (piVar7 != (int *)0x0) {
    *(short *)((int)piVar7 + 6) = *(short *)((int)piVar7 + 6) + 1;
    piVar7[2] = piVar7[2] + 1;
    *(short *)((int)piVar7 + 6) = *(short *)((int)piVar7 + 6) + -1;
    piVar1 = piVar7 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*piVar7)(piVar7,1);
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
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = (undefined4 *)(param_1 + 0x14);
    iVar2 = param_2;
    do {
      if (puVar1 != (undefined4 *)0x14) {
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
      }
      puVar1 = puVar1 + 6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e1fb20 */
uint F_00e1fb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe1fb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar2 + 0x2c),this,0x18);
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
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = param_2 + -1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(param_1 + 0x14 + iVar3 * 0x18);
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar2[-2],(uVar1 & 0x3fffffff) * 0xc);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + -6;
    } while (-1 < iVar3);
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
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(*(int *)this + 0x14 + iVar3 * 0x18);
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar2[-2],(uVar1 & 0x3fffffff) * 0xc);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + -6;
    } while (-1 < iVar3);
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
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar2[-2],(uVar1 & 0x3fffffff) * 0xc);
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

/* ref: FUN_00e1ff00 */
uint F_00e1ff00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe1ff00u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  float10 extraout_ST0;
  
  uVar4 = (*(uint *)&gen_args[3]);
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(int * PTR32 *)&gen_args[0]);
  piVar1 = (int *)F_00e1cd10((undefined *)(*(uint *)&gen_args[3]));
  piVar2 = (int *)(*piVar1 + -2);
  switch((unsigned int)(uintptr_t)(piVar2)) {
  case (int *)0x0: ;
  case (int *)0x2: ;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)uVar4 + 0x30))))(*(int * PTR32 *)uVar4,*(undefined4 *)(uVar4 + 4));
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x44))))((*(int * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),uVar4);
    return uVar4;
  case (int *)0x1: ;
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)uVar4 + 0x3c))))(*(int * PTR32 *)uVar4,*(undefined4 *)(uVar4 + 4));
    (*(uint *)&gen_args[3]) = (uint)gen_fl2bits((float)extraout_ST0);
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x50))))((*(undefined4 *)&gen_args[2]),(*(uint *)&gen_args[3]));
    return uVar4;
  case (int *)0x3: ;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)uVar4 + 0x2c))))(*(int * PTR32 *)uVar4,*(undefined4 *)(uVar4 + 4));
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x54))))((*(int * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),uVar4)));
    break;
  case (int *)0x4: ;
  case (int *)0x5: ;
    puVar5 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)uVar4 + 0x34))))(*(int * PTR32 *)uVar4,*(undefined4 *)(uVar4 + 4))));
    if (puVar5 != (undefined4 *)0x0) {
      *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + 1;
      puVar5[2] = puVar5[2] + 1;
    }
    (*(uint *)&gen_args[3]) = (uint)puVar5;
    puVar6 = (undefined4 *)F_00e1f5c0((*(int * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[3]));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x5c))))((*(int * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),*puVar6);
    piVar2 = (*(int * PTR32 *)(gen_frame + 0x8));
    if ((*(int * PTR32 *)(gen_frame + 0x8)) != (int *)0x0) {
      *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x8)) + 6) = *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x8)) + 6) + -1;
      piVar1 = (*(int * PTR32 *)(gen_frame + 0x8)) + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x8)))((*(int * PTR32 *)(gen_frame + 0x8)),1)));
      }
    }
    if (puVar5 != (undefined4 *)0x0) {
      *(short *)((int)puVar5 + 6) = *(short *)((int)puVar5 + 6) + -1;
      piVar1 = puVar5 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        uVar4 = ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
        return uVar4;
      }
    }
    break;
  case (int *)0x7: ;
    piVar2 = (int *)piVar1[1];
    if (*piVar2 == 3) {
      uVar3 = F_00e19c70(piVar1);
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)uVar4 + 0x38))))(*(int * PTR32 *)uVar4,*(undefined4 *)(uVar4 + 4),uVar3)
      ;
      uVar3 = F_00e19c70(piVar1);
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x48))))((*(int * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),uVar4,uVar3);
      return uVar4;
    }
  }
  return (uint)piVar2;
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
uint F_00e20280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
        return (uint)param_1;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return (uint)param_1;
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
  code * pcVar3;
  undefined * pvVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  uint * puVar8;
  int * piVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  LPVOID pvVar12;
  uint * puVar13;
  int iVar14;
  int iVar15;
  
  (*(undefined * PTR32 *)(gen_frame + 0x54)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)0x0;
  uVar5 = F_00e20100(this,param_2);
  (*(uint *)(gen_frame + 0x38)) = uVar5;
  uVar6 = F_00d929c0(uVar5);
  (*(int *)(gen_frame + 0x30)) = (uVar6 + 0xf & 0xfffffff0) + param_1;
  do {
    if (uVar5 == 0) {
      return (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x58));
    }
    (*(int *)(gen_frame + 0x48)) = 0;
    uVar6 = F_00d92850(uVar5);
    if (0 < (int)uVar6) {
      do {
        puVar7 = (undefined4 *)F_00d92860(uVar5,(*(int *)(gen_frame + 0x48)));
        puVar13 = ((uint *)GEN_TOP(((uint)*(ushort *)((int)puVar7 + 0x12) + param_1)));
        (*(uint *)(gen_frame + 0x4c)) = (uint)*(byte *)(puVar7 + 3);
        ((code *)*(gen_code32 *)(*(int *)*param_2 + 0xc))((int *)*param_2,&(*(int * PTR32 *)(gen_frame + 0x28)),*puVar7);
        if (((*(int * PTR32 *)(gen_frame + 0x28)) == (int *)0x0) ||
           (uVar6 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x68))((*(int * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c))), uVar6 == 0)) {
          (*(undefined4 *)(gen_frame + 0x0)) = 0;
          (*(undefined4 *)(gen_frame + 0x4)) = 0;
          (*(undefined4 *)(gen_frame + 0x8)) = 0;
          (*(int *)(gen_frame + 0xc)) = 0;
          if ((*(int * PTR32 *)(gen_frame + 0x28)) != (int *)0x0) {
            ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 100))((*(int * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),&(*(undefined4 *)(gen_frame + 0x0)));
          }
          if (*(char *)(puVar7 + 3) == '\x16') {
            puVar13[2] = 0x80000000;
          }
          uVar6 = F_00d92ab0(uVar5,(*(int *)(gen_frame + 0x48)));
          if ((uVar6 == 0) ||
             (uVar6 = ((code *)*(gen_code32 *)(*(int *)*param_2 + 0x6c))((int *)*param_2), uVar6 == 0)) {
            if ((((*(int * PTR32 *)(gen_frame + 0x28)) != (int *)0x0) && ((*(int *)(gen_frame + 0xc)) != 0)) ||
               (((*(uint *)(gen_frame + 0x4c)) == 0x19 && ((*(ushort *)(puVar7 + 4) & 0x400) == 0)))) goto LAB_00e22255;
          }
          else {
            uVar6 = F_00da6030(puVar7);
            uVar5 = F_00d92bc0(uVar5,(*(int *)(gen_frame + 0x48)));
            F_00da1010(puVar13,uVar5,uVar6);
          }
          goto LAB_00e22812;
        }
LAB_00e22255: ;
        uVar5 = F_00da5ff0(puVar7);
        if (uVar5 == 0) {
          uVar5 = 1;
          puVar8 = (uint *)F_00da6030(puVar7);
        }
        else {
          uVar5 = F_00da5ff0(puVar7);
          uVar6 = F_00da6030(puVar7);
          puVar8 = (uint *)((int)uVar6 / (int)uVar5);
        }
        (*(uint * PTR32 *)(gen_frame + 0x40)) = puVar8;
        uVar6 = (ushort)~*(ushort *)(puVar7 + 4) >> 9 & 1;
        (*(uint *)(gen_frame + 0x50)) = uVar6;
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
          if (uVar5 == 1) {
            iVar14 = param_3;
            uVar5 = F_00da5fd0(puVar7);
            puVar7 = (undefined4 *)
                     F_00e23ad0((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar13,(*(uint *)(gen_frame + 0x4c)),(uint)&(*(int * PTR32 *)(gen_frame + 0x28)),uVar5,uVar6,iVar14);
            (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar7;
          }
          else {
            piVar9 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)))));
            if (piVar9 != (int *)0x0) {
              *(short *)((int)piVar9 + 6) = *(short *)((int)piVar9 + 6) + 1;
              piVar9[2] = piVar9[2] + 1;
            }
            (*(uint *)(gen_frame + 0x44)) = 0;
            uVar5 = ((code *)*(gen_code32 *)(*piVar9 + 0x14))(piVar9);
            if (0 < (int)uVar5) {
              do {
                if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != (undefined4 *)0x0) break;
                (*(int * PTR32 *)(gen_frame + 0x20)) = piVar9;
                (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x44));
                uVar5 = (*(uint *)(gen_frame + 0x50));
                iVar14 = param_3;
                uVar6 = F_00da5fd0(puVar7);
                puVar10 = (undefined4 *)
                          F_00e23690((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar13,(*(uint *)(gen_frame + 0x4c)),(uint)&(*(int * PTR32 *)(gen_frame + 0x20)),uVar6,uVar5,iVar14);
                iVar14 = *piVar9;
                (*(uint *)(gen_frame + 0x44)) = (*(uint *)(gen_frame + 0x44)) + 1;
                puVar13 = (uint *)((int)puVar13 + (int)(*(uint * PTR32 *)(gen_frame + 0x40)));
                (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar10;
                uVar5 = ((code *)*(gen_code32 *)(iVar14 + 0x14))(piVar9);
              } while ((int)(*(uint *)(gen_frame + 0x44)) < (int)uVar5);
            }
            *(short *)((int)piVar9 + 6) = *(short *)((int)piVar9 + 6) + -1;
            piVar1 = piVar9 + 2;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              ((code *)*(gen_code32 *)*piVar9)(piVar9,1);
            }
          }
          break;
        default: ;
          goto switchD_00e222a6_caseD_13;
        case 0x14: ;
          if (*(char *)((int)puVar7 + 0xd) == '\x02') {
            if (uVar5 == 1) {
              puVar7 = (undefined4 *)
                       F_00e23ad0((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar13,0x1d,(uint)&(*(int * PTR32 *)(gen_frame + 0x28)),0,uVar6,param_3);
              (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar7;
            }
            else {
              puVar8 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)))));
              if (puVar8 != (uint *)0x0) {
                *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + 1;
                puVar8[2] = puVar8[2] + 1;
              }
              iVar14 = 0;
              uVar5 = ((code *)*(gen_code32 *)(*puVar8 + 0x14))(puVar8);
              if (0 < (int)uVar5) {
                do {
                  if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != (undefined4 *)0x0) break;
                  (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar8;
                  (*(int *)(gen_frame + 0x1c)) = iVar14;
                  puVar7 = (undefined4 *)
                           F_00e23690((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar13,0x1d,(uint)&(*(uint * PTR32 *)(gen_frame + 0x18)),0,(*(uint *)(gen_frame + 0x50)),param_3);
                  puVar13 = (uint *)((int)puVar13 + (int)(*(uint * PTR32 *)(gen_frame + 0x40)));
                  (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar7;
                  iVar14 = iVar14 + 1;
                  uVar5 = ((code *)*(gen_code32 *)(*puVar8 + 0x14))(puVar8);
                } while (iVar14 < (int)uVar5);
              }
              *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + -1;
              puVar13 = puVar8 + 2;
              *puVar13 = *puVar13 - 1;
              if (*puVar13 == 0) {
                puVar7 = (undefined4 *)*puVar8;
                goto LAB_00e22806;
              }
            }
            break;
          }
          if (*(char *)((int)puVar7 + 0xd) != '\x19') break;
          if (uVar5 == 1) {
            puVar8 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x34))((*(int * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)))));
            pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x54));
            (*(uint * PTR32 *)(gen_frame + 0x3c)) = puVar8;
            if (puVar8 != (uint *)0x0) {
              *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + 1;
              puVar8[2] = puVar8[2] + 1;
            }
            uVar5 = (*(uint *)(gen_frame + 0x50));
            iVar14 = param_3;
            uVar6 = F_00e20150((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar7,&(*(uint * PTR32 *)(gen_frame + 0x3c)));
            puVar7 = (undefined4 *)
                     F_00e23ad0(pvVar4,puVar13,(*(uint *)(gen_frame + 0x4c)),(uint)&(*(int * PTR32 *)(gen_frame + 0x28)),uVar6,uVar5,iVar14);
            (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar7;
            if (puVar8 != (uint *)0x0) {
              *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + -1;
              puVar13 = puVar8 + 2;
              *puVar13 = *puVar13 - 1;
              if (*puVar13 == 0) {
                puVar7 = (undefined4 *)*puVar8;
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
          uVar5 = ((code *)*(gen_code32 *)(*puVar8 + 0x14))(puVar8);
          if (0 < (int)uVar5) {
            (*(uint * PTR32 *)(gen_frame + 0x3c)) = puVar13;
            do {
              if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != (undefined4 *)0x0) break;
              puVar10 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*puVar8 + 0x5c))(puVar8,(*(uint *)(gen_frame + 0x44)))));
              (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar10;
              if (puVar10 != (undefined4 *)0x0) {
                *(short *)((int)puVar10 + 6) = *(short *)((int)puVar10 + 6) + 1;
                puVar10[2] = puVar10[2] + 1;
              }
              (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x44));
              (*(uint * PTR32 *)(gen_frame + 0x10)) = puVar8;
              uVar5 = (*(uint *)(gen_frame + 0x50));
              iVar14 = param_3;
              uVar6 = F_00e20150((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar7,&(*(undefined4 * PTR32 *)(gen_frame + 0x58)));
              puVar11 = (undefined4 *)
                        F_00e23690((*(undefined * PTR32 *)(gen_frame + 0x54)),(*(uint * PTR32 *)(gen_frame + 0x3c)),(*(uint *)(gen_frame + 0x4c)),(uint)&(*(uint * PTR32 *)(gen_frame + 0x10)),uVar6,uVar5,iVar14);
              (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar11;
              if (puVar10 != (undefined4 *)0x0) {
                *(short *)((int)puVar10 + 6) = *(short *)((int)puVar10 + 6) + -1;
                piVar9 = puVar10 + 2;
                *piVar9 = *piVar9 + -1;
                if (*piVar9 == 0) {
                  ((code *)*(gen_code32 *)*puVar10)(puVar10,1);
                }
              }
              uVar5 = *puVar8;
              (*(uint * PTR32 *)(gen_frame + 0x3c)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x3c)) + (int)(*(uint * PTR32 *)(gen_frame + 0x40)));
              uVar6 = (*(uint *)(gen_frame + 0x44)) + 1;
              (*(uint *)(gen_frame + 0x44)) = uVar6;
              uVar5 = ((code *)*(gen_code32 *)(uVar5 + 0x14))(puVar8);
            } while ((int)uVar6 < (int)uVar5);
          }
          goto LAB_00e223dc;
        case 0x16: ;
        case 0x1a: ;
          if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x54)) + 4) != 0) {
            if (*(char *)(puVar7 + 3) == '\x1a') {
              return 1;
            }
            if (*(char *)((int)puVar7 + 0xd) == '\x1c') {
              return 1;
            }
            if (*(char *)((int)puVar7 + 0xd) == '\x1d') {
              return 1;
            }
          }
          puVar8 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)))));
          (*(uint * PTR32 *)(gen_frame + 0x3c)) = puVar8;
          if (puVar8 != (uint *)0x0) {
            *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + 1;
            puVar8[2] = puVar8[2] + 1;
          }
          puVar7 = (undefined4 *)F_00e203a0((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar13,puVar7,&(*(uint * PTR32 *)(gen_frame + 0x3c)),param_3);
          goto LAB_00e223d1;
        case 0x18: ;
        case 0x1f: ;
          puVar7 = (undefined4 *)F_00e20230(puVar13,puVar7,&(*(int * PTR32 *)(gen_frame + 0x28)),(*(uint *)(gen_frame + 0x38)));
          (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar7;
          break;
        case 0x1b: ;
          if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x54)) + 4) != 0) {
            return 1;
          }
          puVar8 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)))));
          (*(uint * PTR32 *)(gen_frame + 0x40)) = puVar8;
          if (puVar8 != (uint *)0x0) {
            *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + 1;
            puVar8[2] = puVar8[2] + 1;
          }
          puVar8 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*puVar8 + 0x5c))(puVar8,0)));
          (*(uint * PTR32 *)(gen_frame + 0x3c)) = puVar8;
          if (puVar8 != (uint *)0x0) {
            *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + 1;
            puVar8[2] = puVar8[2] + 1;
          }
          uVar5 = F_00e20150((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar7,&(*(uint * PTR32 *)(gen_frame + 0x3c)));
          *puVar13 = uVar5;
          if (puVar8 != (uint *)0x0) {
            *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + -1;
            puVar2 = puVar8 + 2;
            *puVar2 = *puVar2 - 1;
            if (*puVar2 == 0) {
              ((code *)*(gen_code32 *)*puVar8)(puVar8,1);
            }
          }
          uVar5 = ((code *)*(gen_code32 *)(*(*(uint * PTR32 *)(gen_frame + 0x40)) + 0x14))((*(uint * PTR32 *)(gen_frame + 0x40)));
          puVar13[2] = uVar5;
          uVar6 = F_00d929c0(*puVar13);
          uVar5 = puVar13[2];
          (*(uint *)(gen_frame + 0x44)) = uVar6;
          pvVar12 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
          piVar9 = *(int * PTR32 *)((int)pvVar12 + 0x2c);
          pcVar3 = *(gen_code32 *)(*piVar9 + 0xc);
          (*(uint * PTR32 *)(gen_frame + 0x3c)) = (uint *)(uVar5 * uVar6);
          uVar5 = (*pcVar3)(piVar9,&(*(uint * PTR32 *)(gen_frame + 0x3c)));
          puVar13[1] = uVar5;
          F_00da1030(uVar5,0,(*(uint * PTR32 *)(gen_frame + 0x3c)));
          uVar5 = *(uint *)(param_3 + 0x14);
          iVar14 = puVar13[2] * (*(uint *)(gen_frame + 0x44));
          (*(uint * PTR32 *)(gen_frame + 0x3c)) = (uint *)puVar13[1];
          if (*(uint *)(param_3 + 0x10) == (uVar5 & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516a4),(int *)(param_3 + 0xc),8);
          }
          piVar9 = ((int *)GEN_TOP((*(int *)(param_3 + 0xc) + *(int *)(param_3 + 0x10) * 8)));
          *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
          iVar15 = 0;
          *piVar9 = (int)(*(uint * PTR32 *)(gen_frame + 0x3c));
          piVar9[1] = iVar14;
          if (0 < (int)puVar13[2]) {
            iVar14 = 0;
            do {
              if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != (undefined4 *)0x0) break;
              puVar7 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(*(uint * PTR32 *)(gen_frame + 0x40)) + 0x5c))((*(uint * PTR32 *)(gen_frame + 0x40)),iVar15)));
              (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar7;
              if (puVar7 != (undefined4 *)0x0) {
                *(short *)((int)puVar7 + 6) = *(short *)((int)puVar7 + 6) + 1;
                puVar7[2] = puVar7[2] + 1;
              }
              puVar7 = (undefined4 *)F_00e22120((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar13[1] + iVar14,&(*(undefined4 * PTR32 *)(gen_frame + 0x34)),param_3);
              (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar7;
              if ((*(undefined4 * PTR32 *)(gen_frame + 0x34)) != (undefined4 *)0x0) {
                *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 6) + -1;
                piVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0x34)) + 2;
                *piVar9 = *piVar9 + -1;
                if (*piVar9 == 0) {
                  ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x34)))((*(undefined4 * PTR32 *)(gen_frame + 0x34)),1);
                }
              }
              iVar14 = iVar14 + (*(uint *)(gen_frame + 0x44));
              iVar15 = iVar15 + 1;
            } while (iVar15 < (int)puVar13[2]);
          }
          *(short *)((int)(*(uint * PTR32 *)(gen_frame + 0x40)) + 6) = *(short *)((int)(*(uint * PTR32 *)(gen_frame + 0x40)) + 6) + -1;
          puVar13 = (*(uint * PTR32 *)(gen_frame + 0x40)) + 2;
          *puVar13 = *puVar13 - 1;
          if (*puVar13 == 0) {
            puVar7 = (undefined4 *)*(*(uint * PTR32 *)(gen_frame + 0x40));
            puVar8 = (*(uint * PTR32 *)(gen_frame + 0x40));
LAB_00e22806: ;
            (*(code *)*puVar7)(puVar8,1);
          }
          break;
        case 0x22: ;
          if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x54)) + 4) != 0) {
            if (*(char *)(puVar7 + 3) == '\x1a') {
              return 1;
            }
            if (*(char *)((int)puVar7 + 0xd) == '\x1c') {
              return 1;
            }
            if (*(char *)((int)puVar7 + 0xd) == '\x1d') {
              return 1;
            }
          }
          puVar8 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)))));
          (*(uint * PTR32 *)(gen_frame + 0x3c)) = puVar8;
          if (puVar8 != (uint *)0x0) {
            *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + 1;
            puVar8[2] = puVar8[2] + 1;
          }
          puVar7 = (undefined4 *)
                   F_00e21460((*(undefined * PTR32 *)(gen_frame + 0x54)),puVar13,(uint)puVar7,&(*(uint * PTR32 *)(gen_frame + 0x3c)),param_3,&(*(int *)(gen_frame + 0x30)),param_1);
LAB_00e223d1: ;
          (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar7;
          if (puVar8 != (uint *)0x0) {
LAB_00e223dc: ;
            *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + -1;
            puVar13 = puVar8 + 2;
            *puVar13 = *puVar13 - 1;
            if (*puVar13 == 0) {
              ((code *)*(gen_code32 *)*puVar8)(puVar8,1);
            }
          }
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) == (undefined4 *)0x1) {
switchD_00e222a6_caseD_13: ;
          return 1;
        }
LAB_00e22812: ;
        uVar5 = (*(uint *)(gen_frame + 0x38));
        iVar14 = (*(int *)(gen_frame + 0x48)) + 1;
        (*(int *)(gen_frame + 0x48)) = iVar14;
        uVar6 = F_00d92850((*(uint *)(gen_frame + 0x38)));
      } while (iVar14 < (int)uVar6);
    }
    uVar5 = F_00d92620(uVar5);
    (*(uint *)(gen_frame + 0x38)) = uVar5;
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
uint F_00e23570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  
  piVar3 = (int *)*param_1;
  ((int *)(gen_frame + 0x14))[0] = 0;
  ((int *)(gen_frame + 0x14))[1] = 0;
  if (piVar3 == (int *)0x0) {
    piVar3 = ((int *)(gen_frame + 0x14));
  }
  else {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,((undefined1 *)(gen_frame + 0xc)))));
  }
  iVar1 = *piVar3;
  iVar2 = piVar3[1];
  if ((iVar1 != 0) || (iVar2 != 0)) {
    if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,0x10);
    }
    piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this)));
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    *piVar3 = iVar1;
    piVar3[1] = iVar2;
    piVar3[2] = param_2;
    *(bool *)((int)piVar3 + 0xd) = param_3 != 0;
    *(undefined1 *)(piVar3 + 3) = 0;
  }
  return (uint)piVar3;
}

/* ref: FUN_00e23600 */
uint F_00e23600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  
  piVar3 = (int *)*param_1;
  ((int *)(gen_frame + 0x14))[0] = 0;
  ((int *)(gen_frame + 0x14))[1] = 0;
  if (piVar3 == (int *)0x0) {
    piVar3 = ((int *)(gen_frame + 0x14));
  }
  else {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,((undefined1 *)(gen_frame + 0xc)))));
  }
  iVar1 = *piVar3;
  iVar2 = piVar3[1];
  if ((iVar1 != 0) || (iVar2 != 0)) {
    if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,0x10);
    }
    piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this)));
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    *piVar3 = iVar1;
    piVar3[1] = iVar2;
    piVar3[2] = param_2;
    *(bool *)((int)piVar3 + 0xd) = param_3 != 0;
    *(undefined1 *)(piVar3 + 3) = 1;
  }
  return (uint)piVar3;
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
uint F_00e23f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
  return uVar1;
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

/* ref: FUN_00e24000 */
uint F_00e24000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x114e748));
  *(undefined4 *)((int)this + 8) = *param_1;
  *(undefined4 *)((int)this + 0xc) = param_1[1];
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x10))))(REFG(int * PTR32, 0x15e3738))));
  if (pvVar1 != (undefined *)0x0) {
    F_00d919e0(pvVar1);
  }
  *(undefined * PTR32 *)((int)this + 0x10) = pvVar1;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0xc))))(REFG(int * PTR32, 0x15e3738))));
  if (pvVar1 != (undefined *)0x0) {
    F_00d919e0(pvVar1);
  }
  *(undefined * PTR32 *)((int)this + 0x14) = pvVar1;
  return (uint)this;
}

/* ref: FUN_00e24070 */
uint F_00e24070(unsigned int gen_a0)
{
  GEN_ENTER(0xe24070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  undefined4 uVar3;
  char * pcVar4;
  uint uVar5;
  LPVOID pvVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x114e748));
  uVar5 = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    pcVar4 = (char *)F_00d92650(&REFG(undefined, 0x15da420),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3,*(int *)((int)this + 0xc));
    if (*pcVar4 == '\0') {
      piVar1 = *(int * PTR32 *)((int)this + 0x14);
      if (piVar1 != (int *)0x0) {
        iVar2 = *piVar1;
        uVar5 = F_00d92610(*(undefined4 *)((int)this + 0xc));
        ((code *)*(gen_code32 *)(iVar2 + 0x14))(piVar1,*(undefined4 *)((int)this + 8),uVar5);
      }
      uVar5 = F_00d929c0(*(undefined4 *)((int)this + 0xc));
      uVar3 = *(undefined4 *)((int)this + 8);
      pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar6 + 0x2c) + 8))))
                        (*(int * PTR32 *)((int)pvVar6 + 0x2c),uVar3,uVar5);
    }
    else {
      uVar5 = F_00d91a80(*(undefined * PTR32 *)((int)this + 8));
    }
  }
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    uVar5 = F_00d91a80(*(undefined * PTR32 *)((int)this + 0x14));
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    uVar5 = F_00d91a80(*(undefined * PTR32 *)((int)this + 0x10));
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar5;
}

/* ref: hkObjectResource::vf6 */
uint F_00e24120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24120u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  char * pcVar3;
  
  if ((*(int *)&gen_args[1]) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
    uVar2 = F_00d92610(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,uVar2);
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,(*(int *)&gen_args[1]))));
    pcVar3 = (char *)F_00d92650(this_00,(int)&(*(int *)&gen_args[1]) + 3,uVar2);
    if (*pcVar3 == '\0') {
      return 0;
    }
  }
  return *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8)));
}

/* ref: FUN_00e24180 */
uint F_00e24180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00e241b0 */
uint F_00e241b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xe241b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00e241c0 */
uint F_00e241c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe241c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,param_2);
  return uVar2;
}

/* ref: FUN_00e241f0 */
uint F_00e241f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe241f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkObjectResource::vf0 */
uint F_00e24220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e24070(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e24260 */
byte F_00e24260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24260u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e242a0 */
uint F_00e242a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe242a0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: hkPackfileData::vf7 */
uint F_00e242b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe242b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 8) != 0) {
    uVar1 = F_00dbd970(this + 0x10,*(int *)(this + 8),0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00e242d0 */
unsigned int F_00e242d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe242d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  if (*(undefined * PTR32 *)((int)this + 0x2c) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x2c));
  }
  *(undefined * PTR32 *)((int)this + 0x2c) = param_1;
  return 0;
}

/* ref: FUN_00e24300 */
uint F_00e24300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  uVar1 = *(undefined4 *)((int)this + 0xc);
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  F_00d924b0(*(undefined4 *)((int)pvVar2 + 0x2c),uVar1);
  uVar3 = F_00da1210(param_1);
  *(uint *)((int)this + 0xc) = uVar3;
  return uVar3;
}

/* ref: FUN_00e24340 */
unsigned int F_00e24340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 0x50);
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if (*((int *)GEN_TOP((*(int *)((int)this + 0x4c) + 4 + iVar1 * 8))) == param_1) {
      iVar3 = *(int *)((int)this + 0x50) + -1;
      *(int *)((int)this + 0x50) = iVar3;
      if (iVar3 != iVar1) {
        puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x4c) + iVar1 * 8)));
        iVar3 = (*(int *)((int)this + 0x4c) + iVar3 * 8) - (int)puVar2;
        iVar4 = 2;
        do {
          *puVar2 = *(undefined4 *)(iVar3 + (int)puVar2);
          puVar2 = puVar2 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  return 0;
}

/* ref: FUN_00e24390 */
unsigned int F_00e24390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 0x5c) + -1;
  if (-1 < iVar1) {
    piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0x58) + 4 + iVar1 * 8)));
    while (*piVar3 != param_1) {
      piVar3 = piVar3 + -2;
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) {
        return 0;
      }
    }
    iVar4 = *(int *)((int)this + 0x5c) + -1;
    *(int *)((int)this + 0x5c) = iVar4;
    if (iVar4 != iVar1) {
      puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x58) + iVar1 * 8)));
      iVar1 = (*(int *)((int)this + 0x58) + iVar4 * 8) - (int)puVar2;
      iVar4 = 2;
      do {
        *puVar2 = *(undefined4 *)(iVar1 + (int)puVar2);
        puVar2 = puVar2 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00e243e0 */
byte F_00e243e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe243e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x20) != 0;
}

/* ref: hkPackfileData::vf4 */
unsigned int F_00e243f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe243f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  int * piVar2;
  int iVar3;
  
  if ((*(int *)(this + 0x30) != 0) && (0 < *(int *)(this + 0x20))) {
    iVar1 = *(int *)(this + 0x18);
    iVar3 = 0;
    if (-1 < iVar1) {
      piVar2 = *(int * PTR32 *)(this + 0x10);
      do {
        if (*piVar2 != -1) break;
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 2;
      } while (iVar3 <= iVar1);
    }
    if (iVar3 <= iVar1) {
      do {
        this_00 = (undefined *)F_00da4190(this + 0x1c,
                                       *((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + 4 + iVar3 * 8))),0);
        if (this_00 != (undefined *)0x0) {
          F_00dc2610(this_00,*((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + iVar3 * 8))));
        }
        iVar1 = *(int *)(this + 0x18);
        iVar3 = iVar3 + 1;
        if (iVar3 <= iVar1) {
          piVar2 = ((int *)GEN_TOP((*(int *)(this + 0x10) + iVar3 * 8)));
          do {
            if (*piVar2 != -1) break;
            iVar3 = iVar3 + 1;
            piVar2 = piVar2 + 2;
          } while (iVar3 <= iVar1);
        }
      } while (iVar3 <= iVar1);
    }
  }
  *(undefined4 *)(this + 8) = 0;
  F_00dbdaf0(this + 0x10);
  F_00da3cd0(this + 0x1c);
  return 0;
}

/* ref: hkPackfileData::vf5 */
unsigned int F_00e24490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(this + 0x5c);
  iVar5 = param_1[1];
  if (iVar1 <= param_1[1]) {
    iVar5 = iVar1;
  }
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_1,iVar4,8);
  }
  puVar3 = (undefined4 *)*param_1;
  if (0 < iVar5) {
    iVar2 = *(int *)(this + 0x58) - (int)puVar3;
    iVar4 = iVar5;
    do {
      *puVar3 = *(undefined4 *)(iVar2 + (int)puVar3);
      puVar3[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar3);
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar3 = (undefined4 *)(*param_1 + iVar5 * 8);
  iVar4 = iVar1 - iVar5;
  if (0 < iVar4) {
    iVar5 = (*(int *)(this + 0x58) + iVar5 * 8) - (int)puVar3;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *(undefined4 *)(iVar5 + (int)puVar3);
        puVar3[1] = *(undefined4 *)(iVar5 + 4 + (int)puVar3);
      }
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = iVar1;
  iVar1 = *(int *)(this + 0x50);
  iVar5 = param_2[1];
  if (iVar1 <= param_2[1]) {
    iVar5 = iVar1;
  }
  if ((int)(param_2[2] & 0x3fffffffU) < iVar1) {
    iVar4 = (param_2[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_2,iVar4,8);
  }
  puVar3 = (undefined4 *)*param_2;
  if (0 < iVar5) {
    iVar2 = *(int *)(this + 0x4c) - (int)puVar3;
    iVar4 = iVar5;
    do {
      *puVar3 = *(undefined4 *)(iVar2 + (int)puVar3);
      puVar3[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar3);
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar3 = (undefined4 *)(*param_2 + iVar5 * 8);
  iVar4 = iVar1 - iVar5;
  if (0 < iVar4) {
    iVar5 = (*(int *)(this + 0x4c) + iVar5 * 8) - (int)puVar3;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *(undefined4 *)(iVar5 + (int)puVar3);
        puVar3[1] = *(undefined4 *)(iVar5 + 4 + (int)puVar3);
      }
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_2[1] = iVar1;
  return 0;
}

/* ref: FUN_00e245d0 */
uint F_00e245d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe245d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 0x50) == (*(uint *)((int)this + 0x54) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x4c),8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x4c) + *(int *)((int)this + 0x50) * 8)));
  *(int *)((int)this + 0x50) = *(int *)((int)this + 0x50) + 1;
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return param_2;
}

/* ref: FUN_00e24610 */
uint F_00e24610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 0x5c) == (*(uint *)((int)this + 0x60) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x58),8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x58) + *(int *)((int)this + 0x5c) * 8)));
  *(int *)((int)this + 0x5c) = *(int *)((int)this + 0x5c) + 1;
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return param_2;
}

/* ref: hkPackfileData::vf6 */
uint F_00e24650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24650u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  int iVar2;
  undefined3 uVar3;
  byte bVar4;
  uint uVar5;
  undefined * this_00;
  char * pcVar6;
  undefined3 extraout_var = 0;
  uint uVar7;
  undefined4 * puVar8;
  int * piVar9;
  undefined4 * puVar10;
  
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) == 0) {
    return 0;
  }
  uVar5 = F_00dbd970((*(undefined * PTR32 *)&gen_args[0]) + 0x10,*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))),0);
  if ((*(int *)&gen_args[1]) != 0) {
    piVar9 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x2c)));
    uVar5 = ((code *)*(gen_code32 *)(*piVar9 + 0x10))(piVar9,uVar5);
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar9 + 0x10))(piVar9,(*(int *)&gen_args[1]))));
    pcVar6 = (char *)F_00d92650(this_00,(int)&(*(int *)&gen_args[1]) + 3,uVar5);
    if (*pcVar6 == '\0') {
      return 0;
    }
  }
  bVar4 = F_00e243e0((*(undefined * PTR32 *)&gen_args[0]));
  if (((int)CONCAT31(extraout_var,bVar4) == 0) && ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0)) {
    uVar3 = (undefined3)(*(int *)&gen_args[1]);
    (*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 3)) = bVar4;
    uVar5 = F_00e250d0((*(undefined * PTR32 *)&gen_args[0]) + 0x10);
    if ((int)uVar5 <= *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18)))) {
      do {
        uVar1 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 4 + uVar5 * 8)));
        uVar7 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x10))))
                          ((*(int * PTR32 *)&gen_args[2]),*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + uVar5 * 8))),uVar1);
        if (uVar7 == 0) {
          (*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 3)) = 1;
        }
        else {
          F_00da3a20((*(undefined * PTR32 *)&gen_args[0]) + 0x1c,uVar1,uVar7);
        }
        iVar2 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
        uVar5 = uVar5 + 1;
        if ((int)uVar5 <= iVar2) {
          piVar9 = ((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + uVar5 * 8)));
          do {
            if (*piVar9 != -1) break;
            uVar5 = uVar5 + 1;
            piVar9 = piVar9 + 2;
          } while ((int)uVar5 <= iVar2);
        }
      } while ((int)uVar5 <= iVar2);
      if ((*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 3)) != 0) {
        return 0;
      }
    }
    puVar10 = *((undefined4 * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 100)));
    if (puVar10 < puVar10 + *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x68))) * 2) {
      do {
        uVar1 = *puVar10;
        puVar8 = (undefined4 *)F_00d92c00((undefined *)puVar10[1],"hk.PostFinish");
        ((code *)*(gen_code32 *)*puVar8)(uVar1);
        puVar10 = puVar10 + 2;
      } while (puVar10 < ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 100))) + *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x68))) * 8))));
    }
  }
  return *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8)));
}

/* ref: FUN_00e24780 */
uint F_00e24780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * this_00;
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x114e770));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  F_00da3de0((undefined *)((int)this + 0x1c),local_8);
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 1;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0x80000000;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0x80000000;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0x80000000;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0x80000000;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0x80000000;
  this_00 = param_1;
  if (param_1 == (undefined *)0x0) {
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x10))))(REFG(int * PTR32, 0x15e3738))));
    if (this_00 == (undefined *)0x0) goto LAB_00e24819;
  }
  F_00d919e0(this_00);
LAB_00e24819: ;
  if (*(undefined * PTR32 *)((int)this + 0x2c) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x2c));
  }
  *(undefined * PTR32 *)((int)this + 0x2c) = this_00;
  return (uint)this;
}

/* ref: FUN_00e24840 */
uint F_00e24840(unsigned int gen_a0)
{
  GEN_ENTER(0xe24840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x114e770));
  F_00e243f0(this);
  iVar6 = 0;
  if (0 < *(int *)((int)this + 0x38)) {
    do {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x34) + iVar6 * 4)));
      pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      F_00d924b0(*(undefined4 *)((int)pvVar3 + 0x2c),uVar1);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)((int)this + 0x38));
  }
  iVar6 = 0;
  if (0 < *(int *)((int)this + 0x44)) {
    iVar5 = 0;
    do {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x40) + 4 + iVar5)));
      uVar2 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x40) + iVar5)));
      pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar3 + 0x2c),uVar2,uVar1);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar6 < *(int *)((int)this + 0x44));
  }
  uVar1 = *(undefined4 *)((int)this + 0xc);
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  F_00d924b0(*(undefined4 *)((int)pvVar3 + 0x2c),uVar1);
  uVar4 = *(uint *)((int)this + 0x6c);
  *(undefined4 *)((int)this + 0x68) = 0;
  if ((uVar4 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 100),uVar4 * 8);
  }
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0x80000000;
  uVar4 = *(uint *)((int)this + 0x60);
  *(undefined4 *)((int)this + 0x5c) = 0;
  if ((uVar4 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x58),uVar4 * 8);
  }
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x60) = 0x80000000;
  uVar4 = *(uint *)((int)this + 0x54);
  *(undefined4 *)((int)this + 0x50) = 0;
  if ((uVar4 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x4c),uVar4 * 8);
  }
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x54) = 0x80000000;
  uVar4 = *(uint *)((int)this + 0x48);
  *(undefined4 *)((int)this + 0x44) = 0;
  if ((uVar4 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x40),(uVar4 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x48) = 0x80000000;
  uVar4 = *(uint *)((int)this + 0x3c);
  *(undefined4 *)((int)this + 0x38) = 0;
  if ((uVar4 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x34),uVar4 * 4);
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 0x2c) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x2c));
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  F_00da3e20((undefined *)((int)this + 0x1c));
  uVar4 = F_00dbdb20((undefined *)((int)this + 0x10),&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar4;
}

/* ref: FUN_00e24a10 */
uint F_00e24a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24a10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd970(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e24a70 */
uint F_00e24a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24a70u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00e24ad0 */
uint F_00e24ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24ad0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e24b20 */
uint F_00e24b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24b20u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e24b80 */
uint F_00e24b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00e24bb0 */
uint F_00e24bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24bb0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e24bf0 */
unsigned int F_00e24bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_3) {
    puVar1 = param_1;
    iVar2 = param_3;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
      puVar1[1] = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + 4 + (int)puVar1)));
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e24c20 */
uint F_00e24c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00e24c40 */
unsigned int F_00e24c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24c40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar1)));
        puVar1[1] = *((undefined4 *)GEN_TOP(((param_3 - (int)param_1) + 4 + (int)puVar1)));
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e24c80 */
uint F_00e24c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24c80u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e24cc0 */
unsigned int F_00e24cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24cc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_3) {
    puVar1 = param_1;
    iVar2 = param_3;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
      puVar1[1] = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + 4 + (int)puVar1)));
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e24cf0 */
uint F_00e24cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00e24d10 */
unsigned int F_00e24d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar1)));
        puVar1[1] = *((undefined4 *)GEN_TOP(((param_3 - (int)param_1) + 4 + (int)puVar1)));
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e24d60 */
uint F_00e24d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24d60u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + param_2 * 8);
}

/* ref: FUN_00e24d70 */
uint F_00e24d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24d70u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 4 + param_2 * 8);
}

/* ref: FUN_00e24d80 */
uint F_00e24d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe24d80u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00e24e10 */
unsigned int F_00e24e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  
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

/* ref: FUN_00e24e40 */
unsigned int F_00e24e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  
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

/* ref: FUN_00e24e70 */
uint F_00e24e70(unsigned int gen_a0)
{
  GEN_ENTER(0xe24e70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d924b0(*(undefined4 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00e24ea0 */
uint F_00e24ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,param_2);
  return uVar2;
}

/* ref: FUN_00e24ed0 */
uint F_00e24ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24ed0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e24f10 */
uint F_00e24f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe24f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_2[1];
  iVar6 = *(int *)((int)this + 4);
  if (iVar1 <= *(int *)((int)this + 4)) {
    iVar6 = iVar1;
  }
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar5 = uVar2 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(param_1,this,iVar5,8);
  }
  puVar4 = *(undefined4 * PTR32 *)this;
  if (0 < iVar6) {
    iVar3 = *param_2 - (int)puVar4;
    iVar5 = iVar6;
    do {
      *puVar4 = *(undefined4 *)(iVar3 + (int)puVar4);
      puVar4[1] = *(undefined4 *)(iVar3 + 4 + (int)puVar4);
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  puVar4 = (undefined4 *)(*(int *)this + iVar6 * 8);
  iVar5 = iVar1 - iVar6;
  if (0 < iVar5) {
    iVar6 = (*param_2 + iVar6 * 8) - (int)puVar4;
    do {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *(undefined4 *)(iVar6 + (int)puVar4);
        puVar4[1] = *(undefined4 *)(iVar6 + 4 + (int)puVar4);
      }
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00e24fc0 */
uint F_00e24fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe24fc0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e25000 */
uint F_00e25000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe25000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_2[1];
  iVar6 = *(int *)((int)this + 4);
  if (iVar1 <= *(int *)((int)this + 4)) {
    iVar6 = iVar1;
  }
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar5 = uVar2 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(param_1,this,iVar5,8);
  }
  puVar4 = *(undefined4 * PTR32 *)this;
  if (0 < iVar6) {
    iVar3 = *param_2 - (int)puVar4;
    iVar5 = iVar6;
    do {
      *puVar4 = *(undefined4 *)(iVar3 + (int)puVar4);
      puVar4[1] = *(undefined4 *)(iVar3 + 4 + (int)puVar4);
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  puVar4 = (undefined4 *)(*(int *)this + iVar6 * 8);
  iVar5 = iVar1 - iVar6;
  if (0 < iVar5) {
    iVar6 = (*param_2 + iVar6 * 8) - (int)puVar4;
    do {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *(undefined4 *)(iVar6 + (int)puVar4);
        puVar4[1] = *(undefined4 *)(iVar6 + 4 + (int)puVar4);
      }
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00e250d0 */
uint F_00e250d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe250d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (-1 < *(int *)((int)this + 8)) {
    piVar2 = *(int * PTR32 *)this;
    do {
      if (*piVar2 != -1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 2;
    } while ((int)uVar1 <= *(int *)((int)this + 8));
  }
  return uVar1;
}

/* ref: FUN_00e250f0 */
unsigned int F_00e250f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe250f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e25120 */
uint F_00e25120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe25120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_1[1];
  iVar6 = *(int *)((int)this + 4);
  if (iVar1 <= *(int *)((int)this + 4)) {
    iVar6 = iVar1;
  }
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar5 = uVar2 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar5,8);
  }
  puVar4 = *(undefined4 * PTR32 *)this;
  if (0 < iVar6) {
    iVar3 = *param_1 - (int)puVar4;
    iVar5 = iVar6;
    do {
      *puVar4 = *(undefined4 *)(iVar3 + (int)puVar4);
      puVar4[1] = *(undefined4 *)(iVar3 + 4 + (int)puVar4);
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  puVar4 = (undefined4 *)(*(int *)this + iVar6 * 8);
  iVar5 = iVar1 - iVar6;
  if (0 < iVar5) {
    iVar6 = (*param_1 + iVar6 * 8) - (int)puVar4;
    do {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *(undefined4 *)(iVar6 + (int)puVar4);
        puVar4[1] = *(undefined4 *)(iVar6 + 4 + (int)puVar4);
      }
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00e251d0 */
uint F_00e251d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe251d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = param_1[1];
  iVar6 = *(int *)((int)this + 4);
  if (iVar1 <= *(int *)((int)this + 4)) {
    iVar6 = iVar1;
  }
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar5 = uVar2 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar5,8);
  }
  puVar4 = *(undefined4 * PTR32 *)this;
  if (0 < iVar6) {
    iVar3 = *param_1 - (int)puVar4;
    iVar5 = iVar6;
    do {
      *puVar4 = *(undefined4 *)(iVar3 + (int)puVar4);
      puVar4[1] = *(undefined4 *)(iVar3 + 4 + (int)puVar4);
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  puVar4 = (undefined4 *)(*(int *)this + iVar6 * 8);
  iVar5 = iVar1 - iVar6;
  if (0 < iVar5) {
    iVar6 = (*param_1 + iVar6 * 8) - (int)puVar4;
    do {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *(undefined4 *)(iVar6 + (int)puVar4);
        puVar4[1] = *(undefined4 *)(iVar6 + 4 + (int)puVar4);
      }
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00e25280 */
uint F_00e25280(unsigned int gen_a0)
{
  GEN_ENTER(0xe25280u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e252c0 */
uint F_00e252c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe252c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e25300 */
uint F_00e25300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe25300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e25340 */
uint F_00e25340(unsigned int gen_a0)
{
  GEN_ENTER(0xe25340u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e25380 */
uint F_00e25380(unsigned int gen_a0)
{
  GEN_ENTER(0xe25380u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e253c0 */
uint F_00e253c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe253c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e25400 */
uint F_00e25400(unsigned int gen_a0)
{
  GEN_ENTER(0xe25400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkPackfileData::vf3 */
uint F_00e25440(unsigned int gen_a0)
{
  GEN_ENTER(0xe25440u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: FUN_00e25450 */
uint F_00e25450(unsigned int gen_a0)
{
  GEN_ENTER(0xe25450u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkPackfileData::vf0 */
uint F_00e25480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe25480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e24840(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e254c0 */
byte F_00e254c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe254c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = **(byte * PTR32 *)((int)this + 0x10);
  if (bVar1 == 0) {
    F_00e1bdb0(this,0x100);
    bVar1 = **(byte * PTR32 *)((int)this + 0x10);
  }
  return bVar1;
}

/* ref: FUN_00e254e0 */
uint F_00e254e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe254e0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((((char)param_2 < 'a') || ('z' < (char)param_2)) && (0x19 < (byte)((char)param_2 + 0xbfU))) {
    *param_1 = 0;
    return (uint)param_1;
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00e25510 */
uint F_00e25510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe25510u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (((((char)param_2 != ' ') && ((char)param_2 != '\t')) && ((char)param_2 != '\r')) &&
     ((char)param_2 != '\n')) {
    *param_1 = 0;
    return (uint)param_1;
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00e25540 */
uint F_00e25540(unsigned int gen_a0)
{
  GEN_ENTER(0xe25540u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0xc;
}

/* ref: FUN_00e25550 */
uint F_00e25550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe25550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x11552e8));
  F_00e1bcd0((undefined *)((int)this + 8),param_1);
  *(undefined4 *)((int)this + 0x34) = 0;
  return (uint)this;
}

/* ref: FUN_00e25580 */
uint F_00e25580(unsigned int gen_a0)
{
  GEN_ENTER(0xe25580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int iVar2;
  char * pcVar3;
  uint uVar4;
  int iVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x3e2d2d;
LAB_00e25590: ;
  iVar2 = 0;
  do {
    iVar5 = iVar2;
    pcVar3 = *(char * PTR32 *)((int)this + 0x18);
    if (((char *)GEN_TOP((*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c)))) <= pcVar3) {
      F_00e1bdb0((undefined *)((int)this + 8),0x100);
      pcVar3 = *(char * PTR32 *)((int)this + 0x18);
      if (((char *)GEN_TOP((*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c)))) <= pcVar3)
      goto LAB_00e255d9;
    }
    cVar1 = *pcVar3;
    *(char * PTR32 *)((int)this + 0x18) = pcVar3 + 1;
    if (cVar1 == '\0') {
LAB_00e255d9: ;
      uVar4 = F_00e25540("Badly formed comment");
      return uVar4;
    }
    if (*(char *)((int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + iVar5) != cVar1) goto LAB_00e25590;
    iVar2 = iVar5 + 1;
    if (iVar5 + 1 == 3) {
      return iVar5 + 2;
    }
  } while( true );
}

/* ref: FUN_00e255f0 */
uint F_00e255f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe255f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  bool bVar2;
  char * pcVar3;
  uint uVar4;
  
  do {
    bVar2 = false;
LAB_00e255f7: ;
    pcVar3 = *(char * PTR32 *)((int)this + 0x18);
    if (((char *)GEN_TOP((*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c)))) <= pcVar3) {
      F_00e1bdb0((undefined *)((int)this + 8),0x100);
      pcVar3 = *(char * PTR32 *)((int)this + 0x18);
      if (((char *)GEN_TOP((*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c)))) <= pcVar3)
      goto LAB_00e25643;
    }
    cVar1 = *pcVar3;
    *(char * PTR32 *)((int)this + 0x18) = pcVar3 + 1;
    if (cVar1 == '\0') {
LAB_00e25643: ;
      uVar4 = F_00e25540("Didn\'t hit terminating \"");
      return uVar4;
    }
  } while (bVar2);
  if (cVar1 == '\\') {
    bVar2 = true;
  }
  else if (cVar1 == '\"') {
    return 10;
  }
  goto LAB_00e255f7;
}

/* ref: FUN_00e25660 */
uint F_00e25660(unsigned int gen_a0)
{
  GEN_ENTER(0xe25660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  uint uVar2;
  
LAB_00e25664: ;
  cVar1 = **(char * PTR32 *)((int)this + 0x18);
  if (cVar1 == '\0') {
    F_00e1bdb0((undefined *)((int)this + 8),0x100);
    cVar1 = **(char * PTR32 *)((int)this + 0x18);
  }
  if ((((cVar1 < 'a') || ('z' < cVar1)) && (0x19 < (byte)(cVar1 + 0xbfU))) &&
     ((9 < (byte)(cVar1 - 0x30U) && (cVar1 != '_')))) {
    return 8;
  }
  uVar2 = *(uint *)((int)this + 0x18);
  if ((uint)(*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c)) <= uVar2)
  goto code_r0x00e256a7;
  goto LAB_00e256c0;
code_r0x00e256a7: ;
  F_00e1bdb0((undefined *)((int)this + 8),0x100);
  uVar2 = *(uint *)((int)this + 0x18);
  if (uVar2 < (uint)(*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c))) {
LAB_00e256c0: ;
    *(uint *)((int)this + 0x18) = uVar2 + 1;
  }
  goto LAB_00e25664;
}

/* ref: FUN_00e256d0 */
uint F_00e256d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe256d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  uint uVar2;
  
LAB_00e256d4: ;
  cVar1 = **(char * PTR32 *)((int)this + 0x18);
  if (cVar1 == '\0') {
    F_00e1bdb0((undefined *)((int)this + 8),0x100);
    cVar1 = **(char * PTR32 *)((int)this + 0x18);
  }
  if ((((cVar1 != ' ') && (cVar1 != '\t')) && (cVar1 != '\r')) && (cVar1 != '\n')) {
    return 3;
  }
  uVar2 = *(uint *)((int)this + 0x18);
  if ((uint)(*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c)) <= uVar2)
  goto code_r0x00e2570b;
  goto LAB_00e25724;
code_r0x00e2570b: ;
  F_00e1bdb0((undefined *)((int)this + 8),0x100);
  uVar2 = *(uint *)((int)this + 0x18);
  if (uVar2 < (uint)(*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c))) {
LAB_00e25724: ;
    *(uint *)((int)this + 0x18) = uVar2 + 1;
  }
  goto LAB_00e256d4;
}

/* ref: FUN_00e25740 */
uint F_00e25740(unsigned int gen_a0)
{
  GEN_ENTER(0xe25740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  char * pcVar2;
  char * pcVar3;
  
  if ((uint)(*(int *)((int)this + 0x14) + *(int *)((int)this + 0x1c)) < *(uint *)((int)this + 0x18))
  {
    *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) - 1;
  }
  while( true ) {
    pcVar2 = *(char * PTR32 *)((int)this + 0x18);
    if (((char *)GEN_TOP((*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c)))) <= pcVar2) {
      F_00e1bdb0((undefined *)((int)this + 8),0x100);
      pcVar2 = *(char * PTR32 *)((int)this + 0x18);
      if (((char *)GEN_TOP((*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c)))) <= pcVar2) {
        return 2;
      }
    }
    cVar1 = *pcVar2;
    *(char * PTR32 *)((int)this + 0x18) = pcVar2 + 1;
    if (cVar1 == '\0') {
      return 2;
    }
    if (cVar1 == '<') break;
    if ((((cVar1 == ' ') || (cVar1 == '\t')) || (cVar1 == '\r')) || (cVar1 == '\n')) {
      pcVar3 = ((char *)GEN_TOP((*(int *)((int)this + 0x14) + *(int *)((int)this + 0x1c))));
LAB_00e257af: ;
      if (pcVar3 < pcVar2 + 1) {
        *(char * PTR32 *)((int)this + 0x18) = pcVar2;
      }
      return 2;
    }
  }
  pcVar3 = ((char *)GEN_TOP((*(int *)((int)this + 0x14) + *(int *)((int)this + 0x1c))));
  goto LAB_00e257af;
}

/* ref: FUN_00e257c0 */
uint F_00e257c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe257c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * pcVar1;
  uint uVar2;
  char cVar3;
  
  do {
    pcVar1 = *(char * PTR32 *)((int)this + 0x18);
    if (pcVar1 < ((char *)GEN_TOP((*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c))))) {
LAB_00e257ef: ;
      cVar3 = *pcVar1;
      *(char * PTR32 *)((int)this + 0x18) = pcVar1 + 1;
    }
    else {
      F_00e1bdb0((undefined *)((int)this + 8),0x100);
      pcVar1 = *(char * PTR32 *)((int)this + 0x18);
      if (pcVar1 < ((char *)GEN_TOP((*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c)))))
      goto LAB_00e257ef;
      cVar3 = '\0';
    }
    switch((unsigned int)(uintptr_t)(cVar3)) {
    case '\0': ;
      return 5;
    default: ;
      if ((((cVar3 < 'a') || ('z' < cVar3)) && (0x19 < (byte)(cVar3 + 0xbfU))) && (cVar3 != '_')) {
        uVar2 = F_00e25540("Unexpected token");
        return uVar2;
      }
      uVar2 = F_00e25660(this);
      return uVar2;
    case '\t': ;
    case '\n': ;
    case '\r': ;
    case ' ': ;
      F_00e256d0(this);
      F_00e1bc10((undefined *)((int)this + 8));
      break;
    case '\"': ;
      uVar2 = F_00e255f0(this);
      return uVar2;
    case '/': ;
      return 0xb;
    case '=': ;
      return 9;
    case '>': ;
      if ((*(uint *)((int)this + 0x34) & 2) != 0) {
        uVar2 = F_00e25540("Expecting ?> to close <? section");
        return uVar2;
      }
      *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) & 0xfffffffe;
      return 6;
    case '?': ;
      if ((*(byte *)((int)this + 0x34) & 2) != 0) {
        pcVar1 = *(char * PTR32 *)((int)this + 0x18);
        if (pcVar1 < ((char *)GEN_TOP((*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c))))) {
LAB_00e2584d: ;
          cVar3 = *pcVar1;
          *(char * PTR32 *)((int)this + 0x18) = pcVar1 + 1;
          if (cVar3 == '>') {
            *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) & 0xfffffffc;
            return 7;
          }
        }
        else {
          F_00e1bdb0((undefined *)((int)this + 8),0x100);
          pcVar1 = *(char * PTR32 *)((int)this + 0x18);
          if (pcVar1 < ((char *)GEN_TOP((*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c)))))
          goto LAB_00e2584d;
        }
        if ((uint)(*(int *)((int)this + 0x14) + *(int *)((int)this + 0x1c)) <
            *(uint *)((int)this + 0x18)) {
          *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) - 1;
        }
      }
    }
  } while( true );
}

/* ref: FUN_00e25960 */
uint F_00e25960(unsigned int gen_a0)
{
  GEN_ENTER(0xe25960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  uint uVar2;
  char * pcVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  pcVar3 = *(char * PTR32 *)((int)this + 0x18);
  if (((char *)GEN_TOP((*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c)))) <= pcVar3) {
    F_00e1bdb0((undefined *)((int)this + 8),0x100);
    pcVar3 = *(char * PTR32 *)((int)this + 0x18);
    if (((char *)GEN_TOP((*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c)))) <= pcVar3) {
      return 5;
    }
  }
  cVar1 = *pcVar3;
  *(char * PTR32 *)((int)this + 0x18) = pcVar3 + 1;
  if (cVar1 == '\0') {
    return 5;
  }
  if (cVar1 != '<') {
    if ((((cVar1 != ' ') && (cVar1 != '\t')) && (cVar1 != '\r')) && (cVar1 != '\n')) {
      uVar2 = F_00e25740(this);
      return uVar2;
    }
    uVar2 = F_00e256d0(this);
    return uVar2;
  }
  cVar1 = pcVar3[1];
  if (cVar1 == '\0') {
    F_00e1bdb0((undefined *)((int)this + 8),0x100);
    cVar1 = **(char * PTR32 *)((int)this + 0x18);
  }
  if (cVar1 != '?') {
    pcVar3 = (char *)F_00e1bef0((undefined *)((int)this + 8),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3,&REFG(undefined, 0x1155360));
    if (*pcVar3 == '\0') {
      *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 1;
      return 0;
    }
    uVar2 = F_00e25580(this);
    return uVar2;
  }
  uVar2 = *(uint *)((int)this + 0x18);
  if ((uint)(*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c)) <= uVar2) {
    F_00e1bdb0((undefined *)((int)this + 8),0x100);
    uVar2 = *(uint *)((int)this + 0x18);
    if ((uint)(*(int *)((int)this + 0x20) + *(int *)((int)this + 0x1c)) <= uVar2) goto LAB_00e25a1b;
  }
  *(uint *)((int)this + 0x18) = uVar2 + 1;
LAB_00e25a1b: ;
  *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 3;
  return 1;
}

/* ref: FUN_00e25a70 */
uint F_00e25a70(unsigned int gen_a0)
{
  GEN_ENTER(0xe25a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00e1bc10((undefined *)((int)this + 8));
  if ((*(byte *)((int)this + 0x34) & 1) != 0) {
    uVar1 = F_00e257c0(this);
    return uVar1;
  }
  uVar1 = F_00e25960(this);
  return uVar1;
}

/* ref: FUN_00e25ac0 */
byte F_00e25ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xe25ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  byte * pbVar2;
  
  pbVar2 = *(byte * PTR32 *)((int)this + 0x10);
  if (((byte *)GEN_TOP((*(int *)((int)this + 0x18) + *(int *)((int)this + 0x14)))) <= pbVar2) {
    F_00e1bdb0(this,0x100);
    pbVar2 = *(byte * PTR32 *)((int)this + 0x10);
    if (((byte *)GEN_TOP((*(int *)((int)this + 0x18) + *(int *)((int)this + 0x14)))) <= pbVar2) {
      return 0;
    }
  }
  bVar1 = *pbVar2;
  *(byte * PTR32 *)((int)this + 0x10) = pbVar2 + 1;
  return bVar1;
}

/* ref: FUN_00e25b00 */
uint F_00e25b00(unsigned int gen_a0)
{
  GEN_ENTER(0xe25b00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkXmlLexAnalyzer::vf0 */
uint F_00e25b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe25b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e1bd60(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e25b70 */
uint F_00e25b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe25b70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  return (uint)this;
}

/* ref: FUN_00e25b90 */
uint F_00e25b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe25b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd970(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e25ba0 */
uint F_00e25ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe25ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd970(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e25be0 */
uint F_00e25be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe25be0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00e25c10 */
uint F_00e25c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe25c10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00e25c30 */
uint F_00e25c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe25c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00e25c50 */
uint F_00e25c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe25c50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00e25c90 */
uint F_00e25c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe25c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e25cd0 */
uint F_00e25cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe25cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e25cf0 */
unsigned int F_00e25cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe25cf0u, gen_a0, gen_a1, gen_a2, 0u);
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
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_3 + 1);
      }
      puVar1 = (undefined8 *)((int)puVar1 + 0xc);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e25d30 */
uint F_00e25d30(unsigned int gen_a0)
{
  GEN_ENTER(0xe25d30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int iVar2;
  undefined * this;
  LPVOID pvVar3;
  uint uVar4;
  int iVar5;
  
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar4 = F_00d92490(*(undefined4 *)((int)pvVar3 + 0x2c),param_1);
  iVar2 = *((int *)GEN_TOP(((uVar4 - 4) + param_1)));
  if (iVar2 != 0) {
    iVar1 = uVar4 + iVar2 * -8 + -4 + param_1;
    iVar5 = 0;
    if (0 < iVar2) {
      do {
        this = *(undefined * PTR32 *)(iVar1 + iVar5 * 8);
        if (this != (undefined *)0x0) {
          F_00dc2610(this,*(undefined4 *)(iVar1 + 4 + iVar5 * 8));
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
    }
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  F_00d924b0(*(undefined4 *)((int)pvVar3 + 0x2c),param_1);
  return 0;
}

/* ref: FUN_00e25db0 */
uint F_00e25db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe25db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  undefined8 * puVar1;
  undefined4 uVar2;
  int iVar3;
  char * pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  LPVOID pvVar8;
  int iVar9;
  int * piVar10;
  
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(int *)(gen_frame + 0x88)) = 0;
  (*(uint *)(gen_frame + 0x8c)) = 0x80000000;
  F_00da04b0(((undefined1 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x84)));
  iVar7 = (int)(*(undefined4 * PTR32 *)&gen_args[1]);
  iVar9 = (*(int *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x40)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x64)) = 0x80000000;
  (*(uint *)(gen_frame + 0xa8)) = 0x80000000;
  (*(int *)(gen_frame + 0x38)) = 0;
  (*(int *)(gen_frame + 0x3c)) = 0;
  (*(int *)(gen_frame + 0x44)) = 0;
  (*(int *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(int *)(gen_frame + 0xa0)) = 0;
  (*(uint *)(gen_frame + 0xa4)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x7c)) = 0;
  (*(undefined4 *)(gen_frame + 0x80)) = 0xffffffff;
  F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0xa0)),8);
  piVar10 = (int *)((*(int *)(gen_frame + 0xa0)) + (*(uint *)(gen_frame + 0xa4)) * 8);
  *piVar10 = iVar9;
  piVar10[1] = iVar7;
  (*(uint *)(gen_frame + 0xa4)) = (*(uint *)(gen_frame + 0xa4)) + 1;
  F_00dbd8b0(&(*(undefined4 *)(gen_frame + 0x78)),&REFG(undefined * PTR32, 0x13516ac),iVar9,1);
  (*(undefined4 *)(gen_frame + 0x6c)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0xffffffff;
  (*(int *)(gen_frame + 0x94)) = 0;
  (*(uint *)(gen_frame + 0x98)) = 0;
  (*(uint *)(gen_frame + 0x9c)) = 0x80000000;
  F_00e05640(&(*(int *)&gen_args[0]),&REFG(undefined4, 0x135491c));
  F_00e05640(&(*(undefined4 * PTR32 *)&gen_args[1]),&REFG(undefined4, 0x135491c));
  F_00e26520(((undefined1 *)(gen_frame + 0x8)),&(*(undefined4 * PTR32 *)&gen_args[1]),&(*(int *)&gen_args[0]),(*(undefined4 *)&gen_args[5]));
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)0x0;
  if (0 < (int)(*(uint *)(gen_frame + 0xa4))) {
    do {
      uVar2 = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0xa0)) + (int)(*(undefined4 * PTR32 *)&gen_args[1]) * 8)));
      uVar5 = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0xa0)) + 4 + (int)(*(undefined4 * PTR32 *)&gen_args[1]) * 8)));
      F_00dbd8b0(&(*(undefined4 *)(gen_frame + 0x6c)),&REFG(undefined * PTR32, 0x13516ac),uVar2,(*(int *)(gen_frame + 0x88)));
      iVar9 = (*(int *)(gen_frame + 0x48));
      pcVar4 = (char *)F_00d929e0(uVar5,(int)&(*(int *)&gen_args[0]) + 3);
      if (*pcVar4 != '\0') {
        uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[3]) + 0x14))))((*(int * PTR32 *)&gen_args[3]),uVar2);
      }
      (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x88));
      (*(undefined4 *)(gen_frame + 0x30)) = uVar2;
      uVar6 = F_00d92610(uVar5);
      (*(uint *)(gen_frame + 0x34)) = uVar6;
      if ((*(uint *)(gen_frame + 0x98)) == ((*(uint *)(gen_frame + 0x9c)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x94)),0xc);
      }
      puVar1 = (undefined8 *)((*(int *)(gen_frame + 0x94)) + (*(uint *)(gen_frame + 0x98)) * 0xc);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = CONCAT44((*(undefined4 *)(gen_frame + 0x30)),(*(int *)(gen_frame + 0x2c)));
        *(uint *)(puVar1 + 1) = (*(uint *)(gen_frame + 0x34));
      }
      (*(uint *)(gen_frame + 0x98)) = (*(uint *)(gen_frame + 0x98)) + 1;
      F_00e27ef0(((undefined1 *)(gen_frame + 0x8)),uVar2,uVar5,(*(undefined4 *)(gen_frame + 0x28)),uVar5,&(*(int *)(gen_frame + 0x38)));
      (*(int *)(gen_frame + 0x90)) = iVar9;
      if (iVar9 < (*(int *)(gen_frame + 0x48))) {
        iVar9 = iVar9 << 4;
        do {
          iVar7 = *(int *)(iVar9 + 4 + (*(int *)(gen_frame + 0x44)));
          if ((iVar7 != 0) && (iVar3 = *(int *)(iVar9 + 8 + (*(int *)(gen_frame + 0x44))), iVar3 != 0)) {
            if (((*(undefined * PTR32 *)&gen_args[2]) == (undefined *)0x0) || (uVar5 = F_00dbd970((*(undefined * PTR32 *)&gen_args[2]),iVar7,0), uVar5 == 0)) {
              uVar5 = F_00dbd970(&(*(undefined4 *)(gen_frame + 0x78)),iVar7,0);
              if (uVar5 == 0) {
                if ((*(uint *)(gen_frame + 0xa4)) == ((*(uint *)(gen_frame + 0xa8)) & 0x3fffffff)) {
                  F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0xa0)),8);
                }
                piVar10 = (int *)((*(int *)(gen_frame + 0xa0)) + (*(uint *)(gen_frame + 0xa4)) * 8);
                *piVar10 = iVar7;
                piVar10[1] = iVar3;
                (*(uint *)(gen_frame + 0xa4)) = (*(uint *)(gen_frame + 0xa4)) + 1;
                F_00dbd8b0(&(*(undefined4 *)(gen_frame + 0x78)),&REFG(undefined * PTR32, 0x13516ac),iVar7,1);
              }
            }
            else {
              *(uint *)(iVar9 + 4 + (*(int *)(gen_frame + 0x44))) = uVar5;
            }
          }
          iVar7 = (*(int *)(gen_frame + 0x90)) + 1;
          iVar9 = iVar9 + 0x10;
          (*(int *)(gen_frame + 0x90)) = iVar7;
        } while (iVar7 < (*(int *)(gen_frame + 0x48)));
      }
      (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[1]) + 1)));
    } while ((int)(*(undefined4 * PTR32 *)&gen_args[1]) < (int)(*(uint *)(gen_frame + 0xa4)));
  }
  iVar9 = (*(int *)(gen_frame + 0x88));
  if ((*(int *)(gen_frame + 0x88)) == 0) {
    F_00e26560(((undefined1 *)(gen_frame + 0x8)));
    (*(uint *)(gen_frame + 0x98)) = 0;
    if (((*(uint *)(gen_frame + 0x9c)) & 0x80000000) == 0) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x94)),((*(uint *)(gen_frame + 0x9c)) & 0x3fffffff) * 0xc);
    }
    (*(int *)(gen_frame + 0x94)) = 0;
    (*(uint *)(gen_frame + 0x9c)) = 0x80000000;
    F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x6c)),&REFG(undefined * PTR32, 0x13516ac));
    F_00dbd5e0();
    F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x78)),&REFG(undefined * PTR32, 0x13516ac));
    F_00dbd5e0();
    (*(uint *)(gen_frame + 0xa4)) = 0;
    if (((*(uint *)(gen_frame + 0xa8)) & 0x80000000) == 0) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0xa0)),(*(uint *)(gen_frame + 0xa8)) * 8);
    }
    (*(int *)(gen_frame + 0xa0)) = 0;
    (*(uint *)(gen_frame + 0xa8)) = 0x80000000;
    F_00e1d4f0(&(*(int *)(gen_frame + 0x38)));
    F_00d9fda0(((undefined1 *)(gen_frame + 0x20)));
    (*(int *)(gen_frame + 0x88)) = 0;
    if (((*(uint *)(gen_frame + 0x8c)) & 0x80000000) == 0) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x84)),(*(uint *)(gen_frame + 0x8c)) & 0x3fffffff);
    }
    return 0;
  }
  iVar7 = 4;
  if ((*(int * PTR32 *)&gen_args[4]) != (int *)0x0) {
    iVar7 = (*(uint *)(gen_frame + 0x98)) * 8 + 4;
  }
  pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar5 = F_00d92460(*(undefined4 *)((int)pvVar8 + 0x2c),iVar9 + iVar7);
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)((*(int *)(gen_frame + 0x88)) + uVar5);
  F_00da1010(uVar5,(*(undefined4 *)(gen_frame + 0x84)),(*(int *)(gen_frame + 0x88)));
  iVar9 = 0;
  if (0 < (*(int *)(gen_frame + 0x3c))) {
    do {
      iVar3 = iVar9 * 8;
      iVar7 = iVar9 * 8;
      iVar9 = iVar9 + 1;
      *((uint *)GEN_TOP((uVar5 + *(int *)((*(int *)(gen_frame + 0x38)) + iVar7)))) = *(int *)((*(int *)(gen_frame + 0x38)) + 4 + iVar3) + uVar5;
    } while (iVar9 < (*(int *)(gen_frame + 0x3c)));
  }
  (*(int *)(gen_frame + 0x90)) = 0;
  if (0 < (*(int *)(gen_frame + 0x48))) {
    (*(int *)&gen_args[0]) = 0;
    do {
      iVar9 = *(int *)((*(int *)&gen_args[0]) + 4 + (*(int *)(gen_frame + 0x44)));
      uVar6 = F_00dbd970(&(*(undefined4 *)(gen_frame + 0x6c)),iVar9,0xffffffff);
      if (uVar6 != 0xffffffff) {
        iVar9 = uVar6 + uVar5;
      }
      *((int *)GEN_TOP((uVar5 + *(int *)((*(int *)&gen_args[0]) + (*(int *)(gen_frame + 0x44)))))) = iVar9;
      iVar9 = (*(int *)(gen_frame + 0x90)) + 1;
      (*(int *)&gen_args[0]) = (*(int *)&gen_args[0]) + 0x10;
      (*(int *)(gen_frame + 0x90)) = iVar9;
    } while (iVar9 < (*(int *)(gen_frame + 0x48)));
  }
  if (((*(undefined * PTR32 *)&gen_args[2]) != (undefined *)0x0) && (0 < (int)(*(uint *)(gen_frame + 0x98)))) {
    iVar7 = 0;
    iVar9 = 0;
    do {
      F_00dbd8b0((*(undefined * PTR32 *)&gen_args[2]),&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(iVar7 + 4 + (*(int *)(gen_frame + 0x94))),
                   *(int *)(iVar7 + (*(int *)(gen_frame + 0x94))) + uVar5);
      iVar9 = iVar9 + 1;
      iVar7 = iVar7 + 0xc;
    } while (iVar9 < (int)(*(uint *)(gen_frame + 0x98)));
  }
  iVar9 = 0;
  if ((*(int * PTR32 *)&gen_args[4]) == (int *)0x0) {
    *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
  }
  else {
    if (0 < (int)(*(uint *)(gen_frame + 0x98))) {
      (*(int *)&gen_args[0]) = 0;
      do {
        piVar10 = (int *)((*(int *)&gen_args[0]) + (*(int *)(gen_frame + 0x94)));
        ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[4]) + 0x10))))((*(int * PTR32 *)&gen_args[4]),*piVar10 + uVar5,piVar10[2]);
        uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[4]) + 0x1c))))((*(int * PTR32 *)&gen_args[4]),piVar10[2]);
        (*(int *)&gen_args[0]) = (*(int *)&gen_args[0]) + 0xc;
        (*(undefined4 * PTR32 *)&gen_args[1])[iVar9 * 2] = uVar6;
        (*(undefined4 * PTR32 *)&gen_args[1])[iVar9 * 2 + 1] = *piVar10 + uVar5;
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)(*(uint *)(gen_frame + 0x98)));
    }
    (*(undefined4 * PTR32 *)&gen_args[1])[(*(uint *)(gen_frame + 0x98)) * 2] = (*(uint *)(gen_frame + 0x98));
  }
  F_00e26560(((undefined1 *)(gen_frame + 0x8)));
  (*(uint *)(gen_frame + 0x98)) = 0;
  if (((*(uint *)(gen_frame + 0x9c)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x94)),((*(uint *)(gen_frame + 0x9c)) & 0x3fffffff) * 0xc);
  }
  (*(int *)(gen_frame + 0x94)) = 0;
  (*(uint *)(gen_frame + 0x9c)) = 0x80000000;
  F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x6c)),&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  F_00dbdb20(&(*(undefined4 *)(gen_frame + 0x78)),&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  (*(uint *)(gen_frame + 0xa4)) = 0;
  if (((*(uint *)(gen_frame + 0xa8)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0xa0)),(*(uint *)(gen_frame + 0xa8)) * 8);
  }
  (*(int *)(gen_frame + 0xa0)) = 0;
  (*(uint *)(gen_frame + 0xa8)) = 0x80000000;
  F_00e1d4f0(&(*(int *)(gen_frame + 0x38)));
  F_00d9fda0(((undefined1 *)(gen_frame + 0x20)));
  (*(int *)(gen_frame + 0x88)) = 0;
  if (((*(uint *)(gen_frame + 0x8c)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x84)),(*(uint *)(gen_frame + 0x8c)) & 0x3fffffff)
    ;
  }
  return uVar5;
}

/* ref: FUN_00e26340 */
uint F_00e26340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe26340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0xc);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0xc)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e26390 */
uint F_00e26390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe26390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e263d0 */
uint F_00e263d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe263d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0xc);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0xc)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_1;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 1);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e26420 */
uint F_00e26420(unsigned int gen_a0)
{
  GEN_ENTER(0xe26420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e26460 */
uint F_00e26460(unsigned int gen_a0)
{
  GEN_ENTER(0xe26460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e264a0 */
uint F_00e264a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe264a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  return (uint)this;
}

/* ref: FUN_00e264c0 */
uint F_00e264c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe264c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00e264e0 */
uint F_00e264e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe264e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  if ((param_2 <= param_1) && (param_1 < param_3)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00e26500 */
uint F_00e26500(unsigned int gen_a0)
{
  GEN_ENTER(0xe26500u, gen_a0, 0u, 0u, 0u);
  undefined4 in_esi = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00da5ff0(in_esi);
  if (uVar1 != 0) {
    uVar1 = F_00da5ff0(in_esi);
    return uVar1;
  }
  return 1;
}

/* ref: FUN_00e26520 */
uint F_00e26520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe26520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1155368));
  *(undefined4 *)((int)this + 8) = *param_1;
  *(undefined4 *)((int)this + 0xc) = *param_2;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(bool *)((int)this + 0x14) = *(char *)((int)this + 9) != *(char *)((int)this + 0xd);
  return (uint)this;
}

/* ref: FUN_00e26560 */
unsigned int F_00e26560(unsigned int gen_a0)
{
  GEN_ENTER(0xe26560u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return 0;
}

/* ref: FUN_00e26570 */
uint F_00e26570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe26570u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  code * pcVar1;
  uint uVar2;
  
  switch((unsigned int)(uintptr_t)(param_4)) {
  case 0xc: ;
  case 0xd: ;
  case 0xe: ;
  case 0xf: ;
  case 0x10: ;
  case 0x11: ;
  case 0x12: ;
    param_1 = param_1 * (param_2 >> 2);
    param_2 = 4;
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
  case 0x20: ;
    uVar2 = F_00da6970(param_3,param_5,param_2,param_1);
    return uVar2;
  }
  F_00da0a80(((undefined1 *)(gen_frame + 0x200)),((undefined1 *)(gen_frame + 0x0)),0x200);
  F_00d9fe80(((undefined1 *)(gen_frame + 0x200)),"Unknown class member found during write of plain data array.");
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(int * PTR32, 0x15dff78),3,0x747e1e03,((undefined1 *)(gen_frame + 0x0)),"Copier\\hkObjectCopier.cpp",0x101);
  if (uVar2 != 0) {
    pcVar1 = ((code *)GEN_TOP(swi(3)));
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  uVar2 = F_00d9fda0(((undefined1 *)(gen_frame + 0x200)));
  return uVar2;
}

/* ref: FUN_00e26640 */
uint F_00e26640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe26640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined * this;
  uint uVar1;
  int iVar2;
  uint local_8;
  
  local_8 = F_00d92b10(param_1,param_3,param_4);
  if (((*(char *)(param_2 + 0xc) == '\x19') &&
      (this = (undefined *)F_00da5fd0(param_2), this != (undefined *)0x0)) &&
     (param_2 = F_00e26500(param_2), 0 < (int)param_2)) {
    do {
      iVar2 = 0;
      uVar1 = F_00d927e0(this);
      if (0 < (int)uVar1) {
        do {
          uVar1 = F_00d92800(this,iVar2);
          uVar1 = F_00e26640(this,uVar1,iVar2,param_4);
          if (uVar1 == 0) {
            local_8 = 0;
          }
          iVar2 = iVar2 + 1;
          uVar1 = F_00d927e0(this);
        } while (iVar2 < (int)uVar1);
      }
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return local_8;
}

/* ref: hkObjectCopier::vf4 */
uint F_00e266d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe266d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  if ((*(char *)(param_1 + 0xc) == *(char *)(param_2 + 0xc)) &&
     ((*(char *)(param_1 + 0xd) == *(char *)(param_2 + 0xd) || (*(char *)(param_1 + 0xc) == '\x18'))
     )) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00e26700 */
uint F_00e26700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe26700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  LPVOID pvVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 == 4) {
    uVar1 = F_00da6970(param_1,param_4,4,param_3);
    return uVar1;
  }
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)pvVar2 + 0xc);
  uVar4 = param_3 * 8 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar2 + 8) < (int)uVar4) || (*(uint *)((int)pvVar2 + 0x10) < uVar1 + uVar4)) {
    uVar1 = F_00d94390(pvVar2,uVar4);
  }
  else {
    *(uint *)((int)pvVar2 + 0xc) = uVar1 + uVar4;
  }
  iVar3 = 0;
  if (0 < param_3) {
    do {
      *(undefined4 *)(uVar1 + iVar3 * 8) = *(undefined4 *)(param_4 + iVar3 * 4);
      *(undefined4 *)(uVar1 + 4 + iVar3 * 8) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  F_00da6970(param_1,uVar1,param_2,param_3);
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((((int)uVar4 <= *(int *)((int)pvVar2 + 8)) && (uVar4 + uVar1 == *(int *)((int)pvVar2 + 0xc)))
     && (*(uint *)((int)pvVar2 + 0x14) != uVar1)) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return (uint)pvVar2;
  }
  uVar1 = F_00d945c0(pvVar2,uVar1,uVar4);
  return uVar1;
}

/* ref: FUN_00e267c0 */
uint F_00e267c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe267c0u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 0x20))(param_2);
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0x80000000;
  (*(uint *)(gen_frame + 0x18)) = in_eax;
  if (in_eax == 0) {
    uVar4 = 0;
  }
  else {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar4 = *(uint *)((int)pvVar2 + 0xc);
    uVar3 = in_eax + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar2 + 8) < (int)uVar3) || (*(uint *)((int)pvVar2 + 0x10) < uVar4 + uVar3))
    {
      uVar4 = F_00d94390(pvVar2,uVar3);
    }
    else {
      *(uint *)((int)pvVar2 + 0xc) = uVar4 + uVar3;
    }
  }
  (*(uint *)(gen_frame + 0x10)) = in_eax | 0x80000000;
  (*(uint *)(gen_frame + 0x8)) = uVar4;
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  if ((int)(in_eax & 0x3fffffff) < (int)in_eax) {
    uVar4 = (in_eax & 0x3fffffff) * 2;
    if ((int)uVar4 <= (int)in_eax) {
      uVar4 = in_eax;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x8)),uVar4,1);
  }
  if (0 < (int)(in_eax - (*(uint *)(gen_frame + 0xc)))) {
    F_00c48350((undefined *)((*(uint *)(gen_frame + 0xc)) + (*(uint *)(gen_frame + 0x8))),0,in_eax - (*(uint *)(gen_frame + 0xc)));
  }
  uVar1 = in_eax - 1 & uVar1;
  (*(uint *)(gen_frame + 0xc)) = in_eax;
  if (uVar1 != 0) {
    ((code *)*(gen_code32 *)(*param_2 + 0x10))(param_2,(*(uint *)(gen_frame + 0x8)),in_eax - uVar1);
  }
  uVar4 = (*(uint *)(gen_frame + 0x18));
  uVar1 = (*(uint *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0x14)) == (*(uint *)(gen_frame + 0x8))) {
    (*(uint *)(gen_frame + 0xc)) = 0;
  }
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar4 = uVar4 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar2 + 8) < (int)uVar4) || (uVar4 + uVar1 != *(int *)((int)pvVar2 + 0xc)))
     || (*(uint *)((int)pvVar2 + 0x14) == uVar1)) {
    F_00d945c0(pvVar2,uVar1,uVar4);
  }
  else {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
  }
  (*(uint *)(gen_frame + 0xc)) = 0;
  uVar1 = (*(uint *)(gen_frame + 0x10));
  if (-1 < (int)(*(uint *)(gen_frame + 0x10))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x10)) & 0x3fffffff);
  }
  return uVar1;
}

/* ref: FUN_00e26910 */
uint F_00e26910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe26910u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  LPVOID pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0x80000000;
  (*(uint *)(gen_frame + 0x18)) = in_eax;
  if (in_eax == 0) {
    uVar2 = 0;
  }
  else {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar2 = *(uint *)((int)pvVar1 + 0xc);
    uVar4 = in_eax + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar1 + 8) < (int)uVar4) || (*(uint *)((int)pvVar1 + 0x10) < uVar2 + uVar4))
    {
      uVar2 = F_00d94390(pvVar1,uVar4);
    }
    else {
      *(uint *)((int)pvVar1 + 0xc) = uVar2 + uVar4;
    }
  }
  (*(uint *)(gen_frame + 0x10)) = in_eax | 0x80000000;
  (*(uint *)(gen_frame + 0x8)) = uVar2;
  (*(uint *)(gen_frame + 0x14)) = uVar2;
  if ((int)(in_eax & 0x3fffffff) < (int)in_eax) {
    uVar2 = (in_eax & 0x3fffffff) * 2;
    if ((int)uVar2 <= (int)in_eax) {
      uVar2 = in_eax;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x8)),uVar2,1);
  }
  if (0 < (int)(in_eax - (*(uint *)(gen_frame + 0xc)))) {
    F_00c48350((undefined *)((*(uint *)(gen_frame + 0xc)) + (*(uint *)(gen_frame + 0x8))),0,in_eax - (*(uint *)(gen_frame + 0xc)));
  }
  (*(uint *)(gen_frame + 0xc)) = in_eax;
  uVar3 = F_00da6ae0(param_2,(*(uint *)(gen_frame + 0x8)),in_eax);
  uVar4 = (*(uint *)(gen_frame + 0x18));
  uVar2 = (*(uint *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0x14)) == (*(uint *)(gen_frame + 0x8))) {
    (*(uint *)(gen_frame + 0xc)) = 0;
  }
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar4 = uVar4 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar1 + 8) < (int)uVar4) || (uVar4 + uVar2 != *(int *)((int)pvVar1 + 0xc)))
     || (*(uint *)((int)pvVar1 + 0x14) == uVar2)) {
    F_00d945c0(pvVar1,uVar2,uVar4);
  }
  else {
    *(uint *)((int)pvVar1 + 0xc) = uVar2;
  }
  (*(uint *)(gen_frame + 0xc)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x10))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x10)) & 0x3fffffff)
    ;
  }
  return uVar3;
}

/* ref: FUN_00e26a50 */
uint F_00e26a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe26a50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  char cVar1;
  code * pcVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *(char *)((int)param_2 + 0xc);
  uVar4 = 0;
  switch((unsigned int)(uintptr_t)(cVar1)) {
  case '\x01': ;
  case '\x02': ;
  case '\x03': ;
  case '\x04': ;
  case '\x05': ;
  case '\x06': ;
  case '\a': ;
  case '\b': ;
  case '\t': ;
  case '\n': ;
  case '\v': ;
  case '\f': ;
  case '\r': ;
  case '\x0e': ;
  case '\x0f': ;
  case '\x10': ;
  case '\x11': ;
  case '\x12': ;
  case '\x18': ;
  case '\x1f': ;
  case ' ': ;
    uVar4 = F_00da6030(param_2);
    break;
  default: ;
    F_00da0a80(&(*(undefined1 *)(gen_frame + 0x200)),((undefined1 *)(gen_frame + 0x0)),0x200);
    F_00d9fe80(&(*(undefined1 *)(gen_frame + 0x200)),"Unknown class member type found!");
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                      (REFG(int * PTR32, 0x15dff78),3,0x5ef4e5a4,((undefined1 *)(gen_frame + 0x0)),"Copier\\hkObjectCopier.cpp",0xb0);
    if (uVar3 != 0) {
      pcVar2 = ((code *)GEN_TOP(swi(3)));
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    F_00d9fda0(&(*(undefined1 *)(gen_frame + 0x200)));
    break;
  case '\x14': ;
  case '\x15': ;
  case '\x1e': ;
  case '!': ;
    uVar4 = F_00e26500(param_2);
    uVar4 = uVar4 * *(byte *)((int)this + 0xc);
    break;
  case '\x16': ;
  case '\x17': ;
  case '\x1a': ;
  case '\x1b': ;
    if (cVar1 == '\x1b') {
      uVar4 = (uint)*(byte *)((int)this + 0xc);
    }
    uVar4 = uVar4 + 4 + (uint)*(byte *)((int)this + 0xc);
    if (cVar1 == '\x16') {
      (*(undefined1 *)(gen_frame + 0x200)) = 0;
      (*(undefined2 *)(gen_frame + 0x209)) = 0;
      (*(undefined1 *)(gen_frame + 0x20b)) = 0;
      (*(undefined8 *)(gen_frame + 0x201)) = 0;
      F_00da6ae0(param_1,&(*(undefined1 *)(gen_frame + 0x200)),uVar4);
      uVar4 = F_00da6c70(param_1,0x80000000);
      return uVar4;
    }
    break;
  case '\x19': ;
    uVar4 = F_00da5fc0(param_2);
    uVar4 = F_00d929c0(uVar4);
    uVar3 = F_00e26500(param_2);
    uVar4 = uVar4 * uVar3;
    break;
  case '\x1c': ;
    uVar4 = F_00e26500(param_2);
    uVar4 = uVar4 * *(byte *)((int)this + 0xc) * 2;
  }
  uVar4 = F_00e26910(uVar4,param_1);
  return uVar4;
}

/* ref: FUN_00e26bd0 */
uint F_00e26bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe26bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x2b0];
  byte bVar1;
  ushort uVar2;
  code * pcVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * this_00;
  undefined4 * puVar6;
  undefined * pvVar7;
  ushort * puVar8;
  undefined8 * puVar9;
  undefined * pvVar10;
  uint uVar11;
  uint uVar12;
  ushort * puVar13;
  int iVar14;
  undefined * puVar15;
  undefined4 uVar16;
  undefined * puVar17;
  uint uVar18;
  
  (*(int * PTR32 *)(gen_frame + 0x29c)) = this;
  piVar4 = (int *)F_00da6b30(param_3);
  (*(int * PTR32 *)(gen_frame + 0x25c)) = piVar4;
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x20))(piVar4);
  (*(uint *)(gen_frame + 0x268)) = uVar5;
  (*(int *)(gen_frame + 0x284)) = 0;
  (*(uint *)(gen_frame + 0x288)) = 0;
  (*(uint *)(gen_frame + 0x28c)) = 0x80000000;
  (*(int *)(gen_frame + 0x294)) = 0;
  uVar5 = F_00d927e0(param_4);
  if (0 < (int)uVar5) {
    do {
      this_00 = (undefined4 *)F_00d92800(param_4,(*(int *)(gen_frame + 0x294)));
      (*(undefined * PTR32 *)(gen_frame + 0x2a0)) = (undefined *)(uint)*(ushort *)((int)this_00 + 0x12);
      uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x20))(piVar4);
      F_00e26910((int)(*(undefined * PTR32 *)(gen_frame + 0x2a0)) + ((*(uint *)(gen_frame + 0x268)) - uVar5),param_3);
      if ((*(ushort *)(this_00 + 4) & 0x400) == 0) {
LAB_00e26c88: ;
        puVar6 = (undefined4 *)F_00d928d0(param_2,*this_00);
        (*(undefined4 * PTR32 *)(gen_frame + 0x2a8)) = puVar6;
        if ((puVar6 == (undefined4 *)0x0) ||
           (uVar5 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x29c)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x29c)),puVar6,this_00), uVar5 == 0)) {
LAB_00e2729a: ;
          F_00e26640(param_4,this_00,(*(int *)(gen_frame + 0x294)),piVar4);
        }
        else {
          puVar13 = ((ushort *)GEN_TOP(((uint)*(ushort *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x2a8)) + 0x12) + param_1)));
          switch((unsigned int)(uintptr_t)(*(char *)(this_00 + 3))) {
          case '\x01': ;
          case '\x02': ;
          case '\x03': ;
          case '\x04': ;
          case '\x05': ;
          case '\x06': ;
          case '\a': ;
          case '\b': ;
          case '\t': ;
          case '\n': ;
          case '\v': ;
          case '\f': ;
          case '\r': ;
          case '\x0e': ;
          case '\x0f': ;
          case '\x10': ;
          case '\x11': ;
          case '\x12': ;
          case ' ': ;
            pvVar7 = (undefined *)F_00e26500((*(undefined4 * PTR32 *)(gen_frame + 0x2a8)));
            (*(undefined * PTR32 *)(gen_frame + 0x2a0)) = pvVar7;
            uVar5 = F_00e26500(this_00);
            pvVar7 = (undefined *)F_00da6030(this_00);
            (*(undefined * PTR32 *)(gen_frame + 0x298)) = pvVar7;
            uVar11 = F_00e28010((*(undefined * PTR32 *)(gen_frame + 0x2a0)),uVar5);
            F_00e26570(uVar11,(int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x298))) / (int)uVar5,param_3,(uint)*(byte *)(this_00 + 3),
                         puVar13);
            break;
          case '\x13': ;
            break;
          case '\x14': ;
          case '\x15': ;
          case '\x1d': ;
          case '!': ;
            uVar5 = F_00e26500(this_00);
            piVar4 = (*(int * PTR32 *)(gen_frame + 0x29c));
            (*(undefined8 *)(gen_frame + 0x228)) = 0;
            if (0 < (int)uVar5) {
              do {
                F_00da6ae0(param_3,&(*(undefined8 *)(gen_frame + 0x228)),(uint)*(byte *)(piVar4 + 3));
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            break;
          case '\x16': ;
          case '\x1a': ;
          case '\x1b': ;
            if (*(char *)(this_00 + 3) == '\x1b') {
              bVar1 = *(byte *)((*(int * PTR32 *)(gen_frame + 0x29c)) + 3);
              (*(undefined8 *)(gen_frame + 0x218)) = 0;
              F_00da6970(param_3,&(*(undefined8 *)(gen_frame + 0x218)),(uint)bVar1,1);
              if (*(int *)puVar13 == 0) {
                F_00da0a80(((undefined1 *)(gen_frame + 0x23c)),((undefined1 *)(gen_frame + 0x8)),0x200);
                uVar16 = *(*(undefined4 * PTR32 *)(gen_frame + 0x2a8));
                puVar17 = &REFG(undefined, 0x1118a34);
                puVar15 = &REFG(undefined, 0x112652c);
                uVar5 = F_00d92610(param_2);
                pvVar7 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x23c)),
                                              "Can\'t copy homogeneous array. No hkClass for ");
                pvVar7 = (undefined *)F_00d9fe80(pvVar7,uVar5);
                pvVar7 = (undefined *)F_00d9fe80(pvVar7,puVar15);
                pvVar7 = (undefined *)F_00d9fe80(pvVar7,uVar16);
                F_00d9fe80(pvVar7,puVar17);
                ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                          (REFG(int * PTR32, 0x15dff78),1,0xabba5a55,((undefined1 *)(gen_frame + 0x8)),"Copier\\hkObjectCopier.cpp",0x1cb);
                F_00d9fda0(((undefined1 *)(gen_frame + 0x23c)));
                uVar5 = 0;
              }
              else {
                uVar5 = *(uint *)(puVar13 + 4);
              }
            }
            else if (*(char *)((int)this_00 + 0xd) == '\0') {
              uVar5 = 0;
            }
            else {
              uVar5 = *(uint *)(puVar13 + 2);
            }
            bVar1 = *(byte *)((*(int * PTR32 *)(gen_frame + 0x29c)) + 3);
            (*(undefined8 *)(gen_frame + 0x220)) = 0;
            F_00da6970(param_3,&(*(undefined8 *)(gen_frame + 0x220)),(uint)bVar1,1);
            F_00da6c50(param_3,uVar5);
            if (*(char *)(this_00 + 3) == '\x16') {
              F_00da6c50(param_3,uVar5 | 0x80000000);
            }
            break;
          default: ;
            F_00da0a80(((undefined1 *)(gen_frame + 0x230)),((undefined1 *)(gen_frame + 0x8)),0x200);
            F_00d9fe80(((undefined1 *)(gen_frame + 0x230)),"Unknown class member found during write of data.");
            uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                              (REFG(int * PTR32, 0x15dff78),3,0x641e3e03,((undefined1 *)(gen_frame + 0x8)),"Copier\\hkObjectCopier.cpp",
                               0x245);
            if (uVar5 != 0) {
              pcVar3 = ((code *)GEN_TOP(swi(3)));
              uVar5 = (*pcVar3)();
              return uVar5;
            }
            F_00d9fda0(((undefined1 *)(gen_frame + 0x230)));
            break;
          case '\x18': ;
            if (((*(undefined4 * PTR32 *)(gen_frame + 0x2a8))[2] != 0) && (this_00[2] != 0)) {
              puVar8 = (ushort *)F_00e26500((*(undefined4 * PTR32 *)(gen_frame + 0x2a8)));
              (*(ushort * PTR32 *)(gen_frame + 0x2a4)) = puVar8;
              uVar5 = F_00e26500(this_00);
              puVar8 = (ushort *)F_00e28010((*(ushort * PTR32 *)(gen_frame + 0x2a4)),uVar5);
              pvVar7 = (undefined *)F_00da5fe0((*(undefined4 * PTR32 *)(gen_frame + 0x2a8)));
              (*(undefined * PTR32 *)(gen_frame + 0x2a0)) = pvVar7;
              pvVar7 = (undefined *)F_00da5fe0(this_00);
              (*(undefined * PTR32 *)(gen_frame + 0x298)) = pvVar7;
              uVar5 = F_00da6030((*(undefined4 * PTR32 *)(gen_frame + 0x2a8)));
              pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x2a0));
              iVar14 = (int)uVar5 / (int)(*(ushort * PTR32 *)(gen_frame + 0x2a4));
              if (0 < (int)puVar8) {
                (*(ushort * PTR32 *)(gen_frame + 0x2a4)) = puVar8;
                do {
                  uVar5 = F_00da6230((*(undefined4 * PTR32 *)(gen_frame + 0x2a8)),puVar13);
                  (*(undefined4 *)(gen_frame + 0x280)) = 0;
                  uVar5 = F_00da6fa0(pvVar7,uVar5,&(*(undefined4 *)(gen_frame + 0x258)));
                  if (uVar5 == 0) {
                    F_00da6fe0((*(undefined * PTR32 *)(gen_frame + 0x298)),(*(undefined4 *)(gen_frame + 0x258)),&(*(undefined4 *)(gen_frame + 0x280)));
                  }
                  if (iVar14 == 1) {
                    F_00da6920(param_3,(*(undefined4 *)(gen_frame + 0x280)));
                  }
                  else if (iVar14 == 2) {
                    F_00da6c10(param_3,(*(undefined4 *)(gen_frame + 0x280)));
                  }
                  else if (iVar14 == 4) {
                    F_00da6c50(param_3,(*(undefined4 *)(gen_frame + 0x280)));
                  }
                  puVar13 = (ushort *)((int)puVar13 + iVar14);
                  puVar8 = (ushort *)((int)(*(ushort * PTR32 *)(gen_frame + 0x2a4)) + -1);
                  (*(ushort * PTR32 *)(gen_frame + 0x2a4)) = puVar8;
                } while (puVar8 != (ushort *)0x0);
              }
            }
            break;
          case '\x19': ;
            pvVar7 = (undefined *)F_00da5fd0((*(undefined4 * PTR32 *)(gen_frame + 0x2a8)));
            (*(undefined * PTR32 *)(gen_frame + 0x2a0)) = pvVar7;
            pvVar10 = (undefined *)F_00da5fd0(this_00);
            (*(undefined * PTR32 *)(gen_frame + 0x298)) = pvVar10;
            if ((pvVar7 != (undefined *)0x0) && (pvVar10 != (undefined *)0x0)) {
              uVar5 = F_00e26500(this_00);
              uVar11 = F_00e26500((*(undefined4 * PTR32 *)(gen_frame + 0x2a8)));
              pvVar10 = (undefined *)F_00e28010(uVar11,uVar5);
              pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x2a0));
              iVar14 = 0;
              (*(undefined * PTR32 *)(gen_frame + 0x278)) = pvVar10;
              if (0 < (int)pvVar10) {
                do {
                  uVar5 = F_00d929c0(pvVar7);
                  F_00e26bd0((*(int * PTR32 *)(gen_frame + 0x29c)),(int)(uVar5 * iVar14 + (int)puVar13),pvVar7,param_3,(*(undefined * PTR32 *)(gen_frame + 0x298))
                              );
                  iVar14 = iVar14 + 1;
                } while (iVar14 < (int)(*(undefined * PTR32 *)(gen_frame + 0x278)));
              }
            }
            break;
          case '\x1c': ;
            (*(undefined8 *)(gen_frame + 0x208)) = 0;
            (*(undefined8 *)(gen_frame + 0x210)) = 0;
            uVar5 = F_00e26500(this_00);
            uVar11 = F_00e26500((*(undefined4 * PTR32 *)(gen_frame + 0x2a8)));
            uVar5 = F_00e28010(uVar11,uVar5);
            piVar4 = (*(int * PTR32 *)(gen_frame + 0x29c));
            if (0 < (int)uVar5) {
              do {
                F_00da6970(param_3,&(*(undefined8 *)(gen_frame + 0x208)),(uint)*(byte *)(piVar4 + 3),2);
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            break;
          case '\x1e': ;
            pvVar7 = (undefined *)F_00e26500((*(undefined4 * PTR32 *)(gen_frame + 0x2a8)));
            (*(undefined * PTR32 *)(gen_frame + 0x2a0)) = pvVar7;
            uVar5 = F_00e26500(this_00);
            uVar5 = F_00e28010((*(undefined * PTR32 *)(gen_frame + 0x2a0)),uVar5);
            F_00e26700(param_3,(uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x29c)) + 3),uVar5,puVar13);
            break;
          case '\x1f': ;
            if (((*(undefined4 * PTR32 *)(gen_frame + 0x2a8))[2] != 0) && (this_00[2] != 0)) {
              uVar5 = F_00e26500((*(undefined4 * PTR32 *)(gen_frame + 0x2a8)));
              (*(ushort * PTR32 *)(gen_frame + 0x2a4)) = (ushort *)uVar5;
              uVar5 = F_00e26500(this_00);
              pvVar7 = (undefined *)F_00e28010((*(ushort * PTR32 *)(gen_frame + 0x2a4)),uVar5);
              pvVar10 = (undefined *)F_00da5fe0((*(undefined4 * PTR32 *)(gen_frame + 0x2a8)));
              (*(undefined * PTR32 *)(gen_frame + 0x264)) = pvVar10;
              pvVar10 = (undefined *)F_00da5fe0(this_00);
              (*(undefined * PTR32 *)(gen_frame + 0x278)) = pvVar10;
              uVar5 = F_00da6030((*(undefined4 * PTR32 *)(gen_frame + 0x2a8)));
              uVar5 = (int)uVar5 / (int)(*(ushort * PTR32 *)(gen_frame + 0x2a4));
              (*(ushort * PTR32 *)(gen_frame + 0x2a4)) = puVar13;
              (*(uint *)(gen_frame + 0x290)) = uVar5;
              if (0 < (int)pvVar7) {
                (*(undefined * PTR32 *)(gen_frame + 0x2a0)) = pvVar7;
                do {
                  uVar5 = F_00da6230((*(undefined4 * PTR32 *)(gen_frame + 0x2a8)),(*(ushort * PTR32 *)(gen_frame + 0x2a4)));
                  (*(int *)(gen_frame + 0x26c)) = 0;
                  (*(int *)(gen_frame + 0x270)) = 0;
                  (*(int *)(gen_frame + 0x274)) = ((int)0x80000000);
                  (*(uint *)(gen_frame + 0x27c)) = 0;
                  F_00da7130((*(undefined * PTR32 *)(gen_frame + 0x264)),uVar5,&(*(int *)(gen_frame + 0x26c)),&(*(uint *)(gen_frame + 0x27c)));
                  uVar5 = 0;
                  iVar14 = 0;
                  if (0 < (*(int *)(gen_frame + 0x270))) {
                    do {
                      uVar11 = F_00da6fe0((*(undefined * PTR32 *)(gen_frame + 0x278)),*(undefined4 *)((*(int *)(gen_frame + 0x26c)) + iVar14 * 4),
                                            &(*(uint *)(gen_frame + 0x260)));
                      if (uVar11 == 0) {
                        uVar5 = uVar5 | (*(uint *)(gen_frame + 0x260));
                      }
                      else {
                        (*(uint *)(gen_frame + 0x27c)) = (*(uint *)(gen_frame + 0x27c)) | (*(uint *)(gen_frame + 0x260));
                      }
                      iVar14 = iVar14 + 1;
                    } while (iVar14 < (*(int *)(gen_frame + 0x270)));
                  }
                  if ((*(uint *)(gen_frame + 0x27c)) != 0) {
                    (*(undefined * PTR32 *)(gen_frame + 0x298)) = (undefined *)0x0;
                    F_00da7130((*(undefined * PTR32 *)(gen_frame + 0x278)),(*(uint *)(gen_frame + 0x27c)),&(*(int *)(gen_frame + 0x26c)),&(*(undefined * PTR32 *)(gen_frame + 0x298)));
                    uVar5 = uVar5 | (uint)(*(undefined * PTR32 *)(gen_frame + 0x298));
                  }
                  uVar11 = (*(uint *)(gen_frame + 0x290));
                  if ((*(uint *)(gen_frame + 0x290)) == 1) {
                    F_00da6920(param_3,uVar5);
                  }
                  else if ((*(uint *)(gen_frame + 0x290)) == 2) {
                    F_00da6c10(param_3,uVar5);
                  }
                  else if ((*(uint *)(gen_frame + 0x290)) == 4) {
                    F_00da6c50(param_3,uVar5);
                  }
                  (*(ushort * PTR32 *)(gen_frame + 0x2a4)) = (ushort *)((int)(*(ushort * PTR32 *)(gen_frame + 0x2a4)) + uVar11);
                  (*(int *)(gen_frame + 0x270)) = 0;
                  if (-1 < (*(int *)(gen_frame + 0x274))) {
                    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x26c)),(*(int *)(gen_frame + 0x274)) * 4);
                  }
                  pvVar7 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2a0)) - 1);
                  (*(undefined * PTR32 *)(gen_frame + 0x2a0)) = pvVar7;
                  (*(int *)(gen_frame + 0x26c)) = 0;
                  (*(int *)(gen_frame + 0x274)) = 0x80000000;
                } while (pvVar7 != (undefined *)0x0);
              }
            }
            break;
          case '\"': ;
            F_00da6c30(param_3,(uint)*puVar13);
            F_00da6c30(param_3,(uint)puVar13[1]);
            (*(undefined4 * PTR32 *)(gen_frame + 0x248)) = (*(undefined4 * PTR32 *)(gen_frame + 0x2a8));
            (*(undefined4 * PTR32 *)(gen_frame + 0x24c)) = this_00;
            (*(int *)(gen_frame + 0x250)) = (uint)puVar13[1] + (int)puVar13;
            (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x254)) + 0)) = *puVar13;
            (*(undefined4 *)(gen_frame + 0x254)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x254)) + 2)),*puVar13);
            if ((*(uint *)(gen_frame + 0x288)) == ((*(uint *)(gen_frame + 0x28c)) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x284)),0x10);
            }
            puVar9 = (undefined8 *)((*(uint *)(gen_frame + 0x288)) * 0x10 + (*(int *)(gen_frame + 0x284)));
            if (puVar9 != (undefined8 *)0x0) {
              *puVar9 = CONCAT44((*(undefined4 * PTR32 *)(gen_frame + 0x24c)),(*(undefined4 * PTR32 *)(gen_frame + 0x248)));
              *(int *)(puVar9 + 1) = (*(int *)(gen_frame + 0x250));
              *(undefined4 *)((int)puVar9 + 0xc) = (*(undefined4 *)(gen_frame + 0x254));
            }
            (*(uint *)(gen_frame + 0x288)) = (*(uint *)(gen_frame + 0x288)) + 1;
          }
        }
      }
      else {
        if (((*(int * PTR32 *)(gen_frame + 0x29c))[4] & 2U) == 0) {
          if (((*(int * PTR32 *)(gen_frame + 0x29c))[4] & 1U) == 0) goto LAB_00e26c88;
          goto LAB_00e2729a;
        }
        F_00e26a50((*(int * PTR32 *)(gen_frame + 0x29c)),param_3,this_00);
      }
      iVar14 = (*(int *)(gen_frame + 0x294)) + 1;
      (*(int *)(gen_frame + 0x294)) = iVar14;
      uVar5 = F_00d927e0(param_4);
      piVar4 = (*(int * PTR32 *)(gen_frame + 0x25c));
    } while (iVar14 < (int)uVar5);
  }
  uVar11 = ((code *)*(gen_code32 *)(*piVar4 + 0x20))(piVar4);
  uVar5 = (*(uint *)(gen_frame + 0x268));
  iVar14 = (*(uint *)(gen_frame + 0x268)) - uVar11;
  uVar11 = F_00d929c0(param_4);
  F_00e26910(uVar11 + iVar14,param_3);
  param_2 = (undefined *)0x0;
  if (0 < (int)(*(uint *)(gen_frame + 0x288))) {
    param_4 = (undefined *)0x0;
    do {
      uVar2 = *(ushort *)((int)param_4 + 0xc + (*(int *)(gen_frame + 0x284)));
      uVar5 = *(uint *)((int)param_4 + 4 + (*(int *)(gen_frame + 0x284)));
      pvVar7 = *(undefined * PTR32 *)((int)param_4 + 8 + (*(int *)(gen_frame + 0x284)));
      (*(uint *)(gen_frame + 0x290)) = uVar5;
      (*(undefined * PTR32 *)(gen_frame + 0x264)) = pvVar7;
      if ((((uVar2 != 0) && (bVar1 = *(byte *)(uVar5 + 0xd), bVar1 != 0)) && (bVar1 != 0x14)) &&
         ((bVar1 != 0x1d && (bVar1 != 0x21)))) {
        if (bVar1 == 0x19) {
          uVar11 = F_00da5fd0(*(undefined4 *)((int)param_4 + (*(int *)(gen_frame + 0x284))));
          uVar5 = F_00da5fd0(uVar5);
          (*(uint *)(gen_frame + 0x290)) = uVar5;
          if (((uVar11 != 0) && (uVar5 != 0)) && (iVar14 = 0, uVar2 != 0)) {
            do {
              uVar5 = uVar11;
              pvVar7 = param_3;
              uVar18 = (*(uint *)(gen_frame + 0x290));
              uVar12 = F_00d929c0(uVar11);
              F_00e26bd0((*(int * PTR32 *)(gen_frame + 0x29c)),(int)(uVar12 * iVar14 + (int)(*(undefined * PTR32 *)(gen_frame + 0x264))),(undefined *)uVar5,pvVar7,
                           (undefined *)uVar18);
              iVar14 = iVar14 + 1;
            } while (iVar14 < (int)(uint)uVar2);
          }
        }
        else if (bVar1 != 0x1c) {
          if (bVar1 == 0x1e) {
            F_00e26700(param_3,(uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x29c)) + 3),(uint)uVar2,pvVar7);
          }
          else {
            uVar5 = F_00da61f0(uVar5);
            F_00e26570((uint)uVar2,uVar5,param_3,(uint)bVar1,pvVar7);
          }
        }
      }
      param_2 = (undefined *)((int)param_2 + 1);
      param_4 = (undefined *)((int)param_4 + 0x10);
      uVar5 = (*(uint *)(gen_frame + 0x268));
    } while ((int)param_2 < (int)(*(uint *)(gen_frame + 0x288)));
  }
  (*(uint *)(gen_frame + 0x288)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x28c))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x284)),(*(uint *)(gen_frame + 0x28c)) << 4);
  }
  return uVar5;
}

/* ref: FUN_00e27480 */
uint F_00e27480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe27480u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_esi = (int *)(uintptr_t)gen_a0;
  undefined * in_edi = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = F_00da6b30(in_edi);
  F_00e267c0(2,uVar2);
  piVar3 = (int *)F_00da6b30(in_edi);
  uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x20))(piVar3);
  if (in_esi[1] == (in_esi[2] & 0x3fffffffU)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),in_esi,8);
  }
  puVar1 = (undefined4 *)(*in_esi + in_esi[1] * 8);
  *puVar1 = param_4;
  puVar1[1] = uVar2;
  in_esi[1] = in_esi[1] + 1;
  uVar2 = F_00da0e60(param_3);
  F_00da6ae0(in_edi,param_3,uVar2 + 1);
  return 0;
}

/* ref: FUN_00e27500 */
uint F_00e27500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xe27500u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  undefined * param_6 = (undefined *)(uintptr_t)gen_a6;
  int param_7 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x260];
  int iVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  code * pcVar5;
  undefined * this_00;
  uint uVar6;
  undefined4 * in_esi;
  uint * puVar7;
  uint uVar8;
  uint uVar9;
  int * piVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 * this_01;
  uint * puVar14;
  int iVar15;
  undefined * pvVar16;
  undefined * pvVar17;
  undefined4 uVar18;
  
  this_00 = param_3;
  (*(int * PTR32 *)(gen_frame + 0x258)) = this;
  if (param_7 == 0) {
    uVar6 = F_00d92610(param_4);
    if (*(uint *)((int)param_6 + 0x1c) == (*(uint *)((int)param_6 + 0x20) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)param_6 + 0x18),8);
    }
    piVar10 = ((int *)GEN_TOP((*(int *)((int)param_6 + 0x18) + *(int *)((int)param_6 + 0x1c) * 8)));
    *piVar10 = param_5;
    piVar10[1] = uVar6;
    *(int *)((int)param_6 + 0x1c) = *(int *)((int)param_6 + 0x1c) + 1;
  }
  iVar1 = param_7 + 1;
  iVar15 = 0;
  (*(int *)(gen_frame + 0x240)) = 0;
  uVar6 = F_00d927e0(param_4);
  if (0 < (int)uVar6) {
    do {
      in_esi = (undefined4 *)F_00d92800(param_4,iVar15);
      puVar7 = (uint *)F_00d928d0(param_2,*in_esi);
      (*(uint * PTR32 *)(gen_frame + 0x254)) = puVar7;
      if (puVar7 == (uint *)0x0) goto LAB_00e27e7f;
      puVar14 = ((uint *)GEN_TOP(((uint)*(ushort *)((int)puVar7 + 0x12) + param_1)));
      uVar6 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x258)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x258)),puVar7,in_esi);
      if ((uVar6 == 0) ||
         (((*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 4) & 2) != 0 && ((*(ushort *)(in_esi + 4) & 0x400) != 0))))
      goto LAB_00e27e7f;
      switch((unsigned int)(uintptr_t)(*(undefined1 *)(in_esi + 3))) {
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
      case 0x15: ;
      case 0x18: ;
      case 0x1e: ;
      case 0x1f: ;
      case 0x20: ;
      case 0x22: ;
        break;
      case 0x13: ;
        F_00da0a80(((undefined1 *)(gen_frame + 0x22c)),((undefined1 *)(gen_frame + 0x0)),0x200);
        F_00d9fe80(((undefined1 *)(gen_frame + 0x22c)),"TYPE_ZERO should not occur.");
        uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                          (REFG(int * PTR32, 0x15dff78),3,0x641e3e05,((undefined1 *)(gen_frame + 0x0)),"Copier\\hkObjectCopier.cpp",0x406);
        if (uVar6 != 0) {
          pcVar5 = ((code *)GEN_TOP(swi(3)));
          uVar6 = (*pcVar5)();
          return uVar6;
        }
        this_01 = ((undefined1 *)(gen_frame + 0x22c));
        goto LAB_00e27e65;
      case 0x14: ;
        uVar6 = F_00e26500(in_esi);
        puVar7 = (*(uint * PTR32 *)(gen_frame + 0x254));
        uVar11 = F_00e26500((*(uint * PTR32 *)(gen_frame + 0x254)));
        uVar6 = F_00e28010(uVar11,uVar6);
        (*(uint *)(gen_frame + 0x248)) = uVar6;
        uVar6 = F_00e26500(puVar7);
        uVar11 = F_00da6030((*(uint * PTR32 *)(gen_frame + 0x254)));
        (*(uint *)(gen_frame + 0x250)) = 0;
        (*(uint *)(gen_frame + 0x244)) = (int)uVar11 / (int)uVar6;
        if (0 < (int)(*(uint *)(gen_frame + 0x248))) {
          (*(uint * PTR32 *)(gen_frame + 0x254)) = puVar14;
          do {
            uVar6 = *puVar14;
            (*(uint * PTR32 *)(gen_frame + 0x254)) = puVar14;
            if (uVar6 != 0) {
              iVar15 = *(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3) * (*(uint *)(gen_frame + 0x250)) + (uint)*(ushort *)((int)in_esi + 0x12);
              if (*(char *)((int)in_esi + 0xd) == '\x02') {
                F_00e27480(param_6,this_00,uVar6,iVar15 + param_5);
              }
              else if (*(char *)((int)in_esi + 0xd) != '\0') {
                uVar18 = 0;
                uVar11 = F_00da5fd0(in_esi);
                F_00e28540(param_6,iVar15 + param_5,uVar6,uVar11,uVar18);
              }
            }
            puVar14 = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x254)) + (*(uint *)(gen_frame + 0x244)));
            uVar6 = (*(uint *)(gen_frame + 0x250)) + 1;
            (*(uint *)(gen_frame + 0x250)) = uVar6;
            (*(uint * PTR32 *)(gen_frame + 0x254)) = puVar14;
          } while ((int)uVar6 < (int)(*(uint *)(gen_frame + 0x248)));
        }
        break;
      case 0x16: ;
      case 0x17: ;
      case 0x1a: ;
        if ((puVar14[1] != 0) && (cVar2 = *(char *)((int)in_esi + 0xd), cVar2 != '\0')) {
          if (cVar2 == '\x14') {
            piVar10 = (int *)F_00da6b30(this_00);
            (*(uint *)(gen_frame + 0x244)) = (uint)*(ushort *)((int)in_esi + 0x12);
            uVar6 = ((code *)*(gen_code32 *)(*piVar10 + 0x20))(piVar10);
            F_00dfa9f0(param_6,(*(uint *)(gen_frame + 0x244)) + param_5,uVar6);
            (*(undefined8 *)(gen_frame + 0x210)) = 0;
            uVar6 = F_00da61f0(puVar7);
            (*(uint *)(gen_frame + 0x24c)) = uVar6;
            (*(uint *)(gen_frame + 0x248)) = 0;
            if (0 < (int)puVar14[1]) {
              (*(uint *)(gen_frame + 0x250)) = 0;
              do {
                (*(uint *)(gen_frame + 0x244)) = *(uint *)((*(uint *)(gen_frame + 0x250)) + *puVar14);
                if ((*(uint *)((*(uint *)(gen_frame + 0x250)) + *puVar14) != 0) && (*(char *)((int)in_esi + 0xd) != '\0'))
                {
                  piVar10 = (int *)F_00da6b30(this_00);
                  uVar18 = 0;
                  uVar11 = F_00da5fd0((*(uint * PTR32 *)(gen_frame + 0x254)));
                  uVar6 = (*(uint *)(gen_frame + 0x244));
                  uVar8 = ((code *)*(gen_code32 *)(*piVar10 + 0x20))(piVar10);
                  F_00e28540(param_6,uVar8,uVar6,uVar11,uVar18);
                }
                F_00da6ae0(this_00,&(*(undefined8 *)(gen_frame + 0x210)),(uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3));
                uVar6 = (*(uint *)(gen_frame + 0x248)) + 1;
                (*(uint *)(gen_frame + 0x248)) = uVar6;
                (*(uint *)(gen_frame + 0x250)) = (*(uint *)(gen_frame + 0x250)) + (*(uint *)(gen_frame + 0x24c));
              } while ((int)uVar6 < (int)puVar14[1]);
            }
          }
          else if (cVar2 == '\x1d') {
            piVar10 = (int *)F_00da6b30(this_00);
            uVar4 = *(ushort *)((int)in_esi + 0x12);
            uVar6 = ((code *)*(gen_code32 *)(*piVar10 + 0x20))(piVar10);
            F_00dfa9f0(param_6,(uint)uVar4 + param_5,uVar6);
            (*(undefined8 *)(gen_frame + 0x238)) = 0;
            piVar10 = (int *)F_00da6b30(this_00);
            uVar6 = ((code *)*(gen_code32 *)(*piVar10 + 0x20))(piVar10);
            iVar15 = 0;
            (*(uint *)(gen_frame + 0x24c)) = uVar6;
            if (0 < (int)puVar14[1]) {
              do {
                F_00da6ae0(this_00,&(*(undefined8 *)(gen_frame + 0x238)),(uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3));
                iVar15 = iVar15 + 1;
              } while (iVar15 < (int)puVar14[1]);
            }
            param_3 = (undefined *)0x0;
            if (0 < (int)puVar14[1]) {
              do {
                if (*(int *)(*puVar14 + (int)((int)(uintptr_t)param_3) * 4) != 0) {
                  F_00e27480(param_6,this_00,*(undefined4 *)(*puVar14 + (int)((int)(uintptr_t)param_3) * 4),
                               (uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3) * (int)param_3 + (*(uint *)(gen_frame + 0x24c)));
                }
                param_3 = (undefined *)((int)param_3 + 1);
              } while ((int)param_3 < (int)puVar14[1]);
            }
          }
          else if (cVar2 == '!') {
            piVar10 = (int *)F_00da6b30(this_00);
            uVar4 = *(ushort *)((int)in_esi + 0x12);
            uVar6 = ((code *)*(gen_code32 *)(*piVar10 + 0x20))(piVar10);
            F_00dfa9f0(param_6,(uint)uVar4 + param_5,uVar6);
            (*(undefined8 *)(gen_frame + 0x218)) = 0;
            piVar10 = (int *)F_00da6b30(this_00);
            uVar6 = ((code *)*(gen_code32 *)(*piVar10 + 0x20))(piVar10);
            iVar15 = 0;
            (*(uint *)(gen_frame + 0x24c)) = uVar6;
            if (0 < (int)puVar14[1]) {
              do {
                F_00da6ae0(this_00,&(*(undefined8 *)(gen_frame + 0x218)),(uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3));
                iVar15 = iVar15 + 1;
              } while (iVar15 < (int)puVar14[1]);
            }
            param_3 = (undefined *)0x0;
            if (0 < (int)puVar14[1]) {
              do {
                uVar6 = *(uint *)(*puVar14 + (int)((int)(uintptr_t)param_3) * 4);
                if ((uVar6 & 0xfffffffe) != 0) {
                  F_00e27480(param_6,this_00,uVar6 & 0xfffffffe,
                               (uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3) * (int)param_3 + (*(uint *)(gen_frame + 0x24c)));
                }
                param_3 = (undefined *)((int)param_3 + 1);
              } while ((int)param_3 < (int)puVar14[1]);
            }
          }
          else if (cVar2 == '\x19') {
            piVar10 = (int *)F_00da6b30(this_00);
            uVar6 = ((code *)*(gen_code32 *)(*piVar10 + 0x20))(piVar10);
            (*(uint *)(gen_frame + 0x24c)) = uVar6;
            F_00dfa9f0(param_6,(uint)*(ushort *)((int)in_esi + 0x12) + param_5,uVar6);
            uVar6 = F_00da5fd0((*(uint * PTR32 *)(gen_frame + 0x254)));
            uVar11 = F_00da5fd0(in_esi);
            if ((uVar6 != 0) && (uVar11 != 0)) {
              (*(uint *)(gen_frame + 0x248)) = *puVar14;
              (*(uint *)(gen_frame + 0x250)) = 0;
              if (0 < (int)puVar14[1]) {
                do {
                  uVar8 = uVar6;
                  pvVar16 = this_00;
                  uVar12 = uVar11;
                  uVar9 = F_00d929c0(uVar6);
                  F_00e26bd0((*(int * PTR32 *)(gen_frame + 0x258)),uVar9 * (*(uint *)(gen_frame + 0x250)) + (*(uint *)(gen_frame + 0x248)),uVar8,pvVar16,uVar12);
                  uVar8 = (*(uint *)(gen_frame + 0x250)) + 1;
                  (*(uint *)(gen_frame + 0x250)) = uVar8;
                } while ((int)uVar8 < (int)puVar14[1]);
              }
              (*(uint * PTR32 *)(gen_frame + 0x254)) = (uint *)0x0;
              if (0 < (int)puVar14[1]) {
                do {
                  pvVar17 = param_6;
                  iVar15 = iVar1;
                  uVar8 = F_00d929c0(uVar11);
                  iVar13 = uVar8 * (int)(*(uint * PTR32 *)(gen_frame + 0x254)) + (*(uint *)(gen_frame + 0x24c));
                  uVar8 = uVar6;
                  pvVar16 = this_00;
                  uVar12 = uVar11;
                  uVar9 = F_00d929c0(uVar6);
                  F_00e27500((*(int * PTR32 *)(gen_frame + 0x258)),uVar9 * (int)(*(uint * PTR32 *)(gen_frame + 0x254)) + (*(uint *)(gen_frame + 0x248)),(undefined *)uVar8,pvVar16,
                               (undefined *)uVar12,iVar13,pvVar17,iVar15);
                  puVar7 = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x254)) + 1);
                  (*(uint * PTR32 *)(gen_frame + 0x254)) = puVar7;
                } while ((int)puVar7 < (int)puVar14[1]);
              }
            }
          }
          else if (cVar2 == '\x1c') {
            piVar10 = (int *)F_00da6b30(this_00);
            uVar6 = ((code *)*(gen_code32 *)(*piVar10 + 0x20))(piVar10);
            (*(uint *)(gen_frame + 0x248)) = uVar6;
            F_00dfa9f0(param_6,(uint)*(ushort *)((int)in_esi + 0x12) + param_5,uVar6);
            iVar15 = 0;
            if (0 < (int)puVar14[1]) {
              do {
                bVar3 = *(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3);
                (*(undefined8 *)(gen_frame + 0x200)) = 0;
                (*(undefined8 *)(gen_frame + 0x208)) = 0;
                F_00da6970(this_00,&(*(undefined8 *)(gen_frame + 0x200)),(uint)bVar3,2);
                iVar15 = iVar15 + 1;
              } while (iVar15 < (int)puVar14[1]);
            }
            param_3 = (undefined *)0x0;
            if (0 < (int)puVar14[1]) {
              do {
                piVar10 = (int *)(*puVar14 + (int)((int)(uintptr_t)param_3) * 8);
                iVar15 = *piVar10;
                iVar13 = (uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3) * (int)((int)(uintptr_t)param_3) * 2;
                if (iVar15 != 0) {
                  F_00e28540(param_6,iVar13 + (*(uint *)(gen_frame + 0x248)),iVar15,piVar10[1],0);
                }
                iVar15 = *(int *)(*puVar14 + 4 + (int)((int)(uintptr_t)param_3) * 8);
                if (iVar15 != 0) {
                  F_00e28540(param_6,(uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3) + iVar13 + (*(uint *)(gen_frame + 0x248)),iVar15,
                               &REFG(undefined, 0x15da330),0);
                }
                param_3 = (undefined *)((int)param_3 + 1);
              } while ((int)param_3 < (int)puVar14[1]);
            }
          }
          else {
            piVar10 = (int *)F_00da6b30(this_00);
            uVar4 = *(ushort *)((int)in_esi + 0x12);
            uVar6 = ((code *)*(gen_code32 *)(*piVar10 + 0x20))(piVar10);
            F_00dfa9f0(param_6,(uint)uVar4 + param_5,uVar6);
            bVar3 = *(byte *)((int)in_esi + 0xd);
            if (bVar3 == 0x1e) {
              F_00e26700(this_00,(uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3),puVar14[1],*puVar14);
            }
            else {
              uVar6 = *puVar14;
              uVar11 = F_00da61f0(in_esi);
              F_00e26570(puVar14[1],uVar11,this_00,(uint)bVar3,uVar6);
            }
          }
        }
        break;
      case 0x19: ;
        uVar6 = F_00da5fd0(puVar7);
        (*(uint *)(gen_frame + 0x250)) = uVar6;
        uVar11 = F_00da5fd0(in_esi);
        (*(uint *)(gen_frame + 0x248)) = uVar11;
        if ((uVar6 != 0) && (uVar11 != 0)) {
          (*(uint *)(gen_frame + 0x244)) = (uint)*(ushort *)((int)in_esi + 0x12) + param_5;
          uVar6 = F_00e26500((*(uint * PTR32 *)(gen_frame + 0x254)));
          (*(uint *)(gen_frame + 0x24c)) = uVar6;
          uVar6 = F_00e26500(in_esi);
          uVar6 = F_00e28010((*(uint *)(gen_frame + 0x24c)),uVar6);
          (*(uint *)(gen_frame + 0x24c)) = uVar6;
          param_3 = (undefined *)0x0;
          if (0 < (int)uVar6) {
            do {
              uVar6 = F_00d929c0((*(uint *)(gen_frame + 0x250)));
              pvVar16 = param_6;
              iVar15 = iVar1;
              uVar11 = F_00d929c0((*(uint *)(gen_frame + 0x248)));
              F_00e27500((*(int * PTR32 *)(gen_frame + 0x258)),(int)(uVar6 * (int)param_3 + (int)puVar14),(undefined *)(*(uint *)(gen_frame + 0x250)),
                           this_00,(undefined *)(*(uint *)(gen_frame + 0x248)),uVar11 * (int)param_3 + (*(uint *)(gen_frame + 0x244)),pvVar16,iVar15)
              ;
              param_3 = (undefined *)((int)param_3 + 1);
            } while ((int)param_3 < (int)(*(uint *)(gen_frame + 0x24c)));
          }
        }
        break;
      case 0x1b: ;
        uVar6 = *puVar14;
        if (uVar6 != 0) {
          F_00e28540(param_6,(uint)*(ushort *)((int)in_esi + 0x12) + param_5,uVar6,&REFG(undefined, 0x15da330),1
                      );
          piVar10 = (int *)F_00da6b30(this_00);
          uVar11 = ((code *)*(gen_code32 *)(*piVar10 + 0x20))(piVar10);
          (*(uint *)(gen_frame + 0x24c)) = uVar11;
          F_00dfa9f0(param_6,(uint)*(ushort *)((int)in_esi + 0x12) +
                               (uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3) + param_5,uVar11);
          (*(uint *)(gen_frame + 0x248)) = puVar14[1];
          param_3 = (undefined *)0x0;
          if (0 < (int)puVar14[2]) {
            do {
              uVar11 = uVar6;
              pvVar16 = this_00;
              uVar8 = uVar6;
              uVar12 = F_00d929c0(uVar6);
              F_00e26bd0((*(int * PTR32 *)(gen_frame + 0x258)),uVar12 * (int)param_3 + (*(uint *)(gen_frame + 0x248)),uVar11,pvVar16,uVar8);
              param_3 = (undefined *)((int)param_3 + 1);
            } while ((int)param_3 < (int)puVar14[2]);
          }
          param_3 = (undefined *)0x0;
          if (0 < (int)puVar14[2]) {
            do {
              pvVar17 = param_6;
              iVar15 = iVar1;
              uVar11 = F_00d929c0(uVar6);
              iVar13 = uVar11 * (int)param_3 + (*(uint *)(gen_frame + 0x24c));
              uVar11 = uVar6;
              pvVar16 = this_00;
              uVar8 = uVar6;
              uVar12 = F_00d929c0(uVar6);
              F_00e27500((*(int * PTR32 *)(gen_frame + 0x258)),uVar12 * (int)param_3 + (*(uint *)(gen_frame + 0x248)),(undefined *)uVar11,pvVar16,
                           (undefined *)uVar8,iVar13,pvVar17,iVar15);
              param_3 = (undefined *)((int)param_3 + 1);
            } while ((int)param_3 < (int)puVar14[2]);
          }
        }
        break;
      case 0x1c: ;
        uVar6 = F_00e26500((*(uint * PTR32 *)(gen_frame + 0x254)));
        (*(uint *)(gen_frame + 0x24c)) = uVar6;
        uVar6 = F_00e26500(in_esi);
        uVar6 = F_00e28010((*(uint *)(gen_frame + 0x24c)),uVar6);
        (*(uint *)(gen_frame + 0x24c)) = uVar6;
        (*(uint * PTR32 *)(gen_frame + 0x254)) = (uint *)0x0;
        if (0 < (int)uVar6) {
          (*(uint *)(gen_frame + 0x250)) = 1;
          do {
            iVar15 = *((int *)GEN_TOP(((int)puVar14 + (int)((int)(uintptr_t)(*(uint * PTR32 *)(gen_frame + 0x254))) * (uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 2) * 2)));
            uVar6 = *((uint *)GEN_TOP(((*(uint *)(gen_frame + 0x250)) * *(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 2) + (int)puVar14)));
            if (iVar15 != 0) {
              F_00e28540(param_6,(uint)*(ushort *)((int)in_esi + 0x12) + param_5 +
                                   (uint)*(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3) * (int)((int)(uintptr_t)(*(uint * PTR32 *)(gen_frame + 0x254))) * 2,iVar15,uVar6,0);
            }
            if (uVar6 != 0) {
              F_00e28540(param_6,(uint)*(ushort *)((int)in_esi + 0x12) +
                                   *(byte *)((*(int * PTR32 *)(gen_frame + 0x258)) + 3) * (*(uint *)(gen_frame + 0x250)) + param_5,uVar6,&REFG(undefined, 0x15da330),0
                          );
            }
            (*(uint *)(gen_frame + 0x250)) = (*(uint *)(gen_frame + 0x250)) + 2;
            puVar7 = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x254)) + 1);
            (*(uint * PTR32 *)(gen_frame + 0x254)) = puVar7;
          } while ((int)puVar7 < (int)(*(uint *)(gen_frame + 0x24c)));
        }
        break;
      case 0x1d: ;
        if (*puVar14 != 0) {
          F_00e27480(param_6,this_00,*puVar14,(uint)*(ushort *)((int)in_esi + 0x12) + param_5);
        }
        break;
      case 0x21: ;
        if ((*puVar14 & 0xfffffffe) != 0) {
          F_00e27480(param_6,this_00,*puVar14 & 0xfffffffe,
                       (uint)*(ushort *)((int)in_esi + 0x12) + param_5);
        }
        break;
      default: ;
        F_00da0a80(((undefined1 *)(gen_frame + 0x220)),((undefined1 *)(gen_frame + 0x0)),0x200);
        F_00d9fe80(((undefined1 *)(gen_frame + 0x220)),"Unknown class member found during write of data.");
        uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                          (REFG(int * PTR32, 0x15dff78),3,0x641e3e05,((undefined1 *)(gen_frame + 0x0)),"Copier\\hkObjectCopier.cpp",0x40b);
        if (uVar6 != 0) {
          pcVar5 = ((code *)GEN_TOP(swi(3)));
          uVar6 = (*pcVar5)();
          return uVar6;
        }
        this_01 = ((undefined1 *)(gen_frame + 0x220));
LAB_00e27e65: ;
        F_00d9fda0(this_01);
      }
      uVar6 = F_00da6b30(this_00);
      F_00e267c0(0x10,uVar6);
LAB_00e27e7f: ;
      iVar15 = (*(int *)(gen_frame + 0x240)) + 1;
      (*(int *)(gen_frame + 0x240)) = iVar15;
      uVar6 = F_00d927e0(param_4);
    } while (iVar15 < (int)uVar6);
  }
  return uVar6;
}

/* ref: hkObjectCopier::vf3 */
uint F_00e27ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe27ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char * pcVar4;
  
  uVar2 = (*(uint *)&gen_args[3]);
  F_00da68d0(((undefined1 *)(gen_frame + 0xc)),(*(uint *)&gen_args[3]),(uint)(byte)(*(undefined * PTR32 *)&gen_args[0])[0x14]);
  uVar3 = (*(undefined4 *)&gen_args[4]);
  (*(uint *)&gen_args[3]) = F_00e26bd0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),((undefined1 *)(gen_frame + 0xc)),(*(undefined4 *)&gen_args[4]));
  F_00e267c0(0x10,uVar2);
  F_00e27500((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),((undefined1 *)(gen_frame + 0xc)),uVar3,(*(uint *)&gen_args[3]),(*(undefined4 *)&gen_args[5]),0);
  F_00e267c0(0x10,uVar2);
  pcVar4 = (char *)F_00da6b10(((undefined1 *)(gen_frame + 0xc)),(int)&(*(undefined4 *)&gen_args[2]) + 3);
  cVar1 = *pcVar4;
  F_00da6900(((undefined1 *)(gen_frame + 0xc)));
  return (uint)(cVar1 == '\0');
}

/* ref: FUN_00e27f90 */
uint F_00e27f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe27f90u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return *(*(uint * PTR32 *)&gen_args[0]) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00e27fa0 */
uint F_00e27fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe27fa0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00e27ff0 */
uint F_00e27ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe27ff0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00e28010 */
uint F_00e28010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28010u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if ((int)param_2 <= (int)param_1) {
    uVar1 = param_2;
  }
  return uVar1;
}

/* ref: FUN_00e28050 */
uint F_00e28050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28050u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00e28090 */
unsigned int F_00e28090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe28090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
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

/* ref: FUN_00e280c0 */
unsigned int F_00e280c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe280c0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e28100 */
uint F_00e28100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe28100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00e28120 */
uint F_00e28120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28120u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: hkObjectCopier::vf5 */
uint F_00e28140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return param_1;
}

/* ref: FUN_00e28170 */
uint F_00e28170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe28170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x10);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this)));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e281c0 */
uint F_00e281c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe281c0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e28200 */
uint F_00e28200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28200u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e28230 */
uint F_00e28230(unsigned int gen_a0)
{
  GEN_ENTER(0xe28230u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 * 8 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00e28270 */
uint F_00e28270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28270u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 8 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00e282c0 */
unsigned int F_00e282c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe282c0u, gen_a0, gen_a1, gen_a2, 0u);
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
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e28300 */
uint F_00e28300(unsigned int gen_a0)
{
  GEN_ENTER(0xe28300u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkObjectCopier::vf0 */
uint F_00e28330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e26560(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00e28370 */
uint F_00e28370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0x10);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this)));
  *puVar1 = *param_1;
  puVar1[1] = param_1[1];
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e283c0 */
uint F_00e283c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe283c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e28400 */
uint F_00e28400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe28400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  LPVOID this_00;
  uint uVar2;
  uint uVar3;
  
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar1 = *(int *)((int)this_00 + 0xc);
  uVar3 = param_1 * 8 + 0x7fU & 0xffffff80;
  uVar2 = iVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this_00 + 8)) && (uVar2 <= *(uint *)((int)this_00 + 0x10))) {
    *(uint *)((int)this_00 + 0xc) = uVar2;
    *(int *)this = iVar1;
    *(int *)((int)this + 4) = param_1;
    return (uint)this;
  }
  uVar2 = F_00d94390(this_00,uVar3);
  *(uint *)this = uVar2;
  *(int *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_00e284b0 */
uint F_00e284b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe284b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x10);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e28500 */
uint F_00e28500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28500u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e28540 */
uint F_00e28540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe28540u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 0x10) == (*(uint *)((int)this + 0x14) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0xc),0x10);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 0x10) * 0x10 + *(int *)((int)this + 0xc))));
  *puVar1 = CONCAT44(param_2,param_1);
  puVar1[1] = CONCAT44(param_4,param_3);
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e285b0 */
uint F_00e285b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe285b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 0x1c) == (*(uint *)((int)this + 0x20) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x18),8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + *(int *)((int)this + 0x1c) * 8)));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e28600 */
uint F_00e28600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,0x10);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e28650 */
uint F_00e28650(unsigned int gen_a0)
{
  GEN_ENTER(0xe28650u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e28690 */
uint F_00e28690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28690u, gen_a0, gen_a1, 0u, 0u);
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
    uVar2 = param_1 + 0x7f & 0xffffff80;
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

/* ref: FUN_00e28700 */
uint F_00e28700(unsigned int gen_a0)
{
  GEN_ENTER(0xe28700u, gen_a0, 0u, 0u, 0u);
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
  uVar3 = iVar2 + 0x7fU & 0xffffff80;
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
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar3 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: FUN_00e28790 */
uint F_00e28790(unsigned int gen_a0)
{
  GEN_ENTER(0xe28790u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e28d50 */
uint F_00e28d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28d50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc0) = param_2;
  return param_2;
}

/* ref: Application::Network::ChatClient::RaptureChannelManager::vf1 */
uint F_00e28d60(void)
{
  GEN_ENTER(0xe28d60u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Application::Network::ChatClient::RaptureChannelManager::vf2 */
uint F_00e28d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Application::Network::ChatClient::RaptureChannelManager::vf19 */
unsigned int F_00e28d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00e28d90 */
byte F_00e28d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0xc0);
  if (iVar3 < 1) {
    return 0;
  }
  if (iVar3 < 3) {
    if (*param_1 == 2) {
      pvVar1 = (undefined *)F_00c31900(this);
      if (pvVar1 == (undefined *)0x0) {
        return 0;
      }
      F_00e366f0(((int *)(gen_frame + 0x4)),*param_1,param_1[1],0);
      uVar2 = F_00e2cb30(pvVar1,((int *)(gen_frame + 0x4)));
      if (uVar2 != 0) {
        if ((*(int *)(gen_frame + 0x18)) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)((*(int *)(gen_frame + 0x18)) + 0x24);
        }
        F_00c46aa0(iVar3 + 0x10,param_1 + 6,param_1[1] + -0x10);
        iVar3 = (*(int *)(gen_frame + 0x18));
        (*(int *)(gen_frame + 0x18)) = 0;
        uVar2 = ((code *)*(gen_code32 *)(((int *)(gen_frame + 0x4))[0] + 4))(((int *)(gen_frame + 0x4)));
        if ((undefined4 *)(iVar3 + 0xc) != (undefined4 *)(uVar2 + 8)) {
          *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(uVar2 + 8);
          *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(uVar2 + 0xc);
        }
        ((code *)*(gen_code32 *)(((int *)(gen_frame + 0x4))[0] + 0xc))
                  (((int *)(gen_frame + 0x4)),*(undefined4 *)(iVar3 + 0x24),*(undefined4 *)(iVar3 + 0x20));
        F_00e2ebc0(*(undefined * PTR32 *)((int)pvVar1 + 0x20),iVar3);
        *(undefined4 *)((int)this + 0xc0) = 2;
        F_00e36660(((int *)(gen_frame + 0x4)));
        return 1;
      }
      goto LAB_00e28f30;
    }
  }
  else if (iVar3 != 3) {
    return 0;
  }
  pvVar1 = (undefined *)F_00c31900(this);
  if (pvVar1 == (undefined *)0x0) {
    return 0;
  }
  F_00e366f0(((int *)(gen_frame + 0x4)),*param_1,param_1[1],0);
  uVar2 = F_00e2cb30(pvVar1,((int *)(gen_frame + 0x4)));
  if (uVar2 != 0) {
    if ((*(int *)(gen_frame + 0x18)) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)((*(int *)(gen_frame + 0x18)) + 0x24);
    }
    F_00c46aa0(iVar3 + 0x10,param_1 + 6,param_1[1] + -0x10);
    iVar3 = (*(int *)(gen_frame + 0x18));
    (*(int *)(gen_frame + 0x18)) = 0;
    uVar2 = ((code *)*(gen_code32 *)(((int *)(gen_frame + 0x4))[0] + 4))(((int *)(gen_frame + 0x4)));
    if ((undefined4 *)(iVar3 + 0xc) != (undefined4 *)(uVar2 + 8)) {
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(uVar2 + 8);
      *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(uVar2 + 0xc);
    }
    ((code *)*(gen_code32 *)(((int *)(gen_frame + 0x4))[0] + 0xc))
              (((int *)(gen_frame + 0x4)),*(undefined4 *)(iVar3 + 0x24),*(undefined4 *)(iVar3 + 0x20));
    F_00e2ebc0(*(undefined * PTR32 *)((int)pvVar1 + 0x20),iVar3);
    F_00e36660(((int *)(gen_frame + 0x4)));
    return 1;
  }
LAB_00e28f30: ;
  F_00e36660(((int *)(gen_frame + 0x4)));
  return 0;
}

/* ref: FUN_00e28f50 */
uint F_00e28f50(unsigned int gen_a0)
{
  GEN_ENTER(0xe28f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x11573ec));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x1157384));
  F_00e2e6d0(this);
  *(undefined4 *)((int)this + 0x8c) =
       (*(undefined * PTR32 (*)[7])REFP(0x11572cc));
  F_00e30b00((undefined4 *)((int)this + 0x8c));
  *(undefined4 *)((int)this + 100) =
       (*(undefined * PTR32 (*)[7])REFP(0x11572ac));
  F_00e30990((undefined4 *)((int)this + 100));
  uVar2 = F_00e316d0(this);
  return uVar2;
}

/* ref: FUN_00e28fa0 */
uint F_00e28fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe28fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  undefined * pvVar2;
  
  puVar1 = (undefined4 *)F_004069f0(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x115720c));
  }
  F_00e31250(this,puVar1,0,1,0x1000);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x1157384));
  F_00e2f030((undefined *)((int)this + 100));
  *(undefined * PTR32 * PTR32 *)((int)this + 100) =
       (*(undefined * PTR32 (*)[7])REFP(0x11572ac));
  F_00e2fcf0((undefined *)((int)this + 0x8c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8c) =
       (*(undefined * PTR32 (*)[7])REFP(0x11572cc));
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x11573ec));
  *(undefined4 *)((int)this + 0xc0) = 0;
  pvVar2 = (undefined *)F_00406b90(0x110,0,0);
  if (pvVar2 != (undefined *)0x0) {
    pvVar2 = (undefined *)F_00e356f0(pvVar2,this,param_1);
    *(undefined * PTR32 *)((int)this + 8) = pvVar2;
    F_00e34460(pvVar2);
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = 0;
  F_00e34460((undefined *)0x0);
  return (uint)this;
}

/* ref: FUN_00e29060 */
uint F_00e29060(unsigned int gen_a0)
{
  GEN_ENTER(0xe29060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint in_EAX = 0;
  uint uVar2;
  uint local_8;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x44))();
    if (*(int *)((int)this + 0x24) != 0) {
      local_8 = (uint)this & 0xffffff00;
      F_00e31580(**(undefined4 * PTR32 *)((int)this + 0x20),*(undefined4 * PTR32 *)((int)this + 0x20),local_8);
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
    in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  if (*(int *)((int)this + 0xc0) == 0) {
    uVar2 = F_00c31900(this);
    in_EAX = 0;
    if (uVar2 != 0) {
      *(undefined4 *)((int)this + 0xc0) = 1;
      return 1;
    }
  }
  return CONCAT31((int3)(in_EAX >> 8),1);
}

/* ref: FUN_00e290e0 */
byte F_00e290e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe290e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = (int)(*(undefined * PTR32 * PTR32 *)&gen_args[1]);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) != 0) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 * PTR32 *)&gen_args[1]) + 0xc))) = *((undefined4 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) + 8)));
    piVar1 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54)))));
    if (piVar1 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54)))) {
      *(int *)piVar1[1] = *piVar1;
      *(int *)(*piVar1 + 4) = piVar1[1];
      F_00406ad0(piVar1);
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) + -1;
    }
LAB_00e29135: ;
    F_00e360f0(&(*(undefined * PTR32 * PTR32 *)&gen_args[1]));
    (*(undefined * PTR32 * PTR32 *)&gen_args[1]) = (*(undefined * PTR32 (*)[13])REFP(0x1157164));
    F_00e36130((undefined *)&(*(undefined * PTR32 * PTR32 *)&gen_args[1]),0,iVar3);
    iVar3 = *(int *)(iVar3 + 0xc);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x24);
    }
    if (*(short *)(iVar3 + 2) == 2) {
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0))) = 3;
    }
    F_00e360e0(&(*(undefined * PTR32 * PTR32 *)&gen_args[1]));
    return 1;
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != (undefined *)0x0) {
    bVar2 = F_00e31c00(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),(*(undefined * PTR32 * PTR32 *)&gen_args[1]));
    if (bVar2 != 0) goto LAB_00e29135;
  }
  return 0;
}

/* ref: FUN_00e29220 */
uint F_00e29220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe29220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)((int)this + 4);
  *(undefined8 *)(param_1 + 3) = *(undefined8 *)((int)this + 0xc);
  *(undefined8 *)(param_1 + 5) = *(undefined8 *)((int)this + 0x14);
  *(undefined8 *)(param_1 + 7) = *(undefined8 *)((int)this + 0x1c);
  return uVar1;
}

/* ref: FUN_00e29270 */
uint F_00e29270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe29270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = 0x38;
  *(undefined2 *)(param_1 + 3) = 1;
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = *(undefined4 *)((int)this + 8);
  param_1[4] = *(undefined4 *)((int)this + 0x10);
  *(undefined8 *)(param_1 + 5) = *(undefined8 *)((int)this + 0x14);
  *(undefined8 *)(param_1 + 7) = *(undefined8 *)((int)this + 0x1c);
  *(undefined8 *)(param_1 + 9) = *(undefined8 *)((int)this + 0x24);
  *(undefined8 *)(param_1 + 0xb) = *(undefined8 *)((int)this + 0x2c);
  return (uint)param_1;
}

/* ref: FUN_00e292e0 */
uint F_00e292e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe292e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)((int)this + 0xc);
  *(undefined8 *)(param_1 + 3) = *(undefined8 *)((int)this + 0x14);
  *(undefined8 *)(param_1 + 5) = *(undefined8 *)((int)this + 0x1c);
  *(undefined8 *)(param_1 + 7) = *(undefined8 *)((int)this + 0x24);
  return uVar1;
}

/* ref: FUN_00e29330 */
uint F_00e29330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe29330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = 0x38;
  *(undefined2 *)(param_1 + 3) = 2;
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = *(undefined4 *)((int)this + 8);
  param_1[4] = *(undefined4 *)((int)this + 0x10);
  *(undefined8 *)(param_1 + 5) = *(undefined8 *)((int)this + 0x1c);
  *(undefined8 *)(param_1 + 7) = *(undefined8 *)((int)this + 0x24);
  *(undefined8 *)(param_1 + 9) = *(undefined8 *)((int)this + 0x2c);
  *(undefined8 *)(param_1 + 0xb) = *(undefined8 *)((int)this + 0x34);
  return (uint)param_1;
}

/* ref: FUN_00e293a0 */
uint F_00e293a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe293a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_00e360f0(in_ecx);
  *in_ecx = (*(undefined * PTR32 (*)[13])REFP(0x1157164));
  return (uint)in_ecx;
}

/* ref: FUN_00e293d0 */
uint F_00e293d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe293d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: NetBufferFactoryInterface_TChatProtoUp_ChatProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_00e29400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe29400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[5])REFP(0x115719c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: NetBufferFactoryInterface_TChatProtoDown_ChatProtoChannel_Network_Application_IpcChannel::vf0 */
uint F_00e29430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe29430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[5])REFP(0x11571b4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e29460 */
uint F_00e29460(unsigned int gen_a0)
{
  GEN_ENTER(0xe29460u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00e29470 */
uint F_00e29470(unsigned int gen_a0)
{
  GEN_ENTER(0xe29470u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00e29480 */
uint F_00e29480(unsigned int gen_a0)
{
  GEN_ENTER(0xe29480u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e29490 */
uint F_00e29490(unsigned int gen_a0)
{
  GEN_ENTER(0xe29490u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

