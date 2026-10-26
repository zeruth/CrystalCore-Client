#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00daefb0 */
uint F_00daefb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaefb0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00daefc0 */
uint F_00daefc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaefc0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00daf020 */
uint F_00daf020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf020u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00daf040 */
uint F_00daf040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf040u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00daf080 */
uint F_00daf080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf080u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x24;
}

/* ref: FUN_00daf0a0 */
uint F_00daf0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf0a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x24;
}

/* ref: FUN_00daf0d0 */
uint F_00daf0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf0d0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00daf0f0 */
uint F_00daf0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf0f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00daf150 */
uint F_00daf150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf150u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x70 + *in_ecx;
}

/* ref: FUN_00daf160 */
uint F_00daf160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf160u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x70 + *in_ecx;
}

/* ref: FUN_00daf1b0 */
uint F_00daf1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf1b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00daf1f0 */
uint F_00daf1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf1f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00daf200 */
byte F_00daf200(unsigned int gen_a0)
{
  GEN_ENTER(0xdaf200u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 != -1;
}

/* ref: FUN_00daf210 */
uint F_00daf210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdaf210u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00daf240 */
uint F_00daf240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf240u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00daf290 */
unsigned int F_00daf290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf290u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00daf2e0 */
uint F_00daf2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdaf2e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00daf320 */
uint F_00daf320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf320u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,0xc);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00daf390 */
unsigned int F_00daf390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf390u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00daf3c0 */
unsigned int F_00daf3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdaf3c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int local_14;
  
  do {
    local_14 = param_2;
    uVar2 = *((undefined4 *)GEN_TOP((param_1 + (param_2 + param_3 >> 1) * 4)));
    iVar6 = param_3;
    do {
      uVar5 = (*param_4)(*(undefined4 *)(param_1 + local_14 * 4),uVar2);
      cVar4 = (char)uVar5;
      while (cVar4 != '\0') {
        iVar1 = local_14 * 4;
        local_14 = local_14 + 1;
        uVar5 = (*param_4)(*(undefined4 *)(param_1 + 4 + iVar1),uVar2);
        cVar4 = (char)uVar5;
      }
      uVar5 = (*param_4)(uVar2,*(undefined4 *)(param_1 + iVar6 * 4));
      cVar4 = (char)uVar5;
      while (cVar4 != '\0') {
        iVar1 = iVar6 * 4;
        iVar6 = iVar6 + -1;
        uVar5 = (*param_4)(uVar2,*(undefined4 *)(param_1 + -4 + iVar1));
        cVar4 = (char)uVar5;
      }
      if (iVar6 < local_14) break;
      if (iVar6 != local_14) {
        uVar3 = *(undefined4 *)(param_1 + iVar6 * 4);
        *(undefined4 *)(param_1 + iVar6 * 4) = *(undefined4 *)(param_1 + local_14 * 4);
        *(undefined4 *)(param_1 + local_14 * 4) = uVar3;
      }
      local_14 = local_14 + 1;
      iVar6 = iVar6 + -1;
    } while (local_14 <= iVar6);
    if (param_2 < iVar6) {
      F_00daf3c0(param_1,param_2,iVar6,param_4);
    }
    param_2 = local_14;
    if (param_3 <= local_14) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00daf4e0 */
uint F_00daf4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdaf4e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00daf500 */
uint F_00daf500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf500u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00daf540 */
unsigned int F_00daf540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf540u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (3 < param_2) {
    iVar2 = (param_2 - 4U >> 2) + 1;
    iVar3 = iVar2 * 4;
    puVar1 = (undefined8 *)(param_1 + 0x10);
    do {
      iVar2 = iVar2 + -1;
      puVar1[-2] = *param_3;
      puVar1[-1] = *param_3;
      *puVar1 = *param_3;
      puVar1[1] = *param_3;
      puVar1 = puVar1 + 4;
    } while (iVar2 != 0);
  }
  while (iVar3 < param_2) {
    iVar3 = iVar3 + 1;
    *(undefined8 *)(param_1 + -8 + iVar3 * 8) = *param_3;
  }
  return 0;
}

/* ref: FUN_00daf5a0 */
uint F_00daf5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_00d914e0(this,param_1);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00daf5c0 */
uint F_00daf5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf5c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00daf5d0 */
uint F_00daf5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf5d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00daf600 */
uint F_00daf600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00daf660 */
uint F_00daf660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00daf680 */
uint F_00daf680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf680u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00daf6a0 */
uint F_00daf6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf6a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0x70);
  return uVar1;
}

/* ref: FUN_00daf6c0 */
uint F_00daf6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00daf6f0 */
uint F_00daf6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf6f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00daf730 */
uint F_00daf730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0x24);
  return uVar1;
}

/* ref: FUN_00daf750 */
uint F_00daf750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00d91480(this,param_1);
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00daf770 */
uint F_00daf770(unsigned int gen_a0)
{
  GEN_ENTER(0xdaf770u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00daf790 */
unsigned int F_00daf790(unsigned int gen_a0)
{
  GEN_ENTER(0xdaf790u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x70);
  }
  return 0;
}

/* ref: FUN_00daf7c0 */
uint F_00daf7c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdaf7c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x30) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x30),param_1);
  return uVar2;
}

/* ref: FUN_00daf7e0 */
unsigned int F_00daf7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xdaf7e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x30) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x30),param_1,0x88);
  }
  return 0;
}

/* ref: FUN_00daf820 */
uint F_00daf820(unsigned int gen_a0, double gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf820u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), gen_a2);
  int param_1 = (int)gen_a0;
  double param_2 = (double)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint * puVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(param_1 + 0x4c);
  iVar7 = 0;
  if (2 < iVar6) {
    iVar4 = 0;
    do {
      iVar3 = iVar6 + iVar4 >> 1;
      iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x48) + iVar3 * 4)));
      iVar7 = iVar4;
      if (*(int *)(iVar1 + 0x6c) == 2) break;
      iVar7 = iVar3;
      if (param_2 < *(double *)(iVar1 + 0x58)) {
        iVar7 = iVar4;
        iVar6 = iVar3;
      }
      iVar4 = iVar7;
    } while (2 < iVar6 - iVar7);
  }
  if (iVar7 < iVar6) {
    puVar5 = ((uint *)GEN_TOP((*(int *)(param_1 + 0x48) + iVar7 * 4)));
    while ((uVar2 = *puVar5, *(int *)(uVar2 + 0x6c) == 2 ||
           (!(param_2 <= (double)*(float *)(uVar2 + param_3 * 4) + *(double *)(uVar2 + 0x58))))) {
      iVar7 = iVar7 + 1;
      puVar5 = puVar5 + 1;
      if (iVar6 <= iVar7) {
        return 0;
      }
    }
    if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(double *)(uVar2 + 0x58))) && !(param_2 < *(double *)(uVar2 + 0x58))
       ) {
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00daf960 */
uint F_00daf960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf960u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a8),this,iVar3,1);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00daf9a0 */
uint F_00daf9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf9a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dafa10 */
uint F_00dafa10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdafa10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dafa30 */
uint F_00dafa30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdafa30u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00dafa50 */
uint F_00dafa50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdafa50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  if (param_1 != 0) {
    F_00dbe450(this,&REFG(undefined * PTR32, 0x13516ac),param_1);
  }
  return (uint)this;
}

/* ref: FUN_00dafaa0 */
uint F_00dafaa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdafaa0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00dafae0 */
uint F_00dafae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdafae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < param_2) {
    bVar1 = F_00d95690(param_1,this,param_2,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dafb10 */
uint F_00dafb10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdafb10u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00dafb50 */
uint F_00dafb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdafb50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(int *)(in_ecx + 4) = *(int *)(in_ecx + 4) - param_2;
  return param_2;
}

/* ref: FUN_00dafb60 */
uint F_00dafb60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdafb60u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00dafba0 */
uint F_00dafba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdafba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = param_1 + iVar1;
  return *(int *)this + iVar1;
}

/* ref: FUN_00dafbe0 */
unsigned int F_00dafbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdafbe0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dafc10 */
uint F_00dafc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdafc10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(int *)(in_ecx + 4) = *(int *)(in_ecx + 4) - param_2;
  return param_2;
}

/* ref: FUN_00dafc20 */
uint F_00dafc20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdafc20u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,0xc);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00dafc60 */
uint F_00dafc60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdafc60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dafc80 */
uint F_00dafc80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdafc80u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00dafcc0 */
unsigned int F_00dafcc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdafcc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (1 < param_2) {
    F_00daf3c0(param_1,0,param_2 + -1,param_3);
  }
  return 0;
}

/* ref: FUN_00dafcf0 */
uint F_00dafcf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdafcf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined8 * puVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)(param_1 * 8);
    param_1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    iVar3 = (int)(((int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 0x1f & 7U) + (int)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 3;
    if (iVar3 != 0) goto LAB_00dafd4d;
  }
  iVar3 = ((int)0x80000000);
LAB_00dafd4d: ;
  iVar4 = 0;
  *(int *)((int)this + 8) = iVar3;
  *(uint *)this = param_1;
  *(int *)((int)this + 4) = iVar1;
  if (3 < iVar1) {
    iVar3 = (iVar1 - 4U >> 2) + 1;
    iVar4 = iVar3 * 4;
    puVar2 = (undefined8 *)(param_1 + 0x10);
    do {
      iVar3 = iVar3 + -1;
      puVar2[-2] = *param_2;
      puVar2[-1] = *param_2;
      *puVar2 = *param_2;
      puVar2[1] = *param_2;
      puVar2 = puVar2 + 4;
    } while (iVar3 != 0);
  }
  while (iVar4 < iVar1) {
    iVar4 = iVar4 + 1;
    *((undefined8 *)GEN_TOP(((param_1 - 8) + iVar4 * 8))) = *param_2;
  }
  return (uint)this;
}

/* ref: FUN_00dafdb0 */
uint F_00dafdb0(unsigned int gen_a0)
{
  GEN_ENTER(0xdafdb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d92460(*(undefined4 *)((int)pvVar1 + 0x2c),param_1 * 4);
  return uVar2;
}

/* ref: FUN_00dafde0 */
uint F_00dafde0(unsigned int gen_a0)
{
  GEN_ENTER(0xdafde0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d924b0(*(undefined4 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00dafe10 */
uint F_00dafe10(unsigned int gen_a0)
{
  GEN_ENTER(0xdafe10u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00dafe50 */
uint F_00dafe50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdafe50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dafea0 */
uint F_00dafea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdafea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00dafec0 */
uint F_00dafec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdafec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00dafee0 */
unsigned int F_00dafee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdafee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_1;
  iVar1 = param_2;
  if (0 < param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00d914e0(this,param_3);
        *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_3 + 4);
      }
      this = (undefined *)((int)this + 8);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00daff10 */
uint F_00daff10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaff10u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00daff50 */
uint F_00daff50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaff50u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,0xc);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00daff90 */
unsigned int F_00daff90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaff90u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  this = param_1;
  iVar1 = param_2;
  if (0 < param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00da9f50(this);
      }
      this = (undefined *)((int)this + 0x24);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00daffc0 */
uint F_00daffc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaffc0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00db0000 */
unsigned int F_00db0000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb0000u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00db0030 */
uint F_00db0030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb0030u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,0x70);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00db0090 */
unsigned int F_00db0090(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0090u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00db00f0 */
uint F_00db00f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb00f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00db0130 */
uint F_00db0130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < param_1) {
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,param_1,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00db0160 */
uint F_00db0160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0160u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00db01a0 */
uint F_00db01a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb01a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a8),this,1);
  }
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4))));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00db01e0 */
uint F_00db01e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb01e0u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a8),this,iVar3,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00db0220 */
uint F_00db0220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0220u, gen_a0, gen_a1, 0u, 0u);
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
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00db0260 */
uint F_00db0260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0260u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00db02e0 */
unsigned int F_00db02e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb02e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00db0310 */
uint F_00db0310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb0310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  uVar1 = *(uint *)this;
  this_00 = ((undefined *)GEN_TOP((uVar1 + *(int *)((int)this + 4) * 8)));
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00d914e0(this_00,param_2);
    *(undefined4 *)((int)this_00 + 4) = *(undefined4 *)(param_2 + 4);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar1;
}

/* ref: FUN_00db0360 */
uint F_00db0360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x24);
  }
  this_00 = ((undefined *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0x24)));
  if (this_00 != (undefined *)0x0) {
    F_00da9f50(this_00);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 0x24;
}

/* ref: FUN_00db03b0 */
uint F_00db03b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb03b0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00db0400 */
uint F_00db0400(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0400u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00db0440 */
uint F_00db0440(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a8),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0480 */
uint F_00db0480(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0480u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00db04c0 */
unsigned int F_00db04c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb04c0u, gen_a0, gen_a1, 0u, 0u);
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
        puVar1[1] = 0;
        puVar1[2] = 0x80000000;
      }
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00db04f0 */
uint F_00db04f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb04f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00db0530 */
uint F_00db0530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0530u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00db0570 */
uint F_00db0570(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * puVar1;
  
  *((undefined1 *)GEN_TOP((*(int *)this + -1 + *(int *)((int)this + 4)))) = 0x20;
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a8),this,1);
  }
  *((undefined1 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4)))) = 0x20;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a8),this,1);
  }
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4))));
  *puVar1 = 0;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00db05e0 */
uint F_00db05e0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb05e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * puVar1;
  
  if ((*(uint *)((int)this + 8) & 0x3fffffff) == 0) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516a8),this,1,1);
  }
  puVar1 = *(undefined1 * PTR32 *)this;
  *(undefined4 *)((int)this + 4) = 1;
  *puVar1 = 0;
  return (uint)puVar1;
}

/* ref: FUN_00db0620 */
uint F_00db0620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if (*(uint *)((int)this + 4) == uVar1) {
    uVar1 = F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  this_00 = ((undefined *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  if (this_00 != (undefined *)0x0) {
    F_00d914e0(this_00,param_1);
    uVar1 = *(uint *)(param_1 + 4);
    *(uint *)((int)this_00 + 4) = uVar1;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar1;
}

/* ref: FUN_00db0670 */
uint F_00db0670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0670u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00db06c0 */
uint F_00db06c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb06c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00db0700 */
uint F_00db0700(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a8),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0740 */
uint F_00db0740(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0740u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00db0780 */
uint F_00db0780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(int *)this = (int)this + 0xc;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0x80000010;
  return (uint)this;
}

/* ref: FUN_00db07a0 */
uint F_00db07a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb07a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(int *)this = (int)this + 0xc;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0x80000006;
  return (uint)this;
}

/* ref: FUN_00db07c0 */
uint F_00db07c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb07c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00db0800 */
uint F_00db0800(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0800u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00db0840 */
unsigned int F_00db0840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0840u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  iVar1 = param_2 + -1;
  if (-1 < iVar1) {
    this = (undefined *)(param_1 + iVar1 * 0x24);
    do {
      F_00d91510(this);
      this = (undefined *)((int)this + -0x24);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: FUN_00db0890 */
uint F_00db0890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00daae40(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0x70);
  }
  return (uint)this;
}

/* ref: FUN_00db08d0 */
uint F_00db08d0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb08d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  F_00d95690(&REFG(undefined * PTR32, 0x13516a8),this,0x40,1);
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a8),this,1);
  }
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + *(int *)this))) = 0;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)this;
}

/* ref: FUN_00db0930 */
uint F_00db0930(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a8),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0970 */
uint F_00db0970(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0970u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00db09b0 */
uint F_00db09b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb09b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00db0a20 */
uint F_00db0a20(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0a20u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00db0ab0 */
uint F_00db0ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0ab0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00db0af0 */
uint F_00db0af0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(uVar1 + iVar2 * 0x24);
    do {
      uVar1 = F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -0x24);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00db0b20 */
uint F_00db0b20(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0b20u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00db0b60 */
uint F_00db0b60(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0b60u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00db0ba0 */
unsigned int F_00db0ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0ba0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = (undefined4 *)(param_1 + 0x50);
    iVar2 = param_2;
    do {
      if (puVar1 != (undefined4 *)0x50) {
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
      }
      puVar1 = puVar1 + 0x1c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00db0bd0 */
uint F_00db0bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 0x24);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -0x24);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))
                      (param_1,*(undefined4 *)this,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0c30 */
unsigned int F_00db0c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0c30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 + -1;
  if (-1 < iVar1) {
    this = (undefined *)(iVar1 * 0x70 + param_1);
    do {
      F_00daae40(this);
      this = (undefined *)((int)this + -0x70);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: FUN_00db0c60 */
uint F_00db0c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb0c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  
  iVar1 = *(int *)((int)this + 4);
  iVar5 = iVar1 + param_2;
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar5) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    F_00d95690(param_1,this,iVar3,0x70);
  }
  if (0 < param_2) {
    puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) * 0x70 + *(int *)this + 0x50)));
    iVar5 = param_2;
    do {
      if (puVar4 != (undefined4 *)0x50) {
        puVar4[-2] = 0;
        puVar4[-1] = 0;
        *puVar4 = 0x80000000;
      }
      puVar4 = puVar4 + 0x1c;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  return iVar1 * 0x70 + *(int *)this;
}

/* ref: FUN_00db0d10 */
uint F_00db0d10(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 0x24);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -0x24);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,
                       ((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0d70 */
uint F_00db0d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  
  iVar1 = *(int *)((int)this + 4);
  iVar5 = iVar1 + param_1;
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar5) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a8),this,iVar3,0x70);
  }
  if (0 < param_1) {
    puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) * 0x70 + *(int *)this + 0x50)));
    iVar5 = param_1;
    do {
      if (puVar4 != (undefined4 *)0x50) {
        puVar4[-2] = 0;
        puVar4[-1] = 0;
        *puVar4 = 0x80000000;
      }
      puVar4 = puVar4 + 0x1c;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_1;
  return iVar1 * 0x70 + *(int *)this;
}

/* ref: FUN_00db0df0 */
uint F_00db0df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(iVar2 * 0x70 + *(int *)this);
    do {
      F_00daae40(this_00);
      this_00 = (undefined *)((int)this_00 + -0x70);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x70);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0e50 */
uint F_00db0e50(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 0x24);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -0x24);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,
                       ((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0f10 */
uint F_00db0f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  LPVOID pvVar2;
  undefined * this_00;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar3) {
    this_00 = (undefined *)(*(int *)this + iVar3 * 0x24);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -0x24);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar2 + 0x2c),this,0xc);
  }
  return (uint)this;
}

/* ref: FUN_00db0fa0 */
uint F_00db0fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(iVar2 * 0x70 + *(int *)this);
    do {
      F_00daae40(this_00);
      this_00 = (undefined *)((int)this_00 + -0x70);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a8),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x70);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db1000 */
unsigned int F_00db1000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1000u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  undefined * this;
  int iVar3;
  int * piVar4;
  
  iVar2 = param_2 + -1;
  if (-1 < iVar2) {
    piVar4 = (int *)(param_1 + iVar2 * 0xc);
    do {
      iVar3 = piVar4[1] + -1;
      if (-1 < iVar3) {
        this = (undefined *)(*piVar4 + iVar3 * 0x24);
        do {
          F_00d91510(this);
          this = (undefined *)((int)this + -0x24);
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      uVar1 = piVar4[2];
      piVar4[1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),*piVar4,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
      }
      iVar2 = iVar2 + -1;
      *piVar4 = 0;
      piVar4[2] = ((int)0x80000000);
      piVar4 = piVar4 + -3;
    } while (-1 < iVar2);
  }
  return 0;
}

