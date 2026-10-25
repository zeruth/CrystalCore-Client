#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00d67bf0 */
uint F_00d67bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd67bf0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00d67c10 */
unsigned int F_00d67c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd67c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
    *(undefined4 *)this = *param_1;
    return 0;
  }
  *(undefined4 *)this = *param_1;
  return 0;
}

/* ref: FUN_00d67c50 */
uint F_00d67c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd67c50u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x40 + *in_ecx;
}

/* ref: FUN_00d67c60 */
uint F_00d67c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd67c60u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x70 + *in_ecx;
}

/* ref: FUN_00d67c70 */
unsigned int F_00d67c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd67c70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = uVar2;
  *(undefined4 *)((int)this + 8) = uVar3;
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return 0;
}

/* ref: FUN_00d67c90 */
uint F_00d67c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd67c90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d67ca0 */
uint F_00d67ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd67ca0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d67cf0 */
uint F_00d67cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd67cf0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d67d10 */
uint F_00d67d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd67d10u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d67d50 */
uint F_00d67d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd67d50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 0x70)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)(*(int * PTR32 *)&gen_args[1]) / 0x70;
  return uVar2;
}

/* ref: FUN_00d67d90 */
unsigned int F_00d67d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd67d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  if (0 < param_3) {
    iVar1 = param_2 - (int)param_1;
    do {
      *param_1 = *(undefined2 *)(iVar1 + (int)param_1);
      param_1 = param_1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 0;
}

/* ref: FUN_00d67dc0 */
uint F_00d67dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd67dc0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d67df0 */
uint F_00d67df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd67df0u, gen_a0, gen_a1, gen_a2, 0u);
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
  *(float *)this = *(float *)this - *param_1 * *param_2;
  *(float *)((int)this + 4) = *(float *)((int)this + 4) - fVar1 * fVar4;
  *(float *)((int)this + 8) = *(float *)((int)this + 8) - fVar2 * fVar5;
  *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc) - fVar3 * fVar6;
  return (uint)param_1;
}

/* ref: FUN_00d67e10 */
uint F_00d67e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd67e10u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d67e30 */
unsigned int F_00d67e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd67e30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = uVar2;
  *(undefined4 *)((int)this + 8) = uVar3;
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return 0;
}

/* ref: FUN_00d67e50 */
uint F_00d67e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd67e50u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 auVar1 [16];
  undefined4 in_EAX = 0;
  uint uVar2;
  
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)GEN_ISNAN(in_ecx[1]);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)GEN_ISNAN(*in_ecx);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)GEN_ISNAN(in_ecx[2]);
  (*(undefined4 *)((char *)&auVar1 + 12)) = -(uint)GEN_ISNAN(in_ecx[3]);
  uVar2 = gen_movmskps(&(auVar1));
  *(bool *)param_2 = (uVar2 & 7) == 0;
  return param_2;
}

/* ref: FUN_00d67e90 */
unsigned int F_00d67e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd67e90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a3;
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
    F_00d95690(param_1,this,iVar3,2);
  }
  iVar3 = *(int *)((int)this + 4);
  iVar1 = *(int *)this;
  iVar4 = param_2 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *(undefined2 *)(iVar1 + iVar3 * 2 + iVar5 * 2) = *param_3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *(int *)((int)this + 4) = param_2;
  return 0;
}

/* ref: FUN_00d67ef0 */
uint F_00d67ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd67ef0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00d67f00 */
uint F_00d67f00(unsigned int gen_a0)
{
  GEN_ENTER(0xd67f00u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d67f40 */
uint F_00d67f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd67f40u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d67f90 */
uint F_00d67f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd67f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * piVar1;
  uint uVar2;
  undefined2 * puVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (*(int * PTR32 *)&gen_args[2]);
  uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) & 0x3fffffff;
  if ((int)uVar2 < (*(int * PTR32 *)&gen_args[2])[1]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x10))))((*(int * PTR32 *)&gen_args[1]),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),uVar2 * 2);
    }
    (*(int * PTR32 *)&gen_args[2]) = (int *)(piVar1[1] * 2);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xc))))((*(int * PTR32 *)&gen_args[1]),&(*(int * PTR32 *)&gen_args[2]));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (int)(*(int * PTR32 *)&gen_args[2]) / 2;
  }
  iVar5 = piVar1[1];
  puVar3 = *(undefined2 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar5;
  if (0 < iVar5) {
    iVar4 = *piVar1 - (int)puVar3;
    do {
      *puVar3 = *(undefined2 *)(iVar4 + (int)puVar3);
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d68010 */
unsigned int F_00d68010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd68010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined2 *)this = *param_1;
  *(undefined2 *)((int)this + 2) = param_1[1];
  uVar1 = *(undefined4 *)(param_1 + 10);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0xe);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = uVar2;
  *(undefined4 *)((int)this + 0x1c) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x12);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x16);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x24) = uVar1;
  *(undefined4 *)((int)this + 0x28) = uVar2;
  *(undefined4 *)((int)this + 0x2c) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x1a);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x1e);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x34) = uVar1;
  *(undefined4 *)((int)this + 0x38) = uVar2;
  *(undefined4 *)((int)this + 0x3c) = uVar3;
  return 0;
}

/* ref: FUN_00d68050 */
unsigned int F_00d68050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd68050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined2 *)this = *param_1;
  *(undefined2 *)((int)this + 2) = param_1[1];
  *(undefined2 *)((int)this + 4) = param_1[2];
  *(undefined2 *)((int)this + 6) = param_1[3];
  uVar1 = *(undefined4 *)(param_1 + 10);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0xe);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = uVar2;
  *(undefined4 *)((int)this + 0x1c) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x12);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x16);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x24) = uVar1;
  *(undefined4 *)((int)this + 0x28) = uVar2;
  *(undefined4 *)((int)this + 0x2c) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x1a);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x1e);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x34) = uVar1;
  *(undefined4 *)((int)this + 0x38) = uVar2;
  *(undefined4 *)((int)this + 0x3c) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x22);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = *(undefined4 *)(param_1 + 0x26);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x44) = uVar1;
  *(undefined4 *)((int)this + 0x48) = uVar2;
  *(undefined4 *)((int)this + 0x4c) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x2a);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  uVar3 = *(undefined4 *)(param_1 + 0x2e);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x54) = uVar1;
  *(undefined4 *)((int)this + 0x58) = uVar2;
  *(undefined4 *)((int)this + 0x5c) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x32);
  uVar2 = *(undefined4 *)(param_1 + 0x34);
  uVar3 = *(undefined4 *)(param_1 + 0x36);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 100) = uVar1;
  *(undefined4 *)((int)this + 0x68) = uVar2;
  *(undefined4 *)((int)this + 0x6c) = uVar3;
  return 0;
}

/* ref: FUN_00d68170 */
unsigned int F_00d68170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd68170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
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
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,2);
  }
  iVar3 = *(int *)((int)this + 4);
  iVar1 = *(int *)this;
  iVar4 = param_1 - iVar3;
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      *(undefined2 *)(iVar1 + iVar3 * 2 + iVar5 * 2) = *param_2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  *(int *)((int)this + 4) = param_1;
  return 0;
}

/* ref: FUN_00d681d0 */
uint F_00d681d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd681d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  undefined2 * puVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) & 0x3fffffff;
  if ((int)uVar2 < (*(int * PTR32 *)&gen_args[1])[1]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),uVar2 * 2);
    }
    (*(int * PTR32 *)&gen_args[1]) = (int *)(piVar1[1] * 2);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[1]));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (int)(*(int * PTR32 *)&gen_args[1]) / 2;
  }
  iVar5 = piVar1[1];
  puVar3 = *(undefined2 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar5;
  if (0 < iVar5) {
    iVar4 = *piVar1 - (int)puVar3;
    do {
      *puVar3 = *(undefined2 *)(iVar4 + (int)puVar3);
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d68260 */
unsigned int F_00d68260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd68260u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  undefined2 * puVar6;
  
  if (0 < param_3) {
    puVar6 = (undefined2 *)(param_2 + 2);
    puVar5 = (undefined4 *)(param_1 + 0x20);
    do {
      *(undefined2 *)(puVar5 + -8) = puVar6[-1];
      *(undefined2 *)((int)puVar5 + -0x1e) = *puVar6;
      uVar2 = *(undefined4 *)(puVar6 + 9);
      uVar3 = *(undefined4 *)(puVar6 + 0xb);
      uVar4 = *(undefined4 *)(puVar6 + 0xd);
      puVar5[-4] = *(undefined4 *)(puVar6 + 7);
      puVar5[-3] = uVar2;
      puVar5[-2] = uVar3;
      puVar5[-1] = uVar4;
      puVar1 = ((undefined4 *)GEN_TOP(((param_2 - param_1) + (int)puVar5)));
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar5 = *puVar1;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      uVar2 = *(undefined4 *)(puVar6 + 0x19);
      uVar3 = *(undefined4 *)(puVar6 + 0x1b);
      uVar4 = *(undefined4 *)(puVar6 + 0x1d);
      puVar5[4] = *(undefined4 *)(puVar6 + 0x17);
      puVar5[5] = uVar2;
      puVar5[6] = uVar3;
      puVar5[7] = uVar4;
      puVar6 = puVar6 + 0x20;
      puVar5 = puVar5 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 0;
}

/* ref: FUN_00d682c0 */
unsigned int F_00d682c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd682c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  if (0 < param_3) {
    puVar6 = (undefined4 *)(param_2 + 0x50);
    puVar5 = (undefined4 *)(param_1 + 0x20);
    do {
      *(undefined2 *)(puVar5 + -8) = *(undefined2 *)(puVar6 + -0x14);
      *(undefined2 *)((int)puVar5 + -0x1e) = *(undefined2 *)((int)puVar6 + -0x4e);
      *(undefined2 *)(puVar5 + -7) = *(undefined2 *)(puVar6 + -0x13);
      *(undefined2 *)((int)puVar5 + -0x1a) = *(undefined2 *)((int)puVar6 + -0x4a);
      uVar2 = puVar6[-0xf];
      uVar3 = puVar6[-0xe];
      uVar4 = puVar6[-0xd];
      puVar5[-4] = puVar6[-0x10];
      puVar5[-3] = uVar2;
      puVar5[-2] = uVar3;
      puVar5[-1] = uVar4;
      puVar1 = ((undefined4 *)GEN_TOP(((param_2 - param_1) + (int)puVar5)));
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar5 = *puVar1;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      uVar2 = puVar6[-7];
      uVar3 = puVar6[-6];
      uVar4 = puVar6[-5];
      puVar5[4] = puVar6[-8];
      puVar5[5] = uVar2;
      puVar5[6] = uVar3;
      puVar5[7] = uVar4;
      uVar2 = puVar6[-3];
      uVar3 = puVar6[-2];
      uVar4 = puVar6[-1];
      puVar5[8] = puVar6[-4];
      puVar5[9] = uVar2;
      puVar5[10] = uVar3;
      puVar5[0xb] = uVar4;
      uVar2 = puVar6[1];
      uVar3 = puVar6[2];
      uVar4 = puVar6[3];
      puVar5[0xc] = *puVar6;
      puVar5[0xd] = uVar2;
      puVar5[0xe] = uVar3;
      puVar5[0xf] = uVar4;
      uVar2 = puVar6[5];
      uVar3 = puVar6[6];
      uVar4 = puVar6[7];
      puVar5[0x10] = puVar6[4];
      puVar5[0x11] = uVar2;
      puVar5[0x12] = uVar3;
      puVar5[0x13] = uVar4;
      puVar6 = puVar6 + 0x1c;
      puVar5 = puVar5 + 0x1c;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 0;
}

/* ref: FUN_00d68340 */
unsigned int F_00d68340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd68340u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *in_ecx * *in_ecx;
  fVar2 = in_ecx[1] * in_ecx[1];
  fVar3 = in_ecx[2] * in_ecx[2];
  *param_2 = (fVar2 + fVar1) + fVar3;
  param_2[1] = (fVar2 + fVar1) + fVar3;
  param_2[2] = (fVar2 + fVar1) + fVar3;
  param_2[3] = (fVar2 + fVar1) + fVar3;
  return 0;
}

/* ref: FUN_00d68370 */
uint F_00d68370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd68370u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int * piVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined2 * puVar10;
  int iVar11;
  
  piVar7 = (*(int * PTR32 *)&gen_args[1]);
  uVar8 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if ((int)(uVar8 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[2])[1]) {
    if (-1 < (int)uVar8) {
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x10))))((*(int * PTR32 *)&gen_args[1]),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),uVar8 << 6);
    }
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[1] << 6)));
    uVar8 = ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,&(*(int * PTR32 *)&gen_args[1]));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar8;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 0x3fU)) >> 6;
  }
  iVar11 = (*(int * PTR32 *)&gen_args[2])[1];
  iVar2 = *(int *)(*(undefined * PTR32 *)&gen_args[0]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar11;
  iVar3 = *(*(int * PTR32 *)&gen_args[2]);
  if (0 < iVar11) {
    puVar10 = (undefined2 *)(iVar3 + 2);
    puVar9 = (undefined4 *)(iVar2 + 0x20);
    do {
      *(undefined2 *)(puVar9 + -8) = puVar10[-1];
      *(undefined2 *)((int)puVar9 + -0x1e) = *puVar10;
      uVar4 = *(undefined4 *)(puVar10 + 9);
      uVar5 = *(undefined4 *)(puVar10 + 0xb);
      uVar6 = *(undefined4 *)(puVar10 + 0xd);
      puVar9[-4] = *(undefined4 *)(puVar10 + 7);
      puVar9[-3] = uVar4;
      puVar9[-2] = uVar5;
      puVar9[-1] = uVar6;
      puVar1 = ((undefined4 *)GEN_TOP(((iVar3 - iVar2) + (int)puVar9)));
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *puVar9 = *puVar1;
      puVar9[1] = uVar4;
      puVar9[2] = uVar5;
      puVar9[3] = uVar6;
      uVar4 = *(undefined4 *)(puVar10 + 0x19);
      uVar5 = *(undefined4 *)(puVar10 + 0x1b);
      uVar6 = *(undefined4 *)(puVar10 + 0x1d);
      puVar9[4] = *(undefined4 *)(puVar10 + 0x17);
      puVar9[5] = uVar4;
      puVar9[6] = uVar5;
      puVar9[7] = uVar6;
      puVar10 = puVar10 + 0x20;
      puVar9 = puVar9 + 0x10;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    return (uint)(*(undefined * PTR32 *)&gen_args[0]);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d68440 */
uint F_00d68440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd68440u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int * piVar8;
  uint uVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  
  piVar8 = (*(int * PTR32 *)&gen_args[1]);
  uVar9 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) & 0x3fffffff;
  if ((int)uVar9 < (*(int * PTR32 *)&gen_args[2])[1]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x10))))((*(int * PTR32 *)&gen_args[1]),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),uVar9 * 0x70);
    }
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[1] * 0x70)));
    uVar9 = ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8,&(*(int * PTR32 *)&gen_args[1]));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar9;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (int)(*(int * PTR32 *)&gen_args[1]) / 0x70;
  }
  iVar2 = (*(int * PTR32 *)&gen_args[2])[1];
  iVar3 = *(int *)(*(undefined * PTR32 *)&gen_args[0]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar2;
  iVar4 = *(*(int * PTR32 *)&gen_args[2]);
  if (0 < iVar2) {
    puVar11 = (undefined4 *)(iVar4 + 0x50);
    puVar10 = (undefined4 *)(iVar3 + 0x20);
    (*(int * PTR32 *)&gen_args[2]) = (int *)iVar2;
    do {
      *(undefined2 *)(puVar10 + -8) = *(undefined2 *)(puVar11 + -0x14);
      *(undefined2 *)((int)puVar10 + -0x1e) = *(undefined2 *)((int)puVar11 + -0x4e);
      *(undefined2 *)(puVar10 + -7) = *(undefined2 *)(puVar11 + -0x13);
      *(undefined2 *)((int)puVar10 + -0x1a) = *(undefined2 *)((int)puVar11 + -0x4a);
      uVar5 = puVar11[-0xf];
      uVar6 = puVar11[-0xe];
      uVar7 = puVar11[-0xd];
      puVar10[-4] = puVar11[-0x10];
      puVar10[-3] = uVar5;
      puVar10[-2] = uVar6;
      puVar10[-1] = uVar7;
      puVar1 = ((undefined4 *)GEN_TOP(((iVar4 - iVar3) + (int)puVar10)));
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      *puVar10 = *puVar1;
      puVar10[1] = uVar5;
      puVar10[2] = uVar6;
      puVar10[3] = uVar7;
      uVar5 = puVar11[-7];
      uVar6 = puVar11[-6];
      uVar7 = puVar11[-5];
      puVar10[4] = puVar11[-8];
      puVar10[5] = uVar5;
      puVar10[6] = uVar6;
      puVar10[7] = uVar7;
      uVar5 = puVar11[-3];
      uVar6 = puVar11[-2];
      uVar7 = puVar11[-1];
      puVar10[8] = puVar11[-4];
      puVar10[9] = uVar5;
      puVar10[10] = uVar6;
      puVar10[0xb] = uVar7;
      uVar5 = puVar11[1];
      uVar6 = puVar11[2];
      uVar7 = puVar11[3];
      puVar10[0xc] = *puVar11;
      puVar10[0xd] = uVar5;
      puVar10[0xe] = uVar6;
      puVar10[0xf] = uVar7;
      uVar5 = puVar11[5];
      uVar6 = puVar11[6];
      uVar7 = puVar11[7];
      puVar10[0x10] = puVar11[4];
      puVar10[0x11] = uVar5;
      puVar10[0x12] = uVar6;
      puVar10[0x13] = uVar7;
      puVar11 = puVar11 + 0x1c;
      puVar10 = puVar10 + 0x1c;
      (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + -1)));
    } while ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d68530 */
uint F_00d68530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd68530u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d685a0 */
uint F_00d685a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd685a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d68630 */
uint F_00d68630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd68630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 * puVar8;
  undefined2 * puVar9;
  int iVar10;
  
  uVar7 = *(uint *)((int)this + 8);
  if ((int)(uVar7 & 0x3fffffff) < param_1[1]) {
    if (-1 < (int)uVar7) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar7 << 6);
    }
    (*(int *)(gen_frame + 0x8)) = param_1[1] << 6;
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x8)));
    *(uint *)this = uVar7;
    *(int *)((int)this + 8) = (int)((*(int *)(gen_frame + 0x8)) + ((*(int *)(gen_frame + 0x8)) >> 0x1f & 0x3fU)) >> 6;
  }
  iVar10 = param_1[1];
  iVar2 = *(int *)this;
  *(int *)((int)this + 4) = iVar10;
  iVar3 = *param_1;
  if (0 < iVar10) {
    puVar9 = (undefined2 *)(iVar3 + 2);
    puVar8 = (undefined4 *)(iVar2 + 0x20);
    do {
      *(undefined2 *)(puVar8 + -8) = puVar9[-1];
      *(undefined2 *)((int)puVar8 + -0x1e) = *puVar9;
      uVar4 = *(undefined4 *)(puVar9 + 9);
      uVar5 = *(undefined4 *)(puVar9 + 0xb);
      uVar6 = *(undefined4 *)(puVar9 + 0xd);
      puVar8[-4] = *(undefined4 *)(puVar9 + 7);
      puVar8[-3] = uVar4;
      puVar8[-2] = uVar5;
      puVar8[-1] = uVar6;
      puVar1 = ((undefined4 *)GEN_TOP(((iVar3 - iVar2) + (int)puVar8)));
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *puVar8 = *puVar1;
      puVar8[1] = uVar4;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
      uVar4 = *(undefined4 *)(puVar9 + 0x19);
      uVar5 = *(undefined4 *)(puVar9 + 0x1b);
      uVar6 = *(undefined4 *)(puVar9 + 0x1d);
      puVar8[4] = *(undefined4 *)(puVar9 + 0x17);
      puVar8[5] = uVar4;
      puVar8[6] = uVar5;
      puVar8[7] = uVar6;
      puVar9 = puVar9 + 0x20;
      puVar8 = puVar8 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    return (uint)this;
  }
  return (uint)this;
}

/* ref: FUN_00d68710 */
uint F_00d68710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd68710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar8 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar8 < param_1[1]) {
    if (-1 < (int)*(uint *)((int)this + 8)) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar8 * 0x70);
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)(param_1[1] * 0x70);
    uVar8 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    *(uint *)this = uVar8;
    *(int *)((int)this + 8) = (int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x8))) / 0x70;
  }
  iVar2 = param_1[1];
  iVar3 = *(int *)this;
  *(int *)((int)this + 4) = iVar2;
  iVar4 = *param_1;
  if (0 < iVar2) {
    puVar10 = (undefined4 *)(iVar4 + 0x50);
    puVar9 = (undefined4 *)(iVar3 + 0x20);
    param_1 = (int *)iVar2;
    do {
      *(undefined2 *)(puVar9 + -8) = *(undefined2 *)(puVar10 + -0x14);
      *(undefined2 *)((int)puVar9 + -0x1e) = *(undefined2 *)((int)puVar10 + -0x4e);
      *(undefined2 *)(puVar9 + -7) = *(undefined2 *)(puVar10 + -0x13);
      *(undefined2 *)((int)puVar9 + -0x1a) = *(undefined2 *)((int)puVar10 + -0x4a);
      uVar5 = puVar10[-0xf];
      uVar6 = puVar10[-0xe];
      uVar7 = puVar10[-0xd];
      puVar9[-4] = puVar10[-0x10];
      puVar9[-3] = uVar5;
      puVar9[-2] = uVar6;
      puVar9[-1] = uVar7;
      puVar1 = ((undefined4 *)GEN_TOP(((iVar4 - iVar3) + (int)puVar9)));
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      *puVar9 = *puVar1;
      puVar9[1] = uVar5;
      puVar9[2] = uVar6;
      puVar9[3] = uVar7;
      uVar5 = puVar10[-7];
      uVar6 = puVar10[-6];
      uVar7 = puVar10[-5];
      puVar9[4] = puVar10[-8];
      puVar9[5] = uVar5;
      puVar9[6] = uVar6;
      puVar9[7] = uVar7;
      uVar5 = puVar10[-3];
      uVar6 = puVar10[-2];
      uVar7 = puVar10[-1];
      puVar9[8] = puVar10[-4];
      puVar9[9] = uVar5;
      puVar9[10] = uVar6;
      puVar9[0xb] = uVar7;
      uVar5 = puVar10[1];
      uVar6 = puVar10[2];
      uVar7 = puVar10[3];
      puVar9[0xc] = *puVar10;
      puVar9[0xd] = uVar5;
      puVar9[0xe] = uVar6;
      puVar9[0xf] = uVar7;
      uVar5 = puVar10[5];
      uVar6 = puVar10[6];
      uVar7 = puVar10[7];
      puVar9[0x10] = puVar10[4];
      puVar9[0x11] = uVar5;
      puVar9[0x12] = uVar6;
      puVar9[0x13] = uVar7;
      puVar10 = puVar10 + 0x1c;
      puVar9 = puVar9 + 0x1c;
      param_1 = (int *)((int)param_1 + -1);
    } while (param_1 != (int *)0x0);
  }
  return (uint)this;
}

/* ref: FUN_00d68810 */
uint F_00d68810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd68810u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  undefined2 * puVar9;
  int iVar10;
  int iVar11;
  
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[1]);
  if (((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) != (undefined *)0x0) {
    F_00d919e0(((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))));
  }
  if (*(undefined * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]));
  }
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = *puVar5;
  if ((undefined *)puVar5[1] != (undefined *)0x0) {
    F_00d919e0((undefined *)puVar5[1]);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != (undefined *)0x0) {
    F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = puVar5[1];
  uVar6 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  if ((int)(uVar6 & 0x3fffffff) < (int)puVar5[3]) {
    if (-1 < (int)uVar6) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),uVar6 << 6);
    }
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)(puVar5[3] << 6);
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined4 * PTR32 *)&gen_args[1]));
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = uVar6;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = (int)((int)(*(undefined4 * PTR32 *)&gen_args[1]) + ((int)(*(undefined4 * PTR32 *)&gen_args[1]) >> 0x1f & 0x3fU)) >> 6;
  }
  iVar11 = puVar5[3];
  (*(undefined4 * PTR32 *)&gen_args[1]) = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = iVar11;
  if (0 < iVar11) {
    puVar9 = (undefined2 *)(puVar5[2] + 2);
    puVar7 = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[1]) + 0x20)));
    iVar10 = puVar5[2] - (int)(*(undefined4 * PTR32 *)&gen_args[1]);
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)iVar11;
    do {
      *(undefined2 *)(puVar7 + -8) = puVar9[-1];
      *(undefined2 *)((int)puVar7 + -0x1e) = *puVar9;
      uVar2 = *(undefined4 *)(puVar9 + 9);
      uVar3 = *(undefined4 *)(puVar9 + 0xb);
      uVar4 = *(undefined4 *)(puVar9 + 0xd);
      puVar7[-4] = *(undefined4 *)(puVar9 + 7);
      puVar7[-3] = uVar2;
      puVar7[-2] = uVar3;
      puVar7[-1] = uVar4;
      puVar8 = (undefined4 *)(iVar10 + (int)puVar7);
      uVar2 = puVar8[1];
      uVar3 = puVar8[2];
      uVar4 = puVar8[3];
      *puVar7 = *puVar8;
      puVar7[1] = uVar2;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      uVar2 = *(undefined4 *)(puVar9 + 0x19);
      uVar3 = *(undefined4 *)(puVar9 + 0x1b);
      uVar4 = *(undefined4 *)(puVar9 + 0x1d);
      puVar7[4] = *(undefined4 *)(puVar9 + 0x17);
      puVar7[5] = uVar2;
      puVar7[6] = uVar3;
      puVar7[7] = uVar4;
      puVar9 = puVar9 + 0x20;
      puVar7 = puVar7 + 0x10;
      (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[1]) + -1)));
    } while ((*(undefined4 * PTR32 *)&gen_args[1]) != (undefined4 *)0x0);
  }
  uVar6 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) & 0x3fffffff;
  if ((int)uVar6 < (int)puVar5[6]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),uVar6 * 0x70);
    }
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)(puVar5[6] * 0x70);
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined4 * PTR32 *)&gen_args[1]));
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = uVar6;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = (int)(*(undefined4 * PTR32 *)&gen_args[1]) / 0x70;
  }
  iVar11 = puVar5[6];
  (*(undefined4 * PTR32 *)&gen_args[1]) = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = iVar11;
  if (0 < iVar11) {
    puVar7 = (undefined4 *)(puVar5[5] + 0x50);
    puVar8 = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[1]) + 0x20)));
    iVar10 = puVar5[5] - (int)(*(undefined4 * PTR32 *)&gen_args[1]);
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)iVar11;
    do {
      *(undefined2 *)(puVar8 + -8) = *(undefined2 *)(puVar7 + -0x14);
      *(undefined2 *)((int)puVar8 + -0x1e) = *(undefined2 *)((int)puVar7 + -0x4e);
      *(undefined2 *)(puVar8 + -7) = *(undefined2 *)(puVar7 + -0x13);
      *(undefined2 *)((int)puVar8 + -0x1a) = *(undefined2 *)((int)puVar7 + -0x4a);
      uVar2 = puVar7[-0xf];
      uVar3 = puVar7[-0xe];
      uVar4 = puVar7[-0xd];
      puVar8[-4] = puVar7[-0x10];
      puVar8[-3] = uVar2;
      puVar8[-2] = uVar3;
      puVar8[-1] = uVar4;
      puVar1 = (undefined4 *)(iVar10 + (int)puVar8);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar8 = *puVar1;
      puVar8[1] = uVar2;
      puVar8[2] = uVar3;
      puVar8[3] = uVar4;
      uVar2 = puVar7[-7];
      uVar3 = puVar7[-6];
      uVar4 = puVar7[-5];
      puVar8[4] = puVar7[-8];
      puVar8[5] = uVar2;
      puVar8[6] = uVar3;
      puVar8[7] = uVar4;
      uVar2 = puVar7[-3];
      uVar3 = puVar7[-2];
      uVar4 = puVar7[-1];
      puVar8[8] = puVar7[-4];
      puVar8[9] = uVar2;
      puVar8[10] = uVar3;
      puVar8[0xb] = uVar4;
      uVar2 = puVar7[1];
      uVar3 = puVar7[2];
      uVar4 = puVar7[3];
      puVar8[0xc] = *puVar7;
      puVar8[0xd] = uVar2;
      puVar8[0xe] = uVar3;
      puVar8[0xf] = uVar4;
      uVar2 = puVar7[5];
      uVar3 = puVar7[6];
      uVar4 = puVar7[7];
      puVar8[0x10] = puVar7[4];
      puVar8[0x11] = uVar2;
      puVar8[0x12] = uVar3;
      puVar8[0x13] = uVar4;
      puVar7 = puVar7 + 0x1c;
      puVar8 = puVar8 + 0x1c;
      (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[1]) + -1)));
    } while ((*(undefined4 * PTR32 *)&gen_args[1]) != (undefined4 *)0x0);
  }
  uVar6 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) & 0x3fffffff;
  if ((int)uVar6 < (int)puVar5[9]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28)))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))),uVar6 * 2);
    }
    (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)(puVar5[9] * 2);
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined4 * PTR32 *)&gen_args[1]));
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = uVar6;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = (int)(*(undefined4 * PTR32 *)&gen_args[1]) / 2;
  }
  (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)puVar5[9];
  puVar9 = *((undefined2 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = (*(undefined4 * PTR32 *)&gen_args[1]);
  if (0 < (int)(*(undefined4 * PTR32 *)&gen_args[1])) {
    iVar11 = puVar5[8] - (int)puVar9;
    do {
      *puVar9 = *(undefined2 *)(iVar11 + (int)puVar9);
      puVar9 = puVar9 + 1;
      (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[1]) + -1)));
    } while ((*(undefined4 * PTR32 *)&gen_args[1]) != (undefined4 *)0x0);
  }
  uVar2 = puVar5[0xd];
  uVar3 = puVar5[0xe];
  uVar4 = puVar5[0xf];
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = puVar5[0xc];
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = uVar4;
  uVar2 = puVar5[0x11];
  uVar3 = puVar5[0x12];
  uVar4 = puVar5[0x13];
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = puVar5[0x10];
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = uVar4;
  uVar2 = puVar5[0x15];
  uVar3 = puVar5[0x16];
  uVar4 = puVar5[0x17];
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = puVar5[0x14];
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = uVar4;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) = *(undefined1 *)(puVar5 + 0x18);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))) = puVar5[0x19];
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d68ab0 */
uint F_00d68ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd68ab0u, gen_a0, gen_a1, 0u, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)param_1[0xe] * param_2 + (uint)*param_1;
}

/* ref: FUN_00d68ad0 */
uint F_00d68ad0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd68ad0u, gen_a0, 0u, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  uint local_c;
  
  iVar1 = *(ushort *)(param_1 + 6) - 1;
  fVar3 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  uVar2 = *(ushort *)(param_1 + 6) - 2;
  fVar3 = fVar3 * ((float10)param_2 / (float10)*(float *)(param_1 + 8));
  local_c = (uint)(longlong)TRUNC(fVar3);
  if (uVar2 < local_c) {
    *param_4 = GEN_FLT_TO(*param_4, REFG(float, 0x1087f04));
    *param_3 = uVar2;
    return (uint)param_3;
  }
  fVar4 = (float10)(int)local_c;
  *param_3 = local_c;
  if ((int)local_c < 0) {
    fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar3 = fVar3 - fVar4;
  fVar5 = (float)fVar3;
  if (fVar3 < (float10)0) {
    *param_4 = 0.0;
    return local_c;
  }
  if (REFG(float, 0x1087f04) < fVar5) {
    fVar5 = REFG(float, 0x1087f04);
  }
  *param_4 = fVar5;
  return local_c;
}

/* ref: FUN_00d68b80 */
uint F_00d68b80(unsigned int gen_a0)
{
  GEN_ENTER(0xd68b80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)*(ushort *)(param_1 + 2);
}

/* ref: FUN_00d68b90 */
uint F_00d68b90(unsigned int gen_a0)
{
  GEN_ENTER(0xd68b90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)*(ushort *)(param_1 + 4);
}

/* ref: hkaQuantizedAnimation::vf5 */
unsigned int F_00d68ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd68ba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: hkaQuantizedAnimation::vf6 */
unsigned int F_00d68bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd68bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: FUN_00d68bc0 */
unsigned int F_00d68bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd68bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int iVar1;
  int iVar2;
  ushort uVar3;
  
  if (0 < param_5) {
    uVar3 = *param_3;
    iVar2 = 0;
    if (0 < param_5 + -1) {
      do {
        if (param_2 <= (int)(uint)uVar3) break;
        iVar1 = iVar2 * 4;
        iVar2 = iVar2 + 1;
        *(undefined4 *)(param_1 + (uint)uVar3 * 4) = *(undefined4 *)(param_4 + iVar1);
        uVar3 = param_3[iVar2];
      } while (iVar2 < param_5 + -1);
    }
    if ((int)(uint)uVar3 < param_2) {
      *(undefined4 *)(param_1 + (uint)uVar3 * 4) = *(undefined4 *)(param_4 + iVar2 * 4);
    }
  }
  return 0;
}

/* ref: FUN_00d68c10 */
uint F_00d68c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd68c10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  uint uVar1;
  
  uVar1 = F_00d87980(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: hkaQuantizedAnimation::vf8 */
uint F_00d68c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd68c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 4;
}

/* ref: hkaQuantizedAnimation::vf16 */
byte F_00d68c30(void)
{
  GEN_ENTER(0xd68c30u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: hkaQuantizedAnimation::vf17 */
uint F_00d68c40(unsigned int gen_a0)
{
  GEN_ENTER(0xd68c40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38);
}

/* ref: hkaQuantizedAnimation::vf18 */
uint F_00d68c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd68c50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x38) = param_2;
  return param_2;
}

/* ref: hkaQuantizedAnimation::vf7 */
uint F_00d68c60(unsigned int gen_a0)
{
  GEN_ENTER(0xd68c60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*((ushort *)GEN_TOP((*(int *)(in_ecx + 0x28) + 6)));
}

/* ref: FUN_00d68c70 */
unsigned int F_00d68c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd68c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  uint param_5 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  undefined4 * puVar9;
  ushort * puVar10;
  int iVar11;
  
  iVar11 = 0;
  if (0 < (int)param_5) {
    (*(int *)(gen_frame + 0x40)) = (param_5 & 0xfffffffc) - 4;
    (*(int *)(gen_frame + 0x48)) = 0;
    if (0 < (*(int *)(gen_frame + 0x40))) {
      uVar6 = *(ushort *)(param_3 + 6);
      (*(int *)(gen_frame + 0x4c)) = param_4;
      puVar10 = (ushort *)(param_3 + 4);
      do {
        (*(uint *)(gen_frame + 0x44)) = (uint)uVar6;
        if (param_2 <= (int)(uint)uVar6) break;
        F_00d85b30(((undefined4 *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0x0)) + 4,&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x30)),(*(int *)(gen_frame + 0x4c)));
        (*(int *)(gen_frame + 0x48)) = (*(int *)(gen_frame + 0x48)) + 0xc;
        (*(int *)(gen_frame + 0x4c)) = (*(int *)(gen_frame + 0x4c)) + 0x18;
        puVar9 = (undefined4 *)(param_1 + (uint)puVar10[-2] * 0x10);
        *puVar9 = ((undefined4 *)(gen_frame + 0x0))[0];
        puVar9[1] = ((undefined4 *)(gen_frame + 0x0))[1];
        puVar9[2] = ((undefined4 *)(gen_frame + 0x0))[2];
        puVar9[3] = ((undefined4 *)(gen_frame + 0x0))[3];
        puVar9 = (undefined4 *)(param_1 + (uint)puVar10[-1] * 0x10);
        *puVar9 = ((undefined4 *)(gen_frame + 0x0))[4];
        puVar9[1] = ((undefined4 *)(gen_frame + 0x0))[5];
        puVar9[2] = ((undefined4 *)(gen_frame + 0x0))[6];
        puVar9[3] = (*(undefined4 *)(gen_frame + 0x1c));
        puVar9 = (undefined4 *)(param_1 + (uint)*puVar10 * 0x10);
        *puVar9 = (*(undefined4 *)(gen_frame + 0x20));
        puVar9[1] = (*(undefined4 *)(gen_frame + 0x24));
        puVar9[2] = (*(undefined4 *)(gen_frame + 0x28));
        puVar9[3] = (*(undefined4 *)(gen_frame + 0x2c));
        iVar11 = iVar11 + 4;
        puVar9 = (undefined4 *)(param_1 + (*(uint *)(gen_frame + 0x44)) * 0x10);
        *puVar9 = (*(undefined4 *)(gen_frame + 0x30));
        puVar9[1] = (*(undefined4 *)(gen_frame + 0x34));
        puVar9[2] = (*(undefined4 *)(gen_frame + 0x38));
        puVar9[3] = (*(undefined4 *)(gen_frame + 0x3c));
        uVar6 = puVar10[5];
        puVar10 = puVar10 + 4;
      } while (iVar11 < (*(int *)(gen_frame + 0x40)));
    }
    if (iVar11 < (int)param_5) {
      (*(int *)(gen_frame + 0x48)) = param_4 + (*(int *)(gen_frame + 0x48)) * 2;
      do {
        F_00d85b30(((undefined4 *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0x0)) + 4,&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x30)),(*(int *)(gen_frame + 0x48)));
        iVar8 = 0;
        puVar9 = ((undefined4 *)(gen_frame + 0x0));
        do {
          if ((int)param_5 <= iVar11) break;
          uVar7 = (uint)*(ushort *)(param_3 + iVar11 * 2);
          if (param_2 <= (int)uVar7) {
            return 0;
          }
          uVar2 = *puVar9;
          uVar3 = puVar9[1];
          uVar4 = puVar9[2];
          uVar5 = puVar9[3];
          iVar8 = iVar8 + 1;
          puVar9 = puVar9 + 4;
          iVar11 = iVar11 + 1;
          puVar1 = (undefined4 *)(param_1 + uVar7 * 0x10);
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
        } while (iVar8 < 4);
        (*(int *)(gen_frame + 0x48)) = (*(int *)(gen_frame + 0x48)) + 0x18;
      } while (iVar11 < (int)param_5);
    }
  }
  return 0;
}

/* ref: FUN_00d68da0 */
unsigned int F_00d68da0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, float gen_a15, unsigned int gen_a16, float gen_a17)
{
  GEN_ENTER(0xd68da0u, gen_a0, 0u, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  int param_8 = (int)gen_a7;
  int param_9 = (int)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  undefined4 param_12 = (undefined4)gen_a11;
  undefined4 param_13 = (undefined4)gen_a12;
  undefined4 param_14 = (undefined4)gen_a13;
  undefined4 param_15 = (undefined4)gen_a14;
  float param_16 = (float)gen_a15;
  undefined4 param_17 = (undefined4)gen_a16;
  float param_18 = (float)gen_a17;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte * pbVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar4 = *(undefined4 * PTR32 *)((int)pvVar3 + 4);
  if (puVar4 < *(undefined4 * PTR32 *)((int)pvVar3 + 0xc)) {
    *puVar4 = "TtQuantizedSampleFullPose";
    uVar2 = rdtsc();
    (*(uint *)(gen_frame + 0x3c)) = (int)uVar2;
    puVar4[1] = (int)uVar2;
    *(undefined4 * PTR32 *)((int)pvVar3 + 4) = puVar4 + 3;
  }
  ((float *)(gen_frame + 0x18))[0] = param_2;
  fVar7 = REFG(float, 0x1087f04) - param_18;
  ((float *)(gen_frame + 0x18))[2] = fVar7;
  ((float *)(gen_frame + 0x18))[1] = param_3;
  (*(int *)(gen_frame + 0x2c)) = 0;
  do {
    if ((*(int *)(gen_frame + 0x2c)) == 0) {
      if (param_16 <= param_18) {
        F_00d837f0(param_6,param_7,param_10,param_4,param_11,param_5);
        (*(int *)(gen_frame + 0x40)) = 0;
        (*(undefined4 *)(gen_frame + 0x4c)) = param_6;
        (*(undefined4 *)(gen_frame + 0x48)) = param_6;
        (*(undefined4 *)(gen_frame + 0x44)) = param_7;
LAB_00d68ed7: ;
        (*(int *)(gen_frame + 0x34)) = param_4 * 3;
        (*(float *)(gen_frame + 0x38)) = gen_bits2f((uint)*(ushort *)(param_1 + 0x22));
        iVar6 = (uint)*(ushort *)(param_1 + 0x10) + (uint)*(ushort *)(param_1 + 0xc);
        (*(uint *)(gen_frame + 0x3c)) = (uint)*(ushort *)(param_1 + 0x1e);
        (*(int *)(gen_frame + 0x28)) = param_4 * 0xc;
        (*(undefined4 *)(gen_frame + 0x48)) = (*(undefined4 *)(gen_frame + 0x4c));
        F_00d68bc0((*(undefined4 *)(gen_frame + 0x4c)),param_4 * 0xc,(uint)*(ushort *)(param_1 + 0x1e) + param_1,
                     (uint)*(ushort *)(param_1 + 0x22) + param_1,iVar6);
        (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x3c)) + iVar6 * 2;
        iVar6 = (int)gen_fl2bits((*(float *)(gen_frame + 0x38))) + iVar6 * 4;
        F_00d68c70((*(undefined4 *)(gen_frame + 0x48)),(*(int *)(gen_frame + 0x34)),(*(uint *)(gen_frame + 0x3c)) + param_1,iVar6 + param_1,
                     (uint)*(ushort *)(param_1 + 0xe));
        F_00d68bc0((*(undefined4 *)(gen_frame + 0x44)),param_5,(*(uint *)(gen_frame + 0x3c)) + (uint)*(ushort *)(param_1 + 0xe) * 2 + param_1,
                     (iVar6 + 0xf + (uint)*(ushort *)(param_1 + 0xe) * 6 & 0xfffffff0) + param_1,
                     (uint)*(ushort *)(param_1 + 0x12));
        (*(uint *)(gen_frame + 0x30)) = (uint)*(ushort *)(param_1 + 0x26);
        iVar6 = (uint)*(ushort *)(param_1 + 0x18) + (uint)*(ushort *)(param_1 + 0x14);
        (*(float *)(gen_frame + 0x38)) = ((float *)(gen_frame + 0x18))[(*(int *)(gen_frame + 0x40))];
        (*(uint *)(gen_frame + 0x24)) = (uint)*(ushort *)(param_1 + 0x24);
        (*(uint *)(gen_frame + 0x3c)) = (uint)*(ushort *)(param_1 + 0x20);
        F_00d68c10((*(undefined4 *)(gen_frame + 0x4c)),(*(int *)(gen_frame + 0x28)),(uint)*(ushort *)(param_1 + 0x20) + param_1,
                     (uint)*(ushort *)(param_1 + 0x24) + param_1,
                     (uint)*(ushort *)(param_1 + 0x26) + param_1,
                     (undefined4)gen_fl2bits(((float *)(gen_frame + 0x18))[(*(int *)(gen_frame + 0x40))]),iVar6);
        (*(int *)(gen_frame + 0x28)) = iVar6 * 2;
        (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x3c)) + (*(int *)(gen_frame + 0x28));
        F_00d68c70((*(undefined4 *)(gen_frame + 0x48)),(*(int *)(gen_frame + 0x34)),(*(uint *)(gen_frame + 0x3c)) + param_1,(int)gen_fl2bits((*(float *)(gen_frame + 0x38))) + (*(int *)(gen_frame + 0x28)),
                     (uint)*(ushort *)(param_1 + 0x16));
        F_00d68c10((*(undefined4 *)(gen_frame + 0x44)),param_5,(uint)*(ushort *)(param_1 + 0x16) * 2 + (*(uint *)(gen_frame + 0x3c)) + param_1,
                     ((*(uint *)(gen_frame + 0x24)) + 0xf + iVar6 * 4 & 0xfffffff0) + param_1,
                     ((*(uint *)(gen_frame + 0x30)) + 0xf + iVar6 * 4 & 0xfffffff0) + param_1,
                     (int)gen_fl2bits((*(float *)(gen_frame + 0x38))) + (uint)*(ushort *)(param_1 + 0x16) * 6 + (*(int *)(gen_frame + 0x28)),
                     (uint)*(ushort *)(param_1 + 0x1a));
        fVar7 = ((float *)(gen_frame + 0x18))[2];
      }
      else if (!(fVar7 <= param_16)) {
        F_00d837f0(param_12,param_14,param_10,param_4,param_11,param_5);
        (*(int *)(gen_frame + 0x40)) = 0;
        (*(undefined4 *)(gen_frame + 0x44)) = param_14;
        (*(undefined4 *)(gen_frame + 0x4c)) = param_12;
        goto LAB_00d68ece;
      }
    }
    else if (!(param_16 <= param_18)) {
      if (fVar7 <= param_16) {
        F_00d837f0(param_6,param_7,param_10,param_4,param_11,param_5);
        (*(undefined4 *)(gen_frame + 0x44)) = param_7;
        (*(undefined4 *)(gen_frame + 0x4c)) = param_6;
      }
      else {
        F_00d837f0(param_13,param_15,param_10,param_4,param_11,param_5);
        (*(undefined4 *)(gen_frame + 0x44)) = param_15;
        (*(undefined4 *)(gen_frame + 0x4c)) = param_13;
      }
      (*(int *)(gen_frame + 0x40)) = 1;
LAB_00d68ece: ;
      (*(undefined4 *)(gen_frame + 0x48)) = (*(undefined4 *)(gen_frame + 0x4c));
      goto LAB_00d68ed7;
    }
    (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + 1;
    if (1 < (*(int *)(gen_frame + 0x2c))) {
      if ((!(param_16 <= param_18)) && (!(fVar7 <= param_16))) {
        (*(float *)(gen_frame + 0x0)) = param_16;
        (*(float *)(gen_frame + 0x4)) = param_16;
        (*(float *)(gen_frame + 0x8)) = param_16;
        (*(float *)(gen_frame + 0xc)) = param_16;
        (*(float *)(gen_frame + 0x10)) = param_16;
        (*(float *)(gen_frame + 0x14)) = param_16;
        ((float *)(gen_frame + 0x18))[0] = param_16;
        ((float *)(gen_frame + 0x18))[1] = param_16;
        F_00d49f00(param_6,param_12,param_13,&(*(float *)(gen_frame + 0x10)),param_4,0,(uint)((char)param_17 != '\0'));
        F_00d49310(param_7,param_14,param_15,&(*(float *)(gen_frame + 0x0)),param_5,0);
      }
      iVar5 = param_1 + 0x28;
      iVar6 = 0;
      if (3 < param_4) {
        puVar4 = (undefined4 *)(param_8 + 8);
        do {
          pbVar1 = (byte *)(iVar5 + iVar6);
          iVar6 = iVar6 + 4;
          puVar4[-2] = *(undefined4 *)(&REFG(undefined, 0x1350e80) + (uint)*pbVar1 * 4);
          puVar4[-1] = *(undefined4 *)(&REFG(undefined, 0x1350e80) + (uint)*(byte *)(param_1 + 0x25 + iVar6) * 4);
          *puVar4 = *(undefined4 *)(&REFG(undefined, 0x1350e80) + (uint)*(byte *)(param_1 + 0x26 + iVar6) * 4);
          puVar4[1] = *(undefined4 *)(&REFG(undefined, 0x1350e80) + (uint)*(byte *)(param_1 + 0x27 + iVar6) * 4);
          puVar4 = puVar4 + 4;
        } while (iVar6 < param_4 + -3);
      }
      while (iVar6 < param_4) {
        pbVar1 = (byte *)(iVar6 + iVar5);
        iVar6 = iVar6 + 1;
        *(undefined4 *)(param_8 + -4 + iVar6 * 4) =
             *(undefined4 *)(&REFG(undefined, 0x1350e80) + (uint)*pbVar1 * 4);
      }
      iVar5 = iVar5 + param_4;
      iVar6 = 0;
      if (3 < param_5) {
        puVar4 = (undefined4 *)(param_9 + 8);
        do {
          pbVar1 = (byte *)(iVar5 + iVar6);
          iVar6 = iVar6 + 4;
          puVar4[-2] = *(undefined4 *)(&REFG(undefined, 0x1350e80) + (uint)*pbVar1 * 4);
          puVar4[-1] = *(undefined4 *)(&REFG(undefined, 0x1350e80) + (uint)*(byte *)(iVar5 + -3 + iVar6) * 4);
          *puVar4 = *(undefined4 *)(&REFG(undefined, 0x1350e80) + (uint)*(byte *)(iVar5 + -2 + iVar6) * 4);
          puVar4[1] = *(undefined4 *)(&REFG(undefined, 0x1350e80) + (uint)*(byte *)(iVar5 + -1 + iVar6) * 4);
          puVar4 = puVar4 + 4;
        } while (iVar6 < param_5 + -3);
      }
      while (iVar6 < param_5) {
        pbVar1 = (byte *)(iVar6 + iVar5);
        iVar6 = iVar6 + 1;
        *(undefined4 *)(param_9 + -4 + iVar6 * 4) =
             *(undefined4 *)(&REFG(undefined, 0x1350e80) + (uint)*pbVar1 * 4);
      }
      pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
      puVar4 = *(undefined4 * PTR32 *)((int)pvVar3 + 4);
      if (puVar4 < *(undefined4 * PTR32 *)((int)pvVar3 + 0xc)) {
        *puVar4 = &REFG(undefined, 0x1136cb0);
        uVar2 = rdtsc();
        (*(int *)(gen_frame + 0x2c)) = (int)uVar2;
        puVar4[1] = (int)uVar2;
        *(undefined4 * PTR32 *)((int)pvVar3 + 4) = puVar4 + 3;
      }
      return 0;
    }
  } while( true );
}

/* ref: hkaQuantizedAnimation::vf10 */
uint F_00d691e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd691e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (**(ushort * PTR32 *)(this + 0x28) + 0xf & 0xfffffff0) + 0x40 +
         ((*(ushort * PTR32 *)(this + 0x28))[0xe] + 0xf & 0xfffffff0) * 2;
}

/* ref: hkaQuantizedAnimation::vf11 */
uint F_00d69200(unsigned int gen_a0)
{
  GEN_ENTER(0xd69200u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (*((int *)GEN_TOP((*(int *)(in_ecx + 0x38) + 0x40))) + 3U & 0xfffffffc) * 0x10 +
         (*((int *)GEN_TOP((*(int *)(in_ecx + 0x38) + 0x1c))) + 3U & 0xfffffffc) * 0x94;
}

/* ref: FUN_00d69230 */
unsigned int F_00d69230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, float gen_a13, unsigned int gen_a14, float gen_a15)
{
  GEN_ENTER(0xd69230u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  undefined4 param_12 = (undefined4)gen_a11;
  undefined4 param_13 = (undefined4)gen_a12;
  float param_14 = (float)gen_a13;
  undefined4 param_15 = (undefined4)gen_a14;
  float param_16 = (float)gen_a15;
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  uint local_c;
  
  iVar1 = *(ushort *)(param_1 + 6) - 1;
  fVar3 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  uVar2 = *(ushort *)(param_1 + 6) - 2;
  fVar3 = fVar3 * ((float10)param_14 / (float10)*(float *)(param_1 + 8));
  local_c = (uint)(longlong)TRUNC(fVar3);
  fVar5 = REFG(float, 0x1087f04);
  if (local_c <= uVar2) {
    fVar4 = (float10)(int)local_c;
    if ((int)local_c < 0) {
      fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar3 = fVar3 - fVar4;
    fVar5 = (float)fVar3;
    uVar2 = local_c;
    if (fVar3 < (float10)0) {
      fVar5 = 0.0;
    }
    else if (REFG(float, 0x1087f04) < fVar5) {
      fVar5 = REFG(float, 0x1087f04);
    }
  }
  F_00d68da0(param_1,GEN_TOF(*(ushort *)(param_1 + 0x1c) * uVar2 + (uint)*(ushort *)param_1 + param_1),GEN_TOF((uVar2 + 1) * (uint)*(ushort *)(param_1 + 0x1c) + (uint)*(ushort *)param_1 + param_1),
               param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
               param_12,param_13,fVar5,param_15,param_16);
  return 0;
}

/* ref: hkaQuantizedAnimation::vf9 */
unsigned int F_00d69330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd69330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  ushort uVar1;
  ushort * puVar2;
  uint uVar3;
  
  puVar2 = *(ushort * PTR32 *)(this + 0x28);
  uVar1 = *puVar2;
  uVar3 = (uint)puVar2[0xe];
  *param_3 = this;
  param_3[1] = 0x3c;
  param_3[3] = (uint)*puVar2;
  param_3[2] = puVar2;
  param_3[5] = uVar3;
  param_3[4] = (int)puVar2 + uVar3 * param_1 + (uint)uVar1;
  param_3[7] = uVar3;
  param_3[6] = (int)puVar2 + (param_1 + 1) * uVar3 + (uint)uVar1;
  return 0;
}

/* ref: FUN_00d69380 */
unsigned int F_00d69380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, float gen_a11, unsigned int gen_a12, float gen_a13)
{
  GEN_ENTER(0xd69380u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  float param_12 = (float)gen_a11;
  undefined4 param_13 = (undefined4)gen_a12;
  float param_14 = (float)gen_a13;
  F_00d69230(*(uint *)(param_1 + 0x28),param_2,param_3,param_4,param_5,param_6,param_7,
               *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x38) + 0x24))),
               *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x38) + 0x30))),param_8,param_9,param_10,param_11,
               param_12,param_13,param_14);
  return 0;
}

/* ref: FUN_00d693e0 */
uint F_00d693e0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xd693e0u, gen_a0, 0u, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int param_7 = (int)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 * param_9 = (undefined4 *)(uintptr_t)gen_a8;
  undefined4 * param_10 = (undefined4 *)(uintptr_t)gen_a9;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  LPVOID pvVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float * pfVar15;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_20;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  float * local_8;
  
  iVar1 = *(int *)(param_7 + 8);
  uVar2 = *(undefined4 *)(param_7 + 0x10);
  uVar3 = *(undefined4 *)(param_7 + 0x18);
  uVar11 = (uint)*(ushort *)(iVar1 + 2);
  uVar13 = (uint)*(ushort *)(iVar1 + 4);
  uVar12 = uVar11 + 3 & 0xfffffffc;
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar9 = uVar12 * 0x30 + 0x7f & 0xffffff80;
  local_20 = *(uint *)((int)pvVar5 + 0xc);
  if ((*(int *)((int)pvVar5 + 8) < (int)uVar9) || (*(uint *)((int)pvVar5 + 0x10) < uVar9 + local_20)
     ) {
    local_20 = F_00d94390(pvVar5,uVar9);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = uVar9 + local_20;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_34 = *(uint *)((int)pvVar5 + 0xc);
  if ((*(int *)((int)pvVar5 + 8) < (int)uVar9) || (*(uint *)((int)pvVar5 + 0x10) < uVar9 + local_34)
     ) {
    local_34 = F_00d94390(pvVar5,uVar9);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = uVar9 + local_34;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_30 = *(uint *)((int)pvVar5 + 0xc);
  if ((*(int *)((int)pvVar5 + 8) < (int)uVar9) || (*(uint *)((int)pvVar5 + 0x10) < uVar9 + local_30)
     ) {
    local_30 = F_00d94390(pvVar5,uVar9);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = uVar9 + local_30;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_18 = *(uint *)((int)pvVar5 + 0xc);
  uVar12 = uVar12 * 4 + 0x7f & 0xffffff80;
  if ((*(int *)((int)pvVar5 + 8) < (int)uVar12) ||
     (*(uint *)((int)pvVar5 + 0x10) < uVar12 + local_18)) {
    local_18 = F_00d94390(pvVar5,uVar12);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = uVar12 + local_18;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_14 = *(uint *)((int)pvVar5 + 0xc);
  uVar14 = (uVar13 + 3 & 0xfffffffc) * 4 + 0x7f & 0xffffff80;
  if ((*(int *)((int)pvVar5 + 8) < (int)uVar14) ||
     (*(uint *)((int)pvVar5 + 0x10) < uVar14 + local_14)) {
    local_14 = F_00d94390(pvVar5,uVar14);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = uVar14 + local_14;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_2c = *(uint *)((int)pvVar5 + 0xc);
  if ((*(int *)((int)pvVar5 + 8) < (int)uVar14) ||
     (*(uint *)((int)pvVar5 + 0x10) < uVar14 + local_2c)) {
    local_2c = F_00d94390(pvVar5,uVar14);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = uVar14 + local_2c;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_28 = *(uint *)((int)pvVar5 + 0xc);
  if ((*(int *)((int)pvVar5 + 8) < (int)uVar14) ||
     (*(uint *)((int)pvVar5 + 0x10) < uVar14 + local_28)) {
    local_28 = F_00d94390(pvVar5,uVar14);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = uVar14 + local_28;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_10 = *(uint *)((int)pvVar5 + 0xc);
  if ((*(int *)((int)pvVar5 + 8) < (int)uVar14) ||
     (*(uint *)((int)pvVar5 + 0x10) < uVar14 + local_10)) {
    local_10 = F_00d94390(pvVar5,uVar14);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = uVar14 + local_10;
  }
  F_00d68da0(iVar1,uVar2,uVar3,uVar11,uVar13,local_20,local_14,local_18,local_10,param_5,param_6,
               local_34,local_30,local_2c,local_28,param_2,1,REFG(float, 0x10947f8));
  uVar10 = 0;
  local_c = 0;
  if (3 < uVar11) {
    local_8 = (float *)(local_18 + 8);
    puVar6 = (undefined4 *)(local_20 + 0x50);
    do {
      if (param_3 <= uVar10) goto LAB_00d69797;
      puVar8 = param_9;
      if (0.0 < local_8[-2]) {
        uVar2 = puVar6[-0x13];
        uVar3 = puVar6[-0x12];
        uVar4 = puVar6[-0x11];
        *param_9 = puVar6[-0x14];
        param_9[1] = uVar2;
        param_9[2] = uVar3;
        param_9[3] = uVar4;
        uVar2 = puVar6[-0xf];
        uVar3 = puVar6[-0xe];
        uVar4 = puVar6[-0xd];
        param_9[4] = puVar6[-0x10];
        param_9[5] = uVar2;
        param_9[6] = uVar3;
        param_9[7] = uVar4;
        uVar2 = puVar6[-0xb];
        uVar3 = puVar6[-10];
        uVar4 = puVar6[-9];
        puVar8 = param_9 + 0xc;
        param_9[8] = puVar6[-0xc];
        param_9[9] = uVar2;
        param_9[10] = uVar3;
        param_9[0xb] = uVar4;
        uVar10 = uVar10 + 1;
      }
      if (param_3 <= uVar10) goto LAB_00d69797;
      puVar7 = puVar8;
      if (0.0 < local_8[-1]) {
        uVar2 = puVar6[-7];
        uVar3 = puVar6[-6];
        uVar4 = puVar6[-5];
        *puVar8 = puVar6[-8];
        puVar8[1] = uVar2;
        puVar8[2] = uVar3;
        puVar8[3] = uVar4;
        uVar2 = puVar6[-3];
        uVar3 = puVar6[-2];
        uVar4 = puVar6[-1];
        puVar8[4] = puVar6[-4];
        puVar8[5] = uVar2;
        puVar8[6] = uVar3;
        puVar8[7] = uVar4;
        uVar2 = puVar6[1];
        uVar3 = puVar6[2];
        uVar4 = puVar6[3];
        puVar7 = puVar8 + 0xc;
        puVar8[8] = *puVar6;
        puVar8[9] = uVar2;
        puVar8[10] = uVar3;
        puVar8[0xb] = uVar4;
        uVar10 = uVar10 + 1;
      }
      if (param_3 <= uVar10) goto LAB_00d69797;
      puVar8 = puVar7;
      if (0.0 < *local_8) {
        uVar2 = puVar6[5];
        uVar3 = puVar6[6];
        uVar4 = puVar6[7];
        *puVar7 = puVar6[4];
        puVar7[1] = uVar2;
        puVar7[2] = uVar3;
        puVar7[3] = uVar4;
        uVar2 = puVar6[9];
        uVar3 = puVar6[10];
        uVar4 = puVar6[0xb];
        puVar7[4] = puVar6[8];
        puVar7[5] = uVar2;
        puVar7[6] = uVar3;
        puVar7[7] = uVar4;
        uVar2 = puVar6[0xd];
        uVar3 = puVar6[0xe];
        uVar4 = puVar6[0xf];
        puVar8 = puVar7 + 0xc;
        puVar7[8] = puVar6[0xc];
        puVar7[9] = uVar2;
        puVar7[10] = uVar3;
        puVar7[0xb] = uVar4;
        uVar10 = uVar10 + 1;
      }
      if (param_3 <= uVar10) goto LAB_00d69797;
      param_9 = puVar8;
      if (0.0 < local_8[1]) {
        uVar2 = puVar6[0x11];
        uVar3 = puVar6[0x12];
        uVar4 = puVar6[0x13];
        *puVar8 = puVar6[0x10];
        puVar8[1] = uVar2;
        puVar8[2] = uVar3;
        puVar8[3] = uVar4;
        uVar2 = puVar6[0x15];
        uVar3 = puVar6[0x16];
        uVar4 = puVar6[0x17];
        puVar8[4] = puVar6[0x14];
        puVar8[5] = uVar2;
        puVar8[6] = uVar3;
        puVar8[7] = uVar4;
        uVar2 = puVar6[0x19];
        uVar3 = puVar6[0x1a];
        uVar4 = puVar6[0x1b];
        param_9 = puVar8 + 0xc;
        puVar8[8] = puVar6[0x18];
        puVar8[9] = uVar2;
        puVar8[10] = uVar3;
        puVar8[0xb] = uVar4;
        uVar10 = uVar10 + 1;
      }
      local_c = local_c + 4;
      local_8 = local_8 + 4;
      puVar6 = puVar6 + 0x30;
    } while (local_c < uVar11 - 3);
  }
  if (local_c < uVar11) {
    puVar6 = (undefined4 *)(local_20 + 0x20 + local_c * 0x30);
    do {
      if (param_3 <= uVar10) break;
      puVar8 = param_9;
      if (0.0 < *(float *)(local_18 + local_c * 4)) {
        uVar2 = puVar6[-7];
        uVar3 = puVar6[-6];
        uVar4 = puVar6[-5];
        *param_9 = puVar6[-8];
        param_9[1] = uVar2;
        param_9[2] = uVar3;
        param_9[3] = uVar4;
        uVar2 = puVar6[-3];
        uVar3 = puVar6[-2];
        uVar4 = puVar6[-1];
        param_9[4] = puVar6[-4];
        param_9[5] = uVar2;
        param_9[6] = uVar3;
        param_9[7] = uVar4;
        uVar2 = puVar6[1];
        uVar3 = puVar6[2];
        uVar4 = puVar6[3];
        puVar8 = param_9 + 0xc;
        param_9[8] = *puVar6;
        param_9[9] = uVar2;
        param_9[10] = uVar3;
        param_9[0xb] = uVar4;
        uVar10 = uVar10 + 1;
      }
      local_c = local_c + 1;
      puVar6 = puVar6 + 0xc;
      param_9 = puVar8;
    } while (local_c < uVar11);
  }
LAB_00d69797: ;
  uVar11 = 0;
  local_c = 0;
  if (3 < uVar13) {
    pfVar15 = (float *)(local_10 + 0xc);
    puVar6 = (undefined4 *)(local_14 + 4);
    do {
      if (param_4 <= uVar11) goto LAB_00d69894;
      puVar8 = param_10;
      if (0.0 < pfVar15[-3]) {
        puVar8 = param_10 + 1;
        *param_10 = puVar6[-1];
        uVar11 = uVar11 + 1;
      }
      if (param_4 <= uVar11) goto LAB_00d69894;
      puVar7 = puVar8;
      if (0.0 < *((float *)GEN_TOP(((local_10 - local_14) + (int)puVar6)))) {
        puVar7 = puVar8 + 1;
        *puVar8 = *puVar6;
        uVar11 = uVar11 + 1;
      }
      if (param_4 <= uVar11) goto LAB_00d69894;
      puVar8 = puVar7;
      if (0.0 < pfVar15[-1]) {
        puVar8 = puVar7 + 1;
        *puVar7 = puVar6[1];
        uVar11 = uVar11 + 1;
      }
      if (param_4 <= uVar11) goto LAB_00d69894;
      param_10 = puVar8;
      if (0.0 < *pfVar15) {
        param_10 = puVar8 + 1;
        *puVar8 = puVar6[2];
        uVar11 = uVar11 + 1;
      }
      local_c = local_c + 4;
      puVar6 = puVar6 + 4;
      pfVar15 = pfVar15 + 4;
    } while (local_c < uVar13 - 3);
  }
  if (local_c < uVar13) {
    puVar6 = (undefined4 *)(local_14 + local_c * 4);
    do {
      if (param_4 <= uVar11) break;
      puVar8 = param_10;
      if (0.0 < *((float *)GEN_TOP(((int)puVar6 + (local_10 - local_14))))) {
        puVar8 = param_10 + 1;
        *param_10 = *puVar6;
        uVar11 = uVar11 + 1;
      }
      local_c = local_c + 1;
      puVar6 = puVar6 + 1;
      param_10 = puVar8;
    } while (local_c < uVar13);
  }
LAB_00d69894: ;
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar5 + 8) < (int)uVar14) ||
      (uVar14 + local_10 != *(int *)((int)pvVar5 + 0xc))) ||
     (*(uint *)((int)pvVar5 + 0x14) == local_10)) {
    F_00d945c0(pvVar5,local_10,uVar14);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = local_10;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar5 + 8) < (int)uVar14) ||
      (uVar14 + local_28 != *(int *)((int)pvVar5 + 0xc))) ||
     (*(uint *)((int)pvVar5 + 0x14) == local_28)) {
    F_00d945c0(pvVar5,local_28,uVar14);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = local_28;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar5 + 8) < (int)uVar14) ||
      (uVar14 + local_2c != *(int *)((int)pvVar5 + 0xc))) ||
     (*(uint *)((int)pvVar5 + 0x14) == local_2c)) {
    F_00d945c0(pvVar5,local_2c,uVar14);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = local_2c;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar5 + 8) < (int)uVar14) ||
      (uVar14 + local_14 != *(int *)((int)pvVar5 + 0xc))) ||
     (*(uint *)((int)pvVar5 + 0x14) == local_14)) {
    F_00d945c0(pvVar5,local_14,uVar14);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = local_14;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar5 + 8) < (int)uVar12) ||
      (uVar12 + local_18 != *(int *)((int)pvVar5 + 0xc))) ||
     (*(uint *)((int)pvVar5 + 0x14) == local_18)) {
    F_00d945c0(pvVar5,local_18,uVar12);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = local_18;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar5 + 8) < (int)uVar9) || (uVar9 + local_30 != *(int *)((int)pvVar5 + 0xc))
      ) || (*(uint *)((int)pvVar5 + 0x14) == local_30)) {
    F_00d945c0(pvVar5,local_30,uVar9);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = local_30;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar5 + 8) < (int)uVar9) || (uVar9 + local_34 != *(int *)((int)pvVar5 + 0xc))
      ) || (*(uint *)((int)pvVar5 + 0x14) == local_34)) {
    F_00d945c0(pvVar5,local_34,uVar9);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = local_34;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((((int)uVar9 <= *(int *)((int)pvVar5 + 8)) &&
      (uVar9 + local_20 == *(int *)((int)pvVar5 + 0xc))) &&
     (*(uint *)((int)pvVar5 + 0x14) != local_20)) {
    *(uint *)((int)pvVar5 + 0xc) = local_20;
    return (uint)pvVar5;
  }
  uVar9 = F_00d945c0(pvVar5,local_20,uVar9);
  return uVar9;
}

/* ref: FUN_00d69a30 */
uint F_00d69a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, float gen_a9, unsigned int gen_a10, float gen_a11)
{
  GEN_ENTER(0xd69a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  float param_10 = (float)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  float param_12 = (float)gen_a11;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(ushort *)(param_1 + 2) + 3 & 0xfffffffc;
  if (uVar1 == 0) {
    (*(uint *)(gen_frame + 0x20)) = 0;
LAB_00d69a89: ;
    (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  }
  else {
    (*(int *)(gen_frame + 0x1c)) = uVar1 * 0x30;
    (*(uint *)(gen_frame + 0x20)) = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x1c)));
    (*(uint *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x1c)) / 0x30;
    if ((*(uint *)(gen_frame + 0x8)) == 0) goto LAB_00d69a89;
  }
  uVar1 = *(ushort *)(param_1 + 2) + 3 & 0xfffffffc;
  if (uVar1 == 0) {
    (*(uint *)(gen_frame + 0x24)) = 0;
LAB_00d69ada: ;
    (*(uint *)(gen_frame + 0xc)) = 0x80000000;
  }
  else {
    (*(int *)(gen_frame + 0x18)) = uVar1 * 0x30;
    (*(uint *)(gen_frame + 0x24)) = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x18)));
    (*(uint *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0x18)) / 0x30;
    if ((*(uint *)(gen_frame + 0xc)) == 0) goto LAB_00d69ada;
  }
  uVar1 = *(ushort *)(param_1 + 4) + 3 & 0xfffffffc;
  if (uVar1 == 0) {
    (*(uint *)(gen_frame + 0x28)) = 0;
LAB_00d69b23: ;
    iVar2 = ((int)0x80000000);
  }
  else {
    (*(int *)(gen_frame + 0x14)) = uVar1 * 4;
    (*(uint *)(gen_frame + 0x28)) = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x14)));
    iVar2 = (int)((*(int *)(gen_frame + 0x14)) + ((*(int *)(gen_frame + 0x14)) >> 0x1f & 3U)) >> 2;
    if (iVar2 == 0) goto LAB_00d69b23;
  }
  uVar1 = *(ushort *)(param_1 + 4) + 3 & 0xfffffffc;
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    (*(int *)(gen_frame + 0x10)) = uVar1 * 4;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x10)));
    iVar3 = (int)((*(int *)(gen_frame + 0x10)) + ((*(int *)(gen_frame + 0x10)) >> 0x1f & 3U)) >> 2;
    if (iVar3 != 0) goto LAB_00d69b6e;
  }
  iVar3 = ((int)0x80000000);
LAB_00d69b6e: ;
  F_00d69230(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,(*(uint *)(gen_frame + 0x20)),
               (*(uint *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x28)),uVar1,param_10,param_11,param_12);
  if (-1 < iVar3) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),uVar1,iVar3 * 4);
  }
  if (-1 < iVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x28)),iVar2 * 4);
  }
  if (-1 < (int)(*(uint *)(gen_frame + 0xc))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x24)),((*(uint *)(gen_frame + 0xc)) & 0x3fffffff) * 0x30);
  }
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    (*(uint *)(gen_frame + 0x8)) = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                         (&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x20)),((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 0x30);
  }
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: FUN_00d69c80 */
uint F_00d69c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6, float gen_a7)
{
  GEN_ENTER(0xd69c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  float param_8 = (float)gen_a7;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  uVar2 = F_00d69a30(iVar1,(uint)*(ushort *)(iVar1 + 2),(uint)*(ushort *)(iVar1 + 4),param_2,
                       param_3,param_4,param_5,*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x38) + 0x24))),
                       *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x38) + 0x30))),param_6,param_7,param_8);
  return uVar2;
}

/* ref: FUN_00d69ce0 */
uint F_00d69ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7, unsigned int gen_a8, float gen_a9)
{
  GEN_ENTER(0xd69ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  float param_8 = (float)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  float param_10 = (float)gen_a9;
  uint uVar1;
  
  uVar1 = F_00d69a30(*(undefined4 *)(param_1 + 0x28),param_2,param_3,param_4,param_5,param_6,
                       param_7,*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x38) + 0x24))),
                       *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x38) + 0x30))),param_8,param_9,param_10);
  return uVar1;
}

/* ref: hkaQuantizedAnimation::vf3 */
uint F_00d69d30(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd69d30u, gen_a0, 0u, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  uint uVar8;
  int iVar9;
  float * pfVar10;
  uint uVar11;
  uint uVar12;
  
  (*(uint *)(gen_frame + 0x2c)) = (uint)*((ushort *)GEN_TOP((*(int *)(param_1 + 0x28) + 2)));
  uVar11 = (uint)*((ushort *)GEN_TOP((*(int *)(param_1 + 0x28) + 4)));
  uVar12 = uVar11 + 3 & 0xfffffffc;
  uVar8 = (*(uint *)(gen_frame + 0x2c)) + 3 & 0xfffffffc;
  if (uVar8 == 0) {
    (*(uint *)(gen_frame + 0x30)) = 0;
LAB_00d69d95: ;
    (*(uint *)(gen_frame + 0x4)) = 0x80000000;
  }
  else {
    (*(int *)(gen_frame + 0x24)) = uVar8 * 0x30;
    (*(uint *)(gen_frame + 0x30)) = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x24)));
    (*(uint *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x24)) / 0x30;
    if ((*(uint *)(gen_frame + 0x4)) == 0) goto LAB_00d69d95;
  }
  if (uVar8 == 0) {
    (*(uint *)(gen_frame + 0x28)) = 0;
LAB_00d69de9: ;
    (*(int *)(gen_frame + 0x8)) = ((int)0x80000000);
  }
  else {
    (*(int *)(gen_frame + 0x20)) = uVar8 * 4;
    (*(uint *)(gen_frame + 0x28)) = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x20)));
    (*(int *)(gen_frame + 0x8)) = (int)((*(int *)(gen_frame + 0x20)) + ((*(int *)(gen_frame + 0x20)) >> 0x1f & 3U)) >> 2;
    if ((*(int *)(gen_frame + 0x8)) == 0) goto LAB_00d69de9;
  }
  uVar8 = (*(uint *)(gen_frame + 0x28));
  if (uVar12 == 0) {
    (*(uint *)(gen_frame + 0x34)) = 0;
LAB_00d69e31: ;
    (*(int *)(gen_frame + 0xc)) = ((int)0x80000000);
  }
  else {
    (*(int *)(gen_frame + 0x1c)) = uVar12 * 4;
    (*(uint *)(gen_frame + 0x34)) = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x1c)));
    (*(int *)(gen_frame + 0xc)) = (int)((*(int *)(gen_frame + 0x1c)) + ((*(int *)(gen_frame + 0x1c)) >> 0x1f & 3U)) >> 2;
    if ((*(int *)(gen_frame + 0xc)) == 0) goto LAB_00d69e31;
  }
  if (uVar12 == 0) {
    (*(uint *)(gen_frame + 0x38)) = 0;
  }
  else {
    (*(int *)(gen_frame + 0x18)) = uVar12 * 4;
    (*(uint *)(gen_frame + 0x38)) = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x18)));
    (*(int *)(gen_frame + 0x10)) = (int)((*(int *)(gen_frame + 0x18)) + ((*(int *)(gen_frame + 0x18)) >> 0x1f & 3U)) >> 2;
    if ((*(int *)(gen_frame + 0x10)) != 0) goto LAB_00d69e7c;
  }
  (*(int *)(gen_frame + 0x10)) = ((int)0x80000000);
LAB_00d69e7c: ;
  F_00d69ce0(param_1,(*(uint *)(gen_frame + 0x2c)),uVar11,(*(uint *)(gen_frame + 0x30)),(*(uint *)(gen_frame + 0x34)),uVar8,(*(uint *)(gen_frame + 0x38)),param_2,0,REFG(float, 0x10947f8));
  uVar4 = (*(uint *)(gen_frame + 0x34));
  uVar12 = 0;
  if (3 < (int)(*(uint *)(gen_frame + 0x2c))) {
    param_2 = gen_bits2f(uVar8 + 8);
    puVar5 = (undefined4 *)((*(uint *)(gen_frame + 0x30)) + 0x50);
    iVar9 = ((*(uint *)(gen_frame + 0x2c)) - 4 >> 2) + 1;
    uVar12 = iVar9 * 4;
    do {
      puVar7 = param_3;
      if (0.0 < *(float *)((int)gen_fl2bits(param_2) + -8)) {
        uVar1 = puVar5[-0x13];
        uVar2 = puVar5[-0x12];
        uVar3 = puVar5[-0x11];
        *param_3 = puVar5[-0x14];
        param_3[1] = uVar1;
        param_3[2] = uVar2;
        param_3[3] = uVar3;
        uVar1 = puVar5[-0xf];
        uVar2 = puVar5[-0xe];
        uVar3 = puVar5[-0xd];
        param_3[4] = puVar5[-0x10];
        param_3[5] = uVar1;
        param_3[6] = uVar2;
        param_3[7] = uVar3;
        uVar1 = puVar5[-0xb];
        uVar2 = puVar5[-10];
        uVar3 = puVar5[-9];
        puVar7 = param_3 + 0xc;
        param_3[8] = puVar5[-0xc];
        param_3[9] = uVar1;
        param_3[10] = uVar2;
        param_3[0xb] = uVar3;
      }
      puVar6 = puVar7;
      if (0.0 < *(float *)((int)gen_fl2bits(param_2) + -4)) {
        uVar1 = puVar5[-7];
        uVar2 = puVar5[-6];
        uVar3 = puVar5[-5];
        *puVar7 = puVar5[-8];
        puVar7[1] = uVar1;
        puVar7[2] = uVar2;
        puVar7[3] = uVar3;
        uVar1 = puVar5[-3];
        uVar2 = puVar5[-2];
        uVar3 = puVar5[-1];
        puVar7[4] = puVar5[-4];
        puVar7[5] = uVar1;
        puVar7[6] = uVar2;
        puVar7[7] = uVar3;
        uVar1 = puVar5[1];
        uVar2 = puVar5[2];
        uVar3 = puVar5[3];
        puVar6 = puVar7 + 0xc;
        puVar7[8] = *puVar5;
        puVar7[9] = uVar1;
        puVar7[10] = uVar2;
        puVar7[0xb] = uVar3;
      }
      puVar7 = puVar6;
      if (0.0 < *((float *)(uintptr_t)gen_fl2bits((float)(param_2)))) {
        uVar1 = puVar5[5];
        uVar2 = puVar5[6];
        uVar3 = puVar5[7];
        *puVar6 = puVar5[4];
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        uVar1 = puVar5[9];
        uVar2 = puVar5[10];
        uVar3 = puVar5[0xb];
        puVar6[4] = puVar5[8];
        puVar6[5] = uVar1;
        puVar6[6] = uVar2;
        puVar6[7] = uVar3;
        uVar1 = puVar5[0xd];
        uVar2 = puVar5[0xe];
        uVar3 = puVar5[0xf];
        puVar7 = puVar6 + 0xc;
        puVar6[8] = puVar5[0xc];
        puVar6[9] = uVar1;
        puVar6[10] = uVar2;
        puVar6[0xb] = uVar3;
      }
      param_3 = puVar7;
      if (0.0 < *(float *)((int)gen_fl2bits(param_2) + 4)) {
        uVar1 = puVar5[0x11];
        uVar2 = puVar5[0x12];
        uVar3 = puVar5[0x13];
        *puVar7 = puVar5[0x10];
        puVar7[1] = uVar1;
        puVar7[2] = uVar2;
        puVar7[3] = uVar3;
        uVar1 = puVar5[0x15];
        uVar2 = puVar5[0x16];
        uVar3 = puVar5[0x17];
        puVar7[4] = puVar5[0x14];
        puVar7[5] = uVar1;
        puVar7[6] = uVar2;
        puVar7[7] = uVar3;
        uVar1 = puVar5[0x19];
        uVar2 = puVar5[0x1a];
        uVar3 = puVar5[0x1b];
        param_3 = puVar7 + 0xc;
        puVar7[8] = puVar5[0x18];
        puVar7[9] = uVar1;
        puVar7[10] = uVar2;
        puVar7[0xb] = uVar3;
      }
      param_2 = gen_bits2f((int)gen_fl2bits(param_2) + 0x10);
      puVar5 = puVar5 + 0x30;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if (uVar12 < (*(uint *)(gen_frame + 0x2c))) {
    puVar5 = (undefined4 *)((*(uint *)(gen_frame + 0x30)) + 0x20 + uVar12 * 0x30);
    do {
      if (0.0 < *(float *)((*(uint *)(gen_frame + 0x28)) + uVar12 * 4)) {
        uVar1 = puVar5[-7];
        uVar2 = puVar5[-6];
        uVar3 = puVar5[-5];
        *param_3 = puVar5[-8];
        param_3[1] = uVar1;
        param_3[2] = uVar2;
        param_3[3] = uVar3;
        uVar1 = puVar5[-3];
        uVar2 = puVar5[-2];
        uVar3 = puVar5[-1];
        param_3[4] = puVar5[-4];
        param_3[5] = uVar1;
        param_3[6] = uVar2;
        param_3[7] = uVar3;
        uVar1 = puVar5[1];
        uVar2 = puVar5[2];
        uVar3 = puVar5[3];
        param_3[8] = *puVar5;
        param_3[9] = uVar1;
        param_3[10] = uVar2;
        param_3[0xb] = uVar3;
        param_3 = param_3 + 0xc;
      }
      uVar12 = uVar12 + 1;
      puVar5 = puVar5 + 0xc;
    } while (uVar12 < (*(uint *)(gen_frame + 0x2c)));
  }
  param_3 = (undefined4 *)0x0;
  if (3 < uVar11) {
    puVar5 = (undefined4 *)((*(uint *)(gen_frame + 0x34)) + 4);
    pfVar10 = (float *)((*(uint *)(gen_frame + 0x38)) + 0xc);
    iVar9 = (uVar11 - 4 >> 2) + 1;
    param_3 = (undefined4 *)(iVar9 * 4);
    do {
      puVar7 = param_4;
      if (0.0 < pfVar10[-3]) {
        puVar7 = param_4 + 1;
        *param_4 = puVar5[-1];
      }
      puVar6 = puVar7;
      if (0.0 < *((float *)GEN_TOP((((*(uint *)(gen_frame + 0x38)) - (*(uint *)(gen_frame + 0x34))) + (int)puVar5)))) {
        puVar6 = puVar7 + 1;
        *puVar7 = *puVar5;
      }
      puVar7 = puVar6;
      if (0.0 < pfVar10[-1]) {
        puVar7 = puVar6 + 1;
        *puVar6 = puVar5[1];
      }
      param_4 = puVar7;
      if (0.0 < *pfVar10) {
        param_4 = puVar7 + 1;
        *puVar7 = puVar5[2];
      }
      pfVar10 = pfVar10 + 4;
      puVar5 = puVar5 + 4;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if (param_3 < uVar11) {
    iVar9 = uVar11 - (int)param_3;
    puVar5 = (undefined4 *)((*(uint *)(gen_frame + 0x34)) + (int)((int)(uintptr_t)param_3) * 4);
    do {
      puVar7 = param_4;
      if (0.0 < *((float *)GEN_TOP(((int)puVar5 + ((*(uint *)(gen_frame + 0x38)) - (*(uint *)(gen_frame + 0x34))))))) {
        puVar7 = param_4 + 1;
        *param_4 = *puVar5;
      }
      puVar5 = puVar5 + 1;
      iVar9 = iVar9 + -1;
      param_4 = puVar7;
    } while (iVar9 != 0);
  }
  if (-1 < (*(int *)(gen_frame + 0x10))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x38)),(*(int *)(gen_frame + 0x10)) * 4);
  }
  if (-1 < (*(int *)(gen_frame + 0xc))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),uVar4,(*(int *)(gen_frame + 0xc)) * 4);
  }
  if (-1 < (*(int *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x28)),(*(int *)(gen_frame + 0x8)) * 4);
  }
  if (-1 < (int)(*(uint *)(gen_frame + 0x4))) {
    (*(uint *)(gen_frame + 0x4)) = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                         (&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x30)),((*(uint *)(gen_frame + 0x4)) & 0x3fffffff) * 0x30);
  }
  return (*(uint *)(gen_frame + 0x4));
}

/* ref: hkaQuantizedAnimation::vf4 */
uint F_00d6a160(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd6a160u, gen_a0, 0u, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  uint param_5 = (uint)gen_a4;
  undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  float * pfVar8;
  uint uVar9;
  uint uVar10;
  
  (*(uint *)(gen_frame + 0x30)) = (uint)*((ushort *)GEN_TOP((*(int *)(param_1 + 0x28) + 2)));
  (*(uint *)(gen_frame + 0x2c)) = (uint)*((ushort *)GEN_TOP((*(int *)(param_1 + 0x28) + 4)));
  uVar9 = (*(uint *)(gen_frame + 0x2c)) + 3 & 0xfffffffc;
  uVar7 = (*(uint *)(gen_frame + 0x30)) + 3 & 0xfffffffc;
  if (uVar7 == 0) {
    (*(uint *)(gen_frame + 0x28)) = 0;
LAB_00d6a1c5: ;
    (*(uint *)(gen_frame + 0x4)) = 0x80000000;
  }
  else {
    (*(int *)(gen_frame + 0x20)) = uVar7 * 0x30;
    (*(uint *)(gen_frame + 0x28)) = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x20)));
    (*(uint *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x20)) / 0x30;
    if ((*(uint *)(gen_frame + 0x4)) == 0) goto LAB_00d6a1c5;
  }
  if (uVar7 == 0) {
    (*(uint *)(gen_frame + 0x24)) = 0;
LAB_00d6a219: ;
    (*(int *)(gen_frame + 0x8)) = ((int)0x80000000);
  }
  else {
    (*(int *)(gen_frame + 0x1c)) = uVar7 * 4;
    (*(uint *)(gen_frame + 0x24)) = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x1c)));
    (*(int *)(gen_frame + 0x8)) = (int)((*(int *)(gen_frame + 0x1c)) + ((*(int *)(gen_frame + 0x1c)) >> 0x1f & 3U)) >> 2;
    if ((*(int *)(gen_frame + 0x8)) == 0) goto LAB_00d6a219;
  }
  uVar7 = (*(uint *)(gen_frame + 0x24));
  if (uVar9 == 0) {
    (*(uint *)(gen_frame + 0x38)) = 0;
LAB_00d6a261: ;
    (*(int *)(gen_frame + 0xc)) = ((int)0x80000000);
  }
  else {
    (*(int *)(gen_frame + 0x18)) = uVar9 * 4;
    (*(uint *)(gen_frame + 0x38)) = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x18)));
    (*(int *)(gen_frame + 0xc)) = (int)((*(int *)(gen_frame + 0x18)) + ((*(int *)(gen_frame + 0x18)) >> 0x1f & 3U)) >> 2;
    if ((*(int *)(gen_frame + 0xc)) == 0) goto LAB_00d6a261;
  }
  if (uVar9 == 0) {
    (*(uint *)(gen_frame + 0x34)) = 0;
  }
  else {
    (*(int *)(gen_frame + 0x14)) = uVar9 * 4;
    (*(uint *)(gen_frame + 0x34)) = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x14)));
    (*(int *)(gen_frame + 0x10)) = (int)((*(int *)(gen_frame + 0x14)) + ((*(int *)(gen_frame + 0x14)) >> 0x1f & 3U)) >> 2;
    if ((*(int *)(gen_frame + 0x10)) != 0) goto LAB_00d6a2ac;
  }
  (*(int *)(gen_frame + 0x10)) = ((int)0x80000000);
LAB_00d6a2ac: ;
  F_00d69ce0(param_1,(*(uint *)(gen_frame + 0x30)),(*(uint *)(gen_frame + 0x2c)),(*(uint *)(gen_frame + 0x28)),(*(uint *)(gen_frame + 0x38)),uVar7,(*(uint *)(gen_frame + 0x34)),param_2,0,REFG(float, 0x10947f8));
  uVar10 = 0;
  uVar9 = 0;
  if (3 < (int)(*(uint *)(gen_frame + 0x30))) {
    param_2 = gen_bits2f(uVar7 + 8);
    puVar4 = (undefined4 *)((*(uint *)(gen_frame + 0x28)) + 0x50);
    do {
      if (param_3 <= uVar9) goto LAB_00d6a437;
      puVar6 = param_4;
      if (0.0 < *(float *)((int)gen_fl2bits(param_2) + -8)) {
        uVar1 = puVar4[-0x13];
        uVar2 = puVar4[-0x12];
        uVar3 = puVar4[-0x11];
        *param_4 = puVar4[-0x14];
        param_4[1] = uVar1;
        param_4[2] = uVar2;
        param_4[3] = uVar3;
        uVar1 = puVar4[-0xf];
        uVar2 = puVar4[-0xe];
        uVar3 = puVar4[-0xd];
        param_4[4] = puVar4[-0x10];
        param_4[5] = uVar1;
        param_4[6] = uVar2;
        param_4[7] = uVar3;
        uVar1 = puVar4[-0xb];
        uVar2 = puVar4[-10];
        uVar3 = puVar4[-9];
        puVar6 = param_4 + 0xc;
        param_4[8] = puVar4[-0xc];
        param_4[9] = uVar1;
        param_4[10] = uVar2;
        param_4[0xb] = uVar3;
        uVar9 = uVar9 + 1;
      }
      if (param_3 <= uVar9) goto LAB_00d6a437;
      puVar5 = puVar6;
      if (0.0 < *(float *)((int)gen_fl2bits(param_2) + -4)) {
        uVar1 = puVar4[-7];
        uVar2 = puVar4[-6];
        uVar3 = puVar4[-5];
        *puVar6 = puVar4[-8];
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        uVar1 = puVar4[-3];
        uVar2 = puVar4[-2];
        uVar3 = puVar4[-1];
        puVar6[4] = puVar4[-4];
        puVar6[5] = uVar1;
        puVar6[6] = uVar2;
        puVar6[7] = uVar3;
        uVar1 = puVar4[1];
        uVar2 = puVar4[2];
        uVar3 = puVar4[3];
        puVar5 = puVar6 + 0xc;
        puVar6[8] = *puVar4;
        puVar6[9] = uVar1;
        puVar6[10] = uVar2;
        puVar6[0xb] = uVar3;
        uVar9 = uVar9 + 1;
      }
      if (param_3 <= uVar9) goto LAB_00d6a437;
      puVar6 = puVar5;
      if (0.0 < *((float *)(uintptr_t)gen_fl2bits((float)(param_2)))) {
        uVar1 = puVar4[5];
        uVar2 = puVar4[6];
        uVar3 = puVar4[7];
        *puVar5 = puVar4[4];
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
        uVar1 = puVar4[9];
        uVar2 = puVar4[10];
        uVar3 = puVar4[0xb];
        puVar5[4] = puVar4[8];
        puVar5[5] = uVar1;
        puVar5[6] = uVar2;
        puVar5[7] = uVar3;
        uVar1 = puVar4[0xd];
        uVar2 = puVar4[0xe];
        uVar3 = puVar4[0xf];
        puVar6 = puVar5 + 0xc;
        puVar5[8] = puVar4[0xc];
        puVar5[9] = uVar1;
        puVar5[10] = uVar2;
        puVar5[0xb] = uVar3;
        uVar9 = uVar9 + 1;
      }
      if (param_3 <= uVar9) goto LAB_00d6a437;
      param_4 = puVar6;
      if (0.0 < *(float *)((int)gen_fl2bits(param_2) + 4)) {
        uVar1 = puVar4[0x11];
        uVar2 = puVar4[0x12];
        uVar3 = puVar4[0x13];
        *puVar6 = puVar4[0x10];
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
        uVar1 = puVar4[0x15];
        uVar2 = puVar4[0x16];
        uVar3 = puVar4[0x17];
        puVar6[4] = puVar4[0x14];
        puVar6[5] = uVar1;
        puVar6[6] = uVar2;
        puVar6[7] = uVar3;
        uVar1 = puVar4[0x19];
        uVar2 = puVar4[0x1a];
        uVar3 = puVar4[0x1b];
        param_4 = puVar6 + 0xc;
        puVar6[8] = puVar4[0x18];
        puVar6[9] = uVar1;
        puVar6[10] = uVar2;
        puVar6[0xb] = uVar3;
        uVar9 = uVar9 + 1;
      }
      param_2 = gen_bits2f((int)gen_fl2bits(param_2) + 0x10);
      uVar10 = uVar10 + 4;
      puVar4 = puVar4 + 0x30;
    } while (uVar10 < (*(uint *)(gen_frame + 0x30)) - 3);
  }
  if (uVar10 < (*(uint *)(gen_frame + 0x30))) {
    puVar4 = (undefined4 *)((*(uint *)(gen_frame + 0x28)) + 0x20 + uVar10 * 0x30);
    do {
      if (param_3 <= uVar9) break;
      puVar6 = param_4;
      if (0.0 < *(float *)((*(uint *)(gen_frame + 0x24)) + uVar10 * 4)) {
        uVar1 = puVar4[-7];
        uVar2 = puVar4[-6];
        uVar3 = puVar4[-5];
        *param_4 = puVar4[-8];
        param_4[1] = uVar1;
        param_4[2] = uVar2;
        param_4[3] = uVar3;
        uVar1 = puVar4[-3];
        uVar2 = puVar4[-2];
        uVar3 = puVar4[-1];
        param_4[4] = puVar4[-4];
        param_4[5] = uVar1;
        param_4[6] = uVar2;
        param_4[7] = uVar3;
        uVar1 = puVar4[1];
        uVar2 = puVar4[2];
        uVar3 = puVar4[3];
        puVar6 = param_4 + 0xc;
        param_4[8] = *puVar4;
        param_4[9] = uVar1;
        param_4[10] = uVar2;
        param_4[0xb] = uVar3;
        uVar9 = uVar9 + 1;
      }
      uVar10 = uVar10 + 1;
      puVar4 = puVar4 + 0xc;
      param_4 = puVar6;
    } while (uVar10 < (*(uint *)(gen_frame + 0x30)));
  }
LAB_00d6a437: ;
  uVar7 = 0;
  param_3 = 0;
  if (3 < (int)(*(uint *)(gen_frame + 0x2c))) {
    pfVar8 = (float *)((*(uint *)(gen_frame + 0x34)) + 0xc);
    puVar4 = (undefined4 *)((*(uint *)(gen_frame + 0x38)) + 4);
    do {
      if (param_5 <= uVar7) goto LAB_00d6a554;
      puVar6 = param_6;
      if (0.0 < pfVar8[-3]) {
        puVar6 = param_6 + 1;
        *param_6 = puVar4[-1];
        uVar7 = uVar7 + 1;
      }
      if (param_5 <= uVar7) goto LAB_00d6a554;
      puVar5 = puVar6;
      if (0.0 < *((float *)GEN_TOP((((*(uint *)(gen_frame + 0x34)) - (*(uint *)(gen_frame + 0x38))) + (int)puVar4)))) {
        puVar5 = puVar6 + 1;
        *puVar6 = *puVar4;
        uVar7 = uVar7 + 1;
      }
      if (param_5 <= uVar7) goto LAB_00d6a554;
      puVar6 = puVar5;
      if (0.0 < pfVar8[-1]) {
        puVar6 = puVar5 + 1;
        *puVar5 = puVar4[1];
        uVar7 = uVar7 + 1;
      }
      if (param_5 <= uVar7) goto LAB_00d6a554;
      param_6 = puVar6;
      if (0.0 < *pfVar8) {
        param_6 = puVar6 + 1;
        *puVar6 = puVar4[2];
        uVar7 = uVar7 + 1;
      }
      param_3 = param_3 + 4;
      puVar4 = puVar4 + 4;
      pfVar8 = pfVar8 + 4;
    } while (param_3 < (*(uint *)(gen_frame + 0x2c)) - 3);
  }
  if (param_3 < (*(uint *)(gen_frame + 0x2c))) {
    puVar4 = (undefined4 *)((*(uint *)(gen_frame + 0x38)) + param_3 * 4);
    do {
      if (param_5 <= uVar7) break;
      puVar6 = param_6;
      if (0.0 < *((float *)GEN_TOP(((int)puVar4 + ((*(uint *)(gen_frame + 0x34)) - (*(uint *)(gen_frame + 0x38))))))) {
        puVar6 = param_6 + 1;
        *param_6 = *puVar4;
        uVar7 = uVar7 + 1;
      }
      param_3 = param_3 + 1;
      puVar4 = puVar4 + 1;
      param_6 = puVar6;
    } while (param_3 < (*(uint *)(gen_frame + 0x2c)));
  }
LAB_00d6a554: ;
  if (-1 < (*(int *)(gen_frame + 0x10))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x34)),(*(int *)(gen_frame + 0x10)) * 4);
  }
  if (-1 < (*(int *)(gen_frame + 0xc))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x38)),(*(int *)(gen_frame + 0xc)) * 4);
  }
  if (-1 < (*(int *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x24)),(*(int *)(gen_frame + 0x8)) * 4);
  }
  if (-1 < (int)(*(uint *)(gen_frame + 0x4))) {
    (*(uint *)(gen_frame + 0x4)) = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                         (&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x28)),((*(uint *)(gen_frame + 0x4)) & 0x3fffffff) * 0x30);
  }
  return (*(uint *)(gen_frame + 0x4));
}

/* ref: FUN_00d6a610 */
unsigned int F_00d6a610(void)
{
  GEN_ENTER(0xd6a610u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *(undefined4 * PTR32 *)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 * PTR32 *)((int)pvVar3 + 0xc)) {
    *puVar1 = &REFG(undefined, 0x1136cb0);
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 * PTR32 *)((int)pvVar3 + 4) = puVar1 + 3;
  }
  return 0;
}

/* ref: FUN_00d6a650 */
uint F_00d6a650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd6a650u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = 0x3c;
  return param_2;
}

/* ref: FUN_00d6a670 */
uint F_00d6a670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd6a670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return param_1;
}

/* ref: hkaInterleavedUncompressedAnimation::vf3 */
uint F_00d6a690(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd6a690u, gen_a0, 0u, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))
                    ((undefined4)gen_fl2bits(param_2),param_1[4],param_3,param_1[5],param_4);
  return uVar1;
}

/* ref: hkaInterleavedUncompressedAnimation::vf8 */
uint F_00d6a6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd6a6c0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = 1;
  if (0 < *(int *)(in_ecx + 0x10)) {
    uVar1 = 2;
  }
  if (0 < *(int *)(in_ecx + 0x14)) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

/* ref: hkaInterleavedUncompressedAnimation::vf10 */
uint F_00d6a6e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd6a6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (*(int *)(this + 0x14) * 8 + 0x1fU & 0xfffffff0) + 0x40 + *(int *)(this + 0x10) * 0x60;
}

/* ref: FUN_00d6a730 */
unsigned int F_00d6a730(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd6a730u, 0u, 0u, 0u, 0u);
  float in_xmm0 = (float)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  return 0;
}

/* ref: hkaInterleavedUncompressedAnimation::vf7 */
uint F_00d6a750(unsigned int gen_a0)
{
  GEN_ENTER(0xd6a750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0x10) != 0) {
    return *(int *)(this + 0x2c) / *(int *)(this + 0x10);
  }
  return *(int *)(this + 0x38) / *(int *)(this + 0x14);
}

/* ref: hkaInterleavedUncompressedAnimation::vf6 */
unsigned int F_00d6a770(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd6a770u, gen_a0, 0u, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  int param_5 = (int)gen_a4;
  int iVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float * pfVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  uint local_14;
  int iStack_10;
  uint local_c;
  uint local_8;
  
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0x1c))(param_1);
  fVar7 = (float10)(int)(uVar4 - 1);
  if ((int)(uVar4 - 1) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar7 = fVar7 * ((float10)param_2 / ((float10)GEN_TOD(gen_bits2f(param_1[3]))));
  uVar4 = uVar4 - 2;
  local_14 = (uint)(longlong)TRUNC(fVar7);
  local_8 = local_14;
  if (local_14 <= uVar4) {
    fVar8 = (float10)(int)local_14;
    if ((int)local_14 < 0) {
      fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar7 = fVar7 - fVar8;
    fVar9 = (float)fVar7;
    if (fVar7 < (float10)0) {
      fVar9 = 0.0;
      goto LAB_00d6a804;
    }
    uVar4 = local_14;
    if (!(REFG(float, 0x1087f04) < fVar9)) goto LAB_00d6a804;
  }
  fVar9 = REFG(float, 0x1087f04);
  local_8 = uVar4;
LAB_00d6a804: ;
  fVar10 = REFG(float, 0x1087f04) - fVar9;
  local_c = 0;
  if (3 < (int)param_4) {
    iStack_10 = (param_4 - 4 >> 2) + 1;
    param_2 = gen_bits2f(param_3 + 4);
    pfVar6 = (float *)(param_5 + 8);
    local_c = iStack_10 * 4;
    do {
      if (-1 < *(short *)((int)gen_fl2bits(param_2) + -4)) {
        iVar3 = param_1[5];
        iVar5 = (int)*(short *)((int)gen_fl2bits(param_2) + -4);
        if (iVar5 < iVar3) {
          iVar1 = param_1[0xd] + iVar3 * local_8 * 4;
          pfVar6[-2] = *((float *)GEN_TOP((iVar1 + (iVar3 + iVar5) * 4))) * fVar9 +
                       *(float *)(iVar1 + iVar5 * 4) * fVar10;
        }
      }
      if (-1 < *(short *)((int)gen_fl2bits(param_2) + -2)) {
        iVar3 = param_1[5];
        iVar5 = (int)*(short *)((int)gen_fl2bits(param_2) + -2);
        if (iVar5 < iVar3) {
          iVar1 = param_1[0xd] + iVar3 * local_8 * 4;
          pfVar6[-1] = *((float *)GEN_TOP((iVar1 + (iVar3 + iVar5) * 4))) * fVar9 +
                       *(float *)(iVar1 + iVar5 * 4) * fVar10;
        }
      }
      if (-1 < *((short *)(uintptr_t)gen_fl2bits((float)(param_2)))) {
        iVar3 = param_1[5];
        iVar5 = (int)*((short *)(uintptr_t)gen_fl2bits((float)(param_2)));
        if (iVar5 < iVar3) {
          iVar1 = param_1[0xd] + iVar3 * local_8 * 4;
          *pfVar6 = *((float *)GEN_TOP((iVar1 + (iVar3 + iVar5) * 4))) * fVar9 +
                    *(float *)(iVar1 + iVar5 * 4) * fVar10;
        }
      }
      if (-1 < *(short *)((int)gen_fl2bits(param_2) + 2)) {
        iVar3 = param_1[5];
        iVar5 = (int)*(short *)((int)gen_fl2bits(param_2) + 2);
        if (iVar5 < iVar3) {
          iVar1 = param_1[0xd] + iVar3 * local_8 * 4;
          pfVar6[1] = *((float *)GEN_TOP((iVar1 + (iVar3 + iVar5) * 4))) * fVar9 +
                      *(float *)(iVar1 + iVar5 * 4) * fVar10;
        }
      }
      param_2 = gen_bits2f((int)gen_fl2bits(param_2) + 8);
      pfVar6 = pfVar6 + 4;
      iStack_10 = iStack_10 + -1;
    } while (iStack_10 != 0);
  }
  for (; local_c < param_4; local_c = local_c + 1) {
    sVar2 = *(short *)(param_3 + local_c * 2);
    if (-1 < sVar2) {
      iVar3 = param_1[5];
      iVar5 = (int)sVar2;
      if (iVar5 < iVar3) {
        iVar1 = param_1[0xd] + iVar3 * local_8 * 4;
        *(float *)(param_5 + local_c * 4) =
             *((float *)GEN_TOP((iVar1 + (iVar3 + iVar5) * 4))) * fVar9 +
             *(float *)(iVar1 + iVar5 * 4) * fVar10;
      }
    }
  }
  return 0;
}

/* ref: hkaInterleavedUncompressedAnimation::vf9 */
uint F_00d6a9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd6a9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  *param_3 = this;
  param_3[1] = 0x40;
  iVar1 = *(int *)(this + 0x10);
  iVar4 = 1;
  if (0 < iVar1) {
    param_3[2] = iVar1 * param_1 * 0x30 + *(int *)(this + 0x28);
    param_3[3] = iVar1 * 0x60;
    iVar4 = 2;
  }
  uVar2 = *(uint *)(this + 0x14);
  uVar3 = uVar2;
  if (0 < (int)uVar2) {
    uVar3 = *(int *)(this + 0x34) + uVar2 * param_1 * 4;
    param_3[iVar4 * 2] = uVar3;
    param_3[iVar4 * 2 + 1] = uVar2 << 3;
  }
  return uVar3;
}

/* ref: hkaInterleavedUncompressedAnimation::vf5 */
unsigned int F_00d6abf0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd6abf0u, gen_a0, 0u, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  int param_5 = (int)gen_a4;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float * pfVar15;
  float10 fVar16;
  float10 fVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
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
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint local_20;
  uint local_14;
  
  uVar10 = ((code *)*(gen_code32 *)(*param_1 + 0x1c))(param_1);
  fVar16 = (float10)(int)(uVar10 - 1);
  if ((int)(uVar10 - 1) < 0) {
    fVar16 = fVar16 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar16 = fVar16 * ((float10)param_2 / ((float10)GEN_TOD(gen_bits2f(param_1[3]))));
  local_20 = (uint)(longlong)TRUNC(fVar16);
  local_14 = local_20;
  fVar36 = REFG(float, 0x1087f04);
  uVar18 = uVar10 - 2;
  if (local_20 <= uVar10 - 2) {
    fVar17 = (float10)(int)local_20;
    if ((int)local_20 < 0) {
      fVar17 = fVar17 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar16 = fVar16 - fVar17;
    fVar22 = (float)fVar16;
    uVar18 = local_14;
    if (fVar16 < (float10)0) {
      fVar36 = 0.0;
    }
    else if (!(REFG(float, 0x1087f04) < fVar22)) {
      fVar36 = fVar22;
    }
  }
  local_14 = uVar18;
  uVar10 = 0;
  if (param_4 != 0) {
    pfVar15 = (float *)(param_5 + 0x10);
    do {
      sVar9 = *(short *)(param_3 + uVar10 * 2);
      if (-1 < sVar9) {
        iVar12 = param_1[4];
        iVar14 = (int)sVar9;
        if (iVar14 < iVar12) {
          iVar13 = iVar12 * local_14 * 0x30 + param_1[10];
          iVar11 = iVar14 * 0x30;
          uVar1 = *(undefined8 *)(iVar11 + iVar13);
          uVar2 = *(undefined8 *)(iVar11 + 8 + iVar13);
          uVar3 = *(undefined8 *)(iVar11 + 0x10 + iVar13);
          uVar4 = *(undefined8 *)(iVar11 + 0x18 + iVar13);
          uVar5 = *(undefined8 *)(iVar11 + iVar13 + 0x20);
          uVar6 = *(undefined8 *)(iVar11 + iVar13 + 0x28);
          local_40 = gen_bits2f((uint)uVar3);
          fStack_3c = gen_bits2f((uint)((ulonglong)uVar3 >> 0x20));
          fStack_38 = gen_bits2f((uint)uVar4);
          fStack_34 = gen_bits2f((uint)((ulonglong)uVar4 >> 0x20));
          iVar12 = (iVar12 + iVar14) * 0x30;
          uVar3 = *(undefined8 *)(iVar12 + iVar13);
          uVar4 = *(undefined8 *)(iVar12 + 8 + iVar13);
          uVar7 = *(undefined8 *)(iVar12 + 0x10 + iVar13);
          iVar12 = iVar12 + iVar13;
          uVar8 = *(undefined8 *)(iVar12 + 0x18);
          local_60 = gen_bits2f((uint)*(undefined8 *)(iVar12 + 0x20));
          fStack_5c = gen_bits2f((uint)((ulonglong)*(undefined8 *)(iVar12 + 0x20) >> 0x20));
          fStack_58 = gen_bits2f((uint)*(undefined8 *)(iVar12 + 0x28));
          fStack_54 = gen_bits2f((uint)((ulonglong)*(undefined8 *)(iVar12 + 0x28) >> 0x20));
          local_30 = gen_bits2f((uint)uVar5);
          fStack_2c = gen_bits2f((uint)((ulonglong)uVar5 >> 0x20));
          fStack_28 = gen_bits2f((uint)uVar6);
          fStack_24 = gen_bits2f((uint)((ulonglong)uVar6 >> 0x20));
          pfVar15[4] = (local_60 - local_30) * fVar36 + local_30;
          pfVar15[5] = (fStack_5c - fStack_2c) * fVar36 + fStack_2c;
          pfVar15[6] = (fStack_58 - fStack_28) * fVar36 + fStack_28;
          pfVar15[7] = (fStack_54 - fStack_24) * fVar36 + fStack_24;
          local_80 = gen_bits2f((uint)uVar3);
          fStack_7c = gen_bits2f((uint)((ulonglong)uVar3 >> 0x20));
          fStack_78 = gen_bits2f((uint)uVar4);
          fStack_74 = gen_bits2f((uint)((ulonglong)uVar4 >> 0x20));
          local_50 = gen_bits2f((uint)uVar1);
          fStack_4c = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
          fStack_48 = gen_bits2f((uint)uVar2);
          fStack_44 = gen_bits2f((uint)((ulonglong)uVar2 >> 0x20));
          pfVar15[-4] = (local_80 - local_50) * fVar36 + local_50;
          pfVar15[-3] = (fStack_7c - fStack_4c) * fVar36 + fStack_4c;
          pfVar15[-2] = (fStack_78 - fStack_48) * fVar36 + fStack_48;
          pfVar15[-1] = (fStack_74 - fStack_44) * fVar36 + fStack_44;
          local_70 = gen_bits2f((uint)uVar7);
          fStack_6c = gen_bits2f((uint)((ulonglong)uVar7 >> 0x20));
          fStack_68 = gen_bits2f((uint)uVar8);
          fStack_64 = gen_bits2f((uint)((ulonglong)uVar8 >> 0x20));
          (*(float *)((char *)&auVar34 + 0)) = fStack_38 * fStack_68 + local_40 * local_70;
          (*(float *)((char *)&auVar34 + 4)) = fStack_34 * fStack_64 + fStack_3c * fStack_6c;
          (*(float *)((char *)&auVar34 + 8)) = local_40 * local_70 + fStack_38 * fStack_68;
          (*(float *)((char *)&auVar34 + 12)) = fStack_3c * fStack_6c + fStack_34 * fStack_64;
          uVar18 = -(uint)((*(float *)((char *)&auVar34 + 4)) + (*(float *)((char *)&auVar34 + 0)) < 0.0);
          uVar19 = -(uint)((*(float *)((char *)&auVar34 + 0)) + (*(float *)((char *)&auVar34 + 4)) < 0.0);
          uVar20 = -(uint)((*(float *)((char *)&auVar34 + 12)) + (*(float *)((char *)&auVar34 + 8)) < 0.0);
          uVar21 = -(uint)((*(float *)((char *)&auVar34 + 8)) + (*(float *)((char *)&auVar34 + 12)) < 0.0);
          fVar22 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar36) & uVar18 |
                              ~uVar18 & (uint)gen_fl2bits(fVar36)) * local_70 +
                   (*(float *)&REFG(undefined, 0x1138af0) - fVar36) * local_40;
          fVar23 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar36) & uVar19 |
                              ~uVar19 & (uint)gen_fl2bits(fVar36)) * fStack_6c +
                   (*(float *)&REFG(undefined, 0x1138af4) - fVar36) * fStack_3c;
          fVar24 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar36) & uVar20 |
                              ~uVar20 & (uint)gen_fl2bits(fVar36)) * fStack_68 +
                   (*(float *)&REFG(undefined, 0x1138af8) - fVar36) * fStack_38;
          fVar25 = gen_bits2f((uint)gen_fl2bits(0.0 - fVar36) & uVar21 |
                              ~uVar21 & (uint)gen_fl2bits(fVar36)) * fStack_64 +
                   (*(float *)&REFG(undefined, 0x1138afc) - fVar36) * fStack_34;
          fVar26 = fVar24 * fVar24 + fVar22 * fVar22;
          fVar27 = fVar25 * fVar25 + fVar23 * fVar23;
          fVar28 = fVar22 * fVar22 + fVar24 * fVar24;
          fVar29 = fVar23 * fVar23 + fVar25 * fVar25;
          fVar30 = fVar27 + fVar26;
          fVar26 = fVar26 + fVar27;
          fVar27 = fVar29 + fVar28;
          fVar28 = fVar28 + fVar29;
          (*(undefined4 *)((char *)&auVar35 + 4)) = (undefined4)gen_fl2bits(fVar26);
          (*(undefined4 *)((char *)&auVar35 + 0)) = (undefined4)gen_fl2bits(fVar30);
          (*(undefined4 *)((char *)&auVar35 + 8)) = (undefined4)gen_fl2bits(fVar27);
          (*(undefined4 *)((char *)&auVar35 + 12)) = (undefined4)gen_fl2bits(fVar28);
          gen_rsqrtps(&(auVar35), &(auVar34), &(auVar35));
          fVar33 = (*(float *)((char *)&auVar35 + 0));
          fVar29 = (*(float *)((char *)&auVar35 + 4));
          fVar31 = (*(float *)((char *)&auVar35 + 8));
          fVar32 = (*(float *)((char *)&auVar35 + 12));
          fVar26 = *(float *)&REFG(undefined, 0x1137204) - (fVar29 * fVar26) * fVar29;
          fVar27 = *(float *)&REFG(undefined, 0x1137208) - (fVar31 * fVar27) * fVar31;
          fVar28 = *(float *)&REFG(undefined, 0x113720c) - (fVar32 * fVar28) * fVar32;
          fVar29 = *(float *)&REFG(undefined, 0x1137214) * fVar29;
          fVar31 = *(float *)&REFG(undefined, 0x1137218) * fVar31;
          fVar32 = *(float *)&REFG(undefined, 0x113721c) * fVar32;
          *pfVar15 = ((*(float *)&REFG(undefined, 0x1137200) - (fVar33 * fVar30) * fVar33) *
                     (*(float *)&REFG(undefined, 0x1137210) * fVar33)) * fVar22;
          pfVar15[1] = (fVar26 * fVar29) * fVar23;
          pfVar15[2] = (fVar27 * fVar31) * fVar24;
          pfVar15[3] = (fVar28 * fVar32) * fVar25;
        }
      }
      uVar10 = uVar10 + 1;
      pfVar15 = pfVar15 + 0xc;
    } while (uVar10 < param_4);
  }
  return 0;
}

/* ref: FUN_00d6ae50 */
unsigned int F_00d6ae50(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xd6ae50u, gen_a0, 0u, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  uint param_5 = (uint)gen_a4;
  int param_6 = (int)gen_a5;
  int * param_7 = (int *)(uintptr_t)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  float fVar1;
  float fVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  float fVar7;
  LPVOID pvVar8;
  float * pfVar9;
  float * pfVar10;
  int iVar11;
  float * pfVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
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
  float fVar32;
  float fVar33;
  undefined1 auVar31 [16];
  float fVar34;
  
  pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar3 = *(undefined4 * PTR32 *)((int)pvVar8 + 4);
  if (puVar3 < *(undefined4 * PTR32 *)((int)pvVar8 + 0xc)) {
    *puVar3 = "TtSampleInterleavedChunk";
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 * PTR32 *)((int)pvVar8 + 4) = puVar3 + 3;
  }
  fVar7 = *(float *)&REFG(undefined, 0x113720c);
  fVar2 = *(float *)&REFG(undefined, 0x1137208);
  fVar1 = *(float *)&REFG(undefined, 0x1137204);
  fVar19 = *(float *)&REFG(undefined, 0x1137200);
  iVar13 = *param_7;
  iVar4 = *(int *)(iVar13 + 0x10);
  iVar11 = 1;
  if (0 < iVar4) {
    pfVar10 = (float *)param_7[2];
    pfVar9 = pfVar10 + iVar4 * 0xc;
    if (param_3 != 0) {
      pfVar12 = (float *)(param_4 + 0x10);
      do {
        fVar18 = pfVar9[9];
        fVar20 = pfVar9[10];
        fVar21 = pfVar9[0xb];
        fVar22 = pfVar10[9];
        fVar23 = pfVar10[10];
        fVar24 = pfVar10[0xb];
        memcpy(&(auVar31), &(*(gen_v16 *)(pfVar9 + 4)), sizeof(*(gen_v16 *)(pfVar9 + 4)) < sizeof(auVar31) ? sizeof(*(gen_v16 *)(pfVar9 + 4)) : sizeof(auVar31));
        fVar25 = pfVar10[9];
        fVar26 = pfVar10[10];
        fVar27 = pfVar10[0xb];
        pfVar12[4] = (pfVar9[8] - pfVar10[8]) * param_2 + pfVar10[8];
        pfVar12[5] = (fVar18 - fVar22) * param_2 + fVar25;
        pfVar12[6] = (fVar20 - fVar23) * param_2 + fVar26;
        pfVar12[7] = (fVar21 - fVar24) * param_2 + fVar27;
        fVar18 = pfVar9[1];
        fVar20 = pfVar9[2];
        fVar21 = pfVar9[3];
        fVar22 = pfVar10[1];
        fVar23 = pfVar10[2];
        fVar24 = pfVar10[3];
        fVar25 = pfVar10[1];
        fVar26 = pfVar10[2];
        fVar27 = pfVar10[3];
        pfVar12[-4] = (*pfVar9 - *pfVar10) * param_2 + *pfVar10;
        pfVar12[-3] = (fVar18 - fVar22) * param_2 + fVar25;
        pfVar12[-2] = (fVar20 - fVar23) * param_2 + fVar26;
        pfVar12[-1] = (fVar21 - fVar24) * param_2 + fVar27;
        fVar18 = (*(float *)((char *)&auVar31 + 0)) * pfVar10[4];
        fVar20 = (*(float *)((char *)&auVar31 + 4)) * pfVar10[5];
        fVar21 = (*(float *)((char *)&auVar31 + 8)) * pfVar10[6];
        fVar22 = (*(float *)((char *)&auVar31 + 12)) * pfVar10[7];
        fVar23 = fVar21 + fVar18;
        fVar24 = fVar22 + fVar20;
        fVar18 = fVar18 + fVar21;
        fVar20 = fVar20 + fVar22;
        uVar14 = -(uint)(fVar24 + fVar23 < 0.0);
        uVar15 = -(uint)(fVar23 + fVar24 < 0.0);
        uVar16 = -(uint)(fVar20 + fVar18 < 0.0);
        uVar17 = -(uint)(fVar18 + fVar20 < 0.0);
        fVar23 = gen_bits2f((uint)gen_fl2bits(0.0 - param_2) & uVar14 |
                            ~uVar14 & (uint)gen_fl2bits(param_2)) * (*(float *)((char *)&auVar31 + 0)) +
                 (*(float *)&REFG(undefined, 0x1138af0) - param_2) * pfVar10[4];
        fVar24 = gen_bits2f((uint)gen_fl2bits(0.0 - param_2) & uVar15 |
                            ~uVar15 & (uint)gen_fl2bits(param_2)) * (*(float *)((char *)&auVar31 + 4)) +
                 (*(float *)&REFG(undefined, 0x1138af4) - param_2) * pfVar10[5];
        fVar25 = gen_bits2f((uint)gen_fl2bits(0.0 - param_2) & uVar16 |
                            ~uVar16 & (uint)gen_fl2bits(param_2)) * (*(float *)((char *)&auVar31 + 8)) +
                 (*(float *)&REFG(undefined, 0x1138af8) - param_2) * pfVar10[6];
        fVar26 = gen_bits2f((uint)gen_fl2bits(0.0 - param_2) & uVar17 |
                            ~uVar17 & (uint)gen_fl2bits(param_2)) * (*(float *)((char *)&auVar31 + 12)) +
                 (*(float *)&REFG(undefined, 0x1138afc) - param_2) * pfVar10[7];
        fVar18 = fVar25 * fVar25 + fVar23 * fVar23;
        fVar20 = fVar26 * fVar26 + fVar24 * fVar24;
        fVar21 = fVar23 * fVar23 + fVar25 * fVar25;
        fVar22 = fVar24 * fVar24 + fVar26 * fVar26;
        fVar27 = fVar20 + fVar18;
        fVar18 = fVar18 + fVar20;
        fVar28 = fVar22 + fVar21;
        fVar21 = fVar21 + fVar22;
        (*(undefined4 *)((char *)&auVar6 + 4)) = (undefined4)gen_fl2bits(fVar18);
        (*(undefined4 *)((char *)&auVar6 + 0)) = (undefined4)gen_fl2bits(fVar27);
        (*(undefined4 *)((char *)&auVar6 + 8)) = (undefined4)gen_fl2bits(fVar28);
        (*(undefined4 *)((char *)&auVar6 + 12)) = (undefined4)gen_fl2bits(fVar21);
        gen_rsqrtps(&(auVar31), &(auVar31), &(auVar6));
        fVar30 = (*(float *)((char *)&auVar31 + 0));
        fVar32 = (*(float *)((char *)&auVar31 + 4));
        fVar33 = (*(float *)((char *)&auVar31 + 8));
        fVar34 = (*(float *)((char *)&auVar31 + 12));
        fVar20 = *(float *)&REFG(undefined, 0x1137214) * fVar32;
        fVar22 = *(float *)&REFG(undefined, 0x1137218) * fVar33;
        fVar29 = *(float *)&REFG(undefined, 0x113721c) * fVar34;
        *pfVar12 = ((fVar19 - (fVar30 * fVar27) * fVar30) * (*(float *)&REFG(undefined, 0x1137210) * fVar30)) *
                   fVar23;
        pfVar12[1] = ((fVar1 - (fVar32 * fVar18) * fVar32) * fVar20) * fVar24;
        pfVar12[2] = ((fVar2 - (fVar33 * fVar28) * fVar33) * fVar22) * fVar25;
        pfVar12[3] = ((fVar7 - (fVar34 * fVar21) * fVar34) * fVar29) * fVar26;
        pfVar10 = pfVar10 + 0xc;
        pfVar9 = pfVar9 + 0xc;
        pfVar12 = pfVar12 + 0xc;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    iVar11 = 2;
  }
  iVar13 = *(int *)(iVar13 + 0x14);
  if (0 < iVar13) {
    pfVar9 = (float *)param_7[iVar11 * 2];
    uVar14 = 0;
    pfVar10 = pfVar9 + iVar13;
    fVar19 = REFG(float, 0x1087f04) - param_2;
    if (3 < (int)param_5) {
      pfVar12 = (float *)(param_6 + 8);
      iVar13 = (param_5 - 4 >> 2) + 1;
      uVar14 = iVar13 * 4;
      do {
        fVar1 = pfVar10[1];
        pfVar12[-2] = *pfVar10 * param_2 + *pfVar9 * fVar19;
        fVar2 = pfVar10[2];
        pfVar12[-1] = pfVar9[1] * fVar19 + fVar1 * param_2;
        fVar1 = pfVar10[3];
        *pfVar12 = pfVar9[2] * fVar19 + fVar2 * param_2;
        pfVar12[1] = pfVar9[3] * fVar19 + fVar1 * param_2;
        pfVar9 = pfVar9 + 4;
        pfVar10 = pfVar10 + 4;
        pfVar12 = pfVar12 + 4;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    if (uVar14 < param_5) {
      iVar13 = (int)pfVar10 - (int)pfVar9;
      do {
        *(float *)(param_6 + uVar14 * 4) =
             *(float *)(iVar13 + (int)pfVar9) * param_2 + *pfVar9 * fVar19;
        uVar14 = uVar14 + 1;
        pfVar9 = pfVar9 + 1;
      } while (uVar14 < param_5);
    }
  }
  pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar3 = *(undefined4 * PTR32 *)((int)pvVar8 + 4);
  if (puVar3 < *(undefined4 * PTR32 *)((int)pvVar8 + 0xc)) {
    *puVar3 = &REFG(undefined, 0x1136cb0);
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 * PTR32 *)((int)pvVar8 + 4) = puVar3 + 3;
  }
  return 0;
}

/* ref: hkaInterleavedUncompressedAnimation::vf4 */
uint F_00d6b0e0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd6b0e0u, gen_a0, 0u, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  uint param_5 = (uint)gen_a4;
  int param_6 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  LPVOID pvVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 * puVar8;
  LPVOID pvVar9;
  undefined4 * puVar10;
  uint uVar11;
  float10 fVar12;
  float10 fVar13;
  float fVar14;
  
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar10 = *(undefined4 * PTR32 *)((int)pvVar5 + 4);
  if (puVar10 < *(undefined4 * PTR32 *)((int)pvVar5 + 0xc)) {
    *puVar10 = "TtsamplePose";
    uVar1 = rdtsc();
    uVar6 = (undefined4)uVar1;
    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x24)) + 4)) = uVar6;
    (*(longlong *)(gen_frame + 0x24)) = CONCAT44(uVar6,(uint)(*(longlong *)(gen_frame + 0x24)));
    puVar10[1] = uVar6;
    *(undefined4 * PTR32 *)((int)pvVar5 + 4) = puVar10 + 3;
  }
  if (gen_bits2f(param_1[3]) <= param_2) {
    uVar11 = 0;
    if (param_3 != 0) {
      puVar10 = (undefined4 *)(param_4 + 0x20);
      do {
        iVar7 = uVar11 - param_1[4];
        uVar11 = uVar11 + 1;
        puVar8 = ((undefined4 *)GEN_TOP(((iVar7 + param_1[0xb]) * 0x30 + param_1[10])));
        uVar6 = puVar8[1];
        uVar2 = puVar8[2];
        uVar3 = puVar8[3];
        puVar10[-8] = *puVar8;
        puVar10[-7] = uVar6;
        puVar10[-6] = uVar2;
        puVar10[-5] = uVar3;
        uVar6 = puVar8[5];
        uVar2 = puVar8[6];
        uVar3 = puVar8[7];
        puVar10[-4] = puVar8[4];
        puVar10[-3] = uVar6;
        puVar10[-2] = uVar2;
        puVar10[-1] = uVar3;
        uVar6 = puVar8[9];
        uVar2 = puVar8[10];
        uVar3 = puVar8[0xb];
        *puVar10 = puVar8[8];
        puVar10[1] = uVar6;
        puVar10[2] = uVar2;
        puVar10[3] = uVar3;
        puVar10 = puVar10 + 0xc;
      } while (uVar11 < param_3);
    }
    uVar11 = 0;
    if (3 < (int)param_5) {
      puVar10 = (undefined4 *)(param_6 + 8);
      do {
        puVar10[-2] = *((undefined4 *)GEN_TOP((param_1[0xd] + ((param_1[0xe] - param_1[5]) + uVar11) * 4)));
        puVar10[-1] = *((undefined4 *)GEN_TOP((param_1[0xd] + 4 + ((param_1[0xe] - param_1[5]) + uVar11) * 4)))
        ;
        *puVar10 = *((undefined4 *)GEN_TOP((param_1[0xd] + 8 + ((param_1[0xe] - param_1[5]) + uVar11) * 4)));
        puVar10[1] = *((undefined4 *)GEN_TOP((param_1[0xd] + 0xc + ((param_1[0xe] - param_1[5]) + uVar11) * 4)));
        uVar11 = uVar11 + 4;
        puVar10 = puVar10 + 4;
      } while (uVar11 < param_5 - 3);
    }
    for (; uVar11 < param_5; uVar11 = uVar11 + 1) {
      *(undefined4 *)(param_6 + uVar11 * 4) =
           *((undefined4 *)GEN_TOP((param_1[0xd] + ((param_1[0xe] - param_1[5]) + uVar11) * 4)));
    }
    pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
    puVar10 = *(undefined4 * PTR32 *)((int)pvVar5 + 4);
    if (puVar10 < *(undefined4 * PTR32 *)((int)pvVar5 + 0xc)) {
      *puVar10 = &REFG(undefined, 0x1136cb0);
      uVar1 = rdtsc();
      puVar10[1] = (uint)uVar1;
      *(undefined4 * PTR32 *)((int)pvVar5 + 4) = puVar10 + 3;
      return (uint)uVar1;
    }
  }
  else {
    uVar11 = ((code *)*(gen_code32 *)(*param_1 + 0x1c))(param_1);
    fVar12 = (float10)(int)(uVar11 - 1);
    if ((int)(uVar11 - 1) < 0) {
      fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar12 = fVar12 * ((float10)param_2 / ((float10)GEN_TOD(gen_bits2f(param_1[3]))));
    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x24)) + 4)) = ((undefined2)0x27f) | 0xc00;
    uVar11 = uVar11 - 2;
    (*(longlong *)(gen_frame + 0x24)) = (longlong)TRUNC(fVar12);
    lVar4 = (*(longlong *)(gen_frame + 0x24));
    fVar14 = REFG(float, 0x1087f04);
    if ((uint)(*(longlong *)(gen_frame + 0x24)) <= uVar11) {
      fVar13 = (float10)(int)(uint)(*(longlong *)(gen_frame + 0x24));
      if ((int)(uint)(*(longlong *)(gen_frame + 0x24)) < 0) {
        fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar12 = fVar12 - fVar13;
      fVar14 = (float)fVar12;
      uVar11 = (uint)(*(longlong *)(gen_frame + 0x24));
      if (fVar12 < (float10)0) {
        fVar14 = 0.0;
      }
      else if (REFG(float, 0x1087f04) < fVar14) {
        fVar14 = REFG(float, 0x1087f04);
      }
    }
    (*(longlong *)(gen_frame + 0x24)) = lVar4;
    ((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1,uVar11,(undefined4)gen_fl2bits(fVar14),((undefined1 *)(gen_frame + 0xc)),3);
    F_00d6ae50(uVar11,fVar14,param_3,param_4,param_5,param_6,((undefined1 *)(gen_frame + 0xc)),3);
    pvVar9 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
    puVar10 = *(undefined4 * PTR32 *)((int)pvVar9 + 4);
    pvVar5 = pvVar9;
    if (puVar10 < *(undefined4 * PTR32 *)((int)pvVar9 + 0xc)) {
      *puVar10 = &REFG(undefined, 0x1136cb0);
      uVar1 = rdtsc();
      pvVar5 = (LPVOID)uVar1;
      puVar10[1] = pvVar5;
      *(undefined4 * PTR32 *)((int)pvVar9 + 4) = puVar10 + 3;
    }
  }
  return (uint)pvVar5;
}

/* ref: FUN_00d6b330 */
uint F_00d6b330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd6b330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  float * pfVar2;
  undefined1 auVar3 [16];
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
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 in_XMM3 [16] = {0};
  float fVar28;
  int local_8;
  
  F_00d739c0(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x113657c));
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  piVar1 = (int *)((int)this + 0x28);
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0x80000000;
  *(undefined4 *)((int)this + 8) = 1;
  uVar16 = ((code *)*(gen_code32 *)(*param_1 + 0x1c))(param_1);
  iVar18 = *(int *)((int)this + 0x10) * uVar16;
  uVar17 = *(uint *)((int)this + 0x30) & 0x3fffffff;
  if ((int)uVar17 < iVar18) {
    iVar20 = uVar17 * 2;
    iVar19 = iVar18;
    if (iVar18 < iVar20) {
      iVar19 = iVar20;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar1,iVar19,0x30);
  }
  *(int *)((int)this + 0x2c) = iVar18;
  iVar18 = *(int *)((int)this + 0x14) * uVar16;
  uVar17 = *(uint *)((int)this + 0x3c) & 0x3fffffff;
  if ((int)uVar17 < iVar18) {
    iVar20 = uVar17 * 2;
    if (iVar20 <= iVar18) {
      iVar20 = iVar18;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x34,iVar20,4);
  }
  *(int *)((int)this + 0x38) = iVar18;
  local_8 = 0;
  if (0 < (int)uVar16) {
    do {
      if (*(int *)((int)this + 0x14) == 0) {
        iVar18 = 0;
      }
      else {
        iVar18 = *(int *)((int)this + 0x34) + *(int *)((int)this + 0x14) * local_8 * 4;
      }
      ((code *)*(gen_code32 *)(*param_1 + 0xc))
                (param_1,(undefined4)
                         gen_fl2bits(((float)local_8 * *(float *)((int)this + 0xc)) /
                                     (float)(int)(uVar16 - 1)),
                 *(int *)((int)this + 0x10) * local_8 * 0x30 + *piVar1,iVar18);
      local_8 = local_8 + 1;
    } while (local_8 < (int)uVar16);
  }
  fVar15 = *(float *)&REFG(undefined, 0x113721c);
  fVar14 = *(float *)&REFG(undefined, 0x1137218);
  fVar13 = *(float *)&REFG(undefined, 0x1137214);
  fVar12 = *(float *)&REFG(undefined, 0x1137210);
  fVar11 = *(float *)&REFG(undefined, 0x113720c);
  fVar10 = *(float *)&REFG(undefined, 0x1137208);
  fVar9 = *(float *)&REFG(undefined, 0x1137204);
  fVar8 = *(float *)&REFG(undefined, 0x1137200);
  iVar18 = 0;
  if (0 < *(int *)((int)this + 0x2c)) {
    iVar20 = 0;
    do {
      pfVar2 = (float *)(iVar20 + 0x10 + *piVar1);
      fVar4 = *pfVar2;
      fVar5 = pfVar2[1];
      fVar6 = pfVar2[2];
      fVar7 = pfVar2[3];
      pfVar2 = (float *)(iVar20 + 0x10 + *piVar1);
      fVar21 = fVar6 * fVar6 + fVar4 * fVar4;
      fVar22 = fVar7 * fVar7 + fVar5 * fVar5;
      fVar23 = fVar4 * fVar4 + fVar6 * fVar6;
      fVar24 = fVar5 * fVar5 + fVar7 * fVar7;
      fVar25 = fVar22 + fVar21;
      fVar21 = fVar21 + fVar22;
      fVar22 = fVar24 + fVar23;
      fVar23 = fVar23 + fVar24;
      (*(undefined4 *)((char *)&auVar3 + 4)) = (undefined4)gen_fl2bits(fVar21);
      (*(undefined4 *)((char *)&auVar3 + 0)) = (undefined4)gen_fl2bits(fVar25);
      (*(undefined4 *)((char *)&auVar3 + 8)) = (undefined4)gen_fl2bits(fVar22);
      (*(undefined4 *)((char *)&auVar3 + 12)) = (undefined4)gen_fl2bits(fVar23);
      gen_rsqrtps(&(in_XMM3), &(in_XMM3), &(auVar3));
      fVar24 = (*(float *)((char *)&in_XMM3 + 0));
      fVar26 = (*(float *)((char *)&in_XMM3 + 4));
      fVar27 = (*(float *)((char *)&in_XMM3 + 8));
      fVar28 = (*(float *)((char *)&in_XMM3 + 12));
      iVar18 = iVar18 + 1;
      *pfVar2 = fVar4 * ((fVar8 - (fVar24 * fVar25) * fVar24) * (fVar12 * fVar24));
      pfVar2[1] = fVar5 * ((fVar9 - (fVar26 * fVar21) * fVar26) * (fVar13 * fVar26));
      pfVar2[2] = fVar6 * ((fVar10 - (fVar27 * fVar22) * fVar27) * (fVar14 * fVar27));
      pfVar2[3] = fVar7 * ((fVar11 - (fVar28 * fVar23) * fVar28) * (fVar15 * fVar28));
      iVar20 = iVar20 + 0x30;
    } while (iVar18 < *(int *)((int)this + 0x2c));
  }
  return (uint)this;
}

/* ref: FUN_00d6b4d0 */
uint F_00d6b4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd6b4d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  int iVar11;
  int iVar12;
  
  iVar8 = (*(int *)&gen_args[1]);
  F_00d739c0((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[19])REFP(0x113657c));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = 0x80000000;
  uVar7 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) & 0x3fffffff;
  if ((int)uVar7 < *(int *)(iVar8 + 0x2c)) {
    if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) & 0x80000000) == 0) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))),uVar7 * 0x30);
    }
    (*(int *)&gen_args[1]) = *(int *)(iVar8 + 0x2c) * 0x30;
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]));
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = uVar7;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = (*(int *)&gen_args[1]) / 0x30;
  }
  (*(int *)&gen_args[1]) = *(int *)(iVar8 + 0x2c);
  iVar12 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28)));
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = (*(int *)&gen_args[1]);
  iVar2 = *(int *)(iVar8 + 0x28);
  if (0 < (*(int *)&gen_args[1])) {
    puVar10 = *(undefined4 * PTR32 *)(iVar8 + 0x28);
    puVar9 = (undefined4 *)(iVar12 + 0x10);
    do {
      uVar4 = puVar10[1];
      uVar5 = puVar10[2];
      uVar6 = puVar10[3];
      puVar9[-4] = *puVar10;
      puVar9[-3] = uVar4;
      puVar9[-2] = uVar5;
      puVar9[-1] = uVar6;
      puVar1 = ((undefined4 *)GEN_TOP(((iVar2 - iVar12) + (int)puVar9)));
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *puVar9 = *puVar1;
      puVar9[1] = uVar4;
      puVar9[2] = uVar5;
      puVar9[3] = uVar6;
      uVar4 = puVar10[9];
      uVar5 = puVar10[10];
      uVar6 = puVar10[0xb];
      puVar9[4] = puVar10[8];
      puVar9[5] = uVar4;
      puVar9[6] = uVar5;
      puVar9[7] = uVar6;
      puVar10 = puVar10 + 0xc;
      puVar9 = puVar9 + 0xc;
      (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) + -1;
    } while ((*(int *)&gen_args[1]) != 0);
  }
  uVar7 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c)));
  if ((int)(uVar7 & 0x3fffffff) < *(int *)(iVar8 + 0x38)) {
    if (-1 < (int)uVar7) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))),uVar7 * 4);
    }
    (*(int *)&gen_args[1]) = *(int *)(iVar8 + 0x38) * 4;
    uVar7 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]));
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = uVar7;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
  }
  iVar12 = *(int *)(iVar8 + 0x38);
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)));
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = iVar12;
  iVar3 = *(int *)(iVar8 + 0x34);
  iVar8 = 0;
  if (3 < iVar12) {
    iVar11 = (iVar12 - 4U >> 2) + 1;
    iVar8 = iVar11 * 4;
    puVar9 = (undefined4 *)(iVar2 + 4);
    puVar10 = (undefined4 *)(iVar3 + 0xc);
    do {
      puVar9[-1] = puVar10[-3];
      iVar11 = iVar11 + -1;
      *puVar9 = *((undefined4 *)GEN_TOP(((iVar3 - iVar2) + -0x10 + (int)(puVar9 + 4))));
      puVar9[1] = puVar10[-1];
      puVar9[2] = *puVar10;
      puVar9 = puVar9 + 4;
      puVar10 = puVar10 + 4;
    } while (iVar11 != 0);
  }
  if (iVar8 < iVar12) {
    iVar12 = iVar12 - iVar8;
    puVar9 = (undefined4 *)(iVar2 + iVar8 * 4);
    do {
      iVar12 = iVar12 + -1;
      *puVar9 = *((undefined4 *)GEN_TOP(((iVar3 - iVar2) + (int)puVar9)));
      puVar9 = puVar9 + 1;
    } while (iVar12 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d6b6b0 */
uint F_00d6b6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd6b6b0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00d6b6c0 */
uint F_00d6b6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd6b6c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d6b700 */
unsigned int F_00d6b700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd6b700u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (3 < param_3) {
    iVar3 = (param_3 - 4U >> 2) + 1;
    iVar4 = iVar3 * 4;
    puVar1 = (undefined4 *)(param_1 + 4);
    puVar2 = (undefined4 *)(param_2 + 0xc);
    do {
      puVar1[-1] = puVar2[-3];
      iVar3 = iVar3 + -1;
      *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - param_1) + -0x10 + (int)(puVar1 + 4))));
      puVar1[1] = puVar2[-1];
      puVar1[2] = *puVar2;
      puVar1 = puVar1 + 4;
      puVar2 = puVar2 + 4;
    } while (iVar3 != 0);
  }
  if (iVar4 < param_3) {
    iVar3 = param_3 - iVar4;
    puVar1 = (undefined4 *)(param_1 + iVar4 * 4);
    do {
      iVar3 = iVar3 + -1;
      *puVar1 = *((undefined4 *)GEN_TOP(((int)puVar1 + (param_2 - param_1))));
      puVar1 = puVar1 + 1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00d6b780 */
uint F_00d6b780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd6b780u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = 0x40;
  return param_2;
}

/* ref: FUN_00d6b7a0 */
uint F_00d6b7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd6b7a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(undefined4 *)this = param_1;
  *(uint *)((int)this + 4) = param_2 * 0x30;
  return param_2;
}

/* ref: FUN_00d6b7c0 */
uint F_00d6b7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd6b7c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  *(undefined4 *)this = param_1;
  *(int *)((int)this + 4) = param_2 * 4;
  return param_2 * 4;
}

/* ref: FUN_00d6b7e0 */
uint F_00d6b7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd6b7e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined4 * puVar7;
  int iVar8;
  int iVar9;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  uVar4 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if ((int)(uVar4 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[2])[1]) {
    if (-1 < (int)uVar4) {
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x10))))((*(int * PTR32 *)&gen_args[1]),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),uVar4 * 4);
    }
    (*(int * PTR32 *)&gen_args[2]) = (int *)(piVar3[1] * 4);
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xc))))((*(int * PTR32 *)&gen_args[1]),&(*(int * PTR32 *)&gen_args[2]));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar4;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[2]) + ((int)(*(int * PTR32 *)&gen_args[2]) >> 0x1f & 3U)) >> 2;
  }
  iVar9 = piVar3[1];
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar9;
  iVar1 = *piVar3;
  iVar2 = *(int *)(*(undefined * PTR32 *)&gen_args[0]);
  iVar6 = 0;
  if (3 < iVar9) {
    iVar8 = (iVar9 - 4U >> 2) + 1;
    iVar6 = iVar8 * 4;
    puVar5 = (undefined4 *)(iVar2 + 4);
    puVar7 = (undefined4 *)(iVar1 + 0xc);
    do {
      puVar5[-1] = puVar7[-3];
      iVar8 = iVar8 + -1;
      *puVar5 = *((undefined4 *)GEN_TOP(((iVar1 - iVar2) + -0x10 + (int)(puVar5 + 4))));
      puVar5[1] = puVar7[-1];
      puVar5[2] = *puVar7;
      puVar5 = puVar5 + 4;
      puVar7 = puVar7 + 4;
    } while (iVar8 != 0);
  }
  if (iVar6 < iVar9) {
    iVar9 = iVar9 - iVar6;
    puVar5 = (undefined4 *)(iVar2 + iVar6 * 4);
    do {
      iVar9 = iVar9 + -1;
      *puVar5 = *((undefined4 *)GEN_TOP(((int)puVar5 + (iVar1 - iVar2))));
      puVar5 = puVar5 + 1;
    } while (iVar9 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d6b8d0 */
unsigned int F_00d6b8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd6b8d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  int iVar6;
  
  if (0 < param_3) {
    puVar5 = (undefined4 *)(param_1 + 0x10);
    iVar6 = (int)param_2 - param_1;
    do {
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      puVar5[-4] = *param_2;
      puVar5[-3] = uVar2;
      puVar5[-2] = uVar3;
      puVar5[-1] = uVar4;
      puVar1 = (undefined4 *)(iVar6 + (int)puVar5);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar5 = *puVar1;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      uVar2 = param_2[9];
      uVar3 = param_2[10];
      uVar4 = param_2[0xb];
      puVar5[4] = param_2[8];
      puVar5[5] = uVar2;
      puVar5[6] = uVar3;
      puVar5[7] = uVar4;
      param_2 = param_2 + 0xc;
      puVar5 = puVar5 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 0;
}

/* ref: FUN_00d6b920 */
uint F_00d6b920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd6b920u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined4 * puVar7;
  int iVar8;
  int iVar9;
  
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  uVar4 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if ((int)(uVar4 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[1])[1]) {
    if (-1 < (int)uVar4) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),uVar4 * 4);
    }
    (*(int * PTR32 *)&gen_args[1]) = (int *)(piVar3[1] * 4);
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[1]));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar4;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
  }
  iVar9 = piVar3[1];
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar9;
  iVar1 = *piVar3;
  iVar2 = *(int *)(*(undefined * PTR32 *)&gen_args[0]);
  iVar6 = 0;
  if (3 < iVar9) {
    iVar8 = (iVar9 - 4U >> 2) + 1;
    iVar6 = iVar8 * 4;
    puVar5 = (undefined4 *)(iVar2 + 4);
    puVar7 = (undefined4 *)(iVar1 + 0xc);
    do {
      puVar5[-1] = puVar7[-3];
      iVar8 = iVar8 + -1;
      *puVar5 = *((undefined4 *)GEN_TOP(((iVar1 - iVar2) + -0x10 + (int)(puVar5 + 4))));
      puVar5[1] = puVar7[-1];
      puVar5[2] = *puVar7;
      puVar5 = puVar5 + 4;
      puVar7 = puVar7 + 4;
    } while (iVar8 != 0);
  }
  if (iVar6 < iVar9) {
    iVar9 = iVar9 - iVar6;
    puVar5 = (undefined4 *)(iVar2 + iVar6 * 4);
    do {
      iVar9 = iVar9 + -1;
      *puVar5 = *((undefined4 *)GEN_TOP(((int)puVar5 + (iVar1 - iVar2))));
      puVar5 = puVar5 + 1;
    } while (iVar9 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d6ba10 */
uint F_00d6ba10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd6ba10u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int * piVar5;
  undefined4 * puVar6;
  uint uVar7;
  undefined4 * puVar8;
  int iVar9;
  int iVar10;
  
  piVar5 = (*(int * PTR32 *)&gen_args[1]);
  uVar7 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) & 0x3fffffff;
  if ((int)uVar7 < (*(int * PTR32 *)&gen_args[2])[1]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x10))))((*(int * PTR32 *)&gen_args[1]),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),uVar7 * 0x30);
    }
    (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[1] * 0x30)));
    uVar7 = ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5,&(*(int * PTR32 *)&gen_args[1]));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar7;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (int)(*(int * PTR32 *)&gen_args[1]) / 0x30;
  }
  iVar10 = (*(int * PTR32 *)&gen_args[2])[1];
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar10;
  puVar8 = ((undefined4 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2])));
  if (0 < iVar10) {
    puVar6 = ((undefined4 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
    iVar9 = (int)puVar8 - *(int *)(*(undefined * PTR32 *)&gen_args[0]);
    do {
      uVar2 = puVar8[1];
      uVar3 = puVar8[2];
      uVar4 = puVar8[3];
      puVar6[-4] = *puVar8;
      puVar6[-3] = uVar2;
      puVar6[-2] = uVar3;
      puVar6[-1] = uVar4;
      puVar1 = (undefined4 *)(iVar9 + (int)puVar6);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar6 = *puVar1;
      puVar6[1] = uVar2;
      puVar6[2] = uVar3;
      puVar6[3] = uVar4;
      uVar2 = puVar8[9];
      uVar3 = puVar8[10];
      uVar4 = puVar8[0xb];
      puVar6[4] = puVar8[8];
      puVar6[5] = uVar2;
      puVar6[6] = uVar3;
      puVar6[7] = uVar4;
      puVar8 = puVar8 + 0xc;
      puVar6 = puVar6 + 0xc;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d6bac0 */
uint F_00d6bac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd6bac0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int * piVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  int iVar9;
  int iVar10;
  
  piVar5 = (*(int * PTR32 *)&gen_args[1]);
  uVar6 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) & 0x3fffffff;
  if ((int)uVar6 < (*(int * PTR32 *)&gen_args[1])[1]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),uVar6 * 0x30);
    }
    (*(int * PTR32 *)&gen_args[1]) = (int *)(piVar5[1] * 0x30);
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[1]));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar6;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (int)(*(int * PTR32 *)&gen_args[1]) / 0x30;
  }
  iVar10 = piVar5[1];
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar10;
  puVar8 = (undefined4 *)*piVar5;
  if (0 < iVar10) {
    puVar7 = ((undefined4 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
    iVar9 = (int)puVar8 - *(int *)(*(undefined * PTR32 *)&gen_args[0]);
    do {
      uVar2 = puVar8[1];
      uVar3 = puVar8[2];
      uVar4 = puVar8[3];
      puVar7[-4] = *puVar8;
      puVar7[-3] = uVar2;
      puVar7[-2] = uVar3;
      puVar7[-1] = uVar4;
      puVar1 = (undefined4 *)(iVar9 + (int)puVar7);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar7 = *puVar1;
      puVar7[1] = uVar2;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      uVar2 = puVar8[9];
      uVar3 = puVar8[10];
      uVar4 = puVar8[0xb];
      puVar7[4] = puVar8[8];
      puVar7[5] = uVar2;
      puVar7[6] = uVar3;
      puVar7[7] = uVar4;
      puVar8 = puVar8 + 0xc;
      puVar7 = puVar7 + 0xc;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d6bba0 */
uint F_00d6bba0(unsigned int gen_a0)
{
  GEN_ENTER(0xd6bba0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d91a80(param_1);
  return uVar1;
}

/* ref: hkaMirroredAnimation::vf3 */
uint F_00d6bbc0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd6bbc0u, gen_a0, 0u, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))
                    ((undefined4)gen_fl2bits(param_2),param_1[4],param_3,param_1[5],param_4);
  return uVar1;
}

/* ref: hkaMirroredAnimation::vf6 */
uint F_00d6bbf0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd6bbf0u, gen_a0, 0u, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x28) + 0x18))))
                    ((undefined4)gen_fl2bits(param_2),param_3,param_4,param_5);
  return uVar1;
}

/* ref: hkaMirroredAnimation::vf7 */
uint F_00d6bc20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd6bc20u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x28) + 0x1c))))
                    (*(int * PTR32 *)(this + 0x28),param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: hkaMirroredAnimation::vf8 */
uint F_00d6bc30(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xd6bc30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x28) + 0x20))))(param_2,(undefined4)gen_fl2bits(param_3))
  ;
  return uVar1 + 6;
}

/* ref: FUN_00d6bc60 */
ushort F_00d6bc60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd6bc60u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  if (in_ecx == 0) {
    return (ushort)in_eax;
  }
  return *(ushort *)(in_ecx + in_eax * 2);
}

/* ref: hkaMirroredAnimation::vf15 */
uint F_00d6bc70(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd6bc70u, gen_a0, 0u, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  uint uVar2;
  uint * this;
  uint uVar3;
  
  uVar1 = F_00d736c0(param_1,param_2,param_3,param_4,param_5);
  if (uVar1 != 0) {
    this = (uint *)(param_4 + 8);
    uVar3 = uVar1;
    do {
      uVar2 = F_00d86260(*(undefined * PTR32 *)(param_1 + 0x30),*this & 0xfffffffe);
      F_00d91520(this,uVar2);
      this = this + 3;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return uVar1;
}

/* ref: hkaMirroredAnimation::vf10 */
uint F_00d6bce0(unsigned int gen_a0)
{
  GEN_ENTER(0xd6bce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x28) + 0x28))))(*(int * PTR32 *)(this + 0x28));
  iVar1 = *(int *)this;
  uVar3 = ((code *)*(gen_code32 *)(iVar1 + 0x20))(this,0,0);
  ((code *)*(gen_code32 *)(iVar1 + 0x24))(this,0,0,((byte *)(gen_frame + 0xc)),uVar3);
  return (((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 40)) & 0xf) + 0xf + (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 44)) & 0xfffffff0) +
         uVar2 + (((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) & 0xf) + 0xf + (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 4)) & 0xfffffff0) +
         (((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) & 0xf) + 0xf + (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12)) & 0xfffffff0) +
         (((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 16)) & 0xf) + 0xf + (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 20)) & 0xfffffff0) +
         (((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24)) & 0xf) + 0xf + (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 28)) & 0xfffffff0) +
         (((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 32)) & 0xf) + 0xf + (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 36)) & 0xfffffff0);
}

/* ref: FUN_00d6bda0 */
unsigned int F_00d6bda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd6bda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  int in_eax;
  
  in_eax = 0;
  if (0 < param_2) {
    do {
      uVar1 = F_00d6bc60(in_eax,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2c) + 0x10))));
      if (-1 < (short)uVar1) {
        F_00d86470(*(undefined * PTR32 *)((int)this + 0x30),param_1,(int)(short)uVar1,
                     (uint)((char)param_3 != '\0'));
      }
      in_eax = in_eax + 1;
      param_1 = param_1 + 0x30;
    } while (in_eax < param_2);
  }
  return 0;
}

/* ref: FUN_00d6bdf0 */
unsigned int F_00d6bdf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd6bdf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  short sVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      sVar1 = *(short *)(param_2 + uVar3 * 2);
      if (((-1 < sVar1) && ((int)sVar1 < *((int *)GEN_TOP((*(int *)((int)this + 0x28) + 0x10))))) &&
         (uVar2 = F_00d6bc60((int)sVar1,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2c) + 0x10)))),
         -1 < (short)uVar2)) {
        F_00d86470(*(undefined * PTR32 *)((int)this + 0x30),param_1,(int)(short)uVar2,
                     (uint)((char)param_4 != '\0'));
      }
      uVar3 = uVar3 + 1;
      param_1 = param_1 + 0x30;
    } while (uVar3 < param_3);
  }
  return 0;
}

/* ref: FUN_00d6be50 */
uint F_00d6be50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd6be50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  undefined4 in_ecx;
  ushort uVar2;
  undefined * this;
  undefined * pvVar3;
  uint uVar4;
  uint in_eax;
  
  iVar1 = param_1[2];
  in_ecx = *param_1;
  this = (undefined *)F_00d86330(param_1 + 4);
  in_eax = 0;
  pvVar3 = this;
  if (param_2 != 0) {
    do {
      uVar4 = (uint)(*(char *)(iVar1 + 0x34) != '\0');
      uVar2 = F_00d6bc60(in_eax,in_ecx);
      pvVar3 = (undefined *)F_00d86470(this,param_3,(int)(short)uVar2,uVar4);
      in_eax = in_eax + 1;
      param_3 = param_3 + 0x30;
    } while (in_eax < param_2);
  }
  return (uint)pvVar3;
}

/* ref: hkaMirroredAnimation::vf4 */
uint F_00d6bec0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd6bec0u, gen_a0, 0u, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 * puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *(undefined4 * PTR32 *)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 * PTR32 *)((int)pvVar3 + 0xc)) {
    *puVar1 = "LtMirrorSampleTracks";
    puVar1[3] = "StSampleChildTracks";
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 * PTR32 *)((int)pvVar3 + 4) = puVar1 + 4;
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0x28) + 0x10))))
            ((undefined4)gen_fl2bits(param_2),param_3,param_4,param_5,param_6);
  F_00d6bda0(param_1,param_4,param_3,(uint)*(byte *)((int)param_1 + 0x34));
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *(undefined4 * PTR32 *)((int)pvVar4 + 4);
  pvVar3 = pvVar4;
  if (puVar1 < *(undefined4 * PTR32 *)((int)pvVar4 + 0xc)) {
    *puVar1 = &REFG(undefined, 0x1134dd0);
    uVar2 = rdtsc();
    pvVar3 = (LPVOID)uVar2;
    puVar1[1] = pvVar3;
    *(undefined4 * PTR32 *)((int)pvVar4 + 4) = puVar1 + 3;
  }
  return (uint)pvVar3;
}

/* ref: hkaMirroredAnimation::vf5 */
unsigned int F_00d6bf70(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd6bf70u, gen_a0, 0u, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 * puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *(undefined4 * PTR32 *)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 * PTR32 *)((int)pvVar3 + 0xc)) {
    *puVar1 = "LtMirrorSampleTracks";
    puVar1[3] = "StSampleChildTracks";
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 * PTR32 *)((int)pvVar3 + 4) = puVar1 + 4;
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0x28) + 0x14))))
            ((undefined4)gen_fl2bits(param_2),param_3,param_4,param_5);
  F_00d6bdf0(param_1,param_5,param_3,param_4,(uint)*(byte *)((int)param_1 + 0x34));
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *(undefined4 * PTR32 *)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 * PTR32 *)((int)pvVar3 + 0xc)) {
    *puVar1 = &REFG(undefined, 0x1134dd0);
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 * PTR32 *)((int)pvVar3 + 4) = puVar1 + 3;
  }
  return 0;
}

/* ref: hkaMirroredAnimation::vf9 */
uint F_00d6c020(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd6c020u, gen_a0, gen_a1, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x28) + 0x24))))
            (param_2,(undefined4)gen_fl2bits(param_3),param_4 + 0xc,param_5 + -6);
  iVar1 = *(int *)(param_1 + 0x2c);
  if (*(int *)(iVar1 + 0x14) < 1) {
    *param_4 = 0;
    param_4[1] = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 0x14);
    *param_4 = *(undefined4 *)(iVar1 + 0x10);
    param_4[1] = iVar2 * 2;
  }
  param_4[2] = param_1;
  param_4[3] = 0x38;
  uVar3 = F_00d86a10(*(undefined * PTR32 *)(param_1 + 0x30),param_4 + 4);
  return uVar3;
}

/* ref: FUN_00d6c0a0 */
unsigned int F_00d6c0a0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xd6c0a0u, gen_a0, 0u, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int param_7 = (int)gen_a6;
  int param_8 = (int)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 * puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  int iVar4;
  
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *(undefined4 * PTR32 *)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 * PTR32 *)((int)pvVar3 + 0xc)) {
    *puVar1 = "LtSampleMirrorChunk";
    puVar1[3] = "StSampleChildChunks";
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 * PTR32 *)((int)pvVar3 + 4) = puVar1 + 4;
  }
  iVar4 = param_7 + 0x30;
  switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((*(int *)(param_7 + 0x30) + 8))))) {
  case 1: ;
    F_00d6ae50(param_1,param_2,param_3,param_9,param_4,param_10,iVar4,param_8 + -6);
    break;
  case 3: ;
    F_00d6de50(param_1,param_2,param_3,param_9,param_4,param_10,iVar4,param_8 + -6);
    break;
  case 4: ;
    F_00d693e0(param_1,param_2,param_3,param_4,param_5,param_6,iVar4,param_8 + -6,param_9,param_10
                );
    break;
  case 5: ;
    F_00d721f0(param_1,param_2,param_3,param_4,param_5,param_6,iVar4,param_8 + -6,param_9,param_10
                );
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *(undefined4 * PTR32 *)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 * PTR32 *)((int)pvVar3 + 0xc)) {
    *puVar1 = "StMirrorTracks";
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 * PTR32 *)((int)pvVar3 + 4) = puVar1 + 3;
  }
  F_00d6be50(param_7,param_3,param_9);
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *(undefined4 * PTR32 *)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 * PTR32 *)((int)pvVar3 + 0xc)) {
    *puVar1 = &REFG(undefined, 0x1134dd0);
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 * PTR32 *)((int)pvVar3 + 4) = puVar1 + 3;
  }
  return 0;
}

/* ref: FUN_00d6c240 */
uint F_00d6c240(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xd6c240u, gen_a0, 0u, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int param_7 = (int)gen_a6;
  int param_8 = (int)gen_a7;
  undefined4 * puVar1;
  int iVar2;
  undefined8 uVar3;
  LPVOID pvVar4;
  LPVOID pvVar5;
  
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *(undefined4 * PTR32 *)((int)pvVar4 + 4);
  if (puVar1 < *(undefined4 * PTR32 *)((int)pvVar4 + 0xc)) {
    *puVar1 = "LtSampleMirrorChunk";
    puVar1[3] = "StSampleChildChunks";
    uVar3 = rdtsc();
    puVar1[1] = (int)uVar3;
    *(undefined4 * PTR32 *)((int)pvVar4 + 4) = puVar1 + 4;
  }
  iVar2 = *((int *)GEN_TOP((*(int *)(param_7 + 0x30) + 8)));
  if (iVar2 == 1) {
    F_00d6ae50(param_1,param_2,param_3,param_4,param_5,param_6,param_7 + 0x30,param_8 + -6);
  }
  else if (iVar2 == 3) {
    F_00d6de50(param_1,param_2,param_3,param_4,param_5,param_6,param_7 + 0x30,param_8 + -6);
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *(undefined4 * PTR32 *)((int)pvVar4 + 4);
  if (puVar1 < *(undefined4 * PTR32 *)((int)pvVar4 + 0xc)) {
    *puVar1 = "StMirrorTracks";
    uVar3 = rdtsc();
    puVar1[1] = (int)uVar3;
    *(undefined4 * PTR32 *)((int)pvVar4 + 4) = puVar1 + 3;
  }
  F_00d6be50(param_7,param_3,param_4);
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar1 = *(undefined4 * PTR32 *)((int)pvVar5 + 4);
  pvVar4 = pvVar5;
  if (puVar1 < *(undefined4 * PTR32 *)((int)pvVar5 + 0xc)) {
    *puVar1 = &REFG(undefined, 0x1134dd0);
    uVar3 = rdtsc();
    pvVar4 = (LPVOID)uVar3;
    puVar1[1] = pvVar4;
    *(undefined4 * PTR32 *)((int)pvVar5 + 4) = puVar1 + 3;
  }
  return (uint)pvVar4;
}

/* ref: hkaMirroredAnimation::vf12 */
uint F_00d6c360(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd6c360u, gen_a0, 0u, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x18) + 0xc))))((undefined4)gen_fl2bits(param_2),param_3);
  uVar1 = F_00d86720(*(undefined * PTR32 *)(param_1 + 0x30),param_3);
  return uVar1;
}

/* ref: hkaMirroredAnimation::vf13 */
uint F_00d6c390(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0xd6c390u, gen_a0, 0u, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  uint uVar1;
  
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x18) + 0x10))))
            (*(int * PTR32 *)(param_1 + 0x18),(undefined4)gen_fl2bits(param_2),
             (undefined4)gen_fl2bits(param_3));
  uVar1 = F_00d86720(*(undefined * PTR32 *)(param_1 + 0x30),param_5);
  return uVar1;
}

/* ref: FUN_00d6c3f0 */
uint F_00d6c3f0(unsigned int gen_a0)
{
  GEN_ENTER(0xd6c3f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  ushort * puVar2;
  ushort uVar3;
  LPVOID pvVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined2 * puVar7;
  int iVar8;
  int iVar9;
  undefined * pvVar10;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar5 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar4 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar4 + 0x2c),0x2c)));
  *(undefined2 *)(puVar5 + 1) = 0x2c;
  iVar9 = *(int *)((int)this + 0x2c);
  *(undefined2 *)((int)puVar5 + 6) = 1;
  *puVar5 = (*(undefined * PTR32 (*)[3])REFP(0x1136b9c));
  F_00d914e0(puVar5 + 2,iVar9 + 8);
  if (*(undefined * PTR32 *)(iVar9 + 0xc) != (undefined *)0x0) {
    F_00d919e0(*(undefined * PTR32 *)(iVar9 + 0xc));
  }
  puVar5[3] = *(undefined4 *)(iVar9 + 0xc);
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar1 = puVar5 + 4;
  puVar5[6] = 0x80000000;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0x80000000;
  *(undefined1 *)(puVar5 + 10) = *(undefined1 *)(iVar9 + 0x28);
  uVar6 = puVar5[6] & 0x3fffffff;
  if ((int)uVar6 < *(int *)(iVar9 + 0x14)) {
    if ((puVar5[6] & 0x80000000) == 0) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*puVar1,uVar6 * 2);
    }
    (*(int *)(gen_frame + 0x4)) = *(int *)(iVar9 + 0x14) * 2;
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x4)));
    *puVar1 = uVar6;
    puVar5[6] = (*(int *)(gen_frame + 0x4)) / 2;
  }
  puVar2 = *(ushort * PTR32 *)(iVar9 + 0x14);
  puVar7 = (undefined2 *)*puVar1;
  puVar5[5] = puVar2;
  if (0 < (int)puVar2) {
    iVar8 = *(int *)(iVar9 + 0x10) - (int)puVar7;
    (*(ushort * PTR32 *)(gen_frame + 0x0)) = puVar2;
    do {
      *puVar7 = *(undefined2 *)(iVar8 + (int)puVar7);
      puVar7 = puVar7 + 1;
      (*(ushort * PTR32 *)(gen_frame + 0x0)) = (ushort *)((int)(*(ushort * PTR32 *)(gen_frame + 0x0)) + -1);
    } while ((*(ushort * PTR32 *)(gen_frame + 0x0)) != (ushort *)0x0);
  }
  uVar6 = puVar5[9] & 0x3fffffff;
  if ((int)uVar6 < *(int *)(iVar9 + 0x20)) {
    if (-1 < (int)puVar5[9]) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),puVar5[7],uVar6 * 2);
    }
    (*(ushort * PTR32 *)(gen_frame + 0x0)) = ((ushort *)GEN_TOP((*(int *)(iVar9 + 0x20) * 2)));
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(ushort * PTR32 *)(gen_frame + 0x0)));
    puVar5[7] = uVar6;
    puVar5[9] = (int)((int)(uintptr_t)(*(ushort * PTR32 *)(gen_frame + 0x0))) / 2;
  }
  pvVar10 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  iVar8 = *(int *)(iVar9 + 0x20);
  puVar7 = (undefined2 *)puVar5[7];
  puVar5[8] = iVar8;
  if (0 < iVar8) {
    iVar9 = *(int *)(iVar9 + 0x1c) - (int)puVar7;
    do {
      *puVar7 = *(undefined2 *)(iVar9 + (int)puVar7);
      puVar7 = puVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  F_00d919e0((*(undefined * PTR32 *)(gen_frame + 0x8)));
  if ((undefined *)puVar5[3] != (undefined *)0x0) {
    F_00d91a80((undefined *)puVar5[3]);
  }
  puVar5[3] = pvVar10;
  if (*((int *)GEN_TOP((*(int *)((int)pvVar10 + 0x2c) + 0x14))) == 0) {
    iVar9 = *(int *)((int)pvVar10 + 0x10);
    if ((int)(puVar5[6] & 0x3fffffff) < iVar9) {
      iVar8 = (puVar5[6] & 0x3fffffff) * 2;
      if (iVar8 <= iVar9) {
        iVar8 = iVar9;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),puVar1,iVar8,2);
    }
    puVar5[5] = iVar9;
    iVar9 = 0;
    if (0 < (int)puVar5[5]) {
      do {
        (*(ushort * PTR32 *)(gen_frame + 0x0)) = (ushort *)(*puVar1 + iVar9 * 2);
        uVar3 = F_00d86120(*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x30),iVar9);
        iVar9 = iVar9 + 1;
        *(*(ushort * PTR32 *)(gen_frame + 0x0)) = uVar3;
      } while (iVar9 < (int)puVar5[5]);
      return (uint)puVar5;
    }
  }
  else {
    (*(int *)(gen_frame + 0x4)) = 0;
    if (0 < (int)puVar5[5]) {
      do {
        uVar6 = *puVar1;
        iVar9 = (*(int *)(gen_frame + 0x4)) * 2;
        uVar3 = F_00d86120(*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x30),
                             (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)pvVar10 + 0x2c) + 0x10))) + iVar9))));
        *(ushort *)(uVar6 + iVar9) = uVar3;
        (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
        pvVar10 = (*(undefined * PTR32 *)(gen_frame + 0x8));
      } while ((*(int *)(gen_frame + 0x4)) < (int)puVar5[5]);
    }
  }
  return (uint)puVar5;
}

/* ref: FUN_00d6c640 */
uint F_00d6c640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd6c640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00d739c0(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x11372b4));
  *(undefined4 *)((int)this + 8) = 2;
  *(undefined * PTR32 *)((int)this + 0x28) = param_1;
  *(int *)((int)this + 0x2c) = param_2;
  *(undefined4 *)((int)this + 0x30) = param_3;
  F_00d919e0(param_1);
  F_00d919e0(*(undefined * PTR32 *)((int)this + 0x30));
  F_00d919e0(*(undefined * PTR32 *)((int)this + 0x2c));
  *(bool *)((int)this + 0x34) = *(char *)(param_2 + 0x28) == '\x01';
  return (uint)this;
}

/* ref: FUN_00d6c6a0 */
uint F_00d6c6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd6c6a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x11372b4));
  F_00d91a80(*(undefined * PTR32 *)((int)this + 0x28));
  F_00d91a80(*(undefined * PTR32 *)((int)this + 0x30));
  F_00d91a80(*(undefined * PTR32 *)((int)this + 0x2c));
  uVar1 = F_00d3e6d0(this);
  return uVar1;
}

/* ref: FUN_00d6c6d0 */
unsigned int F_00d6c6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd6c6d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d6c730 */
uint F_00d6c730(unsigned int gen_a0)
{
  GEN_ENTER(0xd6c730u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00d6c760 */
uint F_00d6c760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd6c760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  *(undefined4 *)this = param_1;
  *(int *)((int)this + 4) = param_2 * 2;
  return param_2 * 2;
}

/* ref: FUN_00d6c780 */
uint F_00d6c780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd6c780u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = 0x38;
  return param_2;
}

/* ref: FUN_00d6c7a0 */
uint F_00d6c7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd6c7a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  undefined2 * puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (*(int *)&gen_args[1]);
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[3])REFP(0x1136b9c));
  F_00d914e0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),(*(int *)&gen_args[1]) + 8);
  if (*(undefined * PTR32 *)(iVar5 + 0xc) != (undefined *)0x0) {
    F_00d919e0(*(undefined * PTR32 *)(iVar5 + 0xc));
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = *(undefined4 *)(iVar5 + 0xc);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0x80000000;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = *(undefined1 *)(iVar5 + 0x28);
  uVar1 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) & 0x3fffffff;
  if ((int)uVar1 < *(int *)(iVar5 + 0x14)) {
    if ((*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) & 0x80000000) == 0) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),uVar1 * 2);
    }
    (*(int *)&gen_args[1]) = *(int *)(iVar5 + 0x14) * 2;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]));
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = uVar1;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = (*(int *)&gen_args[1]) / 2;
  }
  iVar3 = *(int *)(iVar5 + 0x14);
  puVar2 = *((undefined2 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = iVar3;
  if (0 < iVar3) {
    iVar4 = *(int *)(iVar5 + 0x10) - (int)puVar2;
    do {
      *puVar2 = *(undefined2 *)(iVar4 + (int)puVar2);
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar1 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) & 0x3fffffff;
  if ((int)uVar1 < *(int *)(iVar5 + 0x20)) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24)))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),uVar1 * 2);
    }
    (*(int *)&gen_args[1]) = *(int *)(iVar5 + 0x20) * 2;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]));
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = uVar1;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = (*(int *)&gen_args[1]) / 2;
  }
  iVar3 = *(int *)(iVar5 + 0x20);
  puVar2 = *((undefined2 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)));
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = iVar3;
  if (0 < iVar3) {
    iVar5 = *(int *)(iVar5 + 0x1c) - (int)puVar2;
    do {
      *puVar2 = *(undefined2 *)(iVar5 + (int)puVar2);
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d6c900 */
uint F_00d6c900(unsigned int gen_a0)
{
  GEN_ENTER(0xd6c900u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkaMirroredAnimation::vf0 */
uint F_00d6c930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd6c930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d6c6a0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d6c970 */
byte F_00d6c970(unsigned int gen_a0)
{
  GEN_ENTER(0xd6c970u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = *(byte *)*param_1;
  *param_1 = (byte *)*param_1 + 1;
  return bVar1;
}

/* ref: FUN_00d6c980 */
uint F_00d6c980(unsigned int gen_a0)
{
  GEN_ENTER(0xd6c980u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  ushort uVar1;
  
  uVar1 = *(ushort *)*param_1;
  *param_1 = (ushort *)*param_1 + 1;
  return (uint)uVar1;
}

/* ref: FUN_00d6c9a0 */
uint F_00d6c9a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd6c9a0u, gen_a0, 0u, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *param_1;
  *param_1 = uVar1 + 4;
  return uVar1 + 4;
}

/* ref: FUN_00d6c9c0 */
unsigned int F_00d6c9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd6c9c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  *param_2 = (*param_2 - 1) + param_1 & ~(param_1 - 1U);
  return 0;
}

/* ref: FUN_00d6c9e0 */
uint F_00d6c9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd6c9e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ~(*(int *)(&REFG(undefined, 0x1137300) + param_1 * 4) - 1U);
  *param_2 = (*param_2 - 1) + *(int *)(&REFG(undefined, 0x1137300) + param_1 * 4) & uVar1;
  return uVar1;
}

/* ref: FUN_00d6ca00 */
uint F_00d6ca00(unsigned int gen_a0)
{
  GEN_ENTER(0xd6ca00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x1137318) + param_1 * 4);
}

/* ref: FUN_00d6ca10 */
uint F_00d6ca10(unsigned int gen_a0)
{
  GEN_ENTER(0xd6ca10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(&REFG(undefined, 0x1137330) + param_1 * 4);
}

/* ref: FUN_00d6ca20 */
float10 F_00d6ca20(float gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd6ca20u, 0u, 0u, gen_a2, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return (float10)param_1 +
         ((float10)(ushort)param_3 * (float10)REFG(float, 0x1137338)) * ((float10)param_2 - (float10)param_1);
}

/* ref: FUN_00d6ca50 */
uint F_00d6ca50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd6ca50u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  *param_2 = param_1 & 3;
  *param_3 = (byte)param_1 >> 2 & 0xf;
  *param_4 = (uint)((byte)param_1 >> 6);
  return (uint)((byte)param_1 >> 6);
}

/* ref: FUN_00d6ca80 */
byte F_00d6ca80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd6ca80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  *param_3 = (byte)param_1 >> 1 & 3;
  *param_2 = (byte)param_1 & 0xf9;
  return (byte)param_1 & 0xf9;
}

/* ref: FUN_00d6caa0 */
float10 F_00d6caa0(float gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd6caa0u, 0u, 0u, gen_a2, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return ((float10)(byte)param_3 * (float10)REFG(float, 0x10addc0)) * ((float10)param_2 - (float10)param_1) +
         (float10)param_1;
}

/* ref: FUN_00d6cad0 */
uint F_00d6cad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd6cad0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x13512a4))[param_1])))(param_2,param_3);
  return uVar1;
}

/* ref: FUN_00d6caf0 */
uint F_00d6caf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd6caf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  byte * param_4 = (byte *)(uintptr_t)gen_a3;
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  bVar1 = (byte)param_3;
  if (param_4[param_1 + 1] <= (byte)param_3) {
    return param_1;
  }
  if ((byte)param_3 <= *param_4) {
    return param_2;
  }
  param_3 = param_2;
  iVar3 = param_1 + 1 + param_2;
  uVar4 = param_1 + 1;
  do {
    while( true ) {
      uVar2 = iVar3 / 2;
      if (param_4[uVar2] <= bVar1) break;
LAB_00d6cb32: ;
      iVar3 = param_3 + uVar2;
      uVar4 = uVar2;
    }
    if (bVar1 < param_4[uVar2 + 1]) {
      return uVar2;
    }
    if (bVar1 < param_4[uVar2]) goto LAB_00d6cb32;
    iVar3 = uVar2 + uVar4;
    param_3 = uVar2;
  } while( true );
}

/* ref: FUN_00d6cb60 */
uint F_00d6cb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd6cb60u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if ((((param_2 != 0) && (param_2 != 1)) && (param_2 != 2)) &&
     (((param_2 != 3 && (param_2 != 4)) && (param_2 != 5)))) {
    *param_1 = 0;
    return (uint)param_1;
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00d6cba0 */
uint F_00d6cba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd6cba0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if ((param_2 != 0) && (param_2 != 1)) {
    *param_1 = 0;
    return (uint)param_1;
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00d6cbd0 */
float F_00d6cbd0(unsigned int gen_a0)
{
  GEN_ENTER(0xd6cbd0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float fVar1;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    fVar1 = F_00d88600();
    return fVar1;
  case 1: ;
    fVar1 = F_00d88610();
    return fVar1;
  case 2: ;
    fVar1 = F_00d88620();
    return fVar1;
  case 3: ;
    fVar1 = F_00d885f0();
    return fVar1;
  case 4: ;
    fVar1 = F_00d885e0();
    return fVar1;
  case 5: ;
    fVar1 = F_00d88630();
    return fVar1;
  default: ;
    return (float)(float10)0;
  }
}

/* ref: FUN_00d6cc30 */
float10 F_00d6cc30(unsigned int gen_a0)
{
  GEN_ENTER(0xd6cc30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0) {
    return (float10)REFG(float, 0x1131544);
  }
  if (param_1 != 1) {
    return (float10)0;
  }
  return (float10)REFG(float, 0x1131540);
}

/* ref: hkaSplineCompressedAnimation::vf7 */
uint F_00d6cc60(unsigned int gen_a0)
{
  GEN_ENTER(0xd6cc60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x28);
}

/* ref: hkaSplineCompressedAnimation::vf8 */
uint F_00d6cc70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd6cc70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 3;
}

/* ref: hkaSplineCompressedAnimation::vf3 */
uint F_00d6cc80(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd6cc80u, gen_a0, 0u, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))
                    ((undefined4)gen_fl2bits(param_2),param_1[4],param_3,param_1[5],param_4);
  return uVar1;
}

/* ref: FUN_00d6ccd0 */
uint F_00d6ccd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd6ccd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  int param_6 = (int)gen_a5;
  int iVar1;
  byte bVar2;
  ushort * puVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  float * pfVar8;
  int iVar9;
  uint uVar10;
  
  piVar4 = (int *)param_1;
  puVar3 = *(ushort * PTR32 *)param_1;
  uVar7 = (uint)*puVar3;
  *(ushort * PTR32 *)param_1 = puVar3 + 1;
  iVar1 = (int)puVar3 + 3;
  uVar10 = (uint)(byte)puVar3[1];
  *(int *)param_1 = iVar1;
  uVar5 = F_00d6caf0(uVar7,uVar10,param_4,iVar1);
  iVar6 = 0;
  if (3 < uVar10 * 2) {
    pfVar8 = (float *)(param_6 + 8);
    do {
      iVar9 = (iVar1 - uVar10) + iVar6 + uVar5;
      pfVar8[-2] = (float)*(byte *)(iVar9 + 1) * param_5;
      pfVar8[-1] = (float)*(byte *)(iVar9 + 2) * param_5;
      *pfVar8 = (float)*(byte *)(iVar9 + 3) * param_5;
      pfVar8[1] = (float)*(byte *)(iVar9 + 4) * param_5;
      iVar6 = iVar6 + 4;
      pfVar8 = pfVar8 + 4;
    } while (iVar6 < (int)(uVar10 * 2 - 3));
  }
  if (iVar6 < (int)(uVar10 * 2)) {
    param_1 = ((byte *)GEN_TOP(((*(int *)param_1 - uVar10) + iVar6 + 1 + uVar5)));
    do {
      bVar2 = *param_1;
      param_1 = param_1 + 1;
      *(float *)(param_6 + iVar6 * 4) = (float)bVar2 * param_5;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)(uVar10 * 2));
  }
  *piVar4 = (int)puVar3 + uVar10 + 5 + uVar7;
  *param_2 = uVar7;
  *param_3 = uVar10;
  return uVar5;
}

/* ref: FUN_00d6cdf0 */
unsigned int F_00d6cdf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd6cdf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  undefined * PTR32 * ppuVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = (*param_1 - 1) + *(int *)(&REFG(undefined, 0x1137300) + param_2 * 4) &
             ~(*(int *)(&REFG(undefined, 0x1137300) + param_2 * 4) - 1U);
  iVar2 = *(int *)(&REFG(undefined, 0x1137318) + param_2 * 4);
  if (-1 < param_4) {
    iVar3 = (param_5 - param_4) * iVar2;
    ppuVar1 = &REFG(undefined * PTR32, 0x13512a4) + param_2;
    param_2 = param_4 + 1;
    do {
      (*(code *)*ppuVar1)(*param_1 + iVar3,param_6);
      iVar3 = iVar3 + iVar2;
      param_6 = param_6 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  *param_1 = *param_1 + (param_3 + 1) * iVar2;
  return 0;
}

/* ref: FUN_00d6ce90 */
unsigned int F_00d6ce90(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd6ce90u, 0u, 0u, 0u, 0u);
  float in_xmm0 = (float)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  return 0;
}

/* ref: FUN_00d6ceb0 */
uint F_00d6ceb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd6ceb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  byte bVar1;
  bool bVar2;
  char * pcVar3;
  float10 fVar4;
  float fVar5;
  
  bVar1 = *(byte *)((int)this + 0x19);
  pcVar3 = (char *)F_00d6cba0(&(*(char *)(gen_frame + 0x21b)),(uint)bVar1);
  if (*pcVar3 != '\0') {
    pcVar3 = (char *)F_00d6cb60(&(*(undefined1 *)(gen_frame + 0x203)),(uint)*(byte *)((int)this + 0x18));
    if (*pcVar3 != '\0') {
      pcVar3 = (char *)F_00d6cba0(&(*(undefined1 *)(gen_frame + 0x213)),(uint)*(byte *)((int)this + 0x1a));
      if (*pcVar3 != '\0') {
        pcVar3 = (char *)F_00d6cba0(&(*(undefined1 *)(gen_frame + 0x21a)),(uint)*(byte *)((int)this + 0x1b));
        (*(char *)(gen_frame + 0x21b)) = '\x01';
        if (*pcVar3 != '\0') goto LAB_00d6cf1d;
      }
    }
  }
  (*(char *)(gen_frame + 0x21b)) = '\0';
LAB_00d6cf1d: ;
  (*(float *)(gen_frame + 0x214)) = *(float *)((int)this + 4);
  if ((((0.0 <= *(float *)((int)this + 4)) && (0.0 <= *(float *)this)) &&
      (0.0 <= *(float *)((int)this + 8))) && (0.0 <= *(float *)((int)this + 0xc))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  fVar4 = (float10)F_00d6cc30((uint)bVar1);
  if ((float10)(*(float *)(gen_frame + 0x214)) < fVar4) {
    F_00da0a80(((undefined1 *)(gen_frame + 0x204)),((undefined1 *)(gen_frame + 0x0)),0x200);
    F_00d9fe80(((undefined1 *)(gen_frame + 0x204)),
                 "Quantization may be limiting translation quality.  If artifacts are visible, try increasing the number of translation quantization bits."
                );
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(undefined4, 0x15dff78),1,0xabba5a61,((undefined1 *)(gen_frame + 0x0)),
               "Animation\\SplineCompressed\\hkaSplineCompressedAnimation.cpp",0x4f);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x204)));
  }
  fVar4 = (float10)F_00d6cc30((uint)*(byte *)((int)this + 0x1a));
  if ((float10)*(float *)((int)this + 8) < fVar4) {
    F_00da0a80(((undefined1 *)(gen_frame + 0x204)),((undefined1 *)(gen_frame + 0x0)),0x200);
    F_00d9fe80(((undefined1 *)(gen_frame + 0x204)),
                 "Quantization may be limiting scale quality.  If artifacts are visible, try increasing the number of scale quantization bits."
                );
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(undefined4, 0x15dff78),1,0xabba5a61,((undefined1 *)(gen_frame + 0x0)),
               "Animation\\SplineCompressed\\hkaSplineCompressedAnimation.cpp",0x54);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x204)));
  }
  fVar4 = (float10)F_00d6cc30((uint)*(byte *)((int)this + 0x1b));
  if ((float10)*(float *)((int)this + 0xc) < fVar4) {
    F_00da0a80(((undefined1 *)(gen_frame + 0x204)),((undefined1 *)(gen_frame + 0x0)),0x200);
    F_00d9fe80(((undefined1 *)(gen_frame + 0x204)),
                 "Quantization may be limiting float quality.  If artifacts are visible, try increasing the number of float quantization bits."
                );
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(undefined4, 0x15dff78),1,0xabba5a61,((undefined1 *)(gen_frame + 0x0)),
               "Animation\\SplineCompressed\\hkaSplineCompressedAnimation.cpp",0x59);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x204)));
  }
  (*(float *)(gen_frame + 0x214)) = *(float *)this;
  fVar5 = F_00d6cbd0((uint)*(byte *)((int)this + 0x18));
  if ((float10)(*(float *)(gen_frame + 0x214)) < (float10)fVar5 * (float10)*(float *)&REFG(undefined, 0x11373f4)) {
    F_00da0a80(((undefined1 *)(gen_frame + 0x204)),((undefined1 *)(gen_frame + 0x0)),0x200);
    F_00d9fe80(((undefined1 *)(gen_frame + 0x204)),
                 "Quantization may be limiting rotation quality.  If artifacts are visible, try increasing the number of rotation quantization bits."
                );
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(undefined4, 0x15dff78),1,0xabba5a61,((undefined1 *)(gen_frame + 0x0)),
               "Animation\\SplineCompressed\\hkaSplineCompressedAnimation.cpp",100);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x204)));
  }
  if (((*(char *)(gen_frame + 0x21b)) != '\0') && (bVar2)) {
    *param_1 = 1;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00d6d110 */
uint F_00d6d110(unsigned int gen_a0)
{
  GEN_ENTER(0xd6d110u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x78) + 0x84 +
         (*(int *)(in_ecx + 0x6c) + *(int *)(in_ecx + 0x60) + *(int *)(in_ecx + 0x48)) * 4;
}

/* ref: hkaSplineCompressedAnimation::vf10 */
uint F_00d6d130(unsigned int gen_a0)
{
  GEN_ENTER(0xd6d130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  
  iVar5 = 0;
  iVar3 = *(int *)(this + 0x48) + -1;
  if (-1 < iVar3) {
    piVar4 = ((int *)GEN_TOP((*(int *)(this + 0x44) + iVar3 * 4)));
    iVar2 = *(int *)(this + 0x78);
    do {
      iVar1 = *piVar4;
      iVar2 = iVar2 - iVar1;
      if (iVar5 <= iVar2) {
        iVar5 = iVar2;
      }
      piVar4 = piVar4 + -1;
      iVar3 = iVar3 + -1;
      iVar2 = iVar1;
    } while (-1 < iVar3);
  }
  return (iVar5 + 0xfU & 0xfffffff0) + 0xa0;
}

/* ref: FUN_00d6d170 */
uint F_00d6d170(float gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd6d170u, 0u, gen_a1, gen_a2, gen_a3);
  float param_1 = (float)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float * pfVar2;
  int iVar3;
  uint uVar4;
  float * pfVar5;
  int iVar6;
  float * pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar6 = 1;
  ((float *)(gen_frame + 0x1c))[3] = gen_bits2f(REFG(float, 0x1087f04));
  if (0 < param_2) {
    pfVar7 = (float *)(param_3 + -4 + param_2 * 4);
    (*(float * PTR32 *)(gen_frame + 0x38)) = pfVar7 + 1;
    do {
      pfVar5 = (*(float * PTR32 *)(gen_frame + 0x38));
      ((float *)(gen_frame + 0x8))[iVar6] = param_1 - *pfVar7;
      iVar3 = 0;
      ((float *)(gen_frame + 0x8))[iVar6 + 4] = *pfVar5 - param_1;
      fVar10 = 0.0;
      if (3 < iVar6) {
        pfVar5 = ((float *)GEN_TOP(((gen_frame + 0x0) + iVar6 * 4)));
        do {
          fVar12 = pfVar5[2];
          fVar8 = ((float *)(gen_frame + 0x8))[iVar3 + 8] / (((float *)(gen_frame + 0x8))[iVar3 + 5] + fVar12);
          ((float *)(gen_frame + 0x8))[iVar3 + 8] = ((float *)(gen_frame + 0x8))[iVar3 + 5] * fVar8 + fVar10;
          fVar10 = pfVar5[1];
          fVar11 = ((float *)(gen_frame + 0x8))[iVar3 + 9] / (((float *)(gen_frame + 0x8))[iVar3 + 6] + fVar10);
          fVar9 = *pfVar5;
          ((float *)(gen_frame + 0x8))[iVar3 + 9] = ((float *)(gen_frame + 0x8))[iVar3 + 6] * fVar11 + fVar12 * fVar8;
          fVar12 = ((float *)(gen_frame + 0x8))[iVar3 + 10] / (((float *)(gen_frame + 0x8))[iVar3 + 7] + fVar9);
          ((float *)(gen_frame + 0x8))[iVar3 + 10] = ((float *)(gen_frame + 0x8))[iVar3 + 7] * fVar12 + fVar10 * fVar11;
          fVar8 = ((float *)(gen_frame + 0x8))[iVar3 + 0xb] / (((float *)(gen_frame + 0x8))[iVar3 + 8] + pfVar5[-1]);
          fVar10 = fVar8 * pfVar5[-1];
          ((float *)(gen_frame + 0x8))[iVar3 + 0xb] = ((float *)(gen_frame + 0x8))[iVar3 + 8] * fVar8 + fVar9 * fVar12;
          iVar3 = iVar3 + 4;
          pfVar5 = pfVar5 + -4;
        } while (iVar3 < iVar6 + -3);
      }
      if (iVar3 < iVar6) {
        pfVar5 = ((float *)(gen_frame + 0x8)) + (iVar6 - iVar3);
        do {
          fVar12 = *pfVar5;
          fVar9 = ((float *)(gen_frame + 0x8))[iVar3 + 8] / (((float *)(gen_frame + 0x8))[iVar3 + 5] + fVar12);
          ((float *)(gen_frame + 0x8))[iVar3 + 8] = ((float *)(gen_frame + 0x8))[iVar3 + 5] * fVar9 + fVar10;
          iVar3 = iVar3 + 1;
          pfVar5 = pfVar5 + -1;
          fVar10 = fVar12 * fVar9;
        } while (iVar3 < iVar6);
      }
      (*(float * PTR32 *)(gen_frame + 0x38)) = (*(float * PTR32 *)(gen_frame + 0x38)) + 1;
      ((float *)(gen_frame + 0x8))[iVar6 + 8] = fVar10;
      iVar6 = iVar6 + 1;
      pfVar7 = pfVar7 + -1;
    } while (iVar6 <= param_2);
  }
  uVar4 = 0;
  fVar10 = 0.0;
  fVar12 = 0.0;
  fVar9 = 0.0;
  fVar8 = 0.0;
  if (param_2 < 0) {
    *param_5 = 0.0;
    param_5[1] = 0.0;
    param_5[2] = 0.0;
    param_5[3] = 0.0;
    return (uint)param_5;
  }
  do {
    fVar11 = ((float *)(gen_frame + 0x8))[uVar4 + 8];
    fVar1 = *param_4;
    pfVar7 = param_4 + 1;
    pfVar5 = param_4 + 2;
    pfVar2 = param_4 + 3;
    uVar4 = uVar4 + 1;
    param_4 = param_4 + 4;
    fVar10 = fVar10 + fVar11 * fVar1;
    fVar12 = fVar12 + fVar11 * *pfVar7;
    fVar9 = fVar9 + fVar11 * *pfVar5;
    fVar8 = fVar8 + fVar11 * *pfVar2;
  } while ((int)uVar4 <= param_2);
  *param_5 = fVar10;
  param_5[1] = fVar12;
  param_5[2] = fVar9;
  param_5[3] = fVar8;
  return uVar4;
}

/* ref: FUN_00d6d350 */
uint F_00d6d350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd6d350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char * pcVar1;
  int iVar2;
  int iVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  iVar2 = 0;
  if (0 < *(int *)((int)this + 4)) {
    iVar3 = 0;
    do {
      pcVar1 = (char *)F_00d6ceb0((undefined *)(*(int *)this + iVar3),(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3);
      if (*pcVar1 == '\0') {
        *param_1 = 0;
        return (uint)param_1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x1c;
    } while (iVar2 < *(int *)((int)this + 4));
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkaSplineCompressedAnimation::vf9 */
unsigned int F_00d6d3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd6d3a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  *param_3 = this;
  param_3[1] = 0x84;
  uVar3 = param_1 / (*(int *)(this + 0x30) - 1U);
  if ((int)uVar3 < 1) {
    uVar3 = 0;
  }
  uVar4 = *(int *)(this + 0x2c) - 1;
  if ((int)uVar4 <= (int)uVar3) {
    uVar3 = uVar4;
  }
  if (uVar3 == uVar4) {
    iVar5 = *(int *)(this + 0x78);
  }
  else {
    iVar5 = *((int *)GEN_TOP((*(int *)(this + 0x44) + 4 + uVar3 * 4)));
  }
  iVar2 = uVar3 * 4;
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x44) + iVar2)));
  param_3[2] = *(int *)(this + 0x74) + *((int *)GEN_TOP((*(int *)(this + 0x44) + iVar2)));
  param_3[3] = (iVar5 - iVar1) + 0xfU & 0xfffffff0;
  param_3[4] = *(int *)(this + 0x50) + iVar2;
  param_3[5] = 4;
  return 0;
}

/* ref: FUN_00d6d410 */
uint F_00d6d410(float gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd6d410u, 0u, gen_a1, gen_a2, gen_a3);
  float param_1 = (float)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
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
  undefined1 in_XMM2 [16] = {0};
  undefined1 auVar15 [16];
  
  fVar10 = param_3[1] - param_1;
  fVar14 = param_1 - *param_3;
  (*(undefined4 *)((char *)&auVar15 + 4)) = (undefined4)gen_fl2bits(fVar10 + fVar14);
  (*(undefined4 *)((char *)&auVar15 + 0)) = (undefined4)gen_fl2bits(fVar10 + fVar14);
  (*(undefined4 *)((char *)&auVar15 + 8)) = (undefined4)gen_fl2bits(fVar10 + fVar14);
  (*(undefined4 *)((char *)&auVar15 + 12)) = (undefined4)gen_fl2bits(fVar10 + fVar14);
  gen_rcpps(&(auVar15), &(in_XMM2), &(auVar15));
  fVar11 = *(float *)&REFG(undefined, 0x1137344) - (*(float *)((char *)&auVar15 + 4)) * (fVar10 + fVar14);
  fVar12 = *(float *)&REFG(undefined, 0x1137348) - (*(float *)((char *)&auVar15 + 8)) * (fVar10 + fVar14);
  fVar13 = *(float *)&REFG(undefined, 0x113734c) - (*(float *)((char *)&auVar15 + 12)) * (fVar10 + fVar14);
  fVar1 = param_4[5];
  fVar2 = param_4[6];
  fVar3 = param_4[7];
  fVar4 = param_4[1];
  fVar5 = param_4[2];
  fVar6 = param_4[3];
  fVar7 = param_4[1];
  fVar8 = param_4[2];
  fVar9 = param_4[3];
  *param_5 = (param_4[4] - *param_4) *
             (((*(float *)&REFG(undefined, 0x1137340) - (*(float *)((char *)&auVar15 + 0)) * (fVar10 + fVar14)) * (*(float *)((char *)&auVar15 + 0))) *
             fVar14) + *param_4;
  param_5[1] = (fVar1 - fVar4) * ((fVar11 * (*(float *)((char *)&auVar15 + 4))) * fVar14) + fVar7;
  param_5[2] = (fVar2 - fVar5) * ((fVar12 * (*(float *)((char *)&auVar15 + 8))) * fVar14) + fVar8;
  param_5[3] = (fVar3 - fVar6) * ((fVar13 * (*(float *)((char *)&auVar15 + 12))) * fVar14) + fVar9;
  return (uint)param_5;
}

/* ref: FUN_00d6d470 */
unsigned int F_00d6d470(float gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd6d470u, 0u, gen_a1, gen_a2, gen_a3);
  float param_1 = (float)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  undefined1 auVar1 [16];
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
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  
  fVar13 = param_3[2] - param_1;
  fVar12 = param_1 - param_3[1];
  (*(undefined4 *)((char *)&auVar15 + 4)) = (undefined4)gen_fl2bits(fVar12 + fVar13);
  (*(undefined4 *)((char *)&auVar15 + 0)) = (undefined4)gen_fl2bits(fVar12 + fVar13);
  (*(undefined4 *)((char *)&auVar15 + 8)) = (undefined4)gen_fl2bits(fVar12 + fVar13);
  (*(undefined4 *)((char *)&auVar15 + 12)) = (undefined4)gen_fl2bits(fVar12 + fVar13);
  gen_rcpps(&(auVar15), &(in_XMM3), &(auVar15));
  (*(float *)((char *)&auVar25 + 0)) = (*(float *)((char *)&auVar15 + 0)) * (fVar12 + fVar13);
  (*(float *)((char *)&auVar25 + 4)) = (*(float *)((char *)&auVar15 + 4)) * (fVar12 + fVar13);
  (*(float *)((char *)&auVar25 + 8)) = (*(float *)((char *)&auVar15 + 8)) * (fVar12 + fVar13);
  (*(float *)((char *)&auVar25 + 12)) = (*(float *)((char *)&auVar15 + 12)) * (fVar12 + fVar13);
  fVar7 = ((*(float *)&REFG(undefined, 0x1137340) - (*(float *)((char *)&auVar25 + 0))) * (*(float *)((char *)&auVar15 + 0))) * *(float *)&REFG(undefined, 0x1137350);
  fVar9 = ((*(float *)&REFG(undefined, 0x1137344) - (*(float *)((char *)&auVar25 + 4))) * (*(float *)((char *)&auVar15 + 4))) * *(float *)&REFG(undefined, 0x1137354);
  fVar10 = ((*(float *)&REFG(undefined, 0x1137348) - (*(float *)((char *)&auVar25 + 8))) * (*(float *)((char *)&auVar15 + 8))) * *(float *)&REFG(undefined, 0x1137358);
  fVar11 = ((*(float *)&REFG(undefined, 0x113734c) - (*(float *)((char *)&auVar25 + 12))) * (*(float *)((char *)&auVar15 + 12))) * *(float *)&REFG(undefined, 0x113735c)
  ;
  fVar14 = param_1 - *param_3;
  fVar8 = param_3[3] - param_1;
  (*(float *)((char *)&auVar20 + 0)) = fVar14 + fVar13;
  (*(float *)((char *)&auVar20 + 4)) = fVar14 + fVar13;
  (*(float *)((char *)&auVar20 + 8)) = fVar14 + fVar13;
  (*(float *)((char *)&auVar20 + 12)) = fVar14 + fVar13;
  gen_rcpps(&(auVar15), &(auVar25), &(auVar20));
  (*(float *)((char *)&auVar21 + 0)) =
       ((*(float *)&REFG(undefined, 0x1137340) - (*(float *)((char *)&auVar15 + 0)) * (*(float *)((char *)&auVar20 + 0))) * (*(float *)((char *)&auVar15 + 0))) *
       (fVar7 * fVar13 + *(float *)&REFG(undefined, 0x1137360));
  (*(float *)((char *)&auVar21 + 4)) =
       ((*(float *)&REFG(undefined, 0x1137344) - (*(float *)((char *)&auVar15 + 4)) * (*(float *)((char *)&auVar20 + 4))) * (*(float *)((char *)&auVar15 + 4))) *
       (fVar9 * fVar13 + *(float *)&REFG(undefined, 0x1137364));
  (*(float *)((char *)&auVar21 + 8)) =
       ((*(float *)&REFG(undefined, 0x1137348) - (*(float *)((char *)&auVar15 + 8)) * (*(float *)((char *)&auVar20 + 8))) * (*(float *)((char *)&auVar15 + 8))) *
       (fVar10 * fVar13 + *(float *)&REFG(undefined, 0x1137368));
  (*(float *)((char *)&auVar21 + 12)) =
       ((*(float *)&REFG(undefined, 0x113734c) - (*(float *)((char *)&auVar15 + 12)) * (*(float *)((char *)&auVar20 + 12))) * (*(float *)((char *)&auVar15 + 12))) *
       (fVar11 * fVar13 + *(float *)&REFG(undefined, 0x113736c));
  fVar22 = (*(float *)((char *)&auVar21 + 4)) * fVar13 + *(float *)&REFG(undefined, 0x1137364);
  fVar23 = (*(float *)((char *)&auVar21 + 8)) * fVar13 + *(float *)&REFG(undefined, 0x1137368);
  fVar24 = (*(float *)((char *)&auVar21 + 12)) * fVar13 + *(float *)&REFG(undefined, 0x113736c);
  (*(undefined4 *)((char *)&auVar1 + 4)) = (undefined4)gen_fl2bits(fVar8 + fVar12);
  (*(undefined4 *)((char *)&auVar1 + 0)) = (undefined4)gen_fl2bits(fVar8 + fVar12);
  (*(undefined4 *)((char *)&auVar1 + 8)) = (undefined4)gen_fl2bits(fVar8 + fVar12);
  (*(undefined4 *)((char *)&auVar1 + 12)) = (undefined4)gen_fl2bits(fVar8 + fVar12);
  gen_rcpps(&(auVar15), &(auVar21), &(auVar1));
  fVar16 = ((*(float *)&REFG(undefined, 0x1137340) - (*(float *)((char *)&auVar15 + 0)) * (fVar8 + fVar12)) * (*(float *)((char *)&auVar15 + 0))) *
           (fVar7 * fVar12);
  fVar17 = ((*(float *)&REFG(undefined, 0x1137344) - (*(float *)((char *)&auVar15 + 4)) * (fVar8 + fVar12)) * (*(float *)((char *)&auVar15 + 4))) *
           (fVar9 * fVar12);
  fVar18 = ((*(float *)&REFG(undefined, 0x1137348) - (*(float *)((char *)&auVar15 + 8)) * (fVar8 + fVar12)) * (*(float *)((char *)&auVar15 + 8))) *
           (fVar10 * fVar12);
  fVar19 = ((*(float *)&REFG(undefined, 0x113734c) - (*(float *)((char *)&auVar15 + 12)) * (fVar8 + fVar12)) * (*(float *)((char *)&auVar15 + 12))) *
           (fVar11 * fVar12);
  fVar7 = param_4[5];
  fVar9 = param_4[6];
  fVar10 = param_4[7];
  fVar11 = param_4[1];
  fVar2 = param_4[2];
  fVar3 = param_4[3];
  fVar4 = param_4[9];
  fVar5 = param_4[10];
  fVar6 = param_4[0xb];
  *param_5 = ((fVar8 * fVar16 + fVar14 * (*(float *)((char *)&auVar21 + 0))) * param_4[4] +
             *param_4 * ((*(float *)((char *)&auVar21 + 0)) * fVar13 + *(float *)&REFG(undefined, 0x1137360))) +
             (fVar16 * fVar12) * param_4[8];
  param_5[1] = ((fVar8 * fVar17 + fVar14 * (*(float *)((char *)&auVar21 + 4))) * fVar7 + fVar11 * fVar22) +
               (fVar17 * fVar12) * fVar4;
  param_5[2] = ((fVar8 * fVar18 + fVar14 * (*(float *)((char *)&auVar21 + 8))) * fVar9 + fVar2 * fVar23) +
               (fVar18 * fVar12) * fVar5;
  param_5[3] = ((fVar8 * fVar19 + fVar14 * (*(float *)((char *)&auVar21 + 12))) * fVar10 + fVar3 * fVar24) +
               (fVar19 * fVar12) * fVar6;
  return 0;
}

/* ref: FUN_00d6d760 */
uint F_00d6d760(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd6d760u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int param_6 = (int)gen_a5;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_EAX = 0;
  uint uVar4;
  
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138cac);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138ca8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138ca4);
  if (((byte)param_5 & 0xf0) != 0) {
    uVar4 = F_00d6ccd0(param_1,&(*(undefined4 *)(gen_frame + 0x58)),&(*(int *)(gen_frame + 0x5c)),param_2,param_3,((undefined1 *)(gen_frame + 0x40)));
    F_00d6cdf0(param_1,param_6,(*(undefined4 *)(gen_frame + 0x58)),(*(int *)(gen_frame + 0x5c)),uVar4,((undefined1 *)(gen_frame + 0x0)));
    uVar4 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x13512bc) + (*(int *)(gen_frame + 0x5c)) * 4))
                      ((undefined4)gen_fl2bits(param_4),(*(int *)(gen_frame + 0x5c)),((undefined1 *)(gen_frame + 0x40)),((undefined1 *)(gen_frame + 0x0)),param_7);
    return uVar4;
  }
  if (((byte)param_5 & 0xf) != 0) {
    uVar4 = (*param_1 - 1) + *(int *)(&REFG(undefined, 0x1137300) + param_6 * 4) &
            ~(*(int *)(&REFG(undefined, 0x1137300) + param_6 * 4) - 1U);
    *param_1 = uVar4;
    (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x13512a4))[param_6])))(uVar4,param_7);
    uVar4 = *(uint *)(&REFG(undefined, 0x1137318) + param_6 * 4);
    *param_1 = *param_1 + uVar4;
    return uVar4;
  }
  *param_7 = *(undefined4 *)&REFG(undefined, 0x1138ca0);
  param_7[1] = uVar1;
  param_7[2] = uVar2;
  param_7[3] = uVar3;
  return CONCAT31((int3)((uint)in_EAX >> 8),(byte)param_5);
}

/* ref: FUN_00d6d850 */
unsigned int F_00d6d850(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xd6d850u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint param_5 = (uint)gen_a4;
  int param_6 = (int)gen_a5;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;
  undefined4 * param_8 = (undefined4 *)(uintptr_t)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  ushort uVar1;
  uint uVar2;
  float * pfVar3;
  int iVar4;
  float * pfVar5;
  uint uVar6;
  ushort * puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar6 = 0;
  (*(int *)(gen_frame + 0xc8)) = 0;
  (*(int *)(gen_frame + 0xbc)) = 0;
  (*(byte *)(gen_frame + 0xcf)) = (byte)param_5 & 0xf0;
  if ((param_5 & 0xf0) == 0) {
    (*(int *)(gen_frame + 0xc8)) = 0;
    (*(int *)(gen_frame + 0xbc)) = 0;
  }
  else {
    uVar6 = F_00d6ccd0(param_1,&(*(int *)(gen_frame + 0xbc)),&(*(int *)(gen_frame + 0xc8)),param_2,param_3,((undefined1 *)(gen_frame + 0x48)));
  }
  *param_1 = *param_1 + 3 & 0xfffffffc;
  fVar12 = (*(float *)(gen_frame + 0xa0));
  if ((param_5 & 1) == 0) {
    if ((param_5 & 0x10) != 0) {
      pfVar5 = (float *)*param_1;
      fVar12 = *pfVar5;
      *param_1 = (uint)(pfVar5 + 1);
      (*(float *)(gen_frame + 0xa0)) = pfVar5[1];
      *param_1 = (uint)(pfVar5 + 2);
    }
  }
  else {
    (*(undefined4 *)(gen_frame + 0x70)) = *(undefined4 *)*param_1;
    *param_1 = (uint)((undefined4 *)*param_1 + 1);
  }
  fVar11 = (*(float *)(gen_frame + 0xa4));
  if ((param_5 & 2) == 0) {
    if ((param_5 & 0x20) != 0) {
      pfVar5 = (float *)*param_1;
      fVar11 = *pfVar5;
      *param_1 = (uint)(pfVar5 + 1);
      (*(float *)(gen_frame + 0xa4)) = pfVar5[1];
      *param_1 = (uint)(pfVar5 + 2);
    }
  }
  else {
    (*(undefined4 *)(gen_frame + 0x74)) = *(undefined4 *)*param_1;
    *param_1 = (uint)((undefined4 *)*param_1 + 1);
  }
  fVar9 = (*(float *)(gen_frame + 0xa8));
  fVar10 = (*(float *)(gen_frame + 0xa8));
  if ((param_5 & 4) == 0) {
    if ((param_5 & 0x40) != 0) {
      pfVar5 = (float *)*param_1;
      fVar9 = *pfVar5;
      *param_1 = (uint)(pfVar5 + 1);
      fVar10 = pfVar5[1];
      *param_1 = (uint)(pfVar5 + 2);
    }
  }
  else {
    (*(undefined4 *)(gen_frame + 0x78)) = *(undefined4 *)*param_1;
    *param_1 = (uint)((undefined4 *)*param_1 + 1);
  }
  if ((*(byte *)(gen_frame + 0xcf)) == 0) {
    uVar6 = ~(param_5 & 0xff);
    uVar6 = (int)uVar6 >> 4 & uVar6;
    if ((param_5 & 1) == 0) {
      if ((uVar6 & 1) != 0) {
        *param_8 = *param_7;
      }
    }
    else {
      *param_8 = (*(undefined4 *)(gen_frame + 0x70));
    }
    if ((param_5 & 2) == 0) {
      if ((uVar6 & 2) != 0) {
        param_8[1] = param_7[1];
      }
    }
    else {
      param_8[1] = (*(undefined4 *)(gen_frame + 0x74));
    }
    if ((param_5 & 4) == 0) {
      if ((uVar6 & 4) != 0) {
        param_8[2] = param_7[2];
      }
    }
    else {
      param_8[2] = (*(undefined4 *)(gen_frame + 0x78));
    }
    if ((param_5 & 8) != 0) {
      param_8[3] = (*(undefined4 *)(gen_frame + 0x7c));
      return 0;
    }
    if ((uVar6 & 8) != 0) {
      param_8[3] = param_7[3];
      return 0;
    }
  }
  else {
    (*(int *)(gen_frame + 0x9c)) = *(int *)(&REFG(undefined, 0x1137330) + param_6 * 4);
    uVar2 = *param_1 + 1 & 0xfffffffe;
    *param_1 = uVar2;
    puVar7 = ((ushort *)GEN_TOP(((uVar6 - (*(int *)(gen_frame + 0xc8))) * (*(int *)(gen_frame + 0x9c)) * *(int *)(&REFG(undefined, 0x11375c4) + ((byte)param_5 >> 4 & 7) * 4)
             + uVar2)));
    (*(int *)(gen_frame + 0x98)) = *(int *)(&REFG(undefined, 0x11375c4) + ((byte)param_5 >> 4 & 7) * 4);
    if (-1 < (*(int *)(gen_frame + 0xc8))) {
      (*(uint *)(gen_frame + 0x90)) = param_5 & 0x10;
      (*(uint *)(gen_frame + 0x68)) = param_5 & 0x20;
      (*(uint *)(gen_frame + 0x64)) = param_5 & 0x40;
      uVar6 = ~(param_5 & 0xff);
      (*(uint *)(gen_frame + 0x6c)) = param_5 & 0xf;
      (*(uint *)(gen_frame + 0x8c)) = (int)uVar6 >> 4 & uVar6 & 0xf;
      iVar8 = (int)&(*(undefined4 *)(gen_frame + 0x70)) - (int)param_7;
      (*(int *)(gen_frame + 0xc0)) = (int)param_7 - (int)((float *)(gen_frame + 0x0));
      pfVar5 = ((float *)(gen_frame + 0x0)) + 1;
      (*(int *)(gen_frame + 0x60)) = iVar8;
      (*(float * PTR32 *)(gen_frame + 0xc4)) = ((float *)(gen_frame + 0x0));
      (*(float * PTR32 *)(gen_frame + 0xb8)) = pfVar5;
      (*(int *)(gen_frame + 0x94)) = (*(int *)(gen_frame + 0xc8)) + 1;
      do {
        (*(float * PTR32 *)(gen_frame + 0xb8)) = pfVar5;
        if ((*(uint *)(gen_frame + 0x90)) != 0) {
          if (param_6 == 0) {
            uVar1 = *puVar7;
            puVar7 = (ushort *)((int)puVar7 + 1);
            fVar13 = (float)(byte)uVar1 * REFG(float, 0x10addc0);
          }
          else {
            uVar1 = *puVar7;
            puVar7 = puVar7 + 1;
            fVar13 = (float)uVar1 * REFG(float, 0x1137338);
          }
          pfVar5[-1] = ((*(float *)(gen_frame + 0xa0)) - fVar12) * fVar13 + fVar12;
        }
        if ((*(uint *)(gen_frame + 0x68)) != 0) {
          if (param_6 == 0) {
            uVar1 = *puVar7;
            puVar7 = (ushort *)((int)puVar7 + 1);
            fVar13 = (float)(byte)uVar1 * REFG(float, 0x10addc0);
          }
          else {
            uVar1 = *puVar7;
            puVar7 = puVar7 + 1;
            fVar13 = (float)uVar1 * REFG(float, 0x1137338);
          }
          *pfVar5 = ((*(float *)(gen_frame + 0xa4)) - fVar11) * fVar13 + fVar11;
        }
        if ((*(uint *)(gen_frame + 0x64)) != 0) {
          if (param_6 == 0) {
            uVar1 = *puVar7;
            puVar7 = (ushort *)((int)puVar7 + 1);
            fVar13 = (float)(byte)uVar1 * REFG(float, 0x10addc0);
          }
          else {
            uVar1 = *puVar7;
            puVar7 = puVar7 + 1;
            fVar13 = (float)uVar1 * REFG(float, 0x1137338);
          }
          pfVar5[1] = (fVar10 - fVar9) * fVar13 + fVar9;
        }
        pfVar3 = (*(float * PTR32 *)(gen_frame + 0xc4));
        uVar6 = 1;
        (*(float * PTR32 *)(gen_frame + 0xc4)) = (float *)0x4;
        do {
          if (((*(uint *)(gen_frame + 0x6c)) & uVar6) == 0) {
            iVar4 = (*(int *)(gen_frame + 0xc0));
            if (((*(uint *)(gen_frame + 0x8c)) & uVar6) != 0) goto LAB_00d6dbcc;
          }
          else {
            iVar4 = (*(int *)(gen_frame + 0xc0)) + iVar8;
            iVar8 = (*(int *)(gen_frame + 0x60));
LAB_00d6dbcc: ;
            *pfVar3 = *(float *)(iVar4 + (int)pfVar3);
          }
          uVar6 = uVar6 * 2;
          pfVar3 = pfVar3 + 1;
          (*(float * PTR32 *)(gen_frame + 0xc4)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0xc4)) + -1);
        } while ((*(float * PTR32 *)(gen_frame + 0xc4)) != (float *)0x0);
        pfVar5 = (*(float * PTR32 *)(gen_frame + 0xb8)) + 4;
        (*(float * PTR32 *)(gen_frame + 0xb8)) = pfVar5;
        (*(int *)(gen_frame + 0xc0)) = (*(int *)(gen_frame + 0xc0)) + -0x10;
        (*(int *)(gen_frame + 0x94)) = (*(int *)(gen_frame + 0x94)) + -1;
        (*(float * PTR32 *)(gen_frame + 0xc4)) = pfVar3;
      } while ((*(int *)(gen_frame + 0x94)) != 0);
    }
    ((code *)*(gen_code32 *)(&REFG(undefined, 0x13512bc) + (*(int *)(gen_frame + 0xc8)) * 4))
              ((undefined4)gen_fl2bits(param_4),(*(int *)(gen_frame + 0xc8)),((undefined1 *)(gen_frame + 0x48)),((float *)(gen_frame + 0x0)),param_8);
    *param_1 = *param_1 + ((*(int *)(gen_frame + 0xbc)) + 1) * (*(int *)(gen_frame + 0x9c)) * (*(int *)(gen_frame + 0x98));
  }
  return 0;
}

/* ref: FUN_00d6dc40 */
uint F_00d6dc40(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd6dc40u, gen_a0, 0u, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint * param_6 = (uint *)(uintptr_t)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  uint uVar1;
  
  uVar1 = F_00d6d760(param_6,param_3,*(float *)(param_1 + 0x40),param_2,param_4,param_5,param_7);
  *param_6 = *param_6 + 3 & 0xfffffffc;
  return uVar1;
}

/* ref: FUN_00d6dc90 */
unsigned int F_00d6dc90(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd6dc90u, gen_a0, 0u, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint * param_6 = (uint *)(uintptr_t)gen_a5;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = REFG(uint, 0x0135177c);
  uVar2 = REFG(uint, 0x01351778);
  uVar1 = REFG(uint, 0x01351774);
  if ((char)param_4 == '\0') {
    *param_7 = *(undefined4 *)&REFG(undefined, 0x1351770);
    param_7[1] = uVar1;
    param_7[2] = uVar2;
    param_7[3] = uVar3;
    *param_6 = *param_6 + 3 & 0xfffffffc;
    return 0;
  }
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)&REFG(undefined, 0x1351770);
  (*(undefined4 *)(gen_frame + 0x4)) = REFG(uint, 0x01351774);
  (*(undefined4 *)(gen_frame + 0x8)) = REFG(uint, 0x01351778);
  (*(undefined4 *)(gen_frame + 0xc)) = REFG(uint, 0x0135177c);
  F_00d6d850(param_6,param_3,*(float *)(param_1 + 0x40),param_2,param_4,param_5,&(*(undefined4 *)(gen_frame + 0x0)),param_7)
  ;
  *param_6 = *param_6 + 3 & 0xfffffffc;
  return 0;
}

/* ref: FUN_00d6dd20 */
unsigned int F_00d6dd20(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd6dd20u, gen_a0, 0u, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint * param_6 = (uint *)(uintptr_t)gen_a5;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = REFG(uint, 0x0135179c);
  uVar2 = REFG(uint, 0x01351798);
  uVar1 = REFG(uint, 0x01351794);
  if ((char)param_4 == '\0') {
    *param_7 = *(undefined4 *)&REFG(undefined, 0x1351790);
    param_7[1] = uVar1;
    param_7[2] = uVar2;
    param_7[3] = uVar3;
    *param_6 = *param_6 + 3 & 0xfffffffc;
    return 0;
  }
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)&REFG(undefined, 0x1351790);
  (*(undefined4 *)(gen_frame + 0x4)) = REFG(uint, 0x01351794);
  (*(undefined4 *)(gen_frame + 0x8)) = REFG(uint, 0x01351798);
  (*(undefined4 *)(gen_frame + 0xc)) = REFG(uint, 0x0135179c);
  F_00d6d850(param_6,param_3,*(float *)(param_1 + 0x40),param_2,param_4,param_5,&(*(undefined4 *)(gen_frame + 0x0)),param_7)
  ;
  *param_6 = *param_6 + 3 & 0xfffffffc;
  return 0;
}

/* ref: FUN_00d6ddb0 */
unsigned int F_00d6ddb0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd6ddb0u, gen_a0, 0u, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint * param_6 = (uint *)(uintptr_t)gen_a5;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  if ((char)param_4 == '\0') {
    *param_7 = 0;
    *param_6 = *param_6 + 3 & 0xfffffffc;
    return 0;
  }
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  F_00d6d850(param_6,param_3,*(float *)(param_1 + 0x40),param_2,param_4,param_5,&(*(undefined4 *)(gen_frame + 0x10)),((undefined4 *)(gen_frame + 0x0))
              );
  *param_7 = ((undefined4 *)(gen_frame + 0x0))[0];
  *param_6 = *param_6 + 3 & 0xfffffffc;
  return 0;
}

/* ref: FUN_00d6de50 */
uint F_00d6de50(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xd6de50u, gen_a0, 0u, gen_a2, gen_a3);
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  LPVOID pvVar6;
  uint uVar7;
  LPVOID pvVar8;
  int iVar9;
  uint uVar10;
  byte * pbVar11;
  float10 fVar12;
  
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar2 = *(undefined4 * PTR32 *)((int)pvVar6 + 4);
  if (puVar2 < *(undefined4 * PTR32 *)((int)pvVar6 + 0xc)) {
    *puVar2 = "TtSampleSplineChunk";
    uVar4 = rdtsc();
    (*(byte * PTR32 *)(gen_frame + 0x4)) = (byte *)uVar4;
    puVar2[1] = (byte *)uVar4;
    *(undefined4 * PTR32 *)((int)pvVar6 + 4) = puVar2 + 3;
  }
  iVar3 = *(*(int * PTR32 *)&gen_args[6]);
  uVar7 = (*(uint *)&gen_args[0]) / (*(int *)(iVar3 + 0x30) - 1U);
  if ((int)uVar7 < 1) {
    uVar7 = 0;
  }
  uVar10 = *(int *)(iVar3 + 0x2c) - 1;
  if ((int)uVar10 <= (int)uVar7) {
    uVar7 = uVar10;
  }
  iVar9 = (*(uint *)&gen_args[0]) - (*(int *)(iVar3 + 0x30) + -1) * uVar7;
  fVar12 = (float10)iVar9;
  if (iVar9 < 0) {
    fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  pbVar11 = ((byte *)GEN_TOP((*(int * PTR32 *)&gen_args[6])[2]));
  (*(float *)&gen_args[1]) = ((float)GEN_TOF(((fVar12 + (float10)(*(float *)&gen_args[1])) * (float10)*(float *)(iVar3 + 0x40))));
  uVar5 = (undefined1)
          (int)((*(float *)(iVar3 + 0x3c) * (*(float *)&gen_args[1])) * ((float)GEN_TOF((*(int *)(iVar3 + 0x30) + -1))));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x8)) + 0)) = uVar5;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),uVar5);
  (*(byte * PTR32 *)(gen_frame + 0x4)) = pbVar11 + *(int *)(iVar3 + 0x34);
  if ((*(int *)&gen_args[2]) != 0) {
    (*(uint *)&gen_args[0]) = (*(int *)&gen_args[3]) + 0x20;
    do {
      bVar1 = *pbVar11;
      F_00d6dc90(iVar3,(*(float *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x8)),(uint)pbVar11[1],bVar1 & 3,&(*(byte * PTR32 *)(gen_frame + 0x4)),(*(uint *)&gen_args[0]) + -0x20);
      F_00d6dc40(iVar3,(*(float *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x8)),(uint)pbVar11[2],bVar1 >> 2 & 0xf,&(*(byte * PTR32 *)(gen_frame + 0x4)),
                   (*(uint *)&gen_args[0]) + -0x10);
      F_00d6dd20(iVar3,(*(float *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x8)),(uint)pbVar11[3],(uint)(bVar1 >> 6),&(*(byte * PTR32 *)(gen_frame + 0x4)),(*(uint *)&gen_args[0]));
      (*(uint *)&gen_args[0]) = (*(uint *)&gen_args[0]) + 0x30;
      pbVar11 = pbVar11 + 4;
      (*(int *)&gen_args[2]) = (*(int *)&gen_args[2]) + -1;
    } while ((*(int *)&gen_args[2]) != 0);
    (*(int *)&gen_args[2]) = 0;
  }
  (*(uint *)&gen_args[0]) = *((int *)GEN_TOP((*(int * PTR32 *)&gen_args[6])[4])) + (*(int * PTR32 *)&gen_args[6])[2];
  pbVar11 = ((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[6])[2] + *(int *)(iVar3 + 0x10) * 4)));
  if ((*(int * PTR32 *)&gen_args[4]) != (int *)0x0) {
    (*(int * PTR32 *)&gen_args[6]) = (*(int * PTR32 *)&gen_args[4]);
    iVar9 = (*(int *)&gen_args[5]);
    do {
      bVar1 = *pbVar11;
      pbVar11 = pbVar11 + 1;
      F_00d6ddb0(iVar3,(*(float *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x8)),(uint)(bVar1 & 0xf9),bVar1 >> 1 & 3,&(*(uint *)&gen_args[0]),iVar9);
      iVar9 = iVar9 + 4;
      (*(int * PTR32 *)&gen_args[6]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[6]) + -1)));
    } while ((*(int * PTR32 *)&gen_args[6]) != (int *)0x0);
  }
  pvVar8 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar2 = *(undefined4 * PTR32 *)((int)pvVar8 + 4);
  pvVar6 = pvVar8;
  if (puVar2 < *(undefined4 * PTR32 *)((int)pvVar8 + 0xc)) {
    *puVar2 = &REFG(undefined, 0x1136cb0);
    uVar4 = rdtsc();
    pvVar6 = (LPVOID)uVar4;
    puVar2[1] = pvVar6;
    *(undefined4 * PTR32 *)((int)pvVar8 + 4) = puVar2 + 3;
  }
  return (uint)pvVar6;
}

/* ref: hkaSplineCompressedAnimation::vf5 */
unsigned int F_00d6e350(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd6e350u, gen_a0, 0u, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  byte * pbVar5;
  int iVar6;
  undefined4 * puVar7;
  float10 fVar8;
  float10 fVar9;
  
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x1c))))((*(int * PTR32 *)&gen_args[0]));
  fVar8 = (float10)(int)(uVar4 - 1);
  if ((int)(uVar4 - 1) < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar8 = fVar8 * ((float10)(*(float *)&gen_args[1]) / ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)&gen_args[0])[3]))));
  uVar4 = uVar4 - 2;
  (*(uint *)(gen_frame + 0x4)) = (uint)(longlong)TRUNC(fVar8);
  (*(float *)&gen_args[1]) = REFG(float, 0x1087f04);
  if ((*(uint *)(gen_frame + 0x4)) <= uVar4) {
    fVar9 = (float10)(int)(*(uint *)(gen_frame + 0x4));
    if ((int)(*(uint *)(gen_frame + 0x4)) < 0) {
      fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar8 = fVar8 - fVar9;
    (*(float *)&gen_args[1]) = (float)fVar8;
    uVar4 = (*(uint *)(gen_frame + 0x4));
    if (fVar8 < (float10)0) {
      (*(float *)&gen_args[1]) = 0.0;
    }
    else if (REFG(float, 0x1087f04) < (*(float *)&gen_args[1])) {
      (*(float *)&gen_args[1]) = REFG(float, 0x1087f04);
    }
  }
  (*(uint *)(gen_frame + 0x18)) = uVar4 / ((*(int * PTR32 *)&gen_args[0])[0xc] - 1U);
  if ((int)(*(uint *)(gen_frame + 0x18)) < 1) {
    (*(uint *)(gen_frame + 0x18)) = 0;
  }
  if ((int)((*(int * PTR32 *)&gen_args[0])[0xb] - 1U) <= (int)(*(uint *)(gen_frame + 0x18))) {
    (*(uint *)(gen_frame + 0x18)) = (*(int * PTR32 *)&gen_args[0])[0xb] - 1U;
  }
  iVar6 = uVar4 - ((*(int * PTR32 *)&gen_args[0])[0xc] + -1) * (*(uint *)(gen_frame + 0x18));
  fVar8 = (float10)iVar6;
  if (iVar6 < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  uVar4 = 0;
  fVar1 = ((float)GEN_TOF(((fVar8 + (float10)(*(float *)&gen_args[1])) * ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)&gen_args[0])[0x10]))))));
  (*(undefined4 *)(gen_frame + 0x10)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x10)), 1, 3),
                      (char)(int)((gen_bits2f((*(int * PTR32 *)&gen_args[0])[0xf]) * fVar1) * ((float)GEN_TOF(((*(int * PTR32 *)&gen_args[0])[0xc] + -1)))));
  if ((*(uint *)&gen_args[3]) != 0) {
    puVar7 = (undefined4 *)((*(uint *)&gen_args[4]) + 0x20);
    do {
      sVar3 = *(short *)((*(int *)&gen_args[2]) + uVar4 * 2);
      if (sVar3 < 0) {
LAB_00d6e56f: ;
        puVar7[-8] = 0;
        puVar7[-7] = 0;
        puVar7[-6] = 0;
        puVar7[-5] = 0;
        puVar7[-4] = 0;
        puVar7[-3] = 0;
        puVar7[-2] = 0;
        puVar7[-1] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0;
      }
      else {
        iVar6 = (int)sVar3;
        if ((*(int * PTR32 *)&gen_args[0])[4] <= iVar6) goto LAB_00d6e56f;
        (*(uint *)&gen_args[4]) = F_00d88640((*(int * PTR32 *)&gen_args[0])[0x1d],(*(int * PTR32 *)&gen_args[0])[0x11],(*(uint *)(gen_frame + 0x18)),
                               *((undefined4 *)GEN_TOP(((*(int * PTR32 *)&gen_args[0])[0x17] + ((*(int * PTR32 *)&gen_args[0])[4] * (*(uint *)(gen_frame + 0x18)) + iVar6) * 4))));
        pbVar5 = (byte *)F_00d88640((*(int * PTR32 *)&gen_args[0])[0x1d],(*(int * PTR32 *)&gen_args[0])[0x11],(*(uint *)(gen_frame + 0x18)),iVar6 * 4);
        bVar2 = *pbVar5;
        F_00d6dc90((*(int * PTR32 *)&gen_args[0]),fVar1,(*(undefined4 *)(gen_frame + 0x10)),(uint)pbVar5[1],bVar2 & 3,&(*(uint *)&gen_args[4]),puVar7 + -8);
        F_00d6dc40((*(int * PTR32 *)&gen_args[0]),fVar1,(*(undefined4 *)(gen_frame + 0x10)),(uint)pbVar5[2],bVar2 >> 2 & 0xf,&(*(uint *)&gen_args[4]),puVar7 + -4);
        F_00d6dd20((*(int * PTR32 *)&gen_args[0]),fVar1,(*(undefined4 *)(gen_frame + 0x10)),(uint)pbVar5[3],(uint)(bVar2 >> 6),&(*(uint *)&gen_args[4]),puVar7);
      }
      uVar4 = uVar4 + 1;
      puVar7 = puVar7 + 0xc;
    } while (uVar4 < (*(uint *)&gen_args[3]));
  }
  return 0;
}

/* ref: hkaSplineCompressedAnimation::vf6 */
unsigned int F_00d6e5a0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0xd6e5a0u, gen_a0, 0u, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  memcpy(&gen_args[4], &gen_a4, sizeof gen_a4);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  byte * pbVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x1c))))((*(int * PTR32 *)&gen_args[0]));
  fVar7 = (float10)(int)(uVar3 - 1);
  if ((int)(uVar3 - 1) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar7 = fVar7 * ((float10)(*(float *)&gen_args[1]) / ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)&gen_args[0])[3]))));
  uVar3 = uVar3 - 2;
  (*(uint *)(gen_frame + 0xc)) = (uint)(longlong)TRUNC(fVar7);
  (*(float *)&gen_args[1]) = REFG(float, 0x1087f04);
  if ((*(uint *)(gen_frame + 0xc)) <= uVar3) {
    fVar8 = (float10)(int)(*(uint *)(gen_frame + 0xc));
    if ((int)(*(uint *)(gen_frame + 0xc)) < 0) {
      fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar7 = fVar7 - fVar8;
    (*(float *)&gen_args[1]) = (float)fVar7;
    uVar3 = (*(uint *)(gen_frame + 0xc));
    if (fVar7 < (float10)0) {
      (*(float *)&gen_args[1]) = 0.0;
    }
    else if (REFG(float, 0x1087f04) < (*(float *)&gen_args[1])) {
      (*(float *)&gen_args[1]) = REFG(float, 0x1087f04);
    }
  }
  uVar4 = uVar3 / ((*(int * PTR32 *)&gen_args[0])[0xc] - 1U);
  if ((int)uVar4 < 1) {
    uVar4 = 0;
  }
  if ((int)((*(int * PTR32 *)&gen_args[0])[0xb] - 1U) <= (int)uVar4) {
    uVar4 = (*(int * PTR32 *)&gen_args[0])[0xb] - 1U;
  }
  iVar6 = uVar3 - ((*(int * PTR32 *)&gen_args[0])[0xc] + -1) * uVar4;
  fVar7 = (float10)iVar6;
  if (iVar6 < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(uint *)(gen_frame + 0x14)) = 0;
  fVar1 = ((float)GEN_TOF(((fVar7 + (float10)(*(float *)&gen_args[1])) * ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)&gen_args[0])[0x10]))))));
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x10)), 1, 3, (unsigned long long)((undefined3)((uint)iVar6 >> 8)));
  *(undefined5 *)&(*(uint *)(gen_frame + 0xc)) =
       CONCAT14((char)(int)((gen_bits2f((*(int * PTR32 *)&gen_args[0])[0xf]) * fVar1) * ((float)GEN_TOF(((*(int * PTR32 *)&gen_args[0])[0xc] + -1)))),
                (*(uint *)(gen_frame + 0xc)));
  if ((*(uint *)&gen_args[3]) != 0) {
    (*(float *)&gen_args[1]) = (*(float *)&gen_args[4]);
    do {
      sVar2 = *(short *)((*(int *)&gen_args[2]) + (*(uint *)(gen_frame + 0x14)) * 2);
      if (sVar2 < 0) {
LAB_00d6e742: ;
        *((undefined4 *)(uintptr_t)gen_fl2bits((float)((*(float *)&gen_args[1])))) = 0;
      }
      else {
        iVar6 = (int)sVar2;
        if ((*(int * PTR32 *)&gen_args[0])[5] <= iVar6) goto LAB_00d6e742;
        (*(float *)&gen_args[4]) = gen_bits2f(F_00d88640((*(int * PTR32 *)&gen_args[0])[0x1d],(*(int * PTR32 *)&gen_args[0])[0x11],uVar4,
                                          *((undefined4 *)GEN_TOP(((*(int * PTR32 *)&gen_args[0])[0x1a] + ((*(int * PTR32 *)&gen_args[0])[5] * uVar4 + iVar6) * 4)))));
        pbVar5 = (byte *)F_00d88640((*(int * PTR32 *)&gen_args[0])[0x1d],(*(int * PTR32 *)&gen_args[0])[0x11],uVar4,iVar6 + (*(int * PTR32 *)&gen_args[0])[4] * 4);
        F_00d6ddb0((*(int * PTR32 *)&gen_args[0]),fVar1,(*(undefined4 *)(gen_frame + 0x10)),(uint)(*pbVar5 & 0xf9),*pbVar5 >> 1 & 3,&(*(float *)&gen_args[4]),
                     (undefined4)gen_fl2bits((*(float *)&gen_args[1])));
      }
      (*(float *)&gen_args[1]) = gen_bits2f((int)gen_fl2bits((*(float *)&gen_args[1])) + 4);
      (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) + 1;
    } while ((*(uint *)(gen_frame + 0x14)) < (*(uint *)&gen_args[3]));
  }
  return 0;
}

/* ref: FUN_00d6e770 */
uint F_00d6e770(unsigned int gen_a0)
{
  GEN_ENTER(0xd6e770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x113541c));
  *(undefined4 *)((int)this + 0x78) = 0;
  if ((*(uint *)((int)this + 0x7c) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x74),
               *(uint *)((int)this + 0x7c) & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0x80000000;
  *(undefined4 *)((int)this + 0x6c) = 0;
  if ((*(uint *)((int)this + 0x70) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x68),
               *(uint *)((int)this + 0x70) * 4);
  }
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x70) = 0x80000000;
  *(undefined4 *)((int)this + 0x60) = 0;
  if ((*(uint *)((int)this + 100) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x5c),
               *(uint *)((int)this + 100) * 4);
  }
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 100) = 0x80000000;
  *(undefined4 *)((int)this + 0x54) = 0;
  if ((*(uint *)((int)this + 0x58) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x50),
               *(uint *)((int)this + 0x58) * 4);
  }
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x58) = 0x80000000;
  *(undefined4 *)((int)this + 0x48) = 0;
  if ((*(uint *)((int)this + 0x4c) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x44),
               *(uint *)((int)this + 0x4c) * 4);
  }
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0x80000000;
  uVar1 = F_00d3e6d0(this);
  return uVar1;
}

/* ref: FUN_00d6e890 */
uint F_00d6e890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd6e890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)this + param_1 * 0x1c;
}

/* ref: FUN_00d6e8c0 */
uint F_00d6e8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd6e8c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d6e8f0 */
unsigned int F_00d6e8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd6e8f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (int)~(uint)(byte)param_1 >> 4 & ~(uint)(byte)param_1;
  if (((byte)param_1 & 1) == 0) {
    if ((uVar2 & 1) != 0) {
      uVar1 = *param_3;
      goto LAB_00d6e922;
    }
  }
  else {
    uVar1 = *param_2;
LAB_00d6e922: ;
    *param_4 = uVar1;
  }
  if (((byte)param_1 & 2) == 0) {
    if ((uVar2 & 2) != 0) {
      uVar1 = param_3[1];
      goto LAB_00d6e935;
    }
  }
  else {
    uVar1 = param_2[1];
LAB_00d6e935: ;
    param_4[1] = uVar1;
  }
  if (((byte)param_1 & 4) == 0) {
    if ((uVar2 & 4) == 0) goto LAB_00d6e94c;
    uVar1 = param_3[2];
  }
  else {
    uVar1 = param_2[2];
  }
  param_4[2] = uVar1;
LAB_00d6e94c: ;
  if (((byte)param_1 & 8) != 0) {
    param_4[3] = param_2[3];
    return 0;
  }
  if ((uVar2 & 8) != 0) {
    param_4[3] = param_3[3];
  }
  return 0;
}

/* ref: FUN_00d6e970 */
uint F_00d6e970(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd6e970u, gen_a0, gen_a1, 0u, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  undefined1 * param_6 = (undefined1 *)(uintptr_t)gen_a5;
  uint uVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  uVar1 = param_2 / (*(int *)(param_1 + 0x30) - 1U);
  uVar1 = ((int)uVar1 < 1) - 1 & uVar1;
  *param_4 = uVar1;
  uVar2 = *(int *)(param_1 + 0x2c) - 1;
  if ((int)uVar1 < (int)uVar2) {
    uVar2 = uVar1;
  }
  *param_4 = uVar2;
  iVar3 = param_2 - (*(int *)(param_1 + 0x30) + -1) * uVar2;
  fVar4 = (float10)iVar3;
  if (iVar3 < 0) {
    fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar4 = (fVar4 + (float10)param_3) * (float10)*(float *)(param_1 + 0x40);
  *param_5 = (float)fVar4;
  *param_6 = (char)(int)((*(float *)(param_1 + 0x3c) * (float)fVar4) *
                        ((float)GEN_TOF((*(int *)(param_1 + 0x30) + -1))));
  return (uint)param_6;
}

/* ref: FUN_00d6e9f0 */
uint F_00d6e9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd6e9f0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = 0x84;
  return param_2;
}

/* ref: FUN_00d6ea10 */
uint F_00d6ea10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd6ea10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  *(undefined4 *)this = param_1;
  *(int *)((int)this + 4) = param_2 * 4;
  return param_2 * 4;
}

/* ref: FUN_00d6ea30 */
uint F_00d6ea30(float gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd6ea30u, 0u, gen_a1, gen_a2, gen_a3);
  float param_1 = (float)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x13512bc) + param_2 * 4))
                    ((undefined4)gen_fl2bits(param_1),param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00d6eaa0 */
uint F_00d6eaa0(unsigned int gen_a0)
{
  GEN_ENTER(0xd6eaa0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x10abe98);
  *in_ecx = GEN_FLT_TO(*in_ecx, REFG(float, 0x10abe98));
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar1;
  in_ecx[3] = uVar1;
  in_ecx[4] = uVar1;
  in_ecx[5] = 0;
  in_ecx[6] = uVar1;
  in_ecx[7] = uVar1;
  return (uint)in_ecx;
}

/* ref: hkaPredictiveCompressedAnimation::vf8 */
uint F_00d6eaf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd6eaf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 4;
}

/* ref: hkaPredictiveCompressedAnimation::vf6 */
unsigned int F_00d6eb00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd6eb00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: hkaPredictiveCompressedAnimation::vf5 */
unsigned int F_00d6eb10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd6eb10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: hkaPredictiveCompressedAnimation::vf7 */
uint F_00d6eb20(unsigned int gen_a0)
{
  GEN_ENTER(0xd6eb20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x84);
}

/* ref: hkaPredictiveCompressedAnimation::vf16 */
byte F_00d6eb30(void)
{
  GEN_ENTER(0xd6eb30u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: hkaPredictiveCompressedAnimation::vf17 */
uint F_00d6eb40(unsigned int gen_a0)
{
  GEN_ENTER(0xd6eb40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x8c);
}

/* ref: hkaPredictiveCompressedAnimation::vf18 */
uint F_00d6eb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd6eb50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x8c) = param_2;
  return param_2;
}

/* ref: FUN_00d6eb70 */
unsigned int F_00d6eb70(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd6eb70u, 0u, 0u, 0u, 0u);
  float in_xmm0 = (float)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  return 0;
}

/* ref: FUN_00d6eb90 */
unsigned int F_00d6eb90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd6eb90u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if ((in_ecx != 0) && (0 < in_eax)) {
    iVar3 = (in_eax - 1U >> 4) + 1;
    do {
      uVar2 = (uint)*(ushort *)*param_3;
      *param_3 = (ushort *)*param_3 + 1;
      iVar4 = in_eax;
      if (0xf < in_eax) {
        iVar4 = 0x10;
      }
      iVar1 = 0;
      if (0 < iVar4) {
        do {
          *(byte *)(in_ecx + iVar1) = *(byte *)(in_ecx + iVar1) & -((byte)uVar2 & 1);
          iVar1 = iVar1 + 1;
          uVar2 = (int)uVar2 >> 1;
        } while (iVar1 < iVar4);
      }
      in_eax = in_eax + -0x10;
      in_ecx = in_ecx + 0x10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00d6ec00 */
unsigned int F_00d6ec00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd6ec00u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * in_eax = (float *)(uintptr_t)gen_a0;
  float * in_ecx = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
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
  
  fVar1 = *in_ecx;
  fVar2 = in_ecx[1];
  fVar3 = in_ecx[2];
  fVar4 = in_ecx[3];
  fVar5 = *param_3;
  fVar6 = param_3[1];
  fVar7 = param_3[2];
  fVar8 = param_3[3];
  fVar9 = *param_4;
  fVar10 = param_4[1];
  fVar11 = param_4[2];
  fVar12 = param_4[3];
  *in_eax = fVar5 * fVar9;
  in_eax[1] = fVar6 * fVar10;
  in_eax[2] = fVar7 * fVar11;
  in_eax[3] = fVar8 * fVar12;
  fVar13 = param_5[1];
  fVar14 = param_5[2];
  fVar15 = param_5[3];
  *in_eax = *param_5 * fVar1 + fVar5 * fVar9;
  in_eax[1] = fVar13 * fVar2 + fVar6 * fVar10;
  in_eax[2] = fVar14 * fVar3 + fVar7 * fVar11;
  in_eax[3] = fVar15 * fVar4 + fVar8 * fVar12;
  return 0;
}

/* ref: hkaPredictiveCompressedAnimation::vf10 */
uint F_00d6ec30(unsigned int gen_a0)
{
  GEN_ENTER(0xd6ec30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (*(int *)(this + 0x68) * 4 + 0xfU & 0xfffffff0) +
         (*(int *)(this + 0x38) * 2 + 0xfU & 0xfffffff0) + 0xa0 +
         (*(int *)(this + 0x90) + 0x1fU & 0xfffffff0);
}

/* ref: hkaPredictiveCompressedAnimation::vf11 */
uint F_00d6ec60(unsigned int gen_a0)
{
  GEN_ENTER(0xd6ec60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *((int *)GEN_TOP((*(int *)(this + 0x8c) + 0x1c))) + 3U & 0xfffffffc;
  uVar1 = *((int *)GEN_TOP((*(int *)(this + 0x8c) + 0x40))) + 3U & 0xfffffffc;
  return (uVar1 + 0xf & 0xfffffff0) + 0x100 + (uVar1 + uVar2 * 0x24) * 4 +
         (uVar2 + 0xf & 0xfffffff0);
}

/* ref: FUN_00d6eca0 */
uint F_00d6eca0(unsigned int gen_a0)
{
  GEN_ENTER(0xd6eca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return *(int *)((int)this + 0x2c) +
         (*(int *)((int)this + 0x38) + 0x4a + *(int *)((int)this + 0x68) * 2) * 2;
}

/* ref: FUN_00d6ecc0 */
uint F_00d6ecc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd6ecc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  short * in_eax = (short *)(uintptr_t)gen_a0;
  float * in_ecx = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  sVar1 = in_eax[1];
  sVar2 = in_eax[2];
  sVar3 = in_eax[3];
  sVar4 = in_eax[4];
  sVar5 = in_eax[5];
  sVar6 = in_eax[6];
  sVar7 = in_eax[7];
  fVar8 = in_ecx[1];
  fVar9 = in_ecx[2];
  fVar10 = in_ecx[3];
  fVar11 = param_4[1];
  fVar12 = param_4[2];
  fVar13 = param_4[3];
  *param_6 = (float)(int)*in_eax * *in_ecx + *param_4;
  param_6[1] = (float)(int)sVar1 * fVar8 + fVar11;
  param_6[2] = (float)(int)sVar2 * fVar9 + fVar12;
  param_6[3] = (float)(int)sVar3 * fVar10 + fVar13;
  fVar8 = param_3[1];
  fVar9 = param_3[2];
  fVar10 = param_3[3];
  fVar11 = param_5[1];
  fVar12 = param_5[2];
  fVar13 = param_5[3];
  *param_7 = (float)(int)sVar4 * *param_3 + *param_5;
  param_7[1] = (float)(int)sVar5 * fVar8 + fVar11;
  param_7[2] = (float)(int)sVar6 * fVar9 + fVar12;
  param_7[3] = (float)(int)sVar7 * fVar10 + fVar13;
  return (uint)param_7;
}

/* ref: FUN_00d6ed20 */
uint F_00d6ed20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd6ed20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 / 0xf;
  *param_2 = 0;
  if (uVar2 != 0) {
    iVar1 = *(int *)((int)this + 0x34) + *(int *)((int)this + 0x40) * 2;
    *param_2 = CONCAT22(*(undefined2 *)(iVar1 + -2 + uVar2 * 4),
                        *(undefined2 *)(iVar1 + -4 + uVar2 * 4));
  }
  iVar1 = *(int *)((int)this + 0x34) + *(int *)((int)this + 0x40) * 2;
  *param_3 = CONCAT22(*(undefined2 *)(iVar1 + 2 + uVar2 * 4),*(undefined2 *)(iVar1 + uVar2 * 4));
  return (uint)param_3;
}

/* ref: hkaPredictiveCompressedAnimation::vf9 */
unsigned int F_00d6ed80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd6ed80u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int iVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[3]);
  *(*(undefined4 * PTR32 *)&gen_args[3]) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined4 * PTR32 *)&gen_args[3])[1] = 0x94;
  F_00d6ed20((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]),&(*(undefined4 * PTR32 *)&gen_args[3]),&(*(int *)&gen_args[1]));
  puVar2[2] = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x28))) + (int)(*(undefined4 * PTR32 *)&gen_args[3]);
  puVar2[3] = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[3]);
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x38)));
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34)));
  }
  puVar2[4] = uVar3;
  puVar2[5] = iVar1 * 2;
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x68)));
  if (iVar1 == 0) {
    puVar2[6] = 0;
    puVar2[7] = 0;
    return 0;
  }
  puVar2[6] = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 100)));
  puVar2[7] = iVar1 * 4;
  return 0;
}

/* ref: FUN_00d6f5e0 */
uint F_00d6f5e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd6f5e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(uint *)((int)this + 0x2c) = uVar2;
  *(undefined4 *)((int)this + 0x28) = uVar1;
  *(uint *)((int)this + 0x30) = uVar2 | 0x80000000;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x14) >> 1;
  *(uint *)((int)this + 0x38) = uVar2;
  *(undefined4 *)((int)this + 0x34) = uVar1;
  *(uint *)((int)this + 0x3c) = uVar2 | 0x80000000;
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar3 = *(uint *)(param_1 + 0x1c) >> 2;
  *(uint *)((int)this + 0x68) = uVar3;
  *(uint *)((int)this + 100) = uVar2;
  *(uint *)((int)this + 0x6c) = uVar3 | 0x80000000;
  return uVar2;
}

/* ref: FUN_00d6f630 */
uint F_00d6f630(unsigned int gen_a0)
{
  GEN_ENTER(0xd6f630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined8 * puVar1;
  undefined8 * puVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  puVar1 = (undefined8 *)F_00d6eaa0(((undefined1 *)(gen_frame + 0xc)));
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0x20);
  }
  puVar2 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x20 + *(int *)this)));
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2[3] = puVar1[3];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)this;
}

/* ref: FUN_00d6f6c0 */
uint F_00d6f6c0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7, float gen_a8)
{
  GEN_ENTER(0xd6f6c0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined8 * puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = ((int)0x80000000);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = ((int)0x80000000);
  param_1[8] = ((int)0x80000000);
  param_1[6] = 0;
  param_1[7] = 0;
  F_00d6eaa0(&(*(float *)(gen_frame + 0xc)));
  (*(float *)(gen_frame + 0xc)) = param_2;
  (*(float *)(gen_frame + 0x10)) = param_3;
  (*(float *)(gen_frame + 0x14)) = param_4;
  (*(float *)(gen_frame + 0x18)) = param_5;
  (*(float *)(gen_frame + 0x1c)) = param_6;
  (*(float *)(gen_frame + 0x20)) = param_7;
  (*(float *)(gen_frame + 0x24)) = param_8;
  (*(float *)(gen_frame + 0x28)) = param_9;
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_1,0x20);
  }
  puVar1 = (undefined8 *)(param_1[1] * 0x20 + *param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0x10))),(uint)gen_fl2bits((*(float *)(gen_frame + 0xc))));
    puVar1[1] = CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0x18))),(uint)gen_fl2bits((*(float *)(gen_frame + 0x14))));
    puVar1[2] = CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0x20))),(uint)gen_fl2bits((*(float *)(gen_frame + 0x1c))));
    puVar1[3] = CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0x28))),(uint)gen_fl2bits((*(float *)(gen_frame + 0x24))));
  }
  param_1[1] = param_1[1] + 1;
  return (uint)param_1;
}

/* ref: FUN_00d721f0 */
uint F_00d721f0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xd721f0u, gen_a0, 0u, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int * param_7 = (int *)(uintptr_t)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 * param_9 = (undefined4 *)(uintptr_t)gen_a8;
  undefined4 * param_10 = (undefined4 *)(uintptr_t)gen_a9;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  LPVOID pvVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 * local_1c;
  uint local_18;
  uint local_14;
  uint local_c;
  uint local_8;
  
  iVar11 = *param_7;
  iVar1 = *(int *)(iVar11 + 0x80);
  iVar12 = *(int *)(iVar11 + 0x7c);
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_18 = *(uint *)((int)pvVar5 + 0xc);
  uVar13 = (iVar12 + 3U & 0xfffffffc) * 0x30 + 0x7f & 0xffffff80;
  if ((*(int *)((int)pvVar5 + 8) < (int)uVar13) ||
     (*(uint *)((int)pvVar5 + 0x10) < local_18 + uVar13)) {
    local_18 = F_00d94390(pvVar5,uVar13);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = local_18 + uVar13;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_14 = *(uint *)((int)pvVar5 + 0xc);
  uVar9 = (iVar1 + 3U & 0xfffffffc) * 4 + 0x7f & 0xffffff80;
  if ((*(int *)((int)pvVar5 + 8) < (int)uVar9) || (*(uint *)((int)pvVar5 + 0x10) < local_14 + uVar9)
     ) {
    local_14 = F_00d94390(pvVar5,uVar9);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = local_14 + uVar9;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_c = *(uint *)((int)pvVar5 + 0xc);
  uVar10 = (iVar12 + 0xfU & 0xfffffff0) + 0x7f & 0xffffff80;
  if ((*(int *)((int)pvVar5 + 8) < (int)uVar10) ||
     (*(uint *)((int)pvVar5 + 0x10) < local_c + uVar10)) {
    local_c = F_00d94390(pvVar5,uVar10);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = local_c + uVar10;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_8 = *(uint *)((int)pvVar5 + 0xc);
  uVar14 = (iVar1 + 0xfU & 0xfffffff0) + 0x7f & 0xffffff80;
  if ((*(int *)((int)pvVar5 + 8) < (int)uVar14) ||
     (*(uint *)((int)pvVar5 + 0x10) < local_8 + uVar14)) {
    local_8 = F_00d94390(pvVar5,uVar14);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = local_8 + uVar14;
  }
  F_00da1030(local_c,0xff,iVar12);
  F_00da1030(local_8,0xff,iVar1);
  F_00d6f800(iVar11,param_1,param_2,param_7[2],param_5,param_6,iVar12,iVar1,local_18,local_14,
               local_c,local_8);
  iVar11 = 0;
  param_7 = (int *)0x0;
  if (3 < iVar12) {
    puVar6 = (undefined4 *)(local_18 + 0x50);
    do {
      if (param_3 <= iVar11) goto LAB_00d72508;
      puVar8 = param_9;
      if (0.0 < (float)*(byte *)(local_c + (int)param_7)) {
        uVar2 = puVar6[-0x13];
        uVar3 = puVar6[-0x12];
        uVar4 = puVar6[-0x11];
        *param_9 = puVar6[-0x14];
        param_9[1] = uVar2;
        param_9[2] = uVar3;
        param_9[3] = uVar4;
        uVar2 = puVar6[-0xf];
        uVar3 = puVar6[-0xe];
        uVar4 = puVar6[-0xd];
        param_9[4] = puVar6[-0x10];
        param_9[5] = uVar2;
        param_9[6] = uVar3;
        param_9[7] = uVar4;
        uVar2 = puVar6[-0xb];
        uVar3 = puVar6[-10];
        uVar4 = puVar6[-9];
        puVar8 = param_9 + 0xc;
        param_9[8] = puVar6[-0xc];
        param_9[9] = uVar2;
        param_9[10] = uVar3;
        param_9[0xb] = uVar4;
        iVar11 = iVar11 + 1;
      }
      if (param_3 <= iVar11) goto LAB_00d72508;
      puVar7 = puVar8;
      if (0.0 < (float)*(byte *)(local_c + 1 + (int)param_7)) {
        uVar2 = puVar6[-7];
        uVar3 = puVar6[-6];
        uVar4 = puVar6[-5];
        *puVar8 = puVar6[-8];
        puVar8[1] = uVar2;
        puVar8[2] = uVar3;
        puVar8[3] = uVar4;
        uVar2 = puVar6[-3];
        uVar3 = puVar6[-2];
        uVar4 = puVar6[-1];
        puVar8[4] = puVar6[-4];
        puVar8[5] = uVar2;
        puVar8[6] = uVar3;
        puVar8[7] = uVar4;
        uVar2 = puVar6[1];
        uVar3 = puVar6[2];
        uVar4 = puVar6[3];
        puVar7 = puVar8 + 0xc;
        puVar8[8] = *puVar6;
        puVar8[9] = uVar2;
        puVar8[10] = uVar3;
        puVar8[0xb] = uVar4;
        iVar11 = iVar11 + 1;
      }
      if (param_3 <= iVar11) goto LAB_00d72508;
      puVar8 = puVar7;
      if (0.0 < (float)*(byte *)(local_c + 2 + (int)param_7)) {
        uVar2 = puVar6[5];
        uVar3 = puVar6[6];
        uVar4 = puVar6[7];
        *puVar7 = puVar6[4];
        puVar7[1] = uVar2;
        puVar7[2] = uVar3;
        puVar7[3] = uVar4;
        uVar2 = puVar6[9];
        uVar3 = puVar6[10];
        uVar4 = puVar6[0xb];
        puVar7[4] = puVar6[8];
        puVar7[5] = uVar2;
        puVar7[6] = uVar3;
        puVar7[7] = uVar4;
        uVar2 = puVar6[0xd];
        uVar3 = puVar6[0xe];
        uVar4 = puVar6[0xf];
        puVar8 = puVar7 + 0xc;
        puVar7[8] = puVar6[0xc];
        puVar7[9] = uVar2;
        puVar7[10] = uVar3;
        puVar7[0xb] = uVar4;
        iVar11 = iVar11 + 1;
      }
      if (param_3 <= iVar11) goto LAB_00d72508;
      param_9 = puVar8;
      if (0.0 < (float)*(byte *)(local_c + 3 + (int)param_7)) {
        uVar2 = puVar6[0x11];
        uVar3 = puVar6[0x12];
        uVar4 = puVar6[0x13];
        *puVar8 = puVar6[0x10];
        puVar8[1] = uVar2;
        puVar8[2] = uVar3;
        puVar8[3] = uVar4;
        uVar2 = puVar6[0x15];
        uVar3 = puVar6[0x16];
        uVar4 = puVar6[0x17];
        puVar8[4] = puVar6[0x14];
        puVar8[5] = uVar2;
        puVar8[6] = uVar3;
        puVar8[7] = uVar4;
        uVar2 = puVar6[0x19];
        uVar3 = puVar6[0x1a];
        uVar4 = puVar6[0x1b];
        param_9 = puVar8 + 0xc;
        puVar8[8] = puVar6[0x18];
        puVar8[9] = uVar2;
        puVar8[10] = uVar3;
        puVar8[0xb] = uVar4;
        iVar11 = iVar11 + 1;
      }
      param_7 = (int *)((int)param_7 + 4);
      puVar6 = puVar6 + 0x30;
    } while ((int)param_7 < iVar12 + -3);
  }
  if ((int)param_7 < iVar12) {
    local_1c = (undefined4 *)(local_18 + 0x20 + (int)((int)(uintptr_t)param_7) * 0x30);
    do {
      if (param_3 <= iVar11) break;
      puVar6 = param_9;
      if (0.0 < (float)*(byte *)(local_c + (int)param_7)) {
        uVar2 = local_1c[-7];
        uVar3 = local_1c[-6];
        uVar4 = local_1c[-5];
        *param_9 = local_1c[-8];
        param_9[1] = uVar2;
        param_9[2] = uVar3;
        param_9[3] = uVar4;
        uVar2 = local_1c[-3];
        uVar3 = local_1c[-2];
        uVar4 = local_1c[-1];
        param_9[4] = local_1c[-4];
        param_9[5] = uVar2;
        param_9[6] = uVar3;
        param_9[7] = uVar4;
        uVar2 = local_1c[1];
        uVar3 = local_1c[2];
        uVar4 = local_1c[3];
        puVar6 = param_9 + 0xc;
        param_9[8] = *local_1c;
        param_9[9] = uVar2;
        param_9[10] = uVar3;
        param_9[0xb] = uVar4;
        iVar11 = iVar11 + 1;
      }
      param_7 = (int *)((int)param_7 + 1);
      local_1c = local_1c + 0xc;
      param_9 = puVar6;
    } while ((int)param_7 < iVar12);
  }
LAB_00d72508: ;
  iVar11 = 0;
  iVar12 = 0;
  if (3 < iVar1) {
    puVar6 = (undefined4 *)(local_14 + 8);
    do {
      if (param_4 <= iVar11) goto LAB_00d725fc;
      puVar8 = param_10;
      if (0.0 < (float)*(byte *)(local_8 + iVar12)) {
        puVar8 = param_10 + 1;
        *param_10 = puVar6[-2];
        iVar11 = iVar11 + 1;
      }
      if (param_4 <= iVar11) goto LAB_00d725fc;
      puVar7 = puVar8;
      if (0.0 < (float)*(byte *)(local_8 + 1 + iVar12)) {
        puVar7 = puVar8 + 1;
        *puVar8 = puVar6[-1];
        iVar11 = iVar11 + 1;
      }
      if (param_4 <= iVar11) goto LAB_00d725fc;
      puVar8 = puVar7;
      if (0.0 < (float)*(byte *)(local_8 + 2 + iVar12)) {
        puVar8 = puVar7 + 1;
        *puVar7 = *puVar6;
        iVar11 = iVar11 + 1;
      }
      if (param_4 <= iVar11) goto LAB_00d725fc;
      param_10 = puVar8;
      if (0.0 < (float)*(byte *)(local_8 + 3 + iVar12)) {
        param_10 = puVar8 + 1;
        *puVar8 = puVar6[1];
        iVar11 = iVar11 + 1;
      }
      iVar12 = iVar12 + 4;
      puVar6 = puVar6 + 4;
    } while (iVar12 < iVar1 + -3);
  }
  while ((iVar12 < iVar1 && (iVar11 < param_4))) {
    puVar6 = param_10;
    if (0.0 < (float)*(byte *)(local_8 + iVar12)) {
      puVar6 = param_10 + 1;
      *param_10 = *(undefined4 *)(local_14 + iVar12 * 4);
      iVar11 = iVar11 + 1;
    }
    iVar12 = iVar12 + 1;
    param_10 = puVar6;
  }
LAB_00d725fc: ;
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar5 + 8) < (int)uVar14) ||
      (uVar14 + local_8 != *(int *)((int)pvVar5 + 0xc))) ||
     (*(uint *)((int)pvVar5 + 0x14) == local_8)) {
    F_00d945c0(pvVar5,local_8,uVar14);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = local_8;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar5 + 8) < (int)uVar10) ||
      (uVar10 + local_c != *(int *)((int)pvVar5 + 0xc))) ||
     (*(uint *)((int)pvVar5 + 0x14) == local_c)) {
    F_00d945c0(pvVar5,local_c,uVar10);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = local_c;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar5 + 8) < (int)uVar9) || (uVar9 + local_14 != *(int *)((int)pvVar5 + 0xc))
      ) || (*(uint *)((int)pvVar5 + 0x14) == local_14)) {
    F_00d945c0(pvVar5,local_14,uVar9);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = local_14;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((((int)uVar13 <= *(int *)((int)pvVar5 + 8)) &&
      (uVar13 + local_18 == *(int *)((int)pvVar5 + 0xc))) &&
     (*(uint *)((int)pvVar5 + 0x14) != local_18)) {
    *(uint *)((int)pvVar5 + 0xc) = local_18;
    return (uint)pvVar5;
  }
  uVar13 = F_00d945c0(pvVar5,local_18,uVar13);
  return uVar13;
}

/* ref: hkaPredictiveCompressedAnimation::vf3 */
uint F_00d726e0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd726e0u, gen_a0, 0u, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  uint uVar5;
  undefined4 * puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  float10 fVar15;
  float10 fVar16;
  float fVar17;
  uint local_30;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  iVar13 = *(int *)(param_1[0x23] + 0x28);
  iVar14 = param_1[0x1f];
  if (iVar13 <= param_1[0x1f]) {
    iVar14 = iVar13;
  }
  iVar13 = *(int *)(param_1[0x23] + 0x34);
  local_8 = param_1[0x20];
  if (iVar13 <= param_1[0x20]) {
    local_8 = iVar13;
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_18 = *(uint *)((int)pvVar4 + 0xc);
  uVar7 = iVar14 * 0x30 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar4 + 8) < (int)uVar7) || (*(uint *)((int)pvVar4 + 0x10) < uVar7 + local_18)
     ) {
    local_18 = F_00d94390(pvVar4,uVar7);
  }
  else {
    *(uint *)((int)pvVar4 + 0xc) = uVar7 + local_18;
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_10 = *(uint *)((int)pvVar4 + 0xc);
  uVar11 = local_8 * 4 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar4 + 8) < (int)uVar11) ||
     (*(uint *)((int)pvVar4 + 0x10) < uVar11 + local_10)) {
    local_10 = F_00d94390(pvVar4,uVar11);
  }
  else {
    *(uint *)((int)pvVar4 + 0xc) = uVar11 + local_10;
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_c = *(uint *)((int)pvVar4 + 0xc);
  uVar8 = iVar14 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar4 + 8) < (int)uVar8) || (*(uint *)((int)pvVar4 + 0x10) < uVar8 + local_c))
  {
    local_c = F_00d94390(pvVar4,uVar8);
  }
  else {
    *(uint *)((int)pvVar4 + 0xc) = uVar8 + local_c;
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_14 = *(uint *)((int)pvVar4 + 0xc);
  uVar12 = local_8 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar4 + 8) < (int)uVar12) ||
     (*(uint *)((int)pvVar4 + 0x10) < uVar12 + local_14)) {
    local_14 = F_00d94390(pvVar4,uVar12);
  }
  else {
    *(uint *)((int)pvVar4 + 0xc) = uVar12 + local_14;
  }
  F_00da1030(local_c,0xff,iVar14);
  F_00da1030(local_14,0xff,local_8);
  uVar5 = ((code *)*(gen_code32 *)(*param_1 + 0x1c))(param_1);
  fVar15 = (float10)(int)(uVar5 - 1);
  if ((int)(uVar5 - 1) < 0) {
    fVar15 = fVar15 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar15 = fVar15 * ((float10)param_2 / ((float10)GEN_TOD(gen_bits2f(param_1[3]))));
  uVar5 = uVar5 - 2;
  local_30 = (uint)(longlong)TRUNC(fVar15);
  fVar17 = REFG(float, 0x1087f04);
  if (local_30 <= uVar5) {
    fVar16 = (float10)(int)local_30;
    if ((int)local_30 < 0) {
      fVar16 = fVar16 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar15 = fVar15 - fVar16;
    fVar17 = (float)fVar15;
    uVar5 = local_30;
    if (fVar15 < (float10)0) {
      fVar17 = 0.0;
    }
    else if (REFG(float, 0x1087f04) < fVar17) {
      fVar17 = REFG(float, 0x1087f04);
    }
  }
  F_00d6f800(param_1,uVar5,fVar17,0,*(undefined4 *)(param_1[0x23] + 0x24),
               *(undefined4 *)(param_1[0x23] + 0x30),iVar14,local_8,local_18,local_10,local_c,
               local_14);
  iVar13 = 0;
  if (0 < iVar14) {
    puVar6 = (undefined4 *)(local_18 + 0x20);
    do {
      puVar10 = param_3;
      if (*(char *)(local_c + iVar13) != '\0') {
        uVar1 = puVar6[-7];
        uVar2 = puVar6[-6];
        uVar3 = puVar6[-5];
        *param_3 = puVar6[-8];
        param_3[1] = uVar1;
        param_3[2] = uVar2;
        param_3[3] = uVar3;
        uVar1 = puVar6[-3];
        uVar2 = puVar6[-2];
        uVar3 = puVar6[-1];
        param_3[4] = puVar6[-4];
        param_3[5] = uVar1;
        param_3[6] = uVar2;
        param_3[7] = uVar3;
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        puVar10 = param_3 + 0xc;
        param_3[8] = *puVar6;
        param_3[9] = uVar1;
        param_3[10] = uVar2;
        param_3[0xb] = uVar3;
      }
      iVar13 = iVar13 + 1;
      puVar6 = puVar6 + 0xc;
      param_3 = puVar10;
    } while (iVar13 < iVar14);
  }
  iVar13 = 0;
  if (3 < local_8) {
    puVar6 = (undefined4 *)(local_10 + 8);
    do {
      puVar10 = param_4;
      if (*(char *)(local_14 + iVar13) != '\0') {
        puVar10 = param_4 + 1;
        *param_4 = puVar6[-2];
      }
      puVar9 = puVar10;
      if (*(char *)(local_14 + 1 + iVar13) != '\0') {
        puVar9 = puVar10 + 1;
        *puVar10 = puVar6[-1];
      }
      puVar10 = puVar9;
      if (*(char *)(local_14 + 2 + iVar13) != '\0') {
        puVar10 = puVar9 + 1;
        *puVar9 = *puVar6;
      }
      param_4 = puVar10;
      if (*(char *)(local_14 + 3 + iVar13) != '\0') {
        param_4 = puVar10 + 1;
        *puVar10 = puVar6[1];
      }
      iVar13 = iVar13 + 4;
      puVar6 = puVar6 + 4;
    } while (iVar13 < local_8 + -3);
  }
  for (; iVar13 < local_8; iVar13 = iVar13 + 1) {
    puVar6 = param_4;
    if (*(char *)(local_14 + iVar13) != '\0') {
      puVar6 = param_4 + 1;
      *param_4 = *(undefined4 *)(local_10 + iVar13 * 4);
    }
    param_4 = puVar6;
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar4 + 8) < (int)uVar12) ||
      (uVar12 + local_14 != *(int *)((int)pvVar4 + 0xc))) ||
     (*(uint *)((int)pvVar4 + 0x14) == local_14)) {
    F_00d945c0(pvVar4,local_14,uVar12);
  }
  else {
    *(uint *)((int)pvVar4 + 0xc) = local_14;
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar4 + 8) < (int)uVar8) || (uVar8 + local_c != *(int *)((int)pvVar4 + 0xc)))
     || (*(uint *)((int)pvVar4 + 0x14) == local_c)) {
    F_00d945c0(pvVar4,local_c,uVar8);
  }
  else {
    *(uint *)((int)pvVar4 + 0xc) = local_c;
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar4 + 8) < (int)uVar11) ||
      (uVar11 + local_10 != *(int *)((int)pvVar4 + 0xc))) ||
     (*(uint *)((int)pvVar4 + 0x14) == local_10)) {
    F_00d945c0(pvVar4,local_10,uVar11);
  }
  else {
    *(uint *)((int)pvVar4 + 0xc) = local_10;
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((((int)uVar7 <= *(int *)((int)pvVar4 + 8)) &&
      (uVar7 + local_18 == *(int *)((int)pvVar4 + 0xc))) &&
     (*(uint *)((int)pvVar4 + 0x14) != local_18)) {
    *(uint *)((int)pvVar4 + 0xc) = local_18;
    return (uint)pvVar4;
  }
  uVar7 = F_00d945c0(pvVar4,local_18,uVar7);
  return uVar7;
}

/* ref: FUN_00d72ac0 */
unsigned int F_00d72ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xd72ac0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
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
  fVar2 = fVar2 * ((float10)param_4 / ((float10)GEN_TOD(gen_bits2f(param_1[3]))));
  uVar1 = uVar1 - 2;
  local_c = (uint)(longlong)TRUNC(fVar2);
  fVar4 = REFG(float, 0x1087f04);
  if (local_c <= uVar1) {
    fVar3 = (float10)(int)local_c;
    if ((int)local_c < 0) {
      fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar2 = fVar2 - fVar3;
    fVar4 = (float)fVar2;
    uVar1 = local_c;
    if (fVar2 < (float10)0) {
      fVar4 = 0.0;
    }
    else if (REFG(float, 0x1087f04) < fVar4) {
      fVar4 = REFG(float, 0x1087f04);
    }
  }
  F_00d6f800(param_1,uVar1,fVar4,0,*(undefined4 *)(param_1[0x23] + 0x24),
               *(undefined4 *)(param_1[0x23] + 0x30),param_1[0x1f],param_1[0x20],param_2,param_3,0,0
              );
  return 0;
}

/* ref: FUN_00d72bf0 */
uint F_00d72bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd72bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a1;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  
  gen_minps(&(auVar1), &(*param_1), &(*param_2));
  memcpy(&(*(gen_v16 *)this), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)this) ? sizeof(auVar1) : sizeof(*(gen_v16 *)this));
  return (uint)param_1;
}

/* ref: FUN_00d72c10 */
uint F_00d72c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd72c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a1;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  
  gen_maxps(&(auVar1), &(*param_1), &(*param_2));
  memcpy(&(*(gen_v16 *)this), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)this) ? sizeof(auVar1) : sizeof(*(gen_v16 *)this));
  return (uint)param_1;
}

/* ref: FUN_00d72c30 */
uint F_00d72c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd72c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 5);
  return uVar1;
}

/* ref: FUN_00d72c50 */
uint F_00d72c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72c50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d72c60 */
uint F_00d72c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd72c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d72c90 */
uint F_00d72c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd72c90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d72cb0 */
uint F_00d72cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72cb0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = in_ecx[1];
  iVar2 = in_ecx[2];
  iVar3 = in_ecx[3];
  *param_2 = (float)*in_ecx;
  param_2[1] = (float)iVar1;
  param_2[2] = (float)iVar2;
  param_2[3] = (float)iVar3;
  return (uint)param_2;
}

/* ref: FUN_00d72cf0 */
uint F_00d72cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72cf0u, gen_a0, gen_a1, 0u, 0u);
  gen_v16 * in_ecx = (gen_v16 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 auVar1 [16];
  
  (*(undefined2 *)((char *)&auVar1 + 2)) = 0;
  (*(undefined2 *)((char *)&auVar1 + 0)) = *(ushort *)(param_2 + 8);
  (*(undefined2 *)((char *)&auVar1 + 4)) = *(undefined2 *)(param_2 + 10);
  (*(undefined2 *)((char *)&auVar1 + 6)) = 0;
  (*(undefined2 *)((char *)&auVar1 + 8)) = *(undefined2 *)(param_2 + 0xc);
  (*(undefined2 *)((char *)&auVar1 + 10)) = 0;
  (*(undefined2 *)((char *)&auVar1 + 12)) = *(undefined2 *)(param_2 + 0xe);
  (*(undefined2 *)((char *)&auVar1 + 14)) = 0;
  memcpy(&(*in_ecx), &(auVar1), sizeof(auVar1) < sizeof(*in_ecx) ? sizeof(auVar1) : sizeof(*in_ecx));
  return param_2;
}

/* ref: FUN_00d72d10 */
unsigned int F_00d72d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd72d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = uVar2;
  *(undefined4 *)((int)this + 8) = uVar3;
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return 0;
}

/* ref: FUN_00d72d30 */
uint F_00d72d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72d30u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *in_ecx = *param_2 & 0x7fffffff;
  in_ecx[1] = uVar1 & 0x7fffffff;
  in_ecx[2] = uVar2 & 0x7fffffff;
  in_ecx[3] = uVar3 & 0x7fffffff;
  return (uint)param_2;
}

/* ref: FUN_00d72d50 */
uint F_00d72d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72d50u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  *in_ecx = *param_2 << 0x10;
  in_ecx[1] = iVar1 << 0x10;
  in_ecx[2] = iVar2 << 0x10;
  in_ecx[3] = iVar3 << 0x10;
  return (uint)param_2;
}

/* ref: FUN_00d72d70 */
uint F_00d72d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72d70u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  *in_ecx = *param_2 >> 0x10;
  in_ecx[1] = iVar1 >> 0x10;
  in_ecx[2] = iVar2 >> 0x10;
  in_ecx[3] = iVar3 >> 0x10;
  return (uint)param_2;
}

/* ref: FUN_00d72d90 */
uint F_00d72d90(unsigned int gen_a0)
{
  GEN_ENTER(0xd72d90u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (*(undefined4 *)((char *)&REFG(undefined8, 0x1138ae8) + 4));
  uVar2 = (undefined4)REFG(undefined8, 0x1138ae8);
  uVar1 = (*(undefined4 *)((char *)&REFG(undefined8, 0x1138ae0) + 4));
  *param_1 = (undefined4)REFG(undefined8, 0x1138ae0);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00d72db0 */
uint F_00d72db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0x34) + *(int *)((int)this + param_1 * 4 + 0x40) * 2;
}

/* ref: FUN_00d72dd0 */
uint F_00d72dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 100) + *(int *)((int)this + param_1 * 4 + 0x70) * 4;
}

/* ref: FUN_00d72df0 */
uint F_00d72df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x40);
  if (param_1 == 8) {
    return (*(int *)((int)this + 0x38) + -8) - iVar1;
  }
  return *(int *)((int)this + param_1 * 4 + 0x44) - iVar1;
}

/* ref: FUN_00d72e40 */
uint F_00d72e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x34) + *(int *)((int)this + 0x40) * 2;
  return CONCAT22(*(undefined2 *)(iVar1 + 2 + param_1 * 4),*(undefined2 *)(iVar1 + param_1 * 4));
}

/* ref: FUN_00d72e70 */
uint F_00d72e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x34) + *(int *)((int)this + 0x44) * 2;
  return CONCAT22(*(undefined2 *)(iVar1 + 2 + param_1 * 4),*(undefined2 *)(iVar1 + param_1 * 4));
}

/* ref: FUN_00d72ea0 */
unsigned int F_00d72ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72ea0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *in_ecx;
  fVar2 = in_ecx[1];
  fVar3 = in_ecx[2];
  *param_2 = (fVar2 + fVar1) + fVar3;
  param_2[1] = (fVar2 + fVar1) + fVar3;
  param_2[2] = (fVar2 + fVar1) + fVar3;
  param_2[3] = (fVar2 + fVar1) + fVar3;
  return 0;
}

/* ref: FUN_00d72ed0 */
uint F_00d72ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72ed0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = 0x94;
  return param_2;
}

/* ref: FUN_00d72ef0 */
uint F_00d72ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72ef0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d72f20 */
uint F_00d72f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1[1] == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  uVar1 = param_1[1] * 4;
  *(undefined4 *)this = *param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00d72f50 */
uint F_00d72f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72f50u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_00d72f60 */
unsigned int F_00d72f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd72f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  if (0 < param_2) {
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
        param_1[2] = param_3[2];
        param_1[3] = param_3[3];
      }
      param_1 = param_1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}

/* ref: FUN_00d72fb0 */
uint F_00d72fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd72fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00d72fd0 */
uint F_00d72fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd72fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00d73000 */
uint F_00d73000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd73000u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00d73040 */
uint F_00d73040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd73040u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  short * param_2 = (short *)(uintptr_t)gen_a1;
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar1 = param_2[1];
  sVar2 = param_2[2];
  sVar3 = param_2[3];
  *in_ecx = (int)*param_2;
  in_ecx[1] = (int)sVar1;
  in_ecx[2] = (int)sVar2;
  in_ecx[3] = (int)sVar3;
  return (uint)param_2;
}

/* ref: FUN_00d73070 */
uint F_00d73070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd73070u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar1 = *(short *)(param_2 + 10);
  sVar2 = *(short *)(param_2 + 0xc);
  sVar3 = *(short *)(param_2 + 0xe);
  *in_ecx = (int)*(short *)(param_2 + 8);
  in_ecx[1] = (int)sVar1;
  in_ecx[2] = (int)sVar2;
  in_ecx[3] = (int)sVar3;
  return param_2;
}

/* ref: FUN_00d730a0 */
unsigned int F_00d730a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd730a0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *in_ecx;
  fVar2 = in_ecx[1];
  fVar3 = in_ecx[2];
  *param_2 = (fVar2 + fVar1) + fVar3;
  param_2[1] = (fVar2 + fVar1) + fVar3;
  param_2[2] = (fVar2 + fVar1) + fVar3;
  param_2[3] = (fVar2 + fVar1) + fVar3;
  return 0;
}

/* ref: FUN_00d730d0 */
unsigned int F_00d730d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd730d0u, gen_a0, 0u, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  
  fVar1 = ABS(*param_1);
  fVar2 = ABS(param_1[1]);
  fVar3 = ABS(param_1[2]);
  (*(undefined4 *)((char *)&auVar4 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 4)) - ((fVar2 + fVar1) + fVar3));
  (*(undefined4 *)((char *)&auVar4 + 0)) = (undefined4)gen_fl2bits((float)REFG(float, 0x1138af0) - ((fVar2 + fVar1) + fVar3));
  (*(undefined4 *)((char *)&auVar4 + 8)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 8)) - ((fVar2 + fVar1) + fVar3));
  (*(undefined4 *)((char *)&auVar4 + 12)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 12)) - ((fVar2 + fVar1) + fVar3));
  gen_maxps(&(auVar4), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar4));
  gen_minps(&(auVar4), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar4));
  *param_1 = *param_1;
  param_1[1] = param_1[1];
  param_1[2] = param_1[2];
  param_1[3] = (*(float *)((char *)&auVar4 + 12));
  return 0;
}

/* ref: FUN_00d73130 */
unsigned int F_00d73130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd73130u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  fVar4 = ABS(*param_1);
  fVar5 = ABS(param_1[1]);
  fVar6 = ABS(param_1[2]);
  (*(undefined4 *)((char *)&auVar7 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 4)) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar7 + 0)) = (undefined4)gen_fl2bits((float)REFG(float, 0x1138af0) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar7 + 8)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 8)) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar7 + 12)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 12)) - ((fVar5 + fVar4) + fVar6));
  gen_maxps(&(auVar7), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar7));
  gen_minps(&(auVar7), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar7));
  *param_1 = *param_1;
  param_1[1] = param_1[1];
  param_1[2] = param_1[2];
  param_1[3] = (*(float *)((char *)&auVar7 + 12));
  fVar4 = ABS(*param_2);
  fVar5 = ABS(param_2[1]);
  fVar6 = ABS(param_2[2]);
  (*(undefined4 *)((char *)&auVar1 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 4)) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar1 + 0)) = (undefined4)gen_fl2bits((float)REFG(float, 0x1138af0) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar1 + 8)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 8)) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar1 + 12)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 12)) - ((fVar5 + fVar4) + fVar6));
  gen_maxps(&(auVar7), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar1));
  gen_minps(&(auVar7), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar7));
  *param_2 = *param_2;
  param_2[1] = param_2[1];
  param_2[2] = param_2[2];
  param_2[3] = (*(float *)((char *)&auVar7 + 12));
  fVar4 = ABS(*param_3);
  fVar5 = ABS(param_3[1]);
  fVar6 = ABS(param_3[2]);
  (*(undefined4 *)((char *)&auVar2 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 4)) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar2 + 0)) = (undefined4)gen_fl2bits((float)REFG(float, 0x1138af0) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar2 + 8)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 8)) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar2 + 12)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 12)) - ((fVar5 + fVar4) + fVar6));
  gen_maxps(&(auVar7), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar2));
  gen_minps(&(auVar7), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar7));
  *param_3 = *param_3;
  param_3[1] = param_3[1];
  param_3[2] = param_3[2];
  param_3[3] = (*(float *)((char *)&auVar7 + 12));
  fVar4 = ABS(*param_4);
  fVar5 = ABS(param_4[1]);
  fVar6 = ABS(param_4[2]);
  (*(undefined4 *)((char *)&auVar3 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 4)) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar3 + 0)) = (undefined4)gen_fl2bits((float)REFG(float, 0x1138af0) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar3 + 8)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 8)) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar3 + 12)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 12)) - ((fVar5 + fVar4) + fVar6));
  gen_maxps(&(auVar7), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar3));
  gen_minps(&(auVar7), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar7));
  *param_4 = *param_4;
  param_4[1] = param_4[1];
  param_4[2] = param_4[2];
  param_4[3] = (*(float *)((char *)&auVar7 + 12));
  return 0;
}

/* ref: FUN_00d73290 */
uint F_00d73290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd73290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x34) + *(int *)((int)this + 0x44) * 2;
  return CONCAT22(*((undefined2 *)GEN_TOP((iVar1 + 2 + (param_1 / 0xf) * 4))),
                  *((undefined2 *)GEN_TOP((iVar1 + (param_1 / 0xf) * 4))));
}

/* ref: FUN_00d732c0 */
unsigned int F_00d732c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd732c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x20);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x20 + *(int *)this)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00d73320 */
uint F_00d73320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd73320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d73340 */
uint F_00d73340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd73340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d73360 */
uint F_00d73360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd73360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d733a0 */
uint F_00d733a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd733a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d733c0 */
unsigned int F_00d733c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd733c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0x20);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x20 + *(int *)this)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00d73420 */
uint F_00d73420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd73420u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d73440 */
uint F_00d73440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd73440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)this;
  uVar2 = *(uint *)((int)this + 4) >> 2;
  param_1[1] = uVar2;
  uVar2 = uVar2 | 0x80000000;
  *param_1 = uVar1;
  param_1[2] = uVar2;
  return uVar2;
}

/* ref: FUN_00d73460 */
uint F_00d73460(unsigned int gen_a0)
{
  GEN_ENTER(0xd73460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d734a0 */
uint F_00d734a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd734a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d73540 */
uint F_00d73540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd73540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  F_00d91540((undefined *)((int)this + 4),param_1 + 1);
  return (uint)this;
}

/* ref: hkaAnimation::vf8 */
uint F_00d73560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd73560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: hkaAnimation::vf10 */
uint F_00d73570(void)
{
  GEN_ENTER(0xd73570u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkaAnimation::vf11 */
uint F_00d73580(void)
{
  GEN_ENTER(0xd73580u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkaAnimation::vf16 */
byte F_00d73590(void)
{
  GEN_ENTER(0xd73590u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkaAnimation::vf17 */
uint F_00d735a0(void)
{
  GEN_ENTER(0xd735a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkaAnimation::vf18 */
unsigned int F_00d735b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd735b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: hkaAnimation::vf14 */
int F_00d735c0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd735c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float * pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  fVar2 = param_2;
  fVar9 = param_2 + param_3;
  fVar10 = REFG(float, 0x1136e98);
  if (*(float *)(param_1 + 0xc) < fVar9) {
    fVar10 = fVar9 - *(float *)(param_1 + 0xc);
  }
  param_2 = *(float *)(param_1 + 0x20);
  iVar3 = 0;
  if (0 < (int)gen_fl2bits(param_2)) {
    iVar6 = *(int *)(param_1 + 0x1c);
    do {
      iVar7 = *(int *)(iVar6 + 8);
      iVar8 = 0;
      if (3 < iVar7) {
        pfVar5 = ((float *)GEN_TOP((*(int *)(iVar6 + 4) + 0x10)));
        iVar4 = (iVar7 - 4U >> 2) + 1;
        iVar8 = iVar4 * 4;
        do {
          fVar1 = pfVar5[-4];
          if (((fVar2 <= fVar1) && ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar1)) && !(fVar9 <= fVar1))) ||
             (fVar1 < fVar10)) {
            iVar3 = iVar3 + 1;
          }
          fVar1 = pfVar5[-2];
          if (((fVar2 <= fVar1) && ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar1)) && !(fVar9 <= fVar1))) ||
             (fVar1 < fVar10)) {
            iVar3 = iVar3 + 1;
          }
          fVar1 = *pfVar5;
          if (((fVar2 <= fVar1) && ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar1)) && !(fVar9 <= fVar1))) ||
             (fVar1 < fVar10)) {
            iVar3 = iVar3 + 1;
          }
          fVar1 = pfVar5[2];
          if (((fVar2 <= fVar1) && ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar1)) && !(fVar9 <= fVar1))) ||
             (fVar1 < fVar10)) {
            iVar3 = iVar3 + 1;
          }
          pfVar5 = pfVar5 + 8;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      if (iVar8 < iVar7) {
        pfVar5 = ((float *)GEN_TOP((*(int *)(iVar6 + 4) + iVar8 * 8)));
        iVar7 = iVar7 - iVar8;
        do {
          fVar1 = *pfVar5;
          if (((fVar2 <= fVar1) && ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar1)) && !(fVar9 <= fVar1))) ||
             (fVar1 < fVar10)) {
            iVar3 = iVar3 + 1;
          }
          pfVar5 = pfVar5 + 2;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      iVar6 = iVar6 + 0x10;
      param_2 = gen_bits2f((int)gen_fl2bits(param_2) + -1);
    } while (param_2 != 0.0);
  }
  return iVar3;
}

/* ref: hkaAnimation::vf15 */
uint F_00d736c0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd736c0u, gen_a0, 0u, 0u, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 * puVar8;
  float fVar9;
  float fVar10;
  int local_c;
  
  uVar5 = 0;
  if ((*(uint *)&gen_args[4]) == 0) {
    return uVar5;
  }
  fVar9 = (*(float *)&gen_args[1]) + (*(float *)&gen_args[2]);
  fVar10 = REFG(float, 0x1136e98);
  if (*(float *)((*(int *)&gen_args[0]) + 0xc) < fVar9) {
    fVar10 = fVar9 - *(float *)((*(int *)&gen_args[0]) + 0xc);
  }
  iVar2 = *(int *)((*(int *)&gen_args[0]) + 0x20);
  uVar7 = 0;
  (*(float *)&gen_args[2]) = 0.0;
  if (0 < iVar2) {
    do {
      iVar6 = uVar5 * 0x10 + *(int *)((*(int *)&gen_args[0]) + 0x1c);
      iVar3 = *(int *)(iVar6 + 8);
      local_c = 0;
      if (0 < iVar3) {
        puVar8 = (undefined4 *)((*(int *)&gen_args[3]) + 4 + uVar7 * 0xc);
        do {
          fVar1 = *((float *)GEN_TOP((*(int *)(iVar6 + 4) + local_c * 8)));
          if ((((*(float *)&gen_args[1]) <= fVar1) && ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar1)) && !(fVar9 <= fVar1))) ||
             (fVar1 < fVar10)) {
            *(undefined2 *)(puVar8 + -1) = (*(undefined2 *)((char *)&(*(float *)&gen_args[2]) + 0));
            iVar4 = *(int *)(iVar6 + 4);
            *puVar8 = *(undefined4 *)(iVar4 + local_c * 8);
            F_00d91540(puVar8 + 1,iVar4 + local_c * 8 + 4);
            uVar7 = uVar7 + 1;
            puVar8 = puVar8 + 3;
            if (uVar7 == (*(uint *)&gen_args[4])) {
              return uVar7;
            }
          }
          local_c = local_c + 1;
        } while (local_c < iVar3);
      }
      (*(float *)&gen_args[2]) = gen_bits2f((int)gen_fl2bits((*(float *)&gen_args[2])) + 1);
      uVar5 = (uint)gen_fl2bits((*(float *)&gen_args[2])) & 0xffff;
    } while ((int)uVar5 < iVar2);
  }
  return uVar7;
}

/* ref: hkaAnimation::vf9 */
uint F_00d737c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd737c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  code * pcVar1;
  uint uVar2;
  
  F_00da0a80(((undefined1 *)(gen_frame + 0x200)),((undefined1 *)(gen_frame + 0x0)),0x200);
  F_00d9fe80(((undefined1 *)(gen_frame + 0x200)),"getDataChunks not implemented for this type of animation");
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(undefined4, 0x15dff78),3,0x54e32124,((undefined1 *)(gen_frame + 0x0)),"Animation\\hkaAnimation.cpp",0x77);
  if (uVar2 != 0) {
    pcVar1 = ((code *)GEN_TOP(swi(3)));
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  uVar2 = F_00d9fda0(((undefined1 *)(gen_frame + 0x200)));
  return uVar2;
}

/* ref: hkaAnimation::vf4 */
uint F_00d73820(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd73820u, gen_a0, 0u, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  LPVOID pvVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 * local_c;
  uint local_8;
  
  iVar1 = param_1[4];
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_8 = *(uint *)((int)pvVar5 + 0xc);
  uVar8 = iVar1 * 0x30 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar5 + 8) < (int)uVar8) || (*(uint *)((int)pvVar5 + 0x10) < local_8 + uVar8))
  {
    local_8 = F_00d94390(pvVar5,uVar8);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = local_8 + uVar8;
  }
  iVar1 = param_1[5];
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_c = *(undefined4 * PTR32 *)((int)pvVar5 + 0xc);
  uVar9 = iVar1 * 4 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar5 + 8) < (int)uVar9) ||
     (*(uint *)((int)pvVar5 + 0x10) < (int)local_c + uVar9)) {
    local_c = (undefined4 *)F_00d94390(pvVar5,uVar9);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = (int)local_c + uVar9;
  }
  ((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1,(undefined4)gen_fl2bits(param_2),local_8,local_c);
  param_2 = gen_bits2f(param_3 * 3);
  if (0 < (int)gen_fl2bits(param_2)) {
    puVar7 = (undefined4 *)(local_8 + 0xc);
    puVar6 = (undefined4 *)(param_4 + 8);
    do {
      uVar2 = puVar7[-2];
      uVar3 = *((undefined4 *)GEN_TOP(((local_8 - param_4) + (int)puVar6)));
      uVar4 = *puVar7;
      puVar6[-2] = puVar7[-3];
      puVar6[-1] = uVar2;
      *puVar6 = uVar3;
      puVar6[1] = uVar4;
      puVar7 = puVar7 + 4;
      puVar6 = puVar6 + 4;
      param_2 = gen_bits2f((int)gen_fl2bits(param_2) + -1);
    } while (param_2 != 0.0);
  }
  if (0 < param_5) {
    puVar7 = local_c;
    do {
      *((undefined4 *)GEN_TOP(((param_6 - (int)local_c) + (int)puVar7))) = *puVar7;
      puVar7 = puVar7 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar5 + 8) < (int)uVar9) ||
      (uVar9 + (int)local_c != *(int *)((int)pvVar5 + 0xc))) ||
     (*(undefined4 * PTR32 *)((int)pvVar5 + 0x14) == local_c)) {
    F_00d945c0(pvVar5,local_c,uVar9);
  }
  else {
    *(undefined4 * PTR32 *)((int)pvVar5 + 0xc) = local_c;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((((int)uVar8 <= *(int *)((int)pvVar5 + 8)) && (uVar8 + local_8 == *(int *)((int)pvVar5 + 0xc))
      ) && (*(uint *)((int)pvVar5 + 0x14) != local_8)) {
    *(uint *)((int)pvVar5 + 0xc) = local_8;
    return (uint)pvVar5;
  }
  uVar8 = F_00d945c0(pvVar5,local_8,uVar8);
  return uVar8;
}

/* ref: FUN_00d739c0 */
uint F_00d739c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd739c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined * pvVar6;
  int * piVar7;
  int iVar8;
  int local_10;
  int local_8;
  
  iVar5 = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x11353cc));
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  if (*(undefined * PTR32 *)(param_1 + 0x18) != (undefined *)0x0) {
    F_00d919e0(*(undefined * PTR32 *)(param_1 + 0x18));
  }
  if (*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x18));
  }
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  iVar8 = *(int *)((int)this + 0x20);
  iVar1 = *(int *)(param_1 + 0x20);
  local_8 = iVar8;
  if (iVar1 <= iVar8) {
    local_8 = iVar1;
  }
  uVar4 = *(uint *)((int)this + 0x24) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar2 = uVar4 * 2;
    iVar3 = iVar1;
    if (iVar1 < iVar2) {
      iVar3 = iVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x1c),iVar3,0x10);
  }
  local_10 = (iVar8 - iVar1) + -1;
  if (-1 < local_10) {
    piVar7 = ((int *)GEN_TOP((iVar1 * 0x10 + *(int *)((int)this + 0x1c) + 4 + local_10 * 0x10)));
    do {
      iVar8 = piVar7[1] + -1;
      if (-1 < iVar8) {
        pvVar6 = (undefined *)(*piVar7 + 4 + iVar8 * 8);
        do {
          F_00d91510(pvVar6);
          pvVar6 = (undefined *)((int)pvVar6 + -8);
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
      }
      piVar7[1] = 0;
      if (-1 < piVar7[2]) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar7,piVar7[2] * 8);
      }
      *piVar7 = 0;
      piVar7[2] = ((int)0x80000000);
      F_00d91510(piVar7 + -1);
      local_10 = local_10 + -1;
      piVar7 = piVar7 + -4;
    } while (-1 < local_10);
  }
  pvVar6 = *(undefined * PTR32 *)((int)this + 0x1c);
  if (0 < local_8) {
    iVar8 = *(int *)(param_1 + 0x1c) - (int)pvVar6;
    param_1 = local_8;
    do {
      F_00d73fe0(pvVar6,iVar8 + (int)pvVar6);
      pvVar6 = (undefined *)((int)pvVar6 + 0x10);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  pvVar6 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x1c) + local_8 * 0x10)));
  iVar8 = iVar1 - local_8;
  if (iVar8 < 1) {
    *(int *)((int)this + 0x20) = iVar1;
    return (uint)this;
  }
  iVar5 = (*(int *)(iVar5 + 0x1c) + local_8 * 0x10) - (int)pvVar6;
  do {
    if (pvVar6 != (undefined *)0x0) {
      F_00d87850(pvVar6,iVar5 + (int)pvVar6);
    }
    pvVar6 = (undefined *)((int)pvVar6 + 0x10);
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  *(int *)((int)this + 0x20) = iVar1;
  return (uint)this;
}

/* ref: FUN_00d73b90 */
unsigned int F_00d73b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd73b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
    *(undefined4 *)this = *param_1;
    return 0;
  }
  *(undefined4 *)this = *param_1;
  return 0;
}

/* ref: FUN_00d73bd0 */
uint F_00d73bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd73bd0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00d73bf0 */
unsigned int F_00d73bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd73bf0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined * this;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_3) {
    this = (undefined *)(param_1 + 4);
    do {
      *(undefined4 *)((int)this + -4) = *(undefined4 *)(param_2 + iVar1 * 8);
      F_00d91540(this,(param_2 - param_1) + (int)this);
      iVar1 = iVar1 + 1;
      this = (undefined *)((int)this + 8);
    } while (iVar1 < param_3);
  }
  return 0;
}

/* ref: FUN_00d73c40 */
uint F_00d73c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd73c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  F_00d914e0((undefined *)((int)this + 4),param_1 + 1);
  return (uint)this;
}

/* ref: FUN_00d73c90 */
uint F_00d73c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd73c90u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d73cd0 */
unsigned int F_00d73cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd73cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  if (0 < param_2) {
    iVar1 = param_3 - (int)param_1;
    do {
      if (param_1 != (undefined *)0x0) {
        F_00d87850(param_1,iVar1 + (int)param_1);
      }
      param_1 = (undefined *)((int)param_1 + 0x10);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}

/* ref: FUN_00d73d00 */
uint F_00d73d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd73d00u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d73d40 */
unsigned int F_00d73d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd73d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  if (0 < param_2) {
    iVar1 = param_3 - (int)param_1;
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *(undefined4 *)(iVar1 + (int)param_1);
        F_00d914e0(param_1 + 1,iVar1 + (int)(param_1 + 1));
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}

/* ref: FUN_00d73da0 */
uint F_00d73da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd73da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  undefined * pvVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  iVar1 = param_2[1];
  iVar4 = *(int *)((int)this + 4);
  local_8 = iVar4;
  if (iVar1 <= iVar4) {
    local_8 = iVar1;
  }
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar7 = uVar3 * 2;
    iVar6 = iVar1;
    if (iVar1 < iVar7) {
      iVar6 = iVar7;
    }
    F_00d95690(param_1,this,iVar6,8);
  }
  iVar4 = (iVar4 - iVar1) + -1;
  if (-1 < iVar4) {
    pvVar5 = (undefined *)(*(int *)this + iVar1 * 8 + 4 + iVar4 * 8);
    do {
      F_00d91510(pvVar5);
      pvVar5 = (undefined *)((int)pvVar5 + -8);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  iVar4 = *param_2;
  iVar7 = *(int *)this;
  iVar6 = 0;
  if (0 < local_8) {
    pvVar5 = (undefined *)(iVar7 + 4);
    do {
      *(undefined4 *)((int)pvVar5 + -4) = *(undefined4 *)(iVar4 + iVar6 * 8);
      F_00d91540(pvVar5,(iVar4 - iVar7) + (int)pvVar5);
      iVar6 = iVar6 + 1;
      pvVar5 = (undefined *)((int)pvVar5 + 8);
    } while (iVar6 < local_8);
  }
  puVar2 = (undefined4 *)(*(int *)this + local_8 * 8);
  iVar4 = iVar1 - local_8;
  if (iVar4 < 1) {
    *(int *)((int)this + 4) = iVar1;
    return (uint)this;
  }
  iVar7 = (*param_2 + local_8 * 8) - (int)puVar2;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *(undefined4 *)(iVar7 + (int)puVar2);
      F_00d914e0(puVar2 + 1,iVar7 + (int)(puVar2 + 1));
    }
    puVar2 = puVar2 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00d73ec0 */
uint F_00d73ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd73ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  undefined * pvVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  iVar1 = param_1[1];
  iVar4 = *(int *)((int)this + 4);
  local_8 = iVar4;
  if (iVar1 <= iVar4) {
    local_8 = iVar1;
  }
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar7 = uVar3 * 2;
    iVar6 = iVar1;
    if (iVar1 < iVar7) {
      iVar6 = iVar7;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar6,8);
  }
  iVar4 = (iVar4 - iVar1) + -1;
  if (-1 < iVar4) {
    pvVar5 = (undefined *)(*(int *)this + iVar1 * 8 + 4 + iVar4 * 8);
    do {
      F_00d91510(pvVar5);
      pvVar5 = (undefined *)((int)pvVar5 + -8);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  iVar4 = *param_1;
  iVar7 = *(int *)this;
  iVar6 = 0;
  if (0 < local_8) {
    pvVar5 = (undefined *)(iVar7 + 4);
    do {
      *(undefined4 *)((int)pvVar5 + -4) = *(undefined4 *)(iVar4 + iVar6 * 8);
      F_00d91540(pvVar5,(iVar4 - iVar7) + (int)pvVar5);
      iVar6 = iVar6 + 1;
      pvVar5 = (undefined *)((int)pvVar5 + 8);
    } while (iVar6 < local_8);
  }
  puVar2 = (undefined4 *)(*(int *)this + local_8 * 8);
  iVar4 = iVar1 - local_8;
  if (iVar4 < 1) {
    *(int *)((int)this + 4) = iVar1;
    return (uint)this;
  }
  iVar7 = (*param_1 + local_8 * 8) - (int)puVar2;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *(undefined4 *)(iVar7 + (int)puVar2);
      F_00d914e0(puVar2 + 1,iVar7 + (int)(puVar2 + 1));
    }
    puVar2 = puVar2 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00d73fe0 */
uint F_00d73fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd73fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined * pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  F_00d91540(this,param_1);
  iVar5 = *(int *)((int)this + 8);
  iVar1 = *(int *)(param_1 + 8);
  local_8 = iVar5;
  if (iVar1 <= iVar5) {
    local_8 = iVar1;
  }
  uVar2 = *(uint *)((int)this + 0xc) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar7 = uVar2 * 2;
    iVar6 = iVar1;
    if (iVar1 < iVar7) {
      iVar6 = iVar7;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 4,iVar6,8);
  }
  iVar5 = (iVar5 - iVar1) + -1;
  if (-1 < iVar5) {
    pvVar4 = ((undefined *)GEN_TOP((*(int *)((int)this + 4) + iVar1 * 8 + 4 + iVar5 * 8)));
    do {
      F_00d91510(pvVar4);
      pvVar4 = (undefined *)((int)pvVar4 + -8);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  iVar5 = *(int *)((int)this + 4);
  iVar7 = *(int *)(param_1 + 4);
  iVar6 = 0;
  if (0 < local_8) {
    pvVar4 = (undefined *)(iVar5 + 4);
    do {
      *(undefined4 *)((int)pvVar4 + -4) = *(undefined4 *)(iVar7 + iVar6 * 8);
      F_00d91540(pvVar4,(iVar7 - iVar5) + (int)pvVar4);
      iVar6 = iVar6 + 1;
      pvVar4 = (undefined *)((int)pvVar4 + 8);
    } while (iVar6 < local_8);
  }
  puVar3 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + local_8 * 8)));
  iVar5 = iVar1 - local_8;
  if (iVar5 < 1) {
    *(int *)((int)this + 8) = iVar1;
    return (uint)this;
  }
  iVar7 = (*(int *)(param_1 + 4) + local_8 * 8) - (int)puVar3;
  do {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *(undefined4 *)(iVar7 + (int)puVar3);
      F_00d914e0(puVar3 + 1,iVar7 + (int)(puVar3 + 1));
    }
    puVar3 = puVar3 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(int *)((int)this + 8) = iVar1;
  return (uint)this;
}

/* ref: FUN_00d74100 */
unsigned int F_00d74100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd74100u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  int * piVar5;
  undefined * this;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_14;
  int local_10;
  undefined * local_8;
  
  if (0 < param_3) {
    local_10 = param_2;
    iVar6 = param_2 - param_1;
    piVar5 = (int *)(param_1 + 4);
    local_14 = param_3;
    do {
      F_00d91540(piVar5 + -1,local_10);
      piVar1 = (int *)(iVar6 + 4 + (int)piVar5);
      iVar7 = *((int *)GEN_TOP(((int)piVar1 + (param_1 - param_2))));
      iVar2 = *piVar1;
      param_3 = iVar7;
      if (iVar2 <= iVar7) {
        param_3 = iVar2;
      }
      if ((int)(piVar5[2] & 0x3fffffffU) < iVar2) {
        iVar3 = (piVar5[2] & 0x3fffffffU) * 2;
        if (iVar3 <= iVar2) {
          iVar3 = iVar2;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar5,iVar3,8);
      }
      iVar7 = (iVar7 - iVar2) + -1;
      if (-1 < iVar7) {
        local_8 = (undefined *)(*piVar5 + iVar2 * 8 + 4 + iVar7 * 8);
        do {
          F_00d91510(local_8);
          local_8 = (undefined *)((int)local_8 + -8);
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
      }
      iVar7 = *(int *)(iVar6 + (int)piVar5);
      iVar3 = *piVar5;
      iVar8 = 0;
      if (0 < param_3) {
        this = (undefined *)(iVar3 + 4);
        do {
          *(undefined4 *)((int)this + -4) = *(undefined4 *)(iVar7 + iVar8 * 8);
          F_00d91540(this,(iVar7 - iVar3) + (int)this);
          iVar8 = iVar8 + 1;
          this = (undefined *)((int)this + 8);
        } while (iVar8 < param_3);
      }
      iVar7 = param_3 * 8;
      puVar4 = (undefined4 *)(*piVar5 + iVar7);
      param_3 = iVar2 - param_3;
      if (0 < param_3) {
        iVar7 = (*(int *)(iVar6 + (int)piVar5) + iVar7) - (int)puVar4;
        do {
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = *(undefined4 *)(iVar7 + (int)puVar4);
            F_00d914e0(puVar4 + 1,iVar7 + (int)(puVar4 + 1));
          }
          puVar4 = puVar4 + 2;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
      local_10 = local_10 + 0x10;
      piVar5[1] = iVar2;
      piVar5 = piVar5 + 4;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return 0;
}

/* ref: FUN_00d74250 */
uint F_00d74250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd74250u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  iVar1 = param_2[1];
  iVar5 = *(int *)((int)this + 4);
  local_8 = iVar5;
  if (iVar1 <= iVar5) {
    local_8 = iVar1;
  }
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar6 = uVar2 * 2;
    if (iVar6 <= iVar1) {
      iVar6 = iVar1;
    }
    F_00d95690(param_1,this,iVar6,0x10);
  }
  param_1 = (iVar5 - iVar1) + -1;
  if (-1 < param_1) {
    piVar4 = (int *)(iVar1 * 0x10 + *(int *)this + 4 + param_1 * 0x10);
    do {
      iVar5 = piVar4[1] + -1;
      if (-1 < iVar5) {
        pvVar3 = (undefined *)(*piVar4 + 4 + iVar5 * 8);
        do {
          F_00d91510(pvVar3);
          pvVar3 = (undefined *)((int)pvVar3 + -8);
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
      }
      piVar4[1] = 0;
      if (-1 < piVar4[2]) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar4,piVar4[2] * 8);
      }
      *piVar4 = 0;
      piVar4[2] = ((int)0x80000000);
      F_00d91510(piVar4 + -1);
      param_1 = param_1 + -1;
      piVar4 = piVar4 + -4;
    } while (-1 < param_1);
  }
  pvVar3 = *(undefined * PTR32 *)this;
  if (0 < local_8) {
    iVar6 = *param_2 - (int)pvVar3;
    iVar5 = local_8;
    do {
      F_00d73fe0(pvVar3,iVar6 + (int)pvVar3);
      pvVar3 = (undefined *)((int)pvVar3 + 0x10);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  pvVar3 = (undefined *)(*(int *)this + local_8 * 0x10);
  iVar5 = iVar1 - local_8;
  if (iVar5 < 1) {
    *(int *)((int)this + 4) = iVar1;
    return (uint)this;
  }
  iVar6 = (*param_2 + local_8 * 0x10) - (int)pvVar3;
  do {
    if (pvVar3 != (undefined *)0x0) {
      F_00d87850(pvVar3,iVar6 + (int)pvVar3);
    }
    pvVar3 = (undefined *)((int)pvVar3 + 0x10);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00d743b0 */
uint F_00d743b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd743b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  int local_14;
  int local_8;
  
  iVar1 = param_1[1];
  iVar5 = *(int *)((int)this + 4);
  local_8 = iVar5;
  if (iVar1 <= iVar5) {
    local_8 = iVar1;
  }
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar6 = uVar2 * 2;
    if (iVar6 <= iVar1) {
      iVar6 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar6,0x10);
  }
  local_14 = (iVar5 - iVar1) + -1;
  if (-1 < local_14) {
    piVar4 = (int *)(iVar1 * 0x10 + *(int *)this + 4 + local_14 * 0x10);
    do {
      iVar5 = piVar4[1] + -1;
      if (-1 < iVar5) {
        pvVar3 = (undefined *)(*piVar4 + 4 + iVar5 * 8);
        do {
          F_00d91510(pvVar3);
          pvVar3 = (undefined *)((int)pvVar3 + -8);
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
      }
      piVar4[1] = 0;
      if (-1 < piVar4[2]) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar4,piVar4[2] * 8);
      }
      *piVar4 = 0;
      piVar4[2] = ((int)0x80000000);
      F_00d91510(piVar4 + -1);
      local_14 = local_14 + -1;
      piVar4 = piVar4 + -4;
    } while (-1 < local_14);
  }
  pvVar3 = *(undefined * PTR32 *)this;
  if (0 < local_8) {
    iVar6 = *param_1 - (int)pvVar3;
    iVar5 = local_8;
    do {
      F_00d73fe0(pvVar3,iVar6 + (int)pvVar3);
      pvVar3 = (undefined *)((int)pvVar3 + 0x10);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  pvVar3 = (undefined *)(*(int *)this + local_8 * 0x10);
  iVar5 = iVar1 - local_8;
  if (iVar5 < 1) {
    *(int *)((int)this + 4) = iVar1;
    return (uint)this;
  }
  iVar6 = (*param_1 + local_8 * 0x10) - (int)pvVar3;
  do {
    if (pvVar3 != (undefined *)0x0) {
      F_00d87850(pvVar3,iVar6 + (int)pvVar3);
    }
    pvVar3 = (undefined *)((int)pvVar3 + 0x10);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00d74510 */
uint F_00d74510(unsigned int gen_a0)
{
  GEN_ENTER(0xd74510u, gen_a0, 0u, 0u, 0u);
  undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;
  *in_ecx = 0x100;
  *(undefined1 *)(in_ecx + 1) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00d74590 */
uint F_00d74590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd74590u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  return (param_3 << 4 | param_2) * 4 | param_1;
}

/* ref: FUN_00d745b0 */
byte F_00d745b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd745b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (char)param_2 * '\x02' | (byte)param_1;
}

/* ref: FUN_00d745d0 */
uint F_00d745d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd745d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x13512dc))[param_1])))(param_2,param_3);
  return uVar1;
}

/* ref: FUN_00d745f0 */
byte F_00d745f0(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd745f0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  return (byte)(int)(((param_3 - param_1) / (param_2 - param_1)) * REFG(float, 0x10a0d8c));
}

/* ref: FUN_00d74620 */
ushort F_00d74620(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd74620u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  return (ushort)(int)(((param_3 - param_1) / (param_2 - param_1)) * *(float *)&REFG(undefined, 0x11377e0));
}

/* ref: FUN_00d74650 */
uint F_00d74650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd74650u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x13512f4))[param_1])))(param_2);
  return uVar1;
}

/* ref: FUN_00d74670 */
unsigned int F_00d74670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd74670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  int iVar2;
  
  if ((byte)param_1 != 0) {
    uVar1 = (*param_4 - 1) + *(int *)(&REFG(undefined, 0x1137300) + param_3 * 4) &
            ~(*(int *)(&REFG(undefined, 0x1137300) + param_3 * 4) - 1U);
    *param_4 = uVar1;
    if (((byte)param_1 & 0xf0) == 0) {
      F_00d74650(param_3,uVar1);
      *param_4 = *param_4 + *(int *)(&REFG(undefined, 0x1137318) + param_3 * 4);
    }
    else if (-1 < param_2) {
      iVar2 = param_2 + 1;
      do {
        F_00d74650(param_3,*param_4);
        *param_4 = *param_4 + *(int *)(&REFG(undefined, 0x1137318) + param_3 * 4);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00d74700 */
uint F_00d74700(unsigned int gen_a0)
{
  GEN_ENTER(0xd74700u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x10947f8);
  in_ecx[3] = GEN_FLT_TO(in_ecx[3], REFG(float, 0x10947f8));
  in_ecx[2] = uVar1;
  in_ecx[1] = uVar1;
  *in_ecx = uVar1;
  in_ecx[5] = 0x30003;
  in_ecx[4] = 0x30003;
  in_ecx[6] = 0x1010101;
  return (uint)in_ecx;
}

/* ref: FUN_00d74740 */
unsigned int F_00d74740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xd74740u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  int * param_7 = (int *)(uintptr_t)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 * puVar6;
  int iVar7;
  
  if (0 < param_3) {
    iVar7 = 0;
    puVar6 = ((undefined4 *)GEN_TOP((param_1 + 8 + (param_2 * param_4 + param_5) * 0x30)));
    do {
      uVar3 = *puVar6;
      uVar4 = puVar6[-1];
      iVar7 = iVar7 + 0x10;
      puVar1 = (undefined4 *)(*param_6 + -0x10 + iVar7);
      *puVar1 = puVar6[-2];
      puVar1[1] = uVar4;
      puVar1[2] = uVar3;
      puVar1[3] = 0;
      uVar3 = puVar6[3];
      uVar4 = puVar6[4];
      uVar5 = puVar6[5];
      puVar1 = (undefined4 *)(*param_7 + -0x10 + iVar7);
      *puVar1 = puVar6[2];
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      puVar1 = puVar6 + 6;
      uVar3 = puVar6[7];
      uVar4 = puVar6[8];
      puVar6 = puVar6 + param_2 * 0xc;
      param_3 = param_3 + -1;
      puVar2 = (undefined4 *)(*param_8 + -0x10 + iVar7);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = 0;
    } while (param_3 != 0);
  }
  return 0;
}

/* ref: FUN_00d747f0 */
unsigned int F_00d747f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd747f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  int iVar4;
  
  if (0 < param_3) {
    iVar4 = 0;
    puVar3 = ((undefined4 *)GEN_TOP((param_1 + (param_2 * param_4 + param_5) * 4)));
    do {
      uVar2 = *puVar3;
      puVar3 = puVar3 + param_2;
      iVar4 = iVar4 + 0x10;
      param_3 = param_3 + -1;
      puVar1 = (undefined4 *)(*param_6 + -0x10 + iVar4);
      *puVar1 = uVar2;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
    } while (param_3 != 0);
  }
  return 0;
}

/* ref: FUN_00d74850 */
byte F_00d74850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd74850u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float param_4 = (float)gen_a3;
  int param_5 = (int)gen_a4;
  int iVar1;
  int iVar2;
  float * pfVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  byte local_11;
  
  iVar2 = param_3 - (int)param_1;
  iVar5 = 0;
  iVar1 = param_5 - (int)param_1;
  local_11 = 0;
  do {
    fVar6 = *param_1;
    pfVar3 = (float *)(iVar2 + (int)param_1);
    if ((ABS(fVar6 - *((float *)GEN_TOP(((int)pfVar3 + (param_2 - param_3))))) <= param_4) &&
       (ABS(fVar6 - *pfVar3) <= param_4)) {
      fVar6 = ABS(fVar6 - *(float *)(iVar1 + (int)param_1));
      iVar4 = iVar5;
      if ((!(fVar6 <= param_4)) || (!(fVar6 <= param_4))) goto LAB_00d74917;
    }
    else {
      iVar4 = iVar5 + 4;
LAB_00d74917: ;
      local_11 = local_11 | '\x01' << ((byte)iVar4 & 0x1f);
    }
    iVar5 = iVar5 + 1;
    param_1 = param_1 + 1;
    if (3 < iVar5) {
      return local_11;
    }
  } while( true );
}

/* ref: FUN_00d74940 */
unsigned int F_00d74940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd74940u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  float fVar2;
  float * pfVar3;
  float * pfVar4;
  float * pfVar5;
  float * pfVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar1 = param_2[1];
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  if (0 < iVar1) {
    pfVar6 = (float *)*param_2;
    fVar8 = *param_1;
    fVar9 = param_1[1];
    fVar10 = param_1[2];
    fVar11 = param_1[3];
    iVar7 = iVar1;
    do {
      fVar2 = *pfVar6;
      pfVar3 = pfVar6 + 1;
      pfVar4 = pfVar6 + 2;
      pfVar5 = pfVar6 + 3;
      pfVar6 = pfVar6 + 4;
      iVar7 = iVar7 + -1;
      fVar8 = fVar2 + fVar8;
      fVar9 = *pfVar3 + fVar9;
      fVar10 = *pfVar4 + fVar10;
      fVar11 = *pfVar5 + fVar11;
    } while (iVar7 != 0);
    *param_1 = fVar8;
    param_1[1] = fVar9;
    param_1[2] = fVar10;
    param_1[3] = fVar11;
  }
  fVar8 = REFG(float, 0x1087f04) / (float)iVar1;
  *param_1 = fVar8 * *param_1;
  param_1[1] = fVar8 * param_1[1];
  param_1[2] = fVar8 * param_1[2];
  param_1[3] = fVar8 * param_1[3];
  return 0;
}

/* ref: FUN_00d749a0 */
uint F_00d749a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd749a0u, gen_a0, gen_a1, 0u, 0u);
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  gen_v16 * pauVar1;
  int iVar2;
  undefined1 auVar3 [16];
  
  pauVar1 = (gen_v16 *)*param_2;
  iVar2 = param_2[1];
  *(undefined8 *)*param_1 = *(undefined8 *)*pauVar1;
  *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(*pauVar1 + 8);
  if (1 < iVar2) {
    iVar2 = iVar2 + -1;
    do {
      pauVar1 = pauVar1 + 1;
      gen_minps(&(auVar3), &(*param_1), &(*pauVar1));
      iVar2 = iVar2 + -1;
      memcpy(&(*param_1), &(auVar3), sizeof(auVar3) < sizeof(*param_1) ? sizeof(auVar3) : sizeof(*param_1));
    } while (iVar2 != 0);
  }
  return (uint)param_1;
}

/* ref: FUN_00d749f0 */
uint F_00d749f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd749f0u, gen_a0, gen_a1, 0u, 0u);
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  gen_v16 * pauVar1;
  int iVar2;
  undefined1 auVar3 [16];
  
  pauVar1 = (gen_v16 *)*param_2;
  iVar2 = param_2[1];
  *(undefined8 *)*param_1 = *(undefined8 *)*pauVar1;
  *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(*pauVar1 + 8);
  if (1 < iVar2) {
    iVar2 = iVar2 + -1;
    do {
      pauVar1 = pauVar1 + 1;
      gen_maxps(&(auVar3), &(*param_1), &(*pauVar1));
      iVar2 = iVar2 + -1;
      memcpy(&(*param_1), &(auVar3), sizeof(auVar3) < sizeof(*param_1) ? sizeof(auVar3) : sizeof(*param_1));
    } while (iVar2 != 0);
  }
  return (uint)param_1;
}

/* ref: FUN_00d74a40 */
uint F_00d74a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd74a40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  undefined1 uVar1;
  undefined1 * puVar2;
  uint uVar3;
  
  if (param_1 == 1) {
    *param_2 = *param_2 + 1;
    return (uint)param_2;
  }
  if (param_1 == 2) {
    puVar2 = (undefined1 *)*param_2;
    uVar1 = *puVar2;
    *puVar2 = puVar2[1];
    puVar2[1] = uVar1;
    *param_2 = *param_2 + 2;
    return (uint)puVar2;
  }
  if (param_1 == 4) {
    puVar2 = (undefined1 *)*param_2;
    uVar1 = *puVar2;
    *puVar2 = puVar2[3];
    puVar2[3] = uVar1;
    uVar3 = *param_2;
    uVar1 = *(undefined1 *)(uVar3 + 1);
    *(undefined1 *)(uVar3 + 1) = *(undefined1 *)(uVar3 + 2);
    *(undefined1 *)(uVar3 + 2) = uVar1;
    *param_2 = *param_2 + 4;
    return uVar3;
  }
  *param_2 = *param_2 + param_1;
  return (uint)param_2;
}

/* ref: FUN_00d74ab0 */
uint F_00d74ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd74ab0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  ushort uVar1;
  byte * pbVar2;
  
  if ((param_1 & 0xf0) != 0) {
    F_00d74a40(2,param_2);
    pbVar2 = (byte *)*param_2;
    uVar1 = *(ushort *)(pbVar2 + -2);
    *param_2 = (int)(pbVar2 + (uint)uVar1 + *pbVar2 + 3);
    return (uint)uVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_00d74af0 */
uint F_00d74af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd74af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint local_8;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)param_1);
  if ((byte)param_1 != 0) {
    uVar1 = (uint)(byte)param_1;
    iVar3 = 0;
    *param_4 = *param_4 + 3 & 0xfffffffc;
    uVar4 = 1;
    param_1 = 3;
    do {
      if ((uVar1 & (uVar4 << 4 | uVar4 >> 0x1c)) == 0) {
        uVar2 = uVar1;
        if ((uVar4 & uVar1) != 0) {
          uVar2 = F_00d74a40(4,param_4);
        }
      }
      else {
        F_00d74a40(4,param_4);
        uVar2 = F_00d74a40(4,param_4);
        iVar3 = iVar3 + 1;
      }
      uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    if ((iVar3 != 0) && (uVar2 = param_2, -1 < (int)param_2)) {
      uVar2 = param_2 + 1;
      local_8 = uVar2;
      do {
        iVar5 = iVar3;
        if (0 < iVar3) {
          do {
            uVar2 = F_00d74a40((param_3 != 0) + 1,param_4);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
  }
  return uVar2;
}

/* ref: FUN_00d74ba0 */
unsigned int F_00d74ba0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xd74ba0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  int iVar1;
  float * pfVar2;
  float * pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  pfVar3 = (float *)*param_2;
  iVar1 = 1;
  *pfVar3 = param_3;
  pfVar3[param_1] = param_4;
  if (1 < param_1) {
    if (3 < param_1 + -1) {
      fVar6 = (float)param_1;
      fVar5 = param_4 - param_3;
      iVar4 = 3;
      pfVar2 = pfVar3 + 3;
      do {
        pfVar2[-2] = ((float)iVar1 / fVar6) * fVar5 + param_3;
        pfVar2[-1] = ((float)(iVar4 + -1) / fVar6) * fVar5 + param_3;
        *pfVar2 = ((float)iVar4 / fVar6) * fVar5 + param_3;
        pfVar2[1] = ((float)(iVar4 + 1) / fVar6) * fVar5 + param_3;
        iVar1 = iVar1 + 4;
        pfVar2 = pfVar2 + 4;
        iVar4 = iVar4 + 4;
      } while (iVar1 < param_1 + -3);
    }
    if (iVar1 < param_1) {
      pfVar3 = pfVar3 + iVar1;
      do {
        *pfVar3 = ((float)iVar1 / (float)param_1) * (param_4 - param_3) + param_3;
        iVar1 = iVar1 + 1;
        pfVar3 = pfVar3 + 1;
      } while (iVar1 < param_1);
    }
  }
  return 0;
}

/* ref: FUN_00d74cb0 */
unsigned int F_00d74cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd74cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  
  if ((char)param_1 != '\0') {
    uVar1 = F_00d74ab0(param_1,param_3);
    F_00d74af0(param_1,uVar1,param_2,param_3);
    *param_3 = *param_3 + 3 & 0xfffffffc;
  }
  return 0;
}

/* ref: FUN_00d74cf0 */
unsigned int F_00d74cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd74cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  
  if ((char)param_1 != '\0') {
    uVar1 = F_00d74ab0(param_1,param_3);
    F_00d74670(param_1,uVar1,param_2,param_3);
    *param_3 = *param_3 + 3 & 0xfffffffc;
  }
  return 0;
}

/* ref: FUN_00d74d30 */
uint F_00d74d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd74d30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,1);
  }
  iVar1 = *param_2;
  iVar2 = param_2[1];
  *(undefined1 *)(iVar1 + iVar2) = (undefined1)param_1;
  param_2[1] = param_2[1] + 1;
  return (uint)(iVar1 + iVar2);
}

/* ref: FUN_00d74d70 */
unsigned int F_00d74d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd74d70u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  if (0 < param_1) {
    do {
      if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,1);
      }
      *(undefined1 *)(param_2[1] + *param_2) = 0;
      param_2[1] = param_2[1] + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return 0;
}

/* ref: FUN_00d74db0 */
unsigned int F_00d74db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd74db0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = (*(int * PTR32 *)&gen_args[1])[1];
  while ((uVar1 & (*(int *)&gen_args[0]) - 1U) != 0) {
    if ((*(int * PTR32 *)&gen_args[1])[1] == ((*(int * PTR32 *)&gen_args[1])[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(*(int * PTR32 *)&gen_args[1]),1);
    }
    *((undefined1 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + (*(int * PTR32 *)&gen_args[1])[1]))) = 0;
    (*(int * PTR32 *)&gen_args[1])[1] = (*(int * PTR32 *)&gen_args[1])[1] + 1;
    uVar1 = (*(int * PTR32 *)&gen_args[1])[1];
  }
  return 0;
}

/* ref: FUN_00d74e00 */
unsigned int F_00d74e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd74e00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = param_2[1] & *(uint *)(&REFG(undefined, 0x11377e4) + param_1 * 4);
  while (uVar1 != 0) {
    if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,1);
    }
    *(undefined1 *)(*param_2 + param_2[1]) = 0;
    param_2[1] = param_2[1] + 1;
    uVar1 = param_2[1] & *(uint *)(&REFG(undefined, 0x11377e4) + param_1 * 4);
  }
  return 0;
}

/* ref: FUN_00d74e60 */
unsigned int F_00d74e60(unsigned int gen_a0)
{
  GEN_ENTER(0xd74e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0x80) != 0) {
    (*(int *)(gen_frame + 0x0)) = 0;
    if (0 < *(int *)((int)this + 0x2c)) {
      do {
        pbVar2 = ((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x44) + (*(int *)(gen_frame + 0x0)) * 4))) +
                         *(int *)((int)this + 0x74))));
        (*(byte * PTR32 *)(gen_frame + 0x8)) = pbVar2 + *(int *)((int)this + 0x34);
        (*(int *)(gen_frame + 0x4)) = 0;
        if (0 < *(int *)((int)this + 0x10)) {
          do {
            bVar1 = *pbVar2;
            F_00d74cb0((uint)pbVar2[1],bVar1 & 3,&(*(byte * PTR32 *)(gen_frame + 0x8)));
            F_00d74cf0((uint)pbVar2[2],bVar1 >> 2 & 0xf,&(*(byte * PTR32 *)(gen_frame + 0x8)));
            F_00d74cb0((uint)pbVar2[3],(uint)(bVar1 >> 6),&(*(byte * PTR32 *)(gen_frame + 0x8)));
            (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
            pbVar2 = pbVar2 + 4;
          } while ((*(int *)(gen_frame + 0x4)) < *(int *)((int)this + 0x10));
        }
        iVar3 = 0;
        if (0 < *(int *)((int)this + 0x14)) {
          do {
            bVar1 = *pbVar2;
            pbVar2 = pbVar2 + 1;
            F_00d74cb0((uint)(bVar1 & 0xf9),bVar1 >> 1 & 3,&(*(byte * PTR32 *)(gen_frame + 0x8)));
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)((int)this + 0x14));
        }
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
      } while ((*(int *)(gen_frame + 0x0)) < *(int *)((int)this + 0x2c));
    }
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  return 0;
}

/* ref: FUN_00d74f50 */
uint F_00d74f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd74f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  uint param_4 = (uint)gen_a4;
  int * param_5 = (int *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float * pfVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 in_EAX = 0;
  uint uVar7;
  int * piVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  undefined1 in_XMM3 [16] = {0};
  float fVar18;
  undefined1 auVar15 [16];
  
  uVar7 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)param_1);
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = this;
  if (((byte)param_1 & 0xf0) == 0) {
    if (((byte)param_1 & 0xf) != 0) {
      piVar8 = (int *)((int)this + 0x74);
      F_00d74e00(param_2,piVar8);
      fVar3 = *param_3;
      fVar4 = param_3[1];
      fVar5 = param_3[2];
      fVar6 = param_3[3];
      fVar10 = fVar5 * fVar5 + fVar3 * fVar3;
      fVar11 = fVar6 * fVar6 + fVar4 * fVar4;
      fVar12 = fVar3 * fVar3 + fVar5 * fVar5;
      fVar13 = fVar4 * fVar4 + fVar6 * fVar6;
      fVar14 = fVar11 + fVar10;
      fVar10 = fVar10 + fVar11;
      fVar11 = fVar13 + fVar12;
      fVar12 = fVar12 + fVar13;
      (*(undefined4 *)((char *)&auVar15 + 4)) = (undefined4)gen_fl2bits(fVar10);
      (*(undefined4 *)((char *)&auVar15 + 0)) = (undefined4)gen_fl2bits(fVar14);
      (*(undefined4 *)((char *)&auVar15 + 8)) = (undefined4)gen_fl2bits(fVar11);
      (*(undefined4 *)((char *)&auVar15 + 12)) = (undefined4)gen_fl2bits(fVar12);
      gen_rsqrtps(&(auVar15), &(in_XMM3), &(auVar15));
      fVar13 = (*(float *)((char *)&auVar15 + 0));
      fVar16 = (*(float *)((char *)&auVar15 + 4));
      fVar17 = (*(float *)((char *)&auVar15 + 8));
      fVar18 = (*(float *)((char *)&auVar15 + 12));
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = (undefined *)*(int *)(&REFG(undefined, 0x1137318) + param_2 * 4);
      (*(float *)(gen_frame + 0x0)) = ((*(float *)&REFG(undefined, 0x1137790) - (fVar13 * fVar14) * fVar13) *
                 (*(float *)&REFG(undefined, 0x11377a0) * fVar13)) * fVar3;
      (*(float *)(gen_frame + 0x4)) = ((*(float *)&REFG(undefined, 0x1137794) - (fVar16 * fVar10) * fVar16) *
                  (*(float *)&REFG(undefined, 0x11377a4) * fVar16)) * fVar4;
      (*(float *)(gen_frame + 0x8)) = ((*(float *)&REFG(undefined, 0x1137798) - (fVar17 * fVar11) * fVar17) *
                  (*(float *)&REFG(undefined, 0x11377a8) * fVar17)) * fVar5;
      (*(float *)(gen_frame + 0xc)) = ((*(float *)&REFG(undefined, 0x113779c) - (fVar18 * fVar12) * fVar18) *
                  (*(float *)&REFG(undefined, 0x11377ac) * fVar18)) * fVar6;
      F_00d74d70(*(int *)(&REFG(undefined, 0x1137318) + param_2 * 4),piVar8);
      uVar7 = F_00d745d0(param_2,&(*(float *)(gen_frame + 0x0)),(*(int *)((int)this + 0x78) - (int)(*(undefined * PTR32 *)(gen_frame + 0x34))) + *piVar8)
      ;
    }
  }
  else {
    piVar8 = (int *)((int)this + 0x74);
    F_00d74e00(param_2,piVar8);
    (*(int *)(gen_frame + 0x3c)) = *(int *)(&REFG(undefined, 0x1137318) + param_2 * 4);
    uVar7 = param_4;
    if (-1 < (int)param_4) {
      iVar9 = 0;
      (*(float *)(gen_frame + 0x20)) = *(float *)&REFG(undefined, 0x1137790);
      (*(float *)(gen_frame + 0x24)) = *(float *)&REFG(undefined, 0x1137794);
      (*(float *)(gen_frame + 0x28)) = *(float *)&REFG(undefined, 0x1137798);
      (*(float *)(gen_frame + 0x2c)) = *(float *)&REFG(undefined, 0x113779c);
      (*(float *)(gen_frame + 0x10)) = *(float *)&REFG(undefined, 0x11377a0);
      (*(float *)(gen_frame + 0x14)) = *(float *)&REFG(undefined, 0x11377a4);
      (*(float *)(gen_frame + 0x18)) = *(float *)&REFG(undefined, 0x11377a8);
      (*(float *)(gen_frame + 0x1c)) = *(float *)&REFG(undefined, 0x11377ac);
      (*(int *)(gen_frame + 0x38)) = param_4 + 1;
      do {
        pfVar1 = (float *)(*param_5 + iVar9);
        fVar3 = *pfVar1;
        fVar4 = pfVar1[1];
        fVar5 = pfVar1[2];
        fVar6 = pfVar1[3];
        fVar10 = fVar5 * fVar5 + fVar3 * fVar3;
        fVar11 = fVar6 * fVar6 + fVar4 * fVar4;
        fVar12 = fVar3 * fVar3 + fVar5 * fVar5;
        fVar13 = fVar4 * fVar4 + fVar6 * fVar6;
        fVar14 = fVar11 + fVar10;
        fVar10 = fVar10 + fVar11;
        fVar11 = fVar13 + fVar12;
        fVar12 = fVar12 + fVar13;
        (*(undefined4 *)((char *)&auVar2 + 4)) = (undefined4)gen_fl2bits(fVar10);
        (*(undefined4 *)((char *)&auVar2 + 0)) = (undefined4)gen_fl2bits(fVar14);
        (*(undefined4 *)((char *)&auVar2 + 8)) = (undefined4)gen_fl2bits(fVar11);
        (*(undefined4 *)((char *)&auVar2 + 12)) = (undefined4)gen_fl2bits(fVar12);
        gen_rsqrtps(&(in_XMM3), &(in_XMM3), &(auVar2));
        fVar13 = (*(float *)((char *)&in_XMM3 + 0));
        fVar16 = (*(float *)((char *)&in_XMM3 + 4));
        fVar17 = (*(float *)((char *)&in_XMM3 + 8));
        fVar18 = (*(float *)((char *)&in_XMM3 + 12));
        (*(float *)(gen_frame + 0x0)) = (((*(float *)(gen_frame + 0x20)) - (fVar13 * fVar14) * fVar13) * ((*(float *)(gen_frame + 0x10)) * fVar13)) * fVar3;
        (*(float *)(gen_frame + 0x4)) = (((*(float *)(gen_frame + 0x24)) - (fVar16 * fVar10) * fVar16) * ((*(float *)(gen_frame + 0x14)) * fVar16)) * fVar4;
        (*(float *)(gen_frame + 0x8)) = (((*(float *)(gen_frame + 0x28)) - (fVar17 * fVar11) * fVar17) * ((*(float *)(gen_frame + 0x18)) * fVar17)) * fVar5;
        (*(float *)(gen_frame + 0xc)) = (((*(float *)(gen_frame + 0x2c)) - (fVar18 * fVar12) * fVar18) * ((*(float *)(gen_frame + 0x1c)) * fVar18)) * fVar6;
        F_00d74d70((*(int *)(gen_frame + 0x3c)),piVar8);
        uVar7 = F_00d745d0(param_2,&(*(float *)(gen_frame + 0x0)),(*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x78) - (*(int *)(gen_frame + 0x3c))) + *piVar8
                            );
        iVar9 = iVar9 + 0x10;
        (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + -1;
      } while ((*(int *)(gen_frame + 0x38)) != 0);
      return uVar7;
    }
  }
  return uVar7;
}

/* ref: FUN_00d750e0 */
uint F_00d750e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd750e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  F_00d74d70(2,param_2);
  uVar1 = param_2[1];
  *((undefined2 *)GEN_TOP(((uVar1 - 2) + *param_2))) = (undefined2)param_1;
  return uVar1;
}

/* ref: FUN_00d75110 */
uint F_00d75110(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd75110u, 0u, gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  F_00d74d70(4,param_2);
  uVar1 = param_2[1];
  *((float *)GEN_TOP(((uVar1 - 4) + *param_2))) = param_1;
  return uVar1;
}

/* ref: FUN_00d75140 */
uint F_00d75140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xd75140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  float * param_4 = (float *)(uintptr_t)gen_a4;
  float * param_5 = (float *)(uintptr_t)gen_a5;
  int param_6 = (int)gen_a6;
  int * param_7 = (int *)(uintptr_t)gen_a7;
  int iVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  float * pfVar8;
  float fVar9;
  int iVar10;
  
  iVar1 = (int)this + 0x74;
  F_00d74db0(4,iVar1);
  uVar5 = param_1 & 0xff;
  iVar6 = param_3 - (int)param_5;
  uVar7 = 1;
  param_3 = 3;
  pfVar8 = param_5;
  do {
    if ((uVar5 & (uVar7 << 4 | uVar7 >> 0x1c)) == 0) {
      uVar4 = (int)param_4 - (int)param_5;
      if ((uVar7 & uVar5) != 0) {
        fVar9 = *(float *)(iVar6 + (int)pfVar8);
        goto LAB_00d751b5;
      }
    }
    else {
      F_00d75110(GEN_TOF(*((float *)GEN_TOP((((int)param_4 - (int)param_5) + (int)pfVar8)))),iVar1);
      fVar9 = *pfVar8;
LAB_00d751b5: ;
      uVar4 = F_00d75110(fVar9,iVar1);
    }
    pfVar8 = pfVar8 + 1;
    uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
    param_3 = param_3 + -1;
    if (param_3 == 0) {
      if ((param_1 & 0xf0) != 0) {
        uVar4 = 0;
        param_3 = 0;
        if (-1 < param_6) {
          do {
            iVar6 = 0;
            param_1 = 1;
            pfVar8 = param_4;
            do {
              if ((uVar5 & (param_1 << 4 | param_1 >> 0x1c)) != 0) {
                if (param_2 == 0) {
                  iVar10 = iVar1;
                  bVar2 = F_00d745f0(*pfVar8,GEN_TOF(*((float *)GEN_TOP((((int)param_5 - (int)param_4) +
                                                         (int)pfVar8)))),GEN_TOF(*((float *)GEN_TOP((*param_7 + (iVar6 + param_3 * 4) * 4)))));
                  F_00d74d30((uint)bVar2,iVar10);
                }
                else {
                  iVar10 = iVar1;
                  uVar3 = F_00d74620(*pfVar8,GEN_TOF(*((float *)GEN_TOP((((int)param_5 - (int)param_4) +
                                                         (int)pfVar8)))),GEN_TOF(*((float *)GEN_TOP((*param_7 + (iVar6 + param_3 * 4) * 4)))));
                  F_00d750e0((uint)uVar3,iVar10);
                }
              }
              iVar6 = iVar6 + 1;
              pfVar8 = pfVar8 + 1;
              param_1 = param_1 << 1 | (uint)((int)param_1 < 0);
            } while (iVar6 < 3);
            uVar4 = param_3 + 1;
            param_3 = uVar4;
          } while ((int)uVar4 <= param_6);
        }
      }
      return uVar4;
    }
  } while( true );
}

/* ref: FUN_00d752d0 */
uint F_00d752d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd752d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int * piVar1;
  int iVar2;
  undefined1 * puVar3;
  int iVar4;
  float fVar5;
  
  piVar1 = (int *)((int)this + 0x74);
  iVar2 = param_1 + 1 + param_2;
  F_00d750e0(param_1,piVar1);
  puVar3 = (undefined1 *)F_00d74d30(param_2,piVar1);
  iVar4 = 0;
  if (-1 < iVar2) {
    do {
      fVar5 = (*(float *)(*param_3 + iVar4 * 4) / *(float *)((int)this + 0xc)) *
              ((float)GEN_TOF((*(int *)((int)this + 0x28) + -1))) + REFG(float, 0x1088068);
      if (*(uint *)((int)this + 0x78) == (*(uint *)((int)this + 0x7c) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,1);
      }
      puVar3 = ((undefined1 *)GEN_TOP((*(int *)((int)this + 0x78) + *piVar1)));
      *puVar3 = (char)(int)fVar5;
      *(int *)((int)this + 0x78) = *(int *)((int)this + 0x78) + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 <= iVar2);
  }
  return (uint)puVar3;
}

/* ref: FUN_00d75ff0 */
uint F_00d75ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd75ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined8 * puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  (*(undefined4 *)(gen_frame + 0xc)) = 0x80000000;
  (*(uint *)(gen_frame + 0x18)) = 0x80000000;
  (*(uint *)(gen_frame + 0x24)) = 0x80000000;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0;
  F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x4)),0x1c);
  puVar1 = (undefined8 *)((*(int *)(gen_frame + 0x4)) + (*(int *)(gen_frame + 0x8)) * 0x1c);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_2 + 3);
  }
  (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
  iVar3 = *(int *)(param_1 + 0x10);
  if ((int)((*(uint *)(gen_frame + 0x18)) & 0x3fffffff) < iVar3) {
    iVar2 = ((*(uint *)(gen_frame + 0x18)) & 0x3fffffff) * 2;
    if (iVar2 <= iVar3) {
      iVar2 = iVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x10)),iVar2,4);
  }
  (*(int *)(gen_frame + 0x14)) = iVar3;
  iVar3 = *(int *)(param_1 + 0x14);
  if ((int)((*(uint *)(gen_frame + 0x24)) & 0x3fffffff) < iVar3) {
    iVar2 = ((*(uint *)(gen_frame + 0x24)) & 0x3fffffff) * 2;
    if (iVar2 <= iVar3) {
      iVar2 = iVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x1c)),iVar2,4);
  }
  iVar2 = 0;
  (*(int *)(gen_frame + 0x20)) = iVar3;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      *(undefined4 *)((*(int *)(gen_frame + 0x10)) + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x10));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      *(undefined4 *)((*(int *)(gen_frame + 0x1c)) + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x14));
  }
  F_00d75370((*(undefined * PTR32 *)(gen_frame + 0x28)),param_1,&(*(int *)(gen_frame + 0x4)),param_3);
  uVar4 = F_00d76ae0(&(*(int *)(gen_frame + 0x4)));
  return uVar4;
}

/* ref: FUN_00d76120 */
uint F_00d76120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76120u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  
  uVar1 = (*(undefined4 *)&gen_args[1]);
  F_00d739c0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[19])REFP(0x113541c));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) = 0;
  F_00d74700(((undefined1 *)(gen_frame + 0x0)));
  F_00d74510(&(*(undefined4 *)&gen_args[1]));
  F_00d75ff0((*(undefined * PTR32 *)&gen_args[0]),uVar1,((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[1]));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d761a0 */
uint F_00d761a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd761a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00d739c0(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x113541c));
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0x80000000;
  *(undefined4 *)((int)this + 0x58) = 0x80000000;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 100) = 0x80000000;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x70) = 0x80000000;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0x80000000;
  F_00d75ff0(this,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_00d76210 */
uint F_00d76210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd76210u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00d739c0(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x113541c));
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0x80000000;
  *(undefined4 *)((int)this + 0x58) = 0x80000000;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 100) = 0x80000000;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x70) = 0x80000000;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0x80000000;
  F_00d75370(this,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_00d76290 */
byte F_00d76290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76290u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00d762b0 */
byte F_00d762b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd762b0u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00d762f0 */
uint F_00d762f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd762f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d76340 */
uint F_00d76340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76340u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00d76350 */
uint F_00d76350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76350u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00d76380 */
unsigned int F_00d76380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76380u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return 0;
}

/* ref: FUN_00d763b0 */
unsigned int F_00d763b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd763b0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d763e0 */
unsigned int F_00d763e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd763e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d76410 */
uint F_00d76410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd76410u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d76440 */
uint F_00d76440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76440u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d76480 */
uint F_00d76480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd76480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0x1c);
  return uVar1;
}

/* ref: FUN_00d764b0 */
uint F_00d764b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd764b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d76530 */
uint F_00d76530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76530u, gen_a0, gen_a1, 0u, 0u);
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
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) * 4;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]));
    iVar3 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
    if (iVar3 != 0) goto LAB_00d76586;
  }
  iVar3 = ((int)0x80000000);
LAB_00d76586: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar1;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar3;
  *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d765a0 */
uint F_00d765a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd765a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d765e0 */
uint F_00d765e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd765e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,1);
  }
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4))));
  *puVar1 = *param_2;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d76620 */
uint F_00d76620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76620u, gen_a0, gen_a1, 0u, 0u);
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
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) << 4;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]));
    iVar3 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
    if (iVar3 != 0) goto LAB_00d76675;
  }
  iVar3 = ((int)0x80000000);
LAB_00d76675: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar1;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar3;
  *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d76690 */
unsigned int F_00d76690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd76690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  if (0 < param_2) {
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
        param_1[2] = param_3[2];
        *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 3);
      }
      param_1 = (undefined8 *)((int)param_1 + 0x1c);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}

/* ref: FUN_00d766d0 */
uint F_00d766d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd766d0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d76710 */
uint F_00d76710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd76710u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d76760 */
uint F_00d76760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76760u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d767a0 */
uint F_00d767a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd767a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d767e0 */
unsigned int F_00d767e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd767e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x1c);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0x1c)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_2 + 3);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00d76850 */
uint F_00d76850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd76850u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00d76890 */
uint F_00d76890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd76890u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d768d0 */
uint F_00d768d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd768d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))
                      (param_1,*(undefined4 *)this,(uVar1 * 8 - (uVar1 & 0x3fffffff)) * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d76920 */
unsigned int F_00d76920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0x1c);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0x1c)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 3);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00d76990 */
uint F_00d76990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76990u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00d769d0 */
uint F_00d769d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd769d0u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0x10);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00d76a10 */
uint F_00d76a10(unsigned int gen_a0)
{
  GEN_ENTER(0xd76a10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,
                       (uVar1 * 8 - (uVar1 & 0x3fffffff)) * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d76a60 */
uint F_00d76a60(unsigned int gen_a0)
{
  GEN_ENTER(0xd76a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,
                       (uVar1 * 8 - (uVar1 & 0x3fffffff)) * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d76ae0 */
uint F_00d76ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xd76ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
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
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,
                       (uVar1 * 8 - (uVar1 & 0x3fffffff)) * 4);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  return uVar1;
}

/* ref: FUN_00d76bb0 */
unsigned int F_00d76bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = param_1 + 0x28;
  *(int *)((int)this + 4) = param_1 + 0x34;
  *(int *)((int)this + 8) = param_1 + 0x38;
  *(int *)((int)this + 0xc) = param_1 + 8;
  return 0;
}

/* ref: FUN_00d76be0 */
unsigned int F_00d76be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd76be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  iVar3 = 0;
  fVar4 = REFG(float, 0x1136e98);
  fVar5 = REFG(float, 0x1136c54);
  if (3 < param_5) {
    iVar2 = (param_5 - 4U >> 2) + 1;
    iVar3 = iVar2 * 4;
    do {
      fVar1 = *param_3;
      if (fVar1 < fVar5) {
        fVar5 = fVar1;
      }
      if (fVar4 < fVar1) {
        fVar4 = fVar1;
      }
      fVar1 = param_3[param_4];
      if (fVar1 < fVar5) {
        fVar5 = fVar1;
      }
      if (fVar4 < fVar1) {
        fVar4 = fVar1;
      }
      fVar1 = param_3[param_4 * 2];
      if (fVar1 < fVar5) {
        fVar5 = fVar1;
      }
      if (fVar4 < fVar1) {
        fVar4 = fVar1;
      }
      fVar1 = param_3[param_4 * 3];
      param_3 = param_3 + param_4 * 4;
      if (fVar1 < fVar5) {
        fVar5 = fVar1;
      }
      if (fVar4 < fVar1) {
        fVar4 = fVar1;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (iVar3 < param_5) {
    iVar3 = param_5 - iVar3;
    do {
      fVar1 = *param_3;
      if (fVar1 < fVar5) {
        fVar5 = fVar1;
      }
      if (fVar4 < fVar1) {
        fVar4 = fVar1;
      }
      param_3 = param_3 + param_4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *param_1 = fVar5;
  *param_2 = fVar4 - fVar5;
  return 0;
}

/* ref: FUN_00d76cc0 */
uint F_00d76cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xd76cc0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x10abe98);
  in_ecx[3] = GEN_FLT_TO(in_ecx[3], REFG(float, 0x10abe98));
  in_ecx[2] = uVar1;
  in_ecx[1] = uVar1;
  *in_ecx = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_00d76ce0 */
unsigned int F_00d76ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76ce0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *param_1 = (*param_1 - 1) + param_2 & ~(param_2 - 1U);
  return 0;
}

/* ref: FUN_00d76d00 */
ushort F_00d76d00(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76d00u, 0u, gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  return (ushort)(int)(((param_1 - *param_2) / param_2[1]) * *(float *)&REFG(undefined, 0x11377e0));
}

/* ref: FUN_00d76d30 */
unsigned int F_00d76d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76d30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d87f90(param_2,param_1);
  return 0;
}

/* ref: FUN_00d76d50 */
unsigned int F_00d76d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd76d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_00d76be0(param_1,param_1 + 4,param_2,param_3,param_4);
  return 0;
}

/* ref: FUN_00d76d80 */
unsigned int F_00d76d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76d80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      uVar1 = *(undefined1 *)(param_1 + iVar2 * 2);
      *(undefined1 *)(param_1 + iVar2 * 2) = *(undefined1 *)(param_1 + 1 + iVar2 * 2);
      *(undefined1 *)(param_1 + 1 + iVar2 * 2) = uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return 0;
}

/* ref: FUN_00d76db0 */
unsigned int F_00d76db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76db0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 uVar1;
  undefined1 * puVar2;
  
  if (0 < param_2) {
    puVar2 = (undefined1 *)(param_1 + 2);
    do {
      uVar1 = puVar2[-2];
      puVar2[-2] = puVar2[1];
      puVar2[1] = uVar1;
      uVar1 = puVar2[-1];
      puVar2[-1] = *puVar2;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}

/* ref: FUN_00d76e00 */
byte F_00d76e00(unsigned int gen_a0)
{
  GEN_ENTER(0xd76e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 uVar1;
  byte bVar2;
  
  F_00d76d80(this,0x14);
  uVar1 = *(undefined1 *)((int)this + 8);
  *(undefined1 *)((int)this + 8) = *(undefined1 *)((int)this + 10);
  *(undefined1 *)((int)this + 10) = uVar1;
  bVar2 = *(byte *)((int)this + 9);
  *(undefined1 *)((int)this + 9) = *(undefined1 *)((int)this + 0xb);
  *(byte *)((int)this + 0xb) = bVar2;
  return bVar2;
}

/* ref: FUN_00d76e30 */
unsigned int F_00d76e30(unsigned int gen_a0)
{
  GEN_ENTER(0xd76e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  ushort * puVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0x34) != 0) {
    F_00d76e00(*(undefined * PTR32 *)((int)this + 0x28));
    iVar3 = *(int *)((int)this + 0x28);
    F_00d76d80((uint)*(ushort *)(iVar3 + 0x1e) + iVar3,
                 (uint)*(ushort *)(iVar3 + 0x12) + (uint)*(ushort *)(iVar3 + 0x10) +
                 (uint)*(ushort *)(iVar3 + 0xe) + (uint)*(ushort *)(iVar3 + 0xc));
    iVar1 = *(int *)((int)this + 0x28);
    F_00d76d80((uint)*(ushort *)(iVar1 + 0x20) + iVar3,
                 (uint)*(ushort *)(iVar1 + 0x1a) + (uint)*(ushort *)(iVar1 + 0x18) +
                 (uint)*(ushort *)(iVar1 + 0x16) + (uint)*(ushort *)(iVar1 + 0x14));
    iVar1 = *(int *)((int)this + 0x28);
    F_00d76db0((uint)*(ushort *)(iVar1 + 0x22) + iVar3,
                 (uint)*(ushort *)(iVar1 + 0x10) + (uint)*(ushort *)(iVar1 + 0xc));
    iVar1 = *(int *)((int)this + 0x28);
    F_00d76d80((uint)*(ushort *)(iVar1 + 0x22) + iVar3 +
                 ((uint)*(ushort *)(iVar1 + 0x10) + (uint)*(ushort *)(iVar1 + 0xc)) * 4,
                 (uint)*(ushort *)(iVar1 + 0xe) * 3);
    iVar1 = *(int *)((int)this + 0x28);
    F_00d76db0((uint)*(ushort *)(iVar1 + 0x22) +
                 ((uint)*(ushort *)(iVar1 + 0xe) * 6 + 0xf +
                  ((uint)*(ushort *)(iVar1 + 0x10) + (uint)*(ushort *)(iVar1 + 0xc)) * 4 &
                 0xfffffff0) + iVar3,(uint)*(ushort *)(iVar1 + 0x12));
    iVar1 = *(int *)((int)this + 0x28);
    F_00d76db0((uint)*(ushort *)(iVar1 + 0x24) + iVar3,
                 (uint)*(ushort *)(iVar1 + 0x18) + (uint)*(ushort *)(iVar1 + 0x14));
    iVar1 = *(int *)((int)this + 0x28);
    F_00d76db0((uint)*(ushort *)(iVar1 + 0x24) +
                 (((uint)*(ushort *)(iVar1 + 0x18) + (uint)*(ushort *)(iVar1 + 0x14)) * 4 + 0xf &
                 0xfffffff0) + iVar3,(uint)*(ushort *)(iVar1 + 0x1a));
    iVar1 = *(int *)((int)this + 0x28);
    F_00d76db0((uint)*(ushort *)(iVar1 + 0x26) + iVar3,
                 (uint)*(ushort *)(iVar1 + 0x18) + (uint)*(ushort *)(iVar1 + 0x14));
    iVar1 = *(int *)((int)this + 0x28);
    F_00d76db0((uint)*(ushort *)(iVar1 + 0x26) +
                 (((uint)*(ushort *)(iVar1 + 0x18) + (uint)*(ushort *)(iVar1 + 0x14)) * 4 + 0xf &
                 0xfffffff0) + iVar3,(uint)*(ushort *)(iVar1 + 0x1a));
    iVar3 = 0;
    if (*((short *)GEN_TOP((*(int *)((int)this + 0x28) + 6))) != 0) {
      do {
        puVar2 = *(ushort * PTR32 *)((int)this + 0x28);
        F_00d76d80((int)puVar2 + (uint)*puVar2 + (uint)puVar2[0xe] * iVar3,
                     (uint)puVar2[0xb] * 3 + (uint)puVar2[0xd] + (uint)puVar2[0xc] +
                     (uint)puVar2[10]);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x28) + 6))));
    }
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  return 0;
}

/* ref: FUN_00d76ff0 */
unsigned int F_00d76ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_1[1]) {
    do {
      piVar1 = *(int * PTR32 *)this;
      iVar2 = *param_1;
      if (piVar1[1] == (piVar1[2] & 0x3fffffffU)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,1);
      }
      *(undefined1 *)(*piVar1 + piVar1[1]) = *(undefined1 *)(iVar2 + iVar3);
      piVar1[1] = piVar1[1] + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  return 0;
}

/* ref: FUN_00d77050 */
uint F_00d77050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd77050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined1 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)this + 4);
  puVar2 = ((undefined1 *)GEN_TOP((iVar3 + -1 + param_1 & ~(param_1 - 1U))));
  if (iVar3 < (int)puVar2) {
    iVar3 = (int)puVar2 - iVar3;
    do {
      piVar1 = *(int * PTR32 *)this;
      if (piVar1[1] == (piVar1[2] & 0x3fffffffU)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,1);
      }
      puVar2 = (undefined1 *)(*piVar1 + piVar1[1]);
      *puVar2 = 0;
      piVar1[1] = piVar1[1] + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return (uint)puVar2;
}

/* ref: FUN_00d770b0 */
unsigned int F_00d770b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd770b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  float param_5 = (float)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  int * param_7 = (int *)(uintptr_t)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  undefined8 * puVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = *(float *)(param_3 + 4 + (uint)(ushort)param_1 * 8);
  pfVar1 = (float *)(param_3 + (uint)(ushort)param_1 * 8);
  if (fVar6 <= param_5 * REFG(float, 0x10928e4)) {
    if (param_4 != 0) {
      fVar4 = *(float *)(param_4 + (uint)(ushort)param_2 * 4);
      if ((fVar4 - param_5 <= *pfVar1) &&
         (fVar5 = *pfVar1 + fVar6, fVar4 = fVar4 + param_5,
         (!GEN_ISNAN(fVar4) && !GEN_ISNAN(fVar5)) && !(fVar4 < fVar5))) {
        return 0;
      }
    }
    fVar6 = fVar6 * REFG(float, 0x1088068);
    fVar4 = *pfVar1;
    (*(float *)(gen_frame + 0x8)) = gen_bits2f(CONCAT22((*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x8)) + 2)),(ushort)param_2));
    if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_6,8);
    }
    pfVar1 = (float *)(*param_6 + param_6[1] * 8);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = fVar6 + fVar4;
      pfVar1[1] = (*(float *)(gen_frame + 0x8));
      param_6[1] = param_6[1] + 1;
      return 0;
    }
  }
  else {
    uVar3 = *(undefined8 *)pfVar1;
    if (param_7[1] == (param_7[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_7,0xc);
    }
    puVar2 = (undefined8 *)(*param_7 + param_7[1] * 0xc);
    param_6 = param_7;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = uVar3;
      *(uint *)(puVar2 + 1) = CONCAT22((ushort)param_2,(ushort)param_1);
    }
  }
  param_6[1] = param_6[1] + 1;
  return 0;
}

/* ref: FUN_00d771d0 */
uint F_00d771d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd771d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00d77050(this,param_2);
  iVar1 = *(int *)this;
  iVar4 = *(int *)(iVar1 + 4) + param_2;
  uVar2 = *(uint *)(iVar1 + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar4) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar4) {
      iVar3 = iVar4;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),iVar1,iVar3,1);
  }
  *(int *)(iVar1 + 4) = iVar4;
  uVar2 = F_00da1010(((*(int * PTR32 *)this)[1] - param_2) + **(int * PTR32 *)this,param_1,param_2);
  return uVar2;
}

/* ref: FUN_00d77240 */
uint F_00d77240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd77240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00d77050(this,4);
  uVar1 = F_00d771d0(this,param_1,4);
  return uVar1;
}

/* ref: FUN_00d77260 */
uint F_00d77260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd77260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d771d0(this,param_1,2);
  return uVar1;
}

/* ref: FUN_00d77280 */
uint F_00d77280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd77280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d771d0(this,param_1,4);
  return uVar1;
}

/* ref: FUN_00d774d0 */
uint F_00d774d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd774d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00d77050(this,2);
  iVar2 = 0;
  if (0 < param_1[1]) {
    do {
      uVar1 = F_00d77260(this,*param_1 + 4 + iVar2 * 8);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d77510 */
uint F_00d77510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd77510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00d77050(this,2);
  iVar3 = 0;
  if (0 < param_1[1]) {
    iVar2 = 0;
    do {
      uVar1 = F_00d77260(this,*param_1 + 0x10 + iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x20;
    } while (iVar3 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d77560 */
uint F_00d77560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd77560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00d77050(this,2);
  iVar3 = 0;
  if (0 < param_1[1]) {
    iVar2 = 0;
    do {
      uVar1 = F_00d77260(this,*param_1 + 10 + iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d775b0 */
uint F_00d775b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd775b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00d77050(this,2);
  iVar2 = 0;
  if (0 < param_1[1]) {
    do {
      uVar1 = F_00d77260(this,*param_1 + 2 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d775f0 */
uint F_00d775f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd775f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00d77050(this,4);
  iVar2 = 0;
  if (0 < param_1[1]) {
    do {
      uVar1 = F_00d77280(this,*param_1 + iVar2 * 8);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d77630 */
unsigned int F_00d77630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd77630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  
  piVar1 = param_1;
  iVar2 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      F_00d76d30(((undefined1 *)(gen_frame + 0x4)),*piVar1 + (int)param_1);
      F_00d77260(this,((undefined1 *)(gen_frame + 0x4)));
      F_00d77260(this,((undefined1 *)(gen_frame + 0x6)));
      F_00d77260(this,((undefined1 *)(gen_frame + 0x8)));
      param_1 = (int *)((int)param_1 + 0x20);
      iVar2 = iVar2 + 1;
    } while (iVar2 < piVar1[1]);
  }
  return 0;
}

/* ref: FUN_00d77690 */
uint F_00d77690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd77690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00d77050(this,4);
  iVar3 = 0;
  if (0 < param_1[1]) {
    iVar2 = 0;
    do {
      uVar1 = F_00d77280(this,*param_1 + iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d776d0 */
uint F_00d776d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd776d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = F_00d77050((*(undefined * PTR32 *)&gen_args[0]),4);
  uVar1 = (*(uint *)&gen_args[1]);
  iVar4 = 0;
  if (0 < *(int *)((*(uint *)&gen_args[1]) + 4)) {
    iVar3 = 0;
    do {
      (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(*(float *)(*(int *)uVar1 + 4 + iVar3) * REFG(float, 0x1137338));
      uVar2 = F_00d77280((*(undefined * PTR32 *)&gen_args[0]),&(*(uint *)&gen_args[1]));
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar4 < *(int *)(uVar1 + 4));
  }
  return uVar2;
}

/* ref: FUN_00d77730 */
unsigned int F_00d77730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd77730u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int * piVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  iVar5 = 0;
  if (0 < (*(int * PTR32 *)&gen_args[1])[1]) {
    iVar4 = 0;
    do {
      iVar3 = *piVar1 + iVar4;
      uVar2 = F_00d76d00(GEN_TOF(*((float *)GEN_TOP(((*(int *)&gen_args[2]) + (uint)*(ushort *)(iVar3 + 8) * 4)))),iVar3);
      (*(int * PTR32 *)&gen_args[1]) = (int *)(uint)uVar2;
      F_00d77260((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar5 < piVar1[1]);
  }
  return 0;
}

/* ref: FUN_00d77790 */
unsigned int F_00d77790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd77790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_1[1]) {
    do {
      F_00d76d30(((undefined1 *)(gen_frame + 0x4)),(uint)*(ushort *)(*param_1 + iVar1 * 4) * 0x10 + param_2);
      F_00d77260(this,((undefined1 *)(gen_frame + 0x4)));
      F_00d77260(this,((undefined1 *)(gen_frame + 0x6)));
      F_00d77260(this,((undefined1 *)(gen_frame + 0x8)));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[1]);
  }
  return 0;
}

/* ref: FUN_00d777f0 */
uint F_00d777f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd777f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x2d0];
  int * piVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int * _Size;
  float fVar7;
  int iVar8;
  undefined * puVar9;
  undefined4 uVar10;
  
  **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 4;
  **((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (uint)(*(undefined * PTR32 *)&gen_args[2]);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0xc)));
  (*(uint *)(gen_frame + 0x294)) = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1);
  (*(int *)(gen_frame + 0x24c)) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 0x1c)));
  (*(undefined4 *)(gen_frame + 0x260)) = 0;
  (*(int *)(gen_frame + 0x264)) = 0;
  (*(uint *)(gen_frame + 0x268)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x250)) = 0;
  (*(int *)(gen_frame + 0x254)) = 0;
  (*(uint *)(gen_frame + 0x258)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x284)) = 0;
  (*(int *)(gen_frame + 0x288)) = 0;
  (*(uint *)(gen_frame + 0x28c)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x29c)) = 0;
  (*(int *)(gen_frame + 0x2a0)) = 0;
  (*(uint *)(gen_frame + 0x2a4)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x278)) = 0;
  (*(int *)(gen_frame + 0x27c)) = 0;
  (*(uint *)(gen_frame + 0x280)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x2a8)) = 0;
  (*(int *)(gen_frame + 0x2ac)) = 0;
  (*(uint *)(gen_frame + 0x2b0)) = 0x80000000;
  (*(uint *)(gen_frame + 0x298)) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 0x40)));
  (*(undefined4 *)(gen_frame + 0x200)) = 0;
  (*(undefined4 *)(gen_frame + 0x204)) = 0;
  (*(undefined4 *)(gen_frame + 0x208)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x234)) = 0;
  (*(undefined4 *)(gen_frame + 0x238)) = 0;
  (*(undefined4 *)(gen_frame + 0x23c)) = 0x80000000;
  if (piVar1[4] * 0xc == 0) {
    (*(float * PTR32 *)(gen_frame + 0x2b4)) = (float *)0x0;
LAB_00d778e9: ;
    (*(int *)(gen_frame + 0x274)) = ((int)0x80000000);
  }
  else {
    (*(int *)(gen_frame + 0x240)) = piVar1[4] * 0x60;
    (*(float * PTR32 *)(gen_frame + 0x2b4)) = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x240)))));
    (*(int *)(gen_frame + 0x274)) = (int)((*(int *)(gen_frame + 0x240)) + ((*(int *)(gen_frame + 0x240)) >> 0x1f & 7U)) >> 3;
    if ((*(int *)(gen_frame + 0x274)) == 0) goto LAB_00d778e9;
  }
  if (piVar1[5] == 0) {
    (*(uint *)(gen_frame + 0x26c)) = 0;
LAB_00d77940: ;
    (*(int *)(gen_frame + 0x270)) = ((int)0x80000000);
  }
  else {
    (*(int *)(gen_frame + 0x244)) = piVar1[5] * 8;
    (*(uint *)(gen_frame + 0x26c)) = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x244)));
    (*(int *)(gen_frame + 0x270)) = (int)((*(int *)(gen_frame + 0x244)) + ((*(int *)(gen_frame + 0x244)) >> 0x1f & 7U)) >> 3;
    if ((*(int *)(gen_frame + 0x270)) == 0) goto LAB_00d77940;
  }
  (*(uint *)(gen_frame + 0x25c)) = piVar1[0xd];
  iVar6 = piVar1[4] * 0xc;
  (*(undefined4 *)(gen_frame + 0x248)) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 0x24)));
  if (0 < iVar6) {
    (*(float * PTR32 *)(gen_frame + 0x2b8)) = (*(float * PTR32 *)(gen_frame + 0x2b4));
    (*(int *)(gen_frame + 0x2bc)) = iVar6;
    (*(undefined * PTR32 *)&gen_args[2]) = (undefined *)piVar1[10];
    do {
      F_00d76d50((*(float * PTR32 *)(gen_frame + 0x2b8)),(*(undefined * PTR32 *)&gen_args[2]),iVar6,(*(uint *)(gen_frame + 0x294)));
      (*(undefined * PTR32 *)&gen_args[2]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 4)));
      (*(float * PTR32 *)(gen_frame + 0x2b8)) = (*(float * PTR32 *)(gen_frame + 0x2b8)) + 2;
      (*(int *)(gen_frame + 0x2bc)) = (*(int *)(gen_frame + 0x2bc)) + -1;
    } while ((*(int *)(gen_frame + 0x2bc)) != 0);
  }
  if (0 < piVar1[5]) {
    (*(undefined * PTR32 *)&gen_args[2]) = (undefined *)(*(uint *)(gen_frame + 0x26c));
    (*(int *)(gen_frame + 0x2bc)) = piVar1[5];
    uVar5 = (*(uint *)(gen_frame + 0x25c));
    do {
      F_00d76d50((*(undefined * PTR32 *)&gen_args[2]),uVar5,piVar1[5],(*(uint *)(gen_frame + 0x294)));
      (*(undefined * PTR32 *)&gen_args[2]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 8)));
      uVar5 = uVar5 + 4;
      (*(int *)(gen_frame + 0x2bc)) = (*(int *)(gen_frame + 0x2bc)) + -1;
    } while ((*(int *)(gen_frame + 0x2bc)) != 0);
  }
  uVar5 = 0;
  (*(uint *)(gen_frame + 0x25c)) = 0;
  if (0 < piVar1[4]) {
    (*(undefined * PTR32 *)&gen_args[2]) = (undefined *)0x0;
    do {
      (*(int * PTR32 *)(gen_frame + 0x290)) = (int *)(uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x10))) + uVar5 * 2)));
      iVar6 = 0;
      (*(float * PTR32 *)(gen_frame + 0x2b8)) = ((float *)GEN_TOP((uVar5 * 0x10 + *(*(int * PTR32 *)&gen_args[3]))));
      (*(int *)(gen_frame + 0x2bc)) = (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x290))) * 0xc;
      do {
        F_00d770b0((int)(*(undefined * PTR32 *)&gen_args[2]) + iVar6,iVar6 + (*(int *)(gen_frame + 0x2bc)),(*(float * PTR32 *)(gen_frame + 0x2b4)),(*(undefined4 *)(gen_frame + 0x248)),(*(float * PTR32 *)(gen_frame + 0x2b8))[1],&(*(undefined4 *)(gen_frame + 0x260)),
                     &(*(undefined4 *)(gen_frame + 0x29c)));
        iVar6 = iVar6 + 1;
      } while ((ushort)iVar6 < 3);
      iVar6 = 8;
      do {
        F_00d770b0((int)(*(undefined * PTR32 *)&gen_args[2]) + iVar6,iVar6 + (*(int *)(gen_frame + 0x2bc)),(*(float * PTR32 *)(gen_frame + 0x2b4)),(*(undefined4 *)(gen_frame + 0x248)),(*(float * PTR32 *)(gen_frame + 0x2b8))[2],&(*(undefined4 *)(gen_frame + 0x260)),
                     &(*(undefined4 *)(gen_frame + 0x29c)));
        uVar2 = (*(uint *)(gen_frame + 0x25c));
        iVar6 = iVar6 + 1;
      } while ((ushort)iVar6 < 0xb);
      F_00d772a0((*(uint *)(gen_frame + 0x25c)),(*(int * PTR32 *)(gen_frame + 0x290)),(*(float * PTR32 *)(gen_frame + 0x2b4)),(*(undefined4 *)(gen_frame + 0x248)),*(*(float * PTR32 *)(gen_frame + 0x2b8)),&(*(undefined4 *)(gen_frame + 0x250)),&(*(undefined4 *)(gen_frame + 0x278)));
      (*(undefined * PTR32 *)&gen_args[2]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 0xc)));
      uVar5 = uVar2 + 1 & 0xffff;
      (*(uint *)(gen_frame + 0x25c)) = uVar2 + 1;
    } while ((int)uVar5 < piVar1[4]);
  }
  uVar5 = 0;
  if (0 < piVar1[5]) {
    uVar2 = 0;
    do {
      F_00d770b0(uVar5,(uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x1c))) + uVar2 * 2))),(*(uint *)(gen_frame + 0x26c)),0,GEN_TOF(*((float *)GEN_TOP((uVar2 * 0x10 + 0xc + *(*(int * PTR32 *)&gen_args[4]))))),&(*(undefined4 *)(gen_frame + 0x284)),&(*(undefined4 *)(gen_frame + 0x2a8)));
      uVar5 = uVar5 + 1;
      uVar2 = uVar5 & 0xffff;
    } while ((int)uVar2 < piVar1[5]);
  }
  if (-1 < (*(int *)(gen_frame + 0x270))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x26c)),(*(int *)(gen_frame + 0x270)) * 8);
  }
  if (-1 < (*(int *)(gen_frame + 0x274))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(float * PTR32 *)(gen_frame + 0x2b4)),(*(int *)(gen_frame + 0x274)) * 8);
  }
  _Size = (int *)((*(uint *)(gen_frame + 0x298)) + (*(int *)(gen_frame + 0x24c)));
  (*(int * PTR32 *)(gen_frame + 0x290)) = _Size;
  if (_Size == (int *)0x0) {
    (*(undefined * PTR32 *)&gen_args[2]) = (undefined *)0x0;
  }
  else {
    (*(int * PTR32 *)&gen_args[3]) = _Size;
    (*(undefined * PTR32 *)&gen_args[2]) = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[3]))));
    if ((*(int * PTR32 *)&gen_args[3]) != (int *)0x0) {
      (*(int * PTR32 *)&gen_args[4]) = (*(int * PTR32 *)&gen_args[3]);
      goto LAB_00d77bb3;
    }
  }
  (*(int * PTR32 *)&gen_args[4]) = (int *)0x80000000;
LAB_00d77bb3: ;
  (*(undefined * PTR32 *)(gen_frame + 0x2c0)) = (*(undefined * PTR32 *)&gen_args[2]);
  (*(int * PTR32 *)(gen_frame + 0x2c4)) = _Size;
  (*(int * PTR32 *)(gen_frame + 0x2c8)) = (*(int * PTR32 *)&gen_args[4]);
  if (0 < (int)_Size) {
    F_00c48350((*(undefined * PTR32 *)&gen_args[2]),0,(gen_size32)_Size);
  }
  (*(int * PTR32 *)&gen_args[3]) = (int *)0x0;
  if (0 < *((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x14)))) {
    do {
      *((undefined1 *)GEN_TOP(((int)*((short *)GEN_TOP((*((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x10))) + (int)(*(int * PTR32 *)&gen_args[3]) * 2))) + (int)(*(undefined * PTR32 *)&gen_args[2])))) = 0xff;
      (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[3]) + 1)));
    } while ((int)(*(int * PTR32 *)&gen_args[3]) < *((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x14))));
  }
  iVar6 = 0;
  if (0 < *((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x20)))) {
    do {
      iVar8 = iVar6 * 2;
      iVar6 = iVar6 + 1;
      *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + (*(int *)(gen_frame + 0x24c)) + *((short *)GEN_TOP((*((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x1c))) + iVar8)))))) =
           0xff;
      _Size = (*(int * PTR32 *)(gen_frame + 0x290));
    } while (iVar6 < *((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x20))));
  }
  (*(undefined2 *)(gen_frame + 0x210)) = (undefined2)(*(uint *)(gen_frame + 0x298));
  (*(undefined2 *)(gen_frame + 0x20e)) = (undefined2)(*(int *)(gen_frame + 0x24c));
  (*(undefined2 *)(gen_frame + 0x212)) = (undefined2)(*(uint *)(gen_frame + 0x294));
  (*(undefined2 *)(gen_frame + 0x21a)) = (undefined2)(*(int *)(gen_frame + 0x254));
  (*(undefined2 *)(gen_frame + 0x21c)) = 0;
  (*(undefined2 *)(gen_frame + 0x218)) = (undefined2)(*(int *)(gen_frame + 0x264));
  (*(undefined2 *)(gen_frame + 0x220)) = (undefined2)(*(int *)(gen_frame + 0x2a0));
  (*(undefined2 *)(gen_frame + 0x222)) = (undefined2)(*(int *)(gen_frame + 0x27c));
  (*(undefined2 *)(gen_frame + 0x21e)) = (undefined2)(*(int *)(gen_frame + 0x288));
  (*(int * PTR32 *)&gen_args[1]) = _Size + 10;
  (*(int *)(gen_frame + 0x214)) = piVar1[3];
  (*(undefined2 *)(gen_frame + 0x224)) = 0;
  (*(undefined2 *)(gen_frame + 0x226)) = (undefined2)(*(int *)(gen_frame + 0x2ac));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[1]),2);
  iVar6 = (*(int *)(gen_frame + 0x254));
  (*(undefined2 *)(gen_frame + 0x22a)) = (short)(*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + ((*(int *)(gen_frame + 0x264)) + (*(int *)(gen_frame + 0x288)) + (*(int *)(gen_frame + 0x254))) * 2)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[1]),2);
  (*(undefined2 *)(gen_frame + 0x22c)) = (short)(*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + ((*(int *)(gen_frame + 0x2ac)) + (*(int *)(gen_frame + 0x27c)) + (*(int *)(gen_frame + 0x2a0))) * 2)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[1]),0x10);
  (*(undefined2 *)(gen_frame + 0x22e)) = (short)(*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + (*(int *)(gen_frame + 0x264)) * 4 + iVar6 * 6)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[1]),0x10);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + (*(int *)(gen_frame + 0x288)) * 4)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[1]),0x10);
  iVar6 = (*(int *)(gen_frame + 0x2a0)) * 4;
  (*(undefined2 *)(gen_frame + 0x230)) = (short)(*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + iVar6)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[1]),0x10);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + (*(int *)(gen_frame + 0x2ac)) * 4)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[1]),0x10);
  (*(undefined2 *)(gen_frame + 0x232)) = (short)(*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + iVar6)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[1]),0x10);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + (*(int *)(gen_frame + 0x2ac)) * 4)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[1]),0x10);
  uVar5 = (*(uint *)(gen_frame + 0x294));
  (*(undefined2 *)(gen_frame + 0x20c)) = (short)(*(int * PTR32 *)&gen_args[1]);
  (*(ushort *)(gen_frame + 0x228)) = ((short)(*(int *)(gen_frame + 0x2a0)) + (short)(*(int *)(gen_frame + 0x27c)) * 3 + (short)(*(int *)(gen_frame + 0x2ac))) * 2 + 0xfU & 0xfff0;
  iVar6 = (uint)(*(ushort *)(gen_frame + 0x228)) * ((*(uint *)(gen_frame + 0x294)) & 0xffff) + ((uint)(*(int * PTR32 *)&gen_args[1]) & 0xffff);
  uVar2 = *((uint *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))) & 0x3fffffff;
  if ((int)uVar2 < iVar6) {
    iVar8 = uVar2 * 2;
    if (iVar6 < iVar8) {
      iVar6 = iVar8;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),*(int *)(*(undefined * PTR32 *)&gen_args[0]),iVar6,1);
  }
  F_00d771d0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined2 *)(gen_frame + 0x20c)),0x28);
  F_00d76ff0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00d774d0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x260)));
  F_00d774d0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x200)));
  F_00d77510((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x250)));
  F_00d774d0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x284)));
  F_00d77560((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x29c)));
  F_00d77560((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x234)));
  F_00d775b0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x278)));
  F_00d77560((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x2a8)));
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
  F_00d775f0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x260)));
  F_00d775f0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x200)));
  F_00d77630((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x250)));
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
  F_00d775f0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x284)));
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
  F_00d77690((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x29c)));
  F_00d77690((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x234)));
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
  F_00d77690((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x2a8)));
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
  F_00d776d0((*(undefined * PTR32 *)&gen_args[0]),(uint)&(*(undefined4 *)(gen_frame + 0x29c)));
  F_00d776d0((*(undefined * PTR32 *)&gen_args[0]),(uint)&(*(undefined4 *)(gen_frame + 0x234)));
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
  F_00d776d0((*(undefined * PTR32 *)&gen_args[0]),(uint)&(*(undefined4 *)(gen_frame + 0x2a8)));
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
  if (uVar5 != 0) {
    uVar5 = piVar1[10];
    (*(int *)(gen_frame + 0x274)) = piVar1[4] * 0x30;
    (*(int * PTR32 *)(gen_frame + 0x290)) = (int *)(piVar1[4] * 0x30);
    (*(int * PTR32 *)&gen_args[3]) = (int *)piVar1[0xd];
    (*(int *)(gen_frame + 0x270)) = piVar1[5] * 4;
    (*(uint *)(gen_frame + 0x298)) = (*(uint *)(gen_frame + 0x294));
    (*(int * PTR32 *)&gen_args[1]) = (int *)uVar5;
    do {
      F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
      F_00d77730((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x29c)),uVar5);
      F_00d77730((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x234)),uVar5);
      F_00d77790((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x278)),(*(int * PTR32 *)&gen_args[1]));
      F_00d77730((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x2a8)),(*(int * PTR32 *)&gen_args[3]));
      F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
      uVar5 = uVar5 + (int)(*(int * PTR32 *)(gen_frame + 0x290));
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + (*(int *)(gen_frame + 0x274)))));
      (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[3]) + (*(int *)(gen_frame + 0x270)))));
      (*(uint *)(gen_frame + 0x298)) = (*(uint *)(gen_frame + 0x298)) - 1;
    } while ((*(uint *)(gen_frame + 0x298)) != 0);
  }
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x40);
  iVar6 = ((piVar1[0xb] + 1) * 0x10 + piVar1[0xe]) * 4;
  iVar4 = *((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x3c;
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0x1c))))(REFG(undefined4, 0x15dff78),0x1e663ab1,"Compression");
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar8 = iVar6;
  pvVar3 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Original Size ");
  F_00d9ff40(pvVar3,iVar8);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x18b);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar8 = iVar4;
  pvVar3 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0))," Compressed Size ");
  F_00d9ff40(pvVar3,iVar8);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x18c);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  puVar9 = &REFG(undefined, 0x1137a30);
  fVar7 = (float)iVar6 / (float)iVar4;
  uVar5 = F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Compression Ratio: ");
  pvVar3 = (undefined *)F_00d9ffe0(uVar5,fVar7);
  F_00d9fe80(pvVar3,puVar9);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x18d);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar6 = (piVar1[0xb] * 3 - (*(int *)(gen_frame + 0x264))) - (*(int *)(gen_frame + 0x2a0));
  pvVar3 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Reference Translations: ");
  F_00d9ff40(pvVar3,iVar6);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",399);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar6 = (piVar1[0xb] * 3 - (*(int *)(gen_frame + 0x27c))) - (*(int *)(gen_frame + 0x254));
  pvVar3 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Reference Rotations:    ");
  F_00d9ff40(pvVar3,iVar6);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",400);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar6 = piVar1[0xb] * 3;
  pvVar3 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Reference Scales:       ");
  F_00d9ff40(pvVar3,iVar6);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x191);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar6 = (piVar1[0xe] - (*(int *)(gen_frame + 0x2ac))) - (*(int *)(gen_frame + 0x288));
  pvVar3 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Reference Floats:       ");
  F_00d9ff40(pvVar3,iVar6);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x192);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar6 = (*(int *)(gen_frame + 0x264));
  pvVar3 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Static Translations:   ");
  F_00d9ff40(pvVar3,iVar6);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x194);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar6 = (*(int *)(gen_frame + 0x254));
  pvVar3 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Static Rotations:      ");
  F_00d9ff40(pvVar3,iVar6);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x195);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  uVar10 = 0;
  pvVar3 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Static Scales:         ");
  F_00d9ff40(pvVar3,uVar10);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x196);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar6 = (*(int *)(gen_frame + 0x288));
  pvVar3 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Static Floats:         ");
  F_00d9ff40(pvVar3,iVar6);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x197);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar6 = (*(int *)(gen_frame + 0x2a0));
  pvVar3 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Dynamic Translations:  ");
  F_00d9ff40(pvVar3,iVar6);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x199);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar6 = (*(int *)(gen_frame + 0x27c));
  pvVar3 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Dynamic Rotations:     ");
  F_00d9ff40(pvVar3,iVar6);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x19a);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  uVar10 = 0;
  pvVar3 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Dynamic Scales:        ");
  F_00d9ff40(pvVar3,uVar10);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x19b);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar6 = (*(int *)(gen_frame + 0x2ac));
  pvVar3 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Dynamic Floats:        ");
  F_00d9ff40(pvVar3,iVar6);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x19c);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0x20))))(REFG(undefined4, 0x15dff78));
  if (((uint)(*(int * PTR32 *)&gen_args[4]) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(undefined * PTR32 *)&gen_args[2]),(uint)(*(int * PTR32 *)&gen_args[4]) & 0x3fffffff);
  }
  (*(int *)(gen_frame + 0x2ac)) = 0;
  if (((*(uint *)(gen_frame + 0x2b0)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x2a8)),((*(uint *)(gen_frame + 0x2b0)) & 0x3fffffff) * 0xc);
  }
  (*(undefined4 *)(gen_frame + 0x2a8)) = 0;
  (*(uint *)(gen_frame + 0x2b0)) = 0x80000000;
  (*(int *)(gen_frame + 0x27c)) = 0;
  if (((*(uint *)(gen_frame + 0x280)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x278)),(*(uint *)(gen_frame + 0x280)) * 4);
  }
  (*(undefined4 *)(gen_frame + 0x278)) = 0;
  (*(uint *)(gen_frame + 0x280)) = 0x80000000;
  (*(int *)(gen_frame + 0x2a0)) = 0;
  if (((*(uint *)(gen_frame + 0x2a4)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x29c)),((*(uint *)(gen_frame + 0x2a4)) & 0x3fffffff) * 0xc);
  }
  (*(undefined4 *)(gen_frame + 0x29c)) = 0;
  (*(uint *)(gen_frame + 0x2a4)) = 0x80000000;
  (*(int *)(gen_frame + 0x288)) = 0;
  if (((*(uint *)(gen_frame + 0x28c)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x284)),(*(uint *)(gen_frame + 0x28c)) * 8);
  }
  (*(undefined4 *)(gen_frame + 0x284)) = 0;
  (*(uint *)(gen_frame + 0x28c)) = 0x80000000;
  (*(int *)(gen_frame + 0x254)) = 0;
  if (((*(uint *)(gen_frame + 0x258)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x250)),(*(uint *)(gen_frame + 0x258)) << 5);
  }
  (*(uint *)(gen_frame + 0x258)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x250)) = 0;
  (*(int *)(gen_frame + 0x264)) = 0;
  if (((*(uint *)(gen_frame + 0x268)) & 0x80000000) == 0) {
    (*(uint *)(gen_frame + 0x268)) = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                         (&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x260)),(*(uint *)(gen_frame + 0x268)) * 8);
  }
  return (*(uint *)(gen_frame + 0x268));
}

/* ref: FUN_00d78690 */
uint F_00d78690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd78690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  undefined8 * puVar2;
  int iVar3;
  
  F_00d739c0(this,*(undefined4 *)(param_1 + 0xc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1135b5c));
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 == 0) {
    (*(undefined8 * PTR32 *)(gen_frame + 0x30)) = (undefined8 *)0x0;
LAB_00d786fb: ;
    (*(int *)(gen_frame + 0x34)) = ((int)0x80000000);
  }
  else {
    (*(undefined8 * PTR32 *)(gen_frame + 0x38)) = (undefined8 *)(iVar3 << 4);
    (*(undefined8 * PTR32 *)(gen_frame + 0x30)) = ((undefined8 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined8 * PTR32 *)(gen_frame + 0x38)))));
    (*(int *)(gen_frame + 0x34)) = (int)((int)(*(undefined8 * PTR32 *)(gen_frame + 0x38)) + ((int)((int)(uintptr_t)(*(undefined8 * PTR32 *)(gen_frame + 0x38))) >> 0x1f & 0xfU)) >> 4;
    if ((*(int *)(gen_frame + 0x34)) == 0) goto LAB_00d786fb;
  }
  (*(undefined8 * PTR32 *)(gen_frame + 0x14)) = (*(undefined8 * PTR32 *)(gen_frame + 0x30));
  (*(int *)(gen_frame + 0x18)) = iVar3;
  (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x34));
  puVar2 = (*(undefined8 * PTR32 *)(gen_frame + 0x30));
  if (0 < iVar3) {
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *param_3;
        puVar2[1] = param_3[1];
      }
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + 2;
    } while (iVar3 != 0);
  }
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 == 0) {
    (*(undefined8 * PTR32 *)(gen_frame + 0x38)) = (undefined8 *)0x0;
  }
  else {
    (*(int *)(gen_frame + 0x2c)) = iVar3 << 4;
    (*(undefined8 * PTR32 *)(gen_frame + 0x38)) = ((undefined8 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2c)))));
    iVar1 = (int)((*(int *)(gen_frame + 0x2c)) + ((*(int *)(gen_frame + 0x2c)) >> 0x1f & 0xfU)) >> 4;
    if (iVar1 != 0) goto LAB_00d78776;
  }
  iVar1 = ((int)0x80000000);
LAB_00d78776: ;
  (*(undefined8 * PTR32 *)(gen_frame + 0x20)) = (*(undefined8 * PTR32 *)(gen_frame + 0x38));
  (*(int *)(gen_frame + 0x24)) = iVar3;
  (*(int *)(gen_frame + 0x28)) = iVar1;
  puVar2 = (*(undefined8 * PTR32 *)(gen_frame + 0x38));
  if (0 < iVar3) {
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *param_3;
        puVar2[1] = param_3[1];
      }
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + 2;
    } while (iVar3 != 0);
  }
  F_00d76bb0(((undefined1 *)(gen_frame + 0x4)),this);
  F_00d777f0(((undefined1 *)(gen_frame + 0x4)),param_1,param_2,&(*(undefined8 * PTR32 *)(gen_frame + 0x14)),&(*(undefined8 * PTR32 *)(gen_frame + 0x20)));
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined8 * PTR32 *)(gen_frame + 0x38)),iVar1 << 4);
  }
  if (-1 < (*(int *)(gen_frame + 0x34))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined8 * PTR32 *)(gen_frame + 0x30)),(*(int *)(gen_frame + 0x34)) << 4);
  }
  return (uint)this;
}

/* ref: FUN_00d78830 */
uint F_00d78830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd78830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined8 * puVar1;
  undefined8 * puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = this;
  F_00d739c0(this,*(undefined4 *)(param_1 + 0xc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1135b5c));
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  iVar6 = *(int *)(param_1 + 0x14);
  if (iVar6 == 0) {
    (*(undefined8 * PTR32 *)(gen_frame + 0x44)) = (undefined8 *)0x0;
LAB_00d7889e: ;
    (*(int *)(gen_frame + 0x3c)) = ((int)0x80000000);
  }
  else {
    (*(int *)(gen_frame + 0x40)) = iVar6 << 4;
    (*(undefined8 * PTR32 *)(gen_frame + 0x44)) = ((undefined8 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x40)))));
    (*(int *)(gen_frame + 0x3c)) = (int)((*(int *)(gen_frame + 0x40)) + ((*(int *)(gen_frame + 0x40)) >> 0x1f & 0xfU)) >> 4;
    if ((*(int *)(gen_frame + 0x3c)) == 0) goto LAB_00d7889e;
  }
  (*(undefined8 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined8 * PTR32 *)(gen_frame + 0x44));
  (*(int *)(gen_frame + 0x20)) = iVar6;
  (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x3c));
  puVar2 = (*(undefined8 * PTR32 *)(gen_frame + 0x44));
  iVar4 = iVar6;
  if (0 < iVar6) {
    do {
      iVar5 = 0;
      if (puVar2 != (undefined8 *)0x0) {
        F_00d76cc0(puVar2);
        iVar5 = ((int)(uint)(puVar2));
      }
      iVar4 = iVar4 + -1;
      puVar2 = (undefined8 *)(iVar5 + 0x10);
    } while (iVar4 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar4 == 0) {
    (*(undefined8 * PTR32 *)(gen_frame + 0x48)) = (undefined8 *)0x0;
  }
  else {
    (*(int *)(gen_frame + 0x38)) = iVar4 << 4;
    (*(undefined8 * PTR32 *)(gen_frame + 0x48)) = ((undefined8 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x38)))));
    (*(int *)(gen_frame + 0x40)) = (int)((*(int *)(gen_frame + 0x38)) + ((*(int *)(gen_frame + 0x38)) >> 0x1f & 0xfU)) >> 4;
    if ((*(int *)(gen_frame + 0x40)) != 0) goto LAB_00d7890c;
  }
  (*(int *)(gen_frame + 0x40)) = ((int)0x80000000);
LAB_00d7890c: ;
  (*(undefined8 * PTR32 *)(gen_frame + 0x28)) = (*(undefined8 * PTR32 *)(gen_frame + 0x48));
  (*(int *)(gen_frame + 0x2c)) = iVar4;
  (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x40));
  puVar2 = (*(undefined8 * PTR32 *)(gen_frame + 0x48));
  iVar5 = iVar4;
  if (0 < iVar4) {
    do {
      iVar3 = 0;
      if (puVar2 != (undefined8 *)0x0) {
        F_00d76cc0(puVar2);
        iVar3 = ((int)(uint)(puVar2));
      }
      iVar5 = iVar5 + -1;
      puVar2 = (undefined8 *)(iVar3 + 0x10);
    } while (iVar5 != 0);
  }
  iVar5 = 0;
  puVar2 = (*(undefined8 * PTR32 *)(gen_frame + 0x44));
  if (0 < iVar6) {
    do {
      puVar1 = ((undefined8 *)GEN_TOP((*(int *)(param_3[3] + iVar5 * 4) * 0x10 + *param_3)));
      iVar5 = iVar5 + 1;
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      this = (*(undefined * PTR32 *)(gen_frame + 0x34));
      puVar2 = puVar2 + 2;
    } while (iVar5 < iVar6);
  }
  iVar6 = 0;
  puVar2 = (*(undefined8 * PTR32 *)(gen_frame + 0x48));
  if (0 < iVar4) {
    do {
      puVar1 = ((undefined8 *)GEN_TOP((*(int *)(param_3[6] + iVar6 * 4) * 0x10 + *param_3)));
      iVar6 = iVar6 + 1;
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      this = (*(undefined * PTR32 *)(gen_frame + 0x34));
      puVar2 = puVar2 + 2;
    } while (iVar6 < iVar4);
  }
  F_00d76bb0(((undefined1 *)(gen_frame + 0xc)),this);
  F_00d777f0(((undefined1 *)(gen_frame + 0xc)),param_1,param_2,&(*(undefined8 * PTR32 *)(gen_frame + 0x1c)),&(*(undefined8 * PTR32 *)(gen_frame + 0x28)));
  if (-1 < (*(int *)(gen_frame + 0x40))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined8 * PTR32 *)(gen_frame + 0x48)),(*(int *)(gen_frame + 0x40)) << 4);
  }
  if (-1 < (*(int *)(gen_frame + 0x3c))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined8 * PTR32 *)(gen_frame + 0x44)),(*(int *)(gen_frame + 0x3c)) << 4);
  }
  return (uint)this;
}

/* ref: FUN_00d78a30 */
uint F_00d78a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd78a30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  F_00d739c0((*(undefined * PTR32 *)&gen_args[0]),*(undefined4 *)((*(int *)&gen_args[1]) + 0xc));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[19])REFP(0x1135b5c));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0x80000000;
  F_00d76bb0(((undefined1 *)(gen_frame + 0xc)),(*(undefined * PTR32 *)&gen_args[0]));
  F_00d777f0(((undefined1 *)(gen_frame + 0xc)),(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[6]));
  (*(undefined4 *)&gen_args[4]) = 0;
  if (-1 < (*(int *)&gen_args[5])) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)&gen_args[3]),(*(int *)&gen_args[5]) << 4);
  }
  (*(undefined4 *)&gen_args[3]) = 0;
  (*(int *)&gen_args[5]) = 0x80000000;
  (*(undefined4 *)&gen_args[7]) = 0;
  if (-1 < (*(int *)&gen_args[8])) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)&gen_args[6]),(*(int *)&gen_args[8]) << 4);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d78ae0 */
uint F_00d78ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xd78ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1135b5c));
  *(undefined4 *)((int)this + 0x2c) = 0;
  if (-1 < (int)*(uint *)((int)this + 0x30)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x28),
               *(uint *)((int)this + 0x30) & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  uVar1 = F_00d3e6d0(this);
  return uVar1;
}

/* ref: FUN_00d78b30 */
uint F_00d78b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78b30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00d78b40 */
uint F_00d78b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78b40u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00d78bb0 */
uint F_00d78bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78bb0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00d78c00 */
uint F_00d78c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78c00u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *in_ecx;
}

/* ref: FUN_00d78c50 */
uint F_00d78c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78c50u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00d78cb0 */
uint F_00d78cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78cb0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d78cd0 */
uint F_00d78cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78cd0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00d78cf0 */
unsigned int F_00d78cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return 0;
}

/* ref: FUN_00d78d40 */
uint F_00d78d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd78d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d78d60 */
uint F_00d78d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78d60u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d78da0 */
unsigned int F_00d78da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78da0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  if (0 < param_2) {
    do {
      iVar1 = 0;
      if (param_1 != 0) {
        F_00d76cc0(param_1);
        iVar1 = ((int)(uint)(param_1));
      }
      param_1 = iVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}

/* ref: FUN_00d78de0 */
uint F_00d78de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78de0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d78e80 */
uint F_00d78e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd78e80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d78ea0 */
uint F_00d78ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78ea0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d78f00 */
uint F_00d78f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd78f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00d78f20 */
uint F_00d78f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78f20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d78f30 */
uint F_00d78f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd78f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00d78f50 */
uint F_00d78f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78f50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d78f60 */
uint F_00d78f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd78f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 5);
  return uVar1;
}

/* ref: FUN_00d78f80 */
uint F_00d78f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78f80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d78f90 */
uint F_00d78f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd78f90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00d78fb0 */
uint F_00d78fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78fb0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d78fc0 */
uint F_00d78fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd78fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d78fe0 */
uint F_00d78fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78fe0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d79000 */
uint F_00d79000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00d79110 */
uint F_00d79110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd79110u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint in_ecx;
  int iVar1;
  int iVar2;
  
  iVar2 = (*(int *)&gen_args[1]);
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0x80000000;
  if ((*(int *)&gen_args[1]) == 0) {
    in_ecx = 0;
  }
  else {
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) << 4;
    in_ecx = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]));
    iVar1 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
    if (iVar1 != 0) goto LAB_00d79165;
  }
  iVar1 = ((int)0x80000000);
LAB_00d79165: ;
  *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = in_ecx;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar2;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar1;
  if (0 < iVar2) {
    do {
      iVar1 = 0;
      if (in_ecx != 0) {
        F_00d76cc0(in_ecx);
        iVar1 = ((int)(uint)(in_ecx));
      }
      in_ecx = iVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d79190 */
uint F_00d79190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79190u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d791d0 */
uint F_00d791d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd791d0u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00d79210 */
uint F_00d79210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79210u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
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
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]));
    if ((*(int *)&gen_args[1]) != 0) goto LAB_00d79255;
  }
  (*(int *)&gen_args[1]) = ((int)0x80000000);
LAB_00d79255: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (*(int *)&gen_args[1]);
  iVar3 = 0;
  *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar1;
  if (0 < iVar1) {
    do {
      *(undefined1 *)(iVar3 + uVar2) = *(*(undefined1 * PTR32 *)&gen_args[2]);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d79280 */
uint F_00d79280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd79280u, gen_a0, gen_a1, 0u, 0u);
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
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) * 8;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]));
    iVar3 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 7U)) >> 3;
    if (iVar3 != 0) goto LAB_00d792d8;
  }
  iVar3 = ((int)0x80000000);
LAB_00d792d8: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar1;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar3;
  *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d792f0 */
unsigned int F_00d792f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd792f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  if (0 < param_2) {
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}

/* ref: FUN_00d79320 */
unsigned int F_00d79320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79320u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d79350 */
unsigned int F_00d79350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  if (0 < param_2) {
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
        param_1[2] = param_3[2];
        param_1[3] = param_3[3];
      }
      param_1 = param_1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}

/* ref: FUN_00d793a0 */
unsigned int F_00d793a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd793a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  if (0 < param_2) {
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = *param_3;
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
      }
      param_1 = (undefined8 *)((int)param_1 + 0xc);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}

/* ref: FUN_00d793d0 */
unsigned int F_00d793d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd793d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (0 < param_2) {
    do {
      if (param_1 != (undefined4 *)0x0) {
        *param_1 = *param_3;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}

/* ref: FUN_00d79460 */
uint F_00d79460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd79460u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,1);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00d794a0 */
uint F_00d794a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd794a0u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00d794e0 */
uint F_00d794e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd794e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined8 * puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (*(int *)&gen_args[1]);
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0x80000000;
  if ((*(int *)&gen_args[1]) == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) << 4;
    puVar1 = ((undefined8 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]))))
    ;
    iVar2 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
    if (iVar2 != 0) goto LAB_00d79535;
  }
  iVar2 = ((int)0x80000000);
LAB_00d79535: ;
  *(undefined8 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = puVar1;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar3;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar2;
  if (0 < iVar3) {
    do {
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *(*(undefined8 * PTR32 *)&gen_args[2]);
        puVar1[1] = (*(undefined8 * PTR32 *)&gen_args[2])[1];
      }
      puVar1 = puVar1 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d79570 */
unsigned int F_00d79570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79570u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d795c0 */
unsigned int F_00d795c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd795c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x20);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x20 + *(int *)this)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00d79620 */
unsigned int F_00d79620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79620u, gen_a0, gen_a1, gen_a2, 0u);
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
  return 0;
}

/* ref: FUN_00d79670 */
unsigned int F_00d79670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79670u, gen_a0, gen_a1, gen_a2, 0u);
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
  return 0;
}

/* ref: FUN_00d796b0 */
uint F_00d796b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd796b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d796f0 */
uint F_00d796f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd796f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d79730 */
uint F_00d79730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd79730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d79770 */
uint F_00d79770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd79770u, gen_a0, gen_a1, 0u, 0u);
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

