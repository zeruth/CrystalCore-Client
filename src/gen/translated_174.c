#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00dd6380 */
uint F_00dd6380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00dd63b0 */
uint F_00dd63b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd63b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if ((*(uint *)this & 0xfffffffe) == 0) {
    return -(uint)(param_1 != 0);
  }
  if (param_1 != 0) {
    uVar1 = F_00da0d20(*(uint *)this & 0xfffffffe,param_1);
    return uVar1;
  }
  return 1;
}

/* ref: FUN_00dd6470 */
unsigned int F_00dd6470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd6470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = param_2;
  puVar2 = param_1;
  if (0 < param_2) {
    do {
      if (puVar2 != (undefined4 *)0x0) {
        if ((undefined *)*param_3 != (undefined *)0x0) {
          F_00d919e0((undefined *)*param_3);
        }
        *puVar2 = *param_3;
      }
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00dd64b0 */
unsigned int F_00dd64b0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd64b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00dd64e0 */
uint F_00dd64e0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd64e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00dd6510 */
uint F_00dd6510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6510u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dd6550 */
uint F_00dd6550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd6550u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00dd65a0 */
uint F_00dd65a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd65a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dd65e0 */
uint F_00dd65e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd65e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dd6630 */
unsigned int F_00dd6630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6630u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dd66a0 */
uint F_00dd66a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd66a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dd6710 */
uint F_00dd6710(unsigned int gen_a0)
{
  GEN_ENTER(0xdd6710u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dd6780 */
uint F_00dd6780(unsigned int gen_a0)
{
  GEN_ENTER(0xdd6780u, gen_a0, 0u, 0u, 0u);
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

/* ref: hkMemoryMeshMaterial::vf2 */
uint F_00dd67f0(void)
{
  GEN_ENTER(0xdd67f0u, 0u, 0u, 0u, 0u);
  return 0x15e284c;
}

/* ref: FUN_00dd6800 */
uint F_00dd6800(unsigned int gen_a0)
{
  GEN_ENTER(0xdd6800u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00dd6830 */
uint F_00dd6830(unsigned int gen_a0)
{
  GEN_ENTER(0xdd6830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0x10) + -1;
  iVar1 = *(int *)((int)this + 0xc);
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < *(int *)((int)this + 0x14)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),*(int *)((int)this + 0x14) * 4
              );
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  uVar2 = F_00d91510((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: hkMemoryMeshMaterial::vf0 */
uint F_00dd68b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd68b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00dd6830(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dd6900 */
uint F_00dd6900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6900u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00dd6940 */
unsigned int F_00dd6940(unsigned int gen_a0)
{
  GEN_ENTER(0xdd6940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00dd6960 */
unsigned int F_00dd6960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6960u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dd69c0 */
unsigned int F_00dd69c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd69c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00dd69e0 */
unsigned int F_00dd69e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd69e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dd6a40 */
uint F_00dd6a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6a40u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00dd6a60 */
uint F_00dd6a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd6a60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = param_3;
  if (param_3 < 0) {
    iVar3 = *(int *)((int)this + 4);
  }
  if ((int)param_2 < iVar3) {
    piVar2 = (int *)(*(int *)this + param_2 * 4);
    uVar1 = param_2;
    do {
      if (*piVar2 == *param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while ((int)uVar1 < iVar3);
  }
  return 0xffffffff;
}

/* ref: FUN_00dd6ab0 */
uint F_00dd6ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd6ab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00d91c10(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00dd6ad0 */
uint F_00dd6ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd6ad0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00dd6b20 */
unsigned int F_00dd6b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd6b20u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00dd6b60 */
uint F_00dd6b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd6b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00dd6ba0 */
uint F_00dd6ba0(void)
{
  GEN_ENTER(0xdd6ba0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dd6bb0 */
uint F_00dd6bb0(void)
{
  GEN_ENTER(0xdd6bb0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dd6bc0 */
uint F_00dd6bc0(void)
{
  GEN_ENTER(0xdd6bc0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dd6bd0 */
uint F_00dd6bd0(void)
{
  GEN_ENTER(0xdd6bd0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dd6be0 */
uint F_00dd6be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6be0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00dd6bf0 */
uint F_00dd6bf0(void)
{
  GEN_ENTER(0xdd6bf0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dd6c00 */
unsigned int F_00dd6c00(unsigned int gen_a0)
{
  GEN_ENTER(0xdd6c00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00dd6c70 */
uint F_00dd6c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd6c70u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00dd6cb0 */
uint F_00dd6cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd6cb0u, gen_a0, gen_a1, gen_a2, 0u);
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
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00dd6cf0 */
uint F_00dd6cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd6cf0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dd6d30 */
uint F_00dd6d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6d30u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dd6d80 */
uint F_00dd6d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6d80u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dd6dc0 */
uint F_00dd6dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd6dc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00dd6df0 */
uint F_00dd6df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6df0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dd6e30 */
uint F_00dd6e30(unsigned int gen_a0)
{
  GEN_ENTER(0xdd6e30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00dd6e60 */
uint F_00dd6e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6e60u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dd6ea0 */
uint F_00dd6ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6ea0u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00dd6ee0 */
uint F_00dd6ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd6ee0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dd6f20 */
uint F_00dd6f20(unsigned int gen_a0)
{
  GEN_ENTER(0xdd6f20u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dd6f60 */
uint F_00dd6f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd6f60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[20])REFP(0x114950c));
  F_00d91350(in_ecx + 0x19,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00dd6f80 */
uint F_00dd6f80(unsigned int gen_a0)
{
  GEN_ENTER(0xdd6f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x114950c));
  if (0 < *(int *)((int)this + 0x5c)) {
    do {
      F_00d91a80(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x58) + iVar2 * 4))));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x5c));
  }
  F_00d91510((undefined *)((int)this + 100));
  uVar1 = *(uint *)((int)this + 0x60);
  *(undefined4 *)((int)this + 0x5c) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x58),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x60) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 0x54) != (undefined *)0x0) {
    uVar1 = F_00d91a80(*(undefined * PTR32 *)((int)this + 0x54));
  }
  *(undefined4 *)((int)this + 0x54) = 0;
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    uVar1 = F_00d91a80(*(undefined * PTR32 *)((int)this + 0x50));
  }
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00dd7010 */
uint F_00dd7010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdd7010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x180];
  uint * puVar1;
  int * piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  LPVOID pvVar6;
  undefined * pvVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[20])REFP(0x114950c));
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x13c)) = this;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0x80000000;
  F_00d91340((int)this + 100);
  F_00d91520((undefined *)((int)this + 100),&REFG(undefined1, 0x107fc63));
  if (param_4 != 0) {
    pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar7 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar6 + 0x2c) + 4))))
                               (*(int * PTR32 *)((int)pvVar6 + 0x2c),0x48)));
    *(undefined2 *)((int)pvVar7 + 4) = 0x48;
    pvVar7 = (undefined *)F_00dd3150(pvVar7,param_4);
    if (pvVar7 != (undefined *)0x0) {
      F_00d919e0(pvVar7);
    }
    if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
      F_00d91a80(*(undefined * PTR32 *)((int)this + 0x50));
    }
    *(undefined * PTR32 *)((int)this + 0x50) = pvVar7;
    F_00d91a80(pvVar7);
  }
  if (param_2 != (int *)0x0) {
    uVar8 = ((code *)*(gen_code32 *)(*param_2 + 0xc))(param_2);
    uVar9 = 0;
    (*(uint *)(gen_frame + 0x138)) = uVar8;
    (*(uint *)(gen_frame + 0x154)) = 0;
    (*(uint *)(gen_frame + 0x158)) = 0;
    (*(uint *)(gen_frame + 0x15c)) = 0x80000000;
    (*(uint *)(gen_frame + 0x164)) = uVar8;
    if (uVar8 != 0) {
      pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar9 = *(uint *)((int)pvVar6 + 0xc);
      uVar12 = uVar8 * 4 + 0x7f & 0xffffff80;
      if ((*(int *)((int)pvVar6 + 8) < (int)uVar12) ||
         (*(uint *)((int)pvVar6 + 0x10) < uVar12 + uVar9)) {
        uVar9 = F_00d94390(pvVar6,uVar12);
      }
      else {
        *(uint *)((int)pvVar6 + 0xc) = uVar12 + uVar9;
      }
    }
    (*(uint *)(gen_frame + 0x154)) = uVar9;
    uVar12 = uVar8 | 0x80000000;
    (*(uint *)(gen_frame + 0x134)) = uVar12;
    (*(uint *)(gen_frame + 0x15c)) = uVar12;
    (*(uint *)(gen_frame + 0x160)) = uVar9;
    (*(uint *)(gen_frame + 0x168)) = 0;
    (*(uint *)(gen_frame + 0x16c)) = 0;
    (*(uint *)(gen_frame + 0x170)) = 0x80000000;
    (*(uint *)(gen_frame + 0x178)) = uVar8;
    if (uVar8 == 0) {
      (*(uint *)(gen_frame + 0x168)) = 0;
    }
    else {
      pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar9 = *(uint *)((int)pvVar6 + 0xc);
      uVar13 = uVar8 * 4 + 0x7f & 0xffffff80;
      uVar10 = uVar9 + uVar13;
      if ((*(int *)((int)pvVar6 + 8) < (int)uVar13) || (*(uint *)((int)pvVar6 + 0x10) < uVar10)) {
        uVar9 = F_00d94390(pvVar6,uVar13);
        (*(uint *)(gen_frame + 0x168)) = uVar9;
      }
      else {
        *(uint *)((int)pvVar6 + 0xc) = uVar10;
        (*(uint *)(gen_frame + 0x168)) = uVar9;
      }
    }
    uVar9 = 0;
    (*(uint *)(gen_frame + 0x170)) = uVar12;
    (*(uint *)(gen_frame + 0x174)) = (*(uint *)(gen_frame + 0x168));
    (*(uint *)(gen_frame + 0x140)) = 0;
    (*(uint *)(gen_frame + 0x144)) = 0;
    (*(uint *)(gen_frame + 0x148)) = 0x80000000;
    (*(uint *)(gen_frame + 0x150)) = uVar8;
    if (uVar8 != 0) {
      pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar9 = *(uint *)((int)pvVar6 + 0xc);
      uVar12 = uVar8 * 4 + 0x7f & 0xffffff80;
      if ((*(int *)((int)pvVar6 + 8) < (int)uVar12) ||
         (*(uint *)((int)pvVar6 + 0x10) < uVar12 + uVar9)) {
        uVar9 = F_00d94390(pvVar6,uVar12);
        uVar12 = (*(uint *)(gen_frame + 0x134));
      }
      else {
        *(uint *)((int)pvVar6 + 0xc) = uVar12 + uVar9;
        uVar12 = (*(uint *)(gen_frame + 0x134));
      }
    }
    iVar14 = 0;
    (*(uint *)(gen_frame + 0x140)) = uVar9;
    (*(uint *)(gen_frame + 0x148)) = uVar12;
    (*(uint *)(gen_frame + 0x14c)) = uVar9;
    if (0 < (int)uVar8) {
      do {
        ((code *)*(gen_code32 *)(*param_2 + 0x10))(param_2,iVar14,2,((undefined1 *)(gen_frame + 0x10c)));
        F_00d919e0((*(undefined * PTR32 *)(gen_frame + 0x128)));
        if ((*(uint *)(gen_frame + 0x158)) == ((*(uint *)(gen_frame + 0x15c)) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x154)),4);
        }
        *(undefined * PTR32 *)((*(uint *)(gen_frame + 0x154)) + (*(uint *)(gen_frame + 0x158)) * 4) = (*(undefined * PTR32 *)(gen_frame + 0x128));
        (*(uint *)(gen_frame + 0x158)) = (*(uint *)(gen_frame + 0x158)) + 1;
        ((code *)*(gen_code32 *)(*param_2 + 0x14))(param_2,((undefined1 *)(gen_frame + 0x10c)));
        iVar14 = iVar14 + 1;
      } while (iVar14 < (int)uVar8);
    }
    param_4 = 0;
    uVar9 = (*(uint *)(gen_frame + 0x16c));
    uVar12 = (*(uint *)(gen_frame + 0x168));
    if (0 < (int)uVar8) {
      do {
        iVar14 = *(int *)((*(uint *)(gen_frame + 0x154)) + param_4 * 4);
        iVar11 = 0;
        if (0 < (int)uVar9) {
          do {
            if (*(int *)(uVar12 + iVar11 * 4) == iVar14) {
              if (-1 < iVar11) goto LAB_00dd72b7;
              break;
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < (int)uVar9);
        }
        if (uVar9 == ((*(uint *)(gen_frame + 0x170)) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x168)),4);
          uVar9 = (*(uint *)(gen_frame + 0x16c));
          uVar12 = (*(uint *)(gen_frame + 0x168));
        }
        *(int *)(uVar12 + uVar9 * 4) = iVar14;
        uVar9 = (*(uint *)(gen_frame + 0x16c)) + 1;
        (*(uint *)(gen_frame + 0x16c)) = uVar9;
        uVar12 = (*(uint *)(gen_frame + 0x168));
LAB_00dd72b7: ;
        param_4 = param_4 + 1;
      } while (param_4 < (int)uVar8);
    }
    if ((int)((*(uint *)(gen_frame + 0x148)) & 0x3fffffff) < (int)uVar9) {
      uVar8 = ((*(uint *)(gen_frame + 0x148)) & 0x3fffffff) * 2;
      uVar12 = uVar9;
      if ((int)uVar9 < (int)uVar8) {
        uVar12 = uVar8;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x140)),uVar12,4);
    }
    (*(uint *)(gen_frame + 0x144)) = uVar9;
    F_00dd7940(((undefined1 *)(gen_frame + 0x8)));
    iVar14 = 0;
    if (0 < (int)uVar9) {
      do {
        piVar2 = *(int * PTR32 *)((*(uint *)(gen_frame + 0x168)) + iVar14 * 4);
        puVar1 = (uint *)((*(uint *)(gen_frame + 0x140)) + iVar14 * 4);
        uVar8 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
        iVar14 = iVar14 + 1;
        *puVar1 = uVar8;
      } while (iVar14 < (int)uVar9);
    }
    pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x13c));
    uVar8 = (*(uint *)(gen_frame + 0x138));
    uVar9 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x60) & 0x3fffffff;
    if ((int)uVar9 < (int)(*(uint *)(gen_frame + 0x138))) {
      uVar9 = uVar9 * 2;
      if ((int)uVar9 <= (int)(*(uint *)(gen_frame + 0x138))) {
        uVar9 = (*(uint *)(gen_frame + 0x138));
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x58,uVar9,4);
    }
    *(uint *)((int)pvVar7 + 0x5c) = uVar8;
    iVar14 = 0;
    if (0 < (int)uVar8) {
      do {
        iVar11 = 0;
        if (0 < (int)(*(uint *)(gen_frame + 0x16c))) {
          do {
            if (*(int *)((*(uint *)(gen_frame + 0x168)) + iVar11 * 4) == *(int *)((*(uint *)(gen_frame + 0x154)) + iVar14 * 4))
            goto LAB_00dd7375;
            iVar11 = iVar11 + 1;
          } while (iVar11 < (int)(*(uint *)(gen_frame + 0x16c)));
        }
        iVar11 = -1;
LAB_00dd7375: ;
        pvVar7 = *(undefined * PTR32 *)((*(uint *)(gen_frame + 0x140)) + iVar11 * 4);
        F_00d919e0(pvVar7);
        *((undefined * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x58) + iVar14 * 4))) = pvVar7;
        iVar14 = iVar14 + 1;
      } while (iVar14 < (int)(*(uint *)(gen_frame + 0x138)));
    }
    F_00d91c10((*(uint *)(gen_frame + 0x154)),(*(uint *)(gen_frame + 0x158)),4);
    F_00d91c10((*(uint *)(gen_frame + 0x140)),(*(uint *)(gen_frame + 0x144)),4);
    uVar8 = (*(uint *)(gen_frame + 0x150));
    uVar9 = (*(uint *)(gen_frame + 0x14c));
    if ((*(uint *)(gen_frame + 0x14c)) == (*(uint *)(gen_frame + 0x140))) {
      (*(uint *)(gen_frame + 0x144)) = 0;
    }
    pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar8 = uVar8 * 4 + 0x7f & 0xffffff80;
    if (((*(int *)((int)pvVar6 + 8) < (int)uVar8) || (uVar8 + uVar9 != *(int *)((int)pvVar6 + 0xc)))
       || (*(uint *)((int)pvVar6 + 0x14) == uVar9)) {
      F_00d945c0(pvVar6,uVar9,uVar8);
    }
    else {
      *(uint *)((int)pvVar6 + 0xc) = uVar9;
    }
    (*(uint *)(gen_frame + 0x144)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x148))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x140)),(*(uint *)(gen_frame + 0x148)) * 4);
    }
    uVar8 = (*(uint *)(gen_frame + 0x178));
    uVar9 = (*(uint *)(gen_frame + 0x174));
    (*(uint *)(gen_frame + 0x140)) = 0;
    (*(uint *)(gen_frame + 0x148)) = 0x80000000;
    if ((*(uint *)(gen_frame + 0x174)) == (*(uint *)(gen_frame + 0x168))) {
      (*(uint *)(gen_frame + 0x16c)) = 0;
    }
    pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar8 = uVar8 * 4 + 0x7f & 0xffffff80;
    if (((*(int *)((int)pvVar6 + 8) < (int)uVar8) || (uVar8 + uVar9 != *(int *)((int)pvVar6 + 0xc)))
       || (*(uint *)((int)pvVar6 + 0x14) == uVar9)) {
      F_00d945c0(pvVar6,uVar9,uVar8);
    }
    else {
      *(uint *)((int)pvVar6 + 0xc) = uVar9;
    }
    (*(uint *)(gen_frame + 0x16c)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x170))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x168)),(*(uint *)(gen_frame + 0x170)) * 4);
    }
    uVar8 = (*(uint *)(gen_frame + 0x164));
    uVar9 = (*(uint *)(gen_frame + 0x160));
    (*(uint *)(gen_frame + 0x168)) = 0;
    (*(uint *)(gen_frame + 0x170)) = 0x80000000;
    if ((*(uint *)(gen_frame + 0x160)) == (*(uint *)(gen_frame + 0x154))) {
      (*(uint *)(gen_frame + 0x158)) = 0;
    }
    pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar8 = uVar8 * 4 + 0x7f & 0xffffff80;
    if (((*(int *)((int)pvVar6 + 8) < (int)uVar8) || (uVar8 + uVar9 != *(int *)((int)pvVar6 + 0xc)))
       || (*(uint *)((int)pvVar6 + 0x14) == uVar9)) {
      F_00d945c0(pvVar6,uVar9,uVar8);
    }
    else {
      *(uint *)((int)pvVar6 + 0xc) = uVar9;
    }
    (*(uint *)(gen_frame + 0x158)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x15c))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x154)),(*(uint *)(gen_frame + 0x15c)) * 4);
    }
  }
  pvVar7 = (*(undefined * PTR32 *)(gen_frame + 0x13c));
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x10) = *param_3;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x14) = uVar3;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x18) = uVar4;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x1c) = uVar5;
  uVar3 = param_3[5];
  uVar4 = param_3[6];
  uVar5 = param_3[7];
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x20) = param_3[4];
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x24) = uVar3;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x28) = uVar4;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x2c) = uVar5;
  uVar3 = param_3[9];
  uVar4 = param_3[10];
  uVar5 = param_3[0xb];
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x30) = param_3[8];
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x34) = uVar3;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x38) = uVar4;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x3c) = uVar5;
  uVar3 = param_3[0xd];
  uVar4 = param_3[0xe];
  uVar5 = param_3[0xf];
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x40) = param_3[0xc];
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x44) = uVar3;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x48) = uVar4;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x13c)) + 0x4c) = uVar5;
  if (param_2 != (int *)0x0) {
    F_00d919e0(param_2);
  }
  if (*(undefined * PTR32 *)((int)pvVar7 + 0x54) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)pvVar7 + 0x54));
  }
  *(int * PTR32 *)((int)pvVar7 + 0x54) = param_2;
  return (uint)pvVar7;
}

/* ref: hkMemoryMeshBody::vf15 */
uint F_00dd7590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd7590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: hkMemoryMeshBody::vf17 */
unsigned int F_00dd75a0(void)
{
  GEN_ENTER(0xdd75a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkMemoryMeshBody::vf16 */
unsigned int F_00dd75b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd75b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: hkMemoryMeshBody::vf19 */
uint F_00dd75c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd75c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d91520(this + 100,param_1);
  return uVar1;
}

/* ref: hkMemoryMeshBody::vf4 */
uint F_00dd7620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7620u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(in_ecx + 0x14);
  uVar2 = *(undefined4 *)(in_ecx + 0x18);
  uVar3 = *(undefined4 *)(in_ecx + 0x1c);
  *param_2 = *(undefined4 *)(in_ecx + 0x10);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = *(undefined4 *)(in_ecx + 0x24);
  uVar2 = *(undefined4 *)(in_ecx + 0x28);
  uVar3 = *(undefined4 *)(in_ecx + 0x2c);
  param_2[4] = *(undefined4 *)(in_ecx + 0x20);
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  uVar1 = *(undefined4 *)(in_ecx + 0x34);
  uVar2 = *(undefined4 *)(in_ecx + 0x38);
  uVar3 = *(undefined4 *)(in_ecx + 0x3c);
  param_2[8] = *(undefined4 *)(in_ecx + 0x30);
  param_2[9] = uVar1;
  param_2[10] = uVar2;
  param_2[0xb] = uVar3;
  uVar1 = *(undefined4 *)(in_ecx + 0x44);
  uVar2 = *(undefined4 *)(in_ecx + 0x48);
  uVar3 = *(undefined4 *)(in_ecx + 0x4c);
  param_2[0xc] = *(undefined4 *)(in_ecx + 0x40);
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar3;
  return (uint)param_2;
}

/* ref: hkMemoryMeshBody::vf5 */
uint F_00dd7650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7650u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(in_ecx + 0x10) = *param_2;
  *(undefined4 *)(in_ecx + 0x14) = uVar1;
  *(undefined4 *)(in_ecx + 0x18) = uVar2;
  *(undefined4 *)(in_ecx + 0x1c) = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  *(undefined4 *)(in_ecx + 0x20) = param_2[4];
  *(undefined4 *)(in_ecx + 0x24) = uVar1;
  *(undefined4 *)(in_ecx + 0x28) = uVar2;
  *(undefined4 *)(in_ecx + 0x2c) = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  *(undefined4 *)(in_ecx + 0x30) = param_2[8];
  *(undefined4 *)(in_ecx + 0x34) = uVar1;
  *(undefined4 *)(in_ecx + 0x38) = uVar2;
  *(undefined4 *)(in_ecx + 0x3c) = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  *(undefined4 *)(in_ecx + 0x40) = param_2[0xc];
  *(undefined4 *)(in_ecx + 0x44) = uVar1;
  *(undefined4 *)(in_ecx + 0x48) = uVar2;
  *(undefined4 *)(in_ecx + 0x4c) = uVar3;
  return (uint)param_2;
}

/* ref: hkMemoryMeshBody::vf6 */
uint F_00dd7680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7680u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x58) + param_2 * 4)));
}

/* ref: hkMemoryMeshBody::vf8 */
unsigned int F_00dd7690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd7690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00dd22b0(*(undefined * PTR32 *)(this + 0x50),param_1,param_2,param_3);
  return 0;
}

/* ref: hkMemoryMeshBody::vf9 */
unsigned int F_00dd76a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd76a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00dd2300(*(undefined * PTR32 *)(this + 0x50),param_1,param_2,param_3);
  return 0;
}

/* ref: hkMemoryMeshBody::vf10 */
unsigned int F_00dd76b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd76b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00dd2880(*(undefined * PTR32 *)(this + 0x50),param_1,param_2,param_3);
  return 0;
}

/* ref: hkMemoryMeshBody::vf11 */
uint F_00dd76c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd76c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x50) + 0x20)));
}

/* ref: hkMemoryMeshBody::vf12 */
uint F_00dd76d0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd76d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x50) + 0x2c)));
}

/* ref: hkMemoryMeshBody::vf13 */
uint F_00dd76e0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd76e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x50) + 0x38)));
}