/* ref: FUN_00db1090 */
unsigned int F_00db1090(unsigned int gen_a0)
{
  GEN_ENTER(0xdb1090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  int iVar3;
  int * piVar4;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (iVar2 < 0) {
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  piVar4 = (int *)(*(int *)this + iVar2 * 0xc);
  do {
    iVar3 = piVar4[1] + -1;
    if (-1 < iVar3) {
      this_00 = (undefined *)(*piVar4 + iVar3 * 0x24);
      do {
        F_00d91510(this_00);
        this_00 = (undefined *)((int)this_00 + -0x24);
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
    }
    uVar1 = piVar4[2];
    piVar4[1] = 0;
    if (-1 < (int)uVar1) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*piVar4,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
    }
    iVar2 = iVar2 + -1;
    *piVar4 = 0;
    piVar4[2] = ((int)0x80000000);
    piVar4 = piVar4 + -3;
  } while (-1 < iVar2);
  *(undefined4 *)((int)this + 4) = 0;
  return 0;
}

/* ref: FUN_00db1170 */
uint F_00db1170(unsigned int gen_a0)
{
  GEN_ENTER(0xdb1170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0x80) + -1;
  if (-1 < iVar3) {
    pvVar2 = ((undefined *)GEN_TOP((iVar3 * 0x70 + *(int *)((int)this + 0x7c))));
    do {
      F_00daae40(pvVar2);
      pvVar2 = (undefined *)((int)pvVar2 + -0x70);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 0x84);
  *(undefined4 *)((int)this + 0x80) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a8),*(undefined4 *)((int)this + 0x7c),(uVar1 & 0x3fffffff) * 0x70);
  }
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x84) = 0x80000000;
  iVar3 = *(int *)((int)this + 0x74) + -1;
  if (-1 < iVar3) {
    pvVar2 = ((undefined *)GEN_TOP((iVar3 * 0x70 + *(int *)((int)this + 0x70))));
    do {
      F_00daae40(pvVar2);
      pvVar2 = (undefined *)((int)pvVar2 + -0x70);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 0x78);
  *(undefined4 *)((int)this + 0x74) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a8),*(undefined4 *)((int)this + 0x70),(uVar1 & 0x3fffffff) * 0x70);
  }
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x78) = 0x80000000;
  uVar1 = F_00daae40(this);
  return uVar1;
}

/* ref: FUN_00db1230 */
unsigned int F_00db1230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb1230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * this_00;
  int iVar4;
  int * piVar5;
  
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,0xc);
  }
  iVar3 = (*(int *)((int)this + 4) - param_2) + -1;
  if (-1 < iVar3) {
    piVar5 = (int *)(*(int *)this + param_2 * 0xc + iVar3 * 0xc);
    do {
      iVar4 = piVar5[1] + -1;
      if (-1 < iVar4) {
        this_00 = (undefined *)(*piVar5 + iVar4 * 0x24);
        do {
          F_00d91510(this_00);
          this_00 = (undefined *)((int)this_00 + -0x24);
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
      }
      uVar1 = piVar5[2];
      piVar5[1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),*piVar5,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
      }
      iVar3 = iVar3 + -1;
      *piVar5 = 0;
      piVar5[2] = ((int)0x80000000);
      piVar5 = piVar5 + -3;
    } while (-1 < iVar3);
  }
  iVar3 = param_2 - *(int *)((int)this + 4);
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0xc)));
  if (0 < iVar3) {
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0x80000000;
      }
      puVar2 = puVar2 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(int *)((int)this + 4) = param_2;
  return 0;
}

/* ref: FUN_00db1330 */
uint F_00db1330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  int iVar3;
  int * piVar4;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    piVar4 = (int *)(*(int *)this + iVar2 * 0xc);
    do {
      iVar3 = piVar4[1] + -1;
      if (-1 < iVar3) {
        this_00 = (undefined *)(*piVar4 + iVar3 * 0x24);
        do {
          F_00d91510(this_00);
          this_00 = (undefined *)((int)this_00 + -0x24);
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      uVar1 = piVar4[2];
      piVar4[1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),*piVar4,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
      }
      iVar2 = iVar2 + -1;
      *piVar4 = 0;
      piVar4[2] = ((int)0x80000000);
      piVar4 = piVar4 + -3;
    } while (-1 < iVar2);
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

/* ref: FUN_00db1400 */
uint F_00db1400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00db1170(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x30) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x30),this,0x88);
  }
  return (uint)this;
}

/* ref: FUN_00db1440 */
uint F_00db1440(unsigned int gen_a0)
{
  GEN_ENTER(0xdb1440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  int iVar3;
  int * piVar4;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    piVar4 = (int *)(*(int *)this + iVar2 * 0xc);
    do {
      iVar3 = piVar4[1] + -1;
      if (-1 < iVar3) {
        this_00 = (undefined *)(*piVar4 + iVar3 * 0x24);
        do {
          F_00d91510(this_00);
          this_00 = (undefined *)((int)this_00 + -0x24);
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      uVar1 = piVar4[2];
      piVar4[1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),*piVar4,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
      }
      iVar2 = iVar2 + -1;
      *piVar4 = 0;
      piVar4[2] = ((int)0x80000000);
      piVar4 = piVar4 + -3;
    } while (-1 < iVar2);
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

/* ref: FUN_00db1510 */
uint F_00db1510(unsigned int gen_a0)
{
  GEN_ENTER(0xdb1510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  int iVar3;
  int * piVar4;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    piVar4 = (int *)(*(int *)this + iVar2 * 0xc);
    do {
      iVar3 = piVar4[1] + -1;
      if (-1 < iVar3) {
        this_00 = (undefined *)(*piVar4 + iVar3 * 0x24);
        do {
          F_00d91510(this_00);
          this_00 = (undefined *)((int)this_00 + -0x24);
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      uVar1 = piVar4[2];
      piVar4[1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),*piVar4,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
      }
      iVar2 = iVar2 + -1;
      *piVar4 = 0;
      piVar4[2] = ((int)0x80000000);
      piVar4 = piVar4 + -3;
    } while (-1 < iVar2);
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

/* ref: FUN_00db15f0 */
ushort F_00db15f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb15f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 4) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00db1640 */
uint F_00db1640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1640u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00db1650 */
uint F_00db1650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1650u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00db1680 */
unsigned int F_00db1680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1680u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 2;
  puVar1 = param_1;
  do {
    *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_00db16a0 */
uint F_00db16a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb16a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00db16c0 */
uint F_00db16c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb16c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00db16e0 */
unsigned int F_00db16e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb16e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00db1740 */
uint F_00db1740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb1740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  undefined4 * puVar1;
  int iVar2;
  undefined * pvVar3;
  uint uVar4;
  char * pcVar5;
  
  iVar2 = *(int *)((int)this + 0xc);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + iVar2 * 8)));
    if (*((short *)GEN_TOP((*(int *)((int)this + 8) + 4 + iVar2 * 8))) == (short)param_1) {
      if (param_2 != (undefined *)0x0) {
        F_00d919e0(param_2);
      }
      pvVar3 = (undefined *)*puVar1;
      if (pvVar3 != (undefined *)0x0) {
        F_00d91a80(pvVar3);
      }
      *puVar1 = param_2;
    }
  }
  F_00da0a80(((undefined1 *)(gen_frame + 0x200)),((undefined1 *)(gen_frame + 0x0)),0x200);
  pcVar5 = " among the existing properties!";
  pvVar3 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x200)),"Failed to locate key ");
  pvVar3 = (undefined *)F_00d9fef0(pvVar3,param_1);
  F_00d9fe80(pvVar3,pcVar5);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78),1,0x1d11daed,((undefined1 *)(gen_frame + 0x0)),"Types\\Properties\\hkRefCountedProperties.cpp",
             0x54);
  uVar4 = F_00d9fda0(((undefined1 *)(gen_frame + 0x200)));
  return uVar4;
}

/* ref: FUN_00db17f0 */
uint F_00db17f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb17f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  short * psVar2;
  
  iVar1 = *(int *)((int)this + 0xc) + -1;
  if (-1 < iVar1) {
    psVar2 = ((short *)GEN_TOP((*(int *)((int)this + 8) + 4 + iVar1 * 8)));
    do {
      if (*psVar2 == (short)param_1) {
        return *((uint *)GEN_TOP((*(int *)((int)this + 8) + iVar1 * 8)));
      }
      psVar2 = psVar2 + -4;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: FUN_00db1820 */
uint F_00db1820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb1820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * this_00;
  uint uVar4;
  short * psVar5;
  int iVar6;
  
  iVar6 = *(int *)((int)this + 0xc) + -1;
  if (-1 < iVar6) {
    iVar3 = *(int *)((int)this + 8);
    psVar5 = (short *)(iVar3 + 4 + iVar6 * 8);
    do {
      if (*psVar5 == (short)param_1) {
        if (param_2 != (undefined *)0x0) {
          psVar5 = (short *)F_00d919e0(param_2);
        }
        this_00 = *(undefined * PTR32 *)(iVar3 + iVar6 * 8);
        if (this_00 != (undefined *)0x0) {
          psVar5 = (short *)F_00d91a80(this_00);
        }
        *(undefined * PTR32 *)(iVar3 + iVar6 * 8) = param_2;
        return (uint)psVar5;
      }
      psVar5 = psVar5 + -4;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  piVar1 = (int *)((int)this + 8);
  if (*(uint *)((int)this + 0xc) == (*(uint *)((int)this + 0x10) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,8);
  }
  puVar2 = ((undefined4 *)GEN_TOP((*piVar1 + *(int *)((int)this + 0xc) * 8)));
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0xffff;
  }
  puVar2 = ((undefined4 *)GEN_TOP((*piVar1 + *(int *)((int)this + 0xc) * 8)));
  uVar4 = *(int *)((int)this + 0xc) + 1;
  *(uint *)((int)this + 0xc) = uVar4;
  *(short *)(puVar2 + 1) = (short)param_1;
  if (param_2 != (undefined *)0x0) {
    uVar4 = F_00d919e0(param_2);
  }
  if ((undefined *)*puVar2 != (undefined *)0x0) {
    uVar4 = F_00d91a80((undefined *)*puVar2);
  }
  *puVar2 = param_2;
  return uVar4;
}

/* ref: FUN_00db18e0 */
unsigned int F_00db18e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb18e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  short * psVar1;
  int iVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 0xc) + -1;
  if (-1 < iVar5) {
    psVar1 = ((short *)GEN_TOP((*(int *)((int)this + 8) + 4 + iVar5 * 8)));
    while (*psVar1 != (short)param_1) {
      psVar1 = psVar1 + -4;
      iVar5 = iVar5 + -1;
      if (iVar5 < 0) {
        return 0;
      }
    }
    iVar2 = *(int *)((int)this + 8);
    iVar4 = iVar5 * 8;
    this_00 = *(undefined * PTR32 *)(iVar2 + iVar4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    *(undefined4 *)(iVar2 + iVar4) = 0;
    iVar2 = *(int *)((int)this + 0xc) + -1;
    *(int *)((int)this + 0xc) = iVar2;
    if (iVar2 != iVar5) {
      puVar3 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + iVar4)));
      iVar5 = (*(int *)((int)this + 8) + iVar2 * 8) - (int)puVar3;
      iVar4 = 2;
      do {
        *puVar3 = *(undefined4 *)(iVar5 + (int)puVar3);
        puVar3 = puVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00db19a0 */
uint F_00db19a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb19a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x113ce48));
  return (uint)in_ecx;
}

/* ref: FUN_00db19b0 */
uint F_00db19b0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb19b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113ce48));
  iVar3 = *(int *)((int)this + 0xc) + -1;
  iVar1 = *(int *)((int)this + 8);
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 8);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 8 + iVar3 * 8) = 0;
  }
  uVar2 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar2 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: FUN_00db1a60 */
unsigned int F_00db1a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1a60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *(undefined2 *)(puVar1 + 1) = 0xffff;
        *puVar1 = 0;
        *(undefined2 *)((int)puVar1 + 6) = 0;
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00db1aa0 */
uint F_00db1aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1aa0u, gen_a0, gen_a1, 0u, 0u);
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
    puVar1[1] = 0xffff;
  }
  iVar2 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar2 + 1;
  return *(int *)this + iVar2 * 8;
}

/* ref: FUN_00db1af0 */
uint F_00db1af0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb1af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0xffff;
  }
  iVar2 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar2 + 1;
  return *(int *)this + iVar2 * 8;
}

/* ref: FUN_00db1b40 */
unsigned int F_00db1b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1b40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 + -1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 8);
    if (this != (undefined *)0x0) {
      F_00d91a80(this);
    }
    iVar1 = iVar1 + -1;
    *(undefined4 *)(param_1 + 8 + iVar1 * 8) = 0;
  }
  return 0;
}

/* ref: FUN_00db1bb0 */
unsigned int F_00db1bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)this;
  iVar3 = param_1 * 8;
  this_00 = *(undefined * PTR32 *)(iVar2 + iVar3);
  if (this_00 != (undefined *)0x0) {
    F_00d91a80(this_00);
  }
  *(undefined4 *)(iVar2 + iVar3) = 0;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  if (*(int *)((int)this + 4) != param_1) {
    puVar1 = (undefined4 *)(*(int *)this + iVar3);
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

/* ref: FUN_00db1c10 */
uint F_00db1c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 8);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 8 + iVar3 * 8) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar2 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00db1c80 */
uint F_00db1c80(unsigned int gen_a0)
{
  GEN_ENTER(0xdb1c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 8);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 8 + iVar3 * 8) = 0;
  }
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

/* ref: FUN_00db1cf0 */
uint F_00db1cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb1cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 8);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 8 + iVar3 * 8) = 0;
  }
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

/* ref: FUN_00db1d60 */
uint F_00db1d60(unsigned int gen_a0)
{
  GEN_ENTER(0xdb1d60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkRefCountedProperties::vf0 */
uint F_00db1d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00db19b0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00db1e00 */
uint F_00db1e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1e00u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00db1e10 */
uint F_00db1e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1e10u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00db1e50 */
uint F_00db1e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb1e50u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00db1e90 */
unsigned int F_00db1e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb1e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined8 * puVar1;
  int iVar2;
  
  if (0 < param_3) {
    puVar1 = param_1;
    iVar2 = param_3;
    do {
      *puVar1 = *((undefined8 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
      puVar1[1] = *((undefined8 *)GEN_TOP(((param_2 - (int)param_1) + 8 + (int)puVar1)));
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00db1ed0 */
unsigned int F_00db1ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb1ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined8 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      *puVar1 = *((undefined8 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar1)));
      puVar1[1] = *((undefined8 *)GEN_TOP(((param_3 - (int)param_1) + 8 + (int)puVar1)));
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00db1f10 */
uint F_00db1f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1f10u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00db1f50 */
uint F_00db1f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint * puVar4;
  uint in_EDX = 0;
  int iVar5;
  float * pfVar6;
  
  uVar1 = *(uint *)((int)this + 4);
  uVar3 = 0;
  if (uVar1 != 0) {
    pfVar6 = *(float * PTR32 *)this;
    do {
      (*(undefined4 *)((char *)&auVar2 + 4)) = -(uint)GEN_ISNAN(pfVar6[1]);
      (*(undefined4 *)((char *)&auVar2 + 0)) = -(uint)GEN_ISNAN(*pfVar6);
      (*(undefined4 *)((char *)&auVar2 + 8)) = -(uint)GEN_ISNAN(pfVar6[2]);
      (*(undefined4 *)((char *)&auVar2 + 12)) = -(uint)GEN_ISNAN(pfVar6[3]);
      in_EDX = gen_movmskps(&(auVar2));
      if ((in_EDX & 7) != 0) goto LAB_00db1fa8;
      uVar3 = uVar3 + 1;
      pfVar6 = pfVar6 + 4;
    } while (uVar3 < uVar1);
  }
  iVar5 = 0;
  if (0 < *(int *)((int)this + 0x10)) {
    puVar4 = *(uint * PTR32 *)((int)this + 0xc);
    do {
      if (((uVar1 <= *puVar4) || (uVar1 <= puVar4[1])) || (uVar1 <= puVar4[2])) {
LAB_00db1fa8: ;
        *param_1 = 0;
        return (uint)param_1;
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 4;
    } while (iVar5 < *(int *)((int)this + 0x10));
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00db1fd0 */
uint F_00db1fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1fd0u, gen_a0, gen_a1, 0u, 0u);
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
  undefined8 * puVar8;
  int iVar9;
  int iVar10;
  
  piVar5 = (*(int * PTR32 *)&gen_args[1]);
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0x80000000;
  uVar6 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if ((int)(uVar6 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[1])[1]) {
    if ((uVar6 & 0x80000000) == 0) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),uVar6 << 4);
    }
    (*(int * PTR32 *)&gen_args[1]) = (int *)(piVar5[1] << 4);
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[1]));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar6;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
  }
  iVar9 = piVar5[1];
  puVar7 = *(undefined4 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar9;
  if (0 < iVar9) {
    iVar10 = *piVar5 - (int)puVar7;
    do {
      puVar1 = (undefined4 *)(iVar10 + (int)puVar7);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar7 = *puVar1;
      puVar7[1] = uVar2;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      puVar7 = puVar7 + 4;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  uVar6 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
  if ((int)(uVar6 & 0x3fffffff) < piVar5[4]) {
    if (-1 < (int)uVar6) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),uVar6 << 4);
    }
    (*(int * PTR32 *)&gen_args[1]) = (int *)(piVar5[4] << 4);
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[1]));
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = uVar6;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
  }
  iVar9 = piVar5[4];
  puVar8 = *((undefined8 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = iVar9;
  if (0 < iVar9) {
    iVar10 = piVar5[3] - (int)puVar8;
    do {
      *puVar8 = *(undefined8 *)(iVar10 + (int)puVar8);
      puVar8[1] = *(undefined8 *)(iVar10 + 8 + (int)puVar8);
      puVar8 = puVar8 + 2;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00db2110 */
uint F_00db2110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb2110u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return in_ecx;
}

/* ref: FUN_00db2120 */
unsigned int F_00db2120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb2120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * pfVar1;
  int * piVar2;
  int iVar3;
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
  int iVar19;
  int iVar20;
  
  iVar3 = *(int *)((int)this + 4);
  F_00db2460(this,&REFG(undefined * PTR32, 0x13516ac),*param_1,param_1[1]);
  iVar20 = *(int *)((int)this + 0x10);
  F_00db2220((undefined *)((int)this + 0xc),&REFG(undefined * PTR32, 0x13516ac),param_1[3],param_1[4]);
  if (iVar3 < *(int *)((int)this + 4)) {
    iVar19 = iVar3 << 4;
    param_1 = (undefined4 *)iVar3;
    do {
      pfVar1 = (float *)(*(int *)this + iVar19);
      fVar4 = *pfVar1;
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = param_2[1];
      fVar8 = param_2[2];
      fVar9 = param_2[3];
      fVar10 = param_2[5];
      fVar11 = param_2[6];
      fVar12 = param_2[7];
      fVar13 = param_2[9];
      fVar14 = param_2[10];
      fVar15 = param_2[0xb];
      fVar16 = param_2[0xd];
      fVar17 = param_2[0xe];
      fVar18 = param_2[0xf];
      pfVar1 = (float *)(*(int *)this + iVar19);
      *pfVar1 = ((fVar4 * *param_2 + fVar5 * param_2[4]) + fVar6 * param_2[8]) + param_2[0xc];
      pfVar1[1] = ((fVar4 * fVar7 + fVar5 * fVar10) + fVar6 * fVar13) + fVar16;
      pfVar1[2] = ((fVar4 * fVar8 + fVar5 * fVar11) + fVar6 * fVar14) + fVar17;
      pfVar1[3] = ((fVar4 * fVar9 + fVar5 * fVar12) + fVar6 * fVar15) + fVar18;
      param_1 = (undefined4 *)((int)param_1 + 1);
      iVar19 = iVar19 + 0x10;
    } while ((int)param_1 < *(int *)((int)this + 4));
  }
  if (iVar20 < *(int *)((int)this + 0x10)) {
    iVar19 = iVar20 << 4;
    do {
      piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0xc) + iVar19)));
      *piVar2 = *piVar2 + iVar3;
      piVar2 = ((int *)GEN_TOP((iVar19 + 4 + *(int *)((int)this + 0xc))));
      *piVar2 = *piVar2 + iVar3;
      piVar2 = ((int *)GEN_TOP((iVar19 + 8 + *(int *)((int)this + 0xc))));
      *piVar2 = *piVar2 + iVar3;
      iVar20 = iVar20 + 1;
      iVar19 = iVar19 + 0x10;
    } while (iVar20 < *(int *)((int)this + 0x10));
  }
  return 0;
}

