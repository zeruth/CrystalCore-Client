#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_0040d2d0 */
uint F_0040d2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40d2d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_0040d320 */
uint F_0040d320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40d320u, gen_a0, gen_a1, gen_a2, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  byte * pbVar2;
  byte * pbVar3;
  uint uVar4;
  
  pbVar3 = param_1;
  pbVar2 = param_2;
  for (uVar4 = param_3; 3 < uVar4; uVar4 = uVar4 - 4) {
    if (*(int *)pbVar3 != *(int *)pbVar2) goto LAB_0040d34b;
    pbVar2 = pbVar2 + 4;
    pbVar3 = pbVar3 + 4;
  }
  if (uVar4 == 0) {
    return 0;
  }
LAB_0040d34b: ;
  iVar1 = (uint)*pbVar3 - (uint)*pbVar2;
  if (iVar1 == 0) {
    if (uVar4 < 2) {
      return 0;
    }
    iVar1 = (uint)pbVar3[1] - (uint)pbVar2[1];
    if (iVar1 == 0) {
      if (uVar4 < 3) {
        return 0;
      }
      iVar1 = (uint)pbVar3[2] - (uint)pbVar2[2];
      if (iVar1 == 0) {
        if (uVar4 < 4) {
          return 0;
        }
        iVar1 = (uint)pbVar3[3] - (uint)pbVar2[3];
      }
    }
  }
  return iVar1 >> 0x1f | 1;
}

/* ref: FUN_0040d3a0 */
uint F_0040d3a0(unsigned int gen_a0)
{
  GEN_ENTER(0x40d3a0u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char cVar1;
  char * pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return (int)pcVar2 - (int)(param_1 + 1);
}

/* ref: FUN_0040d3c0 */
uint F_0040d3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40d3c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(param_1,param_2,param_3);
  return (uint)uVar1;
}

/* ref: FUN_0040d3d0 */
uint F_0040d3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40d3d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  gen_size32 param_2 = (gen_size32)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  undefined * pvVar1;
  
  pvVar1 = F_00c48f80(param_1,(int)*param_3,param_2);
  return (uint)pvVar1;
}

/* ref: FUN_0040d3f0 */
uint F_0040d3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40d3f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c46e20(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_0040d400 */
uint F_0040d400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40d400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  gen_size32 param_2 = (gen_size32)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined * pvVar1;
  
  pvVar1 = F_00c48350(param_1,(int)(char)param_3,param_2);
  return (uint)pvVar1;
}

/* ref: FUN_0040d420 */
uint F_0040d420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40d420u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  *param_1 = *param_2;
  return (uint)param_2;
}

/* ref: FUN_0040d4a0 */
uint F_0040d4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40d4a0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0040d530 */
uint F_0040d530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40d530u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,0x12f);
  return uVar1;
}

/* ref: FUN_0040d550 */
uint F_0040d550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40d550u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,0x12f);
  return (uint)uVar1;
}

/* ref: FUN_0040d570 */
uint F_0040d570(unsigned int gen_a0)
{
  GEN_ENTER(0x40d570u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x44;
}

/* ref: FUN_0040d580 */
uint F_0040d580(unsigned int gen_a0)
{
  GEN_ENTER(0x40d580u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x45;
}

/* ref: FUN_0040d590 */
uint F_0040d590(unsigned int gen_a0)
{
  GEN_ENTER(0x40d590u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0040d5a0 */
uint F_0040d5a0(unsigned int gen_a0)
{
  GEN_ENTER(0x40d5a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_0040d5b0 */
uint F_0040d5b0(unsigned int gen_a0)
{
  GEN_ENTER(0x40d5b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_0040d5c0 */
uint F_0040d5c0(unsigned int gen_a0)
{
  GEN_ENTER(0x40d5c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0040d5d0 */
uint F_0040d5d0(unsigned int gen_a0)
{
  GEN_ENTER(0x40d5d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x45)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x45);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_0040d5f0 */
uint F_0040d5f0(unsigned int gen_a0)
{
  GEN_ENTER(0x40d5f0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x45);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x45);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_0040d630 */
uint F_0040d630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40d630u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x48,0x12f);
  return (uint)uVar1;
}

/* ref: FUN_0040d660 */
byte F_0040d660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40d660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0040d690 */
uint F_0040d690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40d690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0040d6b0 */
uint F_0040d6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40d6b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0040d6c0 */
uint F_0040d6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x40d6c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  gen_size32 param_2 = (gen_size32)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  
  if (param_2 == 1) {
    if (0xf < *(uint *)((int)this + 0x14)) {
      this = *(undefined * PTR32 *)this;
    }
    *(byte *)((int)this + param_1) = (byte)param_3;
    return (uint)(byte)param_3;
  }
  if (0xf < *(uint *)((int)this + 0x14)) {
    this = *(undefined * PTR32 *)this;
  }
  pvVar1 = F_00c48350((undefined *)((int)this + param_1),(int)(char)(byte)param_3,param_2);
  return (uint)pvVar1;
}

/* ref: FUN_0040d720 */
uint F_0040d720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40d720u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,0x12f);
  return (uint)uVar1;
}

/* ref: FUN_0040d740 */
uint F_0040d740(unsigned int gen_a0)
{
  GEN_ENTER(0x40d740u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0040d7a0 */
unsigned int F_0040d7a0(unsigned int gen_a0)
{
  GEN_ENTER(0x40d7a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x45) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x45) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x45);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x45);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x45);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x45);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_0040d7f0 */
byte F_0040d7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40d7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  
  if (param_1 != (undefined *)0x0) {
    pvVar1 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar1 = *(undefined * PTR32 *)this;
    }
    if (pvVar1 <= param_1) {
      pvVar1 = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
        pvVar1 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + (int)pvVar1)))) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_0040d830 */
uint F_0040d830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40d830u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x48,param_2,0x12f);
  return uVar1;
}

/* ref: FUN_0040d860 */
uint F_0040d860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40d860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0040d870 */
uint F_0040d870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40d870u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  return *in_ecx - *param_2;
}

/* ref: FUN_0040d8a0 */
uint F_0040d8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40d8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,0x12f);
  return uVar1;
}

/* ref: FUN_0040d8e0 */
uint F_0040d8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40d8e0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0040d8f0 */
uint F_0040d8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40d8f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0040d910 */
uint F_0040d910(unsigned int gen_a0)
{
  GEN_ENTER(0x40d910u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0040d920 */
uint F_0040d920(unsigned int gen_a0)
{
  GEN_ENTER(0x40d920u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0040d930 */
uint F_0040d930(unsigned int gen_a0)
{
  GEN_ENTER(0x40d930u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0040d940 */
uint F_0040d940(unsigned int gen_a0)
{
  GEN_ENTER(0x40d940u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0040d950 */
uint F_0040d950(unsigned int gen_a0)
{
  GEN_ENTER(0x40d950u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0040d980 */
uint F_0040d980(unsigned int gen_a0)
{
  GEN_ENTER(0x40d980u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0040d990 */
uint F_0040d990(unsigned int gen_a0)
{
  GEN_ENTER(0x40d990u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0040d9a0 */
uint F_0040d9a0(unsigned int gen_a0)
{
  GEN_ENTER(0x40d9a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0040d9b0 */
uint F_0040d9b0(unsigned int gen_a0)
{
  GEN_ENTER(0x40d9b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0040d9d0 */
uint F_0040d9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40d9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_0040d9f0 */
uint F_0040d9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x40d9f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint uVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 0x10) < param_1) {
                    
    F_00c457e7("invalid string position");
  }
  uVar1 = *(uint *)((int)this + 0x10) - param_1;
  uVar2 = param_2;
  if (uVar1 < param_2) {
    uVar2 = uVar1;
  }
  uVar1 = uVar2;
  if (param_4 <= uVar2) {
    uVar1 = param_4;
  }
  if (0xf < *(uint *)((int)this + 0x14)) {
    this = *(undefined * PTR32 *)this;
  }
  uVar1 = F_0040d320((int)this + param_1,param_3,uVar1);
  if (uVar1 == 0) {
    if (uVar2 < param_4) {
      return 0xffffffff;
    }
    uVar1 = (uint)(uVar2 != param_4);
  }
  return uVar1;
}

/* ref: FUN_0040da70 */
uint F_0040da70(unsigned int gen_a0)
{
  GEN_ENTER(0x40da70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x45) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x45) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x45) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x45) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x45);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x45);
    }
    if (*(char *)(*(int *)this + 0x45) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_0040dae0 */
uint F_0040dae0(unsigned int gen_a0)
{
  GEN_ENTER(0x40dae0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0040daf0 */
uint F_0040daf0(unsigned int gen_a0)
{
  GEN_ENTER(0x40daf0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0040db00 */
uint F_0040db00(unsigned int gen_a0)
{
  GEN_ENTER(0x40db00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0040db30 */
uint F_0040db30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40db30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  F_00c46e20(param_3,param_1,param_2 - param_1);
  return (param_2 - param_1) + param_3;
}

/* ref: FUN_0040db60 */
uint F_0040db60(unsigned int gen_a0)
{
  GEN_ENTER(0x40db60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0040db70 */
uint F_0040db70(unsigned int gen_a0)
{
  GEN_ENTER(0x40db70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0040dbc0 */
uint F_0040dbc0(unsigned int gen_a0)
{
  GEN_ENTER(0x40dbc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0040dbd0 */
uint F_0040dbd0(unsigned int gen_a0)
{
  GEN_ENTER(0x40dbd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0040dbe0 */
uint F_0040dbe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40dbe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0040dc10 */
uint F_0040dc10(void)
{
  GEN_ENTER(0x40dc10u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  BOOL BVar1;
  
  BVar1 = gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x4)));
  if (BVar1 != 0) {
    return (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
  }
  return 0;
}

/* ref: FUN_0040dc40 */
uint F_0040dc40(void)
{
  GEN_ENTER(0x40dc40u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  BOOL BVar1;
  
  BVar1 = gen_imp_QueryPerformanceFrequency(&(*(LARGE_INTEGER *)(gen_frame + 0x4)));
  if (BVar1 != 0) {
    return (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
  }
  return 0;
}

/* ref: FUN_0040dc70 */
uint F_0040dc70(void)
{
  GEN_ENTER(0x40dc70u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  BOOL BVar1;
  
  BVar1 = gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x4)));
  if (BVar1 != 0) {
    return (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
  }
  return 0;
}

/* ref: FUN_0040dca0 */
uint F_0040dca0(void)
{
  GEN_ENTER(0x40dca0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  BOOL BVar1;
  
  if ((*(uint *)&REFG(undefined, 0x1370c08) & 1) != 0) {
    return REFG(undefined4, 0x1370c00);
  }
  *(uint *)&REFG(undefined, 0x1370c08) = *(uint *)&REFG(undefined, 0x1370c08) | 1;
  BVar1 = gen_imp_QueryPerformanceFrequency(&(*(LARGE_INTEGER *)(gen_frame + 0x4)));
  if (BVar1 != 0) {
    REFG(undefined4, 0x1370c00) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
    REFG(undefined4, 0x1370c04) = (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.HighPart;
    return (*(LARGE_INTEGER *)(gen_frame + 0x4)).s.LowPart;
  }
  REFG(undefined4, 0x1370c00) = 0;
  REFG(undefined4, 0x1370c04) = 0;
  return 0;
}

/* ref: FUN_0040dd00 */
uint F_0040dd00(void)
{
  GEN_ENTER(0x40dd00u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong uStackY_2c;
  
  BVar1 = gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x14)));
  uVar2 = (*(LARGE_INTEGER *)(gen_frame + 0x14)).s.LowPart;
  uVar3 = (*(LARGE_INTEGER *)(gen_frame + 0x14)).s.HighPart;
  if (BVar1 == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  if ((*(uint *)&REFG(undefined, 0x1370c08) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1370c08) = *(uint *)&REFG(undefined, 0x1370c08) | 1;
    BVar1 = gen_imp_QueryPerformanceFrequency(&(*(LARGE_INTEGER *)(gen_frame + 0xc)));
    if (BVar1 == 0) {
      REFG(undefined4, 0x1370c00) = 0;
      REFG(undefined4, 0x1370c04) = 0;
    }
    else {
      REFG(undefined4, 0x1370c00) = (*(LARGE_INTEGER *)(gen_frame + 0xc)).s.LowPart;
      REFG(undefined4, 0x1370c04) = (*(LARGE_INTEGER *)(gen_frame + 0xc)).s.HighPart;
    }
  }
  uStackY_2c = CONCAT44(uVar3,uVar2);
  return (uint)((ulonglong)(uStackY_2c * 1000) / CONCAT44(REFG(undefined4, 0x1370c04),REFG(undefined4, 0x1370c00)));
}

/* ref: FUN_0040dda0 */
uint F_0040dda0(unsigned int gen_a0)
{
  GEN_ENTER(0x40dda0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0040ddb0 */
uint F_0040ddb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40ddb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0040e620((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: Client::System::Crypt::Crc32::vf0 */
uint F_0040ddc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40ddc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1084954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Crypt::CryptKey::vf0 */
uint F_0040ddf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40ddf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x108495c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Crypt::ImportUtil::vf0 */
uint F_0040de20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40de20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1084964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0040de50 */
uint F_0040de50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40de50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x108495c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0040de80 */
uint F_0040de80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40de80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x108495c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0040deb0 */
uint F_0040deb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40deb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (0xf < (uint)in_ecx[5]) {
    in_ecx = (undefined4 *)*in_ecx;
  }
  *param_2 = in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0040ded0 */
uint F_0040ded0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40ded0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (0xf < (uint)in_ecx[5]) {
    in_ecx = (undefined4 *)*in_ecx;
  }
  *param_2 = in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0040def0 */
uint F_0040def0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40def0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  if (0xf < (uint)in_ecx[5]) {
    *param_2 = in_ecx[4] + *in_ecx;
    return (uint)param_2;
  }
  *param_2 = in_ecx[4] + (int)in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0040df20 */
uint F_0040df20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40df20u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  if (0xf < (uint)in_ecx[5]) {
    *param_2 = in_ecx[4] + *in_ecx;
    return (uint)param_2;
  }
  *param_2 = in_ecx[4] + (int)in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0040df60 */
byte F_0040df60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40df60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0040df80 */
byte F_0040df80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40df80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0040dfa0 */
byte F_0040dfa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40dfa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0040dfc0 */
uint F_0040dfc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x40dfc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined * pvVar1;
  undefined * pvVar2;
  uint uVar3;
  gen_size32 _MaxCount;
  
  if ((param_3 != 0) || (uVar3 = param_2, *(uint *)((int)this + 0x10) < param_2)) {
    if ((param_2 < *(uint *)((int)this + 0x10)) &&
       (uVar3 = *(uint *)((int)this + 0x10) - param_2, param_3 <= uVar3)) {
      _MaxCount = uVar3 + (1 - param_3);
      pvVar2 = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
        pvVar2 = *(undefined * PTR32 *)this;
      }
      pvVar2 = (undefined *)((int)pvVar2 + param_2);
      pvVar1 = F_00c48f80(pvVar2,(int)*param_1,_MaxCount);
      while (pvVar1 != (undefined *)0x0) {
        uVar3 = F_0040d320(pvVar1,param_1,param_3);
        if (uVar3 == 0) {
          if (0xf < *(uint *)((int)this + 0x14)) {
            this = *(undefined * PTR32 *)this;
          }
          return (int)pvVar1 - (int)this;
        }
        _MaxCount = (int)pvVar2 + ((_MaxCount - 1) - (int)pvVar1);
        pvVar2 = (undefined *)((int)pvVar1 + 1);
        pvVar1 = F_00c48f80(pvVar2,(int)*param_1,_MaxCount);
      }
    }
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

/* ref: FUN_0040e070 */
uint F_0040e070(unsigned int gen_a0)
{
  GEN_ENTER(0x40e070u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos_0040e080 */
uint F_0040e080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40e080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  in_ecx[4] = param_2;
  if (0xf < (uint)in_ecx[5]) {
    in_ecx = (undefined4 *)*in_ecx;
  }
  *(undefined1 *)((int)in_ecx + param_2) = 0;
  return param_2;
}

/* ref: FUN_0040e0a0 */
unsigned int F_0040e0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40e0a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  if (((char)param_1 != '\0') && (0xf < *(uint *)((int)this + 0x14))) {
    uVar1 = *(undefined4 *)this;
    if (param_2 != 0) {
      F_00c46aa0(this,uVar1,param_2);
    }
    F_00429760(uVar1,*(int *)((int)this + 0x14) + 1,0x12f);
  }
  *(int *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined1 *)(param_2 + (int)this) = 0;
  return 0;
}

/* ref: FUN_0040e170 */
uint F_0040e170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40e170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x45))) == '\0') {
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

/* ref: FUN_0040e1d0 */
uint F_0040e1d0(unsigned int gen_a0)
{
  GEN_ENTER(0x40e1d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0040e200 */
uint F_0040e200(unsigned int gen_a0)
{
  GEN_ENTER(0x40e200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0040d7a0(this);
  return (uint)this;
}

/* ref: FUN_0040e220 */
uint F_0040e220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40e220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  uint uVar5;
  
  if (*(uint *)((int)this + 0x10) < param_1) {
                    
    F_00c457e7("invalid string position");
  }
  uVar2 = *(uint *)((int)this + 0x10) - param_1;
  uVar5 = param_2;
  if (uVar2 < param_2) {
    uVar5 = uVar2;
  }
  if (uVar5 != 0) {
    pvVar4 = this;
    pvVar1 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar4 = *(undefined * PTR32 *)this;
      pvVar1 = *(undefined * PTR32 *)this;
    }
    F_00c46e20((int)pvVar4 + param_1,(int)pvVar1 + uVar5 + param_1,uVar2 - uVar5)
    ;
    iVar3 = *(int *)((int)this + 0x10) - uVar5;
    *(int *)((int)this + 0x10) = iVar3;
    if (0xf < *(uint *)((int)this + 0x14)) {
      *(undefined1 *)(*(int *)this + iVar3) = 0;
      return (uint)this;
    }
    *(undefined1 *)((int)this + iVar3) = 0;
  }
  return (uint)this;
}

/* ref: FUN_0040e2b0 */
uint F_0040e2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40e2b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 == 0) {
    return 0;
  }
  return param_1 - param_2;
}

/* ref: FUN_0040e2d0 */
uint F_0040e2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40e2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)this;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_0040e300 */
uint F_0040e300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40e300u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0040e340 */
uint F_0040e340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40e340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_1 | 0xf;
  uVar5 = param_1;
  if (uVar4 != 0xffffffff) {
    uVar1 = *(uint *)((int)this + 0x14);
    uVar2 = uVar1 >> 1;
    uVar5 = uVar4;
    if ((uVar4 / 3 < uVar2) && (uVar5 = uVar2 + uVar1, -uVar2 - 2 < uVar1)) {
      uVar5 = 0xfffffffe;
    }
  }
  uVar4 = F_004296a0(uVar5 + 1,0,0x12f);
  if (param_2 != 0) {
    pvVar3 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(uVar4,pvVar3,param_2);
  }
  if (0xf < *(uint *)((int)this + 0x14)) {
    F_00429760(*(undefined4 *)this,*(uint *)((int)this + 0x14) + 1,0x12f);
  }
  *(undefined1 *)this = 0;
  *(uint *)this = uVar4;
  *(uint *)((int)this + 0x14) = uVar5;
  *(int *)((int)this + 0x10) = param_2;
  if (uVar5 < 0x10) {
    *(undefined1 *)((int)this + param_2) = 0;
    return uVar4;
  }
  *(undefined1 *)(uVar4 + param_2) = 0;
  return uVar4;
}

/* ref: FUN_0040e410 */
uint F_0040e410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40e410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_0040d7a0(this);
  return (uint)param_1;
}

/* ref: FUN_0040e430 */
uint F_0040e430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40e430u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0040e440 */
uint F_0040e440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40e440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0040e450 */
byte F_0040e450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40e450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0040e470 */
uint F_0040e470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40e470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0040e480 */
uint F_0040e480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40e480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0040e4a0 */
uint F_0040e4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40e4a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0040e4d0 */
uint F_0040e4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40e4d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0040e4f0 */
uint F_0040e4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40e4f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  F_00c46e20(param_3,param_1,param_2 - param_1);
  return (param_2 - param_1) + param_3;
}

/* ref: FUN_0040e520 */
uint F_0040e520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40e520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  uVar2 = F_0040d9f0(this,0,*(undefined4 *)((int)this + 0x10),puVar1,param_1[4]);
  return uVar2;
}

/* ref: FUN_0040e550 */
uint F_0040e550(unsigned int gen_a0)
{
  GEN_ENTER(0x40e550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0040da70(this);
  return (uint)this;
}

/* ref: FUN_0040e570 */
uint F_0040e570(unsigned int gen_a0)
{
  GEN_ENTER(0x40e570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0040da70(this);
  return (uint)this;
}

/* ref: FUN_0040e580 */
uint F_0040e580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40e580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0040e5a0 */
uint F_0040e5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40e5a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0040e5d0 */
uint F_0040e5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40e5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0040e5f0 */
uint F_0040e5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40e5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1084964));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0040e620 */
uint F_0040e620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40e620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x1084964));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x108495c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0040e670 */
uint F_0040e670(unsigned int gen_a0)
{
  GEN_ENTER(0x40e670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)((int)this + 0x14);
  if (0xf < uVar1) {
    uVar2 = F_00429760(*(undefined4 *)this,uVar1 + 1,0x12f);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  return uVar1;
}

/* ref: FUN_0040e6c0 */
uint F_0040e6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40e6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_0040dfc0(this,param_1,param_2,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_0040e720 */
uint F_0040e720(unsigned int gen_a0)
{
  GEN_ENTER(0x40e720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0040d7a0(this);
  return (uint)this;
}

/* ref: FUN_0040e730 */
uint F_0040e730(unsigned int gen_a0)
{
  GEN_ENTER(0x40e730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  if (0xf < *(uint *)((int)this + 0x30)) {
    F_00429760(*(undefined4 *)((int)this + 0x1c),*(uint *)((int)this + 0x30) + 1,0x12f);
  }
  *(undefined4 *)((int)this + 0x30) = 0xf;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  uVar1 = *(uint *)((int)this + 0x14);
  if (0xf < uVar1) {
    uVar2 = F_00429760(*(undefined4 *)this,uVar1 + 1,0x12f);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  return uVar1;
}

/* ref: FUN_0040e7a0 */
uint F_0040e7a0(unsigned int gen_a0)
{
  GEN_ENTER(0x40e7a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,0x12f);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_0040e7e0 */
uint F_0040e7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40e7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x45) == '\0') {
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

/* ref: FUN_0040e860 */
uint F_0040e860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40e860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0040e870 */
byte F_0040e870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40e870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1 == 0xffffffff) {
                    
    F_00c4579a("string too long");
  }
  uVar1 = *(uint *)((int)this + 0x14);
  if (uVar1 < param_1) {
    F_0040e340(this,param_1,*(undefined4 *)((int)this + 0x10));
    return param_1 != 0;
  }
  if (((char)param_2 != '\0') && (param_1 < 0x10)) {
    uVar3 = *(uint *)((int)this + 0x10);
    if (param_1 < uVar3) {
      uVar3 = param_1;
    }
    if (0xf < uVar1) {
      uVar2 = *(undefined4 *)this;
      if (uVar3 != 0) {
        F_00c46aa0(this,uVar2,uVar3);
      }
      F_00429760(uVar2,*(int *)((int)this + 0x14) + 1,0x12f);
    }
    *(uint *)((int)this + 0x10) = uVar3;
    *(undefined4 *)((int)this + 0x14) = 0xf;
    *(undefined1 *)(uVar3 + (int)this) = 0;
    return param_1 != 0;
  }
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (0xf < uVar1) {
      this = *(undefined * PTR32 *)this;
    }
    *(undefined1 *)this = 0;
  }
  return param_1 != 0;
}

/* ref: FUN_0040e930 */
uint F_0040e930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40e930u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0040e940 */
uint F_0040e940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40e940u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0040e990 */
uint F_0040e990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40e990u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  *param_2 = *in_ecx + param_3;
  return (uint)param_2;
}

/* ref: FUN_0040e9b0 */
byte F_0040e9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40e9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0040e9d0 */
uint F_0040e9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x40e9d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = *(int *)((int)this + 4) - param_3;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0040ea20 */
byte F_0040ea20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40ea20u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar1 = (undefined4 *)*param_2;
  }
  uVar2 = F_0040d9f0(param_1,0,*(undefined4 *)((int)param_1 + 0x10),puVar1,param_2[4]);
  return (int)uVar2 < 0;
}

/* ref: FUN_0040ea90 */
uint F_0040ea90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40ea90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0040eab0 */
unsigned int F_0040eab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40eab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  undefined1 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_0040eae0 */
uint F_0040eae0(unsigned int gen_a0)
{
  GEN_ENTER(0x40eae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,0x12f);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_0040eb20 */
uint F_0040eb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40eb20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0040eb40 */
uint F_0040eb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40eb40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0040eb60 */
uint F_0040eb60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40eb60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x10);
  if (-iVar2 - 1U <= param_1) {
                    
    F_00c4579a("string too long");
  }
  if (param_1 != 0) {
    uVar1 = iVar2 + param_1;
    if (uVar1 == 0xffffffff) {
                    
      F_00c4579a("string too long");
    }
    if (*(uint *)((int)this + 0x14) < uVar1) {
      F_0040e340(this,uVar1,iVar2);
      if (uVar1 == 0) {
        return (uint)this;
      }
    }
    else if (uVar1 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
      if (0xf < *(uint *)((int)this + 0x14)) {
        **(undefined1 * PTR32 *)this = 0;
        return (uint)this;
      }
      *(undefined1 *)this = 0;
      return (uint)this;
    }
    F_0040d6c0(this,*(undefined4 *)((int)this + 0x10),param_1,param_2);
    *(uint *)((int)this + 0x10) = uVar1;
    if (0xf < *(uint *)((int)this + 0x14)) {
      *(undefined1 *)(*(int *)this + uVar1) = 0;
      return (uint)this;
    }
    *(undefined1 *)((int)this + uVar1) = 0;
  }
  return (uint)this;
}

/* ref: FUN_0040ec10 */
uint F_0040ec10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x40ec10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if ((uint)param_1[4] < param_2) {
                    
    F_00c457e7("invalid string position");
  }
  uVar3 = param_1[4] - param_2;
  if (param_3 < uVar3) {
    uVar3 = param_3;
  }
  if (this == param_1) {
    F_0040e220(this,uVar3 + param_2,0xffffffff);
    F_0040e220(this,0,param_2);
    return (uint)this;
  }
  if (uVar3 == 0xffffffff) {
                    
    F_00c4579a("string too long");
  }
  if (*(uint *)((int)this + 0x14) < uVar3) {
    F_0040e340(this,uVar3,*(undefined4 *)((int)this + 0x10));
    if (uVar3 == 0) {
      return (uint)this;
    }
  }
  else if (uVar3 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (0xf < *(uint *)((int)this + 0x14)) {
      **(undefined1 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined1 *)this = 0;
    return (uint)this;
  }
  puVar2 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar2 = (undefined4 *)*param_1;
  }
  pvVar1 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar1 = *(undefined * PTR32 *)this;
  }
  F_00c46aa0(pvVar1,(int)puVar2 + param_2,uVar3);
  *(uint *)((int)this + 0x10) = uVar3;
  if (*(uint *)((int)this + 0x14) < 0x10) {
    *(undefined1 *)((int)this + uVar3) = 0;
    return (uint)this;
  }
  *(undefined1 *)(*(int *)this + uVar3) = 0;
  return (uint)this;
}

/* ref: FUN_0040ed40 */
byte F_0040ed40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40ed40u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar1 = (undefined4 *)*param_2;
  }
  uVar2 = F_0040d9f0(param_1,0,*(undefined4 *)((int)param_1 + 0x10),puVar1,param_2[4]);
  return (int)uVar2 < 0;
}

/* ref: FUN_0040ed70 */
uint F_0040ed70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x40ed70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  if ((uint)param_1[4] < param_2) {
                    
    F_00c457e7("invalid string position");
  }
  uVar2 = param_1[4] - param_2;
  uVar5 = param_3;
  if (uVar2 < param_3) {
    uVar5 = uVar2;
  }
  iVar1 = *(int *)((int)this + 0x10);
  if (-iVar1 - 1U <= uVar5) {
                    
    F_00c4579a("string too long");
  }
  if (uVar5 != 0) {
    uVar2 = iVar1 + uVar5;
    if (uVar2 == 0xffffffff) {
                    
      F_00c4579a("string too long");
    }
    if (*(uint *)((int)this + 0x14) < uVar2) {
      F_0040e340(this,uVar2,iVar1);
      if (uVar2 == 0) {
        return (uint)this;
      }
    }
    else if (uVar2 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
      if (0xf < *(uint *)((int)this + 0x14)) {
        **(undefined1 * PTR32 *)this = 0;
        return (uint)this;
      }
      *(undefined1 *)this = 0;
      return (uint)this;
    }
    puVar4 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar4 = (undefined4 *)*param_1;
    }
    pvVar3 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(*(int *)((int)this + 0x10) + (int)pvVar3,(int)puVar4 + param_2,uVar5);
    *(uint *)((int)this + 0x10) = uVar2;
    if (0xf < *(uint *)((int)this + 0x14)) {
      *(undefined1 *)(*(int *)this + uVar2) = 0;
      return (uint)this;
    }
    *(undefined1 *)((int)this + uVar2) = 0;
  }
  return (uint)this;
}

/* ref: FUN_0040ee60 */
uint F_0040ee60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40ee60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  if (param_1 != (undefined *)0x0) {
    uVar2 = *(uint *)((int)this + 0x14);
    pvVar3 = this;
    if (0xf < uVar2) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    if (pvVar3 <= param_1) {
      pvVar3 = this;
      if (0xf < uVar2) {
        pvVar3 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + (int)pvVar3)))) {
        if (0xf < uVar2) {
          uVar2 = F_0040ed70(this,this,(int)param_1 - *(int *)this,param_2);
          return uVar2;
        }
        uVar2 = F_0040ed70(this,this,(int)param_1 - (int)this,param_2);
        return uVar2;
      }
    }
  }
  iVar1 = *(int *)((int)this + 0x10);
  if (-iVar1 - 1U <= param_2) {
                    
    F_00c4579a("string too long");
  }
  if (param_2 != 0) {
    uVar2 = iVar1 + param_2;
    if (uVar2 == 0xffffffff) {
                    
      F_00c4579a("string too long");
    }
    if (*(uint *)((int)this + 0x14) < uVar2) {
      F_0040e340(this,uVar2,iVar1);
      if (uVar2 == 0) {
        return (uint)this;
      }
    }
    else if (uVar2 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
      if (0xf < *(uint *)((int)this + 0x14)) {
        **(undefined1 * PTR32 *)this = 0;
        return (uint)this;
      }
      *(undefined1 *)this = 0;
      return (uint)this;
    }
    pvVar3 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(*(int *)((int)this + 0x10) + (int)pvVar3,param_1,param_2);
    *(uint *)((int)this + 0x10) = uVar2;
    if (0xf < *(uint *)((int)this + 0x14)) {
      *(undefined1 *)(*(int *)this + uVar2) = 0;
      return (uint)this;
    }
    *(undefined1 *)((int)this + uVar2) = 0;
  }
  return (uint)this;
}

/* ref: FUN_0040ef80 */
uint F_0040ef80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40ef80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  undefined * pvVar2;
  
  if (param_1 != (undefined *)0x0) {
    uVar1 = *(uint *)((int)this + 0x14);
    pvVar2 = this;
    if (0xf < uVar1) {
      pvVar2 = *(undefined * PTR32 *)this;
    }
    if (pvVar2 <= param_1) {
      pvVar2 = this;
      if (0xf < uVar1) {
        pvVar2 = *(undefined * PTR32 *)this;
      }
      if (param_1 < ((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + (int)pvVar2)))) {
        if (0xf < uVar1) {
          uVar1 = F_0040ec10(this,this,(int)param_1 - *(int *)this,param_2);
          return uVar1;
        }
        uVar1 = F_0040ec10(this,this,(int)param_1 - (int)this,param_2);
        return uVar1;
      }
    }
  }
  if (param_2 == 0xffffffff) {
                    
    F_00c4579a("string too long");
  }
  if (*(uint *)((int)this + 0x14) < param_2) {
    F_0040e340(this,param_2,*(undefined4 *)((int)this + 0x10));
    if (param_2 == 0) {
      return (uint)this;
    }
  }
  else if (param_2 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (0xf < *(uint *)((int)this + 0x14)) {
      **(undefined1 * PTR32 *)this = 0;
      return (uint)this;
    }
    *(undefined1 *)this = 0;
    return (uint)this;
  }
  pvVar2 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar2 = *(undefined * PTR32 *)this;
  }
  F_00c46aa0(pvVar2,param_1,param_2);
  *(uint *)((int)this + 0x10) = param_2;
  if (*(uint *)((int)this + 0x14) < 0x10) {
    *(undefined1 *)((int)this + param_2) = 0;
    return (uint)this;
  }
  *(undefined1 *)(*(int *)this + param_2) = 0;
  return (uint)this;
}

/* ref: FUN_0040f080 */
uint F_0040f080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x40f080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined * pvVar4;
  
  uVar2 = *(uint *)((int)this + 0x10);
  if (uVar2 < param_1) {
                    
    F_00c457e7("invalid string position");
  }
  if (-uVar2 - 1 <= param_2) {
                    
    F_00c4579a("string too long");
  }
  if (param_2 != 0) {
    uVar1 = uVar2 + param_2;
    if (uVar1 == 0xffffffff) {
                    
      F_00c4579a("string too long");
    }
    if (*(uint *)((int)this + 0x14) < uVar1) {
      F_0040e340(this,uVar1,uVar2);
      if (uVar1 == 0) {
        return (uint)this;
      }
    }
    else if (uVar1 == 0) {
      *(undefined4 *)((int)this + 0x10) = 0;
      if (*(uint *)((int)this + 0x14) < 0x10) {
        *(undefined1 *)this = 0;
        return (uint)this;
      }
      **(undefined1 * PTR32 *)this = 0;
      return (uint)this;
    }
    pvVar4 = this;
    pvVar3 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar4 = *(undefined * PTR32 *)this;
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46e20((int)pvVar4 + param_2 + param_1,(int)pvVar3 + param_1,
               *(int *)((int)this + 0x10) - param_1);
    F_0040d6c0(this,param_1,param_2,param_3);
    *(uint *)((int)this + 0x10) = uVar1;
    if (0xf < *(uint *)((int)this + 0x14)) {
      *(undefined1 *)(*(int *)this + uVar1) = 0;
      return (uint)this;
    }
    *(undefined1 *)((int)this + uVar1) = 0;
  }
  return (uint)this;
}

/* ref: FUN_0040f180 */
uint F_0040f180(unsigned int gen_a0)
{
  GEN_ENTER(0x40f180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 4);
  uVar1 = *(uint *)this;
  if (uVar1 != uVar2) {
    uVar2 = F_00c46e20(uVar1,uVar2,0);
    *(uint *)((int)this + 4) = uVar1;
  }
  return uVar2;
}

/* ref: FUN_0040f1b0 */
uint F_0040f1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40f1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * local_8;
  
  local_8 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)local_8[1] + 0x45) == '\0') {
    uVar1 = param_1[5];
    uVar2 = param_1[4];
    puVar7 = (undefined4 *)local_8[1];
    do {
      piVar4 = puVar7 + 3;
      puVar6 = param_1;
      if (0xf < uVar1) {
        puVar6 = (undefined4 *)*param_1;
      }
      uVar3 = puVar7[7];
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = uVar2;
      }
      if (0xf < (uint)puVar7[8]) {
        piVar4 = (int *)*piVar4;
      }
      uVar5 = F_0040d320(piVar4,puVar6,uVar5);
      if (uVar5 == 0) {
        if (uVar2 <= uVar3) {
          uVar5 = (uint)(uVar3 != uVar2);
          goto LAB_0040f218;
        }
LAB_0040f21a: ;
        puVar6 = (undefined4 *)puVar7[2];
      }
      else {
LAB_0040f218: ;
        if ((int)uVar5 < 0) goto LAB_0040f21a;
        puVar6 = (undefined4 *)*puVar7;
        local_8 = puVar7;
      }
      puVar7 = puVar6;
    } while (*(char *)((int)puVar6 + 0x45) == '\0');
  }
  return (uint)local_8;
}

/* ref: FUN_0040f240 */
uint F_0040f240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40f240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0040e730(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0040f270 */
unsigned int F_0040f270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40f270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: FUN_0040f2a0 */
uint F_0040f2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40f2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_0040ec10(this,param_1,0,0xffffffff);
  return (uint)this;
}

/* ref: FUN_0040f2d0 */
uint F_0040f2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40f2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0040eb60(this,1,param_1);
  return uVar1;
}

/* ref: FUN_0040f2f0 */
uint F_0040f2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x40f2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_0040ec10(this,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_0040f330 */
uint F_0040f330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40f330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0040ed70(this,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_0040f350 */
uint F_0040f350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40f350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_0040ee60(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_0040f380 */
uint F_0040f380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40f380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0040ec10(this,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_0040f3a0 */
uint F_0040f3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40f3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_0040ef80(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_0040f3d0 */
uint F_0040f3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x40f3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  int iVar2;
  
  pvVar1 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar1 = *(undefined * PTR32 *)this;
  }
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_2 - (int)pvVar1;
  }
  F_0040f080(this,iVar2,1,param_3);
  if (0xf < *(uint *)((int)this + 0x14)) {
    this = *(undefined * PTR32 *)this;
  }
  *param_1 = (int)this + iVar2;
  return (uint)param_1;
}

/* ref: FUN_0040f420 */
uint F_0040f420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40f420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0040f1b0(this,param_2);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0040f440 */
uint F_0040f440(unsigned int gen_a0)
{
  GEN_ENTER(0x40f440u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_0040e730(param_1);
  return uVar1;
}

/* ref: FUN_0040f450 */
unsigned int F_0040f450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40f450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: FUN_0040f480 */
uint F_0040f480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40f480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_0040ec10(this,param_1,0,0xffffffff);
  *(undefined4 *)((int)this + 0x30) = 0xf;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  F_0040ec10((undefined1 *)((int)this + 0x1c),param_1 + 0x1c,0,0xffffffff);
  return (uint)this;
}

/* ref: FUN_0040f4d0 */
uint F_0040f4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40f4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  F_0040ef80(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return (uint)this;
}

/* ref: FUN_0040f510 */
uint F_0040f510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40f510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0040ec10(this,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_0040f530 */
uint F_0040f530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40f530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_0040ef80(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_0040f560 */
uint F_0040f560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40f560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0040ed70(this,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_0040f580 */
uint F_0040f580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40f580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_0040ee60(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_0040f5b0 */
uint F_0040f5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40f5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  pvVar3 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar3 = *(undefined * PTR32 *)this;
  }
  iVar1 = *(int *)((int)this + 0x10) + (int)pvVar3;
  pvVar3 = this;
  if (0xf < *(uint *)((int)this + 0x14)) {
    pvVar3 = *(undefined * PTR32 *)this;
  }
  if (iVar1 != 0) {
    uVar2 = F_0040f080(this,iVar1 - (int)pvVar3,1,param_1);
    return uVar2;
  }
  uVar2 = F_0040f080(this,0,1,param_1);
  return uVar2;
}

/* ref: FUN_0040f600 */
uint F_0040f600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x40f600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  F_0040ec10(param_1,this,param_2,param_3);
  return (uint)param_1;
}

/* ref: FUN_0040f630 */
uint F_0040f630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40f630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar1 = F_0040f1b0(this,param_2);
  if (uVar1 != *(uint *)((int)this + 4)) {
    puVar2 = (undefined4 *)(uVar1 + 0xc);
    if (0xf < *(uint *)(uVar1 + 0x20)) {
      puVar2 = (undefined4 *)*puVar2;
    }
    uVar3 = F_0040d9f0(param_2,0,*(undefined4 *)((int)param_2 + 0x10),puVar2,
                         *(undefined4 *)(uVar1 + 0x1c));
    if (-1 < (int)uVar3) {
      *param_1 = uVar1;
      return (uint)param_1;
    }
  }
  *param_1 = *(uint *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_0040f6a0 */
uint F_0040f6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40f6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (this != param_1) {
    if (0xf < *(uint *)((int)this + 0x14)) {
      F_00429760(*(undefined4 *)this,*(uint *)((int)this + 0x14) + 1,0x12f);
    }
    *(undefined4 *)((int)this + 0x14) = 0xf;
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined1 *)this = 0;
    if ((uint)param_1[5] < 0x10) {
      F_00c46e20(this,param_1,param_1[4] + 1);
    }
    else {
      *(undefined4 *)this = *param_1;
      *param_1 = 0;
    }
    *(undefined4 *)((int)this + 0x10) = param_1[4];
    *(undefined4 *)((int)this + 0x14) = param_1[5];
    param_1[5] = 0xf;
    param_1[4] = 0;
    *(undefined1 *)param_1 = 0;
  }
  return (uint)this;
}

/* ref: FUN_0040f730 */
unsigned int F_0040f730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40f730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = puVar1[(int)param_1 - (int)param_3];
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 + ((int)param_1 - (int)param_3) != param_2);
  }
  return 0;
}

/* ref: FUN_0040f760 */
uint F_0040f760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40f760u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_0040e730(param_2);
  return uVar1;
}

/* ref: FUN_0040f770 */
uint F_0040f770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x40f770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_0040e730(param_4 + 3);
    F_00429760(param_4,0x48,0x12f);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    iVar4 = *(int *)((int)this + 4);
  }
  else {
    if ((char)param_2 != '\0') {
      *param_3 = param_4;
      if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
        **(int * PTR32 *)((int)this + 4) = (int)param_4;
      }
      goto LAB_0040f7e6;
    }
    param_3[2] = param_4;
    iVar4 = *(int *)((int)this + 4);
    if (param_3 != *(undefined4 * PTR32 *)(iVar4 + 8)) goto LAB_0040f7e6;
  }
  *(int * PTR32 *)(iVar4 + 8) = param_4;
LAB_0040f7e6: ;
  cVar1 = *(char *)(param_4[1] + 0x44);
  piVar3 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar4 + 0x44) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar3[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar4 = piVar6[2];
      if (*(char *)(iVar4 + 0x44) == '\0') {
        *(undefined1 *)(piVar5 + 0x11) = 1;
        *(undefined1 *)(iVar4 + 0x44) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x44))) = 0;
        piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
      }
      else {
        if (piVar3 == (int *)piVar5[2]) {
          piVar3 = (int *)piVar5[2];
          piVar5[2] = *piVar3;
          if (*(char *)(*piVar3 + 0x45) == '\0') {
            *(int * PTR32 *)(*piVar3 + 4) = piVar5;
          }
          piVar3[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar3;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
              *piVar6 = (int)piVar3;
            }
            else {
              piVar6[2] = (int)piVar3;
            }
          }
          *piVar3 = (int)piVar5;
          piVar5[1] = (int)piVar3;
          piVar3 = piVar5;
        }
        *(undefined1 *)(piVar3[1] + 0x44) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x44))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x45) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar2 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar2 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_0040f971: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar4 = *piVar6;
      if (*(char *)(iVar4 + 0x44) != '\0') {
        if (piVar3 == (int *)*piVar5) {
          iVar4 = *piVar5;
          *piVar5 = *(int *)(iVar4 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar4 + 8) + 0x45))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar4 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar4 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar4;
          }
          else {
            piVar3 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar3[2]) {
              piVar3[2] = iVar4;
            }
            else {
              *piVar3 = iVar4;
            }
          }
          *(int * PTR32 *)(iVar4 + 8) = piVar5;
          piVar5[1] = iVar4;
          piVar3 = piVar5;
        }
        *(undefined1 *)(piVar3[1] + 0x44) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x44))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x45) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
        }
        else {
          piVar2 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar2) {
            *piVar2 = (int)piVar6;
          }
          else {
            piVar2[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_0040f971;
      }
      *(undefined1 *)(piVar5 + 0x11) = 1;
      *(undefined1 *)(iVar4 + 0x44) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x44))) = 0;
      piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
    }
    cVar1 = *(char *)(piVar3[1] + 0x44);
  } while( true );
}

/* ref: FUN_0040f9a0 */
uint F_0040f9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40f9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_0040ec10(this,param_1,0,0xffffffff);
  *(undefined4 *)((int)this + 0x30) = 0xf;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  F_0040ec10((undefined1 *)((int)this + 0x1c),param_1 + 0x1c,0,0xffffffff);
  return (uint)this;
}

/* ref: FUN_0040f9f0 */
uint F_0040f9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40f9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_0040f6a0(this,param_1);
  return (uint)this;
}

/* ref: FUN_0040fa20 */
uint F_0040fa20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40fa20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0040f6a0(this,param_1);
  return uVar1;
}

/* ref: FUN_0040fa30 */
uint F_0040fa30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40fa30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined1 * puVar3;
  undefined1 * puVar4;
  undefined1 * puVar5;
  undefined1 * puVar6;
  
  puVar5 = param_1;
  if (((undefined1 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)this))) < param_1) {
    puVar3 = (undefined1 *)F_004296a0(param_1,0,0x12f);
    puVar5 = *(undefined1 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined1 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined1 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,0x12f);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined1 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1);
    *(undefined1 * PTR32 *)this = puVar3;
    *(undefined1 * PTR32 *)((int)this + 8) = puVar5;
  }
  return (uint)puVar5;
}

/* ref: FUN_0040fac0 */
uint F_0040fac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40fac0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  bool bVar8;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x45))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_0040d7a0(&(*(int * PTR32 *)&gen_args[2]));
  piVar7 = (int *)*piVar3;
  if (*(char *)((int)piVar7 + 0x45) == '\0') {
    piVar6 = piVar7;
    if ((*(char *)(piVar3[2] + 0x45) == '\0') && (piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar7[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar7 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar6 + 0x45) == '\0') {
          piVar6[1] = (int)piVar7;
        }
        *piVar7 = (int)piVar6;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar3[2];
        *(int * PTR32 *)(piVar3[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar1 = (undefined4 *)piVar3[1];
        if ((int *)*puVar1 == piVar3) {
          *puVar1 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar1[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar3[1];
      iVar2 = (*(int * PTR32 *)&gen_args[2])[0x11];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 0x11))) = (char)piVar3[0x11];
      *(char *)(piVar3 + 0x11) = (char)iVar2;
      goto LAB_0040fbdf;
    }
  }
  else {
    piVar6 = (int *)piVar3[2];
  }
  piVar7 = (int *)piVar3[1];
  if (*(char *)((int)piVar6 + 0x45) == '\0') {
    piVar6[1] = (int)piVar7;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar6;
  }
  else if ((int *)*piVar7 == piVar3) {
    *piVar7 = (int)piVar6;
  }
  else {
    piVar7[2] = (int)piVar6;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))) == piVar3) {
    piVar4 = piVar7;
    if (*(char *)((int)piVar6 + 0x45) == '\0') {
      piVar4 = (int *)F_0040d5f0(piVar6);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) == piVar3) {
    if (*(char *)((int)piVar6 + 0x45) == '\0') {
      uVar5 = F_0040d5d0(piVar6);
      *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = uVar5;
    }
    else {
      *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = piVar7;
    }
  }
LAB_0040fbdf: ;
  if ((char)piVar3[0x11] == '\x01') {
    if (piVar6 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        if ((char)piVar6[0x11] != '\x01') break;
        piVar4 = (int *)*piVar7;
        if (piVar6 == piVar4) {
          piVar4 = (int *)piVar7[2];
          if ((char)piVar4[0x11] == '\0') {
            *(undefined1 *)(piVar4 + 0x11) = 1;
            *(undefined1 *)(piVar7 + 0x11) = 0;
            F_0040e7e0((*(undefined * PTR32 *)&gen_args[0]),piVar7);
            piVar4 = (int *)piVar7[2];
          }
          if (*(char *)((int)piVar4 + 0x45) == '\0') {
            if ((*(char *)(*piVar4 + 0x44) != '\x01') || (*(char *)(piVar4[2] + 0x44) != '\x01')) {
              if (*(char *)(piVar4[2] + 0x44) == '\x01') {
                *(undefined1 *)(*piVar4 + 0x44) = 1;
                *(undefined1 *)(piVar4 + 0x11) = 0;
                F_0040e170((*(undefined * PTR32 *)&gen_args[0]),piVar4);
                piVar4 = (int *)piVar7[2];
              }
              *(char *)(piVar4 + 0x11) = (char)piVar7[0x11];
              *(undefined1 *)(piVar7 + 0x11) = 1;
              *(undefined1 *)(piVar4[2] + 0x44) = 1;
              F_0040e7e0((*(undefined * PTR32 *)&gen_args[0]),piVar7);
              break;
            }
LAB_0040fca5: ;
            *(undefined1 *)(piVar4 + 0x11) = 0;
          }
        }
        else {
          if ((char)piVar4[0x11] == '\0') {
            *(undefined1 *)(piVar4 + 0x11) = 1;
            *(undefined1 *)(piVar7 + 0x11) = 0;
            F_0040e170((*(undefined * PTR32 *)&gen_args[0]),piVar7);
            piVar4 = (int *)*piVar7;
          }
          if (*(char *)((int)piVar4 + 0x45) == '\0') {
            if ((*(char *)(piVar4[2] + 0x44) == '\x01') && (*(char *)(*piVar4 + 0x44) == '\x01'))
            goto LAB_0040fca5;
            if (*(char *)(*piVar4 + 0x44) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0x44) = 1;
              *(undefined1 *)(piVar4 + 0x11) = 0;
              F_0040e7e0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              piVar4 = (int *)*piVar7;
            }
            *(char *)(piVar4 + 0x11) = (char)piVar7[0x11];
            *(undefined1 *)(piVar7 + 0x11) = 1;
            *(undefined1 *)(*piVar4 + 0x44) = 1;
            F_0040e170((*(undefined * PTR32 *)&gen_args[0]),piVar7);
            break;
          }
        }
        bVar8 = piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)));
        piVar6 = piVar7;
        piVar7 = (int *)piVar7[1];
      } while (bVar8);
    }
    *(undefined1 *)(piVar6 + 0x11) = 1;
  }
  if (0xf < (uint)piVar3[0xf]) {
    F_00429760(piVar3[10],piVar3[0xf] + 1,0x12f);
  }
  piVar3[0xf] = 0xf;
  piVar3[0xe] = 0;
  *(undefined1 *)(piVar3 + 10) = 0;
  if (0xf < (uint)piVar3[8]) {
    F_00429760(piVar3[3],piVar3[8] + 1,0x12f);
  }
  piVar3[8] = 0xf;
  piVar3[7] = 0;
  *(undefined1 *)(piVar3 + 3) = 0;
  F_00429760(piVar3,0x48,0x12f);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_0040fd80 */
uint F_0040fd80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40fd80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)this;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)this;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_0040fa30(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_0040fa30(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0040fde0 */
unsigned int F_0040fde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40fde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x45);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_0040fde0(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    if (0xf < (uint)piVar3[0xf]) {
      F_00429760(piVar3[10],piVar3[0xf] + 1,0x12f);
    }
    piVar3[0xf] = 0xf;
    piVar3[0xe] = 0;
    *(undefined1 *)(piVar3 + 10) = 0;
    if (0xf < (uint)piVar3[8]) {
      F_00429760(piVar3[3],piVar3[8] + 1,0x12f);
    }
    piVar3[8] = 0xf;
    piVar3[7] = 0;
    *(undefined1 *)(piVar3 + 3) = 0;
    F_00429760(piVar3,0x48,0x12f);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x45);
  }
  return 0;
}

/* ref: FUN_0040fe80 */
uint F_0040fe80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x40fe80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * puVar1;
  undefined1 * puVar2;
  undefined1 * puVar3;
  
  puVar3 = *(undefined1 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined1 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined1 * PTR32 *)((int)this + 8)) {
      F_0040fd80(this,1);
    }
    puVar2 = *(undefined1 * PTR32 *)((int)this + 4);
    puVar3 = (undefined1 *)0x0;
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = param_1[*(int *)this - (int)puVar1];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined1 * PTR32 *)((int)this + 8)) {
      F_0040fd80(this,1);
    }
    puVar3 = *(undefined1 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar3;
}

/* ref: FUN_0040fee0 */
uint F_0040fee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40fee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_0040ec10(this,param_1,0,0xffffffff);
  *(undefined4 *)((int)this + 0x30) = 0xf;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  F_0040f6a0((undefined1 *)((int)this + 0x1c),param_2);
  return (uint)this;
}

/* ref: FUN_0040ff30 */
uint F_0040ff30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x40ff30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  uVar1 = param_1[4];
  uVar3 = *(int *)(param_2 + 0x10) + *(int *)(param_3 + 0x10);
  if (((uVar1 <= uVar3) && (param_1[5] != uVar3)) &&
     (bVar2 = F_0040e870(param_1,uVar3,1), bVar2 != 0)) {
    param_1[4] = uVar1;
    puVar4 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar4 = (undefined4 *)*param_1;
    }
    *(undefined1 *)((int)puVar4 + uVar1) = 0;
  }
  F_0040ed70(param_1,param_2,0,0xffffffff);
  F_0040ed70(param_1,param_3,0,0xffffffff);
  return (uint)param_1;
}

/* ref: FUN_0040ffb0 */
uint F_0040ffb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x40ffb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  uint uVar9;
  int iVar10;
  undefined4 * puVar11;
  bool bVar12;
  undefined4 uVar13;
  
  puVar7 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar12 = true;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar7[1] + 0x45) == '\0') {
    uVar9 = *(uint *)((*(int *)&gen_args[2]) + 0x1c);
    uVar1 = *(uint *)((*(int *)&gen_args[2]) + 0x20);
    puVar11 = (undefined4 *)puVar7[1];
    do {
      puVar7 = puVar11;
      piVar4 = puVar7 + 3;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        uVar2 = puVar7[7];
        if (0xf < (uint)puVar7[8]) {
          piVar4 = (int *)*piVar4;
        }
        uVar5 = *(uint *)((*(int *)&gen_args[2]) + 0x1c);
        if (uVar9 < *(uint *)((*(int *)&gen_args[2]) + 0x1c)) {
          uVar5 = uVar9;
        }
        uVar6 = uVar5;
        if (uVar2 <= uVar5) {
          uVar6 = uVar2;
        }
        if (uVar1 < 0x10) {
          iVar10 = (*(int *)&gen_args[2]) + 0xc;
        }
        else {
          iVar10 = *(int *)((*(int *)&gen_args[2]) + 0xc);
        }
        uVar6 = F_0040d320(iVar10,piVar4,uVar6);
        if (uVar6 == 0) {
          if (uVar5 < uVar2) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = (uint)(uVar5 != uVar2);
          }
        }
        bVar12 = (int)uVar6 < 0;
      }
      else {
        if (uVar1 < 0x10) {
          iVar10 = (*(int *)&gen_args[2]) + 0xc;
        }
        else {
          iVar10 = *(int *)((*(int *)&gen_args[2]) + 0xc);
        }
        uVar2 = puVar7[7];
        uVar5 = uVar2;
        if (uVar9 <= uVar2) {
          uVar5 = uVar9;
        }
        if (0xf < (uint)puVar7[8]) {
          piVar4 = (int *)*piVar4;
        }
        uVar5 = F_0040d320(piVar4,iVar10,uVar5);
        if (uVar5 == 0) {
          if (uVar2 < uVar9) {
            bVar12 = false;
            goto LAB_0041009c;
          }
          uVar5 = (uint)(uVar2 != uVar9);
        }
        bVar12 = -1 < (int)uVar5;
      }
LAB_0041009c: ;
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar12);
      if (bVar12 == false) {
        puVar11 = (undefined4 *)puVar7[2];
      }
      else {
        puVar11 = (undefined4 *)*puVar7;
      }
    } while (*(char *)((int)puVar11 + 0x45) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar7;
  if (bVar12 != false) {
    if (puVar7 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      uVar13 = 1;
      goto LAB_004100d1;
    }
    F_0040da70(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar3 = (*(undefined4 * PTR32 *)&gen_args[3]);
  puVar11 = (undefined4 *)((*(int *)&gen_args[2]) + 0xc);
  puVar8 = puVar11;
  if (0xf < *(uint *)((*(int *)&gen_args[2]) + 0x20)) {
    puVar8 = (undefined *)*puVar11;
  }
  uVar9 = F_0040d9f0((*(undefined4 * PTR32 *)&gen_args[3]) + 3,0,(*(undefined4 * PTR32 *)&gen_args[3])[7],puVar8,*(undefined4 *)((*(int *)&gen_args[2]) + 0x1c));
  uVar13 = (*(undefined4 *)(gen_frame + 0x8));
  if (-1 < (int)uVar9) {
    F_0040e730(puVar11);
    F_00429760((*(int *)&gen_args[2]),0x48,0x12f);
    *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar3;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
LAB_004100d1: ;
  puVar7 = (undefined4 *)F_0040f770((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),uVar13,puVar7,(*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar7;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00410160 */
unsigned int F_00410160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x410160u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined1 *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    F_0040ec10(param_1,param_2,0,0xffffffff);
    *(undefined4 *)(param_1 + 0x30) = 0xf;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    param_1[0x1c] = 0;
    F_0040ec10(param_1 + 0x1c,param_2 + 0x1c,0,0xffffffff);
  }
  return 0;
}

/* ref: FUN_004101c0 */
uint F_004101c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4101c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * puVar1;
  undefined1 * puVar2;
  undefined1 * puVar3;
  
  puVar3 = *(undefined1 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined1 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined1 * PTR32 *)((int)this + 8)) {
      F_0040fd80(this,1);
    }
    puVar2 = *(undefined1 * PTR32 *)((int)this + 4);
    puVar3 = (undefined1 *)0x0;
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = param_1[*(int *)this - (int)puVar1];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined1 * PTR32 *)((int)this + 8)) {
      F_0040fd80(this,1);
    }
    puVar3 = *(undefined1 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar3;
}

/* ref: FUN_00410220 */
uint F_00410220(unsigned int gen_a0)
{
  GEN_ENTER(0x410220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0040fde0(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00410250 */
unsigned int F_00410250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x410250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  if (this != param_1) {
    iVar1 = *(int *)this;
    if (iVar1 != 0) {
      F_00429760(iVar1,*(int *)((int)this + 8) - iVar1,0x12f);
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return 0;
}

/* ref: FUN_004102b0 */
uint F_004102b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4102b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_0040ec10(this,param_1,0,0xffffffff);
  *(undefined4 *)((int)this + 0x30) = 0xf;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x1c) = 0;
  F_0040f6a0((undefined1 *)((int)this + 0x1c),param_2);
  return (uint)this;
}

/* ref: FUN_00410300 */
uint F_00410300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x410300u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    F_0040fde0(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x45) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x45) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x45);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x45);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x45);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x45);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_0040fac0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_004103c0 */
uint F_004103c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4103c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * this_00;
  int * piVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  piVar1 = (*(int * PTR32 *)&gen_args[3]);
  piVar3 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  this_00 = (*(int * PTR32 *)&gen_args[3]) + 3;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) == 0) {
    F_0040f770((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,piVar3,(*(int * PTR32 *)&gen_args[3]));
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  if ((*(int * PTR32 *)&gen_args[2]) == (int *)*piVar3) {
    piVar3 = (*(int * PTR32 *)&gen_args[2]) + 3;
    if (0xf < (uint)(*(int * PTR32 *)&gen_args[2])[8]) {
      piVar3 = (int *)*piVar3;
    }
    uVar4 = F_0040d9f0(this_00,0,(*(int * PTR32 *)&gen_args[3])[7],piVar3,(*(int * PTR32 *)&gen_args[2])[7]);
    if ((int)uVar4 < 0) {
      F_0040f770((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),piVar1);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else if ((*(int * PTR32 *)&gen_args[2]) == piVar3) {
    bVar2 = F_0040ed40(piVar3[2] + 0xc,this_00);
    if (bVar2 != 0) {
      F_0040f770((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))),piVar1);
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else {
    bVar2 = F_0040ed40(this_00,(*(int * PTR32 *)&gen_args[2]) + 3);
    if (bVar2 != 0) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_0040da70(&(*(int * PTR32 *)&gen_args[3]));
      bVar2 = F_0040ed40((*(int * PTR32 *)&gen_args[3]) + 3,this_00);
      if (bVar2 != 0) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[3])[2] + 0x45))) == '\0') {
          F_0040f770((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[2]),piVar1);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_0040f770((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[3]),piVar1);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
    bVar2 = F_0040ed40((*(int * PTR32 *)&gen_args[2]) + 3,this_00);
    if (bVar2 != 0) {
      (*(int * PTR32 *)&gen_args[3]) = (*(int * PTR32 *)&gen_args[2]);
      F_0040d7a0(&(*(int * PTR32 *)&gen_args[3]));
      if (((*(int * PTR32 *)&gen_args[3]) == *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) ||
         (bVar2 = F_0040ed40(this_00,(*(int * PTR32 *)&gen_args[3]) + 3), bVar2 != 0)) {
        if (*((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2])[2] + 0x45))) == '\0') {
          F_0040f770((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),1,(*(int * PTR32 *)&gen_args[3]),piVar1);
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
        F_0040f770((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[1]),0,(*(int * PTR32 *)&gen_args[2]),piVar1);
        return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
      }
    }
  }
  puVar5 = (undefined4 *)F_0040ffb0((*(undefined * PTR32 *)&gen_args[0]),((undefined1 *)(gen_frame + 0x4)),piVar1,0);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00410580 */
unsigned int F_00410580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x410580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    F_0040ec10(param_2,param_3,0,0xffffffff);
    *(undefined4 *)(param_2 + 0x30) = 0xf;
    *(undefined4 *)(param_2 + 0x2c) = 0;
    param_2[0x1c] = 0;
    F_0040ec10(param_2 + 0x1c,param_3 + 0x1c,0,0xffffffff);
  }
  return 0;
}

/* ref: FUN_004105e0 */
uint F_004105e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4105e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (this != param_1) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00410620 */
uint F_00410620(unsigned int gen_a0)
{
  GEN_ENTER(0x410620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00410300(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00410640 */
uint F_00410640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x410640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * this_00;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x48,0,0x12f);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  this_00 = puVar1 + 3;
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x11) = 0;
  if (this_00 != (undefined4 *)0x0) {
    puVar1[8] = 0xf;
    puVar1[7] = 0;
    *(undefined1 *)this_00 = 0;
    F_0040ec10(this_00,param_1,0,0xffffffff);
    puVar1[0xf] = 0xf;
    puVar1[0xe] = 0;
    *(undefined1 *)(puVar1 + 10) = 0;
    F_0040ec10(puVar1 + 10,param_1 + 0x1c,0,0xffffffff);
  }
  return (uint)puVar1;
}

/* ref: FUN_004106d0 */
uint F_004106d0(unsigned int gen_a0)
{
  GEN_ENTER(0x4106d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00410300(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x48,0x12f);
  return (uint)uVar1;
}

/* ref: FUN_00410710 */
uint F_00410710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x410710u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00410640(this,param_3);
  F_004103c0(this,param_1,param_2,uVar1);
  return param_1;
}

/* ref: FUN_00410740 */
uint F_00410740(unsigned int gen_a0)
{
  GEN_ENTER(0x410740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00410300(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x48,0x12f);
  return (uint)uVar1;
}

/* ref: FUN_004107c0 */
uint F_004107c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4107c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar1 = F_0040f1b0(this,param_1);
  if (uVar1 != *(uint *)((int)this + 4)) {
    piVar2 = (int *)(uVar1 + 0xc);
    if (0xf < *(uint *)(uVar1 + 0x20)) {
      piVar2 = (int *)*piVar2;
    }
    uVar3 = F_0040d9f0(param_1,0,*(undefined4 *)((int)param_1 + 0x10),piVar2,
                         *(undefined4 *)(uVar1 + 0x1c));
    if (-1 < (int)uVar3) {
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return uVar1 + 0x28;
    }
  }
  uVar3 = ((uint *)(gen_frame + 0x3c))[0];
  (*(uint *)(gen_frame + 0x50)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x18)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined1 *)((char *)&((uint *)(gen_frame + 0x3c))[0] + 0)) = 0;
  ((uint *)(gen_frame + 0x3c))[0] = uVar3 & 0xffffff00;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  ((undefined1 *)(gen_frame + 0x4))[0] = 0;
  F_0040ec10(((undefined1 *)(gen_frame + 0x4)),param_1,0,0xffffffff);
  (*(undefined4 *)(gen_frame + 0x34)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  ((undefined1 *)(gen_frame + 0x20))[0] = 0;
  F_0040f6a0(((undefined1 *)(gen_frame + 0x20)),((uint *)(gen_frame + 0x3c)));
  uVar3 = F_00410640(this,((undefined1 *)(gen_frame + 0x4)));
  F_004103c0(this,&(*(int *)(gen_frame + 0x0)),uVar1,uVar3);
  F_0040e730(((undefined1 *)(gen_frame + 0x4)));
  if (0xf < (*(uint *)(gen_frame + 0x50))) {
    F_00429760(((uint *)(gen_frame + 0x3c))[0],(*(uint *)(gen_frame + 0x50)) + 1,0x12f);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (*(int *)(gen_frame + 0x0)) + 0x28;
}

/* ref: FUN_00410900 */
uint F_00410900(unsigned int gen_a0)
{
  GEN_ENTER(0x410900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00410300(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x48,0x12f);
  return (uint)uVar1;
}

/* ref: Client::System::Streaming::IStreamingCtrl::vf0 */
uint F_00410950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x410950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[26])REFP(0x1087e5c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00410980 */
uint F_00410980(unsigned int gen_a0)
{
  GEN_ENTER(0x410980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x28);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1087ec8));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  REFG(undefined4, 0x1370c0c) = 0;
  uVar2 = F_004a05c0(this);
  return uVar2;
}

/* ref: FUN_004109b0 */
uint F_004109b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4109b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x28) + 4))))((undefined4)gen_fl2bits(param_2));
  return uVar1;
}

/* ref: FUN_004109f0 */
uint F_004109f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4109f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x28) + 0x14))))(*(int * PTR32 *)((int)this + 0x28));
  return uVar1;
}

/* ref: FUN_00410a20 */
unsigned int F_00410a20(unsigned int gen_a0)
{
  GEN_ENTER(0x410a20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x28) + 0x30))))(*(int * PTR32 *)((int)this + 0x28));
  return 0;
}

/* ref: FUN_00410a40 */
byte F_00410a40(unsigned int gen_a0)
{
  GEN_ENTER(0x410a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x28) + 0x38))))(*(int * PTR32 *)((int)this + 0x28));
  return (byte)uVar1;
}

/* ref: FUN_00410a50 */
uint F_00410a50(unsigned int gen_a0)
{
  GEN_ENTER(0x410a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x28) + 0x3c))))(*(int * PTR32 *)((int)this + 0x28));
  return uVar1;
}

/* ref: FUN_00410a60 */
byte F_00410a60(unsigned int gen_a0)
{
  GEN_ENTER(0x410a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x28) + 0x40))))(*(int * PTR32 *)((int)this + 0x28));
  return (byte)uVar1;
}

/* ref: FUN_00410a70 */
uint F_00410a70(unsigned int gen_a0)
{
  GEN_ENTER(0x410a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x28) + 0x44))))(*(int * PTR32 *)((int)this + 0x28));
  return uVar1;
}

/* ref: FUN_00410aa0 */
unsigned int F_00410aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x410aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x28) + 0x58))))(*(int * PTR32 *)((int)this + 0x28));
  return 0;
}

/* ref: FUN_00410ab0 */
byte F_00410ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x410ab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x28) + 0x5c))))(*(int * PTR32 *)((int)this + 0x28));
  return (byte)uVar1;
}

/* ref: FUN_00410ac0 */
byte F_00410ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x410ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x28) + 0x60))))(*(int * PTR32 *)((int)this + 0x28));
  return (byte)uVar1;
}

/* ref: FUN_00410ad0 */
uint F_00410ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x410ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x28) + 100))))
                    (*(int * PTR32 *)((int)this + 0x28),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf25 */
uint F_00410ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x410ae0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x14);
  *(undefined1 *)(uVar1 + 0x40) = (undefined1)param_2;
  return uVar1;
}

/* ref: FUN_00410af0 */
unsigned int F_00410af0(float gen_a0)
{
  GEN_ENTER(0x410af0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00410b10 */
uint F_00410b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x410b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004cefe0(this);
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1087ed8));
  *(undefined1 *)((int)this + 0x40) = 1;
  *(undefined4 *)((int)this + 0x44) = 0;
  return (uint)this;
}

/* ref: FUN_00410b90 */
uint F_00410b90(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0x410b90u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  int param_1 = (int)gen_a0;
  double param_2 = (double)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  *(longlong *)(iVar1 + 0x28) = (longlong)((double)*(longlong *)(iVar1 + 0x30) * param_2);
  *(undefined2 *)(iVar1 + 10) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  uVar2 = *(uint *)(iVar1 + 0x2c);
  if ((*(int *)(iVar1 + 0x3c) <= (int)uVar2) &&
     ((*(int *)(iVar1 + 0x3c) < (int)uVar2 || (*(uint *)(iVar1 + 0x38) <= *(uint *)(iVar1 + 0x28))))
     ) {
    *(undefined4 *)(iVar1 + 0x10) = 1;
    return uVar2;
  }
  *(undefined4 *)(iVar1 + 0x10) = 2;
  return uVar2;
}

/* ref: FUN_00410be0 */
uint F_00410be0(unsigned int gen_a0)
{
  GEN_ENTER(0x410be0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x3c);
}

/* ref: FUN_00410c00 */
uint F_00410c00(unsigned int gen_a0)
{
  GEN_ENTER(0x410c00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x3c);
}

/* ref: FUN_00410c90 */
uint F_00410c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x410c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x3c);
  if ((iVar1 == 0) || (iVar1 == -0x250)) {
    return 0;
  }
  *param_1 = *(int *)(iVar1 + 0x254);
  iVar1 = *(int *)(iVar1 + 600);
  *param_2 = iVar1;
  if ((*param_1 != 0) && (iVar1 != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00410cd0 */
uint F_00410cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x410cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_eax = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (undefined4 *)*in_eax;
  (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)0x0;
  gen_imp_VariantInit((undefined *)&(*(undefined (*)[16])((char *)((undefined *)(gen_frame + 0x0)))));
  (*(ushort *)((char *)((undefined *)(gen_frame + 0x0)))) = 0xb;
  (*(undefined2 *)((char *)((undefined *)(gen_frame + 0x0)) + 8)) = 1;
  uVar1 = gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x1087e34),(GEN_LPANY)0x0,3,(undefined *)&REFG(undefined, 0x1095a04),&(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x18)))((*(undefined4 * PTR32 *)(gen_frame + 0x18)),&REFG(undefined, 0x112814c),&(*(int * PTR32 *)(gen_frame + 0x14)));
    if (-1 < (int)uVar1) {
      uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0xc))((*(int * PTR32 *)(gen_frame + 0x14)),&REFG(undefined, 0x112839c),&REFG(undefined, 0x112839c));
      if (-1 < (int)uVar1) {
        uVar1 = ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x18)))((*(undefined4 * PTR32 *)(gen_frame + 0x18)),&REFG(undefined, 0x11555b0),&(*(int * PTR32 *)(gen_frame + 0x10)));
        if (-1 < (int)uVar1) {
          uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x10))((*(int * PTR32 *)(gen_frame + 0x10)),(*(undefined * PTR32 (*)[6])REFP(0x1084b60)),((undefined *)(gen_frame + 0x0)));
          if (-1 < (int)uVar1) {
            uVar1 = ((code *)*(gen_code32 *)(*param_2 + 0xc))(param_2,(*(undefined4 * PTR32 *)(gen_frame + 0x18)),(*(undefined * PTR32 (*)[1])REFP(0x1084b7c)));
          }
        }
      }
    }
  }
  if ((*(int * PTR32 *)(gen_frame + 0x14)) != (int *)0x0) {
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 8))((*(int * PTR32 *)(gen_frame + 0x14)));
    (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)0x0;
  }
  if ((*(int * PTR32 *)(gen_frame + 0x10)) != (int *)0x0) {
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 8))((*(int * PTR32 *)(gen_frame + 0x10)));
  }
  return uVar1;
}

/* ref: FUN_00410e20 */
unsigned int F_00410e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x410e20u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  int iVar2;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) != 0) {
    iVar2 = (*(int *)&gen_args[2]);
    if ((char)(*(int *)&gen_args[2]) != '\0') {
      while (uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 0x28))))
                               (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))),0,&(*(int *)&gen_args[2])), iVar2 = (*(int *)&gen_args[2]), uVar1 != 0
            ) {
        F_004cee10();
      }
    }
    do {
      if ((*(int *)&gen_args[1]) == 1) {
        ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))));
        iVar2 = 2;
LAB_00410e9c: ;
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = REFG(float, 0x1087ef8);
      }
      else {
        if ((*(int *)&gen_args[1]) == 2) {
          ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 0x24))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))));
          iVar2 = 0;
          goto LAB_00410e9c;
        }
        if ((*(int *)&gen_args[1]) == 3) {
          ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))));
          iVar2 = 1;
          goto LAB_00410e9c;
        }
      }
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))),0,&(*(int *)&gen_args[2]));
    } while (iVar2 != (*(int *)&gen_args[2]));
    iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c)));
    *(int *)(iVar2 + 0x20) = (*(int *)&gen_args[1]);
    *(int *)(iVar2 + 0x1c) = (*(int *)&gen_args[1]);
  }
  return 0;
}

/* ref: FUN_00410ed0 */
uint F_00410ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x410ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x30);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x28);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1,0,0,0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x28) + 8))))(*(int * PTR32 *)((int)this + 0x28));
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x24);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x34);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x20);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x18);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x38);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,1);
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  return uVar2;
}

/* ref: FUN_00410f70 */
unsigned int F_00410f70(unsigned int gen_a0)
{
  GEN_ENTER(0x410f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1087f00));
  piVar2 = (int *)((int)this + 0x264);
  iVar3 = 3;
  do {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  gen_imp_CloseHandle(*(undefined4 *)((int)this + 0x278));
  gen_imp_CloseHandle(*(undefined4 *)((int)this + 0x274));
  return 0;
}

/* ref: FUN_00410fe0 */
uint F_00410fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x410fe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)(in_ecx + 0x10) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined1 *)(in_ecx + 0xc) = 0;
  *(undefined4 *)(in_ecx + 0x14) = 0;
  *(undefined4 *)(in_ecx + 0x18) = 0;
  *(undefined4 *)(in_ecx + 0x1c) = 0;
  *(undefined4 *)(in_ecx + 0x20) = 0;
  *(undefined4 *)(in_ecx + 0x28) = 0;
  *(undefined4 *)(in_ecx + 0x2c) = 0;
  *(undefined4 *)(in_ecx + 0x30) = 0;
  *(undefined4 *)(in_ecx + 0x34) = 0;
  *(undefined4 *)(in_ecx + 0x38) = 0;
  *(undefined4 *)(in_ecx + 0x3c) = 0;
  *(undefined4 *)(in_ecx + 0x40) = 0;
  *(undefined4 *)(in_ecx + 0x250) = 0;
  *(undefined4 *)(in_ecx + 0x254) = 0;
  *(undefined4 *)(in_ecx + 600) = 0;
  *(undefined4 *)(in_ecx + 0x25c) = uVar1;
  *(undefined4 *)(in_ecx + 0x264) = 0;
  *(undefined4 *)(in_ecx + 0x268) = 0;
  *(undefined4 *)(in_ecx + 0x26c) = 0;
  *(undefined4 *)(in_ecx + 0x260) = 0;
  *(undefined4 *)(in_ecx + 0x270) = 0;
  return 0;
}

/* ref: FUN_00411050 */
unsigned int F_00411050(unsigned int gen_a0)
{
  GEN_ENTER(0x411050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined1 *)((int)this + 0x27c) = 0;
  *(undefined1 *)((int)this + 0x27d) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x27e) = 0;
  gen_imp_ResetEvent(*(undefined4 *)((int)this + 0x274));
  gen_imp_ResetEvent(*(undefined4 *)((int)this + 0x278));
  *(undefined4 *)((int)this + 0x260) = 0;
  return 0;
}

/* ref: FUN_00411090 */
unsigned int F_00411090(unsigned int gen_a0)
{
  GEN_ENTER(0x411090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined1 *)((int)this + 0x27e) = 1;
  gen_imp_SetEvent(*(HANDLE *)((int)this + 0x274));
  *(undefined4 *)((int)this + 0x18) = 0;
  return 0;
}

/* ref: FUN_00411120 */
unsigned int F_00411120(unsigned int gen_a0)
{
  GEN_ENTER(0x411120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int * piVar3;
  
  *(undefined4 *)((int)this + 0x14) = 1;
  piVar3 = (int *)((int)this + 0x264);
  iVar2 = 3;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined1 *)((int)this + 0x27e) = 1;
  gen_imp_SetEvent(*(HANDLE *)((int)this + 0x274));
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined1 *)((int)this + 0x27c) = 0;
  return 0;
}

/* ref: FUN_00411180 */
uint F_00411180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x411180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00c83710(this,&REFG(undefined, 0x10849fc),0,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x1087fa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[15])REFP(0x1087f64));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[5])REFP(0x1087f4c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe0) = (*(undefined * PTR32 (*)[9])REFP(0x1087f24));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe4) = (*(undefined * PTR32 (*)[5])REFP(0x1087f0c));
  *(undefined4 *)((int)this + 0x160) = param_3;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1b0));
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(int *)((int)this + 0x1cc) = (int)this + 0x180;
  *(undefined4 * PTR32 *)((int)this + 0x1c8) = (undefined4 *)((int)this + 0x174);
  *(int *)((int)this + 0x1d4) = (int)this + 0x198;
  *(int *)((int)this + 0x1d0) = (int)this + 0x18c;
  *(int *)((int)this + 0x1d8) = (int)this + 0x1a4;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  return (uint)this;
}

/* ref: FUN_00411280 */
unsigned int F_00411280(unsigned int gen_a0)
{
  GEN_ENTER(0x411280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  int local_8;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x1087fa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[15])REFP(0x1087f64));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[5])REFP(0x1087f4c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe0) = (*(undefined * PTR32 (*)[9])REFP(0x1087f24));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xe4) = (*(undefined * PTR32 (*)[5])REFP(0x1087f0c));
  piVar2 = (int *)((int)this + 0x178);
  local_8 = 5;
  do {
    piVar1 = (int *)piVar2[-1];
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      piVar2[-1] = 0;
    }
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 3;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if (*(int *)((int)this + 0x1ec) != 0) {
    F_00406b30(*(int *)((int)this + 0x1ec));
    *(undefined4 *)((int)this + 0x1ec) = 0;
  }
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1b0));
  F_00c83780(this);
  return 0;
}

/* ref: FUN_00411330 */
uint F_00411330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x411330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  uint uVar10;
  ulonglong uVar11;
  
  uVar10 = param_3 >> 5;
  puVar8 = param_1;
  puVar9 = param_2;
  if (((uint)param_2 & 0xf) == 0) {
    if (((uint)param_1 & 0xf) == 0) {
      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
        uVar1 = puVar9[4];
        uVar2 = puVar9[5];
        uVar3 = puVar9[6];
        uVar4 = puVar9[7];
        uVar5 = puVar9[1];
        uVar6 = puVar9[2];
        uVar7 = puVar9[3];
        *puVar8 = *puVar9;
        puVar8[1] = uVar5;
        puVar8[2] = uVar6;
        puVar8[3] = uVar7;
        puVar8[4] = uVar1;
        puVar8[5] = uVar2;
        puVar8[6] = uVar3;
        puVar8[7] = uVar4;
        puVar9 = puVar9 + 8;
        puVar8 = puVar8 + 8;
      }
    }
    else {
      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
        uVar1 = puVar9[4];
        uVar2 = puVar9[5];
        uVar3 = puVar9[6];
        uVar4 = puVar9[7];
        uVar5 = puVar9[1];
        uVar6 = puVar9[2];
        uVar7 = puVar9[3];
        *puVar8 = *puVar9;
        puVar8[1] = uVar5;
        puVar8[2] = uVar6;
        puVar8[3] = uVar7;
        puVar8[4] = uVar1;
        puVar8[5] = uVar2;
        puVar8[6] = uVar3;
        puVar8[7] = uVar4;
        puVar9 = puVar9 + 8;
        puVar8 = puVar8 + 8;
      }
    }
  }
  else if (((uint)param_1 & 0xf) == 0) {
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      uVar1 = puVar9[4];
      uVar2 = puVar9[5];
      uVar3 = puVar9[6];
      uVar4 = puVar9[7];
      uVar5 = puVar9[1];
      uVar6 = puVar9[2];
      uVar7 = puVar9[3];
      *puVar8 = *puVar9;
      puVar8[1] = uVar5;
      puVar8[2] = uVar6;
      puVar8[3] = uVar7;
      puVar8[4] = uVar1;
      puVar8[5] = uVar2;
      puVar8[6] = uVar3;
      puVar8[7] = uVar4;
      puVar9 = puVar9 + 8;
      puVar8 = puVar8 + 8;
    }
  }
  else {
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      uVar1 = puVar9[4];
      uVar2 = puVar9[5];
      uVar3 = puVar9[6];
      uVar4 = puVar9[7];
      uVar5 = puVar9[1];
      uVar6 = puVar9[2];
      uVar7 = puVar9[3];
      *puVar8 = *puVar9;
      puVar8[1] = uVar5;
      puVar8[2] = uVar6;
      puVar8[3] = uVar7;
      puVar8[4] = uVar1;
      puVar8[5] = uVar2;
      puVar8[6] = uVar3;
      puVar8[7] = uVar4;
      puVar9 = puVar9 + 8;
      puVar8 = puVar8 + 8;
    }
  }
  if ((param_3 & 0x1f) != 0) {
    uVar11 = F_00c46aa0(puVar8,puVar9,param_3 & 0x1f);
    puVar8 = (undefined4 *)uVar11;
  }
  return (uint)puVar8;
}

/* ref: FUN_00411450 */
unsigned int F_00411450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x411450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    uVar1 = 0;
    piVar2 = (int *)((int)this + 0x1dc);
    uVar3 = 3;
    do {
      if (*piVar2 == param_1) {
        piVar2 = ((int *)GEN_TOP((*(int *)((int)this + uVar1 * 4 + 0x1dc) + 8)));
        *piVar2 = *piVar2 + 1;
        return 0;
      }
      if (*piVar2 == 0) {
        uVar3 = uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < 3);
    if (uVar3 != 3) {
      *(int *)((int)this + uVar3 * 4 + 0x1dc) = param_1;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
  }
  return 0;
}

/* ref: FUN_004114e0 */
unsigned int F_004114e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4114e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 8) == 0)) {
    uVar1 = 0;
    piVar2 = (int *)((int)this + 0x1c8);
    while (*piVar2 != 0) {
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
      if (4 < uVar1) {
        return 0;
      }
    }
    *(int *)((int)this + uVar1 * 4 + 0x1c8) = param_1;
  }
  return 0;
}

/* ref: FUN_00411520 */
uint F_00411520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x411520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x48))))(*(int * PTR32 *)(param_1 + 4),0,&(*(int * PTR32 *)(gen_frame + 0x18)));
    if (uVar1 == 0) {
      uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x34))((*(int * PTR32 *)(gen_frame + 0x18)),&(*(int *)(gen_frame + 0xc)),0,0x2800);
      if (uVar1 == 0) {
        iVar2 = *(int *)((int)this + 0x1ec);
        param_1 = (*(int *)(gen_frame + 0x10));
        (*(uint *)(gen_frame + 0x14)) = uVar1;
        if (*(int *)((int)this + 0x168) != 0) {
          do {
            F_00411330(param_1,iVar2,(*(int *)(gen_frame + 0xc)));
            param_1 = param_1 + (*(int *)(gen_frame + 0xc));
            uVar1 = (*(uint *)(gen_frame + 0x14)) + 1;
            iVar2 = iVar2 + (*(int *)(gen_frame + 0xc));
            (*(uint *)(gen_frame + 0x14)) = uVar1;
          } while (uVar1 < *(uint *)((int)this + 0x168));
        }
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x38))((*(int * PTR32 *)(gen_frame + 0x18)));
      }
      uVar1 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 8))((*(int * PTR32 *)(gen_frame + 0x18)));
    }
  }
  return uVar1;
}

/* ref: Client::System::Streaming::TextureRenderer::vf44 */
uint F_004115f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4115f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 == 0) {
    return 0x80004003;
  }
  uVar1 = F_004011f0(param_1,&REFG(undefined, 0x1084df8));
  if (uVar1 == 0) {
    return 0x80040200;
  }
  uVar1 = F_004011f0(param_1 + 0x10,&REFG(undefined, 0x1085108));
  if (uVar1 == 0) {
    return 0x80040201;
  }
  *(undefined4 *)(this + 0x170) = 0x16;
  uVar1 = F_004011f0(param_1 + 0x2c,&REFG(undefined, 0x1085d08));
  return (-(uint)(uVar1 != 0) & 0x7ffbfdfa) + 0x80040206;
}

/* ref: Client::System::Streaming::TextureRenderer::vf43 */
uint F_00411680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x411680u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined * pTVar4;
  int iVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if ((*(int * PTR32 *)&gen_args[1]) == (int *)0x0) {
    return 0x80004003;
  }
  (*(int *)(gen_frame + 0x14)) = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x168)));
  ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xc))))((*(int * PTR32 *)&gen_args[1]),&(*(int * PTR32 *)&gen_args[1]));
  iVar2 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x16c)));
  lpCriticalSection = (LPCRITICAL_SECTION)((*(undefined * PTR32 *)&gen_args[0]) + 0x1b0);
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x8)) = lpCriticalSection;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  uVar3 = 0;
  pTVar4 = (*(undefined * PTR32 *)&gen_args[0]) + 0x1c8;
  do {
    if (*(int *)pTVar4 != 0) {
      (*(int *)(gen_frame + 0xc)) = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + uVar3 * 4 + 0x1c8)));
      if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + uVar3 * 4 + 0x1c8))) != 0) {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)(gen_frame + 0xc)) + 4) + 0x48))))(*(int * PTR32 *)((*(int *)(gen_frame + 0xc)) + 4),0,&(*(int * PTR32 *)(gen_frame + 0x18)));
        if (uVar3 == 0) {
          uVar3 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x34))((*(int * PTR32 *)(gen_frame + 0x18)),&(*(int *)(gen_frame + 0x0)),0,0x2000);
          if (uVar3 == 0) {
            (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x0));
            if ((*(int *)(gen_frame + 0x14)) < 0) {
              if (0 < -(*(int *)(gen_frame + 0x14))) {
                (*(int *)(gen_frame + 0x14)) = -(*(int *)(gen_frame + 0x14));
                iVar5 = (*(int *)(gen_frame + 0x4));
                do {
                  F_00411330(iVar5,(*(int * PTR32 *)&gen_args[1]),iVar2);
                  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + iVar2)));
                  iVar5 = iVar5 + (*(int *)(gen_frame + 0x10));
                  iVar1 = (*(int *)(gen_frame + 0x14)) + -1;
                  (*(int *)(gen_frame + 0x14)) = iVar1;
                } while (iVar1 != 0);
              }
            }
            else {
              (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + ((*(int *)(gen_frame + 0x14)) + -1) * iVar2)));
              if (0 < (*(int *)(gen_frame + 0x14))) {
                iVar5 = (*(int *)(gen_frame + 0x4));
                do {
                  F_00411330(iVar5,(*(int * PTR32 *)&gen_args[1]),iVar2);
                  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) - iVar2)));
                  iVar5 = iVar5 + (*(int *)(gen_frame + 0x10));
                  iVar1 = (*(int *)(gen_frame + 0x14)) + -1;
                  (*(int *)(gen_frame + 0x14)) = iVar1;
                } while (iVar1 != 0);
              }
            }
            ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 0x38))((*(int * PTR32 *)(gen_frame + 0x18)));
            lpCriticalSection = (*(LPCRITICAL_SECTION *)(gen_frame + 0x8));
          }
          ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 8))((*(int * PTR32 *)(gen_frame + 0x18)));
        }
        gen_imp_EnterCriticalSection(lpCriticalSection);
        F_004114e0((*(undefined * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1e8))));
        *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1e8))) = (*(int *)(gen_frame + 0xc));
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        return 0;
      }
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 0x80004003;
    }
    uVar3 = uVar3 + 1;
    pTVar4 = pTVar4 + 4;
  } while (uVar3 < 5);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0x80004003;
}

/* ref: Client::System::Streaming::TextureRenderer::vf13 */
uint F_00411800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x411800u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xac))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Streaming::StreamingPlayer::vf1 */
uint F_00411830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x411830u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x28) + 0x4c))))
            ((undefined4)
             gen_fl2bits((float)((float10)*(float *)param_2 * (float10)*(double *)&REFG(undefined, 0x1088070))));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x28) + 0x50))))(*(int * PTR32 *)(param_1 + 0x28));
  return uVar1;
}

/* ref: FUN_00411870 */
uint F_00411870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x411870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x270];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x268)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x26c);
  uVar1 = F_00430830(REFG(void * PTR32, 0x137104c));
  F_0042e170(((undefined1 *)(gen_frame + 0x214)),uVar1);
  F_0042a3a0(((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x214)),1);
  F_0042c880(((undefined1 *)(gen_frame + 0x214)));
  F_0042a020(((undefined1 *)(gen_frame + 0xc)),param_1);
  F_0042a2a0(((undefined1 *)(gen_frame + 0xc)),&REFG(undefined, 0x10849f0));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x28) + 0x3c))))(*(int * PTR32 *)((int)this + 0x28));
  if ((char)uVar1 != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x28) + 0x1c))))(*(int * PTR32 *)((int)this + 0x28));
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x28) + 0x10))))
                    (*(int * PTR32 *)((int)this + 0x28),((undefined1 *)(gen_frame + 0xc)),param_2,param_3,param_4);
  F_00429fa0();
  F_00c47745((*(uint *)(gen_frame + 0x268)) ^ (uint)(uint)(gen_frame + 0x26c));
  return uVar1;
}

/* ref: FUN_00411930 */
uint F_00411930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x411930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x28) + 0x38))))(*(int * PTR32 *)((int)this + 0x28));
  if ((char)uVar1 != '\0') {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x28) + 0x18))))(*(int * PTR32 *)((int)this + 0x28),param_1);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00411960 */
uint F_00411960(unsigned int gen_a0)
{
  GEN_ENTER(0x411960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x28) + 0x3c))))(*(int * PTR32 *)((int)this + 0x28));
  if ((char)uVar1 != '\0') {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x28) + 0x1c))))(*(int * PTR32 *)((int)this + 0x28));
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00411980 */
uint F_00411980(unsigned int gen_a0)
{
  GEN_ENTER(0x411980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x28) + 0x3c))))(*(int * PTR32 *)((int)this + 0x28));
  if ((char)uVar1 != '\0') {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x28) + 0x20))))(*(int * PTR32 *)((int)this + 0x28));
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_004119a0 */
uint F_004119a0(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0x4119a0u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  int param_1 = (int)gen_a0;
  double param_2 = (double)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x28) + 0x3c))))(*(int * PTR32 *)(param_1 + 0x28));
  if ((char)uVar1 != '\0') {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x28) + 0x24))))(*(int * PTR32 *)(param_1 + 0x28));
  }
  return uVar1;
}

/* ref: FUN_004119d0 */
uint F_004119d0(unsigned int gen_a0)
{
  GEN_ENTER(0x4119d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[26])REFP(0x1087e5c));
  F_004d6630((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[26])REFP(0x1088094));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x108807c));
  return (uint)this;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf2 */
unsigned int F_00411a00(unsigned int gen_a0)
{
  GEN_ENTER(0x411a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  int iVar3;
  
  if (*(int *)(this + 0x14) != 0) {
    piVar2 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x14) + 0x3c))) + 0x264)));
    iVar3 = 3;
    do {
      piVar1 = (int *)*piVar2;
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *piVar2 = 0;
      }
      piVar2 = piVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf3 */
unsigned int F_00411a40(unsigned int gen_a0)
{
  GEN_ENTER(0x411a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x14) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)(this + 0x10);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x10) = 0;
  }
  return 0;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf7 */
uint F_00411a80(unsigned int gen_a0)
{
  GEN_ENTER(0x411a80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x14);
  *((undefined4 *)GEN_TOP((*(int *)(uVar1 + 0x3c) + 0x20))) = 2;
  return uVar1;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf8 */
uint F_00411a90(unsigned int gen_a0)
{
  GEN_ENTER(0x411a90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x14);
  *((undefined4 *)GEN_TOP((*(int *)(uVar1 + 0x3c) + 0x20))) = 3;
  return uVar1;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf9 */
uint F_00411aa0(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0x411aa0u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  int param_1 = (int)gen_a0;
  double param_2 = (double)gen_a1;
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x14) + 0x3c)));
  *(longlong *)(iVar1 + 0x28) = (longlong)((double)*(longlong *)(iVar1 + 0x30) * param_2);
  *(undefined2 *)(iVar1 + 10) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  if ((*(int *)(iVar1 + 0x3c) <= *(int *)(iVar1 + 0x2c)) &&
     ((*(int *)(iVar1 + 0x3c) < *(int *)(iVar1 + 0x2c) ||
      (*(uint *)(iVar1 + 0x38) <= *(uint *)(iVar1 + 0x28))))) {
    *(undefined4 *)(iVar1 + 0x10) = 1;
    return 0;
  }
  *(undefined4 *)(iVar1 + 0x10) = 2;
  return 0;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf12 */
uint F_00411af0(unsigned int gen_a0)
{
  GEN_ENTER(0x411af0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf13 */
uint F_00411b10(unsigned int gen_a0)
{
  GEN_ENTER(0x411b10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf14 */
byte F_00411b30(unsigned int gen_a0)
{
  GEN_ENTER(0x411b30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_ecx + 0x14) + 0x3c))) + 8))) != '\0';
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf15 */
byte F_00411b40(unsigned int gen_a0)
{
  GEN_ENTER(0x411b40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x14) + 0x3c)));
  if (((*(int *)(iVar1 + 0x1c) == 1) && (*(char *)(iVar1 + 9) != '\0')) &&
     ((*(int *)(iVar1 + 0x28) != *(int *)(iVar1 + 0x38) ||
      (*(int *)(iVar1 + 0x2c) != *(int *)(iVar1 + 0x3c))))) {
    return 1;
  }
  return 0;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf16 */
byte F_00411b70(unsigned int gen_a0)
{
  GEN_ENTER(0x411b70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_ecx + 0x14) + 0x3c))) + 0x1c))) == 3;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf17 */
byte F_00411b80(unsigned int gen_a0)
{
  GEN_ENTER(0x411b80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((char *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_ecx + 0x14) + 0x3c))) + 10))) != '\0';
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf18 */
byte F_00411b90(unsigned int gen_a0)
{
  GEN_ENTER(0x411b90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_ecx + 0x14) + 0x3c))) + 0x14))) != 0;
}

/* ref: FUN_00411ba0 */
unsigned int F_00411ba0(void)
{
  GEN_ENTER(0x411ba0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00411bb0 */
byte F_00411bb0(void)
{
  GEN_ENTER(0x411bb0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf21 */
unsigned int F_00411bc0(void)
{
  GEN_ENTER(0x411bc0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf23 */
byte F_00411bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x411bd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x14) + 0x3c)));
  if ((iVar1 != 0) && (iVar1 != -0x250)) {
    *param_1 = *(int *)(iVar1 + 0x254);
    iVar1 = *(int *)(iVar1 + 600);
    *param_2 = iVar1;
    if ((*param_1 != 0) && (iVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00411c10 */
uint F_00411c10(unsigned int gen_a0)
{
  GEN_ENTER(0x411c10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x3c);
}

/* ref: FUN_00411c40 */
uint F_00411c40(unsigned int gen_a0)
{
  GEN_ENTER(0x411c40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x3c);
}

/* ref: FUN_00411c70 */
uint F_00411c70(unsigned int gen_a0)
{
  GEN_ENTER(0x411c70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xa8))(piVar1,0,param_1,1);
  return uVar2;
}

/* ref: FUN_00411ca0 */
uint F_00411ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x411ca0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xa4))(piVar1,0,param_1,1);
  return uVar2;
}

/* ref: FUN_00411cd0 */
byte F_00411cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x411cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x3c);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20) + 0x28))))(*(int * PTR32 *)((int)this + 0x20),&(*(undefined4 *)(gen_frame + 0x0)))
  ;
  if (-1 < (int)uVar2) {
    *(undefined4 *)(iVar1 + 0x30) = (*(undefined4 *)(gen_frame + 0x0));
    *(undefined4 *)(iVar1 + 0x34) = (*(undefined4 *)(gen_frame + 0x4));
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x18))))
                      (*(undefined4 * PTR32 *)((int)this + 0x18),&REFG(undefined, 0x1084d48),&(*(int * PTR32 *)(gen_frame + 0x8)));
    if (-1 < (int)uVar2) {
      *(undefined4 *)(iVar1 + 0x254) = 0x780;
      *(undefined4 *)(iVar1 + 600) = 0x438;
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
      *(undefined4 *)(iVar1 + 8) = 1;
      *(undefined4 *)(iVar1 + 0x18) = 0;
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *(undefined1 *)(iVar1 + 0x27c) = 0;
      *(undefined1 *)(iVar1 + 0x27d) = 0;
      *(undefined4 *)(iVar1 + 0x18) = 0;
      *(undefined1 *)(iVar1 + 0x27e) = 0;
      gen_imp_ResetEvent(*(undefined4 *)(iVar1 + 0x274));
      gen_imp_ResetEvent(*(undefined4 *)(iVar1 + 0x278));
      *(undefined4 *)(iVar1 + 0x260) = 0;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00411dc0 */
unsigned int F_00411dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x411dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this;
  if (*(int *)((int)this + 0x28) != 0) {
    iVar1 = *(int *)((int)this + 0x3c);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x28) + 0x20))))
                      (*(int * PTR32 *)((int)this + 0x28),&(*(undefined4 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x10)),0);
    while (-1 < (int)uVar2) {
      switch((unsigned int)(uintptr_t)((*(undefined4 *)(gen_frame + 0x18)))) {
      case 1: ;
        *(undefined1 *)(iVar1 + 10) = 1;
        uVar3 = *(undefined4 *)(iVar1 + 0x274);
        break;
      case 2: ;
        *(undefined1 *)(iVar1 + 10) = 1;
        uVar3 = *(undefined4 *)(iVar1 + 0x274);
        break;
      case 3: ;
        *(undefined1 *)(iVar1 + 10) = 1;
        uVar3 = *(undefined4 *)(iVar1 + 0x274);
        break;
      default: ;
        goto switchD_00411e12_caseD_4;
      case 0xe: ;
        *(undefined1 *)(iVar1 + 0xb) = 1;
        goto switchD_00411e12_caseD_4;
      }
      *(undefined1 *)(iVar1 + 0x27e) = 1;
      gen_imp_SetEvent(uVar3);
      *(undefined4 *)(iVar1 + 0x18) = 0;
switchD_00411e12_caseD_4: ;
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x28) + 0x30))))
                (*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x28),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)));
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x28) + 0x20))))
                        (*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x28),&(*(undefined4 *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x10)),0);
    }
  }
  return 0;
}

/* ref: FUN_00411ec0 */
uint F_00411ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x411ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HANDLE pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1087f00));
  pvVar1 = gen_imp_CreateEventA(0,0,0,0);
  *(HANDLE *)((int)this + 0x274) = pvVar1;
  pvVar1 = gen_imp_CreateEventA(0,0,0,0);
  *(HANDLE *)((int)this + 0x278) = pvVar1;
  *(undefined1 *)((int)this + 0x27c) = 0;
  *(undefined1 *)((int)this + 0x27d) = 0;
  *(undefined1 *)((int)this + 0x27e) = 0;
  F_00410fe0(this);
  return (uint)this;
}

/* ref: FUN_00411f20 */
uint F_00411f20(unsigned int gen_a0)
{
  GEN_ENTER(0x411f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  F_004a0050(this,"movie player");
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1087ec8));
  puVar1 = (undefined4 *)F_00406b90(0x18,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = (*(undefined * PTR32 (*)[26])REFP(0x1087e5c));
    F_004d6630(puVar1 + 1);
    puVar1[4] = 0;
    puVar1[5] = 0;
    *puVar1 = (*(undefined * PTR32 (*)[26])REFP(0x1088094));
    puVar1[1] = (*(undefined * PTR32 (*)[5])REFP(0x108807c));
    *(undefined4 * PTR32 *)((int)this + 0x28) = puVar1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  return (uint)this;
}

/* ref: FUN_00411f80 */
uint F_00411f80(void)
{
  GEN_ENTER(0x411f80u, 0u, 0u, 0u, 0u);
  undefined * this;
  
  if (REFG(undefined4, 0x1370c0c) == 0) {
    this = (undefined *)F_00406b90(0x30,0,0);
    if (this == (undefined *)0x0) {
      REFG(undefined4, 0x1370c0c) = 0;
    }
    else {
      REFG(undefined4, 0x1370c0c) = F_00411f20(this);
    }
    F_004a0100((undefined *)(REFG(int, 0x137104c) + 0x11b0),2,REFG(undefined4, 0x1370c0c));
  }
  return REFG(undefined4, 0x1370c0c);
}

/* ref: FUN_00411fd0 */
unsigned int F_00411fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x411fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[26])REFP(0x1088094));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x108807c));
  if (*(int *)((int)this + 0x14) != 0) {
    piVar4 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x14) + 0x3c))) + 0x264)));
    iVar3 = 3;
    do {
      piVar1 = (int *)*piVar4;
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *piVar4 = 0;
      }
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x14);
  if (puVar2 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x10);
  if (puVar2 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  F_004d6680((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[26])REFP(0x1087e5c));
  return 0;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf1 */
unsigned int F_00412050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x412050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 * this_01;
  
  if (*(int *)(this + 0x10) == 0) {
    this_00 = (undefined *)F_00406b90(0x280,0,0);
    if (this_00 == (undefined *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_00411ec0(this_00);
    }
    *(uint *)(this + 0x10) = uVar2;
  }
  if (*(int *)(this + 0x14) == 0) {
    this_01 = (undefined4 *)F_00406b90(0x48,0,0);
    if (this_01 != (undefined4 *)0x0) {
      uVar1 = *(undefined4 *)(this + 0x10);
      F_004cefe0(this_01);
      this_01[0xf] = uVar1;
      this_01[6] = 0;
      this_01[7] = 0;
      this_01[8] = 0;
      this_01[9] = 0;
      this_01[10] = 0;
      this_01[0xb] = 0;
      this_01[0xc] = 0;
      this_01[0xd] = 0;
      this_01[0xe] = 0;
      *this_01 = (*(undefined * PTR32 (*)[6])REFP(0x1087ed8));
      *(undefined1 *)(this_01 + 0x10) = 1;
      this_01[0x11] = 0;
      *(undefined4 * PTR32 *)(this + 0x14) = this_01;
      return 0;
    }
    *(undefined4 *)(this + 0x14) = 0;
  }
  return 0;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf10 */
uint F_00412100(unsigned int gen_a0)
{
  GEN_ENTER(0x412100u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf11 */
uint F_00412130(unsigned int gen_a0)
{
  GEN_ENTER(0x412130u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf22 */
unsigned int F_00412160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x412160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00411dc0(*(undefined * PTR32 *)(this + 0x14),param_1,param_2);
  return 0;
}

/* ref: FUN_00412190 */
byte F_00412190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x412190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  int local_20;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  iVar1 = *(int *)((int)this + 0x3c);
  if ((iVar1 != 0) && (iVar1 != -0x250)) {
    iVar2 = *(int *)(iVar1 + 0x254);
    iVar1 = *(int *)(iVar1 + 600);
    if ((iVar2 != 0) && (iVar1 != 0)) {
      fVar3 = (float10)*(int *)(REFG(int, 0x1370b90) + 0x90);
      if (*(int *)(REFG(int, 0x1370b90) + 0x90) < 0) {
        fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      local_c = (float)fVar3;
      fVar3 = (float10)*(int *)(REFG(int, 0x1370b90) + 0x94);
      if (*(int *)(REFG(int, 0x1370b90) + 0x94) < 0) {
        fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      local_10 = (float)fVar3;
      fVar3 = (float10)iVar2;
      if (iVar2 < 0) {
        fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar4 = (float10)iVar1;
      if (iVar1 < 0) {
        fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      local_8 = 0.0;
      local_14 = 0.0;
      fVar5 = (float10)local_c;
      fVar6 = (float10)local_10;
      fVar3 = (float10)(float)(fVar3 / fVar4);
      if (fVar3 < fVar5 / fVar6) {
        local_c = (float)(fVar3 * fVar6);
        local_8 = ((float)GEN_TOF(((fVar5 - (float10)local_c) * (float10)REFG(double, 0x1088108))));
      }
      else {
        local_10 = (float)(fVar5 / fVar3);
        local_14 = ((float)GEN_TOF(((fVar6 - (float10)local_10) * (float10)REFG(double, 0x1088108))));
      }
      local_20 = (int)(longlong)TRUNC((float10)local_8);
      *param_1 = local_20;
      local_20 = (int)(longlong)TRUNC((float10)local_14);
      *param_2 = local_20;
      local_20 = (int)(longlong)TRUNC((float10)local_c + (float10)local_8);
      *param_3 = local_20 + -1;
      local_20 = (int)(longlong)TRUNC((float10)local_14 + (float10)local_10);
      *param_4 = local_20 + -1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00412320 */
byte F_00412320(unsigned int gen_a0)
{
  GEN_ENTER(0x412320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  LPVOID * ppv;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  int * piVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  iVar2 = *(int *)((int)this + 0x3c);
  ppv = (LPVOID *)((int)this + 0x18);
  *(undefined4 *)(iVar2 + 0x14) = 0;
  uVar3 = gen_imp_CoCreateInstance((undefined *)&REFG(undefined, 0x1085698),(GEN_LPANY)0x0,1,(undefined *)&REFG(undefined, 0x1095b94),ppv);
  (*(uint *)(gen_frame + 0x4)) = uVar3;
  if ((int)uVar3 < 0) {
    F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
    return 0;
  }
  puVar1 = (undefined4 *)((int)this + 0x20);
  uVar3 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)*ppv)))(*ppv,&REFG(undefined, 0x1095ac4),puVar1);
  (*(uint *)(gen_frame + 0x4)) = uVar3;
  if (-1 < (int)uVar3) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1370b90) + 0x3c) + 0x3c))))
              (*(int * PTR32 *)(REFG(int, 0x1370b90) + 0x3c),*(undefined4 *)(REFG(int, 0x1370b90) + 0x58));
    this_00 = (undefined *)F_00406b90(0x1f8,0,0);
    if (this_00 == (undefined *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)F_00411180(this_00,0,&(*(uint *)(gen_frame + 0x4)),*puVar1);
    }
    *(int * PTR32 *)((int)this + 0x38) = piVar4;
    if ((int)(*(uint *)(gen_frame + 0x4)) < 0) {
      if (piVar4 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4,1);
      }
    }
    else {
      ((code *)*(gen_code32 *)(piVar4[3] + 4))(piVar4[3],piVar4 + 3);
      if (*(int *)((int)this + 0x38) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)((int)this + 0x38) + 0xc;
      }
      uVar3 = ((code *)*(gen_code32 *)(*(int *)*ppv + 0xc))(*ppv,iVar5,(*(undefined * PTR32 (*)[7])REFP(0x1084b94)));
      (*(uint *)(gen_frame + 0x4)) = uVar3;
      if (-1 < (int)uVar3) {
        piVar4 = (int *)((int)this + 0x24);
        uVar3 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)*ppv)))(*ppv,&REFG(undefined, 0x1084ce8),piVar4);
        (*(uint *)(gen_frame + 0x4)) = uVar3;
        if (-1 < (int)uVar3) {
          uVar3 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)*ppv)))(*ppv,&REFG(undefined, 0x1084d08),(int)this + 0x28);
          (*(uint *)(gen_frame + 0x4)) = uVar3;
          if (-1 < (int)uVar3) {
            uVar3 = F_00410cd0((int)this + 0x38,*ppv);
            (*(uint *)(gen_frame + 0x4)) = uVar3;
            if (-1 < (int)uVar3) {
              uVar3 = (*((code *)GEN_TOP(**(undefined4 * PTR32 *)*ppv)))(*ppv,&REFG(undefined, 0x1084d28),(int)this + 0x30);
              (*(uint *)(gen_frame + 0x4)) = uVar3;
              uVar3 = ((code *)*(gen_code32 *)(*(int *)*ppv + 0x34))(*ppv,iVar2 + 0x44,0);
              (*(uint *)(gen_frame + 0x4)) = uVar3;
              if (-1 < (int)uVar3) {
                uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x28) + 0x34))))
                                  (*(int * PTR32 *)((int)this + 0x28),
                                   *((undefined4 *)GEN_TOP((*(int *)(REFG(int, 0x137104c) + 0x434) + 8))),0x8001,0);
                (*(uint *)(gen_frame + 0x4)) = uVar3;
                if (-1 < (int)uVar3) {
                  if (*piVar4 != 0) {
                    while (uVar3 = ((code *)*(gen_code32 *)(*(int *)*piVar4 + 0x28))((int *)*piVar4,0,&(*(int *)(gen_frame + 0x0)))
                          , uVar3 != 0) {
                      F_004cee10();
                    }
                    do {
                      ((code *)*(gen_code32 *)(*(int *)*piVar4 + 0x20))((int *)*piVar4);
                      *(undefined4 *)((int)this + 0x44) = REFG(float, 0x1087ef8);
                      ((code *)*(gen_code32 *)(*(int *)*piVar4 + 0x28))((int *)*piVar4,0,&(*(int *)(gen_frame + 0x0)));
                    } while ((*(int *)(gen_frame + 0x0)) != 1);
                    iVar2 = *(int *)((int)this + 0x3c);
                    *(undefined4 *)(iVar2 + 0x20) = 3;
                    *(undefined4 *)(iVar2 + 0x1c) = 3;
                  }
                  (*(undefined4 *)(gen_frame + 0xc)) = (*(undefined4 *)((char *)&REFG(undefined8, 0x1086498) + 4));
                  (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)REFG(undefined8, 0x10864a0);
                  (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)REFG(undefined8, 0x1086498);
                  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)((char *)&REFG(undefined8, 0x10864a0) + 4));
                  uVar3 = ((code *)*(gen_code32 *)(*(int *)*puVar1 + 0x24))((int *)*puVar1,&(*(undefined4 *)(gen_frame + 0x8)));
                  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
                  return -1 < (int)uVar3;
                }
              }
            }
          }
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf36 */
uint F_00412590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x412590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  uint uVar5;
  undefined * pTVar6;
  
  if (param_1 == 0) {
    return 0x80004003;
  }
  iVar1 = *(int *)(param_1 + 0x44);
  iVar2 = *(int *)(iVar1 + 0x34);
  *(int *)(this + 0x164) = iVar2;
  iVar3 = *(int *)(iVar1 + 0x38);
  *(int *)(this + 0x168) = iVar3;
  uVar5 = ((uint)*(ushort *)(iVar1 + 0x3e) * iVar2 >> 3) + 3 & 0xfffffffc;
  *(uint *)(this + 0x16c) = uVar5;
  uVar5 = F_00406bb0(iVar3 * uVar5,0,0);
  *(uint *)(this + 0x1ec) = uVar5;
  piVar4 = *(int * PTR32 *)(REFG(int, 0x1370b90) + 0x40);
  pTVar6 = this + 0x178;
  param_1 = 5;
  do {
    uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x5c))
                      (piVar4,*(undefined4 *)(this + 0x164),*(undefined4 *)(this + 0x168),1,0,
                       *(undefined4 *)(this + 0x170),1,pTVar6,0);
    if (-1 < (int)uVar5) {
      uVar5 = F_004dac40(*(undefined4 *)pTVar6,
                           (-(uint)(*(int *)(this + 0x170) != 0x16) & 0xfffffff0) + 0x1451,0x800004,
                           0);
      *(uint *)(pTVar6 + -4) = uVar5;
    }
    pTVar6 = pTVar6 + 0xc;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  return 0;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf6 */
uint F_00412670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x412670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x14);
  *((undefined4 *)GEN_TOP((*(int *)(uVar1 + 0x3c) + 0x20))) = 1;
  *(undefined1 *)(REFG(int, 0x1370c1c) + 6) = 0;
  return uVar1;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf24 */
byte F_00412690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x412690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  
  bVar1 = F_00412190(*(undefined * PTR32 *)(this + 0x14),param_1,param_2,param_3,param_4);
  return bVar1;
}

/* ref: FUN_004126a0 */
unsigned int F_004126a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4126a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  float fVar5;
  int * piVar6;
  uint uVar7;
  code * pcVar8;
  bool bVar9;
  
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c)));
  if (*(char *)(iVar1 + 8) == '\0') {
    return 0;
  }
  fVar5 = *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44)));
  (*(float *)(gen_frame + 0x28)) = fVar5;
  if (GEN_ISNAN(fVar5) == (GEN_ISNAN(fVar5) || fVar5 == 0.0)) {
    (*(float *)&gen_args[1]) = (float)((float10)fVar5 - (float10)(*(float *)&gen_args[1]));
    *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = (*(float *)&gen_args[1]);
    if ((float10)(*(float *)&gen_args[1]) <= (float10)0) {
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = 0;
    }
  }
  if (*(int *)(iVar1 + 0x14) != 0) {
    if (*(int *)(iVar1 + 0x14) == 1) {
      return 0;
    }
    bVar4 = F_00412320((*(undefined * PTR32 *)&gen_args[0]));
    if (bVar4 == 0) {
      F_00410ed0((*(undefined * PTR32 *)&gen_args[0]));
      return 0;
    }
    F_00411cd0((*(undefined * PTR32 *)&gen_args[0]));
    *(undefined4 *)(iVar1 + 0x20) = 1;
    *(undefined4 *)(iVar1 + 0x1c) = 2;
    *(undefined1 *)(iVar1 + 0xc) = 1;
    if (*(int *)(iVar1 + 0x38) != 0 || *(int *)(iVar1 + 0x3c) != 0) {
      *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x38);
      *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x3c);
      *(undefined4 *)(iVar1 + 0x10) = 1;
    }
  }
  ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) + 0x3c))))
            (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))),((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x14)));
  if (*(char *)(iVar1 + 10) != '\0') {
    *(undefined4 *)(iVar1 + 0x20) = 3;
  }
  bVar9 = GEN_ISNAN(*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44)))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  if (bVar9 == (bVar9 || *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) == *(float *)&REFG(undefined, 0x1088114))) {
    return 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24)));
  if (piVar6 == (int *)0x0) {
    return 0;
  }
  fVar5 = gen_bits2f(((code *)*(gen_code32 *)(*piVar6 + 0x28))(piVar6,0,&(*(float *)&gen_args[1])));
  if (fVar5 != 0.0) {
    return 0;
  }
  piVar6 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
  if (piVar6 != (int *)0x0) {
    (*(float *)(gen_frame + 0x24)) = fVar5;
    (*(float *)(gen_frame + 0x28)) = fVar5;
    (*(float *)(gen_frame + 0x1c)) = fVar5;
    (*(float *)(gen_frame + 0x20)) = fVar5;
    switch((unsigned int)(uintptr_t)(*(undefined4 *)(iVar1 + 0x10))) {
    case 0: ;
      uVar7 = ((code *)*(gen_code32 *)(*piVar6 + 0x3c))(piVar6,&(*(float *)(gen_frame + 0x24)),&(*(float *)(gen_frame + 0x1c)));
      if (uVar7 == 0) {
        *(float *)(iVar1 + 0x38) = (*(float *)(gen_frame + 0x24));
        *(float *)(iVar1 + 0x3c) = (*(float *)(gen_frame + 0x28));
      }
      break;
    case 2: ;
      F_00410ed0((*(undefined * PTR32 *)&gen_args[0]));
      bVar4 = F_00412320((*(undefined * PTR32 *)&gen_args[0]));
      if (bVar4 == 0) {
        return 0;
      }
      F_00411cd0((*(undefined * PTR32 *)&gen_args[0]));
      *(undefined4 *)(iVar1 + 0x10) = 1;
    case 1: ;
      if (*(char *)(iVar1 + 0xc) != '\0') {
        F_00411c70(0);
      }
      uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) + 0x38))))
                        (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))),iVar1 + 0x28,1,0,0);
      uVar3 = REFG(float, 0x1087ef8);
      if (uVar7 == 0) {
        *(undefined4 *)(iVar1 + 0x10) = 3;
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = uVar3;
      }
      break;
    case 3: ;
      bVar9 = GEN_ISNAN(*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44)))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
      if (bVar9 != (bVar9 || *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) == *(float *)&REFG(undefined, 0x1088114))) {
        ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))));
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = REFG(float, 0x1087ef8);
        *(undefined4 *)(iVar1 + 0x10) = 4;
        goto switchD_004127bd_caseD_4;
      }
      break;
    case 4: ;
switchD_004127bd_caseD_4: ;
      uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) + 0x3c))))
                        (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))),&(*(float *)(gen_frame + 0x24)),&(*(float *)(gen_frame + 0x1c)));
      if (((uVar7 == 0) && (*(int *)(iVar1 + 0x2c) <= (int)gen_fl2bits((*(float *)(gen_frame + 0x28))))) &&
         ((*(int *)(iVar1 + 0x2c) < (int)gen_fl2bits((*(float *)(gen_frame + 0x28))) ||
          ((uint)gen_fl2bits(*(float *)(iVar1 + 0x28)) <= (uint)gen_fl2bits((*(float *)(gen_frame + 0x24))))))) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
      }
    }
  }
  bVar9 = GEN_ISNAN(*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44)))) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
  if (bVar9 == (bVar9 || *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) == *(float *)&REFG(undefined, 0x1088114))) {
    return 0;
  }
  if (*(int *)(iVar1 + 0x20) == *(int *)(iVar1 + 0x1c)) {
    return 0;
  }
  if (*(int *)(iVar1 + 0x10) != 0) {
    return 0;
  }
  iVar2 = *(int *)(iVar1 + 0x20);
  if (iVar2 == 1) {
    piVar6 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24)));
    pcVar8 = *(gen_code32 *)(*piVar6 + 0x1c);
LAB_00412907: ;
    (*pcVar8)(piVar6);
  }
  else {
    if (iVar2 == 2) {
      piVar6 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24)));
      pcVar8 = *(gen_code32 *)(*piVar6 + 0x24);
      goto LAB_00412907;
    }
    if (iVar2 != 3) goto LAB_00412917;
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))));
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = REFG(float, 0x1087ef8);
LAB_00412917: ;
  uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 0x28))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))),0,&(*(float *)&gen_args[1]));
  if (uVar7 == 0) {
    if ((*(float *)&gen_args[1]) == 0.0) {
      *(undefined4 *)(iVar1 + 0x1c) = 2;
    }
    else {
      if ((*(float *)&gen_args[1]) == 1.4013e-45) {
        *(undefined4 *)(iVar1 + 0x1c) = 3;
        return 0;
      }
      if ((*(float *)&gen_args[1]) == 2.8026e-45) {
        *(undefined4 *)(iVar1 + 0x1c) = 1;
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00412980 */
unsigned int F_00412980(unsigned int gen_a0)
{
  GEN_ENTER(0x412980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  float fVar1;
  int iVar2;
  int iVar3;
  LPCRITICAL_SECTION p_Var4;
  int * piVar5;
  bool bVar6;
  float10 fVar7;
  float10 fVar8;
  float * pfVar9;
  LPCRITICAL_SECTION p_Stack_e4;
  
  iVar2 = *(int *)((int)this + 0x3c);
  (*(int *)(gen_frame + 0xdc)) = iVar2;
  if (*(char *)(iVar2 + 8) != '\0') {
    fVar7 = (float10)*(int *)(REFG(int, 0x1370b90) + 0x90);
    if (*(int *)(REFG(int, 0x1370b90) + 0x90) < 0) {
      fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(float *)(gen_frame + 0xd4)) = (float)fVar7;
    fVar8 = (float10)*(int *)(REFG(int, 0x1370b90) + 0x94);
    if (*(int *)(REFG(int, 0x1370b90) + 0x94) < 0) {
      fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(float *)(gen_frame + 0xc8)) = (float)fVar8;
    (*(float *)(gen_frame + 0x90)) = (float)fVar7;
    p_Stack_e4 = (LPCRITICAL_SECTION)&(*(undefined4 *)(gen_frame + 0x78));
    (*(float *)(gen_frame + 0x94)) = (float)fVar8;
    (*(undefined4 *)(gen_frame + 0x78)) = 0;
    (*(undefined4 *)(gen_frame + 0x7c)) = 0;
    (*(undefined4 *)(gen_frame + 0x80)) = 0;
    (*(float *)(gen_frame + 0x84)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x88)) = 0;
    (*(undefined4 *)(gen_frame + 0x8c)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x412a28;
    F_00413ab0(&(*(float *)(gen_frame + 0xec)),&(*(undefined4 *)(gen_frame + 0x78)));
    p_Stack_e4 = (LPCRITICAL_SECTION)&REFG(undefined4, 0x1301dd0);
    (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x2;
    (*(float * PTR32 *)(gen_frame + 0x14)) = &(*(float *)(gen_frame + 0xec));
    (*(float * PTR32 *)(gen_frame + 0x10)) = &(*(float *)(gen_frame + 0xec));
    (*(float * PTR32 *)(gen_frame + 0xc)) = &(*(float *)(gen_frame + 0xec));
    F_004134a0(*((undefined4 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a4))),
                 &(*(undefined4 *)(gen_frame + 0x88)),5,&(*(float *)(gen_frame + 0xec)),&(*(float *)(gen_frame + 0xec)),&(*(float *)(gen_frame + 0xec)),&(*(float *)(gen_frame + 0xec)),2,&REFG(undefined4, 0x1301dd0));
    if (*(int *)(iVar2 + 0x14) == 0) {
      (*(int *)(gen_frame + 0xbc)) = REFG(int, 0x1301dd4);
      (*(undefined4 *)(gen_frame + 0xc4)) = REFG(undefined4, 0x1301ddc);
      p_Var4 = (LPCRITICAL_SECTION)(*(int *)((int)this + 0x38) + 0x1b0);
      p_Stack_e4 = p_Var4;
      (*(uint *)(gen_frame + 0xc0)) = (-(uint)(*(char *)((int)this + 0x40) != '\0') & 9) << 6 | REFG(undefined4, 0x1301dd8) & 0xfffffc3a
                 | 10;
      (*(float *)(gen_frame + 0xb8)) = gen_bits2f(REFG(undefined4, 0x1301dd0) & 0xfffffffe);
      (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x412ab6;
      gen_imp_EnterCriticalSection(p_Var4);
      iVar2 = *(int *)((int)this + 0x38);
      iVar3 = *(int *)(iVar2 + 0x1dc);
      if (iVar3 != 0) {
        piVar5 = (int *)(iVar3 + 8);
        *piVar5 = *piVar5 + -1;
        if (*piVar5 == 0) {
          *(undefined4 *)(iVar2 + 0x1dc) = *(undefined4 *)(iVar2 + 0x1e0);
          *(undefined4 *)(iVar2 + 0x1e0) = *(undefined4 *)(iVar2 + 0x1e4);
          *(undefined4 *)(iVar2 + 0x1e4) = 0;
        }
      }
      p_Stack_e4 = (LPCRITICAL_SECTION)iVar3;
      (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x412af3;
      F_004114e0(*(undefined * PTR32 *)((int)this + 0x38),iVar3);
      piVar5 = *((int * PTR32 *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 0x38) + 0x1e8)));
      p_Stack_e4 = (LPCRITICAL_SECTION)piVar5;
      (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x412b02;
      F_00411450(*(undefined * PTR32 *)((int)this + 0x38),piVar5);
      p_Var4 = (LPCRITICAL_SECTION)(*(int *)((int)this + 0x38) + 0x1b0);
      p_Stack_e4 = p_Var4;
      (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x412b11;
      gen_imp_LeaveCriticalSection(p_Var4);
      iVar2 = (*(int *)(gen_frame + 0xdc));
      if ((piVar5 == (int *)0x0) || (*piVar5 == 0)) {
        if (*(char *)((*(int *)(gen_frame + 0xdc)) + 0xc) != '\0') {
          p_Stack_e4 = (LPCRITICAL_SECTION)0x412d0c;
          piVar5 = (int *)F_00424750(REFG(int, 0x137104c));
          p_Stack_e4 = (LPCRITICAL_SECTION)0x1;
          (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x0;
          (*(float * PTR32 *)(gen_frame + 0x14)) = (float *)0x0;
          (*(float * PTR32 *)(gen_frame + 0x10)) = (float *)0x412d1e;
          ((code *)*(gen_code32 *)(*piVar5 + 0xa8))(piVar5,0,0,1);
        }
      }
      else {
        (*(int *)(gen_frame + 0xbc)) = *piVar5;
        bVar6 = GEN_ISNAN(*(float *)((*(int *)(gen_frame + 0xdc)) + 0x25c)) || GEN_ISNAN(REFG(float, 0x1087f04));
        if (bVar6 == (bVar6 || *(float *)((*(int *)(gen_frame + 0xdc)) + 0x25c) == REFG(float, 0x1087f04))) {
          (*(float *)((char *)&(*(double *)(gen_frame + 0xe0)) + 4)) = *(float *)((*(int *)(gen_frame + 0xdc)) + 0x25c);
          fVar7 = (float10)*(float *)((*(int *)(gen_frame + 0xdc)) + 0x25c);
          p_Stack_e4 = (LPCRITICAL_SECTION)&(*(float *)(gen_frame + 0xb8));
          (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x2;
          (*(float * PTR32 *)(gen_frame + 0x14)) = &(*(float *)(gen_frame + 0x50));
          (*(float *)((char *)&(*(double *)(gen_frame + 0xe0)) + 4)) = gen_bits2f(REFG(undefined4, 0x1370c18));
          (*(double *)(gen_frame + 0xe0)) = gen_bits2d(CONCAT44(REFG(undefined4, 0x1370c18),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0xe0)) + 0))));
          (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1302c04);
          (*(float * PTR32 *)(gen_frame + 0x10)) = &(*(float *)(gen_frame + 0x30));
          (*(undefined4 *)(gen_frame + 0x54)) = REFG(float, 0x1302c08);
          (*(float * PTR32 *)(gen_frame + 0xc)) = &(*(float *)(gen_frame + 0x50));
          (*(float *)(gen_frame + 0xa8)) = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0xd4)) * ((float10)1 - fVar7)) * (float10)REFG(double, 0x1088108))));
          (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1375a80);
          (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1375a84);
          (*(float *)(gen_frame + 0xac)) = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0xc8)) * ((float10)1 - fVar7)) * (float10)REFG(double, 0x1088108))));
          (*(float *)(gen_frame + 0xb0)) = (float)((float10)(*(float *)(gen_frame + 0xd4)) * fVar7);
          (*(float *)(gen_frame + 0xb4)) = (float)((float10)(*(float *)(gen_frame + 0xc8)) * fVar7);
          F_00413ab0((gen_frame + 0xc),&REFG(undefined4, 0x1302e54));
          pfVar9 = &(*(float *)(gen_frame + 0xa8));
        }
        else {
          p_Stack_e4 = (LPCRITICAL_SECTION)((int)&(*(double *)(gen_frame + 0xe0)) + 4);
          (*(int * PTR32 *)(gen_frame + 0x18)) = &(*(int *)(gen_frame + 0xd0));
          (*(float * PTR32 *)(gen_frame + 0x14)) = (float *)&(*(int *)(gen_frame + 0xd8));
          (*(float * PTR32 *)(gen_frame + 0x10)) = (float *)&(*(int *)(gen_frame + 0xcc));
          (*(float * PTR32 *)(gen_frame + 0xc)) = (float *)0x412b59;
          F_00412190(this,&(*(int *)(gen_frame + 0xcc)),&(*(int *)(gen_frame + 0xd8)),&(*(int *)(gen_frame + 0xd0)),(int)&(*(double *)(gen_frame + 0xe0)) + 4);
          fVar7 = (float10)(*(int *)(gen_frame + 0xcc));
          (*(float *)(gen_frame + 0x60)) = REFG(float, 0x1302c04);
          (*(undefined4 *)(gen_frame + 0x64)) = REFG(float, 0x1302c08);
          (*(float *)(gen_frame + 0x40)) = REFG(float, 0x1375a80);
          (*(undefined4 *)(gen_frame + 0x44)) = REFG(float, 0x1375a84);
          if ((*(int *)(gen_frame + 0xcc)) < 0) {
            fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
          }
          (*(float *)(gen_frame + 0x98)) = (float)fVar7;
          fVar7 = (float10)(*(int *)(gen_frame + 0xd8));
          if ((*(int *)(gen_frame + 0xd8)) < 0) {
            fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
          }
          (*(float *)(gen_frame + 0x9c)) = (float)fVar7;
          fVar7 = (float10)(*(int *)(gen_frame + 0xd0));
          if ((*(int *)(gen_frame + 0xd0)) < 0) {
            fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
          }
          (*(float *)(gen_frame + 0xa0)) = (float)fVar7;
          fVar7 = (float10)(int)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0xe0)) + 4)));
          if ((longlong)gen_d2bits((*(double *)(gen_frame + 0xe0))) < 0) {
            fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
          }
          (*(float *)(gen_frame + 0xa4)) = (float)fVar7;
          p_Stack_e4 = (LPCRITICAL_SECTION)&(*(float *)(gen_frame + 0xb8));
          (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x2;
          (*(float * PTR32 *)(gen_frame + 0x14)) = &(*(float *)(gen_frame + 0x60));
          (*(float *)((char *)&(*(double *)(gen_frame + 0xe0)) + 4)) = gen_bits2f(REFG(undefined4, 0x1370c18));
          (*(double *)(gen_frame + 0xe0)) = gen_bits2d(CONCAT44(REFG(undefined4, 0x1370c18),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0xe0)) + 0))));
          (*(float * PTR32 *)(gen_frame + 0x10)) = &(*(float *)(gen_frame + 0x40));
          (*(float * PTR32 *)(gen_frame + 0xc)) = &(*(float *)(gen_frame + 0xb8));
          F_00413ab0((gen_frame + 0xc),&REFG(undefined4, 0x1302e54));
          pfVar9 = &(*(float *)(gen_frame + 0x98));
        }
        F_00413c70(pfVar9,(*(float * PTR32 *)(gen_frame + 0xc)),(*(float * PTR32 *)(gen_frame + 0x10)),(*(float * PTR32 *)(gen_frame + 0x14)),(*(int * PTR32 *)(gen_frame + 0x18)),p_Stack_e4);
        *(undefined1 *)(iVar2 + 9) = 1;
        if (*(char *)(iVar2 + 0xc) != '\0') {
          p_Stack_e4 = (LPCRITICAL_SECTION)0x412ce0;
          piVar5 = (int *)F_00424750(REFG(int, 0x137104c));
          p_Stack_e4 = (LPCRITICAL_SECTION)0x1;
          (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x1e;
          (*(float * PTR32 *)(gen_frame + 0x14)) = (float *)0x0;
          (*(float * PTR32 *)(gen_frame + 0x10)) = (float *)0x412cf2;
          ((code *)*(gen_code32 *)(*piVar5 + 0xa4))(piVar5,0,0x1e,1);
          *(undefined1 *)(iVar2 + 0xc) = 0;
        }
      }
    }
    if (*(int *)((int)this + 0x30) != 0) {
      iVar2 = *(int *)(REFG(int, 0x137104c) + 0x25f8);
      p_Stack_e4 = (LPCRITICAL_SECTION)0x412d37;
      fVar7 = F_004e7750(iVar2);
      (*(double *)(gen_frame + 0xe0)) = (double)fVar7;
      p_Stack_e4 = (LPCRITICAL_SECTION)0x412d41;
      fVar7 = F_004e77a0(iVar2);
      fVar1 = (float)(fVar7 * (float10)(*(double *)(gen_frame + 0xe0)));
      (*(float *)(gen_frame + 0xec)) = fVar1;
      if ((*(char *)(iVar2 + 0xdb) != '\0') ||
         ((!GEN_ISNAN(REFG(float, 0x1088128)) && !GEN_ISNAN(fVar1)) && (!(REFG(float, 0x1088128) < fVar1) && REFG(uint, 0x1088128) != fVar1))
         ) {
        (*(float *)(gen_frame + 0xec)) = REFG(float, 0x1088128);
      }
      piVar5 = *(int * PTR32 *)((int)this + 0x30);
      iVar2 = *piVar5;
      p_Stack_e4 = (LPCRITICAL_SECTION)0x412d70;
      fVar7 = F_00c49680((float10)(*(float *)(gen_frame + 0xec)));
      fVar1 = (float)fVar7;
      (*(float *)((char *)&(*(double *)(gen_frame + 0xe0)) + 4)) = fVar1;
      (*(double *)(gen_frame + 0xe0)) = gen_bits2d(CONCAT44((uint)gen_fl2bits(fVar1),(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0xe0)) + 0))));
      p_Stack_e4 = (LPCRITICAL_SECTION)0x412d87;
      iVar3 = (int)(((float10)fVar1 * (float10)*(double *)&REFG(undefined, 0x1088120)) *
                   (float10)*(double *)&REFG(undefined, 0x1088118));
      p_Stack_e4 = (LPCRITICAL_SECTION)iVar3;
      (*(int * PTR32 *)(gen_frame + 0x18)) = piVar5;
      (*(float * PTR32 *)(gen_frame + 0x14)) = (float *)0x412d8e;
      ((code *)*(gen_code32 *)(iVar2 + 0x1c))(piVar5,iVar3);
    }
  }
  return 0;
}

/* ref: FUN_00412da0 */
uint F_00412da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x412da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  int * piVar4;
  int iVar5;
  
  if (param_1 == 1) {
    bVar2 = F_00412320(this);
    if (bVar2 == 0) {
      iVar5 = *(int *)((int)this + 0x3c);
      *(undefined1 *)(iVar5 + 0x27e) = 1;
      gen_imp_SetEvent(*(HANDLE *)(iVar5 + 0x274));
      *(undefined4 *)(iVar5 + 0x18) = 0;
      *(undefined1 *)(iVar5 + 8) = 0;
      uVar3 = F_00410ed0(this);
      return uVar3;
    }
    bVar2 = F_00411cd0(this);
    uVar3 = CONCAT31(extraout_var,bVar2);
  }
  else {
    uVar3 = param_1 - 2;
    if (uVar3 == 0) {
      iVar5 = *(int *)((int)this + 0x3c);
      *(undefined1 *)(iVar5 + 0x27e) = 1;
      gen_imp_SetEvent(*(HANDLE *)(iVar5 + 0x274));
      *(undefined4 *)(iVar5 + 0x18) = 0;
      *(undefined1 *)(iVar5 + 8) = 0;
      uVar3 = F_00410ed0(this);
      piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x3c) + 0x264)));
      iVar5 = 3;
      do {
        piVar1 = (int *)*piVar4;
        if (piVar1 != (int *)0x0) {
          uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
          *piVar4 = 0;
        }
        piVar4 = piVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf19 */
unsigned int F_00412e60(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x412e60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  F_004126a0(*(undefined4 *)(param_1 + 0x14),param_2);
  return 0;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf20 */
unsigned int F_00412e80(unsigned int gen_a0)
{
  GEN_ENTER(0x412e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00412980(*(undefined * PTR32 *)(this + 0x14));
  return 0;
}

/* ref: FUN_00412e90 */
uint F_00412e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x412e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00412da0(this,param_1);
  return uVar1;
}

/* ref: FUN_00412ea0 */
uint F_00412ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x412ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 0x3c);
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x40) = param_3;
  *(int *)(iVar1 + 0x250) = param_4;
  uVar3 = REFG(float, 0x1088138);
  if ((param_4 != 1) && (uVar3 = REFG(float, 0x1088068), param_4 != 2)) {
    uVar3 = REFG(float, 0x1087f04);
  }
  *(undefined4 *)(iVar1 + 0x25c) = uVar3;
  *(undefined4 *)(iVar1 + 0x270) = param_2;
  F_00c4983b(iVar1 + 0x44,0x104,param_1,0x104);
  uVar2 = F_00412da0(this,1);
  return uVar2;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf4 */
uint F_00412f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x412f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00412ea0(*(undefined * PTR32 *)(this + 0x14),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf5 */
uint F_00412f60(unsigned int gen_a0)
{
  GEN_ENTER(0x412f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00412da0(*(undefined * PTR32 *)(this + 0x14),2);
  uVar1 = REFG(undefined4, 0x1370c1c);
  *(undefined1 *)(REFG(undefined4, 0x1370c1c) + 6) = 1;
  return uVar1;
}

/* ref: FUN_00412f80 */
float10 F_00412f80(float gen_a0)
{
  GEN_ENTER(0x412f80u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = F_00c49680((float10)param_1);
  return (float10)(float)fVar1;
}

/* ref: FUN_00412fa0 */
float10 F_00412fa0(float gen_a0)
{
  GEN_ENTER(0x412fa0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = F_00c49680((float10)param_1);
  return (float10)(float)fVar1;
}

/* ref: FUN_00413060 */
uint F_00413060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x413060u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1e8) = param_2;
  return param_2;
}

/* ref: FUN_00413080 */
byte F_00413080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x413080u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x40) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_004130b0 */
uint F_004130b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4130b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  HANDLE pvVar1;
  
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,(uint)((char)param_1 == '\0'),
                        (uint)((char)param_2 != '\0'),(LPCSTR)0x0);
  *(HANDLE *)this = pvVar1;
  return (uint)this;
}

/* ref: FUN_00413100 */
uint F_00413100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x413100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  DWORD param_1 = (DWORD)gen_a1;
  DWORD DVar1;
  
  DVar1 = gen_imp_WaitForSingleObject(*(HANDLE *)this,param_1);
  return (uint)(DVar1 == 0);
}

/* ref: FUN_00413140 */
uint F_00413140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x413140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION param_1 = (LPCRITICAL_SECTION)gen_a1;
  *(LPCRITICAL_SECTION *)this = param_1;
  gen_imp_EnterCriticalSection(param_1);
  return (uint)this;
}

/* ref: FUN_00413190 */
uint F_00413190(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x413190u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  return (uint)in_ecx;
}

/* ref: FUN_004131c0 */
uint F_004131c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4131c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  return (uint)in_ecx;
}

/* ref: FUN_004131de */
unsigned int F_004131de(void)
{
  GEN_ENTER(0x4131deu, 0u, 0u, 0u, 0u);
  code * pcVar1;
  
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  (*pcVar1)();
  return 0;
}

/* ref: FUN_004131e0 */
uint F_004131e0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x4131e0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  return (uint)in_ecx;
}

/* ref: FUN_00413200 */
uint F_00413200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x413200u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  return (uint)in_ecx;
}

/* ref: FUN_00413220 */
uint F_00413220(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x413220u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  return (uint)in_ecx;
}

/* ref: Client::System::Threading::Thread::vf1 */
unsigned int F_00413250(unsigned int gen_a0)
{
  GEN_ENTER(0x413250u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x14) = 1;
  return 0;
}

/* ref: Client::System::Threading::Thread::vf2 */
byte F_00413260(void)
{
  GEN_ENTER(0x413260u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Threading::Thread::vf3 */
uint F_00413270(void)
{
  GEN_ENTER(0x413270u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Threading::Thread::vf4 */
unsigned int F_00413280(void)
{
  GEN_ENTER(0x413280u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf8 */
uint F_004132a0(void)
{
  GEN_ENTER(0x4132a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Streaming::TextureRenderer::vf20 */
unsigned int F_004132b0(void)
{
  GEN_ENTER(0x4132b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_004132c0 */
uint F_004132c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4132c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + -8))))
                    (*(undefined4 * PTR32 *)(param_1 + -8),param_2,param_3);
  return uVar1;
}

/* ref: FUN_004132e0 */
uint F_004132e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4132e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + -8) + 4))))(*(int * PTR32 *)(param_1 + -8));
  return uVar1;
}

/* ref: FUN_00413300 */
uint F_00413300(unsigned int gen_a0)
{
  GEN_ENTER(0x413300u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + -8) + 8))))(*(int * PTR32 *)(param_1 + -8));
  return uVar1;
}

/* ref: FUN_00413320 */
uint F_00413320(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x413320u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  return (uint)in_ecx;
}

/* ref: FUN_00413350 */
uint F_00413350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x413350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_004132c0(param_1 + -0xd4,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00413360 */
uint F_00413360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x413360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_004132e0(param_1 + -4);
  return uVar1;
}

/* ref: FUN_00413370 */
uint F_00413370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x413370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_004132c0(param_1 + -0xd8,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00413380 */
uint F_00413380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x413380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_004132c0(param_1 + -4,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00413390 */
uint F_00413390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x413390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00413300(param_1 + -0xd4);
  return uVar1;
}

/* ref: FUN_004133a0 */
uint F_004133a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4133a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00413300(param_1 + -0xd8);
  return uVar1;
}

/* ref: FUN_004133b0 */
uint F_004133b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4133b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_004132e0(param_1 + -0xd4);
  return uVar1;
}

/* ref: FUN_004133c0 */
uint F_004133c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4133c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00413300(param_1 + -4);
  return uVar1;
}

/* ref: FUN_004133d0 */
uint F_004133d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4133d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_004132e0(param_1 + -0xd8);
  return uVar1;
}

/* ref: FUN_00413410 */
byte F_00413410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x413410u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 6) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00413480 */
uint F_00413480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x413480u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  piVar1 = param_1;
  if (*param_3 <= *param_1) {
    piVar1 = param_3;
  }
  if (*piVar1 <= *param_2) {
    piVar1 = param_2;
  }
  return (uint)piVar1;
}

/* ref: FUN_004134a0 */
uint F_004134a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x4134a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;
  uint param_8 = (uint)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * in_EAX = 0;
  
  if ((param_8 & 2) != 0) {
    in_EAX = (undefined4 *)F_004d23f0(param_1,4,param_3,param_9);
    if (in_EAX == (undefined4 *)0x0) {
      return 0;
    }
    uVar1 = param_2[1];
    *in_EAX = *param_2;
    uVar2 = REFG(float, 0x1088068);
    in_EAX[1] = uVar1;
    in_EAX[2] = uVar2;
    in_EAX[3] = *param_4;
    uVar1 = param_2[3];
    in_EAX[6] = *param_2;
    in_EAX[7] = uVar1;
    in_EAX[8] = uVar2;
    in_EAX[9] = *param_6;
    uVar1 = param_2[1];
    in_EAX[0xc] = param_2[2];
    in_EAX[0xd] = uVar1;
    in_EAX[0xe] = uVar2;
    in_EAX[0xf] = *param_5;
    uVar1 = param_2[3];
    in_EAX[0x12] = param_2[2];
    in_EAX[0x13] = uVar1;
    in_EAX[0x14] = uVar2;
    in_EAX[0x15] = *param_7;
  }
  if (((param_8 & 1) != 0) &&
     (in_EAX = (undefined4 *)F_004d2330(param_1,5,param_3,param_9), in_EAX != (undefined4 *)0x0))
  {
    uVar1 = param_2[1];
    *in_EAX = *param_2;
    uVar2 = REFG(float, 0x1088068);
    in_EAX[1] = uVar1;
    in_EAX[2] = uVar2;
    in_EAX[3] = *param_4;
    uVar1 = param_2[1];
    in_EAX[6] = param_2[2];
    in_EAX[7] = uVar1;
    in_EAX[8] = uVar2;
    in_EAX[9] = *param_5;
    uVar1 = param_2[3];
    in_EAX[0xc] = param_2[2];
    in_EAX[0xd] = uVar1;
    in_EAX[0xe] = uVar2;
    in_EAX[0xf] = *param_7;
    uVar1 = param_2[3];
    in_EAX[0x12] = *param_2;
    in_EAX[0x13] = uVar1;
    in_EAX[0x14] = uVar2;
    in_EAX[0x15] = *param_6;
    uVar1 = param_2[1];
    in_EAX[0x18] = *param_2;
    in_EAX[0x19] = uVar1;
    in_EAX[0x1a] = uVar2;
    in_EAX[0x1b] = *param_4;
  }
  return (uint)in_EAX;
}

/* ref: FUN_004136d0 */
uint F_004136d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x4136d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a5;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;
  undefined4 * param_8 = (undefined4 *)(uintptr_t)gen_a7;
  undefined4 * param_9 = (undefined4 *)(uintptr_t)gen_a8;
  uint param_10 = (uint)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * in_EAX = 0;
  
  if ((param_10 & 2) != 0) {
    in_EAX = (undefined4 *)F_004d23f0(param_1,4,param_3,param_11);
    if (in_EAX == (undefined4 *)0x0) {
      return 0;
    }
    uVar1 = param_2[1];
    *in_EAX = *param_2;
    uVar2 = REFG(float, 0x1088068);
    in_EAX[1] = uVar1;
    in_EAX[2] = uVar2;
    in_EAX[3] = *param_4;
    uVar1 = param_8[1];
    in_EAX[4] = *param_8;
    in_EAX[5] = uVar1;
    uVar1 = param_2[3];
    in_EAX[6] = *param_2;
    in_EAX[7] = uVar1;
    in_EAX[8] = uVar2;
    in_EAX[9] = *param_6;
    uVar1 = param_9[1];
    in_EAX[10] = *param_8;
    in_EAX[0xb] = uVar1;
    uVar1 = param_2[1];
    in_EAX[0xc] = param_2[2];
    in_EAX[0xd] = uVar1;
    in_EAX[0xe] = uVar2;
    in_EAX[0xf] = *param_5;
    uVar1 = param_8[1];
    in_EAX[0x10] = *param_9;
    in_EAX[0x11] = uVar1;
    uVar1 = param_2[3];
    in_EAX[0x12] = param_2[2];
    in_EAX[0x13] = uVar1;
    in_EAX[0x14] = uVar2;
    in_EAX[0x15] = *param_7;
    uVar1 = param_9[1];
    in_EAX[0x16] = *param_9;
    in_EAX[0x17] = uVar1;
  }
  if (((param_10 & 1) != 0) &&
     (in_EAX = (undefined4 *)F_004d2330(param_1,5,param_3,param_11), in_EAX != (undefined4 *)0x0))
  {
    uVar1 = param_2[1];
    *in_EAX = *param_2;
    uVar2 = REFG(float, 0x1088068);
    in_EAX[1] = uVar1;
    in_EAX[2] = uVar2;
    in_EAX[3] = *param_4;
    uVar1 = param_2[1];
    in_EAX[6] = param_2[2];
    in_EAX[7] = uVar1;
    in_EAX[8] = uVar2;
    in_EAX[9] = *param_5;
    uVar1 = param_2[3];
    in_EAX[0xc] = param_2[2];
    in_EAX[0xd] = uVar1;
    in_EAX[0xe] = uVar2;
    in_EAX[0xf] = *param_7;
    uVar1 = param_2[3];
    in_EAX[0x12] = *param_2;
    in_EAX[0x13] = uVar1;
    in_EAX[0x14] = uVar2;
    in_EAX[0x15] = *param_6;
    uVar1 = param_2[1];
    in_EAX[0x18] = *param_2;
    in_EAX[0x19] = uVar1;
    in_EAX[0x1a] = uVar2;
    in_EAX[0x1b] = *param_4;
  }
  return (uint)in_EAX;
}

/* ref: Client::System::Streaming::StreamingPlayer::vf0 */
uint F_00413980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x413980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 0x28);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1087ec8));
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  REFG(undefined4, 0x1370c0c) = 0;
  F_004a05c0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004139f0 */
uint F_004139f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4139f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00413cc0((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: Client::Graphics::Kernel::Notifier::vf3 */
unsigned int F_00413a00(void)
{
  GEN_ENTER(0x413a00u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Kernel::Notifier::vf4 */
byte F_00413a10(void)
{
  GEN_ENTER(0x413a10u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::System::Streaming::StreamingThreadWin::vf0 */
uint F_00413a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x413a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x1087ed8));
  F_004cf880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Streaming::StreamingWorkWin::vf0 */
uint F_00413a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x413a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00410f70(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Streaming::TextureRenderer::vf3 */
uint F_00413a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x413a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00411280(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00413ab0 */
uint F_00413ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x413ab0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float * pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float * pfVar6;
  int * piVar7;
  
  pfVar6 = (*(float * PTR32 *)&gen_args[1]);
  iVar2 = (int)(((double)GEN_TOD(*(*(float * PTR32 *)&gen_args[1]))) * *(double *)&REFG(undefined, 0x1088100));
  ((int *)(gen_frame + 0x8))[2] = iVar2;
  iVar3 = (int)(((double)GEN_TOD((*(float * PTR32 *)&gen_args[1])[1])) * *(double *)&REFG(undefined, 0x1088100));
  pfVar1 = (*(float * PTR32 *)&gen_args[1]) + 2;
  (*(float * PTR32 *)&gen_args[1]) = (float *)iVar3;
  iVar4 = (int)((double)*pfVar1 * *(double *)&REFG(undefined, 0x1088100));
  (*(int *)(gen_frame + 0x18)) = iVar4;
  iVar5 = (int)(*(double *)&REFG(undefined, 0x1088100) * (double)pfVar6[3]);
  (*(int *)(gen_frame + 0x14)) = iVar5;
  ((int *)(gen_frame + 0x8))[1] = 0xff;
  ((int *)(gen_frame + 0x8))[0] = 0;
  if (iVar2 < 0xff) {
    piVar7 = ((int *)(gen_frame + 0x8)) + 2;
    if (iVar2 < 1) {
      piVar7 = ((int *)(gen_frame + 0x8));
    }
  }
  else {
    piVar7 = ((int *)(gen_frame + 0x8)) + 1;
  }
  *(char *)(*(undefined * PTR32 *)&gen_args[0]) = (char)*piVar7;
  ((int *)(gen_frame + 0x8))[0] = 0xff;
  ((int *)(gen_frame + 0x8))[1] = 0;
  if (iVar3 < 0xff) {
    piVar7 = (int *)&(*(float * PTR32 *)&gen_args[1]);
    if (iVar3 < 1) {
      piVar7 = ((int *)(gen_frame + 0x8)) + 1;
    }
  }
  else {
    piVar7 = ((int *)(gen_frame + 0x8));
  }
  *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 1))) = (char)*piVar7;
  (*(float * PTR32 *)&gen_args[1]) = (float *)0xff;
  ((int *)(gen_frame + 0x8))[0] = 0;
  if (iVar4 < 0xff) {
    piVar7 = &(*(int *)(gen_frame + 0x18));
    if (iVar4 < 1) {
      piVar7 = ((int *)(gen_frame + 0x8));
    }
  }
  else {
    piVar7 = (int *)&(*(float * PTR32 *)&gen_args[1]);
  }
  *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 2))) = (char)*piVar7;
  ((int *)(gen_frame + 0x8))[0] = 0;
  if (iVar5 < 0xff) {
    if (0 < iVar5) {
      (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x14)) + 0)) = (undefined1)iVar5;
      *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 3))) = (undefined1)(*(int *)(gen_frame + 0x14));
      return (uint)(*(undefined * PTR32 *)&gen_args[0]);
    }
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 3))) = 0;
    return (uint)(*(undefined * PTR32 *)&gen_args[0]);
  }
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 3))) = 0xff;
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00413bd0 */
uint F_00413bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x413bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_004134a0(param_1,param_2,param_3,param_4,param_4,param_4,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00413c00 */
uint F_00413c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x413c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_004136d0(param_1,param_2,param_3,param_4,param_4,param_4,param_4,param_5,param_6,
                       param_7,param_8);
  return uVar1;
}

/* ref: FUN_00413c30 */
uint F_00413c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x413c30u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint uVar1;
  
  uVar1 = F_004134a0(*((undefined4 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a4))),(*(undefined4 *)&gen_args[0]),
                       5,&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
  return uVar1;
}

/* ref: FUN_00413c70 */
uint F_00413c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x413c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  uint uVar1;
  
  uVar1 = F_004136d0(*((undefined4 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a4))),(*(undefined4 *)&gen_args[0]),
                       5,&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]));
  return uVar1;
}

/* ref: Client::System::Streaming::StreamingCtrlWin::vf0 */
uint F_00413cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x413cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00411fd0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00413d10 */
uint F_00413d10(unsigned int gen_a0)
{
  GEN_ENTER(0x413d10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: FUN_00413d20 */
uint F_00413d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x413d20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14) = param_2;
  return param_2;
}

/* ref: FUN_00413d30 */
uint F_00413d30(unsigned int gen_a0)
{
  GEN_ENTER(0x413d30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x7c;
}

/* ref: Common::Configuration::ConfigBase::vf1 */
unsigned int F_00413d40(void)
{
  GEN_ENTER(0x413d40u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00413d50 */
uint F_00413d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x413d50u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  F_0042ce40(param_1,"{%08X-%04X-%04X-%02X%02X%02X%02X%02X%02X%02X%02X}",*param_2,
               (uint)*(ushort *)(param_2 + 1),(uint)*(ushort *)((int)param_2 + 6),
               (uint)*(byte *)(param_2 + 2),(uint)*(byte *)((int)param_2 + 9),
               (uint)*(byte *)((int)param_2 + 10),(uint)*(byte *)((int)param_2 + 0xb),
               (uint)*(byte *)(param_2 + 3),(uint)*(byte *)((int)param_2 + 0xd),
               (uint)*(byte *)((int)param_2 + 0xe),(uint)*(byte *)((int)param_2 + 0xf));
  return param_1;
}

/* ref: FUN_00413db0 */
byte F_00413db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x413db0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  *(int *)((int)this + param_1 * 4 + 0x88) = param_2;
  *(undefined * PTR32 *)(param_2 + 0x98) = this;
  return 1;
}

/* ref: FUN_00413dd0 */
byte F_00413dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x413dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x88);
  if (iVar1 == 0) {
    return 1;
  }
  if (iVar1 == param_2) {
    *(undefined4 *)((int)this + param_1 * 4 + 0x88) = 0;
    *(undefined4 *)(param_2 + 0x98) = 0;
    return 1;
  }
  return 0;
}

/* ref: FUN_00413e50 */
uint F_00413e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x413e50u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  if (*param_1 != 0) {
    F_00406b30(*param_1);
    *param_1 = 0;
  }
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00406bb0(pcVar2 + (1 - (int)(param_2 + 1)),0,0);
  *param_1 = uVar3;
  uVar3 = F_00c49908(uVar3,pcVar2 + (1 - (int)(param_2 + 1)),param_2);
  return uVar3;
}

/* ref: Client::System::Configuration::ConfigFileOperation::vf2 */
uint F_00413ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x413ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x270];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x268)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x26c);
  F_0042e170(((undefined1 *)(gen_frame + 0x214)),param_1);
  F_0042a3a0(((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x214)),1);
  F_0042c880(((undefined1 *)(gen_frame + 0x214)));
  F_004fd5e0(REFG(void * PTR32, 0x1375ae8),((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0xc)),param_2,*param_3,0,5);
  do {
    uVar1 = F_004f9c50(((undefined1 *)(gen_frame + 0x8)));
  } while (uVar1 == 0);
  F_004f9c50(((undefined1 *)(gen_frame + 0x8)));
  F_004fad40(((undefined1 *)(gen_frame + 0x8)));
  F_00429fa0();
  F_00c47745((*(uint *)(gen_frame + 0x268)) ^ (uint)(uint)(gen_frame + 0x26c));
  return 3;
}

/* ref: Client::System::Configuration::ConfigFileOperation::vf4 */
uint F_00413f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x413f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x4b0];
  
  (*(uint *)(gen_frame + 0x4a8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4ac);
  F_0042e170(((undefined1 *)(gen_frame + 0x454)),param_1);
  F_0042a3a0(((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x454)),1);
  F_0042c880(((undefined1 *)(gen_frame + 0x454)));
  F_004f9bb0(&(*(undefined4 *)(gen_frame + 0x214)));
  F_004f84e0(&(*(undefined4 *)(gen_frame + 0x214)),((undefined1 *)(gen_frame + 0xc)));
  (*(undefined4 *)(gen_frame + 0x22c)) = param_2;
  (*(undefined4 *)(gen_frame + 0x214)) = *param_3;
  (*(undefined4 *)(gen_frame + 0x218)) = 0;
  (*(undefined1 *)(gen_frame + 0x230)) = 1;
  F_004fc510(REFG(void * PTR32, 0x1375ae8),&(*(undefined4 *)(gen_frame + 0x214)));
  F_00429fa0();
  F_00c47745((*(uint *)(gen_frame + 0x4a8)) ^ (uint)(uint)(gen_frame + 0x4ac));
  return 7;
}

/* ref: FUN_00414000 */
unsigned int F_00414000(unsigned int gen_a0)
{
  GEN_ENTER(0x414000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  return 0;
}

/* ref: FUN_00414010 */
uint F_00414010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x414010u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  iVar1 = param_2;
  if (param_2 == 2) {
    iVar1 = *(int *)(in_ecx + 0x2b4);
  }
  return iVar1 * 0xac + 0x15c + in_ecx;
}

/* ref: FUN_00414040 */
uint F_00414040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x414040u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  *(int *)(in_ecx + 0x2b4) = param_2;
  uVar1 = param_2 * 0xac + 0x15c + in_ecx;
  *(uint *)(in_ecx + 0x90) = uVar1;
  *(int *)(uVar1 + 0x98) = in_ecx;
  return uVar1;
}

/* ref: Common::Configuration::DevConfig::vf2 */
byte F_00414080(void)
{
  GEN_ENTER(0x414080u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00414220 */
uint F_00414220(unsigned int gen_a0)
{
  GEN_ENTER(0x414220u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * PTR32 * ppuVar1;
  
  ppuVar1 = (*(undefined * PTR32 (*)[2])REFP(0x108b0c8));
  if ((char)param_1 == '\0') {
    ppuVar1 = (*(undefined * PTR32 (*)[2])REFP(0x108b108));
  }
  return (uint)ppuVar1;
}

/* ref: FUN_00414240 */
uint F_00414240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x414240u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char * pcVar1;
  
  pcVar1 = param_2;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case (char *)0x0: ;
    pcVar1 = F_00c4a76c(param_1,"japanese");
    return (uint)pcVar1;
  case (char *)0x1: ;
    pcVar1 = F_00c4a76c(param_1,"english");
    return (uint)pcVar1;
  case (char *)0x2: ;
    pcVar1 = F_00c4a76c(param_1,"german");
    return (uint)pcVar1;
  case (char *)0x3: ;
    pcVar1 = F_00c4a76c(param_1,"french");
    return (uint)pcVar1;
  case (char *)0x4: ;
  case (char *)0x5: ;
    pcVar1 = F_00c4a76c(param_1,"china");
  }
  return (uint)pcVar1;
}

/* ref: FUN_004142d0 */
uint F_004142d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4142d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004142e0 */
uint F_004142e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4142e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  switch((unsigned int)(uintptr_t)(*in_ecx)) {
  case 0: ;
    return 0x1370c80;
  case 1: ;
    return 0x1370cd8;
  case 2: ;
    return 0x1370d30;
  case 3: ;
    return 0x1370d88;
  case 4: ;
    return 0x1370de0;
  case 5: ;
    return 0x1370e38;
  default: ;
    return 0x1370c28;
  }
}

/* ref: FUN_00414330 */
uint F_00414330(unsigned int gen_a0)
{
  GEN_ENTER(0x414330u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_0042b660(param_1,&REFG(undefined, 0x1370c80));
  if (bVar1 != 0) {
    return 0;
  }
  bVar1 = F_0042b660(param_1,&REFG(undefined, 0x1370cd8));
  if (bVar1 != 0) {
    return 1;
  }
  bVar1 = F_0042b660(param_1,&REFG(undefined, 0x1370d30));
  if (bVar1 != 0) {
    return 2;
  }
  bVar1 = F_0042b660(param_1,&REFG(undefined, 0x1370d88));
  if (bVar1 != 0) {
    return 3;
  }
  bVar1 = F_0042b660(param_1,&REFG(undefined, 0x1370de0));
  if (bVar1 != 0) {
    return 4;
  }
  bVar1 = F_0042b660(param_1,&REFG(undefined, 0x1370e38));
  return (-(uint)(bVar1 != 0) & 6) - 1;
}

/* ref: FUN_00414334 */
uint F_00414334(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x414334u, gen_a0, gen_a1, 0u, 0u);
  int in_ebp = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * this;
  byte bVar1;
  
  this = *(undefined * PTR32 *)(in_ebp + 8);
  bVar1 = F_0042b660(this,&REFG(undefined, 0x1370c80));
  if (bVar1 != 0) {
    return 0;
  }
  bVar1 = F_0042b660(this,&REFG(undefined, 0x1370cd8));
  if (bVar1 != 0) {
    return 1;
  }
  bVar1 = F_0042b660(this,&REFG(undefined, 0x1370d30));
  if (bVar1 != 0) {
    return 2;
  }
  bVar1 = F_0042b660(this,&REFG(undefined, 0x1370d88));
  if (bVar1 != 0) {
    return 3;
  }
  bVar1 = F_0042b660(this,&REFG(undefined, 0x1370de0));
  if (bVar1 != 0) {
    return 4;
  }
  bVar1 = F_0042b660(this,&REFG(undefined, 0x1370e38));
  return (-(uint)(bVar1 != 0) & 6) - 1;
}

/* ref: FUN_004143e0 */
uint F_004143e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4143e0u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *in_ecx;
  if (0 < iVar1) {
    if (iVar1 < 3) {
      return (uint)REFG(undefined * PTR32, 0x12fcb78);
    }
    if (iVar1 == 3) {
      return (uint)REFG(undefined * PTR32, 0x12fcb74);
    }
  }
  return (uint)REFG(undefined * PTR32, 0x12fcb7c);
}

/* ref: FUN_00414410 */
byte F_00414410(unsigned int gen_a0)
{
  GEN_ENTER(0x414410u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  byte bVar1;
  
  if ((param_1 < 2) || (bVar1 = 0x2c, 3 < param_1)) {
    bVar1 = 0x2e;
  }
  return bVar1;
}

/* ref: FUN_00414430 */
byte F_00414430(unsigned int gen_a0)
{
  GEN_ENTER(0x414430u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 2) {
    return 0x2e;
  }
  if (param_1 != 3) {
    return 0x2c;
  }
  return 0x20;
}

/* ref: FUN_00414450 */
byte F_00414450(unsigned int gen_a0)
{
  GEN_ENTER(0x414450u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  return *in_ecx - 4U < 2;
}

/* ref: FUN_00414460 */
uint F_00414460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x414460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)this;
  if (((iVar1 == 1) || (iVar1 == 2)) || (uVar2 = iVar1 - 3, uVar2 == 0)) {
    uVar2 = F_0042a9a0(param_1,1,0,0,0);
  }
  return uVar2;
}

/* ref: FUN_00414490 */
uint F_00414490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x414490u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004144c0 */
uint F_004144c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4144c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 4) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_004144e0 */
unsigned int F_004144e0(float gen_a0)
{
  GEN_ENTER(0x4144e0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00414500 */
uint F_00414500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x414500u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = 0;
  piVar2 = (int *)(in_ecx + 0x88);
  while ((*piVar2 == 0 || (uVar1 = F_00414500(*piVar2,param_2), *(int *)(uVar1 + 0x10) == 0))) {
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 1;
    if (3 < uVar3) {
      return param_2 * 0x20 + *(int *)(in_ecx + 0x10);
    }
  }
  return uVar1;
}

/* ref: FUN_00414550 */
uint F_00414550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x414550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  undefined4 * puVar6;
  uint uVar7;
  bool bVar8;
  
  if (param_1 != (byte *)0x0) {
    uVar7 = 0;
    puVar6 = (undefined4 *)((int)this + 0x88);
    do {
      if ((((undefined *)*puVar6 != (undefined *)0x0) &&
          (uVar2 = F_00414550((undefined *)*puVar6,param_1,param_2,param_3), uVar2 != 0)) &&
         (*(int *)(uVar2 + 0x10) != 0)) {
        return uVar2;
      }
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar7 < 4);
    uVar7 = *(uint *)((int)this + 0xc);
    if (param_2 < uVar7) {
      uVar2 = param_3;
      if (uVar7 <= param_3) {
        uVar2 = uVar7;
      }
      if (param_2 < uVar2) {
        puVar6 = ((undefined4 *)GEN_TOP((param_2 * 0x20 + 0xc + *(int *)((int)this + 0x10))));
        uVar7 = param_2;
        do {
          pbVar5 = (byte *)*puVar6;
          pbVar3 = param_1;
          if (pbVar5 != (byte *)0x0) {
            do {
              bVar1 = *pbVar3;
              bVar8 = bVar1 < *pbVar5;
              if (bVar1 != *pbVar5) {
LAB_004145f0: ;
                iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
                goto LAB_004145f5;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar3[1];
              bVar8 = bVar1 < pbVar5[1];
              if (bVar1 != pbVar5[1]) goto LAB_004145f0;
              pbVar3 = pbVar3 + 2;
              pbVar5 = pbVar5 + 2;
            } while (bVar1 != 0);
            iVar4 = 0;
LAB_004145f5: ;
            if (iVar4 == 0) {
              return uVar7 * 0x20 + *(int *)((int)this + 0x10);
            }
          }
          uVar7 = uVar7 + 1;
          puVar6 = puVar6 + 8;
        } while (uVar7 < uVar2);
      }
    }
  }
  return 0;
}

/* ref: FUN_00414620 */
uint F_00414620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x414620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == param_1) {
    uVar2 = *(uint *)(param_1 + 4);
    *(uint *)((int)this + 4) = uVar2;
    *(undefined4 *)(param_1 + 8) = 0;
    return uVar2;
  }
  if (uVar2 != 0) {
    while (uVar1 = *(uint *)(uVar2 + 4), uVar1 != param_1) {
      uVar2 = uVar1;
      if (uVar1 == 0) {
        return 0;
      }
    }
    *(undefined4 *)(uVar2 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return uVar2;
}

/* ref: FUN_00414670 */
uint F_00414670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x414670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined * pvVar2;
  undefined * pvVar3;
  uint uVar4;
  
  pvVar3 = *(undefined * PTR32 *)((int)this + 0x98);
  while (pvVar2 = pvVar3, pvVar2 != (undefined *)0x0) {
    this = pvVar2;
    pvVar3 = *(undefined * PTR32 *)((int)pvVar2 + 0x98);
  }
  uVar4 = 0;
  for (piVar1 = *(int * PTR32 *)((int)this + 4); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,*(undefined4 *)(param_1 + 0x1c),param_1);
  }
  return uVar4;
}

/* ref: FUN_004146c0 */
uint F_004146c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4146c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char cVar1;
  char * pcVar2;
  int iVar3;
  char * pcVar4;
  uint uVar5;
  undefined * pvVar6;
  
  *(undefined4 *)((int)this + 0xc) = 0;
  pcVar2 = (char *)param_1[3];
  if (*(int *)((int)this + 0xc) != 0) {
    F_00406b30(*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = F_00406bb0(pcVar4 + (1 - (int)(pcVar2 + 1)),0,0);
  *(uint *)((int)this + 0xc) = uVar5;
  F_00c49908(uVar5,pcVar4 + (1 - (int)(pcVar2 + 1)),pcVar2);
  iVar3 = param_1[4];
  *(int *)((int)this + 0x10) = iVar3;
  if (iVar3 == 2) {
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *(undefined4 *)((int)this + 0x14) = param_1[5];
  }
  else if (iVar3 == 3) {
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *(undefined4 *)((int)this + 0x14) = param_1[5];
  }
  else if (iVar3 == 4) {
    pvVar6 = (undefined *)F_00406b90(0x54,0,0);
    if (pvVar6 == (undefined *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = F_0042cbc0(pvVar6,param_1[5]);
    }
    *(uint *)((int)this + 0x14) = uVar5;
    pvVar6 = (undefined *)F_00406b90(0x54,0,0);
    if (pvVar6 == (undefined *)0x0) {
      pvVar6 = (undefined *)0x0;
    }
    else {
      F_0042b630(pvVar6);
    }
    F_0042cbc0(((undefined1 *)(gen_frame + 0x8)),*param_1);
    F_0042ccf0(pvVar6,((undefined1 *)(gen_frame + 0x8)));
    F_0042c880(((undefined1 *)(gen_frame + 0x8)));
    *(undefined * PTR32 *)this = pvVar6;
  }
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  return (uint)this;
}

/* ref: FUN_004147e0 */
uint F_004147e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4147e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00406bb0(pcVar2 + (1 - (int)(param_1 + 1)),0,0);
  *(uint *)((int)this + 0xc) = uVar3;
  F_00c49908(uVar3,pcVar2 + (1 - (int)(param_1 + 1)),param_1);
  return (uint)this;
}

/* ref: FUN_00414850 */
uint F_00414850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x414850u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 2;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00406bb0(pcVar2 + (1 - (int)(param_1 + 1)),0,0);
  *(uint *)((int)this + 0xc) = uVar3;
  F_00c49908(uVar3,pcVar2 + (1 - (int)(param_1 + 1)),param_1);
  *(undefined4 *)((int)this + 8) = param_4;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = param_3;
  return (uint)this;
}

/* ref: FUN_004148d0 */
uint F_004148d0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x4148d0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  char cVar1;
  char * pcVar2;
  float fVar3;
  
  param_1[3] = 0.0;
  param_1[4] = 4.2039e-45;
  param_1[5] = param_3;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  fVar3 = gen_bits2f(F_00406bb0(pcVar2 + (1 - (int)(param_2 + 1)),0,0));
  param_1[3] = fVar3;
  F_00c49908((undefined4)gen_fl2bits(fVar3),pcVar2 + (1 - (int)(param_2 + 1)),param_2);
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  return (uint)param_1;
}

/* ref: FUN_00414960 */
uint F_00414960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15, unsigned int gen_a16, unsigned int gen_a17, unsigned int gen_a18, unsigned int gen_a19, unsigned int gen_a20, unsigned int gen_a21, unsigned int gen_a22)
{
  GEN_ENTER(0x414960u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[23];
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
  gen_args[13] = gen_a13;
  gen_args[14] = gen_a14;
  gen_args[15] = gen_a15;
  gen_args[16] = gen_a16;
  gen_args[17] = gen_a17;
  gen_args[18] = gen_a18;
  gen_args[19] = gen_a19;
  gen_args[20] = gen_a20;
  gen_args[21] = gen_a21;
  gen_args[22] = gen_a22;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char cVar1;
  undefined * pvVar2;
  uint uVar3;
  char * pcVar4;
  
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 4;
  pvVar2 = (undefined *)F_00406b90(0x54,0,0);
  if (pvVar2 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_0042cbc0(pvVar2,&(*(undefined4 *)&gen_args[2]));
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = uVar3;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) != 0) {
    F_00406b30(*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  }
  pcVar4 = (*(char * PTR32 *)&gen_args[1]);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00406bb0(pcVar4 + (1 - (int)((*(char * PTR32 *)&gen_args[1]) + 1)),0,0);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = uVar3;
  F_00c49908(uVar3,pcVar4 + (1 - (int)((*(char * PTR32 *)&gen_args[1]) + 1)),(*(char * PTR32 *)&gen_args[1]));
  pvVar2 = (undefined *)F_00406b90(0x54,0,0);
  if (pvVar2 == (undefined *)0x0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    F_0042b630(pvVar2);
  }
  F_0042cbc0(((undefined1 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[2]));
  F_0042ccf0(pvVar2,((undefined1 *)(gen_frame + 0x8)));
  F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  *(undefined * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = pvVar2;
  F_0042c880(&(*(undefined4 *)&gen_args[2]));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00414a40 */
byte F_00414a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x414a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 4);
  uVar2 = *(uint *)((int)this + 0x14);
  if ((uVar3 <= param_1) && (param_1 <= *(uint *)((int)this + 8))) {
    *(uint *)((int)this + 0x14) = param_1;
    if ((*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) && (uVar2 != param_1)) {
      F_00414670(*(undefined * PTR32 *)((int)this + 0x18),this);
    }
    return 1;
  }
  if (param_2 == 0) goto LAB_00414aa7;
  if (param_2 == 2) {
    if (param_1 < uVar3) {
      *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 8);
      goto LAB_00414aa7;
    }
    uVar1 = *(uint *)((int)this + 8);
LAB_00414aa2: ;
    if (param_1 <= uVar1) goto LAB_00414aa7;
  }
  else if (param_2 == 3) {
    if (uVar3 <= param_1) {
      uVar3 = *(uint *)((int)this + 8);
      uVar1 = uVar3;
      goto LAB_00414aa2;
    }
  }
  else {
    uVar3 = *(uint *)this;
  }
  *(uint *)((int)this + 0x14) = uVar3;
LAB_00414aa7: ;
  if ((*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) && (uVar2 != *(uint *)((int)this + 0x14))) {
    F_00414670(*(undefined * PTR32 *)((int)this + 0x18),this);
  }
  return 0;
}

/* ref: FUN_00414ad0 */
byte F_00414ad0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x414ad0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  bool bVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = param_1[5];
  fVar3 = (float10)param_2;
  if ((!((float10)param_1[1] <= fVar3)) || (!(fVar3 <= (float10)param_1[2]))) {
    param_1[5] = *param_1;
    if ((((undefined *)(uintptr_t)gen_fl2bits((float)(param_1[6]))) != (undefined *)0x0) &&
       (fVar3 = (float10)*param_1, fVar4 = (float10)fVar1, bVar2 = GEN_ISNAN(fVar4) || GEN_ISNAN(fVar3),
       bVar2 == (bVar2 || fVar4 == fVar3))) {
      F_00414670(((undefined *)(uintptr_t)gen_fl2bits((float)(param_1[6]))),param_1);
    }
    return 0;
  }
  param_1[5] = param_2;
  if ((((undefined *)(uintptr_t)gen_fl2bits((float)(param_1[6]))) != (undefined *)0x0) &&
     (fVar4 = (float10)fVar1, bVar2 = GEN_ISNAN(fVar4) || GEN_ISNAN(fVar3), bVar2 == (bVar2 || fVar4 == fVar3)))
  {
    F_00414670(((undefined *)(uintptr_t)gen_fl2bits((float)(param_1[6]))),param_1);
    return 1;
  }
  return 1;
}

/* ref: FUN_00414b60 */
byte F_00414b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15, unsigned int gen_a16, unsigned int gen_a17, unsigned int gen_a18, unsigned int gen_a19, unsigned int gen_a20, unsigned int gen_a21)
{
  GEN_ENTER(0x414b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[22];
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
  gen_args[13] = gen_a13;
  gen_args[14] = gen_a14;
  gen_args[15] = gen_a15;
  gen_args[16] = gen_a16;
  gen_args[17] = gen_a17;
  gen_args[18] = gen_a18;
  gen_args[19] = gen_a19;
  gen_args[20] = gen_a20;
  gen_args[21] = gen_a21;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  bool bVar1;
  bool bVar2;
  byte bVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  bVar1 = false;
  bVar3 = F_0042b740(&(*(undefined4 *)&gen_args[1]),&REFG(undefined, 0x1088147));
  if (bVar3 == 0) {
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) != 0) {
      F_0042e170(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1088244));
      bVar1 = true;
      bVar3 = F_0042b6f0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),((undefined1 *)(gen_frame + 0x4)));
      if (bVar3 != 0) {
        bVar2 = true;
        goto LAB_00414c0d;
      }
    }
    bVar2 = false;
LAB_00414c0d: ;
    if (bVar1) {
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    }
    F_0042e3f0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),&REFG(undefined, 0x1088248));
    if (bVar2) {
      F_00414670(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))),(*(undefined * PTR32 *)&gen_args[0]));
    }
    F_0042c880(&(*(undefined4 *)&gen_args[1]));
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return 0;
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) != 0) {
    bVar3 = F_0042b6f0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),&(*(undefined4 *)&gen_args[1]));
    if (bVar3 != 0) {
      bVar1 = true;
      goto LAB_00414ba8;
    }
  }
  bVar1 = false;
LAB_00414ba8: ;
  F_0042ccf0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),&(*(undefined4 *)&gen_args[1]));
  if (bVar1) {
    F_00414670(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))),(*(undefined * PTR32 *)&gen_args[0]));
  }
  F_0042c880(&(*(undefined4 *)&gen_args[1]));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 1;
}

/* ref: FUN_00414c60 */
uint F_00414c60(unsigned int gen_a0)
{
  GEN_ENTER(0x414c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 gen_out[0x4];
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
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
  undefined4 uStack_c;
  undefined * local_8;
  
  iVar1 = *(int *)((int)this + 0x10);
  if (iVar1 == 2) {
    uVar4 = *(uint *)this;
    uVar2 = *(uint *)((int)this + 0x14);
    *(uint *)((int)this + 0x14) = uVar4;
    if ((*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) && (uVar2 != uVar4)) {
      local_8 = this;
      uStack_c = 0x414cad;
      uVar4 = F_00414670(*(undefined * PTR32 *)((int)this + 0x18),this);
    }
  }
  else {
    if (iVar1 == 3) {
      local_8 = this;
      local_8 = ((undefined *)(uintptr_t)gen_fl2bits((float)(*(float *)this)));
      uStack_c = 0x414c92;
      bVar3 = F_00414ad0(this,*(float *)this);
      return CONCAT31(extraout_var_00,bVar3);
    }
    uVar4 = iVar1 - 4;
    if (uVar4 == 0) {
      F_0042cbc0((gen_out + 0x0),*(undefined4 *)this);
      bVar3 = F_00414b60(this,uStack_58,uStack_54,uStack_50,uStack_4c,uStack_48,uStack_44,
                           uStack_40,uStack_3c,uStack_38,uStack_34,uStack_30,uStack_2c,uStack_28,
                           uStack_24,uStack_20,uStack_1c,uStack_18,uStack_14,uStack_10,uStack_c,
                           local_8);
      return CONCAT31(extraout_var,bVar3);
    }
  }
  return uVar4;
}

/* ref: Client::System::Configuration::ConfigFileOperation::vf1 */
uint F_00414d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x414d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x270];
  undefined * this_00;
  uint uVar1;
  undefined * _Dst;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x268)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x26c);
  F_0042e170(((undefined1 *)(gen_frame + 0x214)),param_1);
  F_0042a3a0(((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x214)),1);
  F_0042c880(((undefined1 *)(gen_frame + 0x214)));
  this_00 = REFG(void * PTR32, 0x1375ae8);
  uVar1 = F_004fa430(((undefined1 *)(gen_frame + 0xc)));
  _Dst = (undefined *)F_00406bb0(uVar1 + 1,0,0);
  F_00c48350(_Dst,0,uVar1 + 1);
  F_004fd640(this_00,((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0xc)),_Dst,uVar1,0,0,0);
  uVar3 = 0;
  uVar2 = F_004f9c50(((undefined1 *)(gen_frame + 0x4)));
  if (uVar2 == 0xffffffff) {
    (*(char *)(gen_frame + 0xb)) = '\x01';
    uVar3 = 1;
  }
  else if (uVar2 == 1) {
    (*(char *)(gen_frame + 0xb)) = '\0';
  }
  else {
    (*(char *)(gen_frame + 0xb)) = '\x01';
    if (uVar2 == 5) {
      uVar3 = 5;
    }
    else {
      uVar3 = 6;
    }
  }
  F_004fad40(((undefined1 *)(gen_frame + 0x4)));
  if ((*(char *)(gen_frame + 0xb)) != '\0') {
    if (_Dst != (undefined *)0x0) {
      F_00406b30(_Dst);
    }
    F_00429fa0();
    F_00c47745((*(uint *)(gen_frame + 0x268)) ^ (uint)(uint)(gen_frame + 0x26c));
    return uVar3;
  }
  *param_3 = uVar1;
  *param_2 = _Dst;
  F_00429fa0();
  F_00c47745((*(uint *)(gen_frame + 0x268)) ^ (uint)(uint)(gen_frame + 0x26c));
  return 3;
}

/* ref: FUN_00414e60 */
uint F_00414e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x414e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_00406b90(0x18,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[7])REFP(0x108b224));
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined2 *)(puVar1 + 4) = 0;
    puVar1[5] = 0;
  }
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  puVar1[3] = param_5;
  *(undefined1 *)(puVar1 + 4) = (undefined1)param_7;
  *(undefined1 *)((int)puVar1 + 0x11) = (undefined1)param_8;
  puVar1[5] = param_1;
  uVar2 = ((code *)REFG(gen_code32, 0x1370c20))(puVar1);
  return uVar2;
}

/* ref: Common::Configuration::SystemConfig::vf2 */
byte F_00414ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x414ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pSVar2;
  uint uVar3;
  
  uVar3 = 0;
  pSVar2 = this + 0x88;
  do {
    if (*(int *)pSVar2 != 0) {
      uVar1 = F_00414500(*(int *)pSVar2,3);
      if (*(int *)(uVar1 + 0x10) != 0) goto LAB_00414f02;
    }
    uVar3 = uVar3 + 1;
    pSVar2 = pSVar2 + 4;
  } while (uVar3 < 4);
  uVar1 = *(int *)(this + 0x10) + 0x60;
LAB_00414f02: ;
  return 1 < *(uint *)(uVar1 + 0x14);
}

/* ref: FUN_00414f10 */
byte F_00414f10(unsigned int gen_a0)
{
  GEN_ENTER(0x414f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = 0;
  piVar2 = (int *)((int)this + 0x88);
  do {
    if (*piVar2 != 0) {
      uVar1 = F_00414500(*piVar2,0x1a0);
      if (*(int *)(uVar1 + 0x10) != 0) goto LAB_00414f47;
    }
    uVar3 = uVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar3 < 4);
  uVar1 = *(int *)((int)this + 0x10) + 0x3400;
LAB_00414f47: ;
  return *(int *)(uVar1 + 0x14) == 1;
}

/* ref: FUN_00414f60 */
uint F_00414f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x414f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  piVar2 = (int *)((int)this + 0x88);
  do {
    if (*piVar2 != 0) {
      puVar1 = (uint *)F_00414500(*piVar2,0x1a0);
      if (puVar1[4] != 0) goto LAB_00414f97;
    }
    uVar4 = uVar4 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar4 < 4);
  puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3400)));
LAB_00414f97: ;
  uVar4 = puVar1[5];
  uVar3 = (uint)((char)param_1 != '\0');
  if ((uVar3 < puVar1[1]) || (puVar1[2] < uVar3)) {
    uVar3 = *puVar1;
  }
  puVar1[5] = uVar3;
  if (((undefined *)puVar1[6] != (undefined *)0x0) && (uVar4 != uVar3)) {
    puVar1 = (uint *)F_00414670((undefined *)puVar1[6],puVar1);
  }
  return (uint)puVar1;
}

/* ref: FUN_00414fd0 */
ulonglong F_00414fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x414fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  
  piVar3 = (int *)((int)this + 0x88);
  uVar5 = 0;
  piVar4 = piVar3;
  do {
    if (*piVar4 != 0) {
      uVar2 = F_00414500(*piVar4,9);
      if (*(int *)(uVar2 + 0x10) != 0) goto LAB_00415004;
    }
    uVar5 = uVar5 + 1;
    piVar4 = piVar4 + 1;
  } while (uVar5 < 4);
  uVar2 = *(int *)((int)this + 0x10) + 0x120;
LAB_00415004: ;
  uVar1 = *(undefined4 *)(uVar2 + 0x14);
  uVar5 = 0;
  do {
    if (*piVar3 != 0) {
      uVar2 = F_00414500(*piVar3,10);
      if (*(int *)(uVar2 + 0x10) != 0) {
        return CONCAT44(*(undefined4 *)(uVar2 + 0x14),uVar1);
      }
    }
    uVar5 = uVar5 + 1;
    piVar3 = piVar3 + 1;
  } while (uVar5 < 4);
  return CONCAT44(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x154))),uVar1);
}

/* ref: FUN_00415060 */
uint F_00415060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x415060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * puVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  piVar2 = (int *)((int)this + 0x88);
  do {
    if (*piVar2 != 0) {
      puVar1 = (uint *)F_00414500(*piVar2,9);
      if (puVar1[4] != 0) goto LAB_00415094;
    }
    uVar4 = uVar4 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar4 < 4);
  puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x10) + 0x120)));
LAB_00415094: ;
  uVar4 = puVar1[5];
  if ((param_1 < puVar1[1]) || (uVar3 = param_1, puVar1[2] < param_1)) {
    uVar3 = *puVar1;
  }
  puVar1[5] = uVar3;
  if (((undefined *)puVar1[6] != (undefined *)0x0) && (uVar4 != uVar3)) {
    F_00414670((undefined *)puVar1[6],puVar1);
  }
  uVar4 = 0;
  piVar2 = (int *)((int)this + 0x88);
  do {
    if (*piVar2 != 0) {
      puVar1 = (uint *)F_00414500(*piVar2,10);
      if (puVar1[4] != 0) goto LAB_004150e6;
    }
    uVar4 = uVar4 + 1;
    piVar2 = piVar2 + 1;
  } while (uVar4 < 4);
  puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x10) + 0x140)));
LAB_004150e6: ;
  uVar4 = puVar1[5];
  if ((param_2 < puVar1[1]) || (uVar3 = param_2, puVar1[2] < param_2)) {
    uVar3 = *puVar1;
  }
  puVar1[5] = uVar3;
  if (((undefined *)puVar1[6] != (undefined *)0x0) && (uVar4 != uVar3)) {
    puVar1 = (uint *)F_00414670((undefined *)puVar1[6],puVar1);
  }
  return (uint)puVar1;
}

/* ref: FUN_00415120 */
uint F_00415120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x415120u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00414330(param_2);
  *in_ecx = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_00415150 */
byte F_00415150(unsigned int gen_a0)
{
  GEN_ENTER(0x415150u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  if (*in_ecx == 2) {
    return 0x2e;
  }
  if (*in_ecx != 3) {
    return 0x2c;
  }
  return 0x20;
}

/* ref: FUN_00415170 */
uint F_00415170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x415170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00422310(param_1);
  *(uint *)this = uVar1;
  return (uint)this;
}

/* ref: FUN_00415250 */
uint F_00415250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x415250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4);
  if (iVar3 == param_1) {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + 8) = 0;
    uVar1 = *(uint *)((int)this + 4);
    *(uint *)(param_1 + 4) = uVar1;
    *(int *)((int)this + 4) = param_1;
    *(undefined * PTR32 *)(param_1 + 8) = this;
    return uVar1;
  }
  if (iVar3 != 0) {
    while (iVar2 = *(int *)(iVar3 + 4), iVar2 != param_1) {
      iVar3 = iVar2;
      if (iVar2 == 0) {
        uVar1 = *(uint *)((int)this + 4);
        *(uint *)(param_1 + 4) = uVar1;
        *(int *)((int)this + 4) = param_1;
        *(undefined * PTR32 *)(param_1 + 8) = this;
        return uVar1;
      }
    }
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(param_1 + 4) = uVar1;
  *(int *)((int)this + 4) = param_1;
  *(undefined * PTR32 *)(param_1 + 8) = this;
  return uVar1;
}

/* ref: FUN_004152c0 */
uint F_004152c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4152c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  byte bVar1;
  int iVar2;
  int * piVar3;
  byte * pbVar4;
  char * pcVar5;
  undefined4 extraout_ECX = 0;
  uint * puVar6;
  undefined * this_00;
  byte * pbVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  ulonglong uVar12;
  float fVar13;
  
  (*(uint *)(gen_frame + 0x128)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x12c);
  (*(int * PTR32 *)(gen_frame + 0x7c)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x74)) = param_1;
  (*(uint * PTR32 *)(gen_frame + 0x5c)) = (uint *)0x4152ef;
  F_0042b630(((undefined1 *)(gen_frame + 0xd4)));
  (*(uint * PTR32 *)(gen_frame + 0x5c)) = (uint *)0x4152fa;
  F_0042b630(((undefined1 *)(gen_frame + 0x80)));
  (*(uint * PTR32 *)(gen_frame + 0x5c)) = (uint *)0x415302;
  F_0042aca0((int)this + 0x28);
  (*(uint *)(gen_frame + 0x78)) = 0;
  this_00 = param_1;
  piVar3 = (*(int * PTR32 *)(gen_frame + 0x7c));
  if (*(int *)((int)this + 0xc) != 0) {
    do {
      uVar8 = (*(uint *)(gen_frame + 0x78));
      uVar10 = *(uint *)((int)this_00 + 4);
      if (uVar10 < *(uint *)((int)this_00 + 8)) {
        iVar2 = uVar10 * 0x54 + *(int *)((int)this_00 + 0x60);
        *(uint *)((int)this_00 + 4) = uVar10 + 1;
        (*(uint * PTR32 *)(gen_frame + 0x5c)) = (uint *)iVar2;
        (*(undefined4 *)(gen_frame + 0x58)) = 0x415334;
        F_0042ccf0(((undefined1 *)(gen_frame + 0xd4)),iVar2);
        iVar2 = *(int *)((int)this + 0x10);
        piVar3 = (int *)(uVar8 * 0x20 + 0xc + iVar2);
        if (*(int *)(uVar8 * 0x20 + 0xc + iVar2) == 0) {
          do {
            uVar8 = uVar8 + 1;
            piVar3 = piVar3 + 8;
            (*(uint *)(gen_frame + 0x78)) = uVar8;
            if (*(uint *)((int)this + 0xc) <= uVar8) goto LAB_00415655;
          } while (*piVar3 == 0);
        }
        iVar9 = uVar8 * 0x20;
        pbVar7 = *(byte * PTR32 *)(iVar9 + 0xc + iVar2);
        pcVar5 = "<CUSTOM CONFIGURATION>";
        pbVar4 = pbVar7;
        do {
          bVar1 = *pbVar4;
          bVar11 = bVar1 < (byte)*pcVar5;
          if (bVar1 != *pcVar5) {
LAB_00415395: ;
            iVar2 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_0041539a;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar11 = bVar1 < (byte)pcVar5[1];
          if (bVar1 != pcVar5[1]) goto LAB_00415395;
          pbVar4 = pbVar4 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar1 != 0);
        iVar2 = 0;
LAB_0041539a: ;
        piVar3 = (*(int * PTR32 *)(gen_frame + 0x7c));
        if (iVar2 == 0) break;
        (*(uint * PTR32 *)(gen_frame + 0x5c)) = (uint *)0x4153aa;
        pbVar4 = (byte *)F_0042a990(((undefined1 *)(gen_frame + 0xd4)));
        do {
          bVar1 = *pbVar4;
          bVar11 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_004153d0: ;
            iVar2 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_004153d5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar11 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_004153d0;
          pbVar4 = pbVar4 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        iVar2 = 0;
LAB_004153d5: ;
        if (iVar2 == 0) {
          switch((unsigned int)(uintptr_t)(*(undefined4 *)((*(int * PTR32 *)(gen_frame + 0x7c))[4] + 0x10 + iVar9))) {
          case 2: ;
            (*(uint * PTR32 *)(gen_frame + 0x5c)) = (uint *)0x415401;
            uVar8 = F_00422ae0(this_00);
            uVar10 = *(uint *)((*(int * PTR32 *)(gen_frame + 0x7c))[4] + 0x14 + iVar9);
            puVar6 = (uint *)((*(int * PTR32 *)(gen_frame + 0x7c))[4] + iVar9);
            if ((uVar8 < puVar6[1]) || (puVar6[2] < uVar8)) {
              uVar8 = *puVar6;
            }
            puVar6[5] = uVar8;
            if (((undefined *)puVar6[6] != (undefined *)0x0) && (uVar10 != uVar8)) {
              (*(uint * PTR32 *)(gen_frame + 0x5c)) = puVar6;
              (*(undefined4 *)(gen_frame + 0x58)) = 0x415438;
              F_00414670((undefined *)puVar6[6],puVar6);
            }
            break;
          case 3: ;
            (*(uint * PTR32 *)(gen_frame + 0x5c)) = (uint *)0x415444;
            fVar13 = F_00422b10(this_00);
            (*(uint * PTR32 *)(gen_frame + 0x5c)) = (uint *)extraout_ECX;
            (*(uint * PTR32 *)(gen_frame + 0x5c)) = ((uint *)(uintptr_t)gen_fl2bits((float)(fVar13)));
            (*(undefined4 *)(gen_frame + 0x58)) = 0x415458;
            F_00414ad0((*(int * PTR32 *)(gen_frame + 0x7c))[4] + iVar9,fVar13);
            break;
          case 4: ;
            uVar10 = *(uint *)((int)this_00 + 4);
            if (uVar10 < *(uint *)((int)this_00 + 8)) {
              iVar2 = uVar10 * 0x54 + *(int *)((int)this_00 + 0x60);
              *(uint *)((int)this_00 + 4) = uVar10 + 1;
              (*(uint * PTR32 *)(gen_frame + 0x5c)) = (uint *)iVar2;
              (*(undefined4 *)(gen_frame + 0x58)) = 0x415481;
              F_0042ccf0(((undefined1 *)(gen_frame + 0x80)),iVar2);
              if ((*(uint *)(gen_frame + 0x78)) == (*(int * PTR32 *)(gen_frame + 0x7c))[3] - 1U) {
                iVar2 = (*(uint *)(gen_frame + 0x78)) - 1;
              }
              else {
                iVar2 = (*(uint *)(gen_frame + 0x78)) + 1;
              }
              pbVar7 = *(byte * PTR32 *)(iVar2 * 0x20 + 0xc + (*(int * PTR32 *)(gen_frame + 0x7c))[4]);
              (*(uint * PTR32 *)(gen_frame + 0x5c)) = (uint *)0x4154ae;
              pbVar4 = (byte *)F_0042a990(((undefined1 *)(gen_frame + 0x80)));
              do {
                bVar1 = *pbVar4;
                bVar11 = bVar1 < *pbVar7;
                if (bVar1 != *pbVar7) {
LAB_004154d0: ;
                  iVar2 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  goto LAB_004154d5;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar4[1];
                bVar11 = bVar1 < pbVar7[1];
                if (bVar1 != pbVar7[1]) goto LAB_004154d0;
                pbVar4 = pbVar4 + 2;
                pbVar7 = pbVar7 + 2;
              } while (bVar1 != 0);
              iVar2 = 0;
LAB_004154d5: ;
              if (iVar2 == 0) {
                if (*(int *)((int)this_00 + 4) != 0) {
                  *(int *)((int)this_00 + 4) = *(int *)((int)this_00 + 4) + -1;
                }
              }
              else {
                F_0042cbc0((gen_frame + 0xc),((undefined1 *)(gen_frame + 0x80)));
                F_00414b60((undefined *)((*(int * PTR32 *)(gen_frame + 0x7c))[4] + iVar9),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),
                             (*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),
                             (*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),
                             (*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(uint * PTR32 *)(gen_frame + 0x5c)));
              }
            }
          }
        }
        else {
          iVar2 = *(int *)((int)this_00 + 4);
          (*(int *)(gen_frame + 0x6c)) = iVar2;
          (*(int *)(gen_frame + 0x70)) = 0;
          if (iVar2 != 0) {
            iVar2 = iVar2 + -1;
          }
          *(int *)((int)this_00 + 4) = iVar2;
          while (uVar10 = *(uint *)((int)this_00 + 4), uVar10 < *(uint *)((int)this_00 + 8)) {
            iVar2 = uVar10 * 0x54 + *(int *)((int)this_00 + 0x60);
            *(uint *)((int)this_00 + 4) = uVar10 + 1;
            (*(uint * PTR32 *)(gen_frame + 0x5c)) = (uint *)iVar2;
            (*(undefined4 *)(gen_frame + 0x58)) = 0x415551;
            F_0042ccf0(((undefined1 *)(gen_frame + 0xd4)),iVar2);
            uVar10 = 0;
            if ((*(int * PTR32 *)(gen_frame + 0x7c))[3] != 0) {
              iVar2 = 0;
              do {
                pbVar7 = *(byte * PTR32 *)((*(int * PTR32 *)(gen_frame + 0x7c))[4] + 0xc + iVar2);
                if (pbVar7 != (byte *)0x0) {
                  (*(uint * PTR32 *)(gen_frame + 0x5c)) = (uint *)0x415579;
                  pbVar4 = (byte *)F_0042a990(((undefined1 *)(gen_frame + 0xd4)));
                  do {
                    bVar1 = *pbVar4;
                    bVar11 = bVar1 < *pbVar7;
                    if (bVar1 != *pbVar7) {
LAB_004155a0: ;
                      iVar9 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                      goto LAB_004155a5;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar4[1];
                    bVar11 = bVar1 < pbVar7[1];
                    if (bVar1 != pbVar7[1]) goto LAB_004155a0;
                    pbVar4 = pbVar4 + 2;
                    pbVar7 = pbVar7 + 2;
                  } while (bVar1 != 0);
                  iVar9 = 0;
LAB_004155a5: ;
                  if (iVar9 == 0) {
                    (*(uint *)(gen_frame + 0x78)) = uVar10 - 1;
                    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x74)) + 4) = (*(int *)(gen_frame + 0x70)) + -1 + (*(int *)(gen_frame + 0x6c));
                    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x74));
                    goto switchD_004153f3_caseD_0;
                  }
                }
                uVar10 = uVar10 + 1;
                iVar2 = iVar2 + 0x20;
                this_00 = (*(undefined * PTR32 *)(gen_frame + 0x74));
              } while (uVar10 < (uint)(*(int * PTR32 *)(gen_frame + 0x7c))[3]);
            }
            (*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + 1;
          }
        }
      }
switchD_004153f3_caseD_0: ;
      uVar10 = (*(uint *)(gen_frame + 0x78)) + 1;
      (*(uint *)(gen_frame + 0x78)) = uVar10;
      this = (*(int * PTR32 *)(gen_frame + 0x7c));
      piVar3 = (*(int * PTR32 *)(gen_frame + 0x7c));
    } while (uVar10 < (uint)(*(int * PTR32 *)(gen_frame + 0x7c))[3]);
  }
  while (uVar10 = *(uint *)((int)this_00 + 4), uVar10 < *(uint *)((int)this_00 + 8)) {
    iVar2 = uVar10 * 0x54 + *(int *)((int)this_00 + 0x60);
    *(uint *)((int)this_00 + 4) = uVar10 + 1;
    (*(uint * PTR32 *)(gen_frame + 0x5c)) = (uint *)iVar2;
    (*(undefined4 *)(gen_frame + 0x58)) = 0x41562d;
    F_0042e360(piVar3 + 10,iVar2);
    (*(uint * PTR32 *)(gen_frame + 0x5c)) = (uint *)&REFG(undefined, 0x1088240);
    (*(undefined4 *)(gen_frame + 0x58)) = 0x41563a;
    F_0042e370(piVar3 + 10,&REFG(undefined, 0x1088240));
  }
  if (*(char *)piVar3[10] != '\0') {
    (*(uint * PTR32 *)(gen_frame + 0x5c)) = (uint *)0x41564d;
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
    (*(uint * PTR32 *)(gen_frame + 0x5c)) = (uint *)0x415655;
    F_0042aca0(piVar3 + 10);
  }
LAB_00415655: ;
  (*(uint * PTR32 *)(gen_frame + 0x5c)) = (uint *)0x415660;
  F_0042c880(((undefined1 *)(gen_frame + 0x80)));
  (*(uint * PTR32 *)(gen_frame + 0x5c)) = (uint *)0x415668;
  uVar12 = F_0042c880(((undefined1 *)(gen_frame + 0xd4)));
  F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c));
  return (uint)uVar12;
}

/* ref: FUN_00415690 */
uint F_00415690(unsigned int gen_a0)
{
  GEN_ENTER(0x415690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x10) == 4) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 0x14);
    if (pvVar1 != (undefined *)0x0) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
      *(undefined4 *)((int)this + 0x14) = 0;
    }
    pvVar1 = *(undefined * PTR32 *)this;
    if (pvVar1 != (undefined *)0x0) {
      F_0042c880(pvVar1);
      F_00406ad0(pvVar1);
      *(undefined4 *)this = 0;
    }
  }
  uVar2 = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    uVar2 = F_00406ad0(*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return uVar2;
}

/* ref: FUN_004156f0 */
uint F_004156f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4156f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char cVar1;
  char * pcVar2;
  int iVar3;
  char * pcVar4;
  uint uVar5;
  undefined * this_00;
  
  F_00415690(this);
  pcVar2 = (char *)param_1[3];
  if (*(int *)((int)this + 0xc) != 0) {
    F_00406b30(*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = F_00406bb0(pcVar4 + (1 - (int)(pcVar2 + 1)),0,0);
  *(uint *)((int)this + 0xc) = uVar5;
  F_00c49908(uVar5,pcVar4 + (1 - (int)(pcVar2 + 1)),pcVar2);
  iVar3 = param_1[4];
  *(int *)((int)this + 0x10) = iVar3;
  if (iVar3 == 2) {
    *(undefined4 *)((int)this + 0x14) = param_1[5];
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
  }
  else if (iVar3 == 3) {
    *(undefined4 *)((int)this + 0x14) = param_1[5];
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
  }
  else if (iVar3 == 4) {
    this_00 = (undefined *)F_00406b90(0x54,0,0);
    if (this_00 == (undefined *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = F_0042cbc0(this_00,param_1[5]);
    }
    *(uint *)((int)this + 0x14) = uVar5;
    uVar5 = F_00406b90(0x54,0,0);
    if (uVar5 == 0) {
      uVar5 = 0;
    }
    else {
      F_0042b630(uVar5);
    }
    *(uint *)this = uVar5;
    F_0042cbc0(((undefined1 *)(gen_frame + 0x8)),*param_1);
    F_0042ccf0(*(undefined * PTR32 *)this,((undefined1 *)(gen_frame + 0x8)));
    F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  }
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  return (uint)this;
}

/* ref: FUN_00415810 */
uint F_00415810(unsigned int gen_a0)
{
  GEN_ENTER(0x415810u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x108b270));
  return (uint)in_ecx;
}

/* ref: Client::System::Configuration::ConfigFileOperation::vf3 */
uint F_00415820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x415820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x4b0];
  
  (*(uint *)(gen_frame + 0x4a8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4ac);
  F_0042e170(((undefined1 *)(gen_frame + 0x454)),param_1);
  F_0042a3a0(((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x454)),1);
  F_0042c880(((undefined1 *)(gen_frame + 0x454)));
  F_004f9bb0(((undefined1 *)(gen_frame + 0x214)));
  F_004f84e0(((undefined1 *)(gen_frame + 0x214)),((undefined1 *)(gen_frame + 0xc)));
  (*(char * PTR32 *)(gen_frame + 0x234)) = "Client.System.Configuration.ConfigBase";
  (*(undefined4 *)(gen_frame + 0x238)) = 0;
  (*(undefined4 *)(gen_frame + 0x23c)) = 0;
  (*(gen_code32 *)(gen_frame + 0x248)) = ((code *)REFP(0x414e60));
  (*(undefined * PTR32 *)(gen_frame + 0x224)) = this;
  (*(undefined4 *)(gen_frame + 0x228)) = 0;
  F_004fc400(REFG(void * PTR32, 0x1375ae8),((undefined1 *)(gen_frame + 0x214)));
  REFG(undefined4, 0x1370c20) = param_2;
  F_00429fa0();
  F_00c47745((*(uint *)(gen_frame + 0x4a8)) ^ (uint)(uint)(gen_frame + 0x4ac));
  return 7;
}

/* ref: FUN_004158f0 */
uint F_004158f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4158f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x20;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + iVar2))),param_2);
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined * PTR32 *)(uVar1 + 0x18 + iVar2) = this;
  *(int *)(uVar1 + 0x1c + iVar2) = param_1;
  return uVar1;
}

/* ref: FUN_00415920 */
uint F_00415920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x415920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00415190(this,param_1,param_1);
  return uVar1;
}

/* ref: FUN_00415940 */
unsigned int F_00415940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x415940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar4 = 0;
    do {
      iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10 + iVar4)));
      iVar2 = *(int *)(param_1 + 0x10) + iVar4;
      if (((iVar1 != 0) && (iVar1 != 1)) && (*(int *)(iVar2 + 0x10) != 0)) {
        F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + iVar4))),iVar2);
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x20;
    } while (uVar3 < *(uint *)(param_1 + 0xc));
  }
  return 0;
}

/* ref: FUN_00415990 */
uint F_00415990(unsigned int gen_a0)
{
  GEN_ENTER(0x415990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  byte * pbVar4;
  int iVar5;
  uint * puVar6;
  byte * pbVar7;
  uint uVar8;
  bool bVar9;
  ulonglong uVar10;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  (*(uint * PTR32 *)(gen_frame + 0x5c)) = (uint *)0x4159ad;
  F_0042b630(((undefined1 *)(gen_frame + 0x74)));
  (*(int *)(gen_frame + 0x70)) = *(int *)((int)this + 0x9c);
  if ((*(int *)(gen_frame + 0x70)) != *(int *)((int)this + 0xa0)) {
    do {
      (*(uint * PTR32 *)(gen_frame + 0x5c)) = (uint *)*(undefined4 *)((*(int *)(gen_frame + 0x70)) + 0xc);
      (*(undefined4 *)(gen_frame + 0x58)) = 0x4159ce;
      F_0042e430(((undefined1 *)(gen_frame + 0x74)),*(undefined4 *)((*(int *)(gen_frame + 0x70)) + 0xc));
      uVar8 = 0;
      if (*(int *)((int)this + 0xc) != 0) {
        (*(int *)(gen_frame + 0x6c)) = 0;
        do {
          pbVar7 = *((byte * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc + (*(int *)(gen_frame + 0x6c)))));
          if (pbVar7 != (byte *)0x0) {
            (*(uint * PTR32 *)(gen_frame + 0x5c)) = (uint *)0x4159f6;
            pbVar4 = (byte *)F_0042a990(((undefined1 *)(gen_frame + 0x74)));
            do {
              bVar1 = *pbVar4;
              bVar9 = bVar1 < *pbVar7;
              if (bVar1 != *pbVar7) {
LAB_00415a16: ;
                iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                goto LAB_00415a1b;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar9 = bVar1 < pbVar7[1];
              if (bVar1 != pbVar7[1]) goto LAB_00415a16;
              pbVar4 = pbVar4 + 2;
              pbVar7 = pbVar7 + 2;
            } while (bVar1 != 0);
            iVar5 = 0;
LAB_00415a1b: ;
            if (iVar5 == 0) {
              iVar5 = uVar8 * 0x20;
              uVar2 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10 + iVar5)));
              puVar6 = ((uint *)GEN_TOP((*(int *)((int)this + 0x10) + iVar5)));
              switch((unsigned int)(uintptr_t)(uVar2)) {
              case 2: ;
                uVar8 = *(uint *)((*(int *)(gen_frame + 0x70)) + 0x14);
                uVar3 = puVar6[5];
                if ((uVar8 < puVar6[1]) || (puVar6[2] < uVar8)) {
                  uVar8 = *puVar6;
                }
                puVar6[5] = uVar8;
                if (((undefined *)puVar6[6] != (undefined *)0x0) && (uVar3 != uVar8)) {
                  (*(uint * PTR32 *)(gen_frame + 0x5c)) = puVar6;
                  (*(undefined4 *)(gen_frame + 0x58)) = 0x415a6c;
                  F_00414670((undefined *)puVar6[6],puVar6);
                }
                break;
              case 3: ;
                (*(uint * PTR32 *)(gen_frame + 0x5c)) = (uint *)uVar2;
                (*(uint * PTR32 *)(gen_frame + 0x5c)) = ((uint *)(uintptr_t)gen_fl2bits((float)(*(float *)((*(int *)(gen_frame + 0x70)) + 0x14))));
                (*(undefined4 *)(gen_frame + 0x58)) = 0x415a83;
                F_00414ad0(puVar6,*(float *)((*(int *)(gen_frame + 0x70)) + 0x14));
                break;
              case 4: ;
                F_0042cbc0((gen_frame + 0xc),*(undefined4 *)((*(int *)(gen_frame + 0x70)) + 0x14));
                F_00414b60(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + iVar5))),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),
                             (*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),
                             (*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),
                             (*(undefined4 *)(gen_frame + 0x4c)),(*(undefined4 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(uint * PTR32 *)(gen_frame + 0x5c)));
              }
              break;
            }
          }
          (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + 0x20;
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)((int)this + 0xc));
      }
      (*(int *)(gen_frame + 0x70)) = (*(int *)(gen_frame + 0x70)) + 0x20;
    } while ((*(int *)(gen_frame + 0x70)) != *(int *)((int)this + 0xa0));
  }
  (*(uint * PTR32 *)(gen_frame + 0x5c)) = (uint *)0x415abd;
  uVar10 = F_0042c880(((undefined1 *)(gen_frame + 0x74)));
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return (uint)uVar10;
}

/* ref: FUN_00415b00 */
uint F_00415b00(unsigned int gen_a0)
{
  GEN_ENTER(0x415b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x1010];
  int iVar1;
  uint uVar2;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x13;
  (*(undefined4 *)(gen_frame + 0xffc)) = 1;
  (*(undefined4 *)(gen_frame + 0x1004)) = 0;
  (*(undefined4 *)(gen_frame + 0x1008)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x415b27;
  uVar2 = F_00406bb0(0x13,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10882a8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x13;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0xff8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x415b37;
  F_00c49908(uVar2,0x13,"<GamePad Settings>");
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0xfec));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x415b4c;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x860))),&(*(undefined4 *)(gen_frame + 0xfec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x878) = this;
  *(undefined4 *)(iVar1 + 0x87c) = 0x43;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x415b67;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10882bc;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415b77;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"PadMode",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x415b86;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x960))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x978) = this;
  *(undefined4 *)(iVar1 + 0x97c) = 0x4b;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x415ba1;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x14;
  (*(undefined4 *)(gen_frame + 0xffc)) = 1;
  (*(undefined4 *)(gen_frame + 0x1004)) = 0;
  (*(undefined4 *)(gen_frame + 0x1008)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x415bb3;
  uVar2 = F_00406bb0(0x14,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10882c4;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x14;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0xff8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x415bc3;
  F_00c49908(uVar2,0x14,"<Charcter Settings>");
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0xfec));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x415bd8;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xa40))),&(*(undefined4 *)(gen_frame + 0xfec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xa58) = this;
  *(undefined4 *)(iVar1 + 0xa5c) = 0x52;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x415bf3;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10882d8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415c03;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"LegacySeal",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x415c12;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1680))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1698) = this;
  *(undefined4 *)(iVar1 + 0x169c) = 0xb4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x415c2d;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10882e4;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415c3d;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"WeaponAutoPutAway",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x415c4c;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xa60))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xa78) = this;
  *(undefined4 *)(iVar1 + 0xa7c) = 0x53;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x415c67;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x5;
  (*(undefined4 *)(gen_frame + 0x58)) = 1;
  (*(undefined4 *)(gen_frame + 0x54)) = 3;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10882f8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415c7d;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"WeaponAutoPutAwayTime",3,1,5);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x415c8c;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xa80))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xa98) = this;
  *(undefined4 *)(iVar1 + 0xa9c) = 0x54;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x415ca7;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088310;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415cb9;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"LipMotionType",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x415cc8;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xaa0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xab8) = this;
  *(undefined4 *)(iVar1 + 0xabc) = 0x55;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x415ce3;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088320;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415cf5;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"ShopConfirm",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x415d04;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2fa0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2fb8) = this;
  *(undefined4 *)(iVar1 + 0x2fbc) = 0x17d;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x415d1f;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108832c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415d31;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"ShopConfirmMateria",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x415d40;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2fc0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2fd8) = this;
  *(undefined4 *)(iVar1 + 0x2fdc) = 0x17e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x415d5b;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088340;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415d6d;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"ShopConfirmExRare",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x415d7c;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2fe0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2ff8) = this;
  *(undefined4 *)(iVar1 + 0x2ffc) = 0x17f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x415d97;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088354;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415da9;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"ShopConfirmSpiritBondMax",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x415db8;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3000))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3018) = this;
  *(undefined4 *)(iVar1 + 0x301c) = 0x180;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x415dd3;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088370;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415de4;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCommon01",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x415df3;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x18c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x18d8) = this;
  *(undefined4 *)(iVar1 + 0x18dc) = 0xc6;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x415e0e;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088380;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415e1f;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCommon02",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x415e2e;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x18e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x18f8) = this;
  *(undefined4 *)(iVar1 + 0x18fc) = 199;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x415e49;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088390;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415e5a;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCommon03",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x415e69;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1900))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1918) = this;
  *(undefined4 *)(iVar1 + 0x191c) = 200;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x415e84;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10883a0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415e96;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCommon04",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x415ea5;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1920))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1938) = this;
  *(undefined4 *)(iVar1 + 0x193c) = 0xc9;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x415ec0;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10883b0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415ed2;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCommon05",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x415ee1;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1940))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1958) = this;
  *(undefined4 *)(iVar1 + 0x195c) = 0xca;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x415efc;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10883c0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415f0e;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCommon06",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x415f1d;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1960))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1978) = this;
  *(undefined4 *)(iVar1 + 0x197c) = 0xcb;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x415f38;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10883d0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415f4a;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCommon07",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x415f59;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1980))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1998) = this;
  *(undefined4 *)(iVar1 + 0x199c) = 0xcc;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x415f74;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10883e0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415f86;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCommon08",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x415f95;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x19a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x19b8) = this;
  *(undefined4 *)(iVar1 + 0x19bc) = 0xcd;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x415fb0;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10883f0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415fc2;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCommon09",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x415fd1;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x19c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x19d8) = this;
  *(undefined4 *)(iVar1 + 0x19dc) = 0xce;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x415fec;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088400;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x415ffe;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCommon10",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41600d;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x19e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x19f8) = this;
  *(undefined4 *)(iVar1 + 0x19fc) = 0xcf;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416028;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088410;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416039;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossCommon01",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416048;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1a00))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1a18) = this;
  *(undefined4 *)(iVar1 + 0x1a1c) = 0xd0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416063;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088424;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416074;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossCommon02",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416083;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1a20))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1a38) = this;
  *(undefined4 *)(iVar1 + 0x1a3c) = 0xd1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41609e;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088438;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4160af;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossCommon03",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4160be;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1a40))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1a58) = this;
  *(undefined4 *)(iVar1 + 0x1a5c) = 0xd2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4160d9;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108844c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4160eb;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossCommon04",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4160fa;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1a60))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1a78) = this;
  *(undefined4 *)(iVar1 + 0x1a7c) = 0xd3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416115;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088460;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416127;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossCommon05",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416136;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1a80))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1a98) = this;
  *(undefined4 *)(iVar1 + 0x1a9c) = 0xd4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416151;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088474;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416163;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossCommon06",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416172;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1aa0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1ab8) = this;
  *(undefined4 *)(iVar1 + 0x1abc) = 0xd5;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41618d;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088488;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41619f;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossCommon07",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4161ae;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1ac0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1ad8) = this;
  *(undefined4 *)(iVar1 + 0x1adc) = 0xd6;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4161c9;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108849c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4161db;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossCommon08",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4161ea;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1ae0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1af8) = this;
  *(undefined4 *)(iVar1 + 0x1afc) = 0xd7;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416205;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10884b0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416217;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossHelpDisp",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416226;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1b00))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1b18) = this;
  *(undefined4 *)(iVar1 + 0x1b1c) = 0xd8;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416241;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10884c4;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416252;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossOperation",0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416261;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1b20))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1b38) = this;
  *(undefined4 *)(iVar1 + 0x1b3c) = 0xd9;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41627c;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10884dc;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41628d;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossDisp",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41629c;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1b40))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 7000) = this;
  *(undefined4 *)(iVar1 + 0x1b5c) = 0xda;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4162b7;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10884ec;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4162c8;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossLock",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4162d7;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1b60))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1b78) = this;
  *(undefined4 *)(iVar1 + 0x1b7c) = 0xdb;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4162f2;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10884fc;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416304;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossUseEx",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416313;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1b80))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1b98) = this;
  *(undefined4 *)(iVar1 + 0x1b9c) = 0xdc;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41632e;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088510;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41633f;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossSetChangeCustom",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41634e;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1ba0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1bb8) = this;
  *(undefined4 *)(iVar1 + 0x1bbc) = 0xdd;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416369;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108852c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41637a;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossSetChangeCustomSet1",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416389;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1bc0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1bd8) = this;
  *(undefined4 *)(iVar1 + 0x1bdc) = 0xde;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4163a4;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108854c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4163b5;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossSetChangeCustomSet2",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4163c4;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1be0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1bf8) = this;
  *(undefined4 *)(iVar1 + 0x1bfc) = 0xdf;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4163df;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108856c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4163f0;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossSetChangeCustomSet3",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4163ff;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1c00))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1c18) = this;
  *(undefined4 *)(iVar1 + 0x1c1c) = 0xe0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41641a;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108858c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41642b;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossSetChangeCustomSet4",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41643a;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1c20))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1c38) = this;
  *(undefined4 *)(iVar1 + 0x1c3c) = 0xe1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416455;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10885ac;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416466;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossSetChangeCustomSet5",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416475;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1c40))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1c58) = this;
  *(undefined4 *)(iVar1 + 0x1c5c) = 0xe2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416490;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10885cc;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4164a1;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossSetChangeCustomSet6",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4164b0;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1c60))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1c78) = this;
  *(undefined4 *)(iVar1 + 0x1c7c) = 0xe3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4164cb;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10885ec;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4164dc;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossSetChangeCustomSet7",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4164eb;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1c80))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1c98) = this;
  *(undefined4 *)(iVar1 + 0x1c9c) = 0xe4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416506;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108860c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416517;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossSetChangeCustomSet6",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416526;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1ca0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1cb8) = this;
  *(undefined4 *)(iVar1 + 0x1cbc) = 0xe5;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416541;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108862c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416552;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossSetChangeCustomIsSword",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416561;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1cc0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1cd8) = this;
  *(undefined4 *)(iVar1 + 0x1cdc) = 0xe6;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41657c;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088650;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41658d;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossSetChangeCustomIsSwordSet1",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41659c;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1ce0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1cf8) = this;
  *(undefined4 *)(iVar1 + 0x1cfc) = 0xe7;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4165b7;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088678;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4165c8;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossSetChangeCustomIsSwordSet2",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4165d7;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1d00))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1d18) = this;
  *(undefined4 *)(iVar1 + 0x1d1c) = 0xe8;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4165f2;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10886a0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416603;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossSetChangeCustomIsSwordSet3",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416612;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1d20))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1d38) = this;
  *(undefined4 *)(iVar1 + 0x1d3c) = 0xe9;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41662d;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10886c8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41663e;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossSetChangeCustomIsSwordSet4",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41664d;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1d40))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1d58) = this;
  *(undefined4 *)(iVar1 + 0x1d5c) = 0xea;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416668;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10886f0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416679;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossSetChangeCustomIsSwordSet5",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416688;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1d60))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1d78) = this;
  *(undefined4 *)(iVar1 + 0x1d7c) = 0xeb;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4166a3;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088718;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4166b4;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossSetChangeCustomIsSwordSet6",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4166c3;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1d80))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1d98) = this;
  *(undefined4 *)(iVar1 + 0x1d9c) = 0xec;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4166de;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088740;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4166ef;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossSetChangeCustomIsSwordSet7",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4166fe;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1da0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1db8) = this;
  *(undefined4 *)(iVar1 + 0x1dbc) = 0xed;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416719;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088768;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41672a;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"HotbarCrossSetChangeCustomIsSwordSet6",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416739;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1dc0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1dd8) = this;
  *(undefined4 *)(iVar1 + 0x1ddc) = 0xee;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416754;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088790;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416766;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"ToolTipDispSize",1,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416775;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3300))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3318) = this;
  *(undefined4 *)(iVar1 + 0x331c) = 0x198;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416790;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10887a0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4167a2;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"RecommendLoginDisp",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4167b1;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3320))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3338) = this;
  *(undefined4 *)(iVar1 + 0x333c) = 0x199;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4167cc;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10887b4;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4167dd;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"RecommendAreaChangeDisp",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4167ec;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3340))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3358) = this;
  *(undefined4 *)(iVar1 + 0x335c) = 0x19a;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416807;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10887cc;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416819;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"PlateType",1,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416828;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1de0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1df8) = this;
  *(undefined4 *)(iVar1 + 0x1dfc) = 0xef;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416843;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10887d8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416855;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"PlateDispHPBar",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416864;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1e00))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1e18) = this;
  *(undefined4 *)(iVar1 + 0x1e1c) = 0xf0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41687f;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10887e8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416891;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"PlateDisableMaxHPBar",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4168a0;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1e20))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1e38) = this;
  *(undefined4 *)(iVar1 + 0x1e3c) = 0xf1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4168bb;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xfffeffe8;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088800;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4168d0;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"NamePlateColorSelf",0xfffeffe8,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4168df;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1e60))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1e78) = this;
  *(undefined4 *)(iVar1 + 0x1e7c) = 0xf3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4168fa;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xff985008;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088814;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41690f;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"NamePlateEdgeSelf",0xff985008,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41691e;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1e80))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1e98) = this;
  *(undefined4 *)(iVar1 + 0x1e9c) = 0xf4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416939;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x3;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 3;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088828;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416949;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"NamePlateDispTypeSelf",3,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416958;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1ea0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1eb8) = this;
  *(undefined4 *)(iVar1 + 0x1ebc) = 0xf5;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416973;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x3;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088840;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416983;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"NamePlateNameTypeSelf",0,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416992;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1ec0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1ed8) = this;
  *(undefined4 *)(iVar1 + 0x1edc) = 0xf6;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4169ad;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x3;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088858;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4169be;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"NamePlateHpTypeSelf",2,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4169cd;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1ee0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1ef8) = this;
  *(undefined4 *)(iVar1 + 0x1efc) = 0xf7;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4169e8;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffe2ffe9;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108886c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4169fd;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0xfec)),"NamePlateColorSelfBuddy",0xffe2ffe9,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416a0c;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1f00))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1f18) = this;
  *(undefined4 *)(iVar1 + 0x1f1c) = 0xf8;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416a27;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xff005d2a;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088884;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416a3f;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x80c)),"NamePlateEdgeSelfBuddy",0xff005d2a,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416a4e;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1f20))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1f38) = this;
  *(undefined4 *)(iVar1 + 0x1f3c) = 0xf9;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416a6c;
  F_00415690(((undefined1 *)(gen_frame + 0x80c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x3;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108889c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416a7f;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xf6c)),"NamePlateDispTypeSelfBuddy",0,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416a8e;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 8000))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1f58) = this;
  *(undefined4 *)(iVar1 + 0x1f5c) = 0xfa;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416aac;
  F_00415690(((undefined1 *)(gen_frame + 0xf6c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x3;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10888b8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416ac0;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x24c)),"NamePlateHpTypeSelfBuddy",2,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416acf;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1f60))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1f78) = this;
  *(undefined4 *)(iVar1 + 0x1f7c) = 0xfb;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416aed;
  F_00415690(((undefined1 *)(gen_frame + 0x24c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffe2ffe9;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10888d4;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416b05;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xf4c)),"NamePlateColorSelfPet",0xffe2ffe9,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416b14;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1f80))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1f98) = this;
  *(undefined4 *)(iVar1 + 0x1f9c) = 0xfc;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416b32;
  F_00415690(((undefined1 *)(gen_frame + 0xf4c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xff005d2a;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10888ec;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416b4a;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7cc)),"NamePlateEdgeSelfPet",0xff005d2a,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416b59;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1fa0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1fb8) = this;
  *(undefined4 *)(iVar1 + 0x1fbc) = 0xfd;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416b77;
  F_00415690(((undefined1 *)(gen_frame + 0x7cc)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x3;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088904;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416b8a;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xf0c)),"NamePlateDispTypeSelfPet",0,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416b99;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1fc0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1fd8) = this;
  *(undefined4 *)(iVar1 + 0x1fdc) = 0xfe;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416bb7;
  F_00415690(((undefined1 *)(gen_frame + 0xf0c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x3;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088920;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416bcb;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x40c)),"NamePlateHpTypeSelfPet",2,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416bda;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1fe0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1ff8) = this;
  *(undefined4 *)(iVar1 + 0x1ffc) = 0xff;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416bf8;
  F_00415690(((undefined1 *)(gen_frame + 0x40c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xfffeffe8;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088938;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416c10;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xecc)),"NamePlateColorParty",0xfffeffe8,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416c1f;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2000))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2018) = this;
  *(undefined4 *)(iVar1 + 0x201c) = 0x100;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416c3d;
  F_00415690(((undefined1 *)(gen_frame + 0xecc)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xff985008;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108894c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416c55;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x78c)),"NamePlateEdgeParty",0xff985008,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416c64;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2020))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2038) = this;
  *(undefined4 *)(iVar1 + 0x203c) = 0x101;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416c82;
  F_00415690(((undefined1 *)(gen_frame + 0x78c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x3;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088960;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416c95;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xe8c)),"NamePlateDispTypeParty",0,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416ca4;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2040))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2058) = this;
  *(undefined4 *)(iVar1 + 0x205c) = 0x102;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416cc2;
  F_00415690(((undefined1 *)(gen_frame + 0xe8c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x3;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088978;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416cd5;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x14c)),"NamePlateNameTypeParty",0,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416ce4;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2060))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2078) = this;
  *(undefined4 *)(iVar1 + 0x207c) = 0x103;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416d02;
  F_00415690(((undefined1 *)(gen_frame + 0x14c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x3;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088990;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416d16;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xe4c)),"NamePlateHpTypeParty",2,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416d25;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2080))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2098) = this;
  *(undefined4 *)(iVar1 + 0x209c) = 0x104;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416d43;
  F_00415690(((undefined1 *)(gen_frame + 0xe4c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x3;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10889a8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416d56;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x74c)),"NamePlateDispTypePartyPet",0,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416d65;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x20a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x20b8) = this;
  *(undefined4 *)(iVar1 + 0x20bc) = 0x105;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416d83;
  F_00415690(((undefined1 *)(gen_frame + 0x74c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x3;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10889c4;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416d97;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xe0c)),"NamePlateHpTypePartyPet",2,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416da6;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x20c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x20d8) = this;
  *(undefined4 *)(iVar1 + 0x20dc) = 0x106;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416dc4;
  F_00415690(((undefined1 *)(gen_frame + 0xe0c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xfff4d09c;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10889dc;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416ddc;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x3cc)),"NamePlateColorOther",0xfff4d09c,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416deb;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x21c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x21d8) = this;
  *(undefined4 *)(iVar1 + 0x21dc) = 0x10e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416e09;
  F_00415690(((undefined1 *)(gen_frame + 0x3cc)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xff4d3a15;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10889f0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416e21;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xdcc)),"NamePlateEdgeOther",0xff4d3a15,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416e30;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x21e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x21f8) = this;
  *(undefined4 *)(iVar1 + 0x21fc) = 0x10f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416e4e;
  F_00415690(((undefined1 *)(gen_frame + 0xdcc)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x3;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088a04;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416e61;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x70c)),"NamePlateDispTypeOther",0,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416e70;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2200))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2218) = this;
  *(undefined4 *)(iVar1 + 0x221c) = 0x110;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416e8e;
  F_00415690(((undefined1 *)(gen_frame + 0x70c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x3;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088a1c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416ea1;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xd8c)),"NamePlateNameTypeOther",0,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416eb0;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2220))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2238) = this;
  *(undefined4 *)(iVar1 + 0x223c) = 0x111;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416ece;
  F_00415690(((undefined1 *)(gen_frame + 0xd8c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x3;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088a34;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416ee2;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x20c)),"NamePlateHpTypeOther",2,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416ef1;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2240))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2258) = this;
  *(undefined4 *)(iVar1 + 0x225c) = 0x112;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416f0f;
  F_00415690(((undefined1 *)(gen_frame + 0x20c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x3;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088a4c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416f23;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xd4c)),"NamePlateDispTypeOtherPet",2,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416f32;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2260))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2278) = this;
  *(undefined4 *)(iVar1 + 0x227c) = 0x113;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416f50;
  F_00415690(((undefined1 *)(gen_frame + 0xd4c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x3;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088a68;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416f64;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x6cc)),"NamePlateHpTypeOtherPet",2,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416f73;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2280))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2298) = this;
  *(undefined4 *)(iVar1 + 0x229c) = 0x114;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416f91;
  F_00415690(((undefined1 *)(gen_frame + 0x6cc)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffb0f8ff;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088a80;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416fa9;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xd0c)),"NamePlateColorUnengagedEnemy",0xffb0f8ff,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416fb8;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x22a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x22b8) = this;
  *(undefined4 *)(iVar1 + 0x22bc) = 0x115;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x416fd6;
  F_00415690(((undefined1 *)(gen_frame + 0xd0c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xff004f63;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088aa0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x416fee;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x38c)),"NamePlateEdgeUnengagedEnemy",0xff004f63,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x416ffd;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x22c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x22d8) = this;
  *(undefined4 *)(iVar1 + 0x22dc) = 0x116;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41701b;
  F_00415690(((undefined1 *)(gen_frame + 0x38c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088abc;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41702f;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xccc)),"NamePlateDispTypeUnengagedEnemy",0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41703e;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x22e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x22f8) = this;
  *(undefined4 *)(iVar1 + 0x22fc) = 0x117;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41705c;
  F_00415690(((undefined1 *)(gen_frame + 0xccc)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088adc;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417071;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x68c)),"NamePlateHpTypeUnengagedEmemy",1,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417080;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2300))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2318) = this;
  *(undefined4 *)(iVar1 + 0x231c) = 0x118;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41709e;
  F_00415690(((undefined1 *)(gen_frame + 0x68c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffbfbdff;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088afc;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4170b6;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xc8c)),"NamePlateColorEngagedEnemy",0xffbfbdff,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4170c5;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2320))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2338) = this;
  *(undefined4 *)(iVar1 + 0x233c) = 0x119;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4170e3;
  F_00415690(((undefined1 *)(gen_frame + 0xc8c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xff0000a4;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088b18;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4170fb;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xcc)),"NamePlateEdgeEngagedEnemy",0xff0000a4,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41710a;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2340))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2358) = this;
  *(undefined4 *)(iVar1 + 0x235c) = 0x11a;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417128;
  F_00415690(((undefined1 *)(gen_frame + 0xcc)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088b34;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41713c;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xc4c)),"NamePlateDispTypeEngagedEnemy",0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41714b;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2360))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2378) = this;
  *(undefined4 *)(iVar1 + 0x237c) = 0x11b;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417169;
  F_00415690(((undefined1 *)(gen_frame + 0xc4c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088b54;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41717e;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x64c)),"NamePlateHpTypeEngagedEmemy",1,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41718d;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2380))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2398) = this;
  *(undefined4 *)(iVar1 + 0x239c) = 0x11c;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4171ab;
  F_00415690(((undefined1 *)(gen_frame + 0x64c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffffdcff;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088b70;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4171c3;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xc0c)),"NamePlateColorClaimedEnemy",0xffffdcff,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4171d2;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x23a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x23b8) = this;
  *(undefined4 *)(iVar1 + 0x23bc) = 0x11d;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4171f0;
  F_00415690(((undefined1 *)(gen_frame + 0xc0c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xff92298e;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088b8c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417208;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x34c)),"NamePlateEdgeClaimedEnemy",0xff92298e,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417217;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x23c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x23d8) = this;
  *(undefined4 *)(iVar1 + 0x23dc) = 0x11e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417235;
  F_00415690(((undefined1 *)(gen_frame + 0x34c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088ba8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417249;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xbcc)),"NamePlateDispTypeClaimedEnemy",0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417258;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x23e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x23f8) = this;
  *(undefined4 *)(iVar1 + 0x23fc) = 0x11f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417276;
  F_00415690(((undefined1 *)(gen_frame + 0xbcc)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088bc8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41728b;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x60c)),"NamePlateHpTypeClaimedEmemy",1,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41729a;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2400))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2418) = this;
  *(undefined4 *)(iVar1 + 0x241c) = 0x120;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4172b8;
  F_00415690(((undefined1 *)(gen_frame + 0x60c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffc8e0ff;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088be4;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4172d0;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xb8c)),"NamePlateColorUnclaimedEnemy",0xffc8e0ff,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4172df;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2420))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2438) = this;
  *(undefined4 *)(iVar1 + 0x243c) = 0x121;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4172fd;
  F_00415690(((undefined1 *)(gen_frame + 0xb8c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xff004080;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088c04;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417315;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x1cc)),"NamePlateEdgeUnclaimedEnemy",0xff004080,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417324;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2440))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2458) = this;
  *(undefined4 *)(iVar1 + 0x245c) = 0x122;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417342;
  F_00415690(((undefined1 *)(gen_frame + 0x1cc)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088c20;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417356;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xb4c)),"NamePlateDispTypeUnclaimedEnemy",0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417365;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2460))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2478) = this;
  *(undefined4 *)(iVar1 + 0x247c) = 0x123;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417383;
  F_00415690(((undefined1 *)(gen_frame + 0xb4c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088c40;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417398;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x5cc)),"NamePlateHpTypeUnclaimedEmemy",1,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4173a7;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2480))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2498) = this;
  *(undefined4 *)(iVar1 + 0x249c) = 0x124;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4173c5;
  F_00415690(((undefined1 *)(gen_frame + 0x5cc)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffe2ffe9;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088c60;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4173dd;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xb0c)),"NamePlateColorNpc",0xffe2ffe9,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4173ec;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x24a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x24b8) = this;
  *(undefined4 *)(iVar1 + 0x24bc) = 0x125;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41740a;
  F_00415690(((undefined1 *)(gen_frame + 0xb0c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xff005d2a;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088c74;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417422;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x30c)),"NamePlateEdgeNpc",0xff005d2a,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417431;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x24c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x24d8) = this;
  *(undefined4 *)(iVar1 + 0x24dc) = 0x126;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41744f;
  F_00415690(((undefined1 *)(gen_frame + 0x30c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088c88;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417463;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xacc)),"NamePlateDispTypeNpc",0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417472;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x24e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x24f8) = this;
  *(undefined4 *)(iVar1 + 0x24fc) = 0x127;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417490;
  F_00415690(((undefined1 *)(gen_frame + 0xacc)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088ca0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4174a5;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x58c)),"NamePlateHpTypeNpc",1,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4174b4;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2500))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2518) = this;
  *(undefined4 *)(iVar1 + 0x251c) = 0x128;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4174d2;
  F_00415690(((undefined1 *)(gen_frame + 0x58c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffffffff;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088cb4;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4174e7;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xa8c)),"NamePlateColorObject",0xffffffff,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4174f6;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2520))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2538) = this;
  *(undefined4 *)(iVar1 + 0x253c) = 0x129;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417514;
  F_00415690(((undefined1 *)(gen_frame + 0xa8c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xff000000;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088ccc;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41752c;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x10c)),"NamePlateEdgeObject",0xff000000,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41753b;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2540))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2558) = this;
  *(undefined4 *)(iVar1 + 0x255c) = 0x12a;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417559;
  F_00415690(((undefined1 *)(gen_frame + 0x10c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088ce0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41756d;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xa4c)),"NamePlateDispTypeObject",0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41757c;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2560))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2578) = this;
  *(undefined4 *)(iVar1 + 0x257c) = 299;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41759a;
  F_00415690(((undefined1 *)(gen_frame + 0xa4c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088cf8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4175af;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x54c)),"NamePlateHpTypeObject",1,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4175be;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2580))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2598) = this;
  *(undefined4 *)(iVar1 + 0x259c) = 300;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4175dc;
  F_00415690(((undefined1 *)(gen_frame + 0x54c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffffffff;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088d10;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4175f1;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xa0c)),"NamePlateColorMinion",0xffffffff,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417600;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x25a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x25b8) = this;
  *(undefined4 *)(iVar1 + 0x25bc) = 0x12d;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41761e;
  F_00415690(((undefined1 *)(gen_frame + 0xa0c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xff000000;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088d28;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417636;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x2cc)),"NamePlateEdgeMinion",0xff000000,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417645;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x25c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x25d8) = this;
  *(undefined4 *)(iVar1 + 0x25dc) = 0x12e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417663;
  F_00415690(((undefined1 *)(gen_frame + 0x2cc)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088d3c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417677;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x9cc)),"NamePlateDispTypeMinion",0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417686;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x25e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x25f8) = this;
  *(undefined4 *)(iVar1 + 0x25fc) = 0x12f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4176a4;
  F_00415690(((undefined1 *)(gen_frame + 0x9cc)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffe2ffe9;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088d54;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4176bc;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x50c)),"NamePlateColorOtherBuddy",0xffe2ffe9,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4176cb;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2600))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2618) = this;
  *(undefined4 *)(iVar1 + 0x261c) = 0x130;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4176e9;
  F_00415690(((undefined1 *)(gen_frame + 0x50c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xff005d2a;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088d70;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417701;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x98c)),"NamePlateEdgeOtherBuddy",0xff005d2a,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417710;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2620))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2638) = this;
  *(undefined4 *)(iVar1 + 0x263c) = 0x131;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41772e;
  F_00415690(((undefined1 *)(gen_frame + 0x98c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffe2ffe9;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088d88;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417746;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x18c)),"NamePlateColorOtherPet",0xffe2ffe9,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417755;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2640))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2658) = this;
  *(undefined4 *)(iVar1 + 0x265c) = 0x132;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417773;
  F_00415690(((undefined1 *)(gen_frame + 0x18c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xff005d2a;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088da0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41778b;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x94c)),"NamePlateEdgeOtherPet",0xff005d2a,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41779a;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2660))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2678) = this;
  *(undefined4 *)(iVar1 + 0x267c) = 0x133;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4177b8;
  F_00415690(((undefined1 *)(gen_frame + 0x94c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088db8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4177cd;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x4cc)),"NamePlateHpSizeType",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4177dc;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1e40))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1e58) = this;
  *(undefined4 *)(iVar1 + 0x1e5c) = 0xf2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4177fa;
  F_00415690(((undefined1 *)(gen_frame + 0x4cc)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088dcc;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41780e;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x90c)),"ActiveInfo",0,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41781d;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2680))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2698) = this;
  *(undefined4 *)(iVar1 + 0x269c) = 0x134;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41783b;
  F_00415690(((undefined1 *)(gen_frame + 0x90c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xfffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088dd8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417852;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x28c)),"PartyList",0,0,0xfffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417861;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x26a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x26b8) = this;
  *(undefined4 *)(iVar1 + 0x26bc) = 0x135;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41787f;
  F_00415690(((undefined1 *)(gen_frame + 0x28c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x5;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 5;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088de4;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417894;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x8cc)),"PartyListStatus",5,0,5);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4178a3;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x26c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x26d8) = this;
  *(undefined4 *)(iVar1 + 0x26dc) = 0x136;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4178c1;
  F_00415690(((undefined1 *)(gen_frame + 0x8cc)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xfffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088df4;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4178d8;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x48c)),"EnemyList",0,0,0xfffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4178e7;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2700))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2718) = this;
  *(undefined4 *)(iVar1 + 0x271c) = 0x138;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417905;
  F_00415690(((undefined1 *)(gen_frame + 0x48c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xfffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088e00;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41791c;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x88c)),"TargetInfo",0,0,0xfffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41792b;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2720))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2738) = this;
  *(undefined4 *)(iVar1 + 0x273c) = 0x139;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417949;
  F_00415690(((undefined1 *)(gen_frame + 0x88c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xfffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (*(undefined * PTR32 (*)[1])REFP(0x1088e0c));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417960;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x8c)),(*(undefined * PTR32 (*)[1])REFP(0x1088e0c)),0,0,0xfffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41796f;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2740))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2758) = this;
  *(undefined4 *)(iVar1 + 0x275c) = 0x13a;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41798d;
  F_00415690(((undefined1 *)(gen_frame + 0x8c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xfffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (*(undefined * PTR32 (*)[1])REFP(0x1088e10));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4179a4;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x84c)),(*(undefined * PTR32 (*)[1])REFP(0x1088e10)),0,0,0xfffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4179b3;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2760))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2778) = this;
  *(undefined4 *)(iVar1 + 0x277c) = 0x13b;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4179d1;
  F_00415690(((undefined1 *)(gen_frame + 0x84c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xfffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088e14;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4179e8;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x44c)),"PlayerInfo",0,0,0xfffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4179f7;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x27a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x27b8) = this;
  *(undefined4 *)(iVar1 + 0x27bc) = 0x13d;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417a15;
  F_00415690(((undefined1 *)(gen_frame + 0x44c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xfffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088e20;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417a29;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xfac)),"NaviMap",0,0,0xfffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417a38;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x27c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x27d8) = this;
  *(undefined4 *)(iVar1 + 0x27dc) = 0x13e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417a53;
  F_00415690(((undefined1 *)(gen_frame + 0xfac)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xfffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)&REFG(undefined, 0x1088e28);
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417a67;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xf8c)),&REFG(undefined, 0x1088e28),0,0,0xfffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417a76;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x27e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x27f8) = this;
  *(undefined4 *)(iVar1 + 0x27fc) = 0x13f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417a91;
  F_00415690(((undefined1 *)(gen_frame + 0xf8c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xfffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (*(undefined * PTR32 (*)[1])REFP(0x1088e30));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417aa5;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xfcc)),(*(undefined * PTR32 (*)[1])REFP(0x1088e30)),0,0,0xfffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417ab4;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2820))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2838) = this;
  *(undefined4 *)(iVar1 + 0x283c) = 0x141;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417acf;
  F_00415690(((undefined1 *)(gen_frame + 0xfcc)));
  F_0042cc20((gen_frame + 0xc),&REFG(undefined, 0x108814e),REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0xfcc)),"LogTabName2",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                       (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                       (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417b01;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x28a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x28b8) = this;
  *(undefined4 *)(iVar1 + 0x28bc) = 0x145;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417b1c;
  F_00415690(((undefined1 *)(gen_frame + 0xfcc)));
  F_0042cc20((gen_frame + 0xc),&REFG(undefined, 0x108814f),REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0xfcc)),"LogTabName3",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                       (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                       (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417b4d;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x28c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x28d8) = this;
  *(undefined4 *)(iVar1 + 0x28dc) = 0x146;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417b68;
  F_00415690(((undefined1 *)(gen_frame + 0xfcc)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x13;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088e4c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417b7c;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xf2c)),"LogTabFilter0",0,0,0x13);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417b8b;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x28e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x28f8) = this;
  *(undefined4 *)(iVar1 + 0x28fc) = 0x147;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417ba9;
  F_00415690(((undefined1 *)(gen_frame + 0xf2c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x13;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088e5c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417bbe;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xeec)),"LogTabFilter1",1,0,0x13);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417bcd;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2900))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2918) = this;
  *(undefined4 *)(iVar1 + 0x291c) = 0x148;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417beb;
  F_00415690(((undefined1 *)(gen_frame + 0xeec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x13;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088e6c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417c00;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xeac)),"LogTabFilter2",2,0,0x13);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417c0f;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2920))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2938) = this;
  *(undefined4 *)(iVar1 + 0x293c) = 0x149;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417c2d;
  F_00415690(((undefined1 *)(gen_frame + 0xeac)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x13;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 3;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088e7c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417c41;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xe6c)),"LogTabFilter3",3,0,0x13);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417c50;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2940))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2958) = this;
  *(undefined4 *)(iVar1 + 0x295c) = 0x14a;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417c6e;
  F_00415690(((undefined1 *)(gen_frame + 0xe6c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088e8c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417c82;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xe2c)),"ShopSell",0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417c91;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2a40))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2a58) = this;
  *(undefined4 *)(iVar1 + 0x2a5c) = 0x152;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417caf;
  F_00415690(((undefined1 *)(gen_frame + 0xe2c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xfff8f8f8;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088e98;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417cc7;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xdec)),"ColorSay",0xfff8f8f8,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417cd6;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2a60))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2a78) = this;
  *(undefined4 *)(iVar1 + 0x2a7c) = 0x153;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417cf4;
  F_00415690(((undefined1 *)(gen_frame + 0xdec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffffa666;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088ea4;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417d0c;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xdac)),"ColorShout",0xffffa666,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417d1b;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2a80))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2a98) = this;
  *(undefined4 *)(iVar1 + 0x2a9c) = 0x154;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417d39;
  F_00415690(((undefined1 *)(gen_frame + 0xdac)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffffb8e0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088eb0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417d51;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xd6c)),"ColorTell",0xffffb8e0,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417d60;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2aa0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2ab8) = this;
  *(undefined4 *)(iVar1 + 0x2abc) = 0x155;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417d7e;
  F_00415690(((undefined1 *)(gen_frame + 0xd6c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xff66e6ff;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088ebc;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417d96;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xd2c)),"ColorParty",0xff66e6ff,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417da5;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2ac0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2ad8) = this;
  *(undefined4 *)(iVar1 + 0x2adc) = 0x156;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417dc3;
  F_00415690(((undefined1 *)(gen_frame + 0xd2c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffd4ff7f;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088ec8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417ddb;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xcec)),"ColorLS1",0xffd4ff7f,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417dea;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2b00))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2b18) = this;
  *(undefined4 *)(iVar1 + 0x2b1c) = 0x158;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417e08;
  F_00415690(((undefined1 *)(gen_frame + 0xcec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffd4ff7f;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088ed4;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417e20;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xcac)),"ColorLS2",0xffd4ff7f,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417e2f;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2b20))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2b38) = this;
  *(undefined4 *)(iVar1 + 0x2b3c) = 0x159;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417e4d;
  F_00415690(((undefined1 *)(gen_frame + 0xcac)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffd4ff7f;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088ee0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417e65;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xc6c)),"ColorLS3",0xffd4ff7f,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417e74;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2b40))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2b58) = this;
  *(undefined4 *)(iVar1 + 0x2b5c) = 0x15a;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417e92;
  F_00415690(((undefined1 *)(gen_frame + 0xc6c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffd4ff7f;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088eec;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417eaa;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xc2c)),"ColorLS4",0xffd4ff7f,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417eb9;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2b60))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2b78) = this;
  *(undefined4 *)(iVar1 + 0x2b7c) = 0x15b;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417ed7;
  F_00415690(((undefined1 *)(gen_frame + 0xc2c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffd4ff7f;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088ef8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417eef;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xbec)),"ColorLS5",0xffd4ff7f,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417efe;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2b80))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2b98) = this;
  *(undefined4 *)(iVar1 + 0x2b9c) = 0x15c;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417f1c;
  F_00415690(((undefined1 *)(gen_frame + 0xbec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffd4ff7f;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088f04;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417f34;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xbac)),"ColorLS6",0xffd4ff7f,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417f43;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2ba0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2bb8) = this;
  *(undefined4 *)(iVar1 + 0x2bbc) = 0x15d;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417f61;
  F_00415690(((undefined1 *)(gen_frame + 0xbac)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffd4ff7f;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088f10;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417f79;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xb6c)),"ColorLS7",0xffd4ff7f,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417f88;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2bc0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2bd8) = this;
  *(undefined4 *)(iVar1 + 0x2bdc) = 0x15e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417fa6;
  F_00415690(((undefined1 *)(gen_frame + 0xb6c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffd4ff7f;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088f1c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x417fbe;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xb2c)),"ColorLS8",0xffd4ff7f,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x417fcd;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2be0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2bf8) = this;
  *(undefined4 *)(iVar1 + 0x2bfc) = 0x15f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x417feb;
  F_00415690(((undefined1 *)(gen_frame + 0xb2c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffacdce6;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088f28;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418003;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xaec)),"ColorFCompany",0xffacdce6,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418012;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2c00))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2c18) = this;
  *(undefined4 *)(iVar1 + 0x2c1c) = 0x160;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418030;
  F_00415690(((undefined1 *)(gen_frame + 0xaec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffbcfff0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088f38;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418048;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xaac)),"ColorEmoteUser",0xffbcfff0,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418057;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2c80))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2c98) = this;
  *(undefined4 *)(iVar1 + 0x2c9c) = 0x164;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418075;
  F_00415690(((undefined1 *)(gen_frame + 0xaac)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffbcfff0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088f48;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41808d;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xa6c)),"ColorEmote",0xffbcfff0,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41809c;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2ca0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2cb8) = this;
  *(undefined4 *)(iVar1 + 0x2cbc) = 0x165;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4180ba;
  F_00415690(((undefined1 *)(gen_frame + 0xa6c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffffff00;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088f54;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4180d2;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xa2c)),"ColorYell",0xffffff00,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4180e1;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2cc0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2cd8) = this;
  *(undefined4 *)(iVar1 + 0x2cdc) = 0x166;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4180ff;
  F_00415690(((undefined1 *)(gen_frame + 0xa2c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffff7f7f;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088f60;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418117;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x9ec)),"ColorAttackSuccess",0xffff7f7f,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418126;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2d40))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2d58) = this;
  *(undefined4 *)(iVar1 + 0x2d5c) = 0x16a;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418144;
  F_00415690(((undefined1 *)(gen_frame + 0x9ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffcccccc;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088f74;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41815c;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x9ac)),"ColorAttackFailure",0xffcccccc,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41816b;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2d60))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2d78) = this;
  *(undefined4 *)(iVar1 + 0x2d7c) = 0x16b;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418189;
  F_00415690(((undefined1 *)(gen_frame + 0x9ac)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffffffb2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088f88;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41819e;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x96c)),"ColorAction",0xffffffb2,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4181ad;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2d80))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2d98) = this;
  *(undefined4 *)(iVar1 + 0x2d9c) = 0x16c;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4181cb;
  F_00415690(((undefined1 *)(gen_frame + 0x96c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffffffb2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088f94;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4181e0;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x92c)),"ColorItem",0xffffffb2,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4181ef;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2da0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2db8) = this;
  *(undefined4 *)(iVar1 + 0x2dbc) = 0x16d;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41820d;
  F_00415690(((undefined1 *)(gen_frame + 0x92c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffd4ff7f;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088fa0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418225;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x8ec)),"ColorCureGive",0xffd4ff7f,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418234;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2dc0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2dd8) = this;
  *(undefined4 *)(iVar1 + 0x2ddc) = 0x16e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418252;
  F_00415690(((undefined1 *)(gen_frame + 0x8ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xff94c0ff;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088fb0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41826a;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x8ac)),"ColorBuffGive",0xff94c0ff,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418279;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2de0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2df8) = this;
  *(undefined4 *)(iVar1 + 0x2dfc) = 0x16f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418297;
  F_00415690(((undefined1 *)(gen_frame + 0x8ac)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffff8cc6;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088fc0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4182af;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x86c)),"ColorDebuffGive",0xffff8cc6,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4182be;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2e00))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2e18) = this;
  *(undefined4 *)(iVar1 + 0x2e1c) = 0x170;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4182dc;
  F_00415690(((undefined1 *)(gen_frame + 0x86c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffcccccc;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088fd0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4182f4;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x82c)),"ColorEcho",0xffcccccc,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418303;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2e20))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2e38) = this;
  *(undefined4 *)(iVar1 + 0x2e3c) = 0x171;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418321;
  F_00415690(((undefined1 *)(gen_frame + 0x82c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffcccccc;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088fdc;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418339;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"ColorSysMsg",0xffcccccc,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418348;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2e40))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2e58) = this;
  *(undefined4 *)(iVar1 + 0x2e5c) = 0x172;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418366;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffacdce6;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088fe8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41837e;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ac)),"ColorFCAnnounce",0xffacdce6,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41838d;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2e60))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2e78) = this;
  *(undefined4 *)(iVar1 + 0x2e7c) = 0x173;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4183ab;
  F_00415690(((undefined1 *)(gen_frame + 0x7ac)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffcccccc;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1088ff8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4183c3;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x76c)),"ColorSysBattle",0xffcccccc,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4183d2;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2e80))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2e98) = this;
  *(undefined4 *)(iVar1 + 0x2e9c) = 0x174;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4183f0;
  F_00415690(((undefined1 *)(gen_frame + 0x76c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffcccccc;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089008;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418408;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x72c)),"ColorSysGathering",0xffcccccc,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418417;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2ea0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2eb8) = this;
  *(undefined4 *)(iVar1 + 0x2ebc) = 0x175;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418435;
  F_00415690(((undefined1 *)(gen_frame + 0x72c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffff4c4c;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108901c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41844d;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x6ec)),"ColorSysErr",0xffff4c4c,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41845c;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2ec0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2ed8) = this;
  *(undefined4 *)(iVar1 + 0x2edc) = 0x176;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41847a;
  F_00415690(((undefined1 *)(gen_frame + 0x6ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffacd848;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089028;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418492;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x6ac)),"ColorNpcSay",0xffacd848,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4184a1;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 12000))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2ef8) = this;
  *(undefined4 *)(iVar1 + 0x2efc) = 0x177;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4184bf;
  F_00415690(((undefined1 *)(gen_frame + 0x6ac)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffffffb2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089034;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4184d4;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x66c)),"ColorItemNotice",0xffffffb2,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4184e3;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2f00))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2f18) = this;
  *(undefined4 *)(iVar1 + 0x2f1c) = 0x178;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418501;
  F_00415690(((undefined1 *)(gen_frame + 0x66c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffffde73;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089044;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418519;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x62c)),"ColorGrowup",0xffffde73,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418528;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2f20))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2f38) = this;
  *(undefined4 *)(iVar1 + 0x2f3c) = 0x179;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418546;
  F_00415690(((undefined1 *)(gen_frame + 0x62c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffc8c0a0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089050;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41855e;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x5ec)),"ColorLoot",0xffc8c0a0,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41856d;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2f40))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2f58) = this;
  *(undefined4 *)(iVar1 + 0x2f5c) = 0x17a;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41858b;
  F_00415690(((undefined1 *)(gen_frame + 0x5ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffe0c0f8;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108905c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4185a3;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x5ac)),"ColorCraft",0xffe0c0f8,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4185b2;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2f60))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2f78) = this;
  *(undefined4 *)(iVar1 + 0x2f7c) = 0x17b;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4185d0;
  F_00415690(((undefined1 *)(gen_frame + 0x5ac)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffe0c0f8;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089068;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4185e8;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x56c)),"ColorGathering",0xffe0c0f8,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4185f7;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2f80))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2f98) = this;
  *(undefined4 *)(iVar1 + 0x2f9c) = 0x17c;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418615;
  F_00415690(((undefined1 *)(gen_frame + 0x56c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xe;
  (*(undefined4 *)(gen_frame + 0xffc)) = 1;
  (*(undefined4 *)(gen_frame + 0x1004)) = 0;
  (*(undefined4 *)(gen_frame + 0x1008)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x41862b;
  uVar2 = F_00406bb0(0xe,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089078;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0xe;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0xff8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41863b;
  F_00c49908(uVar2,0xe,"<UI Settings>");
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0xfec));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418650;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xa20))),&(*(undefined4 *)(gen_frame + 0xfec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xa38) = this;
  *(undefined4 *)(iVar1 + 0xa3c) = 0x51;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41866b;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x3;
  (*(undefined4 *)(gen_frame + 0x58)) = 1;
  (*(undefined4 *)(gen_frame + 0x54)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089088;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418680;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"TimeMode",2,1,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41868f;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x16a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x16b8) = this;
  *(undefined4 *)(iVar1 + 0x16bc) = 0xb5;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4186ad;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089094;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x4186c1;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x4ec)),"Time12",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4186d0;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x16c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x16d8) = this;
  *(undefined4 *)(iVar1 + 0x16dc) = 0xb6;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4186ee;
  F_00415690(((undefined1 *)(gen_frame + 0x4ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108909c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418702;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x4ac)),"ActiveLS_H",0,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418711;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x16e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x16f8) = this;
  *(undefined4 *)(iVar1 + 0x16fc) = 0xb7;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41872f;
  F_00415690(((undefined1 *)(gen_frame + 0x4ac)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10890a8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418743;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x46c)),"ActiveLS_L",0,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418752;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1700))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1718) = this;
  *(undefined4 *)(iVar1 + 0x171c) = 0xb8;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418770;
  F_00415690(((undefined1 *)(gen_frame + 0x46c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x3ff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10890b4;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418787;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x42c)),"HotbarLock",0,0,0x3ff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418796;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1740))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1758) = this;
  *(undefined4 *)(iVar1 + 0x175c) = 0xba;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4187b4;
  F_00415690(((undefined1 *)(gen_frame + 0x42c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x17;
  (*(undefined4 *)(gen_frame + 0xffc)) = 1;
  (*(undefined4 *)(gen_frame + 0x1004)) = 0;
  (*(undefined4 *)(gen_frame + 0x1008)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x4187ca;
  uVar2 = F_00406bb0(0x17,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10890c0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x17;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0xff8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x4187da;
  F_00c49908(uVar2,0x17,"<Game Camera Settings>");
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0xfec));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4187ef;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xac0))),&(*(undefined4 *)(gen_frame + 0xfec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xad8) = this;
  *(undefined4 *)(iVar1 + 0xadc) = 0x56;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41880a;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x19;
  (*(undefined4 *)(gen_frame + 0xffc)) = 3;
  (*(undefined4 *)(gen_frame + 0x1000)) = 0;
  (*(undefined4 *)(gen_frame + 0x1004)) = 0;
  (*(undefined4 *)(gen_frame + 0x1008)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x418824;
  uVar2 = F_00406bb0(0x19,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10890d8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x19;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0xff8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x418834;
  F_00c49908(uVar2,0x19,"FirstPersonDefaultYAngle");
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0xfec));
  (*(undefined4 *)(gen_frame + 0xfec)) = 0;
  (*(undefined4 *)(gen_frame + 0xff0)) = 0;
  (*(undefined4 *)(gen_frame + 0xff4)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41885b;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xae0))),&(*(undefined4 *)(gen_frame + 0xfec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xaf8) = this;
  *(undefined4 *)(iVar1 + 0xafc) = 0x57;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418876;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x17;
  (*(undefined4 *)(gen_frame + 0xffc)) = 3;
  (*(undefined4 *)(gen_frame + 0x1000)) = REFG(float, 0x1088294);
  (*(undefined4 *)(gen_frame + 0x1004)) = 0;
  (*(undefined4 *)(gen_frame + 0x1008)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x418895;
  uVar2 = F_00406bb0(0x17,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10890f4;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x17;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0xff8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x4188a5;
  F_00c49908(uVar2,0x17,"FirstPersonDefaultZoom");
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0xfec));
  (*(undefined4 *)(gen_frame + 0xfec)) = REFG(float, 0x1088294);
  (*(undefined4 *)(gen_frame + 0xff0)) = REFG(float, 0x1088290);
  (*(undefined4 *)(gen_frame + 0xff4)) = REFG(float, 0x1088294);
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4188d9;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xb00))),&(*(undefined4 *)(gen_frame + 0xfec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xb18) = this;
  *(undefined4 *)(iVar1 + 0xb1c) = 0x58;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4188f4;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x1b;
  (*(undefined4 *)(gen_frame + 0xffc)) = 3;
  (*(undefined4 *)(gen_frame + 0x1000)) = REFG(float, 0x1088284);
  (*(undefined4 *)(gen_frame + 0x1004)) = 0;
  (*(undefined4 *)(gen_frame + 0x1008)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x418913;
  uVar2 = F_00406bb0(0x1b,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108910c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x1b;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0xff8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x418923;
  F_00c49908(uVar2,0x1b,"FirstPersonDefaultDistance");
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0xfec));
  (*(undefined4 *)(gen_frame + 0xfec)) = REFG(float, 0x1088284);
  (*(undefined4 *)(gen_frame + 0xff0)) = REFG(float, 0x1088284);
  (*(undefined4 *)(gen_frame + 0xff4)) = REFG(float, 0x1088284);
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41894f;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xb20))),&(*(undefined4 *)(gen_frame + 0xfec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xb38) = this;
  *(undefined4 *)(iVar1 + 0xb3c) = 0x59;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41896a;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x19;
  (*(undefined4 *)(gen_frame + 0xffc)) = 3;
  (*(undefined4 *)(gen_frame + 0x1000)) = REFG(float, 0x108b28c);
  (*(undefined4 *)(gen_frame + 0x1004)) = 0;
  (*(undefined4 *)(gen_frame + 0x1008)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x418989;
  uVar2 = F_00406bb0(0x19,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089128;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x19;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0xff8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x418999;
  F_00c49908(uVar2,0x19,"ThirdPersonDefaultYAngle");
  (*(undefined4 *)(gen_frame + 0xfec)) = REFG(float, 0x108b28c);
  (*(undefined4 *)(gen_frame + 0xff0)) = REFG(float, 0x108b288);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0xfec));
  (*(undefined4 *)(gen_frame + 0xff4)) = REFG(float, 0x108b284);
  (*(undefined4 *)(gen_frame + 0x58)) = 0x4189d5;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xb40))),&(*(undefined4 *)(gen_frame + 0xfec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xb58) = this;
  *(undefined4 *)(iVar1 + 0xb5c) = 0x5a;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4189f0;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x17;
  (*(undefined4 *)(gen_frame + 0xffc)) = 3;
  (*(undefined4 *)(gen_frame + 0x1000)) = REFG(float, 0x1088294);
  (*(undefined4 *)(gen_frame + 0x1004)) = 0;
  (*(undefined4 *)(gen_frame + 0x1008)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x418a0f;
  uVar2 = F_00406bb0(0x17,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089144;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x17;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0xff8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x418a1f;
  F_00c49908(uVar2,0x17,"ThirdPersonDefaultZoom");
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0xfec));
  (*(undefined4 *)(gen_frame + 0xfec)) = REFG(float, 0x1088294);
  (*(undefined4 *)(gen_frame + 0xff0)) = REFG(float, 0x1088290);
  (*(undefined4 *)(gen_frame + 0xff4)) = REFG(float, 0x1088294);
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418a53;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xb60))),&(*(undefined4 *)(gen_frame + 0xfec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xb78) = this;
  *(undefined4 *)(iVar1 + 0xb7c) = 0x5b;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418a6e;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x1b;
  (*(undefined4 *)(gen_frame + 0xffc)) = 3;
  (*(undefined4 *)(gen_frame + 0x1000)) = REFG(float, 0x1088280);
  (*(undefined4 *)(gen_frame + 0x1004)) = 0;
  (*(undefined4 *)(gen_frame + 0x1008)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x418a8d;
  uVar2 = F_00406bb0(0x1b,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108915c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x1b;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0xff8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x418a9d;
  F_00c49908(uVar2,0x1b,"ThirdPersonDefaultDistance");
  (*(undefined4 *)(gen_frame + 0xfec)) = REFG(float, 0x1088280);
  (*(undefined4 *)(gen_frame + 0xff0)) = REFG(float, 0x1088284);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0xfec));
  (*(undefined4 *)(gen_frame + 0xff4)) = REFG(float, 0x1088288);
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418ad9;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xb80))),&(*(undefined4 *)(gen_frame + 0xfec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xb98) = this;
  *(undefined4 *)(iVar1 + 0xb9c) = 0x5c;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418af4;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x14;
  (*(undefined4 *)(gen_frame + 0xffc)) = 3;
  (*(undefined4 *)(gen_frame + 0x1000)) = REFG(float, 0x108b28c);
  (*(undefined4 *)(gen_frame + 0x1004)) = 0;
  (*(undefined4 *)(gen_frame + 0x1008)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x418b13;
  uVar2 = F_00406bb0(0x14,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089178;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x14;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0xff8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x418b23;
  F_00c49908(uVar2,0x14,"LockonDefaultYAngle");
  (*(undefined4 *)(gen_frame + 0xfec)) = REFG(float, 0x108b28c);
  (*(undefined4 *)(gen_frame + 0xff0)) = REFG(float, 0x108b288);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0xfec));
  (*(undefined4 *)(gen_frame + 0xff4)) = REFG(float, 0x108b284);
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418b5f;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xba0))),&(*(undefined4 *)(gen_frame + 0xfec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 3000) = this;
  *(undefined4 *)(iVar1 + 0xbbc) = 0x5d;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418b7a;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 *)(gen_frame + 0xffc)) = 3;
  (*(undefined4 *)(gen_frame + 0x1000)) = REFG(float, 0x1088298);
  (*(undefined4 *)(gen_frame + 0x1004)) = 0;
  (*(undefined4 *)(gen_frame + 0x1008)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x12;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x418b99;
  uVar2 = F_00406bb0(0x12,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108918c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x12;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0xff8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x418ba9;
  F_00c49908(uVar2,0x12,"LockonDefaultZoom");
  (*(undefined4 *)(gen_frame + 0xfec)) = REFG(float, 0x1088298);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0xfec));
  (*(undefined4 *)(gen_frame + 0xff0)) = REFG(float, 0x1088290);
  (*(undefined4 *)(gen_frame + 0xff4)) = REFG(float, 0x1088294);
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418be5;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xbc0))),&(*(undefined4 *)(gen_frame + 0xfec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xbd8) = this;
  *(undefined4 *)(iVar1 + 0xbdc) = 0x5e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418c00;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x16;
  (*(undefined4 *)(gen_frame + 0xffc)) = 3;
  (*(undefined4 *)(gen_frame + 0x1000)) = REFG(float, 0x1088280);
  (*(undefined4 *)(gen_frame + 0x1004)) = 0;
  (*(undefined4 *)(gen_frame + 0x1008)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x418c1f;
  uVar2 = F_00406bb0(0x16,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10891a0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x16;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0xff8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x418c2f;
  F_00c49908(uVar2,0x16,"LockonDefaultDistance");
  (*(undefined4 *)(gen_frame + 0xfec)) = REFG(float, 0x1088280);
  (*(undefined4 *)(gen_frame + 0xff0)) = REFG(float, 0x1088284);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0xfec));
  (*(undefined4 *)(gen_frame + 0xff4)) = REFG(float, 0x1088288);
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418c6b;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xbe0))),&(*(undefined4 *)(gen_frame + 0xfec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xbf8) = this;
  *(undefined4 *)(iVar1 + 0xbfc) = 0x5f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418c86;
  F_00415690(&(*(undefined4 *)(gen_frame + 0xfec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10891b8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418c9b;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x3ec)),"CameraProductionOfAction",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418caa;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xde0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xdf8) = this;
  *(undefined4 *)(iVar1 + 0xdfc) = 0x6f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418cc8;
  F_00415690(((undefined1 *)(gen_frame + 0x3ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10891d4;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418cdd;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x3ac)),"FPSCameraInterpolationType",1,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418cec;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xe00))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xe18) = this;
  *(undefined4 *)(iVar1 + 0xe1c) = 0x70;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418d0a;
  F_00415690(((undefined1 *)(gen_frame + 0x3ac)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10891f0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418d1e;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x36c)),"FPSCameraVerticalInterpolation",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418d2d;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xe20))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xe38) = this;
  *(undefined4 *)(iVar1 + 0xe3c) = 0x71;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418d4b;
  F_00415690(((undefined1 *)(gen_frame + 0x36c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089210;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418d5f;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x32c)),"FootEffect",0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418d6e;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1620))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1638) = this;
  *(undefined4 *)(iVar1 + 0x163c) = 0xb1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418d8c;
  F_00415690(((undefined1 *)(gen_frame + 0x32c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108921c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418da0;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x2ec)),"BattleEffectSelf",0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418daf;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x600))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x618) = this;
  *(undefined4 *)(iVar1 + 0x61c) = 0x30;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418dcd;
  F_00415690(((undefined1 *)(gen_frame + 0x2ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089230;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418de1;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x2ac)),"BattleEffectParty",0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418df0;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x620))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x638) = this;
  *(undefined4 *)(iVar1 + 0x63c) = 0x31;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418e0e;
  F_00415690(((undefined1 *)(gen_frame + 0x2ac)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089244;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418e22;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x26c)),"BattleEffectOther",0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418e31;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x640))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x658) = this;
  *(undefined4 *)(iVar1 + 0x65c) = 0x32;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418e4f;
  F_00415690(((undefined1 *)(gen_frame + 0x26c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x3;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089258;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418e62;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x22c)),"LogNameType",0,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418e71;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x29a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x29b8) = this;
  *(undefined4 *)(iVar1 + 0x29bc) = 0x14d;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418e8f;
  F_00415690(((undefined1 *)(gen_frame + 0x22c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x14;
  (*(undefined4 *)(gen_frame + 0x58)) = 0xc;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xc;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089264;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418ea5;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x1ec)),"LogFontSize",0xc,0xc,0x14);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418eb4;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2880))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2898) = this;
  *(undefined4 *)(iVar1 + 0x289c) = 0x144;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418ed2;
  F_00415690(((undefined1 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089270;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418ee6;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x1ac)),"LogTimeDisp",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418ef5;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x29c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x29d8) = this;
  *(undefined4 *)(iVar1 + 0x29dc) = 0x14e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418f13;
  F_00415690(((undefined1 *)(gen_frame + 0x1ac)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108927c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418f27;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x16c)),"LogTimeSettingType",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418f36;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x29e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x29f8) = this;
  *(undefined4 *)(iVar1 + 0x29fc) = 0x14f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418f54;
  F_00415690(((undefined1 *)(gen_frame + 0x16c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089290;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418f68;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x12c)),"LogTimeDispType",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418f77;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2a00))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2a18) = this;
  *(undefined4 *)(iVar1 + 0x2a1c) = 0x150;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418f95;
  F_00415690(((undefined1 *)(gen_frame + 0x12c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10892a0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418faa;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xec)),"IsLogTell",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418fb9;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2a20))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2a38) = this;
  *(undefined4 *)(iVar1 + 0x2a3c) = 0x151;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x418fd7;
  F_00415690(((undefined1 *)(gen_frame + 0xec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10892ac;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x418feb;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xac)),"LogTell",0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x418ffa;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2840))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2858) = this;
  *(undefined4 *)(iVar1 + 0x285c) = 0x142;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x419018;
  F_00415690(((undefined1 *)(gen_frame + 0xac)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x10892b4;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41902d;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x6c)),"LogChatFilter",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41903c;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2960))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2978) = this;
  *(undefined4 *)(iVar1 + 0x297c) = 0x14b;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41905a;
  uVar2 = F_00415690(((undefined1 *)(gen_frame + 0x6c)));
  return uVar2;
}

/* ref: FUN_00419070 */
uint F_00419070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x419070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  int iVar1;
  uint uVar2;
  undefined1 * this_00;
  
  (*(undefined4 *)(gen_frame + 0x7dc)) = 1;
  (*(undefined4 *)(gen_frame + 0x7e4)) = 0;
  (*(undefined4 *)(gen_frame + 0x7e8)) = 0;
  uVar2 = F_00406bb0(0x14,0,0);
  (*(uint *)(gen_frame + 0x7d8)) = uVar2;
  F_00c49908(uVar2,0x14,"<Charcter Settings>");
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xa40))),&(*(undefined4 *)(gen_frame + 0x7cc)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xa58) = this;
  *(undefined4 *)(iVar1 + 0xa5c) = 0x52;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x7cc)));
  if (param_1 == 0) {
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x3ac)),"MoveMode",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x15e0))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x15f8) = this;
    *(undefined4 *)(iVar1 + 0x15fc) = 0xaf;
    F_00415690(((undefined1 *)(gen_frame + 0x3ac)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x56c)),"DirectChat",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2980))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x2998) = this;
    *(undefined4 *)(iVar1 + 0x299c) = 0x14c;
    F_00415690(((undefined1 *)(gen_frame + 0x56c)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x46c)),"AutoLockOn",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xee0))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0xef8) = this;
    *(undefined4 *)(iVar1 + 0xefc) = 0x77;
    F_00415690(((undefined1 *)(gen_frame + 0x46c)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"CircleBattleModeAutoChange",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xf00))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0xf18) = this;
    *(undefined4 *)(iVar1 + 0xf1c) = 0x78;
    F_00415690(((undefined1 *)(gen_frame + 0x52c)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x6cc)),"DetailTrackingType",0,0,2);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3220))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x3238) = this;
    *(undefined4 *)(iVar1 + 0x323c) = 0x191;
    F_00415690(((undefined1 *)(gen_frame + 0x6cc)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x68c)),"HotbarDisp",3,0,0x3ff);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1720))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x1738) = this;
    *(undefined4 *)(iVar1 + 0x173c) = 0xb9;
    F_00415690(((undefined1 *)(gen_frame + 0x68c)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x64c)),"HotbarNoneSlotDisp01",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1780))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x1798) = this;
    *(undefined4 *)(iVar1 + 0x179c) = 0xbc;
    F_00415690(((undefined1 *)(gen_frame + 0x64c)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x60c)),"HotbarNoneSlotDisp02",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x17a0))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x17b8) = this;
    *(undefined4 *)(iVar1 + 0x17bc) = 0xbd;
    F_00415690(((undefined1 *)(gen_frame + 0x60c)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x5cc)),"HotbarNoneSlotDisp03",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x17c0))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x17d8) = this;
    *(undefined4 *)(iVar1 + 0x17dc) = 0xbe;
    F_00415690(((undefined1 *)(gen_frame + 0x5cc)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x58c)),"HotbarNoneSlotDisp04",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x17e0))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x17f8) = this;
    *(undefined4 *)(iVar1 + 0x17fc) = 0xbf;
    F_00415690(((undefined1 *)(gen_frame + 0x58c)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x54c)),"HotbarNoneSlotDisp05",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1800))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x1818) = this;
    *(undefined4 *)(iVar1 + 0x181c) = 0xc0;
    F_00415690(((undefined1 *)(gen_frame + 0x54c)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x50c)),"HotbarNoneSlotDisp06",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1820))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x1838) = this;
    *(undefined4 *)(iVar1 + 0x183c) = 0xc1;
    F_00415690(((undefined1 *)(gen_frame + 0x50c)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x4cc)),"HotbarNoneSlotDisp07",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1840))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x1858) = this;
    *(undefined4 *)(iVar1 + 0x185c) = 0xc2;
    F_00415690(((undefined1 *)(gen_frame + 0x4cc)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ac)),"HotbarNoneSlotDisp08",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1860))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x1878) = this;
    *(undefined4 *)(iVar1 + 0x187c) = 0xc3;
    F_00415690(((undefined1 *)(gen_frame + 0x7ac)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x44c)),"HotbarNoneSlotDisp09",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1880))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x1898) = this;
    *(undefined4 *)(iVar1 + 0x189c) = 0xc4;
    F_00415690(((undefined1 *)(gen_frame + 0x44c)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x78c)),"HotbarNoneSlotDisp10",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x18a0))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x18b8) = this;
    *(undefined4 *)(iVar1 + 0x18bc) = 0xc5;
    F_00415690(((undefined1 *)(gen_frame + 0x78c)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x74c)),"MainCommandType",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3360))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x3378) = this;
    *(undefined4 *)(iVar1 + 0x337c) = 0x19b;
    F_00415690(((undefined1 *)(gen_frame + 0x74c)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"MainCommandDisp",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3380))),uVar2);
    this_00 = ((undefined1 *)(gen_frame + 0x7ec));
  }
  else {
    if (param_1 != 1) goto LAB_004199f9;
    uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x7cc)),"MoveMode",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x15e0))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x15f8) = this;
    *(undefined4 *)(iVar1 + 0x15fc) = 0xaf;
    F_00415690(&(*(undefined4 *)(gen_frame + 0x7cc)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x48c)),"DirectChat",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2980))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x2998) = this;
    *(undefined4 *)(iVar1 + 0x299c) = 0x14c;
    F_00415690(((undefined1 *)(gen_frame + 0x48c)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x70c)),"AutoLockOn",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xee0))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0xef8) = this;
    *(undefined4 *)(iVar1 + 0xefc) = 0x77;
    F_00415690(((undefined1 *)(gen_frame + 0x70c)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x76c)),"CircleBattleModeAutoChange",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xf00))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0xf18) = this;
    *(undefined4 *)(iVar1 + 0xf1c) = 0x78;
    F_00415690(((undefined1 *)(gen_frame + 0x76c)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x40c)),"DetailTrackingType",1,0,2);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3220))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x3238) = this;
    *(undefined4 *)(iVar1 + 0x323c) = 0x191;
    F_00415690(((undefined1 *)(gen_frame + 0x40c)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x72c)),"HotbarDisp",0,0,0x3ff);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1720))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x1738) = this;
    *(undefined4 *)(iVar1 + 0x173c) = 0xb9;
    F_00415690(((undefined1 *)(gen_frame + 0x72c)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x3cc)),"HotbarNoneSlotDisp01",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1780))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x1798) = this;
    *(undefined4 *)(iVar1 + 0x179c) = 0xbc;
    F_00415690(((undefined1 *)(gen_frame + 0x3cc)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x6ec)),"HotbarNoneSlotDisp02",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x17a0))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x17b8) = this;
    *(undefined4 *)(iVar1 + 0x17bc) = 0xbd;
    F_00415690(((undefined1 *)(gen_frame + 0x6ec)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x38c)),"HotbarNoneSlotDisp03",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x17c0))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x17d8) = this;
    *(undefined4 *)(iVar1 + 0x17dc) = 0xbe;
    F_00415690(((undefined1 *)(gen_frame + 0x38c)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x6ac)),"HotbarNoneSlotDisp04",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x17e0))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x17f8) = this;
    *(undefined4 *)(iVar1 + 0x17fc) = 0xbf;
    F_00415690(((undefined1 *)(gen_frame + 0x6ac)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x3ec)),"HotbarNoneSlotDisp05",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1800))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x1818) = this;
    *(undefined4 *)(iVar1 + 0x181c) = 0xc0;
    F_00415690(((undefined1 *)(gen_frame + 0x3ec)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x66c)),"HotbarNoneSlotDisp06",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1820))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x1838) = this;
    *(undefined4 *)(iVar1 + 0x183c) = 0xc1;
    F_00415690(((undefined1 *)(gen_frame + 0x66c)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x4ec)),"HotbarNoneSlotDisp07",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1840))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x1858) = this;
    *(undefined4 *)(iVar1 + 0x185c) = 0xc2;
    F_00415690(((undefined1 *)(gen_frame + 0x4ec)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x62c)),"HotbarNoneSlotDisp08",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1860))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x1878) = this;
    *(undefined4 *)(iVar1 + 0x187c) = 0xc3;
    F_00415690(((undefined1 *)(gen_frame + 0x62c)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x42c)),"HotbarNoneSlotDisp09",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1880))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x1898) = this;
    *(undefined4 *)(iVar1 + 0x189c) = 0xc4;
    F_00415690(((undefined1 *)(gen_frame + 0x42c)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x5ec)),"HotbarNoneSlotDisp10",0,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x18a0))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x18b8) = this;
    *(undefined4 *)(iVar1 + 0x18bc) = 0xc5;
    F_00415690(((undefined1 *)(gen_frame + 0x5ec)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x4ac)),"MainCommandType",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3360))),uVar2);
    iVar1 = *(int *)((int)this + 0x10);
    *(undefined * PTR32 *)(iVar1 + 0x3378) = this;
    *(undefined4 *)(iVar1 + 0x337c) = 0x19b;
    F_00415690(((undefined1 *)(gen_frame + 0x4ac)));
    uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x5ac)),"MainCommandDisp",1,0,1);
    F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3380))),uVar2);
    this_00 = ((undefined1 *)(gen_frame + 0x5ac));
  }
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3398) = this;
  *(undefined4 *)(iVar1 + 0x339c) = 0x19c;
  F_00415690(this_00);
LAB_004199f9: ;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"PadFpsXReverse",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xce0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xcf8) = this;
  *(undefined4 *)(iVar1 + 0xcfc) = 0x67;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"PadFpsYReverse",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xd00))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xd18) = this;
  *(undefined4 *)(iVar1 + 0xd1c) = 0x68;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"PadTpsXReverse",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xd20))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xd38) = this;
  *(undefined4 *)(iVar1 + 0xd3c) = 0x69;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"PadTpsYReverse",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xd40))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xd58) = this;
  *(undefined4 *)(iVar1 + 0xd5c) = 0x6a;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"MouseFpsXReverse",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xd60))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xd78) = this;
  *(undefined4 *)(iVar1 + 0xd7c) = 0x6b;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"MouseFpsYReverse",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xd80))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xd98) = this;
  *(undefined4 *)(iVar1 + 0xd9c) = 0x6c;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"MouseTpsXReverse",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xda0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xdb8) = this;
  *(undefined4 *)(iVar1 + 0xdbc) = 0x6d;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"MouseTpsYReverse",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xdc0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xdd8) = this;
  *(undefined4 *)(iVar1 + 0xddc) = 0x6e;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"KeyboardCameraInterpolationType",0,0,2);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc20))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xc38) = this;
  *(undefined4 *)(iVar1 + 0xc3c) = 0x61;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"KeyboardCameraVerticalInterpolation",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc40))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xc58) = this;
  *(undefined4 *)(iVar1 + 0xc5c) = 0x62;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"FpsCameraInterpolationType",0,0,2);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xe00))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xe18) = this;
  *(undefined4 *)(iVar1 + 0xe1c) = 0x70;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"FpsCameraVerticalInterpolation",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xe20))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xe38) = this;
  *(undefined4 *)(iVar1 + 0xe3c) = 0x71;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"AutoChangePointOfView",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc00))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xc18) = this;
  *(undefined4 *)(iVar1 + 0xc1c) = 0x60;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  (*(undefined4 *)(gen_frame + 0x7dc)) = 3;
  (*(undefined4 *)(gen_frame + 0x7e0)) = REFG(float, 0x1088068);
  (*(undefined4 *)(gen_frame + 0x7e4)) = 0;
  (*(undefined4 *)(gen_frame + 0x7e8)) = 0;
  uVar2 = F_00406bb0(0xe,0,0);
  (*(uint *)(gen_frame + 0x7d8)) = uVar2;
  F_00c49908(uVar2,0xe,"KeyboardSpeed");
  (*(undefined4 *)(gen_frame + 0x7cc)) = REFG(float, 0x1088068);
  (*(undefined4 *)(gen_frame + 0x7d0)) = 0;
  (*(undefined4 *)(gen_frame + 0x7d4)) = REFG(float, 0x1087f04);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc80))),&(*(undefined4 *)(gen_frame + 0x7cc)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xc98) = this;
  *(undefined4 *)(iVar1 + 0xc9c) = 100;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x7cc)));
  (*(undefined4 *)(gen_frame + 0x7dc)) = 3;
  (*(undefined4 *)(gen_frame + 0x7e0)) = REFG(float, 0x1088068);
  (*(undefined4 *)(gen_frame + 0x7e4)) = 0;
  (*(undefined4 *)(gen_frame + 0x7e8)) = 0;
  uVar2 = F_00406bb0(9,0,0);
  (*(uint *)(gen_frame + 0x7d8)) = uVar2;
  F_00c49908(uVar2,9,"PadSpeed");
  (*(undefined4 *)(gen_frame + 0x7cc)) = REFG(float, 0x1088068);
  (*(undefined4 *)(gen_frame + 0x7d0)) = 0;
  (*(undefined4 *)(gen_frame + 0x7d4)) = REFG(float, 0x1087f04);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xca0))),&(*(undefined4 *)(gen_frame + 0x7cc)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xcb8) = this;
  *(undefined4 *)(iVar1 + 0xcbc) = 0x65;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x7cc)));
  (*(undefined4 *)(gen_frame + 0x7dc)) = 3;
  (*(undefined4 *)(gen_frame + 0x7e0)) = 0;
  (*(undefined4 *)(gen_frame + 0x7e4)) = 0;
  (*(undefined4 *)(gen_frame + 0x7e8)) = 0;
  uVar2 = F_00406bb0(0xb,0,0);
  (*(uint *)(gen_frame + 0x7d8)) = uVar2;
  F_00c49908(uVar2,0xb,"TiltOffset");
  (*(undefined4 *)(gen_frame + 0x7cc)) = 0;
  (*(undefined4 *)(gen_frame + 0x7d0)) = REFG(float, 0x10882a4);
  (*(undefined4 *)(gen_frame + 0x7d4)) = REFG(float, 0x10882a0);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc60))),&(*(undefined4 *)(gen_frame + 0x7cc)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xc78) = this;
  *(undefined4 *)(iVar1 + 0xc7c) = 99;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x7cc)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"AutoFaceTargetOnAction",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xe60))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xe78) = this;
  *(undefined4 *)(iVar1 + 0xe7c) = 0x73;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"TargetCircleType",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1560))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1578) = this;
  *(undefined4 *)(iVar1 + 0x157c) = 0xab;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"TargetLineType",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1580))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1598) = this;
  *(undefined4 *)(iVar1 + 0x159c) = 0xac;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"LinkLineType",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x15a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x15b8) = this;
  *(undefined4 *)(iVar1 + 0x15bc) = 0xad;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"CircleClickIsActive",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1100))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1118) = this;
  *(undefined4 *)(iVar1 + 0x111c) = 0x88;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"CircleClickNonPartyPc",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1120))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1138) = this;
  *(undefined4 *)(iVar1 + 0x113c) = 0x89;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"CircleClickParty",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1140))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1158) = this;
  *(undefined4 *)(iVar1 + 0x115c) = 0x8a;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"CircleClickEnemy",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1160))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1178) = this;
  *(undefined4 *)(iVar1 + 0x117c) = 0x8b;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"CircleClickAggro",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1180))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1198) = this;
  *(undefined4 *)(iVar1 + 0x119c) = 0x8c;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"CircleClickNpcOrObject",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x11a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x11b8) = this;
  *(undefined4 *)(iVar1 + 0x11bc) = 0x8d;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"CircleClickMinion",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x11c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x11d8) = this;
  *(undefined4 *)(iVar1 + 0x11dc) = 0x8e;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"CircleIsCustom",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xf20))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xf38) = this;
  *(undefined4 *)(iVar1 + 0xf3c) = 0x79;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"CircleSwordDrawnIsActive",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xf40))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xf58) = this;
  *(undefined4 *)(iVar1 + 0xf5c) = 0x7a;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"CircleSwordDrawnNonPartyPc",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xf60))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xf78) = this;
  *(undefined4 *)(iVar1 + 0xf7c) = 0x7b;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"CircleSwordDrawnParty",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xf80))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xf98) = this;
  *(undefined4 *)(iVar1 + 0xf9c) = 0x7c;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"CircleSwordDrawnEnemy",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 4000))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xfb8) = this;
  *(undefined4 *)(iVar1 + 0xfbc) = 0x7d;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"CircleSwordDrawnAggro",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xfc0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xfd8) = this;
  *(undefined4 *)(iVar1 + 0xfdc) = 0x7e;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"CircleSwordDrawnNpcOrObject",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xfe0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xff8) = this;
  *(undefined4 *)(iVar1 + 0xffc) = 0x7f;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"CircleSwordDrawnMinion",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1000))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1018) = this;
  *(undefined4 *)(iVar1 + 0x101c) = 0x80;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ec)),"CircleSheathedIsActive",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1020))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1038) = this;
  *(undefined4 *)(iVar1 + 0x103c) = 0x81;
  F_00415690(((undefined1 *)(gen_frame + 0x7ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x74c)),"CircleSheathedNonPartyPc",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1040))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1058) = this;
  *(undefined4 *)(iVar1 + 0x105c) = 0x82;
  F_00415690(((undefined1 *)(gen_frame + 0x74c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x78c)),"CircleSheathedParty",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1060))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1078) = this;
  *(undefined4 *)(iVar1 + 0x107c) = 0x83;
  F_00415690(((undefined1 *)(gen_frame + 0x78c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x44c)),"CircleSheathedEnemy",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1080))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1098) = this;
  *(undefined4 *)(iVar1 + 0x109c) = 0x84;
  F_00415690(((undefined1 *)(gen_frame + 0x44c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x7ac)),"CircleSheathedAggro",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x10b8) = this;
  *(undefined4 *)(iVar1 + 0x10bc) = 0x85;
  F_00415690(((undefined1 *)(gen_frame + 0x7ac)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x4cc)),"CircleSheathedNpcOrObject",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x10d8) = this;
  *(undefined4 *)(iVar1 + 0x10dc) = 0x86;
  F_00415690(((undefined1 *)(gen_frame + 0x4cc)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x50c)),"CircleSheathedMinion",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x10f8) = this;
  *(undefined4 *)(iVar1 + 0x10fc) = 0x87;
  F_00415690(((undefined1 *)(gen_frame + 0x50c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x54c)),"CircleXButtonIsActive",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x11e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x11f8) = this;
  *(undefined4 *)(iVar1 + 0x11fc) = 0x8f;
  F_00415690(((undefined1 *)(gen_frame + 0x54c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x58c)),"CircleXButtonNonPartyPc",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1200))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1218) = this;
  *(undefined4 *)(iVar1 + 0x121c) = 0x90;
  F_00415690(((undefined1 *)(gen_frame + 0x58c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x5cc)),"CircleXButtonParty",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1220))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1238) = this;
  *(undefined4 *)(iVar1 + 0x123c) = 0x91;
  F_00415690(((undefined1 *)(gen_frame + 0x5cc)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x60c)),"CircleXButtonEnemy",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1240))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1258) = this;
  *(undefined4 *)(iVar1 + 0x125c) = 0x92;
  F_00415690(((undefined1 *)(gen_frame + 0x60c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x64c)),"CircleXButtonAggro",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1260))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1278) = this;
  *(undefined4 *)(iVar1 + 0x127c) = 0x93;
  F_00415690(((undefined1 *)(gen_frame + 0x64c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x68c)),"CircleXButtonNpcOrObject",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1280))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1298) = this;
  *(undefined4 *)(iVar1 + 0x129c) = 0x94;
  F_00415690(((undefined1 *)(gen_frame + 0x68c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x6cc)),"CircleXButtonMinion",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x12a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x12b8) = this;
  *(undefined4 *)(iVar1 + 0x12bc) = 0x95;
  F_00415690(((undefined1 *)(gen_frame + 0x6cc)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"CircleYButtonIsActive",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x12c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x12d8) = this;
  *(undefined4 *)(iVar1 + 0x12dc) = 0x96;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x46c)),"CircleYButtonNonPartyPc",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x12e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x12f8) = this;
  *(undefined4 *)(iVar1 + 0x12fc) = 0x97;
  F_00415690(((undefined1 *)(gen_frame + 0x46c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x56c)),"CircleYButtonParty",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1300))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1318) = this;
  *(undefined4 *)(iVar1 + 0x131c) = 0x98;
  F_00415690(((undefined1 *)(gen_frame + 0x56c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x3ac)),"CircleYButtonEnemy",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1320))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1338) = this;
  *(undefined4 *)(iVar1 + 0x133c) = 0x99;
  F_00415690(((undefined1 *)(gen_frame + 0x3ac)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x5ac)),"CircleYButtonAggro",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1340))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1358) = this;
  *(undefined4 *)(iVar1 + 0x135c) = 0x9a;
  F_00415690(((undefined1 *)(gen_frame + 0x5ac)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x4ac)),"CircleYButtonNpcOrObject",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1360))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1378) = this;
  *(undefined4 *)(iVar1 + 0x137c) = 0x9b;
  F_00415690(((undefined1 *)(gen_frame + 0x4ac)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x5ec)),"CircleYButtonMinion",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1380))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1398) = this;
  *(undefined4 *)(iVar1 + 0x139c) = 0x9c;
  F_00415690(((undefined1 *)(gen_frame + 0x5ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x42c)),"CircleBButtonIsActive",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x13a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x13b8) = this;
  *(undefined4 *)(iVar1 + 0x13bc) = 0x9d;
  F_00415690(((undefined1 *)(gen_frame + 0x42c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x62c)),"CircleBButtonNonPartyPc",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x13c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x13d8) = this;
  *(undefined4 *)(iVar1 + 0x13dc) = 0x9e;
  F_00415690(((undefined1 *)(gen_frame + 0x62c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x4ec)),"CircleBButtonParty",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x13e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x13f8) = this;
  *(undefined4 *)(iVar1 + 0x13fc) = 0x9f;
  F_00415690(((undefined1 *)(gen_frame + 0x4ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x66c)),"CircleBButtonEnemy",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1400))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1418) = this;
  *(undefined4 *)(iVar1 + 0x141c) = 0xa0;
  F_00415690(((undefined1 *)(gen_frame + 0x66c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x3ec)),"CircleBButtonAggro",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1420))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1438) = this;
  *(undefined4 *)(iVar1 + 0x143c) = 0xa1;
  F_00415690(((undefined1 *)(gen_frame + 0x3ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x6ac)),"CircleBButtonNpcOrObject",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1440))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1458) = this;
  *(undefined4 *)(iVar1 + 0x145c) = 0xa2;
  F_00415690(((undefined1 *)(gen_frame + 0x6ac)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x38c)),"CircleBButtonMinion",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1460))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1478) = this;
  *(undefined4 *)(iVar1 + 0x147c) = 0xa3;
  F_00415690(((undefined1 *)(gen_frame + 0x38c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x6ec)),"CircleAButtonIsActive",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1480))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1498) = this;
  *(undefined4 *)(iVar1 + 0x149c) = 0xa4;
  F_00415690(((undefined1 *)(gen_frame + 0x6ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x3cc)),"CircleAButtonNonPartyPc",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x14a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x14b8) = this;
  *(undefined4 *)(iVar1 + 0x14bc) = 0xa5;
  F_00415690(((undefined1 *)(gen_frame + 0x3cc)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x72c)),"CircleAButtonParty",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x14c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x14d8) = this;
  *(undefined4 *)(iVar1 + 0x14dc) = 0xa6;
  F_00415690(((undefined1 *)(gen_frame + 0x72c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x40c)),"CircleAButtonEnemy",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x14e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x14f8) = this;
  *(undefined4 *)(iVar1 + 0x14fc) = 0xa7;
  F_00415690(((undefined1 *)(gen_frame + 0x40c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x76c)),"CircleAButtonAggro",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1500))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1518) = this;
  *(undefined4 *)(iVar1 + 0x151c) = 0xa8;
  F_00415690(((undefined1 *)(gen_frame + 0x76c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x70c)),"CircleAButtonNpcOrObject",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1520))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1538) = this;
  *(undefined4 *)(iVar1 + 0x153c) = 0xa9;
  F_00415690(((undefined1 *)(gen_frame + 0x70c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x48c)),"CircleAButtonMinion",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1540))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1558) = this;
  *(undefined4 *)(iVar1 + 0x155c) = 0xaa;
  F_00415690(((undefined1 *)(gen_frame + 0x48c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x36c)),"SelfClick",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xe80))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xe98) = this;
  *(undefined4 *)(iVar1 + 0xe9c) = 0x74;
  F_00415690(((undefined1 *)(gen_frame + 0x36c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x32c)),"NoTargetClickCancel",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xea0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xeb8) = this;
  *(undefined4 *)(iVar1 + 0xebc) = 0x75;
  F_00415690(((undefined1 *)(gen_frame + 0x32c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x6c)),"CharaParamDisp",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3020))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3038) = this;
  *(undefined4 *)(iVar1 + 0x303c) = 0x181;
  F_00415690(((undefined1 *)(gen_frame + 0x6c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x2ec)),"ExpDisp",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3080))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3098) = this;
  *(undefined4 *)(iVar1 + 0x309c) = 0x184;
  F_00415690(((undefined1 *)(gen_frame + 0x2ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x16c)),"BuffDisp",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x30a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x30b8) = this;
  *(undefined4 *)(iVar1 + 0x30bc) = 0x185;
  F_00415690(((undefined1 *)(gen_frame + 0x16c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x2ac)),"InventryStatusDisp",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x30c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x30d8) = this;
  *(undefined4 *)(iVar1 + 0x30dc) = 0x186;
  F_00415690(((undefined1 *)(gen_frame + 0x2ac)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xac)),"DutyListDisp",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x30e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x30f8) = this;
  *(undefined4 *)(iVar1 + 0x30fc) = 0x187;
  F_00415690(((undefined1 *)(gen_frame + 0xac)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x26c)),"NaviMapDisp",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3100))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3118) = this;
  *(undefined4 *)(iVar1 + 0x311c) = 0x188;
  F_00415690(((undefined1 *)(gen_frame + 0x26c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x12c)),"GilStatusDisp",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3120))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3138) = this;
  *(undefined4 *)(iVar1 + 0x313c) = 0x189;
  F_00415690(((undefined1 *)(gen_frame + 0x12c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x22c)),"InfoSettingDisp",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3140))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3158) = this;
  *(undefined4 *)(iVar1 + 0x315c) = 0x18a;
  F_00415690(((undefined1 *)(gen_frame + 0x22c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x2c)),"TargetInfoDisp",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3160))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3178) = this;
  *(undefined4 *)(iVar1 + 0x317c) = 0x18b;
  F_00415690(((undefined1 *)(gen_frame + 0x2c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x1ec)),"EnemyListDisp",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3180))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3198) = this;
  *(undefined4 *)(iVar1 + 0x319c) = 0x18c;
  F_00415690(((undefined1 *)(gen_frame + 0x1ec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xec)),"FocusTargetDisp",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x31a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x31b8) = this;
  *(undefined4 *)(iVar1 + 0x31bc) = 0x18d;
  F_00415690(((undefined1 *)(gen_frame + 0xec)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x1ac)),"ItemDetailDisp",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x31c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x31d8) = this;
  *(undefined4 *)(iVar1 + 0x31dc) = 0x18e;
  F_00415690(((undefined1 *)(gen_frame + 0x1ac)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x34c)),"ItemComparisonDisp",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x31e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x31f8) = this;
  *(undefined4 *)(iVar1 + 0x31fc) = 399;
  F_00415690(((undefined1 *)(gen_frame + 0x34c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x30c)),"ActionDetailDisp",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3200))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3218) = this;
  *(undefined4 *)(iVar1 + 0x321c) = 400;
  F_00415690(((undefined1 *)(gen_frame + 0x30c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x2cc)),"ToolTipDisp",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3240))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3258) = this;
  *(undefined4 *)(iVar1 + 0x325c) = 0x192;
  F_00415690(((undefined1 *)(gen_frame + 0x2cc)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x28c)),"HowTo",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2800))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2818) = this;
  *(undefined4 *)(iVar1 + 0x281c) = 0x140;
  F_00415690(((undefined1 *)(gen_frame + 0x28c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x24c)),"MapPermeationRate",0x19,0,100);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3260))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3278) = this;
  *(undefined4 *)(iVar1 + 0x327c) = 0x193;
  F_00415690(((undefined1 *)(gen_frame + 0x24c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x20c)),"MapPermeationMode",0,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x32e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x32f8) = this;
  *(undefined4 *)(iVar1 + 0x32fc) = 0x197;
  F_00415690(((undefined1 *)(gen_frame + 0x20c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x1cc)),"FlyTextDisp",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x32c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x32d8) = this;
  *(undefined4 *)(iVar1 + 0x32dc) = 0x196;
  F_00415690(((undefined1 *)(gen_frame + 0x1cc)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x18c)),"LimitBreakGaugeDisp",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3040))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3058) = this;
  *(undefined4 *)(iVar1 + 0x305c) = 0x182;
  F_00415690(((undefined1 *)(gen_frame + 0x18c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x14c)),"HotbarCrossDispAlways",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3060))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3078) = this;
  *(undefined4 *)(iVar1 + 0x307c) = 0x183;
  F_00415690(((undefined1 *)(gen_frame + 0x14c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x10c)),"PartyListDisp",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3280))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3298) = this;
  *(undefined4 *)(iVar1 + 0x329c) = 0x194;
  F_00415690(((undefined1 *)(gen_frame + 0x10c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xcc)),"PartyListNameType",0,0,3);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x32a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x32b8) = this;
  *(undefined4 *)(iVar1 + 0x32bc) = 0x195;
  F_00415690(((undefined1 *)(gen_frame + 0xcc)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x8c)),"PartyListSoloOff",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x26e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x26f8) = this;
  *(undefined4 *)(iVar1 + 0x26fc) = 0x137;
  F_00415690(((undefined1 *)(gen_frame + 0x8c)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x4c)),"HotbarEmptyVisible",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1760))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1778) = this;
  *(undefined4 *)(iVar1 + 0x177c) = 0xbb;
  F_00415690(((undefined1 *)(gen_frame + 0x4c)));
  (*(undefined4 *)(gen_frame + 0x7dc)) = 1;
  (*(undefined4 *)(gen_frame + 0x7e4)) = 0;
  (*(undefined4 *)(gen_frame + 0x7e8)) = 0;
  uVar2 = F_00406bb0(0x12,0,0);
  (*(uint *)(gen_frame + 0x7d8)) = uVar2;
  F_00c49908(uVar2,0x12,"<Target Settings>");
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xe40))),&(*(undefined4 *)(gen_frame + 0x7cc)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xe58) = this;
  *(undefined4 *)(iVar1 + 0xe5c) = 0x72;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x7cc)));
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xc)),"AutoTarget",1,0,1);
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xec0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xed8) = this;
  *(undefined4 *)(iVar1 + 0xedc) = 0x76;
  uVar2 = F_00415690(((undefined1 *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: FUN_0041b370 */
uint F_0041b370(unsigned int gen_a0)
{
  GEN_ENTER(0x41b370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  int iVar1;
  uint uVar2;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x20;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 1;
  (*(undefined4 *)(gen_frame + 0x204)) = 0;
  (*(undefined4 *)(gen_frame + 0x208)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x41b397;
  uVar2 = F_00406bb0(0x20,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089d9c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x20;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0x1f8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41b3a7;
  F_00c49908(uVar2,0x20,"<FINAL FANTASY XIV Config File>");
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0x1ec));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41b3b6;
  F_004156f0(*(undefined * PTR32 *)((int)this + 0x10),&(*(undefined4 *)(gen_frame + 0x1ec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x18) = this;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41b3c7;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 10;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 1;
  (*(undefined4 *)(gen_frame + 0x204)) = 0;
  (*(undefined4 *)(gen_frame + 0x208)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x41b3d9;
  uVar2 = F_00406bb0(10,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089dbc;
  (*(undefined4 *)(gen_frame + 0x4c)) = 10;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0x1f8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41b3e9;
  F_00c49908(uVar2,10,"<Version>");
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0x1ec));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41b3fb;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x20))),&(*(undefined4 *)(gen_frame + 0x1ec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x38) = this;
  *(undefined4 *)(iVar1 + 0x3c) = 1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41b40c;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x2011ff14;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089dc8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b420;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"GuidVersion",0x2011ff14,0,0);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41b42c;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x40))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x58) = this;
  *(undefined4 *)(iVar1 + 0x5c) = 2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41b441;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089dd4;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b453;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"ConfigVersion",2,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41b45f;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x60))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x78) = this;
  *(undefined4 *)(iVar1 + 0x7c) = 3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41b474;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x4;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089de4;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b485;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"Language",0,0,4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41b491;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x80))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x98) = this;
  *(undefined4 *)(iVar1 + 0x9c) = 4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41b4ac;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089df0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b4bd;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"Region",0,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41b4cc;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xa0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xb8) = this;
  *(undefined4 *)(iVar1 + 0xbc) = 5;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41b4e7;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x13;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 1;
  (*(undefined4 *)(gen_frame + 0x204)) = 0;
  (*(undefined4 *)(gen_frame + 0x208)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x41b4f9;
  uVar2 = F_00406bb0(0x13,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089df8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x13;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0x1f8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41b509;
  F_00c49908(uVar2,0x13,"<Network Settings>");
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0x1ec));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41b51e;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc0))),&(*(undefined4 *)(gen_frame + 0x1ec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xd8) = this;
  *(undefined4 *)(iVar1 + 0xdc) = 6;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41b539;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)&REFG(undefined, 0x1089e0c);
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b549;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),&REFG(undefined, 0x1089e0c),1,0,0);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41b558;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xe0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xf8) = this;
  *(undefined4 *)(iVar1 + 0xfc) = 7;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41b573;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xd8ff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0xd800;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xd800;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)&REFG(undefined, 0x1089e14);
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b58f;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),&REFG(undefined, 0x1089e14),0xd800,0xd800,0xd8ff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41b59e;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x100))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x118) = this;
  *(undefined4 *)(iVar1 + 0x11c) = 8;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41b5b9;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089e1c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b5ca;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"LastLogin0",0,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41b5d9;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x120))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x138) = this;
  *(undefined4 *)(iVar1 + 0x13c) = 9;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41b5f4;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089e28;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b605;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"LastLogin1",0,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41b614;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x140))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x158) = this;
  *(undefined4 *)(iVar1 + 0x15c) = 10;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41b62f;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x10;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 1;
  (*(undefined4 *)(gen_frame + 0x204)) = 0;
  (*(undefined4 *)(gen_frame + 0x208)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x41b641;
  uVar2 = F_00406bb0(0x10,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089e34;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x10;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0x1f8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41b651;
  F_00c49908(uVar2,0x10,"<Font Settings>");
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0x1ec));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41b666;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x840))),&(*(undefined4 *)(gen_frame + 0x1ec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x858) = this;
  *(undefined4 *)(iVar1 + 0x85c) = 0x42;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41b681;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x13;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 1;
  (*(undefined4 *)(gen_frame + 0x204)) = 0;
  (*(undefined4 *)(gen_frame + 0x208)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x41b693;
  uVar2 = F_00406bb0(0x13,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089e44;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x13;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0x1f8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41b6a3;
  F_00c49908(uVar2,0x13,"<Display Settings>");
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0x1ec));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41b6b8;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x160))),&(*(undefined4 *)(gen_frame + 0x1ec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x178) = this;
  *(undefined4 *)(iVar1 + 0x17c) = 0xb;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41b6d3;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  F_0042e170((gen_frame + 0xc),&REFG(undefined, 0x1089e58));
  uVar2 = F_00414960(&(*(undefined4 *)(gen_frame + 0x1ec)),"MainAdapter",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                       (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                       (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41b6fe;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x180))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x198) = this;
  *(undefined4 *)(iVar1 + 0x19c) = 0xc;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41b719;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x80000000;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089e68;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b72e;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"ScreenLeft",0x80000000,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41b73d;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1b8) = this;
  *(undefined4 *)(iVar1 + 0x1bc) = 0xd;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41b758;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x80000000;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089e74;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b76d;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"ScreenTop",0x80000000,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41b77c;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1d8) = this;
  *(undefined4 *)(iVar1 + 0x1dc) = 0xe;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41b797;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x8000;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x500;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089e80;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b7af;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"ScreenWidth",0x500,0,0x8000);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41b7be;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1f8) = this;
  *(undefined4 *)(iVar1 + 0x1fc) = 0xf;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41b7d9;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x8000;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x2d0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089e8c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b7f1;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"ScreenHeight",0x2d0,0,0x8000);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41b800;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x200))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x218) = this;
  *(undefined4 *)(iVar1 + 0x21c) = 0x10;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41b81b;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089e9c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b82c;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"ScreenMode",0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41b83b;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x220))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x238) = this;
  *(undefined4 *)(iVar1 + 0x23c) = 0x11;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41b856;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x8000;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x500;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089ea8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b86e;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"FullScreenWidth",0x500,0,0x8000);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41b87d;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x240))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 600) = this;
  *(undefined4 *)(iVar1 + 0x25c) = 0x12;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41b898;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x8000;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x2d0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089eb8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b8b0;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"FullScreenHeight",0x2d0,0,0x8000);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41b8bf;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x260))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x278) = this;
  *(undefined4 *)(iVar1 + 0x27c) = 0x13;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41b8da;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x8000;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x3c;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089ecc;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b8ef;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"Refreshrate",0x3c,0,0x8000);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41b8fe;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x280))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x298) = this;
  *(undefined4 *)(iVar1 + 0x29c) = 0x14;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41b919;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x3;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (*(undefined * PTR32 (*)[1])REFP(0x1089ed8));
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b92a;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),(*(undefined * PTR32 (*)[1])REFP(0x1089ed8)),1,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41b939;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2b8) = this;
  *(undefined4 *)(iVar1 + 700) = 0x15;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41b954;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089edc;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b964;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"FPSInActive",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41b973;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2f8) = this;
  *(undefined4 *)(iVar1 + 0x2fc) = 0x17;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41b98e;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2710;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089ee8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b9a2;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"LangSelectSub",0,0,10000);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41b9b1;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x340))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x358) = this;
  *(undefined4 *)(iVar1 + 0x35c) = 0x1a;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41b9cc;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x64;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x32;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089ef8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41b9de;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"Gamma",0x32,0,100);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41b9ed;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x360))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x378) = this;
  *(undefined4 *)(iVar1 + 0x37c) = 0x1b;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41ba08;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 1;
  (*(undefined4 *)(gen_frame + 0x204)) = 0;
  (*(undefined4 *)(gen_frame + 0x208)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x41ba1a;
  uVar2 = F_00406bb0(0x11,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089f00;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x11;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0x1f8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41ba2a;
  F_00c49908(uVar2,0x11,"<Sound Settings>");
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0x1ec));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41ba3f;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x7e0))),&(*(undefined4 *)(gen_frame + 0x1ec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x7f8) = this;
  *(undefined4 *)(iVar1 + 0x7fc) = 0x3f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41ba5a;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089f14;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ba6a;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"IsSoundDisable",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41ba79;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x800))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x818) = this;
  *(undefined4 *)(iVar1 + 0x81c) = 0x40;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41ba94;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089f24;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41baa4;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"IsSoundAlways",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41bab3;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x820))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x838) = this;
  *(undefined4 *)(iVar1 + 0x83c) = 0x41;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41bace;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x15;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 1;
  (*(undefined4 *)(gen_frame + 0x204)) = 0;
  (*(undefined4 *)(gen_frame + 0x208)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x41bae0;
  uVar2 = F_00406bb0(0x15,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089f34;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x15;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0x1f8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41baf0;
  F_00c49908(uVar2,0x15,"<SoundPlay Settings>");
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0x1ec));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41bb05;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3420))),&(*(undefined4 *)(gen_frame + 0x1ec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3438) = this;
  *(undefined4 *)(iVar1 + 0x343c) = 0x1a1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41bb20;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x64;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 100;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089f4c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bb32;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"SoundMaster",100,0,100);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41bb41;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3440))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3458) = this;
  *(undefined4 *)(iVar1 + 0x345c) = 0x1a2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41bb5c;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x64;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 100;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089f58;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bb6e;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"SoundBgm",100,0,100);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41bb7d;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3460))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3478) = this;
  *(undefined4 *)(iVar1 + 0x347c) = 0x1a3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41bb98;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x64;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 100;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089f64;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bbaa;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"SoundSe",100,0,100);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41bbb9;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3480))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3498) = this;
  *(undefined4 *)(iVar1 + 0x349c) = 0x1a4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41bbd4;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x64;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 100;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089f6c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bbe6;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"SoundVoice",100,0,100);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41bbf5;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x34a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x34b8) = this;
  *(undefined4 *)(iVar1 + 0x34bc) = 0x1a5;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41bc10;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x64;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 100;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089f78;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bc22;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"SoundEnv",100,0,100);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41bc31;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x34c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x34d8) = this;
  *(undefined4 *)(iVar1 + 0x34dc) = 0x1a6;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41bc4c;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x64;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 100;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089f84;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bc5e;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"SoundSystem",100,0,100);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41bc6d;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x34e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x34f8) = this;
  *(undefined4 *)(iVar1 + 0x34fc) = 0x1a7;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41bc88;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089f90;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bc98;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"IsSndMaster",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41bca7;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3500))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3518) = this;
  *(undefined4 *)(iVar1 + 0x351c) = 0x1a8;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41bcc2;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089f9c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bcd2;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"IsSndBgm",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41bce1;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3520))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3538) = this;
  *(undefined4 *)(iVar1 + 0x353c) = 0x1a9;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41bcfc;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089fa8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bd0c;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"IsSndSe",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41bd1b;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3540))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3558) = this;
  *(undefined4 *)(iVar1 + 0x355c) = 0x1aa;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41bd36;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089fb0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bd46;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"IsSndVoice",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41bd55;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3560))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3578) = this;
  *(undefined4 *)(iVar1 + 0x357c) = 0x1ab;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41bd70;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089fbc;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bd80;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"IsSndEnv",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41bd8f;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3580))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3598) = this;
  *(undefined4 *)(iVar1 + 0x359c) = 0x1ac;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41bdaa;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089fc8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bdba;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"IsSndSystem",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41bdc9;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x35a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x35b8) = this;
  *(undefined4 *)(iVar1 + 0x35bc) = 0x1ad;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41bde4;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089fd4;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bdf4;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"SoundDolby",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41be03;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x35c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x35d8) = this;
  *(undefined4 *)(iVar1 + 0x35dc) = 0x1ae;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41be1e;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x64;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 10;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089fe0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41be30;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"SoundMicpos",10,0,100);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41be3f;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x35e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x35f8) = this;
  *(undefined4 *)(iVar1 + 0x35fc) = 0x1af;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41be5a;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089fec;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41be6a;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"SoundChocobo",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41be79;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3600))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3618) = this;
  *(undefined4 *)(iVar1 + 0x361c) = 0x1b0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41be94;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x14;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 1;
  (*(undefined4 *)(gen_frame + 0x204)) = 0;
  (*(undefined4 *)(gen_frame + 0x208)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x41bea6;
  uVar2 = F_00406bb0(0x14,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x1089ffc;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x14;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0x1f8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41beb6;
  F_00c49908(uVar2,0x14,"<Graphics Settings>");
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0x1ec));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41becb;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x380))),&(*(undefined4 *)(gen_frame + 0x1ec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x398) = this;
  *(undefined4 *)(iVar1 + 0x39c) = 0x1c;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41bee6;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a010;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bef6;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"GeneralQuality",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41bf05;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x5a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x5b8) = this;
  *(undefined4 *)(iVar1 + 0x5bc) = 0x2d;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41bf20;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a020;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bf30;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"OcclusionCulling",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41bf3f;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x5c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x5d8) = this;
  *(undefined4 *)(iVar1 + 0x5dc) = 0x2e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41bf5a;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a034;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bf6b;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"ReflectionType",0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41bf7a;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x7a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x7b8) = this;
  *(undefined4 *)(iVar1 + 0x7bc) = 0x3d;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41bf95;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a044;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bfa5;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"LodType",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41bfb4;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x560))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x578) = this;
  *(undefined4 *)(iVar1 + 0x57c) = 0x2b;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41bfcf;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a04c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41bfdf;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"StreamingType",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41bfee;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x580))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x598) = this;
  *(undefined4 *)(iVar1 + 0x59c) = 0x2c;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c009;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a05c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c019;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"AntiAliasing",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c028;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2d8) = this;
  *(undefined4 *)(iVar1 + 0x2dc) = 0x16;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c043;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a06c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c053;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"TranslucentQuality",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c062;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x4c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x4d8) = this;
  *(undefined4 *)(iVar1 + 0x4dc) = 0x26;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c07d;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x3;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a080;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c08f;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"GrassQuality",2,0,3);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c09e;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x4a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x4b8) = this;
  *(undefined4 *)(iVar1 + 0x4bc) = 0x25;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c0b9;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a090;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c0ca;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"MapResolution",1,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c0d9;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x680))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x698) = this;
  *(undefined4 *)(iVar1 + 0x69c) = 0x34;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c0f4;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a0a0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c106;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"ShadowVisibilityType",2,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c115;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x4e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x4f8) = this;
  *(undefined4 *)(iVar1 + 0x4fc) = 0x27;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c130;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a0b8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c140;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"ShadowVisibilityTypeSelf",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c14f;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x6a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x6b8) = this;
  *(undefined4 *)(iVar1 + 0x6bc) = 0x35;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c16a;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a0d4;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c17a;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"ShadowVisibilityTypeParty",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c189;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x6c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x6d8) = this;
  *(undefined4 *)(iVar1 + 0x6dc) = 0x36;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c1a4;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a0f0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c1b4;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"ShadowVisibilityTypeOther",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c1c3;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x6e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x6f8) = this;
  *(undefined4 *)(iVar1 + 0x6fc) = 0x37;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c1de;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a10c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c1ee;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"ShadowVisibilityTypeEnemy",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c1fd;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x700))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x718) = this;
  *(undefined4 *)(iVar1 + 0x71c) = 0x38;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c218;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a128;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c228;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"ShadowLOD",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c237;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x5e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x5f8) = this;
  *(undefined4 *)(iVar1 + 0x5fc) = 0x2f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c252;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a134;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c263;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"ShadowTextureSizeType",1,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c272;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x520))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x538) = this;
  *(undefined4 *)(iVar1 + 0x53c) = 0x29;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c28d;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a14c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c29f;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"ShadowCascadeCountType",2,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c2ae;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x540))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x558) = this;
  *(undefined4 *)(iVar1 + 0x55c) = 0x2a;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c2c9;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a164;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c2d9;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"ShadowSoftShadowType",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c2e8;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x500))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x518) = this;
  *(undefined4 *)(iVar1 + 0x51c) = 0x28;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c303;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a17c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c315;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"TextureFilterQuality",2,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c324;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3b8) = this;
  *(undefined4 *)(iVar1 + 0x3bc) = 0x1d;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c33f;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a194;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c350;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"TextureAnisotropicQuality",0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c35f;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3d8) = this;
  *(undefined4 *)(iVar1 + 0x3dc) = 0x1e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c37a;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a1b0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c38a;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"PhysicsType",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c399;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x660))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x678) = this;
  *(undefined4 *)(iVar1 + 0x67c) = 0x33;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c3b4;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a1bc;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c3c6;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"PhysicsTypeSelf",2,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c3d5;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x720))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x738) = this;
  *(undefined4 *)(iVar1 + 0x73c) = 0x39;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c3f0;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a1cc;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c402;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"PhysicsTypeParty",2,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c411;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x740))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x758) = this;
  *(undefined4 *)(iVar1 + 0x75c) = 0x3a;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c42c;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a1e0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c43e;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"PhysicsTypeOther",2,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c44d;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x760))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x778) = this;
  *(undefined4 *)(iVar1 + 0x77c) = 0x3b;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c468;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a1f4;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c47a;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"PhysicsTypeEnemy",2,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c489;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x780))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x798) = this;
  *(undefined4 *)(iVar1 + 0x79c) = 0x3c;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c4a4;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a208;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c4b4;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"Vignetting",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c4c3;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x480))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x498) = this;
  *(undefined4 *)(iVar1 + 0x49c) = 0x24;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c4de;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a214;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c4ee;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"RadialBlur",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c4fd;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x460))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x478) = this;
  *(undefined4 *)(iVar1 + 0x47c) = 0x23;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c518;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)&REFG(undefined, 0x108a220);
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c529;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),&REFG(undefined, 0x108a220),1,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c538;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3f8) = this;
  *(undefined4 *)(iVar1 + 0x3fc) = 0x1f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c553;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a228;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c565;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"Glare",2,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c574;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x400))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x418) = this;
  *(undefined4 *)(iVar1 + 0x41c) = 0x20;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c58f;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a230;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c59f;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"DepthOfField",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c5ae;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x420))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x438) = this;
  *(undefined4 *)(iVar1 + 0x43c) = 0x21;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c5c9;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a240;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c5d9;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"BattleEffect",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c5e8;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1640))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1658) = this;
  *(undefined4 *)(iVar1 + 0x165c) = 0xb2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c603;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a250;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c613;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"BGEffect",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c622;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1660))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1678) = this;
  *(undefined4 *)(iVar1 + 0x167c) = 0xb3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c63d;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a25c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c64d;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"ScreenShotImageType",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c65c;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x7c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x7d8) = this;
  *(undefined4 *)(iVar1 + 0x7dc) = 0x3e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c677;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x13;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 1;
  (*(undefined4 *)(gen_frame + 0x204)) = 0;
  (*(undefined4 *)(gen_frame + 0x208)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x41c689;
  uVar2 = F_00406bb0(0x13,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a270;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x13;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0x1f8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41c699;
  F_00c49908(uVar2,0x13,"<GamePad Settings>");
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0x1ec));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c6ae;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x860))),&(*(undefined4 *)(gen_frame + 0x1ec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x878) = this;
  *(undefined4 *)(iVar1 + 0x87c) = 0x43;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c6c9;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a284;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c6da;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"PadGuid",0,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c6e9;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x880))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x898) = this;
  *(undefined4 *)(iVar1 + 0x89c) = 0x44;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c704;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  F_0042e170((gen_frame + 0xc),L"{00000000-0000-0000-0000000000000000}");
  uVar2 = F_00414960(&(*(undefined4 *)(gen_frame + 0x1ec)),"InstanceGuid",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                       (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                       (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c72f;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x8a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x8b8) = this;
  *(undefined4 *)(iVar1 + 0x8bc) = 0x45;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c74a;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  F_0042e170((gen_frame + 0xc),L"{00000000-0000-0000-0000000000000000}");
  uVar2 = F_00414960(&(*(undefined4 *)(gen_frame + 0x1ec)),"ProductGuid",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                       (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                       (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c775;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x8c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x8d8) = this;
  *(undefined4 *)(iVar1 + 0x8dc) = 0x46;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c790;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a2f4;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c7a0;
  uVar2 = F_00414850(&(*(undefined4 *)(gen_frame + 0x1ec)),"AlwaysInput",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c7af;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x920))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x938) = this;
  *(undefined4 *)(iVar1 + 0x93c) = 0x49;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c7ca;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 9;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 3;
  (*(undefined4 *)(gen_frame + 0x200)) = REFG(float, 0x108b290);
  (*(undefined4 *)(gen_frame + 0x204)) = 0;
  (*(undefined4 *)(gen_frame + 0x208)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x41c7ed;
  uVar2 = F_00406bb0(9,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a34c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 9;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0x1f8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41c7fd;
  F_00c49908(uVar2,9,"DeadArea");
  (*(undefined4 *)(gen_frame + 0x1ec)) = REFG(float, 0x108b290);
  (*(undefined4 *)(gen_frame + 0x1f0)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0x1ec));
  (*(undefined4 *)(gen_frame + 0x1f4)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c834;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x8e0))),&(*(undefined4 *)(gen_frame + 0x1ec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x8f8) = this;
  *(undefined4 *)(iVar1 + 0x8fc) = 0x47;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c84f;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  F_0042cc20((gen_frame + 0xc),"{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}",REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(&(*(undefined4 *)(gen_frame + 0x1ec)),"Alias",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),
                       (*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),
                       (*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)),
                       (*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c881;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x900))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x918) = this;
  *(undefined4 *)(iVar1 + 0x91c) = 0x48;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c89c;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a394;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c8af;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x10c)),"ForceFeedBack",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c8be;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x940))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x958) = this;
  *(undefined4 *)(iVar1 + 0x95c) = 0x4a;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c8dc;
  F_00415690(((undefined1 *)(gen_frame + 0x10c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a3a4;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c8ef;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x6c)),"PadMode",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c8fe;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x960))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x978) = this;
  *(undefined4 *)(iVar1 + 0x97c) = 0x4b;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c91c;
  F_00415690(((undefined1 *)(gen_frame + 0x6c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a3ac;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c92f;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x8c)),"PadAvailable",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c93e;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x980))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x998) = this;
  *(undefined4 *)(iVar1 + 0x99c) = 0x4c;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c95c;
  F_00415690(((undefined1 *)(gen_frame + 0x8c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a3bc;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c970;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x14c)),"PadReverseConfirmCancel",1,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c97f;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x9a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x9b8) = this;
  *(undefined4 *)(iVar1 + 0x9bc) = 0x4d;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c99d;
  F_00415690(((undefined1 *)(gen_frame + 0x14c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a3d4;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41c9b0;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xcc)),"PadSelectButtonIcon",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41c9bf;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x9c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x9d8) = this;
  *(undefined4 *)(iVar1 + 0x9dc) = 0x4e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41c9dd;
  F_00415690(((undefined1 *)(gen_frame + 0xcc)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 1;
  (*(undefined4 *)(gen_frame + 0x204)) = 0;
  (*(undefined4 *)(gen_frame + 0x208)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x41c9ef;
  uVar2 = F_00406bb0(0x11,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a3e8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x11;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0x1f8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41c9ff;
  F_00c49908(uVar2,0x11,"<Mouse Settings>");
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0x1ec));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41ca14;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x9e0))),&(*(undefined4 *)(gen_frame + 0x1ec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x9f8) = this;
  *(undefined4 *)(iVar1 + 0x9fc) = 0x4f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41ca2f;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a3fc;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ca3f;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x1ac)),"ResoMouseDrag",1,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41ca4e;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x300))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x318) = this;
  *(undefined4 *)(iVar1 + 0x31c) = 0x18;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41ca69;
  F_00415690(((undefined1 *)(gen_frame + 0x1ac)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a40c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ca79;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x18c)),"MouseOpeLimit",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41ca88;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 800))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x338) = this;
  *(undefined4 *)(iVar1 + 0x33c) = 0x19;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41caa3;
  F_00415690(((undefined1 *)(gen_frame + 0x18c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xb;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 3;
  (*(undefined4 *)(gen_frame + 0x200)) = REFG(float, 0x1088068);
  (*(undefined4 *)(gen_frame + 0x204)) = 0;
  (*(undefined4 *)(gen_frame + 0x208)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x41cac6;
  uVar2 = F_00406bb0(0xb,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a41c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0xb;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0x1f8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41cad6;
  F_00c49908(uVar2,0xb,"MouseSpeed");
  (*(undefined4 *)(gen_frame + 0x1ec)) = REFG(float, 0x1088068);
  (*(undefined4 *)(gen_frame + 0x1f0)) = 0;
  (*(undefined4 *)(gen_frame + 0x1f4)) = REFG(float, 0x1087f04);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0x1ec));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41cb0d;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xcc0))),&(*(undefined4 *)(gen_frame + 0x1ec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xcd8) = this;
  *(undefined4 *)(iVar1 + 0xcdc) = 0x66;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41cb28;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a428;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41cb3b;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x16c)),"MouseAutoFocus",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41cb4a;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xa00))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xa18) = this;
  *(undefined4 *)(iVar1 + 0xa1c) = 0x50;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41cb68;
  F_00415690(((undefined1 *)(gen_frame + 0x16c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xe;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 1;
  (*(undefined4 *)(gen_frame + 0x204)) = 0;
  (*(undefined4 *)(gen_frame + 0x208)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x41cb7a;
  uVar2 = F_00406bb0(0xe,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a438;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0xe;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0x1f8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41cb8a;
  F_00c49908(uVar2,0xe,"<UI Settings>");
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0x1ec));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41cb9f;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xa20))),&(*(undefined4 *)(gen_frame + 0x1ec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xa38) = this;
  *(undefined4 *)(iVar1 + 0xa3c) = 0x51;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41cbba;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 1;
  (*(undefined4 *)(gen_frame + 0x204)) = 0;
  (*(undefined4 *)(gen_frame + 0x208)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x41cbcc;
  uVar2 = F_00406bb0(0x11,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a448;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x11;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0x1f8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41cbdc;
  F_00c49908(uVar2,0x11,"<Move Operation>");
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0x1ec));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41cbf1;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x15c0))),&(*(undefined4 *)(gen_frame + 0x1ec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x15d8) = this;
  *(undefined4 *)(iVar1 + 0x15dc) = 0xae;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41cc0c;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x64;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x32;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a45c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41cc21;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x12c)),"TurnSpeed",0x32,0,100);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41cc30;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1600))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1618) = this;
  *(undefined4 *)(iVar1 + 0x161c) = 0xb0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41cc4e;
  F_00415690(((undefined1 *)(gen_frame + 0x12c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x14;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 1;
  (*(undefined4 *)(gen_frame + 0x204)) = 0;
  (*(undefined4 *)(gen_frame + 0x208)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x41cc60;
  uVar2 = F_00406bb0(0x14,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a468;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x14;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0x1f8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41cc70;
  F_00c49908(uVar2,0x14,"<Cutscene Settings>");
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0x1ec));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41cc85;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x33a0))),&(*(undefined4 *)(gen_frame + 0x1ec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x33b8) = this;
  *(undefined4 *)(iVar1 + 0x33bc) = 0x19d;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41cca0;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffffffff;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a47c;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ccb5;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xec)),"CutsceneMovieVoice",0xffffffff,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41ccc4;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x33c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x33d8) = this;
  *(undefined4 *)(iVar1 + 0x33dc) = 0x19e;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41cce2;
  F_00415690(((undefined1 *)(gen_frame + 0xec)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0xffffffff;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a490;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ccf7;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xac)),"CutsceneMovieCaption",0xffffffff,0,0xffffffff);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41cd06;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x33e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x33f8) = this;
  *(undefined4 *)(iVar1 + 0x33fc) = 0x19f;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41cd24;
  F_00415690(((undefined1 *)(gen_frame + 0xac)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a4a8;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41cd34;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x1cc)),"CutsceneMovieOpening",0,0,1);
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41cd43;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3400))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3418) = this;
  *(undefined4 *)(iVar1 + 0x341c) = 0x1a0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41cd5e;
  F_00415690(((undefined1 *)(gen_frame + 0x1cc)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x1a;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 1;
  (*(undefined4 *)(gen_frame + 0x204)) = 0;
  (*(undefined4 *)(gen_frame + 0x208)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x41cd70;
  uVar2 = F_00406bb0(0x1a,0,0);
  (*(uint *)(gen_frame + 0x1f8)) = uVar2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a4c0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x1a;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41cd80;
  F_00c49908(uVar2,0x1a,"<GamePad Button Settings>");
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0x1ec));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41cd95;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3620))),&(*(undefined4 *)(gen_frame + 0x1ec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3638) = this;
  *(undefined4 *)(iVar1 + 0x363c) = 0x1b1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41cdb0;
  F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  F_0042cc20((gen_frame + 0xc),"XHB_Left_Start",REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x1cc)),"PadButton_L2",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                       (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                       (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41cde1;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3640))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3658) = this;
  *(undefined4 *)(iVar1 + 0x365c) = 0x1b2;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41cdfc;
  F_00415690(((undefined1 *)(gen_frame + 0x1cc)));
  F_0042cc20((gen_frame + 0xc),"XHB_Right_Start",REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x1cc)),"PadButton_R2",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                       (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                       (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41ce2e;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3660))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3678) = this;
  *(undefined4 *)(iVar1 + 0x367c) = 0x1b3;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41ce49;
  F_00415690(((undefined1 *)(gen_frame + 0x1cc)));
  F_0042cc20((gen_frame + 0xc),"Autorun_Support",REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x1cc)),"PadButton_L1",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                       (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                       (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41ce7a;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3680))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3698) = this;
  *(undefined4 *)(iVar1 + 0x369c) = 0x1b4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41ce95;
  F_00415690(((undefined1 *)(gen_frame + 0x1cc)));
  F_0042cc20((gen_frame + 0xc),"Hotbar_Set_Change",REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x1cc)),"PadButton_R1",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                       (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                       (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41cec7;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x36a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x36b8) = this;
  *(undefined4 *)(iVar1 + 0x36bc) = 0x1b5;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41cee2;
  F_00415690(((undefined1 *)(gen_frame + 0x1cc)));
  F_0042cc20((gen_frame + 0xc),&REFG(undefined, 0x108a560),REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x1cc)),"PadButton_Triangle",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                       (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                       (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41cf13;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x36c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x36d8) = this;
  *(undefined4 *)(iVar1 + 0x36dc) = 0x1b6;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41cf2e;
  F_00415690(((undefined1 *)(gen_frame + 0x1cc)));
  F_0042cc20((gen_frame + 0xc),"Accept",REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x1cc)),"PadButton_Circle",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                       (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                       (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41cf60;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x36e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x36f8) = this;
  *(undefined4 *)(iVar1 + 0x36fc) = 0x1b7;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41cf7b;
  F_00415690(((undefined1 *)(gen_frame + 0x1cc)));
  F_0042cc20((gen_frame + 0xc),"Cancel",REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x1cc)),"PadButton_Cross",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                       (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                       (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41cfac;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3700))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3718) = this;
  *(undefined4 *)(iVar1 + 0x371c) = 0x1b8;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41cfc7;
  F_00415690(((undefined1 *)(gen_frame + 0x1cc)));
  F_0042cc20((gen_frame + 0xc),"Map_Sub",REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x1cc)),"PadButton_Square",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                       (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                       (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41cff9;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3720))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3738) = this;
  *(undefined4 *)(iVar1 + 0x373c) = 0x1b9;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41d014;
  F_00415690(((undefined1 *)(gen_frame + 0x1cc)));
  F_0042cc20((gen_frame + 0xc),"HUD_Select",REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x1cc)),"PadButton_Select",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                       (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                       (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d045;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3740))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3758) = this;
  *(undefined4 *)(iVar1 + 0x375c) = 0x1ba;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41d060;
  F_00415690(((undefined1 *)(gen_frame + 0x1cc)));
  F_0042cc20((gen_frame + 0xc),"MainCommand",REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x1cc)),"PadButton_Start",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                       (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                       (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d092;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3760))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3778) = this;
  *(undefined4 *)(iVar1 + 0x377c) = 0x1bb;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41d0ad;
  F_00415690(((undefined1 *)(gen_frame + 0x1cc)));
  F_0042cc20((gen_frame + 0xc),"Move_Operation",REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x1cc)),"PadButton_LS",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                       (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                       (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d0de;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3780))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3798) = this;
  *(undefined4 *)(iVar1 + 0x379c) = 0x1bc;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41d0f9;
  F_00415690(((undefined1 *)(gen_frame + 0x1cc)));
  F_0042cc20((gen_frame + 0xc),"Camera_Operation",REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x1cc)),"PadButton_RS",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                       (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                       (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d12b;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x37a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x37b8) = this;
  *(undefined4 *)(iVar1 + 0x37bc) = 0x1bd;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41d146;
  F_00415690(((undefined1 *)(gen_frame + 0x1cc)));
  F_0042cc20((gen_frame + 0xc),"Lockon_and_Sword",REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x1cc)),"PadButton_L3",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                       (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                       (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d177;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x37c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x37d8) = this;
  *(undefined4 *)(iVar1 + 0x37dc) = 0x1be;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41d192;
  F_00415690(((undefined1 *)(gen_frame + 0x1cc)));
  F_0042cc20((gen_frame + 0xc),"Camera_Modechange",REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x1cc)),"PadButton_R3",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                       (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                       (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)),(*(undefined4 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined4 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d1c4;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x37e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x37f8) = this;
  *(undefined4 *)(iVar1 + 0x37fc) = 0x1bf;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41d1df;
  F_00415690(((undefined1 *)(gen_frame + 0x1cc)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x17;
  (*(undefined4 *)(gen_frame + 0x1fc)) = 1;
  (*(undefined4 *)(gen_frame + 0x204)) = 0;
  (*(undefined4 *)(gen_frame + 0x208)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x41d1f1;
  uVar2 = F_00406bb0(0x17,0,0);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x50)) = (undefined * PTR32 *)0x108a694;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x17;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0x1f8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41d201;
  F_00c49908(uVar2,0x17,"<CUSTOM CONFIGURATION>");
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = &(*(undefined4 *)(gen_frame + 0x1ec));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d216;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3800))),&(*(undefined4 *)(gen_frame + 0x1ec)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3818) = this;
  *(undefined4 *)(iVar1 + 0x381c) = 0x1c0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = (undefined4 *)0x41d231;
  uVar2 = F_00415690(&(*(undefined4 *)(gen_frame + 0x1ec)));
  return uVar2;
}

/* ref: FUN_0041d240 */
unsigned int F_0041d240(unsigned int gen_a0)
{
  GEN_ENTER(0x41d240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00415940(this,(int)this + 0xb0);
  F_00415940(this,*(int *)((int)this + 0x2b4) * 0xac + 0x15c + (int)this);
  return 0;
}

/* ref: FUN_0041d270 */
unsigned int F_0041d270(unsigned int gen_a0)
{
  GEN_ENTER(0x41d270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00415940((undefined *)((int)this + 0xb0),this);
  F_00415940(((undefined *)GEN_TOP((*(int *)((int)this + 0x2b4) * 0xac + 0x15c + (int)this))),this);
  return 0;
}

/* ref: FUN_0041d2a0 */
uint F_0041d2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x41d2a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x550];
  int iVar1;
  uint uVar2;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x24;
  (*(undefined4 *)(gen_frame + 0x53c)) = 1;
  (*(undefined4 *)(gen_frame + 0x544)) = 0;
  (*(undefined4 *)(gen_frame + 0x548)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = (char *)0x41d2c7;
  uVar2 = F_00406bb0(0x24,0,0);
  (*(char * PTR32 *)(gen_frame + 0x50)) = "<FINAL FANTASY XIV Dev Config File>";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x24;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0x538)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41d2d7;
  F_00c49908(uVar2,0x24,"<FINAL FANTASY XIV Dev Config File>");
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = ((undefined1 *)(gen_frame + 0x52c));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d2e6;
  F_004156f0(*(undefined * PTR32 *)((int)this + 0x10),((undefined1 *)(gen_frame + 0x52c)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x18) = this;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d2f7;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x9;
  (*(undefined4 *)(gen_frame + 0x53c)) = 1;
  (*(undefined4 *)(gen_frame + 0x544)) = 0;
  (*(undefined4 *)(gen_frame + 0x548)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = (char *)0x41d309;
  uVar2 = F_00406bb0(9,0,0);
  (*(char * PTR32 *)(gen_frame + 0x50)) = "<System>";
  (*(undefined4 *)(gen_frame + 0x4c)) = 9;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0x538)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41d319;
  F_00c49908(uVar2,9,"<System>");
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = ((undefined1 *)(gen_frame + 0x52c));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d32b;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x20))),((undefined1 *)(gen_frame + 0x52c)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x38) = this;
  *(undefined4 *)(iVar1 + 0x3c) = 1;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d33c;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x2;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "ConfigVersion";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d34e;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"ConfigVersion",2,1,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d35a;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x40))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x58) = this;
  *(undefined4 *)(iVar1 + 0x5c) = 2;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d36f;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "AssertMode";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d37f;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"AssertMode",0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d38b;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x60))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x78) = this;
  *(undefined4 *)(iVar1 + 0x7c) = 3;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d3a0;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x3;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "GameMode";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d3b1;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"GameMode",0,0,3);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d3bd;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x80))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x98) = this;
  *(undefined4 *)(iVar1 + 0x9c) = 4;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d3d8;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  F_0042e170((gen_frame + 0xc),&REFG(undefined, 0x108a838));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x52c)),"TestCaseConditional",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                       (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                       (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(char * PTR32 *)(gen_frame + 0x50))
                       ,(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined1 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d403;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xd8) = this;
  *(undefined4 *)(iVar1 + 0xdc) = 6;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d41e;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "TestCaseCategory";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d432;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"TestCaseCategory",0,0,0xffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d441;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xa0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xb8) = this;
  *(undefined4 *)(iVar1 + 0xbc) = 5;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d45c;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "CharaUpdateVariance";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d46c;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"CharaUpdateVariance",0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d47b;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xe0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xf8) = this;
  *(undefined4 *)(iVar1 + 0xfc) = 7;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d496;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "GameObjectManagerHasCopyTable";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d4a6;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"GameObjectManagerHasCopyTable",0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d4b5;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x100))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x118) = this;
  *(undefined4 *)(iVar1 + 0x11c) = 8;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d4d0;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "TargetSystemOptimized";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d4e0;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"TargetSystemOptimized",0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d4ef;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x120))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x138) = this;
  *(undefined4 *)(iVar1 + 0x13c) = 9;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d50a;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "UseInputThread";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d51a;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"UseInputThread",0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d529;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x300))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x318) = this;
  *(undefined4 *)(iVar1 + 0x31c) = 0x18;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d544;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x1;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "UseSqPack";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d555;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"UseSqPack",1,0,2);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d564;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x140))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x158) = this;
  *(undefined4 *)(iVar1 + 0x15c) = 10;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d57f;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  F_0042cc20((gen_frame + 0xc),"{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}",REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x52c)),"UseSqPackCategoryArray",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18))
                       ,(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34))
                       ,(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                       (*(char * PTR32 *)(gen_frame + 0x50)),(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined1 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d5b1;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x160))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x178) = this;
  *(undefined4 *)(iVar1 + 0x17c) = 0xb;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d5cc;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x10;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "NumberOfAvailableSPU";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d5dd;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"NumberOfAvailableSPU",0,0,0x10);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d5ec;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x180))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x198) = this;
  *(undefined4 *)(iVar1 + 0x19c) = 0xc;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d607;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x1;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "PerformanceEnable";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d61b;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"PerformanceEnable",1,0,0xffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d62a;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1b8) = this;
  *(undefined4 *)(iVar1 + 0x1bc) = 0xd;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d645;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  F_0042e170((gen_frame + 0xc),&REFG(undefined, 0x108a93c));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x52c)),"PerformanceHide",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                       (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                       (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(char * PTR32 *)(gen_frame + 0x50))
                       ,(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined1 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d670;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1d8) = this;
  *(undefined4 *)(iVar1 + 0x1dc) = 0xe;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d68b;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "ResourceEnable";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d69f;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"ResourceEnable",0,0,0xffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d6ae;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x1f8) = this;
  *(undefined4 *)(iVar1 + 0x1fc) = 0xf;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d6c9;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0xffffffff;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "ResourceCategory";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d6db;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"ResourceCategory",0xffffffff,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d6ea;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x200))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x218) = this;
  *(undefined4 *)(iVar1 + 0x21c) = 0x10;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d705;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "ResourceType";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d716;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"ResourceType",0,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d725;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x220))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x238) = this;
  *(undefined4 *)(iVar1 + 0x23c) = 0x11;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d740;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "VirtualRelease";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d754;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"VirtualRelease",0,0,0xffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d763;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x240))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 600) = this;
  *(undefined4 *)(iVar1 + 0x25c) = 0x12;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d77e;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "DataPathType";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d78f;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"DataPathType",0,0,2);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d79e;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x260))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x278) = this;
  *(undefined4 *)(iVar1 + 0x27c) = 0x13;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d7b9;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x1;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "SoundEnable";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d7c9;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"SoundEnable",1,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d7d8;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x280))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x298) = this;
  *(undefined4 *)(iVar1 + 0x29c) = 0x14;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d7f3;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x10;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "BookmarkCategory";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d804;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"BookmarkCategory",0,0,0x10);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d813;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2b8) = this;
  *(undefined4 *)(iVar1 + 700) = 0x15;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d82e;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  F_0042e170((gen_frame + 0xc),&REFG(undefined, 0x108a9c4));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x52c)),"TestSID",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),
                       (*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),
                       (*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(char * PTR32 *)(gen_frame + 0x50)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined1 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d859;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2d8) = this;
  *(undefined4 *)(iVar1 + 0x2dc) = 0x16;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d874;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x1;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "IgnoreVer";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d884;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"IgnoreVer",1,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d893;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x2e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x2f8) = this;
  *(undefined4 *)(iVar1 + 0x2fc) = 0x17;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d8ae;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  F_0042cc20((gen_frame + 0xc),&REFG(undefined, 0x108a9dc),REFG(undefined4, 0x108cc50));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x52c)),"DebugDirPath",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                       (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                       (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(char * PTR32 *)(gen_frame + 0x50))
                       ,(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined1 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d8df;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 800))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x338) = this;
  *(undefined4 *)(iVar1 + 0x33c) = 0x19;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d8fa;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x1;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "GFxMode";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d90a;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"GFxMode",1,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d919;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x340))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x358) = this;
  *(undefined4 *)(iVar1 + 0x35c) = 0x1a;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d934;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x1;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "PadEnable";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d944;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"PadEnable",1,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d953;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x360))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x378) = this;
  *(undefined4 *)(iVar1 + 0x37c) = 0x1b;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d96e;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "SystemATK";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41d97e;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"SystemATK",0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d98d;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x380))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x398) = this;
  *(undefined4 *)(iVar1 + 0x39c) = 0x1c;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d9a8;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x11;
  (*(undefined4 *)(gen_frame + 0x53c)) = 1;
  (*(undefined4 *)(gen_frame + 0x544)) = 0;
  (*(undefined4 *)(gen_frame + 0x548)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = (char *)0x41d9ba;
  uVar2 = F_00406bb0(0x11,0,0);
  (*(char * PTR32 *)(gen_frame + 0x50)) = "<Debug Settings>";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x11;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0x538)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41d9ca;
  F_00c49908(uVar2,0x11,"<Debug Settings>");
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = ((undefined1 *)(gen_frame + 0x52c));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41d9df;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3a0))),((undefined1 *)(gen_frame + 0x52c)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3b8) = this;
  *(undefined4 *)(iVar1 + 0x3bc) = 0x1d;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41d9fa;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "LuaDebugger";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41da0a;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"LuaDebugger",0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41da19;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3d8) = this;
  *(undefined4 *)(iVar1 + 0x3dc) = 0x1e;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41da34;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "PathAutoTest";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41da45;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"PathAutoTest",0,0,2);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41da54;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x3e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x3f8) = this;
  *(undefined4 *)(iVar1 + 0x3fc) = 0x1f;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41da6f;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x1;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "GameQuitMessageBox";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41da7f;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"GameQuitMessageBox",1,0,0);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41da8e;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x400))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x418) = this;
  *(undefined4 *)(iVar1 + 0x41c) = 0x20;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41daa9;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x13;
  (*(undefined4 *)(gen_frame + 0x53c)) = 1;
  (*(undefined4 *)(gen_frame + 0x544)) = 0;
  (*(undefined4 *)(gen_frame + 0x548)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = (char *)0x41dabb;
  uVar2 = F_00406bb0(0x13,0,0);
  (*(char * PTR32 *)(gen_frame + 0x50)) = "<Network Settings>";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x13;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0x538)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41dacb;
  F_00c49908(uVar2,0x13,"<Network Settings>");
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = ((undefined1 *)(gen_frame + 0x52c));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41dae0;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x420))),((undefined1 *)(gen_frame + 0x52c)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x438) = this;
  *(undefined4 *)(iVar1 + 0x43c) = 0x21;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41dafb;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  F_0042e170((gen_frame + 0xc),(*(undefined * PTR32 (*)[4])REFP(0x108aa6c)));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x52c)),"LobbyHost01",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c))
                       ,(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38))
                       ,(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(char * PTR32 *)(gen_frame + 0x50)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined1 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41db26;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x440))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x458) = this;
  *(undefined4 *)(iVar1 + 0x45c) = 0x22;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41db41;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xd6d3;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0xd6d2;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "LobbyPort01";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41db59;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"LobbyPort01",0xd6d2,0,0xd6d3);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41db68;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x460))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x478) = this;
  *(undefined4 *)(iVar1 + 0x47c) = 0x23;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41db83;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  F_0042e170((gen_frame + 0xc),(*(undefined * PTR32 (*)[4])REFP(0x108aab0)));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x52c)),"LobbyHost02",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c))
                       ,(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38))
                       ,(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(char * PTR32 *)(gen_frame + 0x50)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined1 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41dbae;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x480))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x498) = this;
  *(undefined4 *)(iVar1 + 0x49c) = 0x24;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41dbc9;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xd6d3;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0xd6d2;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "LobbyPort02";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41dbe1;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"LobbyPort02",0xd6d2,0,0xd6d3);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41dbf0;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x4a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x4b8) = this;
  *(undefined4 *)(iVar1 + 0x4bc) = 0x25;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41dc0b;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x258;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x1e;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x1e;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "LobbyRetryCount";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41dc21;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"LobbyRetryCount",0x1e,0x1e,600);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41dc30;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x4c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x4d8) = this;
  *(undefined4 *)(iVar1 + 0x4dc) = 0x26;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41dc4b;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xa;
  (*(undefined4 *)(gen_frame + 0x58)) = 1;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x5;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "LobbyRetryInterval";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41dc5d;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"LobbyRetryInterval",5,1,10);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41dc6c;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x4e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x4f8) = this;
  *(undefined4 *)(iVar1 + 0x4fc) = 0x27;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41dc87;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x5;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x1;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "LobbyPing";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41dc98;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"LobbyPing",1,0,5);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41dca7;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x500))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x518) = this;
  *(undefined4 *)(iVar1 + 0x51c) = 0x28;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41dcc2;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xd6d0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0xd6d0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FrontPort";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41dcda;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"FrontPort",0xd6d0,0,0xd6d0);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41dce9;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x520))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x538) = this;
  *(undefined4 *)(iVar1 + 0x53c) = 0x29;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41dd04;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  F_0042e170((gen_frame + 0xc),(*(undefined * PTR32 (*)[1])REFP(0x108ab30)));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x52c)),"FrontHost",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),
                       (*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),
                       (*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(char * PTR32 *)(gen_frame + 0x50)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined1 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41dd2f;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x540))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x558) = this;
  *(undefined4 *)(iVar1 + 0x55c) = 0x2a;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41dd4a;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  F_0042e170((gen_frame + 0xc),(*(undefined * PTR32 (*)[1])REFP(0x108ab50)));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x52c)),"FrontProtocol",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                       (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                       (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(char * PTR32 *)(gen_frame + 0x50))
                       ,(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined1 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41dd75;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x560))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x578) = this;
  *(undefined4 *)(iVar1 + 0x57c) = 0x2b;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41dd90;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "UseCfgFrontend";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41dda0;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"UseCfgFrontend",0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41ddaf;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x580))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x598) = this;
  *(undefined4 *)(iVar1 + 0x59c) = 0x2c;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41ddca;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "AutoLogin";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ddda;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"AutoLogin",0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41dde9;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x5a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x5b8) = this;
  *(undefined4 *)(iVar1 + 0x5bc) = 0x2d;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41de04;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  F_0042e170((gen_frame + 0xc),L"00000");
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x52c)),"Ticket",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),
                       (*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),
                       (*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(char * PTR32 *)(gen_frame + 0x50)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined1 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41de2f;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x5c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x5d8) = this;
  *(undefined4 *)(iVar1 + 0x5dc) = 0x2e;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41de4a;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  F_0042e170((gen_frame + 0xc),&REFG(undefined, 0x108ab98));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x52c)),"World",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),
                       (*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),
                       (*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(char * PTR32 *)(gen_frame + 0x50)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined1 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41de75;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x5e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x5f8) = this;
  *(undefined4 *)(iVar1 + 0x5fc) = 0x2f;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41de90;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  F_0042e170((gen_frame + 0xc),&REFG(undefined, 0x108aba4));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x52c)),"ZoneName",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),
                       (*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),
                       (*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(char * PTR32 *)(gen_frame + 0x50)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined1 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41debb;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x600))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x618) = this;
  *(undefined4 *)(iVar1 + 0x61c) = 0x30;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41ded6;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  F_0042e170((gen_frame + 0xc),&REFG(undefined, 0x108abb4));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x52c)),"SqexID",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),
                       (*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),
                       (*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(char * PTR32 *)(gen_frame + 0x50)),
                       (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined1 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41df01;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x620))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x638) = this;
  *(undefined4 *)(iVar1 + 0x63c) = 0x31;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41df1c;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "StandAloneLogin";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41df2c;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"StandAloneLogin",0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41df3b;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x640))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x658) = this;
  *(undefined4 *)(iVar1 + 0x65c) = 0x32;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41df56;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x258;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x258;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "KeepAliveChat";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41df6e;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"KeepAliveChat",600,0,600);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41df7d;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x660))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x678) = this;
  *(undefined4 *)(iVar1 + 0x67c) = 0x33;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41df98;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x258;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x14;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "KeepAliveIntervalChat";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41dfad;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"KeepAliveIntervalChat",0x14,0,600);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41dfbc;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x680))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x698) = this;
  *(undefined4 *)(iVar1 + 0x69c) = 0x34;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41dfd7;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x258;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x2d;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "KeepAliveZone";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41dfec;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"KeepAliveZone",0x2d,0,600);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41dffb;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x6a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x6b8) = this;
  *(undefined4 *)(iVar1 + 0x6bc) = 0x35;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e016;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x258;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x14;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "KeepAliveIntervalZone";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e02b;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"KeepAliveIntervalZone",0x14,0,600);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e03a;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x6c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x6d8) = this;
  *(undefined4 *)(iVar1 + 0x6dc) = 0x36;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e055;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x10;
  (*(undefined4 *)(gen_frame + 0x53c)) = 1;
  (*(undefined4 *)(gen_frame + 0x544)) = 0;
  (*(undefined4 *)(gen_frame + 0x548)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = (char *)0x41e067;
  uVar2 = F_00406bb0(0x10,0,0);
  (*(char * PTR32 *)(gen_frame + 0x50)) = "<View Settings>";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x10;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0x538)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41e077;
  F_00c49908(uVar2,0x10,"<View Settings>");
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = ((undefined1 *)(gen_frame + 0x52c));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e08c;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x6e0))),((undefined1 *)(gen_frame + 0x52c)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x6f8) = this;
  *(undefined4 *)(iVar1 + 0x6fc) = 0x37;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e0a7;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x14;
  (*(undefined4 *)(gen_frame + 0x53c)) = 1;
  (*(undefined4 *)(gen_frame + 0x544)) = 0;
  (*(undefined4 *)(gen_frame + 0x548)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = (char *)0x41e0b9;
  uVar2 = F_00406bb0(0x14,0,0);
  (*(char * PTR32 *)(gen_frame + 0x50)) = "<Graphics Settings>";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x14;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0x538)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41e0c9;
  F_00c49908(uVar2,0x14,"<Graphics Settings>");
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = ((undefined1 *)(gen_frame + 0x52c));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e0de;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x700))),((undefined1 *)(gen_frame + 0x52c)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x718) = this;
  *(undefined4 *)(iVar1 + 0x71c) = 0x38;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e0f9;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x14;
  (*(undefined4 *)(gen_frame + 0x53c)) = 1;
  (*(undefined4 *)(gen_frame + 0x544)) = 0;
  (*(undefined4 *)(gen_frame + 0x548)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = (char *)0x41e10b;
  uVar2 = F_00406bb0(0x14,0,0);
  (*(char * PTR32 *)(gen_frame + 0x50)) = "<Platform Settings>";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x14;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0x538)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41e11b;
  F_00c49908(uVar2,0x14,"<Platform Settings>");
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = ((undefined1 *)(gen_frame + 0x52c));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e130;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x720))),((undefined1 *)(gen_frame + 0x52c)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x738) = this;
  *(undefined4 *)(iVar1 + 0x73c) = 0x39;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e14b;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x12;
  (*(undefined4 *)(gen_frame + 0x53c)) = 1;
  (*(undefined4 *)(gen_frame + 0x544)) = 0;
  (*(undefined4 *)(gen_frame + 0x548)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = (char *)0x41e15d;
  uVar2 = F_00406bb0(0x12,0,0);
  (*(char * PTR32 *)(gen_frame + 0x50)) = "<Config Settings>";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x12;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0x538)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41e16d;
  F_00c49908(uVar2,0x12,"<Config Settings>");
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = ((undefined1 *)(gen_frame + 0x52c));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e182;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x740))),((undefined1 *)(gen_frame + 0x52c)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x758) = this;
  *(undefined4 *)(iVar1 + 0x75c) = 0x3a;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e19d;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined4 *)(gen_frame + 0x53c)) = 1;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x11;
  (*(undefined4 *)(gen_frame + 0x544)) = 0;
  (*(undefined4 *)(gen_frame + 0x548)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = (char *)0x41e1af;
  uVar2 = F_00406bb0(0x11,0,0);
  (*(char * PTR32 *)(gen_frame + 0x50)) = "<Patch Settings>";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x11;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0x538)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41e1bf;
  F_00c49908(uVar2,0x11,"<Patch Settings>");
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = ((undefined1 *)(gen_frame + 0x52c));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e1d4;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x760))),((undefined1 *)(gen_frame + 0x52c)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x778) = this;
  *(undefined4 *)(iVar1 + 0x77c) = 0x3b;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e1ef;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "SkipBootupVercheck";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e1ff;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"SkipBootupVercheck",0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e20e;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x780))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x798) = this;
  *(undefined4 *)(iVar1 + 0x79c) = 0x3c;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e229;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "SkipLauncherCISLogin";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e239;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"SkipLauncherCISLogin",0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e248;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x7a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x7b8) = this;
  *(undefined4 *)(iVar1 + 0x7bc) = 0x3d;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e263;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "SkipLauncherVercheck";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e273;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"SkipLauncherVercheck",0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e282;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x7c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x7d8) = this;
  *(undefined4 *)(iVar1 + 0x7dc) = 0x3e;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e29d;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "AnotherRepoBootup";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e2ad;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"AnotherRepoBootup",0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e2bc;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x7e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x7f8) = this;
  *(undefined4 *)(iVar1 + 0x7fc) = 0x3f;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e2d7;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  F_0042e170((gen_frame + 0xc),(*(undefined * PTR32 (*)[1])REFP(0x108acd8)));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x52c)),"AnotherRepoBootupRepo",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                       (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                       (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(char * PTR32 *)(gen_frame + 0x50))
                       ,(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined1 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e302;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x800))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x818) = this;
  *(undefined4 *)(iVar1 + 0x81c) = 0x40;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e31d;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "AnotherRepoLauncher";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e32d;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"AnotherRepoLauncher",0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e33c;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x820))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x838) = this;
  *(undefined4 *)(iVar1 + 0x83c) = 0x41;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e357;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  F_0042e170((gen_frame + 0xc),(*(undefined * PTR32 (*)[1])REFP(0x108ad0c)));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x52c)),"AnotherRepoLauncherRepo",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),
                       (*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),
                       (*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                       (*(char * PTR32 *)(gen_frame + 0x50)),(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined1 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e382;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x840))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x858) = this;
  *(undefined4 *)(iVar1 + 0x85c) = 0x42;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e39d;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "KickClient";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e3ad;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"KickClient",0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e3bc;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x860))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x878) = this;
  *(undefined4 *)(iVar1 + 0x87c) = 0x43;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e3d7;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  F_0042e170((gen_frame + 0xc),(*(undefined * PTR32 (*)[1])REFP(0x108ad38)));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x52c)),"KickClientPath",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                       (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                       (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(char * PTR32 *)(gen_frame + 0x50))
                       ,(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined1 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e402;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x880))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x898) = this;
  *(undefined4 *)(iVar1 + 0x89c) = 0x44;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e41d;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined4 *)(gen_frame + 0x53c)) = 1;
  (*(undefined4 *)(gen_frame + 0x544)) = 0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x15;
  (*(undefined4 *)(gen_frame + 0x548)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = (char *)0x41e42f;
  uVar2 = F_00406bb0(0x15,0,0);
  (*(char * PTR32 *)(gen_frame + 0x50)) = "<DebugMenu Settings>";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x15;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0x538)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41e43f;
  F_00c49908(uVar2,0x15,"<DebugMenu Settings>");
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = ((undefined1 *)(gen_frame + 0x52c));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e454;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x8a0))),((undefined1 *)(gen_frame + 0x52c)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x8b8) = this;
  *(undefined4 *)(iVar1 + 0x8bc) = 0x45;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e46f;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "DebugMenuArgsNum";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e480;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"DebugMenuArgsNum",0,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e48f;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x8c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x8d8) = this;
  *(undefined4 *)(iVar1 + 0x8dc) = 0x46;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e4aa;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  F_0042e170((gen_frame + 0xc),(*(undefined * PTR32 (*)[1])REFP(0x108ad7c)));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x52c)),"DebugMenuArgs",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                       (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                       (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(char * PTR32 *)(gen_frame + 0x50))
                       ,(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined1 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e4d5;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x8e0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x8f8) = this;
  *(undefined4 *)(iVar1 + 0x8fc) = 0x47;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e4f0;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x14;
  (*(undefined4 *)(gen_frame + 0x53c)) = 1;
  (*(undefined4 *)(gen_frame + 0x544)) = 0;
  (*(undefined4 *)(gen_frame + 0x548)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = (char *)0x41e502;
  uVar2 = F_00406bb0(0x14,0,0);
  (*(char * PTR32 *)(gen_frame + 0x50)) = "<ToolMenu Settings>";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x14;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0x538)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41e512;
  F_00c49908(uVar2,0x14,"<ToolMenu Settings>");
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = ((undefined1 *)(gen_frame + 0x52c));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e527;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x900))),((undefined1 *)(gen_frame + 0x52c)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x918) = this;
  *(undefined4 *)(iVar1 + 0x91c) = 0x48;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e542;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x1;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "MayaCameraAlt";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e552;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"MayaCameraAlt",1,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e561;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x920))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x938) = this;
  *(undefined4 *)(iVar1 + 0x93c) = 0x49;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e57c;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x1;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "EnableCommunicator";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e58c;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"EnableCommunicator",1,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e59b;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x940))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x958) = this;
  *(undefined4 *)(iVar1 + 0x95c) = 0x4a;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e5b6;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "CommunicatorPort";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e5ca;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"CommunicatorPort",0,0,0xffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e5d9;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x960))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x978) = this;
  *(undefined4 *)(iVar1 + 0x97c) = 0x4b;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e5f4;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  F_0042e170((gen_frame + 0xc),&REFG(undefined, 0x108ade0));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x52c)),"CommunicatorHostClient",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18))
                       ,(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34))
                       ,(*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),
                       (*(char * PTR32 *)(gen_frame + 0x50)),(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined1 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e61f;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x980))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x998) = this;
  *(undefined4 *)(iVar1 + 0x99c) = 0x4c;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e63a;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  F_0042e170((gen_frame + 0xc),&REFG(undefined, 0x108adfc));
  uVar2 = F_00414960(((undefined1 *)(gen_frame + 0x52c)),"CommunicatorHostTool",(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),
                       (*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),
                       (*(undefined4 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(uint *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(char * PTR32 *)(gen_frame + 0x50))
                       ,(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)),(*(undefined4 *)(gen_frame + 0x58)),(*(undefined1 * PTR32 *)(gen_frame + 0x5c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e665;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x9a0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x9b8) = this;
  *(undefined4 *)(iVar1 + 0x9bc) = 0x4d;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e680;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "CommunicatorPortTool";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e694;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x52c)),"CommunicatorPortTool",0,0,0xffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e6a3;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x9c0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x9d8) = this;
  *(undefined4 *)(iVar1 + 0x9dc) = 0x4e;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e6be;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0xe;
  (*(undefined4 *)(gen_frame + 0x53c)) = 1;
  (*(undefined4 *)(gen_frame + 0x544)) = 0;
  (*(undefined4 *)(gen_frame + 0x548)) = 0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = (char *)0x41e6d0;
  uVar2 = F_00406bb0(0xe,0,0);
  (*(char * PTR32 *)(gen_frame + 0x50)) = "<UI Settings>";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0xe;
  (*(uint *)(gen_frame + 0x48)) = uVar2;
  (*(uint *)(gen_frame + 0x538)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0x41e6e0;
  F_00c49908(uVar2,0xe,"<UI Settings>");
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = ((undefined1 *)(gen_frame + 0x52c));
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e6f5;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0x9e0))),((undefined1 *)(gen_frame + 0x52c)));
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0x9f8) = this;
  *(undefined4 *)(iVar1 + 0x9fc) = 0x4f;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e710;
  F_00415690(((undefined1 *)(gen_frame + 0x52c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "EnableFlyTextColor";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e723;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x18c)),"EnableFlyTextColor",0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e732;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xa00))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xa18) = this;
  *(undefined4 *)(iVar1 + 0xa1c) = 0x50;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e750;
  F_00415690(((undefined1 *)(gen_frame + 0x18c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = &REFG(undefined * PTR32, 0x8a0000);
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCSelf";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e765;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x4cc)),"FTCSelf",&REFG(undefined * PTR32, 0x8a0000),0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e774;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xa20))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xa38) = this;
  *(undefined4 *)(iVar1 + 0xa3c) = 0x51;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e78f;
  F_00415690(((undefined1 *)(gen_frame + 0x4cc)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = &REFG(undefined * PTR32, 0x8a0000);
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCParty";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e7a7;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x28c)),"FTCParty",&REFG(undefined * PTR32, 0x8a0000),0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e7b6;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xa40))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xa58) = this;
  *(undefined4 *)(iVar1 + 0xa5c) = 0x52;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e7d4;
  F_00415690(((undefined1 *)(gen_frame + 0x28c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = &REFG(undefined * PTR32, 0x8a0000);
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCOther";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e7ec;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x48c)),"FTCOther",&REFG(undefined * PTR32, 0x8a0000),0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e7fb;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xa60))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xa78) = this;
  *(undefined4 *)(iVar1 + 0xa7c) = 0x53;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e819;
  F_00415690(((undefined1 *)(gen_frame + 0x48c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)
                 ((code *)REFP(0xe36100));
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCEnemy";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e831;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x8c)),"FTCEnemy",
                       ((code *)REFP(0xe36100)),0
                       ,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e840;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xa80))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xa98) = this;
  *(undefined4 *)(iVar1 + 0xa9c) = 0x54;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e85e;
  F_00415690(((undefined1 *)(gen_frame + 0x8c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0xffffffff;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCDamageAA";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e873;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x44c)),"FTCDamageAA",0xffffffff,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e882;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xaa0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xab8) = this;
  *(undefined4 *)(iVar1 + 0xabc) = 0x55;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e8a0;
  F_00415690(((undefined1 *)(gen_frame + 0x44c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0xffffffff;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCCriticalAA";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e8b5;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x24c)),"FTCCriticalAA",0xffffffff,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e8c4;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xac0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xad8) = this;
  *(undefined4 *)(iVar1 + 0xadc) = 0x56;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e8e2;
  F_00415690(((undefined1 *)(gen_frame + 0x24c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0xffffffff;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCDamageAction";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e8f7;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x40c)),"FTCDamageAction",0xffffffff,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e906;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xae0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xaf8) = this;
  *(undefined4 *)(iVar1 + 0xafc) = 0x57;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e924;
  F_00415690(((undefined1 *)(gen_frame + 0x40c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x454545;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCMiss";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e93c;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x14c)),"FTCMiss",0x454545,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e94b;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xb00))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xb18) = this;
  *(undefined4 *)(iVar1 + 0xb1c) = 0x58;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e969;
  F_00415690(((undefined1 *)(gen_frame + 0x14c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x454545;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCMissAction";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e981;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x3cc)),"FTCMissAction",0x454545,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e990;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xb20))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xb38) = this;
  *(undefined4 *)(iVar1 + 0xb3c) = 0x59;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e9ae;
  F_00415690(((undefined1 *)(gen_frame + 0x3cc)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x454545;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCDodge";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41e9c6;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x20c)),"FTCDodge",0x454545,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41e9d5;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xb40))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xb58) = this;
  *(undefined4 *)(iVar1 + 0xb5c) = 0x5a;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41e9f3;
  F_00415690(((undefined1 *)(gen_frame + 0x20c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x454545;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCDodgeAction";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ea0b;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x38c)),"FTCDodgeAction",0x454545,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41ea1a;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xb60))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xb78) = this;
  *(undefined4 *)(iVar1 + 0xb7c) = 0x5b;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41ea38;
  F_00415690(((undefined1 *)(gen_frame + 0x38c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x2a5d00;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCBuff";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ea50;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xcc)),"FTCBuff",0x2a5d00,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41ea5f;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xb80))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xb98) = this;
  *(undefined4 *)(iVar1 + 0xb9c) = 0x5c;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41ea7d;
  F_00415690(((undefined1 *)(gen_frame + 0xcc)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0xffffffff;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCDebuff";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ea92;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x34c)),"FTCDebuff",0xffffffff,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41eaa1;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xba0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 3000) = this;
  *(undefined4 *)(iVar1 + 0xbbc) = 0x5d;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41eabf;
  F_00415690(((undefined1 *)(gen_frame + 0x34c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x454545;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCExp";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ead7;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x1cc)),"FTCExp",0x454545,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41eae6;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xbc0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xbd8) = this;
  *(undefined4 *)(iVar1 + 0xbdc) = 0x5e;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41eb04;
  F_00415690(((undefined1 *)(gen_frame + 0x1cc)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0xffffffff;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCDamageMp";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41eb19;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x30c)),"FTCDamageMp",0xffffffff,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41eb28;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xbe0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xbf8) = this;
  *(undefined4 *)(iVar1 + 0xbfc) = 0x5f;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41eb46;
  F_00415690(((undefined1 *)(gen_frame + 0x30c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0xffffffff;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCDamageTp";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41eb5b;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x10c)),"FTCDamageTp",0xffffffff,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41eb6a;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc00))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xc18) = this;
  *(undefined4 *)(iVar1 + 0xc1c) = 0x60;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41eb88;
  F_00415690(((undefined1 *)(gen_frame + 0x10c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x2a5d00;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCHealHp";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41eba0;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x2cc)),"FTCHealHp",0x2a5d00,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41ebaf;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc20))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xc38) = this;
  *(undefined4 *)(iVar1 + 0xc3c) = 0x61;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41ebcd;
  F_00415690(((undefined1 *)(gen_frame + 0x2cc)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0xd14e78;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCHealMp";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ebe2;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x50c)),"FTCHealMp",0xd14e78,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41ebf1;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc40))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xc58) = this;
  *(undefined4 *)(iVar1 + 0xc5c) = 0x62;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41ec0c;
  F_00415690(((undefined1 *)(gen_frame + 0x50c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0xb58106;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCHealTp";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ec21;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x4ec)),"FTCHealTp",0xb58106,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41ec30;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc60))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xc78) = this;
  *(undefined4 *)(iVar1 + 0xc7c) = 99;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41ec4b;
  F_00415690(((undefined1 *)(gen_frame + 0x4ec)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x454545;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCLevelUp";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ec63;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x4ac)),"FTCLevelUp",0x454545,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41ec72;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc80))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xc98) = this;
  *(undefined4 *)(iVar1 + 0xc9c) = 100;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41ec90;
  F_00415690(((undefined1 *)(gen_frame + 0x4ac)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x454545;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCInvulnerable";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41eca8;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x46c)),"FTCInvulnerable",0x454545,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41ecb7;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xca0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xcb8) = this;
  *(undefined4 *)(iVar1 + 0xcbc) = 0x65;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41ecd5;
  F_00415690(((undefined1 *)(gen_frame + 0x46c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x97cb5;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCDropitem";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41eced;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x42c)),"FTCDropitem",0x97cb5,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41ecfc;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xcc0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xcd8) = this;
  *(undefined4 *)(iVar1 + 0xcdc) = 0x66;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41ed1a;
  F_00415690(((undefined1 *)(gen_frame + 0x42c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0xffffffff;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCCritcalAction";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ed2f;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x3ec)),"FTCCritcalAction",0xffffffff,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41ed3e;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xce0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xcf8) = this;
  *(undefined4 *)(iVar1 + 0xcfc) = 0x67;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41ed5c;
  F_00415690(((undefined1 *)(gen_frame + 0x3ec)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x2a5d00;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCCraftProgress";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ed74;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x3ac)),"FTCCraftProgress",0x2a5d00,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41ed83;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xd00))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xd18) = this;
  *(undefined4 *)(iVar1 + 0xd1c) = 0x68;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41eda1;
  F_00415690(((undefined1 *)(gen_frame + 0x3ac)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x87b9;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCCraftQuality";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41edb9;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x36c)),"FTCCraftQuality",0x87b9,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41edc8;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xd20))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xd38) = this;
  *(undefined4 *)(iVar1 + 0xd3c) = 0x69;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41ede6;
  F_00415690(((undefined1 *)(gen_frame + 0x36c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0xb58106;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCCraftMaterialHp";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41edfe;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x32c)),"FTCCraftMaterialHp",0xb58106,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41ee0d;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xd40))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xd58) = this;
  *(undefined4 *)(iVar1 + 0xd5c) = 0x6a;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41ee2b;
  F_00415690(((undefined1 *)(gen_frame + 0x32c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x2a5d00;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCCriticalHealHp";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ee43;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x2ec)),"FTCCriticalHealHp",0x2a5d00,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41ee52;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xd60))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xd78) = this;
  *(undefined4 *)(iVar1 + 0xd7c) = 0x6b;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41ee70;
  F_00415690(((undefined1 *)(gen_frame + 0x2ec)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0xd14e78;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCCriticalHealMp";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ee88;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x2ac)),"FTCCriticalHealMp",0xd14e78,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41ee97;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xd80))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xd98) = this;
  *(undefined4 *)(iVar1 + 0xd9c) = 0x6c;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41eeb5;
  F_00415690(((undefined1 *)(gen_frame + 0x2ac)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0xb58106;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCCriticalHealTp";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41eecd;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x26c)),"FTCCriticalHealTp",0xb58106,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41eedc;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xda0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xdb8) = this;
  *(undefined4 *)(iVar1 + 0xdbc) = 0x6d;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41eefa;
  F_00415690(((undefined1 *)(gen_frame + 0x26c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x454545;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCBuffError";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ef12;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x22c)),"FTCBuffError",0x454545,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41ef21;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xdc0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xdd8) = this;
  *(undefined4 *)(iVar1 + 0xddc) = 0x6e;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41ef3f;
  F_00415690(((undefined1 *)(gen_frame + 0x22c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x454545;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCBuffOff";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ef57;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x1ec)),"FTCBuffOff",0x454545,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41ef66;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xde0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xdf8) = this;
  *(undefined4 *)(iVar1 + 0xdfc) = 0x6f;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41ef84;
  F_00415690(((undefined1 *)(gen_frame + 0x1ec)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x454545;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCDebuffOff";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41ef9c;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x1ac)),"FTCDebuffOff",0x454545,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41efab;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xe00))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xe18) = this;
  *(undefined4 *)(iVar1 + 0xe1c) = 0x70;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41efc9;
  F_00415690(((undefined1 *)(gen_frame + 0x1ac)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0xffffffff;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCProvoke";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41efde;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x16c)),"FTCProvoke",0xffffffff,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41efed;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xe20))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xe38) = this;
  *(undefined4 *)(iVar1 + 0xe3c) = 0x71;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41f00b;
  F_00415690(((undefined1 *)(gen_frame + 0x16c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x454545;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCBuffResist";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41f023;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x12c)),"FTCBuffResist",0x454545,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41f032;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xe40))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xe58) = this;
  *(undefined4 *)(iVar1 + 0xe5c) = 0x72;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41f050;
  F_00415690(((undefined1 *)(gen_frame + 0x12c)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)
                 ((code *)REFP(0xe36100));
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCPartBreak";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41f068;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xec)),"FTCPartBreak",
                       ((code *)REFP(0xe36100)),0
                       ,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41f077;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xe60))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xe78) = this;
  *(undefined4 *)(iVar1 + 0xe7c) = 0x73;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41f095;
  F_00415690(((undefined1 *)(gen_frame + 0xec)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0xffffffff;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x454545;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCFFullResist";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41f0ad;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0xac)),"FTCFFullResist",0x454545,0,0xffffffff);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41f0bc;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xe80))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xe98) = this;
  *(undefined4 *)(iVar1 + 0xe9c) = 0x74;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41f0da;
  F_00415690(((undefined1 *)(gen_frame + 0xac)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x1;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x54)) = (undefined * PTR32 *)0x0;
  (*(char * PTR32 *)(gen_frame + 0x50)) = "FTCMax";
  (*(undefined4 *)(gen_frame + 0x4c)) = 0x41f0ed;
  uVar2 = F_00414850(((undefined1 *)(gen_frame + 0x6c)),"FTCMax",0,0,1);
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)uVar2;
  (*(undefined4 *)(gen_frame + 0x58)) = 0x41f0fc;
  F_004156f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x10) + 0xea0))),uVar2);
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 *)(iVar1 + 0xeb8) = this;
  *(undefined4 *)(iVar1 + 0xebc) = 0x75;
  (*(undefined1 * PTR32 *)(gen_frame + 0x5c)) = (undefined1 *)0x41f11a;
  uVar2 = F_00415690(((undefined1 *)(gen_frame + 0x6c)));
  return uVar2;
}

/* ref: FUN_0041f130 */
uint F_0041f130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x41f130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x300];
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 * puVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  int iVar8;
  
  (*(uint *)(gen_frame + 0x2f8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2fc);
  if ((*(int *)((int)in_ecx + 8) == 7) || (*(int *)((int)in_ecx + 8) == 7)) {
    uVar5 = *(uint *)((int)in_ecx + 8);
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2fc) ^ (uint)(uint)(gen_frame + 0x2fc));
    return uVar5;
  }
  F_0042b630(((undefined1 *)(gen_frame + 0x2a4)));
  if (*(int *)((int)in_ecx + 8) == 2) {
    F_0042c880(((undefined1 *)(gen_frame + 0x2a4)));
    F_00c47745((*(uint *)(gen_frame + 0x2f8)) ^ (uint)(uint)(gen_frame + 0x2fc));
    return 2;
  }
  if (*(int *)((int)in_ecx + 0x9c) != *(int *)((int)in_ecx + 0xa0)) {
    F_00415990(in_ecx);
  }
  F_0042d4b0(((undefined1 *)(gen_frame + 0x2a4)),0x1000);
  uVar5 = 0;
  if (*(int *)((int)in_ecx + 0xc) != 0) {
    iVar8 = 0;
    do {
      iVar2 = *((int *)GEN_TOP((iVar8 + 0xc + *(int *)((int)in_ecx + 0x10))));
      iVar1 = iVar8 + *(int *)((int)in_ecx + 0x10);
      if (iVar2 != 0) {
        switch((unsigned int)(uintptr_t)(*(undefined4 *)(iVar1 + 0x10))) {
        case 1: ;
          uVar3 = F_0042ce40(((undefined1 *)(gen_frame + 0x154)),"\r\n%s\r\n",iVar2);
          F_0042e360(((undefined1 *)(gen_frame + 0x2a4)),uVar3);
          puVar4 = ((undefined1 *)(gen_frame + 0x154));
          break;
        case 2: ;
          uVar3 = F_0042ce40(((undefined1 *)(gen_frame + 0x250)),"%s\t%u\r\n",iVar2,*(undefined4 *)(iVar1 + 0x14));
          F_0042e360(((undefined1 *)(gen_frame + 0x2a4)),uVar3);
          puVar4 = ((undefined1 *)(gen_frame + 0x250));
          break;
        case 3: ;
          uVar3 = F_0042ce40(((undefined1 *)(gen_frame + 0x1fc)),"%s\t%f\r\n",iVar2,
                               (int)(ulonglong)gen_d2bits((double)*(float *)(iVar1 + 0x14)),
                               (int)((ulonglong)gen_d2bits((double)*(float *)(iVar1 + 0x14)) >> 0x20
                                    ));
          F_0042e360(((undefined1 *)(gen_frame + 0x2a4)),uVar3);
          puVar4 = ((undefined1 *)(gen_frame + 0x1fc));
          break;
        case 4: ;
          uVar3 = F_0042a990(*(undefined4 *)(iVar1 + 0x14));
          uVar3 = F_0042ce40(((undefined1 *)(gen_frame + 0x1a8)),"%s\t%s\r\n",iVar2,uVar3);
          F_0042e360(((undefined1 *)(gen_frame + 0x2a4)),uVar3);
          puVar4 = ((undefined1 *)(gen_frame + 0x1a8));
          break;
        default: ;
          goto switchD_0041f1ef_default;
        }
        F_0042c880(puVar4);
      }
switchD_0041f1ef_default: ;
      uVar5 = uVar5 + 1;
      iVar8 = iVar8 + 0x20;
    } while (uVar5 < *(uint *)((int)in_ecx + 0xc));
  }
  if ((*(int *)((int)in_ecx + 0x80) != 0) &&
     (piVar6 = ((int *)GEN_TOP(**(int * PTR32 *)((int)in_ecx + 0x7c))), piVar6 != *(int * PTR32 *)((int)in_ecx + 0x7c))) {
    do {
      piVar7 = ((int *)GEN_TOP(**(int * PTR32 *)piVar6[2]));
      if (piVar7 != *(int * PTR32 *)piVar6[2]) {
        do {
          switch((unsigned int)(uintptr_t)(piVar7[6])) {
          case 1: ;
            uVar5 = F_0042ce40(((undefined1 *)(gen_frame + 0x100)),"\r\n%s\r\n",piVar7[5]);
            F_0042e360(((undefined1 *)(gen_frame + 0x2a4)),uVar5);
            puVar4 = ((undefined1 *)(gen_frame + 0x100));
            break;
          case 2: ;
            uVar5 = F_0042ce40(((undefined1 *)(gen_frame + 0x4)),"%s\t%u\r\n",piVar7[5],piVar7[7]);
            F_0042e360(((undefined1 *)(gen_frame + 0x2a4)),uVar5);
            puVar4 = ((undefined1 *)(gen_frame + 0x4));
            break;
          case 3: ;
            uVar5 = F_0042ce40(((undefined1 *)(gen_frame + 0x58)),"%s\t%f\r\n",piVar7[5],
                                 (int)(ulonglong)gen_d2bits(((double)GEN_TOD(gen_bits2f(piVar7[7])))),
                                 (int)((ulonglong)gen_d2bits(((double)GEN_TOD(gen_bits2f(piVar7[7])))) >> 0x20)
                                );
            F_0042e360(((undefined1 *)(gen_frame + 0x2a4)),uVar5);
            puVar4 = ((undefined1 *)(gen_frame + 0x58));
            break;
          case 4: ;
            iVar8 = piVar7[5];
            uVar5 = F_0042a990(piVar7[7]);
            uVar5 = F_0042ce40(((undefined1 *)(gen_frame + 0xac)),"%s\t%s\r\n",iVar8,uVar5);
            F_0042e360(((undefined1 *)(gen_frame + 0x2a4)),uVar5);
            puVar4 = ((undefined1 *)(gen_frame + 0xac));
            break;
          default: ;
            goto switchD_0041f301_default;
          }
          F_0042c880(puVar4);
switchD_0041f301_default: ;
          piVar7 = (int *)*piVar7;
        } while (piVar7 != (int *)*(int *)piVar6[2]);
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)*(int *)((int)in_ecx + 0x7c));
  }
  F_0042ccf0(param_3,((undefined1 *)(gen_frame + 0x2a4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x2a4)));
  F_00c47745((*(uint *)(gen_frame + 0x2f8)) ^ (uint)(uint)(gen_frame + 0x2fc));
  return 3;
}

/* ref: FUN_0041f460 */
uint F_0041f460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x41f460u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  uint uVar2;
  uint * puVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042b630(((undefined1 *)(gen_frame + 0x4)));
  uVar2 = F_0041f130(in_ecx,in_edi,((undefined1 *)(gen_frame + 0x4)));
  if (uVar2 != 3) {
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
    return uVar2;
  }
  uVar2 = F_0042a970(((undefined1 *)(gen_frame + 0x4)));
  (*(uint *)(gen_frame + 0x0)) = uVar2;
  iVar1 = **(int * PTR32 *)(in_ecx + 0x14);
  puVar3 = &(*(uint *)(gen_frame + 0x0));
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 8))(*(undefined4 *)(in_ecx + 0x14),param_3,uVar2,puVar3);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_0041f500 */
uint F_0041f500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x41f500u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x310];
  int iVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 * this_00;
  int * piVar7;
  int iVar8;
  int * piVar9;
  
  (*(uint *)(gen_frame + 0x308)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30c);
  if ((*(int *)((int)this + 8) == 7) || (*(int *)((int)this + 8) == 7)) {
    uVar4 = *(uint *)((int)this + 8);
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x30c) ^ (uint)(uint)(gen_frame + 0x30c));
    return uVar4;
  }
  *(undefined4 *)((int)this + 0x24) = param_3;
  *(undefined4 *)((int)this + 0x20) = param_2;
  F_0042b630(((undefined1 *)(gen_frame + 0x2b4)));
  if (*(int *)((int)this + 0x9c) != *(int *)((int)this + 0xa0)) {
    F_00415990(this);
  }
  F_0042d4b0(((undefined1 *)(gen_frame + 0x2b4)),0x1000);
  iVar8 = 0;
  (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)0x0;
  if (*(int *)((int)this + 0xc) != 0) {
    do {
      iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0xc + iVar8)));
      iVar3 = *(int *)((int)this + 0x10) + iVar8;
      if (iVar1 != 0) {
        switch((unsigned int)(uintptr_t)(*(undefined4 *)(iVar3 + 0x10))) {
        case 1: ;
          uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0xbc)),"\r\n%s\r\n",iVar1);
          F_0042e360(((undefined1 *)(gen_frame + 0x2b4)),uVar4);
          this_00 = ((undefined1 *)(gen_frame + 0xbc));
          break;
        case 2: ;
          uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x260)),"%s\t%u\r\n",iVar1,*(undefined4 *)(iVar3 + 0x14));
          F_0042e360(((undefined1 *)(gen_frame + 0x2b4)),uVar4);
          this_00 = ((undefined1 *)(gen_frame + 0x260));
          break;
        case 3: ;
          (*(float *)(gen_frame + 0xc)) = *(float *)(iVar3 + 0x14);
          dVar2 = (double)*(float *)(iVar3 + 0x14);
          uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x20c)),"%s\t%f\r\n",iVar1,(int)(ulonglong)gen_d2bits(dVar2),
                               (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
          F_0042e360(((undefined1 *)(gen_frame + 0x2b4)),uVar4);
          this_00 = ((undefined1 *)(gen_frame + 0x20c));
          break;
        case 4: ;
          uVar4 = F_0042a990(*(undefined4 *)(iVar3 + 0x14));
          uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x1b8)),"%s\t%s\r\n",iVar1,uVar4);
          F_0042e360(((undefined1 *)(gen_frame + 0x2b4)),uVar4);
          this_00 = ((undefined1 *)(gen_frame + 0x1b8));
          break;
        default: ;
          goto switchD_0041f59e_default;
        }
        F_0042c880(this_00);
      }
switchD_0041f59e_default: ;
      uVar4 = (int)(*(int * PTR32 *)(gen_frame + 0x10)) + 1;
      iVar8 = iVar8 + 0x20;
      (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)uVar4;
    } while (uVar4 < *(uint *)((int)this + 0xc));
  }
  if (*(int *)((int)this + 0x80) != 0) {
    piVar9 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x7c)));
    (*(int * PTR32 *)(gen_frame + 0x10)) = piVar9;
    if (piVar9 != *(int * PTR32 *)((int)this + 0x7c)) {
      do {
        piVar7 = ((int *)GEN_TOP(**(int * PTR32 *)piVar9[2]));
        (*(int * PTR32 *)(gen_frame + 0x10)) = piVar9;
        if (piVar7 != *(int * PTR32 *)piVar9[2]) {
          do {
            switch((unsigned int)(uintptr_t)(piVar7[6])) {
            case 1: ;
              uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x110)),"\r\n%s\r\n",piVar7[5]);
              F_0042e360(((undefined1 *)(gen_frame + 0x2b4)),uVar4);
              F_0042c880(((undefined1 *)(gen_frame + 0x110)));
              break;
            case 2: ;
              uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x14)),"%s\t%u\r\n",piVar7[5],piVar7[7]);
              F_0042e360(((undefined1 *)(gen_frame + 0x2b4)),uVar4);
              F_0042c880(((undefined1 *)(gen_frame + 0x14)));
              break;
            case 3: ;
              (*(float *)(gen_frame + 0xc)) = gen_bits2f(piVar7[7]);
              dVar2 = ((double)GEN_TOD(gen_bits2f(piVar7[7])));
              uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x68)),"%s\t%f\r\n",piVar7[5],
                                   (int)(ulonglong)gen_d2bits(dVar2),
                                   (int)((ulonglong)gen_d2bits(dVar2) >> 0x20));
              F_0042e360(((undefined1 *)(gen_frame + 0x2b4)),uVar4);
              F_0042c880(((undefined1 *)(gen_frame + 0x68)));
              break;
            case 4: ;
              iVar8 = piVar7[5];
              uVar4 = F_0042a990(piVar7[7]);
              uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x164)),"%s\t%s\r\n",iVar8,uVar4);
              F_0042e360(((undefined1 *)(gen_frame + 0x2b4)),uVar4);
              F_0042c880(((undefined1 *)(gen_frame + 0x164)));
              piVar9 = (*(int * PTR32 *)(gen_frame + 0x10));
            }
            piVar7 = (int *)*piVar7;
          } while (piVar7 != (int *)*(int *)piVar9[2]);
        }
        piVar9 = (int *)*piVar9;
        (*(int * PTR32 *)(gen_frame + 0x10)) = piVar9;
      } while (piVar9 != (int *)*(int *)((int)this + 0x7c));
    }
  }
  uVar4 = F_0042a970(((undefined1 *)(gen_frame + 0x2b4)));
  (*(uint *)(gen_frame + 0x8)) = uVar4;
  uVar5 = F_00406bb0(uVar4,0,0);
  uVar4 = (*(uint *)(gen_frame + 0x8));
  uVar6 = F_0042a990(((undefined1 *)(gen_frame + 0x2b4)));
  F_00c46aa0(uVar5,uVar6,uVar4);
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x14) + 0x10))))
                    (*(int * PTR32 *)((int)this + 0x14),param_1,uVar5,&(*(uint *)(gen_frame + 0x8)));
  *(uint *)((int)this + 8) = uVar4;
  uVar4 = *(uint *)((int)this + 8);
  F_0042c880(((undefined1 *)(gen_frame + 0x2b4)));
  F_00c47745((*(uint *)(gen_frame + 0x308)) ^ (uint)(uint)(gen_frame + 0x30c));
  return uVar4;
}

/* ref: FUN_0041f880 */
uint F_0041f880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x41f880u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  float fVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  byte * pbVar5;
  int iVar6;
  char * pcVar7;
  ulong uVar8;
  byte * pbVar9;
  ulong * puVar10;
  int * piVar11;
  int * piVar12;
  bool bVar13;
  ulonglong uVar14;
  double dVar15;
  
  (*(uint *)(gen_frame + 0xc8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  (*(ulong * PTR32 *)(gen_frame + 0x58)) = (ulong *)param_3;
  (*(int * PTR32 *)(gen_frame + 0x6c)) = param_1;
  (*(char * PTR32 * PTR32 *)(gen_frame + 0x54)) = (char * PTR32 *)0x41f8a8;
  F_0042cbc0(((undefined1 *)(gen_frame + 0x74)),param_3);
  piVar12 = *(int * PTR32 *)*param_1;
  (*(int * PTR32 *)(gen_frame + 0x70)) = piVar12;
  piVar11 = param_1;
  if (piVar12 != (int *)*param_1) {
    do {
      if ((*(int * PTR32 *)(gen_frame + 0x70))[6] == param_2) {
        pbVar9 = (byte *)(*(int * PTR32 *)(gen_frame + 0x70))[5];
        (*(ulong * PTR32 *)(gen_frame + 0x58)) = (ulong *)0x41f8d1;
        pbVar5 = (byte *)F_0042a990(((undefined1 *)(gen_frame + 0x74)));
        do {
          bVar2 = *pbVar9;
          bVar13 = bVar2 < *pbVar5;
          if (bVar2 != *pbVar5) {
LAB_0041f8f3: ;
            iVar6 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
            goto LAB_0041f8f8;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar9[1];
          bVar13 = bVar2 < pbVar5[1];
          if (bVar2 != pbVar5[1]) goto LAB_0041f8f3;
          pbVar9 = pbVar9 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar2 != 0);
        iVar6 = 0;
LAB_0041f8f8: ;
        if ((iVar6 == 0) && (uVar3 = *(uint *)(param_4 + 4), uVar3 < *(uint *)(param_4 + 8))) {
          iVar6 = uVar3 * 0x54 + *(int *)(param_4 + 0x60);
          (*(ulong * PTR32 *)(gen_frame + 0x58)) = (ulong *)iVar6;
          *(uint *)(param_4 + 4) = uVar3 + 1;
          (*(char * PTR32 * PTR32 *)(gen_frame + 0x54)) = (char * PTR32 *)0x41f921;
          F_0042ccf0(((undefined1 *)(gen_frame + 0x74)),iVar6);
          piVar12 = *(int * PTR32 *)*piVar11;
          if (piVar12 != (int *)*piVar11) {
            do {
              pbVar9 = (byte *)piVar12[5];
              (*(ulong * PTR32 *)(gen_frame + 0x58)) = (ulong *)0x41f93b;
              pbVar5 = (byte *)F_0042a990(((undefined1 *)(gen_frame + 0x74)));
              do {
                bVar2 = *pbVar9;
                bVar13 = bVar2 < *pbVar5;
                if (bVar2 != *pbVar5) {
LAB_0041f960: ;
                  iVar6 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                  goto LAB_0041f965;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar9[1];
                bVar13 = bVar2 < pbVar5[1];
                if (bVar2 != pbVar5[1]) goto LAB_0041f960;
                pbVar9 = pbVar9 + 2;
                pbVar5 = pbVar5 + 2;
              } while (bVar2 != 0);
              iVar6 = 0;
LAB_0041f965: ;
              if (iVar6 == 0) goto LAB_0041fa38;
              piVar12 = (int *)*piVar12;
            } while (piVar12 != (int *)*(*(int * PTR32 *)(gen_frame + 0x6c)));
          }
          piVar12 = (*(int * PTR32 *)(gen_frame + 0x70));
          if (*(int *)(param_4 + 4) != 0) {
            *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + -1;
          }
          if (param_2 == 2) {
            iVar6 = *(int *)(param_4 + 4);
            (*(ulong * PTR32 *)(gen_frame + 0x58)) = (ulong *)0x0;
            *(int *)(param_4 + 4) = iVar6 + 1;
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x54)) = (char * PTR32 *)0x0;
            (*(char * PTR32 *)(gen_frame + 0x50)) = (char *)0x41fa06;
            pcVar7 = (char *)F_0042a990(iVar6 * 0x54 + *(int *)(param_4 + 0x60));
            (*(char * PTR32 *)(gen_frame + 0x50)) = pcVar7;
            (*(undefined4 *)(gen_frame + 0x4c)) = 0x41fa0c;
            uVar8 = F_00c4abb6(pcVar7,(*(char * PTR32 * PTR32 *)(gen_frame + 0x54)),(int)(*(ulong * PTR32 *)(gen_frame + 0x58)));
            uVar4 = (*(int * PTR32 *)(gen_frame + 0x70))[7];
            puVar10 = (ulong *)((*(int * PTR32 *)(gen_frame + 0x70)) + 2);
            if ((uVar8 < (uint)(*(int * PTR32 *)(gen_frame + 0x70))[3]) || ((uint)(*(int * PTR32 *)(gen_frame + 0x70))[4] < uVar8)) {
              uVar8 = *puVar10;
            }
            (*(int * PTR32 *)(gen_frame + 0x70))[7] = uVar8;
            if (((undefined *)(*(int * PTR32 *)(gen_frame + 0x70))[8] != (undefined *)0x0) && (uVar4 != uVar8)) {
              (*(ulong * PTR32 *)(gen_frame + 0x58)) = puVar10;
              (*(char * PTR32 * PTR32 *)(gen_frame + 0x54)) = (char * PTR32 *)0x41fa38;
              F_00414670((undefined *)(*(int * PTR32 *)(gen_frame + 0x70))[8],puVar10);
            }
          }
          else if (param_2 == 3) {
            iVar6 = *(int *)(param_4 + 4);
            *(int *)(param_4 + 4) = iVar6 + 1;
            (*(ulong * PTR32 *)(gen_frame + 0x58)) = (ulong *)0x41f9d0;
            pcVar7 = (char *)F_0042a990(iVar6 * 0x54 + *(int *)(param_4 + 0x60));
            (*(ulong * PTR32 *)(gen_frame + 0x58)) = (ulong *)pcVar7;
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x54)) = (char * PTR32 *)0x41f9d6;
            dVar15 = F_00c4acaa(pcVar7);
            fVar1 = (float)dVar15;
            (*(float *)(gen_frame + 0x68)) = fVar1;
            (*(ulong * PTR32 *)(gen_frame + 0x58)) = ((ulong *)(uintptr_t)gen_fl2bits((float)(fVar1)));
            (*(char * PTR32 * PTR32 *)(gen_frame + 0x54)) = (char * PTR32 *)0x41f9ea;
            F_00414ad0((*(int * PTR32 *)(gen_frame + 0x70)) + 2,fVar1);
          }
          else if (param_2 == 4) {
            iVar6 = *(int *)(param_4 + 4);
            *(int *)(param_4 + 4) = iVar6 + 1;
            F_0042cbc0((gen_frame + 0x8),iVar6 * 0x54 + *(int *)(param_4 + 0x60));
            F_00414b60(piVar12 + 2,(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x18)),(*(undefined4 *)(gen_frame + 0x1c)),
                         (*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)),(*(undefined4 *)(gen_frame + 0x28)),(*(undefined4 *)(gen_frame + 0x2c)),(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)),
                         (*(undefined4 *)(gen_frame + 0x3c)),(*(undefined4 *)(gen_frame + 0x40)),(*(undefined4 *)(gen_frame + 0x44)),(*(undefined4 *)(gen_frame + 0x48)),(*(undefined4 *)(gen_frame + 0x4c)),(*(char * PTR32 *)(gen_frame + 0x50)),(*(char * PTR32 * PTR32 *)(gen_frame + 0x54)),
                         (*(ulong * PTR32 *)(gen_frame + 0x58)));
          }
        }
      }
LAB_0041fa38: ;
      piVar12 = (int *)*(*(int * PTR32 *)(gen_frame + 0x70));
      (*(int * PTR32 *)(gen_frame + 0x70)) = piVar12;
      piVar11 = (*(int * PTR32 *)(gen_frame + 0x6c));
    } while (piVar12 != (int *)*(*(int * PTR32 *)(gen_frame + 0x6c)));
  }
  (*(ulong * PTR32 *)(gen_frame + 0x58)) = (ulong *)0x41fa53;
  uVar14 = F_0042c880(((undefined1 *)(gen_frame + 0x74)));
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return (uint)uVar14;
}

/* ref: FUN_0041fa70 */
uint F_0041fa70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x41fa70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = **(int * PTR32 *)((int)this + 0x7c);
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,0x131);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = param_1;
  }
  if (*(int *)((int)this + 0x80) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 0x80) = *(int *)((int)this + 0x80) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_0041fae0 */
uint F_0041fae0(unsigned int gen_a0)
{
  GEN_ENTER(0x41fae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x108b298));
  F_00423610((undefined *)((int)this + 0x60));
  uVar1 = F_0042c880((undefined *)((int)this + 0xc));
  return (uint)uVar1;
}

/* ref: FUN_0041fb00 */
uint F_0041fb00(unsigned int gen_a0)
{
  GEN_ENTER(0x41fb00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x108b298));
  F_00423610((undefined *)((int)this + 0x60));
  uVar1 = F_0042c880((undefined *)((int)this + 0xc));
  return (uint)uVar1;
}

/* ref: Common::Configuration::ArrayParser::vf1 */
uint F_0041fb20(unsigned int gen_a0)
{
  GEN_ENTER(0x41fb20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_01;
  uint uVar4;
  bool bVar5;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  this_00 = this + 0xc;
  uVar4 = 1;
  uVar2 = F_0042bb20(this_00,0);
  if (uVar2 == 0x7b) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x4))," ,-\t\n}",REFG(undefined4, 0x108cc50));
    uVar2 = F_0042e520(this_00,((undefined1 *)(gen_frame + 0x4)),1);
    bVar5 = uVar2 != REFG(undefined4, 0x108cc50);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    if (bVar5) {
      do {
        F_0042cc20(((undefined1 *)(gen_frame + 0x4))," ,-\t\n",REFG(undefined4, 0x108cc50));
        uVar2 = F_0042e520(this_00,((undefined1 *)(gen_frame + 0x4)),uVar4);
        F_0042c880(((undefined1 *)(gen_frame + 0x4)));
        F_0042cc20(((undefined1 *)(gen_frame + 0x4))," ,-\t\n}",REFG(undefined4, 0x108cc50));
        uVar4 = F_0042c8b0(this_00,((undefined1 *)(gen_frame + 0x4)),uVar2 + 1);
        F_0042c880(((undefined1 *)(gen_frame + 0x4)));
        uVar3 = F_0042d2f0(this_00,((undefined1 *)(gen_frame + 0x4)),uVar2,uVar4 - uVar2);
        uVar2 = *(uint *)(this + 100);
        if ((uVar3 < uVar2) && (uVar1 = *(uint *)(this + 0x60), uVar1 <= uVar3)) {
          if (uVar2 == *(uint *)(this + 0x68)) {
            F_00423880(this + 0x60,1);
          }
          this_01 = *(undefined * PTR32 *)(this + 100);
          if (this_01 != (undefined *)0x0) {
            uVar3 = ((int)(uVar3 - uVar1) / 0x54) * 0x54 + *(int *)(this + 0x60);
LAB_0041fc54: ;
            F_0042cbc0(this_01,uVar3);
          }
        }
        else {
          if (uVar2 == *(uint *)(this + 0x68)) {
            F_00423880(this + 0x60,1);
          }
          this_01 = *(undefined * PTR32 *)(this + 100);
          if (this_01 != (undefined *)0x0) goto LAB_0041fc54;
        }
        *(int *)(this + 100) = *(int *)(this + 100) + 0x54;
        F_0042c880(((undefined1 *)(gen_frame + 0x4)));
        F_0042cc20(((undefined1 *)(gen_frame + 0x4))," ,-\t\n}",REFG(undefined4, 0x108cc50));
        uVar2 = F_0042e520(this_00,((undefined1 *)(gen_frame + 0x4)),uVar4);
        bVar5 = uVar2 != REFG(undefined4, 0x108cc50);
        F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      } while (bVar5);
    }
    uVar2 = (*(int *)(this + 100) - *(int *)(this + 0x60)) / 0x54;
    *(uint *)(this + 8) = uVar2;
    if (**(char * PTR32 *)this_00 != '\0') {
      uVar2 = F_0042aca0(this_00);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar2;
}

/* ref: FUN_0041fce0 */
uint F_0041fce0(unsigned int gen_a0)
{
  GEN_ENTER(0x41fce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x108b298));
  F_00423610((undefined *)((int)this + 0x60));
  uVar1 = F_0042c880((undefined *)((int)this + 0xc));
  return (uint)uVar1;
}

/* ref: Common::Configuration::CommandLineParser::vf1 */
uint F_0041fd00(unsigned int gen_a0)
{
  GEN_ENTER(0x41fd00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  undefined1 CVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined * pCVar5;
  uint uVar6;
  undefined * pCVar7;
  undefined * pvVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar10 = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1088158),REFG(undefined4, 0x108cc50));
  this_00 = this + 0xc;
  uVar3 = F_0042e520(this_00,((undefined1 *)(gen_frame + 0x4)),0);
  bVar11 = uVar3 != REFG(undefined4, 0x108cc50);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  if (bVar11) {
    do {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x108815c),REFG(undefined4, 0x108cc50));
      uVar3 = F_0042e520(this_00,((undefined1 *)(gen_frame + 0x4)),uVar10);
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1088160),REFG(undefined4, 0x108cc50));
      uVar10 = F_0042c8b0(this_00,((undefined1 *)(gen_frame + 0x4)),uVar3);
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      uVar4 = F_0042d2f0(this_00,((undefined1 *)(gen_frame + 0x4)),uVar3,3);
      pCVar5 = (undefined *)F_0042a990(uVar4);
      pCVar7 = this + 0x70;
      do {
        CVar1 = *(undefined1 *)pCVar7;
        bVar11 = (byte)CVar1 < (byte)*pCVar5;
        if (CVar1 != *pCVar5) {
LAB_0041fdf0: ;
          iVar9 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_0041fdf5;
        }
        if (CVar1 == (undefined1)0x0) break;
        CVar1 = pCVar7[1];
        bVar11 = (byte)CVar1 < (byte)pCVar5[1];
        if (CVar1 != pCVar5[1]) goto LAB_0041fdf0;
        pCVar7 = pCVar7 + 2;
        pCVar5 = pCVar5 + 2;
      } while (CVar1 != (undefined1)0x0);
      iVar9 = 0;
LAB_0041fdf5: ;
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      if (iVar9 == 0) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1088164),REFG(undefined4, 0x108cc50));
        uVar3 = F_0042c8b0(this_00,((undefined1 *)(gen_frame + 0x4)),uVar3);
        F_0042c880(((undefined1 *)(gen_frame + 0x4)));
        F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1088168),REFG(undefined4, 0x108cc50));
        uVar4 = F_0042c8b0(this_00,((undefined1 *)(gen_frame + 0x4)),uVar3 + 1);
        F_0042c880(((undefined1 *)(gen_frame + 0x4)));
        uVar6 = F_0042d2f0(this_00,((undefined1 *)(gen_frame + 0x4)),uVar3 + 1,(uVar4 - uVar3) + -1);
        uVar3 = *(uint *)(this + 100);
        pCVar7 = this + 0x60;
        if ((uVar6 < uVar3) && (uVar2 = *(uint *)pCVar7, uVar2 <= uVar6)) {
          if (uVar3 == *(uint *)(this + 0x68)) {
            F_00423880(pCVar7,1);
          }
          pvVar8 = *(undefined * PTR32 *)(this + 100);
          if (pvVar8 != (undefined *)0x0) {
            uVar6 = ((int)(uVar6 - uVar2) / 0x54) * 0x54 + *(uint *)pCVar7;
LAB_0041fec8: ;
            F_0042cbc0(pvVar8,uVar6);
          }
        }
        else {
          if (uVar3 == *(uint *)(this + 0x68)) {
            F_00423880(pCVar7,1);
          }
          pvVar8 = *(undefined * PTR32 *)(this + 100);
          if (pvVar8 != (undefined *)0x0) goto LAB_0041fec8;
        }
        *(int *)(this + 100) = *(int *)(this + 100) + 0x54;
        F_0042c880(((undefined1 *)(gen_frame + 0x4)));
        F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x108816c),REFG(undefined4, 0x108cc50));
        uVar3 = F_0042e520(this_00,((undefined1 *)(gen_frame + 0x4)),uVar4);
        F_0042c880(((undefined1 *)(gen_frame + 0x4)));
        F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1088170),REFG(undefined4, 0x108cc50));
        uVar4 = F_0042c8b0(this_00,((undefined1 *)(gen_frame + 0x4)),uVar3);
        F_0042c880(((undefined1 *)(gen_frame + 0x4)));
        uVar4 = F_0042d2f0(this_00,((undefined1 *)(gen_frame + 0x4)),uVar3,uVar4 - uVar3);
        uVar3 = *(uint *)(this + 100);
        if ((uVar4 < uVar3) && (uVar6 = *(uint *)pCVar7, uVar6 <= uVar4)) {
          if (uVar3 == *(uint *)(this + 0x68)) {
            F_00423880(pCVar7,1);
          }
          pvVar8 = *(undefined * PTR32 *)(this + 100);
          if (pvVar8 != (undefined *)0x0) {
            uVar4 = ((int)(uVar4 - uVar6) / 0x54) * 0x54 + *(uint *)pCVar7;
LAB_0041ff97: ;
            F_0042cbc0(pvVar8,uVar4);
          }
        }
        else {
          if (uVar3 == *(uint *)(this + 0x68)) {
            F_00423880(pCVar7,1);
          }
          pvVar8 = *(undefined * PTR32 *)(this + 100);
          if (pvVar8 != (undefined *)0x0) goto LAB_0041ff97;
        }
        *(int *)(this + 100) = *(int *)(this + 100) + 0x54;
        F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x1088158),REFG(undefined4, 0x108cc50));
      uVar3 = F_0042e520(this_00,((undefined1 *)(gen_frame + 0x4)),uVar10);
      bVar11 = uVar3 != REFG(undefined4, 0x108cc50);
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    } while (bVar11);
  }
  uVar3 = (*(int *)(this + 100) - *(int *)(this + 0x60)) * 0x30c30c31;
  *(int *)(this + 8) = (*(int *)(this + 100) - *(int *)(this + 0x60)) / 0x54;
  if (**(char * PTR32 *)this_00 != '\0') {
    uVar3 = F_0042aca0(this_00);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar3;
}

/* ref: FUN_00420030 */
uint F_00420030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x420030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x108b298));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  F_0042cbc0((undefined *)((int)this + 0xc),param_1);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  F_00423790((undefined4 *)((int)this + 0x60),*param_2);
  return (uint)this;
}

/* ref: Common::Configuration::Utf8StringParser::vf1 */
uint F_00420070(unsigned int gen_a0)
{
  GEN_ENTER(0x420070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined * this_01;
  undefined * this_02;
  uint uVar3;
  bool bVar4;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar3 = 0;
  F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x108b1c0),REFG(undefined4, 0x108cc50));
  this_00 = this + 0xc;
  uVar2 = F_0042e520(this_00,((undefined1 *)(gen_frame + 0x4)),0);
  bVar4 = uVar2 != REFG(undefined4, 0x108cc50);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  if (bVar4) {
    do {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x108b1c8),REFG(undefined4, 0x108cc50));
      uVar2 = F_0042e520(this_00,((undefined1 *)(gen_frame + 0x4)),uVar3);
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      uVar3 = F_0042bb20(this_00,uVar2);
      if (uVar3 == 0x3c) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x108b1d0),REFG(undefined4, 0x108cc50));
        uVar3 = F_0042c8b0(this_00,((undefined1 *)(gen_frame + 0x4)),uVar2);
        uVar3 = uVar3 + 1;
      }
      else {
        uVar3 = F_0042bb20(this_00,uVar2);
        if (uVar3 == 0x22) {
          F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x108b1d4),REFG(undefined4, 0x108cc50));
          uVar3 = F_0042c8b0(this_00,((undefined1 *)(gen_frame + 0x4)),uVar2);
          uVar3 = uVar3 + 1;
        }
        else {
          F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x108b1d8),REFG(undefined4, 0x108cc50));
          uVar3 = F_0042c8b0(this_00,((undefined1 *)(gen_frame + 0x4)),uVar2);
        }
      }
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      if (uVar3 == REFG(undefined4, 0x108cc50)) {
        uVar3 = F_0042a970(this_00);
      }
      uVar2 = F_0042d2f0(this_00,((undefined1 *)(gen_frame + 0x4)),uVar2,uVar3 - uVar2);
      this_01 = this + 0x60;
      if ((uVar2 < *(uint *)(this + 100)) && (uVar1 = *(uint *)this_01, uVar1 <= uVar2)) {
        if (*(int *)(this + 100) == *(int *)(this + 0x68)) {
          F_00423880(this_01,1);
        }
        this_02 = *(undefined * PTR32 *)(this + 100);
        if (this_02 != (undefined *)0x0) {
          uVar2 = ((int)(uVar2 - uVar1) / 0x54) * 0x54 + *(int *)(this + 0x60);
LAB_00420205: ;
          F_0042cbc0(this_02,uVar2);
        }
      }
      else {
        if (*(uint *)(this + 100) == *(uint *)(this + 0x68)) {
          F_00423880(this_01,1);
        }
        this_02 = *(undefined * PTR32 *)(this + 100);
        if (this_02 != (undefined *)0x0) goto LAB_00420205;
      }
      *(int *)(this + 100) = *(int *)(this + 100) + 0x54;
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)),&REFG(undefined, 0x108b1c0),REFG(undefined4, 0x108cc50));
      uVar2 = F_0042e520(this_00,((undefined1 *)(gen_frame + 0x4)),uVar3);
      bVar4 = uVar2 != REFG(undefined4, 0x108cc50);
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    } while (bVar4);
  }
  uVar3 = (*(int *)(this + 100) - *(int *)(this + 0x60)) / 0x54;
  *(uint *)(this + 8) = uVar3;
  if (**(char * PTR32 *)this_00 != '\0') {
    uVar3 = F_0042aca0(this_00);
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar3;
}

