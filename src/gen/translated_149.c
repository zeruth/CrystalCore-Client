#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00c43a60 */
uint F_00c43a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43a60u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00c43a70 */
uint F_00c43a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43a70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00c43ab0 */
uint F_00c43ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xc43ab0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(param_1 + 4);
}

/* ref: FUN_00c43ae0 */
uint F_00c43ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43ae0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00c43af0 */
uint F_00c43af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43af0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00c43b40 */
unsigned int F_00c43b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*param_1;
    puVar2 = param_1;
    while (puVar1 = puVar3, puVar1 != (undefined4 *)0x0) {
      puVar2 = puVar1;
      puVar3 = (undefined4 *)*puVar1;
    }
    *puVar2 = *(undefined4 *)this;
    param_1[1] = this;
    if (*(int *)this != 0) {
      *(undefined4 * PTR32 *)(*(int *)this + 4) = puVar2;
    }
  }
  *(undefined4 * PTR32 *)this = param_1;
  return 0;
}

/* ref: FUN_00c43b80 */
unsigned int F_00c43b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*param_1;
    puVar3 = param_1;
    while (puVar1 = puVar2, puVar1 != (undefined4 *)0x0) {
      puVar3 = puVar1;
      puVar2 = (undefined4 *)*puVar1;
    }
    *puVar3 = this;
    param_1[1] = *(undefined4 *)((int)this + 4);
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = param_1;
    }
  }
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return 0;
}

/* ref: FUN_00c43bf0 */
uint F_00c43bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43bf0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 + (param_2 - 1U) & ~(param_2 - 1U);
}

/* ref: FUN_00c43c10 */
uint F_00c43c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43c10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 + (param_2 - 1U) & ~(param_2 - 1U);
}

/* ref: FUN_00c43c30 */
uint F_00c43c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  if (param_1 != (int *)0x0) {
    piVar1 = *(int * PTR32 *)((int)this + 4);
    if (piVar1 == (int *)0x0) {
      *(int * PTR32 *)((int)this + 4) = param_1;
      *(int * PTR32 *)this = param_1;
      *param_1 = 0;
      param_1[1] = 0;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      return (uint)param_1;
    }
    piVar4 = (int *)*param_1;
    piVar3 = param_1;
    while (piVar2 = piVar4, piVar2 != (int *)0x0) {
      piVar3 = piVar2;
      piVar4 = (int *)*piVar2;
    }
    *piVar3 = *piVar1;
    param_1[1] = (int)piVar1;
    if (*piVar1 != 0) {
      *(int * PTR32 *)(*piVar1 + 4) = piVar3;
    }
    *piVar1 = (int)param_1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(int * PTR32 *)((int)this + 4) = param_1;
  }
  return (uint)param_1;
}

/* ref: FUN_00c43c90 */
uint F_00c43c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  if (param_1 != (int *)0x0) {
    piVar1 = *(int * PTR32 *)((int)this + 4);
    if (piVar1 == (int *)0x0) {
      *(int * PTR32 *)((int)this + 4) = param_1;
      *(int * PTR32 *)this = param_1;
      *param_1 = 0;
      param_1[1] = 0;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      return (uint)param_1;
    }
    piVar4 = (int *)*param_1;
    piVar3 = param_1;
    while (piVar2 = piVar4, piVar2 != (int *)0x0) {
      piVar3 = piVar2;
      piVar4 = (int *)*piVar2;
    }
    *piVar3 = *piVar1;
    param_1[1] = (int)piVar1;
    if (*piVar1 != 0) {
      *(int * PTR32 *)(*piVar1 + 4) = piVar3;
    }
    *piVar1 = (int)param_1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(int * PTR32 *)((int)this + 4) = param_1;
  }
  return (uint)param_1;
}

/* ref: FUN_00c43cf0 */
unsigned int F_00c43cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc43cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    piVar3 = (int *)*param_1;
    piVar2 = param_1;
    while (piVar1 = piVar3, piVar1 != (int *)0x0) {
      piVar2 = piVar1;
      piVar3 = (int *)*piVar1;
    }
    *piVar2 = param_2;
    param_1[1] = *(int *)(param_2 + 4);
    if (*(undefined4 * PTR32 *)(param_2 + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)(param_2 + 4) = param_1;
    }
    *(int * PTR32 *)(param_2 + 4) = piVar2;
    if (param_2 == *(int *)this) {
      *(int * PTR32 *)this = param_1;
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  }
  return 0;
}

/* ref: FUN_00c43d40 */
unsigned int F_00c43d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if (param_1 != (int *)0x0) {
    if (param_1 == *(int * PTR32 *)this) {
      *(int *)this = *param_1;
    }
    if (param_1 == *(int * PTR32 *)((int)this + 4)) {
      *(int *)((int)this + 4) = param_1[1];
    }
    if (*param_1 != 0) {
      *(int *)(*param_1 + 4) = param_1[1];
    }
    if ((int *)param_1[1] != (int *)0x0) {
      *(int *)param_1[1] = *param_1;
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  }
  return 0;
}

/* ref: FUN_00c43d90 */
uint F_00c43d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43d90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00c43de0 */
uint F_00c43de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc43de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  
  pvVar1 = F_00c48350((undefined *)((int)this + 0x10),param_1 & 0xff,*(gen_size32 *)((int)this + 8));
  return (uint)pvVar1;
}

/* ref: FUN_00c43e30 */
uint F_00c43e30(void)
{
  GEN_ENTER(0xc43e30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c43e40 */
uint F_00c43e40(unsigned int gen_a0)
{
  GEN_ENTER(0xc43e40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (param_1 < 3) {
    *(undefined4 *)(&REFG(undefined, 0x159248c) + param_1 * 4) = 0;
  }
  return param_1;
}

/* ref: FUN_00c43e60 */
uint F_00c43e60(unsigned int gen_a0)
{
  GEN_ENTER(0xc43e60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0) {
    return 0;
  }
  return *(uint *)(param_1 + -8);
}

/* ref: FUN_00c43e80 */
unsigned int F_00c43e80(void)
{
  GEN_ENTER(0xc43e80u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c43e90 */
uint F_00c43e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc43e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  if ((char)param_3 == '\0') {
    for (puVar1 = (undefined4 *)*in_ecx; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1
        ) {
      if (param_2 <= (int)puVar1[2]) {
        return (uint)puVar1;
      }
    }
  }
  else {
    uVar2 = in_ecx[1];
    if (uVar2 != 0) {
      do {
        if (param_2 <= *(int *)(uVar2 + 8)) {
          return uVar2;
        }
        uVar2 = *(uint *)(uVar2 + 4);
      } while (uVar2 != 0);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00c43ee0 */
uint F_00c43ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xc43ee0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c43e60(param_1);
  return uVar1;
}

/* ref: FUN_00c43ef0 */
uint F_00c43ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc43ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  
  if ((char)param_3 == '\0') {
    piVar2 = (int *)((int)param_1 + param_2 + 0x10);
    piVar2[2] = (param_1[2] - param_2) + -0x10;
    *piVar2 = *param_1;
    piVar3 = (int *)param_1[1];
    piVar2[1] = (int)piVar3;
    if (piVar3 != (int *)0x0) {
      *piVar3 = (int)piVar2;
    }
    if (*piVar2 != 0) {
      *(int * PTR32 *)(*piVar2 + 4) = piVar2;
    }
    if (param_1 == *(int * PTR32 *)this) {
      *(int * PTR32 *)this = piVar2;
    }
    if (param_1 == *(int * PTR32 *)((int)this + 4)) {
      *(int * PTR32 *)((int)this + 4) = piVar2;
    }
    param_1[2] = param_2;
    *param_1 = 0;
    param_1[1] = 0;
    return (uint)param_1;
  }
  iVar4 = param_1[2] - param_2;
  puVar1 = (undefined4 *)(iVar4 + (int)param_1);
  puVar1[2] = param_2;
  *puVar1 = 0;
  puVar1[1] = 0;
  param_1[2] = iVar4 + -0x10;
  return (uint)puVar1;
}

/* ref: FUN_00c43f80 */
int F_00c43f80(unsigned int gen_a0)
{
  GEN_ENTER(0xc43f80u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 0;
  for (puVar1 = (undefined4 *)*param_1; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1)
  {
    iVar2 = iVar2 + puVar1[2];
  }
  return iVar2;
}

/* ref: FUN_00c43fb0 */
uint F_00c43fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc43fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * this;
  
  this = (undefined4 *)((int)param_1 + 0xfU & 0xfffffff0);
  uVar2 = param_2;
  if (this != param_1) {
    uVar2 = (int)this + param_2 + (-0x10 - (int)param_1) & 0xfffffff0;
  }
  this[1] = 0;
  *this = 0;
  this[2] = 0;
  this[4] = (uVar2 & 0xfffffff0) - 0x50;
  puVar1 = this + 0x10;
  this[0x11] = 0;
  *puVar1 = 0;
  this[0x12] = this[4];
  F_00c44470(this,puVar1);
  this[6] = puVar1;
  uVar2 = F_00c43e30();
  this[5] = uVar2;
  if (param_3 < 3) {
    *(undefined4 * PTR32 *)(&REFG(undefined, 0x159248c) + param_3 * 4) = this;
  }
  return (uint)this;
}

/* ref: FUN_00c44020 */
uint F_00c44020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  
  piVar6 = *(int * PTR32 *)this;
  if (piVar6 == (int *)0x0) {
    uVar5 = F_00c444d0(this,param_1);
    return uVar5;
  }
  do {
    if (param_1 < piVar6) {
      if (piVar6 != (int *)0x0) {
        if (param_1 != (int *)0x0) {
          piVar4 = (int *)*param_1;
          piVar3 = param_1;
          while (piVar2 = piVar4, piVar2 != (int *)0x0) {
            piVar3 = piVar2;
            piVar4 = (int *)*piVar2;
          }
          *piVar3 = (int)piVar6;
          param_1[1] = piVar6[1];
          if ((undefined4 *)piVar6[1] != (undefined4 *)0x0) {
            *(undefined4 *)piVar6[1] = param_1;
          }
          piVar6[1] = (int)piVar3;
          if (piVar6 == *(int * PTR32 *)this) {
            *(int * PTR32 *)this = param_1;
          }
          *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
        }
        if ((int *)(param_1[2] + 0x10 + (int)param_1) == piVar6) {
          param_1[2] = piVar6[2] + 0x10 + param_1[2];
          if (piVar6 == *(int * PTR32 *)this) {
            *(int *)this = *piVar6;
          }
          if (piVar6 == *(int * PTR32 *)((int)this + 4)) {
            *(int *)((int)this + 4) = piVar6[1];
          }
          if (*piVar6 != 0) {
            *(int *)(*piVar6 + 4) = piVar6[1];
          }
          if ((int *)piVar6[1] != (int *)0x0) {
            *(int *)piVar6[1] = *piVar6;
          }
          *piVar6 = 0;
          piVar6[1] = 0;
          *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
        }
        goto LAB_00c44115;
      }
      break;
    }
    piVar6 = (int *)*piVar6;
  } while (piVar6 != (int *)0x0);
  if (param_1 != (int *)0x0) {
    piVar6 = *(int * PTR32 *)((int)this + 4);
    if (piVar6 == (int *)0x0) {
      *(int * PTR32 *)((int)this + 4) = param_1;
      *(int * PTR32 *)this = param_1;
      *param_1 = 0;
      param_1[1] = 0;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    }
    else {
      piVar4 = (int *)*param_1;
      piVar3 = param_1;
      while (piVar2 = piVar4, piVar2 != (int *)0x0) {
        piVar3 = piVar2;
        piVar4 = (int *)*piVar2;
      }
      *piVar3 = *piVar6;
      param_1[1] = (int)piVar6;
      if (*piVar6 != 0) {
        *(int * PTR32 *)(*piVar6 + 4) = piVar3;
      }
      *piVar6 = (int)param_1;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      *(int * PTR32 *)((int)this + 4) = param_1;
    }
  }
LAB_00c44115: ;
  iVar1 = param_1[1];
  if ((iVar1 != 0) && (((int *)GEN_TOP((*(int *)(iVar1 + 8) + 0x10 + iVar1))) == param_1)) {
    *(int *)(iVar1 + 8) = param_1[2] + 0x10 + *(int *)(iVar1 + 8);
    if (param_1 == *(int * PTR32 *)this) {
      *(int *)this = *param_1;
    }
    if (param_1 == *(int * PTR32 *)((int)this + 4)) {
      *(int *)((int)this + 4) = param_1[1];
    }
    if (*param_1 != 0) {
      *(int *)(*param_1 + 4) = param_1[1];
    }
    if ((int *)param_1[1] != (int *)0x0) {
      *(int *)param_1[1] = *param_1;
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  }
  return (uint)param_1;
}

/* ref: FUN_00c44180 */
uint F_00c44180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00c44020(this,param_1 + -0x10);
  }
  return uVar1;
}

/* ref: FUN_00c441a0 */
uint F_00c441a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc441a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  if (param_1 < 1) {
    return 0;
  }
  uVar2 = param_1 + 0xfU & 0xfffffff0;
  if (0x10 < param_3) {
    uVar2 = uVar2 + 0x10 + param_3 * 2;
  }
  puVar1 = (undefined4 *)F_00c43e90(this,uVar2,param_2);
  if (puVar1 != (undefined4 *)0x0) {
    if ((int)(puVar1[2] - uVar2) < 0x20) {
      F_00c44580(this,puVar1);
    }
    else {
      puVar1 = (undefined4 *)F_00c43ef0(this,puVar1,uVar2,param_2);
    }
    if ((0x10 < param_3) &&
       (uVar2 = ((param_3 + 0xf + (int)puVar1 & ~(param_3 - 1)) - (int)puVar1) - 0x10 >> 4,
       uVar2 != 0)) {
      if (uVar2 == 1) {
        uVar2 = (param_3 >> 4) + 1;
      }
      puVar1[uVar2 * 4] = 0;
      puVar1[uVar2 * 4 + 1] = 0;
      puVar1[uVar2 * 4 + 2] = puVar1[2] + uVar2 * -0x10;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = uVar2 * 0x10 + -0x10;
      F_00c44020(this,puVar1);
      puVar1 = puVar1 + uVar2 * 4;
    }
    if (puVar1 != (undefined4 *)0x0) {
      return (uint)(puVar1 + 4);
    }
  }
  return 0;
}

/* ref: FUN_00c44270 */
uint F_00c44270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc44270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * _Dst;
  
  _Dst = (undefined *)F_00c441a0(this,param_1 * param_2,0,0x10);
  if (_Dst != (undefined *)0x0) {
    F_00c48350(_Dst,0,param_1 * param_2);
  }
  return (uint)_Dst;
}

/* ref: FUN_00c442a0 */
uint F_00c442a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc442a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c44180(this,param_1);
  return uVar1;
}

/* ref: FUN_00c442b0 */
uint F_00c442b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc442b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c441a0(this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c442c0 */
uint F_00c442c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc442c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c44270(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00c442e0 */
uint F_00c442e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc442e0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00c442f0 */
uint F_00c442f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc442f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00c44330 */
uint F_00c44330(unsigned int gen_a0)
{
  GEN_ENTER(0xc44330u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(param_1 + 4);
}

/* ref: FUN_00c44360 */
uint F_00c44360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44360u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00c44370 */
uint F_00c44370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44370u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00c44380 */
unsigned int F_00c44380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*param_1;
    puVar2 = param_1;
    while (puVar1 = puVar3, puVar1 != (undefined4 *)0x0) {
      puVar2 = puVar1;
      puVar3 = (undefined4 *)*puVar1;
    }
    *puVar2 = *(undefined4 *)this;
    param_1[1] = this;
    if (*(int *)this != 0) {
      *(undefined4 * PTR32 *)(*(int *)this + 4) = puVar2;
    }
  }
  *(undefined4 * PTR32 *)this = param_1;
  return 0;
}

/* ref: FUN_00c443c0 */
unsigned int F_00c443c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc443c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*param_1;
    puVar3 = param_1;
    while (puVar1 = puVar2, puVar1 != (undefined4 *)0x0) {
      puVar3 = puVar1;
      puVar2 = (undefined4 *)*puVar1;
    }
    *puVar3 = this;
    param_1[1] = *(undefined4 *)((int)this + 4);
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = param_1;
    }
  }
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return 0;
}

/* ref: FUN_00c44430 */
uint F_00c44430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44430u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 + (param_2 - 1U) & ~(param_2 - 1U);
}

/* ref: FUN_00c44450 */
uint F_00c44450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44450u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 + (param_2 - 1U) & ~(param_2 - 1U);
}

/* ref: FUN_00c44470 */
uint F_00c44470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  if (param_1 != (int *)0x0) {
    piVar1 = *(int * PTR32 *)((int)this + 4);
    if (piVar1 == (int *)0x0) {
      *(int * PTR32 *)((int)this + 4) = param_1;
      *(int * PTR32 *)this = param_1;
      *param_1 = 0;
      param_1[1] = 0;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      return (uint)param_1;
    }
    piVar4 = (int *)*param_1;
    piVar3 = param_1;
    while (piVar2 = piVar4, piVar2 != (int *)0x0) {
      piVar3 = piVar2;
      piVar4 = (int *)*piVar2;
    }
    *piVar3 = *piVar1;
    param_1[1] = (int)piVar1;
    if (*piVar1 != 0) {
      *(int * PTR32 *)(*piVar1 + 4) = piVar3;
    }
    *piVar1 = (int)param_1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(int * PTR32 *)((int)this + 4) = param_1;
  }
  return (uint)param_1;
}

/* ref: FUN_00c444d0 */
uint F_00c444d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc444d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  if (param_1 != (int *)0x0) {
    piVar1 = *(int * PTR32 *)((int)this + 4);
    if (piVar1 == (int *)0x0) {
      *(int * PTR32 *)((int)this + 4) = param_1;
      *(int * PTR32 *)this = param_1;
      *param_1 = 0;
      param_1[1] = 0;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      return (uint)param_1;
    }
    piVar4 = (int *)*param_1;
    piVar3 = param_1;
    while (piVar2 = piVar4, piVar2 != (int *)0x0) {
      piVar3 = piVar2;
      piVar4 = (int *)*piVar2;
    }
    *piVar3 = *piVar1;
    param_1[1] = (int)piVar1;
    if (*piVar1 != 0) {
      *(int * PTR32 *)(*piVar1 + 4) = piVar3;
    }
    *piVar1 = (int)param_1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(int * PTR32 *)((int)this + 4) = param_1;
  }
  return (uint)param_1;
}

/* ref: FUN_00c44530 */
unsigned int F_00c44530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc44530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    piVar3 = (int *)*param_1;
    piVar2 = param_1;
    while (piVar1 = piVar3, piVar1 != (int *)0x0) {
      piVar2 = piVar1;
      piVar3 = (int *)*piVar1;
    }
    *piVar2 = param_2;
    param_1[1] = *(int *)(param_2 + 4);
    if (*(undefined4 * PTR32 *)(param_2 + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)(param_2 + 4) = param_1;
    }
    *(int * PTR32 *)(param_2 + 4) = piVar2;
    if (param_2 == *(int *)this) {
      *(int * PTR32 *)this = param_1;
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  }
  return 0;
}

/* ref: FUN_00c44580 */
unsigned int F_00c44580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if (param_1 != (int *)0x0) {
    if (param_1 == *(int * PTR32 *)this) {
      *(int *)this = *param_1;
    }
    if (param_1 == *(int * PTR32 *)((int)this + 4)) {
      *(int *)((int)this + 4) = param_1[1];
    }
    if (*param_1 != 0) {
      *(int *)(*param_1 + 4) = param_1[1];
    }
    if ((int *)param_1[1] != (int *)0x0) {
      *(int *)param_1[1] = *param_1;
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  }
  return 0;
}

/* ref: FUN_00c445d0 */
unsigned int F_00c445d0(void)
{
  GEN_ENTER(0xc445d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c445e0 */
uint F_00c445e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc445e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00c44600 */
uint F_00c44600(unsigned int gen_a0)
{
  GEN_ENTER(0xc44600u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (&REFG(undefined4, 0x15b2580))[param_1];
}

/* ref: FUN_00c44610 */
byte F_00c44610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((*(uint *)((int)this + 0x18) <= param_1) &&
     (param_1 < *(int *)((int)this + 0x10) + *(uint *)((int)this + 0x18))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00c44670 */
uint F_00c44670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  
  pvVar1 = F_00c48350((undefined *)((int)this + 0x10),param_1 & 0xff,*(gen_size32 *)((int)this + 8));
  return (uint)pvVar1;
}

/* ref: FUN_00c446c0 */
uint F_00c446c0(void)
{
  GEN_ENTER(0xc446c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c446d0 */
uint F_00c446d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc446d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (param_1 < 3) {
    (&REFG(undefined4, 0x15b2580))[param_1] = 0;
  }
  return param_1;
}

/* ref: FUN_00c446f0 */
uint F_00c446f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc446f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0) {
    return 0;
  }
  return *(uint *)(param_1 + -8);
}

/* ref: FUN_00c44710 */
uint F_00c44710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc44710u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 in_edx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(in_edx,param_3,in_eax);
  return (uint)uVar1;
}

/* ref: FUN_00c44730 */
uint F_00c44730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc44730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 in_ecx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(param_3,in_ecx,in_eax);
  return (uint)uVar1;
}

/* ref: FUN_00c44760 */
uint F_00c44760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc44760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  if ((char)param_3 == '\0') {
    for (puVar1 = (undefined4 *)*in_ecx; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1
        ) {
      if (param_2 <= (int)puVar1[2]) {
        return (uint)puVar1;
      }
    }
  }
  else {
    uVar2 = in_ecx[1];
    if (uVar2 != 0) {
      do {
        if (param_2 <= *(int *)(uVar2 + 8)) {
          return uVar2;
        }
        uVar2 = *(uint *)(uVar2 + 4);
      } while (uVar2 != 0);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00c447b0 */
uint F_00c447b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc447b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c446f0(param_1);
  return uVar1;
}

/* ref: FUN_00c447c0 */
uint F_00c447c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc447c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  
  if ((char)param_3 == '\0') {
    piVar2 = (int *)((int)param_1 + param_2 + 0x10);
    piVar2[2] = (param_1[2] - param_2) + -0x10;
    *piVar2 = *param_1;
    piVar3 = (int *)param_1[1];
    piVar2[1] = (int)piVar3;
    if (piVar3 != (int *)0x0) {
      *piVar3 = (int)piVar2;
    }
    if (*piVar2 != 0) {
      *(int * PTR32 *)(*piVar2 + 4) = piVar2;
    }
    if (param_1 == *(int * PTR32 *)this) {
      *(int * PTR32 *)this = piVar2;
    }
    if (param_1 == *(int * PTR32 *)((int)this + 4)) {
      *(int * PTR32 *)((int)this + 4) = piVar2;
    }
    param_1[2] = param_2;
    *param_1 = 0;
    param_1[1] = 0;
    return (uint)param_1;
  }
  iVar4 = param_1[2] - param_2;
  puVar1 = (undefined4 *)(iVar4 + (int)param_1);
  puVar1[2] = param_2;
  *puVar1 = 0;
  puVar1[1] = 0;
  param_1[2] = iVar4 + -0x10;
  return (uint)puVar1;
}

/* ref: FUN_00c44850 */
int F_00c44850(unsigned int gen_a0)
{
  GEN_ENTER(0xc44850u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 0;
  for (puVar1 = (undefined4 *)*param_1; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1)
  {
    iVar2 = iVar2 + puVar1[2];
  }
  return iVar2;
}

/* ref: FUN_00c44880 */
unsigned int F_00c44880(void)
{
  GEN_ENTER(0xc44880u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  
  for (puVar1 = REFG(undefined4 * PTR32, 0x15b258c); puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    F_00c44730(puVar1[4],puVar1[3],puVar1[2],(int)puVar1[2] >> 0x1f);
    if ((undefined4 *)puVar1[5] != (undefined4 *)0x0) {
      *(undefined4 *)puVar1[5] = puVar1[2];
    }
  }
  return 0;
}

/* ref: FUN_00c448c0 */
uint F_00c448c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc448c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * this;
  
  this = (undefined4 *)((int)param_1 + 0xfU & 0xfffffff0);
  uVar2 = param_2;
  if (this != param_1) {
    uVar2 = (int)this + param_2 + (-0x10 - (int)param_1) & 0xfffffff0;
  }
  this[1] = 0;
  *this = 0;
  this[2] = 0;
  this[4] = (uVar2 & 0xfffffff0) - 0x50;
  puVar1 = this + 0x10;
  this[0x11] = 0;
  *puVar1 = 0;
  this[0x12] = this[4];
  F_00c45060(this,puVar1);
  this[6] = puVar1;
  uVar2 = F_00c446c0();
  this[5] = uVar2;
  if (param_3 < 3) {
    (&REFG(undefined4, 0x15b2580))[param_3] = this;
  }
  return (uint)this;
}

/* ref: FUN_00c44930 */
uint F_00c44930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  
  piVar6 = *(int * PTR32 *)this;
  if (piVar6 == (int *)0x0) {
    uVar5 = F_00c450c0(this,param_1);
    return uVar5;
  }
  do {
    if (param_1 < piVar6) {
      if (piVar6 != (int *)0x0) {
        if (param_1 != (int *)0x0) {
          piVar4 = (int *)*param_1;
          piVar3 = param_1;
          while (piVar2 = piVar4, piVar2 != (int *)0x0) {
            piVar3 = piVar2;
            piVar4 = (int *)*piVar2;
          }
          *piVar3 = (int)piVar6;
          param_1[1] = piVar6[1];
          if ((undefined4 *)piVar6[1] != (undefined4 *)0x0) {
            *(undefined4 *)piVar6[1] = param_1;
          }
          piVar6[1] = (int)piVar3;
          if (piVar6 == *(int * PTR32 *)this) {
            *(int * PTR32 *)this = param_1;
          }
          *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
        }
        if ((int *)(param_1[2] + 0x10 + (int)param_1) == piVar6) {
          param_1[2] = piVar6[2] + 0x10 + param_1[2];
          if (piVar6 == *(int * PTR32 *)this) {
            *(int *)this = *piVar6;
          }
          if (piVar6 == *(int * PTR32 *)((int)this + 4)) {
            *(int *)((int)this + 4) = piVar6[1];
          }
          if (*piVar6 != 0) {
            *(int *)(*piVar6 + 4) = piVar6[1];
          }
          if ((int *)piVar6[1] != (int *)0x0) {
            *(int *)piVar6[1] = *piVar6;
          }
          *piVar6 = 0;
          piVar6[1] = 0;
          *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
        }
        goto LAB_00c44a25;
      }
      break;
    }
    piVar6 = (int *)*piVar6;
  } while (piVar6 != (int *)0x0);
  if (param_1 != (int *)0x0) {
    piVar6 = *(int * PTR32 *)((int)this + 4);
    if (piVar6 == (int *)0x0) {
      *(int * PTR32 *)((int)this + 4) = param_1;
      *(int * PTR32 *)this = param_1;
      *param_1 = 0;
      param_1[1] = 0;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    }
    else {
      piVar4 = (int *)*param_1;
      piVar3 = param_1;
      while (piVar2 = piVar4, piVar2 != (int *)0x0) {
        piVar3 = piVar2;
        piVar4 = (int *)*piVar2;
      }
      *piVar3 = *piVar6;
      param_1[1] = (int)piVar6;
      if (*piVar6 != 0) {
        *(int * PTR32 *)(*piVar6 + 4) = piVar3;
      }
      *piVar6 = (int)param_1;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      *(int * PTR32 *)((int)this + 4) = param_1;
    }
  }
LAB_00c44a25: ;
  iVar1 = param_1[1];
  if ((iVar1 != 0) && (((int *)GEN_TOP((*(int *)(iVar1 + 8) + 0x10 + iVar1))) == param_1)) {
    *(int *)(iVar1 + 8) = param_1[2] + 0x10 + *(int *)(iVar1 + 8);
    if (param_1 == *(int * PTR32 *)this) {
      *(int *)this = *param_1;
    }
    if (param_1 == *(int * PTR32 *)((int)this + 4)) {
      *(int *)((int)this + 4) = param_1[1];
    }
    if (*param_1 != 0) {
      *(int *)(*param_1 + 4) = param_1[1];
    }
    if ((int *)param_1[1] != (int *)0x0) {
      *(int *)param_1[1] = *param_1;
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  }
  return (uint)param_1;
}

/* ref: FUN_00c44a90 */
uint F_00c44a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00c44930(this,param_1 + -0x10);
  }
  return uVar1;
}

/* ref: FUN_00c44ab0 */
uint F_00c44ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc44ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  if (param_1 < 1) {
    return 0;
  }
  uVar2 = param_1 + 0xfU & 0xfffffff0;
  if (0x10 < param_3) {
    uVar2 = uVar2 + 0x10 + param_3 * 2;
  }
  puVar1 = (undefined4 *)F_00c44760(this,uVar2,param_2);
  if (puVar1 != (undefined4 *)0x0) {
    if ((int)(puVar1[2] - uVar2) < 0x20) {
      F_00c45170(this,puVar1);
    }
    else {
      puVar1 = (undefined4 *)F_00c447c0(this,puVar1,uVar2,param_2);
    }
    if ((0x10 < param_3) &&
       (uVar2 = ((param_3 + 0xf + (int)puVar1 & ~(param_3 - 1)) - (int)puVar1) - 0x10 >> 4,
       uVar2 != 0)) {
      if (uVar2 == 1) {
        uVar2 = (param_3 >> 4) + 1;
      }
      puVar1[uVar2 * 4] = 0;
      puVar1[uVar2 * 4 + 1] = 0;
      puVar1[uVar2 * 4 + 2] = puVar1[2] + uVar2 * -0x10;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = uVar2 * 0x10 + -0x10;
      F_00c44930(this,puVar1);
      puVar1 = puVar1 + uVar2 * 4;
    }
    if (puVar1 != (undefined4 *)0x0) {
      return (uint)(puVar1 + 4);
    }
  }
  return 0;
}

/* ref: FUN_00c44b80 */
uint F_00c44b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc44b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * _Dst;
  
  _Dst = (undefined *)F_00c44ab0(this,param_1 * param_2,0,0x10);
  if (_Dst != (undefined *)0x0) {
    F_00c48350(_Dst,0,param_1 * param_2);
  }
  return (uint)_Dst;
}

/* ref: FUN_00c44bb0 */
uint F_00c44bb0(void)
{
  GEN_ENTER(0xc44bb0u, 0u, 0u, 0u, 0u);
  F_00c448c0(&REFG(undefined, 0x1592580),0x20000,0,0);
  REFG(undefined4, 0x1592500) = REFG(undefined4, 0x15b2580);
  *(undefined4 *)&REFG(undefined, 0x15b2590) = 0;
  REFG(undefined4, 0x15b258c) = 0;
  *(undefined4 *)&REFG(undefined, 0x15b2594) = 0;
  return REFG(undefined4, 0x15b2580);
}

/* ref: FUN_00c44bf0 */
uint F_00c44bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c44a90(this,param_1);
  return uVar1;
}

/* ref: FUN_00c44c00 */
uint F_00c44c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc44c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c44ab0(this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c44c10 */
uint F_00c44c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc44c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c44b80(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00c44c20 */
unsigned int F_00c44c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44c20u, gen_a0, gen_a1, 0u, 0u);
  uint * in_edi = (uint *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint in_edx;
  
  if (*in_edi != 0) {
    in_edx = F_00c44c00(REFG(void * PTR32, 0x1592500),param_2,0,0x80);
    F_00c44710(param_2,in_edx,*in_edi,(int)*in_edi >> 0x1f);
    *in_edi = in_edx;
  }
  return 0;
}

/* ref: FUN_00c44c60 */
unsigned int F_00c44c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44c60u, gen_a0, gen_a1, 0u, 0u);
  uint * in_edi = (uint *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * this;
  uint in_edx;
  undefined4 * puVar1;
  
  this = REFG(void * PTR32, 0x1592500);
  if (*in_edi != 0) {
    in_edx = F_00c44c00(REFG(void * PTR32, 0x1592500),param_2,0,0x80);
    puVar1 = (undefined4 *)F_00c44c00(this,0x18,0,0x80);
    puVar1[1] = 0;
    *puVar1 = 0;
    F_00c44710(param_2,in_edx,*in_edi,(int)*in_edi >> 0x1f);
    if ((in_edi < *(uint * PTR32 *)((int)this + 0x18)) ||
       (((uint *)GEN_TOP((*(int *)((int)this + 0x10) + (int)*(uint * PTR32 *)((int)this + 0x18)))) <= in_edi)) {
      puVar1[5] = 0;
    }
    else {
      puVar1[5] = in_edi;
    }
    puVar1[2] = *in_edi;
    puVar1[3] = in_edx;
    puVar1[4] = param_2;
    F_00c451d0(&REFG(undefined4, 0x15b258c),puVar1);
    *in_edi = in_edx;
  }
  return 0;
}

/* ref: FUN_00c44d00 */
unsigned int F_00c44d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44d00u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int * in_ecx = (int *)(uintptr_t)gen_a1;
  int * in_edi;
  int iVar1;
  
  in_edi = (int *)*in_ecx;
  if (in_eax == 0) {
    F_00c44c60(in_ecx,0x3c);
  }
  else {
    if (in_eax == 1) {
      F_00c44c60(in_edi + 1,in_edi[2] * 0x30);
      F_00c44c60(in_edi + 4,in_edi[5] * 0x30);
      F_00c44c60(in_edi + 7,in_edi[8] * 4);
      F_00c44c60(in_edi + 0xc,in_edi[0xd] * 4);
      F_00c44c60(in_edi,0x54);
      return 0;
    }
    if ((in_eax == 2) && (iVar1 = *in_edi, iVar1 != 0)) {
      F_00c44c60(iVar1 + 0xc,*(int *)(iVar1 + 0x10) * 2);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00c44d90 */
unsigned int F_00c44d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * in_ecx;
  undefined * this_00;
  int in_eax;
  
  in_ecx = (int *)((int)this + 0xbc);
  if (*(int *)((int)this + 0xbc) != 0) {
    in_eax = 0;
    while ((*in_ecx == 0 || (F_00c44d00(in_eax,in_ecx), in_eax != 3))) {
      in_eax = in_eax + 1;
      if (3 < in_eax) {
        return 0;
      }
    }
    this_00 = (undefined *)*in_ecx;
    if (this_00 != (undefined *)0x0) {
      F_00d31f70(this_00);
      F_00d31b70(this_00);
    }
  }
  return 0;
}

/* ref: FUN_00c44de0 */
unsigned int F_00c44de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44de0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 uVar1;
  int iVar2;
  int * piVar3;
  
  uVar1 = *(*(undefined4 * PTR32 *)&gen_args[0]);
  iVar2 = *(int *)((*(int *)&gen_args[1]) + 0x50);
  if (iVar2 != 0) {
    piVar3 = (int *)((*(int *)&gen_args[1]) + 0x58);
    do {
      (*(undefined4 * PTR32 *)&gen_args[0]) = (undefined4 *)*piVar3;
      if ((*(undefined4 * PTR32 *)&gen_args[0]) != (undefined *)0x0) {
        F_00c44bb0();
        F_00c44c20(&(*(undefined4 * PTR32 *)&gen_args[0]),0x120);
        F_00c44d90((*(undefined4 * PTR32 *)&gen_args[0]),uVar1);
        F_00c44880();
      }
      piVar3 = piVar3 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00c44e50 */
uint F_00c44e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44e50u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00c44e60 */
uint F_00c44e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44e60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00c44ea0 */
uint F_00c44ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xc44ea0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(param_1 + 4);
}

/* ref: FUN_00c44ed0 */
uint F_00c44ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44ed0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00c44ee0 */
uint F_00c44ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44ee0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00c44f30 */
unsigned int F_00c44f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*param_1;
    puVar2 = param_1;
    while (puVar1 = puVar3, puVar1 != (undefined4 *)0x0) {
      puVar2 = puVar1;
      puVar3 = (undefined4 *)*puVar1;
    }
    *puVar2 = *(undefined4 *)this;
    param_1[1] = this;
    if (*(int *)this != 0) {
      *(undefined4 * PTR32 *)(*(int *)this + 4) = puVar2;
    }
  }
  *(undefined4 * PTR32 *)this = param_1;
  return 0;
}

