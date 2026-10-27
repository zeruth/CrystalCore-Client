#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00726ba0 */
uint F_00726ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x726ba0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x10;
  return (uint)in_ecx;
}

/* ref: FUN_00726bd0 */
uint F_00726bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x726bd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x24;
}

/* ref: FUN_00726be0 */
uint F_00726be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x726be0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x28,param_2,800);
  return uVar1;
}

/* ref: FUN_00726c20 */
uint F_00726c20(unsigned int gen_a0)
{
  GEN_ENTER(0x726c20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x21)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x21);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00726c50 */
uint F_00726c50(unsigned int gen_a0)
{
  GEN_ENTER(0x726c50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00726c80 */
uint F_00726c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x726c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00726ca0 */
uint F_00726ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x726ca0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x6d)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x6d);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00726cd0 */
uint F_00726cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x726cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x15) == '\0') {
    *(int *)(*piVar2 + 4) = param_1;
  }
  piVar2[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00726d40 */
uint F_00726d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x726d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00726da0 */
uint F_00726da0(unsigned int gen_a0)
{
  GEN_ENTER(0x726da0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00726dd0 */
uint F_00726dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x726dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00726e00 */
uint F_00726e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x726e00u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) + param_2;
  return in_ecx;
}

/* ref: FUN_00726e20 */
unsigned int F_00726e20(unsigned int gen_a0)
{
  GEN_ENTER(0x726e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00726e70 */
uint F_00726e70(unsigned int gen_a0)
{
  GEN_ENTER(0x726e70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00726e90 */
uint F_00726e90(unsigned int gen_a0)
{
  GEN_ENTER(0x726e90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x25)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x25);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00726ed0 */
uint F_00726ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x726ed0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00726ee0 */
unsigned int F_00726ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x726ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x19) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x19) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x19);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x19);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x19);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x19);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00726f30 */
unsigned int F_00726f30(unsigned int gen_a0)
{
  GEN_ENTER(0x726f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00726f80 */
uint F_00726f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x726f80u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2;
    *in_ecx = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00726fa0 */
uint F_00726fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x726fa0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00726fb0 */
uint F_00726fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x726fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9c9b0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_00726fd0 */
uint F_00726fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x726fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9c9b0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_00726ff0 */
uint F_00726ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x726ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_00727020 */
uint F_00727020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_00727050 */
uint F_00727050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_00727080 */
uint F_00727080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9c9b0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_007270a0 */
uint F_007270a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7270a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_007270d0 */
uint F_007270d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7270d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9c9b0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_007270f0 */
uint F_007270f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7270f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9c9b0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_00727110 */
uint F_00727110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9c9b0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_00727130 */
uint F_00727130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_00727160 */
uint F_00727160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9c9b0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_00727180 */
uint F_00727180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727180u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9ae00(*(undefined4 *)(in_ecx + 8),param_2);
  return uVar1;
}

/* ref: FUN_007271a0 */
uint F_007271a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7271a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9c9b0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_007271c0 */
uint F_007271c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7271c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_007271f0 */
uint F_007271f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7271f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9c9b0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_00727210 */
uint F_00727210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9c9b0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_00727230 */
uint F_00727230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9c9b0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_00727250 */
uint F_00727250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_00727280 */
uint F_00727280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727280u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9ae00(*(undefined4 *)(in_ecx + 8),param_2);
  return uVar1;
}

/* ref: FUN_007272a0 */
uint F_007272a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7272a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_007272d0 */
uint F_007272d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7272d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_00727300 */
uint F_00727300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727300u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9ae00(*(undefined4 *)(in_ecx + 8),param_2 & 0xffff);
  return uVar1;
}

/* ref: FUN_00727320 */
uint F_00727320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727320u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9ae00(*(undefined4 *)(in_ecx + 8),param_2 & 0xff);
  return uVar1;
}

/* ref: FUN_00727340 */
uint F_00727340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9c9b0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_00727360 */
uint F_00727360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9ab70(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_00727380 */
uint F_00727380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_007273b0 */
uint F_007273b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7273b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_007273e0 */
uint F_007273e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7273e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_00727410 */
byte F_00727410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9a9b0(*(undefined4 *)((int)this + 8),0xffffffff);
  if (uVar1 != 0) {
    uVar2 = F_00b9ab70(*(undefined4 *)((int)this + 8),0xffffffff);
    *param_1 = uVar2;
  }
  F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
  return uVar1 != 0;
}

/* ref: FUN_00727460 */
byte F_00727460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9a9b0(*(undefined4 *)((int)this + 8),0xffffffff);
  if (uVar1 != 0) {
    uVar2 = F_00b9ab70(*(undefined4 *)((int)this + 8),0xffffffff);
    *param_1 = (short)uVar2;
  }
  F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
  return uVar1 != 0;
}

/* ref: FUN_007274b0 */
byte F_007274b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7274b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9a9b0(*(undefined4 *)((int)this + 8),0xffffffff);
  if (uVar1 != 0) {
    uVar2 = F_00b9ab70(*(undefined4 *)((int)this + 8),0xffffffff);
    *param_1 = (char)uVar2;
  }
  F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
  return uVar1 != 0;
}

/* ref: FUN_00727500 */
uint F_00727500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_00727530 */
uint F_00727530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727530u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  piVar1 = param_1;
  if (*param_1 < *param_2) {
    piVar1 = param_2;
  }
  return (uint)piVar1;
}

/* ref: FUN_00727550 */
uint F_00727550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_00727580 */
uint F_00727580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_007275b0 */
uint F_007275b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7275b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_007275e0 */
byte F_007275e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7275e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9a9b0(*(undefined4 *)((int)this + 8),0xffffffff);
  if (uVar1 != 0) {
    uVar2 = F_00b9ab70(*(undefined4 *)((int)this + 8),0xffffffff);
    *param_1 = uVar2;
  }
  F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
  return uVar1 != 0;
}