/* ref: hkMemoryMeshBody::vf18 */
uint F_00dd76f0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd76f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 100) & 0xfffffffe;
}

/* ref: FUN_00dd7720 */
uint F_00dd7720(unsigned int gen_a0)
{
  GEN_ENTER(0xdd7720u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkMemoryMeshBody::vf3 */
uint F_00dd7750(unsigned int gen_a0)
{
  GEN_ENTER(0xdd7750u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x54);
}

/* ref: hkMemoryMeshBody::vf7 */
uint F_00dd7760(unsigned int gen_a0)
{
  GEN_ENTER(0xdd7760u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x50) != 0) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x50) + 0xc)));
  }
  return 0;
}

/* ref: hkMemoryMeshBody::vf14 */
uint F_00dd7770(unsigned int gen_a0)
{
  GEN_ENTER(0xdd7770u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x50) == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x50) + 0x3c)));
}

/* ref: FUN_00dd7780 */
uint F_00dd7780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7780u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dd77f0 */
uint F_00dd77f0(unsigned int gen_a0)
{
  GEN_ENTER(0xdd77f0u, gen_a0, 0u, 0u, 0u);
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

/* ref: hkMemoryMeshBody::vf0 */
uint F_00dd7880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00dd6f80(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dd78c0 */
unsigned int F_00dd78c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd78c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 0x100) = *(undefined4 *)(param_1 + 0x100);
  iVar1 = *(int *)(param_1 + 0x100);
  if (0 < iVar1) {
    iVar2 = param_1 - (int)this;
    do {
      *(undefined4 *)this = *(undefined4 *)(iVar2 + (int)this);
      *(undefined4 *)((int)this + 4) = *(undefined4 *)(iVar2 + 4 + (int)this);
      this = (undefined *)((int)this + 8);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00dd7900 */
uint F_00dd7900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da4890(param_1,"%s(%i) %s(%i)",(&REFG(undefined * PTR32, 0x114966c))[*(byte *)((int)this + 2)],
                       (uint)*(byte *)((int)this + 3),(&REFG(undefined * PTR32, 0x114963c))[*(byte *)this],
                       (uint)*(byte *)((int)this + 1));
  return uVar1;
}

/* ref: FUN_00dd7940 */
uint F_00dd7940(unsigned int gen_a0)
{
  GEN_ENTER(0xdd7940u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  *(undefined4 *)(in_ecx + 0x100) = 0;
  return in_ecx;
}

/* ref: FUN_00dd7950 */
uint F_00dd7950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00dd78c0(this,param_1);
  return (uint)this;
}

/* ref: FUN_00dd7970 */
unsigned int F_00dd7970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00dd78c0(this,param_1);
  return 0;
}

/* ref: FUN_00dd7980 */
byte F_00dd7980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  char * pcVar2;
  char * pcVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 0x100);
  if (iVar1 != *(int *)(param_1 + 0x100)) {
    return 0;
  }
  iVar4 = 0;
  if (0 < iVar1) {
    pcVar3 = (char *)(param_1 + 3);
    pcVar2 = (char *)((int)this + 1);
    do {
      if ((((pcVar2[-1] != pcVar3[-3]) || (*pcVar2 != pcVar2[param_1 - (int)this])) ||
          (pcVar2[1] != pcVar3[-1])) || ((pcVar2[2] != *pcVar3 || (pcVar3[1] != pcVar2[3])))) {
        return 0;
      }
      iVar4 = iVar4 + 1;
      pcVar3 = pcVar3 + 8;
      pcVar2 = pcVar2 + 8;
    } while (iVar4 < iVar1);
  }
  return 1;
}

/* ref: FUN_00dd7a00 */
byte F_00dd7a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  byte * pbVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0x100);
  uVar1 = 0;
  if (0 < iVar3) {
    pbVar2 = (byte *)((int)this + 3);
    do {
      if ((pbVar2[-1] == (byte)param_1) && (uVar1 < *pbVar2 + 1)) {
        uVar1 = *pbVar2 + 1;
      }
      pbVar2 = pbVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return (byte)uVar1;
}

/* ref: FUN_00dd7a40 */
uint F_00dd7a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd7a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  byte * pbVar2;
  
  uVar1 = 0;
  if (0 < *(int *)((int)this + 0x100)) {
    pbVar2 = (byte *)((int)this + 3);
    do {
      if ((pbVar2[-1] == (byte)param_1) && (*pbVar2 == param_2)) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      pbVar2 = pbVar2 + 8;
    } while ((int)uVar1 < *(int *)((int)this + 0x100));
  }
  return 0xffffffff;
}

/* ref: FUN_00dd7a80 */
byte F_00dd7a80(unsigned int gen_a0)
{
  GEN_ENTER(0xdd7a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  byte bVar2;
  byte * pbVar3;
  int iVar4;
  
  iVar4 = 1;
  if (1 < *(int *)((int)this + 0x100)) {
    pbVar3 = (byte *)((int)this + 3);
    do {
      if ((pbVar3[7] < pbVar3[-1]) ||
         ((pbVar3[7] <= pbVar3[-1] &&
          ((bVar1 = *pbVar3, bVar2 = pbVar3[8], bVar2 <= bVar1 && bVar1 != bVar2 || (bVar1 == bVar2)
           ))))) {
        return 0;
      }
      iVar4 = iVar4 + 1;
      pbVar3 = pbVar3 + 8;
    } while (iVar4 < *(int *)((int)this + 0x100));
  }
  return 1;
}

/* ref: FUN_00dd7ac0 */
uint F_00dd7ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd7ac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  if ((*(byte *)(param_3 + 2) <= *(byte *)(param_2 + 2)) &&
     (*(byte *)(param_3 + 3) <= *(byte *)(param_2 + 3))) {
    *param_1 = 0;
    return (uint)param_1;
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00dd7af0 */
unsigned int F_00dd7af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdd7af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  byte bVar2;
  
  iVar1 = *(int *)((int)this + 0x100);
  if (iVar1 < 0x20) {
    bVar2 = F_00dd7a00(this,param_1);
    *(int *)((int)this + 0x100) = iVar1 + 1;
    *(undefined1 *)((int)this + iVar1 * 8) = (undefined1)param_2;
    *(char *)((int)this + iVar1 * 8 + 2) = (char)param_1;
    *(undefined1 *)((int)this + iVar1 * 8 + 1) = (undefined1)param_3;
    *(byte *)((int)this + iVar1 * 8 + 3) = bVar2;
    *(undefined1 *)((int)this + iVar1 * 8 + 4) = (undefined1)param_4;
  }
  return 0;
}

/* ref: FUN_00dd7b40 */
unsigned int F_00dd7b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x100);
  if ((iVar1 < 0x20) &&
     (uVar2 = F_00dd7a40(this,(uint)*(byte *)((int)param_1 + 2),(uint)*(byte *)((int)param_1 + 3))
     , (int)uVar2 < 0)) {
    *(undefined4 *)((int)this + iVar1 * 8) = *param_1;
    *(undefined4 *)((int)this + iVar1 * 8 + 4) = param_1[1];
    *(int *)((int)this + 0x100) = *(int *)((int)this + 0x100) + 1;
  }
  return 0;
}

/* ref: FUN_00dd7b90 */
uint F_00dd7b90(unsigned int gen_a0)
{
  GEN_ENTER(0xdd7b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte * pbVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 0x100);
  iVar4 = 0;
  if (0 < iVar1) {
    pbVar2 = (byte *)((int)this + 4);
    iVar3 = iVar1;
    do {
      if ((*pbVar2 & 8) != 0) {
        iVar4 = iVar4 + 1;
      }
      pbVar2 = pbVar2 + 8;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (iVar4 != 0) {
      return (iVar4 != iVar1) + 1;
    }
  }
  return 0;
}

/* ref: FUN_00dd7bc0 */
uint F_00dd7bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd7bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  byte * pbVar2;
  
  uVar1 = 0;
  if (0 < *(int *)((int)this + 0x200)) {
    pbVar2 = (byte *)((int)this + 0xb);
    do {
      if ((pbVar2[-1] == (byte)param_1) && (*pbVar2 == param_2)) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      pbVar2 = pbVar2 + 0x10;
    } while ((int)uVar1 < *(int *)((int)this + 0x200));
  }
  return 0xffffffff;
}

/* ref: FUN_00dd7c00 */
byte F_00dd7c00(unsigned int gen_a0)
{
  GEN_ENTER(0xdd7c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_00dd7a80(this);
  uVar2 = (uint)bVar1;
  if ((bVar1 == 0) && (uVar2 = *(uint *)((int)this + 0x100), 1 < (int)uVar2)) {
    bVar1 = F_00dd7d20(this,0,uVar2 - 1,((code *)REFP(0xdd7ac0)));
    uVar2 = (uint)bVar1;
  }
  return (byte)uVar2;
}

/* ref: FUN_00dd7c30 */
byte F_00dd7c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7c30u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00dd7c40 */
byte F_00dd7c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7c40u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00dd7c50 */
uint F_00dd7c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7c50u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00dd7c60 */
uint F_00dd7c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7c60u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(*in_ecx & (byte)param_2);
}

/* ref: FUN_00dd7c70 */
byte F_00dd7c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  return *param_1 == *(char *)this;
}

/* ref: FUN_00dd7c90 */
uint F_00dd7c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  if ((((*(char *)this == *param_1) && (*(char *)((int)this + 1) == param_1[1])) &&
      (*(char *)((int)this + 2) == param_1[2])) &&
     ((*(char *)((int)this + 3) == param_1[3] && (param_1[4] == *(char *)((int)this + 4))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00dd7cd0 */
byte F_00dd7cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  if ((((*(char *)this == *param_1) && (*(char *)((int)this + 1) == param_1[1])) &&
      (*(char *)((int)this + 2) == param_1[2])) &&
     ((*(char *)((int)this + 3) == param_1[3] && (param_1[4] == *(char *)((int)this + 4))))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00dd7d20 */
byte F_00dd7d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd7d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  char * pcVar5;
  uint uVar7;
  uint uVar8;
  uint uVar6;
  
  do {
    iVar4 = (int)(param_2 + param_3) >> 1;
    (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(param_1 + iVar4 * 8);
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_1 + 4 + iVar4 * 8);
    uVar7 = param_3;
    uVar8 = param_2;
    do {
      pcVar5 = ((char *)GEN_TOP((*param_4)(&(*(undefined1 *)(gen_frame + 0x1f)),param_1 + uVar8 * 8,&(*(undefined4 *)(gen_frame + 0x0)))));
      if (*pcVar5 != '\0') {
        iVar4 = param_1 + uVar8 * 8;
        do {
          uVar8 = uVar8 + 1;
          (*(int *)(gen_frame + 0x18)) = iVar4 + 8;
          pcVar5 = ((char *)GEN_TOP((*param_4)(&(*(undefined1 *)(gen_frame + 0x1f)),iVar4 + 8,&(*(undefined4 *)(gen_frame + 0x0)))));
          iVar4 = (*(int *)(gen_frame + 0x18));
        } while (*pcVar5 != '\0');
      }
      pcVar5 = ((char *)GEN_TOP((*param_4)(&(*(undefined1 *)(gen_frame + 0x1e)),&(*(undefined4 *)(gen_frame + 0x0)),param_1 + uVar7 * 8)));
      if (*pcVar5 != '\0') {
        iVar4 = param_1 + uVar7 * 8;
        do {
          uVar7 = uVar7 - 1;
          (*(int *)(gen_frame + 0x18)) = iVar4 + -8;
          pcVar5 = ((char *)GEN_TOP((*param_4)(&(*(undefined1 *)(gen_frame + 0x1e)),&(*(undefined4 *)(gen_frame + 0x0)),iVar4 + -8)));
          iVar4 = (*(int *)(gen_frame + 0x18));
        } while (*pcVar5 != '\0');
      }
      if ((int)uVar7 < (int)uVar8) break;
      if (uVar7 != uVar8) {
        uVar1 = *(undefined4 *)(param_1 + 4 + uVar7 * 8);
        uVar2 = *(undefined4 *)(param_1 + uVar7 * 8);
        *(undefined4 *)(param_1 + uVar7 * 8) = *(undefined4 *)(param_1 + uVar8 * 8);
        *(undefined4 *)(param_1 + 4 + uVar7 * 8) = *(undefined4 *)(param_1 + 4 + uVar8 * 8);
        *(undefined4 *)(param_1 + uVar8 * 8) = uVar2;
        *(undefined4 *)(param_1 + 4 + uVar8 * 8) = uVar1;
      }
      uVar7 = uVar7 - 1;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 <= (int)uVar7);
    uVar6 = param_2;
    if ((int)param_2 < (int)uVar7) {
      bVar3 = F_00dd7d20(param_1,param_2,uVar7,param_4);
      uVar6 = (uint)bVar3;
    }
    param_2 = uVar8;
    if ((int)param_3 <= (int)uVar8) {
      return (byte)uVar6;
    }
  } while( true );
}

/* ref: FUN_00dd7e50 */
byte F_00dd7e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd7e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  
  uVar2 = param_2;
  if (1 < (int)param_2) {
    bVar1 = F_00dd7d20(param_1,0,param_2 - 1,param_3);
    uVar2 = (uint)bVar1;
  }
  return (byte)uVar2;
}

/* ref: FUN_00dd7e80 */
byte F_00dd7e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd7e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00dd7980(this,param_1);
  return bVar1 == 0;
}

/* ref: FUN_00dd7eb0 */
uint F_00dd7eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd7eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == param_3) {
    uVar1 = F_00da1030(param_1,0,param_3 * param_4);
    return uVar1;
  }
  puVar3 = (undefined4 *)(param_3 * param_4 + (int)param_1);
  uVar1 = param_3;
  if ((param_3 & 3) == 0) {
    switch((unsigned int)(uintptr_t)((int)param_3 >> 2)) {
    case 1: ;
      puVar2 = param_1;
      if (param_1 != puVar3) {
        do {
          *puVar2 = 0;
          puVar2 = (undefined4 *)((int)puVar2 + param_2);
        } while (puVar2 != puVar3);
        return param_3;
      }
      break;
    case 2: ;
      puVar2 = param_1;
      if (param_1 != puVar3) {
        do {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined4 *)((int)puVar2 + param_2);
        } while (puVar2 != puVar3);
        return param_3;
      }
      break;
    case 3: ;
      puVar2 = param_1;
      if (param_1 != puVar3) {
        do {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
          puVar2 = (undefined4 *)((int)puVar2 + param_2);
        } while (puVar2 != puVar3);
        return 0;
      }
      break;
    case 4: ;
      if (param_1 != puVar3) {
        puVar2 = param_1 + 2;
        do {
          puVar2[-2] = 0;
          puVar2[-1] = 0;
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined4 *)((int)puVar2 + param_2);
        } while (puVar2 + -2 != puVar3);
        return (uint)puVar2;
      }
      break;
    default: ;
      goto switchD_00dd7f00_default;
    }
  }
  else {
switchD_00dd7f00_default: ;
    for (puVar2 = param_1; puVar2 != puVar3; puVar2 = (undefined4 *)((int)puVar2 + param_2)) {
      uVar1 = F_00da1030(puVar2,0,param_3);
    }
  }
  return uVar1;
}