/* ref: FUN_00c44f70 */
unsigned int F_00c44f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*param_1;
    puVar3 = param_1;
    while (puVar1 = puVar2, puVar1 != (undefined4 *)0x0) {
      puVar3 = puVar1;
      puVar2 = (undefined4 *)*puVar1;
    }
    *puVar3 = this;
    param_1[1] = *(undefined4 *)((int)this + 4);
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = param_1;
    }
  }
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return 0;
}

/* ref: FUN_00c44fe0 */
uint F_00c44fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc44fe0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 + (param_2 - 1U) & ~(param_2 - 1U);
}

/* ref: FUN_00c45000 */
uint F_00c45000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45000u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 + (param_2 - 1U) & ~(param_2 - 1U);
}

/* ref: FUN_00c45020 */
unsigned int F_00c45020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*param_1;
    puVar2 = param_1;
    while (puVar1 = puVar3, puVar1 != (undefined4 *)0x0) {
      puVar2 = puVar1;
      puVar3 = (undefined4 *)*puVar1;
    }
    *puVar2 = *(undefined4 *)this;
    param_1[1] = this;
    if (*(int *)this != 0) {
      *(undefined4 * PTR32 *)(*(int *)this + 4) = puVar2;
    }
  }
  *(undefined4 * PTR32 *)this = param_1;
  return 0;
}

/* ref: FUN_00c45060 */
uint F_00c45060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  if (param_1 != (int *)0x0) {
    piVar1 = *(int * PTR32 *)((int)this + 4);
    if (piVar1 == (int *)0x0) {
      *(int * PTR32 *)((int)this + 4) = param_1;
      *(int * PTR32 *)this = param_1;
      *param_1 = 0;
      param_1[1] = 0;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      return (uint)param_1;
    }
    piVar4 = (int *)*param_1;
    piVar3 = param_1;
    while (piVar2 = piVar4, piVar2 != (int *)0x0) {
      piVar3 = piVar2;
      piVar4 = (int *)*piVar2;
    }
    *piVar3 = *piVar1;
    param_1[1] = (int)piVar1;
    if (*piVar1 != 0) {
      *(int * PTR32 *)(*piVar1 + 4) = piVar3;
    }
    *piVar1 = (int)param_1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(int * PTR32 *)((int)this + 4) = param_1;
  }
  return (uint)param_1;
}

/* ref: FUN_00c450c0 */
uint F_00c450c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc450c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  if (param_1 != (int *)0x0) {
    piVar1 = *(int * PTR32 *)((int)this + 4);
    if (piVar1 == (int *)0x0) {
      *(int * PTR32 *)((int)this + 4) = param_1;
      *(int * PTR32 *)this = param_1;
      *param_1 = 0;
      param_1[1] = 0;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      return (uint)param_1;
    }
    piVar4 = (int *)*param_1;
    piVar3 = param_1;
    while (piVar2 = piVar4, piVar2 != (int *)0x0) {
      piVar3 = piVar2;
      piVar4 = (int *)*piVar2;
    }
    *piVar3 = *piVar1;
    param_1[1] = (int)piVar1;
    if (*piVar1 != 0) {
      *(int * PTR32 *)(*piVar1 + 4) = piVar3;
    }
    *piVar1 = (int)param_1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(int * PTR32 *)((int)this + 4) = param_1;
  }
  return (uint)param_1;
}

/* ref: FUN_00c45120 */
unsigned int F_00c45120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc45120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    piVar3 = (int *)*param_1;
    piVar2 = param_1;
    while (piVar1 = piVar3, piVar1 != (int *)0x0) {
      piVar2 = piVar1;
      piVar3 = (int *)*piVar1;
    }
    *piVar2 = param_2;
    param_1[1] = *(int *)(param_2 + 4);
    if (*(undefined4 * PTR32 *)(param_2 + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)(param_2 + 4) = param_1;
    }
    *(int * PTR32 *)(param_2 + 4) = piVar2;
    if (param_2 == *(int *)this) {
      *(int * PTR32 *)this = param_1;
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  }
  return 0;
}

/* ref: FUN_00c45170 */
unsigned int F_00c45170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if (param_1 != (int *)0x0) {
    if (param_1 == *(int * PTR32 *)this) {
      *(int *)this = *param_1;
    }
    if (param_1 == *(int * PTR32 *)((int)this + 4)) {
      *(int *)((int)this + 4) = param_1[1];
    }
    if (*param_1 != 0) {
      *(int *)(*param_1 + 4) = param_1[1];
    }
    if ((int *)param_1[1] != (int *)0x0) {
      *(int *)param_1[1] = *param_1;
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  }
  return 0;
}

/* ref: FUN_00c451d0 */
uint F_00c451d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc451d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  
  if (param_1 != (int *)0x0) {
    piVar1 = *(int * PTR32 *)this;
    if (piVar1 == (int *)0x0) {
      *(int * PTR32 *)((int)this + 4) = param_1;
      *(int * PTR32 *)this = param_1;
      *param_1 = 0;
      param_1[1] = 0;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      return (uint)param_1;
    }
    piVar2 = piVar1;
    for (piVar3 = (int *)*piVar1; piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
      piVar2 = piVar3;
    }
    *piVar2 = *param_1;
    piVar1[1] = (int)param_1;
    if (*param_1 != 0) {
      *(int * PTR32 *)(*param_1 + 4) = piVar2;
    }
    *param_1 = (int)piVar1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(int * PTR32 *)this = param_1;
  }
  return (uint)param_1;
}

/* ref: FUN_00c45290 */
unsigned int F_00c45290(void)
{
  GEN_ENTER(0xc45290u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c452a0 */
uint F_00c452a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc452a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  uint uVar1;
  
  uVar1 = param_1;
  if (param_5 != 0) {
    uVar1 = param_2;
  }
  return uVar1;
}

/* ref: FUN_00c452c0 */
uint F_00c452c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc452c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  byte * pbVar2;
  undefined * PTR32 * ppuVar3;
  undefined1 * in_ecx;
  int iVar4;
  bool bVar5;
  
  in_ecx = ((undefined1 *)(gen_frame + 0xc));
  iVar4 = 1;
  do {
    F_01050e40(in_ecx);
    in_ecx = in_ecx + 8;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  F_01050e60(((undefined1 *)(gen_frame + 0xc)),param_1);
  F_01050e60(((undefined1 *)(gen_frame + 0x14)),param_2);
  F_01050ea0(((undefined1 *)(gen_frame + 0xc)),&REFG(undefined1, 0x15b2600),0);
  F_01050ed0(0);
  ppuVar3 = (*(undefined * PTR32 (*)[1])REFP(0x111864c));
  pbVar2 = &REFG(undefined1, 0x15b2600);
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *(byte *)ppuVar3;
    if (bVar1 != *(byte *)ppuVar3) {
LAB_00c45338: ;
      iVar4 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto joined_r0x00c4533f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < *(byte *)((int)ppuVar3 + 1);
    if (bVar1 != *(byte *)((int)ppuVar3 + 1)) goto LAB_00c45338;
    pbVar2 = pbVar2 + 2;
    ppuVar3 = (undefined * PTR32 *)((int)ppuVar3 + 2);
  } while (bVar1 != 0);
  iVar4 = 0;
joined_r0x00c4533f: ;
  do {
    if (iVar4 == 0) {
      iVar4 = 1;
      do {
        F_01050e50();
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
      return 0;
    }
    F_00c49908(&REFG(undefined1, 0x15b2600),0x4000,"okaeri");
    F_01050f10(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined1, 0x15b2600),0);
    F_01050f40(0);
    F_01050ea0(((undefined1 *)(gen_frame + 0xc)),&REFG(undefined1, 0x15b2600),0);
    F_01050ed0(0);
    ppuVar3 = (*(undefined * PTR32 (*)[1])REFP(0x111864c));
    pbVar2 = &REFG(undefined1, 0x15b2600);
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *(byte *)ppuVar3;
      if (bVar1 != *(byte *)ppuVar3) {
LAB_00c453b4: ;
        iVar4 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto joined_r0x00c4533f;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < *(byte *)((int)ppuVar3 + 1);
      if (bVar1 != *(byte *)((int)ppuVar3 + 1)) goto LAB_00c453b4;
      pbVar2 = pbVar2 + 2;
      ppuVar3 = (undefined * PTR32 *)((int)ppuVar3 + 2);
    } while (bVar1 != 0);
    iVar4 = 0;
  } while( true );
}

/* ref: FUN_00c453e0 */
uint F_00c453e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc453e0u, gen_a0, gen_a1, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  char * pcVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < REFG(int, 0x15b6600)) {
    pcVar1 = param_1;
    do {
      if (*pcVar1 != pcVar1[param_2 - (int)param_1]) {
        return (int)param_1[iVar2] - (int)*(char *)(iVar2 + param_2);
      }
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar1 + 1;
    } while (iVar2 < REFG(int, 0x15b6600));
  }
  return 0;
}

/* ref: FUN_00c45430 */
uint F_00c45430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45430u, gen_a0, gen_a1, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  char * pcVar2;
  
  iVar1 = 0;
  if (0 < REFG(int, 0x15b6600)) {
    pcVar2 = param_1;
    do {
      if (*pcVar2 != pcVar2[param_2 - (int)param_1]) {
        return (int)*(char *)(iVar1 + param_2) - (int)param_1[iVar1];
      }
      iVar1 = iVar1 + 1;
      pcVar2 = pcVar2 + 1;
    } while (iVar1 < REFG(int, 0x15b6600));
  }
  return 0;
}

/* ref: FUN_00c45480 */
uint F_00c45480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  gen_size32 _SizeOfElements;
  code * _PtFuncCompare;
  undefined1 * in_ecx;
  undefined * puVar1;
  int iVar2;
  uint uVar3;
  
  in_ecx = ((undefined1 *)(gen_frame + 0x0));
  iVar2 = 1;
  do {
    F_01050e40(in_ecx);
    in_ecx = in_ecx + 8;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  F_01050e60(((undefined1 *)(gen_frame + 0x0)),param_1);
  F_01050e60(((undefined1 *)(gen_frame + 0x8)),param_2);
  F_01050ea0(((undefined1 *)(gen_frame + 0x0)),&REFG(undefined, 0x15b6680),0);
  F_01050ed0(0);
  (*(int *)(gen_frame + 0x14)) = REFG(int, 0x15b668c);
  (*(gen_size32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x15b6688);
  _SizeOfElements = REFG(undefined4, 0x15b6684);
  do {
    REFG(undefined4, 0x15b6600) = _SizeOfElements;
    REFG(undefined4, 0x15b6684) = _SizeOfElements;
    (*(int *)(gen_frame + 0x14)) = REFG(int, 0x15b668c);
    if (REFG(undefined4, 0x15b6688) == 0) {
      iVar2 = 1;
      REFG(undefined4, 0x15b6688) = 0;
      (*(gen_size32 *)(gen_frame + 0x18)) = 0;
      do {
        F_01050e50();
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
      return 0;
    }
    uVar3 = _SizeOfElements * REFG(undefined4, 0x15b6688);
    (*(uint *)(gen_frame + 0x10)) = uVar3;
    (*(gen_size32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x15b6688);
    if (uVar3 != 0) {
      puVar1 = &REFG(undefined, 0x15b6680);
      do {
        F_01050ea0(((undefined1 *)(gen_frame + 0x0)),puVar1,0);
        F_01050ed0(0);
        if (uVar3 < 0x4001) break;
        puVar1 = puVar1 + 0x4000;
        uVar3 = uVar3 - 0x4000;
      } while (uVar3 != 0);
    }
    _PtFuncCompare = ((code *)REFP(0xc453e0));
    if ((*(int *)(gen_frame + 0x14)) == 0) {
      _PtFuncCompare = ((code *)REFP(0xc45430));
    }
    F_00c4f040(&REFG(undefined, 0x15b6680),(*(gen_size32 *)(gen_frame + 0x18)),_SizeOfElements,_PtFuncCompare);
    if ((*(uint *)(gen_frame + 0x10)) != 0) {
      puVar1 = &REFG(undefined, 0x15b6680);
      uVar3 = (*(uint *)(gen_frame + 0x10));
      do {
        F_01050f10(((undefined1 *)(gen_frame + 0x8)),puVar1,0);
        F_01050f40(0);
        if (uVar3 < 0x4001) break;
        puVar1 = puVar1 + 0x4000;
        uVar3 = uVar3 - 0x4000;
      } while (uVar3 != 0);
    }
    F_01050ea0(((undefined1 *)(gen_frame + 0x0)),&REFG(undefined, 0x15b6680),0);
    F_01050ed0(0);
    (*(int *)(gen_frame + 0x14)) = REFG(int, 0x15b668c);
    (*(gen_size32 *)(gen_frame + 0x18)) = REFG(undefined4, 0x15b6688);
    _SizeOfElements = REFG(undefined4, 0x15b6684);
  } while( true );
}

/* ref: FUN_00c455f0 */
uint F_00c455f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc455f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 * in_ecx;
  int iVar1;
  
  in_ecx = ((undefined1 *)(gen_frame + 0xc));
  iVar1 = 1;
  do {
    F_01050e40(in_ecx);
    in_ecx = in_ecx + 8;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_01050e60(((undefined1 *)(gen_frame + 0xc)),param_1);
  F_01050e60(((undefined1 *)(gen_frame + 0x14)),param_2);
  F_01050ea0(((undefined1 *)(gen_frame + 0xc)),&REFG(undefined, 0x15d6700),0);
  F_01050ed0(0);
  *(int *)&REFG(undefined, 0x15d6680) = REFG(int, 0x15d6704) + *(int *)&REFG(undefined, 0x15d6700);
  F_01050f10(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x15d6680),0);
  F_01050f40(0);
  iVar1 = 1;
  do {
    F_01050e50();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return 0;
}

/* ref: FUN_00c45686 */
uint F_00c45686(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45686u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_00c54322((*(undefined * PTR32 *)&gen_args[0]),(char * PTR32 *)&(*(undefined4 *)&gen_args[1]));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[2])REFP(0x1118664));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00c456a9 */
uint F_00c456a9(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc456a9u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_00c54322((*(undefined * PTR32 *)&gen_args[0]),(char * PTR32 *)&(*(undefined4 *)&gen_args[1]));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[2])REFP(0x1118670));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00c456d2 */
uint F_00c456d2(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc456d2u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_00c54322((*(undefined * PTR32 *)&gen_args[0]),(char * PTR32 *)&(*(undefined4 *)&gen_args[1]));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[2])REFP(0x111867c));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00c456fb */
uint F_00c456fb(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc456fbu, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_00c54322((*(undefined * PTR32 *)&gen_args[0]),(char * PTR32 *)&(*(undefined4 *)&gen_args[1]));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[2])REFP(0x1118688));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00c45724 */
uint F_00c45724(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45724u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_00c54322((*(undefined * PTR32 *)&gen_args[0]),(char * PTR32 *)&(*(undefined4 *)&gen_args[1]));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[2])REFP(0x1118694));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00c4574d */
unsigned int F_00c4574d(unsigned int gen_a0)
{
  GEN_ENTER(0xc4574du, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00c54322((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),(char * PTR32 *)&(*(undefined4 *)&gen_args[0]));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[2])REFP(0x1118670));
                    
  F_00c4d67d(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),&REFG(undefined, 0x12f5b54));
}

/* ref: FUN_00c4577d */
uint F_00c4577d(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4577du, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_00c5442a(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1118664));
  return (uint)this;
}

/* ref: FUN_00c4579a */
unsigned int F_00c4579a(unsigned int gen_a0)
{
  GEN_ENTER(0xc4579au, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00c54322((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),(char * PTR32 *)&(*(undefined4 *)&gen_args[0]));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[2])REFP(0x111867c));
                    
  F_00c4d67d(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),&REFG(undefined, 0x12f5bc8));
}

/* ref: FUN_00c457ca */
uint F_00c457ca(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc457cau, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_00c5442a(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x111867c));
  return (uint)this;
}

/* ref: FUN_00c457e7 */
unsigned int F_00c457e7(unsigned int gen_a0)
{
  GEN_ENTER(0xc457e7u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00c54322((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),(char * PTR32 *)&(*(undefined4 *)&gen_args[0]));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[2])REFP(0x1118688));
                    
  F_00c4d67d(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),&REFG(undefined, 0x12f5c04));
}

/* ref: FUN_00c45817 */
uint F_00c45817(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45817u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_00c5442a(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1118688));
  return (uint)this;
}

/* ref: FUN_00c45834 */
unsigned int F_00c45834(unsigned int gen_a0)
{
  GEN_ENTER(0xc45834u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00c54322((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),(char * PTR32 *)&(*(undefined4 *)&gen_args[0]));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[2])REFP(0x1118694));
                    
  F_00c4d67d(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),&REFG(undefined, 0x12f5c40));
}

/* ref: FUN_00c45864 */
uint F_00c45864(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45864u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_00c5442a(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1091034));
  return (uint)this;
}

/* ref: FUN_00c45881 */
unsigned int F_00c45881(unsigned int gen_a0)
{
  GEN_ENTER(0xc45881u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_00c54322((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),(char * PTR32 *)&(*(undefined4 *)&gen_args[0]));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[3])REFP(0x1091034));
                    
  F_00c4d67d(((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),&REFG(undefined, 0x12f5c98));
}

/* ref: std::logic_error::vf0 */
uint F_00c458b1(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc458b1u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c5437e(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: std::invalid_argument::vf0 */
uint F_00c458d2(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc458d2u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c5437e(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: std::length_error::vf0 */
uint F_00c458f3(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc458f3u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c5437e(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: std::out_of_range::vf0 */
uint F_00c45914(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45914u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c5437e(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: std::overflow_error::vf0 */
uint F_00c45935(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45935u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c5437e(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c45956 */
uint F_00c45956(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45956u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_00c5442a(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1118670));
  return (uint)this;
}

/* ref: FUN_00c45973 */
uint F_00c45973(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45973u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_00c5442a(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1118694));
  return (uint)this;
}

/* ref: __Tolower */
int F_00c45990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45990u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * p_Var1;
  uint uVar2;
  short * _Code_page;
  int iVar3;
  ushort * puVar4;
  
  p_Var1 = (*(undefined * PTR32 *)&gen_args[1]);
  if ((*(undefined * PTR32 *)&gen_args[1]) == (undefined *)0x0) {
    uVar2 = F_00c54bcd();
    (*(LPCWSTR *)(gen_frame + 0x0)) = *(LPCWSTR *)(uVar2 + 8);
    _Code_page = (short *)F_00c54b81();
  }
  else {
    (*(LPCWSTR *)(gen_frame + 0x0)) = (LPCWSTR)(*(uint *)((char *)((*(undefined * PTR32 *)&gen_args[1]))));
    _Code_page = (*((short * PTR32 *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[1])) + 4)))));
  }
  if ((*(LPCWSTR *)(gen_frame + 0x0)) == (LPCWSTR)0x0) {
    if (0x19 < (*(int *)&gen_args[0]) - 0x41U) {
      return (*(int *)&gen_args[0]);
    }
    return (*(int *)&gen_args[0]) + 0x20;
  }
  if ((uint)(*(int *)&gen_args[0]) < 0x100) {
    if (p_Var1 != (undefined *)0x0) {
      if ((*((byte *)GEN_TOP(((*(int *)(((char *)(p_Var1) + 8))) + (*(int *)&gen_args[0]) * 2))) & 1) == 0) {
        return (*(int *)&gen_args[0]);
      }
      goto LAB_00c45a05;
    }
    iVar3 = F_00c48539((*(int *)&gen_args[0]));
    if (iVar3 == 0) {
      return (*(int *)&gen_args[0]);
    }
  }
  else {
LAB_00c45a05: ;
    if (p_Var1 != (undefined *)0x0) {
      uVar2 = (uint)(int)*((short *)GEN_TOP(((*(int *)(((char *)(p_Var1) + 8))) + ((*(int *)&gen_args[0]) >> 8 & 0xffU) * 2))) >> 0xf & 1;
      goto LAB_00c45a40;
    }
  }
  puVar4 = F_00c5476c();
  uVar2 = puVar4[(*(int *)&gen_args[0]) >> 8 & 0xff] & 0x8000;
LAB_00c45a40: ;
  p_Var1 = (*(undefined * PTR32 *)&gen_args[1]);
  if (uVar2 == 0) {
    (*((undefined2 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + (0) * 16)))) = (ushort)(byte)(*(int *)&gen_args[0]);
    iVar3 = 1;
  }
  else {
    (*(undefined1 *)(gen_frame + 0x4)) = (undefined1)((uint)(*(int *)&gen_args[0]) >> 8);
    (*((undefined2 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + (0) * 16)))) = CONCAT11((byte)(*(int *)&gen_args[0]),(*(undefined1 *)(gen_frame + 0x4)));
    (*((undefined1 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + (3) * 16)))) = SUB41(p_Var1,3);
    gen_piece_set(&(*(undefined * PTR32 *)&gen_args[1]), 0, 3, (unsigned long long)((uint3)(ushort)(*(undefined * PTR32 *)&gen_args[1])));
    iVar3 = 2;
  }
  iVar3 = F_00c54720((undefined *)0x0,(*(LPCWSTR *)(gen_frame + 0x0)),0x100,(LPCSTR)&(*(undefined * PTR32 *)&gen_args[1]),iVar3,(LPSTR)&(*(byte *)(gen_frame + 0x8)),3,
                             (int)_Code_page,1);
  uVar2 = (*(int *)&gen_args[0]);
  if ((iVar3 != 0) && (uVar2 = (uint)(*(byte *)(gen_frame + 0x8)), iVar3 != 1)) {
    uVar2 = (uint)CONCAT11((*(byte *)(gen_frame + 0x8)),(*(undefined1 *)(gen_frame + 0x9)));
  }
  return uVar2;
}

/* ref: __Getctype */
undefined * F_00c45a9d(unsigned int gen_a0)
{
  GEN_ENTER(0xc45a9du, gen_a0, 0u, 0u, 0u);
  undefined * __return_storage_ptr__ = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  short * psVar2;
  undefined * pvVar3;
  ushort * puVar4;
  undefined4 uVar5;
  
  uVar1 = F_00c54bcd();
  (*(uint *)((char *)(__return_storage_ptr__))) = *(uint *)(uVar1 + 4);
  psVar2 = (short *)F_00c54b81();
  (*(short * PTR32 *)(((char *)(__return_storage_ptr__) + 4))) = psVar2;
  pvVar3 = F_00c54c73(0x100,2);
  (*(int *)(((char *)(__return_storage_ptr__) + 8))) = (int)pvVar3;
  if (pvVar3 == (undefined *)0x0) {
    puVar4 = F_00c5476c();
    (*(wchar_t * PTR32 *)(((char *)(__return_storage_ptr__) + 12))) = (wchar_t *)0x0;
    (*(int *)(((char *)(__return_storage_ptr__) + 8))) = (int)puVar4;
  }
  else {
    uVar5 = 0x200;
    puVar4 = F_00c5476c();
    F_00c46aa0((*(int *)(((char *)(__return_storage_ptr__) + 8))),puVar4,uVar5);
    (*(wchar_t * PTR32 *)(((char *)(__return_storage_ptr__) + 12))) = (wchar_t *)0x1;
  }
  return __return_storage_ptr__;
}

/* ref: std::_Init_locks::_Init_locks */
undefined * F_00c45afd(unsigned int gen_a0)
{
  GEN_ENTER(0xc45afdu, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LONG LVar1;
  undefined * p_Var2;
  
  LVar1 = gen_imp_InterlockedIncrement((LONG *)&REFG(undefined, 0x134a9e4));
  if (LVar1 == 0) {
    p_Var2 = (undefined *)&REFG(undefined, 0x15d6718);
    do {
      F_00c4682b(p_Var2);
      p_Var2 = p_Var2 + (1) * 24;
    } while ((int)p_Var2 < 0x15d6778);
  }
  return this;
}

/* ref: std::_Lockit::_Lockit */
undefined * F_00c45bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  (*(int *)((char *)(this))) = param_1;
  if (param_1 < 4) {
    F_00c4684b((undefined *)(&REFG(undefined, 0x15d6718) + param_1 * 0x18));
  }
  return this;
}

/* ref: FUN_00c45be8 */
uint F_00c45be8(unsigned int gen_a0)
{
  GEN_ENTER(0xc45be8u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((int)uVar1 < 4) {
    F_00c4685b((undefined *)(&REFG(undefined, 0x15d6718) + uVar1 * 0x18));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: std::_Lockit::_Lockit_ctor */
unsigned int F_00c45c0b(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45c0bu, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  (*(int *)((char *)(param_1))) = param_2 & 3U;
  F_00c4684b((undefined *)(&REFG(undefined, 0x15d6718) + (param_2 & 3U) * 0x18));
  return 0;
}

/* ref: std::_Lockit::_Lockit_dtor */
unsigned int F_00c45c2c(unsigned int gen_a0)
{
  GEN_ENTER(0xc45c2cu, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  F_00c4685b((undefined *)(&REFG(undefined, 0x15d6718) + (*(int *)((char *)(param_1))) * 0x18));
  return 0;
}

/* ref: FUN_00c45c47 */
unsigned int F_00c45c47(unsigned int gen_a0)
{
  GEN_ENTER(0xc45c47u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  F_00c4684b((undefined *)(&REFG(undefined, 0x15d6718) + (param_1 & 3) * 0x18));
  return 0;
}

/* ref: FUN_00c45c63 */
uint F_00c45c63(unsigned int gen_a0)
{
  GEN_ENTER(0xc45c63u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c4685b((undefined *)(&REFG(undefined, 0x15d6718) + (param_1 & 3) * 0x18));
  return extraout_EAX;
}

/* ref: FUN_00c45c85 */
uint F_00c45c85(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45c85u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c45c95 */
uint F_00c45c95(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc45c95u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  return (uint)in_ecx;
}

/* ref: std::_Fac_node::~_Fac_node */
unsigned int F_00c45cab(unsigned int gen_a0)
{
  GEN_ENTER(0xc45cabu, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00478dc0(*(undefined * PTR32 *)(this + 4));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  return 0;
}

/* ref: std::_Fac_node::`scalar_deleting_destructor' */
undefined * F_00c45cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c45cab(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return this;
}

/* ref: Facet_Register */
uint F_00c45ce1(unsigned int gen_a0)
{
  GEN_ENTER(0xc45ce1u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = REFG(undefined4 * PTR32, 0x15d677c);
    puVar1[1] = param_1;
  }
  REFG(undefined4 * PTR32, 0x15d677c) = puVar1;
  return (uint)puVar1;
}

/* ref: __Deletegloballocale */
uint F_00c45d0b(unsigned int gen_a0)
{
  GEN_ENTER(0xc45d0bu, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar2 = param_1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    puVar1 = (undefined4 *)F_00478dc0((undefined *)*param_1);
    puVar2 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)*puVar1)(puVar1,1)));
    }
  }
  return (uint)puVar2;
}

/* ref: tidy_global */
uint F_00c45d2c(void)
{
  GEN_ENTER(0xc45d2cu, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x8)),0);
  F_00c45d0b(&REFG(undefined4, 0x15d6780));
  REFG(undefined4, 0x15d6780) = 0;
  uVar1 = F_00c45be8(&(*(undefined4 *)(gen_frame + 0x8)));
  return uVar1;
}

/* ref: FUN_00c45d58 */
uint F_00c45d58(void)
{
  GEN_ENTER(0xc45d58u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d6780);
}

/* ref: std::locale::_Setgloballocale */
unsigned int F_00c45d5e(unsigned int gen_a0)
{
  GEN_ENTER(0xc45d5eu, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  if (REFG(char, 0x15d67a5) == '\0') {
    REFG(char, 0x15d67a5) = '\x01';
    F_00c4686b(((code *)REFP(0xc45d2c)));
  }
  REFG(void * PTR32, 0x15d6780) = param_1;
  return 0;
}

/* ref: std::locale::_Locimp::_Locimp_dtor */
unsigned int F_00c45d88(unsigned int gen_a0)
{
  GEN_ENTER(0xc45d88u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  
  (*(undefined4 *)(gen_frame + 0x1c)) = 4;
  (*(undefined4 *)(gen_frame + 0x18)) = 0xc45d94;
  F_00c45bc0(((undefined1 *)(gen_frame + 0xc)),0);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  iVar3 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) + iVar3 * 4)));
    if (*piVar1 != 0) {
      puVar2 = (undefined4 *)F_00478dc0((undefined *)*piVar1);
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      }
    }
  }
  F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))));
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  F_00c45be8(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: std::_Locinfo::_Locinfo_dtor */
unsigned int F_00c45e96(unsigned int gen_a0)
{
  GEN_ENTER(0xc45e96u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  if (*(char * PTR32 *)(param_1 + 0x14) != (char *)0x0) {
    F_00c4a76c(0,*(char * PTR32 *)(param_1 + 0x14));
  }
  return 0;
}

/* ref: std::_Yarn<char>::operator= */
undefined * F_00c45eb1(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45eb1u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  undefined * pvVar3;
  
  pcVar2 = *(char * PTR32 *)this;
  if (pcVar2 != param_1) {
    if (pcVar2 != (char *)0x0) {
      F_00c4c68f(pcVar2);
    }
    *(undefined4 *)this = 0;
    if (param_1 != (char *)0x0) {
      cVar1 = *param_1;
      pcVar2 = param_1;
      while (cVar1 != '\0') {
        pcVar2 = pcVar2 + 1;
        cVar1 = *pcVar2;
      }
      pvVar3 = F_00c51787(pcVar2 + (1 - (int)param_1));
      *(undefined * PTR32 *)this = pvVar3;
      if (pvVar3 != (undefined *)0x0) {
        F_00c46aa0(pvVar3,param_1,pcVar2 + (1 - (int)param_1));
      }
    }
  }
  return this;
}

/* ref: std::_Locinfo::_Locinfo_ctor */
unsigned int F_00c45f09(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45f09u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char * pcVar1;
  
  pcVar1 = F_00c4a76c(0,(char *)0x0);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = "";
  }
  F_00c45eb1((undefined *)(param_1 + 0x14),pcVar1);
  if (param_2 != (char *)0x0) {
    pcVar1 = F_00c4a76c(0,param_2);
    if (pcVar1 != (char *)0x0) goto LAB_00c45f4a;
  }
  pcVar1 = "*";
LAB_00c45f4a: ;
  F_00c45eb1((undefined *)(param_1 + 0x1c),pcVar1);
  return 0;
}

/* ref: std::locale::_Locimp::_Locimp */
undefined * F_00c45f74(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45f74u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  bool param_1 = (bool)gen_a1;
  this[0x14] = (undefined1)param_1;
  *(undefined4 *)(this + 4) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11186a4));
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x1c] = (undefined1)0x0;
  F_00c45eb1((undefined *)(this + 0x18),"*");
  return this;
}

/* ref: std::locale::_Locimp::~_Locimp */
unsigned int F_00c45fb3(unsigned int gen_a0)
{
  GEN_ENTER(0xc45fb3u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x18];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x14);
  gen_args[0] = gen_a0;
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[1])REFP(0x11186a4));
  F_00c45d88((*(undefined * PTR32 *)&gen_args[0]));
  if (*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18))) != (undefined *)0x0) {
    F_00c4c68f(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18))));
  }
  *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[1])REFP(0x1091044));
  return 0;
}