/* ref: FUN_00db2220 */
unsigned int F_00db2220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb2220u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  undefined8 * puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 4) + param_3;
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar1 < iVar5) {
    iVar4 = uVar1 * 2;
    if (iVar4 <= iVar5) {
      iVar4 = iVar5;
    }
    F_00d95690(param_1,this,iVar4,0x10);
  }
  puVar2 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this)));
  if (0 < param_3) {
    iVar3 = param_2 - (int)puVar2;
    iVar4 = param_3;
    do {
      *puVar2 = *(undefined8 *)(iVar3 + (int)puVar2);
      puVar2[1] = *(undefined8 *)(iVar3 + 8 + (int)puVar2);
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(int *)((int)this + 4) = iVar5;
  return 0;
}

/* ref: FUN_00db22a0 */
uint F_00db22a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb22a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * piVar1;
  uint uVar2;
  undefined8 * puVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (*(int * PTR32 *)&gen_args[2]);
  uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if ((int)(uVar2 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[2])[1]) {
    if (-1 < (int)uVar2) {
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x10))))((*(int * PTR32 *)&gen_args[1]),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),uVar2 << 4);
    }
    (*(int * PTR32 *)&gen_args[2]) = (int *)(piVar1[1] << 4);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xc))))((*(int * PTR32 *)&gen_args[1]),&(*(int * PTR32 *)&gen_args[2]));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[2]) + ((int)(*(int * PTR32 *)&gen_args[2]) >> 0x1f & 0xfU)) >> 4;
  }
  iVar5 = piVar1[1];
  puVar3 = *(undefined8 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar5;
  if (0 < iVar5) {
    iVar4 = *piVar1 - (int)puVar3;
    do {
      *puVar3 = *(undefined8 *)(iVar4 + (int)puVar3);
      puVar3[1] = *(undefined8 *)(iVar4 + 8 + (int)puVar3);
      puVar3 = puVar3 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00db2340 */
unsigned int F_00db2340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb2340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  int iVar6;
  
  if (0 < param_3) {
    puVar5 = param_1;
    iVar6 = param_3;
    do {
      puVar1 = ((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar5)));
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar5 = *puVar1;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      puVar5 = puVar5 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 0;
}

/* ref: FUN_00db2370 */
unsigned int F_00db2370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb2370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  int iVar6;
  
  if (0 < param_2) {
    puVar5 = param_1;
    iVar6 = param_2;
    do {
      puVar1 = ((undefined4 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar5)));
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar5 = *puVar1;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      puVar5 = puVar5 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 0;
}

/* ref: FUN_00db23a0 */
uint F_00db23a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb23a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  undefined8 * puVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if ((int)(uVar2 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[1])[1]) {
    if (-1 < (int)uVar2) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),uVar2 << 4);
    }
    (*(int * PTR32 *)&gen_args[1]) = (int *)(piVar1[1] << 4);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[1]));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
  }
  iVar5 = piVar1[1];
  puVar3 = *(undefined8 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar5;
  if (0 < iVar5) {
    iVar4 = *piVar1 - (int)puVar3;
    do {
      *puVar3 = *(undefined8 *)(iVar4 + (int)puVar3);
      puVar3[1] = *(undefined8 *)(iVar4 + 8 + (int)puVar3);
      puVar3 = puVar3 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00db2440 */
unsigned int F_00db2440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb2440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00db2220(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return 0;
}

/* ref: FUN_00db2460 */
unsigned int F_00db2460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb2460u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = *(int *)((int)this + 4) + param_3;
  uVar5 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar5 < iVar9) {
    iVar8 = uVar5 * 2;
    if (iVar8 <= iVar9) {
      iVar8 = iVar9;
    }
    F_00d95690(param_1,this,iVar8,0x10);
  }
  puVar6 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this)));
  if (0 < param_3) {
    iVar7 = param_2 - (int)puVar6;
    iVar8 = param_3;
    do {
      puVar1 = (undefined4 *)(iVar7 + (int)puVar6);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar6 = *puVar1;
      puVar6[1] = uVar2;
      puVar6[2] = uVar3;
      puVar6[3] = uVar4;
      puVar6 = puVar6 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  *(int *)((int)this + 4) = iVar9;
  return 0;
}

/* ref: FUN_00db24d0 */
uint F_00db24d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb24d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint uVar6;
  undefined4 * puVar7;
  int iVar8;
  int iVar9;
  
  piVar5 = (*(int * PTR32 *)&gen_args[2]);
  uVar6 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if ((int)(uVar6 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[2])[1]) {
    if (-1 < (int)uVar6) {
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x10))))((*(int * PTR32 *)&gen_args[1]),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),uVar6 << 4);
    }
    (*(int * PTR32 *)&gen_args[2]) = (int *)(piVar5[1] << 4);
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xc))))((*(int * PTR32 *)&gen_args[1]),&(*(int * PTR32 *)&gen_args[2]));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar6;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[2]) + ((int)(*(int * PTR32 *)&gen_args[2]) >> 0x1f & 0xfU)) >> 4;
  }
  iVar9 = piVar5[1];
  puVar7 = *(undefined4 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar9;
  if (0 < iVar9) {
    iVar8 = *piVar5 - (int)puVar7;
    do {
      puVar1 = (undefined4 *)(iVar8 + (int)puVar7);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar7 = *puVar1;
      puVar7[1] = uVar2;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      puVar7 = puVar7 + 4;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00db2550 */
uint F_00db2550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb2550u, gen_a0, gen_a1, 0u, 0u);
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
  int iVar8;
  int iVar9;
  
  piVar5 = (*(int * PTR32 *)&gen_args[1]);
  uVar6 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if ((int)(uVar6 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[1])[1]) {
    if (-1 < (int)uVar6) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),uVar6 << 4);
    }
    (*(int * PTR32 *)&gen_args[1]) = (int *)(piVar5[1] << 4);
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[1]));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar6;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
  }
  iVar9 = piVar5[1];
  puVar7 = *(undefined4 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar9;
  if (0 < iVar9) {
    iVar8 = *piVar5 - (int)puVar7;
    do {
      puVar1 = (undefined4 *)(iVar8 + (int)puVar7);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar7 = *puVar1;
      puVar7[1] = uVar2;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      puVar7 = puVar7 + 4;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00db25e0 */
unsigned int F_00db25e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb25e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  F_00db2220(this,&REFG(undefined * PTR32, 0x13516ac),*param_1,param_1[1]);
  return 0;
}

/* ref: FUN_00db2600 */
unsigned int F_00db2600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb2600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00db2460(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return 0;
}

/* ref: FUN_00db2620 */
unsigned int F_00db2620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb2620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  F_00db2460(this,&REFG(undefined * PTR32, 0x13516ac),*param_1,param_1[1]);
  return 0;
}

/* ref: FUN_00db2640 */
uint F_00db2640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xdb2640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = ((code *)REFG(gen_code32, 0x135271c))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00db2660 */
uint F_00db2660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb2660u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  F_00da46f0(param_2,param_1);
  F_00da45a0(param_2,0x2f,0x5c,1);
  return *param_2;
}

/* ref: FUN_00db2690 */
uint F_00db2690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb2690u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  F_00da46f0(param_2,param_1);
  F_00da45a0(param_2,0x5c,0x2f,1);
  F_00da51f0(param_2,&REFG(undefined, 0x113ce68),&REFG(undefined, 0x1080808),1);
  uVar1 = F_00da4430(param_2,&REFG(undefined, 0x113ce64));
  if (uVar1 != 0) {
    F_00da4670(param_2,2);
  }
  return *param_2;
}

/* ref: hkNativeFileSystem::vf4 */
uint F_00db26e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb26e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  LPVOID pvVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined * this_00;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x8)) = 0x80000080;
  (*(undefined4 *)(gen_frame + 0x4)) = 1;
  ((undefined1 *)(gen_frame + 0xc))[0] = 0;
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                             (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x10)));
  *(undefined2 *)((int)pvVar2 + 4) = 0x10;
  uVar3 = F_00db2660(param_1,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  pvVar2 = (undefined *)F_00dbee30(pvVar2,uVar3);
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                              (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x1c)));
  *(undefined2 *)((int)this_00 + 4) = 0x1c;
  uVar3 = F_00dba5e0(this_00,pvVar2,0x1000);
  F_00d91a80(pvVar2);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff)
    ;
  }
  return uVar3;
}

/* ref: hkNativeFileSystem::vf3 */
uint F_00db27c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb27c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  LPVOID pvVar1;
  undefined * pvVar2;
  uint uVar3;
  int * this_00;
  char * pcVar4;
  int * piVar5;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x8)) = 0x80000080;
  (*(undefined4 *)(gen_frame + 0x4)) = 1;
  ((undefined1 *)(gen_frame + 0xc))[0] = 0;
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                             (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x14)));
  *(undefined2 *)((int)pvVar2 + 4) = 0x14;
  uVar3 = F_00db2660((*(undefined4 *)&gen_args[1]),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  this_00 = (int *)F_00dbf3c0(pvVar2,uVar3);
  pcVar4 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*this_00 + 0x18))(this_00,(int)&(*(undefined4 *)&gen_args[1]) + 3)));
  piVar5 = this_00;
  if (*pcVar4 == '\0') {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                               (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x24)));
    *(undefined2 *)((int)pvVar2 + 4) = 0x24;
    piVar5 = (int *)F_00dbf270(pvVar2,this_00,0x1000);
    F_00d91a80(this_00);
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff)
    ;
  }
  return (uint)piVar5;
}

/* ref: FUN_00db28c0 */
byte F_00db28c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb28c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(byte *)(param_2 + *in_ecx);
}

/* ref: FUN_00db28d0 */
uint F_00db28d0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb28d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00db2900 */
uint F_00db2900(unsigned int gen_a0)
{
  GEN_ENTER(0xdb2900u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00db2930 */
uint F_00db2930(unsigned int gen_a0)
{
  GEN_ENTER(0xdb2930u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00db2970 */
uint F_00db2970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb2970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd970(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00db2980 */
uint F_00db2980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb2980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dbe420(this,param_1);
  return uVar1;
}

/* ref: FUN_00db29d0 */
unsigned int F_00db29d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb29d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00db29e0 */
unsigned int F_00db29e0(void)
{
  GEN_ENTER(0xdb29e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkDefaultError::vf5 */
uint F_00db2a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb2a00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd970(this + 8,param_2,0);
  *(bool *)param_1 = uVar1 == 0;
  return param_1;
}

/* ref: hkDefaultError::vf6 */
uint F_00db2a20(unsigned int gen_a0)
{
  GEN_ENTER(0xdb2a20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00dbdaf0(this + 8);
  return uVar1;
}

/* ref: hkDefaultError::vf9 */
uint F_00db2a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xdb2a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xa10];
  uint uVar1;
  undefined * pvVar2;
  
  if (param_2 == 0) {
    if (param_4 == 0) {
      F_00da0ce0(((undefined1 *)(gen_frame + 0xc)),0x800,&REFG(undefined, 0x113bdcc),param_3);
      goto LAB_00db2ac0;
    }
  }
  else if (param_2 == -1) {
    F_00da0ce0(((undefined1 *)(gen_frame + 0xc)),0x800,"%s(%d): %s: %s",param_4,param_5,param_1,param_3);
    goto LAB_00db2ac0;
  }
  F_00da0ce0(((undefined1 *)(gen_frame + 0xc)),0x800,"%s(%d): [0x%08X] %s: %s",param_4,param_5,param_2,param_1,param_3);
LAB_00db2ac0: ;
  (*(undefined1 *)(gen_frame + 0x80b)) = 0;
  uVar1 = ((code *)*(gen_code32 *)(this + 0x20))(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)(this + 0x24));
  if ((char)param_6 != '\0') {
    pvVar2 = REFG(void * PTR32, 0x15dffb0);
    if ((REFG(void * PTR32, 0x15dffb0) == (undefined *)0x0) &&
       (pvVar2 = (undefined *)F_00db36d0(), REFG(void * PTR32, 0x15dffb0) != (undefined *)0x0)) {
      F_00d91840(REFG(void * PTR32, 0x15dffb0));
    }
    REFG(void * PTR32, 0x15dffb0) = pvVar2;
    uVar1 = F_00db3490(REFG(void * PTR32, 0x15dffb0),((undefined1 *)(gen_frame + 0x80c)),0x80);
    if (2 < (int)uVar1) {
      ((code *)*(gen_code32 *)(this + 0x20))("Stack trace is:\n",*(undefined4 *)(this + 0x24));
      uVar1 = F_00db3330(REFG(void * PTR32, 0x15dffb0),((undefined1 *)(gen_frame + 0x814)),uVar1 - 2,*(undefined4 *)(this + 0x20),
                           *(undefined4 *)(this + 0x24));
    }
  }
  return uVar1;
}

/* ref: hkDefaultError::vf3 */
uint F_00db2b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xdb2b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  uint uVar1;
  char * pcVar2;
  uint uVar3;
  
  uVar3 = (*(uint *)&gen_args[2]);
  if (((*(uint *)&gen_args[2]) == 0xffffffff) && (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18))) != 0)) {
    uVar3 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x14))) + -4 + *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18))) * 4)));
  }
  pcVar2 = ((char *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))))((*(undefined * PTR32 *)&gen_args[0]),(int)&(*(uint *)&gen_args[2]) + 3,uVar3)));
  if (*pcVar2 == '\0') {
    return 0;
  }
  pcVar2 = "";
  uVar1 = (*(uint *)&gen_args[2]) >> 8;
  (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) & 0xffffff00;
  switch((unsigned int)(uintptr_t)((*(int *)&gen_args[1]))) {
  case 0: ;
    pcVar2 = "Report";
    break;
  case 1: ;
    pcVar2 = "Warning";
    break;
  case 2: ;
    pcVar2 = "Assert";
    goto LAB_00db2bcd;
  case 3: ;
    pcVar2 = "Error";
LAB_00db2bcd: ;
    (*(uint *)&gen_args[2]) = CONCAT31((int3)uVar1,1);
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))))((*(undefined * PTR32 *)&gen_args[0]),pcVar2,uVar3,(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(uint *)&gen_args[2]));
  if (((*(int *)&gen_args[1]) != 2) && ((*(int *)&gen_args[1]) != 3)) {
    return 0;
  }
  return 1;
}

/* ref: hkDefaultError::vf8 */
unsigned int F_00db2c20(unsigned int gen_a0)
{
  GEN_ENTER(0xdb2c20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(int *)(in_ecx + 0x18) = *(int *)(in_ecx + 0x18) + -1;
  return 0;
}

/* ref: hkDefaultError::vf4 */
uint F_00db2c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb2c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if ((char)param_2 != '\0') {
    uVar1 = F_00dbe420(this + 8,param_1);
    return uVar1;
  }
  uVar1 = F_00dbd8b0(this + 8,&REFG(undefined * PTR32, 0x13516ac),param_1,1);
  return uVar1;
}

/* ref: hkDefaultError::vf7 */
uint F_00db2c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb2c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)(this + 0x18) == (*(uint *)(this + 0x1c) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this + 0x14,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x14) + *(int *)(this + 0x18) * 4)));
  *puVar1 = param_1;
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00db2ca0 */
uint F_00db2ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb2ca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x113ceec));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  *(undefined4 *)((int)this + 0x20) = param_1;
  *(undefined4 *)((int)this + 0x24) = param_2;
  return (uint)this;
}

/* ref: FUN_00db2ce0 */
uint F_00db2ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb2ce0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(int *)(in_ecx + 4) = *(int *)(in_ecx + 4) - param_2;
  return param_2;
}

/* ref: FUN_00db2cf0 */
uint F_00db2cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb2cf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00db2d40 */
uint F_00db2d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb2d40u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00db2d80 */
uint F_00db2d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb2d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00db2dc0 */
uint F_00db2dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb2dc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00db2df0 */
uint F_00db2df0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb2df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x18) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x14),iVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  uVar2 = F_00dbdb20((undefined *)((int)this + 8),&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: hkDefaultError::vf0 */
uint F_00db2e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb2e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = *(int *)(this + 0x1c);
  *(undefined4 *)(this + 0x18) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 0x14),iVar1 * 4);
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x1c) = 0x80000000;
  F_00dbdb20(this + 8,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: hkSocket::ReaderAdapter::vf4 */
uint F_00db2ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb2ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (0 < (int)param_2) {
    do {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x14))))
                        (*(int * PTR32 *)(this + 8),param_1 + uVar2,param_2 - uVar2);
      uVar2 = uVar2 + uVar1;
      if (uVar1 == 0) {
        return uVar2;
      }
    } while ((int)uVar2 < (int)param_2);
  }
  return param_2;
}

/* ref: hkSocket::ReaderAdapter::vf3 */
uint F_00db2f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb2f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0xc))))(*(int * PTR32 *)(this + 8),param_1);
  return param_1;
}

/* ref: hkSocket::WriterAdapter::vf4 */
uint F_00db2f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb2f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (0 < (int)param_2) {
    do {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x18))))
                        (*(int * PTR32 *)(this + 8),param_1 + uVar2,param_2 - uVar2);
      uVar2 = uVar2 + uVar1;
      if (uVar1 == 0) {
        return uVar2;
      }
    } while ((int)uVar2 < (int)param_2);
  }
  return param_2;
}

/* ref: hkSocket::WriterAdapter::vf3 */
uint F_00db2fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb2fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0xc))))(*(int * PTR32 *)(this + 8),param_1);
  return param_1;
}