/* ref: FUN_00dd7fc0 */
uint F_00dd7fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xdd7fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint param_5 = (uint)gen_a4;
  int param_6 = (int)gen_a5;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  if (param_5 == 0) {
    return 0;
  }
  if ((param_2 == param_4) && (param_2 == param_5)) {
    uVar1 = F_00da1010(param_3,param_1,param_5 * param_6);
    return uVar1;
  }
  if ((param_5 & 3) == 0) {
    puVar2 = (undefined4 *)(param_2 * param_6 + (int)param_1);
    switch((unsigned int)(uintptr_t)((int)param_5 >> 2)) {
    case 1: ;
      puVar4 = param_1;
      puVar5 = param_3;
      if (param_1 != puVar2) {
        do {
          *puVar5 = *puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + param_2);
          puVar5 = (undefined4 *)((int)puVar5 + param_4);
        } while (puVar4 != puVar2);
        return (uint)puVar2;
      }
      break;
    case 2: ;
      puVar4 = param_1;
      puVar5 = param_3;
      if (param_1 != puVar2) {
        do {
          *puVar5 = *puVar4;
          puVar5[1] = puVar4[1];
          puVar4 = (undefined4 *)((int)puVar4 + param_2);
          puVar5 = (undefined4 *)((int)puVar5 + param_4);
        } while (puVar4 != puVar2);
        return (uint)puVar2;
      }
      break;
    case 3: ;
      if (param_1 != puVar2) {
        puVar5 = param_3 + 2;
        puVar4 = param_1;
        do {
          puVar5[-2] = *puVar4;
          puVar5[-1] = puVar4[1];
          *puVar5 = puVar4[2];
          puVar4 = (undefined4 *)((int)puVar4 + param_2);
          puVar5 = (undefined4 *)((int)puVar5 + param_4);
        } while (puVar4 != puVar2);
        return (uint)puVar2;
      }
      break;
    case 4: ;
      if (param_1 != puVar2) {
        puVar5 = param_3 + 2;
        puVar4 = param_1 + 2;
        do {
          puVar5[-2] = puVar4[-2];
          puVar5[-1] = puVar4[-1];
          *puVar5 = *puVar4;
          puVar3 = puVar4 + 1;
          puVar4 = (undefined4 *)((int)puVar4 + param_2);
          puVar5[1] = *puVar3;
          puVar5 = (undefined4 *)((int)puVar5 + param_4);
        } while (puVar4 + -2 != puVar2);
        return (uint)puVar2;
      }
      break;
    default: ;
      goto switchD_00dd801e_default;
    }
  }
  else {
switchD_00dd801e_default: ;
    puVar3 = (undefined4 *)(param_2 * param_6 + (int)param_1);
    puVar2 = puVar3;
    puVar5 = param_3;
    for (puVar4 = param_1; puVar4 != puVar3; puVar4 = (undefined4 *)((int)puVar4 + param_2)) {
      puVar2 = (undefined4 *)F_00da1010(puVar5,puVar4,param_5);
      puVar5 = (undefined4 *)((int)puVar5 + param_4);
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00dd8170 */
uint F_00dd8170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd8170u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int * in_ecx = (int *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint local_8;
  
  iVar2 = in_eax[1];
  iVar3 = in_ecx[1];
  iVar6 = *in_ecx;
  iVar5 = *in_eax;
  bVar1 = *(byte *)((int)in_ecx + 9);
  uVar4 = CONCAT31((int3)((uint)iVar2 >> 8),bVar1);
  if (bVar1 == *(byte *)((int)in_eax + 9)) {
    uVar4 = param_3;
    if (0 < (int)param_3) {
      local_8 = param_3;
      do {
        uVar4 = 0;
        if (bVar1 != 0) {
          do {
            *(ushort *)(iVar5 + uVar4 * 2) = (ushort)*(byte *)(uVar4 + iVar6);
            uVar4 = uVar4 + 1;
          } while ((int)uVar4 < (int)(uint)bVar1);
        }
        iVar5 = iVar5 + iVar2;
        iVar6 = iVar6 + iVar3;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
  }
  return uVar4;
}

/* ref: FUN_00dd81d0 */
uint F_00dd81d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd81d0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int * in_ecx = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = in_eax[1];
  iVar3 = in_ecx[1];
  iVar6 = *in_ecx;
  bVar1 = *(byte *)((int)in_ecx + 9);
  iVar4 = *in_eax;
  if ((bVar1 == *(byte *)((int)in_eax + 9)) && (iVar5 = param_3, 0 < param_3)) {
    do {
      in_eax = (int *)0x0;
      if (bVar1 != 0) {
        do {
          *(undefined1 *)((int)in_eax + iVar4) = *(undefined1 *)(iVar6 + (int)((int)(uintptr_t)in_eax) * 2);
          in_eax = (int *)((int)in_eax + 1);
        } while ((int)in_eax < (int)(uint)bVar1);
      }
      iVar4 = iVar4 + iVar2;
      iVar6 = iVar6 + iVar3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return (uint)in_eax;
}

/* ref: FUN_00dd8270 */
uint F_00dd8270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd8270u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  
  F_00dd7940(((undefined1 *)(gen_frame + 0x8)));
  ((code *)*(gen_code32 *)(*param_2 + 0x14))(param_2,((undefined1 *)(gen_frame + 0x8)));
  uVar1 = F_00dd7a40(((undefined1 *)(gen_frame + 0x8)),1,0);
  if ((int)uVar1 < 0) {
    uVar1 = F_00dd7a40(((undefined1 *)(gen_frame + 0x8)),2,0);
    if ((int)uVar1 < 0) {
      uVar1 = F_00dd7a40(((undefined1 *)(gen_frame + 0x8)),4,0);
      if ((int)uVar1 < 0) {
        uVar1 = F_00dd7a40(((undefined1 *)(gen_frame + 0x8)),5,0);
        if ((int)uVar1 < 0) {
          *param_1 = 0;
          return (uint)param_1;
        }
      }
    }
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00dd8300 */
uint F_00dd8300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdd8300u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  uint uVar2;
  
  F_00dd7940(((undefined1 *)(gen_frame + 0x8)));
  ((code *)*(gen_code32 *)(*param_2 + 0x14))(param_2,((undefined1 *)(gen_frame + 0x8)));
  uVar1 = F_00dd7a40(((undefined1 *)(gen_frame + 0x8)),7,0);
  uVar2 = F_00dd7a40(((undefined1 *)(gen_frame + 0x8)),6,0);
  if ((int)uVar2 < 0) {
    uVar2 = F_00dd7a40(((undefined1 *)(gen_frame + 0x8)),8,0);
  }
  if ((-1 < (int)uVar1) && (-1 < (int)uVar2)) {
    *param_1 = 1;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00dd8390 */
unsigned int F_00dd8390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd8390u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * puVar1;
  
  puVar1 = &(*(undefined4 *)&gen_args[1]);
  if ((byte)(*(undefined4 *)&gen_args[1]) <= (byte)(*(undefined4 *)&gen_args[2])) {
    puVar1 = &(*(undefined4 *)&gen_args[2]);
  }
  *(*(undefined1 * PTR32 *)&gen_args[0]) = *(undefined1 *)puVar1;
  return 0;
}

/* ref: FUN_00dd83b0 */
uint F_00dd83b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdd83b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  char cVar8;
  float * pfVar9;
  float * pfVar10;
  int iVar11;
  char local_c;
  
  fVar6 = *(float *)&REFG(undefined, 0x11496ec);
  fVar5 = *(float *)&REFG(undefined, 0x11496e8);
  fVar4 = *(float *)&REFG(undefined, 0x11496e4);
  fVar3 = *(float *)&REFG(undefined, 0x11496e0);
  uVar1 = *(undefined4 *)(param_1 + 8);
  local_c = (char)uVar1;
  bVar7 = (byte)((uint)uVar1 >> 8);
  cVar8 = local_c;
  if ((((char)((uint)uVar1 >> 0x10) == '\x03') && (bVar7 == 4)) && (local_c == '\x02')) {
    cVar8 = '\b';
  }
  if (cVar8 == '\b') {
    iVar11 = 0;
    pfVar9 = param_3;
    if (0 < param_4) {
      do {
        uVar2 = *((uint *)GEN_TOP((*(int *)(param_2 + iVar11 * 4) * *(int *)(param_1 + 4) + *(int *)param_1)));
        iVar11 = iVar11 + 1;
        *pfVar9 = (float)(uVar2 & 0xff) * fVar3;
        pfVar9[1] = (float)(uVar2 >> 8 & 0xff) * fVar4;
        pfVar9[2] = (float)(uVar2 >> 0x10 & 0xff) * fVar5;
        pfVar9[3] = (float)(uVar2 >> 0x18) * fVar6;
        pfVar9 = pfVar9 + 4;
      } while (iVar11 < param_4);
    }
  }
  else {
    if (cVar8 != '\n') {
      return 1;
    }
    if (4 < bVar7) {
      bVar7 = 4;
    }
    switch((unsigned int)(uintptr_t)(bVar7)) {
    case 1: ;
      iVar11 = 0;
      if (0 < param_4) {
        pfVar9 = param_3 + 2;
        do {
          pfVar9[-2] = *((float *)GEN_TOP((*(int *)(param_2 + iVar11 * 4) * *(int *)(param_1 + 4) +
                                 *(int *)param_1)));
          pfVar9[-1] = 0.0;
          *pfVar9 = 0.0;
          pfVar9[1] = 0.0;
          iVar11 = iVar11 + 1;
          pfVar9 = pfVar9 + 4;
        } while (iVar11 < param_4);
        return 0;
      }
      break;
    case 2: ;
      iVar11 = 0;
      if (0 < param_4) {
        pfVar9 = param_3 + 2;
        do {
          pfVar10 = ((float *)GEN_TOP((*(int *)(param_2 + iVar11 * 4) * *(int *)(param_1 + 4) +
                             *(int *)param_1)));
          iVar11 = iVar11 + 1;
          pfVar9[-2] = *pfVar10;
          pfVar9[-1] = pfVar10[1];
          *pfVar9 = 0.0;
          pfVar9[1] = 0.0;
          pfVar9 = pfVar9 + 4;
        } while (iVar11 < param_4);
        return 0;
      }
      break;
    case 3: ;
      iVar11 = 0;
      if (0 < param_4) {
        pfVar9 = param_3 + 2;
        do {
          pfVar10 = ((float *)GEN_TOP((*(int *)(param_2 + iVar11 * 4) * *(int *)(param_1 + 4) +
                             *(int *)param_1)));
          iVar11 = iVar11 + 1;
          pfVar9[-2] = *pfVar10;
          pfVar9[-1] = pfVar10[1];
          *pfVar9 = pfVar10[2];
          pfVar9[1] = 0.0;
          pfVar9 = pfVar9 + 4;
        } while (iVar11 < param_4);
        return 0;
      }
      break;
    case 4: ;
      iVar11 = 0;
      if (0 < param_4) {
        pfVar9 = param_3 + 2;
        do {
          pfVar10 = ((float *)GEN_TOP((*(int *)(param_2 + iVar11 * 4) * *(int *)(param_1 + 4) +
                             *(int *)param_1)));
          iVar11 = iVar11 + 1;
          pfVar9[-2] = *pfVar10;
          pfVar9[-1] = pfVar10[1];
          *pfVar9 = pfVar10[2];
          pfVar9[1] = pfVar10[3];
          pfVar9 = pfVar9 + 4;
        } while (iVar11 < param_4);
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00dd8600 */
uint F_00dd8600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd8600u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float * pfVar6;
  uint * puVar7;
  int iVar8;
  uint uVar9;
  
  fVar5 = *(float *)&REFG(undefined, 0x11496ec);
  fVar4 = *(float *)&REFG(undefined, 0x11496e8);
  fVar3 = *(float *)&REFG(undefined, 0x11496e4);
  fVar2 = *(float *)&REFG(undefined, 0x11496e0);
  if (*(char *)(param_1 + 8) == '\b') {
    iVar1 = *(int *)(param_1 + 4);
    puVar7 = *(uint * PTR32 *)param_1;
    pfVar6 = param_2;
    iVar8 = param_3;
    if (0 < param_3) {
      do {
        uVar9 = *puVar7;
        puVar7 = (uint *)((int)puVar7 + iVar1);
        iVar8 = iVar8 + -1;
        *pfVar6 = (float)(uVar9 & 0xff) * fVar2;
        pfVar6[1] = (float)(uVar9 >> 8 & 0xff) * fVar3;
        pfVar6[2] = (float)(uVar9 >> 0x10 & 0xff) * fVar4;
        pfVar6[3] = (float)(uVar9 >> 0x18) * fVar5;
        pfVar6 = pfVar6 + 4;
      } while (iVar8 != 0);
    }
    return 0;
  }
  if (*(char *)(param_1 + 8) != '\n') {
    return 1;
  }
  uVar9 = (uint)*(byte *)(param_1 + 9);
  pfVar6 = param_2;
  iVar1 = param_3;
  if (uVar9 < 4) {
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      *pfVar6 = 0.0;
      pfVar6[1] = 0.0;
      pfVar6[2] = 0.0;
      pfVar6[3] = 0.0;
      pfVar6 = pfVar6 + 4;
    }
  }
  if (4 < uVar9) {
    uVar9 = 4;
  }
  F_00dd7fc0(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),param_2,0x10,uVar9 * 4,param_3);
  return 0;
}

/* ref: FUN_00dd8890 */
uint F_00dd8890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd8890u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint * puVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = *(int *)(param_2 * 0x10 + param_1);
  iVar3 = param_2 * 0x10 + param_1;
  param_1 = *(int *)(param_1 + 0x204);
  iVar1 = *(int *)(iVar3 + 4);
  uVar6 = (uint)*(byte *)(iVar3 + 9);
  param_2 = param_1;
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(iVar3 + 8))) {
  case 1: ;
    puVar4 = param_3;
    if (0 < param_1) {
      do {
        iVar3 = 0;
        if (uVar6 != 0) {
          do {
            *puVar4 = (int)*(char *)(iVar3 + iVar5);
            iVar3 = iVar3 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar3 < (int)uVar6);
        }
        iVar5 = iVar5 + iVar1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      return 0;
    }
    break;
  case 2: ;
    puVar4 = param_3;
    if (0 < param_1) {
      do {
        iVar3 = 0;
        if (uVar6 != 0) {
          do {
            *puVar4 = (uint)*(byte *)(iVar3 + iVar5);
            iVar3 = iVar3 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar3 < (int)uVar6);
        }
        iVar5 = iVar5 + iVar1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      return 0;
    }
    break;
  case 3: ;
    puVar4 = param_3;
    if (0 < param_1) {
      do {
        iVar3 = 0;
        if (uVar6 != 0) {
          do {
            *puVar4 = (int)*(short *)(iVar5 + iVar3 * 2);
            iVar3 = iVar3 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar3 < (int)uVar6);
        }
        iVar5 = iVar5 + iVar1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      return 0;
    }
    break;
  case 4: ;
    puVar4 = param_3;
    if (0 < param_1) {
      do {
        iVar3 = 0;
        if (uVar6 != 0) {
          do {
            *puVar4 = (uint)*(ushort *)(iVar5 + iVar3 * 2);
            iVar3 = iVar3 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar3 < (int)uVar6);
        }
        iVar5 = iVar5 + iVar1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      return 0;
    }
    break;
  case 5: ;
    puVar4 = param_3;
    if (0 < param_1) {
      do {
        iVar3 = 0;
        if (uVar6 != 0) {
          do {
            *puVar4 = *(uint *)(iVar5 + iVar3 * 4);
            iVar3 = iVar3 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar3 < (int)uVar6);
        }
        iVar5 = iVar5 + iVar1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      return 0;
    }
    break;
  case 6: ;
    puVar4 = param_3;
    if (0 < param_1) {
      do {
        iVar3 = 0;
        if (uVar6 != 0) {
          do {
            *puVar4 = *(uint *)(iVar5 + iVar3 * 4);
            iVar3 = iVar3 + 1;
            puVar4 = puVar4 + 1;
          } while (iVar3 < (int)uVar6);
        }
        iVar5 = iVar5 + iVar1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      return 0;
    }
    break;
  case 7: ;
    puVar4 = param_3;
    if (0 < param_1) {
      do {
        iVar3 = 0;
        if (uVar6 != 0) {
          do {
            uVar2 = *(uint *)(iVar5 + iVar3 * 4);
            *puVar4 = uVar2 & 0xff;
            puVar4[1] = uVar2 >> 8 & 0xff;
            puVar4[2] = uVar2 >> 0x10 & 0xff;
            puVar4[3] = uVar2 >> 0x18;
            iVar3 = iVar3 + 1;
            puVar4 = puVar4 + 4;
          } while (iVar3 < (int)uVar6);
        }
        iVar5 = iVar5 + iVar1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    break;
  default: ;
    return 1;
  }
  return 0;
}

/* ref: FUN_00dd8a80 */
uint F_00dd8a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd8a80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = *(int *)(param_2 * 0x10 + 4 + param_1);
  piVar2 = (int *)(param_2 * 0x10 + param_1);
  param_1 = *(int *)(param_1 + 0x204);
  iVar5 = *piVar2;
  uVar6 = (uint)*(byte *)((int)piVar2 + 9);
  param_2 = param_1;
  switch((unsigned int)(uintptr_t)((char)piVar2[2])) {
  case '\x01': ;
    puVar3 = param_3;
    if (0 < param_1) {
      do {
        iVar4 = 0;
        if (uVar6 != 0) {
          do {
            *(undefined1 *)(iVar4 + iVar5) = *(undefined1 *)puVar3;
            iVar4 = iVar4 + 1;
            puVar3 = puVar3 + 1;
          } while (iVar4 < (int)uVar6);
        }
        iVar5 = iVar5 + iVar1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      return 0;
    }
    break;
  case '\x02': ;
    puVar3 = param_3;
    if (0 < param_1) {
      do {
        iVar4 = 0;
        if (uVar6 != 0) {
          do {
            *(undefined1 *)(iVar4 + iVar5) = *(undefined1 *)puVar3;
            iVar4 = iVar4 + 1;
            puVar3 = puVar3 + 1;
          } while (iVar4 < (int)uVar6);
        }
        iVar5 = iVar5 + iVar1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      return 0;
    }
    break;
  case '\x03': ;
    puVar3 = param_3;
    if (0 < param_1) {
      do {
        iVar4 = 0;
        if (uVar6 != 0) {
          do {
            *(undefined2 *)(iVar5 + iVar4 * 2) = *(undefined2 *)puVar3;
            iVar4 = iVar4 + 1;
            puVar3 = puVar3 + 1;
          } while (iVar4 < (int)uVar6);
        }
        iVar5 = iVar5 + iVar1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      return 0;
    }
    break;
  case '\x04': ;
    puVar3 = param_3;
    if (0 < param_1) {
      do {
        iVar4 = 0;
        if (uVar6 != 0) {
          do {
            *(undefined2 *)(iVar5 + iVar4 * 2) = *(undefined2 *)puVar3;
            iVar4 = iVar4 + 1;
            puVar3 = puVar3 + 1;
          } while (iVar4 < (int)uVar6);
        }
        iVar5 = iVar5 + iVar1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      return 0;
    }
    break;
  case '\x05': ;
    puVar3 = param_3;
    if (0 < param_1) {
      do {
        iVar4 = 0;
        if (uVar6 != 0) {
          do {
            *(undefined4 *)(iVar5 + iVar4 * 4) = *puVar3;
            iVar4 = iVar4 + 1;
            puVar3 = puVar3 + 1;
          } while (iVar4 < (int)uVar6);
        }
        iVar5 = iVar5 + iVar1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      return 0;
    }
    break;
  case '\x06': ;
    puVar3 = param_3;
    if (0 < param_1) {
      do {
        iVar4 = 0;
        if (uVar6 != 0) {
          do {
            *(undefined4 *)(iVar5 + iVar4 * 4) = *puVar3;
            iVar4 = iVar4 + 1;
            puVar3 = puVar3 + 1;
          } while (iVar4 < (int)uVar6);
        }
        iVar5 = iVar5 + iVar1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
      return 0;
    }
    break;
  case '\a': ;
    puVar3 = param_3;
    if (0 < param_1) {
      do {
        iVar4 = 0;
        if (uVar6 != 0) {
          do {
            *(uint *)(iVar5 + iVar4 * 4) =
                 CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)puVar3,*(undefined1 *)(puVar3 + 1)),
                                   *(undefined1 *)(puVar3 + 2)),*(undefined1 *)(puVar3 + 3));
            iVar4 = iVar4 + 1;
            puVar3 = puVar3 + 4;
          } while (iVar4 < (int)uVar6);
        }
        iVar5 = iVar5 + iVar1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
    break;
  default: ;
    return 1;
  }
  return 0;
}

/* ref: FUN_00dd8c60 */
uint F_00dd8c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd8c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dd7fc0(*param_1,param_1[1],*param_2,param_2[1],
                       (uint)(byte)(&REFG(undefined, 0x114962c))[*(byte *)(param_1 + 2)] *
                       (uint)*(byte *)((int)param_1 + 9) + 3 & 0xfffffffc,param_3);
  return uVar1;
}

/* ref: FUN_00dd8ca0 */
uint F_00dd8ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd8ca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined1 * in_EAX = 0;
  byte bVar7;
  int iVar8;
  uint uVar9;
  undefined4 * puVar10;
  int local_c;
  int local_8;
  
  if (((*(char *)((int)param_1 + 9) == *(char *)((int)param_2 + 9)) &&
      (*(char *)(param_1 + 2) == '\a')) && (*(char *)(param_2 + 2) == '\x02')) {
    in_EAX = (undefined1 *)*param_2;
    iVar1 = param_2[1];
    iVar2 = param_1[1];
    puVar10 = (undefined4 *)*param_1;
    switch((unsigned int)(uintptr_t)(*(char *)((int)param_1 + 9))) {
    case '\x01': ;
      iVar8 = param_3;
      if (0 < param_3) {
        do {
          *in_EAX = *(undefined1 *)puVar10;
          puVar10 = (undefined4 *)((int)puVar10 + iVar2);
          in_EAX = in_EAX + iVar1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        return (uint)in_EAX;
      }
      break;
    case '\x02': ;
      iVar8 = param_3;
      if (0 < param_3) {
        do {
          uVar3 = *puVar10;
          *in_EAX = (char)uVar3;
          in_EAX[1] = (char)((uint)uVar3 >> 8);
          puVar10 = (undefined4 *)((int)puVar10 + iVar2);
          in_EAX = in_EAX + iVar1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        return (uint)in_EAX;
      }
      break;
    case '\x03': ;
      if (0 < param_3) {
        local_8 = param_3;
        do {
          uVar3 = *puVar10;
          *in_EAX = (char)uVar3;
          in_EAX[1] = (char)((uint)uVar3 >> 8);
          in_EAX[2] = (char)((uint)uVar3 >> 0x10);
          puVar10 = (undefined4 *)((int)puVar10 + iVar2);
          in_EAX = in_EAX + iVar1;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
        return (uint)in_EAX;
      }
      break;
    case '\x04': ;
      if (0 < param_3) {
        local_8 = param_3;
        do {
          uVar3 = *puVar10;
          in_EAX[1] = (char)((uint)uVar3 >> 8);
          *in_EAX = (char)uVar3;
          in_EAX[2] = (char)((uint)uVar3 >> 0x10);
          in_EAX[3] = (char)((uint)uVar3 >> 0x18);
          puVar10 = (undefined4 *)((int)puVar10 + iVar2);
          in_EAX = in_EAX + iVar1;
          local_8 = local_8 + -1;
        } while (local_8 != 0);
        return (uint)in_EAX;
      }
      break;
    default: ;
      bVar7 = *(byte *)((int)param_1 + 9) & 3;
      uVar9 = (uint)(*(byte *)((int)param_1 + 9) >> 2);
      if (0 < param_3) {
        local_c = param_3;
        puVar4 = in_EAX;
        puVar5 = puVar10;
        uVar6 = uVar9;
        do {
          for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            uVar3 = *puVar5;
            puVar4[1] = (char)((uint)uVar3 >> 8);
            *puVar4 = (char)uVar3;
            puVar4[2] = (char)((uint)uVar3 >> 0x10);
            puVar4[3] = (char)((uint)uVar3 >> 0x18);
            puVar4 = puVar4 + 4;
            puVar5 = puVar5 + 1;
          }
          if (bVar7 == 1) {
            *puVar4 = *(undefined1 *)puVar5;
          }
          else if (bVar7 == 2) {
            uVar3 = *puVar5;
            *puVar4 = (char)uVar3;
            puVar4[1] = (char)((uint)uVar3 >> 8);
          }
          else if (bVar7 == 3) {
            uVar3 = *puVar5;
            *puVar4 = (char)uVar3;
            puVar4[1] = (char)((uint)uVar3 >> 8);
            puVar4[2] = (char)((uint)uVar3 >> 0x10);
          }
          local_c = local_c + -1;
          puVar4 = in_EAX;
          puVar5 = puVar10;
          uVar6 = uVar9;
        } while (local_c != 0);
      }
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_00dd8e40 */
uint F_00dd8e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd8e40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  int in_edx = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  ushort * puVar4;
  uint * puVar5;
  
  if ((((*(char *)((int)in_eax + 9) == '\x04') && (*(char *)((int)param_3 + 9) == '\x04')) &&
      (*(char *)(in_eax + 2) == '\a')) && ((char)param_3[2] == '\x03')) {
    puVar4 = (ushort *)*param_3;
    puVar5 = (uint *)*in_eax;
    iVar1 = in_eax[1];
    uVar2 = param_3[1];
    in_eax = (undefined4 *)(uVar2 >> 1);
    if (0 < in_edx) {
      do {
        uVar3 = *puVar5;
        *puVar4 = (ushort)uVar3 & 0xff;
        puVar4[1] = (ushort)(uVar3 >> 8) & 0xff;
        in_eax = (undefined4 *)(uVar3 >> 0x18);
        puVar4[2] = (ushort)(uVar3 >> 0x10) & 0xff;
        puVar4[3] = (ushort)(byte)(uVar3 >> 0x18);
        puVar4 = puVar4 + (int)(uVar2 >> 1);
        puVar5 = (uint *)((int)puVar5 + iVar1);
        in_edx = in_edx + -1;
      } while (in_edx != 0);
    }
  }
  return (uint)in_eax;
}

/* ref: FUN_00dd8eb0 */
uint F_00dd8eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd8eb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * in_edx = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined1 * puVar4;
  int iVar5;
  
  puVar3 = in_eax;
  if (((*(char *)((int)in_eax + 9) == *(char *)((int)in_edx + 9)) && (*(char *)(in_eax + 2) == '\a')
      ) && (*(char *)(in_edx + 2) == '\b')) {
    puVar3 = (undefined4 *)*in_eax;
    puVar4 = (undefined1 *)*in_edx;
    iVar1 = in_eax[1];
    iVar2 = in_edx[1];
    if ((*(char *)((int)in_eax + 9) == '\x04') && (iVar5 = param_3, 0 < param_3)) {
      do {
        *puVar4 = *(undefined1 *)puVar3;
        puVar4[1] = *(undefined1 *)((int)puVar3 + 1);
        puVar4[2] = *(undefined1 *)((int)puVar3 + 2);
        puVar4[3] = *(undefined1 *)((int)puVar3 + 3);
        puVar3 = (undefined4 *)((int)puVar3 + iVar1);
        puVar4 = puVar4 + iVar2;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return (uint)puVar3;
}

/* ref: FUN_00dd8f10 */
uint F_00dd8f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd8f10u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_edx = (int *)(uintptr_t)gen_a0;
  int * in_esi = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  float * pfVar1;
  byte bVar2;
  uint uVar3;
  float * in_EAX = 0;
  int iVar4;
  uint * puVar5;
  float10 fVar6;
  int local_8;
  
  if ((((*(char *)((int)in_edx + 9) == '\x01') || (*(char *)((int)in_esi + 9) == '\x04')) &&
      ((char)in_edx[2] == '\b')) && ((char)in_esi[2] == '\n')) {
    in_EAX = (float *)*in_esi;
    fVar6 = (float10)REFG(float, 0x10addc0);
    iVar4 = 0;
    puVar5 = (uint *)*in_edx;
    if (3 < param_3) {
      local_8 = (param_3 - 4U >> 2) + 1;
      iVar4 = local_8 * 4;
      do {
        uVar3 = *puVar5;
        *in_EAX = ((float)GEN_TOF(((float10)(uVar3 & 0xff) * fVar6)));
        in_EAX[1] = ((float)GEN_TOF(((float10)(uVar3 >> 8 & 0xff) * fVar6)));
        in_EAX[2] = ((float)GEN_TOF(((float10)(uVar3 >> 0x10 & 0xff) * fVar6)));
        in_EAX[3] = ((float)GEN_TOF(((float10)(uVar3 >> 0x18) * fVar6)));
        puVar5 = puVar5 + *(byte *)((int)in_edx + 9);
        pfVar1 = in_EAX + *(byte *)((int)in_esi + 9);
        uVar3 = *puVar5;
        *pfVar1 = ((float)GEN_TOF(((float10)(uVar3 & 0xff) * fVar6)));
        pfVar1[1] = ((float)GEN_TOF(((float10)(uVar3 >> 8 & 0xff) * fVar6)));
        pfVar1[2] = ((float)GEN_TOF(((float10)(uVar3 >> 0x10 & 0xff) * fVar6)));
        pfVar1[3] = ((float)GEN_TOF(((float10)(uVar3 >> 0x18) * fVar6)));
        puVar5 = puVar5 + *(byte *)((int)in_edx + 9);
        pfVar1 = pfVar1 + *(byte *)((int)in_esi + 9);
        uVar3 = *puVar5;
        *pfVar1 = ((float)GEN_TOF(((float10)(uVar3 & 0xff) * fVar6)));
        pfVar1[1] = ((float)GEN_TOF(((float10)(uVar3 >> 8 & 0xff) * fVar6)));
        pfVar1[2] = ((float)GEN_TOF(((float10)(uVar3 >> 0x10 & 0xff) * fVar6)));
        pfVar1[3] = ((float)GEN_TOF(((float10)(uVar3 >> 0x18) * fVar6)));
        bVar2 = *(byte *)((int)in_edx + 9);
        pfVar1 = pfVar1 + *(byte *)((int)in_esi + 9);
        uVar3 = puVar5[bVar2];
        *pfVar1 = ((float)GEN_TOF(((float10)(uVar3 & 0xff) * fVar6)));
        pfVar1[1] = ((float)GEN_TOF(((float10)(uVar3 >> 8 & 0xff) * fVar6)));
        pfVar1[2] = ((float)GEN_TOF(((float10)(uVar3 >> 0x10 & 0xff) * fVar6)));
        local_8 = local_8 + -1;
        pfVar1[3] = ((float)GEN_TOF(((float10)(uVar3 >> 0x18) * fVar6)));
        puVar5 = puVar5 + bVar2 + *(byte *)((int)in_edx + 9);
        in_EAX = pfVar1 + *(byte *)((int)in_esi + 9);
      } while (local_8 != 0);
    }
    if (iVar4 < param_3) {
      local_8 = param_3 - iVar4;
      do {
        uVar3 = *puVar5;
        *in_EAX = ((float)GEN_TOF(((float10)(uVar3 & 0xff) * fVar6)));
        in_EAX[1] = ((float)GEN_TOF(((float10)(uVar3 >> 8 & 0xff) * fVar6)));
        in_EAX[2] = ((float)GEN_TOF(((float10)(uVar3 >> 0x10 & 0xff) * fVar6)));
        local_8 = local_8 + -1;
        in_EAX[3] = ((float)GEN_TOF(((float10)(uVar3 >> 0x18) * fVar6)));
        puVar5 = puVar5 + *(byte *)((int)in_edx + 9);
        in_EAX = in_EAX + *(byte *)((int)in_esi + 9);
      } while (local_8 != 0);
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_00dd9170 */
uint F_00dd9170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd9170u, gen_a0, gen_a1, gen_a2, 0u);
  byte * in_eax = (byte *)(uintptr_t)gen_a0;
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  uint * puVar1;
  int iVar2;
  int iVar3;
  float * pfVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if (((*(byte *)((int)in_ecx + 9) == in_eax[9]) && (*(char *)(in_ecx + 2) == '\a')) &&
     (in_eax[8] == 10)) {
    pfVar4 = *(float * PTR32 *)in_eax;
    puVar1 = (uint *)(in_eax + 4);
    in_eax = (byte *)*in_ecx;
    iVar2 = in_ecx[1];
    uVar6 = *puVar1 >> 2;
    if (*(byte *)((int)in_ecx + 9) == 4) {
      iVar5 = 0;
      if (3 < param_3) {
        iVar7 = (param_3 - 4U >> 2) + 1;
        iVar5 = iVar7 * 4;
        do {
          *pfVar4 = (float)*in_eax;
          pfVar4[1] = (float)in_eax[1];
          pfVar4[2] = (float)in_eax[2];
          pfVar4[3] = (float)in_eax[3];
          pfVar4[uVar6] = (float)in_eax[iVar2];
          pfVar4[uVar6 + 1] = (float)in_eax[iVar2 + 1];
          pfVar4[uVar6 + 2] = (float)in_eax[iVar2 + 2];
          pfVar4[uVar6 + 3] = (float)in_eax[iVar2 + 3];
          pfVar4[uVar6 * 2] = (float)in_eax[iVar2 * 2];
          pfVar4[uVar6 * 2 + 1] = (float)in_eax[iVar2 * 2 + 1];
          pfVar4[uVar6 * 2 + 2] = (float)in_eax[iVar2 * 2 + 2];
          pfVar4[uVar6 * 2 + 3] = (float)in_eax[iVar2 * 2 + 3];
          iVar3 = iVar2 * 3;
          pfVar4[uVar6 * 3] = (float)in_eax[iVar2 * 3];
          pfVar4[uVar6 * 3 + 1] = (float)in_eax[iVar3 + 1];
          pfVar4[uVar6 * 3 + 2] = (float)in_eax[iVar3 + 2];
          pfVar4[uVar6 * 3 + 3] = (float)in_eax[iVar3 + 3];
          in_eax = in_eax + iVar2 * 4;
          pfVar4 = pfVar4 + uVar6 * 4;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      if (iVar5 < param_3) {
        iVar5 = param_3 - iVar5;
        do {
          *pfVar4 = (float)*in_eax;
          pfVar4[1] = (float)in_eax[1];
          pfVar4[2] = (float)in_eax[2];
          pfVar4[3] = (float)in_eax[3];
          in_eax = in_eax + iVar2;
          pfVar4 = pfVar4 + uVar6;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
    }
  }
  return (uint)in_eax;
}

/* ref: FUN_00dd9360 */
uint F_00dd9360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd9360u, gen_a0, gen_a1, gen_a2, 0u);
  uint * in_eax = (uint *)(uintptr_t)gen_a0;
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint * puVar2;
  uint * puVar3;
  uint uVar4;
  uint * puVar5;
  byte bVar6;
  int iVar7;
  uint * puVar8;
  uint uVar9;
  int local_10;
  int local_8;
  
  puVar5 = in_eax;
  if (((*(byte *)((int)in_ecx + 9) == *(byte *)((int)in_eax + 9)) &&
      (*(char *)(in_ecx + 2) == '\x02')) && ((byte)in_eax[2] == 7)) {
    puVar8 = (uint *)*in_eax;
    puVar5 = (uint *)*in_ecx;
    uVar9 = in_eax[1];
    iVar1 = in_ecx[1];
    switch((unsigned int)(uintptr_t)(*(byte *)((int)in_ecx + 9))) {
    case 1: ;
      iVar7 = param_3;
      if (0 < param_3) {
        do {
          *puVar8 = (uint)(byte)*puVar5;
          puVar5 = (uint *)((int)puVar5 + iVar1);
          puVar8 = (uint *)((int)puVar8 + uVar9);
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        return (uint)puVar5;
      }
      break;
    case 2: ;
      if (0 < param_3) {
        local_8 = param_3;
        do {
          *puVar8 = (uint)(ushort)*puVar5;
          puVar5 = (uint *)((int)puVar5 + iVar1);
          puVar8 = (uint *)((int)puVar8 + uVar9);
          local_8 = local_8 + -1;
        } while (local_8 != 0);
        return (uint)puVar5;
      }
      break;
    case 3: ;
      if (0 < param_3) {
        local_8 = param_3;
        do {
          *puVar8 = (uint)(uint3)*puVar5;
          puVar5 = (uint *)((int)puVar5 + iVar1);
          puVar8 = (uint *)((int)puVar8 + uVar9);
          local_8 = local_8 + -1;
        } while (local_8 != 0);
        return (uint)puVar5;
      }
      break;
    case 4: ;
      if (0 < param_3) {
        local_8 = param_3;
        do {
          *puVar8 = *puVar5;
          puVar5 = (uint *)((int)puVar5 + iVar1);
          puVar8 = (uint *)((int)puVar8 + uVar9);
          local_8 = local_8 + -1;
        } while (local_8 != 0);
        return (uint)puVar5;
      }
      break;
    default: ;
      bVar6 = *(byte *)((int)in_ecx + 9) & 3;
      uVar9 = (uint)(*(byte *)((int)in_ecx + 9) >> 2);
      if (0 < param_3) {
        local_10 = param_3;
        puVar2 = puVar8;
        puVar3 = puVar5;
        uVar4 = uVar9;
        do {
          for (; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar2 = *puVar3;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
          }
          if (bVar6 == 1) {
            *puVar2 = (uint)(byte)*puVar3;
          }
          else if (bVar6 == 2) {
            *puVar2 = (uint)(ushort)*puVar3;
          }
          else if (bVar6 == 3) {
            *puVar2 = (uint)(uint3)*puVar3;
          }
          local_10 = local_10 + -1;
          puVar2 = puVar8;
          puVar3 = puVar5;
          uVar4 = uVar9;
        } while (local_10 != 0);
      }
    }
  }
  return (uint)puVar5;
}

/* ref: FUN_00dd9530 */
uint F_00dd9530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd9530u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int * in_ecx = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float * pfVar9;
  int * piVar10;
  int iVar11;
  int iVar12;
  int * local_20;
  uint local_1c;
  int * local_10;
  int * local_c;
  
  fVar5 = REFG(float, 0x10addc0);
  iVar3 = in_eax[1];
  bVar1 = *(byte *)((int)in_eax + 9);
  uVar4 = in_ecx[1];
  iVar11 = *in_ecx;
  bVar2 = *(byte *)((int)in_ecx + 9);
  iVar7 = *in_eax;
  if (bVar2 == bVar1) {
    uVar8 = (uint)bVar2;
    in_eax = param_3;
    if (0 < (int)param_3) {
      iVar12 = iVar11 + 2;
      local_c = param_3;
      do {
        iVar6 = 0;
        if (3 < uVar8) {
          pfVar9 = (float *)(iVar7 + 8);
          do {
            pfVar9[-2] = (float)*(byte *)(iVar12 + -2 + iVar6) * fVar5;
            pfVar9[-1] = (float)*(byte *)(iVar12 + -1 + iVar6) * fVar5;
            *pfVar9 = (float)*(byte *)(iVar12 + iVar6) * fVar5;
            pfVar9[1] = (float)*(byte *)(iVar12 + 1 + iVar6) * fVar5;
            iVar6 = iVar6 + 4;
            pfVar9 = pfVar9 + 4;
          } while (iVar6 < (int)(uVar8 - 3));
        }
        for (; iVar6 < (int)uVar8; iVar6 = iVar6 + 1) {
          *(float *)(iVar7 + iVar6 * 4) = (float)*(byte *)(iVar6 + iVar11) * fVar5;
        }
        iVar7 = iVar7 + iVar3;
        iVar11 = iVar11 + uVar4;
        iVar12 = iVar12 + uVar4;
        local_c = (int *)((int)local_c + -1);
      } while (local_c != (int *)0x0);
      return uVar4;
    }
  }
  else if ((*(char *)((int)in_ecx + 10) == '\a') && (*(char *)((int)in_eax + 10) == '\b')) {
    uVar8 = (uint)bVar1;
    in_eax = (int *)(uVar8 - 1);
    if (((int *)(uint)bVar2 == in_eax) && (in_eax = param_3, 0 < (int)param_3)) {
      iVar12 = iVar11 + 2;
      local_10 = param_3;
      do {
        iVar6 = 0;
        if (3 < uVar8) {
          pfVar9 = (float *)(iVar7 + 8);
          do {
            pfVar9[-2] = (float)*(byte *)(iVar12 + -2 + iVar6) * fVar5;
            pfVar9[-1] = (float)*(byte *)(iVar12 + -1 + iVar6) * fVar5;
            *pfVar9 = (float)*(byte *)(iVar12 + iVar6) * fVar5;
            pfVar9[1] = (float)*(byte *)(iVar12 + 1 + iVar6) * fVar5;
            iVar6 = iVar6 + 4;
            pfVar9 = pfVar9 + 4;
          } while (iVar6 < (int)(uVar8 - 3));
        }
        for (; iVar6 < (int)uVar8; iVar6 = iVar6 + 1) {
          *(float *)(iVar7 + iVar6 * 4) = (float)*(byte *)(iVar6 + iVar11) * fVar5;
        }
        iVar7 = iVar7 + iVar3;
        iVar11 = iVar11 + uVar4;
        iVar12 = iVar12 + uVar4;
        local_10 = (int *)((int)local_10 + -1);
      } while (local_10 != (int *)0x0);
      return uVar4;
    }
  }
  else if ((*(char *)((int)in_ecx + 10) == '\b') || (*(char *)((int)in_eax + 10) == '\a')) {
    piVar10 = (int *)(uint)bVar1;
    in_eax = (int *)(bVar2 - 1);
    if ((piVar10 == in_eax) && (in_eax = param_3, 0 < (int)param_3)) {
      local_20 = param_3;
      do {
        iVar12 = 0;
        in_eax = (int *)0x0;
        local_10 = (int *)0x0;
        local_1c = 0;
        if ((int *)0x1 < piVar10) {
          do {
            bVar1 = *(byte *)((int)in_eax + iVar11);
            *(float *)(iVar7 + (int)((int)(uintptr_t)in_eax) * 4) = (float)bVar1 * fVar5;
            iVar12 = iVar12 + (uint)bVar1;
            uVar8 = (uint)*(byte *)((int)in_eax + iVar11 + 1);
            local_10 = (int *)((int)local_10 + uVar8);
            *(float *)(iVar7 + 4 + (int)((int)(uintptr_t)in_eax) * 4) = (float)uVar8 * fVar5;
            in_eax = (int *)((int)in_eax + 2);
          } while ((int)in_eax < (int)piVar10 + -1);
        }
        if ((int)in_eax < (int)piVar10) {
          local_1c = (uint)*(byte *)((int)in_eax + iVar11);
          *(float *)(iVar7 + (int)((int)(uintptr_t)in_eax) * 4) = (float)local_1c * fVar5;
        }
        iVar11 = iVar11 + uVar4;
        *(float *)(iVar7 + (int)((int)(uintptr_t)piVar10) * 4) =
             (float)(int)(((0xff - (int)local_10) - iVar12) - local_1c) * fVar5;
        iVar7 = iVar7 + iVar3;
        local_20 = (int *)((int)local_20 + -1);
      } while (local_20 != (int *)0x0);
    }
  }
  return (uint)in_eax;
}

/* ref: FUN_00dd9800 */
uint F_00dd9800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd9800u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int * in_ecx = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  int * piVar10;
  char cVar11;
  int iVar12;
  int * local_14;
  
  fVar5 = REFG(float, 0x10a0d8c);
  iVar3 = in_eax[1];
  bVar1 = *(byte *)((int)in_eax + 9);
  iVar4 = in_ecx[1];
  iVar12 = *in_ecx;
  bVar2 = *(byte *)((int)in_ecx + 9);
  iVar8 = *in_eax;
  if (bVar2 == bVar1) {
    in_eax = param_3;
    piVar10 = param_3;
    if (0 < (int)param_3) {
      do {
        uVar6 = 0;
        if (bVar2 != 0) {
          do {
            *(char *)(uVar6 + iVar8) = (char)(int)(*(float *)(iVar12 + uVar6 * 4) * fVar5);
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < (int)(uint)bVar2);
        }
        iVar8 = iVar8 + iVar3;
        iVar12 = iVar12 + iVar4;
        piVar10 = (int *)((int)piVar10 + -1);
      } while (piVar10 != (int *)0x0);
      return uVar6;
    }
  }
  else if ((*(char *)((int)in_ecx + 10) == '\a') && (*(char *)((int)in_eax + 10) == '\b')) {
    uVar6 = (uint)bVar1;
    in_eax = (int *)(uVar6 - 1);
    if (((int *)(uint)bVar2 == in_eax) && (in_eax = param_3, piVar10 = param_3, 0 < (int)param_3)) {
      do {
        uVar7 = 0;
        if (uVar6 != 0) {
          do {
            *(char *)(uVar7 + iVar8) = (char)(int)(*(float *)(iVar12 + uVar7 * 4) * fVar5);
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar6);
        }
        iVar8 = iVar8 + iVar3;
        iVar12 = iVar12 + iVar4;
        piVar10 = (int *)((int)piVar10 + -1);
      } while (piVar10 != (int *)0x0);
      return uVar7;
    }
  }
  else if ((*(char *)((int)in_ecx + 10) == '\b') || (*(char *)((int)in_eax + 10) == '\a')) {
    piVar10 = (int *)(uint)bVar1;
    in_eax = (int *)(bVar2 - 1);
    if ((piVar10 == in_eax) && (in_eax = param_3, 0 < (int)param_3)) {
      local_14 = param_3;
      do {
        cVar11 = '\0';
        in_eax = (int *)0x0;
        if (piVar10 != (int *)0x0) {
          do {
            cVar9 = (char)(int)(*(float *)(iVar12 + (int)((int)(uintptr_t)in_eax) * 4) * fVar5);
            cVar11 = cVar11 + cVar9;
            *(char *)((int)in_eax + iVar8) = cVar9;
            in_eax = (int *)((int)in_eax + 1);
          } while ((int)in_eax < (int)piVar10);
        }
        iVar12 = iVar12 + iVar4;
        *(char *)((int)piVar10 + iVar8) = -1 - cVar11;
        iVar8 = iVar8 + iVar3;
        local_14 = (int *)((int)local_14 + -1);
      } while (local_14 != (int *)0x0);
    }
  }
  return (uint)in_eax;
}

/* ref: FUN_00dd9960 */
uint F_00dd9960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd9960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * in_edx = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  puVar2 = in_eax;
  if ((((*(char *)((int)in_edx + 9) == '\x03') && (*(char *)((int)in_eax + 9) == '\x04')) &&
      (puVar2 = ((undefined4 *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)in_eax) >> 8),10))), *(char *)(in_edx + 2) == '\n')
      ) && (*(char *)(in_eax + 2) == '\n')) {
    puVar2 = (undefined4 *)*in_eax;
    puVar4 = (undefined4 *)*in_edx;
    uVar5 = (uint)in_edx[1] >> 2;
    uVar7 = (uint)in_eax[1] >> 2;
    iVar6 = 0;
    if (3 < param_3) {
      iVar8 = (param_3 - 4U >> 2) + 1;
      iVar6 = iVar8 * 4;
      do {
        *puVar2 = *puVar4;
        puVar2[1] = puVar4[1];
        puVar3 = puVar4 + uVar5;
        puVar2[2] = puVar4[2];
        puVar2[3] = 0;
        puVar2 = puVar2 + uVar7;
        *puVar2 = *puVar3;
        puVar2[1] = puVar3[1];
        puVar4 = puVar3 + uVar5;
        puVar2[2] = puVar3[2];
        puVar2[3] = 0;
        puVar2 = puVar2 + uVar7;
        *puVar2 = *puVar4;
        puVar2[1] = puVar4[1];
        puVar3 = puVar4 + uVar5;
        puVar2[2] = puVar4[2];
        puVar2[3] = 0;
        puVar2 = puVar2 + uVar7;
        *puVar2 = *puVar3;
        puVar2[1] = puVar3[1];
        puVar4 = puVar3 + uVar5;
        puVar2[2] = puVar3[2];
        puVar2[3] = 0;
        puVar2 = puVar2 + uVar7;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    if (iVar6 < param_3) {
      iVar6 = param_3 - iVar6;
      do {
        *puVar2 = *puVar4;
        puVar2[1] = puVar4[1];
        uVar1 = puVar4[2];
        puVar2[3] = 0;
        puVar2[2] = uVar1;
        puVar4 = puVar4 + uVar5;
        puVar2 = puVar2 + uVar7;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00dd9a80 */
unsigned int F_00dd9a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdd9a80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  int iVar2;
  
  *(undefined4 *)((int)param_2 + 0x100) = 0;
  *(undefined4 *)((int)param_3 + 0x100) = 0;
  iVar2 = *(int *)(param_1 + 0x100);
  iVar1 = param_1;
  if (0 < iVar2) {
    do {
      this = param_3;
      if ((*(byte *)(iVar1 + 4) & 8) == 0) {
        this = param_2;
      }
      F_00dd7b40(this,iVar1);
      iVar1 = iVar1 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00dd9ad0 */
uint F_00dd9ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdd9ad0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  int param_5 = (int)gen_a4;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = (int)((uint)(byte)(&REFG(undefined, 0x114962c))[*param_2] * (uint)param_2[1] + 3) >> 2;
  if (param_4 < REFG(float, 0x1088068)) {
    uVar2 = 0;
    if (iVar1 != 0) {
      iVar3 = param_5 - (int)param_1;
      do {
        *(undefined4 *)(iVar3 + (int)param_1) = *param_1;
        param_1 = param_1 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      return 0;
    }
  }
  else {
    uVar2 = F_00da1010(param_5,param_3,iVar1);
  }
  return uVar2;
}

/* ref: FUN_00dd9b30 */
uint F_00dd9b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdd9b30u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  char * in_eax = (char *)(uintptr_t)gen_a0;
  float * in_ecx = (float *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  int param_5 = (int)gen_a4;
  float fVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  float * pfVar12;
  float * pfVar13;
  int iVar14;
  uint * puVar15;
  float fVar16;
  uint local_1c;
  
  fVar7 = *(float *)&REFG(undefined, 0x114970c);
  fVar6 = *(float *)&REFG(undefined, 0x1149708);
  fVar5 = *(float *)&REFG(undefined, 0x1149704);
  fVar16 = *(float *)&REFG(undefined, 0x1149700);
  fVar1 = REFG(float, 0x1087f04);
  cVar3 = *in_eax;
  local_1c = (uint)(byte)in_eax[1];
  if (cVar3 == '\b') {
    pfVar12 = (float *)0x0;
    if (local_1c != 0) {
      puVar15 = param_3;
      do {
        uVar11 = *((uint *)GEN_TOP(((int)puVar15 + ((int)in_ecx - (int)param_3))));
        uVar4 = *puVar15;
        fVar1 = (float)(uVar11 >> 0x10 & 0xff);
        fVar2 = (float)(uVar11 >> 8 & 0xff);
        pfVar12 = ((float *)GEN_TOP(((((uint)gen_fl2bits((((float)(uVar4 >> 0x10 & 0xff) - fVar1) * param_4 +
                                                fVar1) + fVar5) & 0xff |
                             (int)gen_fl2bits((((float)(uVar4 >> 0x18) - (float)(uVar11 >> 0x18)) *
                                               param_4 + (float)(uVar11 >> 0x18)) + fVar16) << 8) <<
                             8 | (uint)gen_fl2bits((((float)(uVar4 >> 8 & 0xff) - fVar2) * param_4 +
                                                   fVar2) + fVar6) & 0xff) << 8 |
                           (uint)gen_fl2bits((((float)(uVar4 & 0xff) - (float)(uVar11 & 0xff)) *
                                              param_4 + (float)(uVar11 & 0xff)) + fVar7) & 0xff)));
        local_1c = local_1c - 1;
        *((float * PTR32 *)GEN_TOP(((int)puVar15 + (param_5 - (int)param_3)))) = pfVar12;
        puVar15 = puVar15 + 1;
      } while (local_1c != 0);
    }
  }
  else if (cVar3 == '\n') {
    iVar14 = 0;
    pfVar12 = (float *)0x0;
    if (3 < local_1c) {
      pfVar12 = (float *)(param_3 + 1);
      pfVar13 = (float *)(param_5 + 8);
      iVar14 = 0;
      fVar16 = REFG(float, 0x1087f04) - param_4;
      do {
        pfVar13[-2] = in_ecx[iVar14] * fVar16 + pfVar12[-1] * param_4;
        *((float *)GEN_TOP(((param_5 - (int)param_3) + (int)pfVar12))) =
             *((float *)GEN_TOP((((int)in_ecx - (int)param_3) + (int)pfVar12))) * fVar16 + *pfVar12 * param_4;
        *pfVar13 = *((float *)GEN_TOP(((int)pfVar13 + ((int)in_ecx - param_5)))) * fVar16 +
                   pfVar12[1] * param_4;
        pfVar13[1] = in_ecx[iVar14 + 3] * fVar16 + pfVar12[2] * param_4;
        iVar14 = iVar14 + 4;
        pfVar12 = pfVar12 + 4;
        pfVar13 = pfVar13 + 4;
      } while (iVar14 < (int)(local_1c - 3));
    }
    if (iVar14 < (int)local_1c) {
      pfVar12 = (float *)(param_3 + iVar14);
      iVar14 = local_1c - iVar14;
      do {
        *((float *)GEN_TOP(((int)pfVar12 + (param_5 - (int)param_3)))) =
             *((float *)GEN_TOP(((int)pfVar12 + ((int)in_ecx - (int)param_3)))) * (fVar1 - param_4) +
             *pfVar12 * param_4;
        pfVar12 = pfVar12 + 1;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      return (uint)pfVar12;
    }
  }
  else {
    if (cVar3 != '\v') {
      uVar11 = F_00dd9ad0(in_ecx,in_eax,param_3,param_4,param_5);
      return uVar11;
    }
    pfVar12 = (float *)0x0;
    if (local_1c != 0) {
      iVar14 = (int)param_3 - (int)in_ecx;
      uVar11 = param_5 - (int)in_ecx;
      do {
        pfVar12 = (float *)(iVar14 + (int)in_ecx);
        fVar1 = pfVar12[1];
        fVar16 = pfVar12[2];
        fVar5 = pfVar12[3];
        fVar6 = in_ecx[1];
        fVar7 = in_ecx[2];
        fVar2 = in_ecx[3];
        fVar8 = in_ecx[1];
        fVar9 = in_ecx[2];
        fVar10 = in_ecx[3];
        pfVar13 = (float *)(uVar11 + (int)in_ecx);
        *pfVar13 = (*pfVar12 - *in_ecx) * param_4 + *in_ecx;
        pfVar13[1] = (fVar1 - fVar6) * param_4 + fVar8;
        pfVar13[2] = (fVar16 - fVar7) * param_4 + fVar9;
        pfVar13[3] = (fVar5 - fVar2) * param_4 + fVar10;
        in_ecx = in_ecx + 4;
        local_1c = local_1c - 1;
      } while (local_1c != 0);
      return uVar11;
    }
  }
  return (uint)pfVar12;
}

/* ref: FUN_00dd9e30 */
uint F_00dd9e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xdd9e30u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float * pfVar1;
  int * piVar2;
  char * pcVar3;
  short * psVar4;
  int iVar5;
  uint * puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int local_18;
  int local_14;
  
  if (((char)param_2[2] != (char)param_3[2]) ||
     (*(byte *)((int)param_2 + 9) != *(byte *)((int)param_3 + 9))) goto switchD_00dd9e79_caseD_9;
  uVar11 = (uint)*(byte *)((int)param_2 + 9);
  switch((unsigned int)(uintptr_t)((char)param_2[2])) {
  case '\x01': ;
  case '\x02': ;
    pcVar3 = (char *)*param_2;
    iVar5 = 0;
    if (uVar11 == 0) goto LAB_00dda011;
    iVar9 = *param_3 - (int)pcVar3;
    while (*pcVar3 == pcVar3[iVar9]) {
      iVar5 = iVar5 + 1;
      pcVar3 = pcVar3 + 1;
      if ((int)uVar11 <= iVar5) {
        *param_1 = 1;
        return (uint)param_1;
      }
    }
    break;
  case '\x03': ;
  case '\x04': ;
    psVar4 = (short *)*param_2;
    iVar5 = 0;
    if (uVar11 != 0) {
      iVar9 = *param_3 - (int)psVar4;
      do {
        if (*psVar4 != *(short *)(iVar9 + (int)psVar4)) goto switchD_00dd9e79_caseD_9;
        iVar5 = iVar5 + 1;
        psVar4 = psVar4 + 1;
      } while (iVar5 < (int)uVar11);
    }
    goto LAB_00dda011;
  case '\x05': ;
  case '\x06': ;
  case '\a': ;
    piVar2 = (int *)*param_2;
    iVar5 = 0;
    if (uVar11 == 0) goto LAB_00dda011;
    iVar9 = *param_3 - (int)piVar2;
    while (*piVar2 == *(int *)(iVar9 + (int)piVar2)) {
      iVar5 = iVar5 + 1;
      piVar2 = piVar2 + 1;
      if ((int)uVar11 <= iVar5) {
        *param_1 = 1;
        return (uint)param_1;
      }
    }
    break;
  case '\b': ;
    puVar6 = (uint *)*param_3;
    local_18 = 0;
    if (uVar11 != 0) {
      iVar5 = *param_2 - (int)puVar6;
      do {
        uVar8 = *(uint *)(iVar5 + (int)puVar6);
        uVar10 = *puVar6;
        if (uVar8 != uVar10) {
          if (GEN_ISNAN(param_4) != (GEN_ISNAN(param_4) || param_4 == 0.0)) goto switchD_00dd9e79_caseD_9;
          local_14 = 0;
          do {
            iVar9 = (uVar8 & 0xff) - (uVar10 & 0xff);
            uVar7 = iVar9 >> 0x1f;
            if ((int)(param_4 * REFG(float, 0x10a0d8c)) < (int)(iVar9 + uVar7 ^ uVar7))
            goto switchD_00dd9e79_caseD_9;
            local_14 = local_14 + 1;
            uVar8 = uVar8 >> 8;
            uVar10 = uVar10 >> 8;
          } while (local_14 < 4);
        }
        local_18 = local_18 + 1;
        puVar6 = puVar6 + 1;
        if ((int)uVar11 <= local_18) {
          *param_1 = 1;
          return (uint)param_1;
        }
      } while( true );
    }
LAB_00dda011: ;
    *param_1 = 1;
    return (uint)param_1;
  case '\n': ;
    pfVar1 = (float *)*param_2;
    iVar5 = 0;
    if (uVar11 == 0) goto LAB_00dda011;
    iVar9 = *param_3 - (int)pfVar1;
    while (!(param_4 <= ABS(*pfVar1 - *(float *)(iVar9 + (int)pfVar1)))) {
      iVar5 = iVar5 + 1;
      pfVar1 = pfVar1 + 1;
      if ((int)uVar11 <= iVar5) {
        *param_1 = 1;
        return (uint)param_1;
      }
    }
  }
switchD_00dd9e79_caseD_9: ;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00dda060 */
uint F_00dda060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdda060u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  byte bVar3;
  undefined4 in_ECX = 0;
  undefined4 * puVar4;
  uint uVar5;
  byte * pbVar6;
  
  uVar2 = *(uint *)((*(int *)&gen_args[1]) + 0x100);
  if (0 < (int)uVar2) {
    pbVar6 = (byte *)((*(int *)&gen_args[1]) + 3);
    uVar5 = uVar2;
    (*(undefined4 *)(gen_frame + 0x8)) = in_ECX;
    do {
      uVar2 = F_00dd7a40((*(undefined * PTR32 *)&gen_args[0]),(uint)pbVar6[-1],(uint)*pbVar6);
      if ((int)uVar2 < 0) {
        uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x100)));
        *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x100))) = uVar2 + 1;
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar2 * 8))) = *(undefined4 *)(pbVar6 + -3);
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar2 * 8 + 4))) = *(undefined4 *)(pbVar6 + 1);
      }
      else {
        bVar1 = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar2 * 8 + 1)));
        bVar3 = pbVar6[-2];
        if (pbVar6[-2] < bVar1) {
          bVar3 = bVar1;
        }
        bVar1 = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar2 * 8)));
        *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar2 * 8 + 1))) = bVar3;
        bVar3 = pbVar6[-3];
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = bVar3;
        (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
        (*(int *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(int *)&gen_args[1]), 1, 3),bVar1);
        puVar4 = &(*(int *)&gen_args[1]);
        if (bVar1 <= bVar3) {
          puVar4 = &(*(undefined4 *)(gen_frame + 0x8));
        }
        *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + uVar2 * 8))) = *(undefined1 *)puVar4;
      }
      pbVar6 = pbVar6 + 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return uVar2;
}