/* ref: std::locale::_Locimp::`scalar_deleting_destructor' */
undefined * F_00c45ff6(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc45ff6u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c45fb3(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return this;
}

/* ref: std::locale::_Init */
undefined * F_00c46017(void)
{
  GEN_ENTER(0xc46017u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * p_Var1;
  undefined * this;
  
  (*(undefined4 *)(gen_frame + 0x1c)) = 4;
  (*(undefined4 *)(gen_frame + 0x18)) = 0xc46023;
  this = (undefined *)0x0;
  p_Var1 = REFG(undefined4, 0x15d6780);
  if (REFG(undefined4, 0x15d6780) == (undefined *)0x0) {
    F_00c45bc0(((undefined1 *)(gen_frame + 0xc)),0);
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    p_Var1 = REFG(undefined4, 0x15d6780);
    if (REFG(undefined4, 0x15d6780) == (undefined *)0x0) {
      p_Var1 = (undefined *)F_004069f0(0x20);
      if (p_Var1 != (undefined *)0x0) {
        this = (undefined *)F_00c45f74(p_Var1,false);
      }
      F_00c45d5e(this);
      *(undefined4 *)(this + 0x10) = 0x3f;
      F_00c45eb1((undefined *)(this + 0x18),"C");
      REFG(undefined4, 0x15d6784) = this;
      F_00478d90(this);
      *(undefined * PTR32 *)&REFG(undefined, 0x15d679c) = REFG(undefined4, 0x15d6784);
      p_Var1 = this;
    }
    (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
    F_00c45be8(((undefined1 *)(gen_frame + 0xc)));
  }
  return p_Var1;
}

/* ref: std::locale::empty */
uint F_00c460b1(unsigned int gen_a0)
{
  GEN_ENTER(0xc460b1u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined * this;
  undefined4 uVar1;
  
  F_00c46017();
  this = (undefined *)F_004069f0(0x20);
  if (this == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00c45f74(this,true);
  }
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00c460f2 */
byte F_00c460f2(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc460f2u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx == param_2;
}

/* ref: std::error_category::vf0 */
uint F_00c46103(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc46103u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x11186b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c4612c */
uint F_00c4612c(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4612cu, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  return (uint)in_ecx;
}

/* ref: std::error_condition::operator== */
bool F_00c46149(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc46149u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  bool bVar1;
  
  if ((*(int *)(this + 4) == *(int *)(param_1 + 4)) && (*(int *)this == *(int *)param_1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

/* ref: std::error_category::vf3 */
uint F_00c4616a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4616au, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = param_2;
  param_1[1] = this;
  return (uint)param_1;
}

/* ref: std::error_category::equivalent_00c4617e */
bool F_00c4617e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4617eu, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  bool bVar1;
  undefined * this_00;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xc))(&(*(undefined * PTR32 *)(gen_frame + 0x4)),param_1)));
  bVar1 = F_00c46149(this_00,param_2);
  return bVar1;
}

/* ref: std::error_category::equivalent_00c4619f */
uint F_00c4619f(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4619fu, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  if ((in_ecx == param_2[1]) && (*param_2 == param_3)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00c461ce */
uint F_00c461ce(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc461ceu, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  F_00c54322((*(undefined * PTR32 *)&gen_args[0]),(char * PTR32 *)&(*(undefined4 *)&gen_args[1]));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[2])REFP(0x11186f0));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00c461ec */
unsigned int F_00c461ec(unsigned int gen_a0)
{
  GEN_ENTER(0xc461ecu, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x11186f0));
  F_00c5437e(this);
  return 0;
}

/* ref: std::bad_alloc::vf0 */
uint F_00c461f7(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc461f7u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x11186f0));
  F_00c5437e(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: std::_Generic_error_category::vf1 */
uint F_00c4621e(unsigned int gen_a0)
{
  GEN_ENTER(0xc4621eu, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: std::_Iostream_error_category::vf1 */
uint F_00c46239(unsigned int gen_a0)
{
  GEN_ENTER(0xc46239u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: std::_System_error_category::vf1 */
uint F_00c4625b(unsigned int gen_a0)
{
  GEN_ENTER(0xc4625bu, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: std::_System_error_category::vf3 */
uint F_00c4625f(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4625fu, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = param_2;
  param_1[1] = this;
  return (uint)param_1;
}

/* ref: FUN_00c46280 */
uint F_00c46280(void)
{
  GEN_ENTER(0xc46280u, 0u, 0u, 0u, 0u);
  return 0x134aad8;
}

/* ref: FUN_00c4628c */
uint F_00c4628c(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4628cu, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  F_00c5442a(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x11186f0));
  return (uint)this;
}

/* ref: std::_Generic_error_category::vf0 */
uint F_00c462a9(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc462a9u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x11186b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: std::_Iostream_error_category::vf0 */
uint F_00c462cb(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc462cbu, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x11186b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: std::_System_error_category::vf0 */
uint F_00c462ed(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc462edu, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x11186b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: std::_Generic_error_category::message */
uint F_00c46340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc46340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char * pcVar1;
  
  pcVar1 = (char *)F_00c51e86(param_2);
  F_00c4630f(param_1,pcVar1);
  return (uint)param_1;
}

/* ref: std::_Iostream_error_category::message */
uint F_00c46363(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc46363u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  char * pcVar1;
  
  if (param_2 == 1) {
    pcVar1 = "iostream stream error";
  }
  else {
    pcVar1 = (char *)F_00c51e86(param_2);
  }
  F_00c4630f(param_1,pcVar1);
  return (uint)param_1;
}

/* ref: std::ios_base::_Tidy */
unsigned int F_00c463ba(unsigned int gen_a0)
{
  GEN_ENTER(0xc463bau, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  F_00c46393(this,0);
  puVar2 = *(undefined4 * PTR32 *)(this + 0x28);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    F_00406ad0(puVar2);
    puVar2 = puVar1;
  }
  *(undefined4 *)(this + 0x28) = 0;
  puVar2 = *(undefined4 * PTR32 *)(this + 0x2c);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    F_00406ad0(puVar2);
    puVar2 = puVar1;
  }
  *(undefined4 *)(this + 0x2c) = 0;
  return 0;
}

/* ref: std::ios_base::_Addstd */
unsigned int F_00c463fe(unsigned int gen_a0)
{
  GEN_ENTER(0xc463feu, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * piVar1;
  int iVar2;
  
  F_00c45bc0(&(*(undefined4 *)(gen_frame + 0x8)),2);
  *(undefined4 *)(param_1 + 8) = 1;
  do {
    piVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 8) * 4 + 0x15d67ac)));
    if ((piVar1 == (undefined *)0x0) || (piVar1 == param_1)) break;
    iVar2 = *(int *)(param_1 + 8);
    *(uint *)(param_1 + 8) = iVar2 + 1U;
  } while (iVar2 + 1U < 8);
  *((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 8) * 4 + 0x15d67ac))) = param_1;
  (&REFG(undefined, 0x15d67d4))[*(int *)(param_1 + 8)] = (&REFG(undefined, 0x15d67d4))[*(int *)(param_1 + 8)] + '\x01';
  F_00c45be8(&(*(undefined4 *)(gen_frame + 0x8)));
  return 0;
}

/* ref: std::ios_base::_Ios_base_dtor */
unsigned int F_00c46453(unsigned int gen_a0)
{
  GEN_ENTER(0xc46453u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  char * pcVar1;
  undefined * this;
  
  if (*(int *)(param_1 + 8) != 0) {
    pcVar1 = &REFG(undefined, 0x15d67d4) + *(int *)(param_1 + 8);
    *pcVar1 = *pcVar1 + -1;
    if ('\0' < *pcVar1) {
      return 0;
    }
  }
  F_00c463ba(param_1);
  this = *(undefined * PTR32 *)(param_1 + 0x30);
  if (this != (undefined *)0x0) {
    F_00478ec0(this);
    F_00406ad0(this);
  }
  return 0;
}

/* ref: __Toupper */
int F_00c46491(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc46491u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * p_Var1;
  uint uVar2;
  short * _Code_page;
  int iVar3;
  ushort * puVar4;
  
  p_Var1 = (*(undefined * PTR32 *)&gen_args[1]);
  if ((*(undefined * PTR32 *)&gen_args[1]) == (undefined *)0x0) {
    uVar2 = F_00c54bcd();
    (*(LPCWSTR *)(gen_frame + 0x0)) = *(LPCWSTR *)(uVar2 + 8);
    _Code_page = (short *)F_00c54b81();
  }
  else {
    (*(LPCWSTR *)(gen_frame + 0x0)) = (LPCWSTR)(*(uint *)((char *)((*(undefined * PTR32 *)&gen_args[1]))));
    _Code_page = (*((short * PTR32 *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[1])) + 4)))));
  }
  if ((*(LPCWSTR *)(gen_frame + 0x0)) == (LPCWSTR)0x0) {
    if (0x19 < (*(int *)&gen_args[0]) - 0x61U) {
      return (*(int *)&gen_args[0]);
    }
    return (*(int *)&gen_args[0]) + -0x20;
  }
  if ((uint)(*(int *)&gen_args[0]) < 0x100) {
    if (p_Var1 != (undefined *)0x0) {
      if ((*((byte *)GEN_TOP(((*(int *)(((char *)(p_Var1) + 8))) + (*(int *)&gen_args[0]) * 2))) & 2) == 0) {
        return (*(int *)&gen_args[0]);
      }
      goto LAB_00c46508;
    }
    iVar3 = F_00c485b8((*(int *)&gen_args[0]));
    if (iVar3 == 0) {
      return (*(int *)&gen_args[0]);
    }
  }
  else {
LAB_00c46508: ;
    if (p_Var1 != (undefined *)0x0) {
      uVar2 = (uint)(int)*((short *)GEN_TOP(((*(int *)(((char *)(p_Var1) + 8))) + ((*(int *)&gen_args[0]) >> 8 & 0xffU) * 2))) >> 0xf & 1;
      goto LAB_00c46543;
    }
  }
  puVar4 = F_00c5476c();
  uVar2 = puVar4[(*(int *)&gen_args[0]) >> 8 & 0xff] & 0x8000;
LAB_00c46543: ;
  p_Var1 = (*(undefined * PTR32 *)&gen_args[1]);
  if (uVar2 == 0) {
    (*((undefined2 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + (0) * 16)))) = (ushort)(byte)(*(int *)&gen_args[0]);
    iVar3 = 1;
  }
  else {
    (*(undefined1 *)(gen_frame + 0x4)) = (undefined1)((uint)(*(int *)&gen_args[0]) >> 8);
    (*((undefined2 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + (0) * 16)))) = CONCAT11((byte)(*(int *)&gen_args[0]),(*(undefined1 *)(gen_frame + 0x4)));
    (*((undefined1 *)GEN_TOP(((char *)&(*(undefined * PTR32 *)&gen_args[1]) + (3) * 16)))) = SUB41(p_Var1,3);
    gen_piece_set(&(*(undefined * PTR32 *)&gen_args[1]), 0, 3, (unsigned long long)((uint3)(ushort)(*(undefined * PTR32 *)&gen_args[1])));
    iVar3 = 2;
  }
  iVar3 = F_00c54720((undefined *)0x0,(*(LPCWSTR *)(gen_frame + 0x0)),0x200,(LPCSTR)&(*(undefined * PTR32 *)&gen_args[1]),iVar3,(LPSTR)&(*(byte *)(gen_frame + 0x8)),3,
                             (int)_Code_page,1);
  uVar2 = (*(int *)&gen_args[0]);
  if ((iVar3 != 0) && (uVar2 = (uint)(*(byte *)(gen_frame + 0x8)), iVar3 != 1)) {
    uVar2 = (uint)CONCAT11((*(byte *)(gen_frame + 0x8)),(*(undefined1 *)(gen_frame + 0x9)));
  }
  return uVar2;
}

/* ref: std::_Mutex::_Mutex */
undefined * F_00c465a3(unsigned int gen_a0)
{
  GEN_ENTER(0xc465a3u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * p_Var1;
  
  p_Var1 = (undefined *)F_004069f0(0x18);
  *(undefined * PTR32 *)this = p_Var1;
  F_00c4682b(p_Var1);
  return this;
}

/* ref: FUN_00c465bd */
uint F_00c465bd(unsigned int gen_a0)
{
  GEN_ENTER(0xc465bdu, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00c4683b(*(undefined * PTR32 *)this);
  uVar1 = F_00406ad0(*(undefined4 *)this);
  return uVar1;
}

/* ref: FUN_00c465d4 */
unsigned int F_00c465d4(unsigned int gen_a0)
{
  GEN_ENTER(0xc465d4u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c4684b(*(undefined * PTR32 *)this);
  return 0;
}

/* ref: FUN_00c465dd */
uint F_00c465dd(unsigned int gen_a0)
{
  GEN_ENTER(0xc465ddu, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c4685b(*(undefined * PTR32 *)this);
  return extraout_EAX;
}

/* ref: std::_Mutex::_Mutex_ctor */
unsigned int F_00c465e6(unsigned int gen_a0)
{
  GEN_ENTER(0xc465e6u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * p_Var1;
  
  p_Var1 = (undefined *)F_004069f0(0x18);
  *(undefined * PTR32 *)param_1 = p_Var1;
  F_00c4682b(p_Var1);
  return 0;
}

/* ref: std::_Mutex::_Mutex_dtor */
unsigned int F_00c46601(unsigned int gen_a0)
{
  GEN_ENTER(0xc46601u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  F_00c4683b(*(undefined * PTR32 *)param_1);
  F_00406ad0(*(undefined4 *)param_1);
  return 0;
}

/* ref: FUN_00c4661d */
unsigned int F_00c4661d(unsigned int gen_a0)
{
  GEN_ENTER(0xc4661du, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  F_00c4684b((undefined *)*param_1);
  return 0;
}

/* ref: FUN_00c4662f */
uint F_00c4662f(unsigned int gen_a0)
{
  GEN_ENTER(0xc4662fu, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c4685b((undefined *)*param_1);
  return extraout_EAX;
}

/* ref: std::_Xfsopen_00c46641 */
undefined * F_00c46641(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc46641u, gen_a0, gen_a1, gen_a2, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined * pFVar1;
  
  pFVar1 = F_00c4951c(param_1,(&REFG(undefined * PTR32, 0x111877c))[param_2],param_3);
  return pFVar1;
}

/* ref: std::_Xfsopen_00c46660 */
undefined * F_00c46660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc46660u, gen_a0, gen_a1, gen_a2, 0u);
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined * pFVar1;
  
  pFVar1 = F_00c4bc7b(param_1,((wchar_t *)GEN_TOP((&REFG(undefined * PTR32, 0x11187e8))[param_2])),param_3);
  return pFVar1;
}

/* ref: _Xfiopen<>_00c4667f */
uint F_00c4667f(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4667fu, gen_a0, gen_a1, gen_a2, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  undefined * _File;
  uint uVar2;
  int iVar3;
  
  uVar1 = 1;
  uVar2 = param_2;
  if ((param_2 & 0x40) != 0) {
    uVar2 = param_2 | 1;
  }
  if ((uVar2 & 8) != 0) {
    uVar2 = uVar2 | 2;
  }
  iVar3 = 0;
  do {
    if (uVar1 == (uVar2 & 0xffffff3b)) break;
    uVar1 = (&REFG(undefined4, 0x111887c))[iVar3];
    iVar3 = iVar3 + 1;
  } while (uVar1 != 0);
  if (*(int *)(&REFG(undefined, 0x1118878) + iVar3 * 4) != 0) {
    if ((((param_2 & 0x80) == 0) || ((uVar2 & 10) == 0)) ||
       (_File = F_00c46641(param_1,0,param_3), _File == (undefined *)0x0)) {
      _File = F_00c46641(param_1,iVar3,param_3);
      if (_File == (undefined *)0x0) {
        return 0;
      }
      if ((param_2 & 4) == 0) {
        return (uint)_File;
      }
      iVar3 = F_00c4bbff(_File,0,2);
      if (iVar3 == 0) {
        return (uint)_File;
      }
    }
    F_00c49312(_File);
  }
  return 0;
}

/* ref: _Xfiopen<>_00c46727 */
uint F_00c46727(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc46727u, gen_a0, gen_a1, gen_a2, 0u);
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  undefined * _File;
  uint uVar2;
  int iVar3;
  
  uVar1 = 1;
  uVar2 = param_2;
  if ((param_2 & 0x40) != 0) {
    uVar2 = param_2 | 1;
  }
  if ((uVar2 & 8) != 0) {
    uVar2 = uVar2 | 2;
  }
  iVar3 = 0;
  do {
    if (uVar1 == (uVar2 & 0xffffff3b)) break;
    uVar1 = (&REFG(undefined4, 0x11188b8))[iVar3];
    iVar3 = iVar3 + 1;
  } while (uVar1 != 0);
  if (*(int *)(&REFG(undefined, 0x11188b4) + iVar3 * 4) != 0) {
    if ((((param_2 & 0x80) == 0) || ((uVar2 & 10) == 0)) ||
       (_File = F_00c46660(param_1,0,param_3), _File == (undefined *)0x0)) {
      _File = F_00c46660(param_1,iVar3,param_3);
      if (_File == (undefined *)0x0) {
        return 0;
      }
      if ((param_2 & 4) == 0) {
        return (uint)_File;
      }
      iVar3 = F_00c4bbff(_File,0,2);
      if (iVar3 == 0) {
        return (uint)_File;
      }
    }
    F_00c49312(_File);
  }
  return 0;
}

/* ref: FUN_00c467cf */
uint F_00c467cf(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc467cfu, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c4667f(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c467da */
uint F_00c467da(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc467dau, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c46727(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c467e5 */
uint F_00c467e5(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc467e5u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c46727(param_1,param_2,param_3);
  return uVar1;
}

/* ref: __Once */
unsigned int F_00c467f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc467f0u, gen_a0, gen_a1, 0u, 0u);
  LONG * param_1 = (LONG *)(uintptr_t)gen_a0;
  code * param_2 = (code *)(uintptr_t)gen_a1;
  LONG LVar1;
  
  if (*param_1 != 2) {
    LVar1 = gen_imp_InterlockedExchange(param_1,1);
    if (LVar1 == 0) {
      (*param_2)();
    }
    else if (LVar1 != 2) {
      while (*param_1 != 2) {
        gen_imp_Sleep(1);
      }
      return 0;
    }
    *param_1 = 2;
  }
  return 0;
}

/* ref: __Mtxinit */
unsigned int F_00c4682b(unsigned int gen_a0)
{
  GEN_ENTER(0xc4682bu, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  gen_imp_InitializeCriticalSection(param_1);
  return 0;
}

/* ref: __Mtxdst */
unsigned int F_00c4683b(unsigned int gen_a0)
{
  GEN_ENTER(0xc4683bu, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  gen_imp_DeleteCriticalSection(param_1);
  return 0;
}

/* ref: __Mtxlock */
unsigned int F_00c4684b(unsigned int gen_a0)
{
  GEN_ENTER(0xc4684bu, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  gen_imp_EnterCriticalSection(param_1);
  return 0;
}

/* ref: __Mtxunlock */
unsigned int F_00c4685b(unsigned int gen_a0)
{
  GEN_ENTER(0xc4685bu, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  gen_imp_LeaveCriticalSection(param_1);
  return 0;
}

/* ref: _Atexit */
unsigned int F_00c4686b(unsigned int gen_a0)
{
  GEN_ENTER(0xc4686bu, gen_a0, 0u, 0u, 0u);
  code * param_1 = (code *)(uintptr_t)gen_a0;
  PVOID pvVar1;
  undefined4 unaff_ESI = 0;
  undefined4 unaff_EDI = 0;
  
  if (REFG(int, 0x134aaf0) == 0) {
                    
    F_00c4c6c9(unaff_ESI,unaff_EDI);
  }
  REFG(int, 0x134aaf0) = REFG(int, 0x134aaf0) + -1;
  pvVar1 = gen_imp_EncodePointer(param_1);
  *(PVOID *)(REFG(int, 0x134aaf0) * 4 + 0x15d6800) = pvVar1;
  return 0;
}

/* ref: type_info::name */
char * F_00c468c8(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc468c8u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  char * pcVar1;
  
  pcVar1 = F_00c553eb(this,param_1);
  return pcVar1;
}

/* ref: type_info::~type_info */
unsigned int F_00c468dc(unsigned int gen_a0)
{
  GEN_ENTER(0xc468dcu, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11188f4));
  F_00c5537b(this);
  return 0;
}

/* ref: type_info::`scalar_deleting_destructor' */
undefined * F_00c468ec(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc468ecu, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c468dc(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return this;
}

/* ref: type_info::_name_internal_method */
char * F_00c4690d(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4690du, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  char * pcVar1;
  
  pcVar1 = F_00c55580(this,param_1);
  return pcVar1;
}

/* ref: type_info::operator== */
bool F_00c4692b(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4692bu, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c556e0((char *)(param_1 + 9),(char *)(this + 9));
  return (bool)('\x01' - (iVar1 != 0));
}

/* ref: type_info::operator!= */
bool F_00c4694b(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4694bu, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c556e0((char *)(param_1 + 9),(char *)(this + 9));
  return iVar1 != 0;
}

/* ref: type_info::before */
int F_00c4696c(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4696cu, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c556e0((char *)(param_1 + 9),(char *)(this + 9));
  return (uint)(0 < iVar1);
}

/* ref: FUN_00c46990 */
uint F_00c46990(unsigned int gen_a0)
{
  GEN_ENTER(0xc46990u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: __purecall */
unsigned int F_00c469a4(void)
{
  GEN_ENTER(0xc469a4u, 0u, 0u, 0u, 0u);
  code * pcVar1;
  undefined4 unaff_ESI = 0;
  undefined4 unaff_EDI = 0;
  
  pcVar1 = gen_imp_DecodePointer(REFG(undefined4, 0x15d6f10));
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  F_00c5578e(0x19);
  F_00c4c6fc(0,1);
                    
  F_00c4c6c9(unaff_ESI,unaff_EDI);
}

/* ref: FUN_00c469ce */
uint F_00c469ce(unsigned int gen_a0)
{
  GEN_ENTER(0xc469ceu, gen_a0, 0u, 0u, 0u);
  PVOID param_1 = (PVOID)gen_a0;
  PVOID pvVar1;
  PVOID pvVar2;
  
  pvVar1 = gen_imp_DecodePointer(REFG(undefined4, 0x15d6f10));
  pvVar2 = gen_imp_EncodePointer(param_1);
  REFG(undefined4, 0x15d6f10) = pvVar2;
  return (uint)pvVar1;
}

/* ref: _strstr */
char * F_00c46a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc46a10u, gen_a0, gen_a1, 0u, 0u);
  char * _Str = (char *)(uintptr_t)gen_a0;
  char * _SubStr = (char *)(uintptr_t)gen_a1;
  byte * pbVar1;
  byte * pbVar2;
  byte bVar3;
  byte bVar4;
  char * pcVar5;
  byte * pbVar6;
  byte * pbVar7;
  
  bVar3 = *_SubStr;
  if (bVar3 == 0) {
    return _Str;
  }
  pbVar7 = (byte *)_Str;
  if (_SubStr[1] == 0) {
    pcVar5 = (char *)F_00c51da6((uint)bVar3,_Str);
    return pcVar5;
  }
  do {
    bVar4 = *pbVar7;
    do {
      while (pbVar7 = pbVar7 + 1, bVar4 != bVar3) {
        if (bVar4 == 0) {
          return (char *)0x0;
        }
        bVar4 = *pbVar7;
      }
      bVar4 = *pbVar7;
      pbVar6 = pbVar7 + 1;
      pcVar5 = _SubStr;
    } while (bVar4 != _SubStr[1]);
    do {
      if (pcVar5[2] == 0) {
LAB_00c46a89: ;
        return (char *)(pbVar7 + -1);
      }
      if (*pbVar6 != pcVar5[2]) break;
      pbVar1 = (byte *)(pcVar5 + 3);
      if (*pbVar1 == 0) goto LAB_00c46a89;
      pbVar2 = pbVar6 + 1;
      pcVar5 = pcVar5 + 2;
      pbVar6 = pbVar6 + 2;
    } while (*pbVar1 == *pbVar2);
  } while( true );
}

/* ref: FID_conflict__memcpy_00c46aa0 */
ulonglong F_00c46aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc46aa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = ((undefined4 *)GEN_TOP(((param_3 - 4) + (int)param_2)));
    puVar4 = ((undefined4 *)GEN_TOP(((param_3 - 4) + (int)param_1)));
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch((unsigned int)(uintptr_t)(uVar2)) {
        case 1: ;
          goto switchD_00c46c7f_caseD_1;
        case 2: ;
          goto switchD_00c46c7f_caseD_2;
        case 3: ;
          goto switchD_00c46c7f_caseD_3;
        }
        goto switchD_00c46c7f_caseD_0;
      }
    }
    else {
      uVar2 = 3;
      switch((unsigned int)(uintptr_t)(param_3)) {
      case 0: ;
        goto switchD_00c46c7f_caseD_0;
      case 1: ;
        goto switchD_00c46c7f_caseD_1;
      case 2: ;
        goto switchD_00c46c7f_caseD_2;
      case 3: ;
        goto switchD_00c46c7f_caseD_3;
      default: ;
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((unsigned int)(uintptr_t)((uint)puVar4 & 3)) {
        case 1: ;
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch((unsigned int)(uintptr_t)(uVar2)) {
            case 1: ;
              goto switchD_00c46c7f_caseD_1;
            case 2: ;
              goto switchD_00c46c7f_caseD_2;
            case 3: ;
              goto switchD_00c46c7f_caseD_3;
            }
            goto switchD_00c46c7f_caseD_0;
          }
          break;
        case 2: ;
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch((unsigned int)(uintptr_t)(uVar2)) {
            case 1: ;
              goto switchD_00c46c7f_caseD_1;
            case 2: ;
              goto switchD_00c46c7f_caseD_2;
            case 3: ;
              goto switchD_00c46c7f_caseD_3;
            }
            goto switchD_00c46c7f_caseD_0;
          }
          break;
        case 3: ;
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch((unsigned int)(uintptr_t)(uVar2)) {
            case 1: ;
              goto switchD_00c46c7f_caseD_1;
            case 2: ;
              goto switchD_00c46c7f_caseD_2;
            case 3: ;
              goto switchD_00c46c7f_caseD_3;
            }
            goto switchD_00c46c7f_caseD_0;
          }
        }
      }
    }
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 7: ;
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6: ;
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5: ;
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4: ;
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3: ;
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2: ;
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1: ;
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 - uVar1;
      puVar4 = puVar4 - uVar1;
    }
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 1: ;
switchD_00c46c7f_caseD_1: ;
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return CONCAT44(uVar2,param_1);
    case 2: ;
switchD_00c46c7f_caseD_2: ;
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return CONCAT44(uVar2,param_1);
    case 3: ;
switchD_00c46c7f_caseD_3: ;
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return CONCAT44(uVar2,param_1);
    }
switchD_00c46c7f_caseD_0: ;
    return CONCAT44(uVar2,param_1);
  }
  if (((0x7f < param_3) && (REFG(int, 0x15e42a0) != 0)) && (((uint)param_1 & 0xf) == ((uint)param_2 & 0xf)))
  {
    uVar5 = F_00c55b31(param_3,param_2,param_1);
    return uVar5;
  }
  puVar3 = param_2;
  puVar4 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      switch((unsigned int)(uintptr_t)(uVar2)) {
      case 1: ;
        goto switchD_00c46af9_caseD_1;
      case 2: ;
        goto switchD_00c46af9_caseD_2;
      case 3: ;
        goto switchD_00c46af9_caseD_3;
      }
      goto switchD_00c46af9_caseD_0;
    }
  }
  else {
    uVar2 = 3;
    switch((unsigned int)(uintptr_t)(param_3)) {
    case 0: ;
      goto switchD_00c46af9_caseD_0;
    case 1: ;
      goto switchD_00c46af9_caseD_1;
    case 2: ;
      goto switchD_00c46af9_caseD_2;
    case 3: ;
      goto switchD_00c46af9_caseD_3;
    default: ;
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((unsigned int)(uintptr_t)((uint)param_1 & 3)) {
      case 1: ;
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_2 + 3);
        puVar4 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          switch((unsigned int)(uintptr_t)(uVar2)) {
          case 1: ;
            goto switchD_00c46af9_caseD_1;
          case 2: ;
            goto switchD_00c46af9_caseD_2;
          case 3: ;
            goto switchD_00c46af9_caseD_3;
          }
          goto switchD_00c46af9_caseD_0;
        }
        break;
      case 2: ;
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        puVar3 = (undefined4 *)((int)param_2 + 2);
        puVar4 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          switch((unsigned int)(uintptr_t)(uVar2)) {
          case 1: ;
            goto switchD_00c46af9_caseD_1;
          case 2: ;
            goto switchD_00c46af9_caseD_2;
          case 3: ;
            goto switchD_00c46af9_caseD_3;
          }
          goto switchD_00c46af9_caseD_0;
        }
        break;
      case 3: ;
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        puVar3 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar4 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          switch((unsigned int)(uintptr_t)(uVar2)) {
          case 1: ;
            goto switchD_00c46af9_caseD_1;
          case 2: ;
            goto switchD_00c46af9_caseD_2;
          case 3: ;
            goto switchD_00c46af9_caseD_3;
          }
          goto switchD_00c46af9_caseD_0;
        }
      }
    }
  }
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 7: ;
    puVar4[uVar1 - 7] = puVar3[uVar1 - 7];
  case 6: ;
    puVar4[uVar1 - 6] = puVar3[uVar1 - 6];
  case 5: ;
    puVar4[uVar1 - 5] = puVar3[uVar1 - 5];
  case 4: ;
    puVar4[uVar1 - 4] = puVar3[uVar1 - 4];
  case 3: ;
    puVar4[uVar1 - 3] = puVar3[uVar1 - 3];
  case 2: ;
    puVar4[uVar1 - 2] = puVar3[uVar1 - 2];
  case 1: ;
    puVar4[uVar1 - 1] = puVar3[uVar1 - 1];
    puVar3 = puVar3 + uVar1;
    puVar4 = puVar4 + uVar1;
  }
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 1: ;
switchD_00c46af9_caseD_1: ;
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
    return CONCAT44(uVar2,param_1);
  case 2: ;
switchD_00c46af9_caseD_2: ;
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
    *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
    return CONCAT44(uVar2,param_1);
  case 3: ;
switchD_00c46af9_caseD_3: ;
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
    *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
    *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
    return CONCAT44(uVar2,param_1);
  }
switchD_00c46af9_caseD_0: ;
  return CONCAT44(uVar2,param_1);
}

/* ref: FID_conflict__memcpy_00c46e20 */
uint F_00c46e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc46e20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  ulonglong uVar5;
  
  if ((param_2 < param_1) && (param_1 < (undefined4 *)(param_3 + (int)param_2))) {
    puVar3 = ((undefined4 *)GEN_TOP(((param_3 - 4) + (int)param_2)));
    puVar4 = ((undefined4 *)GEN_TOP(((param_3 - 4) + (int)param_1)));
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch((unsigned int)(uintptr_t)(uVar2)) {
        case 0: ;
          return (uint)param_1;
        case 2: ;
          goto switchD_00c46fff_caseD_2;
        case 3: ;
          goto switchD_00c46fff_caseD_3;
        }
        goto switchD_00c46fff_caseD_1;
      }
    }
    else {
      switch((unsigned int)(uintptr_t)(param_3)) {
      case 0: ;
        goto switchD_00c46fff_caseD_0;
      case 1: ;
        goto switchD_00c46fff_caseD_1;
      case 2: ;
        goto switchD_00c46fff_caseD_2;
      case 3: ;
        goto switchD_00c46fff_caseD_3;
      default: ;
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((unsigned int)(uintptr_t)((uint)puVar4 & 3)) {
        case 1: ;
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (undefined4 *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch((unsigned int)(uintptr_t)(uVar2)) {
            case 0: ;
              return (uint)param_1;
            case 2: ;
              goto switchD_00c46fff_caseD_2;
            case 3: ;
              goto switchD_00c46fff_caseD_3;
            }
            goto switchD_00c46fff_caseD_1;
          }
          break;
        case 2: ;
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          puVar3 = (undefined4 *)((int)puVar3 + -2);
          puVar4 = (undefined4 *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch((unsigned int)(uintptr_t)(uVar2)) {
            case 0: ;
              return (uint)param_1;
            case 2: ;
              goto switchD_00c46fff_caseD_2;
            case 3: ;
              goto switchD_00c46fff_caseD_3;
            }
            goto switchD_00c46fff_caseD_1;
          }
          break;
        case 3: ;
          uVar2 = uVar1 & 3;
          *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
          *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + -3);
          puVar4 = (undefined4 *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch((unsigned int)(uintptr_t)(uVar2)) {
            case 0: ;
              return (uint)param_1;
            case 2: ;
              goto switchD_00c46fff_caseD_2;
            case 3: ;
              goto switchD_00c46fff_caseD_3;
            }
            goto switchD_00c46fff_caseD_1;
          }
        }
      }
    }
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 7: ;
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6: ;
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5: ;
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4: ;
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3: ;
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2: ;
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1: ;
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 - uVar1;
      puVar4 = puVar4 - uVar1;
    }
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 1: ;
switchD_00c46fff_caseD_1: ;
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      return (uint)param_1;
    case 2: ;
switchD_00c46fff_caseD_2: ;
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      return (uint)param_1;
    case 3: ;
switchD_00c46fff_caseD_3: ;
      *(undefined1 *)((int)puVar4 + 3) = *(undefined1 *)((int)puVar3 + 3);
      *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
      *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
      return (uint)param_1;
    }
switchD_00c46fff_caseD_0: ;
    return (uint)param_1;
  }
  if (((0x7f < param_3) && (REFG(int, 0x15e42a0) != 0)) && (((uint)param_1 & 0xf) == ((uint)param_2 & 0xf)))
  {
    uVar5 = F_00c55b31(param_3,param_2,param_1);
    return (uint)uVar5;
  }
  puVar3 = param_2;
  puVar4 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      switch((unsigned int)(uintptr_t)(uVar2)) {
      case 0: ;
        return (uint)param_1;
      case 2: ;
        goto switchD_00c46e79_caseD_2;
      case 3: ;
        goto switchD_00c46e79_caseD_3;
      }
      goto switchD_00c46e79_caseD_1;
    }
  }
  else {
    switch((unsigned int)(uintptr_t)(param_3)) {
    case 0: ;
      goto switchD_00c46e79_caseD_0;
    case 1: ;
      goto switchD_00c46e79_caseD_1;
    case 2: ;
      goto switchD_00c46e79_caseD_2;
    case 3: ;
      goto switchD_00c46e79_caseD_3;
    default: ;
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((unsigned int)(uintptr_t)((uint)param_1 & 3)) {
      case 1: ;
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + 2);
        puVar3 = (undefined4 *)((int)param_2 + 3);
        puVar4 = (undefined4 *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          switch((unsigned int)(uintptr_t)(uVar2)) {
          case 0: ;
            return (uint)param_1;
          case 2: ;
            goto switchD_00c46e79_caseD_2;
          case 3: ;
            goto switchD_00c46e79_caseD_3;
          }
          goto switchD_00c46e79_caseD_1;
        }
        break;
      case 2: ;
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        uVar1 = uVar1 >> 2;
        *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + 1);
        puVar3 = (undefined4 *)((int)param_2 + 2);
        puVar4 = (undefined4 *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          switch((unsigned int)(uintptr_t)(uVar2)) {
          case 0: ;
            return (uint)param_1;
          case 2: ;
            goto switchD_00c46e79_caseD_2;
          case 3: ;
            goto switchD_00c46e79_caseD_3;
          }
          goto switchD_00c46e79_caseD_1;
        }
        break;
      case 3: ;
        uVar2 = uVar1 & 3;
        *(undefined1 *)param_1 = *(undefined1 *)param_2;
        puVar3 = (undefined4 *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar4 = (undefined4 *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          switch((unsigned int)(uintptr_t)(uVar2)) {
          case 0: ;
            return (uint)param_1;
          case 2: ;
            goto switchD_00c46e79_caseD_2;
          case 3: ;
            goto switchD_00c46e79_caseD_3;
          }
          goto switchD_00c46e79_caseD_1;
        }
      }
    }
  }
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 7: ;
    puVar4[uVar1 - 7] = puVar3[uVar1 - 7];
  case 6: ;
    puVar4[uVar1 - 6] = puVar3[uVar1 - 6];
  case 5: ;
    puVar4[uVar1 - 5] = puVar3[uVar1 - 5];
  case 4: ;
    puVar4[uVar1 - 4] = puVar3[uVar1 - 4];
  case 3: ;
    puVar4[uVar1 - 3] = puVar3[uVar1 - 3];
  case 2: ;
    puVar4[uVar1 - 2] = puVar3[uVar1 - 2];
  case 1: ;
    puVar4[uVar1 - 1] = puVar3[uVar1 - 1];
    puVar3 = puVar3 + uVar1;
    puVar4 = puVar4 + uVar1;
  }
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 1: ;
switchD_00c46e79_caseD_1: ;
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
    return (uint)param_1;
  case 2: ;
switchD_00c46e79_caseD_2: ;
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
    *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
    return (uint)param_1;
  case 3: ;
switchD_00c46e79_caseD_3: ;
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
    *(undefined1 *)((int)puVar4 + 1) = *(undefined1 *)((int)puVar3 + 1);
    *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar3 + 2);
    return (uint)param_1;
  }
switchD_00c46e79_caseD_0: ;
  return (uint)param_1;
}

/* ref: __cfltcvt_init */
uint F_00c47181(void)
{
  GEN_ENTER(0xc47181u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x134b120) = ((code *)REFP(0xc56756));
  REFG(undefined * PTR32, 0x134b124) = ((code *)REFP(0xc55def));
  REFG(undefined * PTR32, 0x134b128) = ((code *)REFP(0xc55da3));
  REFG(undefined * PTR32, 0x134b12c) = ((code *)REFP(0xc55ddc));
  REFG(undefined * PTR32, 0x134b130) = ((code *)REFP(0xc55d45));
  REFG(undefined * PTR32, 0x134b134) = ((code *)REFP(0xc56756));
  REFG(undefined * PTR32, 0x134b138) = ((code *)REFP(0xc566ce));
  REFG(undefined * PTR32, 0x134b13c) = ((code *)REFP(0xc55d61));
  REFG(undefined * PTR32, 0x134b140) = ((code *)REFP(0xc55cc3));
  REFG(undefined * PTR32, 0x134b144) = ((code *)REFP(0xc55c4f));
  return 0xc56756;
}

/* ref: FUN_00c471e1 */
uint F_00c471e1(unsigned int gen_a0)
{
  GEN_ENTER(0xc471e1u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x15d682c);
  REFG(undefined4, 0x15d682c) = param_1;
  return uVar1;
}