/* ref: FUN_00727630 */
uint F_00727630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_00727700 */
uint F_00727700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_00727730 */
uint F_00727730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9c9b0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_00727750 */
uint F_00727750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_00727780 */
uint F_00727780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9c9b0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_007277a0 */
uint F_007277a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7277a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_007277d0 */
uint F_007277d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7277d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_00727800 */
uint F_00727800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_00727830 */
uint F_00727830(unsigned int gen_a0)
{
  GEN_ENTER(0x727830u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(byte *)(*piVar2 + 0x1de));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00727880 */
uint F_00727880(unsigned int gen_a0)
{
  GEN_ENTER(0x727880u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(byte *)(*piVar2 + 0x1df));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_007278d0 */
uint F_007278d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7278d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(byte *)(*piVar2 + 0x1e0));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00727920 */
uint F_00727920(unsigned int gen_a0)
{
  GEN_ENTER(0x727920u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(byte *)(*piVar2 + 0x1e1));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00727970 */
uint F_00727970(unsigned int gen_a0)
{
  GEN_ENTER(0x727970u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(byte *)(*piVar2 + 0x1e2));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_007279c0 */
uint F_007279c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7279c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(byte *)(*piVar2 + 0x1e3));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00727a10 */
uint F_00727a10(unsigned int gen_a0)
{
  GEN_ENTER(0x727a10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(byte *)(*piVar2 + 0x1e4));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00727a60 */
uint F_00727a60(unsigned int gen_a0)
{
  GEN_ENTER(0x727a60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(byte *)(*piVar2 + 0x1e5));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00727ab0 */
uint F_00727ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x727ab0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(byte *)(*piVar2 + 0x1e6));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00727b00 */
uint F_00727b00(unsigned int gen_a0)
{
  GEN_ENTER(0x727b00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  F_00a01860(((byte *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00a01d20(((byte *)(gen_frame + 0xc)),1);
  piVar2 = (int *)F_00b9c710((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),1,uVar1);
  F_00b9ae00((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)),(uint)*(byte *)(*piVar2 + 0x1e7));
  F_00a01890(((byte *)(gen_frame + 0xc)));
  return 1;
}

/* ref: FUN_00727b50 */
byte F_00727b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0x1e7 + (int)this))) & (byte)(0x80 >> ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_00727b80 */
uint F_00727b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x727b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_00727bb0 */
uint F_00727bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x727bb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727bd0 */
uint F_00727bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x727bd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727be0 */
uint F_00727be0(unsigned int gen_a0)
{
  GEN_ENTER(0x727be0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727bf0 */
uint F_00727bf0(unsigned int gen_a0)
{
  GEN_ENTER(0x727bf0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727c00 */
uint F_00727c00(unsigned int gen_a0)
{
  GEN_ENTER(0x727c00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727c10 */
uint F_00727c10(unsigned int gen_a0)
{
  GEN_ENTER(0x727c10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727c20 */
uint F_00727c20(unsigned int gen_a0)
{
  GEN_ENTER(0x727c20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727c30 */
uint F_00727c30(unsigned int gen_a0)
{
  GEN_ENTER(0x727c30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727c40 */
uint F_00727c40(unsigned int gen_a0)
{
  GEN_ENTER(0x727c40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727c50 */
uint F_00727c50(unsigned int gen_a0)
{
  GEN_ENTER(0x727c50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727c60 */
uint F_00727c60(unsigned int gen_a0)
{
  GEN_ENTER(0x727c60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727c70 */
uint F_00727c70(unsigned int gen_a0)
{
  GEN_ENTER(0x727c70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727c80 */
uint F_00727c80(unsigned int gen_a0)
{
  GEN_ENTER(0x727c80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727c90 */
uint F_00727c90(unsigned int gen_a0)
{
  GEN_ENTER(0x727c90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727ca0 */
uint F_00727ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x727ca0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727cb0 */
uint F_00727cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x727cb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727cc0 */
uint F_00727cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x727cc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727cd0 */
uint F_00727cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x727cd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727ce0 */
uint F_00727ce0(unsigned int gen_a0)
{
  GEN_ENTER(0x727ce0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727cf0 */
uint F_00727cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x727cf0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727d00 */
uint F_00727d00(unsigned int gen_a0)
{
  GEN_ENTER(0x727d00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727d10 */
uint F_00727d10(unsigned int gen_a0)
{
  GEN_ENTER(0x727d10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727d20 */
uint F_00727d20(unsigned int gen_a0)
{
  GEN_ENTER(0x727d20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727d30 */
uint F_00727d30(unsigned int gen_a0)
{
  GEN_ENTER(0x727d30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727d40 */
uint F_00727d40(unsigned int gen_a0)
{
  GEN_ENTER(0x727d40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727d50 */
uint F_00727d50(unsigned int gen_a0)
{
  GEN_ENTER(0x727d50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727d60 */
uint F_00727d60(unsigned int gen_a0)
{
  GEN_ENTER(0x727d60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727d70 */
uint F_00727d70(unsigned int gen_a0)
{
  GEN_ENTER(0x727d70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727d80 */
uint F_00727d80(unsigned int gen_a0)
{
  GEN_ENTER(0x727d80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727d90 */
uint F_00727d90(unsigned int gen_a0)
{
  GEN_ENTER(0x727d90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727da0 */
uint F_00727da0(unsigned int gen_a0)
{
  GEN_ENTER(0x727da0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727db0 */
uint F_00727db0(unsigned int gen_a0)
{
  GEN_ENTER(0x727db0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727dc0 */
uint F_00727dc0(unsigned int gen_a0)
{
  GEN_ENTER(0x727dc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727dd0 */
uint F_00727dd0(unsigned int gen_a0)
{
  GEN_ENTER(0x727dd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727de0 */
uint F_00727de0(unsigned int gen_a0)
{
  GEN_ENTER(0x727de0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727df0 */
uint F_00727df0(unsigned int gen_a0)
{
  GEN_ENTER(0x727df0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727e00 */
uint F_00727e00(unsigned int gen_a0)
{
  GEN_ENTER(0x727e00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727e10 */
uint F_00727e10(unsigned int gen_a0)
{
  GEN_ENTER(0x727e10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727e20 */
uint F_00727e20(unsigned int gen_a0)
{
  GEN_ENTER(0x727e20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727e30 */
uint F_00727e30(unsigned int gen_a0)
{
  GEN_ENTER(0x727e30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727e40 */
uint F_00727e40(unsigned int gen_a0)
{
  GEN_ENTER(0x727e40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727ea0 */
uint F_00727ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x727ea0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727eb0 */
uint F_00727eb0(unsigned int gen_a0)
{
  GEN_ENTER(0x727eb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727ec0 */
uint F_00727ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x727ec0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727ed0 */
uint F_00727ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x727ed0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727ee0 */
uint F_00727ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x727ee0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727ef0 */
uint F_00727ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x727ef0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727f00 */
uint F_00727f00(unsigned int gen_a0)
{
  GEN_ENTER(0x727f00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727f10 */
uint F_00727f10(unsigned int gen_a0)
{
  GEN_ENTER(0x727f10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727f20 */
uint F_00727f20(unsigned int gen_a0)
{
  GEN_ENTER(0x727f20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727f30 */
uint F_00727f30(unsigned int gen_a0)
{
  GEN_ENTER(0x727f30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727f40 */
uint F_00727f40(unsigned int gen_a0)
{
  GEN_ENTER(0x727f40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727f50 */
uint F_00727f50(unsigned int gen_a0)
{
  GEN_ENTER(0x727f50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727f60 */
uint F_00727f60(unsigned int gen_a0)
{
  GEN_ENTER(0x727f60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727f70 */
uint F_00727f70(unsigned int gen_a0)
{
  GEN_ENTER(0x727f70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727f80 */
uint F_00727f80(unsigned int gen_a0)
{
  GEN_ENTER(0x727f80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727f90 */
uint F_00727f90(unsigned int gen_a0)
{
  GEN_ENTER(0x727f90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727fa0 */
uint F_00727fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x727fa0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727fb0 */
uint F_00727fb0(unsigned int gen_a0)
{
  GEN_ENTER(0x727fb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727fc0 */
uint F_00727fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x727fc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00727fe0 */
uint F_00727fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x727fe0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00728020 */
uint F_00728020(unsigned int gen_a0)
{
  GEN_ENTER(0x728020u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00728030 */
uint F_00728030(unsigned int gen_a0)
{
  GEN_ENTER(0x728030u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00728050 */
uint F_00728050(unsigned int gen_a0)
{
  GEN_ENTER(0x728050u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00728060 */
uint F_00728060(unsigned int gen_a0)
{
  GEN_ENTER(0x728060u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00728070 */
uint F_00728070(unsigned int gen_a0)
{
  GEN_ENTER(0x728070u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00728080 */
uint F_00728080(unsigned int gen_a0)
{
  GEN_ENTER(0x728080u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_007280c0 */
uint F_007280c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7280c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x40000000) && (uVar1 = F_004069f0(param_1 * 4), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)));
}

/* ref: FUN_00728120 */
uint F_00728120(unsigned int gen_a0)
{
  GEN_ENTER(0x728120u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00728150 */
uint F_00728150(unsigned int gen_a0)
{
  GEN_ENTER(0x728150u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00728170 */
uint F_00728170(unsigned int gen_a0)
{
  GEN_ENTER(0x728170u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_007281a0 */
uint F_007281a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7281a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00728230 */
uint F_00728230(unsigned int gen_a0)
{
  GEN_ENTER(0x728230u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00728250 */
uint F_00728250(unsigned int gen_a0)
{
  GEN_ENTER(0x728250u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00728280 */
uint F_00728280(unsigned int gen_a0)
{
  GEN_ENTER(0x728280u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_007282b0 */
uint F_007282b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7282b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_007282c0 */
uint F_007282c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7282c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_007282f0 */
uint F_007282f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7282f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00728310 */
uint F_00728310(unsigned int gen_a0)
{
  GEN_ENTER(0x728310u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00728340 */
uint F_00728340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x728340u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00728360 */
uint F_00728360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x728360u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00728390 */
uint F_00728390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x728390u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_007283e0 */
uint F_007283e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7283e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00728410 */
unsigned int F_00728410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x728410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00728450 */
uint F_00728450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x728450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00728470 */
unsigned int F_00728470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x728470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_2;
    puVar3 = param_1;
    for (iVar1 = 0x22; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return 0;
}

/* ref: FUN_007284a0 */
uint F_007284a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7284a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
  }
  return (uint)param_1;
}

/* ref: FUN_007284d0 */
uint F_007284d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7284d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00728540 */
unsigned int F_00728540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x728540u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_2;
    puVar3 = param_1;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00728560 */
uint F_00728560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x728560u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined2 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00728580 */
uint F_00728580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x728580u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_007285a0 */
uint F_007285a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7285a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return (uint)param_1;
}

/* ref: std::allocator<std::_Container_proxy>::construct_007285d0 */
unsigned int F_007285d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7285d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_007285f0 */
unsigned int F_007285f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7285f0u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined2 *)0x0) {
    *param_1 = *param_2;
    F_0042cbc0(param_1 + 2,param_2 + 2);
    F_0042cbc0(param_1 + 0x2c,param_2 + 0x2c);
    param_1[0x56] = param_2[0x56];
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    *(undefined4 *)(param_1 + 0x5a) = *(undefined4 *)(param_2 + 0x5a);
  }
  return 0;
}

/* ref: FUN_00728660 */
uint F_00728660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x728660u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00728680 */
unsigned int F_00728680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x728680u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00720120(param_1,param_2);
  }
  return 0;
}

/* ref: std::allocator<std::_Container_proxy>::construct_007286c0 */
unsigned int F_007286c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7286c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_007286f0 */
uint F_007286f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x7286f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3);
  return uVar1;
}

/* ref: FUN_00728710 */
uint F_00728710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x728710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b8a5c));
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined1 *)((int)this + 0x18) = *(undefined1 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined1 *)((int)this + 0x20) = *(undefined1 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined1 *)((int)this + 0x2c) = *(undefined1 *)(param_1 + 0x2c);
  return (uint)this;
}

/* ref: FUN_00728760 */
uint F_00728760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x728760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  *(undefined1 *)((int)this + 2) = *(undefined1 *)(param_1 + 1);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 2);
  *(undefined2 *)((int)this + 8) = param_1[4];
  *(undefined4 *)((int)this + 10) = *(undefined4 *)(param_1 + 5);
  *(undefined2 *)((int)this + 0xe) = param_1[7];
  *(undefined1 *)((int)this + 0x10) = *(undefined1 *)(param_1 + 8);
  *(undefined2 *)((int)this + 0x11) = *(undefined2 *)((int)param_1 + 0x11);
  *(undefined1 *)((int)this + 0x13) = *(undefined1 *)((int)param_1 + 0x13);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 10);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0xc);
  *(undefined1 *)((int)this + 0x1c) = *(undefined1 *)(param_1 + 0xe);
  *(undefined1 *)((int)this + 0x1d) = *(undefined1 *)((int)param_1 + 0x1d);
  F_0042cbc0((undefined *)((int)this + 0x20),param_1 + 0x10);
  return (uint)this;
}

/* ref: FUN_007287e0 */
unsigned int F_007287e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x7287e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  int iVar2;
  
  iVar1 = param_4 + -1;
  if (-1 < iVar1) {
    iVar2 = param_2;
    do {
      (*param_5)((param_1 - param_2) + iVar2,iVar2);
      iVar2 = iVar2 + param_3;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: FUN_007288a0 */
uint F_007288a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7288a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0xa0));
  uVar1 = F_0042c880((undefined *)((int)this + 0x3c));
  return (uint)uVar1;
}

/* ref: FUN_00728900 */
uint F_00728900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x728900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  F_0042cbc0((undefined *)((int)this + 0x54),param_1 + 0x54);
  *(undefined1 *)((int)this + 0xa8) = *(undefined1 *)(param_1 + 0xa8);
  return (uint)this;
}

/* ref: FUN_00728950 */
uint F_00728950(unsigned int gen_a0)
{
  GEN_ENTER(0x728950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x11) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x11) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x11) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x11) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x11);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x11);
    }
    if (*(char *)(*(int *)this + 0x11) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_007289c0 */
uint F_007289c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7289c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x15) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x15) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x15);
    }
    if (*(char *)(*(int *)this + 0x15) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00728a30 */
uint F_00728a30(unsigned int gen_a0)
{
  GEN_ENTER(0x728a30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x21) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x21) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x21) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x21) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x21);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x21);
    }
    if (*(char *)(*(int *)this + 0x21) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00728aa0 */
uint F_00728aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x728aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x21) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x21) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x21) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x21) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x21);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x21);
    }
    if (*(char *)(*(int *)this + 0x21) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00728b10 */
uint F_00728b10(unsigned int gen_a0)
{
  GEN_ENTER(0x728b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x6d) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x6d) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x6d) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x6d) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x6d);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x6d);
    }
    if (*(char *)(*(int *)this + 0x6d) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00728c60 */
uint F_00728c60(unsigned int gen_a0)
{
  GEN_ENTER(0x728c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x19) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x19) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x19) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x19) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x19);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x19);
    }
    if (*(char *)(*(int *)this + 0x19) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00728cc0 */
uint F_00728cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x728cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x15) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x15) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x15);
    }
    if (*(char *)(*(int *)this + 0x15) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00728d20 */
uint F_00728d20(unsigned int gen_a0)
{
  GEN_ENTER(0x728d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x21) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x21) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x21) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x21) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x21);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x21);
    }
    if (*(char *)(*(int *)this + 0x21) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00728d80 */
uint F_00728d80(unsigned int gen_a0)
{
  GEN_ENTER(0x728d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0xbd) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0xbd) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0xbd) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0xbd) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0xbd);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0xbd);
    }
    if (*(char *)(*(int *)this + 0xbd) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00728e00 */
uint F_00728e00(unsigned int gen_a0)
{
  GEN_ENTER(0x728e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x101) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x101) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x101) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x101) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x101);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x101);
    }
    if (*(char *)(*(int *)this + 0x101) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00728e80 */
uint F_00728e80(unsigned int gen_a0)
{
  GEN_ENTER(0x728e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x2cd) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x2cd) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x2cd) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x2cd) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x2cd);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x2cd);
    }
    if (*(char *)(*(int *)this + 0x2cd) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00728f00 */
uint F_00728f00(unsigned int gen_a0)
{
  GEN_ENTER(0x728f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x65) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x65) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x65) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x65) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x65);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x65);
    }
    if (*(char *)(*(int *)this + 0x65) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00728f60 */
uint F_00728f60(unsigned int gen_a0)
{
  GEN_ENTER(0x728f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x9d) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x9d) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x9d) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x9d) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x9d);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x9d);
    }
    if (*(char *)(*(int *)this + 0x9d) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00729000 */
uint F_00729000(unsigned int gen_a0)
{
  GEN_ENTER(0x729000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x19) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x19) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x19) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x19) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x19);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x19);
    }
    if (*(char *)(*(int *)this + 0x19) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00729060 */
uint F_00729060(unsigned int gen_a0)
{
  GEN_ENTER(0x729060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x15) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x15) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x15);
    }
    if (*(char *)(*(int *)this + 0x15) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_007290d0 */
uint F_007290d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7290d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x15) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x15) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x15);
    }
    if (*(char *)(*(int *)this + 0x15) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00729130 */
uint F_00729130(unsigned int gen_a0)
{
  GEN_ENTER(0x729130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x15) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x15) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x15);
    }
    if (*(char *)(*(int *)this + 0x15) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00729190 */
uint F_00729190(unsigned int gen_a0)
{
  GEN_ENTER(0x729190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x65) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x65) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x65) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x65) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x65);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x65);
    }
    if (*(char *)(*(int *)this + 0x65) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_007291f0 */
uint F_007291f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7291f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00729200 */
uint F_00729200(unsigned int gen_a0)
{
  GEN_ENTER(0x729200u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00729210 */
uint F_00729210(unsigned int gen_a0)
{
  GEN_ENTER(0x729210u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00729220 */
uint F_00729220(unsigned int gen_a0)
{
  GEN_ENTER(0x729220u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00729230 */
uint F_00729230(unsigned int gen_a0)
{
  GEN_ENTER(0x729230u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00729240 */
uint F_00729240(unsigned int gen_a0)
{
  GEN_ENTER(0x729240u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00729250 */
uint F_00729250(unsigned int gen_a0)
{
  GEN_ENTER(0x729250u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00729260 */
uint F_00729260(unsigned int gen_a0)
{
  GEN_ENTER(0x729260u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00729270 */
uint F_00729270(unsigned int gen_a0)
{
  GEN_ENTER(0x729270u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00729280 */
uint F_00729280(unsigned int gen_a0)
{
  GEN_ENTER(0x729280u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00729290 */
uint F_00729290(unsigned int gen_a0)
{
  GEN_ENTER(0x729290u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_007292a0 */
uint F_007292a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7292a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_007292b0 */
uint F_007292b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7292b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_007292c0 */
uint F_007292c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7292c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_007292d0 */
uint F_007292d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7292d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_007292e0 */
uint F_007292e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7292e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00a01d20(this,param_1);
  puVar2 = (uint *)F_00b9c710(*(undefined4 *)((int)this + 8),param_1,uVar1);
  return *puVar2;
}

/* ref: FUN_00729310 */
uint F_00729310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x729310u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_00729390 */
uint F_00729390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x729390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_00729410 */
uint F_00729410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x729410u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_00729490 */
uint F_00729490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x729490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_00729510 */
uint F_00729510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x729510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_00729590 */
byte F_00729590(unsigned int gen_a0)
{
  GEN_ENTER(0x729590u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return *(byte *)(iVar2 + 8);
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_007295c0 */
uint F_007295c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x7295c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9ae00(*(undefined4 *)(in_ecx + 8),(int)(char)param_2);
  return uVar1;
}

/* ref: FUN_007295e0 */
byte F_007295e0(unsigned int gen_a0)
{
  GEN_ENTER(0x7295e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return *(byte *)(iVar2 + 9);
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729610 */
byte F_00729610(unsigned int gen_a0)
{
  GEN_ENTER(0x729610u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return *(byte *)(iVar2 + 10);
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729640 */
byte F_00729640(unsigned int gen_a0)
{
  GEN_ENTER(0x729640u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return *(byte *)(iVar2 + 0xb);
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729670 */
byte F_00729670(unsigned int gen_a0)
{
  GEN_ENTER(0x729670u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return *(byte *)(iVar2 + 0xc);
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_007296a0 */
byte F_007296a0(unsigned int gen_a0)
{
  GEN_ENTER(0x7296a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return *(byte *)(iVar2 + 0xd);
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_007296d0 */
byte F_007296d0(unsigned int gen_a0)
{
  GEN_ENTER(0x7296d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return *(byte *)(iVar2 + 8);
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729700 */
byte F_00729700(unsigned int gen_a0)
{
  GEN_ENTER(0x729700u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return *(byte *)(iVar2 + 9);
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729730 */
byte F_00729730(unsigned int gen_a0)
{
  GEN_ENTER(0x729730u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return *(byte *)(iVar2 + 10);
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729760 */
byte F_00729760(unsigned int gen_a0)
{
  GEN_ENTER(0x729760u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return *(byte *)(iVar2 + 0xb);
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729790 */
byte F_00729790(unsigned int gen_a0)
{
  GEN_ENTER(0x729790u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return *(byte *)(iVar2 + 0xc);
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_007297c0 */
byte F_007297c0(unsigned int gen_a0)
{
  GEN_ENTER(0x7297c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return *(byte *)(iVar2 + 0xd);
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_007297f0 */
byte F_007297f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7297f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return *(byte *)(iVar2 + 8) >> 4;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729830 */
byte F_00729830(unsigned int gen_a0)
{
  GEN_ENTER(0x729830u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return *(byte *)(iVar2 + 9) >> 4;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729870 */
byte F_00729870(unsigned int gen_a0)
{
  GEN_ENTER(0x729870u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return *(byte *)(iVar2 + 10) >> 4;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_007298b0 */
byte F_007298b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7298b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return *(byte *)(iVar2 + 0xb) >> 4;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_007298f0 */
byte F_007298f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7298f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return *(byte *)(iVar2 + 0xc) >> 4;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729930 */
byte F_00729930(unsigned int gen_a0)
{
  GEN_ENTER(0x729930u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return *(byte *)(iVar2 + 0xd) >> 4;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729970 */
byte F_00729970(unsigned int gen_a0)
{
  GEN_ENTER(0x729970u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return *(byte *)(iVar2 + 8) & 0xf;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_007299b0 */
byte F_007299b0(unsigned int gen_a0)
{
  GEN_ENTER(0x7299b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return *(byte *)(iVar2 + 9) & 0xf;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_007299f0 */
byte F_007299f0(unsigned int gen_a0)
{
  GEN_ENTER(0x7299f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return *(byte *)(iVar2 + 10) & 0xf;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729a30 */
byte F_00729a30(unsigned int gen_a0)
{
  GEN_ENTER(0x729a30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return *(byte *)(iVar2 + 0xb) & 0xf;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729a70 */
byte F_00729a70(unsigned int gen_a0)
{
  GEN_ENTER(0x729a70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return *(byte *)(iVar2 + 0xc) & 0xf;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729ab0 */
byte F_00729ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x729ab0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return *(byte *)(iVar2 + 0xd) & 0xf;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729af0 */
uint F_00729af0(unsigned int gen_a0)
{
  GEN_ENTER(0x729af0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return (uint)CONCAT11(*(undefined1 *)(iVar2 + 8),*(undefined1 *)(iVar2 + 9));
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729b30 */
uint F_00729b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x729b30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9ae00(*(undefined4 *)(in_ecx + 8),(int)(short)param_2);
  return uVar1;
}

/* ref: FUN_00729b50 */
uint F_00729b50(unsigned int gen_a0)
{
  GEN_ENTER(0x729b50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return (uint)CONCAT11(*(undefined1 *)(iVar2 + 10),*(undefined1 *)(iVar2 + 0xb));
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729b90 */
uint F_00729b90(unsigned int gen_a0)
{
  GEN_ENTER(0x729b90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return (uint)CONCAT11(*(undefined1 *)(iVar2 + 0xc),*(undefined1 *)(iVar2 + 0xd));
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729bd0 */
uint F_00729bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x729bd0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return (uint)CONCAT11(*(undefined1 *)(iVar2 + 8),*(undefined1 *)(iVar2 + 9));
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729c10 */
uint F_00729c10(unsigned int gen_a0)
{
  GEN_ENTER(0x729c10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return (uint)CONCAT11(*(undefined1 *)(iVar2 + 10),*(undefined1 *)(iVar2 + 0xb));
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729c50 */
uint F_00729c50(unsigned int gen_a0)
{
  GEN_ENTER(0x729c50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return (uint)CONCAT11(*(undefined1 *)(iVar2 + 0xc),*(undefined1 *)(iVar2 + 0xd));
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729c90 */
uint F_00729c90(unsigned int gen_a0)
{
  GEN_ENTER(0x729c90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar2 = uVar1 + 0x13b4;
  iVar3 = 0;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar2 + 8),*(undefined1 *)(iVar2 + 9)),
                               *(undefined1 *)(iVar2 + 10)),*(undefined1 *)(iVar2 + 0xb));
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729ce0 */
uint F_00729ce0(unsigned int gen_a0)
{
  GEN_ENTER(0x729ce0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar2 = uVar1 + 0x13b4;
  iVar3 = 0;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar2 + 8),*(undefined1 *)(iVar2 + 9)),
                               *(undefined1 *)(iVar2 + 10)),*(undefined1 *)(iVar2 + 0xb));
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729d30 */
byte F_00729d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x729d30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return (*((byte *)GEN_TOP(((param_2 >> 3) + 0xd + iVar2))) & (byte)(0x80 >> ((byte)param_2 & 7))) != 0;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729d80 */
byte F_00729d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x729d80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return (*((byte *)GEN_TOP(((param_2 >> 3) + 0xc + iVar2))) & (byte)(0x80 >> ((byte)param_2 & 7))) != 0;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729dd0 */
byte F_00729dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x729dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return (*((byte *)GEN_TOP(((param_2 >> 3) + 0xb + iVar2))) & (byte)(0x80 >> ((byte)param_2 & 7))) != 0;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729e20 */
byte F_00729e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x729e20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return (*((byte *)GEN_TOP(((param_2 >> 3) + 10 + iVar2))) & (byte)(0x80 >> ((byte)param_2 & 7))) != 0;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729e70 */
byte F_00729e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x729e70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return (*((byte *)GEN_TOP(((param_2 >> 3) + 9 + iVar2))) & (byte)(0x80 >> ((byte)param_2 & 7))) != 0;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729ec0 */
byte F_00729ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x729ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00a4ffd0();
  iVar3 = 0;
  iVar2 = uVar1 + 0x13b4;
  do {
    if (*(short *)(iVar2 + 4) == (short)param_1) {
      return (*((byte *)GEN_TOP(((param_2 >> 3) + 8 + iVar2))) & (byte)(0x80 >> ((byte)param_2 & 7))) != 0;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x10;
  } while (iVar3 < 0x1e);
  return 0;
}

/* ref: FUN_00729f10 */
uint F_00729f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x729f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_00729f90 */
uint F_00729f90(unsigned int gen_a0)
{
  GEN_ENTER(0x729f90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00729fa0 */
uint F_00729fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x729fa0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00729fb0 */
uint F_00729fb0(unsigned int gen_a0)
{
  GEN_ENTER(0x729fb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00729fc0 */
uint F_00729fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x729fc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00729fd0 */
uint F_00729fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x729fd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00729fe0 */
uint F_00729fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x729fe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072a060 */
uint F_0072a060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72a060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072a0e0 */
uint F_0072a0e0(unsigned int gen_a0)
{
  GEN_ENTER(0x72a0e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a0f0 */
uint F_0072a0f0(unsigned int gen_a0)
{
  GEN_ENTER(0x72a0f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a100 */
uint F_0072a100(unsigned int gen_a0)
{
  GEN_ENTER(0x72a100u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a110 */
uint F_0072a110(unsigned int gen_a0)
{
  GEN_ENTER(0x72a110u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a120 */
uint F_0072a120(unsigned int gen_a0)
{
  GEN_ENTER(0x72a120u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a130 */
uint F_0072a130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72a130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072a1b0 */
uint F_0072a1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72a1b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072a230 */
uint F_0072a230(unsigned int gen_a0)
{
  GEN_ENTER(0x72a230u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a240 */
uint F_0072a240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72a240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072a2c0 */
uint F_0072a2c0(unsigned int gen_a0)
{
  GEN_ENTER(0x72a2c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a2d0 */
uint F_0072a2d0(unsigned int gen_a0)
{
  GEN_ENTER(0x72a2d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a2e0 */
uint F_0072a2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72a2e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072a360 */
uint F_0072a360(unsigned int gen_a0)
{
  GEN_ENTER(0x72a360u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a370 */
uint F_0072a370(unsigned int gen_a0)
{
  GEN_ENTER(0x72a370u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a380 */
uint F_0072a380(unsigned int gen_a0)
{
  GEN_ENTER(0x72a380u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a390 */
uint F_0072a390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72a390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072a410 */
uint F_0072a410(unsigned int gen_a0)
{
  GEN_ENTER(0x72a410u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a420 */
uint F_0072a420(unsigned int gen_a0)
{
  GEN_ENTER(0x72a420u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a430 */
uint F_0072a430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72a430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072a4b0 */
uint F_0072a4b0(unsigned int gen_a0)
{
  GEN_ENTER(0x72a4b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a4c0 */
uint F_0072a4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72a4c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072a4e0 */
unsigned int F_0072a4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72a4e0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_1;
    do {
      if (*piVar1 == *param_3) {
        return 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_0072a500 */
uint F_0072a500(unsigned int gen_a0)
{
  GEN_ENTER(0x72a500u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a510 */
uint F_0072a510(unsigned int gen_a0)
{
  GEN_ENTER(0x72a510u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a520 */
uint F_0072a520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72a520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072a540 */
uint F_0072a540(unsigned int gen_a0)
{
  GEN_ENTER(0x72a540u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a550 */
uint F_0072a550(unsigned int gen_a0)
{
  GEN_ENTER(0x72a550u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a560 */
uint F_0072a560(unsigned int gen_a0)
{
  GEN_ENTER(0x72a560u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a570 */
uint F_0072a570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72a570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072a5f0 */
uint F_0072a5f0(unsigned int gen_a0)
{
  GEN_ENTER(0x72a5f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a600 */
uint F_0072a600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72a600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072a680 */
uint F_0072a680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72a680u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072a700 */
uint F_0072a700(unsigned int gen_a0)
{
  GEN_ENTER(0x72a700u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a710 */
uint F_0072a710(unsigned int gen_a0)
{
  GEN_ENTER(0x72a710u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072a720 */
uint F_0072a720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72a720u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072a7a0 */
uint F_0072a7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72a7a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072a820 */
uint F_0072a820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72a820u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072a8a0 */
uint F_0072a8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72a8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072ad00 */
byte F_0072ad00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72ad00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0x1e6 + (int)this))) & (byte)(0x80 >> ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_0072ad30 */
byte F_0072ad30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72ad30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0x1e5 + (int)this))) & (byte)(0x80 >> ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_0072ad60 */
byte F_0072ad60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72ad60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0x1e4 + (int)this))) & (byte)(0x80 >> ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_0072ad90 */
byte F_0072ad90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72ad90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0x1e3 + (int)this))) & (byte)(0x80 >> ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_0072adc0 */
byte F_0072adc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72adc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0x1e2 + (int)this))) & (byte)(0x80 >> ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_0072adf0 */
byte F_0072adf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72adf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0x1e1 + (int)this))) & (byte)(0x80 >> ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_0072ae20 */
byte F_0072ae20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72ae20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0x1e0 + (int)this))) & (byte)(0x80 >> ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_0072ae50 */
byte F_0072ae50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72ae50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0x1df + (int)this))) & (byte)(0x80 >> ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_0072ae80 */
byte F_0072ae80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72ae80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0x1de + (int)this))) & (byte)(0x80 >> ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_0072aeb0 */
uint F_0072aeb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x72aeb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9b950(*(undefined4 *)((int)this + 8),4);
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  F_00b9b3d0(*(undefined4 *)((int)this + 8),uVar1 + 2);
  puVar2 = (undefined4 *)F_00b9ad00(*(undefined4 *)((int)this + 8),uVar1 + 2);
  *puVar2 = param_3;
  F_00b9b2f0(*(undefined4 *)((int)this + 8),0xffffd8ee);
  uVar1 = F_00a01ad0(this,param_1);
  return uVar1;
}

/* ref: FUN_0072af30 */
uint F_0072af30(unsigned int gen_a0)
{
  GEN_ENTER(0x72af30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072af40 */
uint F_0072af40(unsigned int gen_a0)
{
  GEN_ENTER(0x72af40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072af50 */
uint F_0072af50(unsigned int gen_a0)
{
  GEN_ENTER(0x72af50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072af60 */
uint F_0072af60(unsigned int gen_a0)
{
  GEN_ENTER(0x72af60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072af70 */
uint F_0072af70(unsigned int gen_a0)
{
  GEN_ENTER(0x72af70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072af90 */
byte F_0072af90(void)
{
  GEN_ENTER(0x72af90u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0072afb0 */
byte F_0072afb0(void)
{
  GEN_ENTER(0x72afb0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0072afc0 */
byte F_0072afc0(void)
{
  GEN_ENTER(0x72afc0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0072afd0 */
uint F_0072afd0(unsigned int gen_a0)
{
  GEN_ENTER(0x72afd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072afe0 */
uint F_0072afe0(unsigned int gen_a0)
{
  GEN_ENTER(0x72afe0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072aff0 */
uint F_0072aff0(unsigned int gen_a0)
{
  GEN_ENTER(0x72aff0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b000 */
uint F_0072b000(unsigned int gen_a0)
{
  GEN_ENTER(0x72b000u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b010 */
byte F_0072b010(void)
{
  GEN_ENTER(0x72b010u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0072b020 */
uint F_0072b020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b020u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_0072b050 */
uint F_0072b050(unsigned int gen_a0)
{
  GEN_ENTER(0x72b050u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b060 */
uint F_0072b060(unsigned int gen_a0)
{
  GEN_ENTER(0x72b060u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b070 */
byte F_0072b070(void)
{
  GEN_ENTER(0x72b070u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0072b080 */
uint F_0072b080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b080u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_0072b0b0 */
uint F_0072b0b0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b0b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b0c0 */
uint F_0072b0c0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b0c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b0d0 */
byte F_0072b0d0(void)
{
  GEN_ENTER(0x72b0d0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0072b0e0 */
uint F_0072b0e0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b0e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b0f0 */
uint F_0072b0f0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b0f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b100 */
uint F_0072b100(unsigned int gen_a0)
{
  GEN_ENTER(0x72b100u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b110 */
uint F_0072b110(unsigned int gen_a0)
{
  GEN_ENTER(0x72b110u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b120 */
uint F_0072b120(unsigned int gen_a0)
{
  GEN_ENTER(0x72b120u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b140 */
byte F_0072b140(void)
{
  GEN_ENTER(0x72b140u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0072b150 */
uint F_0072b150(unsigned int gen_a0)
{
  GEN_ENTER(0x72b150u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b160 */
uint F_0072b160(unsigned int gen_a0)
{
  GEN_ENTER(0x72b160u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b170 */
uint F_0072b170(unsigned int gen_a0)
{
  GEN_ENTER(0x72b170u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b180 */
uint F_0072b180(unsigned int gen_a0)
{
  GEN_ENTER(0x72b180u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b190 */
byte F_0072b190(void)
{
  GEN_ENTER(0x72b190u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0072b1a0 */
uint F_0072b1a0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b1a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b1b0 */
uint F_0072b1b0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b1b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b1c0 */
uint F_0072b1c0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b1c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b1d0 */
uint F_0072b1d0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b1d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b1f0 */
byte F_0072b1f0(void)
{
  GEN_ENTER(0x72b1f0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0072b200 */
byte F_0072b200(void)
{
  GEN_ENTER(0x72b200u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0072b210 */
uint F_0072b210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x72b210u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_0072b230 */
uint F_0072b230(unsigned int gen_a0)
{
  GEN_ENTER(0x72b230u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b240 */
uint F_0072b240(unsigned int gen_a0)
{
  GEN_ENTER(0x72b240u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b250 */
byte F_0072b250(void)
{
  GEN_ENTER(0x72b250u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0072b260 */
uint F_0072b260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b260u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_0072b290 */
uint F_0072b290(unsigned int gen_a0)
{
  GEN_ENTER(0x72b290u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b2a0 */
uint F_0072b2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b2a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b2b0 */
uint F_0072b2b0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b2b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b2c0 */
uint F_0072b2c0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b2c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b2d0 */
uint F_0072b2d0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b2d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b2e0 */
uint F_0072b2e0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b2e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b300 */
byte F_0072b300(void)
{
  GEN_ENTER(0x72b300u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0072b310 */
uint F_0072b310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b310u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_0072b350 */
byte F_0072b350(void)
{
  GEN_ENTER(0x72b350u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0072b360 */
byte F_0072b360(void)
{
  GEN_ENTER(0x72b360u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0072b3a0 */
byte F_0072b3a0(void)
{
  GEN_ENTER(0x72b3a0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0072b3b0 */
byte F_0072b3b0(void)
{
  GEN_ENTER(0x72b3b0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0072b3e0 */
uint F_0072b3e0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b3e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b3f0 */
uint F_0072b3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b3f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072b410 */
uint F_0072b410(unsigned int gen_a0)
{
  GEN_ENTER(0x72b410u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b420 */
uint F_0072b420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072b440 */
byte F_0072b440(void)
{
  GEN_ENTER(0x72b440u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0072b460 */
byte F_0072b460(void)
{
  GEN_ENTER(0x72b460u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0072b470 */
byte F_0072b470(void)
{
  GEN_ENTER(0x72b470u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0072b480 */
uint F_0072b480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b480u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 1) * 2;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_0072b4c0 */
byte F_0072b4c0(void)
{
  GEN_ENTER(0x72b4c0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0072b4d0 */
byte F_0072b4d0(void)
{
  GEN_ENTER(0x72b4d0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0072b4e0 */
uint F_0072b4e0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b4e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b4f0 */
uint F_0072b4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b4f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072b520 */
byte F_0072b520(void)
{
  GEN_ENTER(0x72b520u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0072b530 */
uint F_0072b530(unsigned int gen_a0)
{
  GEN_ENTER(0x72b530u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b540 */
uint F_0072b540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072b560 */
byte F_0072b560(void)
{
  GEN_ENTER(0x72b560u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0072b570 */
uint F_0072b570(unsigned int gen_a0)
{
  GEN_ENTER(0x72b570u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b580 */
uint F_0072b580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072b5a0 */
uint F_0072b5a0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b5a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b5b0 */
uint F_0072b5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b5b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072b5f0 */
uint F_0072b5f0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b5f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b600 */
uint F_0072b600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072b620 */
uint F_0072b620(unsigned int gen_a0)
{
  GEN_ENTER(0x72b620u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b630 */
uint F_0072b630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072b650 */
byte F_0072b650(void)
{
  GEN_ENTER(0x72b650u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0072b680 */
uint F_0072b680(unsigned int gen_a0)
{
  GEN_ENTER(0x72b680u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b690 */
uint F_0072b690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0072b6b0 */
uint F_0072b6b0(unsigned int gen_a0)
{
  GEN_ENTER(0x72b6b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0072b6c0 */
uint F_0072b6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x72b6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