/* ref: FUN_00dda0f0 */
unsigned int F_00dda0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdda0f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x100) = 0;
  iVar1 = param_2;
  iVar2 = param_3;
  if (0 < param_3) {
    do {
      F_00dda060(param_1,iVar1);
      iVar1 = iVar1 + 0x104;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00dda130 */
uint F_00dda130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdda130u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dd8600(param_2 * 0x10 + param_1,param_3,*(undefined4 *)(param_1 + 0x204));
  return uVar1;
}

/* ref: FUN_00dda160 */
uint F_00dda160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdda160u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dd8720(param_2 * 0x10 + param_1,param_3,*(undefined4 *)(param_1 + 0x204));
  return uVar1;
}

/* ref: FUN_00dda190 */
uint F_00dda190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdda190u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x204);
  iVar3 = *(int *)(param_1 + 0x200);
  uVar2 = uVar1;
  if (((*(uint *)(param_2 + 0x204) == uVar1) || (iVar3 != *(int *)(param_2 + 0x200))) && (0 < iVar3)
     ) {
    iVar4 = param_1;
    do {
      uVar2 = F_00dd8c60(iVar4,(param_2 - param_1) + iVar4,uVar1);
      iVar4 = iVar4 + 0x10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar2;
}

/* ref: FUN_00dda1e0 */
uint F_00dda1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdda1e0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x850];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int * piVar7;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 == 1) {
    F_00d919e0((undefined *)*param_2);
    return *param_2;
  }
  F_00dd7940(((undefined1 *)(gen_frame + 0x734)));
  ((code *)*(gen_code32 *)(*(int *)*param_2 + 0x14))((int *)*param_2,((undefined1 *)(gen_frame + 0x734)));
  iVar5 = 0;
  iVar6 = 0;
  if (0 < param_3) {
    do {
      piVar3 = (int *)param_2[iVar6];
      F_00dd7940(((undefined1 *)(gen_frame + 0x630)));
      ((code *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3,((undefined1 *)(gen_frame + 0x630)));
      bVar1 = F_00dd7980(((undefined1 *)(gen_frame + 0x630)),((undefined1 *)(gen_frame + 0x734)));
      if (bVar1 == 0) {
        return 0;
      }
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + uVar2;
    } while (iVar6 < param_3);
  }
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1,((undefined1 *)(gen_frame + 0x734)),iVar5)));
  (*(int * PTR32 *)(gen_frame + 0x838)) = piVar3;
  if (piVar3 != (int *)0x0) {
    (*(undefined4 *)(gen_frame + 0x83c)) = 0;
    (*(undefined4 *)(gen_frame + 0x840)) = 0xffffffff;
    (*(undefined2 *)(gen_frame + 0x844)) = 0;
    (*(undefined4 *)(gen_frame + 0x848)) = 6;
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3,&(*(undefined4 *)(gen_frame + 0x83c)),((int *)(gen_frame + 0xc)));
    if (uVar2 != 1) {
      F_00d91a80(piVar3);
      return 0;
    }
    iVar6 = 0;
    piVar3 = ((int *)(gen_frame + 0xc));
    piVar7 = ((int *)(gen_frame + 0x424));
    for (iVar5 = 0x83; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar7 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar7 = piVar7 + 1;
    }
    iVar5 = (*(int *)(gen_frame + 0x624));
    if (0 < param_3) {
      do {
        piVar3 = (int *)param_2[iVar6];
        (*(undefined4 *)(gen_frame + 0x83c)) = 0;
        (*(undefined4 *)(gen_frame + 0x840)) = 0xffffffff;
        (*(undefined2 *)(gen_frame + 0x844)) = 0;
        (*(undefined4 *)(gen_frame + 0x848)) = 1;
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3,&(*(undefined4 *)(gen_frame + 0x83c)),((undefined1 *)(gen_frame + 0x218)));
        if (uVar2 != 1) {
          F_00d91a80((*(int * PTR32 *)(gen_frame + 0x838)));
          return 0;
        }
        (*(undefined4 *)(gen_frame + 0x628)) = (*(undefined4 *)(gen_frame + 0x41c));
        F_00dda190(((undefined1 *)(gen_frame + 0x218)),((int *)(gen_frame + 0x424)));
        ((code *)*(gen_code32 *)(*piVar3 + 0x34))(piVar3,((undefined1 *)(gen_frame + 0x218)));
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3);
        iVar4 = 0;
        if (0 < iVar5) {
          piVar3 = ((int *)(gen_frame + 0x424));
          do {
            *piVar3 = *piVar3 + piVar3[1] * uVar2;
            iVar4 = iVar4 + 1;
            piVar3 = piVar3 + 4;
            iVar5 = (*(int *)(gen_frame + 0x624));
          } while (iVar4 < (*(int *)(gen_frame + 0x624)));
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_3);
    }
    piVar3 = (*(int * PTR32 *)(gen_frame + 0x838));
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x838)) + 0x34))((*(int * PTR32 *)(gen_frame + 0x838)),((int *)(gen_frame + 0xc)));
    return (uint)piVar3;
  }
  return 0;
}