/* ref: __fpmath */
unsigned int F_00c471f6(unsigned int gen_a0)
{
  GEN_ENTER(0xc471f6u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  F_00c47181();
  if (param_1 != 0) {
    F_00c5679c();
  }
  return 0;
}

/* ref: _sprintf */
int F_00c4720f(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xc4720fu, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * _Dest = (char *)(uintptr_t)gen_a0;
  char * _Format = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  int iVar3;
  char * PTR32 * ppcVar4;
  
  (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = (char *)0x0;
  ppcVar4 = (char * PTR32 *)&(*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4)));
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppcVar4 = (char *)0x0;
    ppcVar4 = ppcVar4 + 1;
  }
  if ((_Format == (char *)0x0) || (_Dest == (char *)0x0)) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    uVar2 = 0xffffffff;
  }
  else {
    (*(char * PTR32 *)(((char *)((undefined *)(gen_frame + 0xc)) + 8))) = _Dest;
    (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = _Dest;
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = 0x7fffffff;
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 12))) = 0x42;
    uVar2 = F_00c56a1d(((undefined *)(gen_frame + 0xc)),_Format,0,((undefined *)&gen_args[2]));
    iVar3 = (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) + -1;
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = iVar3;
    if (iVar3 < 0) {
      F_00c567c4(0,((undefined *)(gen_frame + 0xc)));
    }
    else {
      *(*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = '\0';
    }
  }
  return uVar2;
}

/* ref: __sprintf_l */
int F_00c47293(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0xc47293u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[35];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  { va_list gen_va; va_start(gen_va, gen_a2);
    for (int gen_i = 3; gen_i < 35; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * _DstBuf = (char *)(uintptr_t)gen_a0;
  char * _Format = (char *)(uintptr_t)gen_a1;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = F_00c57625(_DstBuf,_Format,_Locale,((undefined *)&gen_args[3]));
  return iVar1;
}

/* ref: _sprintf_s */
int F_00c472af(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0xc472afu, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[35];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  { va_list gen_va; va_start(gen_va, gen_a2);
    for (int gen_i = 3; gen_i < 35; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * _DstBuf = (char *)(uintptr_t)gen_a0;
  gen_size32 _SizeInBytes = (gen_size32)gen_a1;
  char * _Format = (char *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = F_00c47552(_DstBuf,_SizeInBytes,_Format,(undefined *)0x0,((undefined *)&gen_args[3]));
  return iVar1;
}

/* ref: __sprintf_s_l */
int F_00c472cd(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, ...)
{
  GEN_ENTER(0xc472cdu, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[36];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  { va_list gen_va; va_start(gen_va, gen_a3);
    for (int gen_i = 4; gen_i < 36; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * _DstBuf = (char *)(uintptr_t)gen_a0;
  gen_size32 _DstSize = (gen_size32)gen_a1;
  char * _Format = (char *)(uintptr_t)gen_a2;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  
  iVar1 = F_00c47552(_DstBuf,_DstSize,_Format,_Locale,((undefined *)&gen_args[4]));
  return iVar1;
}

/* ref: __snprintf_s */
int F_00c472ec(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, ...)
{
  GEN_ENTER(0xc472ecu, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[36];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  { va_list gen_va; va_start(gen_va, gen_a3);
    for (int gen_i = 4; gen_i < 36; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * _DstBuf = (char *)(uintptr_t)gen_a0;
  gen_size32 _SizeInBytes = (gen_size32)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  char * _Format = (char *)(uintptr_t)gen_a3;
  int iVar1;
  
  iVar1 = F_00c475e6(_DstBuf,_SizeInBytes,_MaxCount,_Format,(undefined *)0x0,((undefined *)&gen_args[4]));
  return iVar1;
}

/* ref: __snprintf_s_l */
int F_00c4730d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, ...)
{
  GEN_ENTER(0xc4730du, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[37];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  { va_list gen_va; va_start(gen_va, gen_a4);
    for (int gen_i = 5; gen_i < 37; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * _DstBuf = (char *)(uintptr_t)gen_a0;
  gen_size32 _DstSize = (gen_size32)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  char * _Format = (char *)(uintptr_t)gen_a3;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a4;
  int iVar1;
  
  iVar1 = F_00c475e6(_DstBuf,_DstSize,_MaxCount,_Format,_Locale,((undefined *)&gen_args[5]));
  return iVar1;
}

/* ref: FUN_00c4732f */
uint F_00c4732f(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0xc4732fu, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[35];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  { va_list gen_va; va_start(gen_va, gen_a2);
    for (int gen_i = 3; gen_i < 35; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * param_1 = (char *)(uintptr_t)gen_a0;
  gen_size32 param_2 = (gen_size32)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c4771b(param_1,param_2,param_3,(undefined *)0x0,((undefined *)&gen_args[3]));
  return uVar1;
}

/* ref: FUN_00c4734d */
uint F_00c4734d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, ...)
{
  GEN_ENTER(0xc4734du, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[36];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  { va_list gen_va; va_start(gen_va, gen_a3);
    for (int gen_i = 4; gen_i < 36; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * param_1 = (char *)(uintptr_t)gen_a0;
  gen_size32 param_2 = (gen_size32)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c4771b(param_1,param_2,param_3,param_4,((undefined *)&gen_args[4]));
  return uVar1;
}

/* ref: FUN_00c4736c */
uint F_00c4736c(unsigned int gen_a0, ...)
{
  GEN_ENTER(0xc4736cu, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[33];
  gen_args[0] = gen_a0;
  { va_list gen_va; va_start(gen_va, gen_a0);
    for (int gen_i = 1; gen_i < 33; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5771f(param_1,((undefined *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_00c47381 */
uint F_00c47381(unsigned int gen_a0, ...)
{
  GEN_ENTER(0xc47381u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[33];
  gen_args[0] = gen_a0;
  { va_list gen_va; va_start(gen_va, gen_a0);
    for (int gen_i = 1; gen_i < 33; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c57758(param_1,((undefined *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_00c47396 */
uint F_00c47396(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xc47396u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c5773b(param_1,param_2,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: FUN_00c473af */
uint F_00c473af(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xc473afu, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c57774(param_1,param_2,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: _strcat_s */
int F_00c473c8(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc473c8u, gen_a0, gen_a1, gen_a2, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  char cVar1;
  int * piVar2;
  char * pcVar3;
  int eVar4;
  char * pcVar5;
  int iVar6;
  int eStack_10;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    pcVar5 = param_1;
    iVar6 = param_2;
    if (param_3 != (char *)0x0) {
      do {
        if (*pcVar5 == '\0') break;
        pcVar5 = pcVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      if (iVar6 != 0) {
        pcVar3 = param_3;
        do {
          cVar1 = *pcVar3;
          pcVar3[(int)pcVar5 - (int)param_3] = cVar1;
          pcVar3 = pcVar3 + 1;
          if (cVar1 == '\0') break;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        if (iVar6 != 0) {
          return 0;
        }
        *param_1 = '\0';
        piVar2 = F_00c51f85();
        eStack_10 = 0x22;
        *piVar2 = 0x22;
        eVar4 = eStack_10;
        goto LAB_00c473e7;
      }
    }
    *param_1 = '\0';
  }
  piVar2 = F_00c51f85();
  eVar4 = 0x16;
  *piVar2 = 0x16;
LAB_00c473e7: ;
  F_00c4c305();
  return eVar4;
}

/* ref: __vsnprintf_helper */
uint F_00c47435(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc47435u, gen_a0, gen_a1, gen_a2, gen_a3);
  code * param_1 = (code *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  char * PTR32 * ppcVar5;
  
  (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = (char *)0x0;
  ppcVar5 = (char * PTR32 *)&(*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4)));
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppcVar5 = (char *)0x0;
    ppcVar5 = ppcVar5 + 1;
  }
  if (param_4 == 0) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
    uVar3 = 0xffffffff;
  }
  else if ((param_3 == 0) || (param_2 != (char *)0x0)) {
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = 0x7fffffff;
    if (param_3 < 0x80000000) {
      (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = param_3;
    }
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 12))) = 0x42;
    (*(char * PTR32 *)(((char *)((undefined *)(gen_frame + 0xc)) + 8))) = param_2;
    (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = param_2;
    uVar3 = (*param_1)(((undefined *)(gen_frame + 0xc)),param_4,param_5,param_6);
    if (param_2 != (char *)0x0) {
      if (-1 < (int)uVar3) {
        uVar1 = (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) - 1;
        (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = uVar1;
        if (-1 < (int)uVar1) {
          *(*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = '\0';
          return uVar3;
        }
        iVar4 = F_00c567c4(0,((undefined *)(gen_frame + 0xc)));
        if (iVar4 != -1) {
          return uVar3;
        }
      }
      param_2[param_3 - 1] = '\0';
      uVar3 = (-1 < (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4)))) - 2;
    }
  }
  else {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

/* ref: FID_conflict___vsnprintf_c_00c474ff */
int F_00c474ff(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc474ffu, gen_a0, gen_a1, gen_a2, gen_a3);
  char * _DstBuf = (char *)(uintptr_t)gen_a0;
  gen_size32 _MaxCount = (gen_size32)gen_a1;
  char * _Format = (char *)(uintptr_t)gen_a2;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c47435(((code *)REFP(0xc56a1d)),_DstBuf,_MaxCount,_Format,0,_ArgList);
  if ((int)uVar1 < 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: __vsnprintf_c_l */
int F_00c47528(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc47528u, gen_a0, gen_a1, gen_a2, gen_a3);
  char * _DstBuf = (char *)(uintptr_t)gen_a0;
  gen_size32 _MaxCount = (gen_size32)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a3;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a4;
  uint uVar1;
  
  uVar1 = F_00c47435(((code *)REFP(0xc56a1d)),_DstBuf,_MaxCount,param_3,_Locale,_ArgList);
  if ((int)uVar1 < 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: __vsprintf_s_l */
int F_00c47552(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc47552u, gen_a0, gen_a1, gen_a2, gen_a3);
  char * _DstBuf = (char *)(uintptr_t)gen_a0;
  gen_size32 _DstSize = (gen_size32)gen_a1;
  char * _Format = (char *)(uintptr_t)gen_a2;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a3;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a4;
  int * piVar1;
  uint uVar2;
  
  if (_Format == (char *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return -1;
  }
  if ((_DstBuf == (char *)0x0) || (_DstSize == 0)) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
  }
  else {
    uVar2 = F_00c47435(((code *)REFP(0xc5784c)),_DstBuf,_DstSize,_Format,_Locale,_ArgList);
    if ((int)uVar2 < 0) {
      *_DstBuf = '\0';
    }
    if (uVar2 != 0xfffffffe) {
      return uVar2;
    }
    piVar1 = F_00c51f85();
    *piVar1 = 0x22;
  }
  F_00c4c305();
  return -1;
}

/* ref: _vsprintf_s */
int F_00c475c9(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc475c9u, gen_a0, gen_a1, gen_a2, gen_a3);
  char * _DstBuf = (char *)(uintptr_t)gen_a0;
  gen_size32 _SizeInBytes = (gen_size32)gen_a1;
  char * _Format = (char *)(uintptr_t)gen_a2;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  
  iVar1 = F_00c47552(_DstBuf,_SizeInBytes,_Format,(undefined *)0x0,_ArgList);
  return iVar1;
}

/* ref: __vsnprintf_s_l */
int F_00c475e6(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc475e6u, gen_a0, gen_a1, gen_a2, gen_a3);
  char * _DstBuf = (char *)(uintptr_t)gen_a0;
  gen_size32 _DstSize = (gen_size32)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  char * _Format = (char *)(uintptr_t)gen_a3;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a4;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a5;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  if (_Format == (char *)0x0) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
    return -1;
  }
  if (_MaxCount == 0) {
    if (_DstBuf == (char *)0x0) {
      if (_DstSize == 0) {
        return 0;
      }
    }
    else {
LAB_00c47627: ;
      if (_DstSize != 0) {
        piVar2 = F_00c51f85();
        if (_MaxCount < _DstSize) {
          iVar1 = *piVar2;
          uVar3 = F_00c47435(((code *)REFP(0xc5784c)),_DstBuf,_MaxCount + 1,_Format,_Locale,_ArgList);
          if (uVar3 == 0xfffffffe) {
            piVar2 = F_00c51f85();
            if (*piVar2 != 0x22) {
              return -1;
            }
            piVar2 = F_00c51f85();
            *piVar2 = iVar1;
            return -1;
          }
LAB_00c476ae: ;
          if (-1 < (int)uVar3) {
            return uVar3;
          }
        }
        else {
          iVar1 = *piVar2;
          uVar3 = F_00c47435(((code *)REFP(0xc5784c)),_DstBuf,_DstSize,_Format,_Locale,_ArgList);
          _DstBuf[_DstSize - 1] = '\0';
          if (uVar3 != 0xfffffffe) goto LAB_00c476ae;
          if (_MaxCount == 0xffffffff) {
            piVar2 = F_00c51f85();
            if (*piVar2 != 0x22) {
              return -1;
            }
            piVar2 = F_00c51f85();
            *piVar2 = iVar1;
            return -1;
          }
        }
        *_DstBuf = '\0';
        if (uVar3 != 0xfffffffe) {
          return -1;
        }
        piVar2 = F_00c51f85();
        *piVar2 = 0x22;
        goto LAB_00c476c5;
      }
    }
  }
  else if (_DstBuf != (char *)0x0) goto LAB_00c47627;
  piVar2 = F_00c51f85();
  *piVar2 = 0x16;
LAB_00c476c5: ;
  F_00c4c305();
  return -1;
}

/* ref: __vsnprintf_s */
int F_00c476d2(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc476d2u, gen_a0, gen_a1, gen_a2, gen_a3);
  char * _DstBuf = (char *)(uintptr_t)gen_a0;
  gen_size32 _SizeInBytes = (gen_size32)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  char * _Format = (char *)(uintptr_t)gen_a3;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a4;
  int iVar1;
  
  iVar1 = F_00c475e6(_DstBuf,_SizeInBytes,_MaxCount,_Format,(undefined *)0x0,_ArgList);
  return iVar1;
}

/* ref: FID_conflict___vsnprintf_c_00c476f2 */
int F_00c476f2(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc476f2u, gen_a0, gen_a1, gen_a2, gen_a3);
  char * _DstBuf = (char *)(uintptr_t)gen_a0;
  gen_size32 _MaxCount = (gen_size32)gen_a1;
  char * _Format = (char *)(uintptr_t)gen_a2;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c47435(((code *)REFP(0xc5867b)),_DstBuf,_MaxCount,_Format,0,_ArgList);
  if ((int)uVar1 < 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: __vsprintf_p_l */
int F_00c4771b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc4771bu, gen_a0, gen_a1, gen_a2, gen_a3);
  char * _DstBuf = (char *)(uintptr_t)gen_a0;
  gen_size32 _MaxCount = (gen_size32)gen_a1;
  char * _Format = (char *)(uintptr_t)gen_a2;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a3;
  undefined * _ArgList = (undefined *)(uintptr_t)gen_a4;
  uint uVar1;
  
  uVar1 = F_00c47435(((code *)REFP(0xc5867b)),_DstBuf,_MaxCount,_Format,_Locale,_ArgList);
  if ((int)uVar1 < 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: __security_check_cookie */
unsigned int F_00c47745(unsigned int gen_a0)
{
  GEN_ENTER(0xc47745u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 unaff_EAX = 0;
  undefined4 unaff_EDX = 0;
  undefined4 unaff_EBX = 0;
  undefined4 unaff_ESI = 0;
  undefined4 unaff_EDI = 0;
  undefined4 in_stack_00000004 = 0;
  
  if (in_ecx == REFG(int, 0x134ab78)) {
    return 0;
  }
                    
  F_00c5999f(unaff_EAX,in_ecx,unaff_EDX,unaff_EBX,unaff_ESI,unaff_EDI,in_stack_00000004);
}

/* ref: __swprintf */
int F_00c47754(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xc47754u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  wchar_t * _Dest = (wchar_t *)(uintptr_t)gen_a0;
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  uint uVar2;
  int iVar3;
  char * PTR32 * ppcVar4;
  
  (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = (char *)0x0;
  ppcVar4 = (char * PTR32 *)&(*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4)));
  for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppcVar4 = (char *)0x0;
    ppcVar4 = ppcVar4 + 1;
  }
  if ((_Format == (wchar_t *)0x0) || (_Dest == (wchar_t *)0x0)) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    uVar2 = 0xffffffff;
  }
  else {
    (*(char * PTR32 *)(((char *)((undefined *)(gen_frame + 0xc)) + 8))) = (char *)_Dest;
    (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = (char *)_Dest;
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 12))) = 0x42;
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = 0x7fffffff;
    uVar2 = F_00c59b62(((undefined *)(gen_frame + 0xc)),_Format,0,((undefined *)&gen_args[2]));
    iVar3 = (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) + -1;
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = iVar3;
    if (iVar3 < 0) {
      F_00c567c4(0,((undefined *)(gen_frame + 0xc)));
    }
    else {
      *(*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = 0;
      (*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = ((char *)GEN_TOP(((int)(*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) + 1)));
    }
    iVar3 = (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) + -1;
    (*(int *)(((char *)((undefined *)(gen_frame + 0xc)) + 4))) = iVar3;
    if (iVar3 < 0) {
      F_00c567c4(0,((undefined *)(gen_frame + 0xc)));
    }
    else {
      *(*(char * PTR32 *)((char *)((undefined *)(gen_frame + 0xc)))) = 0;
    }
  }
  return uVar2;
}

/* ref: ___swprintf_l */
int F_00c477f3(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0xc477f3u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[35];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  { va_list gen_va; va_start(gen_va, gen_a2);
    for (int gen_i = 3; gen_i < 35; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  wchar_t * _Dest = (wchar_t *)(uintptr_t)gen_a0;
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a1;
  undefined * _Plocinfo = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c5a7e4(_Dest,_Format,_Plocinfo,((undefined *)&gen_args[3]));
  return uVar1;
}

/* ref: _swprintf_s */
int F_00c4780f(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0xc4780fu, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[35];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  { va_list gen_va; va_start(gen_va, gen_a2);
    for (int gen_i = 3; gen_i < 35; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  wchar_t * _Dst = (wchar_t *)(uintptr_t)gen_a0;
  gen_size32 _SizeInWords = (gen_size32)gen_a1;
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = F_00c54090(_Dst,_SizeInWords,_Format,(undefined *)0x0,((undefined *)&gen_args[3]));
  return iVar1;
}

/* ref: __snwprintf_s */
int F_00c4782d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, ...)
{
  GEN_ENTER(0xc4782du, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[36];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  { va_list gen_va; va_start(gen_va, gen_a3);
    for (int gen_i = 4; gen_i < 36; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  wchar_t * _DstBuf = (wchar_t *)(uintptr_t)gen_a0;
  gen_size32 _SizeInWords = (gen_size32)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a3;
  int iVar1;
  
  iVar1 = F_00c54126(_DstBuf,_SizeInWords,_MaxCount,_Format,(undefined *)0x0,((undefined *)&gen_args[4]));
  return iVar1;
}

/* ref: FUN_00c4784e */
uint F_00c4784e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0xc4784eu, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[35];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  { va_list gen_va; va_start(gen_va, gen_a2);
    for (int gen_i = 3; gen_i < 35; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  gen_size32 param_2 = (gen_size32)gen_a1;
  wchar_t * param_3 = (wchar_t *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c5425f(param_1,param_2,param_3,(undefined *)0x0,((undefined *)&gen_args[3]));
  return uVar1;
}

/* ref: __swprintf_s_l */
int F_00c4786c(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, ...)
{
  GEN_ENTER(0xc4786cu, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[36];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  { va_list gen_va; va_start(gen_va, gen_a3);
    for (int gen_i = 4; gen_i < 36; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  wchar_t * _DstBuf = (wchar_t *)(uintptr_t)gen_a0;
  gen_size32 _DstSize = (gen_size32)gen_a1;
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a2;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a3;
  int iVar1;
  
  iVar1 = F_00c54090(_DstBuf,_DstSize,_Format,_Locale,((undefined *)&gen_args[4]));
  return iVar1;
}

/* ref: __snwprintf_s_l */
int F_00c4788b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, ...)
{
  GEN_ENTER(0xc4788bu, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[37];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  { va_list gen_va; va_start(gen_va, gen_a4);
    for (int gen_i = 5; gen_i < 37; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  wchar_t * _DstBuf = (wchar_t *)(uintptr_t)gen_a0;
  gen_size32 _DstSize = (gen_size32)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  wchar_t * _Format = (wchar_t *)(uintptr_t)gen_a3;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a4;
  int iVar1;
  
  iVar1 = F_00c54126(_DstBuf,_DstSize,_MaxCount,_Format,_Locale,((undefined *)&gen_args[5]));
  return iVar1;
}

/* ref: FUN_00c478ad */
uint F_00c478ad(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, ...)
{
  GEN_ENTER(0xc478adu, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[36];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  { va_list gen_va; va_start(gen_va, gen_a3);
    for (int gen_i = 4; gen_i < 36; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  gen_size32 param_2 = (gen_size32)gen_a1;
  wchar_t * param_3 = (wchar_t *)(uintptr_t)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c5425f(param_1,param_2,param_3,param_4,((undefined *)&gen_args[4]));
  return uVar1;
}

/* ref: FUN_00c478cc */
uint F_00c478cc(unsigned int gen_a0, ...)
{
  GEN_ENTER(0xc478ccu, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[33];
  gen_args[0] = gen_a0;
  { va_list gen_va; va_start(gen_va, gen_a0);
    for (int gen_i = 1; gen_i < 33; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a84b(param_1,((undefined *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_00c478e1 */
uint F_00c478e1(unsigned int gen_a0, ...)
{
  GEN_ENTER(0xc478e1u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[33];
  gen_args[0] = gen_a0;
  { va_list gen_va; va_start(gen_va, gen_a0);
    for (int gen_i = 1; gen_i < 33; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a884(param_1,((undefined *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_00c478f6 */
uint F_00c478f6(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xc478f6u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c5a867(param_1,param_2,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: FUN_00c4790f */
uint F_00c4790f(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xc4790fu, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c5a8a0(param_1,param_2,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: ___crtCorExitProcess */
unsigned int F_00c4795b(unsigned int gen_a0)
{
  GEN_ENTER(0xc4795bu, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = gen_imp_GetModuleHandleW((LPCWSTR)(*(undefined * PTR32 (*)[3])REFP(0x111890c)));
  if (hModule != (HMODULE)0x0) {
    pFVar1 = gen_imp_GetProcAddress(hModule,"CorExitProcess");
    if (pFVar1 != (FARPROC)0x0) {
      ((code *)pFVar1)(param_1);
    }
  }
  return 0;
}

/* ref: ___crtExitProcess */
unsigned int F_00c47986(unsigned int gen_a0)
{
  GEN_ENTER(0xc47986u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  F_00c4795b(param_1);
                    
  gen_imp_ExitProcess(param_1);
}

/* ref: FUN_00c4799e */
unsigned int F_00c4799e(void)
{
  GEN_ENTER(0xc4799eu, 0u, 0u, 0u, 0u);
  F_00c5aa4f(8);
  return 0;
}

/* ref: FUN_00c479a7 */
uint F_00c479a7(void)
{
  GEN_ENTER(0xc479a7u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(8);
  return uVar1;
}

/* ref: __init_pointers */
unsigned int F_00c479b0(void)
{
  GEN_ENTER(0xc479b0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5b18d();
  F_00c5b109(uVar1);
  F_00c4c12d(uVar1);
  F_00c55b22(uVar1);
  F_00c5b00a(uVar1);
  F_00c5ab17(uVar1);
  F_00c5ab06(uVar1);
  return 0;
}

/* ref: __initterm */
unsigned int F_00c479e3(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc479e3u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  for (; in_eax < param_2; in_eax = in_eax + 1) {
    if ((code *)*in_eax != (code *)0x0) {
      (*(code *)*in_eax)();
    }
  }
  return 0;
}

/* ref: __initterm_e */
uint F_00c47a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc47a00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = 0;
  puVar2 = param_1;
  while ((puVar2 < param_2 && (uVar1 == 0))) {
    if ((code *)*puVar2 != (code *)0x0) {
      uVar1 = (*(code *)*puVar2)();
    }
    puVar2 = puVar2 + 1;
  }
  return uVar1;
}

/* ref: FUN_00c47a24 */
uint F_00c47a24(unsigned int gen_a0)
{
  GEN_ENTER(0xc47a24u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if ((param_1 != (int *)0x0) && (REFG(int, 0x15d6854) != 0)) {
    *param_1 = REFG(int, 0x15d6854);
    return 0;
  }
  piVar1 = F_00c51f85();
  *piVar1 = 0x16;
  F_00c4c305();
  return 0x16;
}

/* ref: FUN_00c47a54 */
uint F_00c47a54(unsigned int gen_a0)
{
  GEN_ENTER(0xc47a54u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if ((param_1 != (int *)0x0) && (REFG(int, 0x15d6850) != 0)) {
    *param_1 = REFG(int, 0x15d6850);
    return 0;
  }
  piVar1 = F_00c51f85();
  *piVar1 = 0x16;
  F_00c4c305();
  return 0x16;
}

/* ref: __cinit */
int F_00c47a84(unsigned int gen_a0)
{
  GEN_ENTER(0xc47a84u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  BOOL BVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  if (((*(undefined * PTR32 (*)[1])REFP(0x11188f8))[0] != (undefined *)0x0) &&
     (BVar1 = F_00c5b7a0((GEN_LPANY)(*(undefined * PTR32 (*)[1])REFP(0x11188f8))), BVar1 != 0)) {
    F_00c471f6(param_1);
  }
  F_00c56779();
  uVar2 = F_00c47a00(&REFG(undefined, 0x107f5e0),&REFG(undefined, 0x107f604));
  if (uVar2 == 0) {
    F_00c47de6(((code *)REFP(0xc5b6de)));
    puVar3 = &REFG(undefined4, 0x107e600);
    do {
      if ((code *)*puVar3 != (code *)0x0) {
        (*(code *)*puVar3)();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < &REFG(undefined, 0x107f5dc));
    if ((REFG(undefined * PTR32, 0x15e52e4) != (code *)0x0) &&
       (BVar1 = F_00c5b7a0((GEN_LPANY)&REFG(undefined * PTR32, 0x15e52e4)), BVar1 != 0)) {
      ((code *)REFG(gen_code32, 0x15e52e4))(0,2,0);
    }
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: doexit */
uint F_00c47b1b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc47b1bu, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x50];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x44);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  code * pcVar4;
  uint * puVar5;
  uint * puVar6;
  uint extraout_EAX = 0;
  
  (*(undefined4 *)(gen_frame + 0x3c)) = 0x20;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = &REFG(undefined, 0x12f5dd0);
  (*(undefined4 *)(gen_frame + 0x34)) = 0xc47b27;
  F_00c5aa4f(8);
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0x0;
  if (REFG(int, 0x15d6860) != 1) {
    *(undefined4 *)&REFG(undefined, 0x15d685c) = 1;
    REFG(undefined4, 0x15d6858) = (undefined1)(*(int *)&gen_args[2]);
    if ((*(int *)&gen_args[1]) == 0) {
      puVar1 = gen_imp_DecodePointer(REFG(undefined4, 0x15e52dc));
      (*(uint * PTR32 *)(gen_frame + 0xc)) = puVar1;
      if (puVar1 != (uint *)0x0) {
        puVar2 = gen_imp_DecodePointer(REFG(undefined4, 0x15e52d8));
        (*(uint * PTR32 *)(gen_frame + 0x10)) = puVar2;
        (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar1;
        (*(uint * PTR32 *)(gen_frame + 0x14)) = puVar2;
        while( true ) {
          puVar2 = puVar2 + -1;
          (*(uint * PTR32 *)(gen_frame + 0x10)) = puVar2;
          if (puVar2 < puVar1) break;
          uVar3 = F_00c5b18d();
          if (*puVar2 != uVar3) {
            if (puVar2 < puVar1) break;
            pcVar4 = gen_imp_DecodePointer(*puVar2);
            uVar3 = F_00c5b18d();
            *puVar2 = uVar3;
            (*pcVar4)();
            puVar5 = gen_imp_DecodePointer(REFG(undefined4, 0x15e52dc));
            puVar6 = gen_imp_DecodePointer(REFG(undefined4, 0x15e52d8));
            if (((*(uint * PTR32 *)(gen_frame + 0x18)) != puVar5) || (puVar1 = (*(uint * PTR32 *)(gen_frame + 0xc)), (*(uint * PTR32 *)(gen_frame + 0x14)) != puVar6)) {
              (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar5;
              (*(uint * PTR32 *)(gen_frame + 0xc)) = puVar5;
              (*(uint * PTR32 *)(gen_frame + 0x14)) = puVar6;
              (*(uint * PTR32 *)(gen_frame + 0x10)) = puVar6;
              puVar1 = (*(uint * PTR32 *)(gen_frame + 0xc));
              puVar2 = puVar6;
            }
          }
        }
      }
      for ((*(undefined4 * PTR32 *)(gen_frame + 0x20)) = &REFG(undefined4, 0x107f610); (*(undefined4 * PTR32 *)(gen_frame + 0x20)) < &REFG(undefined, 0x107f620); (*(undefined4 * PTR32 *)(gen_frame + 0x20)) = (*(undefined4 * PTR32 *)(gen_frame + 0x20)) + 1) {
        if ((code *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20)) != (code *)0x0) {
          (*(code *)*(*(undefined4 * PTR32 *)(gen_frame + 0x20)))();
        }
      }
    }
    for ((*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = &REFG(undefined4, 0x107f624); (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) < &REFG(undefined4, 0x107f628); (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) + 1) {
      if ((code *)*(*(undefined4 * PTR32 *)(gen_frame + 0x1c)) != (code *)0x0) {
        (*(code *)*(*(undefined4 * PTR32 *)(gen_frame + 0x1c)))();
      }
    }
  }
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = (undefined *)0xfffffffe;
  F_00c47c46((gen_frame + 0x3c));
  if ((*(int *)&gen_args[2]) != 0) {
    return extraout_EAX;
  }
  REFG(int, 0x15d6860) = 1;
  F_00c5a95e(8);
                    
  F_00c47986((*(int *)&gen_args[0]));
}

/* ref: FUN_00c47c46 */
unsigned int F_00c47c46(unsigned int gen_a0)
{
  GEN_ENTER(0xc47c46u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  if (*(int *)(in_ebp + 0x10) != 0) {
    F_00c5a95e(8);
  }
  return 0;
}

/* ref: _exit */
unsigned int F_00c47c5b(unsigned int gen_a0)
{
  GEN_ENTER(0xc47c5bu, gen_a0, 0u, 0u, 0u);
  int _Code = (int)gen_a0;
  F_00c47b1b(_Code,0,0);
  return 0;
}

/* ref: __exit */
uint F_00c47c71(unsigned int gen_a0)
{
  GEN_ENTER(0xc47c71u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c47b1b(param_1,1,0);
  return uVar1;
}

/* ref: __cexit */
unsigned int F_00c47c87(void)
{
  GEN_ENTER(0xc47c87u, 0u, 0u, 0u, 0u);
  F_00c47b1b(0,0,1);
  return 0;
}

/* ref: FUN_00c47c96 */
uint F_00c47c96(void)
{
  GEN_ENTER(0xc47c96u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c47b1b(0,1,1);
  return uVar1;
}

/* ref: __amsg_exit */
unsigned int F_00c47ca5(unsigned int gen_a0)
{
  GEN_ENTER(0xc47ca5u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  F_00c5593d();
  F_00c5578e(param_1);
                    
  F_00c47c71(0xff);
}

/* ref: __onexit_nolock */
uint F_00c47cc3(unsigned int gen_a0)
{
  GEN_ENTER(0xc47cc3u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 * _Memory;
  undefined4 * puVar1;
  gen_size32 sVar2;
  gen_size32 sVar3;
  PVOID pvVar4;
  int iVar5;
  
  _Memory = gen_imp_DecodePointer(REFG(undefined4, 0x15e52dc));
  puVar1 = gen_imp_DecodePointer(REFG(undefined4, 0x15e52d8));
  if ((puVar1 < _Memory) || (iVar5 = (int)puVar1 - (int)_Memory, iVar5 + 4U < 4)) {
    return 0;
  }
  sVar2 = F_00c5b8b9(_Memory);
  if (sVar2 < iVar5 + 4U) {
    sVar3 = 0x800;
    if (sVar2 < 0x800) {
      sVar3 = sVar2;
    }
    if ((sVar3 + sVar2 < sVar2) ||
       (pvVar4 = F_00c54cbf(_Memory,sVar3 + sVar2), pvVar4 == (undefined *)0x0)) {
      if (sVar2 + 0x10 < sVar2) {
        return 0;
      }
      pvVar4 = F_00c54cbf(_Memory,sVar2 + 0x10);
      if (pvVar4 == (undefined *)0x0) {
        return 0;
      }
    }
    puVar1 = ((undefined4 *)GEN_TOP(((int)pvVar4 + (iVar5 >> 2) * 4)));
    REFG(undefined4, 0x15e52dc) = gen_imp_EncodePointer(pvVar4);
  }
  pvVar4 = gen_imp_EncodePointer(param_1);
  *puVar1 = pvVar4;
  pvVar4 = gen_imp_EncodePointer(puVar1 + 1);
  REFG(undefined4, 0x15e52d8) = pvVar4;
  return param_1;
}

/* ref: FUN_00c47d79 */
uint F_00c47d79(void)
{
  GEN_ENTER(0xc47d79u, 0u, 0u, 0u, 0u);
  undefined4 * Ptr;
  
  Ptr = F_00c54c73(0x20,4);
  REFG(undefined4, 0x15e52d8) = gen_imp_EncodePointer(Ptr);
  REFG(undefined4, 0x15e52dc) = REFG(undefined4, 0x15e52d8);
  if (Ptr == (undefined4 *)0x0) {
    return 0x18;
  }
  *Ptr = 0;
  return 0;
}

/* ref: __onexit */
undefined * F_00c47daa(unsigned int gen_a0)
{
  GEN_ENTER(0xc47daau, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  undefined * p_Var1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f5df0);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc47db6;
  F_00c4799e();
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
  p_Var1 = (undefined *)F_00c47cc3((*(undefined * PTR32 *)&gen_args[0]));
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = p_Var1;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
  F_00c47de0();
  return (*(undefined * PTR32 *)(gen_frame + 0x0));
}

/* ref: FUN_00c47de0 */
uint F_00c47de0(void)
{
  GEN_ENTER(0xc47de0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c479a7();
  return uVar1;
}

/* ref: _atexit */
int F_00c47de6(unsigned int gen_a0)
{
  GEN_ENTER(0xc47de6u, gen_a0, 0u, 0u, 0u);
  code * param_1 = (code *)(uintptr_t)gen_a0;
  undefined * p_Var1;
  
  p_Var1 = F_00c47daa((undefined *)param_1);
  return (p_Var1 != (undefined *)0x0) - 1;
}

/* ref: fast_error_exit */
unsigned int F_00c47dfd(unsigned int gen_a0)
{
  GEN_ENTER(0xc47dfdu, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (REFG(int, 0x15d686c) == 1) {
    F_00c5593d();
  }
  F_00c5578e(param_1);
                    
  F_00c47986(0xff);
}

/* ref: ___tmainCRTStartup */
uint F_00c47e6d(void)
{
  GEN_ENTER(0xc47e6du, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(undefined4 *)(gen_frame + 0x6c)) = 0x58;
  (*(undefined * PTR32 *)(gen_frame + 0x68)) = &REFG(undefined, 0x12f5e10);
  (*(undefined4 *)(gen_frame + 0x64)) = 0xc47e79;
  gen_imp_GetStartupInfoW(&(*(_STARTUPINFOW *)(gen_frame + 0x4)));
  if (REFG(int, 0x15e52d0) == 0) {
    gen_imp_HeapSetInformation((HANDLE)0x0,HeapEnableTerminationOnCorruption,(PVOID)0x0,0);
  }
  if ((((REFG(ushort, 0x400000) == (ushort)0x5a4d) &&
       (*(int *)(REFG(int, 0x40003c) + 0x400000) == 0x4550)) &&
      (*((short *)GEN_TOP(((int)((undefined *)REFP(0x40001c)) + (REFG(int, 0x40003c) - 4)
                 ))) == 0x10b)) &&
     (0xe < *(uint *)(((undefined *)REFP(0x400040)) +
                     REFG(int, 0x40003c) + 0x34))) {
    (*(uint *)(gen_frame + 0x50)) = (uint)(*(int *)(((undefined *)REFP(0x4000e8)) + REFG(int, 0x40003c)) != 0);
  }
  else {
    (*(uint *)(gen_frame + 0x50)) = 0;
  }
  iVar1 = F_00c5c19a();
  if (iVar1 == 0) {
    F_00c47dfd(0x1c);
  }
  iVar1 = F_00c5b53d();
  if (iVar1 == 0) {
    F_00c47dfd(0x10);
  }
  F_00c5b6b8();
  (*(undefined * PTR32 *)(gen_frame + 0x68)) = (undefined *)0x0;
  iVar1 = F_00c5bf02();
  if (iVar1 < 0) {
                    
    F_00c47ca5(0x1b);
  }
  REFG(undefined4, 0x15e52cc) = gen_imp_GetCommandLineA();
  REFG(undefined4, 0x15d6864) = F_00c5be6b();
  iVar1 = F_00c5bdb0();
  if (iVar1 < 0) {
                    
    F_00c47ca5(8);
  }
  uVar2 = F_00c5bb2b();
  if ((int)uVar2 < 0) {
                    
    F_00c47ca5(9);
  }
  iVar1 = F_00c47a84(1);
  if (iVar1 != 0) {
                    
    F_00c47ca5(iVar1);
  }
  uVar2 = F_00c5bacc();
  if (((byte)(*(_STARTUPINFOW *)(gen_frame + 0x4)).dwFlags & 1) == 0) {
    uVar3 = 10;
  }
  else {
    uVar3 = (uint)(*(_STARTUPINFOW *)(gen_frame + 0x4)).wShowWindow;
  }
  uVar2 = F_00403aa0(0x400000,0,uVar2,uVar3);
  (*(uint *)(gen_frame + 0x4c)) = uVar2;
  if ((*(uint *)(gen_frame + 0x50)) == 0) {
                    
    F_00c47c5b(uVar2);
  }
  F_00c47c87();
  (*(undefined * PTR32 *)(gen_frame + 0x68)) = (undefined *)0xfffffffe;
  return (*(uint *)(gen_frame + 0x4c));
}

/* ref: FUN_00c47f9c */
uint F_00c47f9c(unsigned int gen_a0)
{
  GEN_ENTER(0xc47f9cu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  ulong _ExceptionNum;
  uint uVar1;
  
  _ExceptionNum = (*(DWORD *)((char *)(*(undefined * PTR32 *)((char *)(*(undefined * PTR32 *)((in_ebp + -0x14)))))));
  *(ulong *)(in_ebp + -0x24) = _ExceptionNum;
  uVar1 = F_00c5b962(_ExceptionNum,*(undefined * PTR32 *)(in_ebp + -0x14));
  return uVar1;
}

/* ref: FUN_00c47fb0 */
uint F_00c47fb0(unsigned int gen_a0)
{
  GEN_ENTER(0xc47fb0u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(in_ebp + -0x18);
  *(undefined4 *)(in_ebp + -0x20) = *(undefined4 *)(in_ebp + -0x24);
  if (*(int *)(in_ebp + -0x1c) == 0) {
    *(undefined4 *)(iVar1 + -4) = *(undefined4 *)(in_ebp + -0x24);
                    
    *(undefined4 *)(iVar1 + -8) = 0xc47fc5;
    F_00c47c71(*(undefined4 *)(iVar1 + -4));
  }
  *(undefined4 *)(iVar1 + -4) = 0xc47fca;
  F_00c47c96();
  *(undefined4 *)(in_ebp + -4) = 0xfffffffe;
  uVar2 = *(uint *)(in_ebp + -0x20);
  *(undefined4 *)(iVar1 + -4) = 0xc47fd9;
  return uVar2;
}

/* ref: entry */
uint F_00c47fda(void)
{
  GEN_ENTER(0xc47fdau, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  F_00c5c1d2();
  uVar1 = F_00c47e6d();
  return uVar1;
}

/* ref: __aligned_offset_malloc */
undefined * F_00c47ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc47ff0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  int iVar2;
  int * piVar3;
  undefined * pvVar4;
  undefined * pvVar5;
  gen_size32 sVar6;
  
  if (((*(gen_size32 *)&gen_args[1]) & (*(gen_size32 *)&gen_args[1]) - 1) == 0) {
    if (((*(gen_size32 *)&gen_args[2]) == 0) || ((*(gen_size32 *)&gen_args[2]) < (*(gen_size32 *)&gen_args[0]))) {
      sVar6 = (*(gen_size32 *)&gen_args[1]);
      if ((*(gen_size32 *)&gen_args[1]) < 5) {
        sVar6 = 4;
      }
      iVar2 = (-(*(gen_size32 *)&gen_args[2]) & 3) + 4 + (sVar6 - 1);
      uVar1 = iVar2 + (*(gen_size32 *)&gen_args[0]);
      if (uVar1 < (*(gen_size32 *)&gen_args[0])) {
        piVar3 = F_00c51f85();
        *piVar3 = 0xc;
      }
      else {
        pvVar4 = F_00c51787(uVar1);
        if (pvVar4 != (undefined *)0x0) {
          pvVar5 = ((undefined *)GEN_TOP((((int)pvVar4 + (*(gen_size32 *)&gen_args[2]) + iVar2 & ~(sVar6 - 1)) - (*(gen_size32 *)&gen_args[2]))));
          *((undefined * PTR32 *)GEN_TOP(((int)pvVar5 + (-4 - (-(*(gen_size32 *)&gen_args[2]) & 3))))) = pvVar4;
          return pvVar5;
        }
      }
    }
    else {
      piVar3 = F_00c51f85();
      *piVar3 = 0x16;
      F_00c4c305();
    }
  }
  else {
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
  }
  return (undefined *)0x0;
}

/* ref: __aligned_msize */
gen_size32 F_00c48088(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc48088u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * _Memory = (undefined *)(uintptr_t)gen_a0;
  gen_size32 _Alignment = (gen_size32)gen_a1;
  gen_size32 _Offset = (gen_size32)gen_a2;
  int * piVar1;
  gen_size32 sVar2;
  gen_size32 sVar3;
  
  if (_Memory == (undefined *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0xffffffff;
  }
  sVar2 = F_00c5b8b9(*((undefined * PTR32 *)GEN_TOP((((uint)_Memory & 0xfffffffc) - 4))));
  sVar3 = _Alignment;
  if (_Alignment < 5) {
    sVar3 = 4;
  }
  return ((sVar2 - sVar3) - (-_Offset & 3)) - 3;
}

/* ref: __aligned_free */
unsigned int F_00c480d1(unsigned int gen_a0)
{
  GEN_ENTER(0xc480d1u, gen_a0, 0u, 0u, 0u);
  undefined * _Memory = (undefined *)(uintptr_t)gen_a0;
  if (_Memory != (undefined *)0x0) {
    F_00c4c68f(*((undefined * PTR32 *)GEN_TOP((((uint)_Memory & 0xfffffffc) - 4))));
  }
  return 0;
}

/* ref: __aligned_malloc */
undefined * F_00c480eb(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc480ebu, gen_a0, gen_a1, 0u, 0u);
  gen_size32 _Size = (gen_size32)gen_a0;
  gen_size32 _Alignment = (gen_size32)gen_a1;
  undefined * pvVar1;
  
  pvVar1 = F_00c47ff0(_Size,_Alignment,0);
  return pvVar1;
}

/* ref: __aligned_offset_realloc */
undefined * F_00c48102(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc48102u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint _NewSize_00;
  int iVar1;
  bool bVar2;
  undefined * pvVar3;
  int * piVar4;
  gen_size32 sVar5;
  undefined * pvVar6;
  uint uVar7;
  uint uVar8;
  undefined * local_1c;
  uint local_14;
  undefined * local_8;
  
  bVar2 = false;
  if ((*(undefined * PTR32 *)&gen_args[0]) == (undefined *)0x0) {
    pvVar3 = F_00c47ff0((*(gen_size32 *)&gen_args[1]),(*(gen_size32 *)&gen_args[2]),(*(gen_size32 *)&gen_args[3]));
    return pvVar3;
  }
  if ((*(gen_size32 *)&gen_args[1]) == 0) {
    F_00c480d1((*(undefined * PTR32 *)&gen_args[0]));
    return (undefined *)0x0;
  }
  if (((*(gen_size32 *)&gen_args[2]) & (*(gen_size32 *)&gen_args[2]) - 1) != 0) {
    piVar4 = F_00c51f85();
    *piVar4 = 0x16;
    F_00c4c305();
    return (undefined *)0x0;
  }
  if (((*(gen_size32 *)&gen_args[3]) != 0) && ((*(gen_size32 *)&gen_args[1]) <= (*(gen_size32 *)&gen_args[3]))) {
    piVar4 = F_00c51f85();
    *piVar4 = 0x16;
    F_00c4c305();
    return (undefined *)0x0;
  }
  pvVar3 = *((undefined * PTR32 *)GEN_TOP((((uint)(*(undefined * PTR32 *)&gen_args[0]) & 0xfffffffc) - 4)));
  sVar5 = (*(gen_size32 *)&gen_args[2]);
  if ((*(gen_size32 *)&gen_args[2]) < 5) {
    sVar5 = 4;
  }
  uVar7 = sVar5 - 1;
  uVar8 = -(*(gen_size32 *)&gen_args[3]) & 3;
  sVar5 = F_00c5b8b9(pvVar3);
  local_14 = (int)pvVar3 + (sVar5 - (int)(*(undefined * PTR32 *)&gen_args[0]));
  if ((*(gen_size32 *)&gen_args[1]) < local_14) {
    local_14 = (*(gen_size32 *)&gen_args[1]);
  }
  _NewSize_00 = uVar8 + (*(gen_size32 *)&gen_args[1]) + 4 + uVar7;
  if (_NewSize_00 < (*(gen_size32 *)&gen_args[1])) {
    piVar4 = F_00c51f85();
    *piVar4 = 0xc;
LAB_00c4821d: ;
    pvVar6 = (undefined *)0x0;
  }
  else {
    if ((undefined *)((int)pvVar3 + uVar7 + uVar8 + 4) < (*(undefined * PTR32 *)&gen_args[0])) {
LAB_00c48210: ;
      local_8 = F_00c51787(_NewSize_00);
      if (local_8 == (undefined *)0x0) goto LAB_00c4821d;
      bVar2 = true;
      local_1c = pvVar3;
    }
    else {
      piVar4 = F_00c51f85();
      iVar1 = *piVar4;
      local_1c = F_00c5c2a0(pvVar3,_NewSize_00);
      local_8 = local_1c;
      if (local_1c == (undefined *)0x0) {
        piVar4 = F_00c51f85();
        *piVar4 = iVar1;
        goto LAB_00c48210;
      }
    }
    if ((local_8 != ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) - ((int)(*(undefined * PTR32 *)&gen_args[0]) - (int)pvVar3))))) ||
       (pvVar6 = (*(undefined * PTR32 *)&gen_args[0]), (~uVar7 & (int)(*(undefined * PTR32 *)&gen_args[0]) + (*(gen_size32 *)&gen_args[3]) + uVar8) != 0)) {
      pvVar6 = ((undefined *)GEN_TOP((((int)local_8 + (*(gen_size32 *)&gen_args[3]) + uVar7 + uVar8 + 4 & ~uVar7) - (*(gen_size32 *)&gen_args[3]))));
      F_00c46e20(pvVar6,((int)(*(undefined * PTR32 *)&gen_args[0]) - (int)pvVar3) + (int)local_1c,local_14);
      if (bVar2) {
        F_00c4c68f(local_1c);
      }
      *((undefined * PTR32 *)GEN_TOP(((int)pvVar6 + (-4 - uVar8)))) = local_8;
    }
  }
  return pvVar6;
}

/* ref: __aligned_offset_recalloc */
undefined * F_00c4828e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc4828eu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * _Memory = (undefined *)(uintptr_t)gen_a0;
  gen_size32 _Count = (gen_size32)gen_a1;
  gen_size32 _Size = (gen_size32)gen_a2;
  gen_size32 _Alignment = (gen_size32)gen_a3;
  gen_size32 _Offset = (gen_size32)gen_a4;
  int * piVar1;
  undefined * pvVar2;
  uint _NewSize;
  gen_size32 sVar3;
  
  sVar3 = 0;
  if ((_Count == 0) || (_Size <= 0xffffffe0 / _Count)) {
    _NewSize = _Count * _Size;
    if (_Memory != (undefined *)0x0) {
      sVar3 = F_00c48088(_Memory,_Alignment,_Offset);
    }
    pvVar2 = F_00c48102(_Memory,_NewSize,_Alignment,_Offset);
    if ((pvVar2 != (undefined *)0x0) && (sVar3 < _NewSize)) {
      F_00c48350((undefined *)((int)pvVar2 + sVar3),0,_NewSize - sVar3);
    }
  }
  else {
    piVar1 = F_00c51f85();
    *piVar1 = 0xc;
    pvVar2 = (undefined *)0x0;
  }
  return pvVar2;
}

/* ref: __aligned_realloc */
undefined * F_00c4830c(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4830cu, gen_a0, gen_a1, gen_a2, 0u);
  undefined * _Memory = (undefined *)(uintptr_t)gen_a0;
  gen_size32 _NewSize = (gen_size32)gen_a1;
  gen_size32 _Alignment = (gen_size32)gen_a2;
  undefined * pvVar1;
  
  pvVar1 = F_00c48102(_Memory,_NewSize,_Alignment,0);
  return pvVar1;
}

/* ref: __aligned_recalloc */
undefined * F_00c48326(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc48326u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * _Memory = (undefined *)(uintptr_t)gen_a0;
  gen_size32 _Count = (gen_size32)gen_a1;
  gen_size32 _Size = (gen_size32)gen_a2;
  gen_size32 _Alignment = (gen_size32)gen_a3;
  undefined * pvVar1;
  
  pvVar1 = F_00c4828e(_Memory,_Count,_Size,_Alignment,0);
  return pvVar1;
}

/* ref: _memset */
undefined * F_00c48350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc48350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * _Dst = (undefined *)(uintptr_t)gen_a0;
  int _Val = (int)gen_a1;
  gen_size32 _Size = (gen_size32)gen_a2;
  uint uVar1;
  uint uVar2;
  gen_size32 sVar3;
  gen_size32 sVar4;
  uint * puVar5;
  ulonglong uVar6;
  
  if (_Size == 0) {
    return _Dst;
  }
  uVar1 = _Val & 0xff;
  if ((((char)_Val == '\0') && (0x7f < _Size)) && (REFG(int, 0x15e42a0) != 0)) {
    uVar6 = F_00c5c35a(_Dst,_Size);
    return (undefined *)uVar6;
  }
  sVar4 = _Size;
  puVar5 = _Dst;
  if (3 < _Size) {
    uVar2 = -(int)_Dst & 3;
    sVar3 = _Size;
    if (uVar2 != 0) {
      sVar3 = _Size - uVar2;
      do {
        *(char *)puVar5 = (char)_Val;
        puVar5 = (uint *)((int)puVar5 + 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar1 = uVar1 * 0x1010101;
    sVar4 = sVar3 & 3;
    uVar2 = sVar3 >> 2;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      if (sVar4 == 0) {
        return _Dst;
      }
    }
  }
  do {
    *(char *)puVar5 = (char)uVar1;
    puVar5 = (uint *)((int)puVar5 + 1);
    sVar4 = sVar4 - 1;
  } while (sVar4 != 0);
  return _Dst;
}

/* ref: _LocaleUpdate::_LocaleUpdate */
undefined * F_00c483ca(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc483cau, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined * p_Var2;
  undefined * ptVar3;
  undefined * ptVar4;
  
  (*(bool *)(((char *)(this) + 12))) = false;
  if (param_1 == (undefined *)0x0) {
    p_Var2 = F_00c5b37a();
    (*(undefined * PTR32 *)(((char *)(this) + 8))) = p_Var2;
    (*(undefined * PTR32 *)((char *)(this))) = (*(undefined * PTR32 *)(((char *)(p_Var2) + 108)));
    (*(undefined * PTR32 *)(((char *)(this) + 4))) = (*(undefined * PTR32 *)(((char *)(p_Var2) + 104)));
    if (((*(undefined * PTR32 *)((char *)(this))) != (undefined *)REFG(undefined * PTR32, 0x134ba28)) &&
       (((*(int *)(((char *)(p_Var2) + 112))) & REFG(undefined4, 0x134b7e0)) == 0)) {
      ptVar3 = F_00c5cdf6();
      (*(undefined * PTR32 *)((char *)(this))) = ptVar3;
    }
    if (((*(undefined * PTR32 *)(((char *)(this) + 4))) != (undefined *)REFG(undefined * PTR32, 0x134b6e8)) &&
       (((*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)(this) + 8))) + 112))))) & REFG(undefined4, 0x134b7e0)) == 0)) {
      ptVar4 = F_00c5c637();
      (*(undefined * PTR32 *)(((char *)(this) + 4))) = ptVar4;
    }
    if (((*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)(this) + 8))) + 112))))) & 2) == 0) {
      piVar1 = &(*((int *)GEN_TOP((((char *)(*(undefined * PTR32 *)(((char *)(this) + 8))) + 112)))));
      *piVar1 = *piVar1 | 2;
      (*(bool *)(((char *)(this) + 12))) = true;
    }
  }
  else {
    (*(undefined * PTR32 *)((char *)(this))) = (*(undefined * PTR32 *)((char *)(param_1)));
    (*(undefined * PTR32 *)(((char *)(this) + 4))) = (*(undefined * PTR32 *)(((char *)(param_1) + 4)));
  }
  return this;
}

/* ref: __isalpha_l */
int F_00c48462(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc48462u, gen_a0, gen_a1, 0u, 0u);
  int _C = (int)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Locale);
  if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0xac))) < 2) {
    uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 200))) + _C * 2))) & 0x103;
  }
  else {
    uVar1 = F_00c5ce6f(_C,0x103,(undefined *)((byte *)(gen_frame + 0xc)));
  }
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return uVar1;
}

/* ref: _isalpha */
int F_00c484b8(unsigned int gen_a0)
{
  GEN_ENTER(0xc484b8u, gen_a0, 0u, 0u, 0u);
  int _C = (int)gen_a0;
  int iVar1;
  
  if (REFG(int, 0x15d6874) == 0) {
    return *((ushort *)GEN_TOP((REFG(undefined * PTR32, 0x134ba18) + _C * 2))) & 0x103;
  }
  iVar1 = F_00c48462(_C,(undefined *)0x0);
  return iVar1;
}

/* ref: __isupper_l */
int F_00c484e8(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc484e8u, gen_a0, gen_a1, 0u, 0u);
  int _C = (int)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Locale);
  if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0xac))) < 2) {
    uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 200))) + _C * 2))) & 1;
  }
  else {
    uVar1 = F_00c5ce6f(_C,1,(undefined *)((byte *)(gen_frame + 0xc)));
  }
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return uVar1;
}

/* ref: _isupper */
int F_00c48539(unsigned int gen_a0)
{
  GEN_ENTER(0xc48539u, gen_a0, 0u, 0u, 0u);
  int _C = (int)gen_a0;
  int iVar1;
  
  if (REFG(int, 0x15d6874) == 0) {
    return *((ushort *)GEN_TOP((REFG(undefined * PTR32, 0x134ba18) + _C * 2))) & 1;
  }
  iVar1 = F_00c484e8(_C,(undefined *)0x0);
  return iVar1;
}

/* ref: __islower_l */
int F_00c48567(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc48567u, gen_a0, gen_a1, 0u, 0u);
  int _C = (int)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Locale);
  if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0xac))) < 2) {
    uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 200))) + _C * 2))) & 2;
  }
  else {
    uVar1 = F_00c5ce6f(_C,2,(undefined *)((byte *)(gen_frame + 0xc)));
  }
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return uVar1;
}

/* ref: _islower */
int F_00c485b8(unsigned int gen_a0)
{
  GEN_ENTER(0xc485b8u, gen_a0, 0u, 0u, 0u);
  int _C = (int)gen_a0;
  int iVar1;
  
  if (REFG(int, 0x15d6874) == 0) {
    return *((ushort *)GEN_TOP((REFG(undefined * PTR32, 0x134ba18) + _C * 2))) & 2;
  }
  iVar1 = F_00c48567(_C,(undefined *)0x0);
  return iVar1;
}

/* ref: __isdigit_l */
int F_00c485e6(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc485e6u, gen_a0, gen_a1, 0u, 0u);
  int _C = (int)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Locale);
  if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0xac))) < 2) {
    uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 200))) + _C * 2))) & 4;
  }
  else {
    uVar1 = F_00c5ce6f(_C,4,(undefined *)((byte *)(gen_frame + 0xc)));
  }
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return uVar1;
}

/* ref: _isdigit */
int F_00c48637(unsigned int gen_a0)
{
  GEN_ENTER(0xc48637u, gen_a0, 0u, 0u, 0u);
  int _C = (int)gen_a0;
  int iVar1;
  
  if (REFG(int, 0x15d6874) == 0) {
    return *((ushort *)GEN_TOP((REFG(undefined * PTR32, 0x134ba18) + _C * 2))) & 4;
  }
  iVar1 = F_00c485e6(_C,(undefined *)0x0);
  return iVar1;
}

/* ref: __isxdigit_l */
int F_00c48665(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc48665u, gen_a0, gen_a1, 0u, 0u);
  int _C = (int)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Locale);
  if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0xac))) < 2) {
    uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 200))) + _C * 2))) & 0x80;
  }
  else {
    uVar1 = F_00c5ce6f(_C,0x80,(undefined *)((byte *)(gen_frame + 0xc)));
  }
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return uVar1;
}