/* ref: FUN_00db2fd0 */
uint F_00db2fd0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb2fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x113cf74));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[12])REFP(0x113cf18));
  *(undefined2 *)((int)this + 0xe) = 1;
  *(undefined2 *)((int)this + 0x1a) = 1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[9])REFP(0x113cf4c));
  *(undefined * PTR32 *)((int)this + 0x10) = this;
  *(undefined * PTR32 *)((int)this + 0x1c) = this;
  if ((REFG(char, 0x15dffac) == '\0') && (REFG(undefined * PTR32, 0x1352788) != (undefined *)0x0)) {
    (*(code *)REFG(undefined * PTR32, 0x1352788))(0);
    REFG(char, 0x15dffac) = '\x01';
  }
  return (uint)this;
}

/* ref: FUN_00db3030 */
uint F_00db3030(void)
{
  GEN_ENTER(0xdb3030u, 0u, 0u, 0u, 0u);
  LPVOID pvVar1;
  undefined * this;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                           (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x24)));
  *(undefined2 *)((int)this + 4) = 0x24;
  uVar2 = F_00dbf8f0(this,0xffffffff);
  return uVar2;
}

/* ref: hkSocket::vf9 */
uint F_00db30c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb30c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 1;
}

/* ref: hkSocket::vf10 */
byte F_00db30d0(void)
{
  GEN_ENTER(0xdb30d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00db30f0 */
uint F_00db30f0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb30f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00db3120 */
uint F_00db3120(unsigned int gen_a0)
{
  GEN_ENTER(0xdb3120u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00db3150 */
uint F_00db3150(unsigned int gen_a0)
{
  GEN_ENTER(0xdb3150u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkSocket::ReaderAdapter::vf0 */
uint F_00db3180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3180u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: hkSocket::WriterAdapter::vf0 */
uint F_00db31c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb31c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00db3200 */
uint F_00db3200(unsigned int gen_a0)
{
  GEN_ENTER(0xdb3200u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: hkSocket::vf0 */
uint F_00db3230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)(this + 0x14) = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  *(undefined * PTR32 * PTR32 *)(this + 8) = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00db3270 */
uint F_00db3270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3270u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00db3280 */
uint F_00db3280(unsigned int gen_a0)
{
  GEN_ENTER(0xdb3280u, gen_a0, 0u, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  if (in_eax == 0) {
    in_eax = 0x80000000;
  }
  return in_eax;
}

/* ref: FUN_00db3290 */
uint F_00db3290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3290u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d9fe80(param_2,param_1);
  return uVar1;
}

/* ref: FUN_00db32b0 */
uint F_00db32b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb32b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *(int *)(in_ecx + 0x10) == -1;
  return param_2;
}

/* ref: FUN_00db32d0 */
unsigned int F_00db32d0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb32d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  HANDLE pvVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113d1ac));
  if (*piVar1 != 0) {
    pvVar2 = gen_imp_GetCurrentProcess();
    (*(code *)piVar1[0xc])(pvVar2);
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
    piVar1[7] = 0;
    piVar1[8] = 0;
    piVar1[9] = 0;
    piVar1[10] = 0;
    piVar1[0xb] = 0;
    piVar1[0xc] = 0;
    piVar1[0xd] = 0;
    gen_imp_FreeLibrary((HMODULE)piVar1[1]);
    gen_imp_FreeLibrary((HMODULE)*piVar1);
    *piVar1 = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return 0;
}

/* ref: FUN_00db3490 */
uint F_00db3490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb3490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  code * pcVar1;
  uint uVar2;
  
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x38)));
  if (pcVar1 != (code *)0x0) {
    uVar2 = (*pcVar1)(0,param_2,param_1,0);
    return uVar2 & 0xffff;
  }
  return 0;
}

/* ref: FUN_00db34e0 */
uint F_00db34e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb34e0u, gen_a0, gen_a1, 0u, 0u);
  code * param_1 = (code *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  DWORD DVar1;
  uint uVar2;
  undefined1 * puVar3;
  undefined4 uVar4;
  char * pcVar5;
  CHAR * pCVar6;
  
  DVar1 = gen_imp_GetModuleFileNameA((HMODULE)0x0,((CHAR *)(gen_frame + 0x40c)),0x400);
  uVar2 = 0;
  if (DVar1 != 0) {
    pCVar6 = ((CHAR *)(gen_frame + 0x40c));
    pcVar5 = "Win32 \"%s\"";
    puVar3 = ((undefined1 *)(gen_frame + 0xc));
    uVar4 = 0x400;
    F_00da0ce0(puVar3,0x400,"Win32 \"%s\"",pCVar6);
    uVar2 = (*param_1)(((undefined1 *)(gen_frame + 0xc)),param_2,puVar3,uVar4,pcVar5,pCVar6);
  }
  return uVar2;
}

/* ref: FUN_00db3540 */
uint F_00db3540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_1[1];
  uVar2 = *(undefined4 *)((int)this + 4);
  uVar5 = *(uint *)((int)this + 8);
  uVar3 = *(undefined4 *)this;
  uVar4 = F_00db3280(param_1[2] & 0x3fffffff);
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = uVar1;
  *(uint *)((int)this + 8) = uVar4;
  *param_1 = uVar3;
  param_1[1] = uVar2;
  uVar5 = F_00db3280(uVar5 & 0x3fffffff);
  param_1[2] = uVar5;
  uVar1 = *(undefined4 *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  param_1[4] = uVar1;
  uVar1 = *(undefined4 *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  param_1[5] = uVar1;
  uVar5 = *(uint *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  param_1[3] = uVar5;
  return uVar5;
}

/* ref: FUN_00db35c0 */
uint F_00db35c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb35c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = param_1;
  if (0 < param_3) {
    do {
      if (iVar2 < 1) {
        return uVar1;
      }
      *(undefined4 *)(param_2 + uVar1 * 4) = *(undefined4 *)(iVar2 * 0x14 + *(int *)this);
      iVar2 = *(int *)(iVar2 * 0x14 + 4 + *(int *)this);
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < param_3);
  }
  return uVar1;
}

/* ref: FUN_00db3600 */
int F_00db3600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < param_1) {
    iVar2 = param_1;
    do {
      iVar2 = *(int *)(*(int *)this + 4 + iVar2 * 0x14);
      iVar1 = iVar1 + 1;
    } while (0 < iVar2);
  }
  return iVar1;
}

/* ref: FUN_00db3620 */
uint F_00db3620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = *(int *)this;
  uVar5 = param_1 * 5;
  iVar1 = iVar3 + param_1 * 0x14;
  if ((*(int *)(iVar3 + 0x10 + param_1 * 0x14) == 0) && (*(int *)(iVar1 + 8) == -1)) {
    iVar4 = *(int *)(iVar1 + 4);
    if (iVar4 != -1) {
      piVar2 = (int *)(iVar3 + 8 + iVar4 * 0x14);
      for (iVar4 = *(int *)(iVar3 + 8 + iVar4 * 0x14); iVar4 != param_1;
          iVar4 = *(int *)(iVar3 + 0xc + iVar4 * 0x14)) {
        iVar4 = *piVar2;
        piVar2 = (int *)(iVar3 + 0xc + iVar4 * 0x14);
      }
      *piVar2 = *(int *)(iVar1 + 0xc);
      F_00db3620(this,*(undefined4 *)(iVar1 + 4));
      uVar5 = *(uint *)((int)this + 0x14);
      *(uint *)(iVar1 + 0xc) = uVar5;
      *(int *)((int)this + 0x14) = param_1;
      return uVar5;
    }
    uVar5 = *(uint *)((int)this + 0x14);
    *(undefined4 *)((int)this + 0x10) = 0xffffffff;
    *(uint *)(iVar1 + 0xc) = uVar5;
    *(int *)((int)this + 0x14) = param_1;
  }
  return uVar5;
}

/* ref: FUN_00db36a0 */
uint F_00db36a0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb36a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113d1ac));
  *(undefined * PTR32 *)((int)this + 8) = &REFG(undefined, 0x15dffcc);
  F_00db3b00(&REFG(undefined, 0x15dffcc));
  return (uint)this;
}

/* ref: FUN_00db36d0 */
uint F_00db36d0(void)
{
  GEN_ENTER(0xdb36d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00db36a0(&REFG(undefined, 0x15dffc0));
  return uVar1;
}

/* ref: FUN_00db36e0 */
uint F_00db36e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb36e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * this_00;
  uint uVar1;
  
  if (-1 < param_1) {
    this_00 = (undefined *)F_00db36d0();
    if (this_00 != (undefined *)0x0) {
      F_00d919e0(this_00);
    }
    F_00d91a80(this_00);
    uVar1 = F_00db35c0(this,param_1,((undefined1 *)(gen_frame + 0xc)),0x10);
    uVar1 = F_00db3330(this_00,((undefined1 *)(gen_frame + 0xc)),uVar1,((code *)REFP(0xdb3290)),param_2);
    if (this_00 != (undefined *)0x0) {
      uVar1 = F_00d91a80(this_00);
    }
    return uVar1;
  }
  uVar1 = F_00d9fe80(param_2,"No stack trace\n");
  return uVar1;
}

/* ref: FUN_00db3760 */
uint F_00db3760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)(*(int *)this + 0x10 + param_1 * 0x14);
  *piVar1 = *piVar1 + -1;
  uVar2 = F_00db3620(this,param_1);
  return uVar2;
}

/* ref: FUN_00db3780 */
uint F_00db3780(unsigned int gen_a0)
{
  GEN_ENTER(0xdb3780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)((int)this + 0x14);
  if (uVar1 != 0xffffffff) {
    iVar2 = uVar1 * 0x14;
    *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(*(int *)this + 0xc + iVar2);
    *(undefined4 *)(*(int *)this + iVar2) = 0;
    *(undefined4 *)(iVar2 + 4 + *(int *)this) = 0xffffffff;
    *(undefined4 *)(iVar2 + 8 + *(int *)this) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0xc + *(int *)this) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x10 + *(int *)this) = 0;
    return uVar1;
  }
  uVar1 = *(uint *)((int)this + 4);
  if (uVar1 == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(*(undefined4 *)((int)this + 0xc),this,0x14);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  iVar2 = uVar1 * 0x14;
  *(undefined4 *)(iVar2 + *(int *)this) = 0;
  *(undefined4 *)(iVar2 + 4 + *(int *)this) = 0xffffffff;
  *(undefined4 *)(iVar2 + 8 + *(int *)this) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0xc + *(int *)this) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x10 + *(int *)this) = 0;
  return uVar1;
}

/* ref: FUN_00db3820 */
unsigned int F_00db3820(unsigned int gen_a0)
{
  GEN_ENTER(0xdb3820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xc);
  if (piVar1 != (int *)0x0) {
    uVar2 = *(uint *)((int)this + 8);
    *(undefined4 *)((int)this + 4) = 0;
    if (-1 < (int)uVar2) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))
                (piVar1,*(undefined4 *)this,((uVar2 & 0x3fffffff) + uVar2 * 4) * 4);
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 8) = 0x80000000;
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 0x10) = 0xffffffff;
    *(undefined4 *)((int)this + 0x14) = 0xffffffff;
  }
  return 0;
}

/* ref: FUN_00db3870 */
uint F_00db3870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb3870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (*(int *)((int)this + 0x10) == -1) {
    uVar6 = F_00db3780(this);
    *(uint *)((int)this + 0x10) = uVar6;
  }
  uVar6 = *(uint *)((int)this + 0x10);
  iVar5 = param_2;
joined_r0x00db3890: ;
  do {
    uVar4 = uVar6;
    iVar5 = iVar5 + -1;
    if (iVar5 < 0) {
      piVar1 = (int *)(*(int *)this + 0x10 + uVar4 * 0x14);
      *piVar1 = *piVar1 + 1;
      return uVar4;
    }
    iVar2 = *(int *)(param_1 + iVar5 * 4);
    iVar3 = uVar4 * 0x14;
    uVar6 = *(uint *)(*(int *)this + 8 + iVar3);
    while (0 < (int)uVar6) {
      piVar1 = (int *)(*(int *)this + uVar6 * 0x14);
      if (*piVar1 == iVar2) {
        if (uVar6 != 0xffffffff) goto joined_r0x00db3890;
        break;
      }
      uVar6 = piVar1[3];
    }
    uVar6 = F_00db3780(this);
    piVar1 = (int *)(*(int *)this + uVar6 * 0x14);
    *piVar1 = iVar2;
    piVar1[1] = uVar4;
    piVar1[2] = -1;
    piVar1[3] = *(int *)(iVar3 + 8 + *(int *)this);
    *(uint *)(iVar3 + 8 + *(int *)this) = uVar6;
  } while( true );
}

/* ref: FUN_00db3920 */
uint F_00db3920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  uVar1 = param_1[3];
  *(undefined4 *)((int)this + 0xc) = uVar1;
  F_00db40c0(this,uVar1,0,*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  return (uint)this;
}

/* ref: FUN_00db3970 */
uint F_00db3970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x10))))
              (*(int * PTR32 *)((int)this + 0xc),*(undefined4 *)this,((uVar1 & 0x3fffffff) + uVar1 * 4) * 4
              );
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  uVar2 = param_1[3];
  *(undefined4 *)((int)this + 0xc) = uVar2;
  F_00db40c0(this,uVar2,0,*param_1,param_1[1]);
  uVar1 = param_1[4];
  *(uint *)((int)this + 0x10) = uVar1;
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  return uVar1;
}

/* ref: FUN_00db39e0 */
uint F_00db39e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb39e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  uint uVar1;
  
  uVar1 = F_00db3490(param_1,((undefined1 *)(gen_frame + 0xc)),0x80);
  if (0 < (int)uVar1) {
    uVar1 = F_00db3870(this,((undefined1 *)(gen_frame + 0x10)),uVar1 - 1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00db3a40 */
uint F_00db3a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb3a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined3 extraout_var = 0;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)((int)this + 4);
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar5 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_1,iVar5,4);
  }
  param_1[1] = iVar1;
  puVar4 = (undefined4 *)(param_2[2] & 0x3fffffff);
  if ((int)puVar4 < iVar1) {
    iVar5 = (int)((int)(uintptr_t)puVar4) * 2;
    if ((int)((int)(uintptr_t)puVar4) * 2 <= iVar1) {
      iVar5 = iVar1;
    }
    bVar3 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_2,iVar5,4);
    puVar4 = ((undefined4 *)GEN_TOP(CONCAT31(extraout_var,bVar3)));
  }
  param_2[1] = iVar1;
  if (iVar1 != 0) {
    puVar4 = (undefined4 *)*param_1;
    *puVar4 = 0;
    *(undefined4 *)*param_2 = 0xffffffff;
    iVar5 = 1;
    if (1 < iVar1) {
      iVar6 = 0x14;
      do {
        iVar2 = *(int *)this;
        *(undefined4 *)(*param_1 + iVar5 * 4) = *(undefined4 *)(iVar2 + iVar6);
        puVar4 = *(undefined4 * PTR32 *)(iVar2 + 4 + iVar6);
        *(undefined4 * PTR32 *)(*param_2 + iVar5 * 4) = puVar4;
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x14;
      } while (iVar5 < iVar1);
    }
  }
  return (uint)puVar4;
}

/* ref: FUN_00db3b00 */
uint F_00db3b00(unsigned int gen_a0)
{
  GEN_ENTER(0xdb3b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HMODULE pHVar1;
  FARPROC pFVar2;
  uint uVar3;
  HANDLE pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  pHVar1 = gen_imp_LoadLibraryA(REFG(undefined * PTR32, 0x13527fc));
  *(HMODULE *)this = pHVar1;
  if (pHVar1 == (HMODULE)0x0) {
    gen_imp_OutputDebugStringA("Havok StackTracer: hkStackTracer: Unable to load dbghelp.dll\r\n");
  }
  pHVar1 = gen_imp_LoadLibraryA("kernel32.dll");
  *(HMODULE *)((int)this + 4) = pHVar1;
  if (pHVar1 == (HMODULE)0x0) {
    gen_imp_OutputDebugStringA("Havok StackTracer: hkStackTracer: Unable to load kernel32.dll\r\n");
  }
  uVar3 = 0;
  if (*(int *)this != 0) {
    *(undefined4 *)((int)this + 8) = 1;
    pFVar2 = gen_imp_GetProcAddress(*(int *)this,"SymInitialize");
    *(FARPROC *)((int)this + 0xc) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,"SymRefreshModuleList");
    *(FARPROC *)((int)this + 0x10) = pFVar2;
    if (pFVar2 == (FARPROC)0x0) {
      gen_imp_OutputDebugStringA(
                        "Havok StackTracer: Could not load symbol SymRefreshModuleList from dbghelp.dll, version too old, but will continue without it.\r\n"
                        );
    }
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,"SymGetOptions");
    *(FARPROC *)((int)this + 0x14) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,"SymSetOptions");
    *(FARPROC *)((int)this + 0x18) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,"SymGetSymFromAddr64");
    *(FARPROC *)((int)this + 0x1c) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,"StackWalk64");
    *(FARPROC *)((int)this + 0x20) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,"SymFunctionTableAccess64");
    *(FARPROC *)((int)this + 0x24) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,"SymGetModuleBase64");
    *(FARPROC *)((int)this + 0x28) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,"SymGetLineFromAddr64");
    *(FARPROC *)((int)this + 0x2c) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,"SymCleanup");
    *(FARPROC *)((int)this + 0x30) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)((int)this + 4),"RtlCaptureContext");
    *(FARPROC *)((int)this + 0x34) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)((int)this + 4),"RtlCaptureStackBackTrace");
    *(FARPROC *)((int)this + 0x38) = pFVar2;
    uVar3 = ((code *)*(gen_code32 *)((int)this + 0x14))();
    ((code *)*(gen_code32 *)((int)this + 0x18))(uVar3 | 0x80000014);
    uVar6 = 1;
    uVar5 = 0;
    pvVar4 = gen_imp_GetCurrentProcess();
    uVar3 = ((code *)*(gen_code32 *)((int)this + 0xc))(pvVar4,uVar5,uVar6);
  }
  return uVar3;
}

/* ref: FUN_00db3c20 */
unsigned int F_00db3c20(unsigned int gen_a0)
{
  GEN_ENTER(0xdb3c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HANDLE pvVar1;
  
  if (*(int *)this != 0) {
    pvVar1 = gen_imp_GetCurrentProcess();
    ((code *)*(gen_code32 *)((int)this + 0x30))(pvVar1);
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x30) = 0;
    *(undefined4 *)((int)this + 0x34) = 0;
    gen_imp_FreeLibrary(*(undefined4 *)((int)this + 4));
    gen_imp_FreeLibrary(*(undefined4 *)this);
    *(undefined4 *)this = 0;
  }
  return 0;
}

/* ref: FUN_00db3c80 */
uint F_00db3c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3c80u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x14;
}

/* ref: FUN_00db3ca0 */
uint F_00db3ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3ca0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x14;
}

/* ref: FUN_00db3d00 */
uint F_00db3d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb3d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00db3d20 */
uint F_00db3d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3d20u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00db3d30 */
uint F_00db3d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3d30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00db3d50 */
uint F_00db3d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3d50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00db3d70 */
uint F_00db3d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00db3d90 */
unsigned int F_00db3d90(unsigned int gen_a0)
{
  GEN_ENTER(0xdb3d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00db3dc0 */
uint F_00db3dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb3dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0x14);
  return uVar1;
}