/* ref: FUN_00dda4c0 */
uint F_00dda4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdda4c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined * puVar6;
  
  bVar1 = *(byte *)(param_2 + 2);
  bVar2 = *(byte *)(param_1 + 1);
  if (bVar2 == bVar1) {
    if (*(byte *)((int)param_1 + 9) == *(byte *)((int)param_2 + 9)) {
      uVar3 = F_00dd7fc0(*(undefined4 *)param_1,*(undefined4 *)((int)param_1 + 4),*param_2,
                           param_2[1],
                           (uint)(byte)(&REFG(undefined, 0x114962c))[bVar2] * (uint)*(byte *)((int)param_1 + 9) +
                           3 & 0xfffffffc,param_3);
      return uVar3;
    }
    if ((bVar2 == bVar1) && (*(byte *)((int)param_2 + 9) <= *(byte *)((int)param_1 + 9))) {
      uVar3 = (uint)(byte)(&REFG(undefined, 0x114962c))[bVar1] * (uint)*(byte *)((int)param_2 + 9) + 3 &
              0xfffffffc;
      goto LAB_00dda545;
    }
  }
  if (bVar2 == 7) {
    uVar3 = bVar1 - 2;
    switch((unsigned int)(uintptr_t)(uVar3)) {
    case 0: ;
      uVar3 = F_00dd8ca0(param_1,param_2,param_3);
      return uVar3;
    case 1: ;
      uVar3 = F_00dd8e40(param_1,param_3,param_2);
      return uVar3;
    case 6: ;
      uVar3 = F_00dd8eb0(param_1,param_2,param_3);
      return uVar3;
    case 8: ;
      uVar3 = F_00dd9170(param_2,param_1,param_3);
      return uVar3;
    }
  }
  else {
    if (bVar2 == 2) {
      uVar3 = (uint)bVar1;
      if (uVar3 == 3) {
        uVar3 = F_00dd8170(param_2,param_1,param_3);
        return uVar3;
      }
      if (uVar3 != 7) {
        if (uVar3 != 10) {
          return uVar3;
        }
        uVar3 = F_00dd9530(param_2,param_1,param_3);
        return uVar3;
      }
      uVar3 = F_00dd9360(param_2,param_1,param_3);
      return uVar3;
    }
    if (bVar2 == 3) {
      if (bVar1 - 2 != 0) {
        return bVar1 - 2;
      }
      uVar3 = F_00dd81d0(param_2,param_1,param_3);
      return uVar3;
    }
    if (bVar2 == 10) {
      uVar3 = (uint)bVar1;
      if (uVar3 == 2) {
        uVar3 = F_00dd9800(param_2,param_1,param_3);
        return uVar3;
      }
      if (uVar3 != 8) {
        if (uVar3 - 10 != 0) {
          return uVar3 - 10;
        }
        uVar3 = F_00dd9960(param_2,param_1,param_3);
        return uVar3;
      }
      uVar3 = F_00dda3f0(param_3,param_1,param_2);
      return uVar3;
    }
    if ((((bVar2 == 0xb) && (bVar1 == 10)) && (*(byte *)((int)param_2 + 9) < 5)) &&
       (*(char *)((int)param_1 + 9) == '\x01')) {
      uVar3 = (uint)*(byte *)((int)param_2 + 9) * 4;
LAB_00dda545: ;
      uVar3 = F_00dd7fc0(*(undefined4 *)param_1,*(undefined4 *)((int)param_1 + 4),*param_2,
                           param_2[1],uVar3,param_3);
      return uVar3;
    }
    if ((bVar2 == 6) && (*(char *)((int)param_1 + 9) == '\x01')) {
      if (bVar1 == 8) goto LAB_00dda6e6;
      if ((*(char *)((int)param_1 + 10) == '\x03') && (bVar1 == 10)) {
        (*(undefined8 *)(gen_frame + 0x20c)) = *param_1;
        (*(undefined8 *)(gen_frame + 0x214)) = param_1[1];
        (*(undefined1 *)((char *)&(*(undefined8 *)(gen_frame + 0x214)) + 0)) = 8;
        (*(undefined8 *)(gen_frame + 0x214)) = CONCAT71((int7)((ulonglong)param_1[1] >> 8),8);
        uVar3 = F_00dd8f10(&(*(undefined8 *)(gen_frame + 0x20c)),param_2,param_3);
        return uVar3;
      }
    }
    if ((bVar2 == 8) && (*(char *)((int)param_1 + 9) == '\x01')) {
      if (bVar1 == 6) {
LAB_00dda6e6: ;
        uVar3 = F_00dd7fc0(*(undefined4 *)param_1,*(undefined4 *)((int)param_1 + 4),*param_2,
                             param_2[1],4,param_3);
        return uVar3;
      }
      if (bVar1 == 10) {
        uVar3 = F_00dd8f10(param_1,param_2,param_3);
        return uVar3;
      }
    }
    F_00da0a80((undefined *)((int)&(*(undefined8 *)(gen_frame + 0x20c)) + 4),((undefined1 *)(gen_frame + 0xc)),0x200);
    uVar3 = (uint)*(byte *)(param_2 + 2);
    uVar5 = (uint)*(byte *)(param_1 + 1);
    puVar6 = &REFG(undefined, 0x114976c);
    pvVar4 = (undefined *)F_00d9fe80((undefined *)((int)&(*(undefined8 *)(gen_frame + 0x20c)) + 4),"Cannot convert vertex format from ")
    ;
    pvVar4 = (undefined *)F_00d9ff40(pvVar4,uVar5);
    pvVar4 = (undefined *)F_00d9fe80(pvVar4,puVar6);
    F_00d9ff40(pvVar4,uVar3);
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(int * PTR32, 0x15dff78),1,0xabba4523,((undefined1 *)(gen_frame + 0xc)),
               "Mesh\\Utils\\VertexBufferUtil\\hkMeshVertexBufferUtil.cpp",0x5b0);
    uVar3 = F_00d9fda0((undefined *)((int)&(*(undefined8 *)(gen_frame + 0x20c)) + 4));
  }
  return uVar3;
}

/* ref: FUN_00dda810 */
uint F_00dda810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdda810u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x640];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined1 * puVar4;
  byte * pbVar5;
  int iVar6;
  
  (*(undefined4 *)(gen_frame + 0x62c)) = 0;
  (*(undefined4 *)(gen_frame + 0x630)) = 0xffffffff;
  (*(undefined2 *)(gen_frame + 0x634)) = 0;
  (*(undefined4 *)(gen_frame + 0x638)) = 3;
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1);
  uVar3 = ((code *)*(gen_code32 *)(*param_2 + 0x18))(param_2);
  if ((uVar2 == uVar3) &&
     (uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0x1c))(param_1,&(*(undefined4 *)(gen_frame + 0x62c)),((undefined1 *)(gen_frame + 0x218))), uVar3 == 1)) {
    uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x1c))(param_2,&(*(undefined4 *)(gen_frame + 0x62c)),((undefined1 *)(gen_frame + 0xc)));
    if (uVar2 != 1) {
      uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x34))(param_1,((undefined1 *)(gen_frame + 0x218)));
      return uVar2;
    }
    F_00dd7940(((undefined1 *)(gen_frame + 0x528)));
    F_00dd7940(((undefined1 *)(gen_frame + 0x424)));
    ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1,((undefined1 *)(gen_frame + 0x528)));
    ((code *)*(gen_code32 *)(*param_2 + 0x14))(param_2,((undefined1 *)(gen_frame + 0x424)));
    bVar1 = F_00dd7980(((undefined1 *)(gen_frame + 0x528)),((undefined1 *)(gen_frame + 0x424)));
    if (bVar1 == 0) {
      iVar6 = 0;
      if (0 < (*(int *)(gen_frame + 0x628))) {
        puVar4 = ((undefined1 *)(gen_frame + 0x218));
        pbVar5 = ((byte *)(gen_frame + 0x52a)) + 1;
        do {
          uVar2 = F_00dd7a40(((undefined1 *)(gen_frame + 0x424)),(uint)pbVar5[-1],(uint)*pbVar5);
          if (-1 < (int)uVar2) {
            F_00dda4c0(puVar4,((undefined1 *)(gen_frame + 0xc)) + uVar2 * 0x10,(*(undefined4 *)(gen_frame + 0x41c)));
          }
          iVar6 = iVar6 + 1;
          pbVar5 = pbVar5 + 8;
          puVar4 = puVar4 + 0x10;
        } while (iVar6 < (*(int *)(gen_frame + 0x628)));
      }
    }
    else {
      F_00dda190(((undefined1 *)(gen_frame + 0x218)),((undefined1 *)(gen_frame + 0xc)));
    }
    ((code *)*(gen_code32 *)(*param_1 + 0x34))(param_1,((undefined1 *)(gen_frame + 0x218)));
    uVar3 = ((code *)*(gen_code32 *)(*param_2 + 0x34))(param_2,((undefined1 *)(gen_frame + 0xc)));
  }
  return uVar3;
}

/* ref: FUN_00dda990 */
uint F_00dda990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xdda990u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  float param_4 = (float)gen_a3;
  undefined8 * puVar1;
  float fVar2;
  
  if (*(char *)(param_2 + 2) == *(char *)(param_3 + 8)) {
    if (*(char *)((int)param_2 + 9) == *(char *)(param_3 + 9)) {
      if ((*(char *)(param_2 + 2) != '\n') && (*(char *)((int)param_2 + 9) != '\x03')) {
        F_00dd9e30(param_1,param_2,param_3,param_4);
        return (uint)param_1;
      }
      puVar1 = (undefined8 *)*param_2;
      fVar2 = ABS(REFG(float, 0x1087f04) -
                  (*(float *)(puVar1 + 1) * *(float *)(puVar1 + 1) +
                  (gen_bits2f((uint)((ulonglong)*puVar1 >> 0x20)) *
                   gen_bits2f((uint)((ulonglong)*puVar1 >> 0x20)) +
                  gen_bits2f((uint)*puVar1) * gen_bits2f((uint)*puVar1))));
      if ((!GEN_ISNAN(param_4) && !GEN_ISNAN(fVar2)) && (!(param_4 < fVar2) && param_4 != fVar2)) {
        *param_1 = 1;
        return (uint)param_1;
      }
      *param_1 = 0;
      return (uint)param_1;
    }
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00ddaa90 */
uint F_00ddaa90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xddaa90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 * puVar1;
  char * pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  iVar3 = 0;
  if (0 < param_4) {
    iVar5 = param_3 - param_2;
    iVar4 = param_2;
    do {
      if (*(char *)(iVar4 + 10) != *(char *)(iVar4 + 10 + iVar5)) goto LAB_00ddab5a;
      switch((unsigned int)(uintptr_t)(*(char *)(iVar4 + 10))) {
      case '\x01': ;
      case '\n': ;
        fVar6 = *param_5;
        puVar1 = &(*(undefined1 *)(gen_frame + 0xb));
        break;
      case '\x02': ;
      case '\x04': ;
      case '\x05': ;
        pcVar2 = (char *)F_00dda990(&(*(undefined1 *)(gen_frame + 0xa)),iVar4,iVar5 + iVar4,param_5[1]);
        goto LAB_00ddab37;
      case '\x03': ;
        fVar6 = param_5[2];
        puVar1 = &(*(undefined1 *)(gen_frame + 0x9));
        break;
      default: ;
        fVar6 = param_5[3];
        puVar1 = &(*(undefined1 *)(gen_frame + 0x7));
        break;
      case '\t': ;
        fVar6 = param_5[4];
        puVar1 = &(*(undefined1 *)(gen_frame + 0x8));
      }
      pcVar2 = (char *)F_00dd9e30(puVar1,iVar4,iVar5 + iVar4,fVar6);
LAB_00ddab37: ;
      if (*pcVar2 == '\0') {
LAB_00ddab5a: ;
        *param_1 = 0;
        return (uint)param_1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < param_4);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00ddab90 */
uint F_00ddab90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddab90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x204);
  uVar2 = *(uint *)(param_1 + 0x200);
  if (((*(int *)(param_2 + 0x204) == iVar1) || (uVar2 != *(uint *)(param_2 + 0x200))) &&
     (0 < (int)uVar2)) {
    uVar3 = uVar2;
    iVar4 = param_1;
    do {
      uVar2 = F_00dda4c0(iVar4,(param_2 - param_1) + iVar4,iVar1);
      iVar4 = iVar4 + 0x10;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return uVar2;
}

/* ref: FUN_00ddabf0 */
uint F_00ddabf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xddabf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x3d0];
  uint uVar1;
  int iVar2;
  
  F_00dd7940(((undefined1 *)(gen_frame + 0x214)));
  ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1,((undefined1 *)(gen_frame + 0x214)));
  uVar1 = F_00dd7a40(((undefined1 *)(gen_frame + 0x214)),param_2,param_3);
  if (-1 < (int)uVar1) {
    (*(uint *)(gen_frame + 0x31c)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x3bc)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c0)) = 0xffffffff;
    (*(undefined2 *)(gen_frame + 0x3c4)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c8)) = 3;
    (*(undefined4 *)(gen_frame + 0x318)) = 1;
    (*(undefined1 *)(gen_frame + 0x39c)) = 9;
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x20))(param_1,&(*(undefined4 *)(gen_frame + 0x3bc)),&(*(undefined4 *)(gen_frame + 0x318)),((byte *)(gen_frame + 0x8)));
    if (uVar1 == 1) {
      if ((int)(param_4[2] & 0x3fffffff) < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 516))) {
        iVar2 = (param_4[2] & 0x3fffffff) * 2;
        if (iVar2 <= (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 516))) {
          iVar2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 516));
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_4,iVar2,0x10);
      }
      param_4[1] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 516));
      ((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1,((byte *)(gen_frame + 0x8)),0,*param_4);
      ((code *)*(gen_code32 *)(*param_1 + 0x34))(param_1,((byte *)(gen_frame + 0x8)));
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00ddaf50 */
uint F_00ddaf50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xddaf50u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  uint uVar1;
  undefined1 * puVar2;
  int iVar3;
  
  (*(undefined4 *)(gen_frame + 0x20c)) = 0;
  (*(undefined4 *)(gen_frame + 0x210)) = 0xffffffff;
  (*(undefined2 *)(gen_frame + 0x214)) = 0;
  (*(undefined4 *)(gen_frame + 0x218)) = 3;
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x1c))(param_1,&(*(undefined4 *)(gen_frame + 0x20c)),((undefined1 *)(gen_frame + 0x0)));
  if (uVar1 == 1) {
    if (0 < (*(int *)(gen_frame + 0x200))) {
      puVar2 = ((undefined1 *)(gen_frame + 0x0));
      iVar3 = (*(int *)(gen_frame + 0x200));
      do {
        F_00ddacf0(puVar2,param_2,param_3,(*(undefined4 *)(gen_frame + 0x204)));
        puVar2 = puVar2 + 0x10;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    ((code *)*(gen_code32 *)(*param_1 + 0x34))(param_1,((undefined1 *)(gen_frame + 0x0)));
    return 0;
  }
  return 1;
}

/* ref: FUN_00ddaff0 */
uint F_00ddaff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xddaff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  int iVar2;
  LPVOID pvVar3;
  int * piVar4;
  byte * pbVar5;
  int iVar6;
  uint uVar7;
  DWORD dwTlsIndex;
  int local_c;
  
  uVar1 = param_2[0x80];
  if ((int)uVar1 < 1) {
    *param_1 = 0;
    return (uint)param_1;
  }
  if (uVar1 == 1) {
    *param_3 = *param_2;
    *param_4 = (uint)(byte)(&REFG(undefined, 0x114962c))[*(byte *)(param_2 + 2)] *
               (uint)*(byte *)((int)param_2 + 9) + 3 & 0xfffffffc;
    *param_1 = 1;
    return (uint)param_1;
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar4 = *(int * PTR32 *)((int)pvVar3 + 0xc);
  uVar7 = uVar1 * 0x10 + 0x7f & 0xffffff80;
  if ((*(int *)((int)pvVar3 + 8) < (int)uVar7) ||
     (*(uint *)((int)pvVar3 + 0x10) < (int)piVar4 + uVar7)) {
    piVar4 = (int *)F_00d94390(pvVar3,uVar7);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = (int)piVar4 + uVar7;
  }
  F_00da1010(piVar4,param_2,uVar1 * 0x10);
  if (1 < (int)uVar1) {
    F_00ddb900(piVar4,0,uVar1 - 1,((code *)REFP(0xddb630)));
  }
  dwTlsIndex = REFG(undefined4, 0x15d9a88);
  iVar2 = *piVar4;
  local_c = 0;
  iVar6 = iVar2;
  if (0 < (int)uVar1) {
    pbVar5 = (byte *)(param_2 + 2);
    do {
      if (*(int *)(pbVar5 + -8) != iVar6) {
        *param_1 = 0;
        goto LAB_00ddb11e;
      }
      iVar6 = iVar6 + ((uint)(byte)(&REFG(undefined, 0x114962c))[*pbVar5] * (uint)pbVar5[1] + 3 & 0xfffffffc);
      local_c = local_c + 1;
      pbVar5 = pbVar5 + 0x10;
    } while (local_c < (int)uVar1);
  }
  *param_4 = iVar6 - iVar2;
  *param_3 = iVar2;
  dwTlsIndex = REFG(undefined4, 0x15d9a88);
  *param_1 = 1;
LAB_00ddb11e: ;
  pvVar3 = gen_imp_TlsGetValue(dwTlsIndex);
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar7) ||
      (uVar7 + (int)piVar4 != *(int *)((int)pvVar3 + 0xc))) ||
     (*(int * PTR32 *)((int)pvVar3 + 0x14) == piVar4)) {
    F_00d945c0(pvVar3,piVar4,uVar7);
  }
  else {
    *(int * PTR32 *)((int)pvVar3 + 0xc) = piVar4;
  }
  if (-1 < (int)(uVar1 | 0x80000000)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),piVar4,uVar1 << 4);
  }
  return (uint)param_1;
}