/* ref: _isxdigit */
int F_00c486bb(unsigned int gen_a0)
{
  GEN_ENTER(0xc486bbu, gen_a0, 0u, 0u, 0u);
  int _C = (int)gen_a0;
  int iVar1;
  
  if (REFG(int, 0x15d6874) == 0) {
    return *((ushort *)GEN_TOP((REFG(undefined * PTR32, 0x134ba18) + _C * 2))) & 0x80;
  }
  iVar1 = F_00c48665(_C,(undefined *)0x0);
  return iVar1;
}

/* ref: __isspace_l */
int F_00c486eb(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc486ebu, gen_a0, gen_a1, 0u, 0u);
  int _C = (int)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Locale);
  if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0xac))) < 2) {
    uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 200))) + _C * 2))) & 8;
  }
  else {
    uVar1 = F_00c5ce6f(_C,8,(undefined *)((byte *)(gen_frame + 0xc)));
  }
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return uVar1;
}

/* ref: _isspace */
int F_00c4873c(unsigned int gen_a0)
{
  GEN_ENTER(0xc4873cu, gen_a0, 0u, 0u, 0u);
  int _C = (int)gen_a0;
  int iVar1;
  
  if (REFG(int, 0x15d6874) == 0) {
    return *((ushort *)GEN_TOP((REFG(undefined * PTR32, 0x134ba18) + _C * 2))) & 8;
  }
  iVar1 = F_00c486eb(_C,(undefined *)0x0);
  return iVar1;
}

/* ref: __ispunct_l */
int F_00c4876a(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4876au, gen_a0, gen_a1, 0u, 0u);
  int _C = (int)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Locale);
  if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0xac))) < 2) {
    uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 200))) + _C * 2))) & 0x10;
  }
  else {
    uVar1 = F_00c5ce6f(_C,0x10,(undefined *)((byte *)(gen_frame + 0xc)));
  }
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return uVar1;
}

/* ref: _ispunct */
int F_00c487bb(unsigned int gen_a0)
{
  GEN_ENTER(0xc487bbu, gen_a0, 0u, 0u, 0u);
  int _C = (int)gen_a0;
  int iVar1;
  
  if (REFG(int, 0x15d6874) == 0) {
    return *((ushort *)GEN_TOP((REFG(undefined * PTR32, 0x134ba18) + _C * 2))) & 0x10;
  }
  iVar1 = F_00c4876a(_C,(undefined *)0x0);
  return iVar1;
}

/* ref: __isalnum_l */
int F_00c487e9(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc487e9u, gen_a0, gen_a1, 0u, 0u);
  int _C = (int)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Locale);
  if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0xac))) < 2) {
    uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 200))) + _C * 2))) & 0x107;
  }
  else {
    uVar1 = F_00c5ce6f(_C,0x107,(undefined *)((byte *)(gen_frame + 0xc)));
  }
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return uVar1;
}

/* ref: _isalnum */
int F_00c4883f(unsigned int gen_a0)
{
  GEN_ENTER(0xc4883fu, gen_a0, 0u, 0u, 0u);
  int _C = (int)gen_a0;
  int iVar1;
  
  if (REFG(int, 0x15d6874) == 0) {
    return *((ushort *)GEN_TOP((REFG(undefined * PTR32, 0x134ba18) + _C * 2))) & 0x107;
  }
  iVar1 = F_00c487e9(_C,(undefined *)0x0);
  return iVar1;
}

/* ref: __isprint_l */
int F_00c4886f(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4886fu, gen_a0, gen_a1, 0u, 0u);
  int _C = (int)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Locale);
  if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0xac))) < 2) {
    uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 200))) + _C * 2))) & 0x157;
  }
  else {
    uVar1 = F_00c5ce6f(_C,0x157,(undefined *)((byte *)(gen_frame + 0xc)));
  }
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return uVar1;
}

/* ref: _isprint */
int F_00c488c5(unsigned int gen_a0)
{
  GEN_ENTER(0xc488c5u, gen_a0, 0u, 0u, 0u);
  int _C = (int)gen_a0;
  int iVar1;
  
  if (REFG(int, 0x15d6874) == 0) {
    return *((ushort *)GEN_TOP((REFG(undefined * PTR32, 0x134ba18) + _C * 2))) & 0x157;
  }
  iVar1 = F_00c4886f(_C,(undefined *)0x0);
  return iVar1;
}

/* ref: __isgraph_l */
int F_00c488f5(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc488f5u, gen_a0, gen_a1, 0u, 0u);
  int _C = (int)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Locale);
  if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0xac))) < 2) {
    uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 200))) + _C * 2))) & 0x117;
  }
  else {
    uVar1 = F_00c5ce6f(_C,0x117,(undefined *)((byte *)(gen_frame + 0xc)));
  }
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return uVar1;
}

/* ref: _isgraph */
int F_00c4894b(unsigned int gen_a0)
{
  GEN_ENTER(0xc4894bu, gen_a0, 0u, 0u, 0u);
  int _C = (int)gen_a0;
  int iVar1;
  
  if (REFG(int, 0x15d6874) == 0) {
    return *((ushort *)GEN_TOP((REFG(undefined * PTR32, 0x134ba18) + _C * 2))) & 0x117;
  }
  iVar1 = F_00c488f5(_C,(undefined *)0x0);
  return iVar1;
}

/* ref: __iscntrl_l */
int F_00c4897b(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4897bu, gen_a0, gen_a1, 0u, 0u);
  int _C = (int)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),_Locale);
  if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0xac))) < 2) {
    uVar1 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 200))) + _C * 2))) & 0x20;
  }
  else {
    uVar1 = F_00c5ce6f(_C,0x20,(undefined *)((byte *)(gen_frame + 0xc)));
  }
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return uVar1;
}

/* ref: _iscntrl */
int F_00c489cc(unsigned int gen_a0)
{
  GEN_ENTER(0xc489ccu, gen_a0, 0u, 0u, 0u);
  int _C = (int)gen_a0;
  int iVar1;
  
  if (REFG(int, 0x15d6874) == 0) {
    return *((ushort *)GEN_TOP((REFG(undefined * PTR32, 0x134ba18) + _C * 2))) & 0x20;
  }
  iVar1 = F_00c4897b(_C,(undefined *)0x0);
  return iVar1;
}

/* ref: FUN_00c489fa */
uint F_00c489fa(unsigned int gen_a0)
{
  GEN_ENTER(0xc489fau, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (uint)(param_1 < 0x80);
}

/* ref: FUN_00c48a0c */
uint F_00c48a0c(unsigned int gen_a0)
{
  GEN_ENTER(0xc48a0cu, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 & 0x7f;
}

/* ref: FID_conflict___iscsym_l_00c48a19 */
uint F_00c48a19(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc48a19u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c48462(param_1,param_2);
  if ((iVar1 == 0) && (param_1 != 0x5f)) {
    return 0;
  }
  return 1;
}

/* ref: ___iscsymf */
int F_00c48a3c(unsigned int gen_a0)
{
  GEN_ENTER(0xc48a3cu, gen_a0, 0u, 0u, 0u);
  int _C = (int)gen_a0;
  int iVar1;
  
  iVar1 = F_00c484b8(_C);
  if ((iVar1 == 0) && (_C != 0x5f)) {
    return 0;
  }
  return 1;
}

/* ref: FID_conflict___iscsym_l_00c48a5b */
uint F_00c48a5b(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc48a5bu, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = F_00c487e9(param_1,param_2);
  if ((iVar1 == 0) && (param_1 != 0x5f)) {
    return 0;
  }
  return 1;
}

/* ref: ___iscsym */
int F_00c48a7e(unsigned int gen_a0)
{
  GEN_ENTER(0xc48a7eu, gen_a0, 0u, 0u, 0u);
  int _C = (int)gen_a0;
  int iVar1;
  
  iVar1 = F_00c4883f(_C & 0xff);
  if ((iVar1 == 0) && ((char)_C != '_')) {
    return 0;
  }
  return 1;
}

/* ref: _feof */
int F_00c48a9f(unsigned int gen_a0)
{
  GEN_ENTER(0xc48a9fu, gen_a0, 0u, 0u, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (_File == (undefined *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0;
  }
  return (*(int *)(((char *)(_File) + 12))) & 0x10;
}

/* ref: _ferror */
int F_00c48ac7(unsigned int gen_a0)
{
  GEN_ENTER(0xc48ac7u, gen_a0, 0u, 0u, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (_File == (undefined *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return 0;
  }
  return (*(int *)(((char *)(_File) + 12))) & 0x20;
}

/* ref: FID_conflict__getc_00c48aef */
int F_00c48aef(unsigned int gen_a0)
{
  GEN_ENTER(0xc48aefu, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  undefined * _File_00;
  int * piVar1;
  uint uVar2;
  undefined * puVar3;
  
  _File_00 = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f5e30);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc48afb;
  (*(uint *)(gen_frame + 0x0)) = 0;
  if ((*(undefined * PTR32 *)&gen_args[0]) == (undefined *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return -1;
  }
  F_00c50937((*(undefined * PTR32 *)&gen_args[0]));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
  if (((*(int *)(((char *)(_File_00) + 12))) & 0x40) == 0) {
    uVar2 = F_00c5d07b(_File_00);
    if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
      puVar3 = &REFG(undefined, 0x134b280);
    }
    else {
      puVar3 = ((undefined *)GEN_TOP(((uVar2 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar2 >> 5])));
    }
    if ((puVar3[0x24] & 0x7f) == 0) {
      if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
        puVar3 = &REFG(undefined, 0x134b280);
      }
      else {
        puVar3 = ((undefined *)GEN_TOP(((uVar2 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar2 >> 5])));
      }
      if ((puVar3[0x24] & 0x80) == 0) goto LAB_00c48ba5;
    }
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    (*(uint *)(gen_frame + 0x0)) = 0xffffffff;
  }
LAB_00c48ba5: ;
  if ((*(uint *)(gen_frame + 0x0)) == 0) {
    piVar1 = &(*(int *)(((char *)(_File_00) + 4)));
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar2 = F_00c5cf59(_File_00);
    }
    else {
      uVar2 = (uint)(byte)*(*(char * PTR32 *)((char *)(_File_00)));
      (*(char * PTR32 *)((char *)(_File_00))) = (*(char * PTR32 *)((char *)(_File_00))) + 1;
    }
    (*(uint *)(gen_frame + 0x0)) = uVar2;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
  F_00c48bdb(_File_00);
  return (*(uint *)(gen_frame + 0x0));
}

/* ref: FUN_00c48bd8 */
uint F_00c48bd8(unsigned int gen_a0)
{
  GEN_ENTER(0xc48bd8u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 8));
  return extraout_EAX;
}

/* ref: FUN_00c48bdb */
uint F_00c48bdb(unsigned int gen_a0)
{
  GEN_ENTER(0xc48bdbu, gen_a0, 0u, 0u, 0u);
  undefined * in_esi = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(in_esi);
  return extraout_EAX;
}

/* ref: FID_conflict__getc_00c48be3 */
int F_00c48be3(unsigned int gen_a0)
{
  GEN_ENTER(0xc48be3u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  undefined * _File_00;
  int * piVar1;
  uint uVar2;
  undefined * puVar3;
  
  _File_00 = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f5e50);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc48bef;
  (*(uint *)(gen_frame + 0x0)) = 0;
  if ((*(undefined * PTR32 *)&gen_args[0]) == (undefined *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return -1;
  }
  F_00c50937((*(undefined * PTR32 *)&gen_args[0]));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
  if (((*(int *)(((char *)(_File_00) + 12))) & 0x40) == 0) {
    uVar2 = F_00c5d07b(_File_00);
    if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
      puVar3 = &REFG(undefined, 0x134b280);
    }
    else {
      puVar3 = ((undefined *)GEN_TOP(((uVar2 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar2 >> 5])));
    }
    if ((puVar3[0x24] & 0x7f) == 0) {
      if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
        puVar3 = &REFG(undefined, 0x134b280);
      }
      else {
        puVar3 = ((undefined *)GEN_TOP(((uVar2 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar2 >> 5])));
      }
      if ((puVar3[0x24] & 0x80) == 0) goto LAB_00c48c99;
    }
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    (*(uint *)(gen_frame + 0x0)) = 0xffffffff;
  }
LAB_00c48c99: ;
  if ((*(uint *)(gen_frame + 0x0)) == 0) {
    piVar1 = &(*(int *)(((char *)(_File_00) + 4)));
    *piVar1 = *piVar1 + -1;
    if (*piVar1 < 0) {
      uVar2 = F_00c5cf59(_File_00);
    }
    else {
      uVar2 = (uint)(byte)*(*(char * PTR32 *)((char *)(_File_00)));
      (*(char * PTR32 *)((char *)(_File_00))) = (*(char * PTR32 *)((char *)(_File_00))) + 1;
    }
    (*(uint *)(gen_frame + 0x0)) = uVar2;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
  F_00c48ccf(_File_00);
  return (*(uint *)(gen_frame + 0x0));
}

/* ref: FUN_00c48ccc */
uint F_00c48ccc(unsigned int gen_a0)
{
  GEN_ENTER(0xc48cccu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 8));
  return extraout_EAX;
}

/* ref: FUN_00c48ccf */
uint F_00c48ccf(unsigned int gen_a0)
{
  GEN_ENTER(0xc48ccfu, gen_a0, 0u, 0u, 0u);
  undefined * in_esi = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(in_esi);
  return extraout_EAX;
}

/* ref: __getc_nolock */
uint F_00c48cd7(unsigned int gen_a0)
{
  GEN_ENTER(0xc48cd7u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = &(*(int *)(((char *)(param_1) + 4)));
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    bVar2 = *(*(char * PTR32 *)((char *)(param_1)));
    (*(char * PTR32 *)((char *)(param_1))) = (*(char * PTR32 *)((char *)(param_1))) + 1;
    return (uint)bVar2;
  }
  uVar3 = F_00c5cf59(param_1);
  return uVar3;
}

/* ref: __fread_nolock_s */
gen_size32 F_00c48cf7(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc48cf7u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * _DstBuf = (undefined *)(uintptr_t)gen_a0;
  gen_size32 _DstSize = (gen_size32)gen_a1;
  gen_size32 _ElementSize = (gen_size32)gen_a2;
  gen_size32 _Count = (gen_size32)gen_a3;
  undefined * _File = (undefined *)(uintptr_t)gen_a4;
  uint uVar1;
  uint uVar2;
  undefined1 * _Dst;
  int * piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 * _DstBuf_00;
  uint local_10;
  
  if ((_ElementSize != 0) && (_Count != 0)) {
    if (_DstBuf != (undefined *)0x0) {
      if ((_File != (undefined *)0x0) && (_Count <= (uint)(0xffffffff / (ulonglong)_ElementSize))) {
LAB_00c48d6a: ;
        uVar8 = _ElementSize * _Count;
        uVar7 = uVar8;
        uVar1 = _DstSize;
        if (((*(int *)(((char *)(_File) + 12))) & 0x10cU) == 0) {
          local_10 = 0x1000;
          _Dst = _DstBuf;
          uVar2 = local_10;
        }
        else {
          uVar2 = (*(int *)(((char *)(_File) + 24)));
          _Dst = _DstBuf;
        }
        do {
          while( true ) {
            if (uVar7 == 0) {
              return _Count;
            }
            if (((*(int *)(((char *)(_File) + 12))) & 0x10cU) != 0) break;
LAB_00c48de0: ;
            if (uVar7 < uVar2) {
              iVar5 = F_00c5cf59(_File);
              if (iVar5 == -1) goto LAB_00c48e9f;
              if (uVar1 == 0) goto LAB_00c48e75;
              *_Dst = (char)iVar5;
              uVar2 = (*(int *)(((char *)(_File) + 24)));
              uVar7 = uVar7 - 1;
              uVar1 = uVar1 - 1;
              _Dst = _Dst + 1;
            }
            else {
              if (uVar2 == 0) {
                uVar4 = 0x7fffffff;
                if (uVar7 < 0x80000000) {
                  uVar4 = uVar7;
                }
              }
              else {
                if (uVar7 < 0x80000000) {
                  uVar6 = uVar7 % uVar2;
                  uVar4 = uVar7;
                }
                else {
                  uVar6 = (uint)(0x7fffffff % (ulonglong)uVar2);
                  uVar4 = 0x7fffffff;
                }
                uVar4 = uVar4 - uVar6;
              }
              if (uVar1 < uVar4) goto LAB_00c48e75;
              _DstBuf_00 = _Dst;
              iVar5 = F_00c5d07b(_File);
              iVar5 = F_00c5d658(iVar5,_DstBuf_00,uVar4);
              if (iVar5 == 0) {
                (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) | 0x10;
                goto LAB_00c48e9f;
              }
              if (iVar5 == -1) goto LAB_00c48e9b;
              uVar7 = uVar7 - iVar5;
              uVar1 = uVar1 - iVar5;
              _Dst = _Dst + iVar5;
            }
          }
          uVar4 = (*(int *)(((char *)(_File) + 4)));
          if (uVar4 == 0) goto LAB_00c48de0;
          if ((int)uVar4 < 0) {
LAB_00c48e9b: ;
            (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) | 0x20;
LAB_00c48e9f: ;
            return (uVar8 - uVar7) / _ElementSize;
          }
          uVar6 = uVar7;
          if (uVar4 <= uVar7) {
            uVar6 = uVar4;
          }
          if (uVar1 < uVar6) {
LAB_00c48e75: ;
            if (_DstSize != 0xffffffff) {
              F_00c48350(_DstBuf,0,_DstSize);
            }
            piVar3 = F_00c51f85();
            *piVar3 = 0x22;
            goto LAB_00c48d2a;
          }
          F_00c4d027(_Dst,uVar1,(*(char * PTR32 *)((char *)(_File))),uVar6);
          (*(int *)(((char *)(_File) + 4))) = (*(int *)(((char *)(_File) + 4))) - uVar6;
          (*(char * PTR32 *)((char *)(_File))) = (*(char * PTR32 *)((char *)(_File))) + uVar6;
          uVar7 = uVar7 - uVar6;
          uVar1 = uVar1 - uVar6;
          _Dst = _Dst + uVar6;
        } while( true );
      }
      if (_DstSize != 0xffffffff) {
        F_00c48350(_DstBuf,0,_DstSize);
      }
      if ((_File != (undefined *)0x0) && (_Count <= (uint)(0xffffffff / (ulonglong)_ElementSize)))
      goto LAB_00c48d6a;
    }
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
LAB_00c48d2a: ;
    F_00c4c305();
  }
  return 0;
}

/* ref: __fread_nolock */
gen_size32 F_00c48eb3(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc48eb3u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * _DstBuf = (undefined *)(uintptr_t)gen_a0;
  gen_size32 _ElementSize = (gen_size32)gen_a1;
  gen_size32 _Count = (gen_size32)gen_a2;
  undefined * _File = (undefined *)(uintptr_t)gen_a3;
  gen_size32 sVar1;
  
  sVar1 = F_00c48cf7(_DstBuf,0xffffffff,_ElementSize,_Count,_File);
  return sVar1;
}

/* ref: _fread_s */
gen_size32 F_00c48ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc48ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x38];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int * piVar1;
  gen_size32 sVar2;
  
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xc;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f5e70);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc48edc;
  (*(gen_size32 *)(gen_frame + 0x0)) = 0;
  if (((*(gen_size32 *)&gen_args[2]) != 0) && ((*(gen_size32 *)&gen_args[3]) != 0)) {
    if ((*(undefined * PTR32 *)&gen_args[4]) != (undefined *)0x0) {
      F_00c50937((*(undefined * PTR32 *)&gen_args[4]));
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
      sVar2 = F_00c48cf7((*(undefined * PTR32 *)&gen_args[0]),(*(gen_size32 *)&gen_args[1]),(*(gen_size32 *)&gen_args[2]),(*(gen_size32 *)&gen_args[3]),(*(undefined * PTR32 *)&gen_args[4]));
      (*(gen_size32 *)(gen_frame + 0x0)) = sVar2;
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
      F_00c48f54((gen_frame + 0x1c));
      return (*(gen_size32 *)(gen_frame + 0x0));
    }
    if ((*(gen_size32 *)&gen_args[1]) != 0xffffffff) {
      F_00c48350((*(undefined * PTR32 *)&gen_args[0]),0,(*(gen_size32 *)&gen_args[1]));
    }
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
  }
  return 0;
}

