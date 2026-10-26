#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00c8e0f0 */
uint F_00c8e0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e0f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  *(undefined8 *)(in_ecx + 0x10) = *param_2;
  *(undefined8 *)(in_ecx + 0x18) = param_2[1];
  return (uint)param_2;
}

/* ref: FUN_00c8e130 */
uint F_00c8e130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e130u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x24) = param_2;
  return param_2;
}

/* ref: FUN_00c8e140 */
uint F_00c8e140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e140u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  *(undefined8 *)(in_ecx + 0x2c) = *param_2;
  *(undefined8 *)(in_ecx + 0x34) = param_2[1];
  return (uint)param_2;
}

/* ref: FUN_00c8e160 */
unsigned int F_00c8e160(unsigned int gen_a0)
{
  GEN_ENTER(0xc8e160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0x40) != 0) {
    gen_imp_CoTaskMemFree(*(LPVOID *)((int)this + 0x44));
  }
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  return 0;
}

/* ref: FUN_00c8e180 */
uint F_00c8e180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(uint *)((int)this + 0x40) == param_1) {
    return *(uint *)((int)this + 0x44);
  }
  pvVar1 = gen_imp_CoTaskMemAlloc(param_1);
  if (pvVar1 == (LPVOID)0x0) {
    if (param_1 <= *(uint *)((int)this + 0x40)) {
      return *(uint *)((int)this + 0x44);
    }
    return 0;
  }
  if (*(int *)((int)this + 0x40) != 0) {
    gen_imp_CoTaskMemFree(*(LPVOID *)((int)this + 0x44));
  }
  *(LPVOID *)((int)this + 0x44) = pvVar1;
  *(uint *)((int)this + 0x40) = param_1;
  return (uint)pvVar1;
}

/* ref: FUN_00c8e1e0 */
uint F_00c8e1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 0x40) == param_1) {
    return *(uint *)((int)this + 0x44);
  }
  pvVar1 = gen_imp_CoTaskMemAlloc(param_1);
  if (pvVar1 == (LPVOID)0x0) {
    if (param_1 <= *(uint *)((int)this + 0x40)) {
      return *(uint *)((int)this + 0x44);
    }
    return 0;
  }
  uVar2 = *(uint *)((int)this + 0x40);
  if (uVar2 != 0) {
    if (param_1 < uVar2) {
      uVar2 = param_1;
    }
    F_00c46aa0(pvVar1,*(undefined4 *)((int)this + 0x44),uVar2);
    gen_imp_CoTaskMemFree(*(LPVOID *)((int)this + 0x44));
  }
  *(LPVOID *)((int)this + 0x44) = pvVar1;
  *(uint *)((int)this + 0x40) = param_1;
  return (uint)pvVar1;
}

/* ref: FUN_00c8e260 */
uint F_00c8e260(unsigned int gen_a0)
{
  GEN_ENTER(0xc8e260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c48350(this,0,0x48);
  *(undefined4 *)((int)this + 0x28) = 1;
  *(undefined4 *)((int)this + 0x20) = 1;
  return 1;
}

/* ref: FUN_00c8e280 */
uint F_00c8e280(unsigned int gen_a0)
{
  GEN_ENTER(0xc8e280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c80fd0(this,&REFG(undefined, 0x1156560));
  if (uVar1 == 0) {
    uVar1 = F_00c80fd0((int)this + 0x2c,&REFG(undefined, 0x1156560));
    if (uVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00c8e2c0 */
uint F_00c8e2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  int * piVar3;
  
  uVar1 = F_00c80fd0(param_1,&REFG(undefined, 0x1156560));
  if ((uVar1 == 0) && (uVar1 = F_00c80fd0(this,param_1), uVar1 == 0)) {
    return 0;
  }
  uVar1 = F_00c80fd0(param_1 + 0x10,&REFG(undefined, 0x1156560));
  if ((uVar1 == 0) && (uVar1 = F_00c80fd0((int)this + 0x10,param_1 + 0x10), uVar1 == 0)) {
    return 0;
  }
  uVar1 = F_00c80fd0(param_1 + 0x2c,&REFG(undefined, 0x1156560));
  if (uVar1 == 0) {
    uVar1 = F_00c80fd0((int)this + 0x2c,param_1 + 0x2c);
    if (uVar1 == 0) {
      return 0;
    }
    uVar1 = *(uint *)((int)this + 0x40);
    if (uVar1 != *(uint *)(param_1 + 0x40)) {
      return 0;
    }
    if (uVar1 != 0) {
      piVar2 = *(int * PTR32 *)(param_1 + 0x44);
      piVar3 = *(int * PTR32 *)((int)this + 0x44);
      for (; 3 < uVar1; uVar1 = uVar1 - 4) {
        if (*piVar3 != *piVar2) {
          return 0;
        }
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
      }
      if (uVar1 != 0) {
        if ((char)*piVar2 != (char)*piVar3) {
          return 0;
        }
        if (1 < uVar1) {
          if (*(char *)((int)piVar2 + 1) != *(char *)((int)piVar3 + 1)) {
            return 0;
          }
          if ((2 < uVar1) && (*(char *)((int)piVar2 + 2) != *(char *)((int)piVar3 + 2))) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

/* ref: FUN_00c8e3b0 */
uint F_00c8e3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar4 = param_2;
  puVar5 = param_1;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  if (param_2[0x10] != 0) {
    pvVar2 = gen_imp_CoTaskMemAlloc(param_2[0x10]);
    param_1[0x11] = pvVar2;
    if (pvVar2 == (LPVOID)0x0) {
      param_1[0x10] = 0;
      return 0x8007000e;
    }
    F_00c46aa0(pvVar2,param_2[0x11],param_1[0x10]);
  }
  piVar1 = (int *)param_1[0xf];
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  return 0;
}

/* ref: FUN_00c8e420 */
uint F_00c8e420(unsigned int gen_a0)
{
  GEN_ENTER(0xc8e420u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    gen_imp_CoTaskMemFree(*(LPVOID *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 0x3c);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return uVar2;
}

/* ref: FUN_00c8e460 */
uint F_00c8e460(unsigned int gen_a0)
{
  GEN_ENTER(0xc8e460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x40) != 0) {
    gen_imp_CoTaskMemFree(*(LPVOID *)((int)this + 0x44));
    *(undefined4 *)((int)this + 0x40) = 0;
    *(undefined4 *)((int)this + 0x44) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x3c);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x3c) = 0;
  }
  return uVar2;
}

/* ref: FUN_00c8e4a0 */
uint F_00c8e4a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc8e4a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c48350(this,0,0x48);
  *(undefined4 *)((int)this + 0x28) = 1;
  *(undefined4 *)((int)this + 0x20) = 1;
  return (uint)this;
}

/* ref: FUN_00c8e4c0 */
uint F_00c8e4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  F_00c48350(this,0,0x48);
  *(undefined4 *)((int)this + 0x28) = 1;
  *(undefined4 *)((int)this + 0x20) = 1;
  *(undefined8 *)this = *param_1;
  *(undefined8 *)((int)this + 8) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00c8e500 */
uint F_00c8e500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8e500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c8e3b0(this,param_1);
  if (((int)uVar1 < 0) && (param_2 != (uint *)0x0)) {
    *param_2 = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00c8e530 */
uint F_00c8e530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8e530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c8e3b0(this,param_1);
  if (((int)uVar1 < 0) && (param_2 != (uint *)0x0)) {
    *param_2 = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00c8e560 */
uint F_00c8e560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (param_1 != this) {
    if (*(int *)((int)this + 0x40) != 0) {
      gen_imp_CoTaskMemFree(*(LPVOID *)((int)this + 0x44));
      *(undefined4 *)((int)this + 0x40) = 0;
      *(undefined4 *)((int)this + 0x44) = 0;
    }
    piVar1 = *(int * PTR32 *)((int)this + 0x3c);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)this + 0x3c) = 0;
    }
    uVar2 = F_00c8e3b0(this,param_1);
    if ((int)uVar2 < 0) {
      return 0x8007000e;
    }
  }
  return 0;
}

/* ref: FUN_00c8e5c0 */
unsigned int F_00c8e5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e5c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == 0) {
    *(undefined4 *)(in_ecx + 0x20) = 0;
    return 0;
  }
  *(undefined4 *)(in_ecx + 0x20) = 1;
  *(int *)(in_ecx + 0x28) = param_2;
  return 0;
}

/* ref: FUN_00c8e5e0 */
uint F_00c8e5e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8e5e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  LPVOID pvVar1;
  
  if (*(uint *)((int)this + 0x40) == param_2) {
    pvVar1 = *(LPVOID *)((int)this + 0x44);
  }
  else {
    pvVar1 = gen_imp_CoTaskMemAlloc(param_2);
    if (pvVar1 == (LPVOID)0x0) {
      if (*(uint *)((int)this + 0x40) < param_2) {
        return 0;
      }
      pvVar1 = *(LPVOID *)((int)this + 0x44);
    }
    else {
      if (*(int *)((int)this + 0x40) != 0) {
        gen_imp_CoTaskMemFree(*(LPVOID *)((int)this + 0x44));
      }
      *(uint *)((int)this + 0x40) = param_2;
      *(LPVOID *)((int)this + 0x44) = pvVar1;
    }
  }
  if (pvVar1 == (LPVOID)0x0) {
    return 0;
  }
  F_00c46aa0(*(undefined4 *)((int)this + 0x44),param_1,param_2);
  return 1;
}

/* ref: FUN_00c8e650 */
unsigned int F_00c8e650(unsigned int gen_a0)
{
  GEN_ENTER(0xc8e650u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x40) != 0) {
      gen_imp_CoTaskMemFree(*(undefined4 *)(param_1 + 0x44));
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    piVar1 = *(int * PTR32 *)(param_1 + 0x3c);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    gen_imp_CoTaskMemFree(param_1);
  }
  return 0;
}

/* ref: FUN_00c8e6a0 */
uint F_00c8e6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc8e6a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pv;
  uint uVar1;
  
  pv = gen_imp_CoTaskMemAlloc(0x48);
  if (pv != (LPVOID)0x0) {
    uVar1 = F_00c8e3b0(pv,param_1);
    if (-1 < (int)uVar1) {
      return (uint)pv;
    }
    gen_imp_CoTaskMemFree(pv);
  }
  return 0;
}

/* ref: FUN_00c8e6e0 */
uint F_00c8e6e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8e6e0u, gen_a0, gen_a1, gen_a2, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined8 uVar1;
  undefined8 * puVar2;
  
  *param_2 = REFG(undefined8, 0x1084e08);
  param_2[1] = REFG(undefined8, 0x1084e10);
  if (*param_1 == 0xfffe) {
    param_2[2] = *(undefined8 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    param_2[2] = CONCAT44(0x100000,(uint)*param_1);
    uVar1 = 0x719b3800aa000080;
  }
  param_2[3] = uVar1;
  *(undefined8 *)((int)param_2 + 0x2c) = REFG(undefined8, 0x1085d28);
  *(undefined8 *)((int)param_2 + 0x34) = REFG(undefined8, 0x1085d30);
  *(undefined4 *)(param_2 + 4) = 1;
  *(undefined4 *)((int)param_2 + 0x24) = 0;
  *(uint *)(param_2 + 5) = (uint)param_1[6];
  *(undefined4 *)((int)param_2 + 0x3c) = 0;
  if (param_3 != 0) {
    if (*param_1 == 1) {
      *(undefined4 *)(param_2 + 8) = 0x12;
    }
    else {
      *(uint *)(param_2 + 8) = param_1[8] + 0x12;
    }
    puVar2 = gen_imp_CoTaskMemAlloc(*(SIZE_T *)(param_2 + 8));
    *(undefined8 * PTR32 *)((int)param_2 + 0x44) = puVar2;
    if (puVar2 == (undefined8 *)0x0) {
      return 0x8007000e;
    }
    if (*param_1 == 1) {
      *puVar2 = *(undefined8 *)param_1;
      puVar2[1] = *(undefined8 *)(param_1 + 4);
      *((undefined2 *)GEN_TOP((*(int *)((int)param_2 + 0x44) + 0x10))) = 0;
      return 0;
    }
    F_00c46aa0(puVar2,param_1,*(undefined4 *)(param_2 + 8));
  }
  return 0;
}

/* ref: FUN_00c8e810 */
uint F_00c8e810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != this) {
    if (*(int *)((int)this + 0x40) != 0) {
      gen_imp_CoTaskMemFree(*(LPVOID *)((int)this + 0x44));
      *(undefined4 *)((int)this + 0x40) = 0;
      *(undefined4 *)((int)this + 0x44) = 0;
    }
    piVar1 = *(int * PTR32 *)((int)this + 0x3c);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)this + 0x3c) = 0;
    }
    F_00c8e3b0(this,param_1);
  }
  return (uint)this;
}

/* ref: FUN_00c8e870 */
uint F_00c8e870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != this) {
    if (*(int *)((int)this + 0x40) != 0) {
      gen_imp_CoTaskMemFree(*(LPVOID *)((int)this + 0x44));
      *(undefined4 *)((int)this + 0x40) = 0;
      *(undefined4 *)((int)this + 0x44) = 0;
    }
    piVar1 = *(int * PTR32 *)((int)this + 0x3c);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)this + 0x3c) = 0;
    }
    F_00c8e3b0(this,param_1);
  }
  return (uint)this;
}

/* ref: FUN_00c8e8d0 */
uint F_00c8e8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (param_1 != this) {
    if (*(int *)((int)this + 0x40) != 0) {
      gen_imp_CoTaskMemFree(*(LPVOID *)((int)this + 0x44));
      *(undefined4 *)((int)this + 0x40) = 0;
      *(undefined4 *)((int)this + 0x44) = 0;
    }
    piVar1 = *(int * PTR32 *)((int)this + 0x3c);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)this + 0x3c) = 0;
    }
    uVar2 = F_00c8e3b0(this,param_1);
    if ((int)uVar2 < 0) {
      return 0x8007000e;
    }
  }
  return 0;
}

/* ref: FUN_00c8e930 */
uint F_00c8e930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e930u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = 0x100000;
  in_ecx[2] = 0xaa000080;
  in_ecx[3] = 0x719b3800;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c8e9a0 */
uint F_00c8e9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c8e9d0 */
unsigned int F_00c8e9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return 0;
}

/* ref: FUN_00c8e9f0 */
float F_00c8e9f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc8e9f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)((int)this + 8) *
                                      (float10)*(float *)((int)this + 8) +
                                     ((float10)*(float *)((int)(uintptr_t)this) * (float10)*(float *)this +
                                     (float10)*(float *)((int)this + 4) *
                                     (float10)*(float *)((int)this + 4))))))));
}

/* ref: FUN_00c8ea30 */
unsigned int F_00c8ea30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8ea30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  uVar1 = param_2[2];
  in_ecx[3] = 0;
  in_ecx[2] = uVar1;
  return 0;
}

/* ref: FUN_00c8ea60 */
unsigned int F_00c8ea60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8ea60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return 0;
}

/* ref: FUN_00c8eb80 */
uint F_00c8eb80(void)
{
  GEN_ENTER(0xc8eb80u, 0u, 0u, 0u, 0u);
  if ((*(uint *)&REFG(undefined, 0x15d76a0) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d76a0) = *(uint *)&REFG(undefined, 0x15d76a0) | 1;
    REFG(float, 0x15d7690) = 0;
    REFG(float, 0x15d7694) = 0;
    REFG(float, 0x15d7698) = 0;
    REFG(float, 0x15d769c) = REFG(float, 0x1087f04);
  }
  return 0x15d7690;
}

/* ref: FUN_00c8ebd0 */
uint F_00c8ebd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8ebd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00c8ec10 */
unsigned int F_00c8ec10(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7, float gen_a8, float gen_a9, float gen_a10, float gen_a11, float gen_a12, float gen_a13, float gen_a14, float gen_a15, float gen_a16)
{
  GEN_ENTER(0xc8ec10u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  float param_10 = (float)gen_a9;
  float param_11 = (float)gen_a10;
  float param_12 = (float)gen_a11;
  float param_13 = (float)gen_a12;
  float param_14 = (float)gen_a13;
  float param_15 = (float)gen_a14;
  float param_16 = (float)gen_a15;
  float param_17 = (float)gen_a16;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  in_ecx[4] = param_6;
  in_ecx[5] = param_7;
  in_ecx[6] = param_8;
  in_ecx[7] = param_9;
  in_ecx[8] = param_10;
  in_ecx[9] = param_11;
  in_ecx[10] = param_12;
  in_ecx[0xb] = param_13;
  in_ecx[0xc] = param_14;
  in_ecx[0xd] = param_15;
  in_ecx[0xe] = param_16;
  in_ecx[0xf] = param_17;
  return 0;
}

/* ref: FUN_00c8ecc0 */
unsigned int F_00c8ecc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8ecc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  in_ecx[7] = param_2[7];
  in_ecx[8] = param_2[8];
  in_ecx[9] = param_2[9];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xb];
  in_ecx[0xc] = param_2[0xc];
  in_ecx[0xd] = param_2[0xd];
  in_ecx[0xe] = param_2[0xe];
  in_ecx[0xf] = param_2[0xf];
  return 0;
}

/* ref: FUN_00c8ed30 */
unsigned int F_00c8ed30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8ed30u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = ((float)GEN_TOF(((((double)param_2[4] * (double)param_3[1] + (double)*param_2 * (double)*param_3
                      ) + (double)param_2[8] * (double)param_3[2]) +
                    (double)param_2[0xc] * (double)param_3[3])));
  param_1[1] = ((float)GEN_TOF(((((double)param_2[1] * (double)*param_3 +
                        (double)param_2[5] * (double)param_3[1]) +
                       (double)param_2[9] * (double)param_3[2]) +
                      (double)param_2[0xd] * (double)param_3[3])));
  param_1[2] = ((float)GEN_TOF(((((double)param_2[2] * (double)*param_3 +
                        (double)param_2[6] * (double)param_3[1]) +
                       (double)param_2[10] * (double)param_3[2]) +
                      (double)param_2[0xe] * (double)param_3[3])));
  param_1[3] = ((float)GEN_TOF(((((double)param_2[3] * (double)*param_3 +
                        (double)param_2[7] * (double)param_3[1]) +
                       (double)param_2[0xb] * (double)param_3[2]) +
                      (double)param_2[0xf] * (double)param_3[3])));
  return 0;
}

/* ref: FUN_00c8eed0 */
unsigned int F_00c8eed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8eed0u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
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
  
  fVar1 = param_3[3];
  fVar2 = in_ecx[0xd];
  fVar3 = in_ecx[0xe];
  fVar4 = in_ecx[0xf];
  fVar5 = param_3[2];
  fVar6 = in_ecx[9];
  fVar7 = in_ecx[10];
  fVar8 = in_ecx[0xb];
  fVar9 = param_3[1];
  fVar10 = in_ecx[5];
  fVar11 = in_ecx[6];
  fVar12 = in_ecx[7];
  fVar13 = *param_3;
  fVar14 = in_ecx[1];
  fVar15 = in_ecx[2];
  fVar16 = in_ecx[3];
  *param_2 = ((*in_ecx * fVar13 + in_ecx[4] * fVar9) + in_ecx[8] * fVar5) + in_ecx[0xc] * fVar1;
  param_2[1] = ((fVar14 * fVar13 + fVar10 * fVar9) + fVar6 * fVar5) + fVar2 * fVar1;
  param_2[2] = ((fVar15 * fVar13 + fVar11 * fVar9) + fVar7 * fVar5) + fVar3 * fVar1;
  param_2[3] = ((fVar16 * fVar13 + fVar12 * fVar9) + fVar8 * fVar5) + fVar4 * fVar1;
  return 0;
}

/* ref: FUN_00c8f180 */
unsigned int F_00c8f180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8f180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xf] = 0.0;
  *param_1 = ((float)GEN_TOF(((((double)*param_2 * (double)*(float *)this +
                      (double)param_2[1] * (double)*(float *)((int)this + 0x10)) +
                     (double)*(float *)((int)this + 0x20) * (double)param_2[2]) +
                    (double)*(float *)((int)this + 0x30) * (double)param_2[3])));
  param_1[1] = ((float)GEN_TOF(((((double)*(float *)((int)this + 0x14) * (double)param_2[1] +
                        (double)*param_2 * (double)*(float *)((int)this + 4)) +
                       (double)*(float *)((int)this + 0x24) * (double)param_2[2]) +
                      (double)param_2[3] * (double)*(float *)((int)this + 0x34))));
  param_1[2] = ((float)GEN_TOF(((((double)*(float *)((int)this + 0x18) * (double)param_2[1] +
                        (double)*(float *)((int)this + 8) * (double)*param_2) +
                       (double)param_2[2] * (double)*(float *)((int)this + 0x28)) +
                      (double)param_2[3] * (double)*(float *)((int)this + 0x38))));
  param_1[3] = ((float)GEN_TOF(((((double)*(float *)((int)this + 0x1c) * (double)param_2[1] +
                        (double)*param_2 * (double)*(float *)((int)this + 0xc)) +
                       (double)*(float *)((int)this + 0x2c) * (double)param_2[2]) +
                      (double)param_2[3] * (double)*(float *)((int)this + 0x3c))));
  param_1[4] = ((float)GEN_TOF(((((double)param_2[5] * (double)*(float *)((int)this + 0x10) +
                        (double)*(float *)((int)(uintptr_t)this) * (double)param_2[4]) +
                       (double)param_2[6] * (double)*(float *)((int)this + 0x20)) +
                      (double)*(float *)((int)this + 0x30) * (double)param_2[7])));
  param_1[5] = ((float)GEN_TOF(((((double)*(float *)((int)this + 0x14) * (double)param_2[5] +
                        (double)*(float *)((int)this + 4) * (double)param_2[4]) +
                       (double)param_2[6] * (double)*(float *)((int)this + 0x24)) +
                      (double)param_2[7] * (double)*(float *)((int)this + 0x34))));
  param_1[6] = ((float)GEN_TOF(((((double)param_2[5] * (double)*(float *)((int)this + 0x18) +
                        (double)*(float *)((int)this + 8) * (double)param_2[4]) +
                       (double)param_2[6] * (double)*(float *)((int)this + 0x28)) +
                      (double)*(float *)((int)this + 0x38) * (double)param_2[7])));
  param_1[7] = ((float)GEN_TOF(((((double)*(float *)((int)this + 0x1c) * (double)param_2[5] +
                        (double)*(float *)((int)this + 0xc) * (double)param_2[4]) +
                       (double)param_2[6] * (double)*(float *)((int)this + 0x2c)) +
                      (double)param_2[7] * (double)*(float *)((int)this + 0x3c))));
  param_1[8] = ((float)GEN_TOF(((((double)param_2[8] * (double)*(float *)this +
                        (double)param_2[9] * (double)*(float *)((int)this + 0x10)) +
                       (double)param_2[10] * (double)*(float *)((int)this + 0x20)) +
                      (double)param_2[0xb] * (double)*(float *)((int)this + 0x30))));
  param_1[9] = ((float)GEN_TOF(((((double)param_2[8] * (double)*(float *)((int)this + 4) +
                        (double)*(float *)((int)this + 0x14) * (double)param_2[9]) +
                       (double)param_2[10] * (double)*(float *)((int)this + 0x24)) +
                      (double)param_2[0xb] * (double)*(float *)((int)this + 0x34))));
  param_1[10] = ((float)GEN_TOF(((((double)param_2[9] * (double)*(float *)((int)this + 0x18) +
                         (double)*(float *)((int)this + 8) * (double)param_2[8]) +
                        (double)param_2[10] * (double)*(float *)((int)this + 0x28)) +
                       (double)param_2[0xb] * (double)*(float *)((int)this + 0x38))));
  param_1[0xb] = ((float)GEN_TOF(((((double)param_2[8] * (double)*(float *)((int)this + 0xc) +
                          (double)*(float *)((int)this + 0x1c) * (double)param_2[9]) +
                         (double)param_2[10] * (double)*(float *)((int)this + 0x2c)) +
                        (double)param_2[0xb] * (double)*(float *)((int)this + 0x3c))));
  param_1[0xc] = ((float)GEN_TOF(((((double)param_2[0xd] * (double)*(float *)((int)this + 0x10) +
                          (double)param_2[0xc] * (double)*(float *)this) +
                         (double)*(float *)((int)this + 0x20) * (double)param_2[0xe]) +
                        (double)*(float *)((int)this + 0x30) * (double)param_2[0xf])));
  param_1[0xd] = ((float)GEN_TOF(((((double)*(float *)((int)this + 0x14) * (double)param_2[0xd] +
                          (double)param_2[0xc] * (double)*(float *)((int)this + 4)) +
                         (double)*(float *)((int)this + 0x24) * (double)param_2[0xe]) +
                        (double)param_2[0xf] * (double)*(float *)((int)this + 0x34))));
  param_1[0xe] = ((float)GEN_TOF(((((double)param_2[0xc] * (double)*(float *)((int)this + 8) +
                          (double)param_2[0xd] * (double)*(float *)((int)this + 0x18)) +
                         (double)param_2[0xe] * (double)*(float *)((int)this + 0x28)) +
                        (double)param_2[0xf] * (double)*(float *)((int)this + 0x38))));
  param_1[0xf] = ((float)GEN_TOF(((((double)*(float *)((int)this + 0x1c) * (double)param_2[0xd] +
                          (double)param_2[0xc] * (double)*(float *)((int)this + 0xc)) +
                         (double)*(float *)((int)this + 0x2c) * (double)param_2[0xe]) +
                        (double)param_2[0xf] * (double)*(float *)((int)this + 0x3c))));
  return 0;
}

/* ref: FUN_00c8f7f0 */
uint F_00c8f7f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc8f7f0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  if ((*(uint *)&REFG(undefined, 0x15d76a0) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d76a0) = *(uint *)&REFG(undefined, 0x15d76a0) | 1;
    REFG(float, 0x15d7690) = 0;
    REFG(float, 0x15d7694) = 0;
    REFG(float, 0x15d7698) = 0;
    REFG(float, 0x15d769c) = REFG(float, 0x1087f04);
  }
  uVar15 = REFG(float, 0x15d769c);
  uVar14 = REFG(float, 0x15d7698);
  uVar13 = REFG(float, 0x15d7694);
  uVar12 = REFG(float, 0x15d7690);
  if ((*(uint *)&REFG(undefined, 0x15d768c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d768c) = *(uint *)&REFG(undefined, 0x15d768c) | 1;
    REFG(float, 0x15d767c) = 0;
    REFG(float, 0x15d7680) = 0;
    REFG(float, 0x15d7684) = REFG(float, 0x1087f04);
    REFG(float, 0x15d7688) = 0;
  }
  uVar11 = REFG(float, 0x15d7688);
  uVar10 = REFG(float, 0x15d7684);
  uVar9 = REFG(float, 0x15d7680);
  uVar8 = REFG(float, 0x15d767c);
  if ((*(uint *)&REFG(undefined, 0x15d7678) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7678) = *(uint *)&REFG(undefined, 0x15d7678) | 1;
    REFG(float, 0x15d7668) = 0;
    REFG(float, 0x15d766c) = REFG(float, 0x1087f04);
    REFG(float, 0x15d7670) = 0;
    REFG(float, 0x15d7674) = 0;
  }
  uVar7 = REFG(float, 0x15d7674);
  uVar6 = REFG(float, 0x15d7670);
  uVar5 = REFG(float, 0x15d766c);
  uVar4 = REFG(float, 0x15d7668);
  if ((*(uint *)&REFG(undefined, 0x15d7664) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7664) = *(uint *)&REFG(undefined, 0x15d7664) | 1;
    REFG(float, 0x15d7654) = REFG(float, 0x1087f04);
    REFG(float, 0x15d7658) = 0;
    REFG(float, 0x15d765c) = 0;
    REFG(float, 0x15d7660) = 0;
  }
  uVar3 = REFG(float, 0x15d7660);
  uVar2 = REFG(float, 0x15d765c);
  uVar1 = REFG(float, 0x15d7654);
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x15d7658));
  *param_1 = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  param_1[8] = uVar8;
  param_1[9] = uVar9;
  param_1[10] = uVar10;
  param_1[0xb] = uVar11;
  param_1[0xc] = uVar12;
  param_1[0xd] = uVar13;
  param_1[0xe] = uVar14;
  param_1[0xf] = uVar15;
  return (uint)param_1;
}

/* ref: FUN_00c8fa40 */
unsigned int F_00c8fa40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8fa40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[4];
  in_ecx[4] = param_2[5];
  in_ecx[5] = param_2[6];
  in_ecx[6] = param_2[8];
  in_ecx[7] = param_2[9];
  in_ecx[8] = param_2[10];
  in_ecx[9] = param_2[0xc];
  in_ecx[10] = param_2[0xd];
  in_ecx[0xb] = param_2[0xe];
  return 0;
}

/* ref: FUN_00c8faa0 */
unsigned int F_00c8faa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8faa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  in_ecx[7] = param_2[7];
  in_ecx[8] = param_2[8];
  in_ecx[9] = param_2[9];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xb];
  return 0;
}

/* ref: FUN_00c8fb00 */
unsigned int F_00c8fb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8fb00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  uVar1 = param_2[2];
  in_ecx[3] = 0;
  in_ecx[2] = uVar1;
  in_ecx[4] = param_2[3];
  in_ecx[5] = param_2[4];
  uVar1 = param_2[5];
  in_ecx[7] = 0;
  in_ecx[6] = uVar1;
  in_ecx[8] = param_2[6];
  in_ecx[9] = param_2[7];
  uVar1 = param_2[8];
  in_ecx[0xb] = 0;
  uVar2 = REFG(float, 0x1087f04);
  in_ecx[10] = uVar1;
  in_ecx[0xc] = param_2[9];
  in_ecx[0xd] = param_2[10];
  in_ecx[0xe] = param_2[0xb];
  in_ecx[0xf] = uVar2;
  return 0;
}

/* ref: FUN_00c8fb80 */
unsigned int F_00c8fb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8fb80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *in_ecx = *param_2;
  in_ecx[3] = 0;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  in_ecx[7] = 0;
  in_ecx[4] = uVar1;
  in_ecx[5] = uVar2;
  in_ecx[6] = uVar3;
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  uVar3 = param_2[8];
  in_ecx[0xb] = 0;
  uVar4 = REFG(float, 0x1087f04);
  in_ecx[8] = uVar1;
  in_ecx[9] = uVar2;
  in_ecx[10] = uVar3;
  uVar1 = param_2[10];
  uVar2 = param_2[0xb];
  in_ecx[0xc] = param_2[9];
  in_ecx[0xd] = uVar1;
  in_ecx[0xe] = uVar2;
  in_ecx[0xf] = uVar4;
  return 0;
}

/* ref: FUN_00c8fc30 */
unsigned int F_00c8fc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8fc30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = *param_3;
  in_ecx[4] = param_3[1];
  in_ecx[5] = param_3[2];
  return 0;
}

/* ref: FUN_00c8fc60 */
unsigned int F_00c8fc60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8fc60u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  double dVar1;
  
  dVar1 = REFG(double, 0x1088108);
  *param_2 = ((float)GEN_TOF((((double)in_ecx[3] + (double)*in_ecx) * REFG(double, 0x1088108))));
  param_2[1] = ((float)GEN_TOF((((double)in_ecx[4] + (double)in_ecx[1]) * dVar1)));
  param_2[2] = ((float)GEN_TOF((((double)in_ecx[5] + (double)in_ecx[2]) * dVar1)));
  return 0;
}

/* ref: FUN_00c8fce0 */
unsigned int F_00c8fce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8fce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 0x50) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x40) + 4)));
  F_00c9f060((undefined *)((int)this + 0x58),param_1);
  return 0;
}

/* ref: FUN_00c8fd40 */
unsigned int F_00c8fd40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc8fd40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
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
  int iVar12;
  int iVar13;
  float * pfVar14;
  ushort * puVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  iVar12 = *(int *)((int)this + 0xc);
  fVar1 = *(float *)(iVar12 + 0x10);
  fVar2 = *(float *)(iVar12 + 0x14);
  fVar3 = *(float *)(iVar12 + 0x18);
  dVar20 = ((double)*(float *)(iVar12 + 0x1c) - (double)fVar1) / REFG(double, 0x109cab0);
  dVar21 = ((double)*(float *)(iVar12 + 0x20) - (double)fVar2) / REFG(double, 0x109cab0);
  puVar15 = ((ushort *)GEN_TOP((iVar12 + ((uint)*(ushort *)(iVar12 + 0x2c) * 3 + 0xc) * 4)));
  iVar13 = *(int *)((int)this + 0xc);
  dVar22 = ((double)*(float *)(iVar12 + 0x24) - (double)fVar3) / REFG(double, 0x109cab0);
  uVar16 = 0;
  if (*(short *)(iVar13 + 0x28) != 0) {
    pfVar14 = (float *)(param_3 + param_1 * 0xc + 8);
    do {
      fVar17 = (float)((double)*puVar15 * (double)(float)dVar20 + (double)fVar1);
      fVar18 = (float)((double)puVar15[1] * (double)(float)dVar21 + (double)fVar2);
      fVar19 = (float)((double)puVar15[2] * (double)(float)dVar22 + (double)fVar3);
      fVar4 = param_2[9];
      fVar5 = param_2[10];
      fVar6 = param_2[0xd];
      fVar7 = param_2[0xe];
      fVar8 = param_2[5];
      fVar9 = param_2[6];
      fVar10 = param_2[1];
      fVar11 = param_2[2];
      pfVar14[-2] = ((*param_2 * fVar17 + fVar18 * param_2[4]) + param_2[8] * fVar19) + param_2[0xc]
      ;
      pfVar14[-1] = ((fVar17 * fVar10 + fVar8 * fVar18) + fVar4 * fVar19) + fVar6;
      *pfVar14 = ((fVar11 * fVar17 + fVar18 * fVar9) + fVar5 * fVar19) + fVar7;
      uVar16 = uVar16 + 1;
      puVar15 = puVar15 + 3;
      pfVar14 = pfVar14 + 3;
    } while (uVar16 < *(ushort *)(iVar13 + 0x28));
  }
  return 0;
}

/* ref: FUN_00c90030 */
unsigned int F_00c90030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc90030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  ushort * puVar8;
  float * pfVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  iVar6 = *(int *)((int)this + 0xc);
  fVar1 = *(float *)(iVar6 + 0x10);
  uVar4 = *(ushort *)(iVar6 + 0x2c);
  fVar2 = *(float *)(iVar6 + 0x14);
  fVar3 = *(float *)(iVar6 + 0x18);
  dVar12 = ((double)*(float *)(iVar6 + 0x1c) - (double)fVar1) / REFG(double, 0x109cab0);
  dVar13 = ((double)*(float *)(iVar6 + 0x20) - (double)fVar2) / REFG(double, 0x109cab0);
  dVar11 = ((double)*(float *)(iVar6 + 0x24) - (double)fVar3) / REFG(double, 0x109cab0);
  F_00c46aa0(param_1,iVar6 + 0x30,(uint)uVar4 * 0xc);
  iVar7 = *(int *)((int)this + 0xc);
  pfVar9 = ((float *)GEN_TOP((param_1 + 8 + (uint)*(ushort *)(iVar7 + 0x2c) * 0xc)));
  uVar10 = 0;
  if (*(short *)(iVar7 + 0x28) != 0) {
    puVar8 = ((ushort *)GEN_TOP((iVar6 + ((uint)uVar4 * 3 + 0xc) * 4 + 4)));
    do {
      uVar4 = puVar8[-1];
      uVar5 = *puVar8;
      pfVar9[-2] = (float)((double)puVar8[-2] * (double)(float)dVar12 + (double)fVar1);
      pfVar9[-1] = (float)((double)uVar4 * (double)(float)dVar13 + (double)fVar2);
      *pfVar9 = (float)((double)uVar5 * (double)(float)dVar11 + (double)fVar3);
      uVar10 = uVar10 + 1;
      puVar8 = puVar8 + 3;
      pfVar9 = pfVar9 + 3;
    } while (uVar10 < *(ushort *)(iVar7 + 0x28));
  }
  return 0;
}

/* ref: FUN_00c901b0 */
byte F_00c901b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xc901b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float param_7 = (float)gen_a6;
  byte * pbVar1;
  float * pfVar2;
  int iVar3;
  
  if (-1 < param_2) {
    iVar3 = *(int *)(param_1 + 0xc);
    pbVar1 = ((byte *)GEN_TOP((iVar3 + ((uint)*(ushort *)(iVar3 + 0x28) + param_2 + 8 +
                              (uint)*(ushort *)(iVar3 + 0x2c) * 2) * 6)));
    *param_3 = *param_6 * param_7;
    param_3[1] = param_6[1] * param_7;
    param_3[2] = param_6[2] * param_7;
    *param_3 = *param_3 + *param_5;
    param_3[1] = param_5[1] + param_3[1];
    param_3[2] = param_5[2] + param_3[2];
    iVar3 = *param_4;
    pfVar2 = (float *)(iVar3 + (uint)*pbVar1 * 0xc);
    param_3[3] = *pfVar2;
    param_3[4] = pfVar2[1];
    param_3[5] = pfVar2[2];
    pfVar2 = (float *)(iVar3 + (uint)pbVar1[1] * 0xc);
    param_3[6] = *pfVar2;
    param_3[7] = pfVar2[1];
    param_3[8] = pfVar2[2];
    pfVar2 = (float *)(iVar3 + (uint)pbVar1[2] * 0xc);
    param_3[9] = *pfVar2;
    param_3[10] = pfVar2[1];
    param_3[0xb] = pfVar2[2];
    param_3[0xf] = gen_bits2f((uint)CONCAT12(pbVar1[3],*(undefined2 *)(pbVar1 + 4)));
    param_3[0x10] = param_7;
    return 1;
  }
  return 0;
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf2 */
uint F_00c90300(unsigned int gen_a0)
{
  GEN_ENTER(0xc90300u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0xc) + 0x10;
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf3 */
uint F_00c90310(unsigned int gen_a0)
{
  GEN_ENTER(0xc90310u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0xc) + 0x1c;
}

/* ref: FUN_00c90320 */
unsigned int F_00c90320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc90320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int iVar1;
  int * piVar2;
  byte * pbVar3;
  int * piVar4;
  uint uVar5;
  int local_8;
  
  piVar2 = param_3;
  uVar5 = 0;
  if (*(int *)((int)this + 0x28) != 0) {
    local_8 = 0;
    do {
      pbVar3 = ((byte *)GEN_TOP((*(int *)((int)this + 0x30) + local_8)));
      iVar1 = *(int *)((int)this + 0x2c);
      ((code *)*(gen_code32 *)(*param_3 + 8))
                (param_3,param_1,(uint)*pbVar3 * 0x10 + iVar1,(uint)pbVar3[1] * 0x10 + iVar1,
                 (uint)pbVar3[2] * 0x10 + iVar1,0);
      local_8 = local_8 + 6;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)((int)this + 0x28));
  }
  piVar4 = (int *)((int)this + 0x34);
  param_3 = (int *)0x2;
  do {
    if (*piVar4 != 0) {
      ((code *)*(gen_code32 *)(*(int *)*piVar4 + 4))((int *)*piVar4,param_1,param_2,piVar2);
    }
    piVar4 = piVar4 + 1;
    param_3 = (int *)((int)param_3 + -1);
  } while (param_3 != (int *)0x0);
  return 0;
}

/* ref: FUN_00c903b0 */
uint F_00c903b0(void)
{
  GEN_ENTER(0xc903b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c903c0 */
uint F_00c903c0(void)
{
  GEN_ENTER(0xc903c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c903d0 */
unsigned int F_00c903d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc903d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00c903e0 */
uint F_00c903e0(void)
{
  GEN_ENTER(0xc903e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c903f0 */
unsigned int F_00c903f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc903f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00c90400 */
unsigned int F_00c90400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc90400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00c90410 */
uint F_00c90410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc90410u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  ushort * puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  ushort * puVar9;
  float * pfVar10;
  uint uVar11;
  int * piVar12;
  byte * pbVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  
  uVar8 = param_3;
  (*(int *)(gen_frame + 0x40)) = param_1;
  iVar14 = *(int *)(param_1 + 0xc);
  fVar2 = *(float *)(iVar14 + 0x10);
  fVar3 = *(float *)(iVar14 + 0x14);
  (*(float *)(gen_frame + 0x28)) = *(float *)(iVar14 + 0x24);
  fVar15 = *(float *)(iVar14 + 0x1c) - fVar2;
  (*(float *)(gen_frame + 0x48)) = fVar15;
  fVar20 = *(float *)(iVar14 + 0x20) - fVar3;
  (*(float *)(gen_frame + 0x44)) = fVar20;
  fVar15 = (float)((double)fVar15 * REFG(double, 0x1088108));
  fVar20 = (float)((double)fVar20 * REFG(double, 0x1088108));
  (*(float *)(gen_frame + 0x2c)) = fVar2;
  (*(float *)(gen_frame + 0x30)) = fVar3;
  (*(float *)(gen_frame + 0x34)) = *(float *)(iVar14 + 0x18);
  dVar22 = (double)fVar20;
  (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF((((double)fVar2 + (double)*(float *)(param_3 + 0x30)) + (double)fVar15)));
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF((((double)*(float *)(param_3 + 0x34) + (double)fVar3) + (double)fVar20)));
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF((((double)*(float *)(param_3 + 0x38) + (double)*(float *)(iVar14 + 0x18)) +
                    (double)fVar15)));
  (*(float *)(gen_frame + 0x18)) = SQRT(((float)GEN_TOF(((dVar22 * dVar22 + (double)fVar15 * (double)fVar15) +
                         (double)fVar15 * (double)fVar15))));
  puVar9 = ((ushort *)GEN_TOP(((code *)*(gen_code32 *)(*param_4 + 0x1c))(param_4,param_2,&(*(float *)(gen_frame + 0xc)))));
  if ((char)puVar9 == '\0') {
    iVar14 = *(int *)(param_1 + 0xc);
    (*(int *)(gen_frame + 0x3c)) = iVar14;
    if (*(int *)(iVar14 + 0x2c) != 0) {
      dVar22 = (double)(*(float *)(gen_frame + 0x48)) / REFG(double, 0x109cab0);
      (*(float *)(gen_frame + 0x48)) = (float)dVar22;
      dVar18 = (double)(*(float *)(gen_frame + 0x44)) / REFG(double, 0x109cab0);
      (*(float *)(gen_frame + 0x44)) = (float)dVar18;
      puVar9 = (ushort *)(iVar14 + 0x30);
      puVar1 = puVar9 + *(int *)(iVar14 + 0x28) * 3;
      dVar19 = (double)((*(float *)(gen_frame + 0x28)) - (*(float *)(gen_frame + 0x34))) / REFG(double, 0x109cab0);
      (*(ushort * PTR32 *)(gen_frame + 0x38)) = puVar1;
      uVar11 = 0;
      if (*(int *)(iVar14 + 0x28) != 0) {
        pfVar10 = (float *)(param_5 + 8);
        do {
          fVar21 = (float)((double)puVar9[2] * (double)(float)dVar19 + (double)(*(float *)(gen_frame + 0x34)));
          fVar2 = *(float *)(param_3 + 0x34);
          fVar3 = *(float *)(param_3 + 0x38);
          fVar15 = *(float *)(param_3 + 0x24);
          fVar17 = (float)((double)puVar9[1] * (double)(float)dVar18 + (double)(*(float *)(gen_frame + 0x30)));
          fVar20 = *(float *)(param_3 + 0x28);
          fVar4 = *(float *)(param_3 + 0x14);
          fVar5 = *(float *)(param_3 + 0x18);
          fVar16 = (float)((double)(float)dVar22 * (double)*puVar9 + (double)(*(float *)(gen_frame + 0x2c)));
          (*(float *)(gen_frame + 0x1c)) = *(float *)param_3 * fVar16;
          fVar6 = *(float *)(param_3 + 4);
          fVar7 = *(float *)(param_3 + 8) * fVar16;
          (*(float *)(gen_frame + 0x24)) = fVar7;
          pfVar10[-2] = ((*(float *)param_3 * fVar16 + *(float *)(param_3 + 0x10) * fVar17) +
                        *(float *)(param_3 + 0x20) * fVar21) + *(float *)(param_3 + 0x30);
          pfVar10[-1] = ((fVar6 * fVar16 + fVar4 * fVar17) + fVar15 * fVar21) + fVar2;
          *pfVar10 = ((fVar7 + fVar5 * fVar17) + fVar21 * fVar20) + fVar3;
          uVar11 = uVar11 + 1;
          puVar9 = puVar9 + 3;
          pfVar10 = pfVar10 + 3;
        } while (uVar11 < *(uint *)(iVar14 + 0x28));
      }
      param_3 = 0;
      param_1 = (*(int *)(gen_frame + 0x40));
      if (*(int *)(iVar14 + 0x2c) != 0) {
        pbVar13 = (byte *)((int)puVar1 + 1);
        do {
          ((code *)*(gen_code32 *)(*param_4 + 8))
                    (param_4,param_2,param_5 + (uint)pbVar13[-1] * 0xc,
                     param_5 + (uint)*pbVar13 * 0xc,param_5 + (uint)pbVar13[1] * 0xc,0);
          puVar9 = (ushort *)(param_3 + 1);
          pbVar13 = pbVar13 + 6;
          param_1 = (*(int *)(gen_frame + 0x40));
          param_3 = (uint)puVar9;
        } while (puVar9 < *((ushort * PTR32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x40)) + 0xc) + 0x2c))));
      }
    }
    piVar12 = (int *)(param_1 + 0x10);
    iVar14 = 2;
    do {
      if (*piVar12 != 0) {
        puVar9 = ((ushort *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*piVar12 + 4))((int *)*piVar12,param_2,uVar8,param_4)));
      }
      piVar12 = piVar12 + 1;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  return (uint)puVar9;
}

/* ref: FUN_00c908b0 */
uint F_00c908b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc908b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0xc) + 0x10;
}

/* ref: FUN_00c908c0 */
uint F_00c908c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc908c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0xc) + 0x1c;
}

/* ref: FUN_00c908d0 */
byte F_00c908d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc908d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  ushort * puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  char cVar13;
  float * pfVar11;
  undefined4 * puVar12;
  ushort * puVar14;
  uint uVar15;
  float * pfVar16;
  uint uVar17;
  undefined4 * puVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  
  iVar8 = (int)(*(byte * PTR32 *)&gen_args[5]);
  uVar17 = (*(uint *)&gen_args[3]);
  pfVar16 = (*(float * PTR32 *)&gen_args[2]);
  iVar7 = *(int *)((*(int *)&gen_args[0]) + 0xc);
  (*(int *)(gen_frame + 0x74)) = (*(int *)&gen_args[0]);
  if (*(int *)(iVar7 + 0x2c) != 0) {
    fVar2 = *(float *)(iVar7 + 0x10);
    fVar3 = *(float *)(iVar7 + 0x14);
    fVar4 = *(float *)(iVar7 + 0x18);
    fVar20 = ((float)GEN_TOF((((double)*(float *)(iVar7 + 0x20) - (double)fVar3) / REFG(double, 0x109cab0))));
    puVar14 = (ushort *)(iVar7 + 0x30);
    (*(float *)(gen_frame + 0x88)) = fVar20;
    puVar1 = puVar14 + *(int *)(iVar7 + 0x28) * 3;
    (*(ushort * PTR32 *)(gen_frame + 0x7c)) = puVar1;
    dVar21 = ((double)*(float *)(iVar7 + 0x1c) - (double)fVar2) / REFG(double, 0x109cab0);
    uVar15 = 0;
    fVar19 = ((float)GEN_TOF((((double)*(float *)(iVar7 + 0x24) - (double)fVar4) / REFG(double, 0x109cab0))));
    (*(uint *)(gen_frame + 0x70)) = 0xffffffff;
    (*(float *)(gen_frame + 0x84)) = fVar19;
    if (*(int *)(iVar7 + 0x28) != 0) {
      pfVar11 = ((float *)GEN_TOP(((int)(*(byte * PTR32 *)&gen_args[5]) + 8)));
      do {
        uVar5 = puVar14[1];
        uVar6 = puVar14[2];
        pfVar11[-2] = (float)((double)*puVar14 * (double)(float)dVar21 + (double)fVar2);
        pfVar11[-1] = (float)((double)uVar5 * (double)fVar20 + (double)fVar3);
        *pfVar11 = (float)((double)uVar6 * (double)fVar19 + (double)fVar4);
        uVar15 = uVar15 + 1;
        puVar14 = puVar14 + 3;
        pfVar11 = pfVar11 + 3;
      } while (uVar15 < *(uint *)(iVar7 + 0x28));
    }
    (*(float *)(gen_frame + 0x88)) = 0.0;
    if (*(int *)(iVar7 + 0x2c) != 0) {
      (*(byte * PTR32 *)&gen_args[5]) = (byte *)((int)puVar1 + 1);
      do {
        bVar10 = F_00c99be0(pfVar16,uVar17,iVar8 + (uint)(*(byte * PTR32 *)&gen_args[5])[-1] * 0xc,
                              iVar8 + (uint)*(*(byte * PTR32 *)&gen_args[5]) * 0xc,iVar8 + (uint)(*(byte * PTR32 *)&gen_args[5])[1] * 0xc,&(*(uint *)&gen_args[3]),
                              &(*(float *)(gen_frame + 0x84)),&(*(float * PTR32 *)&gen_args[2]));
        if (((bVar10 != 0) && (gen_bits2f((*(uint *)&gen_args[3])) <= *(float *)(*(uint *)&gen_args[4]))) &&
           ((!GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[3]))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
            !(gen_bits2f((*(uint *)&gen_args[3])) < *(float *)&REFG(undefined, 0x1088114)))) {
          (*(uint *)(gen_frame + 0x70)) = (uint)gen_fl2bits((*(float *)(gen_frame + 0x88)));
          *(uint *)(*(uint *)&gen_args[4]) = (*(uint *)&gen_args[3]);
        }
        (*(byte * PTR32 *)&gen_args[5]) = (*(byte * PTR32 *)&gen_args[5]) + 6;
        uVar15 = (int)gen_fl2bits((*(float *)(gen_frame + 0x88))) + 1;
        (*(float *)(gen_frame + 0x88)) = gen_bits2f(uVar15);
      } while (uVar15 < *((uint *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x74)) + 0xc) + 0x2c))));
      if (-1 < (int)(*(uint *)(gen_frame + 0x70))) {
        puVar14 = (*(ushort * PTR32 *)(gen_frame + 0x7c)) + (*(uint *)(gen_frame + 0x70)) * 3;
        fVar2 = *(float *)(*(uint *)&gen_args[4]);
        *(*(float * PTR32 *)&gen_args[1]) = *(float *)uVar17 * fVar2;
        (*(float * PTR32 *)&gen_args[1])[1] = *(float *)(uVar17 + 4) * fVar2;
        (*(float * PTR32 *)&gen_args[1])[2] = *(float *)(uVar17 + 8) * fVar2;
        *(*(float * PTR32 *)&gen_args[1]) = *(*(float * PTR32 *)&gen_args[1]) + *pfVar16;
        (*(float * PTR32 *)&gen_args[1])[1] = pfVar16[1] + (*(float * PTR32 *)&gen_args[1])[1];
        (*(float * PTR32 *)&gen_args[1])[2] = pfVar16[2] + (*(float * PTR32 *)&gen_args[1])[2];
        pfVar16 = (float *)(iVar8 + (uint)(byte)*puVar14 * 0xc);
        (*(float * PTR32 *)&gen_args[1])[3] = *pfVar16;
        (*(float * PTR32 *)&gen_args[1])[4] = pfVar16[1];
        (*(float * PTR32 *)&gen_args[1])[5] = pfVar16[2];
        pfVar16 = ((float *)GEN_TOP((iVar8 + (uint)*(byte *)((int)puVar14 + 1) * 0xc)));
        (*(float * PTR32 *)&gen_args[1])[6] = *pfVar16;
        (*(float * PTR32 *)&gen_args[1])[7] = pfVar16[1];
        (*(float * PTR32 *)&gen_args[1])[8] = pfVar16[2];
        pfVar16 = (float *)(iVar8 + (uint)(byte)puVar14[1] * 0xc);
        (*(float * PTR32 *)&gen_args[1])[9] = *pfVar16;
        (*(float * PTR32 *)&gen_args[1])[10] = pfVar16[1];
        (*(float * PTR32 *)&gen_args[1])[0xb] = pfVar16[2];
        (*(float * PTR32 *)&gen_args[1])[0xf] = gen_bits2f((uint)CONCAT12(*(byte *)((int)puVar14 + 3),puVar14[2]));
        (*(float * PTR32 *)&gen_args[1])[0x10] = *(float *)(*(uint *)&gen_args[4]);
        return 1;
      }
    }
    return 0;
  }
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x5c)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x6c)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  uVar17 = 0;
  pfVar16 = &(*(float *)(gen_frame + 0x78));
  puVar18 = (undefined4 *)((*(int *)&gen_args[0]) + 0x10);
  do {
    puVar12 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*puVar18 + 8))((int *)*puVar18)));
    (*(undefined4 *)(gen_frame + 0x58)) = *puVar12;
    (*(undefined4 *)(gen_frame + 0x5c)) = puVar12[1];
    (*(undefined4 *)(gen_frame + 0x60)) = puVar12[2];
    puVar12 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*puVar18 + 0xc))((int *)*puVar18)));
    (*(undefined4 *)(gen_frame + 0x64)) = *puVar12;
    (*(undefined4 *)(gen_frame + 0x68)) = puVar12[1];
    (*(undefined4 *)(gen_frame + 0x6c)) = puVar12[2];
    bVar10 = F_00c99860((*(float * PTR32 *)&gen_args[2]),(*(uint *)&gen_args[3]),&(*(undefined4 *)(gen_frame + 0x58)),pfVar16,&(*(undefined4 *)(gen_frame + 0x4c)));
    iVar7 = (int)(*(byte * PTR32 *)&gen_args[5]);
    uVar15 = (*(uint *)&gen_args[4]);
    *(byte *)((int)&(*(float *)(gen_frame + 0x88)) + uVar17) = bVar10;
    uVar9 = (uint)gen_fl2bits((*(float *)(gen_frame + 0x88)));
    uVar17 = uVar17 + 1;
    puVar18 = puVar18 + 1;
    pfVar16 = pfVar16 + 1;
  } while (uVar17 < 2);
  uVar17 = 0;
  (*(int *)(gen_frame + 0x80)) = 0;
  (*(float *)(gen_frame + 0x84)) = 1.4013e-45;
  cVar13 = (char)((uint)gen_fl2bits((*(float *)(gen_frame + 0x88))) >> 8);
  if ((char)(uint)gen_fl2bits((*(float *)(gen_frame + 0x88))) == '\0') {
    if (cVar13 == '\0') {
      (*(int *)(gen_frame + 0x80)) = -1;
    }
    else {
      (*(int *)(gen_frame + 0x80)) = 1;
      (*(float *)(gen_frame + 0x84)) = -NAN;
    }
  }
  else if (cVar13 == '\0') {
    (*(int *)(gen_frame + 0x80)) = 0;
    (*(float *)(gen_frame + 0x84)) = -NAN;
  }
  else if (((float)gen_bits2f((unsigned int)(uintptr_t)((*(ushort * PTR32 *)(gen_frame + 0x7c))))) < (*(float *)(gen_frame + 0x78))) {
    (*(int *)(gen_frame + 0x80)) = 1;
    (*(float *)(gen_frame + 0x84)) = 0.0;
  }
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x88)) + 3)) = 0;
  (*(float *)(gen_frame + 0x88)) = gen_bits2f(uVar9 & 0xffffff);
  do {
    iVar8 = (&(*(int *)(gen_frame + 0x80)))[uVar17];
    if (iVar8 == -1) break;
    (*(uint *)&gen_args[4]) = *(uint *)uVar15;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
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
    if (((((double)GEN_TOD((&(*(float *)(gen_frame + 0x78)))[iVar8])) - REFG(double, 0x1091858) < ((double)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4]))))) &&
        (bVar10 = F_00c908d0(*(undefined4 *)((*(int *)(gen_frame + 0x74)) + 0x10 + iVar8 * 4),(float *)&(*(undefined4 *)(gen_frame + 0x0)),
                               (*(float * PTR32 *)&gen_args[2]),(*(uint *)&gen_args[3]),(uint)&(*(uint *)&gen_args[4]),(byte *)iVar7), bVar10 != 0)) &&
       (gen_bits2f((*(uint *)&gen_args[4])) < *(float *)uVar15)) {
      *(uint *)uVar15 = (*(uint *)&gen_args[4]);
      F_00550bc0((*(float * PTR32 *)&gen_args[1]),&(*(undefined4 *)(gen_frame + 0x0)));
      (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x88)) + 3)) = 1;
      (*(float *)(gen_frame + 0x88)) = gen_bits2f(CONCAT13(1,GEN_PIECE(&(*(float *)(gen_frame + 0x88)), 0, 3)));
    }
    uVar17 = uVar17 + 1;
  } while (uVar17 < 2);
  return (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x88)) + 3));
}

/* ref: FUN_00c90e00 */
uint F_00c90e00(unsigned int gen_a0)
{
  GEN_ENTER(0xc90e00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xc) + 0x2c)));
}

/* ref: FUN_00c90e10 */
uint F_00c90e10(unsigned int gen_a0)
{
  GEN_ENTER(0xc90e10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xc) + 0x28)));
}

/* ref: FUN_00c90e20 */
unsigned int F_00c90e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc90e20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
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
  int iVar12;
  ushort * puVar13;
  float * pfVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  iVar12 = *(int *)((int)this + 0xc);
  if (*(int *)(iVar12 + 0x2c) != 0) {
    fVar1 = *(float *)(iVar12 + 0x10);
    fVar2 = *(float *)(iVar12 + 0x14);
    fVar3 = *(float *)(iVar12 + 0x18);
    dVar21 = ((double)GEN_TOD((*(float *)(iVar12 + 0x1c) - fVar1))) / REFG(double, 0x109cab0);
    dVar19 = ((double)GEN_TOD((*(float *)(iVar12 + 0x20) - fVar2))) / REFG(double, 0x109cab0);
    uVar15 = 0;
    dVar20 = ((double)GEN_TOD((*(float *)(iVar12 + 0x24) - fVar3))) / REFG(double, 0x109cab0);
    puVar13 = (ushort *)(iVar12 + 0x30);
    if (*(int *)(iVar12 + 0x28) != 0) {
      pfVar14 = (float *)(param_2 + 8);
      do {
        fVar16 = (float)((double)(float)dVar21 * (double)*puVar13 + (double)fVar1);
        fVar17 = (float)((double)puVar13[1] * (double)(float)dVar19 + (double)fVar2);
        fVar18 = (float)((double)puVar13[2] * (double)(float)dVar20 + (double)fVar3);
        fVar4 = param_1[9];
        fVar5 = param_1[0xd];
        fVar6 = param_1[0xe];
        fVar7 = param_1[10];
        fVar8 = param_1[5];
        fVar9 = param_1[6];
        fVar10 = param_1[1];
        fVar11 = param_1[2];
        pfVar14[-2] = ((*param_1 * fVar16 + param_1[4] * fVar17) + param_1[8] * fVar18) +
                      param_1[0xc];
        pfVar14[-1] = ((fVar10 * fVar16 + fVar8 * fVar17) + fVar18 * fVar4) + fVar5;
        *pfVar14 = ((fVar11 * fVar16 + fVar9 * fVar17) + fVar7 * fVar18) + fVar6;
        uVar15 = uVar15 + 1;
        puVar13 = puVar13 + 3;
        pfVar14 = pfVar14 + 3;
      } while (uVar15 < *(uint *)(iVar12 + 0x28));
    }
  }
  return 0;
}

/* ref: FUN_00c91120 */
uint F_00c91120(unsigned int gen_a0)
{
  GEN_ENTER(0xc91120u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0xc) + (*((int *)GEN_TOP((*(int *)(in_ecx + 0xc) + 0x28))) * 3 + 0x18) * 2;
}

/* ref: FUN_00c91130 */
unsigned int F_00c91130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc91130u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0xc);
  *param_2 = *(undefined4 *)(iVar1 + 0x10);
  param_2[1] = *(undefined4 *)(iVar1 + 0x14);
  param_2[2] = *(undefined4 *)(iVar1 + 0x18);
  param_2[3] = *(undefined4 *)(iVar1 + 0x1c);
  param_2[4] = *(undefined4 *)(iVar1 + 0x20);
  param_2[5] = *(undefined4 *)(iVar1 + 0x24);
  return 0;
}

/* ref: FUN_00c91160 */
unsigned int F_00c91160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc91160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  
  ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,this);
  piVar2 = (int *)((int)this + 0x10);
  iVar1 = 2;
  do {
    if (*piVar2 != 0) {
      ((code *)*(gen_code32 *)(*(int *)*piVar2 + 0x28))((int *)*piVar2,param_1);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}

/* ref: FUN_00c911a0 */
uint F_00c911a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc911a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00c96f70(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x34) + 4))));
  *(uint *)((int)this + 0x6c) = uVar2;
  *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + 1;
  piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0x34) + 0x20)));
  *piVar1 = *piVar1 + 1;
  return 1;
}

/* ref: FUN_00c911e0 */
uint F_00c911e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc911e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x80) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this,*(int *)((int)this + 0x80));
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  return uVar1;
}

/* ref: FUN_00c91210 */
uint F_00c91210(unsigned int gen_a0)
{
  GEN_ENTER(0xc91210u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 0x30) == 0) && (*(int *)(in_ecx + 0x6c) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00c91230 */
uint F_00c91230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc91230u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x94);
  param_2[1] = *(undefined4 *)(in_ecx + 0x98);
  param_2[2] = *(undefined4 *)(in_ecx + 0x9c);
  return (uint)param_2;
}

/* ref: FUN_00c91260 */
uint F_00c91260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc91260u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0xa0);
  param_2[1] = *(undefined4 *)(in_ecx + 0xa4);
  param_2[2] = *(undefined4 *)(in_ecx + 0xa8);
  return (uint)param_2;
}

/* ref: FUN_00c91290 */
unsigned int F_00c91290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc91290u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(in_ecx + 200);
  uVar2 = *(undefined4 *)(in_ecx + 0xcc);
  *param_2 = *(undefined4 *)(in_ecx + 0xc4);
  param_2[3] = 0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  uVar1 = *(undefined4 *)(in_ecx + 0xd0);
  uVar2 = *(undefined4 *)(in_ecx + 0xd4);
  uVar3 = *(undefined4 *)(in_ecx + 0xd8);
  param_2[7] = 0;
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  param_2[6] = uVar3;
  uVar1 = *(undefined4 *)(in_ecx + 0xdc);
  uVar2 = *(undefined4 *)(in_ecx + 0xe0);
  uVar3 = *(undefined4 *)(in_ecx + 0xe4);
  param_2[0xb] = 0;
  uVar4 = REFG(float, 0x1087f04);
  param_2[8] = uVar1;
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  uVar1 = *(undefined4 *)(in_ecx + 0xec);
  uVar2 = *(undefined4 *)(in_ecx + 0xf0);
  param_2[0xc] = *(undefined4 *)(in_ecx + 0xe8);
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar4;
  return 0;
}

/* ref: FUN_00c91360 */
unsigned int F_00c91360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc91360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  
  if (*(int *)((int)this + 0x80) != 0) {
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    ((code *)*(gen_code32 *)(*(int *)this + 0x3c))(this,((undefined1 *)(gen_frame + 0xc)));
    ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,this);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x80) + 4))))
              (*(int * PTR32 *)((int)this + 0x80),this,((undefined1 *)(gen_frame + 0xc)),param_1);
  }
  return 0;
}

/* ref: FUN_00c913c0 */
byte F_00c913c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc913c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x290];
  int * piVar1;
  uint uVar2;
  float * pfVar3;
  float * pfVar4;
  undefined4 * puVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  float in_XMM2_Da = 0;
  float fVar9;
  double dVar10;
  float in_XMM3_Da = 0;
  float fVar11;
  double dVar12;
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
  float in_XMM7_Da = 0;
  
  if (*(char *)((int)this + 0x78) != '\0') {
    (*(float *)(gen_frame + 0x200)) = *(float *)((int)this + 0x88) - *(float *)((int)this + 0xac);
    (*(float *)(gen_frame + 0x204)) = *(float *)((int)this + 0x8c) - *(float *)((int)this + 0xb0);
    (*(float *)(gen_frame + 0x208)) = *(float *)((int)this + 0x90) - *(float *)((int)this + 0xb4);
    uVar2 = F_00c9da90(((undefined1 *)(gen_frame + 0x80)),(uint)this,(int)this + 0xacU,(uint)&(*(float *)(gen_frame + 0x200)),(int)this + 0xb8,
                         (int)this + 0x94);
    *(undefined4 *)((int)this + 0x50) = *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x40) + 4)));
    F_00c9f060((undefined *)((int)this + 0x58),uVar2);
    *(undefined4 *)((int)this + 0xacU) = *(undefined4 *)((int)this + 0x88);
    (*(float *)(gen_frame + 0x18c)) = 0.0;
    *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)((int)this + 0x8c);
    (*(float *)(gen_frame + 0x19c)) = 0.0;
    (*(float *)(gen_frame + 0x1ac)) = 0.0;
    *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)((int)this + 0x90);
    (*(float *)(gen_frame + 0x1bc)) = 0.0;
    (*(float *)(gen_frame + 0x218)) = 0.0;
    *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)((int)this + 0x94);
    (*(float *)(gen_frame + 0x228)) = 0.0;
    (*(float *)(gen_frame + 0x238)) = 0.0;
    *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)((int)this + 0x98);
    (*(float *)(gen_frame + 0x248)) = 0.0;
    (*(undefined4 *)(gen_frame + 0x1cc)) = 0;
    (*(undefined4 *)(gen_frame + 0x1dc)) = 0;
    *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)((int)this + 0x9c);
    fVar6 = REFG(float, 0x1128e5c);
    (*(undefined4 *)(gen_frame + 0x1ec)) = 0;
    (*(undefined4 *)(gen_frame + 0x1fc)) = 0;
    pfVar3 = (float *)((int)this + 0xa0);
    pfVar4 = (float *)((int)this + 0xa0);
    if ((!GEN_ISNAN(REFG(float, 0x1128e5c)) && !GEN_ISNAN(*pfVar3)) &&
        (!(REFG(float, 0x1128e5c) < *pfVar3) && REFG(uint, 0x1128e5c) != *pfVar3)) {
      *pfVar4 = GEN_FLT_TO(*pfVar4, REFG(float, 0x1128e5c));
    }
    pfVar3 = (float *)((int)this + 0xa4);
    if ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(*pfVar3)) && (!(fVar6 < *pfVar3) && fVar6 != *pfVar3)) {
      *(float *)((int)this + 0xa4) = fVar6;
    }
    pfVar3 = (float *)((int)this + 0xa8);
    if ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(*pfVar3)) && (!(fVar6 < *pfVar3) && fVar6 != *pfVar3)) {
      *(float *)((int)this + 0xa8) = fVar6;
    }
    dVar8 = REFG(double, 0x1088130) / (double)*pfVar4;
    *(float *)((int)this + 0x7c) = (float)dVar8;
    F_00c98a60(&(*(float *)(gen_frame + 0x180)),pfVar4);
    fVar6 = gen_bits2f((uint)(ulonglong)gen_d2bits(dVar8));
    F_00c98b30(&(*(float *)(gen_frame + 0x1c0)),(undefined4 *)((int)this + 0x88));
    pfVar3 = (float *)F_00c98740(fVar6,in_XMM2_Da,in_XMM3_Da,in_XMM7_Da,((undefined1 *)(gen_frame + 0x40)),
                                   *(float *)((int)this + 0x98));
    pfVar4 = (float *)F_00c988c0(in_XMM3_Da,in_XMM7_Da,((undefined1 *)(gen_frame + 0x0)),*(float *)((int)this + 0x9c));
    fVar6 = *pfVar3;
    fVar7 = pfVar3[1];
    fVar9 = *pfVar4;
    fVar11 = pfVar4[4];
    fVar13 = pfVar3[2];
    (*(float *)(gen_frame + 0x24c)) = ((float)GEN_TOF(((((double)fVar9 * (double)fVar6 + (double)fVar11 * (double)fVar7) +
                       (double)pfVar4[8] * (double)fVar13) + (double)pfVar4[0xc] * (double)pfVar3[3]
                      )));
    (*(float *)(gen_frame + 0x250)) = ((float)GEN_TOF(((((double)pfVar4[1] * (double)fVar6 + (double)pfVar4[5] * (double)fVar7) +
                       (double)pfVar4[9] * (double)fVar13) + (double)pfVar4[0xd] * (double)pfVar3[3]
                      )));
    (*(float *)(gen_frame + 0x254)) = ((float)GEN_TOF(((((double)pfVar4[2] * (double)fVar6 + (double)pfVar4[6] * (double)fVar7) +
                       (double)pfVar4[10] * (double)fVar13) +
                      (double)pfVar4[0xe] * (double)pfVar3[3])));
    fVar14 = pfVar3[6];
    fVar15 = pfVar3[4];
    (*(float *)(gen_frame + 0x258)) = ((float)GEN_TOF(((((double)pfVar4[3] * (double)fVar6 + (double)pfVar4[7] * (double)fVar7) +
                       (double)pfVar4[0xb] * (double)fVar13) +
                      (double)pfVar4[0xf] * (double)pfVar3[3])));
    fVar6 = pfVar3[5];
    (*(float *)(gen_frame + 0x25c)) = ((float)GEN_TOF(((((double)fVar15 * (double)fVar9 + (double)fVar6 * (double)fVar11) +
                       (double)fVar14 * (double)pfVar4[8]) + (double)pfVar3[7] * (double)pfVar4[0xc]
                      )));
    (*(float *)(gen_frame + 0x260)) = ((float)GEN_TOF(((((double)fVar15 * (double)pfVar4[1] + (double)fVar6 * (double)pfVar4[5]) +
                       (double)fVar14 * (double)pfVar4[9]) + (double)pfVar3[7] * (double)pfVar4[0xd]
                      )));
    (*(float *)(gen_frame + 0x264)) = ((float)GEN_TOF(((((double)fVar15 * (double)pfVar4[2] + (double)fVar6 * (double)pfVar4[6]) +
                       (double)fVar14 * (double)pfVar4[10]) +
                      (double)pfVar3[7] * (double)pfVar4[0xe])));
    fVar7 = pfVar3[10];
    fVar13 = pfVar3[8];
    (*(float *)(gen_frame + 0x268)) = ((float)GEN_TOF(((((double)fVar15 * (double)pfVar4[3] + (double)fVar6 * (double)pfVar4[7]) +
                       (double)fVar14 * (double)pfVar4[0xb]) +
                      (double)pfVar3[7] * (double)pfVar4[0xf])));
    fVar6 = pfVar3[9];
    (*(float *)(gen_frame + 0x26c)) = ((float)GEN_TOF(((((double)fVar13 * (double)fVar9 + (double)fVar6 * (double)fVar11) +
                       (double)fVar7 * (double)pfVar4[8]) +
                      (double)pfVar3[0xb] * (double)pfVar4[0xc])));
    (*(float *)(gen_frame + 0x270)) = ((float)GEN_TOF(((((double)fVar13 * (double)pfVar4[1] + (double)fVar6 * (double)pfVar4[5]) +
                       (double)fVar7 * (double)pfVar4[9]) +
                      (double)pfVar3[0xb] * (double)pfVar4[0xd])));
    (*(float *)(gen_frame + 0x274)) = ((float)GEN_TOF(((((double)fVar13 * (double)pfVar4[2] + (double)fVar6 * (double)pfVar4[6]) +
                       (double)fVar7 * (double)pfVar4[10]) +
                      (double)pfVar3[0xb] * (double)pfVar4[0xe])));
    fVar14 = pfVar3[0xe];
    fVar15 = pfVar3[0xd];
    fVar16 = pfVar3[0xf];
    (*(float *)(gen_frame + 0x278)) = ((float)GEN_TOF(((((double)fVar13 * (double)pfVar4[3] + (double)fVar6 * (double)pfVar4[7]) +
                       (double)fVar7 * (double)pfVar4[0xb]) +
                      (double)pfVar3[0xb] * (double)pfVar4[0xf])));
    fVar6 = pfVar3[0xc];
    (*(float *)(gen_frame + 0x27c)) = ((float)GEN_TOF(((((double)fVar6 * (double)fVar9 + (double)fVar15 * (double)fVar11) +
                       (double)fVar14 * (double)pfVar4[8]) + (double)fVar16 * (double)pfVar4[0xc])));
    (*(float *)(gen_frame + 0x280)) = ((float)GEN_TOF(((((double)fVar6 * (double)pfVar4[1] + (double)fVar15 * (double)pfVar4[5]) +
                       (double)fVar14 * (double)pfVar4[9]) + (double)fVar16 * (double)pfVar4[0xd])));
    dVar12 = (((double)fVar6 * (double)pfVar4[2] + (double)fVar15 * (double)pfVar4[6]) +
             (double)fVar14 * (double)pfVar4[10]) + (double)fVar16 * (double)pfVar4[0xe];
    (*(float *)(gen_frame + 0x284)) = (float)dVar12;
    dVar8 = (double)fVar16 * (double)pfVar4[0xf];
    (*(float *)(gen_frame + 0x288)) = ((float)GEN_TOF(((((double)fVar6 * (double)pfVar4[3] + (double)pfVar3[0xd] * (double)pfVar4[7])
                      + (double)pfVar4[0xb] * (double)fVar14) + dVar8)));
    pfVar3 = (float *)F_00c985b0(GEN_TOF(gen_bits2f((uint)(ulonglong)gen_d2bits(dVar8))),GEN_TOF(gen_bits2f((uint)(ulonglong)gen_d2bits((double)pfVar4[0xf]))),GEN_TOF(gen_bits2f((uint)(ulonglong)gen_d2bits(dVar12))),GEN_TOF(gen_bits2f((uint)(ulonglong)
                                                    gen_d2bits((double)pfVar3[0xb] *
                                                               (double)pfVar4[0xe]))),((undefined1 *)(gen_frame + 0x9c)),
                                   *(float *)((int)this + 0x94));
    fVar6 = pfVar3[1];
    fVar7 = *pfVar3;
    fVar9 = pfVar3[2];
    fVar11 = pfVar3[3];
    (*(float *)(gen_frame + 0xf4)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x25c)) + (double)fVar7 * (double)(*(float *)(gen_frame + 0x24c))) +
                        (double)fVar9 * (double)(*(float *)(gen_frame + 0x26c))) + (double)fVar11 * (double)(*(float *)(gen_frame + 0x27c)))));
    (*(float *)(gen_frame + 0xf8)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x260)) + (double)fVar7 * (double)(*(float *)(gen_frame + 0x250))) +
                        (double)fVar9 * (double)(*(float *)(gen_frame + 0x270))) + (double)fVar11 * (double)(*(float *)(gen_frame + 0x280)))));
    (*(float *)(gen_frame + 0xfc)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x264)) + (double)fVar7 * (double)(*(float *)(gen_frame + 0x254))) +
                        (double)fVar9 * (double)(*(float *)(gen_frame + 0x274))) + (double)fVar11 * (double)(*(float *)(gen_frame + 0x284)))));
    fVar13 = pfVar3[7];
    fVar14 = pfVar3[6];
    fVar15 = pfVar3[4];
    (*(float *)(gen_frame + 0x100)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x268)) + (double)fVar7 * (double)(*(float *)(gen_frame + 0x258))) +
                        (double)fVar9 * (double)(*(float *)(gen_frame + 0x278))) + (double)fVar11 * (double)(*(float *)(gen_frame + 0x288)))));
    fVar6 = pfVar3[5];
    (*(float *)(gen_frame + 0x104)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x25c)) + (double)fVar15 * (double)(*(float *)(gen_frame + 0x24c))) +
                        (double)fVar14 * (double)(*(float *)(gen_frame + 0x26c))) + (double)fVar13 * (double)(*(float *)(gen_frame + 0x27c)))));
    (*(float *)(gen_frame + 0x108)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x260)) + (double)fVar15 * (double)(*(float *)(gen_frame + 0x250))) +
                        (double)fVar14 * (double)(*(float *)(gen_frame + 0x270))) + (double)fVar13 * (double)(*(float *)(gen_frame + 0x280)))));
    (*(float *)(gen_frame + 0x10c)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x264)) + (double)fVar15 * (double)(*(float *)(gen_frame + 0x254))) +
                        (double)fVar14 * (double)(*(float *)(gen_frame + 0x274))) + (double)fVar13 * (double)(*(float *)(gen_frame + 0x284)))));
    fVar7 = pfVar3[0xb];
    fVar9 = pfVar3[10];
    fVar11 = pfVar3[8];
    (*(float *)(gen_frame + 0x110)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x268)) + (double)fVar15 * (double)(*(float *)(gen_frame + 0x258))) +
                        (double)fVar14 * (double)(*(float *)(gen_frame + 0x278))) + (double)fVar13 * (double)(*(float *)(gen_frame + 0x288)))));
    fVar6 = pfVar3[9];
    (*(float *)(gen_frame + 0x114)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x25c)) + (double)fVar11 * (double)(*(float *)(gen_frame + 0x24c))) +
                        (double)fVar9 * (double)(*(float *)(gen_frame + 0x26c))) + (double)fVar7 * (double)(*(float *)(gen_frame + 0x27c)))));
    (*(float *)(gen_frame + 0x118)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x260)) + (double)fVar11 * (double)(*(float *)(gen_frame + 0x250))) +
                        (double)fVar9 * (double)(*(float *)(gen_frame + 0x270))) + (double)fVar7 * (double)(*(float *)(gen_frame + 0x280)))));
    (*(float *)(gen_frame + 0x11c)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x264)) + (double)fVar11 * (double)(*(float *)(gen_frame + 0x254))) +
                        (double)fVar9 * (double)(*(float *)(gen_frame + 0x274))) + (double)fVar7 * (double)(*(float *)(gen_frame + 0x284)))));
    fVar13 = pfVar3[0xf];
    fVar14 = pfVar3[0xe];
    fVar15 = pfVar3[0xc];
    (*(float *)(gen_frame + 0x120)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x268)) + (double)fVar11 * (double)(*(float *)(gen_frame + 0x258))) +
                        (double)fVar9 * (double)(*(float *)(gen_frame + 0x278))) + (double)fVar7 * (double)(*(float *)(gen_frame + 0x288)))));
    fVar6 = pfVar3[0xd];
    (*(float *)(gen_frame + 0x124)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x25c)) + (double)fVar15 * (double)(*(float *)(gen_frame + 0x24c))) +
                        (double)fVar14 * (double)(*(float *)(gen_frame + 0x26c))) + (double)fVar13 * (double)(*(float *)(gen_frame + 0x27c)))));
    (*(float *)(gen_frame + 0x128)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x260)) + (double)fVar15 * (double)(*(float *)(gen_frame + 0x250))) +
                        (double)fVar14 * (double)(*(float *)(gen_frame + 0x270))) + (double)fVar13 * (double)(*(float *)(gen_frame + 0x280)))));
    (*(float *)(gen_frame + 0x12c)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x264)) + (double)fVar15 * (double)(*(float *)(gen_frame + 0x254))) +
                        (double)fVar14 * (double)(*(float *)(gen_frame + 0x274))) + (double)fVar13 * (double)(*(float *)(gen_frame + 0x284)))));
    (*(float *)(gen_frame + 0x130)) = ((float)GEN_TOF(((((double)fVar6 * (double)(*(float *)(gen_frame + 0x268)) + (double)fVar15 * (double)(*(float *)(gen_frame + 0x258))) +
                        (double)fVar14 * (double)(*(float *)(gen_frame + 0x278))) + (double)fVar13 * (double)(*(float *)(gen_frame + 0x288)))));
    F_00c8ecc0(&(*(float *)(gen_frame + 0x20c)),&(*(float *)(gen_frame + 0xf4)));
    fVar6 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x210)) * (double)(*(float *)(gen_frame + 0x1d0)) + (double)(*(float *)(gen_frame + 0x20c)) * (double)(*(float *)(gen_frame + 0x1c0))) +
                    (double)(*(float *)(gen_frame + 0x214)) * (double)(*(float *)(gen_frame + 0x1e0))) + (double)(*(float *)(gen_frame + 0x1f0)) * (double)(*(float *)(gen_frame + 0x218)))));
    fVar7 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x20c)) * (double)(*(float *)(gen_frame + 0x1c4)) + (double)(*(float *)(gen_frame + 0x1d4)) * (double)(*(float *)(gen_frame + 0x210))) +
                    (double)(*(float *)(gen_frame + 0x1e4)) * (double)(*(float *)(gen_frame + 0x214))) + (double)(*(float *)(gen_frame + 0x1f4)) * (double)(*(float *)(gen_frame + 0x218)))));
    fVar9 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x20c)) * (double)(*(float *)(gen_frame + 0x1c8)) + (double)(*(float *)(gen_frame + 0x1d8)) * (double)(*(float *)(gen_frame + 0x210))) +
                    (double)(*(float *)(gen_frame + 0x1e8)) * (double)(*(float *)(gen_frame + 0x214))) + (double)(*(float *)(gen_frame + 0x1f8)) * (double)(*(float *)(gen_frame + 0x218)))));
    fVar11 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1d0)) + (double)(*(float *)(gen_frame + 0x21c)) * (double)(*(float *)(gen_frame + 0x1c0))) +
                     (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1e0))) + (double)(*(float *)(gen_frame + 0x228)) * (double)(*(float *)(gen_frame + 0x1f0)))));
    fVar13 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1d4)) + (double)(*(float *)(gen_frame + 0x21c)) * (double)(*(float *)(gen_frame + 0x1c4))) +
                     (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1e4))) + (double)(*(float *)(gen_frame + 0x228)) * (double)(*(float *)(gen_frame + 0x1f4)))));
    fVar14 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x220)) * (double)(*(float *)(gen_frame + 0x1d8)) + (double)(*(float *)(gen_frame + 0x21c)) * (double)(*(float *)(gen_frame + 0x1c8))) +
                     (double)(*(float *)(gen_frame + 0x224)) * (double)(*(float *)(gen_frame + 0x1e8))) + (double)(*(float *)(gen_frame + 0x228)) * (double)(*(float *)(gen_frame + 0x1f8)))));
    (*(float *)(gen_frame + 0x264)) = fVar14;
    fVar15 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x230)) * (double)(*(float *)(gen_frame + 0x1d0)) + (double)(*(float *)(gen_frame + 0x22c)) * (double)(*(float *)(gen_frame + 0x1c0))) +
                     (double)(*(float *)(gen_frame + 0x234)) * (double)(*(float *)(gen_frame + 0x1e0))) + (double)(*(float *)(gen_frame + 0x238)) * (double)(*(float *)(gen_frame + 0x1f0)))));
    (*(float *)(gen_frame + 0x26c)) = fVar15;
    fVar16 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x230)) * (double)(*(float *)(gen_frame + 0x1d4)) + (double)(*(float *)(gen_frame + 0x22c)) * (double)(*(float *)(gen_frame + 0x1c4))) +
                     (double)(*(float *)(gen_frame + 0x234)) * (double)(*(float *)(gen_frame + 0x1e4))) + (double)(*(float *)(gen_frame + 0x238)) * (double)(*(float *)(gen_frame + 0x1f4)))));
    (*(float *)(gen_frame + 0x270)) = fVar16;
    fVar17 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x230)) * (double)(*(float *)(gen_frame + 0x1d8)) + (double)(*(float *)(gen_frame + 0x22c)) * (double)(*(float *)(gen_frame + 0x1c8))) +
                     (double)(*(float *)(gen_frame + 0x234)) * (double)(*(float *)(gen_frame + 0x1e8))) + (double)(*(float *)(gen_frame + 0x238)) * (double)(*(float *)(gen_frame + 0x1f8)))));
    (*(float *)(gen_frame + 0x274)) = fVar17;
    fVar18 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x240)) * (double)(*(float *)(gen_frame + 0x1d0)) + (double)(*(float *)(gen_frame + 0x23c)) * (double)(*(float *)(gen_frame + 0x1c0))) +
                     (double)(*(float *)(gen_frame + 0x244)) * (double)(*(float *)(gen_frame + 0x1e0))) + (double)(*(float *)(gen_frame + 0x248)) * (double)(*(float *)(gen_frame + 0x1f0)))));
    (*(float *)(gen_frame + 0x27c)) = fVar18;
    fVar19 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x240)) * (double)(*(float *)(gen_frame + 0x1d4)) + (double)(*(float *)(gen_frame + 0x23c)) * (double)(*(float *)(gen_frame + 0x1c4))) +
                     (double)(*(float *)(gen_frame + 0x244)) * (double)(*(float *)(gen_frame + 0x1e4))) + (double)(*(float *)(gen_frame + 0x248)) * (double)(*(float *)(gen_frame + 0x1f4)))));
    (*(float *)(gen_frame + 0x280)) = fVar19;
    fVar20 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x240)) * (double)(*(float *)(gen_frame + 0x1d8)) + (double)(*(float *)(gen_frame + 0x23c)) * (double)(*(float *)(gen_frame + 0x1c8))) +
                     (double)(*(float *)(gen_frame + 0x244)) * (double)(*(float *)(gen_frame + 0x1e8))) + (double)(*(float *)(gen_frame + 0x248)) * (double)(*(float *)(gen_frame + 0x1f8)))));
    (*(float *)(gen_frame + 0x284)) = fVar20;
    fVar21 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x180)) * (double)fVar6 + (double)(*(float *)(gen_frame + 0x184)) * (double)fVar11) +
                     (double)(*(float *)(gen_frame + 0x188)) * (double)fVar15) + (double)fVar18 * (double)(*(float *)(gen_frame + 0x18c)))));
    (*(float *)(gen_frame + 0x20c)) = fVar21;
    fVar22 = ((float)GEN_TOF(((((double)fVar13 * (double)(*(float *)(gen_frame + 0x184)) + (double)(*(float *)(gen_frame + 0x180)) * (double)fVar7) +
                     (double)fVar16 * (double)(*(float *)(gen_frame + 0x188))) + (double)fVar19 * (double)(*(float *)(gen_frame + 0x18c)))));
    (*(float *)(gen_frame + 0x210)) = fVar22;
    fVar23 = ((float)GEN_TOF(((((double)fVar14 * (double)(*(float *)(gen_frame + 0x184)) + (double)(*(float *)(gen_frame + 0x180)) * (double)fVar9) +
                     (double)fVar17 * (double)(*(float *)(gen_frame + 0x188))) + (double)fVar20 * (double)(*(float *)(gen_frame + 0x18c)))));
    (*(float *)(gen_frame + 0x214)) = fVar23;
    fVar24 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x194)) * (double)fVar11 + (double)(*(float *)(gen_frame + 0x190)) * (double)fVar6) +
                     (double)(*(float *)(gen_frame + 0x198)) * (double)fVar15) + (double)(*(float *)(gen_frame + 0x19c)) * (double)fVar18)));
    (*(float *)(gen_frame + 0x21c)) = fVar24;
    fVar25 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x194)) * (double)fVar13 + (double)(*(float *)(gen_frame + 0x190)) * (double)fVar7) +
                     (double)(*(float *)(gen_frame + 0x198)) * (double)fVar16) + (double)(*(float *)(gen_frame + 0x19c)) * (double)fVar19)));
    (*(float *)(gen_frame + 0x220)) = fVar25;
    fVar26 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x194)) * (double)fVar14 + (double)(*(float *)(gen_frame + 0x190)) * (double)fVar9) +
                     (double)(*(float *)(gen_frame + 0x198)) * (double)fVar17) + (double)(*(float *)(gen_frame + 0x19c)) * (double)fVar20)));
    (*(float *)(gen_frame + 0x224)) = fVar26;
    fVar27 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar11 + (double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar6) +
                     (double)(*(float *)(gen_frame + 0x1a8)) * (double)fVar15) + (double)(*(float *)(gen_frame + 0x1ac)) * (double)fVar18)));
    (*(float *)(gen_frame + 0x22c)) = fVar27;
    fVar28 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar13 + (double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar7) +
                     (double)(*(float *)(gen_frame + 0x1a8)) * (double)fVar16) + (double)(*(float *)(gen_frame + 0x1ac)) * (double)fVar19)));
    (*(float *)(gen_frame + 0x230)) = fVar28;
    fVar29 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1a4)) * (double)fVar14 + (double)(*(float *)(gen_frame + 0x1a0)) * (double)fVar9) +
                     (double)(*(float *)(gen_frame + 0x1a8)) * (double)fVar17) + (double)(*(float *)(gen_frame + 0x1ac)) * (double)fVar20)));
    (*(float *)(gen_frame + 0x234)) = fVar29;
    fVar6 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1b0)) * (double)fVar6 + (double)(*(float *)(gen_frame + 0x1b4)) * (double)fVar11) +
                    (double)(*(float *)(gen_frame + 0x1b8)) * (double)fVar15) + (double)(*(float *)(gen_frame + 0x1bc)) * (double)fVar18)));
    pfVar3 = (float *)((int)this + 0xc4);
    *pfVar3 = fVar21;
    *(float *)((int)this + 200) = fVar22;
    *(float *)((int)this + 0xcc) = fVar23;
    *(float *)((int)this + 0xd0) = fVar24;
    *(float *)((int)this + 0xd4) = fVar25;
    *(float *)((int)this + 0xd8) = fVar26;
    *(float *)((int)this + 0xdc) = fVar27;
    *(float *)((int)this + 0xe0) = fVar28;
    *(float *)((int)this + 0xe4) = fVar29;
    *(float *)((int)this + 0xe8) = fVar6;
    *(float *)((int)this + 0xec) =
         ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1b4)) * (double)fVar13 + (double)(*(float *)(gen_frame + 0x1b0)) * (double)fVar7) +
                 (double)(*(float *)(gen_frame + 0x1b8)) * (double)fVar16) + (double)(*(float *)(gen_frame + 0x1bc)) * (double)fVar19)));
    *(float *)((int)this + 0xf0) =
         ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x1b4)) * (double)fVar14 + (double)(*(float *)(gen_frame + 0x1b0)) * (double)fVar9) +
                 (double)(*(float *)(gen_frame + 0x1b8)) * (double)fVar17) + (double)(*(float *)(gen_frame + 0x1bc)) * (double)fVar20)));
    (*(float *)(gen_frame + 0x134)) = *pfVar3;
    (*(undefined4 *)(gen_frame + 0x138)) = *(undefined4 *)((int)this + 200);
    (*(undefined4 *)(gen_frame + 0x13c)) = *(undefined4 *)((int)this + 0xcc);
    (*(undefined4 *)(gen_frame + 0x144)) = *(undefined4 *)((int)this + 0xd0);
    (*(undefined4 *)(gen_frame + 0x140)) = 0;
    (*(undefined4 *)(gen_frame + 0x148)) = *(undefined4 *)((int)this + 0xd4);
    (*(undefined4 *)(gen_frame + 0x150)) = 0;
    (*(undefined4 *)(gen_frame + 0x160)) = 0;
    (*(undefined4 *)(gen_frame + 0x14c)) = *(undefined4 *)((int)this + 0xd8);
    (*(float *)(gen_frame + 0x164)) = fVar6;
    (*(undefined4 *)(gen_frame + 0x154)) = *(undefined4 *)((int)this + 0xdc);
    (*(undefined4 *)(gen_frame + 0x168)) = *(undefined4 *)((int)this + 0xec);
    (*(undefined4 *)(gen_frame + 0x158)) = *(undefined4 *)((int)this + 0xe0);
    (*(undefined4 *)(gen_frame + 0x16c)) = *(undefined4 *)((int)this + 0xf0);
    (*(undefined4 *)(gen_frame + 0x15c)) = *(undefined4 *)((int)this + 0xe4);
    (*(undefined4 *)(gen_frame + 0x170)) = REFG(float, 0x1087f04);
    F_00c98ca0(&(*(float *)(gen_frame + 0x134)));
    *(float *)((int)this + 0xf4) = (*(float *)(gen_frame + 0x134));
    *(undefined4 *)((int)this + 0xf8) = (*(undefined4 *)(gen_frame + 0x138));
    *(undefined4 *)((int)this + 0xfc) = (*(undefined4 *)(gen_frame + 0x13c));
    *(undefined4 *)((int)this + 0x100) = (*(undefined4 *)(gen_frame + 0x144));
    *(undefined4 *)((int)this + 0x104) = (*(undefined4 *)(gen_frame + 0x148));
    *(undefined4 *)((int)this + 0x108) = (*(undefined4 *)(gen_frame + 0x14c));
    *(undefined4 *)((int)this + 0x10c) = (*(undefined4 *)(gen_frame + 0x154));
    *(undefined4 *)((int)this + 0x110) = (*(undefined4 *)(gen_frame + 0x158));
    *(undefined4 *)((int)this + 0x114) = (*(undefined4 *)(gen_frame + 0x15c));
    *(float *)((int)this + 0x118) = (*(float *)(gen_frame + 0x164));
    *(undefined4 *)((int)this + 0x11c) = (*(undefined4 *)(gen_frame + 0x168));
    *(undefined4 *)((int)this + 0x120) = (*(undefined4 *)(gen_frame + 0x16c));
    piVar1 = *(int * PTR32 *)((int)this + 0x80);
    if (piVar1 == (int *)0x0) {
      *(undefined4 *)((int)this + 0x134) = 0;
      *(undefined4 *)((int)this + 0x138) = 0;
      *(undefined4 *)((int)this + 0x13c) = 0;
      *(undefined4 *)((int)this + 0x140) = 0;
      *(undefined4 *)((int)this + 0x144) = 0;
      *(undefined4 *)((int)this + 0x148) = 0;
    }
    else {
      pfVar4 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1)));
      (*(float *)(gen_frame + 0x200)) = *pfVar4;
      (*(float *)(gen_frame + 0x204)) = pfVar4[1];
      (*(float *)(gen_frame + 0x208)) = pfVar4[2];
      puVar5 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x80) + 8))))(*(int * PTR32 *)((int)this + 0x80))));
      (*(undefined4 *)(gen_frame + 0x174)) = *puVar5;
      (*(undefined4 *)(gen_frame + 0x178)) = puVar5[1];
      (*(undefined4 *)(gen_frame + 0x17c)) = puVar5[2];
      F_00c8fb00(&(*(float *)(gen_frame + 0xf4)),pfVar3);
      (*(undefined4 *)(gen_frame + 0xdc)) = (*(undefined4 *)(gen_frame + 0x174));
      (*(undefined4 *)(gen_frame + 0xe0)) = (*(undefined4 *)(gen_frame + 0x178));
      (*(undefined4 *)(gen_frame + 0xe4)) = (*(undefined4 *)(gen_frame + 0x17c));
      (*(float *)(gen_frame + 0xe8)) = (*(float *)(gen_frame + 0x200));
      (*(float *)(gen_frame + 0xec)) = (*(float *)(gen_frame + 0x204));
      (*(float *)(gen_frame + 0xf0)) = (*(float *)(gen_frame + 0x208));
      F_00c9bd20((int)this + 0x134,&(*(float *)(gen_frame + 0xf4)),&(*(undefined4 *)(gen_frame + 0xdc)));
    }
    dVar8 = REFG(double, 0x1088108);
    *(float *)((int)this + 0x124) =
         ((float)GEN_TOF((((double)*(float *)((int)this + 0x140) + (double)*(float *)((int)this + 0x134)) *
                REFG(double, 0x1088108))));
    *(float *)((int)this + 0x128) =
         ((float)GEN_TOF((((double)*(float *)((int)this + 0x144) + (double)*(float *)((int)this + 0x138)) *
                dVar8)));
    *(float *)((int)this + 300) =
         ((float)GEN_TOF((((double)*(float *)((int)this + 0x148) + (double)*(float *)((int)this + 0x13c)) *
                dVar8)));
    dVar8 = ((double)GEN_TOD((*(float *)((int)this + 0x144) - *(float *)((int)this + 0x128))));
    dVar12 = ((double)GEN_TOD((*(float *)((int)this + 0x140) - *(float *)((int)this + 0x124))));
    dVar10 = ((double)GEN_TOD((*(float *)((int)this + 0x148) - *(float *)((int)this + 300))));
    *(float *)((int)this + 0x130) =
         SQRT(((float)GEN_TOF(((dVar12 * dVar12 + dVar8 * dVar8) + dVar10 * dVar10))));
    F_00ca11f0(*(undefined * PTR32 *)((int)this + 0x34),this);
    *(undefined1 *)((int)this + 0x78) = 0;
    return 1;
  }
  return 0;
}

/* ref: FUN_00c92f30 */
unsigned int F_00c92f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc92f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x80);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
    F_00ca2140(*(undefined4 *)((int)this + 0x80),&REFG(undefined, 0x1128e3b),
                 *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x34) + 4))));
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  return 0;
}

/* ref: FUN_00c92f70 */
uint F_00c92f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc92f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  code * pcVar3;
  uint uVar4;
  
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1);
  if ((char)uVar4 != '\0') {
    uVar4 = F_00c97010(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + -0x34) + 4))),0,"load resource failed\n");
    return uVar4;
  }
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(uVar4 + 8);
  piVar1 = (int *)((int)this + -0x68);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(uVar4 + 0xc);
  uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1,uVar4,piVar1,param_1);
  *(uint *)((int)this + 0x18) = uVar4;
  piVar2 = ((int *)GEN_TOP((*(int *)((int)this + -0x34) + 0x20)));
  *piVar2 = *piVar2 + -1;
  *(int *)((int)this + -0x38) = *(int *)((int)this + -0x38) + -1;
  pcVar3 = *(gen_code32 *)(*piVar1 + 0x48);
  *(undefined1 *)((int)this + 0x10) = 1;
  uVar4 = (*pcVar3)(piVar1);
  *(undefined1 *)((int)this + 0x12) = 1;
  return uVar4;
}

/* ref: FUN_00c92ff0 */
uint F_00c92ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc92ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x80) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x80) + 0x28))))
                      (*(int * PTR32 *)((int)this + 0x80),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00c93010 */
uint F_00c93010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc93010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x109cd2c));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x109cd20));
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return (uint)this;
}

/* ref: FUN_00c93040 */
unsigned int F_00c93040(unsigned int gen_a0)
{
  GEN_ENTER(0xc93040u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  return 0;
}

/* ref: FUN_00c93050 */
uint F_00c93050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc93050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  double dVar8;
  uint uVar9;
  int iVar10;
  undefined * this_00;
  undefined * pvVar11;
  uint uVar12;
  ushort * puVar13;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1128e80));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x1128e78));
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  pvVar11 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + 0x34))) + 4)));
  if ((*(int *)((int)this + 0x24) != 0) && (*(int *)((int)this + 0x28) != 0)) {
    fVar1 = *(float *)((int)this + 0x18);
    fVar2 = *(float *)((int)this + 0xc);
    fVar3 = *(float *)((int)this + 0x10);
    fVar4 = *(float *)((int)this + 0x1c);
    fVar5 = *(float *)((int)this + 0x14);
    fVar6 = *(float *)((int)this + 0x20);
    uVar9 = F_00c96f50(pvVar11);
    uVar12 = 0;
    *(uint *)((int)this + 0x2c) = uVar9;
    dVar8 = REFG(double, 0x109cab0);
    uVar7 = REFG(float, 0x1087f04);
    puVar13 = (ushort *)(param_1 + 0x30);
    if (*(int *)((int)this + 0x24) != 0) {
      iVar10 = 0;
      do {
        *((float *)GEN_TOP((iVar10 + *(int *)((int)this + 0x2c)))) =
             ((float)GEN_TOF((((double)(fVar1 - fVar2) * (double)*puVar13) / dVar8 +
                    (double)*(float *)((int)this + 0xc))));
        *((float *)GEN_TOP((iVar10 + 4 + *(int *)((int)this + 0x2c)))) =
             ((float)GEN_TOF((((double)(fVar4 - fVar3) * (double)puVar13[1]) / dVar8 +
                    (double)*(float *)((int)this + 0x10))));
        *((float *)GEN_TOP((iVar10 + 8 + *(int *)((int)this + 0x2c)))) =
             ((float)GEN_TOF((((double)(fVar6 - fVar5) * (double)puVar13[2]) / dVar8 +
                    (double)*(float *)((int)this + 0x14))));
        *((undefined4 *)GEN_TOP((iVar10 + 0xc + *(int *)((int)this + 0x2c)))) = uVar7;
        uVar12 = uVar12 + 1;
        puVar13 = puVar13 + 3;
        iVar10 = iVar10 + 0x10;
      } while (uVar12 < *(uint *)((int)this + 0x24));
    }
    iVar10 = *(int *)((int)this + 0x28);
    uVar9 = F_00c96f50(pvVar11);
    *(uint *)((int)this + 0x30) = uVar9;
    F_00c46aa0(uVar9,puVar13,iVar10 * 6);
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  if ((0 < *(int *)(param_1 + 8)) && (0 < *(int *)(param_1 + 0xc))) {
    this_00 = (undefined *)F_00ca2100(0x3c,&REFG(undefined, 0x1128e02),pvVar11);
    if (this_00 == (undefined *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = F_00c93050(this_00,*(int *)(param_1 + 8) + param_1);
    }
    *(uint *)((int)this + 0x34) = uVar9;
    pvVar11 = (undefined *)F_00ca2100(0x3c,&REFG(undefined, 0x1128e03),pvVar11);
    if (pvVar11 != (undefined *)0x0) {
      uVar9 = F_00c93050(pvVar11,*(int *)(param_1 + 0xc) + param_1);
      *(uint *)((int)this + 0x38) = uVar9;
      return (uint)this;
    }
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00c932c0 */
unsigned int F_00c932c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc932c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1128e80));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x1128e78));
  this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + 0x34))) + 4)));
  F_00c96f60(this_00);
  F_00c96f60(this_00);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x34);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
    F_00ca2140(*(undefined4 *)((int)this + 0x34),&REFG(undefined, 0x1128e04),this_00);
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x38);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
    F_00ca2140(*(undefined4 *)((int)this + 0x38),&REFG(undefined, 0x1128e05),this_00);
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  return 0;
}

/* ref: FUN_00c93350 */
uint F_00c93350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc93350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  undefined * pvVar2;
  uint uVar3;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1128eb4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x1128eac));
  *(undefined1 *)((int)this + 0x18) = 0;
  *(int *)((int)this + 8) = param_2;
  *(int *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x34) + 4)));
  if ((0 < *(int *)(param_1 + 8)) && (0 < *(int *)(param_1 + 0xc))) {
    pvVar2 = (undefined *)F_00ca2100(0x1c,&REFG(undefined, 0x1128e06),uVar1);
    if (pvVar2 == (undefined *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = F_00c93350(pvVar2,*((int *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) + param_1,param_2);
    }
    *(uint *)((int)this + 0x10) = uVar3;
    pvVar2 = (undefined *)F_00ca2100(0x1c,&REFG(undefined, 0x1128e07),uVar1);
    if (pvVar2 != (undefined *)0x0) {
      uVar3 = F_00c93350(pvVar2,*((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))) + param_1,param_2);
      *(uint *)((int)this + 0x14) = uVar3;
      return (uint)this;
    }
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00c93410 */
unsigned int F_00c93410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc93410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1128eb4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x1128eac));
  *(undefined1 *)((int)this + 0x18) = 1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  return 0;
}

/* ref: FUN_00c93450 */
unsigned int F_00c93450(unsigned int gen_a0)
{
  GEN_ENTER(0xc93450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1128eb4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x1128eac));
  if ((*(char *)((int)this + 0x18) == '\0') && (*(int *)((int)this + 8) != 0)) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x10);
    uVar2 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + 0x34))) + 4)));
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      F_00ca2140(*(undefined4 *)((int)this + 0x10),&REFG(undefined, 0x1128e08),uVar2);
      *(undefined4 *)((int)this + 0x10) = 0;
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x14);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      F_00ca2140(*(undefined4 *)((int)this + 0x14),&REFG(undefined, 0x1128e09),uVar2);
      *(undefined4 *)((int)this + 0x14) = 0;
    }
    *(undefined * PTR32 * PTR32 *)((int)this + 4) =
         (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
    return 0;
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  return 0;
}

/* ref: FUN_00c934f0 */
unsigned int F_00c934f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc934f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
    *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1128eb4));
    param_1[1] = (*(undefined * PTR32 (*)[2])REFP(0x1128eac));
    *(undefined1 *)(param_1 + 6) = 1;
    param_1[2] = 0;
    param_1[3] = *(undefined4 *)((int)this + 8);
    param_1[4] = *(undefined4 *)((int)this + 0xc);
    param_1[5] = *(undefined4 *)((int)this + 0x10);
  }
  return 0;
}

/* ref: FUN_00c93530 */
uint F_00c93530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc93530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc10];
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0xc08)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc0c);
  iVar3 = 0xff;
  puVar1 = ((undefined4 *)(gen_frame + 0x10));
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  uVar2 = F_00c90410(this,param_1,param_2,param_3,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0xc08)) ^ (uint)(uint)(gen_frame + 0xc0c));
  return uVar2;
}

/* ref: FUN_00c935a0 */
unsigned int F_00c935a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc935a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x134);
  param_2[1] = *(undefined4 *)(in_ecx + 0x138);
  param_2[2] = *(undefined4 *)(in_ecx + 0x13c);
  param_2[3] = *(undefined4 *)(in_ecx + 0x140);
  param_2[4] = *(undefined4 *)(in_ecx + 0x144);
  param_2[5] = *(undefined4 *)(in_ecx + 0x148);
  return 0;
}

/* ref: FUN_00c935e0 */
byte F_00c935e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc935e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float * pfVar5;
  undefined4 uVar6;
  byte bVar7;
  float * pfVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar9 = (*(uint *)&gen_args[3]);
  if (((*(int * PTR32 *)&gen_args[0])[0x11] & (*(uint *)&gen_args[2])) != 0) {
    fVar1 = REFG(float, 0x109cc48);
    if ((*(byte *)(*(uint *)&gen_args[3]) & 1) != 0) {
      fVar1 = *((float *)GEN_TOP((*(int *)((*(uint *)&gen_args[3]) + 4) + 0xc)));
    }
    (*(int *)(gen_frame + 0x30)) = (*(int * PTR32 *)&gen_args[0])[0x49];
    (*(int *)(gen_frame + 0x34)) = (*(int * PTR32 *)&gen_args[0])[0x4a];
    (*(int *)(gen_frame + 0x38)) = (*(int * PTR32 *)&gen_args[0])[0x4b];
    (*(float *)(gen_frame + 0x3c)) = gen_bits2f((*(int * PTR32 *)&gen_args[0])[0x4c]) + fVar1;
    bVar7 = F_00c9ad50(*(undefined4 *)((*(uint *)&gen_args[3]) + 4),*(undefined4 *)((*(uint *)&gen_args[3]) + 8),&(*(int *)(gen_frame + 0x30)),
                         ((undefined1 *)(gen_frame + 0xc)));
    if ((bVar7 != 0) && ((*(int * PTR32 *)&gen_args[0])[0x20] != 0)) {
      (*(undefined4 *)(gen_frame + 0x9c)) = 0;
      (*(undefined4 *)(gen_frame + 0xac)) = 0;
      (*(undefined4 *)(gen_frame + 0xbc)) = 0;
      (*(undefined4 *)(gen_frame + 0xcc)) = 0;
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x3c))))((*(int * PTR32 *)&gen_args[0]),&(*(float *)(gen_frame + 0x90)));
      F_00c8fb00(&(*(float *)(gen_frame + 0x50)),(*(int * PTR32 *)&gen_args[0]) + 0x3d);
      pfVar5 = *(float * PTR32 *)(uVar9 + 4);
      fVar2 = pfVar5[1];
      fVar3 = *pfVar5;
      fVar4 = pfVar5[2];
      (*(float *)(gen_frame + 0x40)) = ((float)GEN_TOF(((((double)fVar2 * (double)(*(float *)(gen_frame + 0x60)) + (double)fVar3 * (double)(*(float *)(gen_frame + 0x50))) +
                         (double)fVar4 * (double)(*(float *)(gen_frame + 0x70))) + (double)(*(float *)(gen_frame + 0x80)))));
      (*(float *)(gen_frame + 0x44)) = ((float)GEN_TOF(((((double)fVar3 * (double)(*(float *)(gen_frame + 0x54)) + (double)fVar2 * (double)(*(float *)(gen_frame + 0x64))) +
                         (double)fVar4 * (double)(*(float *)(gen_frame + 0x74))) + (double)(*(float *)(gen_frame + 0x84)))));
      (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF(((((double)fVar3 * (double)(*(float *)(gen_frame + 0x58)) + (double)fVar2 * (double)(*(float *)(gen_frame + 0x68))) +
                         (double)fVar4 * (double)(*(float *)(gen_frame + 0x78))) + (double)(*(float *)(gen_frame + 0x88)))));
      (*(float *)(gen_frame + 0x4c)) = gen_bits2f((*(int * PTR32 *)&gen_args[0])[0x1f]) * fVar1;
      pfVar8 = (float *)F_00c8eb80();
      pfVar5 = *(float * PTR32 *)(uVar9 + 8);
      (*(float *)(gen_frame + 0xd0)) = 0.0;
      (*(float *)(gen_frame + 0xd4)) = 0.0;
      (*(float *)(gen_frame + 0xd8)) = 0.0;
      (*(float *)(gen_frame + 0xd0)) = ((float)GEN_TOF(((((double)*pfVar5 * (double)(*(float *)(gen_frame + 0x50)) + (double)(*(float *)(gen_frame + 0x60)) * (double)pfVar5[1]
                          ) + (double)(*(float *)(gen_frame + 0x70)) * (double)pfVar5[2]) + (double)*pfVar8)));
      (*(float *)(gen_frame + 0xd4)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x64)) * (double)pfVar5[1] + (double)(*(float *)(gen_frame + 0x54)) * (double)*pfVar5
                          ) + (double)(*(float *)(gen_frame + 0x74)) * (double)pfVar5[2]) + (double)pfVar8[1])));
      (*(float *)(gen_frame + 0xd8)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x68)) * (double)pfVar5[1] + (double)(*(float *)(gen_frame + 0x58)) * (double)*pfVar5
                          ) + (double)(*(float *)(gen_frame + 0x78)) * (double)pfVar5[2]) + (double)pfVar8[2])));
      F_00553ac0(&(*(float *)(gen_frame + 0xd0)));
      (*(uint *)&gen_args[3]) = REFG(float, 0x1090998);
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)uVar9;
      (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0xd0));
      (*(float * PTR32 *)(gen_frame + 0x14)) = &(*(float *)(gen_frame + 0x40));
      uVar6 = *(undefined4 *)(uVar9 + 0x14);
      (*(uint * PTR32 *)(gen_frame + 0x1c)) = &(*(uint *)&gen_args[3]);
      (*(int *)(gen_frame + 0x28)) = (*(int * PTR32 *)&gen_args[0])[0x12];
      (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(uVar9 + 0x10);
      (*(int *)(gen_frame + 0x2c)) = (*(int * PTR32 *)&gen_args[0])[0x13];
      (*(float * PTR32 *)&gen_args[1])[0x10] = REFG(float, 0x1128ee0);
      (*(undefined4 *)(gen_frame + 0x24)) = uVar6;
      uVar9 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[0x20])) + 0x10))))
                        (((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[0x20])),&(*(float *)(gen_frame + 0x90)),(*(float * PTR32 *)&gen_args[1]),&(*(undefined4 *)(gen_frame + 0x10)));
      if ((char)uVar9 != '\0') {
        fVar1 = (*(float * PTR32 *)&gen_args[1])[5];
        (*(float *)(gen_frame + 0x10c)) = (*(float *)(gen_frame + 0xb0)) * fVar1;
        (*(float *)(gen_frame + 0x110)) = (*(float *)(gen_frame + 0xb4)) * fVar1;
        (*(float *)(gen_frame + 0x114)) = (*(float *)(gen_frame + 0xb8)) * fVar1;
        fVar2 = (*(float * PTR32 *)&gen_args[1])[4];
        (*(float *)(gen_frame + 0xec)) = (*(float *)(gen_frame + 0xa0)) * fVar2;
        (*(float *)(gen_frame + 0xf0)) = (*(float *)(gen_frame + 0xa4)) * fVar2;
        (*(float *)(gen_frame + 0xf4)) = (*(float *)(gen_frame + 0xa8)) * fVar2;
        (*(float *)(gen_frame + 0xdc)) = (*(float *)(gen_frame + 0x90)) * (*(float * PTR32 *)&gen_args[1])[3];
        (*(float *)(gen_frame + 0xe0)) = (*(float *)(gen_frame + 0x94)) * (*(float * PTR32 *)&gen_args[1])[3];
        (*(float *)(gen_frame + 0xe4)) = (*(float *)(gen_frame + 0x98)) * (*(float * PTR32 *)&gen_args[1])[3];
        fVar3 = (*(float *)(gen_frame + 0x90)) * (*(float * PTR32 *)&gen_args[1])[3] + (*(float *)(gen_frame + 0xa0)) * fVar2;
        (*(float *)(gen_frame + 0xfc)) = fVar3;
        fVar4 = (*(float *)(gen_frame + 0x94)) * (*(float * PTR32 *)&gen_args[1])[3] + (*(float *)(gen_frame + 0xa4)) * fVar2;
        (*(float *)(gen_frame + 0x100)) = fVar4;
        fVar2 = (*(float *)(gen_frame + 0x98)) * (*(float * PTR32 *)&gen_args[1])[3] + (*(float *)(gen_frame + 0xa8)) * fVar2;
        (*(float *)(gen_frame + 0x104)) = fVar2;
        fVar3 = fVar3 + (*(float *)(gen_frame + 0xb0)) * fVar1;
        (*(float *)(gen_frame + 0xec)) = fVar3;
        fVar4 = fVar4 + (*(float *)(gen_frame + 0xb4)) * fVar1;
        (*(float *)(gen_frame + 0xf0)) = fVar4;
        fVar2 = fVar2 + (*(float *)(gen_frame + 0xb8)) * fVar1;
        (*(float *)(gen_frame + 0xf4)) = fVar2;
        fVar3 = (*(float *)(gen_frame + 0xc0)) + fVar3;
        (*(float *)(gen_frame + 0x10c)) = fVar3;
        fVar4 = fVar4 + (*(float *)(gen_frame + 0xc4));
        (*(float *)(gen_frame + 0x110)) = fVar4;
        (*(float * PTR32 *)&gen_args[1])[3] = fVar3;
        (*(float * PTR32 *)&gen_args[1])[5] = fVar2 + (*(float *)(gen_frame + 0xc8));
        (*(float * PTR32 *)&gen_args[1])[4] = fVar4;
        (*(float *)(gen_frame + 0xdc)) = (*(float *)(gen_frame + 0xb0)) * (*(float * PTR32 *)&gen_args[1])[8];
        (*(float *)(gen_frame + 0xe0)) = (*(float *)(gen_frame + 0xb4)) * (*(float * PTR32 *)&gen_args[1])[8];
        (*(float *)(gen_frame + 0xe4)) = (*(float *)(gen_frame + 0xb8)) * (*(float * PTR32 *)&gen_args[1])[8];
        (*(float *)(gen_frame + 0xfc)) = (*(float *)(gen_frame + 0xa0)) * (*(float * PTR32 *)&gen_args[1])[7];
        (*(float *)(gen_frame + 0x100)) = (*(float *)(gen_frame + 0xa4)) * (*(float * PTR32 *)&gen_args[1])[7];
        (*(float *)(gen_frame + 0x104)) = (*(float *)(gen_frame + 0xa8)) * (*(float * PTR32 *)&gen_args[1])[7];
        (*(float *)(gen_frame + 0x10c)) = (*(float * PTR32 *)&gen_args[1])[6] * (*(float *)(gen_frame + 0x90));
        (*(float *)(gen_frame + 0x110)) = (*(float *)(gen_frame + 0x94)) * (*(float * PTR32 *)&gen_args[1])[6];
        (*(float *)(gen_frame + 0x114)) = (*(float *)(gen_frame + 0x98)) * (*(float * PTR32 *)&gen_args[1])[6];
        fVar1 = (*(float * PTR32 *)&gen_args[1])[6] * (*(float *)(gen_frame + 0x90)) + (*(float *)(gen_frame + 0xa0)) * (*(float * PTR32 *)&gen_args[1])[7];
        (*(float *)(gen_frame + 0xec)) = fVar1;
        fVar2 = (*(float *)(gen_frame + 0x94)) * (*(float * PTR32 *)&gen_args[1])[6] + (*(float *)(gen_frame + 0xa4)) * (*(float * PTR32 *)&gen_args[1])[7];
        (*(float *)(gen_frame + 0xf0)) = fVar2;
        fVar3 = (*(float *)(gen_frame + 0x98)) * (*(float * PTR32 *)&gen_args[1])[6] + (*(float *)(gen_frame + 0xa8)) * (*(float * PTR32 *)&gen_args[1])[7];
        (*(float *)(gen_frame + 0xf4)) = fVar3;
        fVar1 = fVar1 + (*(float *)(gen_frame + 0xb0)) * (*(float * PTR32 *)&gen_args[1])[8];
        (*(float *)(gen_frame + 0x10c)) = fVar1;
        fVar2 = fVar2 + (*(float *)(gen_frame + 0xb4)) * (*(float * PTR32 *)&gen_args[1])[8];
        (*(float *)(gen_frame + 0x110)) = fVar2;
        fVar3 = fVar3 + (*(float *)(gen_frame + 0xb8)) * (*(float * PTR32 *)&gen_args[1])[8];
        (*(float *)(gen_frame + 0x114)) = fVar3;
        fVar1 = (*(float *)(gen_frame + 0xc0)) + fVar1;
        (*(float *)(gen_frame + 0xfc)) = fVar1;
        fVar2 = fVar2 + (*(float *)(gen_frame + 0xc4));
        (*(float *)(gen_frame + 0x100)) = fVar2;
        (*(float * PTR32 *)&gen_args[1])[6] = fVar1;
        (*(float * PTR32 *)&gen_args[1])[8] = fVar3 + (*(float *)(gen_frame + 0xc8));
        (*(float * PTR32 *)&gen_args[1])[7] = fVar2;
        (*(float *)(gen_frame + 0xdc)) = (*(float *)(gen_frame + 0xb0)) * (*(float * PTR32 *)&gen_args[1])[0xb];
        (*(float *)(gen_frame + 0xe0)) = (*(float *)(gen_frame + 0xb4)) * (*(float * PTR32 *)&gen_args[1])[0xb];
        (*(float *)(gen_frame + 0xe4)) = (*(float *)(gen_frame + 0xb8)) * (*(float * PTR32 *)&gen_args[1])[0xb];
        (*(float *)(gen_frame + 0xfc)) = (*(float *)(gen_frame + 0xa0)) * (*(float * PTR32 *)&gen_args[1])[10];
        (*(float *)(gen_frame + 0x100)) = (*(float *)(gen_frame + 0xa4)) * (*(float * PTR32 *)&gen_args[1])[10];
        (*(float *)(gen_frame + 0x104)) = (*(float *)(gen_frame + 0xa8)) * (*(float * PTR32 *)&gen_args[1])[10];
        (*(float *)(gen_frame + 0x10c)) = (*(float * PTR32 *)&gen_args[1])[9] * (*(float *)(gen_frame + 0x90));
        (*(float *)(gen_frame + 0x110)) = (*(float *)(gen_frame + 0x94)) * (*(float * PTR32 *)&gen_args[1])[9];
        (*(float *)(gen_frame + 0x114)) = (*(float *)(gen_frame + 0x98)) * (*(float * PTR32 *)&gen_args[1])[9];
        fVar1 = (*(float * PTR32 *)&gen_args[1])[9] * (*(float *)(gen_frame + 0x90)) + (*(float *)(gen_frame + 0xa0)) * (*(float * PTR32 *)&gen_args[1])[10];
        (*(float *)(gen_frame + 0xec)) = fVar1;
        fVar2 = (*(float *)(gen_frame + 0x94)) * (*(float * PTR32 *)&gen_args[1])[9] + (*(float *)(gen_frame + 0xa4)) * (*(float * PTR32 *)&gen_args[1])[10];
        (*(float *)(gen_frame + 0xf0)) = fVar2;
        fVar3 = (*(float *)(gen_frame + 0x98)) * (*(float * PTR32 *)&gen_args[1])[9] + (*(float *)(gen_frame + 0xa8)) * (*(float * PTR32 *)&gen_args[1])[10];
        (*(float *)(gen_frame + 0xf4)) = fVar3;
        fVar1 = fVar1 + (*(float *)(gen_frame + 0xb0)) * (*(float * PTR32 *)&gen_args[1])[0xb];
        (*(float *)(gen_frame + 0x10c)) = fVar1;
        fVar2 = fVar2 + (*(float *)(gen_frame + 0xb4)) * (*(float * PTR32 *)&gen_args[1])[0xb];
        (*(float *)(gen_frame + 0x110)) = fVar2;
        fVar3 = fVar3 + (*(float *)(gen_frame + 0xb8)) * (*(float * PTR32 *)&gen_args[1])[0xb];
        (*(float *)(gen_frame + 0x114)) = fVar3;
        fVar1 = (*(float *)(gen_frame + 0xc0)) + fVar1;
        (*(float *)(gen_frame + 0xfc)) = fVar1;
        fVar2 = fVar2 + (*(float *)(gen_frame + 0xc4));
        (*(float *)(gen_frame + 0x100)) = fVar2;
        (*(float * PTR32 *)&gen_args[1])[9] = fVar1;
        (*(float * PTR32 *)&gen_args[1])[10] = fVar2;
        (*(float * PTR32 *)&gen_args[1])[0xb] = fVar3 + (*(float *)(gen_frame + 0xc8));
        fVar1 = (*(float * PTR32 *)&gen_args[1])[2];
        fVar2 = (*(float * PTR32 *)&gen_args[1])[1];
        (*(float *)(gen_frame + 0x104)) = (*(float *)(gen_frame + 0xa8)) * fVar2;
        fVar3 = *(*(float * PTR32 *)&gen_args[1]);
        (*(float *)(gen_frame + 0x10c)) = fVar3 * (*(float *)(gen_frame + 0x90));
        (*(float * PTR32 *)&gen_args[1])[2] = (((*(float *)(gen_frame + 0x98)) * fVar3 + (*(float *)(gen_frame + 0xa8)) * fVar2) + (*(float *)(gen_frame + 0xb8)) * fVar1) + (*(float *)(gen_frame + 0xc8));
        *(*(float * PTR32 *)&gen_args[1]) = (*(float *)(gen_frame + 0xc0)) + ((fVar3 * (*(float *)(gen_frame + 0x90)) + (*(float *)(gen_frame + 0xa0)) * fVar2) + (*(float *)(gen_frame + 0xb0)) * fVar1);
        (*(float * PTR32 *)&gen_args[1])[1] = (((*(float *)(gen_frame + 0x94)) * fVar3 + (*(float *)(gen_frame + 0xa4)) * fVar2) + (*(float *)(gen_frame + 0xb4)) * fVar1) + (*(float *)(gen_frame + 0xc4));
        (*(float * PTR32 *)&gen_args[1])[0x10] = gen_bits2f((*(int * PTR32 *)&gen_args[0])[0x28]) * (*(float * PTR32 *)&gen_args[1])[0x10];
        (*(float * PTR32 *)&gen_args[1])[0x11] = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)&gen_args[0]))));
        uVar9 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x18))))((*(int * PTR32 *)&gen_args[0]));
        if (uVar9 != 0) {
          uVar9 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x18))))((*(int * PTR32 *)&gen_args[0]));
          uVar10 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x14))))((*(int * PTR32 *)&gen_args[0]));
          uVar11 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x18))))((*(int * PTR32 *)&gen_args[0]));
          (*(float * PTR32 *)&gen_args[1])[0xf] = gen_bits2f(~uVar11 & (uint)gen_fl2bits((*(float * PTR32 *)&gen_args[1])[0xf]) | uVar9 & uVar10);
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00c94230 */
uint F_00c94230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc94230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  char * pcVar2;
  undefined * this_00;
  uint uVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (param_3 == (int *)0x0) {
      pcVar2 = "unknown";
    }
    else {
      pcVar2 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*param_3 + 4))(param_3)));
    }
    F_00c96fb0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x34) + 4))),
                 "warning: pcb file ver==0. furuiyo %s\n",pcVar2);
    this_00 = (undefined *)F_00ca2100(0x1c,&REFG(undefined, 0x1128e0b),
                                   *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x34) + 4))));
    if (this_00 != (undefined *)0x0) {
      uVar3 = F_00c93350(this_00,param_1 + 0x10,this);
      return uVar3;
    }
  }
  else if (*(int *)(param_1 + 4) == 1) {
    puVar1 = (undefined4 *)
             F_00ca2100(0x10,&REFG(undefined, 0x1128e3a),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x34) + 4))));
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
      puVar1[3] = param_1 + 0x10;
      puVar1[2] = this;
      *puVar1 = (*(undefined * PTR32 (*)[11])REFP(0x109cd2c));
      puVar1[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cd20));
      return (uint)puVar1;
    }
  }
  return 0;
}

/* ref: FUN_00c942f0 */
uint F_00c942f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc942f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int iVar2;
  uint uVar3;
  byte * pbVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  
  iVar2 = param_4;
  iVar1 = *(int *)((int)this + 0xc);
  fVar6 = ((float)GEN_TOF((((double)GEN_TOD((*(float *)(iVar1 + 0x24) - *(float *)(iVar1 + 0x18)))) * REFG(double, 0x1088108))));
  fVar8 = ((float)GEN_TOF((((double)GEN_TOD((*(float *)(iVar1 + 0x1c) - *(float *)(iVar1 + 0x10)))) * REFG(double, 0x1088108))));
  fVar10 = ((float)GEN_TOF((((double)GEN_TOD((*(float *)(iVar1 + 0x20) - *(float *)(iVar1 + 0x14)))) * REFG(double, 0x1088108))));
  (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF((((double)*(float *)(param_2 + 0x30) + (double)*(float *)(iVar1 + 0x10)) +
                    (double)fVar8)));
  dVar5 = (double)fVar10;
  dVar9 = (double)fVar8;
  dVar7 = (double)fVar6;
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF((((double)*(float *)(param_2 + 0x34) + (double)*(float *)(iVar1 + 0x14)) +
                    (double)fVar10)));
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF((((double)*(float *)(param_2 + 0x38) + (double)*(float *)(iVar1 + 0x18)) +
                    (double)fVar6)));
  (*(float *)(gen_frame + 0x18)) = SQRT(((float)GEN_TOF(((dVar5 * dVar5 + dVar9 * dVar9) + dVar7 * dVar7))));
  uVar3 = ((code *)*(gen_code32 *)(*param_3 + 0x1c))(param_3,param_1,&(*(float *)(gen_frame + 0xc)));
  if ((char)uVar3 == '\0') {
    if (*((short *)GEN_TOP((*(int *)((int)this + 0xc) + 0x2a))) != 0) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this,param_2,param_4);
      iVar1 = *(int *)((int)this + 0xc);
      pbVar4 = ((byte *)GEN_TOP((iVar1 + (*(ushort *)(iVar1 + 0x28) + 8 + (uint)*(ushort *)(iVar1 + 0x2c) * 2
                                ) * 6)));
      param_4 = 0;
      if (*((short *)GEN_TOP((*(int *)((int)this + 0xc) + 0x2a))) != 0) {
        do {
          ((code *)*(gen_code32 *)(*param_3 + 8))
                    (param_3,param_1,iVar2 + (uint)*pbVar4 * 0xc,iVar2 + (uint)pbVar4[1] * 0xc,
                     iVar2 + (uint)pbVar4[2] * 0xc,(uint)*(ushort *)(pbVar4 + 4));
          param_4 = param_4 + 1;
          pbVar4 = pbVar4 + 6;
        } while (param_4 < *((ushort *)GEN_TOP((*(int *)((int)this + 0xc) + 0x2a))));
      }
    }
    uVar3 = *(uint *)((int)this + 0xc);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 (*)[11])REFP(0x109cd2c));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 (*)[2])REFP(0x109cd20));
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    if (0 < *(int *)(uVar3 + 8)) {
      (*(int *)(gen_frame + 0x28)) = *(int *)(uVar3 + 8) + uVar3;
      (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)((int)this + 8);
      uVar3 = F_00c942f0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),param_1,param_2,param_3,iVar2);
    }
    iVar1 = *(int *)((int)this + 0xc);
    if (0 < *(int *)(iVar1 + 8)) {
      (*(int *)(gen_frame + 0x28)) = *(int *)(iVar1 + 0xc) + iVar1;
      (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)((int)this + 8);
      uVar3 = F_00c942f0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),param_1,param_2,param_3,iVar2);
    }
  }
  return uVar3;
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf1 */
uint F_00c94540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc94540u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc10];
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0xc08)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc0c);
  iVar3 = 0xff;
  puVar1 = ((undefined4 *)(gen_frame + 0x10));
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  uVar2 = F_00c942f0(this,param_1,param_2,param_3,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0xc08)) ^ (uint)(uint)(gen_frame + 0xc0c));
  return uVar2;
}

/* ref: FUN_00c945b0 */
unsigned int F_00c945b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc945b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
    *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x109cd2c));
    param_1[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cd20));
    param_1[2] = 0;
  }
  return 0;
}

/* ref: FUN_00c945e0 */
uint F_00c945e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc945e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  int iVar1;
  byte * pbVar2;
  byte bVar3;
  char cVar7;
  undefined3 extraout_var = 0;
  uint uVar4;
  undefined * PTR32 * PTR32 * pppuVar5;
  int iVar8;
  uint uVar9;
  int * piVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined * PTR32 * PTR32 * pppuVar6;
  
  pbVar2 = (*(byte * PTR32 *)&gen_args[3]);
  (*(float * PTR32 *)(gen_frame + 0xc4)) = *((float * PTR32 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[3]) + 8)));
  iVar8 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  (*(int *)(gen_frame + 0xb8)) = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[3]) + 4)));
  (*(float *)(gen_frame + 0xb4)) = 0.0;
  if (*(short *)(iVar8 + 0x2a) == 0) {
    (*(float *)(gen_frame + 0x94)) = 0.0;
    (*(float *)(gen_frame + 0x98)) = 0.0;
    (*(float *)(gen_frame + 0x9c)) = 0.0;
    (*(float *)(gen_frame + 0xa0)) = 0.0;
    (*(float *)(gen_frame + 0xa4)) = 0.0;
    (*(float *)(gen_frame + 0xa8)) = 0.0;
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x70))[0] = (*(undefined * PTR32 (*)[11])REFP(0x109cd2c));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x80))[0] = (*(undefined * PTR32 (*)[11])REFP(0x109cd2c));
    (*(float * PTR32 *)(gen_frame + 0xc8)) = ((float *)(gen_frame + 0x54));
    ((int *)(gen_frame + 0x78))[0] = 0;
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x80))[2] = (undefined * PTR32 *)0x0;
    (*(uint *)(gen_frame + 0xac)) = 0;
    (*(float *)(gen_frame + 0xb0)) = *((float *)GEN_TOP((*((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[3]) + 4))) + 0xc)));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x70))[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cd20));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x80))[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cd20));
    piVar10 = ((int *)(gen_frame + 0x78)) + 1;
    ((int *)(gen_frame + 0xbc))[1] = 8 - (int)((float *)(gen_frame + 0x54));
    do {
      fVar11 = (*(float *)(gen_frame + 0xb0));
      iVar8 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
      if (0 < *(int *)(iVar8 + 8)) {
        iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
        *piVar10 = *(int *)((int)(*(float * PTR32 *)(gen_frame + 0xc8)) + ((int *)(gen_frame + 0xbc))[1] + iVar8) + iVar8;
        piVar10[-1] = iVar1;
      }
      iVar8 = *piVar10;
      (*(float *)(gen_frame + 0x94)) = *(float *)(iVar8 + 0x10);
      (*(float *)(gen_frame + 0x98)) = *(float *)(iVar8 + 0x14);
      (*(float *)(gen_frame + 0x9c)) = *(float *)(iVar8 + 0x18);
      (*(float *)(gen_frame + 0xa0)) = *(float *)(iVar8 + 0x1c);
      (*(float *)(gen_frame + 0xa4)) = *(float *)(iVar8 + 0x20);
      (*(float *)(gen_frame + 0x94)) = *(float *)(iVar8 + 0x10) - fVar11;
      (*(float *)(gen_frame + 0x98)) = *(float *)(iVar8 + 0x14) - fVar11;
      (*(float *)(gen_frame + 0x9c)) = *(float *)(iVar8 + 0x18) - fVar11;
      (*(float *)(gen_frame + 0xa0)) = *(float *)(iVar8 + 0x1c) + fVar11;
      (*(float *)(gen_frame + 0xa4)) = *(float *)(iVar8 + 0x20) + fVar11;
      (*(float *)(gen_frame + 0xa8)) = *(float *)(iVar8 + 0x24) + fVar11;
      bVar3 = F_00c996f0((*(int *)(gen_frame + 0xb8)),(*(float * PTR32 *)(gen_frame + 0xc4)),&(*(float *)(gen_frame + 0x94)),(*(float * PTR32 *)(gen_frame + 0xc8)));
      (*(float * PTR32 *)(gen_frame + 0xc8)) = (*(float * PTR32 *)(gen_frame + 0xc8)) + 1;
      *((byte *)GEN_TOP(((int)&(*(byte * PTR32 *)&gen_args[3]) + (*(uint *)(gen_frame + 0xac))))) = bVar3;
      uVar9 = (*(uint *)(gen_frame + 0xac)) + 1;
      piVar10 = piVar10 + 4;
      (*(uint *)(gen_frame + 0xac)) = uVar9;
    } while (uVar9 < 2);
    ((int *)(gen_frame + 0xbc))[0] = 0;
    ((int *)(gen_frame + 0xbc))[1] = 1;
    cVar7 = (char)((uint)(*(byte * PTR32 *)&gen_args[3]) >> 8);
    if ((char)(*(byte * PTR32 *)&gen_args[3]) == '\0') {
      if (cVar7 == '\0') {
        ((int *)(gen_frame + 0xbc))[0] = -1;
      }
      else {
        ((int *)(gen_frame + 0xbc))[0] = 1;
        ((int *)(gen_frame + 0xbc))[1] = 0xffffffff;
      }
    }
    else if (cVar7 == '\0') {
      ((int *)(gen_frame + 0xbc))[0] = 0;
      ((int *)(gen_frame + 0xbc))[1] = 0xffffffff;
    }
    else if (((float *)(gen_frame + 0x54))[1] < ((float *)(gen_frame + 0x54))[0]) {
      ((int *)(gen_frame + 0xbc))[0] = 1;
      ((int *)(gen_frame + 0xbc))[1] = 0;
    }
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(float *)(gen_frame + 0x14)) = 0.0;
    (*(float *)(gen_frame + 0x18)) = 0.0;
    (*(float *)(gen_frame + 0x1c)) = 0.0;
    (*(float *)(gen_frame + 0x20)) = 0.0;
    (*(float *)(gen_frame + 0x24)) = 0.0;
    (*(float *)(gen_frame + 0x28)) = 0.0;
    (*(float *)(gen_frame + 0x2c)) = 0.0;
    (*(float *)(gen_frame + 0x30)) = 0.0;
    (*(float *)(gen_frame + 0x34)) = 0.0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(byte * PTR32 *)&gen_args[3]) = ((byte *)GEN_TOP(((uint)(*(byte * PTR32 *)&gen_args[3]) & 0xffffff)));
    (*(float * PTR32 *)(gen_frame + 0xc8)) = ((float *)GEN_TOP(**(float * PTR32 *)(pbVar2 + 0xc)));
    uVar9 = 0;
    do {
      iVar8 = ((int *)(gen_frame + 0xbc))[(int)(uVar9)];
      if (iVar8 == -1) break;
      if (((double)((float *)(gen_frame + 0x54))[(int)(iVar8)] - (double)(*(float *)(gen_frame + 0xb0)) < ((double)GEN_TOD(**(float * PTR32 *)(pbVar2 + 0xc)))) &&
         (uVar4 = F_00c945e0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x70)) + iVar8 * 4,(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)(gen_frame + 0x8)),pbVar2,(*(uint *)&gen_args[4])),
         (char)uVar4 != '\0')) {
        fVar11 = **(float * PTR32 *)(pbVar2 + 0xc);
        if ((*pbVar2 & 1) == 0) {
          if (fVar11 < ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xc8)))))) {
LAB_00c94ded: ;
            (*(float * PTR32 *)(gen_frame + 0xc8)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar11)));
            F_00550bc0((*(undefined * PTR32 *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0x8)));
            (*(byte * PTR32 *)&gen_args[3]) = ((byte *)GEN_TOP(CONCAT13(1,GEN_PIECE(&(*(byte * PTR32 *)&gen_args[3]), 0, 3))));
          }
        }
        else if ((double)fVar11 <= (double)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xc8))))) + *(double *)&REFG(undefined, 0x109ce00)) {
          fVar16 = ((float)GEN_TOF(((double)((*(float *)(gen_frame + 0x24)) - (*(float *)(gen_frame + 0x18))) * (double)((*(float *)(gen_frame + 0x34)) - (*(float *)(gen_frame + 0x28))) -
                          (double)((*(float *)(gen_frame + 0x28)) - (*(float *)(gen_frame + 0x1c))) * (double)((*(float *)(gen_frame + 0x30)) - (*(float *)(gen_frame + 0x24))))));
          fVar15 = ((float)GEN_TOF(((double)((*(float *)(gen_frame + 0x30)) - (*(float *)(gen_frame + 0x24))) * (double)((*(float *)(gen_frame + 0x20)) - (*(float *)(gen_frame + 0x14))) -
                          (double)((*(float *)(gen_frame + 0x24)) - (*(float *)(gen_frame + 0x18))) * (double)((*(float *)(gen_frame + 0x2c)) - (*(float *)(gen_frame + 0x20))))));
          dVar12 = (double)fVar16;
          fVar17 = ((float)GEN_TOF(((double)((*(float *)(gen_frame + 0x28)) - (*(float *)(gen_frame + 0x1c))) * (double)((*(float *)(gen_frame + 0x2c)) - (*(float *)(gen_frame + 0x20))) -
                          (double)((*(float *)(gen_frame + 0x34)) - (*(float *)(gen_frame + 0x28))) * (double)((*(float *)(gen_frame + 0x20)) - (*(float *)(gen_frame + 0x14))))));
          dVar13 = (double)fVar17;
          dVar14 = (double)fVar15;
          fVar11 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                          ((double)GEN_TOD(SQRT(((float)GEN_TOF(((dVar13 * dVar13 + dVar12 * dVar12) + dVar14 * dVar14
                                              )))))))));
          if (0.0 < fVar11) {
            fVar16 = fVar11 * fVar16;
            fVar15 = fVar15 * fVar11;
            fVar17 = fVar17 * fVar11;
          }
          else {
            fVar15 = REFG(float, 0x1379708);
            fVar16 = REFG(float, 0x1379700);
            fVar17 = REFG(float, 0x1379704);
            if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
              *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
              REFG(float, 0x1379700) = 0.0;
              REFG(float, 0x1379704) = REFG(float, 0x1087f04);
              REFG(float, 0x1379708) = 0.0;
              fVar15 = REFG(float, 0x1379708);
              fVar16 = REFG(float, 0x1379700);
              fVar17 = REFG(float, 0x1087f04);
            }
          }
          fVar11 = **(float * PTR32 *)(pbVar2 + 0xc);
          fVar16 = ((float)GEN_TOF((((double)(*(float * PTR32 *)(gen_frame + 0xc4))[1] * (double)fVar17 + (double)fVar16 * (double)*(*(float * PTR32 *)(gen_frame + 0xc4)))
                          + (double)(*(float * PTR32 *)(gen_frame + 0xc4))[2] * (double)fVar15)));
          if ((!((double)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xc8))))) - (double)fVar11 < REFG(double, 0x109cdf8))) || (!((*(float *)(gen_frame + 0xb4)) <= fVar16))
             ) {
            (*(float *)(gen_frame + 0xb4)) = fVar16;
            goto LAB_00c94ded;
          }
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < 2);
    **(float * PTR32 *)(pbVar2 + 0xc) = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xc8)))));
    iVar8 = 1;
    pppuVar5 = ((undefined * PTR32 * PTR32 *)(gen_frame + 0x80)) + 4;
    do {
      pppuVar6 = pppuVar5 + -4;
      iVar8 = iVar8 + -1;
      pppuVar5[-3] = (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
      *pppuVar6 = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
      pppuVar5 = pppuVar6;
    } while (-1 < iVar8);
    return CONCAT31((int3)((uint)((int)(uintptr_t)pppuVar6) >> 8),(*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[3]) + 3)))));
  }
  (*(float * PTR32 *)(gen_frame + 0xc8)) = ((float *)GEN_TOP((iVar8 + (*(ushort *)(iVar8 + 0x28) + 8 + (uint)*(ushort *)(iVar8 + 0x2c) * 2)
                              * 6)));
  uVar9 = 0xffffffff;
  (*(byte * PTR32 *)&gen_args[3]) = (byte *)(*(uint *)&gen_args[4]);
  F_00c90030((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[4]));
  (*(uint *)&gen_args[4]) = **(uint * PTR32 *)(pbVar2 + 0xc);
  switch((unsigned int)(uintptr_t)(*(undefined4 *)pbVar2)) {
  case 0: ;
    F_00c96260(((undefined1 *)(gen_frame + 0x64)));
    (*(gen_code32 *)(gen_frame + 0x68)) = ((code *)REFP(0xc95f60));
    uVar9 = F_00c95f60(((undefined1 *)(gen_frame + 0x64)),(uint)(*(float * PTR32 *)(gen_frame + 0xc8)),
                         (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0x2a))),&(*(byte * PTR32 *)&gen_args[3]),(*(int *)(gen_frame + 0xb8)),
                         (*(float * PTR32 *)(gen_frame + 0xc4)),&(*(uint *)&gen_args[4]));
    break;
  case 1: ;
    F_00c96300(((undefined1 *)(gen_frame + 0x5c)));
    (*(gen_code32 *)(gen_frame + 0x60)) = ((code *)REFP(0xc96580));
    uVar9 = F_00c96580(((undefined1 *)(gen_frame + 0x5c)),(uint)(*(float * PTR32 *)(gen_frame + 0xc8)),
                         (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0x2a))),&(*(byte * PTR32 *)&gen_args[3]),
                         *(undefined4 *)(pbVar2 + 4),(*(float * PTR32 *)(gen_frame + 0xc4)),&(*(uint *)&gen_args[4]));
    break;
  case 2: ;
    F_00c962a0(((undefined1 *)(gen_frame + 0x64)),(*(undefined4 *)&gen_args[1]),*(float *)(pbVar2 + 0x10));
    (*(gen_code32 *)(gen_frame + 0x68)) = ((code *)REFP(0xc95f60));
    uVar9 = F_00c95f60(((undefined1 *)(gen_frame + 0x64)),(uint)(*(float * PTR32 *)(gen_frame + 0xc8)),
                         (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0x2a))),&(*(byte * PTR32 *)&gen_args[3]),
                         *(undefined4 *)(pbVar2 + 4),(*(float * PTR32 *)(gen_frame + 0xc4)),&(*(uint *)&gen_args[4]));
    break;
  case 3: ;
    F_00c96350(((undefined1 *)(gen_frame + 0x5c)),(*(undefined4 *)&gen_args[1]),*(float *)(pbVar2 + 0x10));
    (*(gen_code32 *)(gen_frame + 0x60)) = ((code *)REFP(0xc96580));
    uVar9 = F_00c96580(((undefined1 *)(gen_frame + 0x5c)),(uint)(*(float * PTR32 *)(gen_frame + 0xc8)),
                         (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0x2a))),&(*(byte * PTR32 *)&gen_args[3]),
                         *(undefined4 *)(pbVar2 + 4),(*(float * PTR32 *)(gen_frame + 0xc4)),&(*(uint *)&gen_args[4]));
    break;
  case 4: ;
    F_00c96260(((undefined1 *)(gen_frame + 0x64)));
    uVar21 = *(undefined4 *)(pbVar2 + 0x1c);
    uVar20 = *(undefined4 *)(pbVar2 + 0x18);
    uVar19 = (*(undefined4 * PTR32 *)(pbVar2 + 0x14))[1];
    uVar18 = **(undefined4 * PTR32 *)(pbVar2 + 0x14);
    goto LAB_00c94772;
  case 5: ;
    F_00c96300(((undefined1 *)(gen_frame + 0x5c)));
    uVar21 = *(undefined4 *)(pbVar2 + 0x1c);
    uVar20 = *(undefined4 *)(pbVar2 + 0x18);
    uVar19 = (*(undefined4 * PTR32 *)(pbVar2 + 0x14))[1];
    uVar18 = **(undefined4 * PTR32 *)(pbVar2 + 0x14);
    goto LAB_00c94811;
  case 6: ;
    F_00c962a0(((undefined1 *)(gen_frame + 0x64)),(*(undefined4 *)&gen_args[1]),*(float *)(pbVar2 + 0x10));
    uVar21 = *(undefined4 *)(pbVar2 + 0x1c);
    uVar20 = *(undefined4 *)(pbVar2 + 0x18);
    uVar19 = (*(undefined4 * PTR32 *)(pbVar2 + 0x14))[1];
    uVar18 = **(undefined4 * PTR32 *)(pbVar2 + 0x14);
LAB_00c94772: ;
    F_00c96490(((undefined1 *)(gen_frame + 0x64)),uVar18,uVar19,uVar20,uVar21);
    uVar9 = ((code *)(*(gen_code32 *)(gen_frame + 0x68)))(((undefined1 *)(gen_frame + 0x64)),(*(float * PTR32 *)(gen_frame + 0xc8)),(uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0x2a))),
                        &(*(byte * PTR32 *)&gen_args[3]),*(undefined4 *)(pbVar2 + 4),(*(float * PTR32 *)(gen_frame + 0xc4)),&(*(uint *)&gen_args[4]));
    break;
  case 7: ;
    F_00c96350(((undefined1 *)(gen_frame + 0x5c)),(*(undefined4 *)&gen_args[1]),*(float *)(pbVar2 + 0x10));
    uVar21 = *(undefined4 *)(pbVar2 + 0x1c);
    uVar20 = *(undefined4 *)(pbVar2 + 0x18);
    uVar19 = (*(undefined4 * PTR32 *)(pbVar2 + 0x14))[1];
    uVar18 = **(undefined4 * PTR32 *)(pbVar2 + 0x14);
LAB_00c94811: ;
    F_00c96a60(((undefined1 *)(gen_frame + 0x5c)),uVar18,uVar19,uVar20,uVar21);
    uVar9 = ((code *)(*(gen_code32 *)(gen_frame + 0x60)))(((undefined1 *)(gen_frame + 0x5c)),(*(float * PTR32 *)(gen_frame + 0xc8)),(uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0x2a))),
                        &(*(byte * PTR32 *)&gen_args[3]),*(undefined4 *)(pbVar2 + 4),(*(float * PTR32 *)(gen_frame + 0xc4)),&(*(uint *)&gen_args[4]));
  }
  **(uint * PTR32 *)(pbVar2 + 0xc) = (*(uint *)&gen_args[4]);
  bVar3 = F_00c901b0((*(undefined * PTR32 *)&gen_args[0]),uVar9,(*(undefined * PTR32 *)&gen_args[2]),&(*(byte * PTR32 *)&gen_args[3]),(*(int *)(gen_frame + 0xb8)),(*(float * PTR32 *)(gen_frame + 0xc4)),GEN_TOF(gen_bits2f((*(uint *)&gen_args[4]))));
  return CONCAT31(extraout_var,bVar3);
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf4 */
uint F_00c94e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc94e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc10];
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0xc08)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc0c);
  iVar3 = 0xff;
  puVar1 = ((undefined4 *)(gen_frame + 0x10));
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  uVar2 = F_00c945e0(this,param_1,param_2,param_3,(uint)((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0xc08)) ^ (uint)(uint)(gen_frame + 0xc0c));
  return uVar2;
}

/* ref: FUN_00c94ed0 */
uint F_00c94ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc94ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 * puVar12;
  undefined * this_00;
  uint uVar13;
  
  F_00c96ab0(this,param_1,param_2);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x1128f90));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1128f8c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[1])REFP(0x1128f88));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x1128f84));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[2])REFP(0x1128f7c));
  *(undefined1 *)((int)this + 0x78) = 1;
  *(char *)((int)this + 0x79) = (char)param_4;
  *(undefined4 *)((int)this + 0x7c) = uVar1;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined1 *)((int)this + 0x7a) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = uVar1;
  *(undefined4 *)((int)this + 0xa4) = uVar1;
  *(undefined4 *)((int)this + 0xa8) = uVar1;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  puVar12 = (undefined4 *)F_00c8f7f0(((undefined1 *)(gen_frame + 0xc)));
  uVar1 = puVar12[1];
  uVar2 = puVar12[2];
  uVar3 = puVar12[4];
  uVar4 = puVar12[5];
  uVar5 = puVar12[9];
  uVar6 = puVar12[6];
  uVar7 = puVar12[8];
  (*(undefined4 *)(gen_frame + 0x68)) = uVar5;
  uVar8 = puVar12[10];
  (*(undefined4 *)(gen_frame + 0x6c)) = uVar8;
  uVar9 = puVar12[0xc];
  (*(undefined4 *)(gen_frame + 0x70)) = uVar9;
  uVar10 = puVar12[0xd];
  (*(undefined4 *)(gen_frame + 0x74)) = uVar10;
  uVar11 = puVar12[0xe];
  *(undefined4 *)((int)this + 0xc4) = *puVar12;
  *(undefined4 *)((int)this + 200) = uVar1;
  *(undefined4 *)((int)this + 0xcc) = uVar2;
  *(undefined4 *)((int)this + 0xd0) = uVar3;
  *(undefined4 *)((int)this + 0xd4) = uVar4;
  *(undefined4 *)((int)this + 0xd8) = uVar6;
  *(undefined4 *)((int)this + 0xe0) = uVar5;
  *(undefined4 *)((int)this + 0xe4) = uVar8;
  *(undefined4 *)((int)this + 0xdc) = uVar7;
  *(undefined4 *)((int)this + 0xe8) = uVar9;
  *(undefined4 *)((int)this + 0xec) = uVar10;
  *(undefined4 *)((int)this + 0xf0) = uVar11;
  if ((char)param_4 != '\0') {
    *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(param_3 + 0xc);
    this_00 = (undefined *)F_00ca2100(0x3c,&REFG(undefined, 0x1128e0a),
                                   *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x34) + 4))));
    if (this_00 != (undefined *)0x0) {
      uVar13 = F_00c93050(this_00,param_3 + 0x10);
      *(uint *)((int)this + 0x80) = uVar13;
      return (uint)this;
    }
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00c951e0 */
uint F_00c951e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc951e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 uVar1;
  
  F_00c96ab0(this,param_1,param_2);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x1128f90));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1128f8c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[1])REFP(0x1128f88));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x1128f84));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[2])REFP(0x1128f7c));
  *(undefined2 *)((int)this + 0x78) = 1;
  *(undefined4 *)((int)this + 0x7c) = uVar1;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined1 *)((int)this + 0x7a) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = uVar1;
  *(undefined4 *)((int)this + 0xa4) = uVar1;
  *(undefined4 *)((int)this + 0xa8) = uVar1;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  return (uint)this;
}

/* ref: FUN_00c953c0 */
unsigned int F_00c953c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc953c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x1128f90));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1128f8c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[1])REFP(0x1128f88));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x1128f84));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[2])REFP(0x1128f7c));
  if (*(int *)((int)this + 0x6c) != 0) {
    F_00c96f90(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x34) + 4))));
    if (*(char *)((int)this + 0x7a) == '\0') {
      piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0x34) + 0x20)));
      *piVar1 = *piVar1 + -1;
    }
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  F_00c96c00(this);
  return 0;
}

/* ref: FUN_00c95430 */
uint F_00c95430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc95430u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c95440 */
unsigned int F_00c95440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc95440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  float * param_8 = (float *)(uintptr_t)gen_a7;
  undefined4 * param_9 = (undefined4 *)(uintptr_t)gen_a8;
  if ((param_7 <= *param_8) &&
     ((!GEN_ISNAN(param_7) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_7 < *(float *)&REFG(undefined, 0x1088114)))) {
    *param_9 = param_5;
    *param_8 = param_7;
  }
  return 0;
}

/* ref: FUN_00c95480 */
unsigned int F_00c95480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xc95480u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  float param_8 = (float)gen_a7;
  float * param_9 = (float *)(uintptr_t)gen_a8;
  undefined4 * param_10 = (undefined4 *)(uintptr_t)gen_a9;
  float fVar1;
  
  if (((double)param_8 <= (double)*param_9 + *(double *)&REFG(undefined, 0x109ce00)) &&
     ((!GEN_ISNAN(param_8) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_8 < *(float *)&REFG(undefined, 0x1088114)))) {
    fVar1 = ((float)GEN_TOF((((double)param_5[1] * (double)param_7[1] + (double)*param_5 * (double)*param_7)
                   + (double)param_5[2] * (double)param_7[2])));
    if ((!((double)*param_9 - (double)param_8 < REFG(double, 0x109cdf8))) ||
       (!(*(float *)(param_1 + 0x30) <= fVar1))) {
      *param_10 = param_6;
      *param_9 = param_8;
      *(float *)(param_1 + 0x30) = fVar1;
    }
  }
  return 0;
}

/* ref: FUN_00c95560 */
unsigned int F_00c95560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc95560u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  return 0;
}

/* ref: FUN_00c955d0 */
uint F_00c955d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc955d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 4))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c955f0 */
uint F_00c955f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc955f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 4))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c95620 */
uint F_00c95620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc95620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1128e68));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c95660 */
uint F_00c95660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc95660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1128e70));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c95690 */
uint F_00c95690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc95690u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00c956a0 */
uint F_00c956a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc956a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00c956b0 */
uint F_00c956b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc956b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00c956c0 */
uint F_00c956c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc956c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00c956d0 */
byte F_00c956d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc956d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint param_5 = (uint)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  byte bVar1;
  
  bVar1 = F_00c9bf20(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return bVar1;
}

/* ref: FUN_00c956e0 */
float10 F_00c956e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc956e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float * pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  pfVar7 = (float *)*in_ecx;
  fVar10 = param_2[1];
  fVar16 = *param_2;
  fVar1 = param_2[2];
  fVar2 = param_3[2];
  fVar3 = *param_3;
  fVar15 = param_3[1];
  fVar14 = ((float)GEN_TOF(((((double)pfVar7[4] * (double)fVar15 + (double)fVar3 * (double)*pfVar7) +
                   (double)pfVar7[8] * (double)fVar2) + (double)pfVar7[0xc])));
  fVar4 = param_4[2];
  fVar5 = *param_4;
  fVar9 = ((float)GEN_TOF(((((double)pfVar7[2] * (double)fVar3 + (double)pfVar7[6] * (double)fVar15) +
                  (double)pfVar7[10] * (double)fVar2) + (double)pfVar7[0xe])));
  fVar6 = param_4[1];
  fVar15 = ((float)GEN_TOF(((((double)pfVar7[1] * (double)fVar3 + (double)pfVar7[5] * (double)fVar15) +
                   (double)pfVar7[9] * (double)fVar2) + (double)pfVar7[0xd])));
  fVar2 = fVar14 - ((float)GEN_TOF(((((double)pfVar7[4] * (double)fVar10 + (double)fVar16 * (double)*pfVar7)
                           + (double)pfVar7[8] * (double)fVar1) + (double)pfVar7[0xc])));
  fVar3 = ((float)GEN_TOF(((((double)pfVar7[1] * (double)fVar5 + (double)pfVar7[5] * (double)fVar6) +
                  (double)pfVar7[9] * (double)fVar4) + (double)pfVar7[0xd]))) - fVar15;
  fVar15 = fVar15 - ((float)GEN_TOF(((((double)pfVar7[1] * (double)fVar16 +
                             (double)pfVar7[5] * (double)fVar10) + (double)pfVar7[9] * (double)fVar1
                            ) + (double)pfVar7[0xd])));
  fVar8 = ((float)GEN_TOF(((((double)pfVar7[2] * (double)fVar5 + (double)pfVar7[6] * (double)fVar6) +
                  (double)pfVar7[10] * (double)fVar4) + (double)pfVar7[0xe]))) - fVar9;
  fVar9 = fVar9 - ((float)GEN_TOF(((((double)pfVar7[2] * (double)fVar16 + (double)pfVar7[6] * (double)fVar10)
                          + (double)pfVar7[10] * (double)fVar1) + (double)pfVar7[0xe])));
  fVar14 = ((float)GEN_TOF(((((double)pfVar7[4] * (double)fVar6 + (double)fVar5 * (double)*pfVar7) +
                   (double)pfVar7[8] * (double)fVar4) + (double)pfVar7[0xc]))) - fVar14;
  fVar16 = (float)((double)fVar9 * (double)fVar14 - (double)fVar8 * (double)fVar2);
  dVar13 = (double)(float)((double)fVar3 * (double)fVar2 - (double)fVar15 * (double)fVar14);
  dVar12 = (double)fVar16;
  dVar11 = (double)(float)((double)fVar8 * (double)fVar15 - (double)fVar3 * (double)fVar9);
  fVar10 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                  ((double)GEN_TOD(SQRT(((float)GEN_TOF(((dVar12 * dVar12 + dVar11 * dVar11) + dVar13 * dVar13)))))))));
  if (0.0 < fVar10) {
    return (float10)(fVar10 * fVar16);
  }
  if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
    REFG(float, 0x1379700) = 0;
    REFG(float, 0x1379704) = REFG(float, 0x1087f04);
    REFG(float, 0x1379708) = 0;
  }
  return (float10)REFG(float, 0x1379704);
}

/* ref: FUN_00c95cc0 */
uint F_00c95cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xc95cc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xc;
}

/* ref: FUN_00c95cd0 */
uint F_00c95cd0(unsigned int gen_a0)
{
  GEN_ENTER(0xc95cd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x18;
}

/* ref: FUN_00c95ce0 */
byte F_00c95ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc95ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: FUN_00c95cf0 */
uint F_00c95cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc95cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c963c0((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00c95d00 */
byte F_00c95d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc95d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: FUN_00c95d10 */
uint F_00c95d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc95d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c963f0((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00c95d20 */
uint F_00c95d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc95d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1128ee4));
  in_ecx[6] = 0;
  *(ulonglong *)(in_ecx + 8) = CONCAT44(param_3,param_2);
  *(ulonglong *)(in_ecx + 10) = CONCAT44(param_5,param_4);
  return (uint)in_ecx;
}

/* ref: FUN_00c95d50 */
uint F_00c95d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xc95d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  float param_8 = (float)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(param_1 + 0x20))
                    (*(int *)(param_1 + 0x24) + param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,(undefined4)gen_fl2bits(param_8),param_9,param_10);
  return uVar1;
}

/* ref: FUN_00c95d90 */
unsigned int F_00c95d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xc95d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1128ee4));
  in_ecx[6] = param_6;
  in_ecx[7] = (undefined4)gen_fl2bits(param_7);
  *(ulonglong *)(in_ecx + 8) = CONCAT44(param_3,param_2);
  *(ulonglong *)(in_ecx + 10) = CONCAT44(param_5,param_4);
  return 0;
}

/* ref: FUN_00c95de0 */
uint F_00c95de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc95de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1128eec));
  in_ecx[6] = 0;
  *(ulonglong *)(in_ecx + 8) = CONCAT44(param_3,param_2);
  *(ulonglong *)(in_ecx + 10) = CONCAT44(param_5,param_4);
  return (uint)in_ecx;
}

/* ref: FUN_00c95e10 */
uint F_00c95e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xc95e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  float param_8 = (float)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(param_1 + 0x20))
                    (*(int *)(param_1 + 0x24) + param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,(undefined4)gen_fl2bits(param_8),param_9,param_10);
  return uVar1;
}

/* ref: FUN_00c95e50 */
unsigned int F_00c95e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xc95e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1128eec));
  in_ecx[6] = param_6;
  in_ecx[7] = (undefined4)gen_fl2bits(param_7);
  *(ulonglong *)(in_ecx + 8) = CONCAT44(param_3,param_2);
  *(ulonglong *)(in_ecx + 10) = CONCAT44(param_5,param_4);
  return 0;
}

/* ref: FUN_00c95ea0 */
uint F_00c95ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc95ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1128e68));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c95ed0 */
uint F_00c95ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc95ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1128e70));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c95f60 */
uint F_00c95f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc95f60u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte * pbVar6;
  
  uVar4 = 0xffffffff;
  (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x18)) = 0;
  if ((*(uint *)&gen_args[2]) != 0) {
    pbVar6 = (byte *)((*(uint *)&gen_args[1]) + 2);
    do {
      iVar2 = *(*(int * PTR32 *)&gen_args[3]);
      uVar4 = iVar2 + (uint)pbVar6[-2] * 0xc;
      uVar5 = iVar2 + (uint)pbVar6[-1] * 0xc;
      uVar1 = iVar2 + (uint)*pbVar6 * 0xc;
      (*(uint *)(gen_frame + 0xc)) = uVar1;
      bVar3 = F_00c9bf20((*(undefined4 *)&gen_args[4]),(*(uint *)&gen_args[5]),uVar4,uVar5,uVar1,&(*(undefined4 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[1]));
      if (bVar3 != 0) {
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 4))
                  (uVar4,uVar5,(*(uint *)(gen_frame + 0xc)),(*(uint *)&gen_args[5]),(*(uint *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[6]),&(*(uint *)(gen_frame + 0x14)));
      }
      uVar5 = (*(uint *)(gen_frame + 0x18)) + 1;
      pbVar6 = pbVar6 + 6;
      (*(uint *)(gen_frame + 0x18)) = uVar5;
      uVar4 = (*(uint *)(gen_frame + 0x14));
    } while (uVar5 < (*(uint *)&gen_args[2]));
  }
  return uVar4;
}

/* ref: FUN_00c96040 */
uint F_00c96040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc96040u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined2 * puVar6;
  
  (*(int * PTR32 *)(gen_frame + 0x18)) = (*(int * PTR32 *)&gen_args[0]);
  uVar4 = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x24)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x20)) = (*(int * PTR32 *)&gen_args[0])[2];
  (*(uint *)(gen_frame + 0x1c)) = (*(int * PTR32 *)&gen_args[0])[3];
  (*(uint *)(gen_frame + 0x28)) = 0;
  if ((*(uint *)&gen_args[2]) != 0) {
    puVar6 = (undefined2 *)((*(uint *)&gen_args[1]) + 4);
    do {
      if ((CONCAT12(*(undefined1 *)((int)puVar6 + -1),*puVar6) & (*(uint *)(gen_frame + 0x20))) == (*(uint *)(gen_frame + 0x1c))) {
        iVar2 = *(*(int * PTR32 *)&gen_args[3]);
        uVar4 = iVar2 + (uint)*(byte *)((int)puVar6 + -3) * 0xc;
        uVar5 = iVar2 + (uint)*(byte *)(puVar6 + -2) * 0xc;
        uVar1 = iVar2 + (uint)*(byte *)(puVar6 + -1) * 0xc;
        (*(uint *)(gen_frame + 0x14)) = uVar1;
        bVar3 = F_00c9bf20((*(undefined4 *)&gen_args[4]),(*(uint *)&gen_args[5]),uVar5,uVar4,uVar1,&(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
        if (bVar3 != 0) {
          ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 4))
                    (uVar5,uVar4,(*(uint *)(gen_frame + 0x14)),(*(uint *)&gen_args[5]),(*(uint *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x8)),(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[6]),&(*(uint *)(gen_frame + 0x24)));
        }
      }
      uVar5 = (*(uint *)(gen_frame + 0x28)) + 1;
      puVar6 = puVar6 + 3;
      (*(uint *)(gen_frame + 0x28)) = uVar5;
      uVar4 = (*(uint *)(gen_frame + 0x24));
    } while (uVar5 < (*(uint *)&gen_args[2]));
  }
  return uVar4;
}

/* ref: FUN_00c96140 */
uint F_00c96140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc96140u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined2 * puVar6;
  
  (*(uint *)(gen_frame + 0x18)) = (*(int * PTR32 *)&gen_args[0])[2];
  (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x14)) = (*(int * PTR32 *)&gen_args[0])[3];
  uVar4 = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0x24)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x1c)) = (*(int * PTR32 *)&gen_args[0])[4];
  (*(uint *)(gen_frame + 0x20)) = ~(*(int * PTR32 *)&gen_args[0])[5];
  (*(uint *)(gen_frame + 0x28)) = 0;
  if ((*(uint *)&gen_args[2]) != 0) {
    puVar6 = (undefined2 *)((*(uint *)&gen_args[1]) + 4);
    do {
      if (((CONCAT12(*(undefined1 *)((int)puVar6 + -1),*puVar6) & (*(uint *)(gen_frame + 0x20)) | (*(uint *)(gen_frame + 0x1c))) & (*(uint *)(gen_frame + 0x18)))
          == (*(uint *)(gen_frame + 0x14))) {
        iVar2 = *(*(int * PTR32 *)&gen_args[3]);
        uVar4 = iVar2 + (uint)*(byte *)(puVar6 + -2) * 0xc;
        uVar5 = iVar2 + (uint)*(byte *)((int)puVar6 + -3) * 0xc;
        uVar1 = iVar2 + (uint)*(byte *)(puVar6 + -1) * 0xc;
        (*(uint *)(gen_frame + 0xc)) = uVar1;
        bVar3 = F_00c9bf20((*(undefined4 *)&gen_args[4]),(*(uint *)&gen_args[5]),uVar4,uVar5,uVar1,&(*(undefined4 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[1]));
        if (bVar3 != 0) {
          ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 4))
                    (uVar4,uVar5,(*(uint *)(gen_frame + 0xc)),(*(uint *)&gen_args[5]),(*(uint *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[6]),&(*(uint *)(gen_frame + 0x24)));
        }
      }
      uVar5 = (*(uint *)(gen_frame + 0x28)) + 1;
      puVar6 = puVar6 + 3;
      (*(uint *)(gen_frame + 0x28)) = uVar5;
      uVar4 = (*(uint *)(gen_frame + 0x24));
    } while (uVar5 < (*(uint *)&gen_args[2]));
  }
  return uVar4;
}

/* ref: FUN_00c96250 */
byte F_00c96250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc96250u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  byte bVar1;
  
  bVar1 = F_00553ba0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return bVar1;
}

/* ref: FUN_00c96260 */
unsigned int F_00c96260(unsigned int gen_a0)
{
  GEN_ENTER(0xc96260u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[6] = 0;
  *(undefined8 *)(in_ecx + 8) = 0xc95440;
  *(undefined8 *)(in_ecx + 10) = 0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1128ef4));
  return 0;
}

/* ref: FUN_00c962a0 */
unsigned int F_00c962a0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xc962a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  in_ecx[6] = param_2;
  in_ecx[7] = (undefined4)gen_fl2bits(param_3);
  *(undefined8 *)(in_ecx + 8) = 0xc95b50;
  *(undefined8 *)(in_ecx + 10) = 0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1128ef4));
  return 0;
}

/* ref: FUN_00c96300 */
unsigned int F_00c96300(unsigned int gen_a0)
{
  GEN_ENTER(0xc96300u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[6] = 0;
  *(undefined8 *)(in_ecx + 8) = 0xc95480;
  *(undefined8 *)(in_ecx + 10) = 0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x1128efc));
  in_ecx[0xc] = 0;
  return 0;
}

/* ref: FUN_00c96350 */
unsigned int F_00c96350(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xc96350u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  in_ecx[6] = param_2;
  in_ecx[7] = (undefined4)gen_fl2bits(param_3);
  *(undefined8 *)(in_ecx + 8) = 0xc95bc0;
  *(undefined8 *)(in_ecx + 10) = 0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x1128efc));
  in_ecx[0xc] = 0;
  return 0;
}

/* ref: FUN_00c963c0 */
uint F_00c963c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc963c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c932c0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c963f0 */
uint F_00c963f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc963f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c93450(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c96490 */
uint F_00c96490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc96490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  if (param_4 != 0) {
    *(undefined4 *)((int)this + 0x10) = param_3;
    *(int *)((int)this + 0x14) = param_4;
    *(gen_code32 *)((int)this + 4) = ((code *)REFP(0xc96140));
    *(undefined4 *)((int)this + 0xc) = param_2;
    *(uint *)((int)this + 8) = param_1;
    return param_1;
  }
  *(gen_code32 *)((int)this + 4) = ((code *)REFP(0xc96040));
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(uint *)((int)this + 8) = param_1;
  return param_1;
}

/* ref: FUN_00c964e0 */
uint F_00c964e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc964e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1128e60));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 0x1c))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x18))) = *(undefined4 *)((int)this + 4);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c96530 */
uint F_00c96530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1128e64));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 0xc))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(undefined4 *)((int)this + 4);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c96580 */
uint F_00c96580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc96580u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte * pbVar5;
  
  uVar3 = 0xffffffff;
  (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x18)) = 0;
  if ((*(uint *)&gen_args[2]) != 0) {
    pbVar5 = (byte *)((*(uint *)&gen_args[1]) + 2);
    do {
      iVar1 = *(*(int * PTR32 *)&gen_args[3]);
      uVar3 = iVar1 + (uint)pbVar5[-2] * 0xc;
      uVar4 = iVar1 + (uint)pbVar5[-1] * 0xc;
      iVar1 = iVar1 + (uint)*pbVar5 * 0xc;
      (*(int *)(gen_frame + 0xc)) = iVar1;
      bVar2 = F_00553ba0((*(uint *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),uVar3,uVar4,iVar1,&(*(undefined4 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[1]));
      if (bVar2 != 0) {
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 4))
                  (uVar3,uVar4,(*(int *)(gen_frame + 0xc)),(*(undefined4 *)&gen_args[5]),(*(uint *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[6]),&(*(uint *)(gen_frame + 0x14)));
      }
      uVar4 = (*(uint *)(gen_frame + 0x18)) + 1;
      pbVar5 = pbVar5 + 6;
      (*(uint *)(gen_frame + 0x18)) = uVar4;
      uVar3 = (*(uint *)(gen_frame + 0x14));
    } while (uVar4 < (*(uint *)&gen_args[2]));
  }
  return uVar3;
}

/* ref: FUN_00c96660 */
uint F_00c96660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc96660u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined2 * puVar5;
  
  (*(int * PTR32 *)(gen_frame + 0x18)) = (*(int * PTR32 *)&gen_args[0]);
  uVar3 = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x24)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x20)) = (*(int * PTR32 *)&gen_args[0])[2];
  (*(uint *)(gen_frame + 0x1c)) = (*(int * PTR32 *)&gen_args[0])[3];
  (*(uint *)(gen_frame + 0x28)) = 0;
  if ((*(uint *)&gen_args[2]) != 0) {
    puVar5 = (undefined2 *)((*(uint *)&gen_args[1]) + 4);
    do {
      if ((CONCAT12(*(undefined1 *)((int)puVar5 + -1),*puVar5) & (*(uint *)(gen_frame + 0x20))) == (*(uint *)(gen_frame + 0x1c))) {
        iVar1 = *(*(int * PTR32 *)&gen_args[3]);
        uVar3 = iVar1 + (uint)*(byte *)((int)puVar5 + -3) * 0xc;
        uVar4 = iVar1 + (uint)*(byte *)(puVar5 + -2) * 0xc;
        iVar1 = iVar1 + (uint)*(byte *)(puVar5 + -1) * 0xc;
        (*(int *)(gen_frame + 0x14)) = iVar1;
        bVar2 = F_00553ba0((*(uint *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),uVar4,uVar3,iVar1,&(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
        if (bVar2 != 0) {
          ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 4))
                    (uVar4,uVar3,(*(int *)(gen_frame + 0x14)),(*(undefined4 *)&gen_args[5]),(*(uint *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x8)),(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[6]),&(*(uint *)(gen_frame + 0x24)));
        }
      }
      uVar4 = (*(uint *)(gen_frame + 0x28)) + 1;
      puVar5 = puVar5 + 3;
      (*(uint *)(gen_frame + 0x28)) = uVar4;
      uVar3 = (*(uint *)(gen_frame + 0x24));
    } while (uVar4 < (*(uint *)&gen_args[2]));
  }
  return uVar3;
}

/* ref: FUN_00c96760 */
uint F_00c96760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc96760u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined2 * puVar5;
  
  (*(uint *)(gen_frame + 0x18)) = (*(int * PTR32 *)&gen_args[0])[2];
  (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x14)) = (*(int * PTR32 *)&gen_args[0])[3];
  uVar3 = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0x24)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x1c)) = (*(int * PTR32 *)&gen_args[0])[4];
  (*(uint *)(gen_frame + 0x20)) = ~(*(int * PTR32 *)&gen_args[0])[5];
  (*(uint *)(gen_frame + 0x28)) = 0;
  if ((*(uint *)&gen_args[2]) != 0) {
    puVar5 = (undefined2 *)((*(uint *)&gen_args[1]) + 4);
    do {
      if (((CONCAT12(*(undefined1 *)((int)puVar5 + -1),*puVar5) & (*(uint *)(gen_frame + 0x20)) | (*(uint *)(gen_frame + 0x1c))) & (*(uint *)(gen_frame + 0x18)))
          == (*(uint *)(gen_frame + 0x14))) {
        iVar1 = *(*(int * PTR32 *)&gen_args[3]);
        uVar3 = iVar1 + (uint)*(byte *)(puVar5 + -2) * 0xc;
        uVar4 = iVar1 + (uint)*(byte *)((int)puVar5 + -3) * 0xc;
        iVar1 = iVar1 + (uint)*(byte *)(puVar5 + -1) * 0xc;
        (*(int *)(gen_frame + 0xc)) = iVar1;
        bVar2 = F_00553ba0((*(uint *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),uVar3,uVar4,iVar1,&(*(undefined4 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[1]));
        if (bVar2 != 0) {
          ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 4))
                    (uVar3,uVar4,(*(int *)(gen_frame + 0xc)),(*(undefined4 *)&gen_args[5]),(*(uint *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[6]),&(*(uint *)(gen_frame + 0x24)));
        }
      }
      uVar4 = (*(uint *)(gen_frame + 0x28)) + 1;
      puVar5 = puVar5 + 3;
      (*(uint *)(gen_frame + 0x28)) = uVar4;
      uVar3 = (*(uint *)(gen_frame + 0x24));
    } while (uVar4 < (*(uint *)&gen_args[2]));
  }
  return uVar3;
}

/* ref: FUN_00c96890 */
uint F_00c96890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c96950((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00c96900 */
uint F_00c96900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c969a0((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00c96950 */
uint F_00c96950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1128e64));
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0xc))) = *(undefined4 *)((int)this + 0xc);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c969a0 */
uint F_00c969a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc969a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1128e60));
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x1c))) = *(undefined4 *)((int)this + 0xc);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x18))) = *(undefined4 *)((int)this + 8);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c969f0 */
uint F_00c969f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc969f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1128e68));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c96a20 */
uint F_00c96a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1128e70));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c96a60 */
uint F_00c96a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc96a60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  if (param_4 != 0) {
    *(undefined4 *)((int)this + 0x10) = param_3;
    *(int *)((int)this + 0x14) = param_4;
    *(gen_code32 *)((int)this + 4) = ((code *)REFP(0xc96760));
    *(undefined4 *)((int)this + 0xc) = param_2;
    *(uint *)((int)this + 8) = param_1;
    return param_1;
  }
  *(gen_code32 *)((int)this + 4) = ((code *)REFP(0xc96660));
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(uint *)((int)this + 8) = param_1;
  return param_1;
}

/* ref: FUN_00c96ab0 */
uint F_00c96ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc96ab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1128e64));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x1128e60));
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[1])REFP(0x1128f10));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x1128f0c));
  *(undefined4 *)((int)this + 0x34) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x1128f20));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1128f1c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[1])REFP(0x1128f18));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x1128f14));
  *(undefined4 *)((int)this + 0x20) = 0xffffff80;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = param_2;
  *(undefined4 *)((int)this + 0x48) = 0x7000;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined2 *)((int)this + 0x54) = 1;
  F_00c9f3e0((int)this + 0x58);
  return (uint)this;
}

/* ref: FUN_00c96b40 */
unsigned int F_00c96b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00c96b50 */
unsigned int F_00c96b50(void)
{
  GEN_ENTER(0xc96b50u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c96b60 */
byte F_00c96b60(unsigned int gen_a0)
{
  GEN_ENTER(0xc96b60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x30) == 0;
}

/* ref: FUN_00c96b70 */
uint F_00c96b70(unsigned int gen_a0)
{
  GEN_ENTER(0xc96b70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x48);
}

/* ref: FUN_00c96b80 */
uint F_00c96b80(unsigned int gen_a0)
{
  GEN_ENTER(0xc96b80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x4c);
}

/* ref: FUN_00c96b90 */
uint F_00c96b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc96b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  
  *param_1 = *(undefined4 *)((int)this + 0x48);
  uVar1 = *(uint *)((int)this + 0x4c);
  *param_2 = uVar1;
  return uVar1;
}

/* ref: FUN_00c96bb0 */
uint F_00c96bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc96bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x48) = param_1;
  *(undefined4 *)((int)this + 0x4c) = param_2;
  return param_1;
}

/* ref: FUN_00c96bd0 */
uint F_00c96bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c96c90((undefined *)((int)this + -0x10),param_1);
  return uVar1;
}

/* ref: FUN_00c96be0 */
uint F_00c96be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c96c90((undefined *)((int)this + -0x14),param_1);
  return uVar1;
}

/* ref: FUN_00c96bf0 */
uint F_00c96bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c96c90((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00c96c00 */
unsigned int F_00c96c00(unsigned int gen_a0)
{
  GEN_ENTER(0xc96c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x1128f20));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1128f1c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[1])REFP(0x1128f18));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x1128f14));
  F_00c9f300((undefined *)((int)this + 0x58));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x1128e60));
  if (*(int *)((int)this + 0x18) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x1c))) = *(undefined4 *)((int)this + 0x1c);
  }
  if (*(int *)((int)this + 0x1c) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x18))) = *(undefined4 *)((int)this + 0x18);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1128e64));
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0xc))) = *(undefined4 *)((int)this + 0xc);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  return 0;
}

/* ref: FUN_00c96c90 */
uint F_00c96c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c96c00(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c96cc0 */
uint F_00c96cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc96cc0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = (*(uint *)&gen_args[1]) & (*(uint *)&gen_args[2]);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = (*(uint *)&gen_args[2]);
  return (*(uint *)&gen_args[2]);
}

/* ref: FUN_00c96ce0 */
unsigned int F_00c96ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96ce0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x88) = *param_2;
  *(undefined4 *)(in_ecx + 0x8c) = param_2[1];
  *(undefined4 *)(in_ecx + 0x90) = param_2[2];
  *(undefined1 *)(in_ecx + 0x78) = 1;
  return 0;
}

/* ref: FUN_00c96d10 */
uint F_00c96d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96d10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0xe8);
  param_2[1] = *(undefined4 *)(in_ecx + 0xec);
  param_2[2] = *(undefined4 *)(in_ecx + 0xf0);
  return (uint)param_2;
}

/* ref: FUN_00c96d40 */
unsigned int F_00c96d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96d40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x94) = *param_2;
  *(undefined4 *)(in_ecx + 0x98) = param_2[1];
  *(undefined4 *)(in_ecx + 0x9c) = param_2[2];
  *(undefined1 *)(in_ecx + 0x78) = 1;
  return 0;
}

/* ref: FUN_00c96d70 */
unsigned int F_00c96d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96d70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0xa0) = *param_2;
  *(undefined4 *)(in_ecx + 0xa4) = param_2[1];
  *(undefined4 *)(in_ecx + 0xa8) = param_2[2];
  *(undefined1 *)(in_ecx + 0x78) = 1;
  return 0;
}

/* ref: FUN_00c96da0 */
unsigned int F_00c96da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96da0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(in_ecx + 0xf8);
  uVar2 = *(undefined4 *)(in_ecx + 0xfc);
  *param_2 = *(undefined4 *)(in_ecx + 0xf4);
  param_2[3] = 0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  uVar1 = *(undefined4 *)(in_ecx + 0x100);
  uVar2 = *(undefined4 *)(in_ecx + 0x104);
  uVar3 = *(undefined4 *)(in_ecx + 0x108);
  param_2[7] = 0;
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  param_2[6] = uVar3;
  uVar1 = *(undefined4 *)(in_ecx + 0x10c);
  uVar2 = *(undefined4 *)(in_ecx + 0x110);
  uVar3 = *(undefined4 *)(in_ecx + 0x114);
  param_2[0xb] = 0;
  uVar4 = REFG(float, 0x1087f04);
  param_2[8] = uVar1;
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  uVar1 = *(undefined4 *)(in_ecx + 0x11c);
  uVar2 = *(undefined4 *)(in_ecx + 0x120);
  param_2[0xc] = *(undefined4 *)(in_ecx + 0x118);
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar4;
  return 0;
}

/* ref: FUN_00c96e70 */
uint F_00c96e70(void)
{
  GEN_ENTER(0xc96e70u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: FUN_00c96e80 */
byte F_00c96e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00c96e90 */
byte F_00c96e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc96e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00c96ea0 */
uint F_00c96ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c96ee0((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00c96eb0 */
uint F_00c96eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c96ee0((undefined *)((int)this + -0x68),param_1);
  return uVar1;
}

/* ref: FUN_00c96ec0 */
uint F_00c96ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c96ee0((undefined *)((int)this + -0x10),param_1);
  return uVar1;
}

/* ref: FUN_00c96ed0 */
uint F_00c96ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c96ee0((undefined *)((int)this + -0x14),param_1);
  return uVar1;
}

/* ref: FUN_00c96ee0 */
uint F_00c96ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x1128f90));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1128f8c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[1])REFP(0x1128f88));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x1128f84));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[2])REFP(0x1128f7c));
  if (*(int *)((int)this + 0x6c) != 0) {
    F_00c96f90(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x34) + 4))));
    if (*(char *)((int)this + 0x7a) == '\0') {
      piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0x34) + 0x20)));
      *piVar1 = *piVar1 + -1;
    }
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  F_00c96c00(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c96f50 */
uint F_00c96f50(unsigned int gen_a0)
{
  GEN_ENTER(0xc96f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00c96f60 */
unsigned int F_00c96f60(unsigned int gen_a0)
{
  GEN_ENTER(0xc96f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 8))))(*(int * PTR32 *)((int)this + 4));
  return 0;
}

/* ref: FUN_00c96f70 */
uint F_00c96f70(unsigned int gen_a0)
{
  GEN_ENTER(0xc96f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) + 4))))(*(int *)((int)this + 4) + 4);
  return uVar1;
}

/* ref: FUN_00c96f90 */
unsigned int F_00c96f90(unsigned int gen_a0)
{
  GEN_ENTER(0xc96f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) + 8))))(*(int *)((int)this + 4) + 4);
  return 0;
}

/* ref: FUN_00c96fb0 */
uint F_00c96fb0(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xc96fb0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  int param_1 = (int)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  F_00c475c9(((char *)(gen_frame + 0x8)),0x800,param_2,((undefined *)&gen_args[2]));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 4) + 8))) + 4))))
                    (*(int *)(param_1 + 4) + 8,((char *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return uVar1;
}

/* ref: FUN_00c97010 */
uint F_00c97010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc97010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint in_EAX = 0;
  
  if ((char)param_1 == '\0') {
    in_EAX = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) + 8))))
                       (*(int *)((int)this + 4) + 8,param_2);
  }
  return in_EAX;
}

/* ref: FUN_00c97030 */
uint F_00c97030(unsigned int gen_a0)
{
  GEN_ENTER(0xc97030u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1128ffc));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = GEN_FLT_TO(in_ecx[8], REFG(float, 0x10916ec));
  return (uint)in_ecx;
}

/* ref: FUN_00c97070 */
byte F_00c97070(unsigned int gen_a0)
{
  GEN_ENTER(0xc97070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 8))))(*(int * PTR32 *)((int)this + 0xc));
  return (byte)uVar1;
}

/* ref: FUN_00c97080 */
uint F_00c97080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc97080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0xc))))
                    (*(int * PTR32 *)((int)this + 0xc),param_1,param_2,(uint)(*(int *)((int)this + 8) == 1)
                    );
  return uVar1;
}

/* ref: FUN_00c970b0 */
uint F_00c970b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc970b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x10))))
                    (*(int * PTR32 *)((int)this + 0xc),param_1,param_2,(uint)(*(int *)((int)this + 8) == 1)
                     ,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00c970f0 */
uint F_00c970f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc970f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x14))))(*(int * PTR32 *)((int)this + 0xc));
  return uVar1;
}

/* ref: FUN_00c97100 */
uint F_00c97100(unsigned int gen_a0)
{
  GEN_ENTER(0xc97100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x18))))(*(int * PTR32 *)((int)this + 0xc));
  return uVar1;
}

/* ref: FUN_00c97110 */
uint F_00c97110(unsigned int gen_a0)
{
  GEN_ENTER(0xc97110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x1c))))(*(int * PTR32 *)((int)this + 0xc));
  return uVar1;
}

/* ref: FUN_00c97120 */
uint F_00c97120(unsigned int gen_a0)
{
  GEN_ENTER(0xc97120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x20))))(*(int * PTR32 *)((int)this + 0xc));
  return uVar1;
}

/* ref: FUN_00c97130 */
unsigned int F_00c97130(unsigned int gen_a0)
{
  GEN_ENTER(0xc97130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x24))))(*(int * PTR32 *)((int)this + 0xc));
  return 0;
}

/* ref: FUN_00c97140 */
uint F_00c97140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc97140u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x2c)) = *(*(undefined4 * PTR32 *)&gen_args[2]);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = &(*(undefined4 *)(gen_frame + 0x2c));
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0x30)) = (*(undefined4 * PTR32 *)&gen_args[2])[1];
  (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 * PTR32 *)&gen_args[2])[2];
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = &(*(undefined4 *)&gen_args[4]);
  (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x10abe98);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = &REFG(undefined, 0x15d76b4);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0x2c))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),(*(undefined4 *)&gen_args[1]),0xffffffff,&(*(undefined4 *)(gen_frame + 0xc)));
  return uVar1;
}

/* ref: FUN_00c971c0 */
byte F_00c971c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc971c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = &(*(undefined4 *)(gen_frame + 0x2c));
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[4]);
  (*(undefined4 *)(gen_frame + 0x2c)) = *(*(undefined4 * PTR32 *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0x30)) = (*(undefined4 * PTR32 *)&gen_args[3])[1];
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = &(*(undefined4 *)&gen_args[5]);
  (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 * PTR32 *)&gen_args[3])[2];
  (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x10abe98);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = &REFG(undefined, 0x15d76b4);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0x2c))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0xc)));
  return (byte)uVar1;
}

/* ref: FUN_00c97240 */
uint F_00c97240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc97240u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x2c)) = *(*(undefined4 * PTR32 *)&gen_args[4]);
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[5]);
  (*(undefined4 *)(gen_frame + 0x30)) = (*(undefined4 * PTR32 *)&gen_args[4])[1];
  (*(undefined4 *)(gen_frame + 0x20)) = (*(undefined4 *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 * PTR32 *)&gen_args[4])[2];
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = &(*(undefined4 *)(gen_frame + 0x2c));
  (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x10abe98);
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = &(*(undefined4 *)&gen_args[6]);
  (*(undefined4 *)(gen_frame + 0xc)) = 4;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0x2c))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0xc)));
  return uVar1;
}

/* ref: FUN_00c972c0 */
uint F_00c972c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc972c0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x2c)) = *(*(undefined4 * PTR32 *)&gen_args[5]);
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[6]);
  (*(undefined4 *)(gen_frame + 0x30)) = (*(undefined4 * PTR32 *)&gen_args[5])[1];
  (*(undefined4 *)(gen_frame + 0x20)) = (*(undefined4 *)&gen_args[4]);
  (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 * PTR32 *)&gen_args[5])[2];
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = &(*(undefined4 *)(gen_frame + 0x2c));
  (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x10abe98);
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = &(*(undefined4 *)&gen_args[7]);
  (*(undefined4 *)(gen_frame + 0xc)) = 6;
  (*(float *)(gen_frame + 0x1c)) = (*(float *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 0xc) + 0x2c))))
                    (*(int * PTR32 *)((*(int *)&gen_args[0]) + 0xc),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0xc)));
  return uVar1;
}

/* ref: FUN_00c97340 */
byte F_00c97340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc97340u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x2c)) = *(*(undefined4 * PTR32 *)&gen_args[4]);
  (*(undefined4 *)(gen_frame + 0x30)) = (*(undefined4 * PTR32 *)&gen_args[4])[1];
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = &(*(undefined4 *)(gen_frame + 0x2c));
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = &(*(undefined4 *)&gen_args[6]);
  (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 * PTR32 *)&gen_args[4])[2];
  (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x10abe98);
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[5]);
  (*(undefined4 *)(gen_frame + 0xc)) = 2;
  (*(float *)(gen_frame + 0x1c)) = (*(float *)&gen_args[3]);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = &REFG(undefined, 0x15d76b4);
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 0xc) + 0x2c))))
                    (*(int * PTR32 *)((*(int *)&gen_args[0]) + 0xc),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0xc)));
  return (byte)uVar1;
}

/* ref: FUN_00c973c0 */
uint F_00c973c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xc973c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0x30))))
                    (param_2,param_3,param_4,param_5,param_6,(undefined4)gen_fl2bits(param_7));
  return uVar1;
}

/* ref: FUN_00c973f0 */
uint F_00c973f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc973f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)&gen_args[2]);
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = &(*(undefined4 *)&gen_args[4]);
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0xc)) = 1;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = &REFG(undefined, 0x15d76b4);
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0x2c))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),(*(undefined4 *)&gen_args[1]),0xffffffff,&(*(undefined4 *)(gen_frame + 0xc)));
  return uVar1;
}

/* ref: FUN_00c97440 */
byte F_00c97440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc97440u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)&gen_args[3]);
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = &(*(undefined4 *)&gen_args[5]);
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[4]);
  (*(undefined4 *)(gen_frame + 0xc)) = 1;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = &REFG(undefined, 0x15d76b4);
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0x2c))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0xc)));
  return (byte)uVar1;
}

/* ref: FUN_00c974a0 */
byte F_00c974a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc974a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[5]);
  (*(undefined4 *)(gen_frame + 0x20)) = (*(undefined4 *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)&gen_args[4]);
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = &(*(undefined4 *)&gen_args[6]);
  (*(undefined4 *)(gen_frame + 0xc)) = 5;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0x2c))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0xc)));
  return (byte)uVar1;
}

/* ref: FUN_00c974f0 */
uint F_00c974f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc974f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[6]);
  (*(undefined4 *)(gen_frame + 0x20)) = (*(undefined4 *)&gen_args[4]);
  (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)&gen_args[5]);
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = &(*(undefined4 *)&gen_args[7]);
  (*(undefined4 *)(gen_frame + 0xc)) = 6;
  (*(float *)(gen_frame + 0x1c)) = (*(float *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 0xc) + 0x2c))))
                    (*(int * PTR32 *)((*(int *)&gen_args[0]) + 0xc),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0xc)));
  return uVar1;
}

/* ref: FUN_00c97550 */
byte F_00c97550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc97550u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)&gen_args[4]);
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = &(*(undefined4 *)&gen_args[6]);
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[5]);
  (*(undefined4 *)(gen_frame + 0xc)) = 3;
  (*(float *)(gen_frame + 0x1c)) = (*(float *)&gen_args[3]);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = &REFG(undefined, 0x15d76b4);
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 0xc) + 0x2c))))
                    (*(int * PTR32 *)((*(int *)&gen_args[0]) + 0xc),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0xc)));
  return (byte)uVar1;
}

/* ref: FUN_00c975b0 */
byte F_00c975b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc975b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x2c))))(*(int * PTR32 *)((int)this + 0xc));
  return (byte)uVar1;
}

/* ref: FUN_00c975c0 */
uint F_00c975c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc975c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x38))))
                    (*(int * PTR32 *)((int)this + 0xc),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c975d0 */
byte F_00c975d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc975d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x34))))(*(int * PTR32 *)((int)this + 0xc));
  return (byte)uVar1;
}

/* ref: FUN_00c975e0 */
uint F_00c975e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc975e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x3c))))
                    (*(int * PTR32 *)((int)this + 0xc),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c975f0 */
unsigned int F_00c975f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc975f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x40))))(*(int * PTR32 *)((int)this + 0xc));
  return 0;
}

/* ref: FUN_00c97600 */
uint F_00c97600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc97600u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0xc),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c97610 */
uint F_00c97610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc97610u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x44))))
                    (*(int * PTR32 *)((int)this + 0xc),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c97620 */
unsigned int F_00c97620(unsigned int gen_a0)
{
  GEN_ENTER(0xc97620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  for (piVar1 = *(int * PTR32 *)((int)this + 0xc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[3]) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1);
  }
  return 0;
}

/* ref: FUN_00c97680 */
unsigned int F_00c97680(unsigned int gen_a0)
{
  GEN_ENTER(0xc97680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1128ffc));
  iVar1 = *(int *)((int)this + 0x10);
  while (iVar1 != 0) {
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0xc);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)((int)this + 0xc) = puVar2[3];
      if (puVar2[2] != 0) {
        *(undefined4 *)(puVar2[2] + 0xc) = puVar2[3];
      }
      if (puVar2[3] != 0) {
        *(undefined4 *)(puVar2[3] + 8) = puVar2[2];
      }
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
      ((code *)*(gen_code32 *)*puVar2)(puVar2,0);
      F_00ca2140(puVar2,&REFG(undefined, 0x1128ff4),this);
    }
    iVar1 = *(int *)((int)this + 0x10);
  }
  return 0;
}

/* ref: FUN_00c976f0 */
byte F_00c976f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc976f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = *(int *)((int)this + 0x10);
  while (iVar1 != 0) {
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0xc);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)((int)this + 0xc) = puVar2[3];
      if (puVar2[2] != 0) {
        *(undefined4 *)(puVar2[2] + 0xc) = puVar2[3];
      }
      if (puVar2[3] != 0) {
        *(undefined4 *)(puVar2[3] + 8) = puVar2[2];
      }
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
      ((code *)*(gen_code32 *)*puVar2)(puVar2,0);
      F_00ca2140(puVar2,&REFG(undefined, 0x1128ff5),this);
    }
    iVar1 = *(int *)((int)this + 0x10);
  }
  return 1;
}

/* ref: FUN_00c97760 */
uint F_00c97760(unsigned int gen_a0)
{
  GEN_ENTER(0xc97760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00ca2100(0x18,&REFG(undefined, 0x1128ff6),this);
  if (this_00 == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00c97b80(this_00,this);
  }
  *(undefined4 *)(uVar1 + 0xc) = *(undefined4 *)((int)this + 0xc);
  if (*(int *)((int)this + 0xc) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = uVar1;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  *(uint *)((int)this + 0xc) = uVar1;
  return uVar1;
}

/* ref: FUN_00c977a0 */
unsigned int F_00c977a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc977a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    if (*(undefined4 * PTR32 *)((int)this + 0xc) == param_1) {
      *(undefined4 *)((int)this + 0xc) = param_1[3];
    }
    if (param_1[2] != 0) {
      *(undefined4 *)(param_1[2] + 0xc) = param_1[3];
    }
    if (param_1[3] != 0) {
      *(undefined4 *)(param_1[3] + 8) = param_1[2];
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
    ((code *)*(gen_code32 *)*param_1)(param_1,0);
    F_00ca2140(param_1,&REFG(undefined, 0x1128ff7),this);
  }
  return 0;
}

/* ref: FUN_00c97800 */
uint F_00c97800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc97800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  this_00 = (undefined *)F_00ca2100(0x18,&REFG(undefined, 0x1128ff6),this);
  if (this_00 == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00c97b80(this_00,this);
  }
  *(undefined4 *)(uVar1 + 0xc) = *(undefined4 *)((int)this + 0xc);
  if (*(int *)((int)this + 0xc) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = uVar1;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  *(uint *)((int)this + 0xc) = uVar1;
  return uVar1;
}

/* ref: FUN_00c978a0 */
byte F_00c978a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc978a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c978e0 */
uint F_00c978e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc978e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00c978f0 */
uint F_00c978f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc978f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00c97900 */
uint F_00c97900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc97900u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c97910 */
unsigned int F_00c97910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc97910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)this;
  if (*(int *)this != 0) {
    *(int *)(*(int *)this + 8) = param_1;
  }
  *(int *)this = param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00c97930 */
uint F_00c97930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc97930u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c97940 */
uint F_00c97940(unsigned int gen_a0)
{
  GEN_ENTER(0xc97940u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00c97990 */
unsigned int F_00c97990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc97990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    if (*(int *)this == param_1) {
      *(undefined4 *)this = *(undefined4 *)(param_1 + 0xc);
    }
    if (*(int *)(param_1 + 8) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + 0xc))) = *(undefined4 *)(param_1 + 0xc);
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xc) + 8))) = *(undefined4 *)(param_1 + 8);
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  return 0;
}

/* ref: FUN_00c97a10 */
unsigned int F_00c97a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc97a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)this == param_1) {
    *(undefined4 *)this = *(undefined4 *)(param_1 + 0xc);
  }
  if (*(int *)(param_1 + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + 0xc))) = *(undefined4 *)(param_1 + 0xc);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xc) + 8))) = *(undefined4 *)(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  return 0;
}

/* ref: FUN_00c97a60 */
uint F_00c97a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc97a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1128ff8));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 0xc))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(undefined4 *)((int)this + 4);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c97ad0 */
uint F_00c97ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc97ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c97b20((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00c97b20 */
uint F_00c97b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc97b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x1129004));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1129000));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1128ff8));
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0xc))) = *(undefined4 *)((int)this + 0xc);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c97b80 */
uint F_00c97b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc97b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1128ff8));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1129048));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1129040));
  *(undefined4 *)((int)this + 0x10) = param_1;
  this_00 = (undefined *)F_00ca2100(0x28,&REFG(undefined1, 0x107fc63),param_1);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00ca16b0(this_00,param_1);
    *(uint *)((int)this + 0x14) = uVar1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)this;
}

/* ref: FUN_00c97c20 */
unsigned int F_00c97c20(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xc97c20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  F_00c9fa30(*(undefined4 *)(in_ecx + 0x14),param_2,param_3,param_4,param_5);
  return 0;
}

/* ref: FUN_00c97c60 */
byte F_00c97c60(unsigned int gen_a0)
{
  GEN_ENTER(0xc97c60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((int *)GEN_TOP((*(int *)(in_ecx + 0x14) + 0x20))) != 0;
}

/* ref: FUN_00c97c70 */
uint F_00c97c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc97c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00ca1200(*(undefined * PTR32 *)((int)this + 0x14),param_1,param_2,
                       (uint)(*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) == 1));
  return uVar1;
}

/* ref: FUN_00c97ca0 */
uint F_00c97ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc97ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a6;
  uint uVar1;
  
  uVar1 = F_00ca12f0(*(undefined * PTR32 *)((int)this + 0x14),param_1,param_2,
                       (uint)(*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) == 1),*param_4,param_4[1],
                       param_4[2],*param_5,param_5[1],param_5[2],*param_6,param_6[1],param_6[2]);
  return uVar1;
}

/* ref: FUN_00c97d10 */
uint F_00c97d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc97d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  uint uVar1;
  
  uVar1 = F_00ca13a0(*(undefined * PTR32 *)((int)this + 0x14),param_1,*param_2,param_2[1],param_2[2],*param_3,
                       param_3[1],param_3[2],*param_4,param_4[1],param_4[2]);
  return uVar1;
}

/* ref: FUN_00c97d70 */
uint F_00c97d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc97d70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  uint uVar1;
  
  uVar1 = F_00ca1410(*(undefined * PTR32 *)((int)this + 0x14),param_1,*param_2,param_2[1],param_2[2],*param_3,
                       param_3[1],param_3[2],*param_4,param_4[1],param_4[2]);
  return uVar1;
}

/* ref: FUN_00c97dd0 */
uint F_00c97dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc97dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  uint uVar1;
  
  uVar1 = F_00ca1480(*(undefined * PTR32 *)((int)this + 0x14),param_1,*param_2,param_2[1],param_2[2],*param_3,
                       param_3[1],param_3[2],*param_4,param_4[1],param_4[2]);
  return uVar1;
}

/* ref: FUN_00c97e30 */
uint F_00c97e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc97e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  uint uVar1;
  
  uVar1 = F_00ca14f0(*(undefined * PTR32 *)((int)this + 0x14),param_1,*param_2,param_2[1],param_2[2],*param_3,
                       param_3[1],param_3[2],*param_4,param_4[1],param_4[2]);
  return uVar1;
}

/* ref: FUN_00c97e90 */
uint F_00c97e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc97e90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c9fa90(param_2);
  return uVar1;
}

/* ref: FUN_00c97ea0 */
unsigned int F_00c97ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xc97ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00ca1760(*(undefined * PTR32 *)((int)this + 0x14));
  return 0;
}

/* ref: FUN_00c97eb0 */
uint F_00c97eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xc97eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint param_5 = (uint)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  uint uVar1;
  
  uVar1 = F_00c9fea0(*(undefined4 *)(param_1 + 0x14),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00c97ee0 */
byte F_00c97ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc97ee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  bVar1 = F_00ca0220(*(undefined * PTR32 *)((int)this + 0x14),param_1,param_2,param_3);
  return bVar1;
}

/* ref: FUN_00c97ef0 */
uint F_00c97ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc97ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00ca0980(*(undefined * PTR32 *)((int)this + 0x14),param_1,param_2);
  return (uint)(*(int *)(param_1 + 0x40) != 0);
}

/* ref: FUN_00c97f20 */
uint F_00c97f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc97f20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00ca0ac0(*(undefined * PTR32 *)((int)this + 0x14),param_1,param_2,param_3);
  return (uint)(*(int *)(param_1 + 0x40) != 0);
}

/* ref: FUN_00c97f50 */
unsigned int F_00c97f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc97f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ca0c00(*(undefined * PTR32 *)((int)this + 0x14),param_1);
  return 0;
}

/* ref: FUN_00c97f60 */
unsigned int F_00c97f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc97f60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00c97f70 */
unsigned int F_00c97f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc97f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00ca0d90(*(undefined * PTR32 *)((int)this + 0x14),param_1,param_2);
  return 0;
}

/* ref: FUN_00c97f80 */
unsigned int F_00c97f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc97f80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00ca0e90(*(undefined * PTR32 *)((int)this + 0x14),param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_00c97f90 */
uint F_00c97f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc97f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c98020((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00c97fa0 */
unsigned int F_00c97fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xc97fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1129048));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1129040));
  ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x14))))(*(undefined4 * PTR32 *)((int)this + 0x14),0);
  F_00ca2140(*(undefined4 *)((int)this + 0x14),&REFG(undefined1, 0x107fc63),*(undefined4 *)((int)this + 0x10));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x1129004));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1129000));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1128ff8));
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0xc))) = *(undefined4 *)((int)this + 0xc);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  return 0;
}

/* ref: FUN_00c98020 */
uint F_00c98020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc98020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c97fa0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c98050 */
uint F_00c98050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc98050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c97680(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c98080 */
uint F_00c98080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc98080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00c98090 */
unsigned int F_00c98090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc98090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)((int)this + 4);
  *param_1 = *param_2 + *(float *)this;
  fVar2 = *(float *)((int)this + 8);
  param_1[1] = param_2[1] + fVar1;
  param_1[2] = param_2[2] + fVar2;
  return 0;
}

/* ref: FUN_00c98100 */
unsigned int F_00c98100(unsigned int gen_a0)
{
  GEN_ENTER(0xc98100u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00c98130 */
uint F_00c98130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc98130u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + param_2 * 4;
}

/* ref: FUN_00c98140 */
uint F_00c98140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc98140u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + param_2 * 4;
}

/* ref: FUN_00c98150 */
unsigned int F_00c98150(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xc98150u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  return 0;
}

/* ref: FUN_00c981c0 */
unsigned int F_00c981c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc981c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return 0;
}

/* ref: FUN_00c981e0 */
uint F_00c981e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc981e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + in_ecx;
}

/* ref: FUN_00c981f0 */
uint F_00c981f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc981f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  param_2[1] = in_ecx[1];
  param_2[2] = in_ecx[2];
  return (uint)param_2;
}

/* ref: FUN_00c98210 */
unsigned int F_00c98210(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc98210u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  uint param_6 = (uint)gen_a5;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float fVar8;
  
  fVar1 = *(float *)param_6;
  fVar7 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar1);
  fVar2 = (float)fVar7;
  fVar3 = *(float *)(param_6 + 4);
  fVar7 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar3);
  fVar4 = (float)fVar7;
  fVar5 = *(float *)(param_6 + 8);
  fVar7 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar5);
  fVar6 = (float)fVar7;
  fVar7 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar1);
  fVar1 = (float)fVar7;
  fVar7 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar3);
  fVar3 = (float)fVar7;
  fVar7 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar5);
  fVar5 = (float)fVar7;
  fVar8 = gen_bits2f((uint)gen_fl2bits(fVar2) ^ REFG(uint, 0x10920d0));
  param_5[2] = gen_bits2f((uint)gen_fl2bits(fVar4) ^ REFG(uint, 0x10920d0));
  param_5[3] = 0.0;
  param_5[1] = fVar3 * fVar6;
  *param_5 = fVar5 * fVar3;
  param_5[7] = 0.0;
  param_5[4] = ((float)GEN_TOF(((double)fVar5 * ((double)fVar4 * (double)fVar2) -
                      (double)fVar1 * (double)fVar6)));
  param_5[5] = ((float)GEN_TOF(((double)fVar5 * (double)fVar1 +
                      (double)fVar6 * ((double)fVar4 * (double)fVar2))));
  param_5[6] = fVar3 * fVar2;
  param_5[8] = ((float)GEN_TOF(((double)fVar5 * ((double)fVar1 * (double)fVar4) -
                      (double)fVar8 * (double)fVar6)));
  param_5[9] = ((float)GEN_TOF(((double)fVar6 * ((double)fVar1 * (double)fVar4) -
                      (double)fVar5 * (double)fVar2)));
  param_5[0xb] = 0.0;
  param_5[10] = (float)((float10)fVar3 * (float10)fVar1);
  param_5[0xc] = 0.0;
  param_5[0xd] = 0.0;
  param_5[0xe] = 0.0;
  param_5[0xf] = GEN_FLT_TO(param_5[0xf], REFG(float, 0x1087f04));
  return 0;
}

/* ref: FUN_00c983f0 */
unsigned int F_00c983f0(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc983f0u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  uint param_6 = (uint)gen_a5;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  
  fVar1 = *(float *)param_6;
  fVar6 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar1);
  fVar2 = (float)fVar6;
  fVar3 = *(float *)(param_6 + 4);
  fVar6 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar3);
  fVar4 = (float)fVar6;
  fVar8 = *(float *)(param_6 + 8);
  fVar6 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar8);
  fVar5 = (float)fVar6;
  fVar6 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar1);
  fVar1 = (float)fVar6;
  fVar6 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar3);
  fVar7 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar8);
  fVar3 = (float)fVar7;
  fVar7 = (float10)(float)fVar6;
  *param_5 = (float)(fVar7 * (float10)fVar3);
  param_5[1] = (float)(fVar7 * (float10)fVar5);
  param_5[2] = ((float)GEN_TOF(-(float10)fVar4));
  param_5[3] = 0.0;
  param_5[4] = ((float)GEN_TOF(((double)fVar3 * ((double)fVar4 * (double)fVar2) -
                      (double)fVar1 * (double)fVar5)));
  param_5[7] = 0.0;
  param_5[6] = (float)(fVar7 * (float10)fVar2);
  param_5[5] = ((float)GEN_TOF(((double)fVar3 * (double)fVar1 +
                      (double)fVar5 * ((double)fVar4 * (double)fVar2))));
  fVar8 = gen_bits2f((uint)gen_fl2bits(fVar2) ^ REFG(uint, 0x10920d0));
  param_5[9] = ((float)GEN_TOF(((double)fVar5 * ((double)fVar1 * (double)fVar4) -
                      (double)fVar3 * (double)fVar2)));
  param_5[0xb] = 0.0;
  param_5[8] = ((float)GEN_TOF(((double)fVar3 * ((double)fVar1 * (double)fVar4) -
                      (double)fVar8 * (double)fVar5)));
  param_5[10] = (float)fVar6 * fVar1;
  param_5[0xc] = 0.0;
  param_5[0xd] = 0.0;
  param_5[0xe] = 0.0;
  param_5[0xf] = GEN_FLT_TO(param_5[0xf], REFG(float, 0x1087f04));
  return 0;
}

/* ref: FUN_00c985b0 */
uint F_00c985b0(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xc985b0u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float10 fVar8;
  float10 fVar9;
  uint uVar10;
  
  if ((*(uint *)&REFG(undefined, 0x15d76a0) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d76a0) = *(uint *)&REFG(undefined, 0x15d76a0) | 1;
    REFG(float, 0x15d7690) = 0;
    REFG(float, 0x15d7694) = 0;
    REFG(float, 0x15d7698) = 0;
    REFG(float, 0x15d769c) = REFG(float, 0x1087f04);
  }
  uVar7 = REFG(float, 0x15d769c);
  uVar6 = REFG(float, 0x15d7698);
  uVar5 = REFG(float, 0x15d7694);
  uVar4 = REFG(float, 0x15d7690);
  fVar8 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  uVar10 = (uint)gen_fl2bits((float)fVar8) ^ REFG(uint, 0x10920d0);
  fVar9 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  if ((*(uint *)&REFG(undefined, 0x15d7664) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7664) = *(uint *)&REFG(undefined, 0x15d7664) | 1;
    REFG(float, 0x15d7654) = REFG(float, 0x1087f04);
    REFG(float, 0x15d7658) = 0;
    REFG(float, 0x15d765c) = 0;
    REFG(float, 0x15d7660) = 0;
  }
  uVar3 = REFG(float, 0x15d7660);
  uVar2 = REFG(float, 0x15d765c);
  uVar1 = REFG(float, 0x15d7654);
  param_5[1] = GEN_FLT_TO(param_5[1], REFG(float, 0x15d7658));
  *param_5 = uVar1;
  param_5[2] = uVar2;
  param_5[3] = uVar3;
  param_5[4] = 0;
  param_5[5] = (undefined4)gen_fl2bits((float)fVar9);
  param_5[7] = 0;
  param_5[6] = (undefined4)gen_fl2bits((float)fVar8);
  param_5[8] = 0;
  param_5[0xb] = 0;
  param_5[9] = uVar10;
  param_5[10] = (undefined4)gen_fl2bits((float)fVar9);
  param_5[0xc] = uVar4;
  param_5[0xd] = uVar5;
  param_5[0xe] = uVar6;
  param_5[0xf] = uVar7;
  return (uint)param_5;
}

/* ref: FUN_00c98740 */
uint F_00c98740(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xc98740u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float param_6 = (float)gen_a5;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  float10 fVar10;
  
  if ((*(uint *)&REFG(undefined, 0x15d76a0) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d76a0) = *(uint *)&REFG(undefined, 0x15d76a0) | 1;
    REFG(float, 0x15d7690) = 0.0;
    REFG(float, 0x15d7694) = 0.0;
    REFG(float, 0x15d7698) = 0.0;
    REFG(float, 0x15d769c) = REFG(float, 0x1087f04);
  }
  fVar8 = REFG(float, 0x15d769c);
  fVar7 = REFG(float, 0x15d7698);
  fVar6 = REFG(float, 0x15d7694);
  fVar5 = REFG(float, 0x15d7690);
  fVar9 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  fVar10 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  if ((*(uint *)&REFG(undefined, 0x15d7678) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7678) = *(uint *)&REFG(undefined, 0x15d7678) | 1;
    REFG(float, 0x15d7668) = 0.0;
    REFG(float, 0x15d766c) = REFG(float, 0x1087f04);
    REFG(float, 0x15d7670) = 0.0;
    REFG(float, 0x15d7674) = 0.0;
  }
  fVar4 = REFG(float, 0x15d7674);
  fVar3 = REFG(float, 0x15d7670);
  fVar2 = REFG(float, 0x15d766c);
  fVar1 = REFG(float, 0x15d7668);
  param_5[2] = gen_bits2f((uint)gen_fl2bits((float)fVar9) ^ REFG(uint, 0x10920d0));
  *param_5 = (float)fVar10;
  param_5[1] = 0.0;
  param_5[3] = 0.0;
  param_5[4] = fVar1;
  param_5[5] = fVar2;
  param_5[6] = fVar3;
  param_5[7] = fVar4;
  param_5[8] = (float)fVar9;
  param_5[9] = 0.0;
  param_5[10] = (float)fVar10;
  param_5[0xb] = 0.0;
  param_5[0xc] = fVar5;
  param_5[0xd] = fVar6;
  param_5[0xe] = fVar7;
  param_5[0xf] = fVar8;
  return (uint)param_5;
}

/* ref: FUN_00c988c0 */
uint F_00c988c0(float gen_a0, float gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xc988c0u, 0u, 0u, gen_a2, 0u);
  float in_xmm3 = (float)gen_a0;
  float in_xmm7 = (float)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  float10 fVar10;
  float fVar11;
  float in_xmm1;
  float in_xmm2;
  
  if ((*(uint *)&REFG(undefined, 0x15d76a0) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d76a0) = *(uint *)&REFG(undefined, 0x15d76a0) | 1;
    REFG(float, 0x15d7690) = 0.0;
    REFG(float, 0x15d7694) = 0.0;
    REFG(float, 0x15d7698) = 0.0;
    REFG(float, 0x15d769c) = REFG(float, 0x1087f04);
  }
  fVar8 = REFG(float, 0x15d769c);
  fVar7 = REFG(float, 0x15d7698);
  fVar6 = REFG(float, 0x15d7694);
  fVar5 = REFG(float, 0x15d7690);
  if ((*(uint *)&REFG(undefined, 0x15d768c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d768c) = *(uint *)&REFG(undefined, 0x15d768c) | 1;
    REFG(float, 0x15d767c) = 0.0;
    REFG(float, 0x15d7680) = 0.0;
    REFG(float, 0x15d7684) = REFG(float, 0x1087f04);
    REFG(float, 0x15d7688) = 0.0;
  }
  fVar4 = REFG(float, 0x15d7688);
  fVar3 = REFG(float, 0x15d7684);
  fVar2 = REFG(float, 0x15d7680);
  fVar1 = REFG(float, 0x15d767c);
  in_xmm1 = REFG(float, 0x1087f04);
  in_xmm2 = REFG(float, 0x15d769c);
  fVar9 = F_00c4cde0(REFG(float, 0x1087f04),REFG(float, 0x15d769c),in_xmm3,in_xmm7,(float10)param_4);
  fVar11 = gen_bits2f((uint)gen_fl2bits((float)fVar9) ^ REFG(uint, 0x10920d0));
  fVar10 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_4);
  *param_3 = (float)fVar10;
  param_3[1] = (float)fVar9;
  param_3[2] = 0.0;
  param_3[3] = 0.0;
  param_3[6] = 0.0;
  param_3[7] = 0.0;
  param_3[4] = fVar11;
  param_3[5] = (float)fVar10;
  param_3[8] = fVar1;
  param_3[9] = fVar2;
  param_3[10] = fVar3;
  param_3[0xb] = fVar4;
  param_3[0xc] = fVar5;
  param_3[0xd] = fVar6;
  param_3[0xe] = fVar7;
  param_3[0xf] = fVar8;
  return (uint)param_3;
}

/* ref: FUN_00c98a60 */
unsigned int F_00c98a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc98a60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = 0;
  *param_1 = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[1];
  param_1[4] = 0;
  param_1[5] = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = param_2[2];
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = uVar1;
  param_1[0xb] = 0;
  if ((*(uint *)&REFG(undefined, 0x15d76a0) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d76a0) = *(uint *)&REFG(undefined, 0x15d76a0) | 1;
    REFG(float, 0x15d7690) = 0;
    REFG(float, 0x15d7694) = 0;
    REFG(float, 0x15d7698) = 0;
    REFG(float, 0x15d769c) = REFG(float, 0x1087f04);
  }
  param_1[0xc] = GEN_FLT_TO(param_1[0xc], REFG(float, 0x15d7690));
  param_1[0xd] = GEN_FLT_TO(param_1[0xd], REFG(float, 0x15d7694));
  param_1[0xe] = GEN_FLT_TO(param_1[0xe], REFG(float, 0x15d7698));
  param_1[0xf] = GEN_FLT_TO(param_1[0xf], REFG(float, 0x15d769c));
  return 0;
}

/* ref: FUN_00c98b30 */
unsigned int F_00c98b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc98b30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = REFG(float, 0x1087f04);
  if ((*(uint *)&REFG(undefined, 0x15d7664) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7664) = *(uint *)&REFG(undefined, 0x15d7664) | 1;
    REFG(float, 0x15d7654) = REFG(float, 0x1087f04);
    REFG(float, 0x15d7658) = 0;
    REFG(float, 0x15d765c) = 0;
    REFG(float, 0x15d7660) = 0;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x15d7654));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x15d7658));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x15d765c));
  param_1[3] = GEN_FLT_TO(param_1[3], REFG(float, 0x15d7660));
  if ((*(uint *)&REFG(undefined, 0x15d7678) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7678) = *(uint *)&REFG(undefined, 0x15d7678) | 1;
    REFG(float, 0x15d7668) = 0;
    REFG(float, 0x15d766c) = uVar3;
    REFG(float, 0x15d7670) = 0;
    REFG(float, 0x15d7674) = 0;
  }
  param_1[4] = GEN_FLT_TO(param_1[4], REFG(float, 0x15d7668));
  param_1[5] = GEN_FLT_TO(param_1[5], REFG(float, 0x15d766c));
  param_1[6] = GEN_FLT_TO(param_1[6], REFG(float, 0x15d7670));
  param_1[7] = GEN_FLT_TO(param_1[7], REFG(float, 0x15d7674));
  if ((*(uint *)&REFG(undefined, 0x15d768c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d768c) = *(uint *)&REFG(undefined, 0x15d768c) | 1;
    REFG(float, 0x15d767c) = 0;
    REFG(float, 0x15d7680) = 0;
    REFG(float, 0x15d7684) = uVar3;
    REFG(float, 0x15d7688) = 0;
  }
  param_1[8] = GEN_FLT_TO(param_1[8], REFG(float, 0x15d767c));
  param_1[9] = GEN_FLT_TO(param_1[9], REFG(float, 0x15d7680));
  param_1[10] = GEN_FLT_TO(param_1[10], REFG(float, 0x15d7684));
  param_1[0xb] = GEN_FLT_TO(param_1[0xb], REFG(float, 0x15d7688));
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  param_1[0xc] = *param_2;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  return 0;
}

/* ref: FUN_00c98ca0 */
unsigned int F_00c98ca0(unsigned int gen_a0)
{
  GEN_ENTER(0xc98ca0u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
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
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  
  fVar1 = in_ecx[4];
  fVar2 = in_ecx[5];
  fVar3 = in_ecx[6];
  fVar4 = in_ecx[8];
  fVar5 = in_ecx[9];
  fVar6 = in_ecx[0xc];
  fVar7 = *in_ecx;
  fVar8 = in_ecx[1];
  fVar9 = in_ecx[2];
  fVar10 = in_ecx[3];
  dVar19 = (double)in_ecx[0xf] * (double)in_ecx[10] - (double)in_ecx[0xe] * (double)in_ecx[0xb];
  dVar16 = (double)in_ecx[0xf] * (double)fVar5 - (double)in_ecx[0xd] * (double)in_ecx[0xb];
  dVar22 = (double)in_ecx[0xe] * (double)fVar5 - (double)in_ecx[0xd] * (double)in_ecx[10];
  fVar11 = ((float)GEN_TOF((((double)fVar2 * dVar19 - (double)fVar3 * dVar16) + (double)in_ecx[7] * dVar22)));
  dVar17 = (double)in_ecx[0xf] * (double)fVar4 - (double)fVar6 * (double)in_ecx[0xb];
  dVar23 = (double)in_ecx[0xe] * (double)fVar4 - (double)fVar6 * (double)in_ecx[10];
  fVar12 = ((float)GEN_TOF((((double)fVar3 * dVar17 - (double)fVar1 * dVar19) - (double)in_ecx[7] * dVar23)));
  dVar18 = (double)in_ecx[0xd] * (double)fVar4 - (double)fVar6 * (double)fVar5;
  fVar13 = ((float)GEN_TOF((((double)fVar1 * dVar16 - (double)fVar2 * dVar17) + (double)in_ecx[7] * dVar18)));
  fVar14 = ((float)GEN_TOF((((double)fVar2 * dVar23 - (double)fVar1 * dVar22) - (double)fVar3 * dVar18)));
  fVar15 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                  (double)((float)GEN_TOF(((((double)fVar12 * (double)fVar8 + (double)fVar11 * (double)fVar7)
                                  + (double)fVar13 * (double)fVar9) +
                                 (double)fVar14 * (double)fVar10))))));
  *in_ecx = fVar11 * fVar15;
  in_ecx[4] = fVar12 * fVar15;
  in_ecx[8] = fVar13 * fVar15;
  in_ecx[0xc] = fVar14 * fVar15;
  in_ecx[1] = ((float)GEN_TOF(((((double)fVar9 * dVar16 - (double)fVar8 * dVar19) - (double)fVar10 * dVar22)
                     * (double)fVar15)));
  dVar20 = (double)in_ecx[0xf] * (double)fVar3 - (double)in_ecx[0xe] * (double)in_ecx[7];
  dVar24 = (double)in_ecx[0xf] * (double)fVar2 - (double)in_ecx[0xd] * (double)in_ecx[7];
  dVar26 = (double)in_ecx[0xe] * (double)fVar2 - (double)in_ecx[0xd] * (double)fVar3;
  in_ecx[2] = ((float)GEN_TOF(((((double)fVar8 * dVar20 - (double)fVar9 * dVar24) + (double)fVar10 * dVar26)
                     * (double)fVar15)));
  dVar21 = (double)in_ecx[0xb] * (double)fVar2 - (double)fVar5 * (double)in_ecx[7];
  dVar25 = (double)in_ecx[0xb] * (double)fVar3 - (double)in_ecx[10] * (double)in_ecx[7];
  dVar27 = (double)in_ecx[10] * (double)fVar2 - (double)fVar5 * (double)fVar3;
  in_ecx[3] = ((float)GEN_TOF(((((double)fVar9 * dVar21 - (double)fVar8 * dVar25) - (double)fVar10 * dVar27)
                     * (double)fVar15)));
  in_ecx[5] = ((float)GEN_TOF(((((double)fVar7 * dVar19 - (double)fVar9 * dVar17) + (double)fVar10 * dVar23)
                     * (double)fVar15)));
  dVar19 = (double)in_ecx[0xf] * (double)fVar1 - (double)fVar6 * (double)in_ecx[7];
  dVar28 = (double)in_ecx[0xe] * (double)fVar1 - (double)fVar6 * (double)fVar3;
  in_ecx[6] = ((float)GEN_TOF(((((double)fVar9 * dVar19 - (double)fVar7 * dVar20) - (double)fVar10 * dVar28)
                     * (double)fVar15)));
  dVar20 = (double)in_ecx[0xb] * (double)fVar1 - (double)fVar4 * (double)in_ecx[7];
  dVar29 = (double)in_ecx[10] * (double)fVar1 - (double)fVar4 * (double)fVar3;
  in_ecx[7] = ((float)GEN_TOF(((((double)fVar7 * dVar25 - (double)fVar9 * dVar20) + (double)fVar10 * dVar29)
                     * (double)fVar15)));
  in_ecx[9] = ((float)GEN_TOF(((((double)fVar8 * dVar17 - (double)fVar7 * dVar16) - (double)fVar10 * dVar18)
                     * (double)fVar15)));
  dVar16 = (double)in_ecx[0xd] * (double)fVar1 - (double)fVar6 * (double)fVar2;
  in_ecx[10] = ((float)GEN_TOF(((((double)fVar7 * dVar24 - (double)fVar8 * dVar19) + (double)fVar10 * dVar16)
                      * (double)fVar15)));
  dVar17 = (double)fVar5 * (double)fVar1 - (double)fVar4 * (double)fVar2;
  in_ecx[0xb] = ((float)GEN_TOF(((((double)fVar8 * dVar20 - (double)fVar7 * dVar21) - (double)fVar10 * dVar17
                        ) * (double)fVar15)));
  in_ecx[0xd] = ((float)GEN_TOF(((((double)fVar7 * dVar22 - (double)fVar8 * dVar23) + (double)fVar9 * dVar18)
                       * (double)fVar15)));
  in_ecx[0xe] = ((float)GEN_TOF(((((double)fVar8 * dVar28 - (double)fVar7 * dVar26) - (double)fVar9 * dVar16)
                       * (double)fVar15)));
  in_ecx[0xf] = ((float)GEN_TOF(((((double)fVar7 * dVar27 - (double)fVar8 * dVar29) + (double)fVar9 * dVar17)
                       * (double)fVar15)));
  return 0;
}

/* ref: FUN_00c994c0 */
byte F_00c994c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc994c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  double dVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = REFG(float, 0x11290b0);
  fVar6 = REFG(float, 0x1090998);
  *param_4 = 0.0;
  uVar4 = REFG(double, 0x11290a0);
  dVar3 = REFG(double, 0x1088130);
  fVar1 = *param_3 - *param_1;
  fVar2 = param_3[2] - *param_1;
  if (((float)GEN_TOF(gen_bits2d((ulonglong)gen_d2bits((double)*param_2) & REFG(ulonglong, 0x11290a0)))) < fVar5) {
    if (!GEN_ISNAN(fVar1) && !(fVar1 <= 0.0)) {
      return 0;
    }
    if (fVar2 < 0.0) {
      return 0;
    }
  }
  else {
    fVar5 = (float)(REFG(double, 0x1088130) / (double)*param_2);
    fVar1 = fVar5 * fVar1;
    fVar5 = fVar5 * fVar2;
    if (fVar5 < fVar1) {
      if (0.0 < fVar5) {
        *param_4 = fVar5;
      }
      if ((double)fVar1 < REFG(double, 0x10909a0)) {
        fVar6 = fVar1;
      }
    }
    else {
      if (0.0 < fVar1) {
        *param_4 = fVar1;
      }
      if ((double)fVar5 < REFG(double, 0x10909a0)) {
        fVar6 = fVar5;
      }
    }
    if ((!GEN_ISNAN(*param_4) && !GEN_ISNAN(fVar6)) && !(*param_4 <= fVar6)) {
      return 0;
    }
  }
  fVar1 = param_3[1] - param_1[2];
  fVar2 = param_3[3] - param_1[2];
  if (((float)GEN_TOF(gen_bits2d((ulonglong)gen_d2bits((double)param_2[2]) & uVar4))) < REFG(float, 0x11290b0)) {
    if ((!GEN_ISNAN(fVar1) && !(fVar1 <= 0.0)) || (fVar2 < 0.0)) {
      return 0;
    }
  }
  else {
    fVar5 = (float)(dVar3 / (double)param_2[2]);
    fVar1 = fVar5 * fVar1;
    fVar5 = fVar5 * fVar2;
    if (fVar5 < fVar1) {
      if (*param_4 < fVar5) {
        *param_4 = fVar5;
      }
      if (fVar1 < fVar6) {
        fVar6 = fVar1;
      }
    }
    else {
      if (*param_4 < fVar1) {
        *param_4 = fVar1;
      }
      if (fVar5 < fVar6) {
        fVar6 = fVar5;
      }
    }
    if ((!GEN_ISNAN(*param_4) && !GEN_ISNAN(fVar6)) && !(*param_4 <= fVar6)) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00c996f0 */
byte F_00c996f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc996f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  bool bVar3;
  double dVar4;
  ulonglong uVar5;
  float fVar6;
  float * pfVar7;
  uint uVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  
  fVar6 = REFG(float, 0x11290b0);
  fVar11 = REFG(float, 0x1090998);
  dVar4 = REFG(double, 0x1088130);
  *param_4 = 0.0;
  uVar5 = REFG(double, 0x11290a0);
  uVar8 = 0;
  pfVar7 = param_3;
  while( true ) {
    fVar10 = *((float *)GEN_TOP(((param_2 - (int)param_3) + (int)pfVar7)));
    fVar1 = *((float *)GEN_TOP(((int)pfVar7 + (param_1 - param_2) + (param_2 - (int)param_3))));
    fVar2 = *pfVar7 - fVar1;
    fVar1 = pfVar7[3] - fVar1;
    if (((float)GEN_TOF(gen_bits2d((ulonglong)gen_d2bits((double)fVar10) & uVar5))) < fVar6) {
      if (!GEN_ISNAN(fVar2) && !(fVar2 <= 0.0)) {
        return 0;
      }
      bVar9 = GEN_ISNAN(fVar1) || fVar1 == 0.0;
      bVar3 = fVar1 <= 0.0;
    }
    else {
      fVar10 = (float)(dVar4 / (double)fVar10);
      fVar2 = fVar10 * fVar2;
      fVar10 = fVar10 * fVar1;
      if (fVar10 < fVar2) {
        if (*param_4 < fVar10) {
          *param_4 = fVar10;
        }
        if (fVar2 < fVar11) {
          fVar11 = fVar2;
        }
      }
      else {
        if (*param_4 < fVar2) {
          *param_4 = fVar2;
        }
        if (fVar10 < fVar11) {
          fVar11 = fVar10;
        }
      }
      fVar10 = *param_4;
      bVar9 = (GEN_ISNAN(fVar10) || GEN_ISNAN(fVar11)) || fVar10 == fVar11;
      bVar3 = fVar11 <= fVar10;
    }
    if (bVar3 && !bVar9) break;
    uVar8 = uVar8 + 1;
    pfVar7 = pfVar7 + 1;
    if (2 < uVar8) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c99860 */
byte F_00c99860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc99860u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float fVar1;
  float fVar2;
  bool bVar3;
  double dVar4;
  ulonglong uVar5;
  float fVar6;
  float * pfVar7;
  uint uVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  
  fVar6 = REFG(float, 0x11290b0);
  fVar11 = REFG(float, 0x1090998);
  dVar4 = REFG(double, 0x1088130);
  uVar8 = 0;
  *param_4 = 0.0;
  uVar5 = REFG(double, 0x11290a0);
  pfVar7 = param_3;
  while( true ) {
    fVar10 = *((float *)GEN_TOP((((int)param_2 - (int)param_3) + (int)pfVar7)));
    fVar1 = *((float *)GEN_TOP(((int)param_1 + (int)pfVar7 + (((int)param_2 - (int)param_3) - (int)param_2))));
    fVar2 = *pfVar7 - fVar1;
    fVar1 = pfVar7[3] - fVar1;
    if (((float)GEN_TOF(gen_bits2d((ulonglong)gen_d2bits((double)fVar10) & uVar5))) < fVar6) {
      if (!GEN_ISNAN(fVar2) && !(fVar2 <= 0.0)) {
        return 0;
      }
      bVar9 = GEN_ISNAN(fVar1) || fVar1 == 0.0;
      bVar3 = fVar1 <= 0.0;
    }
    else {
      fVar10 = (float)(dVar4 / (double)fVar10);
      fVar2 = fVar10 * fVar2;
      fVar10 = fVar10 * fVar1;
      if (fVar10 < fVar2) {
        if (*param_4 < fVar10) {
          *param_4 = fVar10;
        }
        if (fVar2 < fVar11) {
          fVar11 = fVar2;
        }
      }
      else {
        if (*param_4 < fVar2) {
          *param_4 = fVar2;
        }
        if (fVar10 < fVar11) {
          fVar11 = fVar10;
        }
      }
      fVar10 = *param_4;
      bVar9 = (GEN_ISNAN(fVar10) || GEN_ISNAN(fVar11)) || fVar10 == fVar11;
      bVar3 = fVar11 <= fVar10;
    }
    if (bVar3 && !bVar9) break;
    uVar8 = uVar8 + 1;
    pfVar7 = pfVar7 + 1;
    if (2 < uVar8) {
      fVar11 = *param_4;
      *param_5 = *param_2 * fVar11;
      param_5[1] = param_2[1] * fVar11;
      param_5[2] = param_2[2] * fVar11;
      *param_5 = *param_1 + *param_5;
      param_5[1] = param_1[1] + param_5[1];
      param_5[2] = param_1[2] + param_5[2];
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c99a80 */
byte F_00c99a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc99a80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  bool bVar3;
  float * pfVar4;
  uint uVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = 0.0;
  uVar5 = 0;
  pfVar4 = param_3;
  fVar8 = REFG(float, 0x1090998);
  while( true ) {
    fVar7 = *((float *)GEN_TOP(((param_2 - (int)param_3) + (int)pfVar4)));
    fVar1 = *((float *)GEN_TOP(((int)pfVar4 + (param_1 - param_2) + (param_2 - (int)param_3))));
    fVar2 = *pfVar4 - fVar1;
    fVar1 = pfVar4[3] - fVar1;
    if (((float)GEN_TOF(gen_bits2d((ulonglong)gen_d2bits((double)fVar7) & REFG(ulonglong, 0x11290a0)))) < REFG(float, 0x11290b0)) {
      if (!GEN_ISNAN(fVar2) && !(fVar2 <= 0.0)) {
        return 0;
      }
      bVar6 = GEN_ISNAN(fVar1) || fVar1 == 0.0;
      bVar3 = fVar1 <= 0.0;
    }
    else {
      fVar7 = (float)(REFG(double, 0x1088130) / (double)fVar7);
      fVar2 = fVar7 * fVar2;
      fVar7 = fVar7 * fVar1;
      if (fVar7 < fVar2) {
        if (fVar9 < fVar7) {
          fVar9 = fVar7;
        }
        if (fVar2 < fVar8) {
          fVar8 = fVar2;
        }
      }
      else {
        if (fVar9 < fVar2) {
          fVar9 = fVar2;
        }
        if (fVar7 < fVar8) {
          fVar8 = fVar7;
        }
      }
      bVar6 = (GEN_ISNAN(fVar9) || GEN_ISNAN(fVar8)) || fVar9 == fVar8;
      bVar3 = fVar8 <= fVar9;
    }
    if (bVar3 && !bVar6) break;
    uVar5 = uVar5 + 1;
    pfVar4 = pfVar4 + 1;
    if (2 < uVar5) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c99be0 */
byte F_00c99be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc99be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint param_5 = (uint)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  float * param_8 = (float *)(uintptr_t)gen_a7;
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
  
  fVar8 = *(float *)param_3;
  fVar10 = *(float *)param_4 - fVar8;
  fVar2 = *(float *)(param_4 + 4) - *(float *)(param_3 + 4);
  fVar15 = *(float *)(param_4 + 8) - *(float *)(param_3 + 8);
  fVar3 = *(float *)param_5 - fVar8;
  fVar4 = *(float *)(param_5 + 4) - *(float *)(param_3 + 4);
  fVar9 = *(float *)(param_2 + 8);
  fVar5 = *(float *)(param_5 + 8) - *(float *)(param_3 + 8);
  fVar1 = *(float *)param_2;
  fVar11 = ((float)GEN_TOF(((double)fVar5 * (double)*(float *)(param_2 + 4) - (double)fVar9 * (double)fVar4)));
  fVar12 = (float)((double)fVar9 * (double)fVar3 - (double)fVar5 * (double)fVar1);
  fVar13 = ((float)GEN_TOF(((double)fVar1 * (double)fVar4 - (double)*(float *)(param_2 + 4) * (double)fVar3)));
  fVar14 = ((float)GEN_TOF((((double)fVar12 * (double)fVar2 + (double)fVar11 * (double)fVar10) +
                  (double)fVar13 * (double)fVar15)));
  if ((!GEN_ISNAN(fVar14) && !GEN_ISNAN(REFG(float, 0x11290b0))) && !(fVar14 <= REFG(float, 0x11290b0))) {
    fVar8 = *param_1 - fVar8;
    fVar6 = param_1[1] - *(float *)(param_3 + 4);
    fVar7 = param_1[2] - *(float *)(param_3 + 8);
    fVar11 = ((float)GEN_TOF((((double)fVar6 * (double)fVar12 + (double)fVar8 * (double)fVar11) +
                    (double)fVar7 * (double)fVar13)));
    if ((!(fVar11 < 0.0)) && (!(fVar14 < fVar11))) {
      fVar12 = (float)((double)fVar8 * (double)fVar2 - (double)fVar6 * (double)fVar10);
      fVar10 = (float)((double)fVar7 * (double)fVar10 - (double)fVar15 * (double)fVar8);
      fVar15 = (float)((double)fVar6 * (double)fVar15 - (double)fVar7 * (double)fVar2);
      fVar8 = ((float)GEN_TOF((((double)*(float *)(param_2 + 4) * (double)fVar10 +
                      (double)fVar1 * (double)fVar15) + (double)fVar9 * (double)fVar12)));
      if (!(fVar8 < 0.0)) {
        if (!((double)fVar14 < (double)fVar8 + (double)fVar11)) {
          fVar9 = (float)(REFG(double, 0x1088130) / (double)fVar14);
          *param_6 = ((float)GEN_TOF((((double)fVar10 * (double)fVar4 + (double)fVar15 * (double)fVar3) +
                            (double)fVar12 * (double)fVar5))) * fVar9;
          *param_7 = fVar9 * fVar11;
          *param_8 = fVar9 * fVar8;
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00c99fd0 */
unsigned int F_00c99fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc99fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
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
  double dVar18;
  
  fVar11 = *(float *)param_2;
  fVar15 = *(float *)param_1;
  fVar3 = fVar11 - fVar15;
  fVar14 = *(float *)(param_1 + 4);
  fVar4 = *(float *)(param_2 + 4) - fVar14;
  fVar10 = *(float *)(param_1 + 8);
  fVar6 = *(float *)(param_2 + 8) - fVar10;
  fVar1 = *(float *)param_3;
  fVar5 = fVar1 - fVar15;
  fVar7 = *(float *)(param_3 + 4) - fVar14;
  fVar8 = *(float *)(param_3 + 8) - fVar10;
  fVar16 = *(float *)param_4;
  fVar17 = *(float *)(param_4 + 4);
  fVar2 = *(float *)(param_4 + 8);
  fVar13 = ((float)GEN_TOF((((double)(fVar17 - fVar14) * (double)fVar4 +
                   (double)(fVar16 - fVar15) * (double)fVar3) +
                  (double)(fVar2 - fVar10) * (double)fVar6)));
  fVar14 = ((float)GEN_TOF((((double)(fVar17 - fVar14) * (double)fVar7 +
                   (double)(fVar16 - fVar15) * (double)fVar5) +
                  (double)(fVar2 - fVar10) * (double)fVar8)));
  if ((fVar13 <= 0.0) && (fVar14 <= 0.0)) {
    *param_5 = fVar15;
    param_5[1] = *(float *)(param_1 + 4);
    param_5[2] = *(float *)(param_1 + 8);
    return 0;
  }
  fVar15 = fVar17 - *(float *)(param_2 + 4);
  fVar10 = fVar2 - *(float *)(param_2 + 8);
  fVar9 = ((float)GEN_TOF((((double)fVar15 * (double)fVar4 + (double)fVar3 * (double)(fVar16 - fVar11)) +
                 (double)fVar10 * (double)fVar6)));
  fVar15 = ((float)GEN_TOF((((double)fVar15 * (double)fVar7 + (double)fVar5 * (double)(fVar16 - fVar11)) +
                  (double)fVar10 * (double)fVar8)));
  if ((0.0 <= fVar9) && (fVar15 <= fVar9)) {
    *param_5 = fVar11;
    param_5[1] = *(float *)(param_2 + 4);
    param_5[2] = *(float *)(param_2 + 8);
    return 0;
  }
  fVar10 = (float)((double)fVar15 * (double)fVar13 - (double)fVar9 * (double)fVar14);
  if (((fVar10 <= 0.0) && (0.0 <= fVar13)) && (fVar9 <= 0.0)) {
    fVar11 = ((float)GEN_TOF(((double)fVar13 / ((double)fVar13 - (double)fVar9))));
    *param_5 = fVar3 * fVar11;
    param_5[2] = fVar6 * fVar11;
    param_5[1] = fVar4 * fVar11;
    *param_5 = fVar3 * fVar11 + *(float *)param_1;
    param_5[1] = fVar4 * fVar11 + *(float *)(param_1 + 4);
    param_5[2] = fVar6 * fVar11 + *(float *)(param_1 + 8);
    return 0;
  }
  fVar17 = fVar17 - *(float *)(param_3 + 4);
  fVar2 = fVar2 - *(float *)(param_3 + 8);
  fVar12 = ((float)GEN_TOF((((double)fVar17 * (double)fVar7 + (double)(fVar16 - fVar1) * (double)fVar5) +
                  (double)fVar2 * (double)fVar8)));
  fVar16 = ((float)GEN_TOF((((double)fVar17 * (double)fVar4 + (double)(fVar16 - fVar1) * (double)fVar3) +
                  (double)fVar2 * (double)fVar6)));
  if ((0.0 <= fVar12) && (fVar16 <= fVar12)) {
    *param_5 = fVar1;
    param_5[1] = *(float *)(param_3 + 4);
    param_5[2] = *(float *)(param_3 + 8);
    return 0;
  }
  fVar17 = (float)((double)fVar16 * (double)fVar14 - (double)fVar12 * (double)fVar13);
  if (((fVar17 <= 0.0) && (0.0 <= fVar14)) && (fVar12 <= 0.0)) {
    fVar11 = ((float)GEN_TOF(((double)fVar14 / ((double)fVar14 - (double)fVar12))));
    *param_5 = fVar5 * fVar11;
    param_5[1] = fVar7 * fVar11;
    param_5[2] = fVar8 * fVar11;
    *param_5 = *(float *)param_1 + fVar5 * fVar11;
    param_5[1] = fVar7 * fVar11 + *(float *)(param_1 + 4);
    param_5[2] = *(float *)(param_1 + 8) + fVar8 * fVar11;
    return 0;
  }
  fVar14 = (float)((double)fVar12 * (double)fVar9 - (double)fVar16 * (double)fVar15);
  if (((fVar14 <= 0.0) && (dVar18 = (double)fVar15 - (double)fVar9, 0.0 <= dVar18)) &&
     (0.0 <= (double)fVar16 - (double)fVar12)) {
    *param_5 = fVar1 - fVar11;
    param_5[1] = *(float *)(param_3 + 4) - *(float *)(param_2 + 4);
    param_5[2] = *(float *)(param_3 + 8) - *(float *)(param_2 + 8);
    fVar11 = *param_5;
    fVar10 = ((float)GEN_TOF((dVar18 / (dVar18 - ((double)fVar16 - (double)fVar12)))));
    fVar15 = param_5[1];
    *param_5 = fVar11 * fVar10;
    fVar14 = param_5[2];
    param_5[1] = fVar15 * fVar10;
    param_5[2] = fVar14 * fVar10;
    *param_5 = *(float *)param_2 + fVar11 * fVar10;
    param_5[1] = fVar15 * fVar10 + *(float *)(param_2 + 4);
    param_5[2] = *(float *)(param_2 + 8) + fVar14 * fVar10;
    return 0;
  }
  fVar11 = ((float)GEN_TOF((REFG(double, 0x1088130) / (((double)fVar14 + (double)fVar17) + (double)fVar10))));
  fVar17 = fVar11 * fVar17;
  fVar11 = fVar11 * fVar10;
  fVar15 = fVar5 * fVar11 + fVar3 * fVar17;
  *param_5 = fVar15;
  fVar14 = fVar7 * fVar11 + fVar4 * fVar17;
  fVar11 = fVar8 * fVar11 + fVar6 * fVar17;
  param_5[1] = fVar14;
  param_5[2] = fVar11;
  *param_5 = *(float *)param_1 + fVar15;
  param_5[1] = fVar14 + *(float *)(param_1 + 4);
  param_5[2] = *(float *)(param_1 + 8) + fVar11;
  return 0;
}

/* ref: FUN_00c9a8a0 */
unsigned int F_00c9a8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc9a8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *param_1;
  fVar4 = *param_2 - fVar1;
  fVar5 = param_2[1] - param_1[1];
  fVar3 = param_2[2] - param_1[2];
  fVar7 = 0.0;
  fVar6 = ((float)GEN_TOF((((double)(*param_3 - fVar1) * (double)fVar4 +
                  (double)fVar5 * (double)(param_3[1] - param_1[1])) +
                 (double)(param_3[2] - param_1[2]) * (double)fVar3))) /
          ((float)GEN_TOF((((double)fVar5 * (double)fVar5 + (double)fVar4 * (double)fVar4) +
                 (double)fVar3 * (double)fVar3)));
  if ((!GEN_ISNAN(fVar6) && (!(0.0 < fVar6) && fVar6 != 0.0)) ||
     (fVar7 = REFG(float, 0x1087f04), REFG(float, 0x1087f04) < fVar6)) {
    fVar6 = fVar7;
  }
  fVar7 = param_1[1];
  fVar2 = param_1[2];
  *param_4 = fVar1 + fVar4 * fVar6;
  param_4[1] = fVar5 * fVar6 + fVar7;
  param_4[2] = fVar2 + fVar3 * fVar6;
  return 0;
}

/* ref: FUN_00c9aa50 */
uint F_00c9aa50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xc9aa50u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  
  fVar10 = *param_3 - *param_2;
  fVar2 = param_3[1] - param_2[1];
  fVar4 = param_3[2] - param_2[2];
  fVar1 = *param_1 - *param_2;
  fVar3 = param_1[1] - param_2[1];
  fVar5 = param_1[2] - param_2[2];
  fVar6 = ((float)GEN_TOF((((double)fVar1 * (double)fVar10 + (double)fVar3 * (double)fVar2) +
                 (double)fVar5 * (double)fVar4)));
  if ((!(fVar6 < 0.0)) &&
     (dVar7 = (double)fVar10, dVar8 = (double)fVar2, dVar9 = (double)fVar4,
     fVar10 = ((float)GEN_TOF(((dVar8 * dVar8 + dVar7 * dVar7) + dVar9 * dVar9))), !(fVar10 < fVar6))) {
    dVar7 = (double)fVar1;
    dVar8 = (double)fVar3;
    dVar9 = (double)fVar5;
    if ((double)((float)GEN_TOF(((dVar8 * dVar8 + dVar7 * dVar7) + dVar9 * dVar9))) -
        ((double)fVar6 * (double)fVar6) / (double)fVar10 < (double)param_4 * (double)param_4) {
      return 1;
    }
    return 0;
  }
  return (uint)param_1 & 0xffffff00;
}

/* ref: FUN_00c9abd0 */
byte F_00c9abd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xc9abd0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  
  fVar10 = *param_3 - *param_2;
  fVar2 = param_3[1] - param_2[1];
  fVar4 = param_3[2] - param_2[2];
  fVar1 = *param_1 - *param_2;
  fVar3 = param_1[1] - param_2[1];
  fVar5 = param_1[2] - param_2[2];
  fVar6 = ((float)GEN_TOF((((double)fVar1 * (double)fVar10 + (double)fVar3 * (double)fVar2) +
                 (double)fVar5 * (double)fVar4)));
  if ((!(fVar6 < 0.0)) &&
     (dVar7 = (double)fVar10, dVar8 = (double)fVar2, dVar9 = (double)fVar4,
     fVar10 = ((float)GEN_TOF(((dVar8 * dVar8 + dVar7 * dVar7) + dVar9 * dVar9))), !(fVar10 < fVar6))) {
    dVar7 = (double)fVar1;
    dVar8 = (double)fVar3;
    dVar9 = (double)fVar5;
    if ((double)((float)GEN_TOF(((dVar8 * dVar8 + dVar7 * dVar7) + dVar9 * dVar9))) -
        ((double)fVar6 * (double)fVar6) / (double)fVar10 < (double)param_4) {
      return 1;
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00c9ad50 */
byte F_00c9ad50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc9ad50u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  
  dVar2 = (double)(*param_1 - *param_3);
  dVar3 = (double)(param_1[1] - param_3[1]);
  fVar5 = ((float)GEN_TOF((((double)param_2[1] * (double)(param_1[1] - param_3[1]) +
                  (double)*param_2 * (double)(*param_1 - *param_3)) +
                 (double)param_2[2] * (double)(param_1[2] - param_3[2]))));
  dVar4 = (double)(param_1[2] - param_3[2]);
  fVar1 = ((float)GEN_TOF(((double)((float)GEN_TOF(((dVar2 * dVar2 + dVar3 * dVar3) + dVar4 * dVar4))) -
                 (double)param_3[3] * (double)param_3[3])));
  if (((!(0.0 < fVar1)) || (!(0.0 < fVar5))) &&
     (fVar1 = (float)((double)fVar5 * (double)fVar5 - (double)fVar1), !(fVar1 < 0.0))) {
    fVar1 = gen_bits2f((uint)gen_fl2bits(fVar5) ^ REFG(uint, 0x10920d0)) - SQRT(fVar1);
    *param_4 = fVar1;
    if (fVar1 < 0.0) {
      *param_4 = 0.0;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00c9ae80 */
byte F_00c9ae80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc9ae80u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  
  dVar2 = (double)(*param_1 - *param_3);
  dVar3 = (double)(param_1[1] - param_3[1]);
  fVar5 = ((float)GEN_TOF((((double)param_2[1] * (double)(param_1[1] - param_3[1]) +
                  (double)*param_2 * (double)(*param_1 - *param_3)) +
                 (double)param_2[2] * (double)(param_1[2] - param_3[2]))));
  dVar4 = (double)(param_1[2] - param_3[2]);
  fVar1 = ((float)GEN_TOF(((double)((float)GEN_TOF(((dVar2 * dVar2 + dVar3 * dVar3) + dVar4 * dVar4))) -
                 (double)param_3[3] * (double)param_3[3])));
  if (((!(0.0 < fVar1)) || (!(0.0 < fVar5))) &&
     (fVar1 = (float)((double)fVar5 * (double)fVar5 - (double)fVar1), !(fVar1 < 0.0))) {
    fVar1 = gen_bits2f((uint)gen_fl2bits(fVar5) ^ REFG(uint, 0x10920d0)) - SQRT(fVar1);
    *param_4 = fVar1;
    if (0.0 <= fVar1) {
      return 1;
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00c9afc0 */
byte F_00c9afc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc9afc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = (double)(*param_1 - *param_3);
  dVar4 = (double)(param_1[1] - param_3[1]);
  dVar5 = (double)(param_1[2] - param_3[2]);
  fVar2 = ((float)GEN_TOF(((dVar3 * dVar3 + dVar4 * dVar4) + dVar5 * dVar5))) - param_3[3];
  fVar1 = ((float)GEN_TOF((((double)param_2[1] * (double)(param_1[1] - param_3[1]) +
                  (double)*param_2 * (double)(*param_1 - *param_3)) +
                 (double)param_2[2] * (double)(param_1[2] - param_3[2]))));
  if (((!(0.0 < fVar2)) || (!(0.0 < fVar1))) &&
     (fVar2 = (float)((double)fVar1 * (double)fVar1 - (double)fVar2), !(fVar2 < 0.0))) {
    fVar2 = gen_bits2f((uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0)) - SQRT(fVar2);
    *param_4 = fVar2;
    if (fVar2 < 0.0) {
      *param_4 = 0.0;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00c9b0f0 */
uint F_00c9b0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc9b0f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = (double)(*param_1 - *param_3);
  dVar4 = (double)(param_1[1] - param_3[1]);
  dVar5 = (double)(param_1[2] - param_3[2]);
  fVar2 = ((float)GEN_TOF(((dVar3 * dVar3 + dVar4 * dVar4) + dVar5 * dVar5))) - param_3[3];
  fVar1 = ((float)GEN_TOF((((double)param_2[1] * (double)(param_1[1] - param_3[1]) +
                  (double)*param_2 * (double)(*param_1 - *param_3)) +
                 (double)param_2[2] * (double)(param_1[2] - param_3[2]))));
  if (((!(0.0 < fVar2)) || (!(0.0 < fVar1))) &&
     (fVar2 = (float)((double)fVar1 * (double)fVar1 - (double)fVar2), !(fVar2 < 0.0))) {
    fVar2 = gen_bits2f((uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0)) - SQRT(fVar2);
    *param_4 = fVar2;
    if (0.0 <= fVar2) {
      return 1;
    }
    return 0;
  }
  return (uint)param_3 & 0xffffff00;
}

/* ref: FUN_00c9b220 */
uint F_00c9b220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc9b220u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float fVar1;
  float fVar2;
  uint uVar3;
  float * pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  
  uVar3 = REFG(float, 0x10920d0);
  fVar7 = *(float *)param_4 - *(float *)param_3;
  fVar13 = *(float *)(param_4 + 4) - *(float *)(param_3 + 4);
  fVar8 = *(float *)(param_4 + 8) - *(float *)(param_3 + 8);
  fVar11 = *(float *)param_1 - *(float *)param_3;
  fVar14 = *(float *)(param_1 + 4) - *(float *)(param_3 + 4);
  fVar1 = *(float *)(param_1 + 8) - *(float *)(param_3 + 8);
  fVar9 = *(float *)param_2 - *(float *)param_1;
  fVar2 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
  fVar10 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  fVar5 = ((float)GEN_TOF((((double)fVar14 * (double)fVar13 + (double)fVar11 * (double)fVar7) +
                 (double)fVar1 * (double)fVar8)));
  fVar6 = ((float)GEN_TOF((((double)fVar2 * (double)fVar13 + (double)fVar9 * (double)fVar7) +
                 (double)fVar10 * (double)fVar8)));
  fVar7 = ((float)GEN_TOF((((double)fVar7 * (double)fVar7 + (double)fVar13 * (double)fVar13) +
                 (double)fVar8 * (double)fVar8)));
  pfVar4 = (float *)param_1;
  if (((!(fVar5 < 0.0)) || (!(fVar6 + fVar5 < 0.0))) &&
     ((!(fVar7 < fVar5) || (!(fVar7 < fVar6 + fVar5))))) {
    fVar13 = ((float)GEN_TOF((((double)fVar9 * (double)fVar9 + (double)fVar2 * (double)fVar2) +
                    (double)fVar10 * (double)fVar10)));
    fVar8 = (float)((double)fVar13 * (double)fVar7 - (double)fVar6 * (double)fVar6);
    if (!(((float)GEN_TOF(gen_bits2d((ulonglong)gen_d2bits((double)fVar8) & REFG(ulonglong, 0x11290a0)))) < REFG(float, 0x11290b0))) {
      fVar9 = ((float)GEN_TOF((((double)fVar2 * (double)fVar14 + (double)fVar9 * (double)fVar11) +
                     (double)fVar10 * (double)fVar1)));
      fVar10 = (float)((double)fVar9 * (double)fVar7 - (double)fVar6 * (double)fVar5);
      fVar14 = ((float)GEN_TOF(((double)((float)GEN_TOF((((double)fVar11 * (double)fVar11 +
                                       (double)fVar14 * (double)fVar14) +
                                      (double)fVar1 * (double)fVar1))) -
                      (double)param_5 * (double)param_5)));
      dVar12 = (double)fVar10;
      fVar11 = ((float)GEN_TOF((dVar12 * dVar12 -
                      (double)(float)((double)fVar14 * (double)fVar7 - (double)fVar5 * (double)fVar5
                                     ) * (double)fVar8)));
      if (!(fVar11 < 0.0)) {
        fVar8 = ((float)GEN_TOF(((((double)GEN_TOD(gen_bits2f((uint)gen_fl2bits(fVar10) ^ REFG(uint, 0x10920d0)))) -
                        ((double)GEN_TOD(SQRT(fVar11)))) / (double)fVar8)));
        *param_6 = fVar8;
        pfVar4 = param_6;
        if ((!(fVar8 < 0.0)) && (!(REFG(float, 0x1087f04) < fVar8))) {
          dVar12 = (double)fVar8 * (double)fVar6 + (double)fVar5;
          if (dVar12 < 0.0) {
            if (!GEN_ISNAN(fVar6) && !(0.0 < fVar6)) goto LAB_00c9b723;
            fVar6 = gen_bits2f((uint)gen_fl2bits(fVar5) ^ uVar3) / fVar6;
            *param_6 = fVar6;
            if (((double)fVar6 * (double)fVar13 + (double)fVar9) *
                ((double)fVar6 * *(double *)&REFG(undefined, 0x1092098)) + (double)fVar14 <= 0.0) {
              return 1;
            }
          }
          else {
            if (!((double)fVar7 < dVar12)) {
              return CONCAT31((int3)((uint)((int)(uintptr_t)param_6) >> 8),1);
            }
            if (!GEN_ISNAN(fVar6) && !(fVar6 < 0.0)) goto LAB_00c9b723;
            dVar15 = ((double)fVar9 - (double)fVar6) * *(double *)&REFG(undefined, 0x1092098);
            fVar8 = ((float)GEN_TOF((((double)fVar7 - (double)fVar5) / (double)fVar6)));
            dVar12 = (double)fVar5 * *(double *)&REFG(undefined, 0x1092098);
            *param_6 = fVar8;
            if ((dVar15 + (double)fVar8 * (double)fVar13) * (double)fVar8 +
                (((double)fVar14 + (double)fVar7) - dVar12) <= 0.0) {
              return 1;
            }
          }
          return 0;
        }
      }
    }
  }
LAB_00c9b723: ;
  return (uint)pfVar4 & 0xffffff00;
}

/* ref: FUN_00c9bd20 */
unsigned int F_00c9bd20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc9bd20u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  uint uVar3;
  float * pfVar4;
  float fVar5;
  
  uVar3 = 0;
  pfVar4 = (float *)(param_2 + 0x10);
  do {
    fVar1 = pfVar4[8];
    *(float *)(param_1 + 0xc + uVar3 * 4) = fVar1;
    *(float *)(param_1 + uVar3 * 4) = fVar1;
    fVar5 = *param_3 * pfVar4[-4];
    fVar2 = pfVar4[-4] * param_3[3];
    fVar1 = *(float *)(param_1 + uVar3 * 4);
    if (fVar5 < fVar2) {
      *(float *)(param_1 + uVar3 * 4) = fVar5 + fVar1;
      fVar5 = *(float *)(param_1 + 0xc + uVar3 * 4) + fVar2;
    }
    else {
      *(float *)(param_1 + uVar3 * 4) = fVar2 + fVar1;
      fVar5 = *(float *)(param_1 + 0xc + uVar3 * 4) + fVar5;
    }
    *(float *)(param_1 + 0xc + uVar3 * 4) = fVar5;
    fVar5 = param_3[1] * *pfVar4;
    fVar2 = param_3[4] * *pfVar4;
    fVar1 = *(float *)(param_1 + uVar3 * 4);
    if (fVar5 < fVar2) {
      *(float *)(param_1 + uVar3 * 4) = fVar5 + fVar1;
      fVar5 = *(float *)(param_1 + 0xc + uVar3 * 4) + fVar2;
    }
    else {
      *(float *)(param_1 + uVar3 * 4) = fVar2 + fVar1;
      fVar5 = *(float *)(param_1 + 0xc + uVar3 * 4) + fVar5;
    }
    *(float *)(param_1 + 0xc + uVar3 * 4) = fVar5;
    fVar5 = param_3[2] * pfVar4[4];
    fVar2 = pfVar4[4] * param_3[5];
    fVar1 = *(float *)(param_1 + uVar3 * 4);
    if (fVar5 < fVar2) {
      *(float *)(param_1 + uVar3 * 4) = fVar5 + fVar1;
      fVar5 = *(float *)(param_1 + 0xc + uVar3 * 4) + fVar2;
    }
    else {
      *(float *)(param_1 + uVar3 * 4) = fVar2 + fVar1;
      fVar5 = *(float *)(param_1 + 0xc + uVar3 * 4) + fVar5;
    }
    *(float *)(param_1 + 0xc + uVar3 * 4) = fVar5;
    uVar3 = uVar3 + 1;
    pfVar4 = pfVar4 + 1;
  } while (uVar3 < 3);
  return 0;
}

/* ref: FUN_00c9bf20 */
byte F_00c9bf20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc9bf20u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint param_5 = (uint)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
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
  
  fVar10 = *(float *)param_3;
  fVar11 = *(float *)param_4 - fVar10;
  fVar3 = *(float *)(param_4 + 4) - *(float *)(param_3 + 4);
  fVar4 = *(float *)(param_4 + 8) - *(float *)(param_3 + 8);
  fVar5 = *(float *)param_5 - fVar10;
  fVar6 = *(float *)(param_5 + 4) - *(float *)(param_3 + 4);
  fVar7 = *(float *)(param_5 + 8) - *(float *)(param_3 + 8);
  fVar12 = *(float *)param_2;
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_2 + 8);
  fVar13 = (float)((double)fVar7 * (double)fVar1 - (double)fVar6 * (double)fVar2);
  fVar14 = (float)((double)fVar2 * (double)fVar5 - (double)fVar7 * (double)fVar12);
  fVar15 = (float)((double)fVar6 * (double)fVar12 - (double)fVar1 * (double)fVar5);
  fVar16 = ((float)GEN_TOF((((double)fVar14 * (double)fVar3 + (double)fVar13 * (double)fVar11) +
                  (double)fVar15 * (double)fVar4)));
  if ((!GEN_ISNAN(fVar16) && !GEN_ISNAN(REFG(float, 0x11290b0))) && !(fVar16 <= REFG(float, 0x11290b0))) {
    fVar10 = *param_1 - fVar10;
    fVar8 = param_1[1] - *(float *)(param_3 + 4);
    fVar9 = param_1[2] - *(float *)(param_3 + 8);
    fVar13 = ((float)GEN_TOF((((double)fVar8 * (double)fVar14 + (double)fVar10 * (double)fVar13) +
                    (double)fVar9 * (double)fVar15)));
    if ((!(fVar13 < 0.0)) && (!(fVar16 < fVar13))) {
      fVar14 = (float)((double)fVar9 * (double)fVar11 - (double)fVar4 * (double)fVar10);
      fVar11 = (float)((double)fVar10 * (double)fVar3 - (double)fVar8 * (double)fVar11);
      fVar10 = (float)((double)fVar8 * (double)fVar4 - (double)fVar9 * (double)fVar3);
      fVar12 = ((float)GEN_TOF((((double)fVar1 * (double)fVar14 + (double)fVar12 * (double)fVar10) +
                      (double)fVar2 * (double)fVar11)));
      if ((!(fVar12 < 0.0)) && (!((double)fVar16 < (double)fVar12 + (double)fVar13))) {
        *param_7 = ((float)GEN_TOF((((double)fVar14 * (double)fVar6 + (double)fVar10 * (double)fVar5) +
                          (double)fVar11 * (double)fVar7))) * (float)(REFG(double, 0x1088130) / (double)fVar16);
        fVar1 = *(float *)param_4 - *(float *)param_3;
        fVar10 = *(float *)(param_4 + 4) - *(float *)(param_3 + 4);
        fVar12 = *(float *)(param_4 + 8) - *(float *)(param_3 + 8);
        fVar2 = *(float *)param_5 - *(float *)param_4;
        fVar4 = *(float *)(param_5 + 4) - *(float *)(param_4 + 4);
        fVar3 = *(float *)(param_5 + 8) - *(float *)(param_4 + 8);
        *param_6 = (float)((double)fVar3 * (double)fVar10 - (double)fVar4 * (double)fVar12);
        param_6[1] = (float)((double)fVar12 * (double)fVar2 - (double)fVar3 * (double)fVar1);
        param_6[2] = (float)((double)fVar4 * (double)fVar1 - (double)fVar10 * (double)fVar2);
        F_00553ac0(param_6);
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00c9c410 */
byte F_00c9c410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc9c410u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  
  dVar2 = (double)(*param_1 - *param_3);
  dVar3 = (double)(param_1[1] - param_3[1]);
  fVar5 = ((float)GEN_TOF((((double)*param_2 * (double)(*param_1 - *param_3) +
                  (double)(param_1[1] - param_3[1]) * (double)param_2[1]) +
                 (double)(param_1[2] - param_3[2]) * (double)param_2[2])));
  dVar4 = (double)(param_1[2] - param_3[2]);
  fVar1 = ((float)GEN_TOF(((double)((float)GEN_TOF(((dVar2 * dVar2 + dVar3 * dVar3) + dVar4 * dVar4))) -
                 (double)param_3[3] * (double)param_3[3])));
  if (((!(0.0 < fVar1)) || (!(0.0 < fVar5))) &&
     (fVar1 = (float)((double)fVar5 * (double)fVar5 - (double)fVar1), !(fVar1 < 0.0))) {
    fVar1 = gen_bits2f((uint)gen_fl2bits(fVar5) ^ REFG(uint, 0x10920d0)) - SQRT(fVar1);
    *param_4 = fVar1;
    if (fVar1 < 0.0) {
      *param_4 = 0.0;
    }
    fVar1 = *param_4;
    *param_5 = *param_2 * fVar1;
    param_5[1] = fVar1 * param_2[1];
    param_5[2] = fVar1 * param_2[2];
    *param_5 = *param_1 + *param_5;
    param_5[1] = param_1[1] + param_5[1];
    param_5[2] = param_5[2] + param_1[2];
    return 1;
  }
  return 0;
}

/* ref: FUN_00c9c5f0 */
byte F_00c9c5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc9c5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  
  dVar2 = (double)(*param_1 - *param_3);
  dVar3 = (double)(param_1[1] - param_3[1]);
  fVar5 = ((float)GEN_TOF((((double)*param_2 * (double)(*param_1 - *param_3) +
                  (double)(param_1[1] - param_3[1]) * (double)param_2[1]) +
                 (double)(param_1[2] - param_3[2]) * (double)param_2[2])));
  dVar4 = (double)(param_1[2] - param_3[2]);
  fVar1 = ((float)GEN_TOF(((double)((float)GEN_TOF(((dVar2 * dVar2 + dVar3 * dVar3) + dVar4 * dVar4))) -
                 (double)param_3[3] * (double)param_3[3])));
  if (((!(0.0 < fVar1)) || (!(0.0 < fVar5))) &&
     (fVar1 = (float)((double)fVar5 * (double)fVar5 - (double)fVar1), !(fVar1 < 0.0))) {
    fVar1 = gen_bits2f((uint)gen_fl2bits(fVar5) ^ REFG(uint, 0x10920d0)) - SQRT(fVar1);
    *param_4 = fVar1;
    if (0.0 <= fVar1) {
      *param_5 = *param_2 * fVar1;
      param_5[1] = fVar1 * param_2[1];
      param_5[2] = fVar1 * param_2[2];
      *param_5 = *param_1 + *param_5;
      param_5[1] = param_1[1] + param_5[1];
      param_5[2] = param_5[2] + param_1[2];
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c9c7d0 */
byte F_00c9c7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc9c7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = (double)(*param_1 - *param_3);
  dVar4 = (double)(param_1[1] - param_3[1]);
  dVar5 = (double)(param_1[2] - param_3[2]);
  fVar2 = ((float)GEN_TOF(((dVar3 * dVar3 + dVar4 * dVar4) + dVar5 * dVar5))) - param_3[3];
  fVar1 = ((float)GEN_TOF((((double)*param_2 * (double)(*param_1 - *param_3) +
                  (double)(param_1[1] - param_3[1]) * (double)param_2[1]) +
                 (double)(param_1[2] - param_3[2]) * (double)param_2[2])));
  if (((!(0.0 < fVar2)) || (!(0.0 < fVar1))) &&
     (fVar2 = (float)((double)fVar1 * (double)fVar1 - (double)fVar2), !(fVar2 < 0.0))) {
    fVar2 = gen_bits2f((uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0)) - SQRT(fVar2);
    *param_4 = fVar2;
    if (fVar2 < 0.0) {
      *param_4 = 0.0;
    }
    fVar2 = *param_4;
    *param_5 = *param_2 * fVar2;
    param_5[1] = fVar2 * param_2[1];
    param_5[2] = fVar2 * param_2[2];
    *param_5 = *param_1 + *param_5;
    param_5[1] = param_5[1] + param_1[1];
    param_5[2] = param_1[2] + param_5[2];
    return 1;
  }
  return 0;
}

/* ref: FUN_00c9c9b0 */
byte F_00c9c9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc9c9b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = (double)(*param_1 - *param_3);
  dVar4 = (double)(param_1[1] - param_3[1]);
  dVar5 = (double)(param_1[2] - param_3[2]);
  fVar2 = ((float)GEN_TOF(((dVar3 * dVar3 + dVar4 * dVar4) + dVar5 * dVar5))) - param_3[3];
  fVar1 = ((float)GEN_TOF((((double)*param_2 * (double)(*param_1 - *param_3) +
                  (double)(param_1[1] - param_3[1]) * (double)param_2[1]) +
                 (double)(param_1[2] - param_3[2]) * (double)param_2[2])));
  if (((!(0.0 < fVar2)) || (!(0.0 < fVar1))) &&
     (fVar2 = (float)((double)fVar1 * (double)fVar1 - (double)fVar2), !(fVar2 < 0.0))) {
    fVar2 = gen_bits2f((uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0)) - SQRT(fVar2);
    *param_4 = fVar2;
    if (fVar2 < 0.0) {
      *param_4 = 0.0;
    }
    fVar2 = *param_4;
    *param_5 = *param_2 * fVar2;
    param_5[1] = fVar2 * param_2[1];
    param_5[2] = fVar2 * param_2[2];
    *param_5 = *param_1 + *param_5;
    param_5[1] = param_5[1] + param_1[1];
    param_5[2] = param_1[2] + param_5[2];
    return 1;
  }
  return 0;
}

/* ref: FUN_00c9cb90 */
byte F_00c9cb90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc9cb90u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;
  undefined4 * param_8 = (undefined4 *)(uintptr_t)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined4 * puVar6;
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
  double dVar19;
  
  uVar5 = REFG(float, 0x10920d0);
  fVar9 = *(float *)param_4 - *(float *)param_3;
  fVar1 = *(float *)(param_4 + 4) - *(float *)(param_3 + 4);
  fVar11 = *(float *)(param_4 + 8) - *(float *)(param_3 + 8);
  fVar8 = *(float *)param_1 - *(float *)param_3;
  (*(float *)(gen_frame + 0x14)) = fVar8;
  fVar10 = *(float *)(param_1 + 4) - *(float *)(param_3 + 4);
  (*(float *)(gen_frame + 0x18)) = fVar10;
  fVar2 = *(float *)(param_1 + 8) - *(float *)(param_3 + 8);
  fVar3 = *(float *)param_2 - *(float *)param_1;
  fVar4 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
  (*(float *)((char *)&(*(double *)(gen_frame + 0x2c)) + 0)) = fVar4;
  fVar18 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  (*(float *)((char *)&(*(double *)(gen_frame + 0x2c)) + 4)) = fVar18;
  (*(float *)(gen_frame + 0x1c)) = fVar2;
  fVar7 = ((float)GEN_TOF((((double)fVar10 * (double)fVar1 + (double)fVar8 * (double)fVar9) +
                 (double)fVar2 * (double)fVar11)));
  fVar12 = ((float)GEN_TOF((((double)fVar4 * (double)fVar1 + (double)fVar3 * (double)fVar9) +
                  (double)fVar18 * (double)fVar11)));
  fVar13 = ((float)GEN_TOF((((double)fVar9 * (double)fVar9 + (double)fVar1 * (double)fVar1) +
                  (double)fVar11 * (double)fVar11)));
  fVar14 = fVar12 + fVar7;
  (*(float *)(gen_frame + 0x34)) = fVar13;
  if (((fVar7 < 0.0) && (fVar14 < 0.0)) ||
     ((fVar13 < fVar7 && ((!GEN_ISNAN(fVar14) && !GEN_ISNAN(fVar13)) && !(fVar14 <= fVar13))))) {
    return 0;
  }
  dVar19 = (double)fVar3 * (double)fVar3 + (double)fVar4 * (double)fVar4;
  (*(double *)(gen_frame + 0x20)) = dVar19;
  fVar14 = (float)(dVar19 + (double)fVar18 * (double)fVar18);
  (*(float *)(gen_frame + 0x38)) = fVar14;
  fVar15 = ((float)GEN_TOF((((double)fVar3 * (double)fVar8 + (double)fVar4 * (double)fVar10) +
                  (double)fVar18 * (double)fVar2)));
  fVar16 = (float)((double)fVar14 * (double)fVar13 - (double)fVar12 * (double)fVar12);
  (*(float *)((char *)&(*(double *)(gen_frame + 0x20)) + 4)) = fVar16;
  (*(double *)(gen_frame + 0x20)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar16),(int)(ulonglong)gen_d2bits(dVar19)));
  fVar17 = (float)(REFG(double, 0x1088130) / ((double)GEN_TOD(SQRT(fVar13))));
  if (0.0 < fVar17) {
    fVar9 = fVar9 * fVar17;
    fVar1 = fVar1 * fVar17;
    fVar11 = fVar11 * fVar17;
  }
  else {
    fVar1 = REFG(float, 0x1379704);
    fVar11 = REFG(float, 0x1379708);
    fVar9 = REFG(float, 0x1379700);
    if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
      REFG(float, 0x1379700) = 0.0;
      REFG(float, 0x1379704) = REFG(float, 0x1087f04);
      REFG(float, 0x1379708) = 0.0;
      fVar1 = REFG(float, 0x1087f04);
      fVar11 = REFG(float, 0x1379708);
      fVar9 = REFG(float, 0x1379700);
    }
  }
  fVar17 = (float)(REFG(double, 0x1088130) / ((double)GEN_TOD(SQRT(fVar14))));
  (*(float *)(gen_frame + 0x10)) = fVar11;
  (*(float *)(gen_frame + 0xc)) = fVar1;
  (*(float *)(gen_frame + 0x8)) = fVar9;
  if (0.0 < fVar17) {
    fVar3 = fVar17 * fVar3;
    fVar4 = fVar4 * fVar17;
    fVar18 = fVar18 * fVar17;
  }
  else {
    fVar18 = REFG(float, 0x1379708);
    fVar3 = REFG(float, 0x1379700);
    fVar4 = REFG(float, 0x1379704);
    if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
      REFG(float, 0x1379700) = 0.0;
      REFG(float, 0x1379704) = REFG(float, 0x1087f04);
      REFG(float, 0x1379708) = 0.0;
      fVar18 = REFG(float, 0x1379708);
      fVar3 = REFG(float, 0x1379700);
      fVar4 = REFG(float, 0x1087f04);
    }
  }
  fVar17 = ((float)GEN_TOF((((double)fVar3 * (double)fVar9 + (double)fVar4 * (double)fVar1) +
                  (double)fVar18 * (double)fVar11)));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x2c)) + 4)) = fVar17;
  fVar10 = ((float)GEN_TOF(((double)((float)GEN_TOF((((double)fVar8 * (double)fVar8 + (double)fVar10 * (double)fVar10)
                                  + (double)fVar2 * (double)fVar2))) -
                  (double)param_5 * (double)param_5)));
  (*(float *)(gen_frame + 0x34)) = fVar10;
  fVar8 = (float)((double)fVar10 * (double)fVar13 - (double)fVar7 * (double)fVar7);
  (*(float *)(gen_frame + 0x38)) = fVar8;
  dVar19 = (double)fVar17;
  (*(double *)(gen_frame + 0x2c)) = dVar19;
  if (((float)GEN_TOF(gen_bits2d((ulonglong)
                        gen_d2bits((double)((float)GEN_TOF(((double)((float)GEN_TOF((((double)fVar1 * (double)fVar1 +
                                                                   (double)fVar9 * (double)fVar9) +
                                                                  (double)fVar11 * (double)fVar11))) *
                                                   (double)((float)GEN_TOF((((double)fVar4 * (double)fVar4 +
                                                                   (double)fVar3 * (double)fVar3) +
                                                                  (double)fVar18 * (double)fVar18))) -
                                                  dVar19 * dVar19)))) & REFG(ulonglong, 0x11290a0)))) < REFG(float, 0x11290b4))
  {
    if (!(0.0 < fVar8)) {
      if (fVar7 < 0.0) {
        *param_6 = gen_bits2f((uint)gen_fl2bits(fVar15) ^ REFG(uint, 0x10920d0)) / fVar14;
        (*(float *)(gen_frame + 0x8)) = *(float *)param_3 - *(float *)param_4;
        (*(float *)(gen_frame + 0xc)) = *(float *)(param_3 + 4) - *(float *)(param_4 + 4);
        (*(float *)(gen_frame + 0x10)) = *(float *)(param_3 + 8) - *(float *)(param_4 + 8);
        puVar6 = (undefined4 *)F_00553ac0(&(*(float *)(gen_frame + 0x8)));
        *param_7 = *puVar6;
        param_7[1] = puVar6[1];
        param_7[2] = puVar6[2];
        *param_8 = 1;
        return 1;
      }
      if (fVar13 < fVar7) {
        *param_6 = ((float)GEN_TOF((((double)fVar12 - (double)fVar15) / (double)fVar14)));
        (*(float *)(gen_frame + 0x8)) = *(float *)param_4 - *(float *)param_3;
        (*(float *)(gen_frame + 0xc)) = *(float *)(param_4 + 4) - *(float *)(param_3 + 4);
        (*(float *)(gen_frame + 0x10)) = *(float *)(param_4 + 8) - *(float *)(param_3 + 8);
        puVar6 = (undefined4 *)F_00553ac0(&(*(float *)(gen_frame + 0x8)));
        *param_7 = *puVar6;
        param_7[1] = puVar6[1];
        param_7[2] = puVar6[2];
        *param_8 = 2;
        return 1;
      }
    }
  }
  else {
    fVar9 = (float)((double)fVar15 * (double)fVar13 - (double)fVar12 * (double)fVar7);
    dVar19 = (double)fVar9;
    fVar11 = (float)(dVar19 * dVar19 - (double)fVar8 * (double)fVar16);
    if (!(fVar11 < 0.0)) {
      fVar9 = ((float)GEN_TOF(((((double)GEN_TOD(gen_bits2f((uint)gen_fl2bits(fVar9) ^ REFG(uint, 0x10920d0)))) -
                      ((double)GEN_TOD(SQRT(fVar11)))) / (double)fVar16)));
      dVar19 = (double)fVar9 * (double)fVar12 + (double)fVar7;
      *param_6 = fVar9;
      if (dVar19 < 0.0) {
        if (!(fVar12 <= 0.0)) {
          fVar12 = gen_bits2f((uint)gen_fl2bits(fVar7) ^ uVar5) / fVar12;
          dVar19 = (double)fVar15 * *(double *)&REFG(undefined, 0x1092098);
          *param_6 = fVar12;
          if ((((double)fVar12 * (double)fVar14 + dVar19) * (double)fVar12 + (double)fVar10 <= 0.0)
             && (!(fVar12 < 0.0))) {
            (*(float *)(gen_frame + 0x8)) = *(float *)param_3 - *(float *)param_4;
            (*(float *)(gen_frame + 0xc)) = *(float *)(param_3 + 4) - *(float *)(param_4 + 4);
            (*(float *)(gen_frame + 0x10)) = *(float *)(param_3 + 8) - *(float *)(param_4 + 8);
            puVar6 = (undefined4 *)F_00553ac0(&(*(float *)(gen_frame + 0x8)));
            *param_7 = *puVar6;
            param_7[1] = puVar6[1];
            param_7[2] = puVar6[2];
            *param_8 = 1;
            return 1;
          }
        }
      }
      else if ((double)fVar13 < dVar19) {
        if (!(0.0 <= fVar12)) {
          fVar9 = ((float)GEN_TOF((((double)fVar13 - (double)fVar7) / (double)fVar12)));
          dVar19 = (double)fVar7 * *(double *)&REFG(undefined, 0x1092098);
          *param_6 = fVar9;
          if (((((double)fVar15 - (double)fVar12) * *(double *)&REFG(undefined, 0x1092098) +
               (double)fVar9 * (double)fVar14) * (double)fVar9 +
               (((double)fVar10 + (double)fVar13) - dVar19) <= 0.0) && (!(fVar9 < 0.0))) {
            (*(float *)(gen_frame + 0x8)) = *(float *)param_4 - *(float *)param_3;
            (*(float *)(gen_frame + 0xc)) = *(float *)(param_4 + 4) - *(float *)(param_3 + 4);
            (*(float *)(gen_frame + 0x10)) = *(float *)(param_4 + 8) - *(float *)(param_3 + 8);
            puVar6 = (undefined4 *)F_00553ac0(&(*(float *)(gen_frame + 0x8)));
            *param_7 = *puVar6;
            param_7[1] = puVar6[1];
            param_7[2] = puVar6[2];
            *param_8 = 2;
            return 1;
          }
        }
      }
      else {
        *param_6 = fVar9;
        if ((!(fVar9 < 0.0)) && (!(REFG(float, 0x1087f04) < fVar9))) {
          fVar11 = (*(float *)param_2 - *(float *)param_1) * fVar9 + *(float *)param_1;
          fVar1 = *(float *)(param_1 + 4) +
                  (*(float *)(param_2 + 4) - *(float *)(param_1 + 4)) * fVar9;
          (*(float *)(gen_frame + 0xc)) = fVar1;
          fVar8 = *(float *)(param_1 + 8) +
                  (*(float *)(param_2 + 8) - *(float *)(param_1 + 8)) * fVar9;
          fVar9 = *(float *)param_3;
          (*(float *)(gen_frame + 0x10)) = fVar8;
          fVar10 = *(float *)param_4 - fVar9;
          fVar3 = *(float *)(param_4 + 4) - *(float *)(param_3 + 4);
          (*(float *)(gen_frame + 0x8)) = fVar11;
          fVar2 = *(float *)(param_4 + 8) - *(float *)(param_3 + 8);
          fVar18 = 0.0;
          fVar4 = ((float)GEN_TOF(((((double)GEN_TOD((fVar1 - *(float *)(param_3 + 4)))) * (double)fVar3 +
                          (double)(fVar11 - fVar9) * (double)fVar10) +
                         ((double)GEN_TOD((fVar8 - *(float *)(param_3 + 8)))) * (double)fVar2))) /
                  ((float)GEN_TOF((((double)fVar10 * (double)fVar10 + (double)fVar3 * (double)fVar3) +
                         (double)fVar2 * (double)fVar2)));
          if ((!GEN_ISNAN(fVar4) && (!(0.0 < fVar4) && fVar4 != 0.0)) ||
             (fVar18 = REFG(float, 0x1087f04), REFG(float, 0x1087f04) < fVar4)) {
            fVar4 = fVar18;
          }
          (*(float *)(gen_frame + 0x14)) = fVar11 - (fVar10 * fVar4 + fVar9);
          (*(float *)(gen_frame + 0x18)) = fVar1 - (fVar3 * fVar4 + *(float *)(param_3 + 4));
          (*(float *)(gen_frame + 0x1c)) = fVar8 - (fVar2 * fVar4 + *(float *)(param_3 + 8));
          puVar6 = (undefined4 *)F_00553ac0(&(*(float *)(gen_frame + 0x14)));
          *param_7 = *puVar6;
          param_7[1] = puVar6[1];
          param_7[2] = puVar6[2];
          *param_8 = 0;
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00c9d8d0 */
uint F_00c9d8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc9d8d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00c9d8f0 */
uint F_00c9d8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc9d8f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00c9d900 */
uint F_00c9d900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc9d900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d76b0) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d76b0) = *(uint *)&REFG(undefined, 0x15d76b0) | 1;
    REFG(float, 0x15d76a4) = 0;
    REFG(float, 0x15d76a8) = 0;
    REFG(float, 0x15d76ac) = 0;
  }
  *(undefined4 * PTR32 *)((int)this + 0x40) = &REFG(float, 0x15d76a4);
  if ((*(uint *)&REFG(undefined, 0x15d76b0) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d76b0) = *(uint *)&REFG(undefined, 0x15d76b0) | 1;
    REFG(float, 0x15d76a4) = 0;
    REFG(float, 0x15d76a8) = 0;
    REFG(float, 0x15d76ac) = 0;
  }
  *(undefined4 * PTR32 *)((int)this + 0x44) = &REFG(float, 0x15d76a4);
  if ((*(uint *)&REFG(undefined, 0x15d76b0) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d76b0) = *(uint *)&REFG(undefined, 0x15d76b0) | 1;
    REFG(float, 0x15d76a4) = 0;
    REFG(float, 0x15d76a8) = 0;
    REFG(float, 0x15d76ac) = 0;
  }
  *(undefined4 *)((int)this + 0x48) = REFG(float, 0x15d76a4);
  *(undefined4 *)((int)this + 0x4c) = REFG(float, 0x15d76a8);
  *(undefined4 *)((int)this + 0x50) = REFG(float, 0x15d76ac);
  *(undefined4 *)((int)this + 0x54) = param_1;
  *(undefined4 *)((int)this + 0x58) = 0;
  return (uint)this;
}

/* ref: FUN_00c9d9e0 */
byte F_00c9d9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc9d9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (0xf < *(uint *)((int)this + 0x40)) {
    return 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + *(uint *)((int)this + 0x40) * 4))) = param_1;
  *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + 1;
  return *(uint *)((int)this + 0x40) < 0x10;
}

/* ref: FUN_00c9da10 */
uint F_00c9da10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc9da10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x20) = param_2;
  return param_2;
}

/* ref: FUN_00c9da20 */
uint F_00c9da20(unsigned int gen_a0)
{
  GEN_ENTER(0xc9da20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: FUN_00c9da30 */
byte F_00c9da30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc9da30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x55) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00c9da60 */
byte F_00c9da60(unsigned int gen_a0)
{
  GEN_ENTER(0xc9da60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x55);
}

/* ref: FUN_00c9da70 */
uint F_00c9da70(unsigned int gen_a0)
{
  GEN_ENTER(0xc9da70u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x11290bc));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00c9da90 */
uint F_00c9da90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc9da90u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x190];
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
  double dVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float in_XMM7_Da = 0;
  double dVar27;
  
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xf] = 0.0;
  param_1[0x10] = gen_bits2f(param_4);
  param_1[0x11] = gen_bits2f(param_3);
  param_1[0x12] = 0.0;
  param_1[0x13] = 0.0;
  param_1[0x14] = 0.0;
  param_1[0x15] = 0.0;
  param_1[0x16] = gen_bits2f(param_2);
  dVar22 = REFG(double, 0x10920b8);
  param_1[0x12] =
       ((float)GEN_TOF(((((double)*param_6 + REFG(double, 0x10920b8)) - ((double)*param_5 + REFG(double, 0x10920b8))) -
              REFG(double, 0x10920b8))));
  param_1[0x13] = ((float)GEN_TOF(((((double)param_6[1] + dVar22) - ((double)param_5[1] + dVar22)) - dVar22)));
  pfVar1 = ((float *)(uintptr_t)gen_fl2bits((float)(param_1[0x11])));
  pfVar2 = ((float *)(uintptr_t)gen_fl2bits((float)(param_1[0x10])));
  param_1[0x14] = ((float)GEN_TOF(((((double)param_6[2] + dVar22) - ((double)param_5[2] + dVar22)) - dVar22)));
  (*(float *)(gen_frame + 0x118)) = 0.0;
  (*(float *)(gen_frame + 0x128)) = 0.0;
  (*(float *)(gen_frame + 0x138)) = 0.0;
  (*(float *)(gen_frame + 0x148)) = 0.0;
  fVar5 = pfVar1[2] + pfVar2[2];
  dVar22 = (double)*pfVar1;
  fVar9 = (float)((double)*pfVar2 + dVar22);
  (*(float *)(gen_frame + 0xc0)) = fVar9;
  (*(float *)(gen_frame + 0xc4)) = pfVar1[1] + pfVar2[1];
  (*(float *)(gen_frame + 0xc8)) = fVar5;
  F_00c98b30(&(*(float *)(gen_frame + 0x10c)),&(*(float *)(gen_frame + 0xc0)));
  fVar6 = gen_bits2f((uint)(ulonglong)gen_d2bits(dVar22));
  pfVar1 = (float *)F_00c98740(fVar5,fVar9,fVar6,in_XMM7_Da,((undefined1 *)(gen_frame + 0x80)),param_1[0x13]);
  pfVar2 = (float *)F_00c988c0(fVar6,in_XMM7_Da,((undefined1 *)(gen_frame + 0x40)),param_1[0x14]);
  fVar5 = *pfVar1;
  fVar9 = pfVar1[1];
  fVar6 = *pfVar2;
  fVar7 = pfVar2[4];
  fVar3 = pfVar2[8];
  (*(float *)(gen_frame + 0x14c)) = ((float)GEN_TOF(((((double)fVar6 * (double)fVar5 + (double)fVar7 * (double)fVar9) +
                     (double)pfVar1[2] * (double)fVar3) + (double)pfVar1[3] * (double)pfVar2[0xc])));
  (*(float *)(gen_frame + 0x150)) = ((float)GEN_TOF(((((double)pfVar2[1] * (double)fVar5 + (double)pfVar2[5] * (double)fVar9) +
                     (double)pfVar2[9] * (double)pfVar1[2]) +
                    (double)pfVar2[0xd] * (double)pfVar1[3])));
  (*(float *)(gen_frame + 0x154)) = ((float)GEN_TOF(((((double)pfVar2[2] * (double)fVar5 + (double)pfVar2[6] * (double)fVar9) +
                     (double)pfVar2[10] * (double)pfVar1[2]) +
                    (double)pfVar2[0xe] * (double)pfVar1[3])));
  fVar4 = pfVar1[4];
  (*(float *)(gen_frame + 0x158)) = ((float)GEN_TOF(((((double)pfVar2[3] * (double)fVar5 + (double)pfVar2[7] * (double)fVar9) +
                     (double)pfVar2[0xb] * (double)pfVar1[2]) +
                    (double)pfVar2[0xf] * (double)pfVar1[3])));
  fVar5 = pfVar1[5];
  (*(float *)(gen_frame + 0x15c)) = ((float)GEN_TOF(((((double)fVar4 * (double)fVar6 + (double)fVar5 * (double)fVar7) +
                     (double)pfVar1[6] * (double)fVar3) + (double)pfVar1[7] * (double)pfVar2[0xc])));
  (*(float *)(gen_frame + 0x160)) = ((float)GEN_TOF(((((double)fVar4 * (double)pfVar2[1] + (double)fVar5 * (double)pfVar2[5]) +
                     (double)pfVar1[6] * (double)pfVar2[9]) +
                    (double)pfVar1[7] * (double)pfVar2[0xd])));
  (*(float *)(gen_frame + 0x164)) = ((float)GEN_TOF(((((double)fVar4 * (double)pfVar2[2] + (double)fVar5 * (double)pfVar2[6]) +
                     (double)pfVar1[6] * (double)pfVar2[10]) +
                    (double)pfVar1[7] * (double)pfVar2[0xe])));
  fVar9 = pfVar1[8];
  (*(float *)(gen_frame + 0x168)) = ((float)GEN_TOF(((((double)fVar4 * (double)pfVar2[3] + (double)fVar5 * (double)pfVar2[7]) +
                     (double)pfVar1[6] * (double)pfVar2[0xb]) +
                    (double)pfVar1[7] * (double)pfVar2[0xf])));
  fVar5 = pfVar1[9];
  (*(float *)(gen_frame + 0x16c)) = ((float)GEN_TOF(((((double)fVar9 * (double)fVar6 + (double)fVar5 * (double)fVar7) +
                     (double)pfVar1[10] * (double)fVar3) + (double)pfVar1[0xb] * (double)pfVar2[0xc]
                    )));
  (*(float *)(gen_frame + 0x170)) = ((float)GEN_TOF(((((double)fVar9 * (double)pfVar2[1] + (double)fVar5 * (double)pfVar2[5]) +
                     (double)pfVar1[10] * (double)pfVar2[9]) +
                    (double)pfVar1[0xb] * (double)pfVar2[0xd])));
  (*(float *)(gen_frame + 0x174)) = ((float)GEN_TOF(((((double)fVar9 * (double)pfVar2[2] + (double)fVar5 * (double)pfVar2[6]) +
                     (double)pfVar1[10] * (double)pfVar2[10]) +
                    (double)pfVar1[0xb] * (double)pfVar2[0xe])));
  fVar4 = pfVar1[0xf];
  fVar8 = pfVar1[0xd];
  fVar10 = pfVar1[0xe];
  (*(float *)(gen_frame + 0x178)) = ((float)GEN_TOF(((((double)fVar9 * (double)pfVar2[3] + (double)fVar5 * (double)pfVar2[7]) +
                     (double)pfVar1[10] * (double)pfVar2[0xb]) +
                    (double)pfVar1[0xb] * (double)pfVar2[0xf])));
  fVar5 = pfVar1[0xc];
  dVar27 = (((double)fVar5 * (double)fVar6 + (double)fVar8 * (double)fVar7) +
           (double)fVar10 * (double)fVar3) + (double)fVar4 * (double)pfVar2[0xc];
  (*(float *)(gen_frame + 0x17c)) = (float)dVar27;
  (*(float *)(gen_frame + 0x180)) = ((float)GEN_TOF(((((double)fVar5 * (double)pfVar2[1] + (double)fVar8 * (double)pfVar2[5]) +
                     (double)fVar10 * (double)pfVar2[9]) + (double)fVar4 * (double)pfVar2[0xd])));
  dVar23 = (((double)fVar5 * (double)pfVar2[2] + (double)fVar8 * (double)pfVar2[6]) +
           (double)fVar10 * (double)pfVar2[10]) + (double)fVar4 * (double)pfVar2[0xe];
  (*(float *)(gen_frame + 0x184)) = (float)dVar23;
  dVar22 = (double)fVar4 * (double)pfVar2[0xf];
  (*(float *)(gen_frame + 0x188)) = ((float)GEN_TOF(((((double)fVar5 * (double)pfVar2[3] + (double)pfVar1[0xd] * (double)pfVar2[7]) +
                    (double)pfVar2[0xb] * (double)fVar10) + dVar22)));
  pfVar1 = (float *)F_00c985b0(GEN_TOF(gen_bits2f((uint)(ulonglong)gen_d2bits(dVar22))),GEN_TOF(gen_bits2f((uint)(ulonglong)gen_d2bits((double)pfVar2[0xf]))),GEN_TOF(gen_bits2f((uint)(ulonglong)gen_d2bits(dVar23))),GEN_TOF(gen_bits2f((uint)(ulonglong)gen_d2bits(dVar27))),((undefined1 *)(gen_frame + 0x0)),
                                 param_1[0x12]);
  fVar5 = pfVar1[1];
  fVar9 = *pfVar1;
  fVar6 = pfVar1[2];
  fVar7 = pfVar1[3];
  fVar24 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x15c)) * (double)fVar5 + (double)fVar9 * (double)(*(float *)(gen_frame + 0x14c))) +
                   (double)(*(float *)(gen_frame + 0x16c)) * (double)fVar6) + (double)(*(float *)(gen_frame + 0x17c)) * (double)fVar7)));
  fVar25 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x150)) * (double)fVar9 + (double)(*(float *)(gen_frame + 0x160)) * (double)fVar5) +
                   (double)(*(float *)(gen_frame + 0x170)) * (double)fVar6) + (double)(*(float *)(gen_frame + 0x180)) * (double)fVar7)));
  (*(float *)(gen_frame + 0xd0)) = fVar25;
  fVar3 = pfVar1[5];
  fVar26 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x154)) * (double)fVar9 + (double)(*(float *)(gen_frame + 0x164)) * (double)fVar5) +
                   (double)(*(float *)(gen_frame + 0x174)) * (double)fVar6) + (double)(*(float *)(gen_frame + 0x184)) * (double)fVar7)));
  fVar8 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x168)) * (double)fVar5 + (double)(*(float *)(gen_frame + 0x158)) * (double)fVar9) +
                  (double)(*(float *)(gen_frame + 0x178)) * (double)fVar6) + (double)(*(float *)(gen_frame + 0x188)) * (double)fVar7)));
  fVar5 = pfVar1[4];
  fVar19 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x15c)) * (double)fVar3 + (double)fVar5 * (double)(*(float *)(gen_frame + 0x14c))) +
                   (double)(*(float *)(gen_frame + 0x16c)) * (double)pfVar1[6]) + (double)(*(float *)(gen_frame + 0x17c)) * (double)pfVar1[7])));
  (*(float *)(gen_frame + 0xdc)) = fVar19;
  fVar20 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x150)) * (double)fVar5 + (double)(*(float *)(gen_frame + 0x160)) * (double)fVar3) +
                   (double)(*(float *)(gen_frame + 0x170)) * (double)pfVar1[6]) + (double)(*(float *)(gen_frame + 0x180)) * (double)pfVar1[7])));
  (*(float *)(gen_frame + 0xe0)) = fVar20;
  fVar21 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x154)) * (double)fVar5 + (double)(*(float *)(gen_frame + 0x164)) * (double)fVar3) +
                   (double)(*(float *)(gen_frame + 0x174)) * (double)pfVar1[6]) + (double)(*(float *)(gen_frame + 0x184)) * (double)pfVar1[7])));
  fVar3 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x168)) * (double)fVar3 + (double)fVar5 * (double)(*(float *)(gen_frame + 0x158))) +
                  (double)(*(float *)(gen_frame + 0x178)) * (double)pfVar1[6]) + (double)(*(float *)(gen_frame + 0x188)) * (double)pfVar1[7])));
  (*(float *)(gen_frame + 0xe8)) = fVar3;
  fVar5 = pfVar1[9];
  fVar10 = ((float)GEN_TOF(((((double)pfVar1[8] * (double)(*(float *)(gen_frame + 0x14c)) + (double)(*(float *)(gen_frame + 0x15c)) * (double)fVar5) +
                   (double)(*(float *)(gen_frame + 0x16c)) * (double)pfVar1[10]) + (double)(*(float *)(gen_frame + 0x17c)) * (double)pfVar1[0xb])));
  (*(float *)(gen_frame + 0xec)) = fVar10;
  fVar11 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x150)) * (double)pfVar1[8] + (double)(*(float *)(gen_frame + 0x160)) * (double)fVar5) +
                   (double)(*(float *)(gen_frame + 0x170)) * (double)pfVar1[10]) + (double)(*(float *)(gen_frame + 0x180)) * (double)pfVar1[0xb])));
  (*(float *)(gen_frame + 0xf0)) = fVar11;
  fVar12 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x154)) * (double)pfVar1[8] + (double)(*(float *)(gen_frame + 0x164)) * (double)fVar5) +
                   (double)(*(float *)(gen_frame + 0x174)) * (double)pfVar1[10]) + (double)(*(float *)(gen_frame + 0x184)) * (double)pfVar1[0xb])));
  (*(float *)(gen_frame + 0xf4)) = fVar12;
  fVar9 = pfVar1[0xe];
  fVar6 = pfVar1[0xf];
  fVar4 = ((float)GEN_TOF(((((double)pfVar1[8] * (double)(*(float *)(gen_frame + 0x158)) + (double)(*(float *)(gen_frame + 0x168)) * (double)fVar5) +
                  (double)(*(float *)(gen_frame + 0x178)) * (double)pfVar1[10]) + (double)(*(float *)(gen_frame + 0x188)) * (double)pfVar1[0xb])));
  fVar5 = pfVar1[0xc];
  (*(float *)(gen_frame + 0xf8)) = fVar4;
  fVar7 = pfVar1[0xd];
  fVar13 = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x14c)) + (double)(*(float *)(gen_frame + 0x15c)) * (double)fVar7) +
                   (double)(*(float *)(gen_frame + 0x16c)) * (double)fVar9) + (double)(*(float *)(gen_frame + 0x17c)) * (double)fVar6)));
  (*(float *)(gen_frame + 0xfc)) = fVar13;
  fVar14 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x150)) * (double)fVar5 + (double)(*(float *)(gen_frame + 0x160)) * (double)fVar7) +
                   (double)(*(float *)(gen_frame + 0x170)) * (double)fVar9) + (double)(*(float *)(gen_frame + 0x180)) * (double)fVar6)));
  (*(float *)(gen_frame + 0x100)) = fVar14;
  fVar15 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x154)) * (double)fVar5 + (double)(*(float *)(gen_frame + 0x164)) * (double)fVar7) +
                   (double)(*(float *)(gen_frame + 0x174)) * (double)fVar9) + (double)(*(float *)(gen_frame + 0x184)) * (double)fVar6)));
  (*(float *)(gen_frame + 0x104)) = fVar15;
  fVar5 = ((float)GEN_TOF(((((double)fVar5 * (double)(*(float *)(gen_frame + 0x158)) + (double)(*(float *)(gen_frame + 0x168)) * (double)fVar7) +
                  (double)(*(float *)(gen_frame + 0x178)) * (double)fVar9) + (double)(*(float *)(gen_frame + 0x188)) * (double)fVar6)));
  (*(float *)(gen_frame + 0x108)) = fVar5;
  fVar16 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x10c)) * (double)fVar24 + (double)(*(float *)(gen_frame + 0x11c)) * (double)fVar25) +
                   (double)(*(float *)(gen_frame + 0x12c)) * (double)fVar26) + (double)(*(float *)(gen_frame + 0x13c)) * (double)fVar8)));
  (*(float *)(gen_frame + 0x14c)) = fVar16;
  fVar17 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x120)) * (double)fVar25 + (double)(*(float *)(gen_frame + 0x110)) * (double)fVar24) +
                   (double)(*(float *)(gen_frame + 0x130)) * (double)fVar26) + (double)(*(float *)(gen_frame + 0x140)) * (double)fVar8)));
  (*(float *)(gen_frame + 0x150)) = fVar17;
  fVar18 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x124)) * (double)fVar25 + (double)(*(float *)(gen_frame + 0x114)) * (double)fVar24) +
                   (double)(*(float *)(gen_frame + 0x134)) * (double)fVar26) + (double)(*(float *)(gen_frame + 0x144)) * (double)fVar8)));
  (*(float *)(gen_frame + 0x154)) = fVar18;
  fVar9 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x128)) * (double)fVar25 + (double)fVar24 * (double)(*(float *)(gen_frame + 0x118))) +
                  (double)(*(float *)(gen_frame + 0x138)) * (double)fVar26) + (double)(*(float *)(gen_frame + 0x148)) * (double)fVar8)));
  (*(float *)(gen_frame + 0x158)) = fVar9;
  fVar8 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x11c)) * (double)fVar20 + (double)(*(float *)(gen_frame + 0x10c)) * (double)fVar19) +
                  (double)(*(float *)(gen_frame + 0x12c)) * (double)fVar21) + (double)(*(float *)(gen_frame + 0x13c)) * (double)fVar3)));
  (*(float *)(gen_frame + 0x15c)) = fVar8;
  fVar24 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x120)) * (double)fVar20 + (double)(*(float *)(gen_frame + 0x110)) * (double)fVar19) +
                   (double)(*(float *)(gen_frame + 0x130)) * (double)fVar21) + (double)(*(float *)(gen_frame + 0x140)) * (double)fVar3)));
  (*(float *)(gen_frame + 0x160)) = fVar24;
  fVar25 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x124)) * (double)fVar20 + (double)(*(float *)(gen_frame + 0x114)) * (double)fVar19) +
                   (double)(*(float *)(gen_frame + 0x134)) * (double)fVar21) + (double)(*(float *)(gen_frame + 0x144)) * (double)fVar3)));
  (*(float *)(gen_frame + 0x164)) = fVar25;
  fVar6 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x128)) * (double)fVar20 + (double)(*(float *)(gen_frame + 0x118)) * (double)fVar19) +
                  (double)(*(float *)(gen_frame + 0x138)) * (double)fVar21) + (double)(*(float *)(gen_frame + 0x148)) * (double)fVar3)));
  (*(float *)(gen_frame + 0x168)) = fVar6;
  fVar19 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x11c)) * (double)fVar11 + (double)(*(float *)(gen_frame + 0x10c)) * (double)fVar10) +
                   (double)(*(float *)(gen_frame + 0x12c)) * (double)fVar12) + (double)(*(float *)(gen_frame + 0x13c)) * (double)fVar4)));
  (*(float *)(gen_frame + 0x16c)) = fVar19;
  fVar20 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x120)) * (double)fVar11 + (double)(*(float *)(gen_frame + 0x110)) * (double)fVar10) +
                   (double)(*(float *)(gen_frame + 0x130)) * (double)fVar12) + (double)(*(float *)(gen_frame + 0x140)) * (double)fVar4)));
  (*(float *)(gen_frame + 0x170)) = fVar20;
  fVar21 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x124)) * (double)fVar11 + (double)(*(float *)(gen_frame + 0x114)) * (double)fVar10) +
                   (double)(*(float *)(gen_frame + 0x134)) * (double)fVar12) + (double)(*(float *)(gen_frame + 0x144)) * (double)fVar4)));
  (*(float *)(gen_frame + 0x174)) = fVar21;
  fVar7 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x128)) * (double)fVar11 + (double)(*(float *)(gen_frame + 0x118)) * (double)fVar10) +
                  (double)(*(float *)(gen_frame + 0x138)) * (double)fVar12) + (double)(*(float *)(gen_frame + 0x148)) * (double)fVar4)));
  (*(float *)(gen_frame + 0x178)) = fVar7;
  fVar3 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x11c)) * (double)fVar14 + (double)(*(float *)(gen_frame + 0x10c)) * (double)fVar13) +
                  (double)(*(float *)(gen_frame + 0x12c)) * (double)fVar15) + (double)(*(float *)(gen_frame + 0x13c)) * (double)fVar5)));
  (*(float *)(gen_frame + 0x17c)) = fVar3;
  fVar4 = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x120)) * (double)fVar14 + (double)(*(float *)(gen_frame + 0x110)) * (double)fVar13) +
                  (double)(*(float *)(gen_frame + 0x130)) * (double)fVar15) + (double)(*(float *)(gen_frame + 0x140)) * (double)fVar5)));
  (*(float *)(gen_frame + 0x180)) = fVar4;
  *param_1 = fVar16;
  param_1[1] = fVar17;
  param_1[2] = fVar18;
  param_1[3] = fVar9;
  param_1[4] = fVar8;
  param_1[5] = fVar24;
  param_1[6] = fVar25;
  param_1[7] = fVar6;
  param_1[8] = fVar19;
  param_1[9] = fVar20;
  param_1[10] = fVar21;
  param_1[0xb] = fVar7;
  param_1[0xc] = fVar3;
  param_1[0xd] = fVar4;
  param_1[0xe] = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x124)) * (double)fVar14 + (double)(*(float *)(gen_frame + 0x114)) * (double)fVar13) +
                         (double)(*(float *)(gen_frame + 0x134)) * (double)fVar15) + (double)(*(float *)(gen_frame + 0x144)) * (double)fVar5)));
  param_1[0xf] = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x128)) * (double)fVar14 + (double)(*(float *)(gen_frame + 0x118)) * (double)fVar13) +
                         (double)(*(float *)(gen_frame + 0x138)) * (double)fVar15) + (double)(*(float *)(gen_frame + 0x148)) * (double)fVar5)));
  return (uint)param_1;
}

/* ref: FUN_00c9ee40 */
unsigned int F_00c9ee40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc9ee40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float * pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  pfVar9 = *(float * PTR32 *)((int)this + 0x44);
  fVar10 = *param_2 - *pfVar9;
  fVar11 = param_2[1] - pfVar9[1];
  fVar12 = param_2[2] - pfVar9[2];
  fVar1 = *(float *)((int)this + 0x24);
  fVar2 = *(float *)((int)this + 0x28);
  fVar3 = *(float *)((int)this + 0x14);
  fVar4 = *(float *)((int)this + 0x18);
  fVar5 = *(float *)((int)this + 4);
  fVar6 = *(float *)((int)this + 8);
  fVar7 = *(float *)((int)this + 0x34);
  fVar8 = *(float *)((int)this + 0x38);
  *param_1 = *(float *)((int)this + 0x30) +
             ((*(float *)((int)(uintptr_t)this) * fVar10 + *(float *)((int)this + 0x10) * fVar11) +
             *(float *)((int)this + 0x20) * fVar12);
  param_1[1] = fVar7 + ((fVar5 * fVar10 + fVar3 * fVar11) + fVar1 * fVar12);
  param_1[2] = fVar8 + ((fVar6 * fVar10 + fVar4 * fVar11) + fVar2 * fVar12);
  return 0;
}

/* ref: FUN_00c9f060 */
unsigned int F_00c9f060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc9f060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  for (piVar1 = *(int * PTR32 *)((int)this + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_1);
  }
  return 0;
}

/* ref: FUN_00c9f090 */
unsigned int F_00c9f090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc9f090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  for (piVar1 = *(int * PTR32 *)((int)this + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1);
  }
  return 0;
}

/* ref: FUN_00c9f0c0 */
uint F_00c9f0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc9f0c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  
  if (*(int *)(param_2 + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_2 + 4) + 8))) = *(undefined4 *)(param_2 + 8);
  }
  if (*(int *)(param_2 + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_2 + 8) + 4))) = *(undefined4 *)(param_2 + 4);
  }
  *(undefined4 *)(param_2 + 8) = 0;
  *(int *)(param_2 + 4) = in_ecx;
  iVar1 = *(int *)(in_ecx + 8);
  *(int *)(param_2 + 8) = iVar1;
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 4) = param_2;
  }
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00c9f100 */
byte F_00c9f100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc9f100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  
  if (*(int *)((int)this + 0x44) != 0) {
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x44) + 0x44))))(*(int * PTR32 *)((int)this + 0x44));
    switch((unsigned int)(uintptr_t)(uVar7)) {
    case 2: ;
    case 3: ;
    case 5: ;
    case 6: ;
      fVar1 = *(float *)((int)this + 0x18) - *(float *)((int)this + 0xc);
      fVar2 = *(float *)((int)this + 0x1c) - *(float *)((int)this + 0x10);
      fVar3 = *(float *)((int)this + 0x20) - *(float *)((int)this + 0x14);
      fVar4 = *(float *)((int)this + 0x24) - *(float *)((int)this + 0x18);
      fVar6 = *(float *)((int)this + 0x28) - *(float *)((int)this + 0x1c);
      fVar5 = *(float *)((int)this + 0x2c) - *(float *)((int)this + 0x20);
      *param_1 = (float)((double)fVar5 * (double)fVar2 - (double)fVar6 * (double)fVar3);
      param_1[1] = (float)((double)fVar3 * (double)fVar4 - (double)fVar5 * (double)fVar1);
      param_1[2] = (float)((double)fVar6 * (double)fVar1 - (double)fVar2 * (double)fVar4);
      F_00553ac0(param_1);
      return 1;
    case 4: ;
      break;
    default: ;
      return 0;
    }
  }
  *param_1 = *(float *)((int)this + 0x30);
  param_1[1] = *(float *)((int)this + 0x34);
  param_1[2] = *(float *)((int)this + 0x38);
  return 1;
}

/* ref: FUN_00c9f290 */
uint F_00c9f290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc9f290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  uint uVar3;
  
  uVar3 = CONCAT31((int3)((uint)in_EAX >> 8),(char)param_1);
  *(char *)((int)this + 0x54) = (char)param_1;
  if ((char)param_1 == '\0') {
    uVar2 = F_00c9d900(((undefined1 *)(gen_frame + 0x0)),2);
    uVar3 = uVar2;
    for (piVar1 = *(int * PTR32 *)((int)this + 0x60); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,uVar2);
    }
  }
  return uVar3;
}

/* ref: FUN_00c9f2d0 */
unsigned int F_00c9f2d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc9f2d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x11290bc));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  return 0;
}

/* ref: FUN_00c9f300 */
unsigned int F_00c9f300(unsigned int gen_a0)
{
  GEN_ENTER(0xc9f300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = F_00c9d900(((undefined1 *)(gen_frame + 0x0)),1);
  for (piVar1 = *(int * PTR32 *)((int)this + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,uVar4);
  }
  iVar3 = *(int *)((int)this + 8);
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    *(undefined4 *)(iVar3 + 4) = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
    iVar3 = iVar2;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x11290bc));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  return 0;
}

/* ref: FUN_00c9f380 */
byte F_00c9f380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc9f380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  bVar1 = F_00c9f100(this,&(*(undefined4 *)(gen_frame + 0x0)));
  if (bVar1 != 0) {
    *param_1 = (*(undefined4 *)(gen_frame + 0x0));
    *param_2 = (*(undefined4 *)(gen_frame + 0x4));
    *param_3 = (*(undefined4 *)(gen_frame + 0x8));
    return 1;
  }
  return 0;
}

/* ref: FUN_00c9f3e0 */
uint F_00c9f3e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc9f3e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x11290c8));
  return (uint)in_ecx;
}

/* ref: FUN_00c9f400 */
unsigned int F_00c9f400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc9f400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  for (piVar1 = *(int * PTR32 *)((int)this + 0x60); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1);
  }
  return 0;
}

/* ref: FUN_00c9f450 */
unsigned int F_00c9f450(void)
{
  GEN_ENTER(0xc9f450u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c9f460 */
unsigned int F_00c9f460(void)
{
  GEN_ENTER(0xc9f460u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c9f4a0 */
uint F_00c9f4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc9f4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x11290bc));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c9f4f0 */
uint F_00c9f4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc9f4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x11290bc));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c9f540 */
unsigned int F_00c9f540(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xc9f540u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  *param_2 = *in_ecx + param_3;
  param_2[1] = in_ecx[1] + param_3;
  param_2[2] = in_ecx[2] + param_3;
  return 0;
}

/* ref: FUN_00c9f5a0 */
unsigned int F_00c9f5a0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xc9f5a0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  *param_2 = *in_ecx - param_3;
  param_2[1] = in_ecx[1] - param_3;
  param_2[2] = in_ecx[2] - param_3;
  return 0;
}

/* ref: FUN_00c9f600 */
unsigned int F_00c9f600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc9f600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = *param_2;
  in_ecx[4] = param_2[1];
  in_ecx[5] = param_2[2];
  return 0;
}

/* ref: FUN_00c9f630 */
unsigned int F_00c9f630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc9f630u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  if (*param_2 < *in_ecx) {
    *in_ecx = *param_2;
  }
  if (param_2[1] < in_ecx[1]) {
    in_ecx[1] = param_2[1];
  }
  if (param_2[2] < in_ecx[2]) {
    in_ecx[2] = param_2[2];
  }
  if (in_ecx[3] < *param_2) {
    in_ecx[3] = *param_2;
  }
  if (in_ecx[4] < param_2[1]) {
    in_ecx[4] = param_2[1];
  }
  if (in_ecx[5] < param_2[2]) {
    in_ecx[5] = param_2[2];
  }
  return 0;
}

/* ref: FUN_00c9f6f0 */
unsigned int F_00c9f6f0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xc9f6f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x50) = param_2;
  return 0;
}

/* ref: FUN_00c9f710 */
uint F_00c9f710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc9f710u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xc))))
                    (*(int * PTR32 *)((int)this + 4),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c9f720 */
uint F_00c9f720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc9f720u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x10))))
                    (*(int * PTR32 *)((int)this + 4),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c9f730 */
uint F_00c9f730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc9f730u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))
                    (*(int * PTR32 *)((int)this + 4),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c9f740 */
uint F_00c9f740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc9f740u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x14))))
                    (*(int * PTR32 *)((int)this + 4),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c9f750 */
uint F_00c9f750(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xc9f750u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  return (int)(((double)param_2 - (double)*(float *)(in_ecx + 4)) / (double)*(float *)(in_ecx + 0xc)
              );
}

/* ref: FUN_00c9f780 */
uint F_00c9f780(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xc9f780u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  return (int)(((double)param_2 - (double)*(float *)(in_ecx + 0x10)) /
              (double)*(float *)(in_ecx + 0x18));
}

/* ref: FUN_00c9f7d0 */
byte F_00c9f7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc9f7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c9f800 */
uint F_00c9f800(unsigned int gen_a0)
{
  GEN_ENTER(0xc9f800u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00c9f810 */
unsigned int F_00c9f810(unsigned int gen_a0)
{
  GEN_ENTER(0xc9f810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11290e8));
  if (*(int *)((int)this + 0x20) != 0) {
    uVar2 = 0;
    if (*(int *)((int)this + 0x24) != 0) {
      iVar1 = 0;
      do {
        (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x20) + iVar1))))))
                  (*(int *)((int)this + 0x20) + iVar1,0);
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 0x10;
      } while (uVar2 < *(uint *)((int)this + 0x24));
    }
    F_00c96f60(*(undefined * PTR32 *)((int)this + 0x28));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  return 0;
}

/* ref: FUN_00c9f860 */
uint F_00c9f860(unsigned int gen_a0)
{
  GEN_ENTER(0xc9f860u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = (param_1 << 8 | param_1) & 0xff00ff;
  uVar1 = (uVar1 << 4 | uVar1) & 0xf0f0f0f;
  uVar1 = (uVar1 * 4 | uVar1) & 0x33333333;
  return (uVar1 * 2 | uVar1) & 0x55555555;
}

/* ref: FUN_00c9f8a0 */
uint F_00c9f8a0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xc9f8a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  uint uVar2;
  uint local_c;
  
  local_c = (uint)(longlong)
                  TRUNC(((float10)param_2 - (float10)*(float *)(param_1 + 4)) /
                        (float10)*(float *)(param_1 + 0xc));
  uVar1 = (local_c << 8 | local_c) & 0xff00ff;
  uVar2 = (uVar1 << 4 | uVar1) & 0xf0f0f0f;
  uVar2 = uVar2 * 4 | uVar2;
  local_c = (uint)(longlong)
                  TRUNC(((float10)param_3 - (float10)*(float *)(param_1 + 0x10)) /
                        (float10)*(float *)(param_1 + 0x18));
  uVar1 = (local_c << 8 | local_c) & 0xff00ff;
  uVar1 = (uVar1 << 4 | uVar1) & 0xf0f0f0f;
  uVar1 = (uVar1 * 4 | uVar1) & 0x33333333;
  return (((uVar1 * 2 | uVar1) ^ uVar2 & 0x33333333) & 0x2aaaaaaa ^ (uVar1 * 2 | uVar1)) * 2 |
         uVar2 & 0x11111111;
}

/* ref: FUN_00c9f970 */
unsigned int F_00c9f970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0xc9f970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  *in_ecx = param_2;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[8] = 0;
  *(undefined1 *)((int)in_ecx + 0x3d) = 0;
  in_ecx[1] = *param_3;
  in_ecx[2] = param_3[1];
  in_ecx[3] = param_3[2];
  in_ecx[4] = *param_4;
  in_ecx[5] = param_4[1];
  in_ecx[6] = param_4[2];
  in_ecx[7] = (undefined4)gen_fl2bits(param_5);
  return 0;
}

/* ref: FUN_00c9f9f0 */
unsigned int F_00c9f9f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc9f9f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return 0;
}

/* ref: FUN_00c9fa30 */
unsigned int F_00c9fa30(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xc9fa30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *(float *)(in_ecx + 0x10) = param_2;
  *(float *)(in_ecx + 0x14) = param_3;
  *(float *)(in_ecx + 0x18) = param_4;
  *(float *)(in_ecx + 0x1c) = param_5;
  return 0;
}

/* ref: FUN_00c9fa60 */
uint F_00c9fa60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc9fa60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  *param_1 = *(undefined4 *)((int)this + 0x10);
  *param_2 = *(undefined4 *)((int)this + 0x14);
  *param_3 = *(undefined4 *)((int)this + 0x18);
  *param_4 = *(undefined4 *)((int)this + 0x1c);
  return (uint)param_3;
}

/* ref: FUN_00c9fa90 */
uint F_00c9fa90(unsigned int gen_a0)
{
  GEN_ENTER(0xc9fa90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  return param_1;
}

/* ref: FUN_00c9faa0 */
byte F_00c9faa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc9faa0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  (*(float *)(gen_frame + 0x4)) = 0.0;
  (*(float *)(gen_frame + 0x8)) = 0.0;
  (*(float *)(gen_frame + 0xc)) = 0.0;
  (*(float *)(gen_frame + 0x10)) = 0.0;
  (*(float *)(gen_frame + 0x14)) = 0.0;
  (*(float *)(gen_frame + 0x18)) = 0.0;
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1,&(*(float *)(gen_frame + 0x4)));
  }
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 0x24))(param_2,&(*(float *)(gen_frame + 0x10)));
  }
  if ((!((double)(*(float *)(gen_frame + 0x4)) + REFG(double, 0x1094438) < (double)(*(float *)(gen_frame + 0x10)))) &&
     ((!(((float)GEN_TOF(gen_bits2d((ulonglong)gen_d2bits((double)((*(float *)(gen_frame + 0x10)) - (*(float *)(gen_frame + 0x4)))) & REFG(ulonglong, 0x11290a0)))) <=
        REFG(float, 0x1094778)) ||
      ((!((double)(*(float *)(gen_frame + 0xc)) + REFG(double, 0x1094438) < (double)(*(float *)(gen_frame + 0x18))) &&
       ((!(((float)GEN_TOF(gen_bits2d((ulonglong)gen_d2bits((double)((*(float *)(gen_frame + 0x18)) - (*(float *)(gen_frame + 0xc)))) & REFG(ulonglong, 0x11290a0)))) <=
          REFG(float, 0x1094778)) || (!((double)(*(float *)(gen_frame + 0x8)) + REFG(double, 0x1094438) < (double)(*(float *)(gen_frame + 0x14))))))))))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00c9fbe0 */
uint F_00c9fbe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc9fbe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined8 * puVar2;
  int iVar3;
  byte bVar4;
  
  uVar1 = REFG(float, 0x1090708);
  *(int *)this = param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  *(undefined4 *)((int)this + 0xc) = param_2[2];
  *(undefined4 *)((int)this + 0x10) = param_2[3];
  *(undefined4 *)((int)this + 0x14) = param_2[4];
  *(undefined4 *)((int)this + 0x18) = param_2[5];
  *(undefined4 *)((int)this + 0x1c) = uVar1;
  *(undefined4 *)((int)this + 0x20) = 0;
  bVar4 = *(char *)(param_1 + 0x1c) - 1;
  *(byte *)((int)this + 0x3c) = bVar4;
  *(undefined1 *)((int)this + 0x3d) = 0;
  puVar2 = (undefined8 *)F_00ca1d00(param_1,((undefined1 *)(gen_frame + 0x4)),(uint)param_2,(uint)bVar4);
  *(undefined8 *)((int)this + 0x20) = *puVar2;
  *(undefined8 *)((int)this + 0x28) = puVar2[1];
  *(undefined8 *)((int)this + 0x30) = puVar2[2];
  iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x24) + 0xc)));
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 + 0x10;
  }
  *(int *)((int)this + 0x38) = iVar3;
  if (iVar3 == 0) {
    F_00ca1f00(this);
  }
  return (uint)this;
}

/* ref: FUN_00c9fc90 */
uint F_00c9fc90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc9fc90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined8 * puVar2;
  int iVar3;
  
  uVar1 = REFG(float, 0x1090708);
  *(int *)this = param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  *(undefined4 *)((int)this + 0xc) = param_2[2];
  *(undefined4 *)((int)this + 0x10) = param_2[3];
  *(undefined4 *)((int)this + 0x14) = param_2[4];
  *(undefined4 *)((int)this + 0x18) = param_2[5];
  *(undefined4 *)((int)this + 0x1c) = uVar1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(char *)((int)this + 0x3c) = *(char *)(param_1 + 0x1c) + -1;
  *(undefined1 *)((int)this + 0x3d) = 1;
  puVar2 = (undefined8 *)F_00ca1d00(param_1,((undefined1 *)(gen_frame + 0x4)),(uint)param_2,param_3);
  *(undefined8 *)((int)this + 0x20) = *puVar2;
  *(undefined8 *)((int)this + 0x28) = puVar2[1];
  *(undefined8 *)((int)this + 0x30) = puVar2[2];
  iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x24) + 0xc)));
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 + 0x10;
  }
  *(int *)((int)this + 0x38) = iVar3;
  if (iVar3 == 0) {
    F_00ca1f00(this);
  }
  return (uint)this;
}

/* ref: FUN_00c9fd60 */
uint F_00c9fd60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc9fd60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(float *)(gen_frame + 0x4)) = (float)((double)*param_2 - REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0x8)) = param_2[1];
  (*(float *)(gen_frame + 0xc)) = (float)((double)param_2[2] - REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0x10)) = (float)((double)param_2[3] + REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0x14)) = param_2[4];
  (*(float *)(gen_frame + 0x18)) = (float)((double)param_2[5] + REFG(double, 0x10ac068));
  uVar1 = 0;
  if (param_1 != (undefined *)0x0) {
    uVar1 = F_00c9fbe0(param_1,this,&(*(float *)(gen_frame + 0x4)));
  }
  return uVar1;
}

/* ref: FUN_00c9fe00 */
uint F_00c9fe00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc9fe00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(float *)(gen_frame + 0x4)) = (float)((double)*param_2 - REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0x8)) = param_2[1];
  (*(float *)(gen_frame + 0xc)) = (float)((double)param_2[2] - REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0x10)) = (float)((double)param_2[3] + REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0x14)) = param_2[4];
  (*(float *)(gen_frame + 0x18)) = (float)((double)param_2[5] + REFG(double, 0x10ac068));
  uVar1 = 0;
  if (param_1 != (undefined *)0x0) {
    uVar1 = F_00c9fc90(param_1,this,&(*(float *)(gen_frame + 0x4)),param_3);
  }
  return uVar1;
}

/* ref: FUN_00c9fea0 */
uint F_00c9fea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xc9fea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  memcpy(&gen_args[6], &gen_a6, sizeof gen_a6);
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int * piVar11;
  float fVar12;
  
  uVar10 = (*(uint *)&gen_args[4]);
  piVar11 = *((int * PTR32 *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 4) + 4)));
  (*(int *)(gen_frame + 0xd0)) = (*(int *)&gen_args[0]);
  ((code *)*(gen_code32 *)(*piVar11 + 0x10))(piVar11,(*(uint *)&gen_args[4]));
  fVar12 = *(float *)(uVar10 + 4);
  fVar1 = *(float *)(uVar10 + 8);
  fVar2 = *(float *)uVar10;
  (*(float * PTR32 *)(gen_frame + 0x5c)) = &(*(float *)(gen_frame + 0xc0));
  (*(float *)(gen_frame + 0xc4)) = *(*(float * PTR32 *)&gen_args[5]) * (*(float *)&gen_args[6]);
  (*(uint *)&gen_args[4]) = (uint)gen_fl2bits((*(float *)&gen_args[6]));
  (*(float *)(gen_frame + 0xd8)) = fVar12;
  (*(float *)(gen_frame + 0xe4)) = fVar12;
  fVar3 = fVar12 + (*(float * PTR32 *)&gen_args[5])[1] * (*(float *)&gen_args[6]);
  (*(float *)(gen_frame + 0xdc)) = fVar1;
  (*(float *)(gen_frame + 0xe8)) = fVar1;
  fVar4 = fVar1 + (*(float * PTR32 *)&gen_args[5])[2] * (*(float *)&gen_args[6]);
  fVar5 = fVar2 + *(*(float * PTR32 *)&gen_args[5]) * (*(float *)&gen_args[6]);
  ((byte *)(gen_frame + 0xc))[0] = 0;
  ((byte *)(gen_frame + 0xc))[1] = 0;
  ((byte *)(gen_frame + 0xc))[2] = 0;
  ((byte *)(gen_frame + 0xc))[3] = 0;
  ((byte *)(gen_frame + 0xc))[4] = 0;
  ((byte *)(gen_frame + 0xc))[5] = 0;
  ((byte *)(gen_frame + 0xc))[6] = 0;
  ((byte *)(gen_frame + 0xc))[7] = 0;
  ((byte *)(gen_frame + 0xc))[8] = 0;
  ((byte *)(gen_frame + 0xc))[9] = 0;
  ((byte *)(gen_frame + 0xc))[10] = 0;
  ((byte *)(gen_frame + 0xc))[0xb] = 0;
  ((byte *)(gen_frame + 0xc))[0xc] = 0;
  ((byte *)(gen_frame + 0xc))[0xd] = 0;
  ((byte *)(gen_frame + 0xc))[0xe] = 0;
  ((byte *)(gen_frame + 0xc))[0xf] = 0;
  ((byte *)(gen_frame + 0xc))[0x10] = 0;
  ((byte *)(gen_frame + 0xc))[0x11] = 0;
  ((byte *)(gen_frame + 0xc))[0x12] = 0;
  ((byte *)(gen_frame + 0xc))[0x13] = 0;
  ((byte *)(gen_frame + 0xc))[0x14] = 0;
  ((byte *)(gen_frame + 0xc))[0x15] = 0;
  ((byte *)(gen_frame + 0xc))[0x16] = 0;
  ((byte *)(gen_frame + 0xc))[0x17] = 0;
  ((byte *)(gen_frame + 0xc))[0x18] = 0;
  ((byte *)(gen_frame + 0xc))[0x19] = 0;
  ((byte *)(gen_frame + 0xc))[0x1a] = 0;
  ((byte *)(gen_frame + 0xc))[0x1b] = 0;
  ((byte *)(gen_frame + 0xc))[0x1c] = 0;
  ((byte *)(gen_frame + 0xc))[0x1d] = 0;
  ((byte *)(gen_frame + 0xc))[0x1e] = 0;
  ((byte *)(gen_frame + 0xc))[0x1f] = 0;
  ((byte *)(gen_frame + 0xc))[0x20] = 0;
  ((byte *)(gen_frame + 0xc))[0x21] = 0;
  ((byte *)(gen_frame + 0xc))[0x22] = 0;
  ((byte *)(gen_frame + 0xc))[0x23] = 0;
  ((byte *)(gen_frame + 0xc))[0x24] = 0;
  ((byte *)(gen_frame + 0xc))[0x25] = 0;
  ((byte *)(gen_frame + 0xc))[0x26] = 0;
  ((byte *)(gen_frame + 0xc))[0x27] = 0;
  ((byte *)(gen_frame + 0xc))[0x28] = 0;
  ((byte *)(gen_frame + 0xc))[0x29] = 0;
  ((byte *)(gen_frame + 0xc))[0x2a] = 0;
  ((byte *)(gen_frame + 0xc))[0x2b] = 0;
  ((byte *)(gen_frame + 0xc))[0x2c] = 0;
  ((byte *)(gen_frame + 0xc))[0x2d] = 0;
  ((byte *)(gen_frame + 0xc))[0x2e] = 0;
  ((byte *)(gen_frame + 0xc))[0x2f] = 0;
  ((byte *)(gen_frame + 0xc))[0x30] = 0;
  ((byte *)(gen_frame + 0xc))[0x31] = 0;
  ((byte *)(gen_frame + 0xc))[0x32] = 0;
  ((byte *)(gen_frame + 0xc))[0x33] = 0;
  ((byte *)(gen_frame + 0xc))[0x34] = 0;
  ((byte *)(gen_frame + 0xc))[0x35] = 0;
  ((byte *)(gen_frame + 0xc))[0x36] = 0;
  ((byte *)(gen_frame + 0xc))[0x37] = 0;
  ((byte *)(gen_frame + 0xc))[0x38] = 0;
  ((byte *)(gen_frame + 0xc))[0x39] = 0;
  ((byte *)(gen_frame + 0xc))[0x3a] = 0;
  ((byte *)(gen_frame + 0xc))[0x3b] = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 4;
  (*(float * PTR32 *)(gen_frame + 0x60)) = (*(float * PTR32 *)&gen_args[5]);
  (*(uint * PTR32 *)(gen_frame + 0x64)) = &(*(uint *)&gen_args[4]);
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x6c)) = (*(undefined4 *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(float *)(gen_frame + 0xe0)) = fVar2;
  fVar6 = fVar2;
  if (fVar5 < fVar2) {
    fVar6 = fVar5;
  }
  if (fVar3 < fVar12) {
    (*(float *)(gen_frame + 0xd8)) = fVar3;
  }
  if (fVar4 < fVar1) {
    (*(float *)(gen_frame + 0xdc)) = fVar4;
  }
  if (fVar2 < fVar5) {
    fVar2 = fVar5;
  }
  if (fVar12 < fVar3) {
    fVar12 = fVar3;
  }
  if (fVar1 < fVar4) {
    fVar1 = fVar4;
  }
  (*(undefined4 *)(gen_frame + 0x7c)) = 0;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  (*(undefined4 *)(gen_frame + 0x8c)) = 0;
  (*(undefined4 *)(gen_frame + 0x90)) = 0;
  (*(undefined4 *)(gen_frame + 0x94)) = 0;
  (*(float *)(gen_frame + 0xb8)) = (float)((double)fVar6 - REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0xbc)) = (*(float *)(gen_frame + 0xd8));
  (*(float *)(gen_frame + 0xc0)) = (float)((double)(*(float *)(gen_frame + 0xdc)) - REFG(double, 0x10ac068));
  (*(undefined4 *)(gen_frame + 0x98)) = 0;
  (*(int *)(gen_frame + 0xb0)) = 0;
  (*(float *)(gen_frame + 0xc4)) = (float)((double)fVar2 + REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0xc8)) = fVar12;
  (*(float *)(gen_frame + 0xcc)) = (float)((double)fVar1 + REFG(double, 0x10ac068));
  F_00c9fbe0(((undefined1 *)(gen_frame + 0x78)),*(undefined4 *)((*(int *)&gen_args[0]) + 0x24),&(*(float *)(gen_frame + 0xb8)));
  do {
    if ((*(int *)(gen_frame + 0xb0)) == 0) {
      piVar11 = *((int * PTR32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0xd0)) + 4) + 4)));
      ((code *)*(gen_code32 *)(*piVar11 + 0x14))(piVar11,uVar10,(*(int * PTR32 *)&gen_args[1]));
      uVar10 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
      return (uint)(uVar10 != 0);
    }
    do {
      (*(uint *)&gen_args[4]) = (uint)gen_fl2bits((*(float *)&gen_args[6]));
      if ((*(int *)(gen_frame + 0xb0)) == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = (*(int *)(gen_frame + 0xb0)) + -0x10;
      }
      iVar8 = (*(int *)(gen_frame + 0xb0));
      if (*(char *)(iVar9 + 0x54) != '\0') {
        if ((*(int *)(gen_frame + 0xb0)) == 0) {
          piVar11 = (int *)0x0;
        }
        else {
          piVar11 = (int *)((*(int *)(gen_frame + 0xb0)) + -0x10);
        }
        uVar7 = ((code *)*(gen_code32 *)(*piVar11 + 0x4c))(piVar11,((byte *)(gen_frame + 0xc)),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0x58)));
        iVar8 = (*(int *)(gen_frame + 0xb0));
        if (((char)uVar7 != '\0') && (gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 64))) < (*(float *)&gen_args[6]))) {
          ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]),((byte *)(gen_frame + 0xc)));
          iVar8 = (*(int *)(gen_frame + 0xb0));
        }
      }
      if (*(int *)(iVar8 + 0xc) == 0) {
        (*(int *)(gen_frame + 0xb0)) = 0;
        break;
      }
      iVar9 = *(int *)(iVar8 + 0xc) + 0x10;
      (*(int *)(gen_frame + 0xb0)) = iVar9;
    } while (iVar9 != 0);
    F_00ca1f00(((undefined1 *)(gen_frame + 0x78)));
  } while( true );
}

/* ref: FUN_00ca0220 */
byte F_00ca0220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xca0220u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  float fVar1;
  float fVar2;
  float * pfVar3;
  float * pfVar4;
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
  byte * pbVar15;
  uint uVar16;
  int iVar17;
  int * piVar18;
  undefined * pvVar19;
  float fVar20;
  
  pbVar15 = (*(byte * PTR32 *)&gen_args[3]);
  piVar18 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)));
  (*(undefined * PTR32 *)(gen_frame + 0xc0)) = (*(undefined * PTR32 *)&gen_args[0]);
  ((code *)*(gen_code32 *)(*piVar18 + 0x10))(piVar18,*((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[3]) + 4))));
  pfVar3 = *(float * PTR32 *)(pbVar15 + 0xc);
  (*(byte * PTR32 *)&gen_args[3]) = ((byte *)GEN_TOP(((uint)(*(byte * PTR32 *)&gen_args[3]) & 0xffffff)));
  (*(float *)(gen_frame + 0xe8)) = *pfVar3;
  ((byte *)(gen_frame + 0x0))[0] = 0;
  ((byte *)(gen_frame + 0x0))[1] = 0;
  ((byte *)(gen_frame + 0x0))[2] = 0;
  ((byte *)(gen_frame + 0x0))[3] = 0;
  ((byte *)(gen_frame + 0x0))[4] = 0;
  ((byte *)(gen_frame + 0x0))[5] = 0;
  ((byte *)(gen_frame + 0x0))[6] = 0;
  ((byte *)(gen_frame + 0x0))[7] = 0;
  ((byte *)(gen_frame + 0x0))[8] = 0;
  ((byte *)(gen_frame + 0x0))[9] = 0;
  ((byte *)(gen_frame + 0x0))[10] = 0;
  ((byte *)(gen_frame + 0x0))[0xb] = 0;
  ((byte *)(gen_frame + 0x0))[0xc] = 0;
  ((byte *)(gen_frame + 0x0))[0xd] = 0;
  ((byte *)(gen_frame + 0x0))[0xe] = 0;
  ((byte *)(gen_frame + 0x0))[0xf] = 0;
  ((byte *)(gen_frame + 0x0))[0x10] = 0;
  ((byte *)(gen_frame + 0x0))[0x11] = 0;
  ((byte *)(gen_frame + 0x0))[0x12] = 0;
  ((byte *)(gen_frame + 0x0))[0x13] = 0;
  ((byte *)(gen_frame + 0x0))[0x14] = 0;
  ((byte *)(gen_frame + 0x0))[0x15] = 0;
  ((byte *)(gen_frame + 0x0))[0x16] = 0;
  ((byte *)(gen_frame + 0x0))[0x17] = 0;
  ((byte *)(gen_frame + 0x0))[0x18] = 0;
  ((byte *)(gen_frame + 0x0))[0x19] = 0;
  ((byte *)(gen_frame + 0x0))[0x1a] = 0;
  ((byte *)(gen_frame + 0x0))[0x1b] = 0;
  ((byte *)(gen_frame + 0x0))[0x1c] = 0;
  ((byte *)(gen_frame + 0x0))[0x1d] = 0;
  ((byte *)(gen_frame + 0x0))[0x1e] = 0;
  ((byte *)(gen_frame + 0x0))[0x1f] = 0;
  ((byte *)(gen_frame + 0x0))[0x20] = 0;
  ((byte *)(gen_frame + 0x0))[0x21] = 0;
  ((byte *)(gen_frame + 0x0))[0x22] = 0;
  ((byte *)(gen_frame + 0x0))[0x23] = 0;
  ((byte *)(gen_frame + 0x0))[0x24] = 0;
  ((byte *)(gen_frame + 0x0))[0x25] = 0;
  ((byte *)(gen_frame + 0x0))[0x26] = 0;
  ((byte *)(gen_frame + 0x0))[0x27] = 0;
  ((byte *)(gen_frame + 0x0))[0x28] = 0;
  ((byte *)(gen_frame + 0x0))[0x29] = 0;
  ((byte *)(gen_frame + 0x0))[0x2a] = 0;
  ((byte *)(gen_frame + 0x0))[0x2b] = 0;
  ((byte *)(gen_frame + 0x0))[0x2c] = 0;
  ((byte *)(gen_frame + 0x0))[0x2d] = 0;
  ((byte *)(gen_frame + 0x0))[0x2e] = 0;
  ((byte *)(gen_frame + 0x0))[0x2f] = 0;
  ((byte *)(gen_frame + 0x0))[0x30] = 0;
  ((byte *)(gen_frame + 0x0))[0x31] = 0;
  ((byte *)(gen_frame + 0x0))[0x32] = 0;
  ((byte *)(gen_frame + 0x0))[0x33] = 0;
  ((byte *)(gen_frame + 0x0))[0x34] = 0;
  ((byte *)(gen_frame + 0x0))[0x35] = 0;
  ((byte *)(gen_frame + 0x0))[0x36] = 0;
  ((byte *)(gen_frame + 0x0))[0x37] = 0;
  ((byte *)(gen_frame + 0x0))[0x38] = 0;
  ((byte *)(gen_frame + 0x0))[0x39] = 0;
  ((byte *)(gen_frame + 0x0))[0x3a] = 0;
  ((byte *)(gen_frame + 0x0))[0x3b] = 0;
  fVar20 = REFG(float, 0x10abe98);
  if ((*pbVar15 & 1) != 0) {
    fVar20 = *((float *)GEN_TOP((*(int *)(pbVar15 + 4) + 0xc)));
  }
  pfVar4 = *(float * PTR32 *)(pbVar15 + 4);
  fVar5 = *pfVar4 + fVar20;
  fVar6 = pfVar4[1] + fVar20;
  fVar7 = pfVar4[2] + fVar20;
  (*(float *)(gen_frame + 0xe4)) = fVar7;
  fVar8 = *pfVar4 - fVar20;
  fVar1 = pfVar4[1];
  (*(float *)(gen_frame + 0xdc)) = fVar5;
  (*(float *)(gen_frame + 0xd0)) = fVar5;
  (*(float *)(gen_frame + 0xd8)) = fVar7;
  fVar9 = pfVar4[2] - fVar20;
  (*(float *)(gen_frame + 0xe0)) = fVar6;
  (*(float *)(gen_frame + 0xb8)) = fVar9;
  (*(float *)(gen_frame + 0xc4)) = fVar8;
  (*(float *)(gen_frame + 0xc8)) = fVar1 - fVar20;
  (*(float *)(gen_frame + 0xcc)) = fVar9;
  (*(float *)(gen_frame + 0xd4)) = fVar6;
  if ((!GEN_ISNAN((double)*pfVar3) && !GEN_ISNAN(*(double *)&REFG(double, 0x10a1b50))) &&
      !((double)*pfVar3 <= *(double *)&REFG(double, 0x10a1b50))) {
    *pfVar3 = GEN_FLT_TO(*pfVar3, REFG(float, 0x11290ec));
  }
  fVar2 = **(float * PTR32 *)(pbVar15 + 0xc);
  pfVar3 = *(float * PTR32 *)(pbVar15 + 8);
  pfVar4 = *(float * PTR32 *)(pbVar15 + 4);
  fVar10 = *pfVar3 * fVar2 + *pfVar4;
  fVar11 = pfVar4[1] + pfVar3[1] * fVar2;
  fVar2 = pfVar4[2] + pfVar3[2] * fVar2;
  (*(float *)(gen_frame + 0x5c)) = fVar11;
  (*(float *)(gen_frame + 0x60)) = fVar2;
  fVar13 = fVar10 - fVar20;
  fVar12 = fVar11 - fVar20;
  (*(float *)(gen_frame + 0x50)) = fVar12;
  fVar14 = fVar2 - fVar20;
  if (fVar13 < fVar8) {
    fVar8 = fVar13;
  }
  if (fVar12 < fVar1 - fVar20) {
    (*(float *)(gen_frame + 0xc8)) = fVar12;
  }
  if (fVar14 < fVar9) {
    (*(float *)(gen_frame + 0xcc)) = fVar14;
  }
  if (fVar5 < fVar13) {
    (*(float *)(gen_frame + 0xd0)) = fVar13;
  }
  if (fVar6 < fVar12) {
    (*(float *)(gen_frame + 0xd4)) = fVar12;
  }
  if (!(fVar7 < fVar14)) {
    fVar14 = fVar7;
  }
  fVar10 = fVar10 + fVar20;
  fVar11 = fVar11 + fVar20;
  fVar2 = fVar2 + fVar20;
  if (fVar10 < fVar8) {
    fVar8 = fVar10;
  }
  if (fVar11 < (*(float *)(gen_frame + 0xc8))) {
    (*(float *)(gen_frame + 0xc8)) = fVar11;
  }
  if (fVar2 < (*(float *)(gen_frame + 0xcc))) {
    (*(float *)(gen_frame + 0xcc)) = fVar2;
  }
  if ((*(float *)(gen_frame + 0xd0)) < fVar10) {
    (*(float *)(gen_frame + 0xd0)) = fVar10;
  }
  fVar20 = (*(float *)(gen_frame + 0xd4));
  if ((*(float *)(gen_frame + 0xd4)) < fVar11) {
    fVar20 = fVar11;
  }
  if (fVar14 < fVar2) {
    fVar14 = fVar2;
  }
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x6c)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x7c)) = 0;
  (*(undefined4 *)(gen_frame + 0x80)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(int *)(gen_frame + 0x9c)) = 0;
  (*(float *)(gen_frame + 0xb4)) = fVar20;
  if ((*pbVar15 & 1) == 0) {
    (*(float *)(gen_frame + 0xa4)) = (float)((double)fVar8 - REFG(double, 0x10ac068));
    (*(float *)(gen_frame + 0xa8)) = (*(float *)(gen_frame + 0xc8));
    (*(float *)(gen_frame + 0xac)) = (float)((double)(*(float *)(gen_frame + 0xcc)) - REFG(double, 0x10ac068));
    (*(float *)(gen_frame + 0xb0)) = (float)((double)(*(float *)(gen_frame + 0xd0)) + REFG(double, 0x10ac068));
    (*(float *)(gen_frame + 0xb8)) = (float)((double)fVar14 + REFG(double, 0x10ac068));
    F_00c9fbe0(((undefined1 *)(gen_frame + 0x64)),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))),&(*(float *)(gen_frame + 0xa4)));
    while ((*(int *)(gen_frame + 0x9c)) != 0) {
      do {
        iVar17 = (*(int *)(gen_frame + 0x9c));
        if (*(char *)((*(int *)(gen_frame + 0x9c)) + 0x44) != '\0') {
          **(float * PTR32 *)(pbVar15 + 0xc) = (*(float *)(gen_frame + 0xe8));
          if ((*(int *)(gen_frame + 0x9c)) == 0) {
            piVar18 = (int *)0x0;
          }
          else {
            piVar18 = (int *)((*(int *)(gen_frame + 0x9c)) + -0x10);
          }
          uVar16 = ((code *)*(gen_code32 *)(*piVar18 + 0x4c))(piVar18,((byte *)(gen_frame + 0x0)),(*(undefined4 *)&gen_args[2]),pbVar15);
          iVar17 = (*(int *)(gen_frame + 0x9c));
          if (((char)uVar16 != '\0') && (gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 64))) < (*(float *)(gen_frame + 0xe8)))) {
            (*(float *)(gen_frame + 0xe8)) = gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 64)));
            F_00550bc0((*(undefined * PTR32 *)&gen_args[1]),((byte *)(gen_frame + 0x0)));
            (*(byte * PTR32 *)&gen_args[3]) = ((byte *)GEN_TOP(CONCAT13(1,GEN_PIECE(&(*(byte * PTR32 *)&gen_args[3]), 0, 3))));
            iVar17 = (*(int *)(gen_frame + 0x9c));
          }
        }
        if (*(int *)(iVar17 + 0xc) == 0) {
          (*(int *)(gen_frame + 0x9c)) = 0;
          break;
        }
        iVar17 = *(int *)(iVar17 + 0xc) + 0x10;
        (*(int *)(gen_frame + 0x9c)) = iVar17;
      } while (iVar17 != 0);
      F_00ca1f00(((undefined1 *)(gen_frame + 0x64)));
      (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0xc0));
    }
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0xbc)) = (undefined *)0x0;
    (*(float *)(gen_frame + 0xa4)) = (float)((double)fVar8 - REFG(double, 0x10ac068));
    (*(float *)(gen_frame + 0xa8)) = (*(float *)(gen_frame + 0xc8));
    (*(float *)(gen_frame + 0xac)) = (float)((double)(*(float *)(gen_frame + 0xcc)) - REFG(double, 0x10ac068));
    (*(float *)(gen_frame + 0xb0)) = (float)((double)(*(float *)(gen_frame + 0xd0)) + REFG(double, 0x10ac068));
    (*(float *)(gen_frame + 0xb8)) = (float)((double)fVar14 + REFG(double, 0x10ac068));
    F_00c9fbe0(((undefined1 *)(gen_frame + 0x64)),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))),&(*(float *)(gen_frame + 0xa4)));
    while ((*(int *)(gen_frame + 0x9c)) != 0) {
      do {
        iVar17 = (*(int *)(gen_frame + 0x9c));
        if (*(char *)((*(int *)(gen_frame + 0x9c)) + 0x44) != '\0') {
          **(float * PTR32 *)(pbVar15 + 0xc) = (*(float *)(gen_frame + 0xe8));
          if ((*(int *)(gen_frame + 0x9c)) == 0) {
            piVar18 = (int *)0x0;
          }
          else {
            piVar18 = (int *)((*(int *)(gen_frame + 0x9c)) + -0x10);
          }
          uVar16 = ((code *)*(gen_code32 *)(*piVar18 + 0x4c))(piVar18,((byte *)(gen_frame + 0x0)),(*(undefined4 *)&gen_args[2]),pbVar15);
          iVar17 = (*(int *)(gen_frame + 0x9c));
          if ((((char)uVar16 != '\0') &&
              (((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 64))))) <= (double)(*(float *)(gen_frame + 0xe8)) + *(double *)&REFG(undefined, 0x109ce00))) &&
             (0.0 <= gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 64))))) {
            (*(float *)(gen_frame + 0xdc)) = 0.0;
            (*(float *)(gen_frame + 0xe0)) = 0.0;
            (*(float *)(gen_frame + 0xe4)) = 0.0;
            F_00c9f100(((byte *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0xdc)));
            pfVar3 = *(float * PTR32 *)(pbVar15 + 8);
            pvVar19 = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((double)pfVar3[1] * (double)(*(float *)(gen_frame + 0xe0)) +
                                      (double)*pfVar3 * (double)(*(float *)(gen_frame + 0xdc))) +
                                     (double)pfVar3[2] * (double)(*(float *)(gen_frame + 0xe4))))))));
            (*(undefined * PTR32 *)(gen_frame + 0xc0)) = pvVar19;
            if ((!((double)(*(float *)(gen_frame + 0xe8)) - ((double)GEN_TOD(gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 64))))) < REFG(double, 0x109cdf8))) ||
               (iVar17 = (*(int *)(gen_frame + 0x9c)), !(((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0xbc))))) <= ((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar19)))))) {
              (*(float *)(gen_frame + 0xe8)) = gen_bits2f((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 64)));
              F_00550bc0((*(undefined * PTR32 *)&gen_args[1]),((byte *)(gen_frame + 0x0)));
              (*(undefined * PTR32 *)(gen_frame + 0xbc)) = (*(undefined * PTR32 *)(gen_frame + 0xc0));
              (*(byte * PTR32 *)&gen_args[3]) = ((byte *)GEN_TOP(CONCAT13(1,GEN_PIECE(&(*(byte * PTR32 *)&gen_args[3]), 0, 3))));
              iVar17 = (*(int *)(gen_frame + 0x9c));
            }
          }
        }
        if (*(int *)(iVar17 + 0xc) == 0) {
          (*(int *)(gen_frame + 0x9c)) = 0;
          break;
        }
        iVar17 = *(int *)(iVar17 + 0xc) + 0x10;
        (*(int *)(gen_frame + 0x9c)) = iVar17;
      } while (iVar17 != 0);
      F_00ca1f00(((undefined1 *)(gen_frame + 0x64)));
    }
  }
  if ((*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[3]) + 3)))) == '\0') {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x40))) = **(undefined4 * PTR32 *)(pbVar15 + 0xc);
  }
  piVar18 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)));
  ((code *)*(gen_code32 *)(*piVar18 + 0x18))(piVar18,*(undefined4 *)(pbVar15 + 4),(int)&(*(byte * PTR32 *)&gen_args[3]) + 3,(*(undefined * PTR32 *)&gen_args[1]));
  return (*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[3]) + 3))));
}

/* ref: FUN_00ca0980 */
byte F_00ca0980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xca0980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  *(undefined4 *)((int)param_1 + 0x40) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(float *)(gen_frame + 0x44)) = (float)((double)*param_2 - REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0x4c)) = (float)((double)param_2[2] - REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0x54)) = param_2[1];
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(int *)(gen_frame + 0x3c)) = 0;
  (*(float *)(gen_frame + 0x48)) = param_2[1];
  (*(float *)(gen_frame + 0x50)) = (float)((double)*param_2 + REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0x58)) = (float)((double)param_2[2] + REFG(double, 0x10ac068));
  F_00c9fbe0(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)((int)this + 0x24),&(*(float *)(gen_frame + 0x44)));
  do {
    if ((*(int *)(gen_frame + 0x3c)) == 0) {
      return 0;
    }
    do {
      iVar3 = (*(int *)(gen_frame + 0x3c));
      if (*(char *)((*(int *)(gen_frame + 0x3c)) + 0x44) != '\0') {
        if ((*(int *)(gen_frame + 0x3c)) == 0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)((*(int *)(gen_frame + 0x3c)) + -0x10);
        }
        uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0x54))(piVar4,param_2);
        iVar3 = (*(int *)(gen_frame + 0x3c));
        if ((char)uVar2 != '\0') {
          if ((*(int *)(gen_frame + 0x3c)) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = (*(int *)(gen_frame + 0x3c)) + -0x10;
          }
          bVar1 = F_00c9d9e0(param_1,iVar3);
          iVar3 = (*(int *)(gen_frame + 0x3c));
          if (bVar1 == 0) {
            return 0;
          }
        }
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        (*(int *)(gen_frame + 0x3c)) = 0;
        break;
      }
      iVar3 = *(int *)(iVar3 + 0xc) + 0x10;
      (*(int *)(gen_frame + 0x3c)) = iVar3;
    } while (iVar3 != 0);
    F_00ca1f00(((undefined1 *)(gen_frame + 0x4)));
  } while( true );
}

/* ref: FUN_00ca0ac0 */
byte F_00ca0ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xca0ac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  *(undefined4 *)((int)param_1 + 0x40) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(float *)(gen_frame + 0x44)) = (float)((double)*param_3 - REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0x4c)) = (float)((double)param_3[2] - REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0x54)) = param_3[1];
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(int *)(gen_frame + 0x3c)) = 0;
  (*(float *)(gen_frame + 0x48)) = param_3[1];
  (*(float *)(gen_frame + 0x50)) = (float)((double)*param_3 + REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0x58)) = (float)((double)param_3[2] + REFG(double, 0x10ac068));
  F_00c9fbe0(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)((int)this + 0x24),&(*(float *)(gen_frame + 0x44)));
  do {
    if ((*(int *)(gen_frame + 0x3c)) == 0) {
      return 0;
    }
    do {
      iVar3 = (*(int *)(gen_frame + 0x3c));
      if (*(char *)((*(int *)(gen_frame + 0x3c)) + 0x44) != '\0') {
        if ((*(int *)(gen_frame + 0x3c)) == 0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)((*(int *)(gen_frame + 0x3c)) + -0x10);
        }
        uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0x50))(piVar4,param_2,param_3);
        iVar3 = (*(int *)(gen_frame + 0x3c));
        if ((char)uVar2 != '\0') {
          if ((*(int *)(gen_frame + 0x3c)) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = (*(int *)(gen_frame + 0x3c)) + -0x10;
          }
          bVar1 = F_00c9d9e0(param_1,iVar3);
          iVar3 = (*(int *)(gen_frame + 0x3c));
          if (bVar1 == 0) {
            return 0;
          }
        }
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
        (*(int *)(gen_frame + 0x3c)) = 0;
        break;
      }
      iVar3 = *(int *)(iVar3 + 0xc) + 0x10;
      (*(int *)(gen_frame + 0x3c)) = iVar3;
    } while (iVar3 != 0);
    F_00ca1f00(((undefined1 *)(gen_frame + 0x4)));
  } while( true );
}

/* ref: FUN_00ca0c00 */
unsigned int F_00ca0c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xca0c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  int iVar2;
  int * piVar3;
  float fVar4;
  
  fVar4 = ((float)GEN_TOF(((double)*(float *)((int)this + 0x1c) * REFG(double, 0x1088108))));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(float *)(gen_frame + 0x44)) = ((float)GEN_TOF((((double)GEN_TOD((*(float *)((int)this + 0x10) - fVar4))) - REFG(double, 0x10ac068))));
  (*(float *)(gen_frame + 0x4c)) = ((float)GEN_TOF((((double)GEN_TOD((*(float *)((int)this + 0x18) - fVar4))) - REFG(double, 0x10ac068))));
  (*(float *)(gen_frame + 0x50)) = ((float)GEN_TOF((((double)GEN_TOD((*(float *)((int)this + 0x10) + fVar4))) + REFG(double, 0x10ac068))));
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(int *)(gen_frame + 0x3c)) = 0;
  (*(float *)(gen_frame + 0x48)) = *(float *)((int)this + 0x14) - fVar4;
  (*(float *)(gen_frame + 0x54)) = *(float *)((int)this + 0x14) + fVar4;
  (*(float *)(gen_frame + 0x58)) = ((float)GEN_TOF((((double)GEN_TOD((*(float *)((int)this + 0x18) + fVar4))) + REFG(double, 0x10ac068))));
  F_00c9fbe0(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)((int)this + 0x24),&(*(float *)(gen_frame + 0x44)));
  do {
    if ((*(int *)(gen_frame + 0x3c)) == 0) {
      return 0;
    }
    do {
      bVar1 = F_00c9da60((*(int *)(gen_frame + 0x3c)) + -0x10);
      if (bVar1 != 0) {
        if ((*(int *)(gen_frame + 0x3c)) == 0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = (int *)((*(int *)(gen_frame + 0x3c)) + -0x10);
        }
        ((code *)*(gen_code32 *)(*piVar3 + 0x58))(piVar3,param_1);
      }
      if (*(int *)((*(int *)(gen_frame + 0x3c)) + 0xc) == 0) {
        (*(int *)(gen_frame + 0x3c)) = 0;
        break;
      }
      iVar2 = *(int *)((*(int *)(gen_frame + 0x3c)) + 0xc) + 0x10;
      (*(int *)(gen_frame + 0x3c)) = iVar2;
    } while (iVar2 != 0);
    F_00ca1f00(((undefined1 *)(gen_frame + 0x4)));
  } while( true );
}

/* ref: FUN_00ca0d90 */
unsigned int F_00ca0d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xca0d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(float *)(gen_frame + 0x44)) = (float)((double)*param_2 - REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0x48)) = param_2[1];
  (*(float *)(gen_frame + 0x4c)) = (float)((double)param_2[2] - REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0x50)) = (float)((double)param_2[3] + REFG(double, 0x10ac068));
  (*(float *)(gen_frame + 0x54)) = param_2[4];
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(int *)(gen_frame + 0x3c)) = 0;
  (*(float *)(gen_frame + 0x58)) = (float)((double)param_2[5] + REFG(double, 0x10ac068));
  F_00c9fbe0(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)((int)this + 0x24),&(*(float *)(gen_frame + 0x44)));
  do {
    if ((*(int *)(gen_frame + 0x3c)) == 0) {
      return 0;
    }
    do {
      ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,(*(int *)(gen_frame + 0x3c)) + -0x10);
      if (*(int *)((*(int *)(gen_frame + 0x3c)) + 0xc) == 0) {
        (*(int *)(gen_frame + 0x3c)) = 0;
        break;
      }
      iVar1 = *(int *)((*(int *)(gen_frame + 0x3c)) + 0xc) + 0x10;
      (*(int *)(gen_frame + 0x3c)) = iVar1;
    } while (iVar1 != 0);
    F_00ca1f00(((undefined1 *)(gen_frame + 0x4)));
  } while( true );
}

/* ref: FUN_00ca0e90 */
unsigned int F_00ca0e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xca0e90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  
  if (param_3 < 7) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(float *)(gen_frame + 0x44)) = (float)((double)*param_2 - REFG(double, 0x10ac068));
    (*(float *)(gen_frame + 0x48)) = param_2[1];
    (*(float *)(gen_frame + 0x4c)) = (float)((double)param_2[2] - REFG(double, 0x10ac068));
    (*(float *)(gen_frame + 0x50)) = (float)((double)param_2[3] + REFG(double, 0x10ac068));
    (*(float *)(gen_frame + 0x54)) = param_2[4];
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(int *)(gen_frame + 0x3c)) = 0;
    (*(float *)(gen_frame + 0x58)) = (float)((double)param_2[5] + REFG(double, 0x10ac068));
    F_00c9fc90(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)((int)this + 0x24),&(*(float *)(gen_frame + 0x44)),param_3);
    while ((*(int *)(gen_frame + 0x3c)) != 0) {
      do {
        ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,(*(int *)(gen_frame + 0x3c)) + -0x10);
        if (*(int *)((*(int *)(gen_frame + 0x3c)) + 0xc) == 0) {
          (*(int *)(gen_frame + 0x3c)) = 0;
          break;
        }
        iVar1 = *(int *)((*(int *)(gen_frame + 0x3c)) + 0xc) + 0x10;
        (*(int *)(gen_frame + 0x3c)) = iVar1;
      } while (iVar1 != 0);
      F_00ca1f00(((undefined1 *)(gen_frame + 0x4)));
    }
  }
  return 0;
}

/* ref: FUN_00ca0fa0 */
unsigned int F_00ca0fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xca0fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  ((float *)(gen_frame + 0x4))[0] = 0.0;
  ((float *)(gen_frame + 0x4))[1] = 0.0;
  ((float *)(gen_frame + 0x4))[2] = 0.0;
  ((float *)(gen_frame + 0x4))[3] = 0.0;
  ((float *)(gen_frame + 0x4))[4] = 0.0;
  ((float *)(gen_frame + 0x4))[5] = 0.0;
  ((code *)*(gen_code32 *)(*param_1 + 0x28))(param_1,((float *)(gen_frame + 0x4)));
  fVar7 = (float)((double)((float *)(gen_frame + 0x4))[0] + REFG(double, 0x10ac068));
  if (!((float)((double)((float *)(gen_frame + 0x4))[0] + REFG(double, 0x10ac068)) < *(float *)((int)this + 8))) {
    fVar7 = *(float *)((int)this + 8);
  }
  fVar9 = (float)((double)((float *)(gen_frame + 0x4))[2] + REFG(double, 0x10ac068));
  if (!((float)((double)((float *)(gen_frame + 0x4))[2] + REFG(double, 0x10ac068)) < *(float *)((int)this + 0x14))) {
    fVar9 = *(float *)((int)this + 0x14);
  }
  fVar8 = (float)((double)((float *)(gen_frame + 0x4))[3] - REFG(double, 0x10ac068));
  if (!(*(float *)((int)this + 4) < (float)((double)((float *)(gen_frame + 0x4))[3] - REFG(double, 0x10ac068)))) {
    fVar8 = *(float *)((int)this + 4);
  }
  fVar1 = *(float *)((int)this + 0x10);
  fVar10 = (float)((double)((float *)(gen_frame + 0x4))[5] - REFG(double, 0x10ac068));
  if (!(fVar1 < (float)((double)((float *)(gen_frame + 0x4))[5] - REFG(double, 0x10ac068)))) {
    fVar10 = fVar1;
  }
  if (fVar8 < fVar7) {
    fVar7 = ((float)GEN_TOF((((double)fVar8 + (double)fVar7) * REFG(double, 0x1088108))));
    fVar8 = fVar7;
  }
  if (fVar10 < fVar9) {
    fVar9 = ((float)GEN_TOF((((double)fVar10 + (double)fVar9) * REFG(double, 0x1088108))));
    fVar10 = fVar9;
  }
  if (!(*(float *)((int)this + 4) < fVar7)) {
    fVar7 = *(float *)((int)this + 4);
  }
  if (!(fVar1 < fVar9)) {
    fVar9 = fVar1;
  }
  if (!(fVar8 < *(float *)((int)this + 8))) {
    fVar8 = *(float *)((int)this + 8);
  }
  if (!(fVar10 < *(float *)((int)this + 0x14))) {
    fVar10 = *(float *)((int)this + 0x14);
  }
  uVar4 = F_00c9f8a0(this,fVar7,fVar9);
  uVar5 = F_00c9f8a0(this,fVar8,fVar10);
  iVar2 = *(int *)((int)this + 0x1c);
  iVar6 = iVar2;
  for (uVar5 = uVar5 ^ uVar4; iVar6 = iVar6 + -1, uVar5 != 0; uVar5 = uVar5 >> 2) {
  }
  iVar3 = *(int *)(&REFG(undefined, 0x134c1ec) + iVar6 * 4);
  if (param_1[6] != 0) {
    *(int *)(param_1[6] + 0x1c) = param_1[7];
  }
  if (param_1[7] != 0) {
    *(int *)(param_1[7] + 0x18) = param_1[6];
  }
  param_1[6] = 0;
  param_1[7] = 0;
  iVar2 = *(int *)((int)this + 0x20) + 4 +
          ((uVar4 >> (((char)iVar2 - (char)iVar6) * '\x02' - 2U & 0x1f)) + iVar3) * 0x10;
  if (iVar2 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = iVar2 + -0x14;
  }
  param_1[6] = iVar6;
  param_1[7] = *(int *)(iVar2 + 8);
  if (*(int *)(iVar2 + 8) != 0) {
    *((int * PTR32 *)GEN_TOP((*(int *)(iVar2 + 8) + 0x18))) = param_1;
  }
  *(int * PTR32 *)(iVar2 + 8) = param_1;
  return 0;
}

/* ref: FUN_00ca11f0 */
unsigned int F_00ca11f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xca11f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ca0fa0(*(undefined * PTR32 *)((int)this + 0x24),param_1);
  return 0;
}

/* ref: FUN_00ca1200 */
uint F_00ca1200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xca1200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00ca2100(0x180,&REFG(undefined, 0x11290e0),*(undefined4 *)((int)this + 4));
  if (this_00 == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00ca2560(this_00,this,param_1,param_2,param_3);
  }
  *(undefined4 *)(uVar1 + 0xc) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 8))) = uVar1;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  *(uint *)((int)this + 8) = uVar1;
  *(int *)(uVar1 + 0x30) = *(int *)(uVar1 + 0x30) + 1;
  return uVar1;
}

/* ref: FUN_00ca1260 */
uint F_00ca1260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xca1260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined * this_00;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,this,param_1,param_2)));
  if (piVar1 == (int *)0x0) {
    this_00 = (undefined *)F_00ca2100(0x150,&REFG(undefined, 0x11290e1),*(undefined4 *)((int)this + 4));
    if (this_00 == (undefined *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)F_00c951e0(this_00,this,param_1,param_2);
    }
  }
  piVar1[3] = *(int *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 8))) = piVar1;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  *(int * PTR32 *)((int)this + 8) = piVar1;
  piVar1[0xc] = piVar1[0xc] + 1;
  ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_2);
  return (uint)piVar1;
}

/* ref: FUN_00ca12f0 */
uint F_00ca12f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12)
{
  GEN_ENTER(0xca12f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[13];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  gen_args[9] = gen_a9;
  gen_args[10] = gen_a10;
  gen_args[11] = gen_a11;
  gen_args[12] = gen_a12;
  int * piVar1;
  undefined * this_00;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)));
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]))));
  if (piVar1 == (int *)0x0) {
    this_00 = (undefined *)F_00ca2100(0x150,&REFG(undefined, 0x11290e2),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
    if (this_00 == (undefined *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = (int *)F_00c951e0(this_00,(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
    }
  }
  piVar1[3] = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 8))) = piVar1;
  }
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 1;
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = piVar1;
  piVar1[0xc] = piVar1[0xc] + 1;
  ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,(*(undefined4 *)&gen_args[2]));
  ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1,&(*(undefined4 *)&gen_args[4]));
  ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1,&(*(undefined4 *)&gen_args[7]));
  ((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1,&(*(undefined4 *)&gen_args[10]));
  return (uint)piVar1;
}

/* ref: FUN_00ca13a0 */
uint F_00ca13a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xca13a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[11];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  gen_args[9] = gen_a9;
  gen_args[10] = gen_a10;
  undefined * this_00;
  int * piVar1;
  
  this_00 = (undefined *)F_00ca2100(0x108,&REFG(undefined, 0x11290e3),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
  if (this_00 == (undefined *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)F_00ca62b0(this_00,(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[5]),&(*(undefined4 *)&gen_args[8]));
  }
  piVar1[3] = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 8))) = piVar1;
  }
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 1;
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = piVar1;
  piVar1[0xc] = piVar1[0xc] + 1;
  ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,0);
  return (uint)piVar1;
}

/* ref: FUN_00ca1410 */
uint F_00ca1410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xca1410u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[11];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  gen_args[9] = gen_a9;
  gen_args[10] = gen_a10;
  undefined * this_00;
  int * piVar1;
  
  this_00 = (undefined *)F_00ca2100(0x110,&REFG(undefined, 0x11290e4),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
  if (this_00 == (undefined *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)F_00ca9c90(this_00,(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[5]),&(*(undefined4 *)&gen_args[8]));
  }
  piVar1[3] = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 8))) = piVar1;
  }
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 1;
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = piVar1;
  piVar1[0xc] = piVar1[0xc] + 1;
  ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,0);
  return (uint)piVar1;
}

/* ref: FUN_00ca1480 */
uint F_00ca1480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xca1480u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[11];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  gen_args[9] = gen_a9;
  gen_args[10] = gen_a10;
  undefined * this_00;
  int * piVar1;
  
  this_00 = (undefined *)F_00ca2100(0x118,&REFG(undefined, 0x11290e5),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
  if (this_00 == (undefined *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)F_00cac890(this_00,(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[5]),&(*(undefined4 *)&gen_args[8]));
  }
  piVar1[3] = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 8))) = piVar1;
  }
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 1;
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = piVar1;
  piVar1[0xc] = piVar1[0xc] + 1;
  ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,0);
  return (uint)piVar1;
}

/* ref: FUN_00ca14f0 */
uint F_00ca14f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xca14f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[11];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  gen_args[9] = gen_a9;
  gen_args[10] = gen_a10;
  undefined * this_00;
  int * piVar1;
  
  this_00 = (undefined *)F_00ca2100(0x108,&REFG(undefined, 0x11290e6),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
  if (this_00 == (undefined *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)F_00cb0190(this_00,(*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[5]),&(*(undefined4 *)&gen_args[8]));
  }
  piVar1[3] = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 8))) = piVar1;
  }
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 1;
  *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = piVar1;
  piVar1[0xc] = piVar1[0xc] + 1;
  ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,0);
  return (uint)piVar1;
}

/* ref: FUN_00ca1560 */
uint F_00ca1560(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xca1560u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  uint param_6 = (uint)gen_a5;
  undefined * param_7 = (undefined *)(uintptr_t)gen_a6;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  
  param_1[2] = (undefined4)gen_fl2bits((float)((double)param_4 - REFG(double, 0x1088130)));
  param_1[4] = (undefined4)gen_fl2bits(param_3);
  param_1[1] = (undefined4)gen_fl2bits(param_2);
  dVar6 = (double)param_5 - REFG(double, 0x1088130);
  param_1[10] = param_7;
  iVar3 = 0;
  iVar5 = 0;
  iVar4 = 0;
  uVar1 = 0;
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x11290e8));
  param_1[5] = (undefined4)gen_fl2bits((float)dVar6);
  param_1[7] = param_6;
  if (1 < (int)param_6) {
    do {
      iVar3 = iVar3 + (&REFG(undefined4, 0x134c1c8))[uVar1];
      iVar5 = iVar5 + (&REFG(undefined4, 0x134c1cc))[uVar1];
      uVar1 = uVar1 + 2;
    } while (uVar1 < param_6 - 1);
  }
  if (uVar1 < param_6) {
    iVar4 = (&REFG(undefined4, 0x134c1c8))[uVar1];
  }
  iVar4 = iVar4 + iVar3 + iVar5;
  uVar1 = F_00c96f50(param_7);
  param_1[8] = uVar1;
  if (iVar4 != 0) {
    iVar5 = 0;
    iVar3 = iVar4;
    do {
      puVar2 = (undefined4 *)(param_1[8] + iVar5);
      if (puVar2 != (undefined4 *)0x0) {
        puVar2[1] = (*(undefined * PTR32 (*)[1])REFP(0x1128e60));
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = (*(undefined * PTR32 (*)[1])REFP(0x1128f10));
        puVar2[1] = (*(undefined * PTR32 (*)[1])REFP(0x1128f0c));
      }
      iVar5 = iVar5 + 0x10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = 1 << ((char)param_6 - 1U & 0x1f);
  param_1[9] = iVar4;
  param_1[3] = (undefined4)gen_fl2bits(((float)GEN_TOF((((double)param_4 - (double)param_2) / (double)iVar3))))
  ;
  param_1[6] = (undefined4)gen_fl2bits(((float)GEN_TOF((((double)param_5 - (double)param_3) / (double)iVar3))))
  ;
  return (uint)param_1;
}

/* ref: FUN_00ca16b0 */
uint F_00ca16b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xca16b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11290f4));
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = REFG(float, 0x10916ec);
  *(undefined4 *)((int)this + 0x20) = 0;
  uVar1 = F_00ca2100(0x2c,&REFG(undefined, 0x11290dd),param_1);
  if (uVar1 != 0) {
    uVar1 = F_00ca1560(uVar1,REFG(float, 0x11290f0),REFG(float, 0x11290f0),REFG(float, 0x10b2b38),REFG(float, 0x10b2b38),7,param_1);
    *(uint *)((int)this + 0x24) = uVar1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  return (uint)this;
}

/* ref: FUN_00ca1760 */
unsigned int F_00ca1760(unsigned int gen_a0)
{
  GEN_ENTER(0xca1760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  while (piVar2 = piVar1, piVar2 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    if ((char)uVar3 == '\0') {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
      if ((char)uVar3 == '\0') {
        piVar2[0x14] = 0;
      }
      else {
        F_00ca0fa0(*(undefined * PTR32 *)((int)this + 0x24),piVar2);
      }
      piVar1 = (int *)piVar2[3];
    }
    else {
      ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
      if (piVar2[6] != 0) {
        *(int *)(piVar2[6] + 0x1c) = piVar2[7];
      }
      if (piVar2[7] != 0) {
        *(int *)(piVar2[7] + 0x18) = piVar2[6];
      }
      piVar2[6] = 0;
      piVar2[7] = 0;
      piVar1 = (int *)piVar2[3];
      if (*(int * PTR32 *)((int)this + 8) == piVar2) {
        *(int * PTR32 *)((int)this + 8) = piVar1;
      }
      if (piVar2[2] != 0) {
        *(int *)(piVar2[2] + 0xc) = piVar2[3];
      }
      if (piVar2[3] != 0) {
        *(int *)(piVar2[3] + 8) = piVar2[2];
      }
      piVar2[2] = 0;
      piVar2[3] = 0;
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
      if (piVar2 != (int *)0x0) {
        ((code *)*(gen_code32 *)*piVar2)(piVar2,0);
        F_00ca2140(piVar2,&REFG(undefined, 0x11290e7),*(undefined4 *)((int)this + 4));
      }
    }
  }
  return 0;
}

/* ref: FUN_00ca1830 */
unsigned int F_00ca1830(unsigned int gen_a0)
{
  GEN_ENTER(0xca1830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11290f4));
  F_00ca1760(this);
  for (piVar1 = *(int * PTR32 *)((int)this + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[3]) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))(piVar1);
    if (uVar4 == 1) {
      piVar1[0xc] = piVar1[0xc] + -1;
    }
  }
  F_00ca1760(this);
  iVar2 = *(int *)((int)this + 0xc);
  while (iVar2 != 0) {
    puVar3 = *(undefined4 * PTR32 *)((int)this + 8);
    if (puVar3 != (undefined4 *)0x0) {
      *(undefined4 *)((int)this + 8) = puVar3[3];
      if (puVar3[2] != 0) {
        *(undefined4 *)(puVar3[2] + 0xc) = puVar3[3];
      }
      if (puVar3[3] != 0) {
        *(undefined4 *)(puVar3[3] + 8) = puVar3[2];
      }
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
    }
    ((code *)*(gen_code32 *)*puVar3)(puVar3,0);
    F_00ca2140(puVar3,&REFG(undefined, 0x11290de),*(undefined4 *)((int)this + 4));
    iVar2 = *(int *)((int)this + 0xc);
  }
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x24);
  if (puVar3 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar3)(puVar3,0);
    F_00ca2140(*(undefined4 *)((int)this + 0x24),&REFG(undefined, 0x11290df),*(undefined4 *)((int)this + 4));
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  return 0;
}

/* ref: FUN_00ca1900 */
uint F_00ca1900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xca1900u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ca1950 */
byte F_00ca1950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xca1950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0x38) != *(int *)(param_1 + 0x38);
}

/* ref: FUN_00ca1990 */
unsigned int F_00ca1990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xca1990u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  return 0;
}

/* ref: FUN_00ca1a00 */
uint F_00ca1a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xca1a00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00ca1a10 */
uint F_00ca1a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xca1a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00ca1a20 */
byte F_00ca1a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xca1a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00ca1a70 */
unsigned int F_00ca1a70(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xca1a70u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  if (param_2 < param_1) {
    return 0;
  }
  return 0;
}

/* ref: FUN_00ca1aa0 */
unsigned int F_00ca1aa0(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xca1aa0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  if (param_1 < param_2) {
    return 0;
  }
  return 0;
}

/* ref: FUN_00ca1ad0 */
uint F_00ca1ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xca1ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar1 = (param_1 << 8 | param_1) & 0xff00ff;
  uVar2 = (uVar1 << 4 | uVar1) & 0xf0f0f0f;
  uVar2 = uVar2 * 4 | uVar2;
  uVar1 = (param_2 << 8 | param_2) & 0xff00ff;
  uVar1 = (uVar1 << 4 | uVar1) & 0xf0f0f0f;
  uVar1 = (uVar1 * 4 | uVar1) & 0x33333333;
  return (((((uVar1 * 2 | uVar1) ^ uVar2 & 0x33333333) & 0x2aaaaaaa ^ (uVar1 * 2 | uVar1)) * 2 |
          uVar2 & 0x11111111) + *(int *)(&REFG(undefined, 0x134c1ec) + param_3 * 4)) * 0x10 +
         *(int *)((int)this + 0x20);
}

/* ref: FUN_00ca1b60 */
unsigned int F_00ca1b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xca1b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint param_5 = (uint)gen_a5;
  int param_6 = (int)gen_a6;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  *(short *)((int)this + 0x14) = (short)param_6;
  *(int *)this = param_1;
  bVar1 = ((char)*(undefined4 *)(param_1 + 0x1c) - (char)param_6) - 1;
  uVar3 = param_3 >> (bVar1 & 0x1f);
  uVar2 = param_2 >> (bVar1 & 0x1f);
  *(short *)((int)this + 10) = (short)uVar3;
  *(short *)((int)this + 8) = (short)uVar2;
  *(short *)((int)this + 0x10) = (short)(param_4 >> (bVar1 & 0x1f));
  *(short *)((int)this + 0xc) = (short)uVar2;
  uVar2 = (uVar2 << 8 | uVar2) & 0xff00ff;
  uVar2 = (uVar2 << 4 | uVar2) & 0xf0f0f0f;
  uVar2 = uVar2 * 4 | uVar2;
  *(short *)((int)this + 0xe) = (short)uVar3;
  uVar3 = (uVar3 << 8 | uVar3) & 0xff00ff;
  uVar3 = (uVar3 << 4 | uVar3) & 0xf0f0f0f;
  uVar3 = (uVar3 * 4 | uVar3) & 0x33333333;
  *(short *)((int)this + 0x12) = (short)(param_5 >> (bVar1 & 0x1f));
  *(uint *)((int)this + 4) =
       (((((uVar3 * 2 | uVar3) ^ uVar2 & 0x33333333) & 0x2aaaaaaa ^ (uVar3 * 2 | uVar3)) * 2 |
        uVar2 & 0x11111111) + *(int *)(&REFG(undefined, 0x134c1ec) + param_6 * 4)) * 0x10 +
       *(int *)(param_1 + 0x20);
  return 0;
}

/* ref: FUN_00ca1c30 */
uint F_00ca1c30(unsigned int gen_a0)
{
  GEN_ENTER(0xca1c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  *(short *)((int)this + 8) = *(short *)((int)this + 8) + 1;
  do {
    if (*(ushort *)((int)this + 8) <= *(ushort *)((int)this + 0x10)) {
      uVar1 = ((uint)*(ushort *)((int)this + 8) << 8 | (uint)*(ushort *)((int)this + 8)) & 0xff00ff;
      uVar1 = (uVar1 << 4 | uVar1) & 0xf0f0f0f;
      uVar1 = uVar1 * 4 | uVar1;
      uVar2 = ((uint)*(ushort *)((int)this + 10) << 8 | (uint)*(ushort *)((int)this + 10)) &
              0xff00ff;
      uVar2 = (uVar2 << 4 | uVar2) & 0xf0f0f0f;
      uVar2 = (uVar2 * 4 | uVar2) & 0x33333333;
      uVar1 = *(int *)(*(int *)this + 0x20) +
              (((((uVar2 * 2 | uVar2) ^ uVar1 & 0x33333333) & 0x2aaaaaaa ^ (uVar2 * 2 | uVar2)) * 2
               | uVar1 & 0x11111111) +
              *(int *)(&REFG(undefined, 0x134c1ec) + (uint)*(ushort *)((int)this + 0x14) * 4)) * 0x10;
      *(uint *)((int)this + 4) = uVar1;
      return uVar1;
    }
    *(short *)((int)this + 10) = *(short *)((int)this + 10) + 1;
    *(undefined2 *)((int)this + 8) = *(undefined2 *)((int)this + 0xc);
  } while (*(ushort *)((int)this + 10) <= *(ushort *)((int)this + 0x12));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00ca1d00 */
uint F_00ca1d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xca1d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 local_28;
  undefined4 local_1c;
  float local_10;
  float local_c;
  float local_8;
  
  local_8 = *(float *)(param_1 + 4);
  fVar4 = *(float *)param_3;
  if (!(local_8 < *(float *)param_3)) {
    fVar4 = local_8;
  }
  fVar6 = *(float *)(param_1 + 8);
  local_10 = fVar6;
  if (fVar4 < fVar6) {
    local_10 = fVar4;
  }
  fVar4 = *(float *)(param_1 + 0x10);
  fVar5 = *(float *)(param_3 + 8);
  if (!(fVar4 < *(float *)(param_3 + 8))) {
    fVar5 = fVar4;
  }
  fVar1 = *(float *)(param_1 + 0x14);
  local_c = fVar1;
  if (fVar5 < fVar1) {
    local_c = fVar5;
  }
  fVar5 = *(float *)(param_3 + 0xc);
  if (!(*(float *)(param_3 + 0xc) < fVar6)) {
    fVar5 = fVar6;
  }
  if (local_8 < fVar5) {
    local_8 = fVar5;
  }
  fVar6 = *(float *)(param_3 + 0x14);
  if (!(*(float *)(param_3 + 0x14) < fVar1)) {
    fVar6 = fVar1;
  }
  param_3 = (uint)gen_fl2bits(fVar4);
  if (fVar4 < fVar6) {
    param_3 = (uint)gen_fl2bits(fVar6);
  }
  local_1c = (undefined4)
             (longlong)
             TRUNC((((float10)GEN_TOD(gen_bits2f(param_3))) - (float10)*(float *)(param_1 + 0x10)) /
                   (float10)*(float *)(param_1 + 0x18));
  local_28 = (undefined4)
             (longlong)
             TRUNC(((float10)local_8 - (float10)*(float *)(param_1 + 4)) /
                   (float10)*(float *)(param_1 + 0xc));
  uVar2 = local_28;
  local_28 = (undefined4)
             (longlong)
             TRUNC(((float10)local_c - (float10)*(float *)(param_1 + 0x10)) /
                   (float10)*(float *)(param_1 + 0x18));
  uVar3 = local_28;
  local_28 = (undefined4)
             (longlong)
             TRUNC(((float10)local_10 - (float10)*(float *)(param_1 + 4)) /
                   (float10)*(float *)(param_1 + 0xc));
  F_00ca1b60(param_2,param_1,local_28,uVar3,uVar2,local_1c,param_4);
  return (uint)param_2;
}

/* ref: FUN_00ca1ed0 */
uint F_00ca1ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xca1ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c9f810(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ca1f00 */
unsigned int F_00ca1f00(unsigned int gen_a0)
{
  GEN_ENTER(0xca1f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  ulonglong uVar1;
  byte bVar2;
  undefined8 * puVar3;
  int iVar4;
  
  uVar1 = (*(ulonglong *)(gen_frame + 0x24));
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x24)) + 0)) = 0;
  (*(ulonglong *)(gen_frame + 0x24)) = uVar1 & 0xffffffff00000000;
  do {
    F_00ca1c30((undefined *)((int)this + 0x20));
    if (*(int *)((int)this + 0x20) == (int)(*(ulonglong *)(gen_frame + 0x24))) {
      if (*(char *)((int)this + 0x3c) == '\0') {
        return 0;
      }
      if (*(char *)((int)this + 0x3d) != '\0') {
        return 0;
      }
      bVar2 = *(char *)((int)this + 0x3c) - 1;
      *(byte *)((int)this + 0x3c) = bVar2;
      puVar3 = (undefined8 *)F_00ca1d00(*(undefined4 *)this,((byte *)(gen_frame + 0xc)),(int)this + 4,(uint)bVar2);
      *(undefined8 *)((int)this + 0x20) = *puVar3;
      *(undefined8 *)((int)this + 0x28) = puVar3[1];
      *(undefined8 *)((int)this + 0x30) = puVar3[2];
      ((byte *)(gen_frame + 0xc))[0] = 0;
      ((byte *)(gen_frame + 0xc))[1] = 0;
      ((byte *)(gen_frame + 0xc))[2] = 0;
      ((byte *)(gen_frame + 0xc))[3] = 0;
      (*(ulonglong *)(gen_frame + 0x24)) = (ulonglong)(uint)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)) << 0x20;
      ((byte *)(gen_frame + 0x2c))[0] = ((byte *)(gen_frame + 0xc))[8];
      ((byte *)(gen_frame + 0x2c))[1] = ((byte *)(gen_frame + 0xc))[9];
      ((byte *)(gen_frame + 0x2c))[2] = ((byte *)(gen_frame + 0xc))[10];
      ((byte *)(gen_frame + 0x2c))[3] = ((byte *)(gen_frame + 0xc))[0xb];
      ((byte *)(gen_frame + 0x2c))[4] = ((byte *)(gen_frame + 0xc))[0xc];
      ((byte *)(gen_frame + 0x2c))[5] = ((byte *)(gen_frame + 0xc))[0xd];
      ((byte *)(gen_frame + 0x2c))[6] = ((byte *)(gen_frame + 0xc))[0xe];
      ((byte *)(gen_frame + 0x2c))[7] = ((byte *)(gen_frame + 0xc))[0xf];
      ((byte *)(gen_frame + 0x34))[0] = ((byte *)(gen_frame + 0xc))[0x10];
      ((byte *)(gen_frame + 0x34))[1] = ((byte *)(gen_frame + 0xc))[0x11];
      ((byte *)(gen_frame + 0x34))[2] = ((byte *)(gen_frame + 0xc))[0x12];
      ((byte *)(gen_frame + 0x34))[3] = ((byte *)(gen_frame + 0xc))[0x13];
      ((byte *)(gen_frame + 0x34))[4] = ((byte *)(gen_frame + 0xc))[0x14];
      ((byte *)(gen_frame + 0x34))[5] = ((byte *)(gen_frame + 0xc))[0x15];
      ((byte *)(gen_frame + 0x34))[6] = ((byte *)(gen_frame + 0xc))[0x16];
      ((byte *)(gen_frame + 0x34))[7] = ((byte *)(gen_frame + 0xc))[0x17];
    }
    iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 0x24) + 0xc)));
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + 0x10;
    }
    *(int *)((int)this + 0x38) = iVar4;
    if (iVar4 != 0) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00ca1fb0 */
unsigned int F_00ca1fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xca1fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  if (this == (undefined *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)this + -0x14;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((int *)GEN_TOP((*(int *)((int)this + 8) + 0x18))) = param_1;
  }
  *(int *)((int)this + 8) = param_1;
  return 0;
}

/* ref: FUN_00ca1fe0 */
unsigned int F_00ca1fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xca1fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)this;
  if (*(int *)this != 0) {
    *(int *)(*(int *)this + 8) = param_1;
  }
  *(int *)this = param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00ca2000 */
uint F_00ca2000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xca2000u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00ca2010 */
uint F_00ca2010(unsigned int gen_a0)
{
  GEN_ENTER(0xca2010u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00ca2030 */
unsigned int F_00ca2030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xca2030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    if (*(int *)this == param_1) {
      *(undefined4 *)this = *(undefined4 *)(param_1 + 0xc);
    }
    if (*(int *)(param_1 + 8) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + 0xc))) = *(undefined4 *)(param_1 + 0xc);
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xc) + 8))) = *(undefined4 *)(param_1 + 8);
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  return 0;
}

/* ref: FUN_00ca2080 */
uint F_00ca2080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xca2080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_2;
  uVar2 = *(undefined4 *)(iVar1 + 0xc);
  if (iVar1 != 0) {
    if (*(int *)this == iVar1) {
      *(undefined4 *)this = uVar2;
    }
    if (*(int *)(iVar1 + 8) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 8) + 0xc))) = *(undefined4 *)(iVar1 + 0xc);
    }
    if (*(int *)(iVar1 + 0xc) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0xc) + 8))) = *(undefined4 *)(iVar1 + 8);
    }
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = uVar2;
  return (uint)param_1;
}

/* ref: FUN_00ca20d0 */
uint F_00ca20d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xca20d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00ca1830(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ca2100 */
uint F_00ca2100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xca2100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c96f50(param_3);
  return uVar1;
}

/* ref: FUN_00ca2120 */
uint F_00ca2120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xca2120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c96f50(param_3);
  return uVar1;
}

/* ref: FUN_00ca2140 */
unsigned int F_00ca2140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xca2140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  F_00c96f60(param_3);
  return 0;
}

/* ref: FUN_00ca2160 */
unsigned int F_00ca2160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xca2160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  F_00c96f60(param_3);
  return 0;
}

/* ref: FUN_00ca2180 */
unsigned int F_00ca2180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xca2180u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  F_00c96f60(param_2);
  return 0;
}

/* ref: FUN_00ca21b0 */
uint F_00ca21b0(unsigned int gen_a0)
{
  GEN_ENTER(0xca21b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 0x30) == 0) && (*(int *)(in_ecx + 0x16c) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ca21d0 */
uint F_00ca21d0(unsigned int gen_a0)
{
  GEN_ENTER(0xca21d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  undefined4 * puVar1;
  float fVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x12c);
  (*(uint *)(gen_frame + 0x128)) = uVar5;
  iVar6 = 0;
  if ((*(int *)((int)this + 0x30) != 0) && (*(int *)((int)this + 0x17c) != 0)) {
    uVar5 = F_00c9fa60(*(undefined * PTR32 *)((int)this + 0x34),&(*(float *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0x4)),&(*(float *)(gen_frame + 0x18)),&(*(float *)(gen_frame + 0xc)));
    (*(float *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0x8)) - (*(float *)(gen_frame + 0xc));
    (*(uint *)(gen_frame + 0x24)) = 0;
    (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x8)) + (*(float *)(gen_frame + 0xc));
    (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x18)) - (*(float *)(gen_frame + 0xc));
    (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x18)) + (*(float *)(gen_frame + 0xc));
    if (**(int * PTR32 *)((int)this + 0x174) != 0) {
      do {
        fVar2 = *((float *)GEN_TOP((iVar6 + 8 + *(int *)((int)this + 0x17c))));
        puVar1 = ((undefined4 *)GEN_TOP((iVar6 + *(int *)((int)this + 0x17c))));
        if (((((GEN_ISNAN(fVar2) || GEN_ISNAN((*(float *)(gen_frame + 0x20)))) || fVar2 <= (*(float *)(gen_frame + 0x20))) &&
             ((GEN_ISNAN(gen_bits2f(puVar1[3])) || GEN_ISNAN((*(float *)(gen_frame + 0x10)))) || gen_bits2f(puVar1[3]) <= (*(float *)(gen_frame + 0x10))))
            && ((GEN_ISNAN((*(float *)(gen_frame + 0x1c))) || GEN_ISNAN(gen_bits2f(puVar1[4]))) || (*(float *)(gen_frame + 0x1c)) <= gen_bits2f(puVar1[4])
               )) && ((GEN_ISNAN((*(float *)(gen_frame + 0x14))) || GEN_ISNAN(gen_bits2f(puVar1[5]))) ||
                      (*(float *)(gen_frame + 0x14)) <= gen_bits2f(puVar1[5]))) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (puVar1[1] == 0) {
          if (!bVar3) {
            F_00c472af(((undefined1 *)(gen_frame + 0x28)),0x100,"%s/tr%04d.pcb",(int)this + 0x6c,*puVar1);
            uVar5 = F_00ca1260(*(undefined * PTR32 *)((int)this + 0x34),*(undefined4 *)((int)this + 0x44),
                                 ((undefined1 *)(gen_frame + 0x28)),0);
            *((uint *)GEN_TOP((iVar6 + 4 + *(int *)((int)this + 0x17c)))) = uVar5;
            bVar4 = F_00c9da60(this);
            F_00c9da30(*((undefined4 *)GEN_TOP((iVar6 + 4 + *(int *)((int)this + 0x17c)))),(uint)bVar4);
          }
        }
        else {
          bVar4 = F_00c9da60(this);
          F_00c9da30(*((undefined4 *)GEN_TOP((iVar6 + 4 + *(int *)((int)this + 0x17c)))),(uint)bVar4);
          F_00c9f290(*((undefined * PTR32 *)GEN_TOP((iVar6 + 4 + *(int *)((int)this + 0x17c)))),
                       (uint)*(byte *)((int)this + 0x54));
          uVar5 = F_00c9da20(this);
          F_00c9da10(*((undefined4 *)GEN_TOP((iVar6 + 4 + *(int *)((int)this + 0x17c)))),uVar5);
          if (bVar3) {
            F_00c9fa90(*((undefined4 *)GEN_TOP((iVar6 + 4 + *(int *)((int)this + 0x17c)))));
            *((undefined4 *)GEN_TOP((iVar6 + 4 + *(int *)((int)this + 0x17c)))) = 0;
          }
        }
        uVar5 = (*(uint *)(gen_frame + 0x24)) + 1;
        iVar6 = iVar6 + 0x18;
        (*(uint *)(gen_frame + 0x24)) = uVar5;
      } while (uVar5 < **(uint * PTR32 *)((int)this + 0x174));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c));
  return uVar5 & 0xffffff00;
}

/* ref: FUN_00ca2430 */
uint F_00ca2430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xca2430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1);
  if ((char)uVar2 == '\0') {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
    *(uint *)((int)this + 0x10c) = uVar2;
    *(uint *)((int)this + 0x110) = uVar2 + 0x20;
    uVar2 = F_00c96f50(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + -0x34) + 4))));
    uVar5 = 0;
    *(uint *)((int)this + 0x114) = uVar2;
    if (**(int * PTR32 *)((int)this + 0x10c) != 0) {
      iVar3 = 0;
      iVar4 = 0;
      do {
        *((undefined4 *)GEN_TOP((iVar3 + *(int *)((int)this + 0x114)))) =
             *((undefined4 *)GEN_TOP((iVar4 + *(int *)((int)this + 0x110))));
        *((undefined4 *)GEN_TOP((iVar3 + 4 + *(int *)((int)this + 0x114)))) = 0;
        *((undefined4 *)GEN_TOP((iVar3 + 8 + *(int *)((int)this + 0x114)))) =
             *((undefined4 *)GEN_TOP((iVar4 + 4 + *(int *)((int)this + 0x110))));
        *((undefined4 *)GEN_TOP((iVar3 + 0xc + *(int *)((int)this + 0x114)))) =
             *((undefined4 *)GEN_TOP((iVar4 + 0xc + *(int *)((int)this + 0x110))));
        *((undefined4 *)GEN_TOP((iVar3 + 0x10 + *(int *)((int)this + 0x114)))) =
             *((undefined4 *)GEN_TOP((iVar4 + 0x10 + *(int *)((int)this + 0x110))));
        *((undefined4 *)GEN_TOP((iVar3 + 0x14 + *(int *)((int)this + 0x114)))) =
             *((undefined4 *)GEN_TOP((iVar4 + 0x18 + *(int *)((int)this + 0x110))));
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x20;
        iVar3 = iVar3 + 0x18;
      } while (uVar5 < **(uint * PTR32 *)((int)this + 0x10c));
    }
    piVar1 = ((int *)GEN_TOP((*(int *)((int)this + -0x34) + 0x20)));
    *piVar1 = *piVar1 + -1;
    *(int *)((int)this + -0x38) = *(int *)((int)this + -0x38) + -1;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + -0x68) + 0x48))))((int)this + -0x68);
    *(undefined1 *)((int)this + 0x108) = 1;
  }
  return uVar2;
}

/* ref: FUN_00ca2550 */
unsigned int F_00ca2550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xca2550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00ca2560 */
uint F_00ca2560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xca2560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  char * _Dst;
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  F_00c96ab0(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  _Dst = (char *)((int)this + 0x6c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[30])REFP(0x1129120));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1129118));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[1])REFP(0x1129114));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x1129110));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[2])REFP(0x1129108));
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined1 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  F_00c48350(_Dst,0x88,0x100);
  F_00c49908(_Dst,0x100,param_3);
  cVar1 = *_Dst;
  iVar4 = 0;
  iVar2 = 0;
  while (cVar1 != '\0') {
    bVar5 = cVar1 == '/';
    cVar1 = *(char *)((int)this + iVar2 + 0x6d);
    if (bVar5) {
      iVar4 = iVar2;
    }
    iVar2 = iVar2 + 1;
  }
  *(undefined1 *)(iVar4 + 0x6c + (int)this) = 0;
  uVar3 = F_00c96f70(*(undefined * PTR32 *)(param_1 + 4));
  *(uint *)((int)this + 0x16c) = uVar3;
  *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + 1;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return (uint)this;
}

/* ref: FUN_00ca2640 */
unsigned int F_00ca2640(unsigned int gen_a0)
{
  GEN_ENTER(0xca2640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[30])REFP(0x1129120));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1129118));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[1])REFP(0x1129114));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x1129110));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[2])REFP(0x1129108));
  if ((*(int *)((int)this + 0x16c) != 0) &&
     (F_00c96f90(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x34) + 4)))), *(char *)((int)this + 0x170) == '\0'
     )) {
    piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0x34) + 0x20)));
    *piVar1 = *piVar1 + -1;
  }
  if (*(int *)((int)this + 0x17c) != 0) {
    uVar3 = 0;
    if (**(int * PTR32 *)((int)this + 0x174) != 0) {
      iVar4 = 0;
      do {
        iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x17c) + 4 + iVar4)));
        if (iVar2 != 0) {
          F_00c9fa90(iVar2);
        }
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 0x18;
      } while (uVar3 < **(uint * PTR32 *)((int)this + 0x174));
    }
    F_00c96f60(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x34) + 4))));
    *(undefined4 *)((int)this + 0x17c) = 0;
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  F_00c96c00(this);
  return 0;
}

/* ref: FUN_00ca2700 */
unsigned int F_00ca2700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xca2700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00ca2710 */
uint F_00ca2710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xca2710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((*(uint *)&REFG(undefined, 0x15d76b0) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d76b0) = *(uint *)&REFG(undefined, 0x15d76b0) | 1;
    REFG(float, 0x15d76a4) = 0;
    REFG(float, 0x15d76a8) = 0;
    REFG(float, 0x15d76ac) = 0;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x15d76a4));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x15d76a8));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x15d76ac));
  return (uint)param_1;
}

/* ref: FUN_00ca2770 */
unsigned int F_00ca2770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xca2770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1097b10);
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1097b10));
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  uVar1 = REFG(float, 0x1090998);
  param_1[3] = GEN_FLT_TO(param_1[3], REFG(float, 0x1090998));
  param_1[4] = uVar1;
  param_1[5] = uVar1;
  return 0;
}

/* ref: FUN_00ca27b0 */
unsigned int F_00ca27b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xca27b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00ca27c0 */
unsigned int F_00ca27c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xca27c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00ca27d0 */
unsigned int F_00ca27d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xca27d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00ca27e0 */
unsigned int F_00ca27e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xca27e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00ca27f0 */
unsigned int F_00ca27f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xca27f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