/* ref: FUN_00ddb590 */
uint F_00ddb590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xddb590u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = param_1;
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(param_1 + 2))) {
  case 1: ;
  case 3: ;
  case 9: ;
  case 10: ;
    uVar1 = F_00dd9b30(param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  case 2: ;
  case 4: ;
  case 5: ;
    uVar1 = F_00ddb190(param_2,param_3,param_1,param_4,param_5);
    return uVar1;
  case 6: ;
  case 7: ;
  case 8: ;
    uVar1 = F_00dd9ad0(param_2,param_1,param_3,param_4,param_5);
  }
  return uVar1;
}

/* ref: FUN_00ddb630 */
uint F_00ddb630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddb630u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_00ddb650 */
uint F_00ddb650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xddb650u, gen_a0, gen_a1, gen_a2, 0u);
  char * in_ecx = (char *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(bool *)param_2 = *in_ecx != (char)param_3;
  return param_2;
}

/* ref: FUN_00ddb670 */
uint F_00ddb670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddb670u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00ddb6c0 */
uint F_00ddb6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddb6c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00ddb6e0 */
uint F_00ddb6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddb6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = 0;
  return (uint)param_1;
}

/* ref: FUN_00ddb700 */
uint F_00ddb700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddb700u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  return (uint)param_2;
}

/* ref: FUN_00ddb740 */
uint F_00ddb740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xddb740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00ddb7c0 */
uint F_00ddb7c0(unsigned int gen_a0)
{
  GEN_ENTER(0xddb7c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138b8c);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138b88);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138b84);
  *param_1 = *(undefined4 *)&REFG(undefined, 0x1138b80);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00ddb7e0 */
uint F_00ddb7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xddb7e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 * 0x10 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00ddb820 */
uint F_00ddb820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddb820u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 0x10 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00ddb870 */
uint F_00ddb870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddb870u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = 0;
  return (uint)param_1;
}

/* ref: FUN_00ddb890 */
uint F_00ddb890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddb890u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  return (uint)param_2;
}

/* ref: FUN_00ddb8b0 */
uint F_00ddb8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddb8b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ddb900 */
unsigned int F_00ddb900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xddb900u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 * puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  do {
    puVar4 = ((undefined8 *)GEN_TOP(((param_2 + param_3 >> 1) * 0x10 + param_1)));
    (*(undefined8 *)(gen_frame + 0x0)) = *puVar4;
    (*(undefined8 *)(gen_frame + 0x8)) = puVar4[1];
    iVar7 = param_3;
    iVar8 = param_2;
    do {
      iVar5 = iVar8 * 0x10 + param_1;
      (*(int *)(gen_frame + 0x1c)) = iVar5;
      uVar6 = (*param_4)(iVar5,&(*(undefined8 *)(gen_frame + 0x0)));
      cVar3 = (char)uVar6;
      iVar5 = (*(int *)(gen_frame + 0x1c));
      while (cVar3 != '\0') {
        iVar8 = iVar8 + 1;
        (*(int *)(gen_frame + 0x1c)) = iVar5 + 0x10;
        uVar6 = (*param_4)(iVar5 + 0x10,&(*(undefined8 *)(gen_frame + 0x0)));
        iVar5 = (*(int *)(gen_frame + 0x1c));
        cVar3 = (char)uVar6;
      }
      iVar5 = param_1 + iVar7 * 0x10;
      (*(int *)(gen_frame + 0x1c)) = iVar5;
      uVar6 = (*param_4)(&(*(undefined8 *)(gen_frame + 0x0)),iVar5);
      cVar3 = (char)uVar6;
      while (cVar3 != '\0') {
        iVar5 = (*(int *)(gen_frame + 0x1c)) + -0x10;
        iVar7 = iVar7 + -1;
        (*(int *)(gen_frame + 0x1c)) = iVar5;
        uVar6 = (*param_4)(&(*(undefined8 *)(gen_frame + 0x0)),iVar5);
        cVar3 = (char)uVar6;
      }
      if (iVar7 < iVar8) break;
      if (iVar7 != iVar8) {
        iVar5 = iVar7 * 0x10;
        uVar1 = *(undefined8 *)(iVar5 + param_1);
        uVar2 = *(undefined8 *)(iVar5 + 8 + param_1);
        puVar4 = (undefined8 *)(iVar8 * 0x10 + param_1);
        *(undefined8 *)(iVar5 + param_1) = *(undefined8 *)(iVar8 * 0x10 + param_1);
        ((undefined8 *)(iVar5 + param_1))[1] = puVar4[1];
        *puVar4 = uVar1;
        puVar4[1] = uVar2;
      }
      iVar7 = iVar7 + -1;
      iVar8 = iVar8 + 1;
    } while (iVar8 <= iVar7);
    if (param_2 < iVar7) {
      F_00ddb900(param_1,param_2,iVar7,param_4);
    }
    param_2 = iVar8;
    if (param_3 <= iVar8) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00ddba30 */
uint F_00ddba30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddba30u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ddba40 */
uint F_00ddba40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddba40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00ddba50 */
unsigned int F_00ddba50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xddba50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (1 < param_2) {
    F_00ddb900(param_1,0,param_2 + -1,param_3);
  }
  return 0;
}

/* ref: FUN_00ddba80 */
uint F_00ddba80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddba80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *in_ecx = *param_2;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  in_ecx[3] = 0;
  return (uint)param_2;
}

/* ref: FUN_00ddbaa0 */
uint F_00ddbaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddbaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined8 * in_ecx = (undefined8 *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(in_ecx + 1);
  return (uint)param_2;
}

/* ref: FUN_00ddbac0 */
uint F_00ddbac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddbac0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ddbad0 */
uint F_00ddbad0(unsigned int gen_a0)
{
  GEN_ENTER(0xddbad0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00ddbb90 */
uint F_00ddbb90(unsigned int gen_a0)
{
  GEN_ENTER(0xddbb90u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00ddbc50 */
uint F_00ddbc50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddbc50u, gen_a0, gen_a1, 0u, 0u);
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
    uVar2 = param_1 * 0x10 + 0x7f & 0xffffff80;
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

/* ref: FUN_00ddbcc0 */
uint F_00ddbcc0(unsigned int gen_a0)
{
  GEN_ENTER(0xddbcc0u, gen_a0, 0u, 0u, 0u);
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
  uVar3 = iVar2 * 0x10 + 0x7fU & 0xffffff80;
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
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar3 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: FUN_00ddbd50 */
uint F_00ddbd50(unsigned int gen_a0)
{
  GEN_ENTER(0xddbd50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  default: ;
    return 0;
  case 1: ;
    return 1;
  case 2: ;
    return 2;
  case 3: ;
  case 4: ;
    return 3;
  }
}

/* ref: FUN_00ddbd90 */
uint F_00ddbd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddbd90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    return param_2;
  case 2: ;
    return param_2 * 2;
  case 3: ;
    return param_2 * 3;
  case 4: ;
    return param_2 + 2;
  default: ;
    return 0;
  }
}

/* ref: FUN_00ddbde0 */
uint F_00ddbde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddbde0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    return param_2;
  case 2: ;
    return (int)param_2 / 2;
  case 3: ;
    return (int)param_2 / 3;
  case 4: ;
    return param_2 - 2;
  default: ;
    return 0;
  }
}

/* ref: FUN_00ddbe50 */
unsigned int F_00ddbe50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xddbe50u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  int iVar11;
  int local_4c;
  int local_48;
  int local_44;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_8;
  
  uVar2 = (*(undefined4 *)&gen_args[2]);
  uVar3 = 0;
  local_2c = 0xffffffff;
  local_28 = 0xffffffff;
  local_24 = 0xffffffff;
  local_4c = -1;
  local_48 = -1;
  local_44 = -1;
  iVar5 = 0;
  bVar1 = false;
  local_8 = 0;
  if (0 < (*(int *)&gen_args[4])) {
    do {
      uVar6 = local_24;
      switch((unsigned int)(uintptr_t)(uVar2)) {
      case 1: ;
        local_2c = uVar3;
        local_28 = uVar3;
        local_24 = uVar3;
        if ((*(int *)&gen_args[1]) != 0) {
          if ((*(int *)&gen_args[3]) == 1) {
            uVar6 = (uint)*(ushort *)((*(int *)&gen_args[1]) + uVar3 * 2);
            local_2c = uVar6;
            local_28 = uVar6;
            local_24 = uVar6;
          }
          else {
            uVar6 = *(uint *)((*(int *)&gen_args[1]) + uVar3 * 4);
            local_2c = uVar6;
            local_28 = uVar6;
            local_24 = uVar6;
          }
        }
        break;
      case 2: ;
        uVar6 = uVar3;
        if ((*(int *)&gen_args[1]) != 0) {
          if ((*(int *)&gen_args[3]) == 1) {
            uVar6 = (uint)*(ushort *)((*(int *)&gen_args[1]) + uVar3 * 2);
          }
          else {
            uVar6 = *(uint *)((*(int *)&gen_args[1]) + uVar3 * 4);
          }
        }
        uVar3 = uVar3 + 1;
        local_2c = uVar6;
        local_28 = uVar3;
        local_24 = uVar3;
        if ((*(int *)&gen_args[1]) != 0) {
          if ((*(int *)&gen_args[3]) == 1) {
            uVar6 = (uint)*(ushort *)((*(int *)&gen_args[1]) + uVar3 * 2);
            local_28 = uVar6;
            local_24 = uVar6;
          }
          else {
            uVar6 = *(uint *)((*(int *)&gen_args[1]) + uVar3 * 4);
            local_28 = uVar6;
            local_24 = uVar6;
          }
        }
        break;
      case 3: ;
switchD_00ddbea3_caseD_3: ;
        uVar6 = uVar3;
        if ((*(int *)&gen_args[1]) != 0) {
          if ((*(int *)&gen_args[3]) == 1) {
            uVar6 = (uint)*(ushort *)((*(int *)&gen_args[1]) + uVar3 * 2);
          }
          else {
            uVar6 = *(uint *)((*(int *)&gen_args[1]) + uVar3 * 4);
          }
        }
        uVar4 = uVar3 + 1;
        if ((*(int *)&gen_args[1]) != 0) {
          if ((*(int *)&gen_args[3]) == 1) {
            uVar4 = (uint)*(ushort *)((*(int *)&gen_args[1]) + uVar4 * 2);
          }
          else {
            uVar4 = *(uint *)((*(int *)&gen_args[1]) + uVar4 * 4);
          }
        }
        uVar3 = uVar3 + 2;
        local_2c = uVar6;
        local_28 = uVar4;
        local_24 = uVar3;
        if ((*(int *)&gen_args[1]) != 0) {
          if ((*(int *)&gen_args[3]) == 1) {
            local_24 = (uint)*(ushort *)((*(int *)&gen_args[1]) + uVar3 * 2);
          }
          else {
            local_24 = *(uint *)((*(int *)&gen_args[1]) + uVar3 * 4);
          }
        }
        break;
      case 4: ;
        if ((int)local_2c < 0) goto switchD_00ddbea3_caseD_3;
        local_2c = local_28;
        local_28 = local_24;
        uVar6 = uVar3;
        if ((*(int *)&gen_args[1]) != 0) {
          if ((*(int *)&gen_args[3]) == 1) {
            uVar6 = (uint)*(ushort *)((*(int *)&gen_args[1]) + uVar3 * 2);
          }
          else {
            uVar6 = *(uint *)((*(int *)&gen_args[1]) + uVar3 * 4);
          }
        }
        uVar3 = uVar3 + 1;
        if (bVar1) {
          local_28 = uVar6;
          uVar6 = local_24;
        }
      default: ;
        goto switchD_00ddbea3_default;
      }
      uVar3 = uVar3 + 1;
      uVar6 = local_24;
switchD_00ddbea3_default: ;
      local_24 = uVar6;
      bVar1 = (bool)(bVar1 ^ 1);
      iVar8 = local_24 + (*(int *)&gen_args[8]);
      iVar11 = local_28 + (*(int *)&gen_args[8]);
      iVar9 = local_2c + (*(int *)&gen_args[8]);
      uVar7 = (undefined2)iVar9;
      uVar10 = (undefined2)iVar11;
      (*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[2]) + 0)) = (undefined2)iVar8;
      switch((unsigned int)(uintptr_t)((*(undefined4 *)&gen_args[6]))) {
      case 1: ;
switchD_00ddbfe3_caseD_1: ;
        if ((*(int *)&gen_args[5]) != 0) {
          if ((*(int *)&gen_args[7]) == 1) {
            *(undefined2 *)((*(int *)&gen_args[5]) + iVar5 * 2) = uVar7;
            iVar5 = iVar5 + 1;
          }
          else {
            *(int *)((*(int *)&gen_args[5]) + iVar5 * 4) = iVar9;
            iVar5 = iVar5 + 1;
          }
        }
        break;
      case 2: ;
        if ((*(int *)&gen_args[5]) != 0) {
          if ((*(int *)&gen_args[7]) == 1) {
            *(undefined2 *)((*(int *)&gen_args[5]) + iVar5 * 2) = uVar7;
            *(undefined2 *)((*(int *)&gen_args[5]) + 2 + iVar5 * 2) = uVar10;
            iVar5 = iVar5 + 2;
          }
          else {
            *(int *)((*(int *)&gen_args[5]) + iVar5 * 4) = iVar9;
            *(int *)((*(int *)&gen_args[5]) + 4 + iVar5 * 4) = iVar11;
            iVar5 = iVar5 + 2;
          }
        }
        break;
      case 3: ;
switchD_00ddbfe3_caseD_3: ;
        if ((*(int *)&gen_args[5]) != 0) {
          if ((*(int *)&gen_args[7]) == 1) {
            *(undefined2 *)((*(int *)&gen_args[5]) + iVar5 * 2) = uVar7;
            *(undefined2 *)((*(int *)&gen_args[5]) + 2 + iVar5 * 2) = uVar10;
            *(undefined2 *)((*(int *)&gen_args[5]) + 4 + iVar5 * 2) = (undefined2)(*(undefined4 *)&gen_args[2]);
          }
          else {
            *(int *)((*(int *)&gen_args[5]) + iVar5 * 4) = iVar9;
            *(int *)((*(int *)&gen_args[5]) + 4 + iVar5 * 4) = iVar11;
            *(int *)((*(int *)&gen_args[5]) + 8 + iVar5 * 4) = iVar8;
          }
          iVar5 = iVar5 + 3;
        }
        break;
      case 4: ;
        if (local_4c < 0) goto switchD_00ddbfe3_caseD_3;
        if (((iVar9 != local_4c) && (iVar9 != local_48)) && (iVar9 != local_44))
        goto switchD_00ddbfe3_caseD_1;
        if (((iVar11 == local_4c) || (iVar11 == local_48)) || (iVar11 == local_44)) {
          if ((*(int *)&gen_args[5]) != 0) {
            if ((*(int *)&gen_args[7]) == 1) {
              *(undefined2 *)((*(int *)&gen_args[5]) + iVar5 * 2) = (undefined2)(*(undefined4 *)&gen_args[2]);
              iVar5 = iVar5 + 1;
            }
            else {
              *(int *)((*(int *)&gen_args[5]) + iVar5 * 4) = iVar8;
              iVar5 = iVar5 + 1;
            }
          }
        }
        else if ((*(int *)&gen_args[5]) != 0) {
          if ((*(int *)&gen_args[7]) == 1) {
            *(undefined2 *)((*(int *)&gen_args[5]) + iVar5 * 2) = uVar10;
            iVar5 = iVar5 + 1;
          }
          else {
            *(int *)((*(int *)&gen_args[5]) + iVar5 * 4) = iVar11;
            iVar5 = iVar5 + 1;
          }
        }
      }
      local_8 = local_8 + 1;
      local_4c = iVar9;
      local_48 = iVar11;
      local_44 = iVar8;
    } while (local_8 < (*(int *)&gen_args[4]));
  }
  return 0;
}

/* ref: FUN_00ddc130 */
uint F_00ddc130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xddc130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  uint uVar2;
  
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 <= param_3) {
    iVar1 = param_3;
  }
  *(int *)((int)this + 4) = iVar1;
  if (param_2 == 1) {
    uVar2 = *(uint *)this;
    if (-1 < (int)uVar2) {
      if ((int)uVar2 < 2) {
        *(undefined4 *)this = 1;
        return uVar2;
      }
      if (uVar2 == 2) {
        *(undefined4 *)this = 2;
        return uVar2;
      }
    }
  }
  else {
    if (param_2 == 2) {
      uVar2 = (2 < *(uint *)this) + 2;
      *(uint *)this = uVar2;
      return uVar2;
    }
    uVar2 = param_2 - 4;
    if (uVar2 == 0) {
      uVar2 = *(uint *)this;
      if ((uVar2 == 0) || (uVar2 == 4)) {
        *(undefined4 *)this = 4;
        return uVar2;
      }
    }
  }
  *(undefined4 *)this = 3;
  return uVar2;
}

/* ref: FUN_00ddc1b0 */
uint F_00ddc1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xddc1b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int iVar1;
  int iVar2;
  short * psVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  
  if (param_1 == 3) {
    iVar2 = param_4[1];
    iVar1 = iVar2 + param_2;
    if ((int)(param_4[2] & 0x3fffffffU) < iVar1) {
      iVar5 = (param_4[2] & 0x3fffffffU) * 2;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
      }
      F_00d95690(param_5,param_4,iVar5,2);
    }
    iVar1 = *param_4;
    param_4[1] = param_4[1] + param_2;
    psVar3 = (short *)0x0;
    if (0 < param_2) {
      do {
        *(short *)(iVar1 + iVar2 * 2 + (int)((int)(uintptr_t)psVar3) * 2) = (short)psVar3 + (short)param_3;
        psVar3 = (short *)((int)psVar3 + 1);
      } while ((int)psVar3 < param_2);
    }
  }
  else {
    psVar3 = (short *)(param_1 - 4);
    if (psVar3 == (short *)0x0) {
      iVar5 = param_4[1];
      iVar2 = param_2 * 3 + -6;
      iVar1 = iVar5 + iVar2;
      if ((int)(param_4[2] & 0x3fffffffU) < iVar1) {
        iVar4 = (param_4[2] & 0x3fffffffU) * 2;
        if (iVar4 <= iVar1) {
          iVar4 = iVar1;
        }
        F_00d95690(param_5,param_4,iVar4,2);
      }
      param_4[1] = param_4[1] + iVar2;
      uVar7 = 2;
      psVar3 = (short *)(*param_4 + iVar5 * 2);
      if (2 < param_2) {
        do {
          sVar6 = (short)param_3 + (short)uVar7;
          *psVar3 = sVar6 + -2;
          if ((uVar7 & 1) == 0) {
            psVar3[1] = sVar6 + -1;
          }
          else {
            psVar3[1] = sVar6;
            sVar6 = sVar6 + -1;
          }
          psVar3[2] = sVar6;
          uVar7 = uVar7 + 1;
          psVar3 = psVar3 + 3;
        } while ((int)uVar7 < param_2);
        return (uint)psVar3;
      }
    }
  }
  return (uint)psVar3;
}