/* ref: FUN_00db3e10 */
uint F_00db3e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb3e10u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,0x14);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00db3e60 */
unsigned int F_00db3e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb3e60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined8 * puVar1;
  int iVar2;
  int iVar3;
  
  if (0 < param_2) {
    iVar2 = param_3 - (int)param_1;
    puVar1 = param_1;
    iVar3 = param_2;
    do {
      *puVar1 = *(undefined8 *)(iVar2 + (int)puVar1);
      puVar1[1] = *(undefined8 *)(iVar2 + 8 + (int)puVar1);
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(iVar2 + 0x10 + (int)puVar1);
      puVar1 = (undefined8 *)((int)puVar1 + 0x14);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00db3ec0 */
uint F_00db3ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x14);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 0x14;
}

/* ref: FUN_00db3f10 */
unsigned int F_00db3f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xdb3f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  undefined8 * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)((int)this + 4);
  iVar5 = (iVar4 - param_3) + param_5;
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar5) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    F_00d95690(param_1,this,iVar3,0x14);
  }
  F_00da38f0(*(int *)this + (param_2 + param_5) * 0x14,*(int *)this + (param_2 + param_3) * 0x14,
               ((iVar4 - param_2) - param_3) * 0x14);
  puVar1 = (undefined8 *)(*(int *)this + param_2 * 0x14);
  if (0 < param_5) {
    iVar3 = param_4 - (int)puVar1;
    iVar4 = param_5;
    do {
      *puVar1 = *(undefined8 *)(iVar3 + (int)puVar1);
      puVar1[1] = *(undefined8 *)(iVar3 + 8 + (int)puVar1);
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(iVar3 + 0x10 + (int)puVar1);
      puVar1 = (undefined8 *)((int)puVar1 + 0x14);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(int *)((int)this + 4) = iVar5;
  return 0;
}

/* ref: FUN_00db3fd0 */
uint F_00db3fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb3fd0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00db4010 */
uint F_00db4010(unsigned int gen_a0)
{
  GEN_ENTER(0xdb4010u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkStackTracer::vf0 */
uint F_00db4040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00db32d0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00db4080 */
uint F_00db4080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))
                      (param_1,*(undefined4 *)this,((uVar1 & 0x3fffffff) + uVar1 * 4) * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db40c0 */
unsigned int F_00db40c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdb40c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00db3f10(this,param_1,param_2,0,param_3,param_4);
  return 0;
}

/* ref: FUN_00db40e0 */
uint F_00db40e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb40e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00db4120 */
uint F_00db4120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4120u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00db4180 */
uint F_00db4180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  if ((*(uint *)((int)this + 4) <= param_1[1]) &&
     ((*(uint *)((int)this + 4) < param_1[1] || (*(uint *)this < *param_1)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00db41b0 */
uint F_00db41b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb41b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00db41e0 */
uint F_00db41e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb41e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined1 gen_out[0x104];
  uint uVar1;
  undefined4 unaff_ESI = 0;
  undefined4 unaff_EDI = 0;
  undefined4 uVar2;
  undefined1 * puVar3;
  undefined4 uVar4;
  char * pcVar5;
  undefined4 uVar6;
  undefined4 local_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar6 = *(undefined4 *)(param_3 + 0xc);
  pcVar5 = "\nAddress=0x%p size=%i\n";
  puVar3 = (undefined1 *)(gen_out + 0x0);
  uVar4 = 0x100;
  F_00da0ce0(puVar3,0x100,"\nAddress=0x%p size=%i\n",param_2,uVar6,unaff_EDI,unaff_ESI,local_184,
               uStack_180,uStack_17c,uStack_178,uStack_174,uStack_170,uStack_16c,uStack_168,
               uStack_164,uStack_160,uStack_15c,uStack_158,uStack_154,uStack_150,uStack_14c,
               uStack_148,uStack_144,uStack_140,uStack_13c,uStack_138,uStack_134,uStack_130,
               uStack_12c,uStack_128,uStack_124,uStack_120,uStack_11c,uStack_118,uStack_114,
               uStack_110,uStack_10c,uStack_108,uStack_104,uStack_100,uStack_fc,uStack_f8,uStack_f4,
               uStack_f0,uStack_ec,uStack_e8,uStack_e4,uStack_e0,uStack_dc,uStack_d8,uStack_d4,
               uStack_d0,uStack_cc,uStack_c8,uStack_c4,uStack_c0,uStack_bc,uStack_b8,uStack_b4,
               uStack_b0,uStack_ac,uStack_a8,uStack_a4,uStack_a0,uStack_9c,uStack_98,uStack_94,
               uStack_90,uStack_8c,uStack_88,local_84,uStack_80,uStack_7c,uStack_78,uStack_74,
               uStack_70,uStack_6c,uStack_68,uStack_64,uStack_60,uStack_5c,uStack_58,uStack_54,
               uStack_50,uStack_4c,uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,uStack_34,
               uStack_30,uStack_2c,uStack_28,uStack_24,uStack_20,uStack_1c,uStack_18,uStack_14,
               uStack_10);
  uVar2 = *(undefined4 *)((int)this + 0x44);
  ((code *)*(gen_code32 *)((int)this + 0x40))(param_1,uVar2,puVar3,uVar4);
  ((code *)*(gen_code32 *)((int)this + 0x40))
            ((gen_out + 0x0),*(undefined4 *)((int)this + 0x44),param_1,uVar2,puVar3,uVar4,pcVar5,
             param_2,uVar6);
  uVar1 = F_00db35c0((undefined *)((int)this + 8),*(undefined4 *)(param_3 + 8),(gen_out + 0x100),0x20);
  F_00db3330(*(undefined * PTR32 *)((int)this + 4),(gen_out + 0x100),uVar1,*(undefined4 *)((int)this + 0x40),
               *(undefined4 *)((int)this + 0x44));
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x40))
                    ("-------------------------------------------------------------------\n\n",
                     *(undefined4 *)((int)this + 0x44));
  return uVar1;
}

/* ref: hkLeakDetectAllocator::vf8 */
uint F_00db4270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xdb4270u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x38) + 0x20))))
                    (*(int * PTR32 *)(this + 0x38),param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: hkLeakDetectAllocator::vf9 */
uint F_00db4280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xdb4280u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x38) + 0x24))))
                    (*(int * PTR32 *)(this + 0x38),param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: FUN_00db4290 */
uint F_00db4290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4290u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_2;
  uVar2 = F_00da0e60(param_1);
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x10))(param_2,param_1,uVar2);
  return uVar2;
}

/* ref: FUN_00db42e0 */
uint F_00db42e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdb42e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * pvVar1;
  undefined4 * puVar2;
  
  *(undefined4 *)((int)this + 0x38) = param_1;
  *(int * PTR32 *)((int)this + 0x3c) = param_2;
  *(undefined4 *)((int)this + 0x40) = param_3;
  *(undefined4 *)((int)this + 0x44) = param_4;
  *(undefined4 *)((int)this + 0x4c) = 0;
  pvVar1 = REFG(void * PTR32, 0x15dffb0);
  if ((REFG(void * PTR32, 0x15dffb0) == (undefined *)0x0) &&
     (pvVar1 = (undefined *)F_00db36d0(), REFG(void * PTR32, 0x15dffb0) != (undefined *)0x0)) {
    F_00d91840(REFG(void * PTR32, 0x15dffb0));
  }
  REFG(void * PTR32, 0x15dffb0) = pvVar1;
  pvVar1 = REFG(void * PTR32, 0x15dffb0);
  *(undefined * PTR32 *)((int)this + 4) = REFG(void * PTR32, 0x15dffb0);
  F_00d91830(pvVar1);
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 4))(param_2,0xc)));
  if (puVar2 == (undefined4 *)0x0) {
    *(int * PTR32 *)((int)this + 0x14) = param_2;
    *(undefined4 *)((int)this + 0x48) = 0;
    return 0;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0xffffffff;
  *(int * PTR32 *)((int)this + 0x14) = param_2;
  *(undefined4 * PTR32 *)((int)this + 0x48) = puVar2;
  return (uint)puVar2;
}

/* ref: FUN_00db4380 */
unsigned int F_00db4380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdb4380u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  int * piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int * PTR32 *)(param_1 + 8);
  for (iVar3 = param_3; iVar3 != 0; iVar3 = iVar3 - iVar2) {
    iVar2 = iVar3;
    if (0x1f < iVar3) {
      iVar2 = 0x20;
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))
              (piVar1,"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t",iVar2);
  }
  F_00da00e0(param_1,&REFG(undefined, 0x113d450),*(undefined4 *)(*param_5 + param_2 * 8),
               *(undefined4 *)(*param_5 + 4 + param_2 * 8));
  if (param_2 == 0) {
    F_00da00e0(param_1,&REFG(undefined, 0x1080294));
  }
  else {
    F_00db3330(REFG(void * PTR32, 0x15dffb0),*param_4 + param_2 * 0x14,1,((code *)REFP(0xdb4290)),piVar1);
  }
  iVar3 = *(int *)(*param_4 + 8 + param_2 * 0x14);
  if (iVar3 != -1) {
    do {
      F_00db4380(param_1,iVar3,param_3 + 1,param_4,param_5);
      iVar3 = *(int *)(*param_4 + 0xc + iVar3 * 0x14);
    } while (iVar3 != -1);
  }
  return 0;
}

/* ref: FUN_00db4450 */
uint F_00db4450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 uVar1;
  undefined8 uVar2;
  int * piVar3;
  int iVar4;
  undefined4 uVar5;
  LPVOID pvVar6;
  undefined4 * puVar7;
  uint uVar8;
  int iVar9;
  int * piVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x20);
  (*(undefined * PTR32 *)(gen_frame + 0x68)) = this;
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x5c)) = lpCriticalSection;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  F_00dbff20(param_1);
  piVar3 = *(int * PTR32 *)((int)this + 0x48);
  uVar8 = piVar3[1];
  uVar13 = uVar8 & 0x7fffffff;
  if (uVar13 == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  param_1[2] = uVar13;
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar11 = (uVar13 + uVar8 * 8) * 8;
  uVar13 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar6 + 0x30) + 4))))(*(int * PTR32 *)((int)pvVar6 + 0x30),iVar11);
  param_1[1] = uVar13;
  F_00da3720(uVar13,0,iVar11);
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar7 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar6 + 0x30) + 4))))
                     (*(int * PTR32 *)((int)pvVar6 + 0x30),uVar8 * 4)));
  *param_1 = puVar7;
  (*(int *)(gen_frame + 0x64)) = param_1[1];
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  (*(LPVOID *)(gen_frame + 0x60)) = pvVar6;
  iVar12 = piVar3[2];
  iVar11 = 0;
  if (-1 < iVar12) {
    piVar10 = (int *)*piVar3;
    do {
      if (*piVar10 != -1) break;
      iVar11 = iVar11 + 1;
      piVar10 = piVar10 + 8;
    } while (iVar11 <= iVar12);
  }
  if (iVar11 <= iVar12) {
    (*(undefined * PTR32 *)(gen_frame + 0x68)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 8);
    iVar12 = (*(int *)(gen_frame + 0x64)) + 4;
    do {
      iVar4 = *piVar3;
      iVar9 = iVar11 * 0x20;
      (*(undefined8 *)(gen_frame + 0x44)) = *(undefined8 *)(iVar4 + 8 + iVar9);
      uVar1 = *(undefined8 *)(iVar4 + iVar9 + 0x10);
      (*(undefined8 *)(gen_frame + 0x4c)) = uVar1;
      uVar1 = (*(undefined8 *)(gen_frame + 0x4c));
      uVar2 = *(undefined8 *)(iVar4 + iVar9 + 0x18);
      (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x4c)) + 0)) = (undefined4)uVar1;
      uVar5 = (undefined4)(*(undefined8 *)(gen_frame + 0x4c));
      *puVar7 = *(undefined4 *)(iVar4 + iVar9);
      (*(undefined8 *)(gen_frame + 0x54)) = uVar2;
      (*(undefined8 *)(gen_frame + 0x4c)) = uVar1;
      uVar8 = F_00db35c0((*(undefined * PTR32 *)(gen_frame + 0x68)),uVar5,((undefined1 *)(gen_frame + 0x4)),0x10);
      *(uint *)(iVar12 + 0x40) = uVar8;
      F_00da1010(iVar12,((undefined1 *)(gen_frame + 0x4)),uVar8 * 4);
      *(undefined4 *)(iVar12 + -4) = (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x4c)) + 4));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(LPVOID *)(gen_frame + 0x60)) + 0x2c) + 0x24))))
                (*(int * PTR32 *)((int)(*(LPVOID *)(gen_frame + 0x60)) + 0x2c),*puVar7,(*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x4c)) + 4)));
      iVar11 = iVar11 + 1;
      iVar4 = piVar3[2];
      iVar12 = iVar12 + 0x48;
      puVar7 = puVar7 + 1;
      if (iVar11 <= iVar4) {
        piVar10 = (int *)(iVar11 * 0x20 + *piVar3);
        do {
          if (*piVar10 != -1) break;
          iVar11 = iVar11 + 1;
          piVar10 = piVar10 + 8;
        } while (iVar11 <= iVar4);
      }
    } while (iVar11 <= iVar4);
  }
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x5c)));
  return 0;
}

/* ref: FUN_00db46c0 */
unsigned int F_00db46c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb46c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined8 uVar2;
  code * pcVar3;
  undefined4 uVar4;
  uint uVar5;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x20);
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x18)) = lpCriticalSection;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (param_2 == 0) {
    if (param_3 != 0) {
      ((code *)*(gen_code32 *)((int)this + 0x40))
                ("Given nonzero bytes to free with an null address\n",
                 *(undefined4 *)((int)this + 0x44));
      pcVar3 = ((code *)GEN_TOP(swi(3)));
      (*pcVar3)();
      return 0;
    }
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  if (param_3 == 0) {
    ((code *)*(gen_code32 *)((int)this + 0x40))
              ("Given zero bytes to free with an non-null address\n",
               *(undefined4 *)((int)this + 0x44));
    pcVar3 = ((code *)GEN_TOP(swi(3)));
    (*pcVar3)();
    return 0;
  }
  uVar5 = F_00db5370(*(undefined * PTR32 *)((int)this + 0x48),param_2);
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x48) + 8))) < (int)uVar5) {
    ((code *)*(gen_code32 *)((int)this + 0x40))
              ("Freeing block not from this allocator",*(undefined4 *)((int)this + 0x44));
    pcVar3 = ((code *)GEN_TOP(swi(3)));
    (*pcVar3)();
    return 0;
  }
  iVar1 = uVar5 * 0x20 + 8 + **(int * PTR32 *)((int)this + 0x48);
  (*(undefined8 *)(gen_frame + 0x0)) = *((undefined8 *)GEN_TOP((uVar5 * 0x20 + 8 + **(int * PTR32 *)((int)this + 0x48))));
  uVar2 = *(undefined8 *)(iVar1 + 8);
  (*(undefined8 *)(gen_frame + 0x8)) = uVar2;
  uVar2 = (*(undefined8 *)(gen_frame + 0x8));
  (*(undefined8 *)(gen_frame + 0x10)) = *(undefined8 *)(iVar1 + 0x10);
  (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 4)) = (int)((ulonglong)uVar2 >> 0x20);
  (*(undefined8 *)(gen_frame + 0x8)) = uVar2;
  if ((*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 4)) != param_3) {
    F_00db41e0(this,"Freeing block of incorrect size",param_2,&(*(undefined8 *)(gen_frame + 0x0)));
    pcVar3 = ((code *)GEN_TOP(swi(3)));
    (*pcVar3)();
    return 0;
  }
  if (*(int *)((int)this + 4) != 0) {
    (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 0)) = (undefined4)uVar2;
    uVar4 = (undefined4)(*(undefined8 *)(gen_frame + 0x8));
    F_00db3760((undefined *)((int)this + 8),uVar4);
  }
  F_00db54c0(*(undefined * PTR32 *)((int)this + 0x48),uVar5);
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x38) + 0x24))))
                    (*(int * PTR32 *)((int)this + 0x38),param_2,param_3);
  *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) - uVar5;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x38) + 8))))(*(int * PTR32 *)((int)this + 0x38),param_2,param_3);
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x18)));
  return 0;
}

/* ref: hkLeakDetectAllocator::vf1 */
uint F_00db47f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb47f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00db45f0(this,0,param_1);
  return uVar1;
}

/* ref: hkLeakDetectAllocator::vf2 */
unsigned int F_00db4810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb4810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00db46c0(this,0,param_1,param_2);
  return 0;
}

/* ref: hkLeakDetectAllocator::vf3 */
uint F_00db4830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00db45f0(this,1,*param_1);
  return uVar1;
}

/* ref: hkLeakDetectAllocator::vf4 */
unsigned int F_00db4850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb4850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00db46c0(this,1,param_1,param_2);
  return 0;
}