/* ref: FUN_00c48f54 */
uint F_00c48f54(unsigned int gen_a0)
{
  GEN_ENTER(0xc48f54u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 0x18));
  return extraout_EAX;
}

/* ref: _fread */
gen_size32 F_00c48f5e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc48f5eu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * _DstBuf = (undefined *)(uintptr_t)gen_a0;
  gen_size32 _ElementSize = (gen_size32)gen_a1;
  gen_size32 _Count = (gen_size32)gen_a2;
  undefined * _File = (undefined *)(uintptr_t)gen_a3;
  gen_size32 sVar1;
  
  sVar1 = F_00c48ed0(_DstBuf,0xffffffff,_ElementSize,_Count,_File);
  return sVar1;
}

/* ref: _memchr */
undefined * F_00c48f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc48f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * _Buf = (undefined *)(uintptr_t)gen_a0;
  int _Val = (int)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint * puVar4;
  uint * puVar5;
  char cVar6;
  uint uVar7;
  bool bVar8;
  
  if (_MaxCount == 0) {
    return (undefined *)0x0;
  }
  uVar7 = _Val & 0xff;
  puVar4 = _Buf;
  uVar1 = _MaxCount;
  while (((uint)puVar4 & 3) != 0) {
    uVar2 = *puVar4;
    puVar4 = (uint *)((int)puVar4 + 1);
    if ((char)uVar2 == (char)_Val) goto LAB_00c49016;
    uVar1 = uVar1 - 1;
    if (uVar1 == 0) {
      return (undefined *)0x0;
    }
  }
  uVar2 = uVar1 - 4;
  if (3 < uVar1) {
    uVar7 = uVar7 * 0x1010101;
    puVar5 = puVar4;
    do {
      puVar4 = puVar5 + 1;
      if (((*puVar5 ^ uVar7 ^ 0xffffffff ^ (*puVar5 ^ uVar7) + 0x7efefeff) & 0x81010100) != 0) {
        uVar1 = *puVar5;
        cVar6 = (char)uVar7;
        if ((char)uVar1 == cVar6) {
          return puVar5;
        }
        if ((char)(uVar1 >> 8) == cVar6) {
          return (char *)((int)puVar5 + 1);
        }
        if ((char)(uVar1 >> 0x10) == cVar6) {
          return (char *)((int)puVar5 + 2);
        }
        if ((char)(uVar1 >> 0x18) == cVar6) goto LAB_00c49016;
      }
      bVar8 = 3 < uVar2;
      uVar2 = uVar2 - 4;
      puVar5 = puVar4;
    } while (bVar8);
  }
  iVar3 = uVar2 + 4;
  while( true ) {
    if (iVar3 == 0) {
      return (undefined *)0x0;
    }
    uVar1 = *puVar4;
    puVar4 = (uint *)((int)puVar4 + 1);
    if ((char)uVar1 == (char)uVar7) break;
    iVar3 = iVar3 + -1;
  }
LAB_00c49016: ;
  return (char *)((int)puVar4 + -1);
}

/* ref: __aulldiv */
ulonglong F_00c49030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc49030u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = param_1;
  uVar6 = param_4;
  uVar7 = param_2;
  uVar4 = param_3;
  if (param_4 == 0) {
    uVar4 = param_2 / param_3;
    iVar5 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                 (ulonglong)param_3);
  }
  else {
    do {
      uVar3 = uVar6 & 1;
      uVar6 = uVar6 >> 1;
      uVar4 = (uint)(CONCAT14(uVar3 != 0,uVar4) >> 1);
      uVar3 = uVar7 & 1;
      uVar7 = uVar7 >> 1;
      uVar8 = (uint)(CONCAT14(uVar3 != 0,uVar8) >> 1);
    } while (uVar6 != 0);
    uVar1 = CONCAT44(uVar7,uVar8) / (ulonglong)uVar4;
    iVar5 = (int)uVar1;
    lVar2 = (ulonglong)param_3 * (uVar1 & 0xffffffff);
    uVar4 = (uint)((ulonglong)lVar2 >> 0x20);
    uVar8 = uVar4 + iVar5 * param_4;
    if (((CARRY4(uVar4,iVar5 * param_4)) || (param_2 < uVar8)) ||
       ((param_2 <= uVar8 && (param_1 < (uint)lVar2)))) {
      iVar5 = iVar5 + -1;
    }
    uVar4 = 0;
  }
  return CONCAT44(uVar4,iVar5);
}

/* ref: __allmul */
ulonglong F_00c490a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc490a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}

/* ref: __fwrite_nolock */
gen_size32 F_00c490d4(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc490d4u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * _DstBuf = (undefined *)(uintptr_t)gen_a0;
  gen_size32 _Size = (gen_size32)gen_a1;
  gen_size32 _Count = (gen_size32)gen_a2;
  undefined * _File = (undefined *)(uintptr_t)gen_a3;
  char * pcVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char * _Buf;
  uint local_c;
  char * local_8;
  
  if ((_Size != 0) && (_Count != 0)) {
    if ((_File != (undefined *)0x0) &&
       ((_DstBuf != (undefined *)0x0 && (_Count <= (uint)(0xffffffff / (ulonglong)_Size))))) {
      uVar9 = _Size * _Count;
      uVar8 = uVar9;
      pcVar1 = _DstBuf;
      if (((*(int *)(((char *)(_File) + 12))) & 0x10cU) == 0) {
        local_c = 0x1000;
        uVar2 = local_c;
      }
      else {
        uVar2 = (*(int *)(((char *)(_File) + 24)));
      }
      do {
        while( true ) {
          if (uVar8 == 0) {
            return _Count;
          }
          uVar6 = (*(int *)(((char *)(_File) + 12))) & 0x108;
          if (uVar6 == 0) break;
          uVar5 = (*(int *)(((char *)(_File) + 4)));
          if (uVar5 == 0) break;
          if ((int)uVar5 < 0) {
            (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) | 0x20;
            goto LAB_00c49216;
          }
          uVar7 = uVar8;
          if (uVar5 <= uVar8) {
            uVar7 = uVar5;
          }
          F_00c46aa0((*(char * PTR32 *)((char *)(_File))),pcVar1,uVar7);
          (*(int *)(((char *)(_File) + 4))) = (*(int *)(((char *)(_File) + 4))) - uVar7;
          (*(char * PTR32 *)((char *)(_File))) = (*(char * PTR32 *)((char *)(_File))) + uVar7;
          uVar8 = uVar8 - uVar7;
LAB_00c491d2: ;
          local_8 = pcVar1 + uVar7;
          pcVar1 = local_8;
        }
        if (uVar2 <= uVar8) {
          if ((uVar6 != 0) && (iVar4 = F_00c50d59(_File), iVar4 != 0)) goto LAB_00c49216;
          uVar6 = uVar8;
          if (uVar2 != 0) {
            uVar6 = uVar8 - uVar8 % uVar2;
          }
          _Buf = pcVar1;
          uVar5 = uVar6;
          iVar4 = F_00c5d07b(_File);
          uVar5 = F_00c5de4b(iVar4,_Buf,uVar5);
          if (uVar5 != 0xffffffff) {
            uVar7 = uVar6;
            if (uVar5 <= uVar6) {
              uVar7 = uVar5;
            }
            uVar8 = uVar8 - uVar7;
            if (uVar6 <= uVar5) goto LAB_00c491d2;
          }
          (*(int *)(((char *)(_File) + 12))) = (*(int *)(((char *)(_File) + 12))) | 0x20;
LAB_00c49216: ;
          return (uVar9 - uVar8) / _Size;
        }
        iVar4 = F_00c567c4((int)*pcVar1,_File);
        if (iVar4 == -1) goto LAB_00c49216;
        pcVar1 = pcVar1 + 1;
        uVar2 = (*(int *)(((char *)(_File) + 24)));
        uVar8 = uVar8 - 1;
        if ((int)uVar2 < 1) {
          local_c = 1;
          uVar2 = local_c;
        }
      } while( true );
    }
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
  }
  return 0;
}

/* ref: _fwrite */
gen_size32 F_00c4922b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc4922bu, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x34];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * piVar1;
  gen_size32 sVar2;
  
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xc;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f5e90);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc49237;
  if (((*(gen_size32 *)&gen_args[1]) != 0) && ((*(gen_size32 *)&gen_args[2]) != 0)) {
    if ((*(undefined * PTR32 *)&gen_args[3]) != (undefined *)0x0) {
      F_00c50937((*(undefined * PTR32 *)&gen_args[3]));
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
      sVar2 = F_00c490d4((*(undefined * PTR32 *)&gen_args[0]),(*(gen_size32 *)&gen_args[1]),(*(gen_size32 *)&gen_args[2]),(*(undefined * PTR32 *)&gen_args[3]));
      (*(gen_size32 *)(gen_frame + 0x0)) = sVar2;
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
      F_00c4929b((gen_frame + 0x1c));
      return (*(gen_size32 *)(gen_frame + 0x0));
    }
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
  }
  return 0;
}

/* ref: FUN_00c4929b */
uint F_00c4929b(unsigned int gen_a0)
{
  GEN_ENTER(0xc4929bu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 0x14));
  return extraout_EAX;
}

/* ref: __fclose_nolock */
int F_00c492a5(unsigned int gen_a0)
{
  GEN_ENTER(0xc492a5u, gen_a0, 0u, 0u, 0u);
  undefined * _File = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  if (_File == (undefined *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    iVar3 = -1;
  }
  else {
    if (((*(int *)(((char *)(_File) + 12))) & 0x83) != 0) {
      iVar3 = F_00c50d59(_File);
      F_00c5df1f(_File);
      iVar2 = F_00c5d07b(_File);
      iVar2 = F_00c4e08e(iVar2);
      if (iVar2 < 0) {
        iVar3 = -1;
      }
      else if ((*(char * PTR32 *)(((char *)(_File) + 28))) != (char *)0x0) {
        F_00c4c68f((*(char * PTR32 *)(((char *)(_File) + 28))));
        (*(char * PTR32 *)(((char *)(_File) + 28))) = (char *)0x0;
      }
    }
    (*(int *)(((char *)(_File) + 12))) = 0;
  }
  return iVar3;
}

/* ref: _fclose */
int F_00c49312(unsigned int gen_a0)
{
  GEN_ENTER(0xc49312u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  undefined * _File_00;
  int * piVar1;
  int iVar2;
  
  _File_00 = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f5eb0);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc4931e;
  (*(int *)(gen_frame + 0x0)) = -1;
  if ((*(undefined * PTR32 *)&gen_args[0]) == (undefined *)0x0) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    iVar2 = -1;
  }
  else if (((*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[0])) + 12))))) & 0x40) == 0) {
    F_00c50937((*(undefined * PTR32 *)&gen_args[0]));
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
    iVar2 = F_00c492a5(_File_00);
    (*(int *)(gen_frame + 0x0)) = iVar2;
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
    F_00c4937e(_File_00);
    iVar2 = (*(int *)(gen_frame + 0x0));
  }
  else {
    (*((int *)GEN_TOP((((char *)((*(undefined * PTR32 *)&gen_args[0])) + 12))))) = 0;
    iVar2 = (*(int *)(gen_frame + 0x0));
  }
  return iVar2;
}

/* ref: FUN_00c4937b */
uint F_00c4937b(unsigned int gen_a0)
{
  GEN_ENTER(0xc4937bu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 8));
  return extraout_EAX;
}

/* ref: FUN_00c4937e */
uint F_00c4937e(unsigned int gen_a0)
{
  GEN_ENTER(0xc4937eu, gen_a0, 0u, 0u, 0u);
  undefined * in_esi = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(in_esi);
  return extraout_EAX;
}

/* ref: _fprintf */
int F_00c49386(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xc49386u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0xac];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined * _File_00;
  int * piVar1;
  uint uVar2;
  int _Flag;
  undefined * puVar3;
  
  _File_00 = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xc;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f5ed0);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc49392;
  (*(uint *)(gen_frame + 0x0)) = 0;
  if (((*(undefined * PTR32 *)&gen_args[0]) == (undefined *)0x0) || ((*(char * PTR32 *)&gen_args[1]) == (char *)0x0)) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    return -1;
  }
  F_00c50937((*(undefined * PTR32 *)&gen_args[0]));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
  if (((*(int *)(((char *)(_File_00) + 12))) & 0x40) == 0) {
    uVar2 = F_00c5d07b(_File_00);
    if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
      puVar3 = &REFG(undefined, 0x134b280);
    }
    else {
      puVar3 = ((undefined *)GEN_TOP(((uVar2 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar2 >> 5])));
    }
    if ((puVar3[0x24] & 0x7f) == 0) {
      if ((uVar2 == 0xffffffff) || (uVar2 == 0xfffffffe)) {
        puVar3 = &REFG(undefined, 0x134b280);
      }
      else {
        puVar3 = ((undefined *)GEN_TOP(((uVar2 & 0x1f) * 0x40 + (&REFG(undefined4, 0x15e41a0))[(int)uVar2 >> 5])));
      }
      if ((puVar3[0x24] & 0x80) == 0) goto LAB_00c4944b;
    }
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    (*(uint *)(gen_frame + 0x0)) = 0xffffffff;
  }
LAB_00c4944b: ;
  if ((*(uint *)(gen_frame + 0x0)) == 0) {
    _Flag = F_00c5df50(_File_00);
    uVar2 = F_00c56a1d(_File_00,(*(char * PTR32 *)&gen_args[1]),0,((undefined *)&gen_args[2]));
    (*(uint *)(gen_frame + 0x0)) = uVar2;
    F_00c5dfec(_Flag,_File_00);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
  F_00c49488((gen_frame + 0x1c));
  return (*(uint *)(gen_frame + 0x0));
}

/* ref: FUN_00c49488 */
uint F_00c49488(unsigned int gen_a0)
{
  GEN_ENTER(0xc49488u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 8));
  return extraout_EAX;
}