/* ref: FUN_00ddc2b0 */
uint F_00ddc2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xddc2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  int iVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == 3) {
    iVar1 = param_4[1];
    iVar5 = iVar1 + param_2;
    if ((int)(param_4[2] & 0x3fffffffU) < iVar5) {
      iVar4 = (param_4[2] & 0x3fffffffU) * 2;
      if (iVar4 <= iVar5) {
        iVar4 = iVar5;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_4,iVar4,4);
    }
    iVar5 = *param_4;
    param_4[1] = param_4[1] + param_2;
    piVar2 = (int *)0x0;
    if (0 < param_2) {
      do {
        *(uint *)(iVar5 + iVar1 * 4 + (int)((int)(uintptr_t)piVar2) * 4) = param_3 + (int)piVar2 & 0xffff;
        piVar2 = (int *)((int)piVar2 + 1);
      } while ((int)piVar2 < param_2);
    }
  }
  else {
    piVar2 = (int *)(param_1 + -4);
    if (piVar2 == (int *)0x0) {
      iVar4 = param_4[1];
      iVar1 = param_2 * 3 + -6;
      iVar5 = iVar4 + iVar1;
      if ((int)(param_4[2] & 0x3fffffffU) < iVar5) {
        iVar3 = (param_4[2] & 0x3fffffffU) * 2;
        if (iVar3 <= iVar5) {
          iVar3 = iVar5;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_4,iVar3,4);
      }
      param_4[1] = param_4[1] + iVar1;
      piVar2 = (int *)(*param_4 + iVar4 * 4);
      if (2 < param_2) {
        iVar5 = param_3 + 1;
        do {
          *piVar2 = iVar5 + -1;
          iVar1 = iVar5 + 1;
          if (((1 - param_3) + iVar5 & 1U) == 0) {
            piVar2[1] = iVar5;
            piVar2[2] = iVar1;
          }
          else {
            piVar2[1] = iVar1;
            piVar2[2] = iVar5;
          }
          piVar2 = piVar2 + 3;
          iVar5 = iVar1;
        } while ((1 - param_3) + iVar1 < param_2);
        return (uint)piVar2;
      }
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_00ddc3b0 */
uint F_00ddc3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xddc3b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  short * param_2 = (short *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  short * psVar1;
  short * psVar2;
  int iVar3;
  int iVar4;
  short * psVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  
  sVar10 = (short)param_4;
  if (param_1 == 3) {
    iVar6 = param_5[1];
    iVar8 = iVar6 + param_3;
    if ((int)(param_5[2] & 0x3fffffffU) < iVar8) {
      iVar4 = (param_5[2] & 0x3fffffffU) * 2;
      if (iVar4 <= iVar8) {
        iVar4 = iVar8;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_5,iVar4,2);
    }
    param_5[1] = param_5[1] + param_3;
    psVar2 = (short *)(*param_5 + iVar6 * 2);
    if (param_4 == 0) {
      uVar7 = F_00da1010(psVar2,param_2,param_3 * 2);
      return uVar7;
    }
    if (0 < param_3) {
      iVar6 = (int)param_2 - (int)psVar2;
      iVar8 = param_3;
      do {
        *psVar2 = *(short *)(iVar6 + (int)psVar2) + sVar10;
        psVar2 = psVar2 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  else {
    psVar2 = (short *)(param_1 - 4);
    if (psVar2 == (short *)0x0) {
      iVar4 = param_5[1];
      iVar6 = param_3 * 3 + -6;
      iVar8 = iVar4 + iVar6;
      if ((int)(param_5[2] & 0x3fffffffU) < iVar8) {
        iVar3 = (param_5[2] & 0x3fffffffU) * 2;
        if (iVar3 <= iVar8) {
          iVar3 = iVar8;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_5,iVar3,2);
      }
      param_5[1] = param_5[1] + iVar6;
      uVar7 = 2;
      psVar2 = (short *)(*param_5 + iVar4 * 2);
      psVar1 = param_2;
      if (2 < param_3) {
        do {
          psVar5 = psVar1 + 1;
          *psVar2 = *psVar1 + sVar10;
          if ((uVar7 & 1) == 0) {
            psVar2[1] = *psVar5 + sVar10;
            sVar9 = psVar1[2];
          }
          else {
            psVar2[1] = psVar1[2] + sVar10;
            sVar9 = *psVar5;
          }
          psVar2[2] = sVar9 + sVar10;
          uVar7 = uVar7 + 1;
          psVar2 = psVar2 + 3;
          psVar1 = psVar5;
        } while ((int)uVar7 < param_3);
        return (uint)psVar2;
      }
    }
  }
  return (uint)psVar2;
}

/* ref: FUN_00ddc4e0 */
uint F_00ddc4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xddc4e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  int * piVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  if (param_1 == 3) {
    iVar6 = param_5[1];
    iVar8 = iVar6 + param_3;
    if ((int)(param_5[2] & 0x3fffffffU) < iVar8) {
      iVar4 = (param_5[2] & 0x3fffffffU) * 2;
      if (iVar4 <= iVar8) {
        iVar4 = iVar8;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_5,iVar4,4);
    }
    param_5[1] = param_5[1] + param_3;
    piVar2 = (int *)(*param_5 + iVar6 * 4);
    if (param_4 == 0) {
      uVar7 = F_00da1010(piVar2,param_2,param_3 * 4);
      return uVar7;
    }
    if (0 < param_3) {
      iVar6 = (int)param_2 - (int)piVar2;
      iVar8 = param_3;
      do {
        *piVar2 = *(int *)(iVar6 + (int)piVar2) + param_4;
        piVar2 = piVar2 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  else {
    piVar2 = (int *)(param_1 - 4);
    if (piVar2 == (int *)0x0) {
      iVar4 = param_5[1];
      iVar6 = param_3 * 3 + -6;
      iVar8 = iVar4 + iVar6;
      if ((int)(param_5[2] & 0x3fffffffU) < iVar8) {
        iVar3 = (param_5[2] & 0x3fffffffU) * 2;
        if (iVar3 <= iVar8) {
          iVar3 = iVar8;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_5,iVar3,4);
      }
      param_5[1] = param_5[1] + iVar6;
      uVar7 = 2;
      piVar2 = (int *)(*param_5 + iVar4 * 4);
      piVar1 = param_2;
      if (2 < param_3) {
        do {
          piVar5 = piVar1 + 1;
          *piVar2 = *piVar1 + param_4;
          if ((uVar7 & 1) == 0) {
            piVar2[1] = *piVar5 + param_4;
            iVar8 = piVar1[2];
          }
          else {
            piVar2[1] = piVar1[2] + param_4;
            iVar8 = *piVar5;
          }
          piVar2[2] = iVar8 + param_4;
          uVar7 = uVar7 + 1;
          piVar2 = piVar2 + 3;
          piVar1 = piVar5;
        } while ((int)uVar7 < param_3);
        return (uint)piVar2;
      }
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_00ddc610 */
uint F_00ddc610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddc610u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined2 uVar1;
  uint uVar2;
  LPVOID pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar2 = (uint)param_1[0x14];
  if (uVar2 == 0) {
    uVar2 = F_00ddc1b0((uint)*param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                         param_2,&REFG(undefined * PTR32, 0x13516ac));
  }
  else if (uVar2 == 1) {
    uVar2 = (uint)*param_1;
    if (uVar2 - 3 < 2) {
      uVar2 = F_00ddc3b0(uVar2,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8),0,
                           param_2);
      return uVar2;
    }
  }
  else {
    uVar2 = uVar2 - 2;
    if ((uVar2 == 0) && (uVar2 = *param_1 - 3, uVar2 < 2)) {
      uVar2 = *(uint *)(param_1 + 8);
      ((uint *)(gen_frame + 0x8))[0] = 0;
      ((uint *)(gen_frame + 0x8))[1] = 0;
      ((uint *)(gen_frame + 0x8))[2] = 0x80000000;
      (*(uint *)(gen_frame + 0x18)) = uVar2;
      if (uVar2 == 0) {
        uVar5 = 0;
      }
      else {
        pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        uVar5 = *(uint *)((int)pvVar3 + 0xc);
        uVar4 = uVar2 * 4 + 0x7f & 0xffffff80;
        if ((*(int *)((int)pvVar3 + 8) < (int)uVar4) ||
           (*(uint *)((int)pvVar3 + 0x10) < uVar5 + uVar4)) {
          uVar5 = F_00d94390(pvVar3,uVar4);
        }
        else {
          *(uint *)((int)pvVar3 + 0xc) = uVar5 + uVar4;
        }
      }
      ((uint *)(gen_frame + 0x8))[0] = uVar5;
      ((uint *)(gen_frame + 0x8))[3] = uVar5;
      ((uint *)(gen_frame + 0x8))[2] = uVar2 | 0x80000000;
      F_00ddc4e0((uint)*param_1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8),0,
                   ((uint *)(gen_frame + 0x8)));
      if (0 < *(int *)(param_1 + 8)) {
        iVar6 = 0;
        do {
          uVar1 = *(undefined2 *)(((uint *)(gen_frame + 0x8))[0] + iVar6 * 4);
          if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,2);
          }
          *(undefined2 *)(*param_2 + param_2[1] * 2) = uVar1;
          param_2[1] = param_2[1] + 1;
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(param_1 + 8));
      }
      uVar5 = (*(uint *)(gen_frame + 0x18));
      uVar2 = ((uint *)(gen_frame + 0x8))[3];
      if (((uint *)(gen_frame + 0x8))[3] == ((uint *)(gen_frame + 0x8))[0]) {
        ((uint *)(gen_frame + 0x8))[1] = 0;
      }
      pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar5 = uVar5 * 4 + 0x7f & 0xffffff80;
      if (((*(int *)((int)pvVar3 + 8) < (int)uVar5) ||
          (uVar5 + uVar2 != *(int *)((int)pvVar3 + 0xc))) ||
         (*(uint *)((int)pvVar3 + 0x14) == uVar2)) {
        F_00d945c0(pvVar3,uVar2,uVar5);
      }
      else {
        *(uint *)((int)pvVar3 + 0xc) = uVar2;
      }
      ((uint *)(gen_frame + 0x8))[1] = 0;
      uVar2 = ((uint *)(gen_frame + 0x8))[2];
      if (-1 < (int)((uint *)(gen_frame + 0x8))[2]) {
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                          (&REFG(undefined * PTR32, 0x13516ac),((uint *)(gen_frame + 0x8))[0],((uint *)(gen_frame + 0x8))[2] * 4);
        return uVar2;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00ddc7e0 */
uint F_00ddc7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddc7e0u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  uint uVar2;
  LPVOID pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar2 = (uint)param_1[0x14];
  if (uVar2 == 0) {
    uVar2 = F_00ddc2b0((uint)*param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                         param_2);
  }
  else if (uVar2 == 1) {
    uVar2 = *param_1 - 3;
    if (uVar2 < 2) {
      uVar2 = *(uint *)(param_1 + 8);
      ((uint *)(gen_frame + 0x8))[0] = 0;
      ((uint *)(gen_frame + 0x8))[1] = 0;
      ((uint *)(gen_frame + 0x8))[2] = 0x80000000;
      (*(uint *)(gen_frame + 0x18)) = uVar2;
      if (uVar2 == 0) {
        uVar5 = 0;
      }
      else {
        pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        uVar5 = *(uint *)((int)pvVar3 + 0xc);
        uVar4 = uVar2 * 2 + 0x7f & 0xffffff80;
        if ((*(int *)((int)pvVar3 + 8) < (int)uVar4) ||
           (*(uint *)((int)pvVar3 + 0x10) < uVar5 + uVar4)) {
          uVar5 = F_00d94390(pvVar3,uVar4);
        }
        else {
          *(uint *)((int)pvVar3 + 0xc) = uVar5 + uVar4;
        }
      }
      ((uint *)(gen_frame + 0x8))[0] = uVar5;
      ((uint *)(gen_frame + 0x8))[3] = uVar5;
      ((uint *)(gen_frame + 0x8))[2] = uVar2 | 0x80000000;
      F_00ddc3b0((uint)*param_1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8),0,
                   ((uint *)(gen_frame + 0x8)));
      iVar6 = 0;
      if (0 < *(int *)(param_1 + 8)) {
        do {
          uVar1 = *(ushort *)(((uint *)(gen_frame + 0x8))[0] + iVar6 * 2);
          if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,4);
          }
          *(uint *)(*param_2 + param_2[1] * 4) = (uint)uVar1;
          param_2[1] = param_2[1] + 1;
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(param_1 + 8));
      }
      uVar5 = (*(uint *)(gen_frame + 0x18));
      uVar2 = ((uint *)(gen_frame + 0x8))[3];
      if (((uint *)(gen_frame + 0x8))[3] == ((uint *)(gen_frame + 0x8))[0]) {
        ((uint *)(gen_frame + 0x8))[1] = 0;
      }
      pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar5 = uVar5 * 2 + 0x7f & 0xffffff80;
      if (((*(int *)((int)pvVar3 + 8) < (int)uVar5) ||
          (uVar5 + uVar2 != *(int *)((int)pvVar3 + 0xc))) ||
         (*(uint *)((int)pvVar3 + 0x14) == uVar2)) {
        F_00d945c0(pvVar3,uVar2,uVar5);
      }
      else {
        *(uint *)((int)pvVar3 + 0xc) = uVar2;
      }
      ((uint *)(gen_frame + 0x8))[1] = 0;
      uVar2 = ((uint *)(gen_frame + 0x8))[2];
      if (-1 < (int)((uint *)(gen_frame + 0x8))[2]) {
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                          (&REFG(undefined * PTR32, 0x13516ac),((uint *)(gen_frame + 0x8))[0],(((uint *)(gen_frame + 0x8))[2] & 0x3fffffff) * 2);
        return uVar2;
      }
    }
  }
  else {
    uVar2 = uVar2 - 2;
    if ((uVar2 == 0) && (uVar2 = (uint)*param_1, uVar2 - 3 < 2)) {
      uVar2 = F_00ddc4e0(uVar2,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 8),0,
                           param_2);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_00ddc9a0 */
uint F_00ddc9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xddc9a0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,param_2,1,((undefined1 *)(gen_frame + 0x4)));
  F_00ddc610(((undefined1 *)(gen_frame + 0x4)),param_3);
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1,((undefined1 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_00ddc9e0 */
uint F_00ddc9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xddc9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x1c) = param_1;
  return (uint)this;
}

/* ref: FUN_00ddca40 */
uint F_00ddca40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddca40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x1c);
  if (uVar1 != 0) {
    if (*(int *)((int)this + 0x10) == 1) {
      *((undefined2 *)GEN_TOP((uVar1 + *(int *)((int)this + 0x14) * 2))) = (undefined2)param_1;
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
      return uVar1;
    }
    *((undefined4 *)GEN_TOP((uVar1 + *(int *)((int)this + 0x14) * 4))) = param_1;
    *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
  }
  return uVar1;
}

/* ref: FUN_00ddcc30 */
unsigned int F_00ddcc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xddcc30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  
  uVar2 = (undefined2)param_1;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0xc))) {
  case 1: ;
switchD_00ddcc51_caseD_1: ;
    iVar1 = *(int *)((int)this + 0x1c);
    if (iVar1 == 0) goto switchD_00ddcc51_default;
    if (*(int *)((int)this + 0x10) == 1) {
      *((undefined2 *)GEN_TOP((iVar1 + *(int *)((int)this + 0x14) * 2))) = uVar2;
    }
    else {
      *((int *)GEN_TOP((iVar1 + *(int *)((int)this + 0x14) * 4))) = param_1;
    }
    break;
  case 2: ;
    iVar1 = *(int *)((int)this + 0x1c);
    if (iVar1 != 0) {
      if (*(int *)((int)this + 0x10) == 1) {
        *((undefined2 *)GEN_TOP((iVar1 + *(int *)((int)this + 0x14) * 2))) = uVar2;
      }
      else {
        *((int *)GEN_TOP((iVar1 + *(int *)((int)this + 0x14) * 4))) = param_1;
      }
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
    }
LAB_00ddcc97: ;
    iVar1 = *(int *)((int)this + 0x1c);
    if (iVar1 == 0) goto switchD_00ddcc51_default;
    if (*(int *)((int)this + 0x10) == 1) {
      *((short *)GEN_TOP((iVar1 + *(int *)((int)this + 0x14) * 2))) = (short)param_2;
    }
    else {
      *((int *)GEN_TOP((iVar1 + *(int *)((int)this + 0x14) * 4))) = param_2;
    }
    break;
  case 3: ;
switchD_00ddcc51_caseD_3: ;
    iVar1 = *(int *)((int)this + 0x1c);
    if (iVar1 != 0) {
      if (*(int *)((int)this + 0x10) == 1) {
        *((undefined2 *)GEN_TOP((iVar1 + *(int *)((int)this + 0x14) * 2))) = uVar2;
      }
      else {
        *((int *)GEN_TOP((iVar1 + *(int *)((int)this + 0x14) * 4))) = param_1;
      }
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
    }
    iVar1 = *(int *)((int)this + 0x1c);
    if (iVar1 != 0) {
      if (*(int *)((int)this + 0x10) == 1) {
        *((short *)GEN_TOP((iVar1 + *(int *)((int)this + 0x14) * 2))) = (short)param_2;
      }
      else {
        *((int *)GEN_TOP((iVar1 + *(int *)((int)this + 0x14) * 4))) = param_2;
      }
      *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
    }
    iVar1 = *(int *)((int)this + 0x1c);
    if (iVar1 == 0) goto switchD_00ddcc51_default;
    iVar3 = *(int *)((int)this + 0x14);
    if (*(int *)((int)this + 0x10) != 1) goto LAB_00ddcd4c;
    *(undefined2 *)(iVar1 + iVar3 * 2) = (undefined2)param_3;
    break;
  case 4: ;
    iVar1 = *(int *)this;
    if (iVar1 < 0) goto switchD_00ddcc51_caseD_3;
    if (((param_1 != iVar1) && (param_1 != *(int *)((int)this + 4))) &&
       (param_1 != *(int *)((int)this + 8))) goto switchD_00ddcc51_caseD_1;
    if (((param_2 != iVar1) && (param_2 != *(int *)((int)this + 4))) &&
       (param_2 != *(int *)((int)this + 8))) goto LAB_00ddcc97;
    iVar1 = *(int *)((int)this + 0x1c);
    if (iVar1 == 0) goto switchD_00ddcc51_default;
    iVar3 = *(int *)((int)this + 0x14);
    if (*(int *)((int)this + 0x10) == 1) {
      *(undefined2 *)(iVar1 + iVar3 * 2) = (undefined2)param_3;
      break;
    }
LAB_00ddcd4c: ;
    *(undefined4 *)(iVar1 + iVar3 * 4) = param_3;
    break;
  default: ;
    goto switchD_00ddcc51_default;
  }
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
switchD_00ddcc51_default: ;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  *(int *)((int)this + 4) = param_2;
  *(int *)this = param_1;
  *(undefined4 *)((int)this + 8) = param_3;
  return 0;
}

/* ref: FUN_00ddcd80 */
uint F_00ddcd80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddcd80u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00ddcda0 */
uint F_00ddcda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddcda0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00ddcdc0 */
uint F_00ddcdc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddcdc0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 2;
}