/* ref: hkLeakDetectAllocator::vf5 */
uint F_00db4870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb4870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00db45f0(this,1,*param_3);
  iVar2 = *param_3;
  if (param_2 <= iVar2) {
    iVar2 = param_2;
  }
  F_00da3710(uVar1,param_1,iVar2);
  F_00db46c0(this,1,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00db48c0 */
uint F_00db48c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb48c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  undefined8 * puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int * piVar6;
  int iVar7;
  int * piVar8;
  int iVar9;
  undefined1 * puVar10;
  undefined4 uVar11;
  undefined1 * puVar12;
  undefined4 uVar13;
  char * pcVar14;
  
  (*(undefined * PTR32 *)(gen_frame + 0x104)) = this;
  if ((*((uint *)GEN_TOP((*(int *)((int)this + 0x48) + 4))) & 0x7fffffff) != 0) {
    ((code *)*(gen_code32 *)((int)this + 0x40))
              ("**************************************************************\n* Begin hkLeakDetectorAllocator                              *\n**************************************************************\n"
               ,*(undefined4 *)((int)this + 0x44));
    iVar7 = *(int *)((int)this + 0x48);
    uVar11 = *(undefined4 *)((int)this + 0x3c);
    (*(int *)(gen_frame + 0x10c)) = 0;
    (*(int *)(gen_frame + 0x110)) = 0;
    (*(uint *)(gen_frame + 0x114)) = 0x80000000;
    uVar4 = *(uint *)(iVar7 + 4) & 0x7fffffff;
    if (uVar4 != 0) {
      F_00d95690(uVar11,&(*(int *)(gen_frame + 0x10c)),uVar4,0x18);
    }
    piVar6 = *(int * PTR32 *)((int)this + 0x48);
    iVar7 = 0;
    if ((uint)piVar6[2] < 0x80000000) {
      piVar8 = (int *)*piVar6;
      do {
        if (*piVar8 != -1) break;
        iVar7 = iVar7 + 1;
        piVar8 = piVar8 + 8;
        (*(int * PTR32 *)(gen_frame + 0x118)) = piVar8;
      } while (iVar7 <= piVar6[2]);
      if (iVar7 <= piVar6[2]) {
        do {
          iVar9 = *piVar6;
          iVar5 = iVar7 * 0x20;
          uVar2 = *(undefined8 *)(iVar5 + 0x10 + iVar9);
          uVar3 = *(undefined8 *)(iVar5 + 0x18 + iVar9);
          puVar1 = (undefined8 *)((*(int *)(gen_frame + 0x10c)) + (*(int *)(gen_frame + 0x110)) * 0x18);
          if (puVar1 != (undefined8 *)0x0) {
            *puVar1 = *(undefined8 *)(iVar5 + 8 + iVar9);
            puVar1[1] = uVar2;
            puVar1[2] = uVar3;
          }
          piVar6 = *(int * PTR32 *)((int)this + 0x48);
          (*(int *)(gen_frame + 0x110)) = (*(int *)(gen_frame + 0x110)) + 1;
          iVar9 = piVar6[2];
          iVar7 = iVar7 + 1;
          if (iVar7 <= iVar9) {
            piVar8 = (int *)(iVar7 * 0x20 + *piVar6);
            do {
              if (*piVar8 != -1) break;
              iVar7 = iVar7 + 1;
              piVar8 = piVar8 + 8;
            } while (iVar7 <= iVar9);
          }
        } while (iVar7 <= iVar9);
      }
    }
    piVar6 = (*(int * PTR32 *)(gen_frame + 0x118));
    (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x118)) + 0)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x118)) = (int *)((uint)piVar6 & 0xffffff00);
    if (1 < (*(int *)(gen_frame + 0x110))) {
      F_00db5940((*(int *)(gen_frame + 0x10c)),0,(*(int *)(gen_frame + 0x110)) + -1,(*(int * PTR32 *)(gen_frame + 0x118)));
    }
    iVar7 = (*(int *)(gen_frame + 0x10c));
    if (0 < (*(int *)(gen_frame + 0x110))) {
      (*(int *)(gen_frame + 0x108)) = 0;
      (*(int * PTR32 *)(gen_frame + 0x118)) = (int *)0x1;
      iVar9 = (*(int *)(gen_frame + 0x110));
      do {
        iVar5 = (*(int *)(gen_frame + 0x108));
        piVar6 = (*(int * PTR32 *)(gen_frame + 0x118));
        if (-1 < *(int *)((*(int *)(gen_frame + 0x108)) + 8 + iVar7)) {
          if ((int)(*(int * PTR32 *)(gen_frame + 0x118)) < iVar9) {
            do {
              if (*(int *)(iVar5 + 0x20 + iVar7) == *(int *)((*(int *)(gen_frame + 0x108)) + 8 + iVar7)) {
                *(undefined4 *)(iVar5 + 0x20 + iVar7) = 0xffffffff;
                iVar9 = (*(int *)(gen_frame + 0x110));
                iVar7 = (*(int *)(gen_frame + 0x10c));
              }
              piVar6 = (int *)((int)piVar6 + 1);
              this = (*(undefined * PTR32 *)(gen_frame + 0x104));
              iVar5 = iVar5 + 0x18;
            } while ((int)piVar6 < iVar9);
          }
          F_00db41e0(this,"Memory Leaked:\n",0,(*(int *)(gen_frame + 0x108)) + iVar7);
          iVar5 = (*(int *)(gen_frame + 0x108));
          piVar6 = (*(int * PTR32 *)(gen_frame + 0x118));
          iVar9 = (*(int *)(gen_frame + 0x110));
          iVar7 = (*(int *)(gen_frame + 0x10c));
        }
        (*(int * PTR32 *)(gen_frame + 0x118)) = (int *)((int)piVar6 + 1);
        (*(int *)(gen_frame + 0x108)) = iVar5 + 0x18;
      } while ((int)piVar6 < iVar9);
    }
    (*(int *)(gen_frame + 0x110)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x114))) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 0x10))))
                (*(int * PTR32 *)((int)this + 0x3c),iVar7,((*(uint *)(gen_frame + 0x114)) & 0x3fffffff) * 0x18);
    }
    iVar7 = *(int *)((int)this + 0x48);
    (*(int *)(gen_frame + 0x10c)) = 0;
    (*(uint *)(gen_frame + 0x114)) = 0x80000000;
    uVar4 = *(uint *)(iVar7 + 4) & 0x7fffffff;
    pcVar14 = "\n%i leaks found\n";
    puVar12 = ((undefined1 *)(gen_frame + 0x4));
    uVar13 = 0x100;
    F_00da0ce0(puVar12,0x100,"\n%i leaks found\n",uVar4);
    uVar11 = *(undefined4 *)((int)this + 0x44);
    puVar10 = ((undefined1 *)(gen_frame + 0x4));
    ((code *)*(gen_code32 *)((int)this + 0x40))(puVar10,uVar11,puVar12);
    ((code *)*(gen_code32 *)((int)this + 0x40))
              ("**************************************************************\n* End hkLeakDetectorAllocator                                *\n**************************************************************\n"
               ,*(undefined4 *)((int)this + 0x44),puVar10,uVar11,puVar12,uVar13,pcVar14,uVar4);
  }
  F_00db3820((undefined *)((int)this + 8));
  F_00db5650(*(undefined * PTR32 *)((int)this + 0x48),*(undefined4 *)((int)this + 0x3c));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 8))))
            (*(int * PTR32 *)((int)this + 0x3c),*(undefined4 *)((int)this + 0x48),0xc);
  uVar4 = F_00d91a80(*(undefined * PTR32 *)((int)this + 4));
  return uVar4;
}

/* ref: FUN_00db4b20 */
unsigned int F_00db4b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint * puVar1;
  undefined8 uVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int * piVar11;
  undefined4 * puVar12;
  undefined4 * puVar13;
  
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 40)) = this;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 36)) = (LPCRITICAL_SECTION)((int)this + 0x20);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  uVar3 = *(uint *)((int)this + 0xc);
  iVar8 = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 44)) = (int)this + 8;
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
  ((byte *)(gen_frame + 0xc))[0x23] = 0x80;
  if (0 < (int)uVar3) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516a8),((byte *)(gen_frame + 0xc)) + 0x18,((int)uVar3 < 0) - 1 & uVar3,8);
    iVar8 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 28));
  }
  puVar12 = ((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24)) + iVar8 * 8)));
  if (0 < (int)(uVar3 - iVar8)) {
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar13 = puVar12 + 2;
    for (uVar9 = (uVar3 - iVar8) * 8 - 5 >> 2; this = (undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 40)), uVar9 != 0;
        uVar9 = uVar9 - 1) {
      *puVar13 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar13 = puVar13 + 1;
    }
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x48);
  ((byte *)(gen_frame + 0xc))[0x1c] = (char)uVar3;
  ((byte *)(gen_frame + 0xc))[0x1d] = (char)(uVar3 >> 8);
  ((byte *)(gen_frame + 0xc))[0x1e] = (char)(uVar3 >> 0x10);
  ((byte *)(gen_frame + 0xc))[0x1f] = (char)(uVar3 >> 0x18);
  iVar10 = piVar4[2];
  iVar8 = 0;
  if (-1 < iVar10) {
    piVar11 = (int *)*piVar4;
    do {
      if (*piVar11 != -1) break;
      iVar8 = iVar8 + 1;
      piVar11 = piVar11 + 8;
    } while (iVar8 <= iVar10);
  }
  if (iVar8 <= iVar10) {
    do {
      iVar10 = iVar8 * 0x20 + 8 + *piVar4;
      (*(undefined8 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) = *(undefined8 *)(iVar8 * 0x20 + 8 + *piVar4);
      uVar2 = *(undefined8 *)(iVar10 + 8);
      ((byte *)(gen_frame + 0xc))[8] = (byte)uVar2;
      ((byte *)(gen_frame + 0xc))[9] = SUB81(uVar2,1);
      ((byte *)(gen_frame + 0xc))[10] = SUB81(uVar2,2);
      ((byte *)(gen_frame + 0xc))[0xb] = SUB81(uVar2,3);
      ((byte *)(gen_frame + 0xc))[0xc] = SUB81(uVar2,4);
      ((byte *)(gen_frame + 0xc))[0xd] = SUB81(uVar2,5);
      ((byte *)(gen_frame + 0xc))[0xe] = SUB81(uVar2,6);
      ((byte *)(gen_frame + 0xc))[0xf] = SUB81(uVar2,7);
      uVar6 = (*(undefined8 *)((char *)((byte *)(gen_frame + 0xc)) + 8));
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) = (undefined4)uVar2;
      (*(undefined8 *)((char *)((byte *)(gen_frame + 0xc)) + 16)) = *(undefined8 *)(iVar10 + 0x10);
      if (-1 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8))) {
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12)) = SUB84(uVar2,4);
        iVar10 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8));
        do {
          puVar1 = ((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24)) + iVar10 * 8)));
          uVar3 = *puVar1;
          *puVar1 = *puVar1 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12));
          piVar11 = ((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24)) + iVar10 * 8 + 4)));
          *piVar11 = *piVar11 + ((int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12)) >> 0x1f) + (uint)CARRY4(uVar3,(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12)));
          iVar10 = *((int *)GEN_TOP((*(int *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 44)) + 4 + iVar10 * 0x14)));
        } while (-1 < iVar10);
      }
      iVar10 = piVar4[2];
      iVar8 = iVar8 + 1;
      if (iVar8 <= iVar10) {
        piVar11 = (int *)(iVar8 * 0x20 + *piVar4);
        do {
          if (*piVar11 != -1) break;
          iVar8 = iVar8 + 1;
          piVar11 = piVar11 + 8;
        } while (iVar8 <= iVar10);
      }
      (*(undefined8 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) = uVar6;
    } while (iVar8 <= iVar10);
  }
  iVar8 = *(int *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 44));
  iVar7 = *(int *)(iVar8 + 8);
  iVar10 = 0;
  while ((iVar5 = iVar7, 0 < iVar5 && (*(int *)(iVar8 + 0xc + iVar5 * 0x14) < 0))) {
    iVar10 = iVar5;
    iVar7 = *(int *)(iVar8 + iVar5 * 0x14 + 8);
  }
  F_00db4380(param_1,iVar10,0,(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 44)),((byte *)(gen_frame + 0xc)) + 0x18);
  ((byte *)(gen_frame + 0xc))[0x1c] = 0;
  ((byte *)(gen_frame + 0xc))[0x1d] = 0;
  ((byte *)(gen_frame + 0xc))[0x1e] = 0;
  ((byte *)(gen_frame + 0xc))[0x1f] = 0;
  if (-1 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 32))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a8),(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 32)) * 8);
  }
  ((byte *)(gen_frame + 0xc))[0x18] = 0;
  ((byte *)(gen_frame + 0xc))[0x19] = 0;
  ((byte *)(gen_frame + 0xc))[0x1a] = 0;
  ((byte *)(gen_frame + 0xc))[0x1b] = 0;
  ((byte *)(gen_frame + 0xc))[0x20] = 0;
  ((byte *)(gen_frame + 0xc))[0x21] = 0;
  ((byte *)(gen_frame + 0xc))[0x22] = 0;
  ((byte *)(gen_frame + 0xc))[0x23] = 0x80;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 36)));
  return 0;
}

/* ref: FUN_00db4cd0 */
uint F_00db4cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00db4ce0 */
uint F_00db4ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00db4d70 */
uint F_00db4d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4d70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = (*(uint *)(in_ecx + 4) & 0x80000000) == 0;
  return param_2;
}

/* ref: FUN_00db4d90 */
uint F_00db4d90(unsigned int gen_a0)
{
  GEN_ENTER(0xdb4d90u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  return (uint)(((*(uint *)&gen_args[0]) - 1 & (*(uint *)&gen_args[0])) == 0);
}

/* ref: FUN_00db4db0 */
uint F_00db4db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4db0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00db4dc0 */
uint F_00db4dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00db4e00 */
uint F_00db4e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4e00u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(param_2 * 0x20 + *in_ecx);
}

/* ref: FUN_00db4e20 */
uint F_00db4e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb4e20u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = param_3 * 0x20 + 8 + *in_ecx;
  *param_2 = *(undefined8 *)(param_3 * 0x20 + 8 + *in_ecx);
  param_2[1] = *(undefined8 *)(iVar1 + 8);
  param_2[2] = *(undefined8 *)(iVar1 + 0x10);
  return (uint)param_2;
}

/* ref: FUN_00db4e60 */
uint F_00db4e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xdb4e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined8 * puVar1;
  
  puVar1 = (undefined8 *)(param_2 * 0x20 + 8 + *in_ecx);
  *puVar1 = CONCAT44(param_4,param_3);
  puVar1[1] = CONCAT44(param_6,param_5);
  puVar1[2] = CONCAT44(param_8,param_7);
  return (uint)puVar1;
}

/* ref: FUN_00db4e90 */
uint F_00db4e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb4e90u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00db4ec0 */
uint F_00db4ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb4ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  *(undefined4 *)this = param_1;
  *(uint *)((int)this + 4) = param_2 | 0x80000000;
  *(uint *)((int)this + 8) = param_3 - 1U;
  return param_3 - 1U;
}

/* ref: FUN_00db4ee0 */
uint F_00db4ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb4ee0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_1 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 2);
  }
  return iVar1 << 5;
}

/* ref: FUN_00db4f30 */
uint F_00db4f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4f30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x18;
}

/* ref: FUN_00db4fa0 */
uint F_00db4fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4fa0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00db4fb0 */
uint F_00db4fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4fb0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00db4fc0 */
uint F_00db4fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4fc0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00db4ff0 */
uint F_00db4ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4ff0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return ((*(uint *)&gen_args[0]) >> 4) * -0x61c8864f & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00db5010 */
uint F_00db5010(unsigned int gen_a0)
{
  GEN_ENTER(0xdb5010u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0xffffffff;
  return (uint)param_1;
}

/* ref: FUN_00db5020 */
byte F_00db5020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb5020u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 == param_2;
}

/* ref: FUN_00db5030 */
uint F_00db5030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb5030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this,param_1 * 0x48);
  return uVar1;
}

/* ref: FUN_00db5050 */
uint F_00db5050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb5050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this,param_1 * 4);
  return uVar1;
}

/* ref: FUN_00db5080 */
uint F_00db5080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb5080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0x18);
  return uVar1;
}

/* ref: FUN_00db50b0 */
unsigned int F_00db50b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb50b0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00db50f0 */
uint F_00db50f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb50f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00db5120 */
uint F_00db5120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb5120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00db5140 */
uint F_00db5140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb5140u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  if ((param_1[1] <= param_2[1]) && ((param_1[1] < param_2[1] || (*param_1 < *param_2)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00db51a0 */
uint F_00db51a0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb51a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00db51c0 */
unsigned int F_00db51c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb51c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00db5210 */
uint F_00db5210(unsigned int gen_a0)
{
  GEN_ENTER(0xdb5210u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00db5230 */
unsigned int F_00db5230(unsigned int gen_a0)
{
  GEN_ENTER(0xdb5230u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00db5290 */
unsigned int F_00db5290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb5290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *(int *)((int)this + 8)) {
    piVar2 = (int *)(iVar1 * 0x20 + *(int *)this);
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 8;
    } while (iVar1 <= *(int *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_00db52c0 */
uint F_00db52c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xdb52c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined8 * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_00db56e0(this,param_1,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar2 = *(int *)this;
  uVar4 = (param_2 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  iVar5 = uVar4 * 0x20;
  uVar3 = 1;
  if (*(int *)(iVar2 + iVar5) != -1) {
    do {
      if (*(uint *)(iVar2 + iVar5) == param_2) {
        uVar3 = 0;
        goto LAB_00db532d;
      }
      uVar4 = uVar4 + 1 & *(uint *)((int)this + 8);
      iVar5 = uVar4 * 0x20;
    } while (*(int *)(iVar5 + iVar2) != -1);
    uVar3 = 1;
  }
LAB_00db532d: ;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + uVar3;
  *(uint *)(iVar2 + uVar4 * 0x20) = param_2;
  puVar1 = (undefined8 *)(uVar4 * 0x20 + 8 + *(int *)this);
  *puVar1 = CONCAT44(param_4,param_3);
  puVar1[1] = CONCAT44(param_6,param_5);
  puVar1[2] = CONCAT44(param_8,param_7);
  return uVar3;
}

/* ref: FUN_00db5370 */
uint F_00db5370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb5370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((int)this + 8);
  if (0 < (int)uVar1) {
    uVar3 = (param_1 >> 4) * -0x61c8864f & uVar1;
    uVar2 = *(uint *)(uVar3 * 0x20 + *(int *)this);
    while (uVar2 != 0xffffffff) {
      if (uVar2 == param_1) {
        return uVar3;
      }
      uVar3 = uVar3 + 1 & uVar1;
      uVar2 = *(uint *)(uVar3 * 0x20 + *(int *)this);
    }
  }
  return uVar1 + 1;
}

/* ref: FUN_00db53c0 */
uint F_00db53c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xdb53c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = *(uint *)((int)this + 8);
  if (0 < (int)uVar2) {
    iVar3 = *(int *)this;
    uVar5 = (param_2 >> 4) * -0x61c8864f & uVar2;
    uVar4 = *(uint *)(uVar5 * 0x20 + iVar3);
    while (uVar4 != 0xffffffff) {
      if (uVar4 == param_2) {
        iVar1 = uVar5 * 0x20 + 8 + iVar3;
        *param_1 = *(undefined8 *)(uVar5 * 0x20 + 8 + iVar3);
        param_1[1] = *(undefined8 *)(iVar1 + 8);
        param_1[2] = *(undefined8 *)(iVar1 + 0x10);
        return (uint)param_1;
      }
      uVar5 = uVar5 + 1 & uVar2;
      uVar4 = *(uint *)(uVar5 * 0x20 + iVar3);
    }
  }
  *param_1 = CONCAT44(param_4,param_3);
  param_1[1] = CONCAT44(param_6,param_5);
  param_1[2] = CONCAT44(param_8,param_7);
  return (uint)param_1;
}

/* ref: FUN_00db5460 */
uint F_00db5460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb5460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = F_00db5370(this,param_1);
  if ((int)uVar4 <= *(int *)((int)this + 8)) {
    iVar3 = *(int *)this;
    iVar5 = uVar4 * 0x20;
    uVar1 = *(undefined8 *)(iVar5 + 0x10 + iVar3);
    uVar2 = *(undefined8 *)(iVar5 + 0x18 + iVar3);
    *param_2 = *(undefined8 *)(iVar5 + 8 + iVar3);
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    return 0;
  }
  return 1;
}

/* ref: FUN_00db54c0 */
unsigned int F_00db54c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb54c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined8 * puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  *(undefined4 *)(param_1 * 0x20 + *(int *)this) = 0xffffffff;
  uVar7 = *(uint *)((int)this + 8);
  uVar4 = uVar7 + param_1 & uVar7;
  iVar2 = *(int *)(uVar4 * 0x20 + *(int *)this);
  while (iVar2 != -1) {
    uVar4 = uVar4 + uVar7 & uVar7;
    iVar2 = *(int *)(uVar4 * 0x20 + *(int *)this);
  }
  uVar5 = uVar4 + 1 & uVar7;
  uVar4 = param_1 + 1 & uVar7;
  iVar6 = uVar4 * 0x20;
  iVar2 = *(int *)(*(int *)this + iVar6);
  uVar8 = param_1;
  while (iVar2 != -1) {
    uVar7 = (*(uint *)(*(int *)this + iVar6) >> 4) * -0x61c8864f & uVar7;
    if ((((uVar4 < uVar5) || (uVar7 <= uVar8)) &&
        ((uVar8 <= uVar4 || ((uVar7 <= uVar8 && (uVar4 < uVar7)))))) &&
       ((uVar7 <= uVar8 || (uVar5 <= uVar7)))) {
      *(uint *)(uVar8 * 0x20 + *(int *)this) = *(uint *)(*(int *)this + iVar6);
      iVar3 = *(int *)this;
      iVar2 = iVar3 + 8 + iVar6;
      puVar1 = (undefined8 *)(uVar8 * 0x20 + 8 + iVar3);
      *puVar1 = *(undefined8 *)(iVar3 + 8 + iVar6);
      puVar1[1] = *(undefined8 *)(iVar2 + 8);
      puVar1[2] = *(undefined8 *)(iVar2 + 0x10);
      *(undefined4 *)(iVar6 + *(int *)this) = 0xffffffff;
      uVar8 = uVar4;
    }
    uVar7 = *(uint *)((int)this + 8);
    uVar4 = uVar4 + 1 & uVar7;
    iVar6 = uVar4 * 0x20;
    iVar2 = *(int *)(iVar6 + *(int *)this);
  }
  return 0;
}

/* ref: FUN_00db55c0 */
uint F_00db55c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb55c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint * puVar6;
  int local_8;
  
  uVar1 = *(uint *)((int)this + 8);
  if (-1 < (int)uVar1) {
    puVar2 = *(uint * PTR32 *)this;
    local_8 = uVar1 + 1;
    puVar6 = puVar2;
    do {
      uVar3 = *puVar6;
      if (uVar3 != 0xffffffff) {
        uVar5 = (uVar3 >> 4) * -0x61c8864f & uVar1;
        uVar4 = puVar2[uVar5 * 8];
        while (uVar4 != uVar3) {
          uVar5 = uVar5 + 1 & uVar1;
          uVar4 = puVar2[uVar5 * 8];
        }
      }
      puVar6 = puVar6 + 8;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00db5620 */
uint F_00db5620(unsigned int gen_a0)
{
  GEN_ENTER(0xdb5620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 8) + 1;
  if (0 < iVar1) {
    in_EAX = 0;
    do {
      *(undefined4 *)(in_EAX + *(int *)this) = 0xffffffff;
      in_EAX = in_EAX + 0x20;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0x80000000;
  return in_EAX;
}

/* ref: FUN_00db5650 */
uint F_00db5650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb5650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00db5620(this);
  if ((*(uint *)((int)this + 4) & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))
                      (param_1,*(undefined4 *)this,(*(int *)((int)this + 8) + 1) * 0x20);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_00db56a0 */
unsigned int F_00db56a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb56a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 >> 5;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0x80000000;
  *(uint *)((int)this + 8) = uVar2 - 1;
  if (uVar2 != 0) {
    iVar1 = 0;
    do {
      *(undefined4 *)(iVar1 + *(int *)this) = 0xffffffff;
      iVar1 = iVar1 + 0x20;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00db56e0 */
uint F_00db56e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb56e0u, gen_a0, gen_a1, gen_a2, 0u);
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
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,iVar7 << 5);
  if (uVar3 != 0) {
    *(uint *)this = uVar3;
    if (0 < iVar7) {
      iVar4 = 0;
      iVar5 = iVar7;
      do {
        *(undefined4 *)(iVar4 + *(int *)this) = 0xffffffff;
        iVar4 = iVar4 + 0x20;
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
          F_00db52c0(this,param_1,*piVar8,(int)*(undefined8 *)(piVar8 + 2),
                       (int)((ulonglong)*(undefined8 *)(piVar8 + 2) >> 0x20),
                       (int)*(undefined8 *)(piVar8 + 4),
                       (int)((ulonglong)*(undefined8 *)(piVar8 + 4) >> 0x20),
                       (int)*(undefined8 *)(piVar8 + 6),
                       (int)((ulonglong)*(undefined8 *)(piVar8 + 6) >> 0x20));
        }
        iVar7 = param_2 + -1;
        piVar8 = piVar8 + 8;
        param_2 = iVar7;
      } while (iVar7 != 0);
    }
    if ((uVar1 & 0x80000000) == 0) {
      ((code *)*(gen_code32 *)(*param_1 + 8))(param_1,piVar2,iVar6 * 0x20);
    }
    return 0;
  }
  return 1;
}

/* ref: FUN_00db57d0 */
uint F_00db57d0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb57d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x30) + 4))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x30),param_1 * 0x48);
  return uVar2;
}

/* ref: FUN_00db5800 */
uint F_00db5800(unsigned int gen_a0)
{
  GEN_ENTER(0xdb5800u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x30) + 4))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x30),param_1 * 4);
  return uVar2;
}