/* ref: FUN_00c49492 */
uint F_00c49492(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0xc49492u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[35];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  { va_list gen_va; va_start(gen_va, gen_a2);
    for (int gen_i = 3; gen_i < 35; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c5e12b(param_1,param_2,param_3,((undefined *)&gen_args[3]));
  return uVar1;
}

/* ref: FUN_00c494ae */
uint F_00c494ae(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0xc494aeu, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[35];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  { va_list gen_va; va_start(gen_va, gen_a2);
    for (int gen_i = 3; gen_i < 35; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c5e14b(param_1,param_2,param_3,((undefined *)&gen_args[3]));
  return uVar1;
}

/* ref: FUN_00c494ca */
uint F_00c494ca(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xc494cau, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c5e14b(param_1,param_2,(undefined *)0x0,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: FUN_00c494e5 */
uint F_00c494e5(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0xc494e5u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[35];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  { va_list gen_va; va_start(gen_va, gen_a2);
    for (int gen_i = 3; gen_i < 35; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c5e16b(param_1,param_2,param_3,((undefined *)&gen_args[3]));
  return uVar1;
}

/* ref: FUN_00c49501 */
uint F_00c49501(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xc49501u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c5e16b(param_1,param_2,(undefined *)0x0,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: __fsopen */
undefined * F_00c4951c(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4951cu, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  char * _Filename_00;
  char * _Mode_00;
  int * piVar1;
  undefined * pFVar2;
  
  _Mode_00 = (*(char * PTR32 *)&gen_args[1]);
  _Filename_00 = (*(char * PTR32 *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0xc;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f5ef0);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc49528;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = (undefined *)0x0;
  if ((((*(char * PTR32 *)&gen_args[0]) == (char *)0x0) || ((*(char * PTR32 *)&gen_args[1]) == (char *)0x0)) || (*(*(char * PTR32 *)&gen_args[1]) == '\0')) {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
  }
  else {
    (*(char * PTR32 *)&gen_args[0]) = (char *)F_00c5e47f();
    if ((undefined *)(*(char * PTR32 *)&gen_args[0]) == (undefined *)0x0) {
      piVar1 = F_00c51f85();
      *piVar1 = 0x18;
    }
    else {
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
      if (*_Filename_00 != '\0') {
        pFVar2 = F_00c5e1e8(_Filename_00,_Mode_00,(*(int *)&gen_args[2]),(undefined *)(*(char * PTR32 *)&gen_args[0]));
        (*(undefined * PTR32 *)(gen_frame + 0x0)) = pFVar2;
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
        F_00c495ce((gen_frame + 0x1c));
        return (*(undefined * PTR32 *)(gen_frame + 0x0));
      }
      piVar1 = F_00c51f85();
      *piVar1 = 0x16;
      F_00c5e5c0(&REFG(undefined4, 0x134ab78),((undefined1 *)(gen_frame + 0xc)),0xfffffffe);
    }
  }
  return (undefined *)0x0;
}

/* ref: FUN_00c495ce */
uint F_00c495ce(unsigned int gen_a0)
{
  GEN_ENTER(0xc495ceu, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c509aa(*(undefined * PTR32 *)(in_ebp + 8));
  return extraout_EAX;
}

/* ref: _fopen */
undefined * F_00c495d8(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc495d8u, gen_a0, gen_a1, 0u, 0u);
  char * _Filename = (char *)(uintptr_t)gen_a0;
  char * _Mode = (char *)(uintptr_t)gen_a1;
  undefined * pFVar1;
  
  pFVar1 = F_00c4951c(_Filename,_Mode,0x40);
  return pFVar1;
}

/* ref: _fopen_s */
int F_00c495ef(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc495efu, gen_a0, gen_a1, gen_a2, 0u);
  undefined * PTR32 * _File = (undefined * PTR32 *)(uintptr_t)gen_a0;
  char * _Filename = (char *)(uintptr_t)gen_a1;
  char * _Mode = (char *)(uintptr_t)gen_a2;
  int * piVar1;
  undefined * pFVar2;
  int iVar3;
  
  if (_File == (undefined * PTR32 *)0x0) {
    piVar1 = F_00c51f85();
    iVar3 = 0x16;
    *piVar1 = 0x16;
    F_00c4c305();
  }
  else {
    pFVar2 = F_00c4951c(_Filename,_Mode,0x80);
    *_File = pFVar2;
    if (pFVar2 == (undefined *)0x0) {
      piVar1 = F_00c51f85();
      iVar3 = *piVar1;
    }
    else {
      iVar3 = 0;
    }
  }
  return iVar3;
}

/* ref: FUN_00c49680 */
float10 F_00c49680(double gen_a0)
{
  GEN_ENTER(0xc49680u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), 0u, 0u);
  float10 in_st0 = (float10)gen_a0;
  uint in_eax;
  float10 fVar1;
  float10 in_st0_00;
  double dVar2;
  
  if ((REFG(int, 0x15e418c) != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (((undefined2)0x27f) & 0x7f) == 0x7f)) {
    fVar1 = F_00c5e740(in_st0);
    return fVar1;
  }
  dVar2 = (double)in_st0;
  in_eax = F_00c5ee28((int)(ulonglong)gen_d2bits(dVar2),
                        (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
  fVar1 = F_00c496d8(in_eax,in_st0_00,(int)(ulonglong)gen_d2bits(dVar2),
                       (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
  return fVar1;
}

/* ref: FUN_00c49790 */
uint F_00c49790(double gen_a0)
{
  GEN_ENTER(0xc49790u, (unsigned int)gen_trace_d(gen_a0), (unsigned int)(gen_trace_d(gen_a0) >> 32), 0u, 0u);
  float10 in_st0 = (float10)gen_a0;
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  int uStack_20;
  float uStack_1c;
  
  if (REFG(int, 0x15e42a0) != 0) {
    return (int)in_st0;
  }
  fVar3 = (float)in_st0;
  uVar1 = (ulonglong)ROUND(in_st0);
  uStack_20 = (int)uVar1;
  if ((uStack_20 == 0) &&
     (uStack_1c = gen_bits2f((uint)(uVar1 >> 0x20)), fVar3 = uStack_1c,
     (uVar1 & 0x7fffffff00000000) == 0)) {
    uVar2 = 0;
  }
  else if ((int)gen_fl2bits(fVar3) < 0) {
    uVar2 = uStack_20 +
            (uint)(0x80000000 < (uint)gen_fl2bits(-(float)(in_st0 - (float10)(longlong)uVar1)));
  }
  else {
    uVar2 = uStack_20 -
            (uint)(0x80000000 < (uint)gen_fl2bits((float)(in_st0 - (float10)(longlong)uVar1)));
  }
  return uVar2;
}

/* ref: _wcsncpy_s */
int F_00c4983b(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc4983bu, gen_a0, gen_a1, gen_a2, gen_a3);
  short * param_1 = (short *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  short * param_3 = (short *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  short sVar1;
  int * piVar2;
  short * psVar3;
  int iVar4;
  int eVar5;
  int iVar6;
  int eStack_14;
  
  if (param_4 == 0) {
    if (param_1 == (short *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
    }
    else {
LAB_00c49861: ;
      if (param_2 != 0) {
        if (param_4 == 0) {
          *param_1 = 0;
          return 0;
        }
        if (param_3 != (short *)0x0) {
          iVar4 = param_4;
          iVar6 = param_2;
          if (param_4 == -1) {
            psVar3 = param_3;
            do {
              sVar1 = *psVar3;
              *((short *)GEN_TOP((((int)param_1 - (int)param_3) + (int)psVar3))) = sVar1;
              psVar3 = psVar3 + 1;
              if (sVar1 == 0) break;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          else {
            psVar3 = param_1;
            do {
              sVar1 = *((short *)GEN_TOP((((int)param_3 - (int)param_1) + (int)psVar3)));
              *psVar3 = sVar1;
              psVar3 = psVar3 + 1;
              if ((sVar1 == 0) || (iVar6 = iVar6 + -1, iVar6 == 0)) break;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            if (iVar4 == 0) {
              *psVar3 = 0;
            }
          }
          if (iVar6 != 0) {
            return 0;
          }
          if (iVar4 == -1) {
            param_1[param_2 + -1] = 0;
            return 0x50;
          }
          *param_1 = 0;
          piVar2 = F_00c51f85();
          eStack_14 = 0x22;
          *piVar2 = 0x22;
          eVar5 = eStack_14;
          goto LAB_00c49872;
        }
        *param_1 = 0;
      }
    }
  }
  else if (param_1 != (short *)0x0) goto LAB_00c49861;
  piVar2 = F_00c51f85();
  eVar5 = 0x16;
  *piVar2 = 0x16;
LAB_00c49872: ;
  F_00c4c305();
  return eVar5;
}

/* ref: _strcpy_s */
int F_00c49908(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc49908u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  char cVar1;
  int * piVar2;
  char * pcVar3;
  int eVar4;
  int iVar5;
  int eStack_10;
  
  if ((param_1 != (undefined1 *)0x0) && (param_2 != 0)) {
    if (param_3 != (char *)0x0) {
      pcVar3 = param_3;
      iVar5 = param_2;
      do {
        cVar1 = *pcVar3;
        pcVar3[(int)param_1 - (int)param_3] = cVar1;
        pcVar3 = pcVar3 + 1;
        if (cVar1 == '\0') break;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if (iVar5 != 0) {
        return 0;
      }
      *param_1 = 0;
      piVar2 = F_00c51f85();
      eStack_10 = 0x22;
      *piVar2 = 0x22;
      eVar4 = eStack_10;
      goto LAB_00c49927;
    }
    *param_1 = 0;
  }
  piVar2 = F_00c51f85();
  eVar4 = 0x16;
  *piVar2 = 0x16;
LAB_00c49927: ;
  F_00c4c305();
  return eVar4;
}

/* ref: __invoke_watson_if_error */
unsigned int F_00c49967(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc49967u, gen_a0, gen_a1, gen_a2, gen_a3);
  int _ExpressionError = (int)gen_a0;
  wchar_t * _Expression = (wchar_t *)(uintptr_t)gen_a1;
  wchar_t * _Function = (wchar_t *)(uintptr_t)gen_a2;
  wchar_t * _File = (wchar_t *)(uintptr_t)gen_a3;
  uint _Line = (uint)gen_a4;
  uint _Reserved = (uint)gen_a5;
  undefined4 unaff_EDI = 0;
  
  if (_ExpressionError != 0) {
                    
    F_00c4c299(unaff_EDI,_Expression,_Function,_File,_Line,_Reserved);
  }
  return 0;
}

/* ref: __copytlocinfo_nolock */
unsigned int F_00c49994(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc49994u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  if (((in_ecx != (undefined4 *)0x0) && (in_eax != (undefined4 *)0x0)) && (in_eax != in_ecx)) {
    puVar2 = in_eax;
    for (iVar1 = 0x36; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *in_ecx;
      in_ecx = in_ecx + 1;
      puVar2 = puVar2 + 1;
    }
    *in_eax = 0;
    F_00c5cb36(in_eax);
  }
  return 0;
}

/* ref: __configthreadlocale */
int F_00c499ba(unsigned int gen_a0)
{
  GEN_ENTER(0xc499bau, gen_a0, 0u, 0u, 0u);
  int _Flag = (int)gen_a0;
  uint uVar1;
  undefined * p_Var2;
  int * piVar3;
  uint uVar4;
  
  p_Var2 = F_00c5b37a();
  uVar1 = (*(int *)(((char *)(p_Var2) + 112)));
  if (_Flag == -1) {
    REFG(undefined4, 0x134b7e0) = 0xffffffff;
  }
  else if (_Flag != 0) {
    if (_Flag == 1) {
      uVar4 = uVar1 | 2;
    }
    else {
      if (_Flag != 2) {
        piVar3 = F_00c51f85();
        *piVar3 = 0x16;
        F_00c4c305();
        return -1;
      }
      uVar4 = uVar1 & 0xfffffffd;
    }
    (*(int *)(((char *)(p_Var2) + 112))) = uVar4;
  }
  return ((uVar1 & 2) == 0) + 1;
}

/* ref: __free_locale */
unsigned int F_00c49a41(unsigned int gen_a0)
{
  GEN_ENTER(0xc49a41u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x18];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x14);
  gen_args[0] = gen_a0;
  undefined * ptVar1;
  undefined * _Memory;
  LONG LVar2;
  
  _Memory = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = &REFG(undefined, 0x12f5f10);
  (*(undefined4 *)(gen_frame + 0x4)) = 0xc49a4d;
  if ((*(undefined * PTR32 *)&gen_args[0]) != (undefined *)0x0) {
    F_00c5aa4f(0xd);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    if ((*(undefined * PTR32 *)(((char *)(_Memory) + 4))) != (undefined *)0x0) {
      LVar2 = gen_imp_InterlockedDecrement(&(*(int *)((char *)(*(undefined * PTR32 *)(((char *)(_Memory) + 4))))));
      if ((LVar2 == 0) && ((*(undefined * PTR32 *)(((char *)(_Memory) + 4))) != (undefined *)&REFG(undefined, 0x134b2c0))) {
        F_00c4c68f((*(undefined * PTR32 *)(((char *)(_Memory) + 4))));
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0xfffffffe;
    F_00c49aee();
    if ((*(undefined * PTR32 *)((char *)(_Memory))) != (undefined *)0x0) {
      F_00c5aa4f(0xc);
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x1;
      F_00c5cbc5((*(undefined * PTR32 *)((char *)(_Memory))));
      ptVar1 = (*(undefined * PTR32 *)((char *)(_Memory)));
      if (((ptVar1 != (undefined *)0x0) && ((*(int *)((char *)(ptVar1))) == 0)) &&
         (ptVar1 != (undefined *)&REFG(undefined, 0x134b950))) {
        F_00c5cc5e(ptVar1);
      }
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0xfffffffe;
      F_00c49afa();
    }
    (*(undefined * PTR32 *)((char *)(_Memory))) = (undefined *)0xbaadf00d;
    (*(undefined * PTR32 *)(((char *)(_Memory) + 4))) = (undefined *)0xbaadf00d;
    F_00c4c68f(_Memory);
  }
  return 0;
}

/* ref: FUN_00c49aeb */
uint F_00c49aeb(unsigned int gen_a0)
{
  GEN_ENTER(0xc49aebu, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xd);
  return uVar1;
}

/* ref: FUN_00c49aee */
uint F_00c49aee(void)
{
  GEN_ENTER(0xc49aeeu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xd);
  return uVar1;
}

/* ref: FUN_00c49af7 */
uint F_00c49af7(unsigned int gen_a0)
{
  GEN_ENTER(0xc49af7u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xc);
  return uVar1;
}

/* ref: FUN_00c49afa */
uint F_00c49afa(void)
{
  GEN_ENTER(0xc49afau, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xc);
  return uVar1;
}

/* ref: FUN_00c49b03 */
uint F_00c49b03(unsigned int gen_a0)
{
  GEN_ENTER(0xc49b03u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  
  F_00c49a41(param_1);
  return extraout_EAX;
}

/* ref: FUN_00c49ba5 */
uint F_00c49ba5(unsigned int gen_a0)
{
  GEN_ENTER(0xc49ba5u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xc);
  return uVar1;
}

/* ref: FUN_00c49bb1 */
uint F_00c49bb1(unsigned int gen_a0)
{
  GEN_ENTER(0xc49bb1u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xd);
  return uVar1;
}

/* ref: FUN_00c49bc2 */
undefined4 F_00c49bc2(void)
{
  GEN_ENTER(0xc49bc2u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c49bc5 */
unsigned int F_00c49bc5(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc49bc5u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int eVar1;
  undefined4 * puVar2;
  int in_edi;
  
  in_edi = 0;
  if (0 < (*(int *)&gen_args[2])) {
    puVar2 = &(*(int *)&gen_args[2]);
    do {
      puVar2 = puVar2 + 1;
      eVar1 = F_00c473c8((*(undefined4 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),*puVar2);
      if (eVar1 != 0) {
                    
        F_00c4c299(in_edi,0,0,0,0,0);
      }
      in_edi = in_edi + 1;
    } while (in_edi < (*(int *)&gen_args[2]));
  }
  return 0;
}

/* ref: ___lc_strtolc */
uint F_00c49c06(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc49c06u, gen_a0, gen_a1, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  int eVar2;
  uint uVar3;
  char * pcVar4;
  char * _Str;
  char * in_edi;
  undefined4 uVar5;
  
  _Str = param_2;
  F_00c48350(param_1,0,0x90);
  if (*param_2 == '\0') {
    return 0;
  }
  if ((*param_2 == '.') && (param_2[1] != '\0')) {
    eVar2 = F_00c4d9ef(param_1 + 0x80,0x10,param_2 + 1,0xf);
    in_edi = param_1;
    if (eVar2 == 0) {
      param_1[0x8f] = '\0';
      return 0;
    }
  }
  else {
    param_2 = (char *)0x0;
    uVar3 = F_00c525d0(_Str,"_.,");
    while( true ) {
      if (uVar3 == 0) {
        return 0xffffffff;
      }
      in_edi = _Str + uVar3;
      cVar1 = *in_edi;
      if (param_2 == (char *)0x0) {
        if (0x3f < uVar3) {
          return 0xffffffff;
        }
        if (cVar1 == '.') {
          return 0xffffffff;
        }
        uVar5 = 0x40;
        pcVar4 = param_1;
      }
      else if (param_2 == (char *)0x1) {
        if (0x3f < uVar3) {
          return 0xffffffff;
        }
        if (cVar1 == '_') {
          return 0xffffffff;
        }
        uVar5 = 0x40;
        pcVar4 = param_1 + 0x40;
      }
      else {
        if (param_2 != (char *)0x2) {
          return 0xffffffff;
        }
        if (0xf < uVar3) {
          return 0xffffffff;
        }
        if ((cVar1 != '\0') && (cVar1 != ',')) {
          return 0xffffffff;
        }
        uVar5 = 0x10;
        pcVar4 = param_1 + 0x80;
      }
      eVar2 = F_00c4d9ef(pcVar4,uVar5,_Str,uVar3);
      if (eVar2 != 0) break;
      if (cVar1 == ',') {
        return 0;
      }
      if (cVar1 == '\0') {
        return 0;
      }
      param_2 = (char *)((int)param_2 + 1);
      _Str = in_edi + 1;
      uVar3 = F_00c525d0(_Str,"_.,");
    }
  }
                    
  F_00c4c299(in_edi,0,0,0,0,0);
}

/* ref: FUN_00c49d25 */
unsigned int F_00c49d25(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc49d25u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int eVar1;
  undefined4 unaff_EDI = 0;
  
  eVar1 = F_00c49908(param_1,param_2,param_3);
  if (eVar1 == 0) {
    if (*(char *)(param_3 + 0x40) != '\0') {
      F_00c49bc5(param_1,param_2,2,&REFG(undefined, 0x10c4408),(char *)(param_3 + 0x40));
    }
    if (*(char *)(param_3 + 0x80) != '\0') {
      F_00c49bc5(param_1,param_2,2,&REFG(undefined, 0x1118a34),(char *)(param_3 + 0x80));
    }
    return 0;
  }
                    
  F_00c4c299(unaff_EDI,0,0,0,0,0);
}

/* ref: __setlocale_get_all */
uint F_00c49d90(unsigned int gen_a0)
{
  GEN_ENTER(0xc49d90u, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  bool bVar1;
  undefined4 * _Memory;
  int eVar2;
  int iVar3;
  LONG LVar4;
  undefined4 * in_edi;
  undefined4 * local_c;
  undefined * PTR32 * local_8;
  
  bVar1 = true;
  _Memory = F_00c54c2e(0x355);
  in_edi = _Memory;
  if (_Memory != (undefined4 *)0x0) {
    in_edi = _Memory + 1;
    *(undefined1 *)in_edi = 0;
    *_Memory = 1;
    F_00c49bc5(in_edi,0x351,3,REFG(undefined * PTR32, 0x1118974),&REFG(undefined, 0x1118a3c));
    local_8 = &REFG(undefined * PTR32, 0x1118974);
    local_c = (undefined4 *)(in_esi + 0x58);
    do {
      eVar2 = F_00c473c8(in_edi,0x351,&REFG(undefined, 0x1118a38));
      if (eVar2 != 0) {
                    
        F_00c4c299(in_edi,0,0,0,0,0);
      }
      iVar3 = F_00c556e0((char *)*local_c,(char *)local_c[4]);
      if (iVar3 != 0) {
        bVar1 = false;
      }
      local_8 = local_8 + 3;
      F_00c49bc5(in_edi,0x351,3,*local_8,&REFG(undefined, 0x1118a3c));
      local_c = local_c + 4;
    } while ((int)local_8 < 0x11189a4);
    if (bVar1) {
      F_00c4c68f(_Memory);
      if ((*(int *)(in_esi + 0x50) != 0) &&
         (LVar4 = gen_imp_InterlockedDecrement(*(int *)(in_esi + 0x50)), LVar4 == 0)) {
        F_00c4c68f(*(undefined * PTR32 *)(in_esi + 0x50));
      }
      if ((*(int *)(in_esi + 0x54) != 0) &&
         (LVar4 = gen_imp_InterlockedDecrement(*(int *)(in_esi + 0x54)), LVar4 == 0)) {
        F_00c4c68f(*(undefined * PTR32 *)(in_esi + 0x54));
      }
      in_edi = *(undefined4 * PTR32 *)(in_esi + 0x68);
      *(undefined4 *)(in_esi + 0x54) = 0;
      *(undefined4 *)(in_esi + 0x4c) = 0;
      *(undefined4 *)(in_esi + 0x50) = 0;
      *(undefined4 *)(in_esi + 0x48) = 0;
    }
    else {
      if ((*(int *)(in_esi + 0x50) != 0) &&
         (LVar4 = gen_imp_InterlockedDecrement(*(int *)(in_esi + 0x50)), LVar4 == 0)) {
        F_00c4c68f(*(undefined * PTR32 *)(in_esi + 0x50));
      }
      if ((*(int *)(in_esi + 0x54) != 0) &&
         (LVar4 = gen_imp_InterlockedDecrement(*(int *)(in_esi + 0x54)), LVar4 == 0)) {
        F_00c4c68f(*(undefined * PTR32 *)(in_esi + 0x54));
      }
      *(undefined4 *)(in_esi + 0x54) = 0;
      *(undefined4 *)(in_esi + 0x4c) = 0;
      *(undefined4 * PTR32 *)(in_esi + 0x50) = _Memory;
      *(undefined4 * PTR32 *)(in_esi + 0x48) = in_edi;
    }
  }
  return (uint)in_edi;
}

/* ref: __expandlocale */
uint F_00c49ef5(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc49ef5u, gen_a0, gen_a1, gen_a2, gen_a3);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined2 * param_4 = (undefined2 *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  wchar_t * pwVar1;
  wchar_t * _Str1;
  wchar_t * _LpCodePage;
  undefined * p_Var2;
  int eVar3;
  gen_size32 sVar4;
  int iVar5;
  uint uVar6;
  BOOL BVar7;
  char * _Str1_00;
  char * pcVar8;
  undefined2 * in_edi;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  p_Var2 = F_00c5b37a();
  pwVar1 = (((wchar_t *)GEN_TOP(((((char *)(p_Var2) + 156) + 28))))) + 6;
  _Str1 = (((wchar_t *)GEN_TOP(((((char *)(p_Var2) + 156) + 28))))) + 8;
  _LpCodePage = (((wchar_t *)GEN_TOP(((((char *)(p_Var2) + 156) + 28))))) + 2;
  _Str1_00 = ((char *)GEN_TOP(((int)(((wchar_t *)GEN_TOP(((((char *)(p_Var2) + 156) + 28))))) + 0x93)));
  if (((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) || (param_3 == 0)) {
LAB_00c4a105: ;
    _Str1_00 = (char *)0x0;
  }
  else {
    if ((*param_1 == 'C') && (param_1[1] == '\0')) {
      eVar3 = F_00c49908(param_2,param_3,&REFG(undefined, 0x11186a8));
      in_edi = param_4;
      if (eVar3 != 0) goto LAB_00c49fcb;
      if (param_4 != (undefined2 *)0x0) {
        *param_4 = 0;
        param_4[1] = 0;
        param_4[2] = 0;
      }
      _Str1_00 = param_2;
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = 0;
      }
      goto LAB_00c4a107;
    }
    sVar4 = F_00c552f0(param_1);
    in_edi = (undefined2 *)0x83;
    if ((0x82 < sVar4) ||
       ((iVar5 = F_00c556e0(_Str1_00,param_1), iVar5 != 0 &&
        (iVar5 = F_00c556e0((char *)_Str1,param_1), iVar5 != 0)))) {
      uVar6 = F_00c49c06(((undefined1 *)(gen_frame + 0x8)),param_1);
      if ((uVar6 != 0) ||
         (BVar7 = F_00c6085d((GEN_LPANY)((undefined1 *)(gen_frame + 0x8)),(UINT *)_LpCodePage,(GEN_LPANY)((undefined1 *)(gen_frame + 0x8))),
         BVar7 == 0)) goto LAB_00c4a105;
      *(uint *)pwVar1 = (uint)(ushort)(*((wchar_t *)GEN_TOP((((((char *)(p_Var2) + 156) + 28) + (4) * 2)))));
      F_00c49d25(_Str1_00,0x83,((undefined1 *)(gen_frame + 0x8)));
      if ((*param_1 == '\0') || (pcVar8 = param_1, 0x82 < sVar4)) {
        sVar4 = 0;
        pcVar8 = "";
      }
      eVar3 = F_00c4d9ef(_Str1,0x83,pcVar8,sVar4 + 1);
      if (eVar3 != 0) goto LAB_00c49fcb;
    }
    if (param_4 != (undefined2 *)0x0) {
      F_00c46aa0(param_4,_LpCodePage,6);
    }
    if (param_5 != (undefined4 *)0x0) {
      F_00c46aa0(param_5,pwVar1,4);
    }
    eVar3 = F_00c49908(param_2,param_3,_Str1_00);
    if (eVar3 != 0) {
LAB_00c49fcb: ;
                    
      F_00c4c299(in_edi,0,0,0,0,0);
    }
  }
LAB_00c4a107: ;
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return (uint)_Str1_00;
}

/* ref: FUN_00c4a116 */
uint F_00c4a116(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4a116u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int in_esi = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x1d0];
  uint * puVar1;
  int iVar2;
  undefined * in_edi;
  uint uVar3;
  int iVar4;
  gen_size32 sVar5;
  undefined4 * puVar6;
  int eVar7;
  wchar_t * pwVar8;
  BOOL BVar9;
  LONG LVar10;
  int iVar11;
  
  (*(uint *)(gen_frame + 0x1c8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1cc);
  (*(int *)(gen_frame + 0x3c)) = in_ecx;
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = param_3;
  in_edi = F_00c5b37a();
  uVar3 = F_00c49ef5((*(undefined * PTR32 *)(gen_frame + 0x34)),((char *)(gen_frame + 0x144)),0x83,((ushort *)(gen_frame + 0x1c)),((undefined4 *)(gen_frame + 0x28)),in_ecx);
  if (uVar3 != 0) {
    iVar11 = in_ecx * 0x10 + in_esi;
    iVar4 = F_00c556e0(((char *)(gen_frame + 0x144)),*(char * PTR32 *)(iVar11 + 0x48));
    if (iVar4 == 0) {
LAB_00c4a19c: ;
      uVar3 = *(uint *)(iVar11 + 0x48);
      goto LAB_00c4a174;
    }
    sVar5 = F_00c552f0(((char *)(gen_frame + 0x144)));
    (*(gen_size32 *)(gen_frame + 0x40)) = sVar5 + 5;
    puVar6 = F_00c54c2e(sVar5 + 5);
    (*(undefined4 * PTR32 *)(gen_frame + 0x38)) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = *(undefined * PTR32 *)(iVar11 + 0x48);
      puVar1 = (uint *)(in_esi + 0xc + (*(int *)(gen_frame + 0x3c)) * 4);
      (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar1;
      (*(uint *)(gen_frame + 0x14)) = *puVar1;
      iVar4 = ((*(int *)(gen_frame + 0x3c)) + 6) * 6 + in_esi;
      (*(int *)(gen_frame + 0x30)) = iVar4;
      F_00c46aa0(((undefined4 *)(gen_frame + 0x4)),iVar4,6);
      (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(in_esi + 4);
      eVar7 = F_00c49908((*(undefined4 * PTR32 *)(gen_frame + 0x38)) + 1,(*(gen_size32 *)(gen_frame + 0x40)) - 4,((char *)(gen_frame + 0x144)));
      if (eVar7 != 0) {
                    
        F_00c4c299(in_edi,0,0,0,0,0);
      }
      *(undefined4 * PTR32 *)(iVar11 + 0x48) = (*(undefined4 * PTR32 *)(gen_frame + 0x38)) + 1;
      *(*(uint * PTR32 *)(gen_frame + 0x24)) = (uint)((ushort *)(gen_frame + 0x1c))[0];
      F_00c46aa0((*(int *)(gen_frame + 0x30)),((ushort *)(gen_frame + 0x1c)),6);
      if ((*(int *)(gen_frame + 0x3c)) == 2) {
        (*(gen_size32 *)(gen_frame + 0x40)) = 0;
        *(undefined4 *)(in_esi + 4) = ((undefined4 *)(gen_frame + 0x28))[0];
        iVar4 = *((int *)GEN_TOP(((((wchar_t *)GEN_TOP(((((char *)(in_edi) + 156) + 290))))) + 0x19)));
        (*(int *)(gen_frame + 0x30)) = *((int *)GEN_TOP(((((wchar_t *)GEN_TOP(((((char *)(in_edi) + 156) + 290))))) + 0x1b)));
        pwVar8 = (((wchar_t *)GEN_TOP(((((char *)(in_edi) + 156) + 290))))) + 9;
        do {
          if (*(int *)(in_esi + 4) == *(int *)pwVar8) {
            if ((*(gen_size32 *)(gen_frame + 0x40)) != 0) {
              pwVar8 = (((wchar_t *)GEN_TOP(((((char *)(in_edi) + 156) + 290))))) + (*(gen_size32 *)(gen_frame + 0x40)) * 4 + 9;
              *((int *)GEN_TOP(((((wchar_t *)GEN_TOP(((((char *)(in_edi) + 156) + 290))))) + 9))) = *(int *)pwVar8;
              *((int *)GEN_TOP(((((wchar_t *)GEN_TOP(((((char *)(in_edi) + 156) + 290))))) + 0xb))) = *(int *)(pwVar8 + 2);
              *(int *)pwVar8 = iVar4;
              *(int *)(pwVar8 + 2) = (*(int *)(gen_frame + 0x30));
            }
            break;
          }
          iVar2 = *(int *)pwVar8;
          sVar5 = (*(gen_size32 *)(gen_frame + 0x40)) + 1;
          (*(gen_size32 *)(gen_frame + 0x40)) = sVar5;
          *(int *)pwVar8 = iVar4;
          (*(int *)(gen_frame + 0xc)) = iVar2;
          iVar4 = *(int *)(pwVar8 + 2);
          *(int *)(pwVar8 + 2) = (*(int *)(gen_frame + 0x30));
          pwVar8 = pwVar8 + 4;
          (*(int *)(gen_frame + 0x30)) = iVar4;
          iVar4 = (*(int *)(gen_frame + 0xc));
        } while ((int)sVar5 < 5);
        if ((*(gen_size32 *)(gen_frame + 0x40)) == 5) {
          BVar9 = F_00c635a3(0,1,&REFG(undefined, 0x11189b0),0x7f,((ushort *)(gen_frame + 0x44)),*(undefined4 *)(in_esi + 4),
                             *(undefined4 *)(in_esi + 0x14),1);
          if (BVar9 == 0) {
            (*((wchar_t *)GEN_TOP((((((char *)(in_edi) + 156) + 290) + (0xb) * 2))))) = L'\0';
            (*((wchar_t *)GEN_TOP((((((char *)(in_edi) + 156) + 290) + (0xc) * 2))))) = L'\0';
          }
          else {
            uVar3 = 0;
            do {
              ((ushort *)(gen_frame + 0x44))[(int)(uVar3)] = ((ushort *)(gen_frame + 0x44))[(int)(uVar3)] & 0x1ff;
              uVar3 = uVar3 + 1;
            } while (uVar3 < 0x7f);
            iVar4 = F_00c61f68(((ushort *)(gen_frame + 0x44)),REFG(undefined * PTR32, 0x134aba0),0xfe);
            *((uint *)GEN_TOP(((((wchar_t *)GEN_TOP(((((char *)(in_edi) + 156) + 290))))) + 0xb))) = (uint)(iVar4 == 0);
          }
          *((undefined4 *)GEN_TOP(((((wchar_t *)GEN_TOP(((((char *)(in_edi) + 156) + 290))))) + 9))) = *(undefined4 *)(in_esi + 4);
        }
        *(undefined4 *)(in_esi + 0xa8) = *((undefined4 *)GEN_TOP(((((wchar_t *)GEN_TOP(((((char *)(in_edi) + 156) + 290))))) + 0xb)));
      }
      if ((*(int *)(gen_frame + 0x3c)) == 1) {
        *(undefined4 *)(in_esi + 8) = ((undefined4 *)(gen_frame + 0x28))[0];
      }
      uVar3 = (*((code *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x1118970))[(*(int *)(gen_frame + 0x3c)) * 3])))(in_esi);
      if (uVar3 == 0) {
        if ((*(undefined * PTR32 *)(gen_frame + 0x34)) != &REFG(undefined, 0x134b7e4)) {
          iVar4 = (*(int *)(gen_frame + 0x3c)) + 5;
          LVar10 = gen_imp_InterlockedDecrement(*(LONG * PTR32 *)(in_esi + iVar4 * 0x10));
          if (LVar10 == 0) {
            F_00c4c68f(*(undefined * PTR32 *)(in_esi + iVar4 * 0x10));
            F_00c4c68f(*(undefined * PTR32 *)(iVar11 + 0x54));
            *(undefined4 *)(iVar11 + 0x4c) = 0;
          }
        }
        *(*(undefined4 * PTR32 *)(gen_frame + 0x38)) = 1;
        *((undefined4 * PTR32 *)GEN_TOP((in_esi + ((*(int *)(gen_frame + 0x3c)) + 5) * 0x10))) = (*(undefined4 * PTR32 *)(gen_frame + 0x38));
        goto LAB_00c4a19c;
      }
      *(undefined * PTR32 *)(iVar11 + 0x48) = (*(undefined * PTR32 *)(gen_frame + 0x34));
      F_00c4c68f((*(undefined4 * PTR32 *)(gen_frame + 0x38)));
      *(*(uint * PTR32 *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x14));
      *(undefined4 *)(in_esi + 4) = (*(undefined4 *)(gen_frame + 0x18));
    }
  }
  uVar3 = 0;
LAB_00c4a174: ;
  ((undefined4 *)(gen_frame + 0x4))[0] = 0xc4a180;
  F_00c47745((*(uint *)(gen_frame + 0x1c8)) ^ (uint)(uint)(gen_frame + 0x1cc));
  return uVar3;
}

/* ref: __setlocale_nolock */
uint F_00c4a450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4a450u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  bool bVar1;
  uint uVar2;
  char * pcVar3;
  gen_size32 sVar4;
  gen_size32 sVar5;
  int eVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined * PTR32 * ppuVar10;
  char * _Str;
  undefined4 * puVar11;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  iVar9 = 0;
  if (param_1 != 0) {
    if (param_3 == (char *)0x0) {
      uVar2 = *(uint *)(param_2 + 0x48 + param_1 * 0x10);
    }
    else {
      uVar2 = F_00c4a116(param_1,param_2,param_3);
    }
    goto LAB_00c4a65d;
  }
  bVar1 = true;
  (*(int *)(gen_frame + 0x10)) = 0;
  if (param_3 != (char *)0x0) {
    if (((*param_3 == 'L') && (param_3[1] == 'C')) && (_Str = param_3, param_3[2] == '_')) {
      do {
        pcVar3 = F_00c52d60(_Str,"=;");
        if (((pcVar3 == (char *)0x0) || (sVar4 = (int)pcVar3 - (int)_Str, sVar4 == 0)) ||
           (*pcVar3 == ';')) {
LAB_00c4a5e1: ;
          uVar2 = 0;
          goto LAB_00c4a65d;
        }
        (*(int *)(gen_frame + 0x8)) = 1;
        ppuVar10 = &REFG(undefined * PTR32, 0x1118974);
        do {
          iVar9 = F_00c4b813(*ppuVar10,_Str,sVar4);
          if ((iVar9 == 0) && (sVar5 = F_00c552f0(*ppuVar10), sVar4 == sVar5)) break;
          (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
          ppuVar10 = ppuVar10 + 3;
        } while ((int)ppuVar10 < 0x11189a5);
        pcVar3 = pcVar3 + 1;
        sVar4 = F_00c525d0(pcVar3,";");
        if ((sVar4 == 0) && (*pcVar3 != ';')) goto LAB_00c4a5e1;
        if ((*(int *)(gen_frame + 0x8)) < 6) {
          eVar6 = F_00c4d9ef(((char *)(gen_frame + 0x14)),0x83,pcVar3,sVar4);
          if (eVar6 != 0) {
                    
            F_00c4c299(sVar4,0,0,0,0,0);
          }
          ((char *)(gen_frame + 0x14))[(int)(sVar4)] = '\0';
          uVar2 = F_00c4a116((*(int *)(gen_frame + 0x8)),param_2,((char *)(gen_frame + 0x14)));
          if (uVar2 != 0) {
            (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
          }
        }
        iVar9 = (*(int *)(gen_frame + 0x10));
      } while ((pcVar3[sVar4] != '\0') && (_Str = pcVar3 + sVar4 + 1, *_Str != '\0'));
    }
    else {
      uVar7 = F_00c49ef5(param_3,((char *)(gen_frame + 0x14)),0x83,0,0,0);
      uVar2 = 0;
      if (uVar7 == 0) goto LAB_00c4a65d;
      puVar11 = (undefined4 *)(param_2 + 0x48);
      do {
        if (iVar9 != 0) {
          iVar8 = F_00c556e0(((char *)(gen_frame + 0x14)),(char *)*puVar11);
          if ((iVar8 == 0) || (uVar2 = F_00c4a116(iVar9,param_2,((char *)(gen_frame + 0x14))), uVar2 != 0)) {
            (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
          }
          else {
            bVar1 = false;
          }
        }
        iVar9 = iVar9 + 1;
        puVar11 = puVar11 + 4;
      } while (iVar9 < 6);
      iVar9 = (*(int *)(gen_frame + 0x10));
      if (bVar1) goto LAB_00c4a658;
    }
    uVar2 = 0;
    if (iVar9 == 0) goto LAB_00c4a65d;
  }
LAB_00c4a658: ;
  uVar2 = F_00c49d90(param_2);
LAB_00c4a65d: ;
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return uVar2;
}

/* ref: __create_locale */
undefined * F_00c4a66c(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4a66cu, gen_a0, gen_a1, 0u, 0u);
  int _Category = (int)gen_a0;
  char * _Locale = (char *)(uintptr_t)gen_a1;
  undefined * _Memory;
  int * piVar1;
  undefined * ptVar2;
  undefined * ptVar3;
  uint uVar4;
  
  if (((uint)_Category < 6) && (_Locale != (char *)0x0)) {
    _Memory = F_00c54c73(8,1);
    if (_Memory != (undefined *)0x0) {
      ptVar2 = F_00c54c73(0xd8,1);
      (*(undefined * PTR32 *)((char *)(_Memory))) = ptVar2;
      if (ptVar2 == (undefined *)0x0) {
        F_00c4c68f(_Memory);
      }
      else {
        ptVar3 = F_00c54c73(0x220,1);
        (*(undefined * PTR32 *)(((char *)(_Memory) + 4))) = ptVar3;
        if (ptVar3 != (undefined *)0x0) {
          F_00c49994((*(undefined * PTR32 *)((char *)(_Memory))),&REFG(undefined, 0x134b950));
          uVar4 = F_00c4a450(_Category,(*(undefined * PTR32 *)((char *)(_Memory))),_Locale);
          if (uVar4 == 0) {
            F_00c5cbc5((*(undefined * PTR32 *)((char *)(_Memory))));
            F_00c5cc5e((*(undefined * PTR32 *)((char *)(_Memory))));
            F_00c4c68f(_Memory);
          }
          else {
            uVar4 = F_00c5c757((*((uint *)GEN_TOP((((char *)(*(undefined * PTR32 *)((char *)(_Memory))) + 4))))),(*(undefined * PTR32 *)(((char *)(_Memory) + 4))));
            if (uVar4 == 0) {
              (*(int *)((char *)(*(undefined * PTR32 *)(((char *)(_Memory) + 4))))) = 1;
              (*(int *)((char *)(*(undefined * PTR32 *)(((char *)(_Memory) + 4))))) = 1;
              return _Memory;
            }
            F_00c4c68f((*(undefined * PTR32 *)(((char *)(_Memory) + 4))));
            F_00c5cbc5((*(undefined * PTR32 *)((char *)(_Memory))));
            F_00c5cc5e((*(undefined * PTR32 *)((char *)(_Memory))));
            F_00c4c68f(_Memory);
          }
          return (undefined *)0x0;
        }
        F_00c4c68f((*(undefined * PTR32 *)((char *)(_Memory))));
        F_00c4c68f(_Memory);
      }
    }
    piVar1 = F_00c51f85();
    *piVar1 = 0xc;
  }
  return (undefined *)0x0;
}

/* ref: FUN_00c4a761 */
uint F_00c4a761(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4a761u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  undefined * plVar1;
  
  plVar1 = F_00c4a66c(param_1,param_2);
  return (uint)plVar1;
}

/* ref: _setlocale */
char * F_00c4a76c(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4a76cu, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x3c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  char * pcVar2;
  undefined * in_esi;
  undefined * in_eax;
  int iVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = &REFG(undefined, 0x12f5f60);
  (*(undefined4 *)(gen_frame + 0x24)) = 0xc4a778;
  (*(char * PTR32 *)(gen_frame + 0xc)) = (char *)0x0;
  if ((uint)(*(int *)&gen_args[0]) < 6) {
    in_esi = F_00c5b37a();
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = in_esi;
    F_00c5cdf6();
    (*(int *)(((char *)(in_esi) + 112))) = (*(int *)(((char *)(in_esi) + 112))) | 0x10;
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
    in_eax = F_00c54c73(0xd8,1);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = in_eax;
    if (in_eax != (undefined *)0x0) {
      F_00c5aa4f(0xc);
      (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x1;
      F_00c49994(in_eax,(*(undefined * PTR32 *)(((char *)(in_esi) + 108))));
      (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
      F_00c4a89e();
      pcVar2 = (char *)F_00c4a450((*(int *)&gen_args[0]),in_eax,(*(char * PTR32 *)&gen_args[1]));
      (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar2;
      if (pcVar2 == (char *)0x0) {
        F_00c5cbc5(in_eax);
        F_00c5cc5e(in_eax);
      }
      else {
        if ((*(char * PTR32 *)&gen_args[1]) != (char *)0x0) {
          iVar3 = F_00c556e0((*(char * PTR32 *)&gen_args[1]),&REFG(undefined, 0x134b7e4));
          if (iVar3 != 0) {
            REFG(undefined4, 0x15d6874) = 1;
          }
        }
        F_00c5aa4f(0xc);
        (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x2;
        F_00c5cda9(&(*(undefined * PTR32 *)(((char *)(in_esi) + 108))),in_eax);
        F_00c5cbc5(in_eax);
        if ((((*(int *)(((char *)(in_esi) + 112))) & 2) == 0) && (((byte)REFG(undefined4, 0x134b7e0) & 1) == 0)) {
          F_00c5cda9(&REFG(undefined * PTR32, 0x134ba28),(*(undefined * PTR32 *)(((char *)(in_esi) + 108))));
          REFG(undefined * PTR32, 0x134b098) = *((undefined * PTR32 *)GEN_TOP((REFG(undefined * PTR32, 0x134ba28) + 0xbc)));
          REFG(undefined * PTR32, 0x134b110) = *((undefined * PTR32 *)GEN_TOP((REFG(undefined * PTR32, 0x134ba28) + 200)));
          *(undefined4 *)&REFG(undefined, 0x134bb40) = *((undefined4 *)GEN_TOP((REFG(undefined * PTR32, 0x134ba28) + 0xac)));
        }
        (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0x0;
        F_00c4a8aa();
      }
    }
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)0xfffffffe;
    F_00c4a8db(in_esi);
    pcVar2 = (*(char * PTR32 *)(gen_frame + 0xc));
  }
  else {
    piVar1 = F_00c51f85();
    *piVar1 = 0x16;
    F_00c4c305();
    pcVar2 = (char *)0x0;
  }
  return pcVar2;
}

/* ref: FUN_00c4a895 */
uint F_00c4a895(unsigned int gen_a0)
{
  GEN_ENTER(0xc4a895u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xc);
  return uVar1;
}

/* ref: FUN_00c4a89e */
uint F_00c4a89e(void)
{
  GEN_ENTER(0xc4a89eu, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xc);
  return uVar1;
}

/* ref: FUN_00c4a8a7 */
uint F_00c4a8a7(unsigned int gen_a0)
{
  GEN_ENTER(0xc4a8a7u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ebp = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xc);
  return uVar1;
}

/* ref: FUN_00c4a8aa */
uint F_00c4a8aa(void)
{
  GEN_ENTER(0xc4a8aau, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(0xc);
  return uVar1;
}

/* ref: FUN_00c4a8d8 */
unsigned int F_00c4a8d8(unsigned int gen_a0)
{
  GEN_ENTER(0xc4a8d8u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP((*(int *)(in_ebp + -0x1c) + 0x70)));
  *puVar1 = *puVar1 & 0xffffffef;
  return 0;
}

/* ref: FUN_00c4a8db */
unsigned int F_00c4a8db(unsigned int gen_a0)
{
  GEN_ENTER(0xc4a8dbu, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  *(uint *)(in_esi + 0x70) = *(uint *)(in_esi + 0x70) & 0xffffffef;
  return 0;
}

/* ref: _wcscpy_s */
int F_00c4a8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4a8e0u, gen_a0, gen_a1, gen_a2, 0u);
  wchar_t * _Dst = (wchar_t *)(uintptr_t)gen_a0;
  gen_size32 _SizeInWords = (gen_size32)gen_a1;
  wchar_t * _Src = (wchar_t *)(uintptr_t)gen_a2;
  wchar_t wVar1;
  int * piVar2;
  wchar_t * pwVar3;
  int eVar4;
  gen_size32 rVar5;
  int eStack_10;
  
  if ((_Dst != (wchar_t *)0x0) && (_SizeInWords != 0)) {
    if (_Src != (wchar_t *)0x0) {
      pwVar3 = _Src;
      rVar5 = _SizeInWords;
      do {
        wVar1 = *pwVar3;
        *((wchar_t *)GEN_TOP((((int)_Dst - (int)_Src) + (int)pwVar3))) = wVar1;
        pwVar3 = pwVar3 + 1;
        if (wVar1 == L'\0') break;
        rVar5 = rVar5 - 1;
      } while (rVar5 != 0);
      if (rVar5 != 0) {
        return 0;
      }
      *_Dst = L'\0';
      piVar2 = F_00c51f85();
      eStack_10 = 0x22;
      *piVar2 = 0x22;
      eVar4 = eStack_10;
      goto LAB_00c4a8ff;
    }
    *_Dst = L'\0';
  }
  piVar2 = F_00c51f85();
  eVar4 = 0x16;
  *piVar2 = 0x16;
LAB_00c4a8ff: ;
  F_00c4c305();
  return eVar4;
}

/* ref: strtoxl */
ulong F_00c4a943(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc4a943u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char * PTR32 * param_3 = (char * PTR32 *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  byte * pbVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  byte * pbVar10;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)),param_1);
  if (param_3 != (char * PTR32 *)0x0) {
    *param_3 = param_2;
  }
  if ((param_2 == (char *)0x0) || ((param_4 != 0 && ((param_4 < 2 || (0x24 < param_4)))))) {
    piVar3 = F_00c51f85();
    *piVar3 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
    return 0;
  }
  (*(uint *)(gen_frame + 0x18)) = 0;
  bVar9 = *param_2;
  iVar5 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
  pbVar2 = (byte *)param_2;
  while( true ) {
    pbVar10 = pbVar2 + 1;
    if (*(int *)(iVar5 + 0xac) < 2) {
      uVar4 = *((ushort *)GEN_TOP((*(int *)(iVar5 + 200) + (uint)bVar9 * 2))) & 8;
    }
    else {
      uVar4 = F_00c5ce6f((uint)bVar9,8,(undefined *)((byte *)(gen_frame + 0x0)));
      iVar5 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
    }
    if (uVar4 == 0) break;
    bVar9 = *pbVar10;
    pbVar2 = pbVar10;
  }
  if (bVar9 == 0x2d) {
    param_5 = param_5 | 2;
LAB_00c4a9f4: ;
    bVar9 = *pbVar10;
    pbVar10 = pbVar2 + 2;
  }
  else if (bVar9 == 0x2b) goto LAB_00c4a9f4;
  if (((param_4 < 0) || (param_4 == 1)) || (0x24 < param_4)) {
    if (param_3 != (char * PTR32 *)0x0) {
      *param_3 = param_2;
    }
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
    return 0;
  }
  if (param_4 == 0) {
    if (bVar9 != 0x30) {
      param_4 = 10;
      goto LAB_00c4aa5c;
    }
    if ((*pbVar10 != 0x78) && (*pbVar10 != 0x58)) {
      param_4 = 8;
      goto LAB_00c4aa5c;
    }
    param_4 = 0x10;
  }
  else if ((param_4 != 0x10) || (bVar9 != 0x30)) goto LAB_00c4aa5c;
  if ((*pbVar10 == 0x78) || (*pbVar10 == 0x58)) {
    bVar9 = pbVar10[1];
    pbVar10 = pbVar10 + 2;
  }
LAB_00c4aa5c: ;
  uVar4 = (uint)(0xffffffff / (ulonglong)(uint)param_4);
  uVar8 = (uint)(0xffffffff % (ulonglong)(uint)param_4);
  (*(uint *)(gen_frame + 0x14)) = uVar8;
  do {
    uVar1 = *((ushort *)GEN_TOP((*(int *)(iVar5 + 200) + (uint)bVar9 * 2)));
    if ((uVar1 & 4) == 0) {
      if ((uVar1 & 0x103) == 0) {
LAB_00c4aabb: ;
        pbVar10 = pbVar10 + -1;
        if ((param_5 & 8U) == 0) {
          if (param_3 != (char * PTR32 *)0x0) {
            pbVar10 = (byte *)param_2;
          }
          (*(uint *)(gen_frame + 0x18)) = 0;
        }
        else if (((param_5 & 4U) != 0) ||
                (((param_5 & 1U) == 0 &&
                 ((((param_5 & 2U) != 0 && (0x80000000 < (*(uint *)(gen_frame + 0x18)))) ||
                  (((param_5 & 2U) == 0 && (0x7fffffff < (*(uint *)(gen_frame + 0x18)))))))))) {
          piVar3 = F_00c51f85();
          *piVar3 = 0x22;
          if ((param_5 & 1U) == 0) {
            (*(uint *)(gen_frame + 0x18)) = ((param_5 & 2U) != 0) + 0x7fffffff;
          }
          else {
            (*(uint *)(gen_frame + 0x18)) = 0xffffffff;
          }
        }
        if (param_3 != (char * PTR32 *)0x0) {
          *param_3 = (char *)pbVar10;
        }
        if ((param_5 & 2U) != 0) {
          (*(uint *)(gen_frame + 0x18)) = -(*(uint *)(gen_frame + 0x18));
        }
        if (((byte *)(gen_frame + 0x0))[0xc] == 0) {
          return (*(uint *)(gen_frame + 0x18));
        }
        *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
        return (*(uint *)(gen_frame + 0x18));
      }
      iVar7 = (int)(char)bVar9;
      if ((byte)(bVar9 + 0x9f) < 0x1a) {
        iVar7 = iVar7 + -0x20;
      }
      uVar6 = iVar7 - 0x37;
    }
    else {
      uVar6 = (int)(char)bVar9 - 0x30;
    }
    if ((uint)param_4 <= uVar6) goto LAB_00c4aabb;
    if (((*(uint *)(gen_frame + 0x18)) < uVar4) || (((*(uint *)(gen_frame + 0x18)) == uVar4 && (uVar6 <= uVar8)))) {
      (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) * param_4 + uVar6;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char * PTR32 *)0x0) goto LAB_00c4aabb;
    }
    bVar9 = *pbVar10;
    pbVar10 = pbVar10 + 1;
  } while( true );
}

/* ref: _strtol */
long F_00c4ab6e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4ab6eu, gen_a0, gen_a1, gen_a2, 0u);
  char * _Str = (char *)(uintptr_t)gen_a0;
  char * PTR32 * _EndPtr = (char * PTR32 *)(uintptr_t)gen_a1;
  int _Radix = (int)gen_a2;
  ulong uVar1;
  undefined * PTR32 * ppuVar2;
  
  if (REFG(int, 0x15d6874) == 0) {
    ppuVar2 = &REFG(undefined * PTR32, 0x134ba2c);
  }
  else {
    ppuVar2 = (undefined * PTR32 *)0x0;
  }
  uVar1 = F_00c4a943((undefined *)ppuVar2,_Str,_EndPtr,_Radix,0);
  return uVar1;
}

/* ref: __strtol_l */
long F_00c4ab99(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc4ab99u, gen_a0, gen_a1, gen_a2, gen_a3);
  char * _Str = (char *)(uintptr_t)gen_a0;
  char * PTR32 * _EndPtr = (char * PTR32 *)(uintptr_t)gen_a1;
  int _Radix = (int)gen_a2;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a3;
  ulong uVar1;
  
  uVar1 = F_00c4a943(_Locale,_Str,_EndPtr,_Radix,0);
  return uVar1;
}

/* ref: _strtoul */
ulong F_00c4abb6(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4abb6u, gen_a0, gen_a1, gen_a2, 0u);
  char * _Str = (char *)(uintptr_t)gen_a0;
  char * PTR32 * _EndPtr = (char * PTR32 *)(uintptr_t)gen_a1;
  int _Radix = (int)gen_a2;
  ulong uVar1;
  undefined * PTR32 * ppuVar2;
  
  if (REFG(int, 0x15d6874) == 0) {
    ppuVar2 = &REFG(undefined * PTR32, 0x134ba2c);
  }
  else {
    ppuVar2 = (undefined * PTR32 *)0x0;
  }
  uVar1 = F_00c4a943((undefined *)ppuVar2,_Str,_EndPtr,_Radix,1);
  return uVar1;
}

/* ref: __strtoul_l */
ulong F_00c4abe2(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc4abe2u, gen_a0, gen_a1, gen_a2, gen_a3);
  char * _Str = (char *)(uintptr_t)gen_a0;
  char * PTR32 * _EndPtr = (char * PTR32 *)(uintptr_t)gen_a1;
  int _Radix = (int)gen_a2;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a3;
  ulong uVar1;
  
  uVar1 = F_00c4a943(_Locale,_Str,_EndPtr,_Radix,1);
  return uVar1;
}

/* ref: __atof_l */
double F_00c4abff(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4abffu, gen_a0, gen_a1, 0u, 0u);
  char * _String = (char *)(uintptr_t)gen_a0;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  double dVar1;
  int * piVar2;
  uint uVar3;
  undefined * p_Var4;
  byte * _Str;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)),_Locale);
  _Str = (byte *)_String;
  if (_String == (char *)0x0) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
    dVar1 = 0.0;
  }
  else {
    while( true ) {
      if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 0xac))) < 2) {
        uVar3 = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) + 200))) + (uint)*_Str * 2))) & 8;
      }
      else {
        uVar3 = F_00c5ce6f((uint)*_Str,8,(undefined *)((byte *)(gen_frame + 0x0)));
      }
      if (uVar3 == 0) break;
      _Str = _Str + 1;
    }
    p_Var4 = F_00c635e3(((undefined *)(gen_frame + 0x10)),(char *)_Str,(undefined *)((byte *)(gen_frame + 0x0)));
    dVar1 = (*(double *)(((char *)(p_Var4) + 16)));
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return dVar1;
}

/* ref: _atof */
double F_00c4acaa(unsigned int gen_a0)
{
  GEN_ENTER(0xc4acaau, gen_a0, 0u, 0u, 0u);
  char * _String = (char *)(uintptr_t)gen_a0;
  double dVar1;
  
  dVar1 = F_00c4abff(_String,(undefined *)0x0);
  return dVar1;
}

/* ref: ___strgtold12 */
uint F_00c4acbd(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc4acbdu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * pld12 = (undefined *)(uintptr_t)gen_a0;
  char * PTR32 * p_end_ptr = (char * PTR32 *)(uintptr_t)gen_a1;
  char * str = (char *)(uintptr_t)gen_a2;
  int mult12 = (int)gen_a3;
  int scale = (int)gen_a4;
  int decpt = (int)gen_a5;
  int implicit_E = (int)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),(undefined *)0x0);
  uVar1 = F_00c63c8d(pld12,p_end_ptr,str,mult12,scale,decpt,implicit_E,((byte *)(gen_frame + 0xc)));
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return uVar1;
}

/* ref: FID_conflict:___WSTRINGTOLD */
uint F_00c4acff(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc4acffu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * pld = (undefined *)(uintptr_t)gen_a0;
  char * PTR32 * p_end_ptr = (char * PTR32 *)(uintptr_t)gen_a1;
  char * str = (char *)(uintptr_t)gen_a2;
  int mult12 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),(undefined *)0x0);
  uVar1 = F_00c64369(pld,p_end_ptr,str,mult12,(undefined *)((byte *)(gen_frame + 0xc)));
  if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
  }
  return uVar1;
}

