#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00d2ffd0 */
uint F_00d2ffd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd2ffd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  if (param_1 < 0) {
    return 0;
  }
  iVar1 = *(int *)((int)this + 8);
  if (param_1 < iVar1) {
    uVar2 = 0;
    if (param_1 < iVar1 / 2) {
      iVar1 = 0;
      while( true ) {
        if (uVar2 == 0) {
          uVar2 = *(uint *)this;
        }
        else {
          uVar2 = *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + 4 + uVar2)));
        }
        if (uVar2 == 0) {
          return 0;
        }
        if (param_1 == iVar1) break;
        iVar1 = iVar1 + 1;
      }
    }
    else {
      do {
        iVar1 = iVar1 + -1;
        if (uVar2 == 0) {
          uVar2 = *(uint *)((int)this + 4);
        }
        else {
          uVar2 = *((uint *)GEN_TOP((uVar2 + *(int *)((int)this + 0xc))));
        }
        if (uVar2 == 0) {
          return 0;
        }
      } while (param_1 != iVar1);
    }
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00d30050 */
byte F_00d30050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd30050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 8 + param_1))) == this;
}

/* ref: FUN_00d30070 */
unsigned int F_00d30070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd30070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = *(int *)((int)this + 0xc);
  if (param_1 != param_2) {
    piVar1 = (int *)(iVar2 + 4 + param_1);
    iVar3 = *(int *)(iVar2 + param_1);
    if (*piVar1 == param_2) {
      if (iVar3 == 0) {
        *(int *)this = param_2;
      }
      else {
        *(int *)(iVar3 + 4 + iVar2) = param_2;
      }
      iVar3 = *(int *)(iVar2 + 4 + param_2);
      piVar1 = (int *)(iVar2 + 4 + param_2);
      if (iVar3 == 0) {
        *(int *)((int)this + 4) = param_1;
      }
      else {
        *((int *)GEN_TOP((iVar3 + *(int *)((int)this + 0xc)))) = param_1;
      }
      *(undefined4 *)(iVar2 + param_2) = *(undefined4 *)(iVar2 + param_1);
      *(int *)(iVar2 + 4 + param_1) = *piVar1;
      *(int *)(iVar2 + param_1) = param_2;
      *piVar1 = param_1;
      return 0;
    }
    if (iVar3 == param_2) {
      if (*(int *)(iVar2 + param_2) == 0) {
        *(int *)this = param_1;
      }
      else {
        *((int *)GEN_TOP((*(int *)(iVar2 + param_2) + 4 + iVar2))) = param_1;
      }
      if (*piVar1 == 0) {
        *(int *)((int)this + 4) = param_2;
      }
      else {
        *((int *)GEN_TOP((*piVar1 + *(int *)((int)this + 0xc)))) = param_2;
      }
      *(undefined4 *)(iVar2 + param_1) = *(undefined4 *)(iVar2 + param_2);
      iVar3 = *piVar1;
      *(int *)(iVar2 + param_2) = param_1;
      *(int *)(iVar2 + 4 + param_2) = iVar3;
      *piVar1 = param_2;
      return 0;
    }
    if (iVar3 == 0) {
      *(int *)this = param_2;
    }
    else {
      *(int *)(iVar3 + 4 + iVar2) = param_2;
    }
    if (*piVar1 == 0) {
      *(int *)((int)this + 4) = param_2;
    }
    else {
      *((int *)GEN_TOP((*piVar1 + *(int *)((int)this + 0xc)))) = param_2;
    }
    if (*(int *)(iVar2 + param_2) == 0) {
      *(int *)this = param_1;
    }
    else {
      *((int *)GEN_TOP((*(int *)(iVar2 + param_2) + 4 + *(int *)((int)this + 0xc)))) = param_1;
    }
    iVar3 = *(int *)(iVar2 + 4 + param_2);
    if (iVar3 == 0) {
      *(int *)((int)this + 4) = param_1;
    }
    else {
      *((int *)GEN_TOP((iVar3 + *(int *)((int)this + 0xc)))) = param_1;
    }
    uVar4 = *(undefined4 *)(iVar2 + 4 + param_1);
    uVar5 = *(undefined4 *)(iVar2 + param_1);
    *(undefined4 *)(iVar2 + 4 + param_1) = *(undefined4 *)(iVar2 + 4 + param_2);
    *(undefined4 *)(iVar2 + param_1) = *(undefined4 *)(iVar2 + param_2);
    *(undefined4 *)(iVar2 + param_2) = uVar5;
    *(undefined4 *)(iVar2 + 4 + param_2) = uVar4;
  }
  return 0;
}

/* ref: FUN_00d30170 */
unsigned int F_00d30170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd30170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * param_1 = (code *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined * this_00;
  undefined * this_01;
  uint uVar5;
  uint local_14;
  int local_10;
  int local_8;
  
  do {
    if (param_3 < param_2) {
      return 0;
    }
    local_8 = param_3;
    local_14 = F_00d2ffd0(this,param_2);
    uVar1 = F_00d2ffd0(this_00,param_3);
    uVar2 = F_00d2ffd0(this_01,param_2 + param_3 >> 1);
    local_10 = param_2;
    while( true ) {
      uVar3 = (*param_1)(local_14,uVar2);
      uVar5 = local_14;
      while ((int)uVar3 < 0) {
        local_10 = local_10 + 1;
        if (uVar5 == 0) {
          uVar5 = *(uint *)this;
        }
        else {
          uVar5 = *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + 4 + uVar5)));
        }
        uVar3 = (*param_1)(uVar5,uVar2);
      }
      uVar4 = (*param_1)(uVar1,uVar2);
      uVar3 = uVar1;
      while (0 < (int)uVar4) {
        local_8 = local_8 + -1;
        if (uVar3 == 0) {
          uVar3 = *(uint *)((int)this + 4);
        }
        else {
          uVar3 = *((uint *)GEN_TOP((uVar3 + *(int *)((int)this + 0xc))));
        }
        uVar4 = (*param_1)(uVar3,uVar2);
      }
      if (local_8 <= local_10) break;
      local_8 = local_8 + -1;
      local_10 = local_10 + 1;
      if (uVar5 == 0) {
        local_14 = *(uint *)this;
      }
      else {
        local_14 = *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + 4 + uVar5)));
      }
      if (uVar3 == 0) {
        uVar1 = *(uint *)((int)this + 4);
        F_00d30070(this,uVar5,0);
      }
      else {
        uVar1 = *((uint *)GEN_TOP((uVar3 + *(int *)((int)this + 0xc))));
        F_00d30070(this,uVar5,uVar3);
      }
    }
    if (param_2 < local_10 + -1) {
      F_00d30170(this,param_1,param_2,local_10 + -1);
    }
    param_2 = local_8 + 1;
  } while (param_2 < param_3);
  return 0;
}

/* ref: FUN_00d302c0 */
unsigned int F_00d302c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd302c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00d30170(this,param_1,0,*(int *)((int)this + 8) + -1);
  return 0;
}

/* ref: FUN_00d302f0 */
unsigned int F_00d302f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd302f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0x14) = param_6;
  return 0;
}

/* ref: FUN_00d30330 */
uint F_00d30330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd30330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d30350 */
uint F_00d30350(unsigned int gen_a0)
{
  GEN_ENTER(0xd30350u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d30360 */
unsigned int F_00d30360(unsigned int gen_a0)
{
  GEN_ENTER(0xd30360u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1134b34));
  }
  return 0;
}

/* ref: FUN_00d30380 */
uint F_00d30380(void)
{
  GEN_ENTER(0xd30380u, 0u, 0u, 0u, 0u);
  return 0x1134b34;
}

/* ref: FUN_00d303e0 */
unsigned int F_00d303e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd303e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00d30460 */
uint F_00d30460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd30460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d30490 */
uint F_00d30490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd30490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d304c0 */
uint F_00d304c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd304c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d304f0 */
uint F_00d304f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd304f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d30520 */
uint F_00d30520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd30520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d30540 */
unsigned int F_00d30540(unsigned int gen_a0)
{
  GEN_ENTER(0xd30540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00d30560 */
unsigned int F_00d30560(unsigned int gen_a0)
{
  GEN_ENTER(0xd30560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00d30580 */
unsigned int F_00d30580(unsigned int gen_a0)
{
  GEN_ENTER(0xd30580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00d305a0 */
unsigned int F_00d305a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd305a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00d30610 */
unsigned int F_00d30610(unsigned int gen_a0)
{
  GEN_ENTER(0xd30610u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00d30640 */
unsigned int F_00d30640(unsigned int gen_a0)
{
  GEN_ENTER(0xd30640u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00d30670 */
unsigned int F_00d30670(unsigned int gen_a0)
{
  GEN_ENTER(0xd30670u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00d306a0 */
unsigned int F_00d306a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd306a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00d306d0 */
unsigned int F_00d306d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd306d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00d30700 */
uint F_00d30700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd30700u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d30740 */
uint F_00d30740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd30740u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d30780 */
uint F_00d30780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd30780u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d307c0 */
uint F_00d307c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd307c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d30800 */
uint F_00d30800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd30800u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d30840 */
unsigned int F_00d30840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd30840u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d30870 */
unsigned int F_00d30870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd30870u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d308a0 */
unsigned int F_00d308a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd308a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d308d0 */
unsigned int F_00d308d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd308d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d30900 */
unsigned int F_00d30900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd30900u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d30a70 */
uint F_00d30a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd30a70u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d30ae0 */
uint F_00d30ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd30ae0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d30b50 */
uint F_00d30b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd30b50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d30bc0 */
uint F_00d30bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd30bc0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d30c30 */
uint F_00d30c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd30c30u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d30ca0 */
uint F_00d30ca0(unsigned int gen_a0)
{
  GEN_ENTER(0xd30ca0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d30d10 */
uint F_00d30d10(unsigned int gen_a0)
{
  GEN_ENTER(0xd30d10u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d30d80 */
uint F_00d30d80(unsigned int gen_a0)
{
  GEN_ENTER(0xd30d80u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d30df0 */
uint F_00d30df0(unsigned int gen_a0)
{
  GEN_ENTER(0xd30df0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d30e60 */
uint F_00d30e60(unsigned int gen_a0)
{
  GEN_ENTER(0xd30e60u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d30ed0 */
uint F_00d30ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xd30ed0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d30f40 */
uint F_00d30f40(unsigned int gen_a0)
{
  GEN_ENTER(0xd30f40u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d30fb0 */
uint F_00d30fb0(unsigned int gen_a0)
{
  GEN_ENTER(0xd30fb0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d31020 */
uint F_00d31020(unsigned int gen_a0)
{
  GEN_ENTER(0xd31020u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d31090 */
uint F_00d31090(unsigned int gen_a0)
{
  GEN_ENTER(0xd31090u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d31110 */
uint F_00d31110(unsigned int gen_a0)
{
  GEN_ENTER(0xd31110u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00d31140 */
uint F_00d31140(unsigned int gen_a0)
{
  GEN_ENTER(0xd31140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 0x38);
  iVar4 = *(int *)((int)this + 0x3c) + -1;
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  *(undefined4 *)((int)this + 0x3c) = 0;
  if (-1 < *(int *)((int)this + 0x40)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x38),
               *(int *)((int)this + 0x40) * 4);
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0x80000000;
  iVar4 = *(int *)((int)this + 0x30) + -1;
  iVar1 = *(int *)((int)this + 0x2c);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  *(undefined4 *)((int)this + 0x30) = 0;
  if (-1 < *(int *)((int)this + 0x34)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x2c),
               *(int *)((int)this + 0x34) * 4);
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0x80000000;
  iVar4 = *(int *)((int)this + 0x24) + -1;
  iVar1 = *(int *)((int)this + 0x20);
  while (-1 < iVar4) {
    pvVar2 = *(undefined * PTR32 *)(iVar1 + iVar4 * 4);
    if (pvVar2 != (undefined *)0x0) {
      F_00d91a80(pvVar2);
    }
    iVar4 = iVar4 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar4 * 4) = 0;
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  if (-1 < *(int *)((int)this + 0x28)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x20),
               *(int *)((int)this + 0x28) * 4);
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0x80000000;
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

/* ref: hkaAnimationContainer::vf0 */
uint F_00d31330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd31330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d31140(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d31370 */
uint F_00d31370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd31370u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d31380 */
uint F_00d31380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd31380u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1134c04));
  F_00d64fd0(in_ecx + 4,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00d313b0 */
uint F_00d313b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd313b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1134c04));
    uVar1 = F_00d64fd0(param_1 + 4,param_2);
  }
  return uVar1;
}

/* ref: FUN_00d313d0 */
uint F_00d313d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd313d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d313e0 */
uint F_00d313e0(void)
{
  GEN_ENTER(0xd313e0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x80];
  
  F_00d64fd0(((undefined1 *)(gen_frame + 0x0)),0);
  return 0x1134c04;
}

/* ref: FUN_00d31420 */
uint F_00d31420(unsigned int gen_a0)
{
  GEN_ENTER(0xd31420u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkaSkeletonMapper::vf0 */
uint F_00d31450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd31450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d65100(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d314b0 */
uint F_00d314b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd314b0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00d314f0 */
uint F_00d314f0(unsigned int gen_a0)
{
  GEN_ENTER(0xd314f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x2c);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar2 * 4))) = 2;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  *(undefined2 *)((int)this + 0x28) = 0x100;
  return (int)this + 4;
}

/* ref: FUN_00d31520 */
uint F_00d31520(unsigned int gen_a0)
{
  GEN_ENTER(0xd31520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 0x2c);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar2 * 4))) = 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  *(undefined2 *)((int)this + 0x28) = 1;
  return (int)this + 0x10;
}

/* ref: FUN_00d31550 */
uint F_00d31550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd31550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  uint * puVar3;
  byte * pbVar4;
  
  iVar1 = *(int *)((int)this + 0x2c);
  iVar2 = 0;
  if (0 < iVar1) {
    puVar3 = *(uint * PTR32 *)((int)this + 0x1c);
    do {
      if (((*puVar3 & 1) != 0) && ((*puVar3 & 2) != 0)) goto LAB_00d315b9;
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < iVar1);
  }
  if ((*(char *)((int)this + 0x29) != '\0') && (iVar2 = 0, 0 < iVar1)) {
    pbVar4 = *(byte * PTR32 *)((int)this + 0x1c);
    do {
      if ((*pbVar4 & 1) != 0) goto LAB_00d315b9;
      iVar2 = iVar2 + 1;
      pbVar4 = pbVar4 + 4;
    } while (iVar2 < iVar1);
  }
  if ((*(char *)((int)this + 0x28) != '\0') && (iVar2 = 0, 0 < iVar1)) {
    pbVar4 = *(byte * PTR32 *)((int)this + 0x1c);
    do {
      if ((*pbVar4 & 2) != 0) {
LAB_00d315b9: ;
        *param_1 = 0;
        return (uint)param_1;
      }
      iVar2 = iVar2 + 1;
      pbVar4 = pbVar4 + 4;
    } while (iVar2 < iVar1);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00d315d0 */
uint F_00d315d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd315d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)((int)this + 0x2c);
  iVar6 = 0;
  if (0 < iVar1) {
    iVar5 = 0;
    do {
      uVar2 = *((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar6 * 4)));
      uVar4 = uVar2 & 2;
      if ((uVar4 != 0) && ((uVar2 & 1) != 0)) {
LAB_00d31639: ;
        *param_1 = 0;
        return (uint)param_1;
      }
      if (uVar4 == 0) {
        bVar3 = F_00d938f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + iVar5))));
        if (bVar3 == 0) goto LAB_00d31639;
      }
      if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar6 * 4))) & 1) == 0) {
        bVar3 = F_00d938f0(((undefined *)GEN_TOP((*(int *)((int)this + 4) + iVar5))));
        if (bVar3 == 0) goto LAB_00d31639;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x30;
    } while (iVar6 < iVar1);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00d31650 */
unsigned int F_00d31650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd31650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined4 * puVar7;
  
  iVar6 = *param_1;
  iVar1 = *(int *)((int)this + 0x2c);
  if (0 < iVar1) {
    puVar7 = (undefined4 *)(iVar6 + 0x20);
    param_1 = (int *)iVar1;
    do {
      uVar2 = puVar7[-7];
      uVar3 = puVar7[-6];
      uVar4 = puVar7[-5];
      puVar5 = ((undefined4 *)GEN_TOP(((int)puVar7 + *(int *)((int)this + 4) + (-0x20 - iVar6))));
      param_1 = (int *)((int)param_1 + -1);
      *puVar5 = puVar7[-8];
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      uVar2 = puVar7[-3];
      uVar3 = puVar7[-2];
      uVar4 = puVar7[-1];
      puVar5[4] = puVar7[-4];
      puVar5[5] = uVar2;
      puVar5[6] = uVar3;
      puVar5[7] = uVar4;
      uVar2 = puVar7[1];
      uVar3 = puVar7[2];
      uVar4 = puVar7[3];
      puVar5[8] = *puVar7;
      puVar5[9] = uVar2;
      puVar5[10] = uVar3;
      puVar5[0xb] = uVar4;
      puVar7 = puVar7 + 0xc;
    } while (param_1 != (int *)0x0);
  }
  iVar6 = 0;
  if (0 < iVar1) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar6 * 4))) = 2;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  *(undefined2 *)((int)this + 0x28) = 0x100;
  return 0;
}

/* ref: FUN_00d316c0 */
unsigned int F_00d316c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd316c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  int iVar6;
  int iVar7;
  undefined4 * puVar8;
  
  iVar6 = *param_1;
  iVar1 = *(int *)((int)this + 0x2c);
  if (0 < iVar1) {
    iVar7 = iVar1;
    puVar8 = (undefined4 *)(iVar6 + 0x20);
    do {
      uVar2 = puVar8[-7];
      uVar3 = puVar8[-6];
      uVar4 = puVar8[-5];
      puVar5 = ((undefined4 *)GEN_TOP(((int)puVar8 + *(int *)((int)this + 0x10) + (-0x20 - iVar6))));
      iVar7 = iVar7 + -1;
      *puVar5 = puVar8[-8];
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      uVar2 = puVar8[-3];
      uVar3 = puVar8[-2];
      uVar4 = puVar8[-1];
      puVar5[4] = puVar8[-4];
      puVar5[5] = uVar2;
      puVar5[6] = uVar3;
      puVar5[7] = uVar4;
      uVar2 = puVar8[1];
      uVar3 = puVar8[2];
      uVar4 = puVar8[3];
      puVar5[8] = *puVar8;
      puVar5[9] = uVar2;
      puVar5[10] = uVar3;
      puVar5[0xb] = uVar4;
      puVar8 = puVar8 + 0xc;
    } while (iVar7 != 0);
  }
  iVar6 = 0;
  if (0 < iVar1) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar6 * 4))) = 1;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  *(undefined2 *)((int)this + 0x28) = 1;
  return 0;
}

/* ref: FUN_00d31730 */
uint F_00d31730(unsigned int gen_a0)
{
  GEN_ENTER(0xd31730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 * puVar10;
  int local_8;
  
  iVar2 = *(int *)(*(int *)this + 0x40);
  iVar8 = *(int *)(*(int *)this + 0x24);
  iVar3 = *(int *)((int)this + 0x2c);
  if (0 < iVar3) {
    puVar10 = (undefined4 *)(iVar8 + 0x20);
    local_8 = iVar3;
    do {
      uVar4 = puVar10[-7];
      uVar5 = puVar10[-6];
      uVar6 = puVar10[-5];
      iVar7 = *(int *)((int)this + 4) + (-0x20 - iVar8);
      puVar1 = (undefined4 *)(iVar7 + (int)puVar10);
      *puVar1 = puVar10[-8];
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      uVar4 = puVar10[-3];
      uVar5 = puVar10[-2];
      uVar6 = puVar10[-1];
      puVar1 = (undefined4 *)(iVar7 + 0x10 + (int)puVar10);
      *puVar1 = puVar10[-4];
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      uVar4 = puVar10[1];
      uVar5 = puVar10[2];
      uVar6 = puVar10[3];
      puVar1 = (undefined4 *)(iVar7 + 0x20 + (int)puVar10);
      *puVar1 = *puVar10;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      puVar10 = puVar10 + 0xc;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  iVar8 = 0;
  if (0 < iVar3) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar8 * 4))) = 2;
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar3);
  }
  uVar9 = 0;
  *(undefined2 *)((int)this + 0x28) = 0x100;
  if (3 < iVar2) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x30) + uVar9 * 4))) = 0;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x30) + 4 + uVar9 * 4))) = 0;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x30) + 8 + uVar9 * 4))) = 0;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x30) + 0xc + uVar9 * 4))) = 0;
      uVar9 = uVar9 + 4;
    } while ((int)uVar9 < iVar2 + -3);
  }
  for (; (int)uVar9 < iVar2; uVar9 = uVar9 + 1) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x30) + uVar9 * 4))) = 0;
  }
  return uVar9;
}

/* ref: FUN_00d31800 */
uint F_00d31800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd31800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 * puVar6;
  
  iVar2 = *(int *)(*(int *)this + 0x1c);
  *(int *)((int)this + 0x2c) = iVar2;
  uVar3 = *(uint *)((int)this + 0x18) & 0x3fffffff;
  if ((int)uVar3 < iVar2) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar2) {
      iVar4 = iVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x10,iVar4,0x30);
  }
  *(int *)((int)this + 0x14) = iVar2;
  uVar3 = *(uint *)((int)this + 0xc) & 0x3fffffff;
  if ((int)uVar3 < iVar2) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar2) {
      iVar4 = iVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 4,iVar4,0x30);
  }
  *(int *)((int)this + 8) = iVar2;
  uVar3 = *(uint *)((int)this + 0x24) & 0x3fffffff;
  if ((int)uVar3 < iVar2) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar2) {
      iVar4 = iVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x1c,iVar4,4);
  }
  *(int *)((int)this + 0x20) = iVar2;
  if (param_1 == 1) {
    F_00d31650(this,param_3);
  }
  else {
    F_00d316c0(this,param_3);
  }
  piVar1 = (int *)((int)this + 0x30);
  uVar3 = *(int *)(*(int *)this + 0x40) + 3U & 0xfffffffc;
  if ((int)(*(uint *)((int)this + 0x38) & 0x3fffffff) < (int)uVar3) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar1,uVar3,4);
  }
  iVar2 = *(int *)(*(int *)this + 0x40);
  uVar3 = *(uint *)((int)this + 0x38) & 0x3fffffff;
  if ((int)uVar3 < iVar2) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar2) {
      iVar4 = iVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar1,iVar4,4);
  }
  uVar3 = *(uint *)((int)this + 0x34);
  iVar5 = iVar2 - uVar3;
  iVar4 = uVar3 * 4;
  if (0 < iVar5) {
    uVar3 = 0;
    puVar6 = (undefined4 *)(*piVar1 + iVar4);
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
  }
  *(int *)((int)this + 0x34) = iVar2;
  return uVar3;
}

/* ref: FUN_00d31930 */
uint F_00d31930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd31930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  float * pfVar3;
  uint * puVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  float * pfVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  
  iVar7 = *(int *)((int)this + 0x1c);
  iVar21 = param_1 * 4;
  bVar5 = *(byte *)(iVar21 + iVar7);
  iVar20 = param_1;
  do {
    if ((bVar5 & 2) == 0) {
LAB_00d319bc: ;
      iVar20 = iVar20 + 1;
      if (iVar20 <= param_1) {
        iVar21 = iVar20 * 0x30;
        do {
          if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar20 * 4))) & 8) != 0) {
            iVar7 = *(int *)((int)this + 0x10);
            pfVar3 = ((float *)GEN_TOP((*(int *)((int)this + 4) + iVar21)));
            fVar8 = *pfVar3;
            fVar9 = pfVar3[1];
            fVar10 = pfVar3[2];
            fVar28 = pfVar3[3];
            iVar19 = *(int *)((int)this + 4) + iVar21;
            iVar17 = *((short *)GEN_TOP((*(int *)(*(int *)this + 0xc) + iVar20 * 2))) * 0x30;
            pfVar3 = (float *)(iVar17 + 0x10 + iVar7);
            fVar27 = *pfVar3;
            fVar11 = pfVar3[1];
            fVar12 = pfVar3[2];
            fVar13 = pfVar3[3];
            fVar22 = fVar27 * fVar8;
            fVar23 = fVar11 * fVar9;
            fVar24 = fVar12 * fVar10;
            pfVar18 = (float *)(iVar17 + iVar7);
            fVar25 = (((fVar23 + fVar22) + fVar24) * fVar27 +
                     (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) + fVar13 * fVar13)
                     * fVar8) + (fVar10 * fVar11 - fVar9 * fVar12) * fVar13;
            fVar26 = (((fVar23 + fVar22) + fVar24) * fVar11 +
                     (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) + fVar13 * fVar13)
                     * fVar9) + (fVar8 * fVar12 - fVar10 * fVar27) * fVar13;
            fVar27 = (((fVar23 + fVar22) + fVar24) * fVar12 +
                     (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) + fVar13 * fVar13)
                     * fVar10) + (fVar9 * fVar27 - fVar8 * fVar11) * fVar13;
            fVar28 = (((fVar23 + fVar22) + fVar24) * fVar13 +
                     (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) + fVar13 * fVar13)
                     * fVar28) + (fVar28 * fVar13 - fVar28 * fVar13) * fVar13;
            fVar8 = pfVar18[1];
            fVar9 = pfVar18[2];
            fVar10 = pfVar18[3];
            pfVar3 = (float *)(iVar21 + iVar7);
            *pfVar3 = (fVar25 + fVar25) + *pfVar18;
            pfVar3[1] = (fVar26 + fVar26) + fVar8;
            pfVar3[2] = (fVar27 + fVar27) + fVar9;
            pfVar3[3] = (fVar28 + fVar28) + fVar10;
            fVar8 = *(float *)(iVar19 + 0x1c);
            local_30 = gen_bits2f((uint)*(undefined8 *)(pfVar18 + 4));
            fStack_2c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar18 + 4) >> 0x20));
            fStack_28 = gen_bits2f((uint)*(undefined8 *)(pfVar18 + 6));
            local_40 = gen_bits2f((uint)*(undefined8 *)(iVar19 + 0x10));
            fStack_3c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(iVar19 + 0x10) >> 0x20));
            fStack_38 = gen_bits2f((uint)*(undefined8 *)(iVar19 + 0x18));
            fVar9 = pfVar18[7];
            pfVar3 = (float *)(iVar21 + 0x10 + iVar7);
            *pfVar3 = ((fStack_2c * fStack_38 - fStack_28 * fStack_3c) + local_40 * fVar9) +
                      local_30 * fVar8;
            pfVar3[1] = ((fStack_28 * local_40 - local_30 * fStack_38) + fStack_3c * fVar9) +
                        fStack_2c * fVar8;
            pfVar3[2] = ((local_30 * fStack_3c - fStack_2c * local_40) + fStack_38 * fVar9) +
                        fStack_28 * fVar8;
            pfVar3[3] = fVar8 * fVar9 -
                        ((fStack_2c * fStack_3c + local_30 * local_40) + fStack_28 * fStack_38);
            fVar8 = pfVar18[9];
            fVar9 = pfVar18[10];
            fVar10 = pfVar18[0xb];
            fVar28 = *(float *)(iVar19 + 0x24);
            fVar27 = *(float *)(iVar19 + 0x28);
            fVar11 = *(float *)(iVar19 + 0x2c);
            pfVar3 = (float *)(iVar21 + 0x20 + iVar7);
            *pfVar3 = pfVar18[8] * *(float *)(iVar19 + 0x20);
            pfVar3[1] = fVar8 * fVar28;
            pfVar3[2] = fVar9 * fVar27;
            pfVar3[3] = fVar10 * fVar11;
            puVar4 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar20 * 4)));
            *puVar4 = *puVar4 & 0xfffffff5;
          }
          iVar20 = iVar20 + 1;
          iVar21 = iVar21 + 0x30;
        } while (iVar20 <= param_1);
      }
      return param_1 * 0x30 + *(int *)((int)this + 0x10);
    }
    sVar6 = *((short *)GEN_TOP((*(int *)(*(int *)this + 0xc) + iVar20 * 2)));
    if (sVar6 == -1) {
      iVar21 = *(int *)((int)this + 4);
      iVar7 = *(int *)((int)this + 0x10);
      puVar1 = (undefined4 *)(iVar21 + iVar20 * 0x30);
      uVar14 = puVar1[1];
      uVar15 = puVar1[2];
      uVar16 = puVar1[3];
      puVar2 = (undefined4 *)(iVar7 + iVar20 * 0x30);
      *puVar2 = *puVar1;
      puVar2[1] = uVar14;
      puVar2[2] = uVar15;
      puVar2[3] = uVar16;
      puVar1 = (undefined4 *)(iVar21 + 0x10 + iVar20 * 0x30);
      uVar14 = puVar1[1];
      uVar15 = puVar1[2];
      uVar16 = puVar1[3];
      puVar2 = (undefined4 *)(iVar7 + 0x10 + iVar20 * 0x30);
      *puVar2 = *puVar1;
      puVar2[1] = uVar14;
      puVar2[2] = uVar15;
      puVar2[3] = uVar16;
      puVar1 = (undefined4 *)(iVar21 + 0x20 + iVar20 * 0x30);
      uVar14 = puVar1[1];
      uVar15 = puVar1[2];
      uVar16 = puVar1[3];
      puVar2 = (undefined4 *)(iVar7 + 0x20 + iVar20 * 0x30);
      *puVar2 = *puVar1;
      puVar2[1] = uVar14;
      puVar2[2] = uVar15;
      puVar2[3] = uVar16;
      puVar4 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar20 * 4)));
      *puVar4 = *puVar4 & 0xfffffffd;
      goto LAB_00d319bc;
    }
    *(uint *)(iVar7 + iVar21) = *(uint *)(iVar7 + iVar21) | 8;
    iVar7 = *(int *)((int)this + 0x1c);
    iVar20 = (int)sVar6;
    bVar5 = *(byte *)(iVar7 + iVar20 * 4);
    iVar21 = iVar20 * 4;
  } while( true );
}

/* ref: FUN_00d31b70 */
unsigned int F_00d31b70(unsigned int gen_a0)
{
  GEN_ENTER(0xd31b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  float * pfVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  float * pfVar13;
  float * pfVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  int local_14;
  
  if (*(char *)((int)this + 0x28) == '\0') {
    iVar4 = *(int *)((int)this + 0x2c);
    local_14 = 0;
    if (0 < iVar4) {
      iVar15 = 0;
      do {
        if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x1c) + local_14 * 4))) & 2) != 0) {
          sVar3 = *((short *)GEN_TOP((*(int *)(*(int *)this + 0xc) + local_14 * 2)));
          pfVar14 = ((float *)GEN_TOP((*(int *)((int)this + 4) + iVar15)));
          if (sVar3 == -1) {
            iVar5 = *(int *)((int)this + 0x10);
            fVar6 = pfVar14[1];
            fVar7 = pfVar14[2];
            fVar8 = pfVar14[3];
            pfVar2 = (float *)(iVar5 + iVar15);
            *pfVar2 = *pfVar14;
            pfVar2[1] = fVar6;
            pfVar2[2] = fVar7;
            pfVar2[3] = fVar8;
            fVar6 = pfVar14[5];
            fVar7 = pfVar14[6];
            fVar8 = pfVar14[7];
            pfVar2 = (float *)(iVar5 + 0x10 + iVar15);
            *pfVar2 = pfVar14[4];
            pfVar2[1] = fVar6;
            pfVar2[2] = fVar7;
            pfVar2[3] = fVar8;
            fVar6 = pfVar14[9];
            fVar7 = pfVar14[10];
            fVar8 = pfVar14[0xb];
            pfVar2 = (float *)(iVar5 + 0x20 + iVar15);
            *pfVar2 = pfVar14[8];
            pfVar2[1] = fVar6;
            pfVar2[2] = fVar7;
            pfVar2[3] = fVar8;
          }
          else {
            iVar5 = *(int *)((int)this + 0x10);
            fVar6 = *pfVar14;
            fVar7 = pfVar14[1];
            fVar8 = pfVar14[2];
            fVar22 = pfVar14[3];
            iVar12 = sVar3 * 0x30;
            pfVar2 = (float *)(iVar12 + 0x10 + iVar5);
            fVar21 = *pfVar2;
            fVar9 = pfVar2[1];
            fVar10 = pfVar2[2];
            fVar11 = pfVar2[3];
            pfVar13 = (float *)(iVar12 + iVar5);
            fVar16 = fVar21 * fVar6;
            fVar17 = fVar9 * fVar7;
            fVar18 = fVar10 * fVar8;
            fVar19 = (((fVar17 + fVar16) + fVar18) * fVar21 +
                     (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) + fVar11 * fVar11)
                     * fVar6) + (fVar9 * fVar8 - fVar10 * fVar7) * fVar11;
            fVar20 = (((fVar17 + fVar16) + fVar18) * fVar9 +
                     (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) + fVar11 * fVar11)
                     * fVar7) + (fVar10 * fVar6 - fVar21 * fVar8) * fVar11;
            fVar21 = (((fVar17 + fVar16) + fVar18) * fVar10 +
                     (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) + fVar11 * fVar11)
                     * fVar8) + (fVar21 * fVar7 - fVar9 * fVar6) * fVar11;
            fVar22 = (((fVar17 + fVar16) + fVar18) * fVar11 +
                     (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) + fVar11 * fVar11)
                     * fVar22) + (fVar11 * fVar22 - fVar11 * fVar22) * fVar11;
            fVar6 = pfVar13[1];
            fVar7 = pfVar13[2];
            fVar8 = pfVar13[3];
            pfVar2 = (float *)(iVar15 + iVar5);
            *pfVar2 = (fVar19 + fVar19) + *pfVar13;
            pfVar2[1] = (fVar20 + fVar20) + fVar6;
            pfVar2[2] = (fVar21 + fVar21) + fVar7;
            pfVar2[3] = (fVar22 + fVar22) + fVar8;
            fVar6 = pfVar14[7];
            local_30 = gen_bits2f((uint)*(undefined8 *)(pfVar13 + 4));
            fStack_2c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar13 + 4) >> 0x20));
            fStack_28 = gen_bits2f((uint)*(undefined8 *)(pfVar13 + 6));
            local_40 = gen_bits2f((uint)*(undefined8 *)(pfVar14 + 4));
            fStack_3c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar14 + 4) >> 0x20));
            fStack_38 = gen_bits2f((uint)*(undefined8 *)(pfVar14 + 6));
            fVar7 = pfVar13[7];
            pfVar2 = (float *)(iVar15 + 0x10 + iVar5);
            *pfVar2 = ((fStack_2c * fStack_38 - fStack_28 * fStack_3c) + local_40 * fVar7) +
                      local_30 * fVar6;
            pfVar2[1] = ((fStack_28 * local_40 - local_30 * fStack_38) + fStack_3c * fVar7) +
                        fStack_2c * fVar6;
            pfVar2[2] = ((local_30 * fStack_3c - fStack_2c * local_40) + fStack_38 * fVar7) +
                        fStack_28 * fVar6;
            pfVar2[3] = fVar6 * fVar7 -
                        ((fStack_2c * fStack_3c + local_30 * local_40) + fStack_28 * fStack_38);
            fVar6 = pfVar13[9];
            fVar7 = pfVar13[10];
            fVar8 = pfVar13[0xb];
            fVar22 = pfVar14[9];
            fVar21 = pfVar14[10];
            fVar9 = pfVar14[0xb];
            pfVar2 = (float *)(iVar15 + 0x20 + iVar5);
            *pfVar2 = pfVar13[8] * pfVar14[8];
            pfVar2[1] = fVar6 * fVar22;
            pfVar2[2] = fVar7 * fVar21;
            pfVar2[3] = fVar8 * fVar9;
          }
          puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + local_14 * 4)));
          *puVar1 = *puVar1 & 0xfffffffd;
        }
        local_14 = local_14 + 1;
        iVar15 = iVar15 + 0x30;
      } while (local_14 < iVar4);
    }
    *(undefined1 *)((int)this + 0x28) = 1;
  }
  return 0;
}

/* ref: FUN_00d31d60 */
uint F_00d31d60(unsigned int gen_a0)
{
  GEN_ENTER(0xd31d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  
  F_00d31b70(this);
  uVar1 = F_00d31520(this_00);
  return uVar1;
}

/* ref: FUN_00d31d70 */
unsigned int F_00d31d70(unsigned int gen_a0)
{
  GEN_ENTER(0xd31d70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint * puVar2;
  short sVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float * pfVar11;
  int iVar12;
  undefined4 * puVar13;
  float * pfVar14;
  int local_c;
  int local_8;
  
  iVar4 = *(int *)((int)this + 0x2c);
  F_00d31b70(this);
  local_c = 0;
  if (0 < iVar4) {
    local_8 = 0;
    do {
      iVar12 = *(int *)this;
      sVar3 = *((short *)GEN_TOP((*(int *)(iVar12 + 0xc) + local_c * 2)));
      if (*((char *)GEN_TOP((*(int *)(iVar12 + 0x18) + 4 + local_c * 8))) == '\0') {
        if ((sVar3 != -1) && ((*((byte *)GEN_TOP((*(int *)((int)this + 0x1c) + sVar3 * 4))) & 4) != 0)) {
          puVar2 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + local_c * 4)));
          *puVar2 = *puVar2 | 1;
        }
      }
      else {
        puVar13 = ((undefined4 *)GEN_TOP((*(int *)(iVar12 + 0x24) + local_8)));
        if (sVar3 == -1) {
          uVar8 = puVar13[1];
          uVar9 = puVar13[2];
          uVar10 = puVar13[3];
          puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + local_8)));
          *puVar1 = *puVar13;
          puVar1[1] = uVar8;
          puVar1[2] = uVar9;
          puVar1[3] = uVar10;
        }
        else {
          pfVar14 = ((float *)GEN_TOP((sVar3 * 0x30 + *(int *)((int)this + 0x10))));
          F_00d950d0(((undefined *)GEN_TOP((local_8 + *(int *)((int)this + 0x10)))),pfVar14 + 4,puVar13);
          pfVar11 = ((float *)GEN_TOP((*(int *)((int)this + 0x10) + local_8)));
          fVar5 = pfVar14[1];
          fVar6 = pfVar14[2];
          fVar7 = pfVar14[3];
          *pfVar11 = *pfVar14 + *pfVar11;
          pfVar11[1] = fVar5 + pfVar11[1];
          pfVar11[2] = fVar6 + pfVar11[2];
          pfVar11[3] = fVar7 + pfVar11[3];
        }
        puVar2 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + local_c * 4)));
        *puVar2 = *puVar2 | 1;
        puVar2 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + local_c * 4)));
        *puVar2 = *puVar2 | 4;
      }
      local_8 = local_8 + 0x30;
      local_c = local_c + 1;
    } while (local_c < iVar4);
  }
  iVar4 = *(int *)((int)this + 0x20);
  iVar12 = 0;
  if (0 < iVar4) {
    do {
      puVar2 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar12 * 4)));
      *puVar2 = *puVar2 & 0xffffffe3;
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar4);
  }
  return 0;
}

/* ref: FUN_00d31eb0 */
uint F_00d31eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd31eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x80000000;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0x80000000;
  F_00d31800(this,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_00d31f00 */
uint F_00d31f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd31f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x80000000;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = param_3;
  (*(uint *)(gen_frame + 0x4)) = param_4;
  *(undefined4 *)((int)this + 0x38) = 0x80000000;
  (*(uint *)(gen_frame + 0x8)) = param_4 | 0x80000000;
  F_00d31800(this,param_1,param_2,&(*(undefined4 *)(gen_frame + 0x0)));
  return (uint)this;
}

/* ref: FUN_00d31f70 */
unsigned int F_00d31f70(unsigned int gen_a0)
{
  GEN_ENTER(0xd31f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float * pfVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint * puVar4;
  float * pfVar5;
  undefined1 auVar6 [16];
  short sVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar24 [16];
  
  (*(int * PTR32 *)(gen_frame + 0x60)) = this;
  if (*(char *)((int)this + 0x29) == '\0') {
    iVar15 = *(int *)((int)this + 0x2c);
    (*(int *)(gen_frame + 0x5c)) = iVar15;
    (*(int *)(gen_frame + 0x68)) = 0;
    if (0 < iVar15) {
      iVar16 = 0;
      do {
        if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x1c) + (*(int *)(gen_frame + 0x68)) * 4))) & 1) != 0) {
          sVar7 = *((short *)GEN_TOP((*(int *)(*(int *)this + 0xc) + (*(int *)(gen_frame + 0x68)) * 2)));
          (*(int *)(gen_frame + 0x64)) = *(int *)((int)this + 0x10);
          if (sVar7 == -1) {
            iVar15 = *(int *)((int)this + 4);
            puVar2 = (undefined4 *)(iVar16 + (*(int *)(gen_frame + 0x64)));
            uVar10 = puVar2[1];
            uVar11 = puVar2[2];
            uVar12 = puVar2[3];
            puVar3 = (undefined4 *)(iVar15 + iVar16);
            *puVar3 = *puVar2;
            puVar3[1] = uVar10;
            puVar3[2] = uVar11;
            puVar3[3] = uVar12;
            puVar2 = (undefined4 *)(iVar16 + 0x10 + (*(int *)(gen_frame + 0x64)));
            uVar10 = puVar2[1];
            uVar11 = puVar2[2];
            uVar12 = puVar2[3];
            puVar3 = (undefined4 *)(iVar15 + 0x10 + iVar16);
            *puVar3 = *puVar2;
            puVar3[1] = uVar10;
            puVar3[2] = uVar11;
            puVar3[3] = uVar12;
            puVar2 = (undefined4 *)(iVar16 + 0x20 + (*(int *)(gen_frame + 0x64)));
            uVar10 = puVar2[1];
            uVar11 = puVar2[2];
            uVar12 = puVar2[3];
            puVar3 = (undefined4 *)(iVar15 + 0x20 + iVar16);
            *puVar3 = *puVar2;
            puVar3[1] = uVar10;
            puVar3[2] = uVar11;
            puVar3[3] = uVar12;
          }
          else {
            iVar15 = (int)sVar7;
            if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar15 * 4))) & 2) == 0) {
              (*(uint *)(gen_frame + 0x6c)) = iVar15 * 0x30 + (*(int *)(gen_frame + 0x64));
            }
            else {
              (*(uint *)(gen_frame + 0x6c)) = F_00d31930(this,iVar15);
              this = ((int *)(uint)(this));
            }
            iVar15 = *(int *)((int)this + 4);
            F_00d95160(&(*(float *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x6c)) + 0x10,(*(uint *)(gen_frame + 0x6c)));
            memcpy(&(auVar6), &(*(gen_v16 *)((*(uint *)(gen_frame + 0x6c)) + 0x20)), sizeof(*(gen_v16 *)((*(uint *)(gen_frame + 0x6c)) + 0x20)) < sizeof(auVar6) ? sizeof(*(gen_v16 *)((*(uint *)(gen_frame + 0x6c)) + 0x20)) : sizeof(auVar6));
            gen_rcpps(&(auVar24), &(in_XMM3), &(auVar6));
            (*(float *)(gen_frame + 0x20)) = gen_bits2f(*(uint *)&REFG(undefined, 0x10abc20) &
                                  (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1134c40) -
                                                    (*(float *)((char *)&auVar6 + 0)) * (*(float *)((char *)&auVar24 + 0))) * (*(float *)((char *)&auVar24 + 0))
                                                   ));
            (*(float *)(gen_frame + 0x24)) = gen_bits2f(*(uint *)&REFG(undefined, 0x10abc24) &
                                   (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1134c44) -
                                                     (*(float *)((char *)&auVar6 + 4)) * (*(float *)((char *)&auVar24 + 4))) *
                                                     (*(float *)((char *)&auVar24 + 4))));
            (*(float *)(gen_frame + 0x28)) = gen_bits2f(*(uint *)&REFG(undefined, 0x10abc28) &
                                   (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1134c48) -
                                                     (*(float *)((char *)&auVar6 + 8)) * (*(float *)((char *)&auVar24 + 8))) *
                                                     (*(float *)((char *)&auVar24 + 8))));
            (*(float *)(gen_frame + 0x2c)) = gen_bits2f(*(uint *)&REFG(undefined, 0x10abc2c) &
                                   (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1134c4c) -
                                                     (*(float *)((char *)&auVar6 + 12)) * (*(float *)((char *)&auVar24 + 12))) *
                                                     (*(float *)((char *)&auVar24 + 12))));
            (*(float *)(gen_frame + 0x0)) = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9c0) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x0))));
            (*(float *)(gen_frame + 0x4)) = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9c4) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x4))));
            (*(float *)(gen_frame + 0x8)) = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9c8) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x8))));
            (*(float *)(gen_frame + 0xc)) = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9cc) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0xc))));
            (*(float *)(gen_frame + 0x34)) = gen_bits2f(*(uint *)((*(uint *)(gen_frame + 0x6c)) + 0x10) ^ *(uint *)&REFG(undefined, 0x10ab9b0));
            (*(float *)(gen_frame + 0x38)) = gen_bits2f(*(uint *)((*(uint *)(gen_frame + 0x6c)) + 0x14) ^ *(uint *)&REFG(undefined, 0x10ab9b4));
            (*(float *)(gen_frame + 0x30)) = gen_bits2f(*(uint *)((*(uint *)(gen_frame + 0x6c)) + 0x18) ^ *(uint *)&REFG(undefined, 0x10ab9b8));
            (*(float *)(gen_frame + 0x3c)) = gen_bits2f(*(uint *)((*(uint *)(gen_frame + 0x6c)) + 0x1c) ^ *(uint *)&REFG(undefined, 0x10ab9bc));
            pfVar1 = (float *)(iVar16 + (*(int *)(gen_frame + 0x64)));
            fVar22 = *pfVar1;
            fVar23 = pfVar1[1];
            fVar8 = pfVar1[2];
            fVar9 = pfVar1[3];
            fVar17 = fVar22 * (*(float *)(gen_frame + 0x34));
            fVar18 = fVar23 * (*(float *)(gen_frame + 0x38));
            fVar19 = fVar8 * (*(float *)(gen_frame + 0x30));
            (*(undefined4 *)((char *)&in_XMM3 + 4)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x3c)));
            (*(undefined4 *)((char *)&in_XMM3 + 0)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x3c)));
            (*(undefined4 *)((char *)&in_XMM3 + 8)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x3c)));
            (*(undefined4 *)((char *)&in_XMM3 + 12)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x3c)));
            fVar20 = (((fVar18 + fVar17) + fVar19) * (*(float *)(gen_frame + 0x34)) +
                     ((*(float *)(gen_frame + 0x3c)) * (*(float *)(gen_frame + 0x3c)) +
                     gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) * fVar22) +
                     (fVar8 * (*(float *)(gen_frame + 0x38)) - fVar23 * (*(float *)(gen_frame + 0x30))) * (*(float *)(gen_frame + 0x3c));
            fVar21 = (((fVar18 + fVar17) + fVar19) * (*(float *)(gen_frame + 0x38)) +
                     ((*(float *)(gen_frame + 0x3c)) * (*(float *)(gen_frame + 0x3c)) +
                     gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) * fVar23) +
                     (fVar22 * (*(float *)(gen_frame + 0x30)) - fVar8 * (*(float *)(gen_frame + 0x34))) * (*(float *)(gen_frame + 0x3c));
            fVar22 = (((fVar18 + fVar17) + fVar19) * (*(float *)(gen_frame + 0x30)) +
                     ((*(float *)(gen_frame + 0x3c)) * (*(float *)(gen_frame + 0x3c)) +
                     gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) * fVar8) +
                     (fVar23 * (*(float *)(gen_frame + 0x34)) - fVar22 * (*(float *)(gen_frame + 0x38))) * (*(float *)(gen_frame + 0x3c));
            fVar23 = (((fVar18 + fVar17) + fVar19) * (*(float *)(gen_frame + 0x3c)) +
                     ((*(float *)(gen_frame + 0x3c)) * (*(float *)(gen_frame + 0x3c)) +
                     gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) * fVar9) +
                     (fVar9 * (*(float *)(gen_frame + 0x3c)) - fVar9 * (*(float *)(gen_frame + 0x3c))) * (*(float *)(gen_frame + 0x3c));
            pfVar1 = (float *)(iVar15 + iVar16);
            *pfVar1 = (fVar20 + fVar20) + (*(float *)(gen_frame + 0x0));
            pfVar1[1] = (fVar21 + fVar21) + (*(float *)(gen_frame + 0x4));
            pfVar1[2] = (fVar22 + fVar22) + (*(float *)(gen_frame + 0x8));
            pfVar1[3] = (fVar23 + fVar23) + (*(float *)(gen_frame + 0xc));
            (*(undefined8 *)(gen_frame + 0x40)) = *(undefined8 *)(iVar16 + 0x10 + (*(int *)(gen_frame + 0x64)));
            fVar22 = *(float *)(iVar16 + (*(int *)(gen_frame + 0x64)) + 0x1c);
            uVar13 = (*(undefined8 *)(gen_frame + 0x40));
            (*(undefined8 *)(gen_frame + 0x48)) = *(undefined8 *)(iVar16 + 0x18 + (*(int *)(gen_frame + 0x64)));
            uVar14 = (*(undefined8 *)(gen_frame + 0x48));
            (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 4)) = gen_bits2f((uint)((ulonglong)(*(undefined8 *)(gen_frame + 0x40)) >> 0x20));
            pfVar1 = (float *)(iVar15 + 0x10 + iVar16);
            *pfVar1 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 0)) * (*(float *)(gen_frame + 0x38)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 4)) * (*(float *)(gen_frame + 0x30))) +
                      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 0)) * (*(float *)(gen_frame + 0x3c))) + fVar22 * (*(float *)(gen_frame + 0x34));
            pfVar1[1] = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 0)) * (*(float *)(gen_frame + 0x30)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 0)) * (*(float *)(gen_frame + 0x34))) +
                        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 4)) * (*(float *)(gen_frame + 0x3c))) + fVar22 * (*(float *)(gen_frame + 0x38));
            pfVar1[2] = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 4)) * (*(float *)(gen_frame + 0x34)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 0)) * (*(float *)(gen_frame + 0x38))) +
                        (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 0)) * (*(float *)(gen_frame + 0x3c))) + fVar22 * (*(float *)(gen_frame + 0x30));
            pfVar1[3] = fVar22 * (*(float *)(gen_frame + 0x3c)) -
                        (((*(float *)(gen_frame + 0x38)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 4)) + (*(float *)(gen_frame + 0x34)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 0))) +
                        (*(float *)(gen_frame + 0x30)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 0)));
            pfVar1 = (float *)(iVar16 + 0x20 + (*(int *)(gen_frame + 0x64)));
            fVar22 = pfVar1[1];
            fVar23 = pfVar1[2];
            fVar8 = pfVar1[3];
            pfVar5 = (float *)(iVar15 + 0x20 + iVar16);
            *pfVar5 = *pfVar1 * (*(float *)(gen_frame + 0x20));
            pfVar5[1] = fVar22 * (*(float *)(gen_frame + 0x24));
            pfVar5[2] = fVar23 * (*(float *)(gen_frame + 0x28));
            pfVar5[3] = fVar8 * (*(float *)(gen_frame + 0x2c));
            this = (*(int * PTR32 *)(gen_frame + 0x60));
            (*(undefined8 *)(gen_frame + 0x40)) = uVar13;
            (*(undefined8 *)(gen_frame + 0x48)) = uVar14;
          }
          puVar4 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + (*(int *)(gen_frame + 0x68)) * 4)));
          *puVar4 = *puVar4 & 0xfffffffe;
          iVar15 = (*(int *)(gen_frame + 0x5c));
        }
        (*(int *)(gen_frame + 0x68)) = (*(int *)(gen_frame + 0x68)) + 1;
        iVar16 = iVar16 + 0x30;
      } while ((*(int *)(gen_frame + 0x68)) < iVar15);
    }
    *(undefined1 *)((int)this + 0x29) = 1;
  }
  return 0;
}

/* ref: FUN_00d321b0 */
uint F_00d321b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd321b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  
  F_00d31b70(this);
  return ((int)(uint)(this)) + 0x10;
}

/* ref: FUN_00d32670 */
uint F_00d32670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd32670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  uint * puVar1;
  float * pfVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined1 auVar5 [16];
  ushort uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  undefined4 * puVar16;
  int iVar17;
  float * pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar26 [16];
  
  if (param_2 == 0) {
    iVar15 = *(int *)(*(int *)this + 0x1c);
    iVar17 = param_1 + 1;
    (*(int *)(gen_frame + 0x64)) = iVar15;
    if (iVar17 < iVar15) {
      do {
        if (*((short *)GEN_TOP((*(int *)(*(int *)this + 0xc) + iVar17 * 2))) == param_1) {
          if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar17 * 4))) & 2) != 0) {
            F_00d31930(this,iVar17);
            iVar15 = (*(int *)(gen_frame + 0x64));
          }
          *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar17 * 4))) = 1;
          *(undefined1 *)((int)this + 0x29) = 0;
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < iVar15);
    }
  }
  else {
    (*(int *)(gen_frame + 0x5c)) = *(int *)(*(int *)this + 0x1c);
    puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4)));
    *puVar1 = *puVar1 | 4;
    (*(int *)(gen_frame + 0x64)) = param_1 + 1;
    iVar17 = param_1;
    if ((*(int *)(gen_frame + 0x64)) < (*(int *)(gen_frame + 0x5c))) {
      (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x64)) * 0x30;
      do {
        uVar6 = *((ushort *)GEN_TOP((*(int *)(*(int *)this + 0xc) + (*(int *)(gen_frame + 0x64)) * 2)));
        (*(uint *)(gen_frame + 0x68)) = (uint)uVar6;
        if ((uVar6 != 0xffff) &&
           ((*((byte *)GEN_TOP((*(int *)((int)this + 0x1c) + (short)uVar6 * 4))) & 4) != 0)) {
          if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x1c) + (*(int *)(gen_frame + 0x64)) * 4))) & 1) != 0) {
            (*(int *)(gen_frame + 0x60)) = *(int *)((int)this + 0x10);
            if (uVar6 == 0xffff) {
              puVar3 = (undefined4 *)((*(int *)(gen_frame + 0x60)) + (*(int *)(gen_frame + 0x6c)));
              uVar10 = puVar3[1];
              uVar11 = puVar3[2];
              uVar12 = puVar3[3];
              puVar16 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + (*(int *)(gen_frame + 0x6c)))));
              puVar4 = (undefined4 *)((*(int *)(gen_frame + 0x60)) + 0x10 + (*(int *)(gen_frame + 0x6c)));
              *puVar16 = *puVar3;
              puVar16[1] = uVar10;
              puVar16[2] = uVar11;
              puVar16[3] = uVar12;
              uVar10 = puVar4[1];
              uVar11 = puVar4[2];
              uVar12 = puVar4[3];
              puVar16[4] = *puVar4;
              puVar16[5] = uVar10;
              puVar16[6] = uVar11;
              puVar16[7] = uVar12;
              puVar3 = (undefined4 *)((*(int *)(gen_frame + 0x60)) + 0x20 + (*(int *)(gen_frame + 0x6c)));
              uVar10 = puVar3[1];
              uVar11 = puVar3[2];
              uVar12 = puVar3[3];
              puVar16[8] = *puVar3;
              puVar16[9] = uVar10;
              puVar16[10] = uVar11;
              puVar16[0xb] = uVar12;
            }
            else {
              iVar15 = (int)(short)uVar6;
              if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar15 * 4))) & 2) == 0) {
                (*(uint *)(gen_frame + 0x68)) = iVar15 * 0x30 + (*(int *)(gen_frame + 0x60));
              }
              else {
                (*(uint *)(gen_frame + 0x68)) = F_00d31930(this,iVar15);
              }
              pfVar18 = ((float *)GEN_TOP((*(int *)((int)this + 4) + (*(int *)(gen_frame + 0x6c)))));
              F_00d95160(&(*(float *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x68)) + 0x10,(*(uint *)(gen_frame + 0x68)));
              memcpy(&(auVar5), &(*(gen_v16 *)((*(uint *)(gen_frame + 0x68)) + 0x20)), sizeof(*(gen_v16 *)((*(uint *)(gen_frame + 0x68)) + 0x20)) < sizeof(auVar5) ? sizeof(*(gen_v16 *)((*(uint *)(gen_frame + 0x68)) + 0x20)) : sizeof(auVar5));
              gen_rcpps(&(auVar26), &(in_XMM3), &(auVar5));
              (*(float *)(gen_frame + 0x20)) = gen_bits2f(*(uint *)&REFG(undefined, 0x10abc20) &
                                    (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1134c40) -
                                                      (*(float *)((char *)&auVar5 + 0)) * (*(float *)((char *)&auVar26 + 0))) *
                                                      (*(float *)((char *)&auVar26 + 0))));
              (*(float *)(gen_frame + 0x24)) = gen_bits2f(*(uint *)&REFG(undefined, 0x10abc24) &
                                     (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1134c44) -
                                                       (*(float *)((char *)&auVar5 + 4)) * (*(float *)((char *)&auVar26 + 4))) *
                                                       (*(float *)((char *)&auVar26 + 4))));
              (*(float *)(gen_frame + 0x28)) = gen_bits2f(*(uint *)&REFG(undefined, 0x10abc28) &
                                     (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1134c48) -
                                                       (*(float *)((char *)&auVar5 + 8)) * (*(float *)((char *)&auVar26 + 8))) *
                                                       (*(float *)((char *)&auVar26 + 8))));
              (*(float *)(gen_frame + 0x2c)) = gen_bits2f(*(uint *)&REFG(undefined, 0x10abc2c) &
                                     (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1134c4c) -
                                                       (*(float *)((char *)&auVar5 + 12)) * (*(float *)((char *)&auVar26 + 12))) *
                                                       (*(float *)((char *)&auVar26 + 12))));
              (*(float *)(gen_frame + 0x0)) = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9c0) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x0))));
              (*(float *)(gen_frame + 0x4)) = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9c4) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x4))));
              (*(float *)(gen_frame + 0x8)) = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9c8) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x8))));
              (*(float *)(gen_frame + 0xc)) = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9cc) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0xc))));
              (*(float *)(gen_frame + 0x34)) = gen_bits2f(*(uint *)((*(uint *)(gen_frame + 0x68)) + 0x10) ^ *(uint *)&REFG(undefined, 0x10ab9b0));
              (*(float *)(gen_frame + 0x38)) = gen_bits2f(*(uint *)((*(uint *)(gen_frame + 0x68)) + 0x14) ^ *(uint *)&REFG(undefined, 0x10ab9b4));
              (*(float *)(gen_frame + 0x30)) = gen_bits2f(*(uint *)((*(uint *)(gen_frame + 0x68)) + 0x18) ^ *(uint *)&REFG(undefined, 0x10ab9b8));
              (*(float *)(gen_frame + 0x3c)) = gen_bits2f(*(uint *)((*(uint *)(gen_frame + 0x68)) + 0x1c) ^ *(uint *)&REFG(undefined, 0x10ab9bc));
              pfVar2 = (float *)((*(int *)(gen_frame + 0x60)) + (*(int *)(gen_frame + 0x6c)));
              fVar24 = *pfVar2;
              fVar25 = pfVar2[1];
              fVar8 = pfVar2[2];
              fVar9 = pfVar2[3];
              fVar19 = fVar24 * (*(float *)(gen_frame + 0x34));
              fVar20 = fVar25 * (*(float *)(gen_frame + 0x38));
              fVar21 = fVar8 * (*(float *)(gen_frame + 0x30));
              (*(undefined4 *)((char *)&in_XMM3 + 4)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x3c)));
              (*(undefined4 *)((char *)&in_XMM3 + 0)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x3c)));
              (*(undefined4 *)((char *)&in_XMM3 + 8)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x3c)));
              (*(undefined4 *)((char *)&in_XMM3 + 12)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x3c)));
              fVar22 = (((fVar20 + fVar19) + fVar21) * (*(float *)(gen_frame + 0x34)) +
                       ((*(float *)(gen_frame + 0x3c)) * (*(float *)(gen_frame + 0x3c)) +
                       gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) * fVar24) +
                       (fVar8 * (*(float *)(gen_frame + 0x38)) - fVar25 * (*(float *)(gen_frame + 0x30))) * (*(float *)(gen_frame + 0x3c));
              fVar23 = (((fVar20 + fVar19) + fVar21) * (*(float *)(gen_frame + 0x38)) +
                       ((*(float *)(gen_frame + 0x3c)) * (*(float *)(gen_frame + 0x3c)) +
                       gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) * fVar25) +
                       (fVar24 * (*(float *)(gen_frame + 0x30)) - fVar8 * (*(float *)(gen_frame + 0x34))) * (*(float *)(gen_frame + 0x3c));
              fVar24 = (((fVar20 + fVar19) + fVar21) * (*(float *)(gen_frame + 0x30)) +
                       ((*(float *)(gen_frame + 0x3c)) * (*(float *)(gen_frame + 0x3c)) +
                       gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) * fVar8) +
                       (fVar25 * (*(float *)(gen_frame + 0x34)) - fVar24 * (*(float *)(gen_frame + 0x38))) * (*(float *)(gen_frame + 0x3c));
              fVar25 = (((fVar20 + fVar19) + fVar21) * (*(float *)(gen_frame + 0x3c)) +
                       ((*(float *)(gen_frame + 0x3c)) * (*(float *)(gen_frame + 0x3c)) +
                       gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) * fVar9) +
                       (fVar9 * (*(float *)(gen_frame + 0x3c)) - fVar9 * (*(float *)(gen_frame + 0x3c))) * (*(float *)(gen_frame + 0x3c));
              *pfVar18 = (fVar22 + fVar22) + (*(float *)(gen_frame + 0x0));
              pfVar18[1] = (fVar23 + fVar23) + (*(float *)(gen_frame + 0x4));
              pfVar18[2] = (fVar24 + fVar24) + (*(float *)(gen_frame + 0x8));
              pfVar18[3] = (fVar25 + fVar25) + (*(float *)(gen_frame + 0xc));
              (*(undefined8 *)(gen_frame + 0x40)) = *(undefined8 *)((*(int *)(gen_frame + 0x60)) + 0x10 + (*(int *)(gen_frame + 0x6c)));
              fVar24 = *(float *)((*(int *)(gen_frame + 0x60)) + (*(int *)(gen_frame + 0x6c)) + 0x1c);
              uVar13 = (*(undefined8 *)(gen_frame + 0x40));
              (*(undefined8 *)(gen_frame + 0x48)) = *(undefined8 *)((*(int *)(gen_frame + 0x60)) + 0x18 + (*(int *)(gen_frame + 0x6c)));
              uVar14 = (*(undefined8 *)(gen_frame + 0x48));
              (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 4)) = gen_bits2f((uint)((ulonglong)(*(undefined8 *)(gen_frame + 0x40)) >> 0x20));
              pfVar18[4] = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 0)) * (*(float *)(gen_frame + 0x38)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 4)) * (*(float *)(gen_frame + 0x30))) +
                           (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 0)) * (*(float *)(gen_frame + 0x3c))) + fVar24 * (*(float *)(gen_frame + 0x34));
              pfVar18[5] = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 0)) * (*(float *)(gen_frame + 0x30)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 0)) * (*(float *)(gen_frame + 0x34))) +
                           (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 4)) * (*(float *)(gen_frame + 0x3c))) + fVar24 * (*(float *)(gen_frame + 0x38));
              pfVar18[6] = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 4)) * (*(float *)(gen_frame + 0x34)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 0)) * (*(float *)(gen_frame + 0x38))) +
                           (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 0)) * (*(float *)(gen_frame + 0x3c))) + fVar24 * (*(float *)(gen_frame + 0x30));
              pfVar18[7] = fVar24 * (*(float *)(gen_frame + 0x3c)) -
                           (((*(float *)(gen_frame + 0x38)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 4)) + (*(float *)(gen_frame + 0x34)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x40)) + 0))) +
                           (*(float *)(gen_frame + 0x30)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x48)) + 0)));
              pfVar2 = (float *)((*(int *)(gen_frame + 0x60)) + 0x20 + (*(int *)(gen_frame + 0x6c)));
              fVar24 = pfVar2[1];
              fVar25 = pfVar2[2];
              fVar8 = pfVar2[3];
              pfVar18[8] = *pfVar2 * (*(float *)(gen_frame + 0x20));
              pfVar18[9] = fVar24 * (*(float *)(gen_frame + 0x24));
              pfVar18[10] = fVar25 * (*(float *)(gen_frame + 0x28));
              pfVar18[0xb] = fVar8 * (*(float *)(gen_frame + 0x2c));
              (*(undefined8 *)(gen_frame + 0x40)) = uVar13;
              (*(undefined8 *)(gen_frame + 0x48)) = uVar14;
            }
            puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + (*(int *)(gen_frame + 0x64)) * 4)));
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + (*(int *)(gen_frame + 0x64)) * 4)));
          *puVar1 = *puVar1 | 4;
          *(undefined1 *)((int)this + 0x28) = 0;
        }
        (*(int *)(gen_frame + 0x64)) = (*(int *)(gen_frame + 0x64)) + 1;
        (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + 0x30;
      } while ((*(int *)(gen_frame + 0x64)) < (*(int *)(gen_frame + 0x5c)));
    }
    while (iVar17 = iVar17 + 1, iVar17 < (*(int *)(gen_frame + 0x5c))) {
      uVar7 = *((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar17 * 4)));
      if ((uVar7 & 4) != 0) {
        *((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar17 * 4))) = uVar7 & 0xfffffffb | 2;
      }
    }
  }
  if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4))) & 2) != 0) {
    F_00d31930(this,param_1);
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4))) = 1;
  *(undefined1 *)((int)this + 0x29) = 0;
  return param_1 * 0x30 + *(int *)((int)this + 0x10);
}

/* ref: FUN_00d329a0 */
uint F_00d329a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd329a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00d31f70(this);
  uVar1 = F_00d314f0(this);
  return uVar1;
}

/* ref: FUN_00d329b0 */
unsigned int F_00d329b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd329b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint * puVar10;
  int iVar11;
  
  iVar4 = *(int *)((int)this + 0x2c);
  F_00d31f70(this);
  iVar9 = 0;
  if (0 < iVar4) {
    iVar11 = 0;
    do {
      iVar5 = *(int *)this;
      if (*((char *)GEN_TOP((*(int *)(iVar5 + 0x18) + 4 + iVar9 * 8))) == '\0') {
        sVar3 = *((short *)GEN_TOP((*(int *)(iVar5 + 0xc) + iVar9 * 2)));
        if ((sVar3 != -1) && ((*((byte *)GEN_TOP((*(int *)((int)this + 0x1c) + sVar3 * 4))) & 4) != 0)) {
          puVar10 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar9 * 4)));
          goto LAB_00d32a0e;
        }
      }
      else {
        puVar1 = ((undefined4 *)GEN_TOP((*(int *)(iVar5 + 0x24) + iVar11)));
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar11)));
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        puVar10 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar9 * 4)));
LAB_00d32a0e: ;
        *puVar10 = *puVar10 | 2;
        puVar10 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar9 * 4)));
        *puVar10 = *puVar10 | 4;
      }
      iVar9 = iVar9 + 1;
      iVar11 = iVar11 + 0x30;
    } while (iVar9 < iVar4);
  }
  iVar4 = *(int *)((int)this + 0x20);
  iVar9 = 0;
  if (0 < iVar4) {
    do {
      puVar10 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar9 * 4)));
      *puVar10 = *puVar10 & 0xffffffe3;
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar4);
  }
  return 0;
}

/* ref: FUN_00d32a50 */
uint F_00d32a50(unsigned int gen_a0)
{
  GEN_ENTER(0xd32a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00d31f70(this);
  return (int)this + 4;
}

/* ref: FUN_00d32a60 */
uint F_00d32a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd32a60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00d32a90 */
uint F_00d32a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd32a90u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d32ab0 */
uint F_00d32ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd32ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d32ad0 */
uint F_00d32ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd32ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a1;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  
  gen_minps(&(auVar1), &(*param_1), &(*param_2));
  memcpy(&(*(gen_v16 *)this), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)this) ? sizeof(auVar1) : sizeof(*(gen_v16 *)this));
  return (uint)param_1;
}

/* ref: FUN_00d32af0 */
uint F_00d32af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd32af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a1;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  
  gen_maxps(&(auVar1), &(*param_1), &(*param_2));
  memcpy(&(*(gen_v16 *)this), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)this) ? sizeof(auVar1) : sizeof(*(gen_v16 *)this));
  return (uint)param_1;
}

/* ref: FUN_00d32b10 */
uint F_00d32b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd32b10u, gen_a0, gen_a1, 0u, 0u);
  gen_v16 * in_ecx = (gen_v16 *)(uintptr_t)gen_a0;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  
  gen_minps(&(auVar1), &(*in_ecx), &(*param_2));
  memcpy(&(*in_ecx), &(auVar1), sizeof(auVar1) < sizeof(*in_ecx) ? sizeof(auVar1) : sizeof(*in_ecx));
  gen_maxps(&(auVar1), &(in_ecx[1]), &(*param_2));
  memcpy(&(in_ecx[1]), &(auVar1), sizeof(auVar1) < sizeof(in_ecx[1]) ? sizeof(auVar1) : sizeof(in_ecx[1]));
  return (uint)param_2;
}

/* ref: FUN_00d32b30 */
uint F_00d32b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd32b30u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = *param_2 + *in_ecx;
  in_ecx[1] = fVar1 + in_ecx[1];
  in_ecx[2] = fVar2 + in_ecx[2];
  in_ecx[3] = fVar3 + in_ecx[3];
  return (uint)param_2;
}

/* ref: FUN_00d32b90 */
unsigned int F_00d32b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd32b90u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  if (0 < param_3) {
    puVar5 = (undefined4 *)(param_2 + 0x20);
    do {
      uVar1 = puVar5[-7];
      uVar2 = puVar5[-6];
      uVar3 = puVar5[-5];
      puVar4 = ((undefined4 *)GEN_TOP(((int)puVar5 + *param_1 + (-0x20 - param_2))));
      param_3 = param_3 + -1;
      *puVar4 = puVar5[-8];
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      uVar1 = puVar5[-3];
      uVar2 = puVar5[-2];
      uVar3 = puVar5[-1];
      puVar4[4] = puVar5[-4];
      puVar4[5] = uVar1;
      puVar4[6] = uVar2;
      puVar4[7] = uVar3;
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      puVar4[8] = *puVar5;
      puVar4[9] = uVar1;
      puVar4[10] = uVar2;
      puVar4[0xb] = uVar3;
      puVar5 = puVar5 + 0xc;
    } while (param_3 != 0);
  }
  return 0;
}

/* ref: FUN_00d32be0 */
uint F_00d32be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd32be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d32c20 */
uint F_00d32c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd32c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d32ca0 */
unsigned int F_00d32ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd32ca0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  iVar7 = 0;
  if (0 < iVar3) {
    iVar8 = 0;
    do {
      if (*((char *)GEN_TOP((*(int *)(param_1 + 0x18) + 4 + iVar7 * 8))) != '\0') {
        puVar1 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x24) + iVar8)));
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        puVar2 = (undefined4 *)(iVar8 + param_2);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar2[2] = uVar5;
        puVar2[3] = uVar6;
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0x30;
    } while (iVar7 < iVar3);
  }
  return 0;
}

/* ref: FUN_00d32ce0 */
unsigned int F_00d32ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd32ce0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar6 = 0;
  if (0 < iVar2) {
    iVar7 = param_2 - (int)param_3;
    do {
      if (*((char *)GEN_TOP((*(int *)(param_1 + 0x18) + 4 + iVar6 * 8))) != '\0') {
        puVar1 = (undefined4 *)(iVar7 + (int)param_3);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *param_3 = *puVar1;
        param_3[1] = uVar3;
        param_3[2] = uVar4;
        param_3[3] = uVar5;
      }
      iVar6 = iVar6 + 1;
      param_3 = param_3 + 0xc;
    } while (iVar6 < iVar2);
  }
  return 0;
}

/* ref: FUN_00d32d20 */
unsigned int F_00d32d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd32d20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  short sVar1;
  int iVar2;
  float * pfVar3;
  float * pfVar4;
  float * this;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int local_c;
  int local_8;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  local_c = 0;
  if (0 < iVar2) {
    local_8 = 0;
    this = param_2;
    do {
      sVar1 = *((short *)GEN_TOP((*(int *)(param_1 + 0xc) + local_c * 2)));
      if (*((char *)GEN_TOP((*(int *)(param_1 + 0x18) + 4 + local_c * 8))) != '\0') {
        pfVar3 = ((float *)GEN_TOP((*(int *)(param_1 + 0x24) + local_8)));
        if (sVar1 == -1) {
          fVar5 = *pfVar3;
          fVar6 = pfVar3[1];
          fVar7 = pfVar3[2];
          fVar8 = pfVar3[3];
        }
        else {
          pfVar4 = param_2 + sVar1 * 0xc;
          F_00d950d0(this,pfVar4 + 4,pfVar3);
          fVar5 = *this + *pfVar4;
          fVar6 = this[1] + pfVar4[1];
          fVar7 = this[2] + pfVar4[2];
          fVar8 = this[3] + pfVar4[3];
        }
        *this = fVar5;
        this[1] = fVar6;
        this[2] = fVar7;
        this[3] = fVar8;
      }
      local_8 = local_8 + 0x30;
      local_c = local_c + 1;
      this = this + 0xc;
    } while (local_c < iVar2);
  }
  return 0;
}

/* ref: FUN_00d32da0 */
unsigned int F_00d32da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd32da0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  short sVar1;
  int iVar2;
  float * pfVar3;
  float * pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  (*(int *)(gen_frame + 0x14)) = *(int *)(param_1 + 0x1c);
  (*(int *)(gen_frame + 0x1c)) = 0;
  if (0 < *(int *)(param_1 + 0x1c)) {
    iVar2 = param_2 - (int)param_3;
    (*(int *)(gen_frame + 0x18)) = iVar2;
    pfVar4 = param_3;
    do {
      sVar1 = *((short *)GEN_TOP((*(int *)(param_1 + 0xc) + (*(int *)(gen_frame + 0x1c)) * 2)));
      if (*((char *)GEN_TOP((*(int *)(param_1 + 0x18) + 4 + (*(int *)(gen_frame + 0x1c)) * 8))) != '\0') {
        if (sVar1 == -1) {
          pfVar3 = (float *)(iVar2 + (int)pfVar4);
          fVar5 = *pfVar3;
          fVar6 = pfVar3[1];
          fVar7 = pfVar3[2];
          fVar8 = pfVar3[3];
        }
        else {
          pfVar3 = param_3 + sVar1 * 0xc;
          F_00d950d0(&(*(float *)(gen_frame + 0x0)),pfVar3 + 4,iVar2 + (int)pfVar4);
          fVar5 = *pfVar3 + (*(float *)(gen_frame + 0x0));
          fVar6 = pfVar3[1] + (*(float *)(gen_frame + 0x4));
          fVar7 = pfVar3[2] + (*(float *)(gen_frame + 0x8));
          fVar8 = pfVar3[3] + (*(float *)(gen_frame + 0xc));
          iVar2 = (*(int *)(gen_frame + 0x18));
        }
        *pfVar4 = fVar5;
        pfVar4[1] = fVar6;
        pfVar4[2] = fVar7;
        pfVar4[3] = fVar8;
      }
      (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 1;
      pfVar4 = pfVar4 + 0xc;
    } while ((*(int *)(gen_frame + 0x1c)) < (*(int *)(gen_frame + 0x14)));
  }
  return 0;
}

/* ref: FUN_00d32e40 */
unsigned int F_00d32e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd32e40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if ((0 < *((short *)GEN_TOP((*(int *)(param_1 + 0xc) + iVar2 * 2)))) || ((char)param_2 == '\0')) {
        *((undefined1 *)GEN_TOP((*(int *)(param_1 + 0x18) + 4 + iVar2 * 8))) = 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}

/* ref: FUN_00d32e80 */
uint F_00d32e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd32e80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (param_3 == (code *)0x0) {
    param_3 = ((code *)REFP(0xda0d70));
  }
  uVar4 = 0;
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      uVar3 = (*param_3)(param_2,*((uint *)GEN_TOP((*(int *)(param_1 + 0x18) + iVar2 * 8))) & 0xfffffffe);
      if (uVar3 == 0) {
        return (uint)uVar4;
      }
      uVar4 = uVar4 + 1;
      iVar2 = (int)(short)uVar4;
    } while (iVar2 < iVar1);
  }
  return 0xffffffff;
}

/* ref: FUN_00d32ee0 */
unsigned int F_00d32ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xd32ee0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      *((undefined1 *)GEN_TOP((*(int *)(param_1 + 0x18) + 4 + iVar2 * 8))) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}

/* ref: FUN_00d32f00 */
byte F_00d32f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd32f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  gen_size32 param_2 = (gen_size32)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  short sVar1;
  int iVar2;
  undefined1 uVar3;
  
  if (0 < (int)param_2) {
    F_00c48350(param_3,0,param_2);
  }
  iVar2 = param_2 + 1;
  *(undefined1 *)(param_2 + (int)param_3) = 1;
  if (*(int *)(param_1 + 0x1c) <= iVar2) {
    *(byte *)(param_2 + (int)param_3) = (byte)param_4;
    return (byte)param_4;
  }
  do {
    sVar1 = *((short *)GEN_TOP((*(int *)(param_1 + 0xc) + iVar2 * 2)));
    if ((sVar1 < 0) || (*(char *)((int)sVar1 + (int)param_3) == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    *(undefined1 *)(iVar2 + (int)param_3) = uVar3;
    iVar2 = iVar2 + 1;
  } while (iVar2 < *(int *)(param_1 + 0x1c));
  *(byte *)(param_2 + (int)param_3) = (byte)param_4;
  return (byte)iVar2;
}

/* ref: FUN_00d32f70 */
uint F_00d32f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd32f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  short * psVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_3 + 0x14)) {
    psVar2 = *(short * PTR32 *)(param_3 + 0x10);
    do {
      if ((*psVar2 < 0) || (*(int *)(param_2 + 0x1c) <= (int)*psVar2)) {
        *param_1 = 0;
        return (uint)param_1;
      }
      iVar1 = iVar1 + 1;
      psVar2 = psVar2 + 1;
    } while (iVar1 < *(int *)(param_3 + 0x14));
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00d32fc0 */
uint F_00d32fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd32fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * pfVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *(float *)&REFG(undefined, 0x1138afc);
  fVar4 = *(float *)&REFG(undefined, 0x1138af8);
  fVar3 = *(float *)&REFG(undefined, 0x1138af4);
  if (param_3 != -1) {
    fVar3 = *(float *)&REFG(undefined, 0x1138af0);
    fVar4 = *(float *)&REFG(undefined, 0x1138af4);
    fVar5 = *(float *)&REFG(undefined, 0x1138af8);
    fVar6 = *(float *)&REFG(undefined, 0x1138afc);
    do {
      iVar2 = (int)*((short *)GEN_TOP((*(int *)(param_1 + 0xc) + param_3 * 2)));
      pfVar1 = (float *)(param_2 + 0x20 + param_3 * 0x30);
      fVar3 = fVar3 * *pfVar1;
      fVar4 = fVar4 * pfVar1[1];
      fVar5 = fVar5 * pfVar1[2];
      fVar6 = fVar6 * pfVar1[3];
      param_3 = iVar2;
    } while (iVar2 != -1);
    *param_4 = fVar3;
    param_4[1] = fVar4;
    param_4[2] = fVar5;
    param_4[3] = fVar6;
    return 0xffffffff;
  }
  *param_4 = *(float *)&REFG(undefined, 0x1138af0);
  param_4[1] = fVar3;
  param_4[2] = fVar4;
  param_4[3] = fVar5;
  return (uint)param_4;
}

/* ref: FUN_00d33010 */
uint F_00d33010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd33010u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  uint * puVar1;
  int iVar2;
  uint uVar3;
  undefined * pvVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (*(int *)(param_4 + 0x14) != 0) {
    iVar2 = *(int *)(param_2 + 0x10);
    if (*(int *)(param_4 + 0x14) == iVar2) {
      if (*(int *)(param_2 + 0x20) != iVar2) {
        F_00da0a80(((undefined1 *)(gen_frame + 0x208)),((undefined1 *)(gen_frame + 0x4)),0x200);
        F_00d9fe80(((undefined1 *)(gen_frame + 0x208)),"No track names present in animation");
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                  (REFG(undefined4, 0x15dff78),1,0x654e3437,((undefined1 *)(gen_frame + 0x4)),"Rig\\hkaSkeletonUtils.cpp",0x1d7);
        F_00d9fda0(((undefined1 *)(gen_frame + 0x208)));
        return 1;
      }
      iVar5 = *(int *)(param_1 + 0x1c);
      iVar7 = 0;
      if (0 < iVar5) {
        puVar1 = *(uint * PTR32 *)(param_1 + 0x18);
        do {
          if ((*puVar1 & 0xfffffffe) == 0) {
            F_00da0a80(((undefined1 *)(gen_frame + 0x208)),((undefined1 *)(gen_frame + 0x4)),0x200);
            pvVar4 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x208)),"No bone name for bone ");
            F_00d9ff40(pvVar4,iVar7);
            iVar2 = *REFG(int * PTR32, 0x15dff78);
            uVar10 = 0x1e1;
            uVar9 = 0x654e3437;
            goto LAB_00d3317e;
          }
          iVar7 = iVar7 + 1;
          puVar1 = puVar1 + 2;
        } while (iVar7 < iVar5);
      }
      (*(int *)(gen_frame + 0x204)) = 0;
      if (0 < iVar2) {
        (*(int *)(gen_frame + 0x214)) = 0;
        do {
          uVar8 = *((uint *)GEN_TOP(((*(int *)(gen_frame + 0x214)) + *(int *)(param_2 + 0x1c)))) & 0xfffffffe;
          sVar6 = 0;
          (*(char *)(gen_frame + 0x21b)) = '\0';
          if (iVar5 < 1) {
LAB_00d33199: ;
            F_00da0a80(((undefined1 *)(gen_frame + 0x208)),((undefined1 *)(gen_frame + 0x4)),0x200);
            pvVar4 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x208)),"No match for track ");
            F_00d9fe80(pvVar4,uVar8);
            iVar2 = *REFG(int * PTR32, 0x15dff78);
            uVar10 = 0x1f7;
            uVar9 = 0x654e3438;
LAB_00d3317e: ;
            ((code *)*(gen_code32 *)(iVar2 + 0xc))
                      (REFG(undefined4, 0x15dff78),1,uVar9,((undefined1 *)(gen_frame + 0x4)),"Rig\\hkaSkeletonUtils.cpp",uVar10);
            F_00d9fda0(((undefined1 *)(gen_frame + 0x208)));
            return 1;
          }
          iVar2 = 0;
          do {
            uVar3 = (*param_3)(*((uint *)GEN_TOP((*(int *)(param_1 + 0x18) + iVar2 * 8))) & 0xfffffffe,uVar8);
            if (uVar3 == 0) {
              (*(char *)(gen_frame + 0x21b)) = '\x01';
              *((short *)GEN_TOP((*(int *)(param_4 + 0x10) + (*(int *)(gen_frame + 0x204)) * 2))) = sVar6;
            }
            iVar5 = *(int *)(param_1 + 0x1c);
            sVar6 = sVar6 + 1;
            iVar2 = (int)sVar6;
          } while (iVar2 < iVar5);
          if ((*(char *)(gen_frame + 0x21b)) == '\0') goto LAB_00d33199;
          (*(int *)(gen_frame + 0x214)) = (*(int *)(gen_frame + 0x214)) + 0x10;
          (*(int *)(gen_frame + 0x204)) = (*(int *)(gen_frame + 0x204)) + 1;
        } while ((*(int *)(gen_frame + 0x204)) < *(int *)(param_2 + 0x10));
      }
      return 0;
    }
  }
  F_00da0a80(((undefined1 *)(gen_frame + 0x208)),((undefined1 *)(gen_frame + 0x4)),0x200);
  F_00d9fe80(((undefined1 *)(gen_frame + 0x208)),"Binding is not initiialized");
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),1,0x654e3435,((undefined1 *)(gen_frame + 0x4)),"Rig\\hkaSkeletonUtils.cpp",0x1d0);
  F_00d9fda0(((undefined1 *)(gen_frame + 0x208)));
  return 1;
}

/* ref: FUN_00d33240 */
unsigned int F_00d33240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd33240u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  float * pfVar1;
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
  int iVar12;
  float * pfVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  iVar15 = 0;
  if (0 < param_1) {
    iVar14 = param_5 - (int)param_4;
    do {
      iVar12 = (int)*(short *)(param_2 + iVar15 * 2);
      pfVar13 = param_3;
      if (iVar12 != -1) {
        pfVar13 = (float *)(iVar12 * 0x30 + param_5);
      }
      fVar2 = pfVar13[4];
      fVar3 = pfVar13[5];
      fVar4 = pfVar13[6];
      fVar5 = pfVar13[7];
      fVar6 = *param_4;
      fVar7 = param_4[1];
      fVar8 = param_4[2];
      fVar9 = param_4[3];
      fVar16 = fVar6 * fVar2;
      fVar17 = fVar7 * fVar3;
      fVar18 = fVar8 * fVar4;
      fVar10 = pfVar13[7];
      local_20 = gen_bits2f((uint)*(undefined8 *)(pfVar13 + 4));
      fStack_1c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(pfVar13 + 4) >> 0x20));
      fStack_18 = gen_bits2f((uint)*(undefined8 *)(pfVar13 + 6));
      fVar19 = (((fVar17 + fVar16) + fVar18) * fVar2 +
               (fVar5 * fVar5 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) * fVar6
               ) + (fVar8 * fVar3 - fVar7 * fVar4) * fVar5;
      fVar20 = (((fVar17 + fVar16) + fVar18) * fVar3 +
               (fVar5 * fVar5 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) * fVar7
               ) + (fVar6 * fVar4 - fVar8 * fVar2) * fVar5;
      fVar21 = (((fVar17 + fVar16) + fVar18) * fVar4 +
               (fVar5 * fVar5 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) * fVar8
               ) + (fVar7 * fVar2 - fVar6 * fVar3) * fVar5;
      fVar22 = (((fVar17 + fVar16) + fVar18) * fVar5 +
               (fVar5 * fVar5 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) * fVar9
               ) + (fVar9 * fVar5 - fVar9 * fVar5) * fVar5;
      local_30 = gen_bits2f((uint)*(undefined8 *)(param_4 + 4));
      fStack_2c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(param_4 + 4) >> 0x20));
      fStack_28 = gen_bits2f((uint)*(undefined8 *)(param_4 + 6));
      fVar2 = param_4[7];
      fVar3 = pfVar13[1];
      fVar4 = pfVar13[2];
      fVar5 = pfVar13[3];
      fVar6 = param_4[8];
      fVar7 = param_4[9];
      fVar8 = param_4[10];
      fVar9 = param_4[0xb];
      fVar16 = pfVar13[8];
      fVar17 = pfVar13[9];
      fVar18 = pfVar13[10];
      fVar11 = pfVar13[0xb];
      pfVar1 = (float *)(iVar14 + (int)param_4);
      *pfVar1 = (fVar19 + fVar19) + *pfVar13;
      pfVar1[1] = (fVar20 + fVar20) + fVar3;
      pfVar1[2] = (fVar21 + fVar21) + fVar4;
      pfVar1[3] = (fVar22 + fVar22) + fVar5;
      pfVar13 = (float *)(iVar14 + 0x10 + (int)param_4);
      *pfVar13 = ((fStack_1c * fStack_28 - fStack_18 * fStack_2c) + local_30 * fVar10) +
                 local_20 * fVar2;
      pfVar13[1] = ((fStack_18 * local_30 - local_20 * fStack_28) + fStack_2c * fVar10) +
                   fStack_1c * fVar2;
      pfVar13[2] = ((local_20 * fStack_2c - fStack_1c * local_30) + fStack_28 * fVar10) +
                   fStack_18 * fVar2;
      pfVar13[3] = fVar2 * fVar10 -
                   ((fStack_1c * fStack_2c + local_20 * local_30) + fStack_18 * fStack_28);
      pfVar13 = (float *)(iVar14 + 0x20 + (int)param_4);
      *pfVar13 = fVar6 * fVar16;
      pfVar13[1] = fVar7 * fVar17;
      pfVar13[2] = fVar8 * fVar18;
      pfVar13[3] = fVar9 * fVar11;
      iVar15 = iVar15 + 1;
      param_4 = param_4 + 0xc;
    } while (iVar15 < param_1);
  }
  return 0;
}

/* ref: FUN_00d33580 */
unsigned int F_00d33580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd33580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_00d33240(param_1,param_2,&REFG(undefined, 0x1351770),param_3,param_4);
  return 0;
}

/* ref: FUN_00d335b0 */
unsigned int F_00d335b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd335b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float * pfVar6;
  int iVar7;
  float * pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar16 [16];
  
  (*(int *)(gen_frame + 0x6c)) = 0;
  if (0 < param_1) {
    (*(float *)(gen_frame + 0x40)) = *(float *)&REFG(undefined, 0x1134c50);
    (*(float *)(gen_frame + 0x44)) = *(float *)&REFG(undefined, 0x1134c54);
    (*(float *)(gen_frame + 0x48)) = *(float *)&REFG(undefined, 0x1134c58);
    (*(float *)(gen_frame + 0x4c)) = *(float *)&REFG(undefined, 0x1134c5c);
    (*(int *)(gen_frame + 0x68)) = param_5 - (int)param_4;
    pfVar6 = param_4;
    do {
      iVar7 = (int)*(short *)(param_2 + (*(int *)(gen_frame + 0x6c)) * 2);
      pfVar8 = param_3;
      if (iVar7 != -1) {
        pfVar8 = param_4 + iVar7 * 0xc;
      }
      F_00d95160(&(*(float *)(gen_frame + 0x0)),pfVar8 + 4,pfVar8);
      memcpy(&(auVar1), &(*(gen_v16 *)(pfVar8 + 8)), sizeof(*(gen_v16 *)(pfVar8 + 8)) < sizeof(auVar1) ? sizeof(*(gen_v16 *)(pfVar8 + 8)) : sizeof(auVar1));
      fVar14 = *pfVar6;
      fVar15 = pfVar6[1];
      fVar2 = pfVar6[2];
      fVar3 = pfVar6[3];
      gen_rcpps(&(auVar16), &(in_XMM3), &(auVar1));
      (*(float *)(gen_frame + 0x20)) = gen_bits2f(*(uint *)&REFG(undefined, 0x10abc20) &
                            (uint)gen_fl2bits(((*(float *)(gen_frame + 0x40)) - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar16 + 0))) *
                                              (*(float *)((char *)&auVar16 + 0))));
      (*(float *)(gen_frame + 0x24)) = gen_bits2f(*(uint *)&REFG(undefined, 0x10abc24) &
                             (uint)gen_fl2bits(((*(float *)(gen_frame + 0x44)) - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar16 + 4))) *
                                               (*(float *)((char *)&auVar16 + 4))));
      (*(float *)(gen_frame + 0x28)) = gen_bits2f(*(uint *)&REFG(undefined, 0x10abc28) &
                             (uint)gen_fl2bits(((*(float *)(gen_frame + 0x48)) - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar16 + 8))) *
                                               (*(float *)((char *)&auVar16 + 8))));
      (*(float *)(gen_frame + 0x2c)) = gen_bits2f(*(uint *)&REFG(undefined, 0x10abc2c) &
                             (uint)gen_fl2bits(((*(float *)(gen_frame + 0x4c)) - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar16 + 12))) *
                                               (*(float *)((char *)&auVar16 + 12))));
      (*(float *)(gen_frame + 0x0)) = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9c0) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x0))));
      (*(float *)(gen_frame + 0x4)) = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9c4) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x4))));
      (*(float *)(gen_frame + 0x8)) = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9c8) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x8))));
      (*(float *)(gen_frame + 0xc)) = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9cc) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0xc))));
      (*(float *)(gen_frame + 0x34)) = gen_bits2f((uint)gen_fl2bits(pfVar8[4]) ^ *(uint *)&REFG(undefined, 0x10ab9b0));
      (*(float *)(gen_frame + 0x38)) = gen_bits2f((uint)gen_fl2bits(pfVar8[5]) ^ *(uint *)&REFG(undefined, 0x10ab9b4));
      (*(float *)(gen_frame + 0x30)) = gen_bits2f((uint)gen_fl2bits(pfVar8[6]) ^ *(uint *)&REFG(undefined, 0x10ab9b8));
      (*(float *)(gen_frame + 0x3c)) = gen_bits2f((uint)gen_fl2bits(pfVar8[7]) ^ *(uint *)&REFG(undefined, 0x10ab9bc));
      fVar9 = fVar14 * (*(float *)(gen_frame + 0x34));
      fVar10 = fVar15 * (*(float *)(gen_frame + 0x38));
      fVar11 = fVar2 * (*(float *)(gen_frame + 0x30));
      (*(undefined4 *)((char *)&in_XMM3 + 4)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x3c)));
      (*(undefined4 *)((char *)&in_XMM3 + 0)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x3c)));
      (*(undefined4 *)((char *)&in_XMM3 + 8)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x3c)));
      (*(undefined4 *)((char *)&in_XMM3 + 12)) = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x3c)));
      fVar12 = (((fVar10 + fVar9) + fVar11) * (*(float *)(gen_frame + 0x34)) +
               ((*(float *)(gen_frame + 0x3c)) * (*(float *)(gen_frame + 0x3c)) + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0)))
               * fVar14) + (fVar2 * (*(float *)(gen_frame + 0x38)) - fVar15 * (*(float *)(gen_frame + 0x30))) * (*(float *)(gen_frame + 0x3c));
      fVar13 = (((fVar10 + fVar9) + fVar11) * (*(float *)(gen_frame + 0x38)) +
               ((*(float *)(gen_frame + 0x3c)) * (*(float *)(gen_frame + 0x3c)) + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4)))
               * fVar15) + (fVar14 * (*(float *)(gen_frame + 0x30)) - fVar2 * (*(float *)(gen_frame + 0x34))) * (*(float *)(gen_frame + 0x3c));
      fVar14 = (((fVar10 + fVar9) + fVar11) * (*(float *)(gen_frame + 0x30)) +
               ((*(float *)(gen_frame + 0x3c)) * (*(float *)(gen_frame + 0x3c)) + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8)))
               * fVar2) + (fVar15 * (*(float *)(gen_frame + 0x34)) - fVar14 * (*(float *)(gen_frame + 0x38))) * (*(float *)(gen_frame + 0x3c));
      fVar15 = (((fVar10 + fVar9) + fVar11) * (*(float *)(gen_frame + 0x3c)) +
               ((*(float *)(gen_frame + 0x3c)) * (*(float *)(gen_frame + 0x3c)) + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc)))
               * fVar3) + (fVar3 * (*(float *)(gen_frame + 0x3c)) - fVar3 * (*(float *)(gen_frame + 0x3c))) * (*(float *)(gen_frame + 0x3c));
      pfVar8 = (float *)((*(int *)(gen_frame + 0x68)) + (int)pfVar6);
      *pfVar8 = (fVar12 + fVar12) + (*(float *)(gen_frame + 0x0));
      pfVar8[1] = (fVar13 + fVar13) + (*(float *)(gen_frame + 0x4));
      pfVar8[2] = (fVar14 + fVar14) + (*(float *)(gen_frame + 0x8));
      pfVar8[3] = (fVar15 + fVar15) + (*(float *)(gen_frame + 0xc));
      (*(undefined8 *)(gen_frame + 0x50)) = *(undefined8 *)(pfVar6 + 4);
      fVar14 = pfVar6[7];
      uVar4 = (*(undefined8 *)(gen_frame + 0x50));
      (*(undefined8 *)(gen_frame + 0x58)) = *(undefined8 *)(pfVar6 + 6);
      uVar5 = (*(undefined8 *)(gen_frame + 0x58));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 4)) = gen_bits2f((uint)((ulonglong)(*(undefined8 *)(gen_frame + 0x50)) >> 0x20));
      (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x58)) + 0)) = gen_bits2f((uint)*(undefined8 *)(pfVar6 + 6));
      pfVar8 = (float *)((*(int *)(gen_frame + 0x68)) + 0x10 + (int)pfVar6);
      *pfVar8 = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x58)) + 0)) * (*(float *)(gen_frame + 0x38)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 4)) * (*(float *)(gen_frame + 0x30))) +
                (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 0)) * (*(float *)(gen_frame + 0x3c))) + fVar14 * (*(float *)(gen_frame + 0x34));
      pfVar8[1] = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 0)) * (*(float *)(gen_frame + 0x30)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x58)) + 0)) * (*(float *)(gen_frame + 0x34))) +
                  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 4)) * (*(float *)(gen_frame + 0x3c))) + fVar14 * (*(float *)(gen_frame + 0x38));
      pfVar8[2] = (((*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 4)) * (*(float *)(gen_frame + 0x34)) - (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 0)) * (*(float *)(gen_frame + 0x38))) +
                  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x58)) + 0)) * (*(float *)(gen_frame + 0x3c))) + fVar14 * (*(float *)(gen_frame + 0x30));
      pfVar8[3] = fVar14 * (*(float *)(gen_frame + 0x3c)) -
                  (((*(float *)(gen_frame + 0x38)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 4)) + (*(float *)(gen_frame + 0x34)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x50)) + 0))) +
                  (*(float *)(gen_frame + 0x30)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x58)) + 0)));
      fVar14 = pfVar6[9];
      fVar15 = pfVar6[10];
      fVar2 = pfVar6[0xb];
      pfVar8 = (float *)((*(int *)(gen_frame + 0x68)) + 0x20 + (int)pfVar6);
      *pfVar8 = pfVar6[8] * (*(float *)(gen_frame + 0x20));
      pfVar8[1] = fVar14 * (*(float *)(gen_frame + 0x24));
      pfVar8[2] = fVar15 * (*(float *)(gen_frame + 0x28));
      pfVar8[3] = fVar2 * (*(float *)(gen_frame + 0x2c));
      (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + 1;
      pfVar6 = pfVar6 + 0xc;
      (*(undefined8 *)(gen_frame + 0x50)) = uVar4;
      (*(undefined8 *)(gen_frame + 0x58)) = uVar5;
    } while ((*(int *)(gen_frame + 0x6c)) < param_1);
  }
  return 0;
}

/* ref: FUN_00d33790 */
unsigned int F_00d33790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd33790u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_00d335b0(param_1,param_2,&REFG(undefined, 0x1351770),param_3,param_4);
  return 0;
}

/* ref: FUN_00d33af0 */
unsigned int F_00d33af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd33af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  float * pfVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float * pfVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  undefined1 auVar23 [16];
  
  fVar7 = REFG(float, 0x10905c4);
  uVar11 = 0;
  if (param_1 != 0) {
    iVar9 = (int)param_2 - param_5;
    pfVar8 = (float *)(param_5 + 0x10);
    iVar10 = param_3 - (int)param_2;
    do {
      fVar2 = *(float *)(param_4 + uVar11 * 4);
      pfVar1 = (float *)(iVar10 + (int)param_2);
      fVar3 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      fVar13 = param_2[1];
      fVar12 = param_2[2];
      fVar14 = param_2[3];
      fVar15 = param_2[1];
      fVar16 = param_2[2];
      fVar18 = param_2[3];
      pfVar8[-4] = (*pfVar1 - *param_2) * fVar2 + *param_2;
      pfVar8[-3] = (fVar3 - fVar13) * fVar2 + fVar15;
      pfVar8[-2] = (fVar5 - fVar12) * fVar2 + fVar16;
      pfVar8[-1] = (fVar6 - fVar14) * fVar2 + fVar18;
      memcpy(&(auVar23), &(*(gen_v16 *)(iVar9 + (int)pfVar8)), sizeof(*(gen_v16 *)(iVar9 + (int)pfVar8)) < sizeof(auVar23) ? sizeof(*(gen_v16 *)(iVar9 + (int)pfVar8)) : sizeof(auVar23));
      fVar3 = (*(float *)((char *)&auVar23 + 12));
      pfVar1 = (float *)((int)pfVar8 + iVar10 + iVar9);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar13 = pfVar1[3];
      fVar22 = (*(float *)((char *)&auVar23 + 0));
      fVar15 = *pfVar1 * fVar22;
      fVar24 = (*(float *)((char *)&auVar23 + 4));
      fVar16 = fVar5 * fVar24;
      fVar25 = (*(float *)((char *)&auVar23 + 8));
      fVar18 = fVar6 * fVar25;
      fVar20 = fVar13 * fVar3;
      fVar12 = fVar18 + fVar15;
      fVar14 = fVar20 + fVar16;
      fVar15 = fVar15 + fVar18;
      fVar16 = fVar16 + fVar20;
      uVar17 = (uint)gen_fl2bits(fVar12 + fVar14) & *(uint *)&REFG(undefined, 0x1134c84);
      uVar19 = (uint)gen_fl2bits(fVar16 + fVar15) & *(uint *)&REFG(undefined, 0x1134c88);
      uVar21 = (uint)gen_fl2bits(fVar15 + fVar16) & *(uint *)&REFG(undefined, 0x1134c8c);
      *pfVar8 = (gen_bits2f((uint)gen_fl2bits(fVar14 + fVar12) & *(uint *)&REFG(undefined, 0x1134c80) ^
                            (uint)gen_fl2bits(*pfVar1)) - fVar22) * fVar2 + fVar22;
      pfVar8[1] = (gen_bits2f(uVar17 ^ (uint)gen_fl2bits(fVar5)) - fVar24) * fVar2 + fVar24;
      pfVar8[2] = (gen_bits2f(uVar19 ^ (uint)gen_fl2bits(fVar6)) - fVar25) * fVar2 + fVar25;
      pfVar8[3] = (gen_bits2f(uVar21 ^ (uint)gen_fl2bits(fVar13)) - fVar3) * fVar2 + fVar3;
      fVar3 = *(float *)((int)pfVar8 + iVar9 + 0x10);
      fVar5 = *(float *)((int)pfVar8 + iVar9 + 0x14);
      fVar6 = *(float *)((int)pfVar8 + iVar9 + 0x18);
      fVar13 = *(float *)((int)pfVar8 + iVar9 + 0x1c);
      pfVar1 = ((float *)GEN_TOP(((int)pfVar8 + (param_3 - param_5) + 0x10)));
      fVar12 = pfVar1[1];
      fVar14 = pfVar1[2];
      fVar15 = pfVar1[3];
      pfVar8[4] = (*pfVar1 - fVar3) * fVar2 + fVar3;
      pfVar8[5] = (fVar12 - fVar5) * fVar2 + fVar5;
      pfVar8[6] = (fVar14 - fVar6) * fVar2 + fVar6;
      pfVar8[7] = (fVar15 - fVar13) * fVar2 + fVar13;
      fVar5 = *(float *)&REFG(undefined, 0x1138cac);
      fVar3 = *(float *)&REFG(undefined, 0x1138ca8);
      fVar2 = *(float *)&REFG(undefined, 0x1138ca4);
      if ((pfVar8[2] * pfVar8[2] + *pfVar8 * *pfVar8) +
          (pfVar8[3] * pfVar8[3] + pfVar8[1] * pfVar8[1]) < fVar7) {
        *pfVar8 = *(float *)&REFG(undefined, 0x1138ca0);
        pfVar8[1] = fVar2;
        pfVar8[2] = fVar3;
        pfVar8[3] = fVar5;
      }
      else {
        fVar2 = *pfVar8;
        fVar3 = pfVar8[1];
        fVar5 = pfVar8[2];
        fVar6 = pfVar8[3];
        fVar13 = fVar5 * fVar5 + fVar2 * fVar2;
        fVar12 = fVar6 * fVar6 + fVar3 * fVar3;
        fVar14 = fVar2 * fVar2 + fVar5 * fVar5;
        fVar15 = fVar3 * fVar3 + fVar6 * fVar6;
        fVar16 = fVar12 + fVar13;
        fVar13 = fVar13 + fVar12;
        fVar12 = fVar15 + fVar14;
        fVar14 = fVar14 + fVar15;
        (*(undefined4 *)((char *)&auVar4 + 4)) = (undefined4)gen_fl2bits(fVar13);
        (*(undefined4 *)((char *)&auVar4 + 0)) = (undefined4)gen_fl2bits(fVar16);
        (*(undefined4 *)((char *)&auVar4 + 8)) = (undefined4)gen_fl2bits(fVar12);
        (*(undefined4 *)((char *)&auVar4 + 12)) = (undefined4)gen_fl2bits(fVar14);
        gen_rsqrtps(&(auVar23), &(auVar23), &(auVar4));
        fVar22 = (*(float *)((char *)&auVar23 + 0));
        fVar15 = (*(float *)((char *)&auVar23 + 4));
        fVar18 = (*(float *)((char *)&auVar23 + 8));
        fVar20 = (*(float *)((char *)&auVar23 + 12));
        fVar13 = *(float *)&REFG(undefined, 0x1134c64) - (fVar15 * fVar13) * fVar15;
        fVar12 = *(float *)&REFG(undefined, 0x1134c68) - (fVar18 * fVar12) * fVar18;
        fVar14 = *(float *)&REFG(undefined, 0x1134c6c) - (fVar20 * fVar14) * fVar20;
        fVar15 = *(float *)&REFG(undefined, 0x1134c74) * fVar15;
        fVar18 = *(float *)&REFG(undefined, 0x1134c78) * fVar18;
        fVar20 = *(float *)&REFG(undefined, 0x1134c7c) * fVar20;
        *pfVar8 = fVar2 * ((*(float *)&REFG(undefined, 0x1134c60) - (fVar22 * fVar16) * fVar22) *
                          (*(float *)&REFG(undefined, 0x1134c70) * fVar22));
        pfVar8[1] = fVar3 * (fVar13 * fVar15);
        pfVar8[2] = fVar5 * (fVar12 * fVar18);
        pfVar8[3] = fVar6 * (fVar14 * fVar20);
      }
      uVar11 = uVar11 + 1;
      pfVar8 = pfVar8 + 0xc;
      param_2 = param_2 + 0xc;
    } while (uVar11 < param_1);
  }
  return 0;
}

/* ref: FUN_00d33c30 */
unsigned int F_00d33c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd33c30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  float param_4 = (float)gen_a3;
  int param_5 = (int)gen_a4;
  float * pfVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float * pfVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  
  fVar7 = REFG(float, 0x10905c4);
  if (param_1 != 0) {
    iVar9 = (int)param_2 - param_5;
    pfVar8 = (float *)(param_5 + 0x10);
    iVar10 = param_3 - (int)param_2;
    do {
      pfVar1 = (float *)(iVar10 + (int)param_2);
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      fVar6 = param_2[1];
      fVar11 = param_2[2];
      fVar12 = param_2[3];
      fVar13 = param_2[1];
      fVar14 = param_2[2];
      fVar16 = param_2[3];
      pfVar8[-4] = (*pfVar1 - *param_2) * param_4 + *param_2;
      pfVar8[-3] = (fVar3 - fVar6) * param_4 + fVar13;
      pfVar8[-2] = (fVar4 - fVar11) * param_4 + fVar14;
      pfVar8[-1] = (fVar5 - fVar12) * param_4 + fVar16;
      pfVar1 = (float *)(iVar9 + (int)pfVar8);
      fVar3 = *pfVar1;
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      memcpy(&(auVar22), &(*(gen_v16 *)((int)pfVar8 + iVar10 + iVar9)), sizeof(*(gen_v16 *)((int)pfVar8 + iVar10 + iVar9)) < sizeof(auVar22) ? sizeof(*(gen_v16 *)((int)pfVar8 + iVar10 + iVar9)) : sizeof(auVar22));
      fVar13 = (*(float *)((char *)&auVar22 + 0)) * fVar3;
      fVar14 = (*(float *)((char *)&auVar22 + 4)) * fVar4;
      fVar16 = (*(float *)((char *)&auVar22 + 8)) * fVar5;
      fVar18 = (*(float *)((char *)&auVar22 + 12)) * fVar6;
      fVar11 = fVar16 + fVar13;
      fVar12 = fVar18 + fVar14;
      fVar13 = fVar13 + fVar16;
      fVar14 = fVar14 + fVar18;
      uVar15 = (uint)gen_fl2bits(fVar11 + fVar12) & *(uint *)&REFG(undefined, 0x1134c84);
      uVar17 = (uint)gen_fl2bits(fVar14 + fVar13) & *(uint *)&REFG(undefined, 0x1134c88);
      uVar19 = (uint)gen_fl2bits(fVar13 + fVar14) & *(uint *)&REFG(undefined, 0x1134c8c);
      *pfVar8 = (gen_bits2f((uint)gen_fl2bits(fVar12 + fVar11) & *(uint *)&REFG(undefined, 0x1134c80) ^
                            (uint)gen_fl2bits((*(float *)((char *)&auVar22 + 0)))) - fVar3) * param_4 + fVar3;
      pfVar8[1] = (gen_bits2f(uVar15 ^ (uint)gen_fl2bits((*(float *)((char *)&auVar22 + 4)))) - fVar4) * param_4 + fVar4
      ;
      pfVar8[2] = (gen_bits2f(uVar17 ^ (uint)gen_fl2bits((*(float *)((char *)&auVar22 + 8)))) - fVar5) * param_4 + fVar5
      ;
      pfVar8[3] = (gen_bits2f(uVar19 ^ (uint)gen_fl2bits((*(float *)((char *)&auVar22 + 12)))) - fVar6) * param_4 +
                  fVar6;
      pfVar1 = ((float *)GEN_TOP(((int)pfVar8 + (param_3 - param_5) + 0x10)));
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      fVar6 = *(float *)((int)pfVar8 + iVar9 + 0x14);
      fVar11 = *(float *)((int)pfVar8 + iVar9 + 0x18);
      fVar12 = *(float *)((int)pfVar8 + iVar9 + 0x1c);
      fVar13 = *(float *)((int)pfVar8 + iVar9 + 0x14);
      fVar14 = *(float *)((int)pfVar8 + iVar9 + 0x18);
      fVar16 = *(float *)((int)pfVar8 + iVar9 + 0x1c);
      pfVar8[4] = (*pfVar1 - *(float *)((int)pfVar8 + iVar9 + 0x10)) * param_4 +
                  *(float *)((int)pfVar8 + iVar9 + 0x10);
      pfVar8[5] = (fVar3 - fVar6) * param_4 + fVar13;
      pfVar8[6] = (fVar4 - fVar11) * param_4 + fVar14;
      pfVar8[7] = (fVar5 - fVar12) * param_4 + fVar16;
      fVar5 = *(float *)&REFG(undefined, 0x1138cac);
      fVar4 = *(float *)&REFG(undefined, 0x1138ca8);
      fVar3 = *(float *)&REFG(undefined, 0x1138ca4);
      if ((pfVar8[2] * pfVar8[2] + *pfVar8 * *pfVar8) +
          (pfVar8[3] * pfVar8[3] + pfVar8[1] * pfVar8[1]) < fVar7) {
        *pfVar8 = *(float *)&REFG(undefined, 0x1138ca0);
        pfVar8[1] = fVar3;
        pfVar8[2] = fVar4;
        pfVar8[3] = fVar5;
      }
      else {
        fVar3 = *pfVar8;
        fVar4 = pfVar8[1];
        fVar5 = pfVar8[2];
        fVar6 = pfVar8[3];
        fVar11 = fVar5 * fVar5 + fVar3 * fVar3;
        fVar12 = fVar6 * fVar6 + fVar4 * fVar4;
        fVar13 = fVar3 * fVar3 + fVar5 * fVar5;
        fVar14 = fVar4 * fVar4 + fVar6 * fVar6;
        fVar16 = fVar12 + fVar11;
        fVar11 = fVar11 + fVar12;
        fVar12 = fVar14 + fVar13;
        fVar13 = fVar13 + fVar14;
        (*(undefined4 *)((char *)&auVar2 + 4)) = (undefined4)gen_fl2bits(fVar11);
        (*(undefined4 *)((char *)&auVar2 + 0)) = (undefined4)gen_fl2bits(fVar16);
        (*(undefined4 *)((char *)&auVar2 + 8)) = (undefined4)gen_fl2bits(fVar12);
        (*(undefined4 *)((char *)&auVar2 + 12)) = (undefined4)gen_fl2bits(fVar13);
        gen_rsqrtps(&(auVar22), &(auVar22), &(auVar2));
        fVar21 = (*(float *)((char *)&auVar22 + 0));
        fVar14 = (*(float *)((char *)&auVar22 + 4));
        fVar18 = (*(float *)((char *)&auVar22 + 8));
        fVar20 = (*(float *)((char *)&auVar22 + 12));
        fVar11 = *(float *)&REFG(undefined, 0x1134c64) - (fVar14 * fVar11) * fVar14;
        fVar12 = *(float *)&REFG(undefined, 0x1134c68) - (fVar18 * fVar12) * fVar18;
        fVar13 = *(float *)&REFG(undefined, 0x1134c6c) - (fVar20 * fVar13) * fVar20;
        fVar14 = *(float *)&REFG(undefined, 0x1134c74) * fVar14;
        fVar18 = *(float *)&REFG(undefined, 0x1134c78) * fVar18;
        fVar20 = *(float *)&REFG(undefined, 0x1134c7c) * fVar20;
        *pfVar8 = fVar3 * ((*(float *)&REFG(undefined, 0x1134c60) - (fVar21 * fVar16) * fVar21) *
                          (*(float *)&REFG(undefined, 0x1134c70) * fVar21));
        pfVar8[1] = fVar4 * (fVar11 * fVar14);
        pfVar8[2] = fVar5 * (fVar12 * fVar18);
        pfVar8[3] = fVar6 * (fVar13 * fVar20);
      }
      pfVar8 = pfVar8 + 0xc;
      param_2 = param_2 + 0xc;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return 0;
}

/* ref: FUN_00d33d60 */
unsigned int F_00d33d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd33d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  float param_5 = (float)gen_a4;
  int param_6 = (int)gen_a5;
  float * pfVar1;
  float * pfVar2;
  float * pfVar3;
  float * pfVar4;
  float * pfVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  uint local_8;
  
  fVar11 = REFG(float, 0x10905c4);
  local_8 = 0;
  if (param_1 != 0) {
    do {
      iVar12 = (int)*(short *)(param_2 + local_8 * 2);
      pfVar1 = (float *)(param_4 + iVar12 * 0x30);
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      pfVar2 = (float *)(param_3 + iVar12 * 0x30);
      fVar10 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      pfVar3 = (float *)(param_3 + iVar12 * 0x30);
      fVar15 = pfVar3[1];
      fVar16 = pfVar3[2];
      fVar18 = pfVar3[3];
      pfVar4 = (float *)(param_6 + iVar12 * 0x30);
      *pfVar4 = (*pfVar1 - *pfVar2) * param_5 + *pfVar3;
      pfVar4[1] = (fVar7 - fVar10) * param_5 + fVar15;
      pfVar4[2] = (fVar8 - fVar13) * param_5 + fVar16;
      pfVar4[3] = (fVar9 - fVar14) * param_5 + fVar18;
      pfVar1 = (float *)(param_3 + 0x10 + iVar12 * 0x30);
      fVar7 = *pfVar1;
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      memcpy(&(auVar24), &(*(gen_v16 *)(param_4 + 0x10 + iVar12 * 0x30)), sizeof(*(gen_v16 *)(param_4 + 0x10 + iVar12 * 0x30)) < sizeof(auVar24) ? sizeof(*(gen_v16 *)(param_4 + 0x10 + iVar12 * 0x30)) : sizeof(auVar24));
      fVar15 = (*(float *)((char *)&auVar24 + 0)) * fVar7;
      fVar16 = (*(float *)((char *)&auVar24 + 4)) * fVar8;
      fVar18 = (*(float *)((char *)&auVar24 + 8)) * fVar9;
      fVar20 = (*(float *)((char *)&auVar24 + 12)) * fVar10;
      fVar13 = fVar18 + fVar15;
      fVar14 = fVar20 + fVar16;
      fVar15 = fVar15 + fVar18;
      fVar16 = fVar16 + fVar20;
      uVar17 = (uint)gen_fl2bits(fVar13 + fVar14) & *(uint *)&REFG(undefined, 0x1134c84);
      uVar19 = (uint)gen_fl2bits(fVar16 + fVar15) & *(uint *)&REFG(undefined, 0x1134c88);
      uVar21 = (uint)gen_fl2bits(fVar15 + fVar16) & *(uint *)&REFG(undefined, 0x1134c8c);
      pfVar1 = (float *)(param_6 + 0x10 + iVar12 * 0x30);
      *pfVar1 = (gen_bits2f((uint)gen_fl2bits(fVar14 + fVar13) & *(uint *)&REFG(undefined, 0x1134c80) ^
                            (uint)gen_fl2bits((*(float *)((char *)&auVar24 + 0)))) - fVar7) * param_5 + fVar7;
      pfVar1[1] = (gen_bits2f(uVar17 ^ (uint)gen_fl2bits((*(float *)((char *)&auVar24 + 4)))) - fVar8) * param_5 + fVar8
      ;
      pfVar1[2] = (gen_bits2f(uVar19 ^ (uint)gen_fl2bits((*(float *)((char *)&auVar24 + 8)))) - fVar9) * param_5 + fVar9
      ;
      pfVar1[3] = (gen_bits2f(uVar21 ^ (uint)gen_fl2bits((*(float *)((char *)&auVar24 + 12)))) - fVar10) * param_5 +
                  fVar10;
      pfVar1 = (float *)(param_4 + 0x20 + iVar12 * 0x30);
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      pfVar2 = (float *)(param_3 + 0x20 + iVar12 * 0x30);
      fVar10 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      pfVar3 = (float *)(param_6 + 0x10 + iVar12 * 0x30);
      pfVar4 = (float *)(param_3 + 0x20 + iVar12 * 0x30);
      fVar15 = pfVar4[1];
      fVar16 = pfVar4[2];
      fVar18 = pfVar4[3];
      pfVar5 = (float *)(param_6 + 0x20 + iVar12 * 0x30);
      *pfVar5 = (*pfVar1 - *pfVar2) * param_5 + *pfVar4;
      pfVar5[1] = (fVar7 - fVar10) * param_5 + fVar15;
      pfVar5[2] = (fVar8 - fVar13) * param_5 + fVar16;
      pfVar5[3] = (fVar9 - fVar14) * param_5 + fVar18;
      fVar9 = *(float *)&REFG(undefined, 0x1138cac);
      fVar8 = *(float *)&REFG(undefined, 0x1138ca8);
      fVar7 = *(float *)&REFG(undefined, 0x1138ca4);
      if ((pfVar3[2] * pfVar3[2] + *pfVar3 * *pfVar3) +
          (pfVar3[3] * pfVar3[3] + pfVar3[1] * pfVar3[1]) < fVar11) {
        *pfVar3 = *(float *)&REFG(undefined, 0x1138ca0);
        pfVar3[1] = fVar7;
        pfVar3[2] = fVar8;
        pfVar3[3] = fVar9;
      }
      else {
        fVar7 = *pfVar3;
        fVar8 = pfVar3[1];
        fVar9 = pfVar3[2];
        fVar10 = pfVar3[3];
        fVar13 = fVar9 * fVar9 + fVar7 * fVar7;
        fVar14 = fVar10 * fVar10 + fVar8 * fVar8;
        fVar15 = fVar7 * fVar7 + fVar9 * fVar9;
        fVar16 = fVar8 * fVar8 + fVar10 * fVar10;
        fVar18 = fVar14 + fVar13;
        fVar13 = fVar13 + fVar14;
        fVar14 = fVar16 + fVar15;
        fVar15 = fVar15 + fVar16;
        (*(undefined4 *)((char *)&auVar6 + 4)) = (undefined4)gen_fl2bits(fVar13);
        (*(undefined4 *)((char *)&auVar6 + 0)) = (undefined4)gen_fl2bits(fVar18);
        (*(undefined4 *)((char *)&auVar6 + 8)) = (undefined4)gen_fl2bits(fVar14);
        (*(undefined4 *)((char *)&auVar6 + 12)) = (undefined4)gen_fl2bits(fVar15);
        gen_rsqrtps(&(auVar24), &(auVar24), &(auVar6));
        fVar23 = (*(float *)((char *)&auVar24 + 0));
        fVar16 = (*(float *)((char *)&auVar24 + 4));
        fVar20 = (*(float *)((char *)&auVar24 + 8));
        fVar22 = (*(float *)((char *)&auVar24 + 12));
        fVar13 = *(float *)&REFG(undefined, 0x1134c64) - (fVar16 * fVar13) * fVar16;
        fVar14 = *(float *)&REFG(undefined, 0x1134c68) - (fVar20 * fVar14) * fVar20;
        fVar15 = *(float *)&REFG(undefined, 0x1134c6c) - (fVar22 * fVar15) * fVar22;
        fVar16 = *(float *)&REFG(undefined, 0x1134c74) * fVar16;
        fVar20 = *(float *)&REFG(undefined, 0x1134c78) * fVar20;
        fVar22 = *(float *)&REFG(undefined, 0x1134c7c) * fVar22;
        *pfVar3 = fVar7 * ((*(float *)&REFG(undefined, 0x1134c60) - (fVar23 * fVar18) * fVar23) *
                          (*(float *)&REFG(undefined, 0x1134c70) * fVar23));
        pfVar3[1] = fVar8 * (fVar13 * fVar16);
        pfVar3[2] = fVar9 * (fVar14 * fVar20);
        pfVar3[3] = fVar10 * (fVar15 * fVar22);
      }
      local_8 = local_8 + 1;
    } while (local_8 < param_1);
  }
  return 0;
}

/* ref: FUN_00d33ea0 */
unsigned int F_00d33ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd33ea0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float * pfVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint uVar21;
  uint uVar22;
  undefined1 auVar20 [16];
  uint uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM3 [16] = {0};
  
  fVar19 = *(float *)&REFG(undefined, 0x1134c7c);
  fVar17 = *(float *)&REFG(undefined, 0x1134c78);
  fVar15 = *(float *)&REFG(undefined, 0x1134c74);
  fVar13 = *(float *)&REFG(undefined, 0x1134c70);
  fVar4 = *(float *)&REFG(undefined, 0x1134c6c);
  fVar3 = *(float *)&REFG(undefined, 0x1134c68);
  fVar2 = *(float *)&REFG(undefined, 0x1134c64);
  fVar1 = *(float *)&REFG(undefined, 0x1134c60);
  fVar12 = *(float *)&REFG(undefined, 0x1134c7c);
  fVar14 = *(float *)&REFG(undefined, 0x1134c78);
  fVar16 = *(float *)&REFG(undefined, 0x1134c74);
  fVar18 = *(float *)&REFG(undefined, 0x1134c70);
  fVar5 = *(float *)&REFG(undefined, 0x1134c6c);
  fVar6 = *(float *)&REFG(undefined, 0x1134c68);
  fVar7 = *(float *)&REFG(undefined, 0x1134c64);
  fVar8 = *(float *)&REFG(undefined, 0x1134c60);
  for (iVar9 = (int)(param_2 + ((int)param_2 >> 0x1f & 3U)) >> 2; *(float *)&REFG(undefined, 0x1134c60) = fVar8,
      *(float *)&REFG(undefined, 0x1134c64) = fVar7, *(float *)&REFG(undefined, 0x1134c68) = fVar6,
      *(float *)&REFG(undefined, 0x1134c6c) = fVar5, *(float *)&REFG(undefined, 0x1134c70) = fVar18,
      *(float *)&REFG(undefined, 0x1134c74) = fVar16, *(float *)&REFG(undefined, 0x1134c78) = fVar14,
      *(float *)&REFG(undefined, 0x1134c7c) = fVar12, iVar9 != 0; iVar9 = iVar9 + -1) {
    (*(float *)((char *)&auVar24 + 0)) =
         *(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x14) +
         *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10);
    (*(float *)((char *)&auVar24 + 4)) =
         *(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x44) +
         *(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x40);
    (*(float *)((char *)&auVar24 + 8)) =
         *(float *)(param_1 + 0x74) * *(float *)(param_1 + 0x74) +
         *(float *)(param_1 + 0x70) * *(float *)(param_1 + 0x70);
    (*(float *)((char *)&auVar24 + 12)) =
         *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0xa4) +
         *(float *)(param_1 + 0xa0) * *(float *)(param_1 + 0xa0);
    (*(float *)((char *)&auVar20 + 0)) =
         (*(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x1c) +
         *(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x18)) + (*(float *)((char *)&auVar24 + 0));
    (*(float *)((char *)&auVar20 + 4)) =
         (*(float *)(param_1 + 0x4c) * *(float *)(param_1 + 0x4c) +
         *(float *)(param_1 + 0x48) * *(float *)(param_1 + 0x48)) + (*(float *)((char *)&auVar24 + 4));
    (*(float *)((char *)&auVar20 + 8)) =
         (*(float *)(param_1 + 0x7c) * *(float *)(param_1 + 0x7c) +
         *(float *)(param_1 + 0x78) * *(float *)(param_1 + 0x78)) + (*(float *)((char *)&auVar24 + 8));
    (*(float *)((char *)&auVar20 + 12)) =
         (*(float *)(param_1 + 0xac) * *(float *)(param_1 + 0xac) +
         *(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0xa8)) + (*(float *)((char *)&auVar24 + 12));
    gen_rsqrtps(&(auVar24), &(auVar24), &(auVar20));
    fVar12 = (*(float *)((char *)&auVar24 + 0));
    fVar14 = (*(float *)((char *)&auVar24 + 4));
    fVar16 = (*(float *)((char *)&auVar24 + 8));
    fVar18 = (*(float *)((char *)&auVar24 + 12));
    (*(float *)((char *)&in_XMM3 + 0)) = (fVar12 * (*(float *)((char *)&auVar20 + 0))) * fVar12;
    (*(float *)((char *)&in_XMM3 + 4)) = (fVar14 * (*(float *)((char *)&auVar20 + 4))) * fVar14;
    (*(float *)((char *)&in_XMM3 + 8)) = (fVar16 * (*(float *)((char *)&auVar20 + 8))) * fVar16;
    (*(float *)((char *)&in_XMM3 + 12)) = (fVar18 * (*(float *)((char *)&auVar20 + 12))) * fVar18;
    fVar12 = (fVar1 - (*(float *)((char *)&in_XMM3 + 0))) * (fVar13 * fVar12);
    fVar14 = (fVar2 - (*(float *)((char *)&in_XMM3 + 4))) * (fVar15 * fVar14);
    fVar16 = (fVar3 - (*(float *)((char *)&in_XMM3 + 8))) * (fVar17 * fVar16);
    fVar18 = (fVar4 - (*(float *)((char *)&in_XMM3 + 12))) * (fVar19 * fVar18);
    uVar11 = (uint)gen_fl2bits(fVar16) & *(uint *)&REFG(undefined, 0x1134d28) |
             (uint)gen_fl2bits(fVar12) & *(uint *)&REFG(undefined, 0x1134d20);
    uVar21 = (uint)gen_fl2bits(fVar18) & *(uint *)&REFG(undefined, 0x1134d2c) |
             (uint)gen_fl2bits(fVar14) & *(uint *)&REFG(undefined, 0x1134d24);
    uVar22 = (uint)gen_fl2bits(fVar12) & *(uint *)&REFG(undefined, 0x1134d20) |
             (uint)gen_fl2bits(fVar16) & *(uint *)&REFG(undefined, 0x1134d28);
    uVar23 = (uint)gen_fl2bits(fVar14) & *(uint *)&REFG(undefined, 0x1134d24) |
             (uint)gen_fl2bits(fVar18) & *(uint *)&REFG(undefined, 0x1134d2c);
    *(float *)(param_1 + 0x10) = gen_bits2f(uVar21 | uVar11) * *(float *)(param_1 + 0x10);
    *(float *)(param_1 + 0x14) = gen_bits2f(uVar11 | uVar21) * *(float *)(param_1 + 0x14);
    *(float *)(param_1 + 0x18) = gen_bits2f(uVar23 | uVar22) * *(float *)(param_1 + 0x18);
    *(float *)(param_1 + 0x1c) = gen_bits2f(uVar22 | uVar23) * *(float *)(param_1 + 0x1c);
    uVar11 = (uint)gen_fl2bits(fVar16) & *(uint *)&REFG(undefined, 0x1134d38) |
             (uint)gen_fl2bits(fVar12) & *(uint *)&REFG(undefined, 0x1134d30);
    uVar21 = (uint)gen_fl2bits(fVar18) & *(uint *)&REFG(undefined, 0x1134d3c) |
             (uint)gen_fl2bits(fVar14) & *(uint *)&REFG(undefined, 0x1134d34);
    uVar22 = (uint)gen_fl2bits(fVar12) & *(uint *)&REFG(undefined, 0x1134d30) |
             (uint)gen_fl2bits(fVar16) & *(uint *)&REFG(undefined, 0x1134d38);
    uVar23 = (uint)gen_fl2bits(fVar14) & *(uint *)&REFG(undefined, 0x1134d34) |
             (uint)gen_fl2bits(fVar18) & *(uint *)&REFG(undefined, 0x1134d3c);
    *(float *)(param_1 + 0x40) = gen_bits2f(uVar21 | uVar11) * *(float *)(param_1 + 0x40);
    *(float *)(param_1 + 0x44) = gen_bits2f(uVar11 | uVar21) * *(float *)(param_1 + 0x44);
    *(float *)(param_1 + 0x48) = gen_bits2f(uVar23 | uVar22) * *(float *)(param_1 + 0x48);
    *(float *)(param_1 + 0x4c) = gen_bits2f(uVar22 | uVar23) * *(float *)(param_1 + 0x4c);
    uVar11 = (uint)gen_fl2bits(fVar16) & *(uint *)&REFG(undefined, 0x1134d48) |
             (uint)gen_fl2bits(fVar12) & *(uint *)&REFG(undefined, 0x1134d40);
    uVar21 = (uint)gen_fl2bits(fVar18) & *(uint *)&REFG(undefined, 0x1134d4c) |
             (uint)gen_fl2bits(fVar14) & *(uint *)&REFG(undefined, 0x1134d44);
    uVar22 = (uint)gen_fl2bits(fVar12) & *(uint *)&REFG(undefined, 0x1134d40) |
             (uint)gen_fl2bits(fVar16) & *(uint *)&REFG(undefined, 0x1134d48);
    uVar23 = (uint)gen_fl2bits(fVar14) & *(uint *)&REFG(undefined, 0x1134d44) |
             (uint)gen_fl2bits(fVar18) & *(uint *)&REFG(undefined, 0x1134d4c);
    *(float *)(param_1 + 0x70) = gen_bits2f(uVar21 | uVar11) * *(float *)(param_1 + 0x70);
    *(float *)(param_1 + 0x74) = gen_bits2f(uVar11 | uVar21) * *(float *)(param_1 + 0x74);
    *(float *)(param_1 + 0x78) = gen_bits2f(uVar23 | uVar22) * *(float *)(param_1 + 0x78);
    *(float *)(param_1 + 0x7c) = gen_bits2f(uVar22 | uVar23) * *(float *)(param_1 + 0x7c);
    uVar11 = (uint)gen_fl2bits(fVar16) & *(uint *)&REFG(undefined, 0x1134d58) |
             (uint)gen_fl2bits(fVar12) & *(uint *)&REFG(undefined, 0x1134d50);
    uVar21 = (uint)gen_fl2bits(fVar18) & *(uint *)&REFG(undefined, 0x1134d5c) |
             (uint)gen_fl2bits(fVar14) & *(uint *)&REFG(undefined, 0x1134d54);
    uVar22 = (uint)gen_fl2bits(fVar12) & *(uint *)&REFG(undefined, 0x1134d50) |
             (uint)gen_fl2bits(fVar16) & *(uint *)&REFG(undefined, 0x1134d58);
    uVar23 = (uint)gen_fl2bits(fVar14) & *(uint *)&REFG(undefined, 0x1134d54) |
             (uint)gen_fl2bits(fVar18) & *(uint *)&REFG(undefined, 0x1134d5c);
    *(float *)(param_1 + 0xa0) = gen_bits2f(uVar21 | uVar11) * *(float *)(param_1 + 0xa0);
    *(float *)(param_1 + 0xa4) = gen_bits2f(uVar11 | uVar21) * *(float *)(param_1 + 0xa4);
    *(float *)(param_1 + 0xa8) = gen_bits2f(uVar23 | uVar22) * *(float *)(param_1 + 0xa8);
    *(float *)(param_1 + 0xac) = gen_bits2f(uVar22 | uVar23) * *(float *)(param_1 + 0xac);
    param_1 = param_1 + 0xc0;
    fVar12 = *(float *)&REFG(undefined, 0x1134c7c);
    fVar14 = *(float *)&REFG(undefined, 0x1134c78);
    fVar16 = *(float *)&REFG(undefined, 0x1134c74);
    fVar18 = *(float *)&REFG(undefined, 0x1134c70);
    fVar5 = *(float *)&REFG(undefined, 0x1134c6c);
    fVar6 = *(float *)&REFG(undefined, 0x1134c68);
    fVar7 = *(float *)&REFG(undefined, 0x1134c64);
    fVar8 = *(float *)&REFG(undefined, 0x1134c60);
  }
  uVar11 = param_2 & 0x80000003;
  if ((int)uVar11 < 0) {
    uVar11 = (uVar11 - 1 | 0xfffffffc) + 1;
  }
  if (uVar11 != 0) {
    pfVar10 = (float *)(param_1 + 0x10);
    do {
      fVar1 = *pfVar10;
      fVar2 = pfVar10[1];
      fVar3 = pfVar10[2];
      fVar4 = pfVar10[3];
      fVar13 = fVar3 * fVar3 + fVar1 * fVar1;
      fVar15 = fVar4 * fVar4 + fVar2 * fVar2;
      fVar17 = fVar1 * fVar1 + fVar3 * fVar3;
      fVar19 = fVar2 * fVar2 + fVar4 * fVar4;
      (*(float *)((char *)&auVar25 + 0)) = fVar15 + fVar13;
      (*(float *)((char *)&auVar25 + 4)) = fVar13 + fVar15;
      (*(float *)((char *)&auVar25 + 8)) = fVar19 + fVar17;
      (*(float *)((char *)&auVar25 + 12)) = fVar17 + fVar19;
      gen_rsqrtps(&(in_XMM3), &(in_XMM3), &(auVar25));
      fVar13 = (*(float *)((char *)&in_XMM3 + 0));
      fVar15 = (*(float *)((char *)&in_XMM3 + 4));
      fVar17 = (*(float *)((char *)&in_XMM3 + 8));
      fVar19 = (*(float *)((char *)&in_XMM3 + 12));
      *pfVar10 = fVar1 * ((fVar8 - (fVar13 * (*(float *)((char *)&auVar25 + 0))) * fVar13) * (fVar18 * fVar13));
      pfVar10[1] = fVar2 * ((fVar7 - (fVar15 * (*(float *)((char *)&auVar25 + 4))) * fVar15) * (fVar16 * fVar15));
      pfVar10[2] = fVar3 * ((fVar6 - (fVar17 * (*(float *)((char *)&auVar25 + 8))) * fVar17) * (fVar14 * fVar17));
      pfVar10[3] = fVar4 * ((fVar5 - (fVar19 * (*(float *)((char *)&auVar25 + 12))) * fVar19) * (fVar12 * fVar19));
      pfVar10 = pfVar10 + 0xc;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return 0;
}

/* ref: FUN_00d34070 */
uint F_00d34070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd34070u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  gen_v16 * pauVar4;
  gen_v16 * pauVar5;
  int iVar6;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar7 [16];
  undefined1 auVar11 [16];
  
  pauVar4 = (*(gen_v16 * PTR32 *)&gen_args[4]);
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138cbc);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138cb8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138cb4);
  pauVar5 = (gen_v16 *)0x0;
  *((undefined4 *)GEN_TOP(*(*(gen_v16 * PTR32 *)&gen_args[4]))) = *(undefined4 *)&REFG(undefined, 0x1138cb0);
  *((undefined4 *)GEN_TOP((*(*(gen_v16 * PTR32 *)&gen_args[4]) + 4))) = uVar1;
  *((undefined4 *)GEN_TOP((*(*(gen_v16 * PTR32 *)&gen_args[4]) + 8))) = uVar2;
  *((undefined4 *)GEN_TOP((*(*(gen_v16 * PTR32 *)&gen_args[4]) + 0xc))) = uVar3;
  uVar8 = *((uint *)GEN_TOP((*(*(gen_v16 * PTR32 *)&gen_args[4]) + 4))) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
  uVar9 = *((uint *)GEN_TOP((*(*(gen_v16 * PTR32 *)&gen_args[4]) + 8))) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
  uVar10 = *((uint *)GEN_TOP((*(*(gen_v16 * PTR32 *)&gen_args[4]) + 0xc))) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
  *((uint *)GEN_TOP((*(gen_v16 * PTR32 *)&gen_args[4])[1])) = *((uint *)GEN_TOP(*(*(gen_v16 * PTR32 *)&gen_args[4]))) ^ *(uint *)&REFG(undefined, 0x10ab9c0);
  *((uint *)GEN_TOP(((*(gen_v16 * PTR32 *)&gen_args[4])[1] + 4))) = uVar8;
  *((uint *)GEN_TOP(((*(gen_v16 * PTR32 *)&gen_args[4])[1] + 8))) = uVar9;
  *((uint *)GEN_TOP(((*(gen_v16 * PTR32 *)&gen_args[4])[1] + 0xc))) = uVar10;
  (*(gen_v16 * PTR32 *)(gen_frame + 0x0)) = (gen_v16 *)0x0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  if ((*(int *)&gen_args[0]) != 0) {
    (*(gen_v16 * PTR32 *)&gen_args[4]) = (gen_v16 *)((*(int *)&gen_args[0]) * 0x30);
    pauVar5 = ((gen_v16 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(gen_v16 * PTR32 *)&gen_args[4]))));
    (*(uint *)(gen_frame + 0x8)) = (int)(*(gen_v16 * PTR32 *)&gen_args[4]) / 0x30;
    if ((*(uint *)(gen_frame + 0x8)) != 0) goto LAB_00d340e3;
  }
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
LAB_00d340e3: ;
  (*(gen_v16 * PTR32 *)(gen_frame + 0x0)) = pauVar5;
  (*(int *)(gen_frame + 0x4)) = (*(int *)&gen_args[0]);
  if ((int)((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) < (*(int *)&gen_args[0])) {
    iVar6 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
    if (iVar6 <= (*(int *)&gen_args[0])) {
      iVar6 = (*(int *)&gen_args[0]);
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(gen_v16 * PTR32 *)(gen_frame + 0x0)),iVar6,0x30);
  }
  iVar6 = (*(int *)&gen_args[0]) - (*(int *)(gen_frame + 0x4));
  if (0 < iVar6) {
    pauVar5 = (*(gen_v16 * PTR32 *)(gen_frame + 0x0)) + (*(int *)(gen_frame + 0x4)) * 3 + 2;
    do {
      uVar3 = REFG(uint, 0x0135177c);
      uVar2 = REFG(uint, 0x01351778);
      uVar1 = REFG(uint, 0x01351774);
      *(undefined4 *)pauVar5[-2] = *(undefined4 *)&REFG(undefined, 0x1351770);
      *(undefined4 *)(pauVar5[-2] + 4) = uVar1;
      *(undefined4 *)(pauVar5[-2] + 8) = uVar2;
      *(undefined4 *)(pauVar5[-2] + 0xc) = uVar3;
      uVar3 = REFG(uint, 0x0135178c);
      uVar2 = REFG(uint, 0x01351788);
      uVar1 = REFG(uint, 0x01351784);
      *(undefined4 *)pauVar5[-1] = *(undefined4 *)&REFG(undefined, 0x1351780);
      *(undefined4 *)(pauVar5[-1] + 4) = uVar1;
      *(undefined4 *)(pauVar5[-1] + 8) = uVar2;
      *(undefined4 *)(pauVar5[-1] + 0xc) = uVar3;
      uVar3 = REFG(uint, 0x0135179c);
      uVar2 = REFG(uint, 0x01351798);
      uVar1 = REFG(uint, 0x01351794);
      *(undefined4 *)*pauVar5 = *(undefined4 *)&REFG(undefined, 0x1351790);
      *(undefined4 *)(*pauVar5 + 4) = uVar1;
      *(undefined4 *)(*pauVar5 + 8) = uVar2;
      *(undefined4 *)(*pauVar5 + 0xc) = uVar3;
      pauVar5 = pauVar5 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  (*(int *)(gen_frame + 0x4)) = (*(int *)&gen_args[0]);
  F_00d33240((*(int *)&gen_args[0]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[1]),(*(gen_v16 * PTR32 *)(gen_frame + 0x0)));
  if ((*(int *)&gen_args[0]) != 0) {
    memcpy(&(auVar7), &(pauVar4[1]), sizeof(pauVar4[1]) < sizeof(auVar7) ? sizeof(pauVar4[1]) : sizeof(auVar7));
    pauVar5 = (*(gen_v16 * PTR32 *)(gen_frame + 0x0));
    do {
      gen_minps(&(auVar11), &(*pauVar4), &(*pauVar5));
      memcpy(&(*pauVar4), &(auVar11), sizeof(auVar11) < sizeof(*pauVar4) ? sizeof(auVar11) : sizeof(*pauVar4));
      gen_maxps(&(auVar7), &(auVar7), &(*pauVar5));
      pauVar5 = pauVar5 + 3;
      (*(int *)&gen_args[0]) = (*(int *)&gen_args[0]) + -1;
      memcpy(&(pauVar4[1]), &(auVar7), sizeof(auVar7) < sizeof(pauVar4[1]) ? sizeof(auVar7) : sizeof(pauVar4[1]));
    } while ((*(int *)&gen_args[0]) != 0);
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    (*(uint *)(gen_frame + 0x8)) = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516ac),(*(gen_v16 * PTR32 *)(gen_frame + 0x0)),((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 0x30);
  }
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: FUN_00d341d0 */
uint F_00d341d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd341d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  LPVOID pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = *(uint *)((*(int *)&gen_args[1]) + 0x1c);
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0x80000000;
  (*(uint *)(gen_frame + 0x18)) = uVar3;
  if (uVar3 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    (*(uint *)(gen_frame + 0x14)) = *(uint *)((int)pvVar1 + 0xc);
    uVar6 = uVar3 * 2 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar1 + 8) < (int)uVar6) ||
       (*(uint *)((int)pvVar1 + 0x10) < (*(uint *)(gen_frame + 0x14)) + uVar6)) {
      (*(uint *)(gen_frame + 0x14)) = F_00d94390(pvVar1,uVar6);
    }
    else {
      *(uint *)((int)pvVar1 + 0xc) = (*(uint *)(gen_frame + 0x14)) + uVar6;
    }
  }
  (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x14));
  (*(uint *)(gen_frame + 0x10)) = uVar3 | 0x80000000;
  for (; (0 < (short)(*(undefined4 *)&gen_args[3]) && ((short)(*(undefined4 *)&gen_args[3]) != (short)(*(undefined4 *)&gen_args[2])));
      (*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[3]) + 0)) = *((short *)GEN_TOP((*(int *)((*(int *)&gen_args[1]) + 0xc) + (short)(*(undefined4 *)&gen_args[3]) * 2)))) {
    if ((*(uint *)(gen_frame + 0xc)) == ((*(uint *)(gen_frame + 0x10)) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x8)),2);
    }
    *(short *)((*(uint *)(gen_frame + 0x8)) + (*(uint *)(gen_frame + 0xc)) * 2) = (short)(*(undefined4 *)&gen_args[3]);
    (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
  }
  if (-1 < (short)(*(undefined4 *)&gen_args[3])) {
    if ((*(uint *)(gen_frame + 0xc)) == ((*(uint *)(gen_frame + 0x10)) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x8)),2);
    }
    *(short *)((*(uint *)(gen_frame + 0x8)) + (*(uint *)(gen_frame + 0xc)) * 2) = (short)(*(undefined4 *)&gen_args[2]);
    uVar3 = (*(uint *)(gen_frame + 0xc)) + 1;
    (*(uint *)(gen_frame + 0xc)) = uVar3;
    if ((int)((*(int * PTR32 *)&gen_args[4])[2] & 0x3fffffffU) < (int)uVar3) {
      uVar6 = ((*(int * PTR32 *)&gen_args[4])[2] & 0x3fffffffU) * 2;
      uVar4 = uVar3;
      if ((int)uVar3 < (int)uVar6) {
        uVar4 = uVar6;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(*(int * PTR32 *)&gen_args[4]),uVar4,2);
    }
    iVar2 = 0;
    (*(int * PTR32 *)&gen_args[4])[1] = uVar3;
    if (0 < (int)uVar3) {
      iVar5 = uVar3 * 2;
      do {
        *((undefined2 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[4]) + iVar2 * 2))) = *(undefined2 *)(iVar5 + -2 + (*(uint *)(gen_frame + 0x8)));
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + -2;
      } while (iVar2 < (int)uVar3);
    }
  }
  uVar6 = (*(uint *)(gen_frame + 0x18));
  uVar3 = (*(uint *)(gen_frame + 0x14));
  *(bool *)(*(uint *)&gen_args[0]) = -1 < (short)(*(undefined4 *)&gen_args[3]);
  if ((*(uint *)(gen_frame + 0x14)) == (*(uint *)(gen_frame + 0x8))) {
    (*(uint *)(gen_frame + 0xc)) = 0;
  }
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar6 = uVar6 * 2 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar1 + 8) < (int)uVar6) || (uVar6 + uVar3 != *(int *)((int)pvVar1 + 0xc)))
     || (*(uint *)((int)pvVar1 + 0x14) == uVar3)) {
    F_00d945c0(pvVar1,uVar3,uVar6);
  }
  else {
    *(uint *)((int)pvVar1 + 0xc) = uVar3;
  }
  (*(uint *)(gen_frame + 0xc)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x10))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x8)),((*(uint *)(gen_frame + 0x10)) & 0x3fffffff) * 2);
  }
  return (*(uint *)&gen_args[0]);
}

/* ref: FUN_00d343a0 */
uint F_00d343a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd343a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  short sVar1;
  uint uVar2;
  LPVOID pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  
  uVar7 = *(uint *)(param_1 + 0x1c);
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0x80000000;
  (*(uint *)(gen_frame + 0x18)) = uVar7;
  if (uVar7 != 0) {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    (*(uint *)(gen_frame + 0x14)) = *(uint *)((int)pvVar3 + 0xc);
    uVar6 = uVar7 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar3 + 8) < (int)uVar6) ||
       (*(uint *)((int)pvVar3 + 0x10) < (*(uint *)(gen_frame + 0x14)) + uVar6)) {
      (*(uint *)(gen_frame + 0x14)) = F_00d94390(pvVar3,uVar6);
    }
    else {
      *(uint *)((int)pvVar3 + 0xc) = (*(uint *)(gen_frame + 0x14)) + uVar6;
    }
  }
  iVar5 = *(int *)(param_1 + 0x1c);
  (*(uint *)(gen_frame + 0x10)) = uVar7 | 0x80000000;
  (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x14));
  if ((int)(uVar7 & 0x3fffffff) < iVar5) {
    iVar4 = (uVar7 & 0x3fffffff) * 2;
    if (iVar4 <= iVar5) {
      iVar4 = iVar5;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x8)),iVar4,1);
  }
  if (0 < iVar5 - (*(int *)(gen_frame + 0xc))) {
    F_00c48350((undefined *)((*(int *)(gen_frame + 0xc)) + (*(uint *)(gen_frame + 0x8))),0,iVar5 - (*(int *)(gen_frame + 0xc)));
  }
  (*(int *)(gen_frame + 0xc)) = iVar5;
  if ((char)param_4 != '\0') {
    if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_3,2);
    }
    *(short *)(*param_3 + param_3[1] * 2) = (short)param_2;
    param_3[1] = param_3[1] + 1;
  }
  sVar8 = (short)param_2 + 1;
  *(undefined1 *)((int)(short)param_2 + (*(uint *)(gen_frame + 0x8))) = 1;
  iVar5 = (int)sVar8;
  uVar7 = (*(uint *)(gen_frame + 0x8));
  if (iVar5 < *(int *)(param_1 + 0x1c)) {
    do {
      sVar1 = *((short *)GEN_TOP((*(int *)(param_1 + 0xc) + iVar5 * 2)));
      if ((sVar1 != -1) && (*(char *)((int)sVar1 + uVar7) != '\0')) {
        *(undefined1 *)(iVar5 + uVar7) = 1;
        if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_3,2);
        }
        *(short *)(*param_3 + param_3[1] * 2) = sVar8;
        param_3[1] = param_3[1] + 1;
        uVar7 = (*(uint *)(gen_frame + 0x8));
      }
      sVar8 = sVar8 + 1;
      iVar5 = (int)sVar8;
    } while (iVar5 < *(int *)(param_1 + 0x1c));
  }
  uVar2 = (*(uint *)(gen_frame + 0x18));
  uVar6 = (*(uint *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0x14)) == uVar7) {
    (*(int *)(gen_frame + 0xc)) = 0;
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar7 = uVar2 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar7) || (uVar7 + uVar6 != *(int *)((int)pvVar3 + 0xc)))
     || (*(uint *)((int)pvVar3 + 0x14) == uVar6)) {
    F_00d945c0(pvVar3,uVar6,uVar7);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = uVar6;
  }
  (*(int *)(gen_frame + 0xc)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x10))) {
    (*(uint *)(gen_frame + 0x10)) = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                         (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x10)) & 0x3fffffff);
  }
  return (*(uint *)(gen_frame + 0x10));
}

/* ref: FUN_00d34570 */
uint F_00d34570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34570u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  LPVOID pvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  
  uVar6 = *(uint *)(param_1 + 0x1c);
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0x80000000;
  (*(uint *)(gen_frame + 0x18)) = uVar6;
  if (uVar6 != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    (*(uint *)(gen_frame + 0x14)) = *(uint *)((int)pvVar2 + 0xc);
    uVar5 = uVar6 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar2 + 8) < (int)uVar5) ||
       (*(uint *)((int)pvVar2 + 0x10) < (*(uint *)(gen_frame + 0x14)) + uVar5)) {
      (*(uint *)(gen_frame + 0x14)) = F_00d94390(pvVar2,uVar5);
    }
    else {
      *(uint *)((int)pvVar2 + 0xc) = (*(uint *)(gen_frame + 0x14)) + uVar5;
    }
  }
  iVar3 = *(int *)(param_1 + 0x1c);
  (*(uint *)(gen_frame + 0x10)) = uVar6 | 0x80000000;
  (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x14));
  if ((int)(uVar6 & 0x3fffffff) < iVar3) {
    iVar4 = (uVar6 & 0x3fffffff) * 2;
    if (iVar4 <= iVar3) {
      iVar4 = iVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x8)),iVar4,1);
  }
  if (0 < iVar3 - (*(int *)(gen_frame + 0xc))) {
    F_00c48350((undefined *)((*(int *)(gen_frame + 0xc)) + (*(uint *)(gen_frame + 0x8))),0,iVar3 - (*(int *)(gen_frame + 0xc)));
  }
  iVar4 = 0;
  (*(int *)(gen_frame + 0xc)) = iVar3;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      sVar7 = *((short *)GEN_TOP((*(int *)(param_1 + 0xc) + iVar4 * 2)));
      if (sVar7 != -1) {
        *(undefined1 *)((int)sVar7 + (*(uint *)(gen_frame + 0x8))) = 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x10));
  }
  sVar7 = 0;
  uVar6 = (*(uint *)(gen_frame + 0x8));
  if (0 < *(int *)(param_1 + 0x1c)) {
    iVar3 = 0;
    do {
      if (*(char *)(iVar3 + uVar6) == '\0') {
        if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,2);
        }
        *(short *)(*param_2 + param_2[1] * 2) = sVar7;
        param_2[1] = param_2[1] + 1;
        uVar6 = (*(uint *)(gen_frame + 0x8));
      }
      sVar7 = sVar7 + 1;
      iVar3 = (int)sVar7;
    } while (iVar3 < *(int *)(param_1 + 0x1c));
  }
  uVar1 = (*(uint *)(gen_frame + 0x18));
  uVar5 = (*(uint *)(gen_frame + 0x14));
  if ((*(uint *)(gen_frame + 0x14)) == uVar6) {
    (*(int *)(gen_frame + 0xc)) = 0;
  }
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar6 = uVar1 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar2 + 8) < (int)uVar6) || (uVar6 + uVar5 != *(int *)((int)pvVar2 + 0xc)))
     || (*(uint *)((int)pvVar2 + 0x14) == uVar5)) {
    F_00d945c0(pvVar2,uVar5,uVar6);
  }
  else {
    *(uint *)((int)pvVar2 + 0xc) = uVar5;
  }
  (*(int *)(gen_frame + 0xc)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x10))) {
    (*(uint *)(gen_frame + 0x10)) = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                         (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x8)),(*(uint *)(gen_frame + 0x10)) & 0x3fffffff);
  }
  return (*(uint *)(gen_frame + 0x10));
}

/* ref: FUN_00d34710 */
uint F_00d34710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34710u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00d34730 */
uint F_00d34730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34730u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00d347b0 */
uint F_00d347b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd347b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_00d347c0 */
uint F_00d347c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd347c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00d347f0 */
uint F_00d347f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd347f0u, gen_a0, gen_a1, gen_a2, 0u);
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
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00d34840 */
unsigned int F_00d34840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34840u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined2 *)(param_1 + iVar1 * 2) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00d34880 */
uint F_00d34880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34880u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d348d0 */
unsigned int F_00d348d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd348d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined1 *)(iVar1 + param_1) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00d34900 */
uint F_00d34900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 2);
  return uVar1;
}

/* ref: FUN_00d34930 */
uint F_00d34930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd34930u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00d34940 */
uint F_00d34940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = param_2[1] & *(uint *)&REFG(undefined, 0x1134c84);
  uVar5 = param_2[2] & *(uint *)&REFG(undefined, 0x1134c88);
  uVar6 = param_2[3] & *(uint *)&REFG(undefined, 0x1134c8c);
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(uint *)this = *param_2 & *(uint *)&REFG(undefined, 0x1134c80) ^ *param_1;
  *(uint *)((int)this + 4) = uVar4 ^ uVar1;
  *(uint *)((int)this + 8) = uVar5 ^ uVar2;
  *(uint *)((int)this + 0xc) = uVar6 ^ uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d34960 */
uint F_00d34960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34960u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *in_ecx = uVar1;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar1;
  in_ecx[3] = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_00d34980 */
uint F_00d34980(unsigned int gen_a0)
{
  GEN_ENTER(0xd34980u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)(&REFG(undefined, 0x1138ad0) + param_1 * 0x10);
}

/* ref: FUN_00d34990 */
uint F_00d34990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34990u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = *param_2 * *in_ecx;
  in_ecx[1] = fVar1 * in_ecx[1];
  in_ecx[2] = fVar2 * in_ecx[2];
  in_ecx[3] = fVar3 * in_ecx[3];
  return (uint)param_2;
}

/* ref: FUN_00d349b0 */
uint F_00d349b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd349b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  fVar7 = param_3[1];
  fVar8 = param_3[2];
  fVar9 = param_3[3];
  *(float *)this = (*param_2 - *param_1) * *param_3 + *param_1;
  *(float *)((int)this + 4) = (fVar4 - fVar1) * fVar7 + fVar1;
  *(float *)((int)this + 8) = (fVar5 - fVar2) * fVar8 + fVar2;
  *(float *)((int)this + 0xc) = (fVar6 - fVar3) * fVar9 + fVar3;
  return (uint)param_3;
}

/* ref: FUN_00d349e0 */
unsigned int F_00d349e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd349e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  float * param_8 = (float *)(uintptr_t)gen_a7;
  float * param_9 = (float *)(uintptr_t)gen_a8;
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
  float fVar22;
  float fVar23;
  float fVar24;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  fVar5 = *param_4;
  fVar6 = param_4[1];
  fVar7 = param_4[2];
  fVar8 = param_4[3];
  fVar9 = *param_5;
  fVar10 = param_5[1];
  fVar11 = param_5[2];
  fVar12 = param_5[3];
  fVar13 = *param_6;
  fVar14 = param_6[1];
  fVar15 = param_6[2];
  fVar16 = param_6[3];
  fVar17 = *param_7;
  fVar18 = param_7[1];
  fVar19 = param_7[2];
  fVar20 = param_7[3];
  fVar21 = *param_8;
  fVar22 = param_8[1];
  fVar23 = param_8[2];
  fVar24 = param_8[3];
  *param_9 = (param_1[3] * param_2[3] + param_1[2] * param_2[2]) +
             (param_1[1] * param_2[1] + *param_1 * *param_2);
  param_9[1] = (fVar4 * fVar8 + fVar3 * fVar7) + (fVar2 * fVar6 + fVar1 * fVar5);
  param_9[2] = (fVar12 * fVar16 + fVar11 * fVar15) + (fVar10 * fVar14 + fVar9 * fVar13);
  param_9[3] = (fVar20 * fVar24 + fVar19 * fVar23) + (fVar18 * fVar22 + fVar17 * fVar21);
  return 0;
}

/* ref: FUN_00d34a50 */
uint F_00d34a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34a50u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = *param_2 * *in_ecx;
  in_ecx[1] = fVar1 * in_ecx[1];
  in_ecx[2] = fVar2 * in_ecx[2];
  in_ecx[3] = fVar3 * in_ecx[3];
  return (uint)param_2;
}

/* ref: FUN_00d34a70 */
uint F_00d34a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34a70u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = *param_2 * *in_ecx;
  in_ecx[1] = fVar1 * in_ecx[1];
  in_ecx[2] = fVar2 * in_ecx[2];
  in_ecx[3] = fVar3 * in_ecx[3];
  return (uint)param_2;
}

/* ref: FUN_00d34a90 */
uint F_00d34a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34a90u, gen_a0, gen_a1, gen_a2, 0u);
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
  *(float *)this = *param_1 + *param_2;
  *(float *)((int)this + 4) = fVar1 + fVar4;
  *(float *)((int)this + 8) = fVar2 + fVar5;
  *(float *)((int)this + 0xc) = fVar3 + fVar6;
  return (uint)param_1;
}

/* ref: FUN_00d34ab0 */
uint F_00d34ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd34ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  fVar7 = param_3[1];
  fVar8 = param_3[2];
  fVar9 = param_3[3];
  *(float *)this = (*param_2 - *param_1) * *param_3 + *param_1;
  *(float *)((int)this + 4) = (fVar4 - fVar1) * fVar7 + fVar1;
  *(float *)((int)this + 8) = (fVar5 - fVar2) * fVar8 + fVar2;
  *(float *)((int)this + 0xc) = (fVar6 - fVar3) * fVar9 + fVar3;
  return (uint)param_3;
}

/* ref: FUN_00d34b00 */
unsigned int F_00d34b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34b00u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rsqrtps(&(auVar6), &(in_XMM1), &(auVar1));
  fVar5 = (*(float *)((char *)&auVar6 + 0));
  fVar2 = (*(float *)((char *)&auVar6 + 4));
  fVar3 = (*(float *)((char *)&auVar6 + 8));
  fVar4 = (*(float *)((char *)&auVar6 + 12));
  fVar7 = *(float *)&REFG(undefined, 0x1134c64) - ((*(float *)((char *)&auVar1 + 4)) * fVar2) * fVar2;
  fVar8 = *(float *)&REFG(undefined, 0x1134c68) - ((*(float *)((char *)&auVar1 + 8)) * fVar3) * fVar3;
  fVar9 = *(float *)&REFG(undefined, 0x1134c6c) - ((*(float *)((char *)&auVar1 + 12)) * fVar4) * fVar4;
  fVar2 = *(float *)&REFG(undefined, 0x1134c74) * fVar2;
  fVar3 = *(float *)&REFG(undefined, 0x1134c78) * fVar3;
  fVar4 = *(float *)&REFG(undefined, 0x1134c7c) * fVar4;
  *param_1 = (*(float *)&REFG(undefined, 0x1134c60) - ((*(float *)((char *)&auVar1 + 0)) * fVar5) * fVar5) *
             (*(float *)&REFG(undefined, 0x1134c70) * fVar5);
  param_1[1] = fVar7 * fVar2;
  param_1[2] = fVar8 * fVar3;
  param_1[3] = fVar9 * fVar4;
  return 0;
}

/* ref: FUN_00d34b40 */
unsigned int F_00d34b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34b40u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rsqrtps(&(auVar6), &(in_XMM1), &(auVar1));
  fVar5 = (*(float *)((char *)&auVar6 + 0));
  fVar2 = (*(float *)((char *)&auVar6 + 4));
  fVar3 = (*(float *)((char *)&auVar6 + 8));
  fVar4 = (*(float *)((char *)&auVar6 + 12));
  fVar7 = *(float *)&REFG(undefined, 0x1134c64) - ((*(float *)((char *)&auVar1 + 4)) * fVar2) * fVar2;
  fVar8 = *(float *)&REFG(undefined, 0x1134c68) - ((*(float *)((char *)&auVar1 + 8)) * fVar3) * fVar3;
  fVar9 = *(float *)&REFG(undefined, 0x1134c6c) - ((*(float *)((char *)&auVar1 + 12)) * fVar4) * fVar4;
  fVar2 = *(float *)&REFG(undefined, 0x1134c74) * fVar2;
  fVar3 = *(float *)&REFG(undefined, 0x1134c78) * fVar3;
  fVar4 = *(float *)&REFG(undefined, 0x1134c7c) * fVar4;
  *in_ecx = (*(float *)&REFG(undefined, 0x1134c60) - ((*(float *)((char *)&auVar1 + 0)) * fVar5) * fVar5) *
            (*(float *)&REFG(undefined, 0x1134c70) * fVar5);
  in_ecx[1] = fVar7 * fVar2;
  in_ecx[2] = fVar8 * fVar3;
  in_ecx[3] = fVar9 * fVar4;
  return 0;
}

/* ref: FUN_00d34bc0 */
uint F_00d34bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  undefined2 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,2);
  }
  puVar1 = ((undefined2 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 2)));
  *puVar1 = *param_2;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d34c00 */
uint F_00d34c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34c00u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,2);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00d34c40 */
uint F_00d34c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34c40u, gen_a0, gen_a1, 0u, 0u);
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
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]));
    iVar3 = (*(int *)&gen_args[1]) / 0x30;
    if (iVar3 != 0) goto LAB_00d34c9e;
  }
  iVar3 = ((int)0x80000000);
LAB_00d34c9e: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar1;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar3;
  *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d34cd0 */
uint F_00d34cd0(unsigned int gen_a0)
{
  GEN_ENTER(0xd34cd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 * 2 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00d34d10 */
uint F_00d34d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34d10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 2 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00d34d60 */
uint F_00d34d60(unsigned int gen_a0)
{
  GEN_ENTER(0xd34d60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00d34da0 */
uint F_00d34da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34da0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00d34df0 */
uint F_00d34df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d34e30 */
unsigned int F_00d34e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34e30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  
  if (0 < param_2) {
    puVar4 = (undefined4 *)(param_1 + 0x20);
    do {
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      uVar3 = param_3[3];
      puVar4[-8] = *param_3;
      puVar4[-7] = uVar1;
      puVar4[-6] = uVar2;
      puVar4[-5] = uVar3;
      uVar1 = param_3[5];
      uVar2 = param_3[6];
      uVar3 = param_3[7];
      puVar4[-4] = param_3[4];
      puVar4[-3] = uVar1;
      puVar4[-2] = uVar2;
      puVar4[-1] = uVar3;
      uVar1 = param_3[9];
      uVar2 = param_3[10];
      uVar3 = param_3[0xb];
      *puVar4 = param_3[8];
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      puVar4 = puVar4 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}

/* ref: FUN_00d34e70 */
uint F_00d34e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d34eb0 */
uint F_00d34eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34eb0u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,1);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00d34ef0 */
unsigned int F_00d34ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34ef0u, gen_a0, gen_a1, gen_a2, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = param_3 * 0x10;
  uVar2 = *(uint *)(&REFG(undefined, 0x1134d28) + iVar1) & in_ecx[2] | *(uint *)(&REFG(undefined, 0x1134d20) + iVar1) & *in_ecx;
  uVar3 = *(uint *)(&REFG(undefined, 0x1134d2c) + iVar1) & in_ecx[3] |
          *(uint *)(&REFG(undefined, 0x1134d24) + iVar1) & in_ecx[1];
  uVar4 = *(uint *)(&REFG(undefined, 0x1134d20) + iVar1) & *in_ecx | *(uint *)(&REFG(undefined, 0x1134d28) + iVar1) & in_ecx[2];
  uVar5 = *(uint *)(&REFG(undefined, 0x1134d24) + iVar1) & in_ecx[1] |
          *(uint *)(&REFG(undefined, 0x1134d2c) + iVar1) & in_ecx[3];
  *param_2 = uVar3 | uVar2;
  param_2[1] = uVar2 | uVar3;
  param_2[2] = uVar5 | uVar4;
  param_2[3] = uVar4 | uVar5;
  return 0;
}

/* ref: FUN_00d34f30 */
unsigned int F_00d34f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34f30u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_3[2] * in_ecx[2] + *param_3 * *in_ecx;
  fVar2 = param_3[3] * in_ecx[3] + param_3[1] * in_ecx[1];
  fVar3 = *param_3 * *in_ecx + param_3[2] * in_ecx[2];
  fVar4 = param_3[1] * in_ecx[1] + param_3[3] * in_ecx[3];
  *param_2 = fVar2 + fVar1;
  param_2[1] = fVar1 + fVar2;
  param_2[2] = fVar4 + fVar3;
  param_2[3] = fVar3 + fVar4;
  return 0;
}

/* ref: FUN_00d34f60 */
unsigned int F_00d34f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd34f60u, gen_a0, gen_a1, gen_a2, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = param_3 * 0x10;
  uVar2 = *(uint *)(&REFG(undefined, 0x1134d28) + iVar1) & in_ecx[2] | *(uint *)(&REFG(undefined, 0x1134d20) + iVar1) & *in_ecx;
  uVar3 = *(uint *)(&REFG(undefined, 0x1134d2c) + iVar1) & in_ecx[3] |
          *(uint *)(&REFG(undefined, 0x1134d24) + iVar1) & in_ecx[1];
  uVar4 = *(uint *)(&REFG(undefined, 0x1134d20) + iVar1) & *in_ecx | *(uint *)(&REFG(undefined, 0x1134d28) + iVar1) & in_ecx[2];
  uVar5 = *(uint *)(&REFG(undefined, 0x1134d24) + iVar1) & in_ecx[1] |
          *(uint *)(&REFG(undefined, 0x1134d2c) + iVar1) & in_ecx[3];
  *param_2 = uVar3 | uVar2;
  param_2[1] = uVar2 | uVar3;
  param_2[2] = uVar5 | uVar4;
  param_2[3] = uVar4 | uVar5;
  return 0;
}

/* ref: FUN_00d34fa0 */
unsigned int F_00d34fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34fa0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rsqrtps(&(auVar6), &(in_XMM1), &(auVar1));
  fVar5 = (*(float *)((char *)&auVar6 + 0));
  fVar2 = (*(float *)((char *)&auVar6 + 4));
  fVar3 = (*(float *)((char *)&auVar6 + 8));
  fVar4 = (*(float *)((char *)&auVar6 + 12));
  fVar7 = *(float *)&REFG(undefined, 0x1134c64) - ((*(float *)((char *)&auVar1 + 4)) * fVar2) * fVar2;
  fVar8 = *(float *)&REFG(undefined, 0x1134c68) - ((*(float *)((char *)&auVar1 + 8)) * fVar3) * fVar3;
  fVar9 = *(float *)&REFG(undefined, 0x1134c6c) - ((*(float *)((char *)&auVar1 + 12)) * fVar4) * fVar4;
  fVar2 = *(float *)&REFG(undefined, 0x1134c74) * fVar2;
  fVar3 = *(float *)&REFG(undefined, 0x1134c78) * fVar3;
  fVar4 = *(float *)&REFG(undefined, 0x1134c7c) * fVar4;
  *in_ecx = (*(float *)&REFG(undefined, 0x1134c60) - ((*(float *)((char *)&auVar1 + 0)) * fVar5) * fVar5) *
            (*(float *)&REFG(undefined, 0x1134c70) * fVar5);
  in_ecx[1] = fVar7 * fVar2;
  in_ecx[2] = fVar8 * fVar3;
  in_ecx[3] = fVar9 * fVar4;
  return 0;
}

/* ref: FUN_00d34fd0 */
uint F_00d34fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd34fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,2);
  }
  puVar1 = ((undefined2 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 2)));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d35010 */
uint F_00d35010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd35010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if ((int)(uVar2 * 2) <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,2);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00d35050 */
unsigned int F_00d35050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd35050u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  
  uVar4 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar4 < param_2) {
    iVar6 = uVar4 * 2;
    if (iVar6 <= param_2) {
      iVar6 = param_2;
    }
    F_00d95690(param_1,this,iVar6,0x30);
  }
  iVar6 = param_2 - *(int *)((int)this + 4);
  if (0 < iVar6) {
    puVar5 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) * 0x30 + *(int *)this + 0x20)));
    do {
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      uVar3 = param_3[3];
      puVar5[-8] = *param_3;
      puVar5[-7] = uVar1;
      puVar5[-6] = uVar2;
      puVar5[-5] = uVar3;
      uVar1 = param_3[5];
      uVar2 = param_3[6];
      uVar3 = param_3[7];
      puVar5[-4] = param_3[4];
      puVar5[-3] = uVar1;
      puVar5[-2] = uVar2;
      puVar5[-1] = uVar3;
      uVar1 = param_3[9];
      uVar2 = param_3[10];
      uVar3 = param_3[0xb];
      *puVar5 = param_3[8];
      puVar5[1] = uVar1;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      puVar5 = puVar5 + 0xc;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(int *)((int)this + 4) = param_2;
  return 0;
}

/* ref: FUN_00d350d0 */
unsigned int F_00d350d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd350d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;
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
    F_00d95690(param_1,this,iVar3,1);
  }
  iVar3 = *(int *)((int)this + 4);
  iVar1 = *(int *)this;
  iVar4 = param_2 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *(undefined1 *)(iVar5 + iVar1 + iVar3) = *param_3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *(int *)((int)this + 4) = param_2;
  return 0;
}

/* ref: FUN_00d35130 */
uint F_00d35130(unsigned int gen_a0)
{
  GEN_ENTER(0xd35130u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d35170 */
uint F_00d35170(unsigned int gen_a0)
{
  GEN_ENTER(0xd35170u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d351b0 */
unsigned int F_00d351b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd351b0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *in_ecx * *in_ecx;
  fVar3 = in_ecx[1] * in_ecx[1];
  fVar5 = in_ecx[2] * in_ecx[2];
  fVar6 = in_ecx[3] * in_ecx[3];
  fVar2 = fVar5 + fVar1;
  fVar4 = fVar6 + fVar3;
  fVar1 = fVar1 + fVar5;
  fVar3 = fVar3 + fVar6;
  *param_2 = fVar4 + fVar2;
  param_2[1] = fVar2 + fVar4;
  param_2[2] = fVar3 + fVar1;
  param_2[3] = fVar1 + fVar3;
  return 0;
}

/* ref: FUN_00d351e0 */
unsigned int F_00d351e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd351e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  
  uVar4 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar4 < param_1) {
    iVar6 = uVar4 * 2;
    if (iVar6 <= param_1) {
      iVar6 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar6,0x30);
  }
  iVar6 = param_1 - *(int *)((int)this + 4);
  if (0 < iVar6) {
    puVar5 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) * 0x30 + *(int *)this + 0x20)));
    do {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      puVar5[-8] = *param_2;
      puVar5[-7] = uVar1;
      puVar5[-6] = uVar2;
      puVar5[-5] = uVar3;
      uVar1 = param_2[5];
      uVar2 = param_2[6];
      uVar3 = param_2[7];
      puVar5[-4] = param_2[4];
      puVar5[-3] = uVar1;
      puVar5[-2] = uVar2;
      puVar5[-1] = uVar3;
      uVar1 = param_2[9];
      uVar2 = param_2[10];
      uVar3 = param_2[0xb];
      *puVar5 = param_2[8];
      puVar5[1] = uVar1;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      puVar5 = puVar5 + 0xc;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  *(int *)((int)this + 4) = param_1;
  return 0;
}

/* ref: FUN_00d35260 */
unsigned int F_00d35260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd35260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
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
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,1);
  }
  iVar3 = *(int *)((int)this + 4);
  iVar1 = *(int *)this;
  iVar4 = param_1 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *(undefined1 *)(iVar5 + iVar1 + iVar3) = *param_2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *(int *)((int)this + 4) = param_1;
  return 0;
}

/* ref: FUN_00d352c0 */
uint F_00d352c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd352c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d35300 */
uint F_00d35300(unsigned int gen_a0)
{
  GEN_ENTER(0xd35300u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d35340 */
unsigned int F_00d35340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd35340u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = param_1[3];
  fVar11 = param_3[1];
  fVar6 = param_3[2];
  fVar7 = param_3[3];
  fVar13 = param_1[1];
  fVar15 = param_1[2];
  fVar16 = param_1[3];
  *param_4 = (*param_2 - *param_1) * *param_3 + *param_1;
  param_4[1] = (fVar2 - fVar5) * fVar11 + fVar13;
  param_4[2] = (fVar3 - fVar8) * fVar6 + fVar15;
  param_4[3] = (fVar4 - fVar9) * fVar7 + fVar16;
  fVar2 = param_1[4];
  fVar3 = param_1[5];
  fVar4 = param_1[6];
  fVar5 = param_1[7];
  memcpy(&(auVar17), &(*(gen_v16 *)(param_2 + 4)), sizeof(*(gen_v16 *)(param_2 + 4)) < sizeof(auVar17) ? sizeof(*(gen_v16 *)(param_2 + 4)) : sizeof(auVar17));
  fVar8 = (*(float *)((char *)&auVar17 + 0)) * fVar2;
  fVar9 = (*(float *)((char *)&auVar17 + 4)) * fVar3;
  fVar11 = (*(float *)((char *)&auVar17 + 8)) * fVar4;
  fVar13 = (*(float *)((char *)&auVar17 + 12)) * fVar5;
  fVar6 = fVar11 + fVar8;
  fVar7 = fVar13 + fVar9;
  fVar8 = fVar8 + fVar11;
  fVar9 = fVar9 + fVar13;
  uVar10 = (uint)gen_fl2bits(fVar6 + fVar7) & *(uint *)&REFG(undefined, 0x1134c84);
  uVar12 = (uint)gen_fl2bits(fVar9 + fVar8) & *(uint *)&REFG(undefined, 0x1134c88);
  uVar14 = (uint)gen_fl2bits(fVar8 + fVar9) & *(uint *)&REFG(undefined, 0x1134c8c);
  fVar8 = param_3[1];
  fVar9 = param_3[2];
  fVar11 = param_3[3];
  param_4[4] = (gen_bits2f((uint)gen_fl2bits(fVar7 + fVar6) & *(uint *)&REFG(undefined, 0x1134c80) ^
                           (uint)gen_fl2bits((*(float *)((char *)&auVar17 + 0)))) - fVar2) * *param_3 + fVar2;
  param_4[5] = (gen_bits2f(uVar10 ^ (uint)gen_fl2bits((*(float *)((char *)&auVar17 + 4)))) - fVar3) * fVar8 + fVar3;
  param_4[6] = (gen_bits2f(uVar12 ^ (uint)gen_fl2bits((*(float *)((char *)&auVar17 + 8)))) - fVar4) * fVar9 + fVar4;
  param_4[7] = (gen_bits2f(uVar14 ^ (uint)gen_fl2bits((*(float *)((char *)&auVar17 + 12)))) - fVar5) * fVar11 + fVar5;
  fVar2 = param_2[9];
  fVar3 = param_2[10];
  fVar4 = param_2[0xb];
  fVar5 = param_1[9];
  fVar8 = param_1[10];
  fVar9 = param_1[0xb];
  fVar11 = param_3[1];
  fVar6 = param_3[2];
  fVar7 = param_3[3];
  fVar13 = param_1[9];
  fVar15 = param_1[10];
  fVar16 = param_1[0xb];
  param_4[8] = (param_2[8] - param_1[8]) * *param_3 + param_1[8];
  param_4[9] = (fVar2 - fVar5) * fVar11 + fVar13;
  param_4[10] = (fVar3 - fVar8) * fVar6 + fVar15;
  param_4[0xb] = (fVar4 - fVar9) * fVar7 + fVar16;
  fVar4 = *(float *)&REFG(undefined, 0x1138cac);
  fVar3 = *(float *)&REFG(undefined, 0x1138ca8);
  fVar2 = *(float *)&REFG(undefined, 0x1138ca4);
  if ((param_4[6] * param_4[6] + param_4[4] * param_4[4]) +
      (param_4[7] * param_4[7] + param_4[5] * param_4[5]) < REFG(float, 0x10905c4)) {
    param_4[4] = *(float *)&REFG(undefined, 0x1138ca0);
    param_4[5] = fVar2;
    param_4[6] = fVar3;
    param_4[7] = fVar4;
    return 0;
  }
  fVar2 = param_4[4];
  fVar3 = param_4[5];
  fVar4 = param_4[6];
  fVar5 = param_4[7];
  fVar8 = fVar4 * fVar4 + fVar2 * fVar2;
  fVar9 = fVar5 * fVar5 + fVar3 * fVar3;
  fVar11 = fVar2 * fVar2 + fVar4 * fVar4;
  fVar6 = fVar3 * fVar3 + fVar5 * fVar5;
  fVar7 = fVar9 + fVar8;
  fVar8 = fVar8 + fVar9;
  fVar9 = fVar6 + fVar11;
  fVar11 = fVar11 + fVar6;
  (*(undefined4 *)((char *)&auVar1 + 4)) = (undefined4)gen_fl2bits(fVar8);
  (*(undefined4 *)((char *)&auVar1 + 0)) = (undefined4)gen_fl2bits(fVar7);
  (*(undefined4 *)((char *)&auVar1 + 8)) = (undefined4)gen_fl2bits(fVar9);
  (*(undefined4 *)((char *)&auVar1 + 12)) = (undefined4)gen_fl2bits(fVar11);
  gen_rsqrtps(&(auVar17), &(auVar17), &(auVar1));
  fVar16 = (*(float *)((char *)&auVar17 + 0));
  fVar6 = (*(float *)((char *)&auVar17 + 4));
  fVar13 = (*(float *)((char *)&auVar17 + 8));
  fVar15 = (*(float *)((char *)&auVar17 + 12));
  fVar8 = *(float *)&REFG(undefined, 0x1134c64) - (fVar6 * fVar8) * fVar6;
  fVar9 = *(float *)&REFG(undefined, 0x1134c68) - (fVar13 * fVar9) * fVar13;
  fVar11 = *(float *)&REFG(undefined, 0x1134c6c) - (fVar15 * fVar11) * fVar15;
  fVar6 = *(float *)&REFG(undefined, 0x1134c74) * fVar6;
  fVar13 = *(float *)&REFG(undefined, 0x1134c78) * fVar13;
  fVar15 = *(float *)&REFG(undefined, 0x1134c7c) * fVar15;
  param_4[4] = fVar2 * ((*(float *)&REFG(undefined, 0x1134c60) - (fVar16 * fVar7) * fVar16) *
                       (*(float *)&REFG(undefined, 0x1134c70) * fVar16));
  param_4[5] = fVar3 * (fVar8 * fVar6);
  param_4[6] = fVar4 * (fVar9 * fVar13);
  param_4[7] = fVar5 * (fVar11 * fVar15);
  return 0;
}

/* ref: FUN_00d35430 */
uint F_00d35430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd35430u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d354a0 */
uint F_00d354a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd354a0u, gen_a0, 0u, 0u, 0u);
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
    F_00d945c0(this_00,iVar1,uVar3);
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

/* ref: FUN_00d35530 */
uint F_00d35530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd35530u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d355a0 */
uint F_00d355a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd355a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d358a0 */
uint F_00d358a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd358a0u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  int in_ecx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  if ((in_eax != 0) && (param_3 != in_ecx)) {
    in_eax = F_00da1010(param_3,in_ecx,in_eax * 4);
  }
  return in_eax;
}

/* ref: FUN_00d358c0 */
uint F_00d358c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd358c0u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  int in_ecx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  if ((in_eax != 0) && (param_3 != in_ecx)) {
    in_eax = F_00da1010(param_3,in_ecx,in_eax * 0x30);
  }
  return in_eax;
}

/* ref: FUN_00d358f0 */
unsigned int F_00d358f0(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd358f0u, 0u, 0u, 0u, 0u);
  float in_xmm0 = (float)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  return 0;
}

/* ref: FUN_00d35910 */
uint F_00d35910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd35910u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    uVar1 = F_00da1030(param_5,0xff,param_4);
    return uVar1;
  }
  if (param_1[1] == 0) {
    uVar1 = F_00da1010(param_5,param_3,param_4);
    return uVar1;
  }
  F_00da1030(param_5,0,param_4);
  uVar1 = 0;
  if (0 < param_2) {
    do {
      iVar2 = (int)*(short *)(*param_1 + uVar1 * 2);
      if (iVar2 < param_4) {
        *(undefined1 *)(iVar2 + param_5) = *(undefined1 *)(uVar1 + param_3);
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < param_2);
  }
  return uVar1;
}

/* ref: FUN_00d35ed0 */
uint F_00d35ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd35ed0u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  int in_ecx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  if ((in_eax != 0) && (param_3 != in_ecx)) {
    in_eax = F_00da1010(param_3,in_ecx,in_eax * 4);
  }
  return in_eax;
}

/* ref: FUN_00d35ef0 */
uint F_00d35ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd35ef0u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  int in_ecx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  if ((in_eax != 0) && (param_3 != in_ecx)) {
    in_eax = F_00da1010(param_3,in_ecx,in_eax * 0x30);
  }
  return in_eax;
}

/* ref: FUN_00d363f0 */
unsigned int F_00d363f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd363f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  LPVOID pvVar1;
  uint uVar2;
  undefined4 uVar3;
  
  *(short *)((int)this + 0x48) = (short)param_1;
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1 * 200);
  *(uint *)((int)this + 0x24) = uVar2;
  *(undefined2 *)((int)this + 0x4a) = 0;
  *(undefined1 *)((int)this + 0x4d) = 1;
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((int)this + 0x1c) = 0;
  if ((char)param_3 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 0xc);
  }
  *(undefined4 *)((int)this + 0x20) = uVar3;
  *(char *)((int)this + 0x4c) = (char)param_3;
  *(undefined4 *)((int)this + 0x40) = 0;
  if (param_4 == -1) {
    param_4 = *(int *)(param_2 + 0x1c);
  }
  *(int *)((int)this + 0x38) = param_4;
  if (param_5 == -1) {
    param_5 = *(int *)(param_2 + 0x40);
  }
  *(int *)((int)this + 0x3c) = param_5;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined1 *)((int)this + 0x4e) = 0;
  return 0;
}

/* ref: FUN_00d36490 */
unsigned int F_00d36490(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xd36490u, gen_a0, gen_a1, 0u, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint param_5 = (uint)gen_a4;
  int param_6 = (int)gen_a5;
  int param_7 = (int)gen_a6;
  uint * param_8 = (uint *)(uintptr_t)gen_a7;
  uint * param_9 = (uint *)(uintptr_t)gen_a8;
  int * param_10 = (int *)(uintptr_t)gen_a9;
  float fVar1;
  uint * puVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  uint local_c;
  
  fVar1 = REFG(float, 0x1087f04);
  uVar3 = param_2[2];
  param_1[0x2e] = 0xffffffff;
  param_1[0x2f] = 0xffffffff;
  param_1[0x31] = param_5;
  param_1[3] = uVar3;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  param_1[0x30] = param_4;
  param_1[2] = (uint)gen_fl2bits(fVar1);
  puVar2 = param_1 + 4;
  if ((param_8 != (uint *)0x0) && (uVar3 = param_8[1], uVar3 != 0)) {
    *puVar2 = *param_8;
    param_1[5] = uVar3;
    param_1[0x2d] = param_1[0x2d] | 1;
    puVar2 = param_1 + 6;
  }
  if ((param_9 != (uint *)0x0) && (uVar3 = param_9[1], uVar3 != 0)) {
    *puVar2 = *param_9;
    puVar2[1] = uVar3;
    param_1[0x2d] = param_1[0x2d] | 2;
    puVar2 = puVar2 + 2;
  }
  if (param_6 != 0) {
    if (0 < *(int *)(param_6 + 0x14)) {
      iVar4 = *(int *)(param_6 + 0x14);
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)(param_6 + 0x10);
      }
      *puVar2 = uVar3;
      puVar2[1] = iVar4 * 2;
      param_1[0x2d] = param_1[0x2d] | 4;
      puVar2 = puVar2 + 2;
    }
    if (0 < *(int *)(param_6 + 0x20)) {
      iVar4 = *(int *)(param_6 + 0x20);
      if (iVar4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)(param_6 + 0x1c);
      }
      *puVar2 = uVar3;
      puVar2[1] = iVar4 * 2;
      param_1[0x2d] = param_1[0x2d] | 8;
      puVar2 = puVar2 + 2;
    }
    if (*(char *)(param_6 + 0x28) == '\x01') {
      param_1[0x2d] = param_1[0x2d] | 0x20;
    }
  }
  if (param_7 != 0) {
    param_1[0x2d] = param_1[0x2d] | 0x10;
    iVar4 = *(int *)(param_7 + 0x1c);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(param_7 + 0x18);
    }
    *puVar2 = uVar3;
    puVar2[1] = iVar4 << 6;
    iVar4 = *(int *)(param_7 + 0x28);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(param_7 + 0x24);
    }
    puVar2[2] = uVar3;
    puVar2[3] = iVar4 * 0x70;
    iVar4 = *(int *)(param_7 + 0x34);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(param_7 + 0x30);
    }
    puVar2[4] = uVar3;
    puVar2[5] = iVar4 * 2;
    iVar4 = *((int *)GEN_TOP((*(int *)(param_7 + 0x10) + 0x10)));
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP((*(int *)(param_7 + 0x10) + 0xc)));
    }
    puVar2[6] = uVar3;
    puVar2[7] = iVar4 * 2;
    iVar4 = *((int *)GEN_TOP((*(int *)(param_7 + 0x10) + 0x1c)));
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP((*(int *)(param_7 + 0x10) + 0x18)));
    }
    puVar2[8] = uVar3;
    puVar2[9] = iVar4 * 8;
    iVar4 = *((int *)GEN_TOP((*(int *)(param_7 + 0x10) + 0x28)));
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *((uint *)GEN_TOP((*(int *)(param_7 + 0x10) + 0x24)));
    }
    puVar2[10] = uVar3;
    puVar2[0xb] = iVar4 * 0x30;
    param_1[0x2e] = *((uint *)GEN_TOP((*(int *)(param_7 + 0x10) + 0x1c)));
    puVar2 = puVar2 + 0xc;
    param_1[0x2f] = *((uint *)GEN_TOP((*(int *)(param_7 + 0x10) + 0x40)));
  }
  uVar3 = ((code *)*(gen_code32 *)(*param_2 + 0x1c))(param_2);
  fVar5 = (float10)(int)(uVar3 - 1);
  if ((int)(uVar3 - 1) < 0) {
    fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar5 = fVar5 * ((float10)param_3 / ((float10)GEN_TOD(gen_bits2f(param_2[3]))));
  local_c = (uint)(longlong)TRUNC(fVar5);
  *param_1 = local_c;
  fVar1 = REFG(float, 0x1087f04);
  if (uVar3 - 2 < local_c) {
    *param_1 = uVar3 - 2;
    fVar7 = fVar1;
  }
  else {
    fVar6 = (float10)(int)local_c;
    if ((int)local_c < 0) {
      fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar5 = fVar5 - fVar6;
    fVar7 = (float)fVar5;
    if (fVar5 < (float10)0) {
      fVar7 = 0.0;
    }
    else if (REFG(float, 0x1087f04) < fVar7) {
      fVar7 = fVar1;
    }
  }
  param_1[1] = (uint)gen_fl2bits(fVar7);
  uVar3 = ((code *)*(gen_code32 *)(*param_2 + 0x20))(param_2,*param_1,(undefined4)gen_fl2bits(fVar7));
  ((code *)*(gen_code32 *)(*param_2 + 0x24))(*param_1,param_1[1],puVar2,uVar3);
  uVar3 = ((int)puVar2 + (-0x10 - (int)param_1) >> 3) + uVar3;
  iVar4 = 0;
  param_1[0x2c] = uVar3;
  if (0 < (int)uVar3) {
    puVar2 = param_1 + 4;
    do {
      iVar4 = iVar4 + ((*puVar2 & 0xf) + 0xf + puVar2[1] & 0xfffffff0);
      puVar2 = puVar2 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (*param_10 < iVar4) {
    *param_10 = iVar4;
  }
  return 0;
}

/* ref: FUN_00d36750 */
unsigned int F_00d36750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd36750u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = *(int *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(iVar2 + 0xc);
  fVar1 = *(float *)(param_2 + 8);
  iVar6 = param_2 + 0x1c;
  iVar5 = param_2 + 0x10;
  uVar4 = ((code *)*(gen_code32 *)(*(int *)param_2 + 0x38))(param_2);
  F_00d36490(param_1,uVar3,fVar1,0,0,iVar2,uVar4,iVar5,iVar6,param_3);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0xc);
  return 0;
}

/* ref: FUN_00d367b0 */
unsigned int F_00d367b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd367b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int iVar2;
  LPVOID pvVar3;
  
  iVar2 = *(int *)((int)this + 0x24);
  if (iVar2 != 0) {
    uVar1 = *(ushort *)((int)this + 0x48);
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar3 + 0x2c),iVar2,(uint)uVar1 * 200);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  return 0;
}

/* ref: FUN_00d367f0 */
uint F_00d367f0(unsigned int gen_a0)
{
  GEN_ENTER(0xd367f0u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  if (in_eax == 0) {
    return 0;
  }
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = (in_eax + 3U & 0xfffffffc) + 0x7c & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00d36840 */
unsigned int F_00d36840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36840u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  int in_edi = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  if (in_edi != 0) {
    this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar1 = (in_edi + 3U & 0xfffffffc) + 0x7c & 0xffffff80;
    if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + in_esi == *(int *)((int)this + 0xc)))
       && (*(int *)((int)this + 0x14) != in_esi)) {
      *(int *)((int)this + 0xc) = in_esi;
      return 0;
    }
    F_00d945c0(this,in_esi,uVar1);
  }
  return 0;
}

/* ref: FUN_00d36890 */
uint F_00d36890(unsigned int gen_a0)
{
  GEN_ENTER(0xd36890u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  if (in_eax == 0) {
    return 0;
  }
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = (in_eax + 3U & 0xfffffffc) * 4 + 0x7f & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00d368e0 */
uint F_00d368e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd368e0u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  if (in_eax == 0) {
    return 0;
  }
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = (in_eax + 3U & 0xfffffffc) * 0x30 + 0x7f & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00d36930 */
unsigned int F_00d36930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36930u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  int in_edi = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  if (in_edi != 0) {
    this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar1 = (in_edi + 3U & 0xfffffffc) * 4 + 0x7f & 0xffffff80;
    if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + in_esi == *(int *)((int)this + 0xc)))
       && (*(int *)((int)this + 0x14) != in_esi)) {
      *(int *)((int)this + 0xc) = in_esi;
      return 0;
    }
    F_00d945c0(this,in_esi,uVar1);
  }
  return 0;
}

/* ref: FUN_00d36980 */
unsigned int F_00d36980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36980u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  int in_edi = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  if (in_edi != 0) {
    this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar1 = (in_edi + 3U & 0xfffffffc) * 0x30 + 0x7f & 0xffffff80;
    if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + in_esi == *(int *)((int)this + 0xc)))
       && (*(int *)((int)this + 0x14) != in_esi)) {
      *(int *)((int)this + 0xc) = in_esi;
      return 0;
    }
    F_00d945c0(this,in_esi,uVar1);
  }
  return 0;
}

/* ref: FUN_00d369d0 */
uint F_00d369d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd369d0u, gen_a0, gen_a1, 0u, 0u);
  uint in_edi = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 & 3) != 0) {
    uVar1 = F_00d368e0(param_2);
    F_00da1010(uVar1,in_edi,param_2 * 0x30);
    return uVar1;
  }
  return in_edi;
}

/* ref: FUN_00d36a10 */
uint F_00d36a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36a10u, gen_a0, gen_a1, 0u, 0u);
  uint in_edi = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 & 3) != 0) {
    uVar1 = F_00d36890(param_2);
    F_00da1010(uVar1,in_edi,param_2 * 4);
    return uVar1;
  }
  return in_edi;
}

/* ref: FUN_00d36a50 */
uint F_00d36a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36a50u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (in_eax == 0) {
    return 0;
  }
  if ((in_eax & 3) != 0) {
    uVar1 = F_00d368e0(in_eax);
    return uVar1;
  }
  return param_2;
}

/* ref: FUN_00d36a70 */
uint F_00d36a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36a70u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (in_eax == 0) {
    return 0;
  }
  if ((in_eax & 3) != 0) {
    uVar1 = F_00d36890(in_eax);
    return uVar1;
  }
  return param_2;
}

/* ref: FUN_00d36cf0 */
uint F_00d36cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd36cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  int param_6 = (int)gen_a6;
  uint uVar1;
  int iVar2;
  byte bVar3;
  LPVOID pvVar4;
  uint uVar5;
  byte bVar6;
  
  F_00d367b0(this);
  uVar1 = *(uint *)(param_1 + 0x1c);
  if (param_5 == -1) {
    param_5 = *(int *)(uVar1 + 0x1c);
  }
  if (param_6 == -1) {
    param_6 = *(int *)(uVar1 + 0x40);
  }
  if (param_2 == 0) {
    param_5 = 0;
  }
  if (param_3 == 0) {
    param_6 = 0;
  }
  *(char *)((int)this + 0x4c) = (char)param_4;
  *(int *)((int)this + 0x3c) = param_6;
  *(int *)((int)this + 0x38) = param_5;
  *(int *)((int)this + 0x28) = param_2;
  *(uint *)((int)this + 0x2c) = param_3;
  *(int *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(uVar1 + 0x24);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(uVar1 + 0x30);
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x20);
  *(undefined2 *)((int)this + 0x4d) = 0;
  iVar2 = *(int *)(param_1 + 0x14);
  *(short *)((int)this + 0x48) = (short)iVar2;
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar4 + 0x2c) + 4))))
                    (*(int * PTR32 *)((int)pvVar4 + 0x2c),iVar2 * 200);
  *(uint *)((int)this + 0x24) = uVar5;
  uVar5 = 0;
  bVar6 = 0;
  *(undefined2 *)((int)this + 0x4a) = 0;
  param_3 = 0;
  bVar3 = 0;
  if (0 < iVar2) {
    do {
      uVar5 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + param_3 * 4)));
      bVar6 = bVar3;
      if (*(int *)(uVar5 + 0x28) != 0) {
        F_00d36750((uint)*(ushort *)((int)this + 0x4a) * 200 + *(int *)((int)this + 0x24),uVar5,
                     (int)this + 0x40);
        bVar6 = bVar3 | (byte)(*((uint *)GEN_TOP(((uint)*(ushort *)((int)this + 0x4a) * 200 + 0xb4 +
                                        *(int *)((int)this + 0x24)))) >> 4) & 1;
        *(ushort *)((int)this + 0x4a) = *(ushort *)((int)this + 0x4a) + 1;
      }
      uVar5 = param_3 + 1;
      param_3 = uVar5;
      bVar3 = bVar6;
    } while ((int)uVar5 < iVar2);
  }
  if ((((char)param_4 != '\0') || (bVar6 != 0)) &&
     (*(undefined4 *)((int)this + 0x20) = *(undefined4 *)(uVar1 + 0xc), uVar5 = uVar1, bVar6 != 0))
  {
    uVar5 = *(uint *)(uVar1 + 0x18);
    *(uint *)((int)this + 0x1c) = uVar5;
  }
  *(undefined1 *)((int)this + 2) = 1;
  return uVar5;
}

/* ref: FUN_00d36e20 */
unsigned int F_00d36e20(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd36e20u, gen_a0, gen_a1, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int param_7 = (int)gen_a6;
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x4a);
  *(ushort *)(param_1 + 0x4a) = uVar1 + 1;
  F_00d36490((uint)uVar1 * 200 + *(int *)(param_1 + 0x24),param_2,param_3,param_4,param_5,param_6,
               param_7,0,0,param_1 + 0x40);
  if (param_7 != 0) {
    iVar2 = *(int *)(param_7 + 0x14);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar2 + 0x18);
  }
  return 0;
}

/* ref: FUN_00d36e80 */
uint F_00d36e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36e80u, gen_a0, gen_a1, 0u, 0u);
  uint in_edi = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 & 3) != 0) {
    uVar1 = F_00d368e0(param_2);
    F_00da1010(uVar1,in_edi,param_2 * 0x30);
    return uVar1;
  }
  return in_edi;
}

/* ref: FUN_00d36ec0 */
uint F_00d36ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36ec0u, gen_a0, gen_a1, 0u, 0u);
  uint in_edi = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 & 3) != 0) {
    uVar1 = F_00d36890(param_2);
    F_00da1010(uVar1,in_edi,param_2 * 4);
    return uVar1;
  }
  return in_edi;
}

/* ref: FUN_00d36f00 */
uint F_00d36f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36f00u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (in_eax == 0) {
    return 0;
  }
  if ((in_eax & 3) != 0) {
    uVar1 = F_00d368e0(in_eax);
    return uVar1;
  }
  return param_2;
}

/* ref: FUN_00d36f20 */
uint F_00d36f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36f20u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (in_eax == 0) {
    return 0;
  }
  if ((in_eax & 3) != 0) {
    uVar1 = F_00d36890(in_eax);
    return uVar1;
  }
  return param_2;
}

/* ref: FUN_00d36f40 */
unsigned int F_00d36f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36f40u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  undefined4 in_esi = (undefined4)gen_a1;
  if ((in_eax != 0) && ((in_eax & 3) != 0)) {
    F_00d36930(in_esi,in_eax);
  }
  return 0;
}

/* ref: FUN_00d36f60 */
unsigned int F_00d36f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36f60u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  undefined4 in_esi = (undefined4)gen_a1;
  if ((in_eax != 0) && ((in_eax & 3) != 0)) {
    F_00d36980(in_esi,in_eax);
  }
  return 0;
}

/* ref: FUN_00d36f80 */
unsigned int F_00d36f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36f80u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  undefined4 in_esi = (undefined4)gen_a1;
  if ((in_eax != 0) && ((in_eax & 3) != 0)) {
    F_00d36930(in_esi,in_eax);
  }
  return 0;
}

/* ref: FUN_00d36fa0 */
unsigned int F_00d36fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36fa0u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  undefined4 in_esi = (undefined4)gen_a1;
  if ((in_eax != 0) && ((in_eax & 3) != 0)) {
    F_00d36980(in_esi,in_eax);
  }
  return 0;
}

/* ref: FUN_00d36fc0 */
uint F_00d36fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36fc0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return -(uint)((*(int *)&gen_args[0]) != 0) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00d36fd0 */
uint F_00d36fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36fd0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return -(uint)((*(int *)&gen_args[0]) != 0) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00d36fe0 */
uint F_00d36fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd36fe0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return -(uint)((*(int *)&gen_args[0]) != 0) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00d37020 */
unsigned int F_00d37020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd37020u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_eax = (float *)(uintptr_t)gen_a0;
  float * in_ecx = (float *)(uintptr_t)gen_a1;
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
  *in_eax = *param_3 * *in_ecx + *in_eax;
  in_eax[1] = fVar1 * fVar4 + in_eax[1];
  in_eax[2] = fVar2 * fVar5 + in_eax[2];
  in_eax[3] = fVar3 * fVar6 + in_eax[3];
  return 0;
}

/* ref: FUN_00d37040 */
unsigned int F_00d37040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd37040u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_eax = (float *)(uintptr_t)gen_a0;
  float * in_ecx = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = in_ecx[1];
  fVar2 = in_ecx[2];
  fVar3 = in_ecx[3];
  fVar4 = in_eax[1];
  fVar5 = in_eax[2];
  fVar6 = in_eax[3];
  *param_3 = *in_ecx * *in_eax;
  param_3[1] = fVar1 * fVar4;
  param_3[2] = fVar2 * fVar5;
  param_3[3] = fVar3 * fVar6;
  return 0;
}

/* ref: FUN_00d379d0 */
unsigned int F_00d379d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd379d0u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_eax = (float *)(uintptr_t)gen_a0;
  float * in_ecx = (float *)(uintptr_t)gen_a1;
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
  *in_eax = *param_3 * *in_ecx + *in_eax;
  in_eax[1] = fVar1 * fVar4 + in_eax[1];
  in_eax[2] = fVar2 * fVar5 + in_eax[2];
  in_eax[3] = fVar3 * fVar6 + in_eax[3];
  return 0;
}

/* ref: FUN_00d37a00 */
uint F_00d37a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd37a00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 * puVar1;
  uint uVar2;
  
  if ((char)param_3 == '\0') {
    puVar1 = (undefined4 *)F_00d314f0(param_2);
  }
  else {
    puVar1 = (undefined4 *)F_00d31520(param_2);
  }
  uVar2 = F_00d36cf0(this,param_1,*puVar1,*(undefined4 *)((int)param_2 + 0x30),param_3,param_4,
                       param_5);
  return uVar2;
}

/* ref: FUN_00d37a50 */
uint F_00d37a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd37a50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return -(uint)((*(int *)&gen_args[0]) != 0) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00d37a60 */
uint F_00d37a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd37a60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return -(uint)((*(int *)&gen_args[0]) != 0) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00d37a70 */
uint F_00d37a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd37a70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return -(uint)((*(int *)&gen_args[0]) != 0) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00d37a80 */
unsigned int F_00d37a80(void)
{
  GEN_ENTER(0xd37a80u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d37a90 */
unsigned int F_00d37a90(void)
{
  GEN_ENTER(0xd37a90u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d37aa0 */
unsigned int F_00d37aa0(void)
{
  GEN_ENTER(0xd37aa0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d37ab0 */
unsigned int F_00d37ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xd37ab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)&REFG(undefined, 0x1134db0);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)&REFG(undefined, 0x1134db4);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)&REFG(undefined, 0x1134db8);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)&REFG(undefined, 0x1134dbc);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)&REFG(undefined, 0x1134db0);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)&REFG(undefined, 0x1134db4);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)&REFG(undefined, 0x1134db8);
  (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)&REFG(undefined, 0x1134dbc);
  F_00d3b390(*(undefined4 *)((int)this + 4),*(undefined4 *)((int)this + 8),
               *(undefined4 *)((int)this + 0x1c),0,&(*(undefined4 *)(gen_frame + 0x10)),*(undefined4 *)this);
  F_00d3c440(*(undefined4 *)((int)this + 0x10),*(undefined4 *)((int)this + 0x14),
               *(undefined4 *)((int)this + 0x20),0,&(*(undefined4 *)(gen_frame + 0x0)),*(undefined4 *)((int)this + 0xc));
  return 0;
}

/* ref: FUN_00d37b30 */
uint F_00d37b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd37b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  int param_8 = (int)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 uVar1;
  LPVOID pvVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  
  if (param_8 != 0) {
    iVar5 = *param_1;
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    (*(uint *)(gen_frame + 0x2c)) = *(uint *)((int)pvVar2 + 0xc);
    uVar6 = iVar5 * 0x30 + 0x7fU & 0xffffff80;
    uVar7 = (*(uint *)(gen_frame + 0x2c)) + uVar6;
    if ((*(int *)((int)pvVar2 + 8) < (int)uVar6) || (*(uint *)((int)pvVar2 + 0x10) < uVar7)) {
      (*(uint *)(gen_frame + 0x2c)) = F_00d94390(pvVar2,uVar6);
    }
    else {
      *(uint *)((int)pvVar2 + 0xc) = uVar7;
    }
    puVar8 = (undefined4 *)param_1[7];
    if (0 < *param_1 * 3) {
      puVar3 = (undefined4 *)((*(uint *)(gen_frame + 0x2c)) + 8);
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = (undefined4 *)(*param_1 * 3);
      do {
        (*(undefined4 *)(gen_frame + 0x24)) = puVar8[2];
        (*(undefined4 *)(gen_frame + 0x20)) = puVar8[3];
        uVar1 = *puVar8;
        puVar3[-1] = puVar8[1];
        *puVar3 = (*(undefined4 *)(gen_frame + 0x24));
        puVar3[-2] = uVar1;
        puVar3[1] = (*(undefined4 *)(gen_frame + 0x20));
        puVar3 = puVar3 + 4;
        puVar8 = puVar8 + 4;
        (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x28)) + -1);
      } while ((*(undefined4 * PTR32 *)(gen_frame + 0x28)) != (undefined4 *)0x0);
    }
    puVar8 = (undefined4 *)0x0;
    if (param_4 != (undefined4 *)0x0) {
      iVar5 = *param_1;
      pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      puVar8 = *(undefined4 * PTR32 *)((int)pvVar2 + 0xc);
      uVar7 = iVar5 * 4 + 0x7fU & 0xffffff80;
      if ((*(int *)((int)pvVar2 + 8) < (int)uVar7) ||
         (*(uint *)((int)pvVar2 + 0x10) < (int)puVar8 + uVar7)) {
        puVar8 = (undefined4 *)F_00d94390(pvVar2,uVar7);
      }
      else {
        *(uint *)((int)pvVar2 + 0xc) = (int)puVar8 + uVar7;
      }
      iVar5 = *param_1;
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar8;
      puVar3 = puVar8;
      if (-1 < iVar5 + -1) {
        for (; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
      }
    }
    F_00d657d0(param_8,param_3,(*(uint *)(gen_frame + 0x2c)),0,0,param_9,param_4,puVar8);
    param_3 = (*(uint *)(gen_frame + 0x2c));
    param_4 = puVar8;
  }
  if (*(char *)((int)param_1 + 0x2d) == '\0') {
    if ((char)param_9 == '\0') {
      (*(float *)(gen_frame + 0x10)) = param_7;
      (*(float *)(gen_frame + 0x14)) = param_7;
      (*(float *)(gen_frame + 0x18)) = param_7;
      (*(float *)(gen_frame + 0x1c)) = param_7;
      (*(float *)(gen_frame + 0x0)) = param_7;
      (*(float *)(gen_frame + 0x4)) = param_7;
      (*(float *)(gen_frame + 0x8)) = param_7;
      (*(float *)(gen_frame + 0xc)) = param_7;
      F_00d3b6f0(param_1[1],param_1[2],param_3,param_4,&(*(float *)(gen_frame + 0x0)),*param_1);
      (*(float *)(gen_frame + 0x0)) = (*(float *)(gen_frame + 0x10));
      (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0x14));
      (*(float *)(gen_frame + 0x8)) = (*(float *)(gen_frame + 0x18));
      (*(float *)(gen_frame + 0xc)) = (*(float *)(gen_frame + 0x1c));
      puVar8 = (undefined4 *)
               F_00d3cfa0(param_1[4],param_1[5],param_5,param_6,&(*(float *)(gen_frame + 0x0)),param_1[3]);
    }
    else {
      (*(float *)(gen_frame + 0x0)) = param_7;
      (*(float *)(gen_frame + 0x4)) = param_7;
      (*(float *)(gen_frame + 0x8)) = param_7;
      (*(float *)(gen_frame + 0xc)) = param_7;
      (*(float *)(gen_frame + 0x10)) = param_7;
      (*(float *)(gen_frame + 0x14)) = param_7;
      (*(float *)(gen_frame + 0x18)) = param_7;
      (*(float *)(gen_frame + 0x1c)) = param_7;
      F_00d3c560(param_1[1],param_3,param_4,&(*(float *)(gen_frame + 0x10)),*param_1);
      puVar8 = (undefined4 *)F_00d3cf50(param_1[4],param_5,param_6,&(*(float *)(gen_frame + 0x0)),param_1[3]);
    }
  }
  else {
    puVar8 = (undefined4 *)param_1[1];
    puVar3 = (undefined4 *)(*param_1 * 3 & 0xfffffff);
    if (puVar3 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)(param_3 + 8);
      (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar3;
      do {
        (*(undefined4 *)(gen_frame + 0x20)) = *puVar4;
        (*(undefined4 *)(gen_frame + 0x24)) = puVar4[1];
        uVar1 = puVar4[-2];
        puVar8[1] = puVar4[-1];
        puVar8[2] = (*(undefined4 *)(gen_frame + 0x20));
        *puVar8 = uVar1;
        puVar8[3] = (*(undefined4 *)(gen_frame + 0x24));
        puVar8 = puVar8 + 4;
        puVar4 = puVar4 + 4;
        (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x28)) + -1);
      } while ((*(undefined4 * PTR32 *)(gen_frame + 0x28)) != (undefined4 *)0x0);
    }
    iVar5 = param_1[3];
    puVar8 = (undefined4 *)param_1[4];
    if (0 < iVar5) {
      do {
        *puVar8 = *param_5;
        puVar8 = puVar8 + 1;
        param_5 = param_5 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  if (param_8 != 0) {
    if (param_4 != (undefined4 *)0x0) {
      iVar5 = *param_1;
      pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar7 = iVar5 * 4 + 0x7fU & 0xffffff80;
      if (((*(int *)((int)pvVar2 + 8) < (int)uVar7) ||
          (uVar7 + (int)param_4 != *(int *)((int)pvVar2 + 0xc))) ||
         (*(undefined4 * PTR32 *)((int)pvVar2 + 0x14) == param_4)) {
        F_00d945c0(pvVar2,param_4,uVar7);
      }
      else {
        *(undefined4 * PTR32 *)((int)pvVar2 + 0xc) = param_4;
      }
    }
    iVar5 = *param_1;
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar7 = iVar5 * 0x30 + 0x7fU & 0xffffff80;
    if ((((int)uVar7 <= *(int *)((int)pvVar2 + 8)) &&
        (uVar7 + param_3 == *(int *)((int)pvVar2 + 0xc))) &&
       (*(uint *)((int)pvVar2 + 0x14) != param_3)) {
      *(uint *)((int)pvVar2 + 0xc) = param_3;
      return (uint)pvVar2;
    }
    puVar8 = (undefined4 *)F_00d945c0(pvVar2,param_3,uVar7);
  }
  return (uint)puVar8;
}

/* ref: FUN_00d37e20 */
uint F_00d37e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd37e20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint * puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  LPVOID pvVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined * this_00;
  byte bVar10;
  int iVar11;
  undefined4 * puVar12;
  int iVar13;
  undefined4 * puVar14;
  uint uVar15;
  
  (*(uint *)(gen_frame + 0x44)) = 0x80000000;
  (*(uint *)(gen_frame + 0x64)) = 0x80000000;
  (*(uint *)(gen_frame + 0x50)) = 0x80000000;
  (*(uint *)(gen_frame + 0x34)) = 0x80000000;
  (*(short * PTR32 *)(gen_frame + 0x88)) = this;
  (*(uint *)(gen_frame + 0x3c)) = 0;
  (*(uint *)(gen_frame + 0x40)) = 0;
  (*(uint *)(gen_frame + 0x5c)) = 0;
  (*(uint *)(gen_frame + 0x60)) = 0;
  (*(uint *)(gen_frame + 0x48)) = 0;
  (*(uint *)(gen_frame + 0x4c)) = 0;
  ((uint *)(gen_frame + 0x10))[7] = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = (undefined4 *)0x0;
  pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  (*(uint *)(gen_frame + 0x38)) = *(uint *)((int)pvVar7 + 0xc);
  uVar8 = (*(uint *)(gen_frame + 0x38)) + 0x80;
  if ((*(int *)((int)pvVar7 + 8) < 0x80) || (*(uint *)((int)pvVar7 + 0x10) < uVar8)) {
    (*(uint *)(gen_frame + 0x38)) = F_00d94390(pvVar7,0x80);
  }
  else {
    *(uint *)((int)pvVar7 + 0xc) = uVar8;
  }
  pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  (*(uint *)(gen_frame + 0x54)) = *(uint *)((int)pvVar7 + 0xc);
  uVar8 = (*(uint *)(gen_frame + 0x54)) + 0x80;
  if ((*(int *)((int)pvVar7 + 8) < 0x80) || (*(uint *)((int)pvVar7 + 0x10) < uVar8)) {
    (*(uint *)(gen_frame + 0x54)) = F_00d94390(pvVar7,0x80);
  }
  else {
    *(uint *)((int)pvVar7 + 0xc) = uVar8;
  }
  pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  ((uint *)(gen_frame + 0x10))[6] = *(uint *)((int)pvVar7 + 0xc);
  uVar8 = ((uint *)(gen_frame + 0x10))[6] + 0x80;
  if ((*(int *)((int)pvVar7 + 8) < 0x80) || (*(uint *)((int)pvVar7 + 0x10) < uVar8)) {
    ((uint *)(gen_frame + 0x10))[6] = F_00d94390(pvVar7,0x80);
  }
  else {
    *(uint *)((int)pvVar7 + 0xc) = uVar8;
  }
  uVar8 = param_3[0x2d];
  (*(uint *)(gen_frame + 0x68)) = 0;
  if ((uVar8 & 1) != 0) {
    (*(uint *)(gen_frame + 0x3c)) = *param_1;
    puVar1 = param_1 + 1;
    (*(uint *)(gen_frame + 0x40)) = *puVar1;
    param_1 = param_1 + 2;
    param_2 = param_2 + -1;
    (*(uint *)(gen_frame + 0x44)) = *puVar1 | 0x80000000;
  }
  if ((uVar8 & 2) != 0) {
    (*(uint *)(gen_frame + 0x5c)) = *param_1;
    puVar1 = param_1 + 1;
    (*(uint *)(gen_frame + 0x60)) = *puVar1;
    param_1 = param_1 + 2;
    param_2 = param_2 + -1;
    (*(uint *)(gen_frame + 0x64)) = *puVar1 | 0x80000000;
  }
  if ((uVar8 & 4) != 0) {
    puVar1 = param_1 + 1;
    (*(uint *)(gen_frame + 0x48)) = *param_1;
    (*(uint *)(gen_frame + 0x4c)) = *puVar1 >> 1;
    param_1 = param_1 + 2;
    param_2 = param_2 + -1;
    (*(uint *)(gen_frame + 0x50)) = *puVar1 >> 1 | 0x80000000;
  }
  if ((uVar8 & 8) != 0) {
    ((uint *)(gen_frame + 0x10))[7] = *param_1;
    puVar1 = param_1 + 1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = (undefined4 *)(*puVar1 >> 1);
    param_1 = param_1 + 2;
    param_2 = param_2 + -1;
    (*(uint *)(gen_frame + 0x34)) = *puVar1 >> 1 | 0x80000000;
  }
  if ((uVar8 & 0x10) != 0) {
    F_00da1030((*(uint *)(gen_frame + 0x38)),0,0x80);
    uVar8 = param_1[1];
    *(uint *)((*(uint *)(gen_frame + 0x38)) + 0x18) = *param_1;
    *(uint *)((*(uint *)(gen_frame + 0x38)) + 0x1c) = uVar8 >> 6;
    *(uint *)((*(uint *)(gen_frame + 0x38)) + 0x20) = uVar8 >> 6 | 0x80000000;
    iVar11 = (int)((ulonglong)param_1[3] * 0x24924925 >> 0x20);
    uVar8 = param_1[3];
    *(uint *)((*(uint *)(gen_frame + 0x38)) + 0x24) = param_1[2];
    uVar8 = (uVar8 - iVar11 >> 1) + iVar11 >> 6;
    *(uint *)((*(uint *)(gen_frame + 0x38)) + 0x28) = uVar8;
    *(uint *)((*(uint *)(gen_frame + 0x38)) + 0x2c) = uVar8 | 0x80000000;
    uVar8 = param_1[5];
    *(uint *)((*(uint *)(gen_frame + 0x38)) + 0x30) = param_1[4];
    *(uint *)((*(uint *)(gen_frame + 0x38)) + 0x34) = uVar8 >> 1;
    *(uint *)((*(uint *)(gen_frame + 0x38)) + 0x38) = uVar8 >> 1 | 0x80000000;
    (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = (undefined4 *)(param_1[7] >> 1);
    *(uint *)((*(uint *)(gen_frame + 0x54)) + 0xc) = param_1[6];
    *(undefined4 * PTR32 *)((*(uint *)(gen_frame + 0x54)) + 0x10) = (*(undefined4 * PTR32 *)(gen_frame + 0x94));
    *(uint *)((*(uint *)(gen_frame + 0x54)) + 0x14) = (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x94)) | 0x80000000;
    (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = (undefined4 *)(param_1[9] >> 3);
    *(uint *)((*(uint *)(gen_frame + 0x54)) + 0x18) = param_1[8];
    *(undefined4 * PTR32 *)((*(uint *)(gen_frame + 0x54)) + 0x1c) = (*(undefined4 * PTR32 *)(gen_frame + 0x94));
    *(uint *)((*(uint *)(gen_frame + 0x54)) + 0x20) = (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x94)) | 0x80000000;
    param_2 = param_2 + -6;
    (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = (undefined4 *)(param_1[0xb] / 0x30);
    *(uint *)((*(uint *)(gen_frame + 0x54)) + 0x24) = param_1[10];
    *(undefined4 * PTR32 *)((*(uint *)(gen_frame + 0x54)) + 0x28) = (*(undefined4 * PTR32 *)(gen_frame + 0x94));
    *(uint *)((*(uint *)(gen_frame + 0x54)) + 0x2c) = (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x94)) | 0x80000000;
    (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = *(undefined4 * PTR32 *)this;
    *(undefined4 *)(((uint *)(gen_frame + 0x10))[6] + 0xc) = *(undefined4 *)((int)this + 0x28);
    *(undefined4 * PTR32 *)(((uint *)(gen_frame + 0x10))[6] + 0x10) = (*(undefined4 * PTR32 *)(gen_frame + 0x90));
    param_1 = param_1 + 0xc;
    *(uint *)(((uint *)(gen_frame + 0x10))[6] + 0x14) = (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x90)) | 0x80000000;
    (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = *(undefined4 * PTR32 *)this;
    *(undefined4 *)(((uint *)(gen_frame + 0x10))[6] + 0x24) = *(undefined4 *)((int)this + 0x1c);
    (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x38));
    *(undefined4 * PTR32 *)(((uint *)(gen_frame + 0x10))[6] + 0x28) = (*(undefined4 * PTR32 *)(gen_frame + 0x90));
    *(uint *)(((uint *)(gen_frame + 0x10))[6] + 0x2c) = (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x90)) | 0x80000000;
    (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = *(undefined4 * PTR32 *)this;
    *(undefined4 *)(((uint *)(gen_frame + 0x10))[6] + 0x18) = *(undefined4 *)((int)this + 0x24);
    *(undefined4 * PTR32 *)(((uint *)(gen_frame + 0x10))[6] + 0x1c) = (*(undefined4 * PTR32 *)(gen_frame + 0x90));
    *(uint *)(((uint *)(gen_frame + 0x10))[6] + 0x20) = (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x90)) | 0x80000000;
    *(uint *)((*(uint *)(gen_frame + 0x38)) + 0x10) = (*(uint *)(gen_frame + 0x54));
    *(uint *)((*(uint *)(gen_frame + 0x38)) + 0x14) = ((uint *)(gen_frame + 0x10))[6];
    *(undefined4 *)((*(uint *)(gen_frame + 0x38)) + 0x74) = 1;
  }
  (*(byte *)(gen_frame + 0x5b)) = *(byte *)((int)this + 0x2d);
  if ((*(uint *)(gen_frame + 0x68)) == 0) {
    if (((*(uint *)(gen_frame + 0x4c)) == *(uint *)this) || ((*(uint *)(gen_frame + 0x4c)) == 0)) {
      *(byte *)((int)this + 0x2d) = (*(byte *)(gen_frame + 0x5b)) & 1;
    }
    else {
      *(undefined1 *)((int)this + 0x2d) = 0;
    }
  }
  else {
    bVar6 = *(int *)((*(uint *)(gen_frame + 0x68)) + 0x34) == 0 & (*(byte *)(gen_frame + 0x5b));
    *(byte *)((int)this + 0x2d) = bVar6;
    if (((*(uint *)(gen_frame + 0x4c)) == param_3[0x2e]) || ((*(uint *)(gen_frame + 0x4c)) == 0)) {
      bVar10 = 1;
    }
    else {
      bVar10 = 0;
    }
    *(byte *)((int)this + 0x2d) = bVar6 & bVar10;
  }
  if (((*(byte *)(gen_frame + 0x5b)) != 0) && (*(char *)((int)this + 0x2d) == '\0')) {
    F_00d37ab0(this);
  }
  switch((unsigned int)(uintptr_t)(param_3[3])) {
  case 1: ;
  case 2: ;
  case 3: ;
    if ((*(uint *)(gen_frame + 0x68)) == 0) {
      (*(uint *)(gen_frame + 0x80)) = *(uint *)this;
    }
    else {
      (*(uint *)(gen_frame + 0x80)) = param_3[0x2e];
    }
    pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    (*(undefined4 * PTR32 *)(gen_frame + 0x78)) = *(undefined4 * PTR32 *)((int)pvVar7 + 0xc);
    (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = (undefined4 *)((*(uint *)(gen_frame + 0x80)) * 0x30 + 0x7f & 0xffffff80);
    if ((*(int *)((int)pvVar7 + 8) < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x94))) ||
       (*(uint *)((int)pvVar7 + 0x10) < (uint)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x78)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x94))))) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x8c)) = (undefined4 *)F_00d94390(pvVar7,(*(undefined4 * PTR32 *)(gen_frame + 0x94)));
    }
    else {
      *(int *)((int)pvVar7 + 0xc) = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x78)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x94));
      (*(undefined4 * PTR32 *)(gen_frame + 0x8c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x78));
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x78)) = (undefined4 *)*(int *)((int)this + 0xc);
    pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) = *(undefined4 * PTR32 *)((int)pvVar7 + 0xc);
    (*(undefined4 * PTR32 *)(gen_frame + 0x78)) = (undefined4 *)((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x78))) * 4 + 0x7fU & 0xffffff80);
    if ((*(int *)((int)pvVar7 + 8) < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x78))) ||
       (*(uint *)((int)pvVar7 + 0x10) < (uint)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x78))))) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x74)) = (undefined4 *)F_00d94390(pvVar7,(*(undefined4 * PTR32 *)(gen_frame + 0x78)));
    }
    else {
      *(int *)((int)pvVar7 + 0xc) = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x78));
      (*(undefined4 * PTR32 *)(gen_frame + 0x74)) = (*(undefined4 * PTR32 *)(gen_frame + 0x9c));
    }
    if ((*(uint *)(gen_frame + 0x4c)) == 0) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = (*(undefined4 * PTR32 *)(gen_frame + 0x8c));
      (*(uint *)(gen_frame + 0x7c)) = (*(uint *)(gen_frame + 0x80));
      (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) = (undefined4 *)(*(uint *)(gen_frame + 0x3c));
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) = (undefined4 *)F_00d367f0((*(uint *)(gen_frame + 0x80)));
      F_00da1030((*(undefined4 * PTR32 *)(gen_frame + 0x9c)),0,(*(uint *)(gen_frame + 0x80)));
      (*(uint *)(gen_frame + 0x7c)) = 0;
      uVar8 = (*(uint *)(gen_frame + 0x4c));
      do {
        uVar2 = uVar8;
        uVar8 = uVar2 - 1;
        if ((int)uVar8 < 0) goto LAB_00d3828b;
        (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = (undefined4 *)(int)*(short *)((*(uint *)(gen_frame + 0x48)) + uVar8 * 2);
      } while ((((int)(*(undefined4 * PTR32 *)(gen_frame + 0x90)) < 0) || ((int)(*(uint *)(gen_frame + 0x80)) <= (int)(*(undefined4 * PTR32 *)(gen_frame + 0x90)))) ||
              (((*(uint *)(gen_frame + 0x40)) != 0 && (*(char *)(uVar8 + (*(uint *)(gen_frame + 0x3c))) == '\0'))));
      (*(uint *)(gen_frame + 0x7c)) = uVar2;
LAB_00d3828b: ;
      (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = (undefined4 *)F_00d368e0((*(uint *)(gen_frame + 0x7c)));
      iVar11 = (*(uint *)(gen_frame + 0x80)) * 0xc;
      puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x8c));
      if (-1 < iVar11 + -1) {
        for (; this = (*(short * PTR32 *)(gen_frame + 0x88)), iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar14 = 0;
          puVar14 = puVar14 + 1;
        }
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = *(undefined4 * PTR32 *)((int)this + 0xc);
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x30)) == (undefined4 *)0x0) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x6c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x98));
      (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = (*(undefined4 * PTR32 *)(gen_frame + 0x74));
      (*(uint *)(gen_frame + 0x70)) = (*(uint *)(gen_frame + 0x5c));
    }
    else {
      (*(uint *)(gen_frame + 0x70)) = F_00d367f0((*(undefined4 * PTR32 *)(gen_frame + 0x98)));
      F_00da1030((*(uint *)(gen_frame + 0x70)),0,(*(undefined4 * PTR32 *)(gen_frame + 0x98)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x6c)) = (undefined4 *)0x0;
      puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x30));
      do {
        puVar12 = puVar14;
        puVar14 = (undefined4 *)((int)puVar12 + -1);
        if ((int)puVar14 < 0) goto LAB_00d3832b;
        (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = (undefined4 *)(int)*(short *)(((uint *)(gen_frame + 0x10))[7] + (int)((int)(uintptr_t)puVar14) * 2);
      } while ((((int)(*(undefined4 * PTR32 *)(gen_frame + 0x84)) < 0) || ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x98)) <= (int)(*(undefined4 * PTR32 *)(gen_frame + 0x84)))) ||
              (((*(uint *)(gen_frame + 0x60)) != 0 && (*(char *)((int)puVar14 + (*(uint *)(gen_frame + 0x5c))) == '\0'))));
      (*(undefined4 * PTR32 *)(gen_frame + 0x6c)) = puVar12;
LAB_00d3832b: ;
      (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = (undefined4 *)F_00d36890((*(undefined4 * PTR32 *)(gen_frame + 0x6c)));
      puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x98));
      puVar12 = (*(undefined4 * PTR32 *)(gen_frame + 0x74));
      if (-1 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x98)) + -1) {
        for (; this = (*(short * PTR32 *)(gen_frame + 0x88)), puVar14 != (undefined4 *)0x0;
            puVar14 = (undefined4 *)((int)puVar14 + -1)) {
          *puVar12 = 0;
          puVar12 = puVar12 + 1;
        }
      }
    }
    iVar11 = param_3[3];
    if (iVar11 == 1) {
      F_00d6ae50(*param_3,GEN_TOF(gen_bits2f(param_3[1])),(*(uint *)(gen_frame + 0x7c)),(*(undefined4 * PTR32 *)(gen_frame + 0x90)),(*(undefined4 * PTR32 *)(gen_frame + 0x6c)),(*(undefined4 * PTR32 *)(gen_frame + 0x84)),param_1,
                   param_2);
    }
    else if (iVar11 == 2) {
      F_00d6c0a0(*param_3,GEN_TOF(gen_bits2f(param_3[1])),(*(uint *)(gen_frame + 0x7c)),(*(undefined4 * PTR32 *)(gen_frame + 0x6c)),
                   *(undefined4 *)((int)this + 0x1c),*(undefined4 *)((int)this + 0x20),param_1,
                   param_2,(*(undefined4 * PTR32 *)(gen_frame + 0x90)),(*(undefined4 * PTR32 *)(gen_frame + 0x84)));
    }
    else if (iVar11 == 3) {
      F_00d6de50(*param_3,GEN_TOF(gen_bits2f(param_3[1])),(*(uint *)(gen_frame + 0x7c)),(*(undefined4 * PTR32 *)(gen_frame + 0x90)),(*(undefined4 * PTR32 *)(gen_frame + 0x6c)),(*(undefined4 * PTR32 *)(gen_frame + 0x84)),param_1,
                   param_2);
    }
    puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x74));
    if (((*(uint *)(gen_frame + 0x4c)) != 0) && ((*(undefined4 * PTR32 *)(gen_frame + 0x98)) = (undefined4 *)0x0, 0 < (int)(*(uint *)(gen_frame + 0x7c)))) {
      puVar12 = (*(undefined4 * PTR32 *)(gen_frame + 0x90)) + 8;
      do {
        iVar11 = (int)*(short *)((*(uint *)(gen_frame + 0x48)) + (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x98))) * 2);
        uVar3 = puVar12[-7];
        uVar4 = puVar12[-6];
        uVar5 = puVar12[-5];
        puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0x8c)) + iVar11 * 0xc;
        *puVar9 = puVar12[-8];
        puVar9[1] = uVar3;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        uVar3 = puVar12[-3];
        uVar4 = puVar12[-2];
        uVar5 = puVar12[-1];
        puVar9[4] = puVar12[-4];
        puVar9[5] = uVar3;
        puVar9[6] = uVar4;
        puVar9[7] = uVar5;
        uVar3 = puVar12[1];
        uVar4 = puVar12[2];
        uVar5 = puVar12[3];
        puVar9[8] = *puVar12;
        puVar9[9] = uVar3;
        puVar9[10] = uVar4;
        puVar9[0xb] = uVar5;
        if ((*(uint *)(gen_frame + 0x40)) == 0) {
          *(undefined1 *)(iVar11 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c))) = 0xff;
        }
        else {
          *(undefined1 *)(iVar11 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c))) = *(undefined1 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x98)) + (*(uint *)(gen_frame + 0x3c)));
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x98)) + 1);
        puVar12 = puVar12 + 0xc;
      } while ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x98)) < (int)(*(uint *)(gen_frame + 0x7c)));
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x30)) != (undefined4 *)0x0) {
      iVar11 = 0;
      if (3 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x6c))) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = (*(undefined4 * PTR32 *)(gen_frame + 0x84)) + 2;
        (*(short * PTR32 *)(gen_frame + 0x88)) = (short *)(((uint *)(gen_frame + 0x10))[7] + 4);
        do {
          iVar13 = (int)(*(short * PTR32 *)(gen_frame + 0x88))[-2];
          (*(undefined4 * PTR32 *)(gen_frame + 0x74))[iVar13] = (*(undefined4 * PTR32 *)(gen_frame + 0x98))[-2];
          if ((*(uint *)(gen_frame + 0x60)) == 0) {
            *(undefined1 *)(iVar13 + (*(uint *)(gen_frame + 0x70))) = 0xff;
          }
          else {
            *(undefined1 *)(iVar13 + (*(uint *)(gen_frame + 0x70))) = *(undefined1 *)(iVar11 + (*(uint *)(gen_frame + 0x5c)));
          }
          iVar13 = (int)(*(short * PTR32 *)(gen_frame + 0x88))[-1];
          (*(undefined4 * PTR32 *)(gen_frame + 0x74))[iVar13] = (*(undefined4 * PTR32 *)(gen_frame + 0x98))[-1];
          if ((*(uint *)(gen_frame + 0x60)) == 0) {
            *(undefined1 *)(iVar13 + (*(uint *)(gen_frame + 0x70))) = 0xff;
          }
          else {
            *(undefined1 *)(iVar13 + (*(uint *)(gen_frame + 0x70))) = *(undefined1 *)(iVar11 + 1 + (*(uint *)(gen_frame + 0x5c)));
          }
          iVar13 = (int)*(*(short * PTR32 *)(gen_frame + 0x88));
          (*(undefined4 * PTR32 *)(gen_frame + 0x74))[iVar13] = *(*(undefined4 * PTR32 *)(gen_frame + 0x98));
          if ((*(uint *)(gen_frame + 0x60)) == 0) {
            *(undefined1 *)(iVar13 + (*(uint *)(gen_frame + 0x70))) = 0xff;
          }
          else {
            *(undefined1 *)(iVar13 + (*(uint *)(gen_frame + 0x70))) = *(undefined1 *)(iVar11 + 2 + (*(uint *)(gen_frame + 0x5c)));
          }
          iVar13 = (int)(*(short * PTR32 *)(gen_frame + 0x88))[1];
          (*(undefined4 * PTR32 *)(gen_frame + 0x74))[iVar13] = (*(undefined4 * PTR32 *)(gen_frame + 0x98))[1];
          if ((*(uint *)(gen_frame + 0x60)) == 0) {
            *(undefined1 *)(iVar13 + (*(uint *)(gen_frame + 0x70))) = 0xff;
          }
          else {
            *(undefined1 *)(iVar13 + (*(uint *)(gen_frame + 0x70))) = *(undefined1 *)(iVar11 + 3 + (*(uint *)(gen_frame + 0x5c)));
          }
          (*(short * PTR32 *)(gen_frame + 0x88)) = (*(short * PTR32 *)(gen_frame + 0x88)) + 4;
          (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = (*(undefined4 * PTR32 *)(gen_frame + 0x98)) + 4;
          iVar11 = iVar11 + 4;
        } while (iVar11 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x6c)) + -3);
      }
      for (; iVar11 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x6c)); iVar11 = iVar11 + 1) {
        iVar13 = (int)*(short *)(((uint *)(gen_frame + 0x10))[7] + iVar11 * 2);
        (*(undefined4 * PTR32 *)(gen_frame + 0x74))[iVar13] = (*(undefined4 * PTR32 *)(gen_frame + 0x84))[iVar11];
        if ((*(uint *)(gen_frame + 0x60)) == 0) {
          *(undefined1 *)(iVar13 + (*(uint *)(gen_frame + 0x70))) = 0xff;
        }
        else {
          *(undefined1 *)(iVar13 + (*(uint *)(gen_frame + 0x70))) = *(undefined1 *)(iVar11 + (*(uint *)(gen_frame + 0x5c)));
        }
      }
    }
    F_00d3d340(this,(*(uint *)(gen_frame + 0x80)),(*(undefined4 * PTR32 *)(gen_frame + 0x8c)),(*(undefined4 * PTR32 *)(gen_frame + 0x9c)),(*(undefined4 * PTR32 *)(gen_frame + 0x74)),(*(uint *)(gen_frame + 0x70)),GEN_TOF(gen_bits2f(param_3[2])),(*(uint *)(gen_frame + 0x68)),
                 (uint)((byte)((uint)param_3[0x2d] >> 5) & 1));
    (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = *(undefined4 * PTR32 *)((int)this + 0xc);
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x30)) != (undefined4 *)0x0) {
      F_00d36930((*(undefined4 * PTR32 *)(gen_frame + 0x84)),(*(undefined4 * PTR32 *)(gen_frame + 0x6c)));
      F_00d36840((*(uint *)(gen_frame + 0x70)),(*(undefined4 * PTR32 *)(gen_frame + 0x98)));
      puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x74));
    }
    if ((*(uint *)(gen_frame + 0x4c)) != 0) {
      F_00d36980((*(undefined4 * PTR32 *)(gen_frame + 0x90)),(*(uint *)(gen_frame + 0x7c)));
      F_00d36840((*(undefined4 * PTR32 *)(gen_frame + 0x9c)),(*(uint *)(gen_frame + 0x80)));
      puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x74));
    }
    pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar8 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x78)) + 0xfU & 0xfffffff0;
    if (((*(int *)((int)pvVar7 + 8) < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x78))) ||
        (uVar8 + (int)puVar14 != *(int *)((int)pvVar7 + 0xc))) ||
       (*(undefined4 * PTR32 *)((int)pvVar7 + 0x14) == puVar14)) {
      F_00d945c0(pvVar7,puVar14,uVar8);
    }
    else {
      *(undefined4 * PTR32 *)((int)pvVar7 + 0xc) = puVar14;
    }
    this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar8 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x94)) + 0xfU & 0xfffffff0;
    puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x8c));
    if ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x94)) <= *(int *)((int)this_00 + 8)) {
      iVar11 = uVar8 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x8c));
LAB_00d38c24: ;
      if ((iVar11 == *(int *)((int)this_00 + 0xc)) &&
         (*(undefined4 * PTR32 *)((int)this_00 + 0x14) != puVar14)) {
        *(undefined4 * PTR32 *)((int)this_00 + 0xc) = puVar14;
        goto switchD_00d38168_default;
      }
    }
    break;
  case 4: ;
    (*(uint *)(gen_frame + 0x7c)) = param_1[2];
    (*(uint *)(gen_frame + 0x80)) = param_1[4];
    (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = (undefined4 *)param_1[6];
    if ((*(uint *)(gen_frame + 0x68)) == 0) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x8c)) = *(undefined4 * PTR32 *)this;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x8c)) = (undefined4 *)param_3[0x2e];
    }
    puVar14 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 3U & 0xfffffffc)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8c)) + 3U & 0xfffffffc);
    (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = puVar14;
    (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) = (undefined4 *)0x0;
    do {
      uVar8 = F_00d368e0((*(undefined4 * PTR32 *)(gen_frame + 0x98)));
      *(uint *)((int)((uint *)(gen_frame + 0x10)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c))) = uVar8;
      uVar8 = F_00d36890(puVar14);
      *(uint *)((int)((uint *)(gen_frame + 0x10)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c)) + 0xcU) = uVar8;
      (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c)) + 4);
    } while ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c)) < 0xc);
    (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = (undefined4 *)F_00d36890((*(undefined4 * PTR32 *)(gen_frame + 0x98)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x78)) = (undefined4 *)F_00d36890(puVar14);
    F_00d68da0((*(uint *)(gen_frame + 0x7c)),(*(uint *)(gen_frame + 0x80)),GEN_TOF((*(undefined4 * PTR32 *)(gen_frame + 0x94))),(*(undefined4 * PTR32 *)(gen_frame + 0x8c)),*(undefined4 *)((int)this + 0xc),((uint *)(gen_frame + 0x10))[0],
                 ((uint *)(gen_frame + 0x10))[3],(*(undefined4 * PTR32 *)(gen_frame + 0x90)),(*(undefined4 * PTR32 *)(gen_frame + 0x78)),*(undefined4 *)((int)this + 0x1c),
                 *(undefined4 *)((int)this + 0x20),((uint *)(gen_frame + 0x10))[1],((uint *)(gen_frame + 0x10))[2],((uint *)(gen_frame + 0x10))[4],((uint *)(gen_frame + 0x10))[5],GEN_TOF(gen_bits2f(param_3[1])),param_4,REFG(float, 0x10947f8));
    if ((*(uint *)(gen_frame + 0x40)) != 0) {
      uVar8 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x8c)) + 0xf;
      pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar2 = *(uint *)((int)pvVar7 + 0xc);
      uVar15 = (uVar8 & 0xfffffff0) + 0x7f & 0xffffff80;
      uVar8 = uVar15 + uVar2;
      if ((*(int *)((int)pvVar7 + 8) < (int)uVar15) || (*(uint *)((int)pvVar7 + 0x10) < uVar8)) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) = (undefined4 *)F_00d94390(pvVar7,uVar15);
      }
      else {
        *(uint *)((int)pvVar7 + 0xc) = uVar8;
        (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) = (undefined4 *)uVar2;
      }
      F_00d35910(&(*(uint *)(gen_frame + 0x48)),(*(uint *)(gen_frame + 0x40)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 * PTR32 *)(gen_frame + 0x8c)),(*(undefined4 * PTR32 *)(gen_frame + 0x9c)));
      (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)&REFG(undefined, 0x1134da0);
      (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)&REFG(undefined, 0x1134da4);
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)&REFG(undefined, 0x1134da8);
      (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)&REFG(undefined, 0x1134dac);
      F_00d359a0((*(undefined4 * PTR32 *)(gen_frame + 0x90)),(*(undefined4 * PTR32 *)(gen_frame + 0x9c)),(*(undefined4 * PTR32 *)(gen_frame + 0x8c)),&(*(undefined4 *)(gen_frame + 0x0)));
      pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      if (((*(int *)((int)pvVar7 + 8) < (int)uVar15) ||
          (uVar15 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c)) != *(int *)((int)pvVar7 + 0xc))) ||
         ((undefined4 *)*(uint *)((int)pvVar7 + 0x14) == (*(undefined4 * PTR32 *)(gen_frame + 0x9c)))) {
        F_00d945c0(pvVar7,(*(undefined4 * PTR32 *)(gen_frame + 0x9c)),uVar15);
      }
      else {
        *(undefined4 * PTR32 *)((int)pvVar7 + 0xc) = (*(undefined4 * PTR32 *)(gen_frame + 0x9c));
      }
    }
    if ((*(uint *)(gen_frame + 0x60)) != 0) {
      uVar8 = *(uint *)((int)this + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = (undefined4 *)uVar8;
      pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar2 = *(uint *)((int)pvVar7 + 0xc);
      uVar15 = (uVar8 + 0xf & 0xfffffff0) + 0x7f & 0xffffff80;
      uVar8 = uVar15 + uVar2;
      if ((*(int *)((int)pvVar7 + 8) < (int)uVar15) || (*(uint *)((int)pvVar7 + 0x10) < uVar8)) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) = (undefined4 *)F_00d94390(pvVar7,uVar15);
      }
      else {
        *(uint *)((int)pvVar7 + 0xc) = uVar8;
        (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) = (undefined4 *)uVar2;
      }
      F_00d35910(((uint *)(gen_frame + 0x10)) + 7,(*(uint *)(gen_frame + 0x60)),(*(uint *)(gen_frame + 0x5c)),(*(undefined4 * PTR32 *)(gen_frame + 0x94)),(*(undefined4 * PTR32 *)(gen_frame + 0x9c)));
      (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)&REFG(undefined, 0x1134da0);
      (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)&REFG(undefined, 0x1134da4);
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)&REFG(undefined, 0x1134da8);
      (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)&REFG(undefined, 0x1134dac);
      F_00d359a0((*(undefined4 * PTR32 *)(gen_frame + 0x78)),(*(undefined4 * PTR32 *)(gen_frame + 0x9c)),(*(undefined4 * PTR32 *)(gen_frame + 0x94)),&(*(undefined4 *)(gen_frame + 0x0)));
      pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      if (((*(int *)((int)pvVar7 + 8) < (int)uVar15) ||
          (uVar15 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c)) != *(int *)((int)pvVar7 + 0xc))) ||
         ((undefined4 *)*(uint *)((int)pvVar7 + 0x14) == (*(undefined4 * PTR32 *)(gen_frame + 0x9c)))) {
        F_00d945c0(pvVar7,(*(undefined4 * PTR32 *)(gen_frame + 0x9c)),uVar15);
      }
      else {
        *(undefined4 * PTR32 *)((int)pvVar7 + 0xc) = (*(undefined4 * PTR32 *)(gen_frame + 0x9c));
      }
    }
    puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x78));
    F_00d37b30(this,(*(undefined4 * PTR32 *)(gen_frame + 0x8c)),((uint *)(gen_frame + 0x10))[0],(*(undefined4 * PTR32 *)(gen_frame + 0x90)),((uint *)(gen_frame + 0x10))[3],(*(undefined4 * PTR32 *)(gen_frame + 0x78)),GEN_TOF(gen_bits2f(param_3[2])),
                 (*(uint *)(gen_frame + 0x68)),(uint)((byte)((uint)param_3[0x2d] >> 5) & 1));
    F_00d36930(puVar14,(*(undefined4 * PTR32 *)(gen_frame + 0x84)));
    F_00d36930((*(undefined4 * PTR32 *)(gen_frame + 0x90)),(*(undefined4 * PTR32 *)(gen_frame + 0x98)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) = (undefined4 *)0x0;
    do {
      F_00d36930(*(undefined4 *)((int)((uint *)(gen_frame + 0x10)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c)) + 0x14U),(*(undefined4 * PTR32 *)(gen_frame + 0x84)));
      F_00d36980(*(undefined4 *)((int)((uint *)(gen_frame + 0x10)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c)) + 8U),(*(undefined4 * PTR32 *)(gen_frame + 0x98)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c)) - 4);
    } while (-9 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c)));
    goto switchD_00d38168_default;
  case 5: ;
    (*(uint *)(gen_frame + 0x7c)) = *param_1;
    if ((*(uint *)(gen_frame + 0x68)) == 0) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) = (undefined4 *)*(uint *)this;
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x9c)) = (undefined4 *)param_3[0x2e];
    }
    pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = *(undefined4 * PTR32 *)((int)pvVar7 + 0xc);
    (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x9c)) + 0x7fU & 0xffffff80);
    (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x84)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x98)));
    if ((*(int *)((int)pvVar7 + 8) < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x84))) || (*(uint *)((int)pvVar7 + 0x10) < (*(undefined4 * PTR32 *)(gen_frame + 0x94)))) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = (undefined4 *)F_00d94390(pvVar7,(*(undefined4 * PTR32 *)(gen_frame + 0x84)));
    }
    else {
      *(undefined4 * PTR32 *)((int)pvVar7 + 0xc) = (*(undefined4 * PTR32 *)(gen_frame + 0x94));
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = (undefined4 *)*(int *)((int)this + 0xc);
    pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    puVar14 = *(undefined4 * PTR32 *)((int)pvVar7 + 0xc);
    (*(uint *)(gen_frame + 0x80)) = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x94)) + 0x7fU & 0xffffff80;
    (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = puVar14;
    if ((*(int *)((int)pvVar7 + 8) < (int)(*(uint *)(gen_frame + 0x80))) ||
       (*(uint *)((int)pvVar7 + 0x10) < (int)puVar14 + (*(uint *)(gen_frame + 0x80)))) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = (undefined4 *)F_00d94390(pvVar7,(*(uint *)(gen_frame + 0x80)));
    }
    else {
      *(uint *)((int)pvVar7 + 0xc) = (int)puVar14 + (*(uint *)(gen_frame + 0x80));
      (*(undefined4 * PTR32 *)(gen_frame + 0x90)) = puVar14;
    }
    F_00d35910(&(*(uint *)(gen_frame + 0x48)),(*(uint *)(gen_frame + 0x40)),(*(uint *)(gen_frame + 0x3c)),(*(undefined4 * PTR32 *)(gen_frame + 0x9c)),(*(undefined4 * PTR32 *)(gen_frame + 0x98)));
    F_00d35910(((uint *)(gen_frame + 0x10)) + 7,(*(uint *)(gen_frame + 0x60)),(*(uint *)(gen_frame + 0x5c)),*(undefined4 *)((int)this + 0xc),(*(undefined4 * PTR32 *)(gen_frame + 0x90)));
    pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = *(undefined4 * PTR32 *)((int)pvVar7 + 0xc);
    (*(undefined4 * PTR32 *)(gen_frame + 0x78)) = (undefined4 *)((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x9c))) * 0x30 + 0x7fU & 0xffffff80);
    if ((*(int *)((int)pvVar7 + 8) < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x78))) ||
       (*(uint *)((int)pvVar7 + 0x10) < (uint)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x94)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x78))))) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x8c)) = (undefined4 *)F_00d94390(pvVar7,(*(undefined4 * PTR32 *)(gen_frame + 0x78)));
    }
    else {
      *(int *)((int)pvVar7 + 0xc) = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x94)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x78));
      (*(undefined4 * PTR32 *)(gen_frame + 0x8c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x94));
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = (undefined4 *)*(int *)((int)this + 0xc);
    pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    (*(short * PTR32 *)(gen_frame + 0x88)) = *(short * PTR32 *)((int)pvVar7 + 0xc);
    (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = (undefined4 *)((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x94))) * 4 + 0x7fU & 0xffffff80);
    if ((*(int *)((int)pvVar7 + 8) < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x94))) ||
       (*(uint *)((int)pvVar7 + 0x10) < (uint)((int)(*(short * PTR32 *)(gen_frame + 0x88)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x94))))) {
      (*(short * PTR32 *)(gen_frame + 0x88)) = (short *)F_00d94390(pvVar7,(*(undefined4 * PTR32 *)(gen_frame + 0x94)));
    }
    else {
      *(int *)((int)pvVar7 + 0xc) = (int)(*(short * PTR32 *)(gen_frame + 0x88)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x94));
    }
    F_00d6f800((*(uint *)(gen_frame + 0x7c)),*param_3,GEN_TOF(gen_bits2f(param_3[1])),param_1[2],
                 *(undefined4 *)((int)this + 0x1c),*(undefined4 *)((int)this + 0x20),
                 *(undefined4 *)this,*(undefined4 *)((int)this + 0xc),(*(undefined4 * PTR32 *)(gen_frame + 0x8c)),(*(short * PTR32 *)(gen_frame + 0x88)),(*(undefined4 * PTR32 *)(gen_frame + 0x98)),
                 (*(undefined4 * PTR32 *)(gen_frame + 0x90)));
    F_00d3d340(this,(*(undefined4 * PTR32 *)(gen_frame + 0x9c)),(*(undefined4 * PTR32 *)(gen_frame + 0x8c)),(*(undefined4 * PTR32 *)(gen_frame + 0x98)),(*(short * PTR32 *)(gen_frame + 0x88)),(*(undefined4 * PTR32 *)(gen_frame + 0x90)),GEN_TOF(gen_bits2f(param_3[2])),(*(uint *)(gen_frame + 0x68)),
                 (uint)((byte)((uint)param_3[0x2d] >> 5) & 1));
    pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar8 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x94)) + 0xfU & 0xfffffff0;
    if (((*(int *)((int)pvVar7 + 8) < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x94))) ||
        (uVar8 + (int)(*(short * PTR32 *)(gen_frame + 0x88)) != *(int *)((int)pvVar7 + 0xc))) ||
       (*(short * PTR32 *)((int)pvVar7 + 0x14) == (*(short * PTR32 *)(gen_frame + 0x88)))) {
      F_00d945c0(pvVar7,(*(short * PTR32 *)(gen_frame + 0x88)),uVar8);
    }
    else {
      *(short * PTR32 *)((int)pvVar7 + 0xc) = (*(short * PTR32 *)(gen_frame + 0x88));
    }
    pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar8 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x78)) + 0xfU & 0xfffffff0;
    if (((*(int *)((int)pvVar7 + 8) < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x78))) ||
        ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x8c)) + uVar8 != *(int *)((int)pvVar7 + 0xc))) ||
       (*(undefined4 * PTR32 *)((int)pvVar7 + 0x14) == (*(undefined4 * PTR32 *)(gen_frame + 0x8c)))) {
      F_00d945c0(pvVar7,(*(undefined4 * PTR32 *)(gen_frame + 0x8c)),uVar8);
    }
    else {
      *(undefined4 * PTR32 *)((int)pvVar7 + 0xc) = (*(undefined4 * PTR32 *)(gen_frame + 0x8c));
    }
    pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar8 = (*(uint *)(gen_frame + 0x80)) + 0xf & 0xfffffff0;
    if (((*(int *)((int)pvVar7 + 8) < (int)(*(uint *)(gen_frame + 0x80))) ||
        ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x90)) + uVar8 != *(int *)((int)pvVar7 + 0xc))) ||
       (*(undefined4 * PTR32 *)((int)pvVar7 + 0x14) == (*(undefined4 * PTR32 *)(gen_frame + 0x90)))) {
      F_00d945c0(pvVar7,(*(undefined4 * PTR32 *)(gen_frame + 0x90)),uVar8);
    }
    else {
      *(undefined4 * PTR32 *)((int)pvVar7 + 0xc) = (*(undefined4 * PTR32 *)(gen_frame + 0x90));
    }
    this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar8 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x84)) + 0xfU & 0xfffffff0;
    puVar14 = (*(undefined4 * PTR32 *)(gen_frame + 0x98));
    if ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x84)) <= *(int *)((int)this_00 + 8)) {
      iVar11 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x98)) + uVar8;
      goto LAB_00d38c24;
    }
    break;
  default: ;
    goto switchD_00d38168_default;
  }
  F_00d945c0(this_00,puVar14,uVar8);
switchD_00d38168_default: ;
  pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar7 + 8) < 0x80) || (((uint *)(gen_frame + 0x10))[6] + 0x80 != *(int *)((int)pvVar7 + 0xc))) ||
     (*(uint *)((int)pvVar7 + 0x14) == ((uint *)(gen_frame + 0x10))[6])) {
    F_00d945c0(pvVar7,((uint *)(gen_frame + 0x10))[6],0x80);
  }
  else {
    *(uint *)((int)pvVar7 + 0xc) = ((uint *)(gen_frame + 0x10))[6];
  }
  pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar7 + 8) < 0x80) || ((*(uint *)(gen_frame + 0x54)) + 0x80 != *(int *)((int)pvVar7 + 0xc))) ||
     (*(uint *)((int)pvVar7 + 0x14) == (*(uint *)(gen_frame + 0x54)))) {
    F_00d945c0(pvVar7,(*(uint *)(gen_frame + 0x54)),0x80);
  }
  else {
    *(uint *)((int)pvVar7 + 0xc) = (*(uint *)(gen_frame + 0x54));
  }
  pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar7 + 8) < 0x80) || ((*(uint *)(gen_frame + 0x38)) + 0x80 != *(int *)((int)pvVar7 + 0xc))) ||
     (*(uint *)((int)pvVar7 + 0x14) == (*(uint *)(gen_frame + 0x38)))) {
    F_00d945c0(pvVar7,(*(uint *)(gen_frame + 0x38)),0x80);
  }
  else {
    *(uint *)((int)pvVar7 + 0xc) = (*(uint *)(gen_frame + 0x38));
  }
  if (-1 < (int)(*(uint *)(gen_frame + 0x34))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),((uint *)(gen_frame + 0x10))[7],((*(uint *)(gen_frame + 0x34)) & 0x3fffffff) * 2);
  }
  if (-1 < (int)(*(uint *)(gen_frame + 0x50))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x48)),((*(uint *)(gen_frame + 0x50)) & 0x3fffffff) * 2);
  }
  if (-1 < (int)(*(uint *)(gen_frame + 0x64))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x5c)),(*(uint *)(gen_frame + 0x64)) & 0x3fffffff)
    ;
  }
  if (-1 < (int)(*(uint *)(gen_frame + 0x44))) {
    (*(uint *)(gen_frame + 0x44)) = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                         (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x3c)),(*(uint *)(gen_frame + 0x44)) & 0x3fffffff);
  }
  return (*(uint *)(gen_frame + 0x44));
}

/* ref: FUN_00d38d80 */
unsigned int F_00d38d80(unsigned int gen_a0)
{
  GEN_ENTER(0xd38d80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  float * pfVar1;
  float fVar2;
  undefined4 * puVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ushort uVar11;
  undefined4 * PTR32 * ppuVar12;
  undefined1 uVar13;
  LPVOID pvVar14;
  uint uVar15;
  gen_v16 * pauVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  float * pfVar20;
  undefined4 * puVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  float fVar26;
  float fVar27;
  undefined1 auVar25 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  if (*(short *)(param_1 + 0x4a) == 0) {
    return 0;
  }
  pvVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar21 = *(undefined4 * PTR32 *)((int)pvVar14 + 4);
  if (puVar21 < *(undefined4 * PTR32 *)((int)pvVar14 + 0xc)) {
    *puVar21 = "LtSampleBlendJob";
    puVar21[3] = "StInitDMA";
    uVar4 = rdtsc();
    (*(gen_v16 * PTR32 *)(gen_frame + 0x9c)) = (gen_v16 *)uVar4;
    puVar21[1] = (gen_v16 *)uVar4;
    *(undefined4 * PTR32 *)((int)pvVar14 + 4) = puVar21 + 4;
  }
  (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x84)) = &(*(undefined4 * PTR32 *)(gen_frame + 0xa4));
  (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x88)) = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
  (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = (undefined4 *)
             F_00d37a50((uint)*(ushort *)(param_1 + 0x4a),*(undefined4 *)(param_1 + 0x24));
  (*(float * PTR32 *)(gen_frame + 0x34)) = (float *)F_00d36e80(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x38));
  (*(uint *)(gen_frame + 0x30)) = F_00d36ec0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x3c));
  (*(uint *)(gen_frame + 0x3c)) = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    (*(uint *)(gen_frame + 0x3c)) = F_00d37a60(*(undefined4 *)(param_1 + 0x38),*(int *)(param_1 + 0x20));
  }
  (*(uint *)(gen_frame + 0x90)) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    (*(uint *)(gen_frame + 0x90)) = F_00d37a70(*(undefined4 *)(param_1 + 0x38),*(int *)(param_1 + 0x1c));
  }
  if (*(char *)(param_1 + 0x4d) != '\0') {
    (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = (*(undefined4 * PTR32 *)(gen_frame + 0x94));
    (*(int *)(gen_frame + 0x98)) = 0;
    if (*(short *)(param_1 + 0x4a) != 0) {
      puVar21 = (*(undefined4 * PTR32 *)(gen_frame + 0x94)) + 0x30;
      (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = puVar21;
      do {
        (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = puVar21;
        (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
        puVar3 = *(undefined4 * PTR32 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0xa8)) + 4);
        if (puVar3 < *(undefined4 * PTR32 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0xa8)) + 0xc)) {
          *puVar3 = "StAnimDMA";
          uVar4 = rdtsc();
          (*(gen_v16 * PTR32 *)(gen_frame + 0x9c)) = (gen_v16 *)uVar4;
          puVar3[1] = (gen_v16 *)uVar4;
          *(undefined4 * PTR32 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0xa8)) + 4) = puVar3 + 3;
        }
        if ((*(int *)(gen_frame + 0x98)) < (int)(*(ushort *)(param_1 + 0x4a) - 1)) {
          *(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x88)) = puVar21 + 2;
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
        puVar3 = *(undefined4 * PTR32 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0xa8)) + 4);
        if (puVar3 < *(undefined4 * PTR32 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0xa8)) + 0xc)) {
          *puVar3 = "StSample";
          uVar4 = rdtsc();
          (*(undefined4 *)(gen_frame + 0x28)) = (int)uVar4;
          puVar3[1] = (int)uVar4;
          *(undefined4 * PTR32 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0xa8)) + 4) = puVar3 + 3;
        }
        (*(uint *)(gen_frame + 0xa0)) = F_00d36f00(*(undefined4 *)(param_1 + 0x38),*puVar21);
        (*(gen_v16 * PTR32 *)(gen_frame + 0x8c)) = (gen_v16 *)F_00d36f20(*(undefined4 *)(param_1 + 0x3c),puVar21[1]);
        (*(uint *)(gen_frame + 0x44)) = (*(uint *)(gen_frame + 0xa0));
        (*(gen_v16 * PTR32 *)(gen_frame + 0x50)) = (*(gen_v16 * PTR32 *)(gen_frame + 0x8c));
        (*(int *)(gen_frame + 0x4c)) = *(int *)(param_1 + 0x3c);
        (*(float * PTR32 *)(gen_frame + 0x5c)) = (*(float * PTR32 *)(gen_frame + 0x34));
        (*(uint *)(gen_frame + 0x60)) = (*(uint *)(gen_frame + 0x30));
        (*(uint *)(gen_frame + 0x64)) = (*(uint *)(gen_frame + 0x90));
        (*(int *)(gen_frame + 0x40)) = *(int *)(param_1 + 0x38);
        (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x3c));
        (*(uint *)(gen_frame + 0x48)) = F_00d36890(*(int *)(param_1 + 0x38));
        (*(uint *)(gen_frame + 0x54)) = F_00d36890((*(int *)(gen_frame + 0x4c)));
        (*(undefined1 *)(gen_frame + 0x6e)) = 1;
        (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = puVar21 + -0x30;
        (*(ushort *)(gen_frame + 0x6c)) = 0x100;
        F_00d37e20(&(*(int *)(gen_frame + 0x40)),*(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x84)) + 4,puVar21[-4],puVar21 + -0x30,
                     (uint)(*(char *)(param_1 + 0x4e) != '\0'));
        if ((((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x6c)) + 1)) == '\0') && ((*(byte *)(puVar21 + -3) & 0x20) == 0)) &&
           (F_00d93ba0((*(uint *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(int *)(gen_frame + 0x40))), 0 < (*(int *)(gen_frame + 0x4c)))) {
          iVar17 = ((*(int *)(gen_frame + 0x4c)) - 1U >> 2) + 1;
          pauVar16 = (*(gen_v16 * PTR32 *)(gen_frame + 0x50));
          do {
            (*(undefined8 *)(gen_frame + 0x10)) = *((undefined8 *)GEN_TOP((((*(uint *)(gen_frame + 0x54)) - (int)(*(gen_v16 * PTR32 *)(gen_frame + 0x50))) + (int)pauVar16)));
            (*(undefined8 *)(gen_frame + 0x18)) = *((undefined8 *)GEN_TOP((((*(uint *)(gen_frame + 0x54)) - (int)(*(gen_v16 * PTR32 *)(gen_frame + 0x50))) + 8 + (int)pauVar16)));
            (*(undefined8 *)((char *)&auVar9 + 8)) = (*(undefined8 *)(gen_frame + 0x18));
            (*(undefined8 *)((char *)&auVar9 + 0)) = (*(undefined8 *)(gen_frame + 0x10));
            gen_divps(&(auVar25), &(*pauVar16), &(auVar9));
            memcpy(&(*pauVar16), &(auVar25), sizeof(auVar25) < sizeof(*pauVar16) ? sizeof(auVar25) : sizeof(*pauVar16));
            pauVar16 = pauVar16 + 1;
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
        }
        if (*(char *)(param_1 + 0x4c) != '\0') {
          pvVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
          puVar21 = *(undefined4 * PTR32 *)((int)pvVar14 + 4);
          if (puVar21 < *(undefined4 * PTR32 *)((int)pvVar14 + 0xc)) {
            *puVar21 = "StConvertLocalToModel";
            uVar4 = rdtsc();
            (*(undefined4 *)(gen_frame + 0x2c)) = (int)uVar4;
            puVar21[1] = (int)uVar4;
            *(undefined4 * PTR32 *)((int)pvVar14 + 4) = puVar21 + 3;
          }
          F_00d33580(*(undefined4 *)(param_1 + 0x38),(*(uint *)(gen_frame + 0x3c)),(*(uint *)(gen_frame + 0xa0)),(*(uint *)(gen_frame + 0xa0)));
        }
        F_00d36930((*(uint *)(gen_frame + 0x54)),(*(int *)(gen_frame + 0x4c)));
        F_00d36930((*(uint *)(gen_frame + 0x48)),(*(int *)(gen_frame + 0x40)));
        if ((char)(*(ushort *)(gen_frame + 0x6c)) != '\0') {
          F_00d36930((*(gen_v16 * PTR32 *)(gen_frame + 0x50)),(*(int *)(gen_frame + 0x4c)));
          F_00d36980((*(uint *)(gen_frame + 0x44)),(*(int *)(gen_frame + 0x40)));
        }
        pvVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
        pauVar16 = (*(gen_v16 * PTR32 *)(gen_frame + 0x8c));
        puVar21 = *(undefined4 * PTR32 *)((int)pvVar14 + 4);
        if (puVar21 < *(undefined4 * PTR32 *)((int)pvVar14 + 0xc)) {
          *puVar21 = "StOutputDMA";
          uVar4 = rdtsc();
          (*(undefined4 *)(gen_frame + 0x38)) = (int)uVar4;
          puVar21[1] = (int)uVar4;
          *(undefined4 * PTR32 *)((int)pvVar14 + 4) = puVar21 + 3;
        }
        F_00d35ed0(*(undefined4 *)(param_1 + 0x3c),(*(gen_v16 * PTR32 *)(gen_frame + 0x8c)),(*(undefined4 * PTR32 *)(gen_frame + 0xa8))[0x31]);
        F_00d35ef0(*(undefined4 *)(param_1 + 0x38),(*(uint *)(gen_frame + 0xa0)),(*(undefined4 * PTR32 *)(gen_frame + 0xa8))[0x30]);
        F_00d36f40(*(undefined4 *)(param_1 + 0x3c),pauVar16);
        F_00d36f60(*(undefined4 *)(param_1 + 0x38),(*(uint *)(gen_frame + 0xa0)));
        ppuVar12 = (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x88));
        puVar21 = (*(undefined4 * PTR32 *)(gen_frame + 0x94)) + 0x32;
        (*(undefined4 * PTR32 *)(gen_frame + 0x94)) = puVar21;
        (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x88)) = (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x84));
        (*(int *)(gen_frame + 0x98)) = (*(int *)(gen_frame + 0x98)) + 1;
        (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x84)) = ppuVar12;
      } while ((*(int *)(gen_frame + 0x98)) < (int)(uint)*(ushort *)(param_1 + 0x4a));
    }
    goto LAB_00d396d0;
  }
  (*(uint *)(gen_frame + 0xa0)) = F_00d36f00(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x28));
  (*(gen_v16 * PTR32 *)(gen_frame + 0x9c)) = (gen_v16 *)
             F_00d36f20(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x2c));
  pvVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar21 = *(undefined4 * PTR32 *)((int)pvVar14 + 4);
  if (puVar21 < *(undefined4 * PTR32 *)((int)pvVar14 + 0xc)) {
    *puVar21 = "StInitBuffers";
    uVar4 = rdtsc();
    (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)uVar4;
    puVar21[1] = (undefined4 *)uVar4;
    *(undefined4 * PTR32 *)((int)pvVar14 + 4) = puVar21 + 3;
  }
  iVar17 = *(int *)(param_1 + 0x3c);
  (*(uint *)(gen_frame + 0x44)) = (*(uint *)(gen_frame + 0xa0));
  (*(gen_v16 * PTR32 *)(gen_frame + 0x50)) = (*(gen_v16 * PTR32 *)(gen_frame + 0x9c));
  (*(float * PTR32 *)(gen_frame + 0x5c)) = (*(float * PTR32 *)(gen_frame + 0x34));
  (*(uint *)(gen_frame + 0x60)) = (*(uint *)(gen_frame + 0x30));
  (*(uint *)(gen_frame + 0x64)) = (*(uint *)(gen_frame + 0x90));
  (*(int *)(gen_frame + 0x40)) = *(int *)(param_1 + 0x38);
  (*(int *)(gen_frame + 0x4c)) = iVar17;
  (*(uint *)(gen_frame + 0x68)) = (*(uint *)(gen_frame + 0x3c));
  (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x6c)) + 0)) = 0;
  (*(ushort *)(gen_frame + 0x6c)) = (ushort)(*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x6c)) + 1)) << 8;
  (*(undefined1 *)(gen_frame + 0x6e)) = 0;
  (*(uint *)(gen_frame + 0x48)) = F_00d36890(*(int *)(param_1 + 0x38));
  (*(uint *)(gen_frame + 0x54)) = F_00d36890(iVar17);
  uVar15 = (uint)*(ushort *)(param_1 + 0x4a);
  if ((uVar15 == 1) && ((*(byte *)((*(undefined4 * PTR32 *)(gen_frame + 0x94)) + 0x2d) & 0x20) == 0)) {
    uVar13 = (undefined1)*(ushort *)(param_1 + 0x4a);
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x6c)) + 1)) = uVar13;
    (*(ushort *)(gen_frame + 0x6c)) = CONCAT11(uVar13,(char)(*(ushort *)(gen_frame + 0x6c)));
    if ((!GEN_ISNAN(*(float *)(param_1 + 0x44)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
        !(*(float *)(param_1 + 0x44) <= *(float *)&REFG(undefined, 0x1088114))) goto LAB_00d391de;
  }
  else {
LAB_00d391de: ;
    uVar11 = (*(ushort *)(gen_frame + 0x6c));
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x6c)) + 1)) = 0;
    (*(ushort *)(gen_frame + 0x6c)) = uVar11 & 0xff;
  }
  (*(gen_v16 * PTR32 *)(gen_frame + 0x7c)) = (gen_v16 *)0x0;
  (*(gen_v16 * PTR32 *)(gen_frame + 0x70)) = (gen_v16 *)0x0;
  (*(uint *)(gen_frame + 0x74)) = 0;
  (*(uint *)(gen_frame + 0x78)) = 0x80000000;
  (*(uint *)(gen_frame + 0x80)) = uVar15;
  if (uVar15 != 0) {
    pvVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    (*(gen_v16 * PTR32 *)(gen_frame + 0x7c)) = *(undefined1 (**) [16])((int)pvVar14 + 0xc);
    uVar19 = uVar15 * 4 + 0x7f & 0xffffff80;
    (*(gen_v16 * PTR32 *)(gen_frame + 0x8c)) = (*(gen_v16 * PTR32 *)(gen_frame + 0x7c));
    if ((*(int *)((int)pvVar14 + 8) < (int)uVar19) ||
       (*(undefined1 * PTR32 *)((int)pvVar14 + 0x10) < *(*(gen_v16 * PTR32 *)(gen_frame + 0x7c)) + uVar19)) {
      (*(gen_v16 * PTR32 *)(gen_frame + 0x7c)) = (gen_v16 *)F_00d94390(pvVar14,uVar19);
    }
    else {
      *(undefined1 * PTR32 *)((int)pvVar14 + 0xc) = *(*(gen_v16 * PTR32 *)(gen_frame + 0x7c)) + uVar19;
    }
  }
  uVar15 = uVar15 | 0x80000000;
  (*(gen_v16 * PTR32 *)(gen_frame + 0x70)) = (*(gen_v16 * PTR32 *)(gen_frame + 0x7c));
  (*(uint *)(gen_frame + 0x78)) = uVar15;
  (*(uint *)(gen_frame + 0x90)) = 0;
  do {
    (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)0x0;
    if (*(short *)(param_1 + 0x4a) != 0) {
      (*(gen_v16 * PTR32 *)(gen_frame + 0x8c)) = (gen_v16 *)(uint)((*(uint *)(gen_frame + 0x90)) == 1);
      puVar21 = (*(undefined4 * PTR32 *)(gen_frame + 0x94));
      do {
        if ((gen_v16 *)((uint)puVar21[0x2d] >> 5 & 1) == (*(gen_v16 * PTR32 *)(gen_frame + 0x8c))) {
          if ((*(uint *)(gen_frame + 0x74)) == (uVar15 & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(gen_v16 * PTR32 *)(gen_frame + 0x70)),4);
          }
          *(undefined4 * PTR32 *)(*(*(gen_v16 * PTR32 *)(gen_frame + 0x70)) + (*(uint *)(gen_frame + 0x74)) * 4) = puVar21;
          (*(uint *)(gen_frame + 0x74)) = (*(uint *)(gen_frame + 0x74)) + 1;
          uVar15 = (*(uint *)(gen_frame + 0x78));
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0xa8)) + 1);
        puVar21 = puVar21 + 0x32;
      } while ((int)(*(undefined4 * PTR32 *)(gen_frame + 0xa8)) < (int)(uint)*(ushort *)(param_1 + 0x4a));
    }
    (*(uint *)(gen_frame + 0x90)) = (*(uint *)(gen_frame + 0x90)) + 1;
  } while ((int)(*(uint *)(gen_frame + 0x90)) < 2);
  (*(char *)(gen_frame + 0xaf)) = '\0';
  if ((*(uint *)(*(int *)*(*(gen_v16 * PTR32 *)(gen_frame + 0x70)) + 0xb4) >> 5 & 1) == 0) {
    if ((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x6c)) + 1)) == '\0') {
      F_00d37ab0(&(*(int *)(gen_frame + 0x40)));
    }
  }
  else {
    F_00da1010((*(uint *)(gen_frame + 0xa0)),(*(float * PTR32 *)(gen_frame + 0x34)),(*(int *)(gen_frame + 0x40)) * 0x30);
    F_00da1010((*(gen_v16 * PTR32 *)(gen_frame + 0x9c)),(*(uint *)(gen_frame + 0x30)),(*(int *)(gen_frame + 0x4c)) * 4);
    (*(char *)(gen_frame + 0xaf)) = '\x01';
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = *(undefined4 * PTR32 *)*(*(gen_v16 * PTR32 *)(gen_frame + 0x70));
  (*(int *)(gen_frame + 0x98)) = 0;
  if (*(short *)(param_1 + 0x4a) != 0) {
    do {
      pvVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
      puVar21 = *(undefined4 * PTR32 *)((int)pvVar14 + 4);
      if (puVar21 < *(undefined4 * PTR32 *)((int)pvVar14 + 0xc)) {
        *puVar21 = "StAnimDMA";
        uVar4 = rdtsc();
        (*(undefined4 * PTR32 *)(gen_frame + 0xa8)) = (undefined4 *)uVar4;
        puVar21[1] = (undefined4 *)uVar4;
        *(undefined4 * PTR32 *)((int)pvVar14 + 4) = puVar21 + 3;
      }
      if ((*(int *)(gen_frame + 0x98)) < (int)(*(ushort *)(param_1 + 0x4a) - 1)) {
        *(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x88)) = *(undefined4 * PTR32 *)(*(*(gen_v16 * PTR32 *)(gen_frame + 0x70)) + (*(int *)(gen_frame + 0x98)) * 4 + 4);
      }
      pvVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
      iVar17 = (*(int *)(gen_frame + 0x98));
      puVar21 = *(undefined4 * PTR32 *)((int)pvVar14 + 4);
      if (puVar21 < *(undefined4 * PTR32 *)((int)pvVar14 + 0xc)) {
        *puVar21 = "StSample";
        uVar4 = rdtsc();
        (*(undefined4 *)(gen_frame + 0x38)) = (int)uVar4;
        puVar21[1] = (int)uVar4;
        *(undefined4 * PTR32 *)((int)pvVar14 + 4) = puVar21 + 3;
      }
      F_00d37e20(&(*(int *)(gen_frame + 0x40)),*(*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x84)) + 4,
                   *((undefined4 *)GEN_TOP((*(int *)(*(*(gen_v16 * PTR32 *)(gen_frame + 0x70)) + (*(int *)(gen_frame + 0x98)) * 4) + 0xb0))),
                   *(int *)(*(*(gen_v16 * PTR32 *)(gen_frame + 0x70)) + (*(int *)(gen_frame + 0x98)) * 4),(uint)(*(char *)(param_1 + 0x4e) != '\0'));
      if ((((*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x6c)) + 1)) == '\0') && ((*(char *)(gen_frame + 0xaf)) == '\0')) &&
         ((iVar17 == *(ushort *)(param_1 + 0x4a) - 1 ||
          ((*((byte *)GEN_TOP((*(int *)(*(*(gen_v16 * PTR32 *)(gen_frame + 0x70)) + iVar17 * 4 + 4) + 0xb4))) & 0x20) != 0)))) {
        fVar2 = *(float *)(param_1 + 0x44);
        if (((!GEN_ISNAN(fVar2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar2 <= *(float *)&REFG(undefined, 0x1088114)))
           && (iVar18 = 0, 0 < (*(int *)(gen_frame + 0x40)))) {
          pauVar16 = (gen_v16 *)((*(uint *)(gen_frame + 0x44)) + 0x10);
          (*(gen_v16 * PTR32 *)(gen_frame + 0x8c)) = (gen_v16 *)((int)(*(float * PTR32 *)(gen_frame + 0x5c)) - (*(uint *)(gen_frame + 0x44)));
          pfVar20 = (*(float * PTR32 *)(gen_frame + 0x5c));
          do {
            fVar31 = *(float *)((*(uint *)(gen_frame + 0x48)) + iVar18 * 4);
            if (fVar31 <= fVar2) {
              fVar31 = fVar2 - fVar31;
              fVar5 = pfVar20[1];
              fVar6 = pfVar20[2];
              fVar7 = pfVar20[3];
              fVar8 = *(float *)(pauVar16[-1] + 4);
              fVar24 = *(float *)(pauVar16[-1] + 8);
              fVar26 = *(float *)(pauVar16[-1] + 0xc);
              *(float *)pauVar16[-1] = fVar31 * *pfVar20 + *(float *)pauVar16[-1];
              *(float *)(pauVar16[-1] + 4) = fVar31 * fVar5 + fVar8;
              *(float *)(pauVar16[-1] + 8) = fVar31 * fVar6 + fVar24;
              *(float *)(pauVar16[-1] + 0xc) = fVar31 * fVar7 + fVar26;
              pfVar1 = ((float *)GEN_TOP(((int)(pauVar16 + 1) + (int)(*(gen_v16 * PTR32 *)(gen_frame + 0x8c)))));
              fVar5 = pfVar1[1];
              fVar6 = pfVar1[2];
              fVar7 = pfVar1[3];
              fVar8 = *(float *)(pauVar16[1] + 4);
              fVar24 = *(float *)(pauVar16[1] + 8);
              fVar26 = *(float *)(pauVar16[1] + 0xc);
              *(float *)pauVar16[1] = *pfVar1 * fVar31 + *(float *)pauVar16[1];
              *(float *)(pauVar16[1] + 4) = fVar5 * fVar31 + fVar8;
              *(float *)(pauVar16[1] + 8) = fVar6 * fVar31 + fVar24;
              *(float *)(pauVar16[1] + 0xc) = fVar7 * fVar31 + fVar26;
              pfVar1 = (float *)(*pauVar16 + (int)*(*(gen_v16 * PTR32 *)(gen_frame + 0x8c)));
              fVar5 = *pfVar1;
              fVar6 = pfVar1[1];
              fVar7 = pfVar1[2];
              fVar8 = pfVar1[3];
              fVar24 = fVar5 * *(float *)*pauVar16;
              fVar26 = fVar6 * *(float *)(*pauVar16 + 4);
              fVar27 = fVar7 * *(float *)(*pauVar16 + 8);
              fVar28 = fVar8 * *(float *)(*pauVar16 + 0xc);
              fVar29 = fVar27 + fVar24;
              fVar30 = fVar28 + fVar26;
              fVar24 = fVar24 + fVar27;
              fVar26 = fVar26 + fVar28;
              uVar15 = -(uint)(fVar30 + fVar29 < 0.0);
              uVar19 = -(uint)(fVar29 + fVar30 < 0.0);
              uVar22 = -(uint)(fVar26 + fVar24 < 0.0);
              uVar23 = -(uint)(fVar24 + fVar26 < 0.0);
              (*(float *)((char *)&auVar25 + 0)) =
                   gen_bits2f(((uint)gen_fl2bits(fVar5) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) & uVar15 |
                              ~uVar15 & (uint)gen_fl2bits(fVar5)) * fVar31 + *(float *)*pauVar16;
              (*(float *)((char *)&auVar25 + 4)) =
                   gen_bits2f(((uint)gen_fl2bits(fVar6) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) & uVar19 |
                              ~uVar19 & (uint)gen_fl2bits(fVar6)) * fVar31 +
                   *(float *)(*pauVar16 + 4);
              (*(float *)((char *)&auVar25 + 8)) =
                   gen_bits2f(((uint)gen_fl2bits(fVar7) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) & uVar22 |
                              ~uVar22 & (uint)gen_fl2bits(fVar7)) * fVar31 +
                   *(float *)(*pauVar16 + 8);
              (*(float *)((char *)&auVar25 + 12)) =
                   gen_bits2f(((uint)gen_fl2bits(fVar8) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) & uVar23 |
                              ~uVar23 & (uint)gen_fl2bits(fVar8)) * fVar31 +
                   *(float *)(*pauVar16 + 0xc);
              memcpy(&(*pauVar16), &(auVar25), sizeof(auVar25) < sizeof(*pauVar16) ? sizeof(auVar25) : sizeof(*pauVar16));
              *(float *)((*(uint *)(gen_frame + 0x48)) + iVar18 * 4) = *(float *)((*(uint *)(gen_frame + 0x48)) + iVar18 * 4) + fVar31;
            }
            iVar18 = iVar18 + 1;
            pfVar20 = pfVar20 + 0xc;
            pauVar16 = pauVar16 + 3;
            iVar17 = (*(int *)(gen_frame + 0x98));
          } while (iVar18 < (*(int *)(gen_frame + 0x40)));
        }
        F_00d93ba0((*(uint *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(int *)(gen_frame + 0x40)));
        if (0 < (*(int *)(gen_frame + 0x4c))) {
          iVar18 = ((*(int *)(gen_frame + 0x4c)) - 1U >> 2) + 1;
          pauVar16 = (*(gen_v16 * PTR32 *)(gen_frame + 0x50));
          do {
            (*(undefined8 *)(gen_frame + 0x10)) = *((undefined8 *)GEN_TOP(((int)pauVar16 + ((*(uint *)(gen_frame + 0x54)) - (int)(*(gen_v16 * PTR32 *)(gen_frame + 0x50))))));
            (*(undefined8 *)(gen_frame + 0x18)) = *((undefined8 *)GEN_TOP(((int)pauVar16 + ((*(uint *)(gen_frame + 0x54)) - (int)(*(gen_v16 * PTR32 *)(gen_frame + 0x50))) + 8)));
            (*(undefined8 *)((char *)&auVar10 + 8)) = (*(undefined8 *)(gen_frame + 0x18));
            (*(undefined8 *)((char *)&auVar10 + 0)) = (*(undefined8 *)(gen_frame + 0x10));
            gen_divps(&(auVar25), &(*pauVar16), &(auVar10));
            memcpy(&(*pauVar16), &(auVar25), sizeof(auVar25) < sizeof(*pauVar16) ? sizeof(auVar25) : sizeof(*pauVar16));
            pauVar16 = pauVar16 + 1;
            iVar18 = iVar18 + -1;
          } while (iVar18 != 0);
        }
        (*(char *)(gen_frame + 0xaf)) = '\x01';
      }
      ppuVar12 = (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x88));
      (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x88)) = (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x84));
      (*(undefined4 * PTR32 * PTR32 *)(gen_frame + 0x84)) = ppuVar12;
      (*(int *)(gen_frame + 0x98)) = iVar17 + 1;
    } while (iVar17 + 1 < (int)(uint)*(ushort *)(param_1 + 0x4a));
  }
  uVar15 = (*(uint *)(gen_frame + 0x80));
  pauVar16 = (*(gen_v16 * PTR32 *)(gen_frame + 0x7c));
  if ((*(gen_v16 * PTR32 *)(gen_frame + 0x7c)) == (*(gen_v16 * PTR32 *)(gen_frame + 0x70))) {
    (*(uint *)(gen_frame + 0x74)) = 0;
  }
  pvVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar15 = uVar15 * 4 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar14 + 8) < (int)uVar15) ||
      (*pauVar16 + uVar15 != *(undefined1 * PTR32 *)((int)pvVar14 + 0xc))) ||
     (*(undefined1 (**) [16])((int)pvVar14 + 0x14) == pauVar16)) {
    F_00d945c0(pvVar14,pauVar16,uVar15);
  }
  else {
    *(undefined1 (**) [16])((int)pvVar14 + 0xc) = pauVar16;
  }
  (*(uint *)(gen_frame + 0x74)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x78))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(gen_v16 * PTR32 *)(gen_frame + 0x70)),(*(uint *)(gen_frame + 0x78)) * 4);
  }
  (*(gen_v16 * PTR32 *)(gen_frame + 0x70)) = (gen_v16 *)0x0;
  (*(uint *)(gen_frame + 0x78)) = 0x80000000;
  F_00d36930((*(uint *)(gen_frame + 0x54)),(*(int *)(gen_frame + 0x4c)));
  F_00d36930((*(uint *)(gen_frame + 0x48)),(*(int *)(gen_frame + 0x40)));
  if ((char)(*(ushort *)(gen_frame + 0x6c)) != '\0') {
    F_00d36930((*(gen_v16 * PTR32 *)(gen_frame + 0x50)),(*(int *)(gen_frame + 0x4c)));
    F_00d36980((*(uint *)(gen_frame + 0x44)),(*(int *)(gen_frame + 0x40)));
  }
  if (*(char *)(param_1 + 0x4c) != '\0') {
    pvVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
    puVar21 = *(undefined4 * PTR32 *)((int)pvVar14 + 4);
    if (puVar21 < *(undefined4 * PTR32 *)((int)pvVar14 + 0xc)) {
      *puVar21 = "StConvertLocalToModel";
      uVar4 = rdtsc();
      (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = (undefined4 *)uVar4;
      puVar21[1] = (undefined4 *)uVar4;
      *(undefined4 * PTR32 *)((int)pvVar14 + 4) = puVar21 + 3;
    }
    F_00d33580(*(undefined4 *)(param_1 + 0x38),(*(uint *)(gen_frame + 0x3c)),(*(uint *)(gen_frame + 0xa0)),(*(uint *)(gen_frame + 0xa0)));
  }
  pvVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  pauVar16 = (*(gen_v16 * PTR32 *)(gen_frame + 0x9c));
  puVar21 = *(undefined4 * PTR32 *)((int)pvVar14 + 4);
  if (puVar21 < *(undefined4 * PTR32 *)((int)pvVar14 + 0xc)) {
    *puVar21 = "StOutputDMA";
    uVar4 = rdtsc();
    (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = (undefined4 *)uVar4;
    puVar21[1] = (undefined4 *)uVar4;
    *(undefined4 * PTR32 *)((int)pvVar14 + 4) = puVar21 + 3;
  }
  F_00d35ed0(*(undefined4 *)(param_1 + 0x3c),(*(gen_v16 * PTR32 *)(gen_frame + 0x9c)),*(undefined4 *)(param_1 + 0x2c));
  F_00d35ef0(*(undefined4 *)(param_1 + 0x38),(*(uint *)(gen_frame + 0xa0)),*(undefined4 *)(param_1 + 0x28));
  F_00d36f40(*(undefined4 *)(param_1 + 0x3c),pauVar16);
  F_00d36f60(*(undefined4 *)(param_1 + 0x38),(*(uint *)(gen_frame + 0xa0)));
LAB_00d396d0: ;
  if (*(int *)(param_1 + 0x1c) != 0) {
    F_00d37a80();
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    F_00d37a90();
  }
  F_00d36f80(*(undefined4 *)(param_1 + 0x3c),(*(uint *)(gen_frame + 0x30)));
  F_00d36fa0(*(undefined4 *)(param_1 + 0x38),(*(float * PTR32 *)(gen_frame + 0x34)));
  F_00d37aa0();
  pvVar14 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar21 = *(undefined4 * PTR32 *)((int)pvVar14 + 4);
  if (puVar21 < *(undefined4 * PTR32 *)((int)pvVar14 + 0xc)) {
    *puVar21 = &REFG(undefined, 0x1134dd0);
    uVar4 = rdtsc();
    (*(undefined4 * PTR32 *)(gen_frame + 0xa4)) = (undefined4 *)uVar4;
    puVar21[1] = (undefined4 *)uVar4;
    *(undefined4 * PTR32 *)((int)pvVar14 + 4) = puVar21 + 3;
  }
  return 0;
}

/* ref: FUN_00d39790 */
uint F_00d39790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd39790u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_3[1];
  uVar8 = param_3[2];
  uVar9 = param_3[3];
  *(uint *)this = *param_2 & *param_1 | ~*param_1 & *param_3;
  *(uint *)((int)this + 4) = uVar4 & uVar1 | ~uVar1 & uVar7;
  *(uint *)((int)this + 8) = uVar5 & uVar2 | ~uVar2 & uVar8;
  *(uint *)((int)this + 0xc) = uVar6 & uVar3 | ~uVar3 & uVar9;
  return (uint)param_3;
}

/* ref: FUN_00d397c0 */
uint F_00d397c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd397c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 uVar1;
  
  uVar1 = rdtsc();
  *(uint *)((int)this + 4) = (uint)uVar1;
  return (uint)uVar1;
}

/* ref: FUN_00d397e0 */
uint F_00d397e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd397e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00d39800 */
uint F_00d39800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39800u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = in_ecx[1];
  fVar2 = in_ecx[2];
  fVar3 = in_ecx[3];
  *param_2 = 0.0 - *in_ecx;
  param_2[1] = 0.0 - fVar1;
  param_2[2] = 0.0 - fVar2;
  param_2[3] = 0.0 - fVar3;
  return (uint)param_2;
}

/* ref: FUN_00d39820 */
uint F_00d39820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39820u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d39840 */
uint F_00d39840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd39840u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_3[1];
  uVar8 = param_3[2];
  uVar9 = param_3[3];
  *(uint *)this = *param_2 & *param_1 | ~*param_1 & *param_3;
  *(uint *)((int)this + 4) = uVar4 & uVar1 | ~uVar1 & uVar7;
  *(uint *)((int)this + 8) = uVar5 & uVar2 | ~uVar2 & uVar8;
  *(uint *)((int)this + 0xc) = uVar6 & uVar3 | ~uVar3 & uVar9;
  return (uint)param_3;
}

/* ref: FUN_00d39870 */
unsigned int F_00d39870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd39870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00d93ba0(param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_00d39880 */
uint F_00d39880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd39880u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d398d0 */
uint F_00d398d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd398d0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00d39900 */
uint F_00d39900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd39900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  *(undefined2 *)this = *param_1;
  *(undefined2 *)((int)this + 2) = uVar4;
  *(undefined2 *)((int)this + 4) = uVar1;
  *(undefined2 *)((int)this + 6) = uVar5;
  *(undefined2 *)((int)this + 8) = uVar2;
  *(undefined2 *)((int)this + 10) = uVar6;
  *(undefined2 *)((int)this + 0xc) = uVar3;
  *(undefined2 *)((int)this + 0xe) = uVar7;
  return (uint)param_1;
}

/* ref: FUN_00d39920 */
uint F_00d39920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd39920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar1 = *(undefined2 *)(param_1 + 10);
  uVar2 = *(undefined2 *)(param_1 + 0xc);
  uVar3 = *(undefined2 *)(param_1 + 0xe);
  uVar4 = *(undefined2 *)(param_2 + 8);
  uVar5 = *(undefined2 *)(param_2 + 10);
  uVar6 = *(undefined2 *)(param_2 + 0xc);
  uVar7 = *(undefined2 *)(param_2 + 0xe);
  *(undefined2 *)this = *(undefined2 *)(param_1 + 8);
  *(undefined2 *)((int)this + 2) = uVar4;
  *(undefined2 *)((int)this + 4) = uVar1;
  *(undefined2 *)((int)this + 6) = uVar5;
  *(undefined2 *)((int)this + 8) = uVar2;
  *(undefined2 *)((int)this + 10) = uVar6;
  *(undefined2 *)((int)this + 0xc) = uVar3;
  *(undefined2 *)((int)this + 0xe) = uVar7;
  return param_1;
}

/* ref: FUN_00d39940 */
uint F_00d39940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd39940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_1[4];
  uVar5 = param_1[5];
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  uVar8 = *param_2;
  uVar9 = param_2[1];
  uVar10 = param_2[2];
  uVar11 = param_2[3];
  uVar12 = param_2[4];
  uVar13 = param_2[5];
  uVar14 = param_2[6];
  uVar15 = param_2[7];
  *(undefined1 *)this = *param_1;
  *(undefined1 *)((int)this + 1) = uVar8;
  *(undefined1 *)((int)this + 2) = uVar1;
  *(undefined1 *)((int)this + 3) = uVar9;
  *(undefined1 *)((int)this + 4) = uVar2;
  *(undefined1 *)((int)this + 5) = uVar10;
  *(undefined1 *)((int)this + 6) = uVar3;
  *(undefined1 *)((int)this + 7) = uVar11;
  *(undefined1 *)((int)this + 8) = uVar4;
  *(undefined1 *)((int)this + 9) = uVar12;
  *(undefined1 *)((int)this + 10) = uVar5;
  *(undefined1 *)((int)this + 0xb) = uVar13;
  *(undefined1 *)((int)this + 0xc) = uVar6;
  *(undefined1 *)((int)this + 0xd) = uVar14;
  *(undefined1 *)((int)this + 0xe) = uVar7;
  *(undefined1 *)((int)this + 0xf) = uVar15;
  return (uint)param_1;
}

/* ref: FUN_00d39960 */
uint F_00d39960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd39960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  
  uVar1 = *(undefined1 *)(param_1 + 9);
  uVar2 = *(undefined1 *)(param_1 + 10);
  uVar3 = *(undefined1 *)(param_1 + 0xb);
  uVar4 = *(undefined1 *)(param_1 + 0xc);
  uVar5 = *(undefined1 *)(param_1 + 0xd);
  uVar6 = *(undefined1 *)(param_1 + 0xe);
  uVar7 = *(undefined1 *)(param_1 + 0xf);
  uVar8 = *(undefined1 *)(param_2 + 8);
  uVar9 = *(undefined1 *)(param_2 + 9);
  uVar10 = *(undefined1 *)(param_2 + 10);
  uVar11 = *(undefined1 *)(param_2 + 0xb);
  uVar12 = *(undefined1 *)(param_2 + 0xc);
  uVar13 = *(undefined1 *)(param_2 + 0xd);
  uVar14 = *(undefined1 *)(param_2 + 0xe);
  uVar15 = *(undefined1 *)(param_2 + 0xf);
  *(undefined1 *)this = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)((int)this + 1) = uVar8;
  *(undefined1 *)((int)this + 2) = uVar1;
  *(undefined1 *)((int)this + 3) = uVar9;
  *(undefined1 *)((int)this + 4) = uVar2;
  *(undefined1 *)((int)this + 5) = uVar10;
  *(undefined1 *)((int)this + 6) = uVar3;
  *(undefined1 *)((int)this + 7) = uVar11;
  *(undefined1 *)((int)this + 8) = uVar4;
  *(undefined1 *)((int)this + 9) = uVar12;
  *(undefined1 *)((int)this + 10) = uVar5;
  *(undefined1 *)((int)this + 0xb) = uVar13;
  *(undefined1 *)((int)this + 0xc) = uVar6;
  *(undefined1 *)((int)this + 0xd) = uVar14;
  *(undefined1 *)((int)this + 0xe) = uVar7;
  *(undefined1 *)((int)this + 0xf) = uVar15;
  return param_1;
}

/* ref: FUN_00d39980 */
unsigned int F_00d39980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39980u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = in_ecx[1];
  uVar2 = in_ecx[2];
  uVar3 = in_ecx[3];
  fVar4 = (float)(uVar1 >> 0x10) * *(float *)&REFG(undefined, 0x1134dc4);
  fVar5 = (float)(uVar2 >> 0x10) * *(float *)&REFG(undefined, 0x1134dc8);
  fVar6 = (float)(uVar3 >> 0x10) * *(float *)&REFG(undefined, 0x1134dcc);
  *param_2 = (float)(*in_ecx >> 0x10) * *(float *)&REFG(undefined, 0x1134dc0) + (float)(*in_ecx & 0xffff);
  param_2[1] = fVar4 + (float)(uVar1 & 0xffff);
  param_2[2] = fVar5 + (float)(uVar2 & 0xffff);
  param_2[3] = fVar6 + (float)(uVar3 & 0xffff);
  return 0;
}

/* ref: FUN_00d399c0 */
uint F_00d399c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd399c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d399e0 */
uint F_00d399e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd399e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  *(undefined2 *)this = *param_2;
  *(undefined2 *)((int)this + 2) = uVar4;
  *(undefined2 *)((int)this + 4) = uVar1;
  *(undefined2 *)((int)this + 6) = uVar5;
  *(undefined2 *)((int)this + 8) = uVar2;
  *(undefined2 *)((int)this + 10) = uVar6;
  *(undefined2 *)((int)this + 0xc) = uVar3;
  *(undefined2 *)((int)this + 0xe) = uVar7;
  return (uint)param_2;
}

/* ref: FUN_00d39a00 */
uint F_00d39a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd39a00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar1 = *(undefined2 *)(param_2 + 10);
  uVar2 = *(undefined2 *)(param_2 + 0xc);
  uVar3 = *(undefined2 *)(param_2 + 0xe);
  uVar4 = *(undefined2 *)(param_1 + 8);
  uVar5 = *(undefined2 *)(param_1 + 10);
  uVar6 = *(undefined2 *)(param_1 + 0xc);
  uVar7 = *(undefined2 *)(param_1 + 0xe);
  *(undefined2 *)this = *(undefined2 *)(param_2 + 8);
  *(undefined2 *)((int)this + 2) = uVar4;
  *(undefined2 *)((int)this + 4) = uVar1;
  *(undefined2 *)((int)this + 6) = uVar5;
  *(undefined2 *)((int)this + 8) = uVar2;
  *(undefined2 *)((int)this + 10) = uVar6;
  *(undefined2 *)((int)this + 0xc) = uVar3;
  *(undefined2 *)((int)this + 0xe) = uVar7;
  return param_2;
}

/* ref: FUN_00d39a20 */
uint F_00d39a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd39a20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  uVar8 = *param_1;
  uVar9 = param_1[1];
  uVar10 = param_1[2];
  uVar11 = param_1[3];
  uVar12 = param_1[4];
  uVar13 = param_1[5];
  uVar14 = param_1[6];
  uVar15 = param_1[7];
  *(undefined1 *)this = *param_2;
  *(undefined1 *)((int)this + 1) = uVar8;
  *(undefined1 *)((int)this + 2) = uVar1;
  *(undefined1 *)((int)this + 3) = uVar9;
  *(undefined1 *)((int)this + 4) = uVar2;
  *(undefined1 *)((int)this + 5) = uVar10;
  *(undefined1 *)((int)this + 6) = uVar3;
  *(undefined1 *)((int)this + 7) = uVar11;
  *(undefined1 *)((int)this + 8) = uVar4;
  *(undefined1 *)((int)this + 9) = uVar12;
  *(undefined1 *)((int)this + 10) = uVar5;
  *(undefined1 *)((int)this + 0xb) = uVar13;
  *(undefined1 *)((int)this + 0xc) = uVar6;
  *(undefined1 *)((int)this + 0xd) = uVar14;
  *(undefined1 *)((int)this + 0xe) = uVar7;
  *(undefined1 *)((int)this + 0xf) = uVar15;
  return (uint)param_2;
}

/* ref: FUN_00d39a40 */
uint F_00d39a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd39a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  
  uVar1 = *(undefined1 *)(param_2 + 9);
  uVar2 = *(undefined1 *)(param_2 + 10);
  uVar3 = *(undefined1 *)(param_2 + 0xb);
  uVar4 = *(undefined1 *)(param_2 + 0xc);
  uVar5 = *(undefined1 *)(param_2 + 0xd);
  uVar6 = *(undefined1 *)(param_2 + 0xe);
  uVar7 = *(undefined1 *)(param_2 + 0xf);
  uVar8 = *(undefined1 *)(param_1 + 8);
  uVar9 = *(undefined1 *)(param_1 + 9);
  uVar10 = *(undefined1 *)(param_1 + 10);
  uVar11 = *(undefined1 *)(param_1 + 0xb);
  uVar12 = *(undefined1 *)(param_1 + 0xc);
  uVar13 = *(undefined1 *)(param_1 + 0xd);
  uVar14 = *(undefined1 *)(param_1 + 0xe);
  uVar15 = *(undefined1 *)(param_1 + 0xf);
  *(undefined1 *)this = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((int)this + 1) = uVar8;
  *(undefined1 *)((int)this + 2) = uVar1;
  *(undefined1 *)((int)this + 3) = uVar9;
  *(undefined1 *)((int)this + 4) = uVar2;
  *(undefined1 *)((int)this + 5) = uVar10;
  *(undefined1 *)((int)this + 6) = uVar3;
  *(undefined1 *)((int)this + 7) = uVar11;
  *(undefined1 *)((int)this + 8) = uVar4;
  *(undefined1 *)((int)this + 9) = uVar12;
  *(undefined1 *)((int)this + 10) = uVar5;
  *(undefined1 *)((int)this + 0xb) = uVar13;
  *(undefined1 *)((int)this + 0xc) = uVar6;
  *(undefined1 *)((int)this + 0xd) = uVar14;
  *(undefined1 *)((int)this + 0xe) = uVar7;
  *(undefined1 *)((int)this + 0xf) = uVar15;
  return param_2;
}

/* ref: FUN_00d39a60 */
uint F_00d39a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd39a60u, gen_a0, gen_a1, gen_a2, 0u);
  char * in_ecx = (char *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(bool *)param_2 = *in_ecx == (char)param_3;
  return param_2;
}

/* ref: FUN_00d39a80 */
uint F_00d39a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39a80u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00d39ab0 */
byte F_00d39ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39ab0u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00d39ac0 */
uint F_00d39ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00d39ad0 */
uint F_00d39ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39ad0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = *in_ecx | param_2;
  return param_2;
}

/* ref: FUN_00d39ae0 */
uint F_00d39ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39ae0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return *(*(uint * PTR32 *)&gen_args[0]) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00d39af0 */
uint F_00d39af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39af0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00d39b00 */
uint F_00d39b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39b00u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00d39b40 */
uint F_00d39b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd39b40u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d39b60 */
uint F_00d39b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd39b60u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d39b90 */
uint F_00d39b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39b90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *(int *)(in_ecx + 4) == 0;
  return param_2;
}

/* ref: FUN_00d39bc0 */
uint F_00d39bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39bc0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d39c10 */
uint F_00d39c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39c10u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 2;
}

/* ref: FUN_00d39c30 */
uint F_00d39c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39c30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *(int *)(in_ecx + 4) == 0;
  return param_2;
}

/* ref: FUN_00d39ca0 */
uint F_00d39ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39ca0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *(int *)(in_ecx + 4) == 0;
  return param_2;
}

/* ref: FUN_00d39cf0 */
unsigned int F_00d39cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd39cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      iVar2 = (int)*(short *)(*param_1 + iVar1 * 2);
      if (iVar2 < param_4) {
        *(undefined1 *)(iVar2 + param_5) = *(undefined1 *)(iVar1 + param_3);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00d39d30 */
uint F_00d39d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39d30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00d39d80 */
uint F_00d39d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39d80u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d39d90 */
uint F_00d39d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39d90u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00d39db0 */
uint F_00d39db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39db0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00d39de0 */
uint F_00d39de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39de0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00d39e10 */
uint F_00d39e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39e10u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00d39e40 */
uint F_00d39e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39e40u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00d39e70 */
uint F_00d39e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39e70u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00d39f20 */
uint F_00d39f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this,param_1 * 200);
  return uVar1;
}

/* ref: FUN_00d39f80 */
uint F_00d39f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd39f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this,param_1,param_2 * 200);
  return uVar1;
}

/* ref: FUN_00d39fa0 */
unsigned int F_00d39fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39fa0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = *param_2 * *in_ecx;
  in_ecx[1] = fVar1 * in_ecx[1];
  in_ecx[2] = fVar2 * in_ecx[2];
  in_ecx[3] = fVar3 * in_ecx[3];
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  in_ecx[8] = in_ecx[8] * *param_2;
  in_ecx[9] = in_ecx[9] * fVar1;
  in_ecx[10] = in_ecx[10] * fVar2;
  in_ecx[0xb] = in_ecx[0xb] * fVar3;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  in_ecx[4] = in_ecx[4] * *param_2;
  in_ecx[5] = in_ecx[5] * fVar1;
  in_ecx[6] = in_ecx[6] * fVar2;
  in_ecx[7] = in_ecx[7] * fVar3;
  return 0;
}

/* ref: FUN_00d39fd0 */
uint F_00d39fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39fd0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_00d39fe0 */
uint F_00d39fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd39fe0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x30 + *in_ecx;
}

/* ref: FUN_00d3a000 */
uint F_00d3a000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a000u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d3a010 */
unsigned int F_00d3a010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3a010u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  if (0 < param_3) {
    iVar1 = param_1 - (int)param_2;
    do {
      *(undefined4 *)(iVar1 + (int)param_2) = *param_2;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 0;
}

/* ref: FUN_00d3a040 */
unsigned int F_00d3a040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3a040u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  if (0 < param_3) {
    puVar5 = (undefined4 *)(param_2 + 0xc);
    puVar4 = (undefined4 *)(param_1 + 8);
    do {
      uVar1 = puVar5[-2];
      uVar2 = *((undefined4 *)GEN_TOP(((param_2 - param_1) + (int)puVar4)));
      uVar3 = *puVar5;
      puVar4[-2] = puVar5[-3];
      puVar4[-1] = uVar1;
      *puVar4 = uVar2;
      puVar4[1] = uVar3;
      puVar5 = puVar5 + 4;
      puVar4 = puVar4 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 0;
}

/* ref: FUN_00d3a090 */
uint F_00d3a090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3a090u, gen_a0, gen_a1, gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = param_3 - 1U;
  if (-1 < (int)(param_3 - 1U)) {
    for (; uVar1 = param_2, param_3 != 0; param_3 = param_3 + -1) {
      *param_1 = param_2;
      param_1 = param_1 + 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00d3a0d0 */
unsigned int F_00d3a0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3a0d0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d3a100 */
uint F_00d3a100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3a100u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3a120 */
uint F_00d3a120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3a120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return param_1;
}

/* ref: FUN_00d3a160 */
uint F_00d3a160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3a160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 2);
  return uVar1;
}

/* ref: FUN_00d3a1a0 */
uint F_00d3a1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd3a1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00d3a1b0 */
uint F_00d3a1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3a1b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3a1d0 */
uint F_00d3a1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3a1d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d3a210 */
uint F_00d3a210(unsigned int gen_a0)
{
  GEN_ENTER(0xd3a210u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138afc);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138af8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138af4);
  *param_1 = *(undefined4 *)&REFG(undefined, 0x1138af0);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00d3a230 */
uint F_00d3a230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3a230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3a250 */
uint F_00d3a250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3a250u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3a270 */
uint F_00d3a270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3a270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3a290 */
uint F_00d3a290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3a290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3a2b0 */
uint F_00d3a2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3a2b0u, gen_a0, gen_a1, gen_a2, 0u);
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a0;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;
  gen_v16 * param_3 = (gen_v16 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  
  gen_divps(&(auVar1), &(*param_2), &(*param_3));
  memcpy(&(*param_1), &(auVar1), sizeof(auVar1) < sizeof(*param_1) ? sizeof(auVar1) : sizeof(*param_1));
  return (uint)param_2;
}

/* ref: FUN_00d3a2d0 */
uint F_00d3a2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d3a2f0 */
uint F_00d3a2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d3a310 */
uint F_00d3a310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a310u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x10) + param_2 * 4)));
}

/* ref: FUN_00d3a330 */
uint F_00d3a330(unsigned int gen_a0)
{
  GEN_ENTER(0xd3a330u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(param_1 + 4);
}

/* ref: FUN_00d3a340 */
uint F_00d3a340(unsigned int gen_a0)
{
  GEN_ENTER(0xd3a340u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(param_1 + 0xc);
}

/* ref: FUN_00d3a350 */
uint F_00d3a350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a350u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *(uint *)(param_1 + 4) < *(uint *)(param_1 + 0xc);
  return param_2;
}

/* ref: FUN_00d3a370 */
uint F_00d3a370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a370u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(param_1 + 4) = param_2;
  return param_1;
}

/* ref: FUN_00d3a3f0 */
uint F_00d3a3f0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3a3f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1 * 200);
  return uVar2;
}

/* ref: FUN_00d3a420 */
unsigned int F_00d3a420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  *(undefined4 *)this = *param_1;
  *(int *)((int)this + 4) = iVar1;
  return 0;
}

/* ref: FUN_00d3a450 */
uint F_00d3a450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1[1] == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  uVar1 = param_1[1] * 2;
  *(undefined4 *)this = *param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00d3a480 */
uint F_00d3a480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1[1] == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  uVar1 = param_1[1] << 6;
  *(undefined4 *)this = *param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00d3a4b0 */
uint F_00d3a4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1[1] == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  uVar1 = param_1[1] * 0x70;
  *(undefined4 *)this = *param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00d3a4e0 */
uint F_00d3a4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1[1] == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  uVar1 = param_1[1] * 8;
  *(undefined4 *)this = *param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00d3a510 */
uint F_00d3a510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1[1] == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  uVar1 = param_1[1] * 0x30;
  *(undefined4 *)this = *param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00d3a540 */
uint F_00d3a540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a540u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,param_2 * 200);
  return uVar2;
}

/* ref: FUN_00d3a5a0 */
unsigned int F_00d3a5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd3a5a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  int param_7 = (int)gen_a6;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  iVar7 = 0;
  if ((param_3[1] != 0) && (0 < param_5)) {
    local_8 = 0;
    do {
      iVar6 = (int)*(short *)(*param_3 + iVar7 * 2);
      puVar5 = (undefined4 *)(*param_2 + local_8);
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      uVar3 = puVar5[3];
      puVar4 = (undefined4 *)(iVar6 * 0x30 + *param_1);
      *puVar4 = *puVar5;
      puVar4[1] = uVar1;
      puVar4[2] = uVar2;
      puVar4[3] = uVar3;
      uVar1 = puVar5[5];
      uVar2 = puVar5[6];
      uVar3 = puVar5[7];
      puVar4[4] = puVar5[4];
      puVar4[5] = uVar1;
      puVar4[6] = uVar2;
      puVar4[7] = uVar3;
      uVar1 = puVar5[9];
      uVar2 = puVar5[10];
      uVar3 = puVar5[0xb];
      puVar4[8] = puVar5[8];
      puVar4[9] = uVar1;
      puVar4[10] = uVar2;
      puVar4[0xb] = uVar3;
      if (param_6[1] == 0) {
        *(undefined1 *)(iVar6 + param_7) = 0xff;
      }
      else {
        *(undefined1 *)(iVar6 + param_7) = *(undefined1 *)(iVar7 + *param_6);
      }
      local_8 = local_8 + 0x30;
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_5);
  }
  return 0;
}

/* ref: FUN_00d3a620 */
unsigned int F_00d3a620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd3a620u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  int param_7 = (int)gen_a6;
  int iVar1;
  int iVar2;
  
  if (param_3[1] != 0) {
    iVar1 = 0;
    if (3 < param_5) {
      do {
        iVar2 = (int)*(short *)(*param_3 + iVar1 * 2);
        *(undefined4 *)(*param_1 + iVar2 * 4) = *(undefined4 *)(*param_2 + iVar1 * 4);
        if (param_6[1] == 0) {
          *(undefined1 *)(iVar2 + param_7) = 0xff;
        }
        else {
          *(undefined1 *)(iVar2 + param_7) = *(undefined1 *)(iVar1 + *param_6);
        }
        iVar2 = (int)*(short *)(*param_3 + 2 + iVar1 * 2);
        *(undefined4 *)(*param_1 + iVar2 * 4) = *(undefined4 *)(*param_2 + 4 + iVar1 * 4);
        if (param_6[1] == 0) {
          *(undefined1 *)(iVar2 + param_7) = 0xff;
        }
        else {
          *(undefined1 *)(iVar2 + param_7) = *(undefined1 *)(*param_6 + 1 + iVar1);
        }
        iVar2 = (int)*(short *)(*param_3 + 4 + iVar1 * 2);
        *(undefined4 *)(*param_1 + iVar2 * 4) = *(undefined4 *)(*param_2 + 8 + iVar1 * 4);
        if (param_6[1] == 0) {
          *(undefined1 *)(iVar2 + param_7) = 0xff;
        }
        else {
          *(undefined1 *)(iVar2 + param_7) = *(undefined1 *)(*param_6 + 2 + iVar1);
        }
        iVar2 = (int)*(short *)(*param_3 + 6 + iVar1 * 2);
        *(undefined4 *)(*param_1 + iVar2 * 4) = *(undefined4 *)(*param_2 + 0xc + iVar1 * 4);
        if (param_6[1] == 0) {
          *(undefined1 *)(iVar2 + param_7) = 0xff;
        }
        else {
          *(undefined1 *)(iVar2 + param_7) = *(undefined1 *)(*param_6 + 3 + iVar1);
        }
        iVar1 = iVar1 + 4;
      } while (iVar1 < param_5 + -3);
    }
    for (; iVar1 < param_5; iVar1 = iVar1 + 1) {
      iVar2 = (int)*(short *)(*param_3 + iVar1 * 2);
      *(undefined4 *)(*param_1 + iVar2 * 4) = *(undefined4 *)(*param_2 + iVar1 * 4);
      if (param_6[1] == 0) {
        *(undefined1 *)(iVar2 + param_7) = 0xff;
      }
      else {
        *(undefined1 *)(iVar2 + param_7) = *(undefined1 *)(iVar1 + *param_6);
      }
    }
  }
  return 0;
}

/* ref: FUN_00d3a770 */
uint F_00d3a770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a770u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x80 + *in_ecx;
}

/* ref: FUN_00d3a790 */
uint F_00d3a790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a790u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x54 + *in_ecx;
}

/* ref: FUN_00d3a7a0 */
uint F_00d3a7a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3a7a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d3a7e0 */
uint F_00d3a7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a7e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d3a840 */
uint F_00d3a840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3a840u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d3a880 */
uint F_00d3a880(unsigned int gen_a0)
{
  GEN_ENTER(0xd3a880u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d3a8c0 */
uint F_00d3a8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a8c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d3a960 */
uint F_00d3a960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd3a960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3a980 */
uint F_00d3a980(unsigned int gen_a0)
{
  GEN_ENTER(0xd3a980u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00d3a9c0 */
uint F_00d3a9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3a9c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00d3aa10 */
unsigned int F_00d3aa10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3aa10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
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
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar9 = param_2[2];
  fVar10 = param_2[3];
  *(float *)this = *param_1 * *param_2 + *(float *)this;
  *(float *)((int)this + 4) = fVar1 * fVar4 + *(float *)((int)this + 4);
  *(float *)((int)this + 8) = fVar2 * fVar9 + *(float *)((int)this + 8);
  *(float *)((int)this + 0xc) = fVar3 * fVar10 + *(float *)((int)this + 0xc);
  fVar1 = param_1[9];
  fVar2 = param_1[10];
  fVar3 = param_1[0xb];
  fVar4 = param_2[1];
  fVar9 = param_2[2];
  fVar10 = param_2[3];
  *(float *)((int)this + 0x20) = param_1[8] * *param_2 + *(float *)((int)this + 0x20);
  *(float *)((int)this + 0x24) = fVar1 * fVar4 + *(float *)((int)this + 0x24);
  *(float *)((int)this + 0x28) = fVar2 * fVar9 + *(float *)((int)this + 0x28);
  *(float *)((int)this + 0x2c) = fVar3 * fVar10 + *(float *)((int)this + 0x2c);
  fVar1 = param_1[4];
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  fVar4 = param_1[7];
  fVar9 = *(float *)((int)this + 0x10) * fVar1;
  fVar10 = *(float *)((int)this + 0x14) * fVar2;
  fVar11 = *(float *)((int)this + 0x18) * fVar3;
  fVar12 = *(float *)((int)this + 0x1c) * fVar4;
  fVar13 = fVar11 + fVar9;
  fVar14 = fVar12 + fVar10;
  fVar9 = fVar9 + fVar11;
  fVar10 = fVar10 + fVar12;
  uVar5 = -(uint)(fVar14 + fVar13 < 0.0);
  uVar6 = -(uint)(fVar13 + fVar14 < 0.0);
  uVar7 = -(uint)(fVar10 + fVar9 < 0.0);
  uVar8 = -(uint)(fVar9 + fVar10 < 0.0);
  uVar15 = (uint)gen_fl2bits(fVar2) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
  uVar16 = (uint)gen_fl2bits(fVar3) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
  uVar17 = (uint)gen_fl2bits(fVar4) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
  fVar9 = param_2[1];
  fVar10 = param_2[2];
  fVar11 = param_2[3];
  *(float *)((int)this + 0x10) =
       gen_bits2f(((uint)gen_fl2bits(fVar1) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) & uVar5 |
                  ~uVar5 & (uint)gen_fl2bits(fVar1)) * *param_2 + *(float *)((int)this + 0x10);
  *(float *)((int)this + 0x14) =
       gen_bits2f(uVar15 & uVar6 | ~uVar6 & (uint)gen_fl2bits(fVar2)) * fVar9 +
       *(float *)((int)this + 0x14);
  *(float *)((int)this + 0x18) =
       gen_bits2f(uVar16 & uVar7 | ~uVar7 & (uint)gen_fl2bits(fVar3)) * fVar10 +
       *(float *)((int)this + 0x18);
  *(float *)((int)this + 0x1c) =
       gen_bits2f(uVar17 & uVar8 | ~uVar8 & (uint)gen_fl2bits(fVar4)) * fVar11 +
       *(float *)((int)this + 0x1c);
  return 0;
}

/* ref: FUN_00d3aa80 */
uint F_00d3aa80(unsigned int gen_a0)
{
  GEN_ENTER(0xd3aa80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  int iVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar3 = param_1 * 0x80;
  uVar1 = *(uint *)((int)this + 0xc);
  uVar2 = uVar1 + iVar3;
  if ((iVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,iVar3);
  return uVar2;
}

/* ref: FUN_00d3aac0 */
uint F_00d3aac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3aac0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  int iVar2;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar2 = param_2 * 0x80;
  if (((iVar2 <= *(int *)((int)this + 8)) && (iVar2 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,iVar2);
  return uVar1;
}

/* ref: FUN_00d3ab10 */
uint F_00d3ab10(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ab10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 * 0x54 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00d3ab50 */
uint F_00d3ab50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3ab50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 0x54 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00d3aba0 */
uint F_00d3aba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd3aba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3abc0 */
uint F_00d3abc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3abc0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d3ac10 */
unsigned int F_00d3ac10(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3ac10u, gen_a0, 0u, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  uint local_c;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x1c))(param_1);
  fVar2 = (float10)(int)(uVar1 - 1);
  if ((int)(uVar1 - 1) < 0) {
    fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar2 = fVar2 * ((float10)param_2 / ((float10)GEN_TOD(gen_bits2f(param_1[3]))));
  local_c = (uint)(longlong)TRUNC(fVar2);
  *param_3 = local_c;
  fVar4 = REFG(float, 0x1087f04);
  if (uVar1 - 2 < local_c) {
    *param_3 = uVar1 - 2;
    *param_4 = fVar4;
    return 0;
  }
  fVar3 = (float10)(int)local_c;
  if ((int)local_c < 0) {
    fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar2 = fVar2 - fVar3;
  fVar4 = (float)fVar2;
  if (fVar2 < (float10)0) {
    *param_4 = 0.0;
    return 0;
  }
  if (REFG(float, 0x1087f04) < fVar4) {
    fVar4 = REFG(float, 0x1087f04);
  }
  *param_4 = fVar4;
  return 0;
}

/* ref: FUN_00d3acf0 */
uint F_00d3acf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd3acf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3ad10 */
uint F_00d3ad10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd3ad10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3ad30 */
uint F_00d3ad30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd3ad30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3ad50 */
uint F_00d3ad50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd3ad50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d3ad70 */
uint F_00d3ad70(unsigned int gen_a0)
{
  GEN_ENTER(0xd3ad70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 * 200 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00d3adb0 */
uint F_00d3adb0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3adb0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d3adf0 */
uint F_00d3adf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3adf0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d3ae40 */
uint F_00d3ae40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3ae40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 200 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00d3ae90 */
uint F_00d3ae90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3ae90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a1;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  
  gen_divps(&(auVar1), &(*param_1), &(*param_2));
  memcpy(&(*(gen_v16 *)this), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)this) ? sizeof(auVar1) : sizeof(*(gen_v16 *)this));
  return (uint)param_1;
}

/* ref: FUN_00d3aeb0 */
uint F_00d3aeb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3aeb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d3aed0 */
uint F_00d3aed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3aed0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d3aef0 */
uint F_00d3aef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3aef0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d3af10 */
uint F_00d3af10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3af10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d3af30 */
uint F_00d3af30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3af30u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d3af70 */
uint F_00d3af70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3af70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d3af90 */
uint F_00d3af90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3af90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a1;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  
  gen_divps(&(auVar1), &(*param_1), &(*param_2));
  memcpy(&(*(gen_v16 *)this), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)this) ? sizeof(auVar1) : sizeof(*(gen_v16 *)this));
  return (uint)param_1;
}

/* ref: FUN_00d3afb0 */
uint F_00d3afb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3afb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  LPVOID this_00;
  uint uVar2;
  uint uVar3;
  
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar1 = *(int *)((int)this_00 + 0xc);
  uVar3 = param_1 + 0x7fU & 0xffffff80;
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

/* ref: FUN_00d3b060 */
uint F_00d3b060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3b060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  LPVOID this_00;
  uint uVar2;
  uint uVar3;
  
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar1 = *(int *)((int)this_00 + 0xc);
  uVar3 = param_1 * 0x30 + 0x7fU & 0xffffff80;
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

/* ref: FUN_00d3b110 */
uint F_00d3b110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3b110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  LPVOID this_00;
  uint uVar2;
  uint uVar3;
  
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar1 = *(int *)((int)this_00 + 0xc);
  uVar3 = param_1 * 4 + 0x7fU & 0xffffff80;
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

/* ref: FUN_00d3b1c0 */
uint F_00d3b1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd3b1c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  uint * param_6 = (uint *)(uintptr_t)gen_a5;
  uint * param_7 = (uint *)(uintptr_t)gen_a6;
  uint uVar1;
  int iVar2;
  short * psVar3;
  undefined4 * puVar4;
  
  if (param_3[1] == 0) {
    *param_2 = *param_1;
    *param_5 = param_4;
    uVar1 = *param_6;
    *param_7 = uVar1;
    return uVar1;
  }
  uVar1 = F_00d367f0(param_4);
  *param_7 = uVar1;
  F_00da1030(uVar1,0,param_4);
  *param_5 = 0;
  iVar2 = param_3[1] + -1;
  if (-1 < iVar2) {
    psVar3 = (short *)(*param_3 + iVar2 * 2);
    do {
      if (((-1 < *psVar3) && (*psVar3 < param_4)) &&
         ((param_6[1] == 0 || (*(char *)(iVar2 + *param_6) != '\0')))) {
        *param_5 = iVar2 + 1;
        break;
      }
      psVar3 = psVar3 + -1;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = F_00d368e0(*param_5);
  *param_2 = uVar1;
  iVar2 = param_4 * 0xc;
  uVar1 = iVar2 - 1;
  if (-1 < (int)uVar1) {
    uVar1 = 0;
    puVar4 = (undefined4 *)*param_1;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00d3b280 */
uint F_00d3b280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd3b280u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  uint * param_6 = (uint *)(uintptr_t)gen_a5;
  uint * param_7 = (uint *)(uintptr_t)gen_a6;
  uint uVar1;
  int iVar2;
  short * psVar3;
  undefined4 * puVar4;
  
  if (param_3[1] == 0) {
    *param_2 = *param_1;
    *param_5 = param_4;
    uVar1 = *param_6;
    *param_7 = uVar1;
    return uVar1;
  }
  uVar1 = F_00d367f0(param_4);
  *param_7 = uVar1;
  F_00da1030(uVar1,0,param_4);
  *param_5 = 0;
  iVar2 = param_3[1] + -1;
  if (-1 < iVar2) {
    psVar3 = (short *)(*param_3 + iVar2 * 2);
    do {
      if (((-1 < *psVar3) && (*psVar3 < param_4)) &&
         ((param_6[1] == 0 || (*(char *)(iVar2 + *param_6) != '\0')))) {
        *param_5 = iVar2 + 1;
        break;
      }
      psVar3 = psVar3 + -1;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = F_00d36890(*param_5);
  *param_2 = uVar1;
  uVar1 = param_4 - 1;
  if (-1 < (int)uVar1) {
    uVar1 = 0;
    puVar4 = (undefined4 *)*param_1;
    for (; param_4 != 0; param_4 = param_4 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  return uVar1;
}

/* ref: FUN_00d3b330 */
unsigned int F_00d3b330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd3b330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  if (*(int *)(param_3 + 4) != 0) {
    F_00d36930(*param_2,param_5);
    F_00d36840(param_7,param_4);
  }
  return 0;
}

/* ref: FUN_00d3b360 */
unsigned int F_00d3b360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd3b360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  if (*(int *)(param_3 + 4) != 0) {
    F_00d36980(*param_2,param_5);
    F_00d36840(param_7,param_4);
  }
  return 0;
}

/* ref: FUN_00d3b390 */
unsigned int F_00d3b390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd3b390u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint * param_5 = (uint *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  float * pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
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
  int iVar53;
  float * pfVar54;
  float * pfVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
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
  
  uVar2 = *param_5;
  uVar3 = param_5[1];
  uVar4 = param_5[2];
  uVar5 = param_5[3];
  iVar53 = (int)(param_6 + 3 + (param_6 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < iVar53) {
    pfVar55 = (float *)(param_3 + 0x50);
    pfVar54 = (float *)(param_1 + 0x50);
    do {
      pfVar1 = ((float *)GEN_TOP(((param_3 - param_1) + -0x50 + (int)pfVar54)));
      fVar33 = *pfVar1;
      fVar34 = pfVar1[1];
      fVar35 = pfVar1[2];
      fVar36 = pfVar1[3];
      fVar6 = pfVar55[-0xf];
      fVar7 = pfVar55[-0xe];
      fVar8 = pfVar55[-0xd];
      fVar9 = pfVar55[-0xc];
      fVar10 = pfVar55[-0xb];
      fVar11 = pfVar55[-10];
      fVar12 = pfVar55[-9];
      fVar37 = pfVar55[8];
      fVar38 = pfVar55[9];
      fVar39 = pfVar55[10];
      fVar40 = pfVar55[0xb];
      fVar41 = pfVar55[0xc];
      fVar42 = pfVar55[0xd];
      fVar43 = pfVar55[0xe];
      fVar44 = pfVar55[0xf];
      fVar45 = pfVar55[0x14];
      fVar46 = pfVar55[0x15];
      fVar47 = pfVar55[0x16];
      fVar48 = pfVar55[0x17];
      fVar13 = pfVar55[-4];
      fVar14 = pfVar55[-3];
      fVar15 = pfVar55[-2];
      fVar16 = pfVar55[-1];
      fVar17 = *pfVar55;
      fVar18 = pfVar55[1];
      fVar19 = pfVar55[2];
      fVar20 = pfVar55[3];
      fVar49 = pfVar55[0x18];
      fVar50 = pfVar55[0x19];
      fVar51 = pfVar55[0x1a];
      fVar52 = pfVar55[0x1b];
      uVar56 = *(uint *)&REFG(undefined, 0x1134d28) & uVar4 | *(uint *)&REFG(undefined, 0x1134d20) & uVar2;
      uVar57 = *(uint *)&REFG(undefined, 0x1134d2c) & uVar5 | *(uint *)&REFG(undefined, 0x1134d24) & uVar3;
      uVar58 = *(uint *)&REFG(undefined, 0x1134d20) & uVar2 | *(uint *)&REFG(undefined, 0x1134d28) & uVar4;
      uVar59 = *(uint *)&REFG(undefined, 0x1134d24) & uVar3 | *(uint *)&REFG(undefined, 0x1134d2c) & uVar5;
      fVar60 = gen_bits2f(uVar57 | uVar56);
      fVar64 = gen_bits2f(uVar56 | uVar57);
      fVar68 = gen_bits2f(uVar59 | uVar58);
      fVar72 = gen_bits2f(uVar58 | uVar59);
      uVar56 = *(uint *)&REFG(undefined, 0x1134d38) & uVar4 | *(uint *)&REFG(undefined, 0x1134d30) & uVar2;
      uVar57 = *(uint *)&REFG(undefined, 0x1134d3c) & uVar5 | *(uint *)&REFG(undefined, 0x1134d34) & uVar3;
      uVar58 = *(uint *)&REFG(undefined, 0x1134d30) & uVar2 | *(uint *)&REFG(undefined, 0x1134d38) & uVar4;
      uVar59 = *(uint *)&REFG(undefined, 0x1134d34) & uVar3 | *(uint *)&REFG(undefined, 0x1134d3c) & uVar5;
      fVar61 = gen_bits2f(uVar57 | uVar56);
      fVar65 = gen_bits2f(uVar56 | uVar57);
      fVar69 = gen_bits2f(uVar59 | uVar58);
      fVar73 = gen_bits2f(uVar58 | uVar59);
      fVar21 = pfVar55[-8];
      fVar22 = pfVar55[-7];
      fVar23 = pfVar55[-6];
      fVar24 = pfVar55[-5];
      uVar56 = *(uint *)&REFG(undefined, 0x1134d48) & uVar4 | *(uint *)&REFG(undefined, 0x1134d40) & uVar2;
      uVar57 = *(uint *)&REFG(undefined, 0x1134d4c) & uVar5 | *(uint *)&REFG(undefined, 0x1134d44) & uVar3;
      uVar58 = *(uint *)&REFG(undefined, 0x1134d40) & uVar2 | *(uint *)&REFG(undefined, 0x1134d48) & uVar4;
      uVar59 = *(uint *)&REFG(undefined, 0x1134d44) & uVar3 | *(uint *)&REFG(undefined, 0x1134d4c) & uVar5;
      fVar62 = gen_bits2f(uVar57 | uVar56);
      fVar66 = gen_bits2f(uVar56 | uVar57);
      fVar70 = gen_bits2f(uVar59 | uVar58);
      fVar74 = gen_bits2f(uVar58 | uVar59);
      fVar25 = pfVar55[4];
      fVar26 = pfVar55[5];
      fVar27 = pfVar55[6];
      fVar28 = pfVar55[7];
      uVar56 = *(uint *)&REFG(undefined, 0x1134d58) & uVar4 | *(uint *)&REFG(undefined, 0x1134d50) & uVar2;
      uVar57 = *(uint *)&REFG(undefined, 0x1134d5c) & uVar5 | *(uint *)&REFG(undefined, 0x1134d54) & uVar3;
      uVar58 = *(uint *)&REFG(undefined, 0x1134d50) & uVar2 | *(uint *)&REFG(undefined, 0x1134d58) & uVar4;
      uVar59 = *(uint *)&REFG(undefined, 0x1134d54) & uVar3 | *(uint *)&REFG(undefined, 0x1134d5c) & uVar5;
      fVar63 = gen_bits2f(uVar57 | uVar56);
      fVar67 = gen_bits2f(uVar56 | uVar57);
      fVar71 = gen_bits2f(uVar59 | uVar58);
      fVar75 = gen_bits2f(uVar58 | uVar59);
      fVar29 = pfVar55[0x10];
      fVar30 = pfVar55[0x11];
      fVar31 = pfVar55[0x12];
      fVar32 = pfVar55[0x13];
      pfVar54[-0x10] = pfVar55[-0x10] * fVar60;
      pfVar54[-0xf] = fVar6 * fVar64;
      pfVar54[-0xe] = fVar7 * fVar68;
      pfVar54[-0xd] = fVar8 * fVar72;
      pfVar54[-0x14] = fVar60 * fVar33;
      pfVar54[-0x13] = fVar64 * fVar34;
      pfVar54[-0x12] = fVar68 * fVar35;
      pfVar54[-0x11] = fVar72 * fVar36;
      pfVar54[-0xc] = fVar9 * fVar60;
      pfVar54[-0xb] = fVar10 * fVar64;
      pfVar54[-10] = fVar11 * fVar68;
      pfVar54[-9] = fVar12 * fVar72;
      pfVar54[-4] = fVar13 * fVar61;
      pfVar54[-3] = fVar14 * fVar65;
      pfVar54[-2] = fVar15 * fVar69;
      pfVar54[-1] = fVar16 * fVar73;
      pfVar54[-8] = fVar61 * fVar21;
      pfVar54[-7] = fVar65 * fVar22;
      pfVar54[-6] = fVar69 * fVar23;
      pfVar54[-5] = fVar73 * fVar24;
      *pfVar54 = fVar17 * fVar61;
      pfVar54[1] = fVar18 * fVar65;
      pfVar54[2] = fVar19 * fVar69;
      pfVar54[3] = fVar20 * fVar73;
      pfVar54[8] = fVar37 * fVar62;
      pfVar54[9] = fVar38 * fVar66;
      pfVar54[10] = fVar39 * fVar70;
      pfVar54[0xb] = fVar40 * fVar74;
      pfVar54[4] = fVar62 * fVar25;
      pfVar54[5] = fVar66 * fVar26;
      pfVar54[6] = fVar70 * fVar27;
      pfVar54[7] = fVar74 * fVar28;
      pfVar54[0xc] = fVar41 * fVar62;
      pfVar54[0xd] = fVar42 * fVar66;
      pfVar54[0xe] = fVar43 * fVar70;
      pfVar54[0xf] = fVar44 * fVar74;
      pfVar54[0x10] = fVar63 * fVar29;
      pfVar54[0x11] = fVar67 * fVar30;
      pfVar54[0x12] = fVar71 * fVar31;
      pfVar54[0x13] = fVar75 * fVar32;
      pfVar54[0x14] = fVar45 * fVar63;
      pfVar54[0x15] = fVar46 * fVar67;
      pfVar54[0x16] = fVar47 * fVar71;
      pfVar54[0x17] = fVar48 * fVar75;
      pfVar54[0x18] = fVar49 * fVar63;
      pfVar54[0x19] = fVar50 * fVar67;
      pfVar54[0x1a] = fVar51 * fVar71;
      pfVar54[0x1b] = fVar52 * fVar75;
      *param_2 = uVar2;
      param_2[1] = uVar3;
      param_2[2] = uVar4;
      param_2[3] = uVar5;
      param_2 = param_2 + 4;
      pfVar55 = pfVar55 + 0x30;
      pfVar54 = pfVar54 + 0x30;
      iVar53 = iVar53 + -1;
    } while (iVar53 != 0);
  }
  return 0;
}

/* ref: FUN_00d3b570 */
uint F_00d3b570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3b570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  LPVOID this_00;
  uint uVar2;
  int iVar3;
  
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar1 = *(int *)((int)this_00 + 0xc);
  iVar3 = param_1 * 0x80;
  uVar2 = iVar1 + iVar3;
  if ((iVar3 <= *(int *)((int)this_00 + 8)) && (uVar2 <= *(uint *)((int)this_00 + 0x10))) {
    *(uint *)((int)this_00 + 0xc) = uVar2;
    *(int *)this = iVar1;
    *(int *)((int)this + 4) = param_1;
    return (uint)this;
  }
  uVar2 = F_00d94390(this_00,iVar3);
  *(uint *)this = uVar2;
  *(int *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_00d3b620 */
uint F_00d3b620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3b620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  LPVOID this_00;
  uint uVar2;
  uint uVar3;
  
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar1 = *(int *)((int)this_00 + 0xc);
  uVar3 = param_1 * 0x54 + 0x7fU & 0xffffff80;
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

/* ref: FUN_00d3b6d0 */
uint F_00d3b6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3b6d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d3b6f0 */
unsigned int F_00d3b6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd3b6f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
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
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  int iVar101;
  int iVar102;
  float * pfVar103;
  float * pfVar104;
  uint uVar105;
  uint uVar106;
  uint uVar107;
  uint uVar108;
  uint uVar109;
  uint uVar110;
  uint uVar111;
  uint uVar112;
  uint uVar113;
  uint uVar114;
  uint uVar115;
  uint uVar116;
  uint uVar117;
  uint uVar118;
  uint uVar119;
  uint uVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  uint uVar130;
  float fVar131;
  uint uVar132;
  uint uVar133;
  uint uVar134;
  float fVar135;
  uint uVar136;
  float fVar137;
  uint uVar138;
  float fVar139;
  uint uVar140;
  float fVar141;
  uint uVar142;
  float fVar143;
  uint uVar144;
  float fVar145;
  uint uVar146;
  float fVar147;
  uint uVar148;
  float fVar149;
  uint uVar150;
  float fVar151;
  uint uVar152;
  float fVar153;
  uint uVar154;
  float fVar155;
  uint uVar156;
  float fVar157;
  uint uVar158;
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar162;
  int local_14;
  
  fVar26 = *param_5;
  fVar27 = param_5[1];
  fVar28 = param_5[2];
  fVar29 = param_5[3];
  local_14 = (int)(param_6 + 3 + (param_6 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < local_14) {
    pfVar103 = (float *)(param_1 + 0x50);
    iVar101 = (param_1 - param_3) + -0x50;
    pfVar104 = (float *)(param_3 + 0x50);
    iVar102 = param_4 - (int)param_2;
    do {
      pfVar1 = (float *)((int)pfVar104 + iVar101);
      fVar30 = pfVar1[1];
      fVar31 = pfVar1[2];
      fVar32 = pfVar1[3];
      fVar33 = pfVar103[-0x10];
      fVar34 = pfVar103[-0xf];
      fVar35 = pfVar103[-0xe];
      fVar36 = pfVar103[-0xd];
      fVar37 = pfVar103[-8];
      fVar38 = pfVar103[-7];
      fVar39 = pfVar103[-6];
      fVar40 = pfVar103[-5];
      fVar41 = pfVar103[-4];
      fVar42 = pfVar103[-3];
      fVar43 = pfVar103[-2];
      fVar44 = pfVar103[-1];
      fVar45 = *pfVar103;
      fVar46 = pfVar103[1];
      fVar47 = pfVar103[2];
      fVar48 = pfVar103[3];
      fVar49 = pfVar103[4];
      fVar50 = pfVar103[5];
      fVar51 = pfVar103[6];
      fVar52 = pfVar103[7];
      fVar53 = pfVar103[8];
      fVar54 = pfVar103[9];
      fVar55 = pfVar103[10];
      fVar56 = pfVar103[0xb];
      fVar57 = pfVar103[0xc];
      fVar58 = pfVar103[0xd];
      fVar59 = pfVar103[0xe];
      fVar60 = pfVar103[0xf];
      fVar61 = pfVar103[0x10];
      fVar62 = pfVar103[0x11];
      fVar63 = pfVar103[0x12];
      fVar64 = pfVar103[0x13];
      fVar65 = pfVar103[0x14];
      fVar66 = pfVar103[0x15];
      fVar67 = pfVar103[0x16];
      fVar68 = pfVar103[0x17];
      fVar69 = pfVar103[0x18];
      fVar70 = pfVar103[0x19];
      fVar71 = pfVar103[0x1a];
      fVar72 = pfVar103[0x1b];
      fVar73 = pfVar104[-0x10];
      fVar74 = pfVar104[-0xf];
      fVar75 = pfVar104[-0xe];
      fVar76 = pfVar104[-0xd];
      pfVar2 = (float *)(iVar102 + (int)param_2);
      fVar125 = *pfVar2 * fVar26;
      fVar126 = pfVar2[1] * fVar27;
      fVar127 = pfVar2[2] * fVar28;
      fVar128 = pfVar2[3] * fVar29;
      fVar77 = pfVar104[-8];
      fVar78 = pfVar104[-7];
      fVar79 = pfVar104[-6];
      fVar80 = pfVar104[-5];
      fVar81 = pfVar104[-4];
      fVar82 = pfVar104[-3];
      fVar83 = pfVar104[-2];
      fVar84 = pfVar104[-1];
      fVar85 = pfVar104[4];
      fVar86 = pfVar104[5];
      fVar87 = pfVar104[6];
      fVar88 = pfVar104[7];
      fVar3 = pfVar104[-0xc];
      fVar4 = pfVar104[-0xb];
      fVar5 = pfVar104[-10];
      fVar6 = pfVar104[-9];
      fVar89 = pfVar104[8];
      fVar90 = pfVar104[9];
      fVar91 = pfVar104[10];
      fVar92 = pfVar104[0xb];
      fVar93 = pfVar104[0x10];
      fVar94 = pfVar104[0x11];
      fVar95 = pfVar104[0x12];
      fVar96 = pfVar104[0x13];
      fVar97 = pfVar104[0x14];
      fVar98 = pfVar104[0x15];
      fVar99 = pfVar104[0x16];
      fVar100 = pfVar104[0x17];
      uVar105 = *(uint *)&REFG(undefined, 0x1134d28) & (uint)gen_fl2bits(fVar127) |
                *(uint *)&REFG(undefined, 0x1134d20) & (uint)gen_fl2bits(fVar125);
      uVar106 = *(uint *)&REFG(undefined, 0x1134d2c) & (uint)gen_fl2bits(fVar128) |
                *(uint *)&REFG(undefined, 0x1134d24) & (uint)gen_fl2bits(fVar126);
      uVar107 = *(uint *)&REFG(undefined, 0x1134d20) & (uint)gen_fl2bits(fVar125) |
                *(uint *)&REFG(undefined, 0x1134d28) & (uint)gen_fl2bits(fVar127);
      uVar108 = *(uint *)&REFG(undefined, 0x1134d24) & (uint)gen_fl2bits(fVar126) |
                *(uint *)&REFG(undefined, 0x1134d2c) & (uint)gen_fl2bits(fVar128);
      fVar135 = gen_bits2f(uVar106 | uVar105);
      fVar137 = gen_bits2f(uVar105 | uVar106);
      fVar139 = gen_bits2f(uVar108 | uVar107);
      fVar141 = gen_bits2f(uVar107 | uVar108);
      fVar7 = *pfVar104;
      fVar8 = pfVar104[1];
      fVar9 = pfVar104[2];
      fVar10 = pfVar104[3];
      fVar11 = pfVar104[0xc];
      fVar12 = pfVar104[0xd];
      fVar13 = pfVar104[0xe];
      fVar14 = pfVar104[0xf];
      fVar15 = pfVar104[0x18];
      fVar16 = pfVar104[0x19];
      fVar17 = pfVar104[0x1a];
      fVar18 = pfVar104[0x1b];
      fVar19 = pfVar103[-0xc];
      fVar20 = pfVar103[-0xb];
      fVar21 = pfVar103[-10];
      fVar22 = pfVar103[-9];
      fVar23 = pfVar104[-0x13];
      fVar24 = pfVar104[-0x12];
      fVar25 = pfVar104[-0x11];
      fVar121 = fVar73 * fVar33;
      fVar122 = fVar74 * fVar34;
      fVar123 = fVar75 * fVar35;
      fVar124 = fVar76 * fVar36;
      fVar129 = fVar123 + fVar121;
      fVar131 = fVar124 + fVar122;
      fVar121 = fVar121 + fVar123;
      fVar122 = fVar122 + fVar124;
      uVar105 = -(uint)(fVar131 + fVar129 < 0.0);
      uVar109 = -(uint)(fVar129 + fVar131 < 0.0);
      uVar113 = -(uint)(fVar122 + fVar121 < 0.0);
      uVar117 = -(uint)(fVar121 + fVar122 < 0.0);
      uVar130 = (uint)gen_fl2bits(fVar73) ^ *(uint *)&REFG(undefined, 0x10ab9c0);
      uVar132 = (uint)gen_fl2bits(fVar74) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
      uVar133 = (uint)gen_fl2bits(fVar75) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
      uVar134 = (uint)gen_fl2bits(fVar76) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
      uVar106 = *(uint *)&REFG(undefined, 0x1134d38) & (uint)gen_fl2bits(fVar127) |
                *(uint *)&REFG(undefined, 0x1134d30) & (uint)gen_fl2bits(fVar125);
      uVar107 = *(uint *)&REFG(undefined, 0x1134d3c) & (uint)gen_fl2bits(fVar128) |
                *(uint *)&REFG(undefined, 0x1134d34) & (uint)gen_fl2bits(fVar126);
      uVar108 = *(uint *)&REFG(undefined, 0x1134d30) & (uint)gen_fl2bits(fVar125) |
                *(uint *)&REFG(undefined, 0x1134d38) & (uint)gen_fl2bits(fVar127);
      uVar110 = *(uint *)&REFG(undefined, 0x1134d34) & (uint)gen_fl2bits(fVar126) |
                *(uint *)&REFG(undefined, 0x1134d3c) & (uint)gen_fl2bits(fVar128);
      fVar143 = gen_bits2f(uVar107 | uVar106);
      fVar145 = gen_bits2f(uVar106 | uVar107);
      fVar147 = gen_bits2f(uVar110 | uVar108);
      fVar149 = gen_bits2f(uVar108 | uVar110);
      fVar121 = fVar81 * fVar41;
      fVar122 = fVar82 * fVar42;
      fVar123 = fVar83 * fVar43;
      fVar124 = fVar84 * fVar44;
      fVar129 = fVar123 + fVar121;
      fVar131 = fVar124 + fVar122;
      fVar121 = fVar121 + fVar123;
      fVar122 = fVar122 + fVar124;
      uVar106 = -(uint)(fVar131 + fVar129 < 0.0);
      uVar110 = -(uint)(fVar129 + fVar131 < 0.0);
      uVar114 = -(uint)(fVar122 + fVar121 < 0.0);
      uVar118 = -(uint)(fVar121 + fVar122 < 0.0);
      uVar136 = (uint)gen_fl2bits(fVar81) ^ *(uint *)&REFG(undefined, 0x10ab9c0);
      uVar138 = (uint)gen_fl2bits(fVar82) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
      uVar140 = (uint)gen_fl2bits(fVar83) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
      uVar142 = (uint)gen_fl2bits(fVar84) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
      uVar107 = *(uint *)&REFG(undefined, 0x1134d48) & (uint)gen_fl2bits(fVar127) |
                *(uint *)&REFG(undefined, 0x1134d40) & (uint)gen_fl2bits(fVar125);
      uVar108 = *(uint *)&REFG(undefined, 0x1134d4c) & (uint)gen_fl2bits(fVar128) |
                *(uint *)&REFG(undefined, 0x1134d44) & (uint)gen_fl2bits(fVar126);
      uVar111 = *(uint *)&REFG(undefined, 0x1134d40) & (uint)gen_fl2bits(fVar125) |
                *(uint *)&REFG(undefined, 0x1134d48) & (uint)gen_fl2bits(fVar127);
      uVar112 = *(uint *)&REFG(undefined, 0x1134d44) & (uint)gen_fl2bits(fVar126) |
                *(uint *)&REFG(undefined, 0x1134d4c) & (uint)gen_fl2bits(fVar128);
      fVar151 = gen_bits2f(uVar108 | uVar107);
      fVar153 = gen_bits2f(uVar107 | uVar108);
      fVar155 = gen_bits2f(uVar112 | uVar111);
      fVar157 = gen_bits2f(uVar111 | uVar112);
      fVar121 = fVar89 * fVar53;
      fVar122 = fVar90 * fVar54;
      fVar123 = fVar91 * fVar55;
      fVar124 = fVar92 * fVar56;
      fVar129 = fVar123 + fVar121;
      fVar131 = fVar124 + fVar122;
      fVar121 = fVar121 + fVar123;
      fVar122 = fVar122 + fVar124;
      uVar107 = -(uint)(fVar131 + fVar129 < 0.0);
      uVar111 = -(uint)(fVar129 + fVar131 < 0.0);
      uVar115 = -(uint)(fVar122 + fVar121 < 0.0);
      uVar119 = -(uint)(fVar121 + fVar122 < 0.0);
      uVar144 = (uint)gen_fl2bits(fVar89) ^ *(uint *)&REFG(undefined, 0x10ab9c0);
      uVar146 = (uint)gen_fl2bits(fVar90) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
      uVar148 = (uint)gen_fl2bits(fVar91) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
      uVar150 = (uint)gen_fl2bits(fVar92) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
      uVar108 = *(uint *)&REFG(undefined, 0x1134d58) & (uint)gen_fl2bits(fVar127) |
                *(uint *)&REFG(undefined, 0x1134d50) & (uint)gen_fl2bits(fVar125);
      uVar112 = *(uint *)&REFG(undefined, 0x1134d5c) & (uint)gen_fl2bits(fVar128) |
                *(uint *)&REFG(undefined, 0x1134d54) & (uint)gen_fl2bits(fVar126);
      uVar116 = *(uint *)&REFG(undefined, 0x1134d50) & (uint)gen_fl2bits(fVar125) |
                *(uint *)&REFG(undefined, 0x1134d58) & (uint)gen_fl2bits(fVar127);
      uVar120 = *(uint *)&REFG(undefined, 0x1134d54) & (uint)gen_fl2bits(fVar126) |
                *(uint *)&REFG(undefined, 0x1134d5c) & (uint)gen_fl2bits(fVar128);
      fVar159 = gen_bits2f(uVar112 | uVar108);
      fVar160 = gen_bits2f(uVar108 | uVar112);
      fVar161 = gen_bits2f(uVar120 | uVar116);
      fVar162 = gen_bits2f(uVar116 | uVar120);
      fVar121 = fVar97 * fVar65;
      fVar122 = fVar98 * fVar66;
      fVar123 = fVar99 * fVar67;
      fVar124 = fVar100 * fVar68;
      fVar129 = fVar123 + fVar121;
      fVar131 = fVar124 + fVar122;
      fVar121 = fVar121 + fVar123;
      fVar122 = fVar122 + fVar124;
      uVar108 = -(uint)(fVar131 + fVar129 < 0.0);
      uVar112 = -(uint)(fVar129 + fVar131 < 0.0);
      uVar116 = -(uint)(fVar122 + fVar121 < 0.0);
      uVar120 = -(uint)(fVar121 + fVar122 < 0.0);
      uVar152 = (uint)gen_fl2bits(fVar97) ^ *(uint *)&REFG(undefined, 0x10ab9c0);
      uVar154 = (uint)gen_fl2bits(fVar98) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
      uVar156 = (uint)gen_fl2bits(fVar99) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
      uVar158 = (uint)gen_fl2bits(fVar100) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
      pfVar2 = (float *)((int)pfVar104 + iVar101);
      *pfVar2 = fVar135 * pfVar104[-0x14] + *pfVar1;
      pfVar2[1] = fVar137 * fVar23 + fVar30;
      pfVar2[2] = fVar139 * fVar24 + fVar31;
      pfVar2[3] = fVar141 * fVar25 + fVar32;
      pfVar103[-0xc] = fVar3 * fVar135 + fVar19;
      pfVar103[-0xb] = fVar4 * fVar137 + fVar20;
      pfVar103[-10] = fVar5 * fVar139 + fVar21;
      pfVar103[-9] = fVar6 * fVar141 + fVar22;
      pfVar103[-0x10] =
           gen_bits2f(uVar130 & uVar105 | ~uVar105 & (uint)gen_fl2bits(fVar73)) * fVar135 + fVar33;
      pfVar103[-0xf] =
           gen_bits2f(uVar132 & uVar109 | ~uVar109 & (uint)gen_fl2bits(fVar74)) * fVar137 + fVar34;
      pfVar103[-0xe] =
           gen_bits2f(uVar133 & uVar113 | ~uVar113 & (uint)gen_fl2bits(fVar75)) * fVar139 + fVar35;
      pfVar103[-0xd] =
           gen_bits2f(uVar134 & uVar117 | ~uVar117 & (uint)gen_fl2bits(fVar76)) * fVar141 + fVar36;
      pfVar103[-8] = fVar143 * fVar77 + fVar37;
      pfVar103[-7] = fVar145 * fVar78 + fVar38;
      pfVar103[-6] = fVar147 * fVar79 + fVar39;
      pfVar103[-5] = fVar149 * fVar80 + fVar40;
      *pfVar103 = fVar7 * fVar143 + fVar45;
      pfVar103[1] = fVar8 * fVar145 + fVar46;
      pfVar103[2] = fVar9 * fVar147 + fVar47;
      pfVar103[3] = fVar10 * fVar149 + fVar48;
      pfVar103[-4] = gen_bits2f(uVar136 & uVar106 | ~uVar106 & (uint)gen_fl2bits(fVar81)) * fVar143
                     + fVar41;
      pfVar103[-3] = gen_bits2f(uVar138 & uVar110 | ~uVar110 & (uint)gen_fl2bits(fVar82)) * fVar145
                     + fVar42;
      pfVar103[-2] = gen_bits2f(uVar140 & uVar114 | ~uVar114 & (uint)gen_fl2bits(fVar83)) * fVar147
                     + fVar43;
      pfVar103[-1] = gen_bits2f(uVar142 & uVar118 | ~uVar118 & (uint)gen_fl2bits(fVar84)) * fVar149
                     + fVar44;
      pfVar103[4] = fVar151 * fVar85 + fVar49;
      pfVar103[5] = fVar153 * fVar86 + fVar50;
      pfVar103[6] = fVar155 * fVar87 + fVar51;
      pfVar103[7] = fVar157 * fVar88 + fVar52;
      pfVar103[0xc] = fVar11 * fVar151 + fVar57;
      pfVar103[0xd] = fVar12 * fVar153 + fVar58;
      pfVar103[0xe] = fVar13 * fVar155 + fVar59;
      pfVar103[0xf] = fVar14 * fVar157 + fVar60;
      pfVar103[8] = gen_bits2f(uVar144 & uVar107 | ~uVar107 & (uint)gen_fl2bits(fVar89)) * fVar151 +
                    fVar53;
      pfVar103[9] = gen_bits2f(uVar146 & uVar111 | ~uVar111 & (uint)gen_fl2bits(fVar90)) * fVar153 +
                    fVar54;
      pfVar103[10] = gen_bits2f(uVar148 & uVar115 | ~uVar115 & (uint)gen_fl2bits(fVar91)) * fVar155
                     + fVar55;
      pfVar103[0xb] =
           gen_bits2f(uVar150 & uVar119 | ~uVar119 & (uint)gen_fl2bits(fVar92)) * fVar157 + fVar56;
      pfVar103[0x10] = fVar159 * fVar93 + fVar61;
      pfVar103[0x11] = fVar160 * fVar94 + fVar62;
      pfVar103[0x12] = fVar161 * fVar95 + fVar63;
      pfVar103[0x13] = fVar162 * fVar96 + fVar64;
      pfVar103[0x18] = fVar15 * fVar159 + fVar69;
      pfVar103[0x19] = fVar16 * fVar160 + fVar70;
      pfVar103[0x1a] = fVar17 * fVar161 + fVar71;
      pfVar103[0x1b] = fVar18 * fVar162 + fVar72;
      pfVar103[0x14] =
           gen_bits2f(uVar152 & uVar108 | ~uVar108 & (uint)gen_fl2bits(fVar97)) * fVar159 + fVar65;
      pfVar103[0x15] =
           gen_bits2f(uVar154 & uVar112 | ~uVar112 & (uint)gen_fl2bits(fVar98)) * fVar160 + fVar66;
      pfVar103[0x16] =
           gen_bits2f(uVar156 & uVar116 | ~uVar116 & (uint)gen_fl2bits(fVar99)) * fVar161 + fVar67;
      pfVar103[0x17] =
           gen_bits2f(uVar158 & uVar120 | ~uVar120 & (uint)gen_fl2bits(fVar100)) * fVar162 + fVar68;
      *param_2 = *param_2 + fVar125;
      param_2[1] = param_2[1] + fVar126;
      param_2[2] = param_2[2] + fVar127;
      param_2[3] = param_2[3] + fVar128;
      param_2 = param_2 + 4;
      pfVar104 = pfVar104 + 0x30;
      pfVar103 = pfVar103 + 0x30;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return 0;
}

/* ref: FUN_00d3bae0 */
uint F_00d3bae0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3bae0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d3bb20 */
uint F_00d3bb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3bb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3bb60 */
uint F_00d3bb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3bb60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3bba0 */
uint F_00d3bba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3bba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)this;
  uVar2 = *(uint *)((int)this + 4) >> 1;
  param_1[1] = uVar2;
  uVar2 = uVar2 | 0x80000000;
  *param_1 = uVar1;
  param_1[2] = uVar2;
  return uVar2;
}

/* ref: FUN_00d3bbc0 */
uint F_00d3bbc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3bbc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)this;
  uVar2 = *(uint *)((int)this + 4) >> 3;
  param_1[1] = uVar2;
  uVar2 = uVar2 | 0x80000000;
  *param_1 = uVar1;
  param_1[2] = uVar2;
  return uVar2;
}

/* ref: FUN_00d3bbe0 */
uint F_00d3bbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3bbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)this;
  uVar2 = *(uint *)((int)this + 4) / 0x30;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[2] = uVar2 | 0x80000000;
  return (uint)param_1;
}

/* ref: FUN_00d3bc10 */
uint F_00d3bc10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3bc10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d3bc30 */
uint F_00d3bc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3bc30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d3bc50 */
uint F_00d3bc50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3bc50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d3bc70 */
uint F_00d3bc70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3bc70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d3bc90 */
uint F_00d3bc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3bc90u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d3bca0 */
uint F_00d3bca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3bca0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = in_ecx[1];
  uVar2 = in_ecx[2];
  uVar3 = in_ecx[3];
  *param_2 = *in_ecx;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d3bcb0 */
uint F_00d3bcb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd3bcb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_4;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)((int)this + 0x20) = param_6;
  *(undefined4 *)((int)this + 0x1c) = param_5;
  *(undefined4 *)((int)this + 0x28) = param_8;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 0x24) = param_7;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x2e) = 0;
  uVar1 = F_00d36890(param_1);
  *(uint *)((int)this + 8) = uVar1;
  uVar1 = F_00d36890(*(undefined4 *)((int)this + 0xc));
  *(uint *)((int)this + 0x14) = uVar1;
  return (uint)this;
}

/* ref: FUN_00d3be30 */
uint F_00d3be30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3be30u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d3be40 */
uint F_00d3be40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3be40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = in_ecx[1];
  uVar2 = in_ecx[2];
  uVar3 = in_ecx[3];
  *param_2 = *in_ecx;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d3be50 */
uint F_00d3be50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3be50u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)*param_1;
  uVar2 = (uint)((undefined4 *)*param_1)[1] >> 1;
  param_3[1] = uVar2;
  param_3[2] = uVar2 | 0x80000000;
  *param_3 = uVar1;
  *param_1 = *param_1 + 8;
  *param_2 = *param_2 + -1;
  return (uint)param_2;
}

/* ref: FUN_00d3be80 */
uint F_00d3be80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3be80u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)*param_1;
  uVar2 = (uint)((undefined4 *)*param_1)[1] >> 3;
  param_3[1] = uVar2;
  param_3[2] = uVar2 | 0x80000000;
  *param_3 = uVar1;
  *param_1 = *param_1 + 8;
  *param_2 = *param_2 + -1;
  return (uint)param_2;
}

/* ref: FUN_00d3beb0 */
uint F_00d3beb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3beb0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)*param_1;
  uVar2 = (uint)((undefined4 *)*param_1)[1] / 0x30;
  param_3[1] = uVar2;
  *param_3 = uVar1;
  param_3[2] = uVar2 | 0x80000000;
  *param_1 = *param_1 + 8;
  *param_2 = *param_2 + -1;
  return (uint)param_2;
}

/* ref: FUN_00d3bef0 */
uint F_00d3bef0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3bef0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d3bf30 */
uint F_00d3bf30(unsigned int gen_a0)
{
  GEN_ENTER(0xd3bf30u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d3bf70 */
uint F_00d3bf70(unsigned int gen_a0)
{
  GEN_ENTER(0xd3bf70u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d3bfb0 */
unsigned int F_00d3bfb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd3bfb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
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
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar17 [16];
  
  fVar7 = param_2[9];
  fVar9 = param_2[10];
  fVar8 = param_2[0xb];
  fVar10 = param_1[9];
  fVar5 = param_1[10];
  fVar6 = param_1[0xb];
  fVar11 = param_3[1];
  fVar13 = param_3[2];
  fVar12 = param_3[3];
  fVar14 = param_1[9];
  fVar15 = param_1[10];
  fVar16 = param_1[0xb];
  *(float *)((int)this + 0x20) = (param_2[8] - param_1[8]) * *param_3 + param_1[8];
  *(float *)((int)this + 0x24) = (fVar7 - fVar10) * fVar11 + fVar14;
  *(float *)((int)this + 0x28) = (fVar9 - fVar5) * fVar13 + fVar15;
  *(float *)((int)this + 0x2c) = (fVar8 - fVar6) * fVar12 + fVar16;
  fVar7 = param_2[1];
  fVar9 = param_2[2];
  fVar8 = param_2[3];
  fVar10 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  fVar11 = param_3[1];
  fVar13 = param_3[2];
  fVar12 = param_3[3];
  fVar14 = param_1[1];
  fVar15 = param_1[2];
  fVar16 = param_1[3];
  *(float *)this = (*param_2 - *param_1) * *param_3 + *param_1;
  *(float *)((int)this + 4) = (fVar7 - fVar10) * fVar11 + fVar14;
  *(float *)((int)this + 8) = (fVar9 - fVar5) * fVar13 + fVar15;
  *(float *)((int)this + 0xc) = (fVar8 - fVar6) * fVar12 + fVar16;
  fVar5 = param_2[4] * param_1[4];
  fVar6 = param_2[5] * param_1[5];
  fVar7 = param_2[6] * param_1[6];
  fVar9 = param_2[7] * param_1[7];
  fVar11 = fVar7 + fVar5;
  fVar13 = fVar9 + fVar6;
  fVar5 = fVar5 + fVar7;
  fVar6 = fVar6 + fVar9;
  fVar7 = *param_3;
  fVar9 = param_3[1];
  fVar8 = param_3[2];
  fVar10 = param_3[3];
  uVar1 = -(uint)(fVar13 + fVar11 < 0.0);
  uVar2 = -(uint)(fVar11 + fVar13 < 0.0);
  uVar3 = -(uint)(fVar6 + fVar5 < 0.0);
  uVar4 = -(uint)(fVar5 + fVar6 < 0.0);
  fVar7 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar7) & uVar1 | ~uVar1 & (uint)gen_fl2bits(fVar7)) *
          param_2[4] + (*(float *)&REFG(undefined, 0x1138af0) - fVar7) * param_1[4];
  fVar9 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar9) & uVar2 | ~uVar2 & (uint)gen_fl2bits(fVar9)) *
          param_2[5] + (*(float *)&REFG(undefined, 0x1138af4) - fVar9) * param_1[5];
  fVar8 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar8) & uVar3 | ~uVar3 & (uint)gen_fl2bits(fVar8)) *
          param_2[6] + (*(float *)&REFG(undefined, 0x1138af8) - fVar8) * param_1[6];
  fVar10 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar10) & uVar4 | ~uVar4 & (uint)gen_fl2bits(fVar10))
           * param_2[7] + (*(float *)&REFG(undefined, 0x1138afc) - fVar10) * param_1[7];
  fVar5 = fVar8 * fVar8 + fVar7 * fVar7;
  fVar6 = fVar10 * fVar10 + fVar9 * fVar9;
  fVar11 = fVar7 * fVar7 + fVar8 * fVar8;
  fVar13 = fVar9 * fVar9 + fVar10 * fVar10;
  fVar12 = fVar6 + fVar5;
  fVar5 = fVar5 + fVar6;
  fVar6 = fVar13 + fVar11;
  fVar11 = fVar11 + fVar13;
  (*(undefined4 *)((char *)&auVar17 + 4)) = (undefined4)gen_fl2bits(fVar5);
  (*(undefined4 *)((char *)&auVar17 + 0)) = (undefined4)gen_fl2bits(fVar12);
  (*(undefined4 *)((char *)&auVar17 + 8)) = (undefined4)gen_fl2bits(fVar6);
  (*(undefined4 *)((char *)&auVar17 + 12)) = (undefined4)gen_fl2bits(fVar11);
  gen_rsqrtps(&(auVar17), &(in_XMM3), &(auVar17));
  fVar16 = (*(float *)((char *)&auVar17 + 0));
  fVar13 = (*(float *)((char *)&auVar17 + 4));
  fVar14 = (*(float *)((char *)&auVar17 + 8));
  fVar15 = (*(float *)((char *)&auVar17 + 12));
  fVar5 = *(float *)&REFG(undefined, 0x1134d84) - (fVar13 * fVar5) * fVar13;
  fVar6 = *(float *)&REFG(undefined, 0x1134d88) - (fVar14 * fVar6) * fVar14;
  fVar11 = *(float *)&REFG(undefined, 0x1134d8c) - (fVar15 * fVar11) * fVar15;
  fVar13 = *(float *)&REFG(undefined, 0x1134d94) * fVar13;
  fVar14 = *(float *)&REFG(undefined, 0x1134d98) * fVar14;
  fVar15 = *(float *)&REFG(undefined, 0x1134d9c) * fVar15;
  *(float *)((int)this + 0x10) =
       ((*(float *)&REFG(undefined, 0x1134d80) - (fVar16 * fVar12) * fVar16) * (*(float *)&REFG(undefined, 0x1134d90) * fVar16))
       * fVar7;
  *(float *)((int)this + 0x14) = (fVar5 * fVar13) * fVar9;
  *(float *)((int)this + 0x18) = (fVar6 * fVar14) * fVar8;
  *(float *)((int)this + 0x1c) = (fVar11 * fVar15) * fVar10;
  return 0;
}

/* ref: FUN_00d3c080 */
uint F_00d3c080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3c080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 4);
  uVar1 = *(undefined4 *)this;
  param_1[1] = uVar2;
  uVar2 = uVar2 | 0x80000000;
  *param_1 = uVar1;
  param_1[2] = uVar2;
  return uVar2;
}

/* ref: FUN_00d3c0a0 */
uint F_00d3c0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3c0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)this;
  uVar2 = *(uint *)((int)this + 4) >> 1;
  param_1[1] = uVar2;
  uVar2 = uVar2 | 0x80000000;
  *param_1 = uVar1;
  param_1[2] = uVar2;
  return uVar2;
}

/* ref: FUN_00d3c0c0 */
uint F_00d3c0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3c0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)this;
  uVar2 = *(uint *)((int)this + 4) >> 6;
  param_1[1] = uVar2;
  uVar2 = uVar2 | 0x80000000;
  *param_1 = uVar1;
  param_1[2] = uVar2;
  return uVar2;
}

/* ref: FUN_00d3c0e0 */
unsigned int F_00d3c0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3c0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)this;
  uVar2 = *(uint *)((int)this + 4) / 0x70;
  param_1[1] = uVar2;
  param_1[2] = uVar2 | 0x80000000;
  *param_1 = uVar1;
  return 0;
}

/* ref: FUN_00d3c2c0 */
uint F_00d3c2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3c2c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d3c330 */
uint F_00d3c330(unsigned int gen_a0)
{
  GEN_ENTER(0xd3c330u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d3c3c0 */
uint F_00d3c3c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3c3c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d3c400 */
uint F_00d3c400(unsigned int gen_a0)
{
  GEN_ENTER(0xd3c400u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d3c440 */
unsigned int F_00d3c440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd3c440u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  float * pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  fVar2 = *param_5;
  fVar3 = param_5[1];
  fVar4 = param_5[2];
  fVar5 = param_5[3];
  iVar9 = (int)(param_6 + 3 + (param_6 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < iVar9) {
    iVar10 = param_3 - (int)param_1;
    iVar11 = param_2 - (int)param_1;
    do {
      pfVar1 = (float *)(iVar10 + (int)param_1);
      fVar6 = pfVar1[1];
      fVar7 = pfVar1[2];
      fVar8 = pfVar1[3];
      *param_1 = *pfVar1 * fVar2;
      param_1[1] = fVar6 * fVar3;
      param_1[2] = fVar7 * fVar4;
      param_1[3] = fVar8 * fVar5;
      pfVar1 = (float *)(iVar11 + (int)param_1);
      *pfVar1 = fVar2;
      pfVar1[1] = fVar3;
      pfVar1[2] = fVar4;
      pfVar1[3] = fVar5;
      param_1 = param_1 + 4;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return 0;
}

/* ref: FUN_00d3c490 */
uint F_00d3c490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3c490u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = ((undefined4 *)*param_1)[1];
  uVar2 = *(undefined4 *)*param_1;
  param_3[1] = uVar1;
  param_3[2] = uVar1 | 0x80000000;
  *param_3 = uVar2;
  *param_1 = *param_1 + 8;
  *param_2 = *param_2 + -1;
  return (uint)param_2;
}

/* ref: FUN_00d3c4c0 */
uint F_00d3c4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3c4c0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)*param_1;
  uVar2 = (uint)((undefined4 *)*param_1)[1] >> 1;
  param_3[1] = uVar2;
  param_3[2] = uVar2 | 0x80000000;
  *param_3 = uVar1;
  *param_1 = *param_1 + 8;
  *param_2 = *param_2 + -1;
  return (uint)param_2;
}

/* ref: FUN_00d3c4f0 */
uint F_00d3c4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3c4f0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)*param_1;
  uVar2 = (uint)((undefined4 *)*param_1)[1] >> 6;
  param_3[1] = uVar2;
  param_3[2] = uVar2 | 0x80000000;
  *param_3 = uVar1;
  *param_1 = *param_1 + 8;
  *param_2 = *param_2 + -1;
  return (uint)param_2;
}

/* ref: FUN_00d3c520 */
uint F_00d3c520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3c520u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)*param_1;
  uVar2 = (uint)((undefined4 *)*param_1)[1] / 0x70;
  param_3[1] = uVar2;
  *param_3 = uVar1;
  param_3[2] = uVar2 | 0x80000000;
  *param_1 = *param_1 + 8;
  *param_2 = *param_2 + -1;
  return (uint)param_2;
}

/* ref: FUN_00d3c560 */
unsigned int F_00d3c560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd3c560u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  int iVar1;
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
  int iVar61;
  float * pfVar62;
  float * pfVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
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
  float fVar94;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  undefined1 auVar95 [16];
  float fVar101;
  undefined1 auVar96 [16];
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar117;
  float fVar118;
  float fVar119;
  undefined1 auVar106 [16];
  float fVar112;
  undefined1 auVar107 [16];
  float fVar116;
  float fVar120;
  undefined1 auVar108 [16];
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  float fVar132;
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar136;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar150;
  float fVar151;
  float fVar152;
  float fVar153;
  float fVar154;
  float fVar155;
  float fVar156;
  undefined1 auVar131 [16];
  float fVar157;
  float fVar158;
  float fVar159;
  float fVar160;
  float fVar164;
  float fVar165;
  float fVar167;
  float fVar168;
  float fVar169;
  float fVar171;
  float fVar172;
  float fVar173;
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  float fVar166;
  float fVar170;
  float fVar174;
  undefined1 auVar163 [16];
  float fVar175;
  
  fVar21 = *param_4;
  fVar22 = param_4[1];
  fVar23 = param_4[2];
  fVar24 = param_4[3];
  iVar61 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < iVar61) {
    pfVar62 = (float *)(param_1 + 0x50);
    pfVar63 = (float *)(param_2 + 0x50);
    iVar1 = (param_1 - param_2) + -0x50;
    do {
      fVar68 = fVar21 * *param_3;
      fVar70 = fVar22 * param_3[1];
      fVar72 = fVar23 * param_3[2];
      fVar76 = fVar24 * param_3[3];
      fVar25 = pfVar63[0x18];
      fVar26 = pfVar63[0x19];
      fVar27 = pfVar63[0x1a];
      fVar28 = pfVar63[0x1b];
      pfVar2 = (float *)(iVar1 + (int)pfVar63);
      fVar12 = *pfVar2;
      fVar13 = pfVar2[1];
      fVar14 = pfVar2[2];
      fVar15 = pfVar2[3];
      fVar29 = pfVar62[-8];
      fVar30 = pfVar62[-7];
      fVar31 = pfVar62[-6];
      fVar32 = pfVar62[-5];
      fVar75 = pfVar62[-4];
      fVar105 = pfVar62[-3];
      fVar78 = pfVar62[-2];
      fVar112 = pfVar62[-1];
      fVar33 = *pfVar62;
      fVar34 = pfVar62[1];
      fVar35 = pfVar62[2];
      fVar36 = pfVar62[3];
      fVar37 = pfVar62[4];
      fVar38 = pfVar62[5];
      fVar39 = pfVar62[6];
      fVar40 = pfVar62[7];
      fVar79 = pfVar62[8];
      fVar80 = pfVar62[9];
      fVar83 = pfVar62[10];
      fVar86 = pfVar62[0xb];
      fVar41 = pfVar62[0xc];
      fVar42 = pfVar62[0xd];
      fVar43 = pfVar62[0xe];
      fVar44 = pfVar62[0xf];
      fVar45 = pfVar62[0x10];
      fVar46 = pfVar62[0x11];
      fVar47 = pfVar62[0x12];
      fVar48 = pfVar62[0x13];
      fVar84 = pfVar62[0x14];
      fVar87 = pfVar62[0x15];
      fVar89 = pfVar62[0x16];
      fVar91 = pfVar62[0x17];
      fVar49 = pfVar62[0x18];
      fVar50 = pfVar62[0x19];
      fVar51 = pfVar62[0x1a];
      fVar52 = pfVar62[0x1b];
      memcpy(&(auVar162), &(*(gen_v16 *)(pfVar63 + -0x10)), sizeof(*(gen_v16 *)(pfVar63 + -0x10)) < sizeof(auVar162) ? sizeof(*(gen_v16 *)(pfVar63 + -0x10)) : sizeof(auVar162));
      fVar3 = (*(float *)((char *)&auVar162 + 0));
      fVar5 = (*(float *)((char *)&auVar162 + 4));
      fVar9 = (*(float *)((char *)&auVar162 + 12));
      fVar73 = (*(float *)((char *)&auVar162 + 8));
      fVar121 = fVar3 * fVar12;
      fVar132 = fVar5 * fVar13;
      fVar142 = fVar73 * fVar14;
      fVar157 = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0));
      fVar164 = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4));
      fVar168 = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8));
      fVar172 = gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc));
      fVar102 = pfVar62[-0x10];
      fVar109 = pfVar62[-0xf];
      fVar113 = pfVar62[-0xe];
      fVar117 = pfVar62[-0xd];
      fVar53 = pfVar63[-0xc];
      fVar54 = pfVar63[-0xb];
      fVar55 = pfVar63[-10];
      fVar56 = pfVar63[-9];
      fVar57 = *pfVar63;
      fVar58 = pfVar63[1];
      fVar59 = pfVar63[2];
      fVar60 = pfVar63[3];
      memcpy(&(auVar162), &(*(gen_v16 *)(pfVar63 + 0x14)), sizeof(*(gen_v16 *)(pfVar63 + 0x14)) < sizeof(auVar162) ? sizeof(*(gen_v16 *)(pfVar63 + 0x14)) : sizeof(auVar162));
      fVar4 = (*(float *)((char *)&auVar162 + 0));
      fVar6 = (*(float *)((char *)&auVar162 + 4));
      fVar10 = (*(float *)((char *)&auVar162 + 12));
      fVar122 = (((fVar132 + fVar121) + fVar142) * fVar3 + (fVar9 * fVar9 + fVar157) * fVar12) +
                (fVar14 * fVar5 - fVar13 * fVar73) * fVar9;
      fVar133 = (((fVar132 + fVar121) + fVar142) * fVar5 + (fVar9 * fVar9 + fVar164) * fVar13) +
                (fVar12 * fVar73 - fVar14 * fVar3) * fVar9;
      fVar143 = (((fVar132 + fVar121) + fVar142) * fVar73 + (fVar9 * fVar9 + fVar168) * fVar14) +
                (fVar13 * fVar3 - fVar12 * fVar5) * fVar9;
      fVar152 = (((fVar132 + fVar121) + fVar142) * fVar9 + (fVar9 * fVar9 + fVar172) * fVar15) +
                (fVar15 * fVar9 - fVar15 * fVar9) * fVar9;
      fVar16 = pfVar63[-0x13];
      fVar17 = pfVar63[-0x12];
      fVar18 = pfVar63[-0x11];
      memcpy(&(auVar95), &(*(gen_v16 *)(pfVar63 + -4)), sizeof(*(gen_v16 *)(pfVar63 + -4)) < sizeof(auVar95) ? sizeof(*(gen_v16 *)(pfVar63 + -4)) : sizeof(auVar95));
      fVar121 = (*(float *)((char *)&auVar95 + 0));
      fVar142 = (*(float *)((char *)&auVar95 + 4));
      fVar82 = (*(float *)((char *)&auVar95 + 12));
      memcpy(&(auVar96), &(*(gen_v16 *)(pfVar63 + 8)), sizeof(*(gen_v16 *)(pfVar63 + 8)) < sizeof(auVar96) ? sizeof(*(gen_v16 *)(pfVar63 + 8)) : sizeof(auVar96));
      fVar132 = (*(float *)((char *)&auVar96 + 0));
      fVar7 = (*(float *)((char *)&auVar96 + 4));
      fVar8 = (*(float *)((char *)&auVar96 + 8));
      fVar11 = (*(float *)((char *)&auVar96 + 12));
      fVar123 = ((fVar113 * fVar5 - fVar109 * fVar73) + fVar9 * fVar102) + fVar117 * fVar3;
      fVar134 = ((fVar102 * fVar73 - fVar113 * fVar3) + fVar9 * fVar109) + fVar117 * fVar5;
      fVar144 = ((fVar109 * fVar3 - fVar102 * fVar5) + fVar9 * fVar113) + fVar117 * fVar73;
      fVar77 = fVar117 * fVar9 - ((fVar5 * fVar109 + fVar3 * fVar102) + fVar73 * fVar113);
      fVar3 = pfVar62[-0xc];
      fVar5 = pfVar62[-0xb];
      fVar9 = pfVar62[-10];
      fVar73 = pfVar62[-9];
      fVar81 = (*(float *)((char *)&auVar95 + 8));
      fVar69 = fVar121 * fVar29;
      fVar71 = fVar142 * fVar30;
      fVar74 = fVar81 * fVar31;
      fVar124 = (((fVar71 + fVar69) + fVar74) * fVar121 + (fVar82 * fVar82 + fVar157) * fVar29) +
                (fVar31 * fVar142 - fVar30 * fVar81) * fVar82;
      fVar135 = (((fVar71 + fVar69) + fVar74) * fVar142 + (fVar82 * fVar82 + fVar164) * fVar30) +
                (fVar29 * fVar81 - fVar31 * fVar121) * fVar82;
      fVar145 = (((fVar71 + fVar69) + fVar74) * fVar81 + (fVar82 * fVar82 + fVar168) * fVar31) +
                (fVar30 * fVar121 - fVar29 * fVar142) * fVar82;
      fVar153 = (((fVar71 + fVar69) + fVar74) * fVar82 + (fVar82 * fVar82 + fVar172) * fVar32) +
                (fVar32 * fVar82 - fVar32 * fVar82) * fVar82;
      fVar69 = pfVar63[-8];
      fVar71 = pfVar63[-7];
      fVar74 = pfVar63[-6];
      fVar19 = pfVar63[-5];
      fVar125 = ((fVar78 * fVar142 - fVar105 * fVar81) + fVar82 * fVar75) + fVar112 * fVar121;
      fVar136 = ((fVar75 * fVar81 - fVar78 * fVar121) + fVar82 * fVar105) + fVar112 * fVar142;
      fVar146 = ((fVar105 * fVar121 - fVar75 * fVar142) + fVar82 * fVar78) + fVar112 * fVar81;
      fVar85 = fVar112 * fVar82 - ((fVar142 * fVar105 + fVar121 * fVar75) + fVar81 * fVar78);
      fVar121 = fVar132 * fVar37;
      fVar142 = fVar7 * fVar38;
      fVar82 = fVar8 * fVar39;
      fVar126 = (((fVar142 + fVar121) + fVar82) * fVar132 + (fVar11 * fVar11 + fVar157) * fVar37) +
                (fVar39 * fVar7 - fVar38 * fVar8) * fVar11;
      fVar137 = (((fVar142 + fVar121) + fVar82) * fVar7 + (fVar11 * fVar11 + fVar164) * fVar38) +
                (fVar37 * fVar8 - fVar39 * fVar132) * fVar11;
      fVar147 = (((fVar142 + fVar121) + fVar82) * fVar8 + (fVar11 * fVar11 + fVar168) * fVar39) +
                (fVar38 * fVar132 - fVar37 * fVar7) * fVar11;
      fVar154 = (((fVar142 + fVar121) + fVar82) * fVar11 + (fVar11 * fVar11 + fVar172) * fVar40) +
                (fVar40 * fVar11 - fVar40 * fVar11) * fVar11;
      fVar121 = pfVar63[4];
      fVar142 = pfVar63[5];
      fVar82 = pfVar63[6];
      fVar81 = pfVar63[7];
      fVar127 = ((fVar83 * fVar7 - fVar80 * fVar8) + fVar11 * fVar79) + fVar86 * fVar132;
      fVar138 = ((fVar79 * fVar8 - fVar83 * fVar132) + fVar11 * fVar80) + fVar86 * fVar7;
      fVar148 = ((fVar80 * fVar132 - fVar79 * fVar7) + fVar11 * fVar83) + fVar86 * fVar8;
      fVar93 = fVar86 * fVar11 - ((fVar7 * fVar80 + fVar132 * fVar79) + fVar8 * fVar83);
      fVar132 = pfVar63[0xc];
      fVar7 = pfVar63[0xd];
      fVar8 = pfVar63[0xe];
      fVar11 = pfVar63[0xf];
      fVar98 = (*(float *)((char *)&auVar162 + 8));
      fVar88 = fVar4 * fVar45;
      fVar90 = fVar6 * fVar46;
      fVar92 = fVar98 * fVar47;
      fVar128 = (((fVar90 + fVar88) + fVar92) * fVar4 + (fVar10 * fVar10 + fVar157) * fVar45) +
                (fVar47 * fVar6 - fVar46 * fVar98) * fVar10;
      fVar139 = (((fVar90 + fVar88) + fVar92) * fVar6 + (fVar10 * fVar10 + fVar164) * fVar46) +
                (fVar45 * fVar98 - fVar47 * fVar4) * fVar10;
      fVar149 = (((fVar90 + fVar88) + fVar92) * fVar98 + (fVar10 * fVar10 + fVar168) * fVar47) +
                (fVar46 * fVar4 - fVar45 * fVar6) * fVar10;
      fVar155 = (((fVar90 + fVar88) + fVar92) * fVar10 + (fVar10 * fVar10 + fVar172) * fVar48) +
                (fVar48 * fVar10 - fVar48 * fVar10) * fVar10;
      fVar88 = pfVar63[0x10];
      fVar90 = pfVar63[0x11];
      fVar92 = pfVar63[0x12];
      fVar157 = pfVar63[0x13];
      fVar129 = ((fVar89 * fVar6 - fVar87 * fVar98) + fVar10 * fVar84) + fVar91 * fVar4;
      fVar140 = ((fVar84 * fVar98 - fVar89 * fVar4) + fVar10 * fVar87) + fVar91 * fVar6;
      fVar150 = ((fVar87 * fVar4 - fVar84 * fVar6) + fVar10 * fVar89) + fVar91 * fVar98;
      fVar99 = fVar91 * fVar10 - ((fVar6 * fVar87 + fVar4 * fVar84) + fVar98 * fVar89);
      fVar158 = fVar123 * fVar102;
      fVar165 = fVar134 * fVar109;
      fVar169 = fVar144 * fVar113;
      fVar173 = fVar77 * fVar117;
      uVar64 = *(uint *)&REFG(undefined, 0x1134d28) & (uint)gen_fl2bits(fVar72) |
               *(uint *)&REFG(undefined, 0x1134d20) & (uint)gen_fl2bits(fVar68);
      uVar65 = *(uint *)&REFG(undefined, 0x1134d2c) & (uint)gen_fl2bits(fVar76) |
               *(uint *)&REFG(undefined, 0x1134d24) & (uint)gen_fl2bits(fVar70);
      uVar66 = *(uint *)&REFG(undefined, 0x1134d20) & (uint)gen_fl2bits(fVar68) |
               *(uint *)&REFG(undefined, 0x1134d28) & (uint)gen_fl2bits(fVar72);
      uVar67 = *(uint *)&REFG(undefined, 0x1134d24) & (uint)gen_fl2bits(fVar70) |
               *(uint *)&REFG(undefined, 0x1134d2c) & (uint)gen_fl2bits(fVar76);
      fVar130 = gen_bits2f(uVar65 | uVar64);
      fVar141 = gen_bits2f(uVar64 | uVar65);
      fVar151 = gen_bits2f(uVar67 | uVar66);
      fVar156 = gen_bits2f(uVar66 | uVar67);
      fVar4 = pfVar62[-0xc];
      fVar6 = pfVar62[-0xb];
      fVar10 = pfVar62[-10];
      fVar98 = pfVar62[-9];
      fVar164 = pfVar62[-0xc];
      fVar168 = pfVar62[-0xb];
      fVar172 = pfVar62[-10];
      fVar20 = pfVar62[-9];
      fVar94 = fVar169 + fVar158;
      fVar97 = fVar173 + fVar165;
      fVar158 = fVar158 + fVar169;
      fVar165 = fVar165 + fVar173;
      uVar64 = -(uint)(fVar97 + fVar94 < 0.0);
      uVar65 = -(uint)(fVar94 + fVar97 < 0.0);
      uVar66 = -(uint)(fVar165 + fVar158 < 0.0);
      uVar67 = -(uint)(fVar158 + fVar165 < 0.0);
      (*(float *)((char *)&auVar161 + 0)) = (*(float *)&REFG(undefined, 0x1138af0) - fVar130) * fVar102;
      (*(float *)((char *)&auVar161 + 4)) = (*(float *)&REFG(undefined, 0x1138af4) - fVar141) * fVar109;
      (*(float *)((char *)&auVar161 + 8)) = (*(float *)&REFG(undefined, 0x1138af8) - fVar151) * fVar113;
      (*(float *)((char *)&auVar161 + 12)) = (*(float *)&REFG(undefined, 0x1138afc) - fVar156) * fVar117;
      fVar94 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar130) & uVar64 |
                          ~uVar64 & (uint)gen_fl2bits(fVar130)) * fVar123 + (*(float *)((char *)&auVar161 + 0));
      fVar165 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar141) & uVar65 |
                           ~uVar65 & (uint)gen_fl2bits(fVar141)) * fVar134 + (*(float *)((char *)&auVar161 + 4));
      fVar134 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar151) & uVar66 |
                           ~uVar66 & (uint)gen_fl2bits(fVar151)) * fVar144 + (*(float *)((char *)&auVar161 + 8));
      fVar169 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar156) & uVar67 |
                           ~uVar67 & (uint)gen_fl2bits(fVar156)) * fVar77 + (*(float *)((char *)&auVar161 + 12));
      fVar102 = fVar134 * fVar134 + fVar94 * fVar94;
      fVar109 = fVar169 * fVar169 + fVar165 * fVar165;
      fVar113 = fVar94 * fVar94 + fVar134 * fVar134;
      fVar117 = fVar165 * fVar165 + fVar169 * fVar169;
      (*(float *)((char *)&auVar131 + 0)) = fVar109 + fVar102;
      (*(float *)((char *)&auVar131 + 4)) = fVar102 + fVar109;
      (*(float *)((char *)&auVar131 + 8)) = fVar117 + fVar113;
      (*(float *)((char *)&auVar131 + 12)) = fVar113 + fVar117;
      gen_rsqrtps(&(auVar162), &(auVar161), &(auVar131));
      fVar102 = (*(float *)((char *)&auVar162 + 0));
      fVar109 = (*(float *)((char *)&auVar162 + 4));
      fVar113 = (*(float *)((char *)&auVar162 + 8));
      fVar117 = (*(float *)((char *)&auVar162 + 12));
      fVar159 = fVar102 * *(float *)&REFG(undefined, 0x1134d90);
      fVar166 = fVar109 * *(float *)&REFG(undefined, 0x1134d94);
      fVar170 = fVar113 * *(float *)&REFG(undefined, 0x1134d98);
      fVar174 = fVar117 * *(float *)&REFG(undefined, 0x1134d9c);
      fVar103 = *(float *)&REFG(undefined, 0x1134d80) - (fVar102 * (*(float *)((char *)&auVar131 + 0))) * fVar102;
      fVar110 = *(float *)&REFG(undefined, 0x1134d84) - (fVar109 * (*(float *)((char *)&auVar131 + 4))) * fVar109;
      fVar114 = *(float *)&REFG(undefined, 0x1134d88) - (fVar113 * (*(float *)((char *)&auVar131 + 8))) * fVar113;
      fVar118 = *(float *)&REFG(undefined, 0x1134d8c) - (fVar117 * (*(float *)((char *)&auVar131 + 12))) * fVar117;
      uVar64 = *(uint *)&REFG(undefined, 0x1134d38) & (uint)gen_fl2bits(fVar72) |
               *(uint *)&REFG(undefined, 0x1134d30) & (uint)gen_fl2bits(fVar68);
      uVar65 = *(uint *)&REFG(undefined, 0x1134d3c) & (uint)gen_fl2bits(fVar76) |
               *(uint *)&REFG(undefined, 0x1134d34) & (uint)gen_fl2bits(fVar70);
      uVar66 = *(uint *)&REFG(undefined, 0x1134d30) & (uint)gen_fl2bits(fVar68) |
               *(uint *)&REFG(undefined, 0x1134d38) & (uint)gen_fl2bits(fVar72);
      uVar67 = *(uint *)&REFG(undefined, 0x1134d34) & (uint)gen_fl2bits(fVar70) |
               *(uint *)&REFG(undefined, 0x1134d3c) & (uint)gen_fl2bits(fVar76);
      fVar104 = gen_bits2f(uVar65 | uVar64);
      fVar111 = gen_bits2f(uVar64 | uVar65);
      fVar115 = gen_bits2f(uVar67 | uVar66);
      fVar119 = gen_bits2f(uVar66 | uVar67);
      fVar113 = fVar125 * fVar75;
      fVar117 = fVar136 * fVar105;
      fVar77 = fVar146 * fVar78;
      fVar97 = fVar85 * fVar112;
      fVar102 = fVar77 + fVar113;
      fVar109 = fVar97 + fVar117;
      fVar113 = fVar113 + fVar77;
      fVar117 = fVar117 + fVar97;
      uVar64 = -(uint)(fVar109 + fVar102 < 0.0);
      uVar65 = -(uint)(fVar102 + fVar109 < 0.0);
      uVar66 = -(uint)(fVar117 + fVar113 < 0.0);
      uVar67 = -(uint)(fVar113 + fVar117 < 0.0);
      (*(float *)((char *)&auVar163 + 0)) = (*(float *)&REFG(undefined, 0x1138af0) - fVar104) * fVar75;
      (*(float *)((char *)&auVar163 + 4)) = (*(float *)&REFG(undefined, 0x1138af4) - fVar111) * fVar105;
      (*(float *)((char *)&auVar163 + 8)) = (*(float *)&REFG(undefined, 0x1138af8) - fVar115) * fVar78;
      (*(float *)((char *)&auVar163 + 12)) = (*(float *)&REFG(undefined, 0x1138afc) - fVar119) * fVar112;
      fVar97 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar104) & uVar64 |
                          ~uVar64 & (uint)gen_fl2bits(fVar104)) * fVar125 + (*(float *)((char *)&auVar163 + 0));
      fVar123 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar111) & uVar65 |
                           ~uVar65 & (uint)gen_fl2bits(fVar111)) * fVar136 + (*(float *)((char *)&auVar163 + 4));
      fVar136 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar115) & uVar66 |
                           ~uVar66 & (uint)gen_fl2bits(fVar115)) * fVar146 + (*(float *)((char *)&auVar163 + 8));
      fVar173 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar119) & uVar67 |
                           ~uVar67 & (uint)gen_fl2bits(fVar119)) * fVar85 + (*(float *)((char *)&auVar163 + 12));
      fVar102 = fVar136 * fVar136 + fVar97 * fVar97;
      fVar109 = fVar173 * fVar173 + fVar123 * fVar123;
      fVar113 = fVar97 * fVar97 + fVar136 * fVar136;
      fVar117 = fVar123 * fVar123 + fVar173 * fVar173;
      (*(float *)((char *)&auVar106 + 0)) = fVar109 + fVar102;
      (*(float *)((char *)&auVar106 + 4)) = fVar102 + fVar109;
      (*(float *)((char *)&auVar106 + 8)) = fVar117 + fVar113;
      (*(float *)((char *)&auVar106 + 12)) = fVar113 + fVar117;
      gen_rsqrtps(&(auVar162), &(auVar163), &(auVar106));
      fVar102 = (*(float *)((char *)&auVar162 + 0));
      fVar109 = (*(float *)((char *)&auVar162 + 4));
      fVar117 = (*(float *)((char *)&auVar162 + 8));
      fVar105 = (*(float *)((char *)&auVar162 + 12));
      fVar160 = fVar102 * *(float *)&REFG(undefined, 0x1134d90);
      fVar167 = fVar109 * *(float *)&REFG(undefined, 0x1134d94);
      fVar171 = fVar117 * *(float *)&REFG(undefined, 0x1134d98);
      fVar175 = fVar105 * *(float *)&REFG(undefined, 0x1134d9c);
      fVar102 = *(float *)&REFG(undefined, 0x1134d80) - (fVar102 * (*(float *)((char *)&auVar106 + 0))) * fVar102;
      fVar113 = *(float *)&REFG(undefined, 0x1134d84) - (fVar109 * (*(float *)((char *)&auVar106 + 4))) * fVar109;
      fVar75 = *(float *)&REFG(undefined, 0x1134d88) - (fVar117 * (*(float *)((char *)&auVar106 + 8))) * fVar117;
      fVar78 = *(float *)&REFG(undefined, 0x1134d8c) - (fVar105 * (*(float *)((char *)&auVar106 + 12))) * fVar105;
      uVar64 = *(uint *)&REFG(undefined, 0x1134d48) & (uint)gen_fl2bits(fVar72) |
               *(uint *)&REFG(undefined, 0x1134d40) & (uint)gen_fl2bits(fVar68);
      uVar65 = *(uint *)&REFG(undefined, 0x1134d4c) & (uint)gen_fl2bits(fVar76) |
               *(uint *)&REFG(undefined, 0x1134d44) & (uint)gen_fl2bits(fVar70);
      uVar66 = *(uint *)&REFG(undefined, 0x1134d40) & (uint)gen_fl2bits(fVar68) |
               *(uint *)&REFG(undefined, 0x1134d48) & (uint)gen_fl2bits(fVar72);
      uVar67 = *(uint *)&REFG(undefined, 0x1134d44) & (uint)gen_fl2bits(fVar70) |
               *(uint *)&REFG(undefined, 0x1134d4c) & (uint)gen_fl2bits(fVar76);
      fVar158 = gen_bits2f(uVar65 | uVar64);
      fVar125 = gen_bits2f(uVar64 | uVar65);
      fVar144 = gen_bits2f(uVar67 | uVar66);
      fVar100 = gen_bits2f(uVar66 | uVar67);
      fVar105 = fVar127 * fVar79;
      fVar112 = fVar138 * fVar80;
      fVar77 = fVar148 * fVar83;
      fVar85 = fVar93 * fVar86;
      fVar109 = fVar77 + fVar105;
      fVar117 = fVar85 + fVar112;
      fVar105 = fVar105 + fVar77;
      fVar112 = fVar112 + fVar85;
      uVar64 = -(uint)(fVar117 + fVar109 < 0.0);
      uVar65 = -(uint)(fVar109 + fVar117 < 0.0);
      uVar66 = -(uint)(fVar112 + fVar105 < 0.0);
      uVar67 = -(uint)(fVar105 + fVar112 < 0.0);
      (*(float *)((char *)&auVar107 + 0)) = (*(float *)&REFG(undefined, 0x1138af0) - fVar158) * fVar79;
      (*(float *)((char *)&auVar107 + 4)) = (*(float *)&REFG(undefined, 0x1138af4) - fVar125) * fVar80;
      (*(float *)((char *)&auVar107 + 8)) = (*(float *)&REFG(undefined, 0x1138af8) - fVar144) * fVar83;
      (*(float *)((char *)&auVar107 + 12)) = (*(float *)&REFG(undefined, 0x1138afc) - fVar100) * fVar86;
      fVar109 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar158) & uVar64 |
                           ~uVar64 & (uint)gen_fl2bits(fVar158)) * fVar127 + (*(float *)((char *)&auVar107 + 0));
      fVar117 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar125) & uVar65 |
                           ~uVar65 & (uint)gen_fl2bits(fVar125)) * fVar138 + (*(float *)((char *)&auVar107 + 4));
      fVar105 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar144) & uVar66 |
                           ~uVar66 & (uint)gen_fl2bits(fVar144)) * fVar148 + (*(float *)((char *)&auVar107 + 8));
      fVar112 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar100) & uVar67 |
                           ~uVar67 & (uint)gen_fl2bits(fVar100)) * fVar93 + (*(float *)((char *)&auVar107 + 12));
      fVar79 = fVar105 * fVar105 + fVar109 * fVar109;
      fVar80 = fVar112 * fVar112 + fVar117 * fVar117;
      fVar83 = fVar109 * fVar109 + fVar105 * fVar105;
      fVar86 = fVar117 * fVar117 + fVar112 * fVar112;
      (*(float *)((char *)&auVar95 + 0)) = fVar80 + fVar79;
      (*(float *)((char *)&auVar95 + 4)) = fVar79 + fVar80;
      (*(float *)((char *)&auVar95 + 8)) = fVar86 + fVar83;
      (*(float *)((char *)&auVar95 + 12)) = fVar83 + fVar86;
      gen_rsqrtps(&(auVar162), &(auVar107), &(auVar95));
      fVar93 = (*(float *)((char *)&auVar162 + 0));
      fVar127 = (*(float *)((char *)&auVar162 + 4));
      fVar138 = (*(float *)((char *)&auVar162 + 8));
      fVar148 = (*(float *)((char *)&auVar162 + 12));
      fVar79 = *(float *)&REFG(undefined, 0x1134d80) - (fVar93 * (*(float *)((char *)&auVar95 + 0))) * fVar93;
      fVar83 = *(float *)&REFG(undefined, 0x1134d84) - (fVar127 * (*(float *)((char *)&auVar95 + 4))) * fVar127;
      fVar77 = *(float *)&REFG(undefined, 0x1134d88) - (fVar138 * (*(float *)((char *)&auVar95 + 8))) * fVar138;
      fVar85 = *(float *)&REFG(undefined, 0x1134d8c) - (fVar148 * (*(float *)((char *)&auVar95 + 12))) * fVar148;
      fVar93 = *(float *)&REFG(undefined, 0x1134d90) * fVar93;
      fVar127 = *(float *)&REFG(undefined, 0x1134d94) * fVar127;
      fVar138 = *(float *)&REFG(undefined, 0x1134d98) * fVar138;
      fVar148 = *(float *)&REFG(undefined, 0x1134d9c) * fVar148;
      uVar64 = *(uint *)&REFG(undefined, 0x1134d58) & (uint)gen_fl2bits(fVar72) |
               *(uint *)&REFG(undefined, 0x1134d50) & (uint)gen_fl2bits(fVar68);
      uVar65 = *(uint *)&REFG(undefined, 0x1134d5c) & (uint)gen_fl2bits(fVar76) |
               *(uint *)&REFG(undefined, 0x1134d54) & (uint)gen_fl2bits(fVar70);
      uVar66 = *(uint *)&REFG(undefined, 0x1134d50) & (uint)gen_fl2bits(fVar68) |
               *(uint *)&REFG(undefined, 0x1134d58) & (uint)gen_fl2bits(fVar72);
      uVar67 = *(uint *)&REFG(undefined, 0x1134d54) & (uint)gen_fl2bits(fVar70) |
               *(uint *)&REFG(undefined, 0x1134d5c) & (uint)gen_fl2bits(fVar76);
      fVar72 = gen_bits2f(uVar65 | uVar64);
      fVar76 = gen_bits2f(uVar64 | uVar65);
      fVar146 = gen_bits2f(uVar67 | uVar66);
      fVar101 = gen_bits2f(uVar66 | uVar67);
      fVar68 = fVar129 * fVar84;
      fVar70 = fVar140 * fVar87;
      fVar116 = fVar150 * fVar89;
      fVar120 = fVar99 * fVar91;
      fVar80 = fVar116 + fVar68;
      fVar86 = fVar120 + fVar70;
      fVar68 = fVar68 + fVar116;
      fVar70 = fVar70 + fVar120;
      uVar64 = -(uint)(fVar86 + fVar80 < 0.0);
      uVar65 = -(uint)(fVar80 + fVar86 < 0.0);
      uVar66 = -(uint)(fVar70 + fVar68 < 0.0);
      uVar67 = -(uint)(fVar68 + fVar70 < 0.0);
      (*(undefined4 *)((char *)&auVar162 + 0)) = (uint)gen_fl2bits(0.0 - fVar72) & uVar64;
      (*(undefined4 *)((char *)&auVar162 + 4)) = (uint)gen_fl2bits(0.0 - fVar76) & uVar65;
      (*(undefined4 *)((char *)&auVar162 + 8)) = (uint)gen_fl2bits(0.0 - fVar146) & uVar66;
      (*(undefined4 *)((char *)&auVar162 + 12)) = (uint)gen_fl2bits(0.0 - fVar101) & uVar67;
      (*(undefined4 *)((char *)&auVar108 + 0)) = ~uVar64 & (uint)gen_fl2bits(fVar72);
      (*(undefined4 *)((char *)&auVar108 + 4)) = ~uVar65 & (uint)gen_fl2bits(fVar76);
      (*(undefined4 *)((char *)&auVar108 + 8)) = ~uVar66 & (uint)gen_fl2bits(fVar146);
      (*(undefined4 *)((char *)&auVar108 + 12)) = ~uVar67 & (uint)gen_fl2bits(fVar101);
      undefined1 gen_vt0[16]; gen_v16_or(gen_vt0, &(auVar162), &(auVar108));
      memcpy(auVar162, gen_vt0, 16);
      fVar80 = (*(float *)((char *)&auVar162 + 0)) * fVar129 + (*(float *)&REFG(undefined, 0x1138af0) - fVar72) * fVar84;
      fVar86 = (*(float *)((char *)&auVar162 + 4)) * fVar140 + (*(float *)&REFG(undefined, 0x1138af4) - fVar76) * fVar87;
      fVar84 = (*(float *)((char *)&auVar162 + 8)) * fVar150 + (*(float *)&REFG(undefined, 0x1138af8) - fVar146) * fVar89;
      fVar87 = (*(float *)((char *)&auVar162 + 12)) * fVar99 + (*(float *)&REFG(undefined, 0x1138afc) - fVar101) * fVar91;
      fVar89 = fVar84 * fVar84 + fVar80 * fVar80;
      fVar91 = fVar87 * fVar87 + fVar86 * fVar86;
      fVar68 = fVar80 * fVar80 + fVar84 * fVar84;
      fVar70 = fVar86 * fVar86 + fVar87 * fVar87;
      (*(float *)((char *)&auVar96 + 0)) = fVar91 + fVar89;
      (*(float *)((char *)&auVar96 + 4)) = fVar89 + fVar91;
      (*(float *)((char *)&auVar96 + 8)) = fVar70 + fVar68;
      (*(float *)((char *)&auVar96 + 12)) = fVar68 + fVar70;
      gen_rsqrtps(&(auVar162), &(auVar108), &(auVar96));
      fVar99 = (*(float *)((char *)&auVar162 + 0));
      fVar116 = (*(float *)((char *)&auVar162 + 4));
      fVar120 = (*(float *)((char *)&auVar162 + 8));
      fVar129 = (*(float *)((char *)&auVar162 + 12));
      fVar89 = *(float *)&REFG(undefined, 0x1134d80) - (fVar99 * (*(float *)((char *)&auVar96 + 0))) * fVar99;
      fVar91 = *(float *)&REFG(undefined, 0x1134d84) - (fVar116 * (*(float *)((char *)&auVar96 + 4))) * fVar116;
      fVar68 = *(float *)&REFG(undefined, 0x1134d88) - (fVar120 * (*(float *)((char *)&auVar96 + 8))) * fVar120;
      fVar70 = *(float *)&REFG(undefined, 0x1134d8c) - (fVar129 * (*(float *)((char *)&auVar96 + 12))) * fVar129;
      fVar99 = *(float *)&REFG(undefined, 0x1134d90) * fVar99;
      fVar116 = *(float *)&REFG(undefined, 0x1134d94) * fVar116;
      fVar120 = *(float *)&REFG(undefined, 0x1134d98) * fVar120;
      fVar129 = *(float *)&REFG(undefined, 0x1134d9c) * fVar129;
      pfVar2 = (float *)(iVar1 + (int)pfVar63);
      *pfVar2 = (((fVar122 + fVar122) + pfVar63[-0x14]) - fVar12) * fVar130 + fVar12;
      pfVar2[1] = (((fVar133 + fVar133) + fVar16) - fVar13) * fVar141 + fVar13;
      pfVar2[2] = (((fVar143 + fVar143) + fVar17) - fVar14) * fVar151 + fVar14;
      pfVar2[3] = (((fVar152 + fVar152) + fVar18) - fVar15) * fVar156 + fVar15;
      pfVar62[-0x10] = (fVar103 * fVar159) * fVar94;
      pfVar62[-0xf] = (fVar110 * fVar166) * fVar165;
      pfVar62[-0xe] = (fVar114 * fVar170) * fVar134;
      pfVar62[-0xd] = (fVar118 * fVar174) * fVar169;
      pfVar62[-0xc] = (fVar53 * fVar3 - fVar4) * fVar130 + fVar164;
      pfVar62[-0xb] = (fVar54 * fVar5 - fVar6) * fVar141 + fVar168;
      pfVar62[-10] = (fVar55 * fVar9 - fVar10) * fVar151 + fVar172;
      pfVar62[-9] = (fVar56 * fVar73 - fVar98) * fVar156 + fVar20;
      pfVar62[-8] = (((fVar124 + fVar124) + fVar69) - fVar29) * fVar104 + fVar29;
      pfVar62[-7] = (((fVar135 + fVar135) + fVar71) - fVar30) * fVar111 + fVar30;
      pfVar62[-6] = (((fVar145 + fVar145) + fVar74) - fVar31) * fVar115 + fVar31;
      pfVar62[-5] = (((fVar153 + fVar153) + fVar19) - fVar32) * fVar119 + fVar32;
      pfVar62[-4] = (fVar102 * fVar160) * fVar97;
      pfVar62[-3] = (fVar113 * fVar167) * fVar123;
      pfVar62[-2] = (fVar75 * fVar171) * fVar136;
      pfVar62[-1] = (fVar78 * fVar175) * fVar173;
      *pfVar62 = (fVar57 * fVar33 - fVar33) * fVar104 + fVar33;
      pfVar62[1] = (fVar58 * fVar34 - fVar34) * fVar111 + fVar34;
      pfVar62[2] = (fVar59 * fVar35 - fVar35) * fVar115 + fVar35;
      pfVar62[3] = (fVar60 * fVar36 - fVar36) * fVar119 + fVar36;
      pfVar62[4] = (((fVar126 + fVar126) + fVar121) - fVar37) * fVar158 + fVar37;
      pfVar62[5] = (((fVar137 + fVar137) + fVar142) - fVar38) * fVar125 + fVar38;
      pfVar62[6] = (((fVar147 + fVar147) + fVar82) - fVar39) * fVar144 + fVar39;
      pfVar62[7] = (((fVar154 + fVar154) + fVar81) - fVar40) * fVar100 + fVar40;
      pfVar62[8] = fVar109 * (fVar79 * fVar93);
      pfVar62[9] = fVar117 * (fVar83 * fVar127);
      pfVar62[10] = fVar105 * (fVar77 * fVar138);
      pfVar62[0xb] = fVar112 * (fVar85 * fVar148);
      pfVar62[0xc] = (fVar41 * fVar132 - fVar41) * fVar158 + fVar41;
      pfVar62[0xd] = (fVar42 * fVar7 - fVar42) * fVar125 + fVar42;
      pfVar62[0xe] = (fVar43 * fVar8 - fVar43) * fVar144 + fVar43;
      pfVar62[0xf] = (fVar44 * fVar11 - fVar44) * fVar100 + fVar44;
      pfVar62[0x10] = (((fVar128 + fVar128) + fVar88) - fVar45) * fVar72 + fVar45;
      pfVar62[0x11] = (((fVar139 + fVar139) + fVar90) - fVar46) * fVar76 + fVar46;
      pfVar62[0x12] = (((fVar149 + fVar149) + fVar92) - fVar47) * fVar146 + fVar47;
      pfVar62[0x13] = (((fVar155 + fVar155) + fVar157) - fVar48) * fVar101 + fVar48;
      pfVar62[0x14] = (fVar89 * fVar99) * fVar80;
      pfVar62[0x15] = (fVar91 * fVar116) * fVar86;
      pfVar62[0x16] = (fVar68 * fVar120) * fVar84;
      pfVar62[0x17] = (fVar70 * fVar129) * fVar87;
      pfVar62[0x18] = (fVar25 * fVar49 - fVar49) * fVar72 + fVar49;
      pfVar62[0x19] = (fVar26 * fVar50 - fVar50) * fVar76 + fVar50;
      pfVar62[0x1a] = (fVar27 * fVar51 - fVar51) * fVar146 + fVar51;
      pfVar62[0x1b] = (fVar28 * fVar52 - fVar52) * fVar101 + fVar52;
      param_3 = param_3 + 4;
      pfVar63 = pfVar63 + 0x30;
      pfVar62 = pfVar62 + 0x30;
      iVar61 = iVar61 + -1;
    } while (iVar61 != 0);
  }
  return 0;
}

/* ref: FUN_00d3cf50 */
uint F_00d3cf50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd3cf50u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
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
  uint uVar13;
  int iVar14;
  int iVar15;
  
  fVar3 = *param_4;
  fVar4 = param_4[1];
  fVar5 = param_4[2];
  fVar6 = param_4[3];
  uVar13 = (int)(param_5 + 3 + (param_5 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < (int)uVar13) {
    iVar14 = param_3 - (int)param_1;
    iVar15 = param_2 - (int)param_1;
    do {
      pfVar1 = (float *)(iVar14 + (int)param_1);
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      pfVar2 = (float *)(iVar15 + (int)param_1);
      fVar10 = pfVar2[1];
      fVar11 = pfVar2[2];
      fVar12 = pfVar2[3];
      *param_1 = *pfVar2 * (*pfVar1 * fVar3) + *param_1;
      param_1[1] = fVar10 * (fVar7 * fVar4) + param_1[1];
      param_1[2] = fVar11 * (fVar8 * fVar5) + param_1[2];
      param_1[3] = fVar12 * (fVar9 * fVar6) + param_1[3];
      param_1 = param_1 + 4;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    uVar13 = 0;
  }
  return uVar13;
}

/* ref: FUN_00d3cfa0 */
uint F_00d3cfa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd3cfa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  float * pfVar1;
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
  uint uVar18;
  float * pfVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  
  fVar4 = *param_5;
  fVar5 = param_5[1];
  fVar6 = param_5[2];
  fVar7 = param_5[3];
  uVar18 = (int)(param_6 + 3 + (param_6 + 3 >> 0x1f & 3U)) >> 2;
  if (0 < (int)uVar18) {
    iVar20 = param_4 - (int)param_2;
    iVar21 = param_3 - (int)param_2;
    iVar22 = param_1 - (int)param_2;
    pfVar19 = param_2;
    param_2 = (float *)uVar18;
    do {
      pfVar1 = (float *)(iVar20 + (int)pfVar19);
      fVar8 = *pfVar1;
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar11 = pfVar1[3];
      pfVar1 = (float *)(iVar21 + (int)pfVar19);
      fVar12 = pfVar1[1];
      fVar13 = pfVar1[2];
      fVar14 = pfVar1[3];
      pfVar2 = (float *)(iVar22 + (int)pfVar19);
      fVar15 = pfVar2[1];
      fVar16 = pfVar2[2];
      fVar17 = pfVar2[3];
      pfVar3 = (float *)(iVar22 + (int)pfVar19);
      *pfVar3 = *pfVar1 * (fVar8 * fVar4) + *pfVar2;
      pfVar3[1] = fVar12 * (fVar9 * fVar5) + fVar15;
      pfVar3[2] = fVar13 * (fVar10 * fVar6) + fVar16;
      pfVar3[3] = fVar14 * (fVar11 * fVar7) + fVar17;
      *pfVar19 = *pfVar19 + fVar8 * fVar4;
      pfVar19[1] = pfVar19[1] + fVar9 * fVar5;
      pfVar19[2] = pfVar19[2] + fVar10 * fVar6;
      pfVar19[3] = pfVar19[3] + fVar11 * fVar7;
      pfVar19 = pfVar19 + 4;
      param_2 = (float *)((int)param_2 - 1);
    } while (param_2 != (float *)0x0);
  }
  return uVar18;
}

/* ref: FUN_00d3d340 */
uint F_00d3d340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd3d340u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  LPVOID pvVar2;
  uint uVar3;
  uint uVar4;
  
  (*(int *)(gen_frame + 0x28)) = param_1;
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  (*(uint *)(gen_frame + 0x2c)) = *(uint *)((int)pvVar2 + 0xc);
  (*(uint *)(gen_frame + 0x24)) = param_2 * 4 + 0x7fU & 0xffffff80;
  uVar3 = (*(uint *)(gen_frame + 0x2c)) + (*(uint *)(gen_frame + 0x24));
  if ((*(int *)((int)pvVar2 + 8) < (int)(*(uint *)(gen_frame + 0x24))) || (*(uint *)((int)pvVar2 + 0x10) < uVar3)) {
    (*(uint *)(gen_frame + 0x2c)) = F_00d94390(pvVar2,(*(uint *)(gen_frame + 0x24)));
  }
  else {
    *(uint *)((int)pvVar2 + 0xc) = uVar3;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = *(uint *)((int)pvVar2 + 0xc);
  uVar4 = iVar1 * 4 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar2 + 8) < (int)uVar4) || (*(uint *)((int)pvVar2 + 0x10) < uVar3 + uVar4)) {
    uVar3 = F_00d94390(pvVar2,uVar4);
  }
  else {
    *(uint *)((int)pvVar2 + 0xc) = uVar3 + uVar4;
  }
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)&REFG(undefined, 0x1134da0);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)&REFG(undefined, 0x1134da4);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)&REFG(undefined, 0x1134da8);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)&REFG(undefined, 0x1134dac);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)&REFG(undefined, 0x1134da0);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)&REFG(undefined, 0x1134da4);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)&REFG(undefined, 0x1134da8);
  (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)&REFG(undefined, 0x1134dac);
  F_00d35c70(&(*(undefined4 *)(gen_frame + 0x10)),param_4,param_2,(*(uint *)(gen_frame + 0x2c)));
  F_00d35c70(&(*(undefined4 *)(gen_frame + 0x0)),param_6,*(undefined4 *)((*(int *)(gen_frame + 0x28)) + 0xc),uVar3);
  F_00d37b30((*(int *)(gen_frame + 0x28)),param_2,param_3,(*(uint *)(gen_frame + 0x2c)),param_5,uVar3,param_7,param_8,param_9);
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar2 + 8) < (int)uVar4) || (uVar4 + uVar3 != *(int *)((int)pvVar2 + 0xc)))
     || (*(uint *)((int)pvVar2 + 0x14) == uVar3)) {
    F_00d945c0(pvVar2,uVar3,uVar4);
  }
  else {
    *(uint *)((int)pvVar2 + 0xc) = uVar3;
  }
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = (*(uint *)(gen_frame + 0x24)) + 0xf & 0xfffffff0;
  if ((((int)(*(uint *)(gen_frame + 0x24)) <= *(int *)((int)pvVar2 + 8)) &&
      (uVar3 + (*(uint *)(gen_frame + 0x2c)) == *(int *)((int)pvVar2 + 0xc))) &&
     (*(uint *)((int)pvVar2 + 0x14) != (*(uint *)(gen_frame + 0x2c)))) {
    *(uint *)((int)pvVar2 + 0xc) = (*(uint *)(gen_frame + 0x2c));
    return (uint)pvVar2;
  }
  uVar3 = F_00d945c0(pvVar2,(*(uint *)(gen_frame + 0x2c)),uVar3);
  return uVar3;
}

/* ref: FUN_00d3d4d0 */
uint F_00d3d4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd3d4d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  uint * param_4 = (uint *)(uintptr_t)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  int * param_6 = (int *)(uintptr_t)gen_a6;
  int * param_7 = (int *)(uintptr_t)gen_a7;
  int param_8 = (int)gen_a8;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  uint in_esi;
  undefined4 * puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  short * psVar10;
  int in_eax;
  undefined4 * puVar11;
  uint local_24;
  undefined4 * local_1c;
  undefined4 * local_18;
  undefined4 * local_14;
  int local_10;
  undefined4 * local_c;
  int local_8;
  
  if (param_8 == 0) {
    in_eax = *(int *)this;
  }
  else {
    in_eax = param_3[0x2e];
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_14 = *(undefined4 * PTR32 *)((int)pvVar4 + 0xc);
  uVar8 = in_eax * 0x30 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar4 + 8) < (int)uVar8) ||
     (*(uint *)((int)pvVar4 + 0x10) < (int)local_14 + uVar8)) {
    local_14 = (undefined4 *)F_00d94390(pvVar4,uVar8);
  }
  else {
    *(uint *)((int)pvVar4 + 0xc) = (int)local_14 + uVar8;
  }
  iVar6 = *(int *)((int)this + 0xc);
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_c = *(undefined4 * PTR32 *)((int)pvVar4 + 0xc);
  uVar9 = iVar6 * 4 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar4 + 8) < (int)uVar9) ||
     (*(uint *)((int)pvVar4 + 0x10) < (int)local_c + uVar9)) {
    local_c = (undefined4 *)F_00d94390(pvVar4,uVar9);
  }
  else {
    *(uint *)((int)pvVar4 + 0xc) = (int)local_c + uVar9;
  }
  if (param_6[1] == 0) {
    local_24 = *param_4;
    local_1c = local_14;
    local_10 = in_eax;
  }
  else {
    local_24 = F_00d367f0(in_eax);
    F_00da1030(local_24,0,in_eax);
    iVar6 = param_6[1] + -1;
    local_10 = 0;
    if (-1 < iVar6) {
      psVar10 = (short *)(*param_6 + iVar6 * 2);
      do {
        if (((-1 < *psVar10) && (*psVar10 < in_eax)) &&
           ((param_4[1] == 0 || (*(char *)(iVar6 + *param_4) != '\0')))) {
          local_10 = iVar6 + 1;
          break;
        }
        psVar10 = psVar10 + -1;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
    local_1c = (undefined4 *)F_00d368e0(local_10);
    iVar6 = in_eax * 0xc;
    puVar11 = local_14;
    if (-1 < iVar6 + -1) {
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
    }
  }
  iVar6 = *(int *)((int)this + 0xc);
  if (param_7[1] == 0) {
    in_esi = *param_5;
    local_18 = local_c;
    local_8 = iVar6;
  }
  else {
    in_esi = F_00d367f0(iVar6);
    F_00da1030(in_esi,0,iVar6);
    iVar7 = param_7[1] + -1;
    local_8 = 0;
    if (-1 < iVar7) {
      psVar10 = (short *)(*param_7 + iVar7 * 2);
      do {
        if (((-1 < *psVar10) && (*psVar10 < iVar6)) &&
           ((param_5[1] == 0 || (*(char *)(iVar7 + *param_5) != '\0')))) {
          local_8 = iVar7 + 1;
          break;
        }
        psVar10 = psVar10 + -1;
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
    local_18 = (undefined4 *)F_00d36890(local_8);
    puVar11 = local_c;
    if (-1 < iVar6 + -1) {
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
    }
  }
  iVar6 = param_3[3];
  if (iVar6 == 1) {
    F_00d6ae50(*param_3,GEN_TOF(gen_bits2f(param_3[1])),local_10,local_1c,local_8,local_18,param_1,param_2)
    ;
  }
  else if (iVar6 == 2) {
    F_00d6c0a0(*param_3,GEN_TOF(gen_bits2f(param_3[1])),local_10,local_8,*(undefined4 *)((int)this + 0x1c),
                 *(undefined4 *)((int)this + 0x20),param_1,param_2,local_1c,local_18);
  }
  else if (iVar6 == 3) {
    F_00d6de50(*param_3,GEN_TOF(gen_bits2f(param_3[1])),local_10,local_1c,local_8,local_18,param_1,param_2)
    ;
  }
  if ((param_6[1] != 0) && (param_2 = (undefined4 *)0x0, 0 < local_10)) {
    puVar11 = local_1c + 8;
    do {
      iVar6 = (int)*(short *)(*param_6 + (int)((int)(uintptr_t)param_2) * 2);
      uVar1 = puVar11[-7];
      uVar2 = puVar11[-6];
      uVar3 = puVar11[-5];
      puVar5 = local_14 + iVar6 * 0xc;
      *puVar5 = puVar11[-8];
      puVar5[1] = uVar1;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      uVar1 = puVar11[-3];
      uVar2 = puVar11[-2];
      uVar3 = puVar11[-1];
      puVar5[4] = puVar11[-4];
      puVar5[5] = uVar1;
      puVar5[6] = uVar2;
      puVar5[7] = uVar3;
      uVar1 = puVar11[1];
      uVar2 = puVar11[2];
      uVar3 = puVar11[3];
      puVar5[8] = *puVar11;
      puVar5[9] = uVar1;
      puVar5[10] = uVar2;
      puVar5[0xb] = uVar3;
      if (param_4[1] == 0) {
        *(undefined1 *)(iVar6 + local_24) = 0xff;
      }
      else {
        *(undefined1 *)(iVar6 + local_24) = *(undefined1 *)((int)param_2 + *param_4);
      }
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar11 = puVar11 + 0xc;
    } while ((int)param_2 < local_10);
  }
  if (param_7[1] != 0) {
    iVar6 = 0;
    if (3 < local_8) {
      param_2 = local_18 + 2;
      do {
        iVar7 = (int)*(short *)(*param_7 + iVar6 * 2);
        local_c[iVar7] = param_2[-2];
        if (param_5[1] == 0) {
          *(undefined1 *)(iVar7 + in_esi) = 0xff;
        }
        else {
          *(undefined1 *)(iVar7 + in_esi) = *(undefined1 *)(iVar6 + *param_5);
        }
        iVar7 = (int)*(short *)(*param_7 + 2 + iVar6 * 2);
        local_c[iVar7] = param_2[-1];
        if (param_5[1] == 0) {
          *(undefined1 *)(iVar7 + in_esi) = 0xff;
        }
        else {
          *(undefined1 *)(iVar7 + in_esi) = *(undefined1 *)(*param_5 + 1 + iVar6);
        }
        iVar7 = (int)*(short *)(*param_7 + 4 + iVar6 * 2);
        local_c[iVar7] = *param_2;
        if (param_5[1] == 0) {
          *(undefined1 *)(iVar7 + in_esi) = 0xff;
        }
        else {
          *(undefined1 *)(iVar7 + in_esi) = *(undefined1 *)(*param_5 + 2 + iVar6);
        }
        iVar7 = (int)*(short *)(*param_7 + 6 + iVar6 * 2);
        local_c[iVar7] = param_2[1];
        if (param_5[1] == 0) {
          *(undefined1 *)(iVar7 + in_esi) = 0xff;
        }
        else {
          *(undefined1 *)(iVar7 + in_esi) = *(undefined1 *)(*param_5 + 3 + iVar6);
        }
        param_2 = param_2 + 4;
        iVar6 = iVar6 + 4;
      } while (iVar6 < local_8 + -3);
    }
    for (; iVar6 < local_8; iVar6 = iVar6 + 1) {
      iVar7 = (int)*(short *)(*param_7 + iVar6 * 2);
      local_c[iVar7] = local_18[iVar6];
      if (param_5[1] == 0) {
        *(undefined1 *)(iVar7 + in_esi) = 0xff;
      }
      else {
        *(undefined1 *)(iVar7 + in_esi) = *(undefined1 *)(iVar6 + *param_5);
      }
    }
  }
  F_00d3d340(this,in_eax,local_14,local_24,local_c,in_esi,GEN_TOF(gen_bits2f(param_3[2])),param_8,
               (uint)((byte)((uint)param_3[0x2d] >> 5) & 1));
  uVar1 = *(undefined4 *)((int)this + 0xc);
  if (param_7[1] != 0) {
    F_00d36930(local_18,local_8);
    F_00d36840(in_esi,uVar1);
  }
  if (param_6[1] != 0) {
    F_00d36980(local_1c,local_10);
    F_00d36840(local_24,in_eax);
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar4 + 8) < (int)uVar9) ||
      (uVar9 + (int)local_c != *(int *)((int)pvVar4 + 0xc))) ||
     (*(undefined4 * PTR32 *)((int)pvVar4 + 0x14) == local_c)) {
    F_00d945c0(pvVar4,local_c,uVar9);
  }
  else {
    *(undefined4 * PTR32 *)((int)pvVar4 + 0xc) = local_c;
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((((int)uVar8 <= *(int *)((int)pvVar4 + 8)) &&
      (uVar8 + (int)local_14 == *(int *)((int)pvVar4 + 0xc))) &&
     (*(undefined4 * PTR32 *)((int)pvVar4 + 0x14) != local_14)) {
    *(undefined4 * PTR32 *)((int)pvVar4 + 0xc) = local_14;
    return (uint)pvVar4;
  }
  uVar8 = F_00d945c0(pvVar4,local_14,uVar8);
  return uVar8;
}

/* ref: FUN_00d3d9f0 */
uint F_00d3d9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd3d9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  uint param_6 = (uint)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int param_8 = (int)gen_a8;
  undefined4 uVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint local_c;
  uint local_8;
  
  uVar1 = *param_1;
  if (param_8 == 0) {
    iVar7 = *(int *)this;
  }
  else {
    iVar7 = param_3[0x2e];
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_c = *(uint *)((int)pvVar3 + 0xc);
  uVar4 = iVar7 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (*(uint *)((int)pvVar3 + 0x10) < local_c + uVar4))
  {
    local_c = F_00d94390(pvVar3,uVar4);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_c + uVar4;
  }
  iVar2 = *(int *)((int)this + 0xc);
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_8 = *(uint *)((int)pvVar3 + 0xc);
  uVar5 = iVar2 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar3 + 8) < (int)uVar5) || (*(uint *)((int)pvVar3 + 0x10) < local_8 + uVar5))
  {
    local_8 = F_00d94390(pvVar3,uVar5);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_8 + uVar5;
  }
  F_00d35910(param_6,param_4[1],*param_4,iVar7,local_c);
  F_00d35910(param_7,param_5[1],*param_5,*(undefined4 *)((int)this + 0xc),local_8);
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  param_6 = *(uint *)((int)pvVar3 + 0xc);
  uVar8 = iVar7 * 0x30 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar3 + 8) < (int)uVar8) || (*(uint *)((int)pvVar3 + 0x10) < param_6 + uVar8))
  {
    param_6 = F_00d94390(pvVar3,uVar8);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = param_6 + uVar8;
  }
  iVar2 = *(int *)((int)this + 0xc);
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  param_4 = *(undefined4 * PTR32 *)((int)pvVar3 + 0xc);
  uVar6 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar3 + 8) < (int)uVar6) ||
     (*(uint *)((int)pvVar3 + 0x10) < (int)param_4 + uVar6)) {
    param_4 = (undefined4 *)F_00d94390(pvVar3,uVar6);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = (int)param_4 + uVar6;
  }
  F_00d6f800(uVar1,*param_3,GEN_TOF(gen_bits2f(param_3[1])),param_1[2],*(undefined4 *)((int)this + 0x1c),
               *(undefined4 *)((int)this + 0x20),*(undefined4 *)this,
               *(undefined4 *)((int)this + 0xc),param_6,param_4,local_c,local_8);
  F_00d3d340(this,iVar7,param_6,local_c,param_4,local_8,GEN_TOF(gen_bits2f(param_3[2])),param_8,
               (uint)((byte)((uint)param_3[0x2d] >> 5) & 1));
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar6) ||
      (uVar6 + (int)param_4 != *(int *)((int)pvVar3 + 0xc))) ||
     ((undefined4 *)*(uint *)((int)pvVar3 + 0x14) == param_4)) {
    F_00d945c0(pvVar3,param_4,uVar6);
  }
  else {
    *(undefined4 * PTR32 *)((int)pvVar3 + 0xc) = param_4;
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar8) || (uVar8 + param_6 != *(int *)((int)pvVar3 + 0xc)))
     || (*(uint *)((int)pvVar3 + 0x14) == param_6)) {
    F_00d945c0(pvVar3,param_6,uVar8);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = param_6;
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar5) || (uVar5 + local_8 != *(int *)((int)pvVar3 + 0xc)))
     || (*(uint *)((int)pvVar3 + 0x14) == local_8)) {
    F_00d945c0(pvVar3,local_8,uVar5);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_8;
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((((int)uVar4 <= *(int *)((int)pvVar3 + 8)) && (uVar4 + local_c == *(int *)((int)pvVar3 + 0xc))
      ) && (*(uint *)((int)pvVar3 + 0x14) != local_c)) {
    *(uint *)((int)pvVar3 + 0xc) = local_c;
    return (uint)pvVar3;
  }
  uVar4 = F_00d945c0(pvVar3,local_c,uVar4);
  return uVar4;
}

/* ref: FUN_00d3dcd0 */
uint F_00d3dcd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3dcd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d3dcf0 */
unsigned int F_00d3dcf0(void)
{
  GEN_ENTER(0xd3dcf0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d3dd10 */
unsigned int F_00d3dd10(void)
{
  GEN_ENTER(0xd3dd10u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d3dd30 */
uint F_00d3dd30(unsigned int gen_a0)
{
  GEN_ENTER(0xd3dd30u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d3dd40 */
unsigned int F_00d3dd40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3dd40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if ((param_1 != (undefined4 *)0x0) &&
     (*param_1 = (*(undefined * PTR32 (*)[19])REFP(0x113541c)), param_2 != 0)) {
    F_00d74e60(param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_00d3dd60 */
uint F_00d3dd60(void)
{
  GEN_ENTER(0xd3dd60u, 0u, 0u, 0u, 0u);
  return 0x113541c;
}

/* ref: FUN_00d3ddb0 */
uint F_00d3ddb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd3ddb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00d3de10 */
unsigned int F_00d3de10(unsigned int gen_a0)
{
  GEN_ENTER(0xd3de10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00d3de50 */
uint F_00d3de50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3de50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00d3de80 */
uint F_00d3de80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd3de80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00d3dee0 */
unsigned int F_00d3dee0(unsigned int gen_a0)
{
  GEN_ENTER(0xd3dee0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x10);
  }
  return 0;
}

/* ref: FUN_00d3df10 */
unsigned int F_00d3df10(unsigned int gen_a0)
{
  GEN_ENTER(0xd3df10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,8);
  }
  return 0;
}

/* ref: FUN_00d3df50 */
uint F_00d3df50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3df50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510((undefined *)((int)this + 4));
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,8);
  }
  return (uint)this;
}

/* ref: FUN_00d3df90 */
uint F_00d3df90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3df90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d3dfd0 */
unsigned int F_00d3dfd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd3dfd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  iVar1 = param_2 + -1;
  if (-1 < iVar1) {
    this = (undefined *)(param_1 + 4 + iVar1 * 8);
    do {
      F_00d91510(this);
      this = (undefined *)((int)this + -8);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: FUN_00d3e000 */
uint F_00d3e000(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e000u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d3e040 */
uint F_00d3e040(unsigned int gen_a0)
{
  GEN_ENTER(0xd3e040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(uVar1 + 4 + iVar2 * 8);
    do {
      uVar1 = F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