/* ref: FUN_00db5830 */
uint F_00db5830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb5830u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00db5880 */
unsigned int F_00db5880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb5880u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00db58c0 */
uint F_00db58c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb58c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00db5900 */
uint F_00db5900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb5900u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00db5940 */
unsigned int F_00db5940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb5940u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined8 * puVar1;
  undefined8 * puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint * puVar7;
  int iVar8;
  int iVar9;
  uint local_30;
  uint uStack_2c;
  
  do {
    uVar3 = *((undefined8 *)GEN_TOP((param_1 + (param_2 + param_3 >> 1) * 0x18)));
    iVar8 = param_3;
    iVar9 = param_2;
    do {
      puVar7 = (uint *)(param_1 + iVar9 * 0x18);
      while( true ) {
        uStack_2c = (uint)((ulonglong)uVar3 >> 0x20);
        local_30 = (uint)uVar3;
        if ((uStack_2c < puVar7[1]) || ((uStack_2c <= puVar7[1] && (local_30 <= *puVar7)))) break;
        iVar9 = iVar9 + 1;
        puVar7 = puVar7 + 6;
      }
      for (puVar7 = (uint *)(param_1 + iVar8 * 0x18);
          (uStack_2c <= puVar7[1] && ((uStack_2c < puVar7[1] || (local_30 < *puVar7))));
          puVar7 = puVar7 + -6) {
        iVar8 = iVar8 + -1;
      }
      if (iVar8 < iVar9) break;
      if (iVar8 != iVar9) {
        uVar4 = *(undefined8 *)(param_1 + iVar8 * 0x18);
        uVar5 = *(undefined8 *)(param_1 + 8 + iVar8 * 0x18);
        uVar6 = *(undefined8 *)(param_1 + 0x10 + iVar8 * 0x18);
        puVar1 = (undefined8 *)(param_1 + iVar8 * 0x18);
        puVar2 = (undefined8 *)(param_1 + iVar9 * 0x18);
        *puVar1 = *(undefined8 *)(param_1 + iVar9 * 0x18);
        puVar1[1] = puVar2[1];
        puVar1[2] = puVar2[2];
        *puVar2 = uVar4;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
      }
      iVar8 = iVar8 + -1;
      iVar9 = iVar9 + 1;
    } while (iVar9 <= iVar8);
    if (param_2 < iVar8) {
      F_00db5940(param_1,param_2,iVar8,param_4);
    }
    param_2 = iVar9;
    if (param_3 <= iVar9) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00db5a50 */
uint F_00db5a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb5a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00db5650(this,param_1);
  return uVar1;
}

/* ref: FUN_00db5a70 */
uint F_00db5a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb5a70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00db5370(this,param_2);
  *(bool *)param_1 = (int)uVar1 <= *(int *)((int)this + 8);
  return param_1;
}

/* ref: FUN_00db5aa0 */
uint F_00db5aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xdb5aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_00db52c0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00db5ae0 */
uint F_00db5ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb5ae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00db56a0(this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00db5b00 */
uint F_00db5b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xdb5b00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint * param_9 = (uint *)(uintptr_t)gen_a9;
  uint uVar1;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    uVar1 = F_00db56e0(this,param_1,*(int *)((int)this + 8) * 2 + 2);
    *param_9 = uVar1;
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    *param_9 = 0;
  }
  uVar1 = F_00db52c0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00db5b80 */
unsigned int F_00db5b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xdb5b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined8 * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_00db56e0(this,param_1,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar4 = *(int *)this;
  uVar2 = (param_2 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  iVar3 = uVar2 * 0x20;
  if (*(uint *)(iVar4 + iVar3) != param_2) {
    while (*(int *)(iVar4 + iVar3) != -1) {
      iVar4 = *(int *)this;
      uVar2 = uVar2 + 1 & *(uint *)((int)this + 8);
      iVar3 = uVar2 * 0x20;
      if (*(uint *)(iVar3 + iVar4) == param_2) {
        return 0;
      }
    }
    *(uint *)(iVar4 + uVar2 * 0x20) = param_2;
    puVar1 = (undefined8 *)(uVar2 * 0x20 + 8 + *(int *)this);
    *puVar1 = CONCAT44(param_4,param_3);
    puVar1[1] = CONCAT44(param_6,param_5);
    puVar1[2] = CONCAT44(param_8,param_7);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  }
  return 0;
}

/* ref: FUN_00db5c30 */
uint F_00db5c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb5c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00db5370(this,param_1);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    F_00db54c0(this,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_00db5c60 */
uint F_00db5c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb5c60u, gen_a0, gen_a1, gen_a2, 0u);
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
  uVar2 = F_00db56e0(this,param_1,iVar1);
  return uVar2;
}

/* ref: FUN_00db5c90 */
uint F_00db5c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb5c90u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00db5ce0 */
uint F_00db5ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb5ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  undefined8 * puVar1;
  
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0x18)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00db5d20 */
uint F_00db5d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb5d20u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00db5d90 */
uint F_00db5d90(unsigned int gen_a0)
{
  GEN_ENTER(0xdb5d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a8),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db5dd0 */
unsigned int F_00db5dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb5dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (1 < param_2) {
    F_00db5940(param_1,0,param_2 + -1,param_3);
  }
  return 0;
}

/* ref: FUN_00db5e00 */
uint F_00db5e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb5e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < (int)param_1) {
    uVar2 = uVar2 * 2;
    if ((int)uVar2 <= (int)param_1) {
      uVar2 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a8),this,uVar2,8);
  }
  iVar3 = param_1 - *(int *)((int)this + 4);
  iVar1 = *(int *)this + *(int *)((int)this + 4) * 8;
  uVar2 = 0;
  if (iVar3 < 1) {
    *(uint *)((int)this + 4) = param_1;
    return uVar2;
  }
  do {
    *(undefined4 *)(iVar1 + uVar2 * 8) = *param_2;
    *(undefined4 *)(iVar1 + 4 + uVar2 * 8) = param_2[1];
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < iVar3);
  *(uint *)((int)this + 4) = param_1;
  return param_1;
}

/* ref: FUN_00db5e70 */
uint F_00db5e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb5e70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00db5ae0(this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00db5e90 */
uint F_00db5e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xdb5e90u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = F_00db5b00(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
  return uVar1;
}

/* ref: FUN_00db5ed0 */
unsigned int F_00db5ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xdb5ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  F_00db5b80(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return 0;
}

/* ref: FUN_00db5f10 */
uint F_00db5f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb5f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00db5c60(this,&REFG(undefined * PTR32, 0x13516ac),param_1);
  return uVar1;
}

/* ref: FUN_00db5f30 */
unsigned int F_00db5f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb5f30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  if (1 < param_2) {
    F_00db5940(param_1,0,param_2 + -1,0);
  }
  return 0;
}

/* ref: FUN_00db5f60 */
uint F_00db5f60(unsigned int gen_a0)
{
  GEN_ENTER(0xdb5f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a8),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db5fa0 */
uint F_00db5fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb5fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  if (param_1 != 0) {
    F_00db5c60(this,&REFG(undefined * PTR32, 0x13516ac),param_1);
  }
  return (uint)this;
}

/* ref: FUN_00db5fe0 */
unsigned int F_00db5fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb5fe0u, gen_a0, gen_a1, 0u, 0u);
  LONG * param_1 = (LONG *)(uintptr_t)gen_a0;
  LONG param_2 = (LONG)gen_a1;
  gen_imp_InterlockedExchangeAdd(param_1,param_2);
  return 0;
}

/* ref: hkMallocAllocator::vf1 */
uint F_00db6000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_size32 param_1 = (gen_size32)gen_a1;
  LONG LVar1;
  undefined * pvVar2;
  
  LVar1 = gen_imp_InterlockedExchangeAdd((LONG *)(this + 8),param_1);
  if (*(uint *)(this + 0xc) < LVar1 + param_1) {
    *(LONG *)(this + 0xc) = *(LONG *)(this + 8);
  }
  pvVar2 = F_00c480eb(param_1,*(gen_size32 *)(this + 4));
  return (uint)pvVar2;
}

/* ref: hkMallocAllocator::vf2 */
uint F_00db6040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb6040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint extraout_EAX = 0;
  
  gen_imp_InterlockedExchangeAdd((LONG *)(this + 8),-param_2);
  F_00c480d1(param_1);
  return extraout_EAX;
}

/* ref: hkMallocAllocator::vf8 */
uint F_00db6070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)(this + 8);
  param_1[2] = *(undefined4 *)(this + 0xc);
  return (uint)param_1;
}

/* ref: hkMallocAllocator::vf10 */
uint F_00db6090(unsigned int gen_a0)
{
  GEN_ENTER(0xdb6090u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(uint *)(in_ecx + 0xc) = *(uint *)(in_ecx + 8);
  return *(uint *)(in_ecx + 8);
}

/* ref: hkMallocAllocator::vf9 */
uint F_00db60a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb60a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  return param_2;
}

/* ref: FUN_00db60b0 */
uint F_00db60b0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb60b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00db60c0 */
unsigned int F_00db60c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb60c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(HANDLE *)this != (HANDLE)0x0) {
    gen_imp_CloseHandle(*(HANDLE *)this);
    *(undefined4 *)this = 0;
  }
  return 0;
}

/* ref: FUN_00db60e0 */
uint F_00db60e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdb60e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x58];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x44);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  HANDLE pvVar1;
  
  (*(undefined4 *)(gen_frame + 0x38)) = 0xffffffff;
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = &REFG(undefined, 0x12f7550);
  (*(gen_code32 *)(gen_frame + 0x30)) = ((code *)REFP(0x1052968));
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined1 * PTR32 *)(gen_frame + 0x24)) = (gen_frame + 0x8);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x2c));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x2c)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  pvVar1 = gen_imp_CreateThread((GEN_LPANY)0x0,(*(SIZE_T *)&gen_args[4]),(*(GEN_LPANY *)&gen_args[1]),(*(LPVOID *)&gen_args[2]),0,(LPDWORD)&(*(LPVOID *)&gen_args[2]));
  *(HANDLE *)(*(undefined * PTR32 *)&gen_args[0]) = pvVar1;
  if (pvVar1 == (HANDLE)0x0) {
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x2c));
    return 1;
  }
  *((LPVOID *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (*(LPVOID *)&gen_args[2]);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  (*(ULONG_PTR *)(gen_frame + 0x14)) = 0x1000;
  (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)&gen_args[3]);
  (*(LPVOID *)(gen_frame + 0x1c)) = (*(LPVOID *)&gen_args[2]);
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  gen_imp_RaiseException(0x406d1388,0,4,&(*(ULONG_PTR *)(gen_frame + 0x14)));
  (*(undefined4 *)(gen_frame + 0x38)) = 0xffffffff;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x2c));
  return 0;
}

/* ref: FUN_00db6171 */
uint F_00db6171(unsigned int gen_a0)
{
  GEN_ENTER(0xdb6171u, gen_a0, 0u, 0u, 0u);
  int in_ebp = (int)gen_a0;
  return (uint)(*((int *)GEN_TOP(**(undefined4 * PTR32 *)(in_ebp + -0x14))) != 0x406d1388) * 2 - 1;
}

/* ref: FUN_00db6186 */
uint F_00db6186(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdb6186u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ebp = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  *(undefined4 *)(in_ebp + -4) = 0xffffffff;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = *(undefined * PTR32 *)(in_ebp + -0x10);
  return 0;
}

/* ref: FUN_00db61b0 */
uint F_00db61b0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb61b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(HANDLE *)this == (HANDLE)0x0) {
    return 2;
  }
  gen_imp_GetExitCodeThread(*(HANDLE *)this,(LPDWORD)&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  return (uint)((*(undefined * PTR32 *)(gen_frame + 0x8)) == (undefined *)0x103);
}

/* ref: FUN_00db61e0 */
uint F_00db61e0(void)
{
  GEN_ENTER(0xdb61e0u, 0u, 0u, 0u, 0u);
  DWORD DVar1;
  
  DVar1 = gen_imp_GetCurrentThreadId();
  return DVar1;
}

/* ref: FUN_00db6220 */
unsigned int F_00db6220(unsigned int gen_a0)
{
  GEN_ENTER(0xdb6220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x113d6d4));
  F_00dc0bd0(this);
  F_00d9b7c0(this);
  return 0;
}

/* ref: hkThreadMemory::vf0 */
uint F_00db6250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x113d6d4));
  F_00dc0bd0(this);
  F_00d9b7c0(this);
  return (uint)this;
}

/* ref: FUN_00db6290 */
uint F_00db6290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6290u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x28) = param_2;
  return param_2;
}

/* ref: FUN_00db62a0 */
uint F_00db62a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb62a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x2c) = param_2;
  return param_2;
}

/* ref: FUN_00db62b0 */
uint F_00db62b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb62b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x30) = param_2;
  return param_2;
}

/* ref: FUN_00db62c0 */
uint F_00db62c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb62c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x34) = param_2;
  return param_2;
}

/* ref: FUN_00db62e0 */
uint F_00db62e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb62e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x38) = param_2;
  return param_2;
}

/* ref: FUN_00db6300 */
uint F_00db6300(unsigned int gen_a0)
{
  GEN_ENTER(0xdb6300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00dc0b40(this);
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined1 *)((int)this + 300) = 0;
  return (uint)this;
}

/* ref: FUN_00db6330 */
uint F_00db6330(unsigned int gen_a0)
{
  GEN_ENTER(0xdb6330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  F_00d9b7c0(this);
  return extraout_EAX;
}

/* ref: FUN_00db6350 */
unsigned int F_00db6350(unsigned int gen_a0)
{
  GEN_ENTER(0xdb6350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x113d6d4));
  F_00dc0bd0(this);
  F_00d9b7c0(this);
  return 0;
}