/* ref: strtoxq */
ulonglong F_00c4ad38(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc4ad38u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char * PTR32 * param_3 = (char * PTR32 *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte * pbVar5;
  int * piVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  byte * pbVar12;
  
  F_00c483ca((undefined *)((byte *)(gen_frame + 0x0)),param_1);
  if (param_3 != (char * PTR32 *)0x0) {
    *param_3 = param_2;
  }
  if ((param_2 == (char *)0x0) || ((param_4 != 0 && ((param_4 < 2 || (0x24 < param_4)))))) {
    piVar6 = F_00c51f85();
    *piVar6 = 0x16;
    F_00c4c305();
    if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
    }
    uVar7 = 0;
    uVar11 = 0;
    goto LAB_00c4afd2;
  }
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 0)) = 0;
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)) = 0;
  (*(ulonglong *)(gen_frame + 0x28)) = 0;
  (*(byte *)(gen_frame + 0x3b)) = *param_2;
  iVar9 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
  pbVar5 = (byte *)param_2;
  while( true ) {
    pbVar12 = pbVar5 + 1;
    if (*(int *)(iVar9 + 0xac) < 2) {
      uVar8 = *((ushort *)GEN_TOP((*(int *)(iVar9 + 200) + (uint)(*(byte *)(gen_frame + 0x3b)) * 2))) & 8;
    }
    else {
      uVar8 = F_00c5ce6f((uint)(*(byte *)(gen_frame + 0x3b)),8,(undefined *)((byte *)(gen_frame + 0x0)));
      iVar9 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0));
    }
    if (uVar8 == 0) break;
    (*(byte *)(gen_frame + 0x3b)) = *pbVar12;
    pbVar5 = pbVar12;
  }
  (*(byte * PTR32 *)(gen_frame + 0x34)) = pbVar12;
  if ((*(byte *)(gen_frame + 0x3b)) == 0x2d) {
    param_5 = param_5 | 2;
LAB_00c4adfa: ;
    bVar1 = *pbVar12;
    pbVar12 = pbVar5 + 2;
    (*(byte * PTR32 *)(gen_frame + 0x34)) = pbVar12;
    (*(byte *)(gen_frame + 0x3b)) = bVar1;
  }
  else if ((*(byte *)(gen_frame + 0x3b)) == 0x2b) goto LAB_00c4adfa;
  (*(byte * PTR32 *)(gen_frame + 0x34)) = pbVar12;
  if (param_4 == 0) {
    if ((*(byte *)(gen_frame + 0x3b)) != 0x30) {
      param_4 = 10;
      goto LAB_00c4ae51;
    }
    if ((*pbVar12 != 0x78) && (*pbVar12 != 0x58)) {
      param_4 = 8;
      goto LAB_00c4ae51;
    }
    param_4 = 0x10;
  }
  if (((param_4 == 0x10) && ((*(byte *)(gen_frame + 0x3b)) == 0x30)) && ((*pbVar12 == 0x78 || (*pbVar12 == 0x58)))) {
    (*(byte *)(gen_frame + 0x3b)) = pbVar12[1];
    (*(byte * PTR32 *)(gen_frame + 0x34)) = pbVar12 + 2;
  }
LAB_00c4ae51: ;
  (*(int *)(gen_frame + 0x14)) = param_4 >> 0x1f;
  uVar3 = 0xffffffffffffffff / (ulonglong)(longlong)param_4;
  uVar4 = 0xffffffffffffffff % (ulonglong)(longlong)param_4;
  (*(ulonglong *)(gen_frame + 0x18)) = uVar4;
  uVar4 = (*(ulonglong *)(gen_frame + 0x18));
  (*(ulonglong *)(gen_frame + 0x20)) = uVar3;
  uVar3 = (*(ulonglong *)(gen_frame + 0x20));
  do {
    uVar2 = *((ushort *)GEN_TOP((*(int *)(iVar9 + 200) + (uint)(*(byte *)(gen_frame + 0x3b)) * 2)));
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 0x103) == 0) break;
      iVar10 = (int)(char)(*(byte *)(gen_frame + 0x3b));
      if ((byte)((*(byte *)(gen_frame + 0x3b)) + 0x9f) < 0x1a) {
        iVar10 = iVar10 + -0x20;
      }
      uVar8 = iVar10 - 0x37;
    }
    else {
      uVar8 = (int)(char)(*(byte *)(gen_frame + 0x3b)) - 0x30;
    }
    if ((uint)param_4 <= uVar8) break;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) = (uint)(uVar3 >> 0x20);
    if ((((*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)) < (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4))) ||
        (((*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 0)) = (uint)uVar3, (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)) == (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x20)) + 4)) &&
         ((uint)(*(ulonglong *)(gen_frame + 0x28)) < (uint)(*(ulonglong *)(gen_frame + 0x20)))))) ||
       ((uVar3 == (*(ulonglong *)(gen_frame + 0x28)) &&
        (((*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) = (int)(uVar4 >> 0x20), (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 4)) != 0 ||
         ((*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x18)) + 0)) = (uint)uVar4, uVar8 <= (uint)(*(ulonglong *)(gen_frame + 0x18)))))))) {
      (*(ulonglong *)(gen_frame + 0x28)) = (longlong)param_4 * (*(ulonglong *)(gen_frame + 0x28)) + (ulonglong)uVar8;
      param_5 = param_5 | 8;
    }
    else {
      param_5 = param_5 | 0xc;
      if (param_3 == (char * PTR32 *)0x0) break;
    }
    bVar1 = *(*(byte * PTR32 *)(gen_frame + 0x34));
    (*(byte * PTR32 *)(gen_frame + 0x34)) = (*(byte * PTR32 *)(gen_frame + 0x34)) + 1;
    (*(byte *)(gen_frame + 0x3b)) = bVar1;
  } while( true );
  (*(byte * PTR32 *)(gen_frame + 0x34)) = (*(byte * PTR32 *)(gen_frame + 0x34)) + -1;
  if ((param_5 & 8U) == 0) {
    if (param_3 != (char * PTR32 *)0x0) {
      (*(byte * PTR32 *)(gen_frame + 0x34)) = (byte *)param_2;
    }
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 0)) = 0;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)) = 0;
    (*(ulonglong *)(gen_frame + 0x28)) = 0;
  }
  else if (((param_5 & 4U) != 0) ||
          (((param_5 & 1U) == 0 &&
           ((((param_5 & 2U) != 0 && (0x8000000000000000 < (*(ulonglong *)(gen_frame + 0x28)))) ||
            (((param_5 & 2U) == 0 &&
             ((0x7ffffffeffffffff < (*(ulonglong *)(gen_frame + 0x28)) && (0x7fffffffffffffff < (*(ulonglong *)(gen_frame + 0x28)))))))))))) {
    (*(ulonglong *)(gen_frame + 0x18)) = uVar4;
    (*(ulonglong *)(gen_frame + 0x20)) = uVar3;
    piVar6 = F_00c51f85();
    *piVar6 = 0x22;
    if ((param_5 & 1U) == 0) {
      if ((param_5 & 2U) == 0) {
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 0)) = 0xffffffff;
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)) = 0x7fffffff;
        (*(ulonglong *)(gen_frame + 0x28)) = 0x7fffffffffffffff;
      }
      else {
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 0)) = 0;
        (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)) = 0x80000000;
        (*(ulonglong *)(gen_frame + 0x28)) = 0x8000000000000000;
      }
    }
    else {
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 0)) = 0xffffffff;
      (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)) = 0xffffffff;
      (*(ulonglong *)(gen_frame + 0x28)) = 0xffffffffffffffff;
    }
  }
  if (param_3 != (char * PTR32 *)0x0) {
    *param_3 = (char *)(*(byte * PTR32 *)(gen_frame + 0x34));
  }
  if ((param_5 & 2U) != 0) {
    iVar9 = -(uint)(*(ulonglong *)(gen_frame + 0x28));
    iVar10 = -((*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)) + ((uint)(*(ulonglong *)(gen_frame + 0x28)) != 0));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 0)) = iVar9;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4)) = iVar10;
    (*(ulonglong *)(gen_frame + 0x28)) = CONCAT44(iVar10,iVar9);
  }
  if (((byte *)(gen_frame + 0x0))[0xc] != 0) {
    *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) + 0x70))) & 0xfffffffd;
  }
  uVar7 = (uint)(*(ulonglong *)(gen_frame + 0x28));
  uVar11 = (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x28)) + 4));
LAB_00c4afd2: ;
  return CONCAT44(uVar11,uVar7);
}

/* ref: __strtoi64 */
longlong F_00c4afd5(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4afd5u, gen_a0, gen_a1, gen_a2, 0u);
  char * _String = (char *)(uintptr_t)gen_a0;
  char * PTR32 * _EndPtr = (char * PTR32 *)(uintptr_t)gen_a1;
  int _Radix = (int)gen_a2;
  ulonglong _Var1;
  undefined * PTR32 * ppuVar2;
  
  if (REFG(int, 0x15d6874) == 0) {
    ppuVar2 = &REFG(undefined * PTR32, 0x134ba2c);
  }
  else {
    ppuVar2 = (undefined * PTR32 *)0x0;
  }
  _Var1 = F_00c4ad38((undefined *)ppuVar2,_String,_EndPtr,_Radix,0);
  return _Var1;
}

/* ref: __strtoi64_l */
longlong F_00c4b000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc4b000u, gen_a0, gen_a1, gen_a2, gen_a3);
  char * _String = (char *)(uintptr_t)gen_a0;
  char * PTR32 * _EndPtr = (char * PTR32 *)(uintptr_t)gen_a1;
  int _Radix = (int)gen_a2;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a3;
  ulonglong _Var1;
  
  _Var1 = F_00c4ad38(_Locale,_String,_EndPtr,_Radix,0);
  return _Var1;
}

/* ref: __strtoui64 */
ulonglong F_00c4b01d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4b01du, gen_a0, gen_a1, gen_a2, 0u);
  char * _String = (char *)(uintptr_t)gen_a0;
  char * PTR32 * _EndPtr = (char * PTR32 *)(uintptr_t)gen_a1;
  int _Radix = (int)gen_a2;
  ulonglong _Var1;
  undefined * PTR32 * ppuVar2;
  
  if (REFG(int, 0x15d6874) == 0) {
    ppuVar2 = &REFG(undefined * PTR32, 0x134ba2c);
  }
  else {
    ppuVar2 = (undefined * PTR32 *)0x0;
  }
  _Var1 = F_00c4ad38((undefined *)ppuVar2,_String,_EndPtr,_Radix,1);
  return _Var1;
}

/* ref: __strtoui64_l */
ulonglong F_00c4b049(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc4b049u, gen_a0, gen_a1, gen_a2, gen_a3);
  char * _String = (char *)(uintptr_t)gen_a0;
  char * PTR32 * _EndPtr = (char * PTR32 *)(uintptr_t)gen_a1;
  int _Radix = (int)gen_a2;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a3;
  ulonglong _Var1;
  
  _Var1 = F_00c4ad38(_Locale,_String,_EndPtr,_Radix,1);
  return _Var1;
}

/* ref: wcsncnt */
uint F_00c4b066(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc4b066u, gen_a0, gen_a1, 0u, 0u);
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  wchar_t * pwVar1;
  uint uVar2;
  
  pwVar1 = param_1;
  uVar2 = param_2;
  if (param_2 != 0) {
    do {
      if (*pwVar1 == L'\0') break;
      pwVar1 = pwVar1 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    if ((uVar2 != 0) && (*pwVar1 == L'\0')) {
      return ((int)pwVar1 - (int)((int)(uintptr_t)param_1) >> 1) + 1;
    }
  }
  return param_2;
}

/* ref: __wcstombs_l_helper */
uint F_00c4b098(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc4b098u, gen_a0, gen_a1, gen_a2, gen_a3);
  LPSTR param_1 = (LPSTR)gen_a0;
  LPCWSTR param_2 = (LPCWSTR)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int * piVar2;
  LPCWSTR pWVar3;
  DWORD DVar4;
  WCHAR WVar5;
  uint uVar6;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(BOOL *)(gen_frame + 0x1c)) = 0;
  if ((param_1 != (LPSTR)0x0) && (param_3 == 0)) {
    (*(uint *)(gen_frame + 0x8)) = 0;
    goto LAB_00c4b2f0;
  }
  if (param_2 == (LPCWSTR)0x0) {
    piVar2 = F_00c51f85();
    *piVar2 = 0x16;
    F_00c4c305();
LAB_00c4b2ed: ;
    (*(uint *)(gen_frame + 0x8)) = 0xffffffff;
  }
  else {
    F_00c483ca((undefined *)((byte *)(gen_frame + 0xc)),param_4);
    if (param_1 == (LPSTR)0x0) {
      if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0x14))) != 0) {
        (*(uint *)(gen_frame + 0x8)) = gen_imp_WideCharToMultiByte(*((UINT *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 4))),0,param_2,-1,(LPSTR)0x0,0,
                                       (LPCSTR)0x0,&(*(BOOL *)(gen_frame + 0x1c)));
        if ((*(uint *)(gen_frame + 0x8)) != 0) {
LAB_00c4b1c4: ;
          if ((*(BOOL *)(gen_frame + 0x1c)) == 0) {
LAB_00c4b1cd: ;
            (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) - 1;
            goto LAB_00c4b12d;
          }
        }
        goto LAB_00c4b2d6;
      }
      (*(uint *)(gen_frame + 0x8)) = 0;
      WVar5 = *param_2;
      pWVar3 = param_2;
      while (WVar5 != L'\0') {
        if (0xff < (ushort)WVar5) goto LAB_00c4b2d6;
        (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
        pWVar3 = pWVar3 + 1;
        WVar5 = *pWVar3;
      }
    }
    else {
      if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0x14))) != 0) {
        if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0xac))) == 1) {
          pWVar3 = param_2;
          uVar6 = param_3;
          if (param_3 != 0) {
            do {
              if (*pWVar3 == L'\0') break;
              pWVar3 = pWVar3 + 1;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
            if ((uVar6 != 0) && (*pWVar3 == L'\0')) {
              param_3 = ((int)pWVar3 - (int)param_2 >> 1) + 1;
            }
          }
          (*(uint *)(gen_frame + 0x8)) = gen_imp_WideCharToMultiByte(*((UINT *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 4))),0,param_2,param_3,param_1,
                                         param_3,(LPCSTR)0x0,&(*(BOOL *)(gen_frame + 0x1c)));
          if (((*(uint *)(gen_frame + 0x8)) != 0) && ((*(BOOL *)(gen_frame + 0x1c)) == 0)) {
            if (param_1[(*(uint *)(gen_frame + 0x8)) - 1] == '\0') goto LAB_00c4b1cd;
            goto LAB_00c4b12d;
          }
        }
        else {
          (*(uint *)(gen_frame + 0x8)) = gen_imp_WideCharToMultiByte(*((UINT *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 4))),0,param_2,-1,param_1,param_3,
                                         (LPCSTR)0x0,&(*(BOOL *)(gen_frame + 0x1c)));
          if ((*(uint *)(gen_frame + 0x8)) != 0) goto LAB_00c4b1c4;
          if (((*(BOOL *)(gen_frame + 0x1c)) == 0) && (DVar4 = gen_imp_GetLastError(), DVar4 == 0x7a)) {
            (*(uint *)(gen_frame + 0x8)) = 0;
            pWVar3 = param_2;
            if (param_3 != 0) {
              do {
                uVar6 = gen_imp_WideCharToMultiByte(*((UINT *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 4))),0,pWVar3,1,((CHAR *)(gen_frame + 0x20)),
                                            *((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) + 0xac))),(LPCSTR)0x0,&(*(BOOL *)(gen_frame + 0x1c)));
                if ((((uVar6 == 0) || ((*(BOOL *)(gen_frame + 0x1c)) != 0)) || ((int)uVar6 < 0)) || (5 < uVar6))
                goto LAB_00c4b2d6;
                if (param_3 < uVar6 + (*(uint *)(gen_frame + 0x8))) goto LAB_00c4b12d;
                (*(int *)(gen_frame + 0x0)) = 0;
                if (0 < (int)uVar6) {
                  do {
                    cVar1 = ((CHAR *)(gen_frame + 0x20))[(int)((*(int *)(gen_frame + 0x0)))];
                    param_1[(*(uint *)(gen_frame + 0x8))] = cVar1;
                    if (cVar1 == '\0') goto LAB_00c4b12d;
                    (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
                    (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
                  } while ((*(int *)(gen_frame + 0x0)) < (int)uVar6);
                }
                pWVar3 = pWVar3 + 1;
              } while ((*(uint *)(gen_frame + 0x8)) < param_3);
            }
            if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
              *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
            }
            goto LAB_00c4b2f0;
          }
        }
LAB_00c4b2d6: ;
        piVar2 = F_00c51f85();
        *piVar2 = 0x2a;
        if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
          *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
        }
        goto LAB_00c4b2ed;
      }
      (*(uint *)(gen_frame + 0x8)) = 0;
      pWVar3 = param_2;
      if (param_3 != 0) {
        do {
          if (0xff < (ushort)*pWVar3) goto LAB_00c4b2d6;
          param_1[(*(uint *)(gen_frame + 0x8))] = (CHAR)*pWVar3;
          WVar5 = *pWVar3;
          pWVar3 = pWVar3 + 1;
        } while ((WVar5 != L'\0') && ((*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1, (*(uint *)(gen_frame + 0x8)) < param_3));
      }
    }
LAB_00c4b12d: ;
    if (((byte *)(gen_frame + 0xc))[0xc] != 0) {
      *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) = *((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) + 0x70))) & 0xfffffffd;
    }
  }
LAB_00c4b2f0: ;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: FUN_00c4b2ff */
uint F_00c4b2ff(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc4b2ffu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c4b098(param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: _wcstombs */
gen_size32 F_00c4b30a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4b30au, gen_a0, gen_a1, gen_a2, 0u);
  char * _Dest = (char *)(uintptr_t)gen_a0;
  wchar_t * _Source = (wchar_t *)(uintptr_t)gen_a1;
  gen_size32 _MaxCount = (gen_size32)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c4b098(_Dest,_Source,_MaxCount,0);
  return uVar1;
}

/* ref: __wcstombs_s_l */
int F_00c4b324(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc4b324u, gen_a0, gen_a1, gen_a2, gen_a3);
  gen_size32 * _PtNumOfCharConverted = (gen_size32 *)(uintptr_t)gen_a0;
  char * _Dst = (char *)(uintptr_t)gen_a1;
  gen_size32 _DstSizeInBytes = (gen_size32)gen_a2;
  wchar_t * _Src = (wchar_t *)(uintptr_t)gen_a3;
  gen_size32 _MaxCountInBytes = (gen_size32)gen_a4;
  undefined * _Locale = (undefined *)(uintptr_t)gen_a5;
  uint uVar1;
  int * piVar2;
  gen_size32 sVar3;
  int iVar4;
  int local_8;
  
  local_8 = 0;
  if (_Dst == (char *)0x0) {
    if (_DstSizeInBytes == 0) goto LAB_00c4b340;
  }
  else if (_DstSizeInBytes != 0) {
LAB_00c4b340: ;
    if (_Dst != (char *)0x0) {
      *_Dst = '\0';
    }
    if (_PtNumOfCharConverted != (gen_size32 *)0x0) {
      *_PtNumOfCharConverted = 0;
    }
    sVar3 = _MaxCountInBytes;
    if (_DstSizeInBytes < _MaxCountInBytes) {
      sVar3 = _DstSizeInBytes;
    }
    if (sVar3 < 0x80000000) {
      uVar1 = F_00c4b098(_Dst,_Src,sVar3,_Locale);
      if (uVar1 == 0xffffffff) {
        if (_Dst != (char *)0x0) {
          *_Dst = '\0';
        }
        piVar2 = F_00c51f85();
        return *piVar2;
      }
      sVar3 = uVar1 + 1;
      if (_Dst != (char *)0x0) {
        if (_DstSizeInBytes < sVar3) {
          if ((_MaxCountInBytes != 0xffffffff) && (*_Dst = '\0', _DstSizeInBytes <= sVar3)) {
            piVar2 = F_00c51f85();
            iVar4 = 0x22;
            goto LAB_00c4b38e;
          }
          local_8 = 0x50;
          sVar3 = _DstSizeInBytes;
        }
        _Dst[sVar3 - 1] = '\0';
      }
      if (_PtNumOfCharConverted == (gen_size32 *)0x0) {
        return local_8;
      }
      *_PtNumOfCharConverted = sVar3;
      return local_8;
    }
  }
  piVar2 = F_00c51f85();
  iVar4 = 0x16;
LAB_00c4b38e: ;
  *piVar2 = iVar4;
  F_00c4c305();
  return iVar4;
}

/* ref: _wcstombs_s */
int F_00c4b3d6(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc4b3d6u, gen_a0, gen_a1, gen_a2, gen_a3);
  gen_size32 * _PtNumOfCharConverted = (gen_size32 *)(uintptr_t)gen_a0;
  char * _Dst = (char *)(uintptr_t)gen_a1;
  gen_size32 _DstSizeInBytes = (gen_size32)gen_a2;
  wchar_t * _Src = (wchar_t *)(uintptr_t)gen_a3;
  gen_size32 _MaxCountInBytes = (gen_size32)gen_a4;
  int eVar1;
  
  eVar1 = F_00c4b324(_PtNumOfCharConverted,_Dst,_DstSizeInBytes,_Src,_MaxCountInBytes,
                         (undefined *)0x0);
  return eVar1;
}

/* ref: __getenv_helper_nolock */
char * F_00c4b3f6(unsigned int gen_a0)
{
  GEN_ENTER(0xc4b3f6u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  int iVar1;
  gen_size32 _MaxCount;
  gen_size32 sVar2;
  int * piVar3;
  
  if (((REFG(int, 0x15e52d4) != 0) &&
      ((REFG(int * PTR32, 0x15d6840) != (int *)0x0 ||
       (((REFG(int, 0x15d6848) != 0 && (iVar1 = F_00c6455d(), iVar1 == 0)) &&
        (REFG(int * PTR32, 0x15d6840) != (int *)0x0)))))) && (piVar3 = REFG(int * PTR32, 0x15d6840), param_1 != (char *)0x0)) {
    _MaxCount = F_00c552f0(param_1);
    for (; (char *)*piVar3 != (char *)0x0; piVar3 = piVar3 + 1) {
      sVar2 = F_00c552f0((char *)*piVar3);
      if (((_MaxCount < sVar2) && (((uchar *)*piVar3)[_MaxCount] == '=')) &&
         (iVar1 = F_00c64543((uchar *)*piVar3,(uchar *)param_1,_MaxCount), iVar1 == 0)) {
        return (char *)(*piVar3 + 1 + _MaxCount);
      }
    }
  }
  return (char *)0x0;
}

/* ref: FUN_00c4b47d */
uint F_00c4b47d(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc4b47du, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * in_eax = (uint *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  char * param_4 = (char *)(uintptr_t)gen_a3;
  int * piVar1;
  char * _Str;
  gen_size32 sVar2;
  int eVar3;
  
  if (in_eax != (uint *)0x0) {
    *in_eax = 0;
    if (param_2 == (undefined1 *)0x0) {
      if (param_3 == 0) goto LAB_00c4b4b4;
    }
    else if (param_3 != 0) {
LAB_00c4b4b4: ;
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = 0;
      }
      _Str = F_00c4b3f6(param_4);
      if (_Str != (char *)0x0) {
        sVar2 = F_00c552f0(_Str);
        *in_eax = sVar2 + 1;
        if (param_3 != 0) {
          if (param_3 < sVar2 + 1) {
            return 0x22;
          }
          eVar3 = F_00c49908(param_2,param_3,_Str);
          if (eVar3 != 0) {
                    
            F_00c4c299(_Str,0,0,0,0,0);
          }
        }
      }
      return 0;
    }
  }
  piVar1 = F_00c51f85();
  *piVar1 = 0x16;
  F_00c4c305();
  return 0x16;
}

/* ref: FUN_00c4b508 */
uint F_00c4b508(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc4b508u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  gen_size32 * param_2 = (gen_size32 *)(uintptr_t)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  int * piVar1;
  char * _Str;
  gen_size32 sVar2;
  undefined * pvVar3;
  uint * puVar4;
  int eVar5;
  
  if (in_eax != (undefined4 *)0x0) {
    *in_eax = 0;
    if (param_2 != (gen_size32 *)0x0) {
      *param_2 = 0;
    }
    if (param_3 != (char *)0x0) {
      _Str = F_00c4b3f6(param_3);
      if (_Str != (char *)0x0) {
        sVar2 = F_00c552f0(_Str);
        sVar2 = sVar2 + 1;
        pvVar3 = F_00c645f4(sVar2,1);
        *in_eax = pvVar3;
        if (pvVar3 == (undefined *)0x0) {
          piVar1 = F_00c51f85();
          *piVar1 = 0xc;
          puVar4 = (uint *)F_00c51f85();
          return *puVar4;
        }
        eVar5 = F_00c49908(pvVar3,sVar2,_Str);
        if (eVar5 != 0) {
                    
          F_00c4c299(0,0,0,0,0,0);
        }
        if (param_2 != (gen_size32 *)0x0) {
          *param_2 = sVar2;
        }
      }
      return 0;
    }
  }
  piVar1 = F_00c51f85();
  *piVar1 = 0x16;
  F_00c4c305();
  return 0x16;
}

/* ref: _getenv */
char * F_00c4b5a4(unsigned int gen_a0)
{
  GEN_ENTER(0xc4b5a4u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  int * piVar1;
  gen_size32 sVar2;
  char * pcVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f5f98);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc4b5b0;
  if (((*(char * PTR32 *)&gen_args[0]) != (char *)0x0) && (sVar2 = F_00c64634((*(char * PTR32 *)&gen_args[0]),0x7fff), sVar2 < 0x7fff)) {
    F_00c5aa4f(7);
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
    pcVar3 = F_00c4b3f6((*(char * PTR32 *)&gen_args[0]));
    (*(char * PTR32 *)(gen_frame + 0x0)) = pcVar3;
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
    F_00c4b615();
    return (*(char * PTR32 *)(gen_frame + 0x0));
  }
  piVar1 = F_00c51f85();
  *piVar1 = 0x16;
  F_00c4c305();
  return (char *)0x0;
}

/* ref: FUN_00c4b615 */
uint F_00c4b615(void)
{
  GEN_ENTER(0xc4b615u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(7);
  return uVar1;
}

/* ref: _getenv_s */
int F_00c4b61e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc4b61eu, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x34];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  bool bVar1;
  gen_size32 * in_edi;
  int * piVar2;
  char * _Str;
  gen_size32 sVar3;
  int eVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = &REFG(undefined, 0x12f5fb8);
  (*(undefined4 *)(gen_frame + 0x14)) = 0xc4b62a;
  F_00c5aa4f(7);
  in_edi = (*(gen_size32 * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x0;
  if ((*(gen_size32 * PTR32 *)&gen_args[0]) != (gen_size32 *)0x0) {
    *(*(gen_size32 * PTR32 *)&gen_args[0]) = 0;
    if ((*(char * PTR32 *)&gen_args[1]) == (char *)0x0) {
LAB_00c4b66b: ;
      if ((*(gen_size32 *)&gen_args[2]) == 0) goto LAB_00c4b670;
LAB_00c4b675: ;
      bVar1 = false;
    }
    else {
      if ((*(gen_size32 *)&gen_args[2]) == 0) {
        if ((*(char * PTR32 *)&gen_args[1]) == (char *)0x0) goto LAB_00c4b66b;
        goto LAB_00c4b675;
      }
LAB_00c4b670: ;
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(char * PTR32 *)&gen_args[1]) != (char *)0x0) {
        *(*(char * PTR32 *)&gen_args[1]) = '\0';
      }
      _Str = F_00c4b3f6((*(char * PTR32 *)&gen_args[3]));
      if (_Str != (char *)0x0) {
        sVar3 = F_00c552f0(_Str);
        *in_edi = sVar3 + 1;
        if ((*(gen_size32 *)&gen_args[2]) != 0) {
          if ((*(gen_size32 *)&gen_args[2]) < sVar3 + 1) {
            (*(int *)(gen_frame + 0x0)) = 0x22;
            goto LAB_00c4b6c3;
          }
          eVar4 = F_00c49908((*(char * PTR32 *)&gen_args[1]),(*(gen_size32 *)&gen_args[2]),_Str);
          if (eVar4 != 0) {
                    
            F_00c4c299(in_edi,0,0,0,0,0);
          }
        }
      }
      (*(int *)(gen_frame + 0x0)) = 0;
      goto LAB_00c4b6c3;
    }
  }
  piVar2 = F_00c51f85();
  *piVar2 = 0x16;
  F_00c4c305();
  (*(int *)(gen_frame + 0x0)) = 0x16;
LAB_00c4b6c3: ;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xfffffffe;
  F_00c4b6e2();
  return (*(int *)(gen_frame + 0x0));
}

/* ref: FUN_00c4b6e2 */
uint F_00c4b6e2(void)
{
  GEN_ENTER(0xc4b6e2u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00c5a95e(7);
  return uVar1;
}