/* ref: FUN_00ddcdd0 */
uint F_00ddcdd0(unsigned int gen_a0)
{
  GEN_ENTER(0xddcdd0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00ddce10 */
uint F_00ddce10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddce10u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ddce60 */
uint F_00ddce60(unsigned int gen_a0)
{
  GEN_ENTER(0xddce60u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00ddcea0 */
uint F_00ddcea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddcea0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ddcef0 */
uint F_00ddcef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddcef0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ddcf60 */
uint F_00ddcf60(unsigned int gen_a0)
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

/* ref: FUN_00ddcff0 */
uint F_00ddcff0(unsigned int gen_a0, unsigned int gen_a1)
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

/* ref: FUN_00ddd060 */
uint F_00ddd060(unsigned int gen_a0)
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

/* ref: FUN_00ddd100 */
uint F_00ddd100(void)
{
  GEN_ENTER(0xddd100u, 0u, 0u, 0u, 0u);
  __time64_t _Var1;
  
  _Var1 = F_00c4b7c2((__time64_t *)0x0);
  return (uint)_Var1;
}

/* ref: FUN_00ddd110 */
uint F_00ddd110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd110u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddd130 */
unsigned int F_00ddd130(void)
{
  GEN_ENTER(0xddd130u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00ddd150 */
unsigned int F_00ddd150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd150u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00de37f0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00ddd170 */
uint F_00ddd170(unsigned int gen_a0)
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
uint F_00ddd1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xddd1e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00ddd210 */
unsigned int F_00ddd210(unsigned int gen_a0)
{
  GEN_ENTER(0xddd210u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00ddd250 */
uint F_00ddd250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd250u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ddd290 */
uint F_00ddd290(unsigned int gen_a0)
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
uint F_00ddd2d0(unsigned int gen_a0)
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
uint F_00ddd310(unsigned int gen_a0)
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
uint F_00ddd350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < *(int *)((int)this + 8)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,*(int *)((int)this + 8) << 4);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0xc);
  }
  return (uint)this;
}

/* ref: FUN_00ddd3c0 */
uint F_00ddd3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddd3d0 */
uint F_00ddd3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddd400 */
unsigned int F_00ddd400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd400u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00de3cd0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00ddd420 */
uint F_00ddd420(unsigned int gen_a0)
{
  GEN_ENTER(0xddd420u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00ddd430 */
uint F_00ddd430(void)
{
  GEN_ENTER(0xddd430u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x80];
  
  F_00de3cd0(((uint *)(gen_frame + 0x0)),0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00ddd460 */
unsigned int F_00ddd460(void)
{
  GEN_ENTER(0xddd460u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00ddd470 */
uint F_00ddd470(unsigned int gen_a0)
{
  GEN_ENTER(0xddd470u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ddd4c0(param_1);
  return uVar1;
}

/* ref: FUN_00ddd480 */
unsigned int F_00ddd480(unsigned int gen_a0)
{
  GEN_ENTER(0xddd480u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x54);
  }
  return 0;
}

/* ref: FUN_00ddd4c0 */
uint F_00ddd4c0(unsigned int gen_a0)
{
  GEN_ENTER(0xddd4c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x34) = 0;
  if ((*(uint *)((int)this + 0x38) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x30),
               *(uint *)((int)this + 0x38) & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0x80000000;
  *(undefined4 *)((int)this + 0x28) = 0;
  if ((*(uint *)((int)this + 0x2c) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x24),
               (*(uint *)((int)this + 0x2c) & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x80000000;
  *(undefined4 *)((int)this + 0x1c) = 0;
  if ((*(uint *)((int)this + 0x20) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18),
               *(uint *)((int)this + 0x20) * 4);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  *(undefined4 *)((int)this + 0x10) = 0;
  if ((*(uint *)((int)this + 0x14) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),
               *(uint *)((int)this + 0x14) * 4);
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
uint F_00ddd5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00ddd4c0(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0x54);
  }
  return (uint)this;
}

/* ref: FUN_00ddd5f0 */
uint F_00ddd5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddd600 */
uint F_00ddd600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddd610 */
uint F_00ddd610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd610u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d91350(in_ecx + 4,param_2);
  return in_ecx;
}

/* ref: FUN_00ddd640 */
uint F_00ddd640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd640u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00d91350(param_1 + 4,param_2);
  }
  return uVar1;
}

/* ref: FUN_00ddd670 */
uint F_00ddd670(unsigned int gen_a0)
{
  GEN_ENTER(0xddd670u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00ddd680 */
uint F_00ddd680(unsigned int gen_a0)
{
  GEN_ENTER(0xddd680u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d91510((undefined *)(param_1 + 4));
  return uVar1;
}

/* ref: FUN_00ddd690 */
unsigned int F_00ddd690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd690u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1149c04));
    F_00d91350(param_1 + 5,param_2);
    F_00d91350(param_1 + 0x10,param_2);
  }
  return 0;
}

/* ref: FUN_00ddd6c0 */
uint F_00ddd6c0(void)
{
  GEN_ENTER(0xddd6c0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x50];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x4)),0);
  F_00d91350(((undefined1 *)(gen_frame + 0x30)),0);
  return 0x1149c04;
}

/* ref: FUN_00ddd790 */
uint F_00ddd790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xddd790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00ddd7c0 */
uint F_00ddd7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xddd7c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00ddd7f0 */
uint F_00ddd7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xddd7f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00ddd820 */
uint F_00ddd820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xddd820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00ddd840 */
unsigned int F_00ddd840(unsigned int gen_a0)
{
  GEN_ENTER(0xddd840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00ddd860 */
unsigned int F_00ddd860(unsigned int gen_a0)
{
  GEN_ENTER(0xddd860u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,8);
  }
  return 0;
}

/* ref: FUN_00ddd890 */
unsigned int F_00ddd890(unsigned int gen_a0)
{
  GEN_ENTER(0xddd890u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x10);
  }
  return 0;
}

/* ref: FUN_00ddd8c0 */
unsigned int F_00ddd8c0(unsigned int gen_a0)
{
  GEN_ENTER(0xddd8c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,8);
  }
  return 0;
}

/* ref: FUN_00ddd8f0 */
uint F_00ddd8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd8f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ddd960 */
unsigned int F_00ddd960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddd960u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ddd990 */
uint F_00ddd990(unsigned int gen_a0)
{
  GEN_ENTER(0xddd990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = F_00d91510(this);
  return uVar1;
}

/* ref: FUN_00ddd9b0 */
unsigned int F_00ddd9b0(unsigned int gen_a0)
{
  GEN_ENTER(0xddd9b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00ddd9e0 */
uint F_00ddd9e0(unsigned int gen_a0)
{
  GEN_ENTER(0xddd9e0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00ddda10 */
uint F_00ddda10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddda10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  F_00d91510(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,8);
  }
  return (uint)this;
}

/* ref: FUN_00ddda60 */
uint F_00ddda60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddda60u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dddaa0 */
uint F_00dddaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdddaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + 4 + iVar2 * 8);
    do {
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

/* ref: FUN_00dddb00 */
unsigned int F_00dddb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdddb00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = param_2 + -1;
  if (-1 < iVar2) {
    puVar1 = (undefined4 *)(param_1 + 4 + iVar2 * 8);
    do {
      if ((undefined *)*puVar1 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar1);
      }
      *puVar1 = 0;
      F_00d91510(puVar1 + -1);
      puVar1 = puVar1 + -2;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  return 0;
}

/* ref: FUN_00dddb40 */
unsigned int F_00dddb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdddb40u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dddb70 */
uint F_00dddb70(unsigned int gen_a0)
{
  GEN_ENTER(0xdddb70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + 4 + iVar2 * 8);
    do {
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

/* ref: FUN_00dddbd0 */
uint F_00dddbd0(unsigned int gen_a0)
{
  GEN_ENTER(0xdddbd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  uVar1 = *(uint *)this;
  iVar3 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar3) {
    puVar2 = (undefined4 *)(uVar1 + 4 + iVar3 * 8);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2);
      }
      *puVar2 = 0;
      uVar1 = F_00d91510(puVar2 + -1);
      puVar2 = puVar2 + -2;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00dddc50 */
uint F_00dddc50(unsigned int gen_a0)
{
  GEN_ENTER(0xdddc50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + 4 + iVar2 * 8);
    do {
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

/* ref: FUN_00dddcb0 */
uint F_00dddcb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdddcb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar3) {
    puVar2 = (undefined4 *)(*(int *)this + 4 + iVar3 * 8);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2);
      }
      *puVar2 = 0;
      F_00d91510(puVar2 + -1);
      puVar2 = puVar2 + -2;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
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

/* ref: FUN_00dddd20 */
uint F_00dddd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdddd20u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ddde00 */
uint F_00ddde00(unsigned int gen_a0)
{
  GEN_ENTER(0xddde00u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dddee0 */
uint F_00dddee0(unsigned int gen_a0)
{
  GEN_ENTER(0xdddee0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dddf50 */
uint F_00dddf50(unsigned int gen_a0)
{
  GEN_ENTER(0xdddf50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 8) + -1;
  if (-1 < iVar3) {
    puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4 + iVar3 * 8)));
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2);
      }
      *puVar2 = 0;
      F_00d91510(puVar2 + -1);
      puVar2 = puVar2 + -2;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  *(undefined4 *)((int)this + 8) = 0;
  if (-1 < *(int *)((int)this + 0xc)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 4),*(int *)((int)this + 0xc) * 8);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x80000000;
  uVar1 = F_00d91510(this);
  return uVar1;
}

/* ref: FUN_00dddfd0 */
uint F_00dddfd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdddfd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00dddf50(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0x10);
  }
  return (uint)this;
}

/* ref: FUN_00dde010 */
unsigned int F_00dde010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde010u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  iVar1 = param_2 + -1;
  if (-1 < iVar1) {
    this = (undefined *)(iVar1 * 0x10 + param_1);
    do {
      F_00dddf50(this);
      this = (undefined *)((int)this + -0x10);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: FUN_00dde040 */
uint F_00dde040(unsigned int gen_a0)
{
  GEN_ENTER(0xdde040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(iVar2 * 0x10 + uVar1);
    do {
      uVar1 = F_00dddf50(this_00);
      this_00 = (undefined *)((int)this_00 + -0x10);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00dde070 */
uint F_00dde070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(iVar2 * 0x10 + *(int *)this);
    do {
      F_00dddf50(this_00);
      this_00 = (undefined *)((int)this_00 + -0x10);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dde0d0 */
uint F_00dde0d0(unsigned int gen_a0)
{
  GEN_ENTER(0xdde0d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(iVar2 * 0x10 + *(int *)this);
    do {
      F_00dddf50(this_00);
      this_00 = (undefined *)((int)this_00 + -0x10);
      iVar2 = iVar2 + -1;
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
uint F_00dde130(unsigned int gen_a0)
{
  GEN_ENTER(0xdde130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(iVar2 * 0x10 + *(int *)this);
    do {
      F_00dddf50(this_00);
      this_00 = (undefined *)((int)this_00 + -0x10);
      iVar2 = iVar2 + -1;
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
uint F_00dde1a0(unsigned int gen_a0)
{
  GEN_ENTER(0xdde1a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkxAttributeHolder::vf0 */
uint F_00dde1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de47a0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dde210 */
uint F_00dde210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde210u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1149c04));
  F_00d91350(in_ecx + 5,param_2);
  F_00d91350(in_ecx + 0x10,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00dde240 */
uint F_00dde240(unsigned int gen_a0)
{
  GEN_ENTER(0xdde240u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkxNode::vf0 */
uint F_00dde270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de4e40(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00dde2b0 */
uint F_00dde2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dde2c0 */
uint F_00dde2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dde2d0 */
uint F_00dde2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dde310 */
unsigned int F_00dde310(void)
{
  GEN_ENTER(0xdde310u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dde320 */
unsigned int F_00dde320(void)
{
  GEN_ENTER(0xdde320u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dde340 */
uint F_00dde340(unsigned int gen_a0)
{
  GEN_ENTER(0xdde340u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00dde350 */
unsigned int F_00dde350(void)
{
  GEN_ENTER(0xdde350u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00dde360 */
unsigned int F_00dde360(unsigned int gen_a0)
{
  GEN_ENTER(0xdde360u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d91a80((undefined *)*param_1);
  }
  *param_1 = 0;
  return 0;
}

/* ref: FUN_00dde380 */
uint F_00dde380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde380u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a17c));
    uVar1 = F_00d91350(param_1 + 5,param_2);
  }
  return uVar1;
}

/* ref: FUN_00dde3a0 */
uint F_00dde3a0(void)
{
  GEN_ENTER(0xdde3a0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x90];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x4)),0);
  return 0x114a17c;
}

/* ref: FUN_00dde460 */
uint F_00dde460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdde460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00dde490 */
uint F_00dde490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdde490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00dde4c0 */
uint F_00dde4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdde4c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00dde4f0 */
unsigned int F_00dde4f0(unsigned int gen_a0)
{
  GEN_ENTER(0xdde4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00dde510 */
unsigned int F_00dde510(unsigned int gen_a0)
{
  GEN_ENTER(0xdde510u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00dde540 */
unsigned int F_00dde540(unsigned int gen_a0)
{
  GEN_ENTER(0xdde540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00dde5a0 */
unsigned int F_00dde5a0(unsigned int gen_a0)
{
  GEN_ENTER(0xdde5a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00dde5e0 */
uint F_00dde5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0xc);
  }
  return (uint)this;
}

/* ref: FUN_00dde620 */
uint F_00dde620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde620u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dde660 */
unsigned int F_00dde660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde660u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = param_2 + -1;
  if (-1 < iVar1) {
    puVar2 = (undefined4 *)(param_1 + iVar1 * 0xc);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2);
      }
      *puVar2 = 0;
      puVar2 = puVar2 + -3;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: FUN_00dde690 */
uint F_00dde690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde690u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dde6d0 */
uint F_00dde6d0(unsigned int gen_a0)
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
unsigned int F_00dde750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde750u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dde780 */
uint F_00dde780(unsigned int gen_a0)
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
uint F_00dde7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar3) {
    puVar2 = (undefined4 *)(*(int *)this + iVar3 * 0xc);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2);
      }
      *puVar2 = 0;
      puVar2 = puVar2 + -3;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dde870 */
uint F_00dde870(unsigned int gen_a0)
{
  GEN_ENTER(0xdde870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar3) {
    puVar2 = (undefined4 *)(*(int *)this + iVar3 * 0xc);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2);
      }
      *puVar2 = 0;
      puVar2 = puVar2 + -3;
      iVar3 = iVar3 + -1;
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
uint F_00dde8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdde8e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dde950 */
uint F_00dde950(unsigned int gen_a0)
{
  GEN_ENTER(0xdde950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar3) {
    puVar2 = (undefined4 *)(*(int *)this + iVar3 * 0xc);
    do {
      if ((undefined *)*puVar2 != (undefined *)0x0) {
        F_00d91a80((undefined *)*puVar2);
      }
      *puVar2 = 0;
      puVar2 = puVar2 + -3;
      iVar3 = iVar3 + -1;
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
uint F_00dde9c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdde9c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00ddea30 */
uint F_00ddea30(unsigned int gen_a0)
{
  GEN_ENTER(0xddea30u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00ddeaa0 */
uint F_00ddeaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddeaa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114a17c));
  F_00d91350(in_ecx + 5,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00ddeac0 */
uint F_00ddeac0(unsigned int gen_a0)
{
  GEN_ENTER(0xddeac0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkxMaterial::vf0 */
uint F_00ddeaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddeaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00de5200(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddeb30 */
uint F_00ddeb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddeb30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddeb40 */
uint F_00ddeb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddeb40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddeb50 */
uint F_00ddeb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddeb50u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d91350(in_ecx,param_2);
  F_00d91350(in_ecx + 4,param_2);
  return in_ecx;
}

/* ref: FUN_00ddeb90 */
unsigned int F_00ddeb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddeb90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00d91350(param_1,param_2);
    F_00d91350(param_1 + 4,param_2);
  }
  return 0;
}

/* ref: FUN_00ddebd0 */
unsigned int F_00ddebd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddebd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00de5db0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00ddebf0 */
uint F_00ddebf0(unsigned int gen_a0)
{
  GEN_ENTER(0xddebf0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00ddec00 */
uint F_00ddec00(void)
{
  GEN_ENTER(0xddec00u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00de5db0(((uint *)(gen_frame + 0x0)),0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00ddec30 */
uint F_00ddec30(unsigned int gen_a0)
{
  GEN_ENTER(0xddec30u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00d91510((undefined *)((int)param_1 + 4));
  uVar1 = F_00d91510(param_1);
  return uVar1;
}

/* ref: FUN_00ddec50 */
uint F_00ddec50(unsigned int gen_a0)
{
  GEN_ENTER(0xddec50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00d91510((undefined *)((int)this + 4));
  uVar1 = F_00d91510(this);
  return uVar1;
}

/* ref: FUN_00ddec70 */
unsigned int F_00ddec70(unsigned int gen_a0)
{
  GEN_ENTER(0xddec70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,8);
  }
  return 0;
}

/* ref: FUN_00ddeca0 */
uint F_00ddeca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddeca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510((undefined *)((int)this + 4));
  F_00d91510(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,8);
  }
  return (uint)this;
}

/* ref: FUN_00ddece0 */
uint F_00ddece0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddece0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddecf0 */
uint F_00ddecf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddecf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dded00 */
uint F_00dded00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdded00u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d91350(in_ecx + 4,param_2);
  return in_ecx;
}

/* ref: FUN_00dded20 */
uint F_00dded20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdded20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00dded40 */
uint F_00dded40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdded40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00d91350(param_1 + 4,param_2);
  }
  return uVar1;
}

/* ref: FUN_00dded70 */
uint F_00dded70(unsigned int gen_a0)
{
  GEN_ENTER(0xdded70u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00dded90 */
uint F_00dded90(unsigned int gen_a0)
{
  GEN_ENTER(0xdded90u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00ddeda0 */
uint F_00ddeda0(unsigned int gen_a0)
{
  GEN_ENTER(0xddeda0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d91510((undefined *)(param_1 + 4));
  return uVar1;
}

/* ref: FUN_00ddedb0 */
uint F_00ddedb0(unsigned int gen_a0)
{
  GEN_ENTER(0xddedb0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a2e8));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddedd0 */
uint F_00ddedd0(void)
{
  GEN_ENTER(0xddedd0u, 0u, 0u, 0u, 0u);
  return 0x114a2e8;
}

/* ref: FUN_00ddede0 */
uint F_00ddede0(unsigned int gen_a0)
{
  GEN_ENTER(0xddede0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a2f8));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddee00 */
uint F_00ddee00(void)
{
  GEN_ENTER(0xddee00u, 0u, 0u, 0u, 0u);
  return 0x114a2f8;
}

/* ref: FUN_00ddee60 */
unsigned int F_00ddee60(unsigned int gen_a0)
{
  GEN_ENTER(0xddee60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00ddee90 */
uint F_00ddee90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xddee90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00ddeeb0 */
unsigned int F_00ddeeb0(unsigned int gen_a0)
{
  GEN_ENTER(0xddeeb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,8);
  }
  return 0;
}

/* ref: FUN_00ddeee0 */
uint F_00ddeee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddeee0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ddef40 */
unsigned int F_00ddef40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddef40u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00ddef70 */
uint F_00ddef70(unsigned int gen_a0)
{
  GEN_ENTER(0xddef70u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00ddefa0 */
uint F_00ddefa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddefa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + 4 + iVar2 * 8);
    do {
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

/* ref: FUN_00ddf000 */
uint F_00ddf000(unsigned int gen_a0)
{
  GEN_ENTER(0xddf000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + 4 + iVar2 * 8);
    do {
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

/* ref: FUN_00ddf070 */
uint F_00ddf070(unsigned int gen_a0)
{
  GEN_ENTER(0xddf070u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddf0a0 */
uint F_00ddf0a0(unsigned int gen_a0)
{
  GEN_ENTER(0xddf0a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x18) = 0;
  if (-1 < *(int *)((int)this + 0x1c)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x14),
               *(int *)((int)this + 0x1c) * 4);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
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

/* ref: FUN_00ddf130 */
uint F_00ddf130(unsigned int gen_a0)
{
  GEN_ENTER(0xddf130u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddf160 */
uint F_00ddf160(unsigned int gen_a0)
{
  GEN_ENTER(0xddf160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x20));
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  uVar1 = F_00ddf0a0(this);
  return uVar1;
}

/* ref: FUN_00ddf180 */
uint F_00ddf180(unsigned int gen_a0)
{
  GEN_ENTER(0xddf180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + 4 + iVar2 * 8);
    do {
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

/* ref: hkxSparselyAnimatedInt::vf0 */
uint F_00ddf1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00ddf0a0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddf230 */
uint F_00ddf230(unsigned int gen_a0)
{
  GEN_ENTER(0xddf230u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddf260 */
uint F_00ddf260(unsigned int gen_a0)
{
  GEN_ENTER(0xddf260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0xc) + -1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 8) + 4 + iVar2 * 8)));
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
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
uint F_00ddf2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)(this + 0x20) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)(this + 0x20));
  }
  *(undefined4 *)(this + 0x20) = 0;
  F_00ddf0a0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: hkxEnum::vf0 */
uint F_00ddf310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00ddf260(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddf350 */
uint F_00ddf350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf350u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddf370 */
unsigned int F_00ddf370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf370u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00d91350(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00ddf390 */
uint F_00ddf390(unsigned int gen_a0)
{
  GEN_ENTER(0xddf390u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00dddf50(param_1);
  return uVar1;
}

/* ref: FUN_00ddf3c0 */
uint F_00ddf3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf3c0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d91350(in_ecx,param_2);
  return in_ecx;
}

/* ref: FUN_00ddf3e0 */
uint F_00ddf3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddf400 */
unsigned int F_00ddf400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf400u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00de62f0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00ddf420 */
uint F_00ddf420(unsigned int gen_a0)
{
  GEN_ENTER(0xddf420u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)param_1 + 4) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)param_1 + 4));
  }
  *(undefined4 *)((int)param_1 + 4) = 0;
  uVar1 = F_00d91510(param_1);
  return uVar1;
}

/* ref: FUN_00ddf450 */
uint F_00ddf450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddf470 */
uint F_00ddf470(unsigned int gen_a0)
{
  GEN_ENTER(0xddf470u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00ddf480 */
uint F_00ddf480(unsigned int gen_a0)
{
  GEN_ENTER(0xddf480u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a498));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddf4a0 */
uint F_00ddf4a0(void)
{
  GEN_ENTER(0xddf4a0u, 0u, 0u, 0u, 0u);
  return 0x114a498;
}

/* ref: FUN_00ddf4c0 */
uint F_00ddf4c0(unsigned int gen_a0)
{
  GEN_ENTER(0xddf4c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddf4f0 */
uint F_00ddf4f0(unsigned int gen_a0)
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
uint F_00ddf540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined4 *)(this + 0xc) = 0;
  if (-1 < *(int *)(this + 0x10)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 8),*(int *)(this + 0x10) << 4);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddf5b0 */
uint F_00ddf5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddf5d0 */
uint F_00ddf5d0(unsigned int gen_a0)
{
  GEN_ENTER(0xddf5d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00ddf5e0 */
uint F_00ddf5e0(unsigned int gen_a0)
{
  GEN_ENTER(0xddf5e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a4f0));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddf600 */
uint F_00ddf600(void)
{
  GEN_ENTER(0xddf600u, 0u, 0u, 0u, 0u);
  return 0x114a4f0;
}

/* ref: FUN_00ddf620 */
uint F_00ddf620(unsigned int gen_a0)
{
  GEN_ENTER(0xddf620u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddf650 */
uint F_00ddf650(unsigned int gen_a0)
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
uint F_00ddf6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined4 *)(this + 0xc) = 0;
  if (-1 < *(int *)(this + 0x10)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 8),*(int *)(this + 0x10) * 4);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddf710 */
uint F_00ddf710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf710u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddf730 */
uint F_00ddf730(unsigned int gen_a0)
{
  GEN_ENTER(0xddf730u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00ddf740 */
uint F_00ddf740(unsigned int gen_a0)
{
  GEN_ENTER(0xddf740u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a544));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddf760 */
uint F_00ddf760(void)
{
  GEN_ENTER(0xddf760u, 0u, 0u, 0u, 0u);
  return 0x114a544;
}

/* ref: FUN_00ddf780 */
uint F_00ddf780(unsigned int gen_a0)
{
  GEN_ENTER(0xddf780u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddf7b0 */
uint F_00ddf7b0(unsigned int gen_a0)
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
uint F_00ddf800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined4 *)(this + 0xc) = 0;
  if (-1 < *(int *)(this + 0x10)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 8),*(int *)(this + 0x10) * 4);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddf870 */
uint F_00ddf870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf870u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddf890 */
uint F_00ddf890(unsigned int gen_a0)
{
  GEN_ENTER(0xddf890u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00ddf8a0 */
uint F_00ddf8a0(unsigned int gen_a0)
{
  GEN_ENTER(0xddf8a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a5d8));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddf8c0 */
uint F_00ddf8c0(void)
{
  GEN_ENTER(0xddf8c0u, 0u, 0u, 0u, 0u);
  return 0x114a5d8;
}

/* ref: FUN_00ddf8f0 */
uint F_00ddf8f0(unsigned int gen_a0)
{
  GEN_ENTER(0xddf8f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddf920 */
uint F_00ddf920(unsigned int gen_a0)
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
uint F_00ddf970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined4 *)(this + 0xc) = 0;
  if (-1 < *(int *)(this + 0x10)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 8),*(int *)(this + 0x10) * 4);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddf9e0 */
uint F_00ddf9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddf9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddfa00 */
uint F_00ddfa00(unsigned int gen_a0)
{
  GEN_ENTER(0xddfa00u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00ddfa10 */
uint F_00ddfa10(unsigned int gen_a0)
{
  GEN_ENTER(0xddfa10u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a630));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddfa30 */
uint F_00ddfa30(void)
{
  GEN_ENTER(0xddfa30u, 0u, 0u, 0u, 0u);
  return 0x114a630;
}

/* ref: FUN_00ddfa50 */
uint F_00ddfa50(unsigned int gen_a0)
{
  GEN_ENTER(0xddfa50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddfa80 */
uint F_00ddfa80(unsigned int gen_a0)
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
uint F_00ddfad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddfad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined4 *)(this + 0xc) = 0;
  if (-1 < *(int *)(this + 0x10)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 8),*(int *)(this + 0x10) * 4);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddfb40 */
uint F_00ddfb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddfb40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddfb60 */
uint F_00ddfb60(unsigned int gen_a0)
{
  GEN_ENTER(0xddfb60u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00ddfb70 */
unsigned int F_00ddfb70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddfb70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a6e4));
    F_00d91350(param_1 + 6,param_2);
    F_00d91350(param_1 + 7,param_2);
  }
  return 0;
}

/* ref: FUN_00ddfba0 */
uint F_00ddfba0(void)
{
  GEN_ENTER(0xddfba0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x8)),0);
  F_00d91350(((undefined1 *)(gen_frame + 0xc)),0);
  return 0x114a6e4;
}

/* ref: FUN_00ddfbe0 */
uint F_00ddfbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddfbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x114a6e4));
  F_00d91350(in_ecx + 6,param_2);
  F_00d91350(in_ecx + 7,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00ddfc10 */
uint F_00ddfc10(unsigned int gen_a0)
{
  GEN_ENTER(0xddfc10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddfc40 */
uint F_00ddfc40(unsigned int gen_a0)
{
  GEN_ENTER(0xddfc40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00d91510((undefined *)((int)this + 0x1c));
  F_00d91510((undefined *)((int)this + 0x18));
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
uint F_00ddfca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddfca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510(this + 0x1c);
  F_00d91510(this + 0x18);
  *(undefined4 *)(this + 0x10) = 0;
  if (-1 < (int)*(uint *)(this + 0x14)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 0xc),*(uint *)(this + 0x14) & 0x3fffffff
              );
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x14) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddfd20 */
uint F_00ddfd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddfd20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddfd30 */
uint F_00ddfd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddfd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114a754));
  F_00d91350((int)this + 8,param_1);
  F_00d91350((int)this + 0xc,param_1);
  F_00d91350((int)this + 0x10,param_1);
  return (uint)this;
}

/* ref: FUN_00ddfd70 */
uint F_00ddfd70(unsigned int gen_a0)
{
  GEN_ENTER(0xddfd70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00d91510((undefined *)((int)this + 0x10));
  F_00d91510((undefined *)((int)this + 0xc));
  uVar1 = F_00d91510((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00ddfdb0 */
unsigned int F_00ddfdb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddfdb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a754));
    F_00d91350(param_1 + 2,param_2);
    F_00d91350(param_1 + 3,param_2);
    F_00d91350(param_1 + 4,param_2);
  }
  return 0;
}

/* ref: FUN_00ddfdf0 */
uint F_00ddfdf0(unsigned int gen_a0)
{
  GEN_ENTER(0xddfdf0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00ddfe00 */
uint F_00ddfe00(void)
{
  GEN_ENTER(0xddfe00u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x8)),0);
  F_00d91350(((undefined1 *)(gen_frame + 0xc)),0);
  F_00d91350(((undefined1 *)(gen_frame + 0x10)),0);
  return 0x114a754;
}

/* ref: FUN_00ddfe50 */
uint F_00ddfe50(unsigned int gen_a0)
{
  GEN_ENTER(0xddfe50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkxTextureFile::vf0 */
uint F_00ddfe80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddfe80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510(this + 0x10);
  F_00d91510(this + 0xc);
  F_00d91510(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00ddfed0 */
uint F_00ddfed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xddfed0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ddfef0 */
uint F_00ddfef0(unsigned int gen_a0)
{
  GEN_ENTER(0xddfef0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00ddff00 */
uint F_00ddff00(unsigned int gen_a0)
{
  GEN_ENTER(0xddff00u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a7ac));
  }
  return (uint)param_1;
}

/* ref: FUN_00ddff20 */
uint F_00ddff20(void)
{
  GEN_ENTER(0xddff20u, 0u, 0u, 0u, 0u);
  return 0x114a7ac;
}

/* ref: FUN_00ddff40 */
uint F_00ddff40(unsigned int gen_a0)
{
  GEN_ENTER(0xddff40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00ddff70 */
uint F_00ddff70(unsigned int gen_a0)
{
  GEN_ENTER(0xddff70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  *(undefined4 *)((int)this + 0x18) = 0;
  if (-1 < *(int *)((int)this + 0x1c)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x14),
               *(int *)((int)this + 0x1c) * 4);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  iVar2 = *(int *)((int)this + 0xc) + -1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 8) + iVar2 * 4)));
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -4);
      iVar2 = iVar2 + -1;
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
uint F_00de0000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00ddff70(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00de0040 */
uint F_00de0040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde0040u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de0060 */
uint F_00de0060(unsigned int gen_a0)
{
  GEN_ENTER(0xde0060u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de0070 */
uint F_00de0070(unsigned int gen_a0)
{
  GEN_ENTER(0xde0070u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a2d8));
  }
  return (uint)param_1;
}

/* ref: FUN_00de0090 */
uint F_00de0090(void)
{
  GEN_ENTER(0xde0090u, 0u, 0u, 0u, 0u);
  return 0x114a2d8;
}

/* ref: FUN_00de00a0 */
uint F_00de00a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xde00a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00de00c0 */
uint F_00de00c0(unsigned int gen_a0)
{
  GEN_ENTER(0xde00c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00de00d0 */
uint F_00de00d0(unsigned int gen_a0)
{
  GEN_ENTER(0xde00d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x114a860));
  }
  return (uint)param_1;
}

/* ref: FUN_00de00f0 */
uint F_00de00f0(void)
{
  GEN_ENTER(0xde00f0u, 0u, 0u, 0u, 0u);
  return 0x114a860;
}