/* ref: hkFreeListMemorySystem::vf9 */
unsigned int F_00db63a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb63a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  code * pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x78)) = this;
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x6c)) = (LPCRITICAL_SECTION)(this + 0x4ec8);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x4ec8));
  F_00da00e0(param_1,
               "hkFreeListMemorySystem memory overview:\n=======================================\n")
  ;
  piVar1 = *(int * PTR32 *)(this + 4);
  (*(undefined4 *)(gen_frame + 0x24)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x30)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x34)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x38)) = 0xffffffff;
  ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1,&(*(undefined4 *)(gen_frame + 0x24)));
  piVar1 = *(int * PTR32 *)(this + 0xc);
  ((int *)(gen_frame + 0x54))[0] = -1;
  ((int *)(gen_frame + 0x54))[1] = 0xffffffff;
  ((int *)(gen_frame + 0x54))[2] = -1;
  ((int *)(gen_frame + 0x54))[3] = 0xffffffff;
  ((int *)(gen_frame + 0x54))[4] = 0xffffffff;
  ((int *)(gen_frame + 0x54))[5] = 0xffffffff;
  ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1,((int *)(gen_frame + 0x54)));
  pcVar2 = *((gen_code32 *)GEN_TOP((*(int *)(this + 0x14) + 0x20)));
  (*(undefined4 *)(gen_frame + 0x3c)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x40)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x44)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x48)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0xffffffff;
  (*(undefined4 *)(gen_frame + 0x50)) = 0xffffffff;
  (*pcVar2)(this + 0x14,&(*(undefined4 *)(gen_frame + 0x3c)));
  F_00da00e0(param_1,"\n    Allocation totals:\n\n");
  F_00da00e0(param_1,"%20i allocated by heap\n",((int *)(gen_frame + 0x54))[0]);
  F_00da00e0(param_1,"%20i allocated by debug\n",(*(undefined4 *)(gen_frame + 0x3c)));
  F_00da00e0(param_1,"%20i allocated by solver\n",*(undefined4 *)(this + 8));
  F_00da00e0(param_1,"%20s\n","-------");
  F_00da00e0(param_1,"%20i total allocated\n",(*(undefined4 *)(gen_frame + 0x24)));
  F_00da00e0(param_1,"\n    Heap usage:\n\n");
  param_1 = 0;
  if (((byte)this[0x4ee0] & 4) != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x74)) = this + 0x2c8;
    (*(uint *)(gen_frame + 0x70)) = 0x40;
    do {
      if ((*(undefined * PTR32 *)(gen_frame + 0x74))[300] != (undefined1)0x0) {
        pcVar2 = *(gen_code32 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x74)) + 0x20);
        (*(undefined4 *)(gen_frame + 0xc)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x14)) = 0xffffffff;
        (*(int *)(gen_frame + 0x18)) = -1;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x20)) = 0xffffffff;
        (*pcVar2)((*(undefined * PTR32 *)(gen_frame + 0x74)),&(*(undefined4 *)(gen_frame + 0xc)));
        param_1 = param_1 + (*(int *)(gen_frame + 0x18));
      }
      (*(undefined * PTR32 *)(gen_frame + 0x74)) = (*(undefined * PTR32 *)(gen_frame + 0x74)) + 0x130;
      iVar6 = (*(uint *)(gen_frame + 0x70)) + -1;
      (*(uint *)(gen_frame + 0x70)) = iVar6;
    } while (iVar6 != 0);
    if (((int *)(gen_frame + 0x54))[0] == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (undefined4)(((longlong)param_1 * 100) / (longlong)((int *)(gen_frame + 0x54))[0]);
      this = (*(undefined * PTR32 *)(gen_frame + 0x78));
    }
    F_00da00e0(uVar3,"%20i (%2i%%) unused in thread local freelists\n",param_1,uVar4);
  }
  uVar5 = -(uint)(((int *)(gen_frame + 0x54))[3] != 0xffffffff) & ((int *)(gen_frame + 0x54))[3];
  (*(uint *)(gen_frame + 0x70)) = uVar5;
  if (((int *)(gen_frame + 0x54))[0] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (undefined4)(((longlong)(int)uVar5 * 100) / (longlong)((int *)(gen_frame + 0x54))[0]);
    this = (*(undefined * PTR32 *)(gen_frame + 0x78));
  }
  F_00da00e0(uVar3,"%20i (%2i%%) unused in main heap\n",uVar5,uVar4);
  iVar6 = (((int *)(gen_frame + 0x54))[0] - (*(uint *)(gen_frame + 0x70))) - param_1;
  if (((int *)(gen_frame + 0x54))[0] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (undefined4)(((longlong)iVar6 * 100) / (longlong)((int *)(gen_frame + 0x54))[0]);
    this = (*(undefined * PTR32 *)(gen_frame + 0x78));
  }
  F_00da00e0(uVar3,"%20i (%2i%%) used in main heap\n",iVar6,uVar4);
  F_00da00e0(uVar3,"%20s\n","-------");
  F_00da00e0(uVar3,"%20i allocated by heap\n",((int *)(gen_frame + 0x54))[0]);
  F_00da00e0(uVar3,"\n    Peak usage:\n\n");
  if (((int *)(gen_frame + 0x54))[2] != -1) {
    if (((int *)(gen_frame + 0x54))[2] == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (undefined4)(((longlong)iVar6 * 100) / (longlong)((int *)(gen_frame + 0x54))[2]);
    }
    F_00da00e0(uVar3,"%20i (%2i%%) peak heap used (versus current)\n",((int *)(gen_frame + 0x54))[2],uVar4);
  }
  if (*(int *)(this + 0x94) - *(int *)(this + 0x90) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (undefined4)
            (((longlong)*(int *)(this + 0xa0) * 100) /
            (longlong)(*(int *)(this + 0x94) - *(int *)(this + 0x90)));
  }
  F_00da00e0(uVar3,"%20i (%2i%%) peak solver used (versus available)\n",
               *(undefined4 *)(this + 0xa0),uVar4);
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x6c)));
  return 0;
}

/* ref: hkFreeListMemorySystem::vf11 */
uint F_00db66b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb66b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  code * pcVar2;
  uint uVar3;
  undefined * phVar4;
  int iVar5;
  
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x20))))(*(int * PTR32 *)(this + 0xc),param_1);
  if (((byte)this[0x4ee0] & 4) != 0) {
    (*(LPCRITICAL_SECTION *)(gen_frame + 0x24)) = (LPCRITICAL_SECTION)(this + 0x4ec8);
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x4ec8));
    iVar5 = 0;
    phVar4 = this + 0x2c8;
    (*(int *)(gen_frame + 0x28)) = 0x40;
    do {
      if (phVar4[300] != (undefined1)0x0) {
        pcVar2 = *(gen_code32 *)(*(int *)phVar4 + 0x20);
        (*(undefined4 *)(gen_frame + 0xc)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x10)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x14)) = 0xffffffff;
        (*(int *)(gen_frame + 0x18)) = -1;
        (*(undefined4 *)(gen_frame + 0x1c)) = 0xffffffff;
        (*(undefined4 *)(gen_frame + 0x20)) = 0xffffffff;
        (*pcVar2)(phVar4,&(*(undefined4 *)(gen_frame + 0xc)));
        iVar5 = iVar5 + (*(int *)(gen_frame + 0x18));
      }
      phVar4 = phVar4 + 0x130;
      iVar1 = (*(int *)(gen_frame + 0x28)) + -1;
      (*(int *)(gen_frame + 0x28)) = iVar1;
    } while (iVar1 != 0);
    gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x24)));
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) - iVar5;
    uVar3 = param_1;
  }
  return uVar3;
}

/* ref: hkFreeListMemorySystem::vf12 */
uint F_00db6750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xdb6750u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x10) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0x18))))
                      (*(int * PTR32 *)(this + 0x10),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return 1;
}

/* ref: hkFreeListMemorySystem::vf13 */
unsigned int F_00db6770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (((byte)this[0x4ee0] & 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x2c) + 0x2c))))(*(int * PTR32 *)(param_1 + 0x2c));
  }
  return 0;
}

/* ref: hkFreeListMemorySystem::vf14 */
uint F_00db6790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xdb6790u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x10) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 4))))
                      (*(int * PTR32 *)(this + 0x10),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: hkFreeListMemorySystem::vf18 */
uint F_00db67b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb67b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: hkFreeListMemorySystem::vf5 */
uint F_00db67c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xdb67c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x10) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0xc))))
                      (*(int * PTR32 *)(this + 0x10),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return 0;
}

/* ref: hkFreeListMemorySystem::vf6 */
uint F_00db67e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xdb67e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x10) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0x10))))
                      (*(int * PTR32 *)(this + 0x10),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return 0;
}

/* ref: hkFreeListMemorySystem::vf7 */
byte F_00db6800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6800u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00dc0c40(in_ecx + 0x8c,param_2);
  return bVar1;
}

/* ref: hkFreeListMemorySystem::vf8 */
byte F_00db6810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xdb6810u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x10) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0x14))))
                      (*(int * PTR32 *)(this + 0x10),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return (byte)uVar1;
  }
  return 1;
}

/* ref: hkFreeListMemorySystem::vf10 */
uint F_00db6830(unsigned int gen_a0)
{
  GEN_ENTER(0xdb6830u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: FUN_00db6840 */
uint F_00db6840(unsigned int gen_a0)
{
  GEN_ENTER(0xdb6840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  int iVar1;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113d8f4));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4ec8));
  this_00 = (undefined *)((int)this + 0x4ec8);
  iVar1 = 0x3f;
  do {
    this_00 = this_00 + -0x130;
    *(undefined * PTR32 * PTR32 *)this_00 = (*(undefined * PTR32 (*)[12])REFP(0x113d6d4));
    F_00dc0bd0(this_00);
    F_00d9b7c0(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00dc0ce0((undefined *)((int)this + 0x8c));
  F_00d9b7c0((int)this + 0x4c);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  F_00d9b7c0((int)this + 0x14);
  F_00d9b910(this);
  return extraout_EAX;
}

/* ref: hkFreeListMemorySystem::vf1 */
uint F_00db68c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb68c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  *(int *)(this + 8) = *param_1;
  if ((param_2 & 1) != 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,this + 0x4c,&REFG(undefined, 0x113d954),param_2);
  }
  if (((param_2 & 2) != 0) && (*param_1 != 0)) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 4))))(*(int * PTR32 *)(this + 4),*param_1);
    F_00dc1020(this + 0x8c,uVar1,*param_1);
  }
  return (uint)(this + 0x4c);
}

/* ref: hkFreeListMemorySystem::vf2 */
uint F_00db6920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  if (((param_1 & 2) != 0) && (*(int *)(this + 0x94) - *(int *)(this + 0x90) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 8))))
              (*(int * PTR32 *)(this + 4),*(undefined4 *)(this + 0x90),
               *(int *)(this + 0x94) - *(int *)(this + 0x90));
  }
  if ((param_1 & 1) != 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,this + 0x4c,param_1);
    F_00dc1020(this + 0x8c,0,0);
    piVar1 = *(int * PTR32 *)(this + 0x10);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    }
  }
  *(undefined4 *)(this + 4) = 0;
  return 0;
}

/* ref: hkFreeListMemorySystem::vf3 */
unsigned int F_00db6990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb6990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  code * pcVar1;
  undefined * phVar2;
  uint uVar3;
  undefined * phVar4;
  int iVar5;
  
  if ((param_3 & 1) != 0) {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x4ec8));
    iVar5 = 0;
    phVar2 = this + 0x3f4;
    do {
      if (*phVar2 == (undefined1)0x0) {
        this[iVar5 * 0x130 + 0x3f4] = (undefined1)0x1;
        break;
      }
      iVar5 = iVar5 + 1;
      phVar2 = phVar2 + 0x130;
    } while (iVar5 < 0x40);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x4ec8));
    if (0x3f < iVar5) {
      F_00da0a80(((undefined1 *)(gen_frame + 0x200)),((undefined1 *)(gen_frame + 0x0)),0x200);
      F_00d9fe80(((undefined1 *)(gen_frame + 0x200)),"Too many threads");
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                        (REFG(int * PTR32, 0x15dff78),3,0xf03454fe,((undefined1 *)(gen_frame + 0x0)),
                         "Memory\\System\\FreeList\\hkFreeListMemorySystem.cpp",100);
      if (uVar3 != 0) {
        pcVar1 = ((code *)GEN_TOP(swi(3)));
        (*pcVar1)();
        return 0;
      }
      F_00d9fda0(((undefined1 *)(gen_frame + 0x200)));
    }
    phVar2 = this + iVar5 * 0x130 + 0x2c8;
    *(undefined4 *)(phVar2 + 0x128) = param_2;
    F_00dc07b0(phVar2,*(undefined4 *)(this + 0xc),8);
    *(undefined4 *)((int)param_1 + 0x28) = 0;
    phVar4 = *(undefined * PTR32 *)(this + 0xc);
    if (((byte)this[0x4ee0] & 4) != 0) {
      phVar4 = phVar2;
    }
    *(undefined * PTR32 *)((int)param_1 + 0x2c) = phVar4;
    *(undefined * PTR32 *)((int)param_1 + 0x30) = this + 0x14;
    *(undefined4 *)((int)param_1 + 0x34) = 0;
    *(int *)((int)param_1 + 0x38) = iVar5;
  }
  if ((param_3 & 2) != 0) {
    phVar2 = *(undefined * PTR32 *)(this + 0xc);
    if ((*(uint *)(this + 0x4ee0) & 4) != 0) {
      phVar2 = this + *(int *)((int)param_1 + 0x38) * 0x130 + 0x2c8;
    }
    phVar4 = this + 0x8c;
    if ((*(uint *)(this + 0x4ee0) & 2) == 0) {
      phVar4 = phVar2;
    }
    F_00d940f0(param_1,phVar4,phVar2,phVar2);
    if (((byte)this[0x4ee0] & 1) != 0) {
      *(undefined * PTR32 *)((int)param_1 + 0x34) = this + 0x8c;
      *(undefined * PTR32 *)((int)param_1 + 0x28) = param_1;
      return 0;
    }
    *(undefined * PTR32 *)((int)param_1 + 0x28) = phVar2;
    *(undefined * PTR32 *)((int)param_1 + 0x34) = this + 0x8c;
  }
  return 0;
}

/* ref: hkFreeListMemorySystem::vf4 */
uint F_00db6b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb6b00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * phVar1;
  uint uVar2;
  
  uVar2 = *(int *)((int)param_1 + 0x38) * 0x130;
  phVar1 = this + uVar2 + 0x2c8;
  if ((param_2 & 2) != 0) {
    F_00d942d0(param_1);
    uVar2 = ((code *)*(gen_code32 *)(*(int *)phVar1 + 0x2c))(phVar1);
    *(undefined4 *)((int)param_1 + 0x28) = 0;
    *(undefined4 *)((int)param_1 + 0x34) = 0;
  }
  if ((param_2 & 1) != 0) {
    ((code *)*(gen_code32 *)(*(int *)phVar1 + 0x2c))(phVar1);
    *(int *)(phVar1 + 0x128) = 0;
    phVar1[300] = (undefined1)0x0;
    uVar2 = F_00da3720(param_1,0,0x40);
  }
  return uVar2;
}

/* ref: FUN_00db6b70 */
uint F_00db6b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdb6b70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x113d8f4));
  *(undefined4 *)((int)this + 4) = param_1;
  F_00d9b8d0((int)this + 8,0);
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_2;
  F_00dc1320((undefined *)((int)this + 0x14),param_1);
  F_00d92530((int)this + 0x4c);
  F_00dc0ca0((undefined *)((int)this + 0x8c));
  this_00 = (undefined *)((int)this + 0x2c8);
  iVar1 = 0x3f;
  do {
    F_00dc0b40(this_00);
    *(undefined4 *)((int)this_00 + 0x128) = 0;
    *(undefined1 *)((int)this_00 + 300) = 0;
    this_00 = (undefined *)((int)this_00 + 0x130);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00da5ee0((undefined *)((int)this + 0x4ec8),0);
  *(undefined4 *)((int)this + 0x4ee0) = param_4;
  return (uint)this;
}

/* ref: FUN_00db6c10 */
uint F_00db6c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6c10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return *(*(uint * PTR32 *)&gen_args[0]) & (*(uint *)&gen_args[1]);
}

/* ref: hkFreeListMemorySystem::vf0 */
uint F_00db6c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00db6840(this);
  return (uint)this;
}

/* ref: hkMemoryAllocator::ExtendedInterface::vf0 */
uint F_00db6c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x113d9a8));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00db6c70 */
uint F_00db6c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6c70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00db6cb0 */
uint F_00db6cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00dc1760(this,param_1);
  return param_1;
}

/* ref: FUN_00db6cd0 */
uint F_00db6cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6cd0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  if ((*in_ecx == 0) && ((uint)in_ecx[9] <= (uint)in_ecx[8])) {
    *param_2 = 0;
    return (uint)param_2;
  }
  *param_2 = 1;
  return (uint)param_2;
}

/* ref: FUN_00db6d00 */
uint F_00db6d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6d00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *(int *)(in_ecx + 0x10) != 0;
  return param_2;
}

/* ref: FUN_00db6d40 */
unsigned int F_00db6d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb6d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint * puVar5;
  uint * puVar6;
  
  puVar1 = param_1 + param_2;
  puVar5 = param_1;
  for (puVar2 = *(undefined4 * PTR32 *)this;
      (puVar3 = puVar2, puVar5 < puVar1 && (puVar3 = (undefined4 *)0x0, puVar2 != (undefined4 *)0x0)
      ); puVar2 = (undefined4 *)*puVar2) {
    *puVar5 = (uint)puVar2;
    puVar5 = puVar5 + 1;
  }
  *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) - ((int)puVar5 - (int)((int)(uintptr_t)param_1) >> 2);
  *(undefined4 * PTR32 *)this = puVar3;
  do {
    while( true ) {
      if (puVar1 <= puVar5) {
        return 0;
      }
      puVar6 = puVar5;
      if (*(uint *)((int)this + 0x20) < *(uint *)((int)this + 0x24)) break;
      uVar4 = F_00dc1990(this);
      *puVar5 = uVar4;
      puVar5 = puVar5 + 1;
    }
    do {
      if (puVar1 <= puVar6) break;
      *puVar6 = *(uint *)((int)this + 0x20);
      *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + *(int *)((int)this + 4);
      puVar6 = puVar6 + 1;
    } while (*(uint *)((int)this + 0x20) < *(uint *)((int)this + 0x24));
    *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) - ((int)puVar6 - (int)((int)(uintptr_t)puVar5) >> 2);
    puVar5 = puVar6;
  } while( true );
}

/* ref: FUN_00db6dd0 */
unsigned int F_00db6dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb6dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int * piVar2;
  int iVar3;
  undefined4 * puVar4;
  
  *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + param_2;
  piVar2 = (int *)*(int *)this;
  puVar4 = param_1;
  iVar3 = param_2;
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    piVar1 = (int *)*puVar4;
    puVar4 = puVar4 + 1;
    if (piVar1 == (int *)0x0) {
      *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + -1;
    }
    else {
      *piVar1 = (int)piVar2;
      piVar2 = piVar1;
    }
  }
  *(int * PTR32 *)this = piVar2;
  return 0;
}

/* ref: FUN_00db6e30 */
uint F_00db6e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + 1;
  *param_1 = *(undefined4 *)this;
  *(undefined4 * PTR32 *)this = param_1;
  return (uint)param_1;
}

/* ref: FUN_00db6e70 */
uint F_00db6e70(unsigned int gen_a0)
{
  GEN_ENTER(0xdb6e70u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[11])REFP(0x113d9cc));
  F_00dc1410(in_ecx + 1);
  return (uint)in_ecx;
}

/* ref: FUN_00db6ea0 */
unsigned int F_00db6ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb6ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00dc14d0((undefined *)((int)this + 4));
  F_00d9b7c0(this);
  return 0;
}

/* ref: hkFixedSizeAllocator::vf0 */
uint F_00db6ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb6ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00dc14d0(this + 4);
  F_00d9b7c0(this);
  return (uint)this;
}

/* ref: FUN_00db6ee0 */
uint F_00db6ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb6ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int in_ecx;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[8])REFP(0x113d9a8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x113da20));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[8])REFP(0x113d9fc));
  F_00da5ee0((undefined *)((int)this + 8),4000);
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[11])REFP(0x113d9cc));
  F_00dc1410((int)this + 0x34);
  *(undefined4 *)((int)this + 0x1b4) = 0;
  in_ecx = (int)this + 0x1c0;
  iVar1 = 0x28;
  do {
    F_00dc1410(in_ecx);
    in_ecx = in_ecx + 0x38;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return (uint)this;
}

