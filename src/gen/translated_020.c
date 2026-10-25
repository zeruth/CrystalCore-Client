#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00519dd0 */
uint F_00519dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x519dd0u, gen_a0, gen_a1, gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  int iVar6;
  
  uVar3 = param_2 - 1;
  uVar1 = *param_3;
  iVar6 = 0;
  if ((*param_1 <= uVar1) && (uVar2 = uVar3, uVar4 = uVar3, uVar1 <= param_1[uVar3])) {
    while (4 < uVar2) {
      uVar3 = uVar3 >> 1;
      if (uVar1 == param_1[uVar3]) {
        return uVar3;
      }
      if (uVar1 < param_1[uVar3]) {
        uVar4 = uVar3 - 1;
      }
      else {
        iVar6 = uVar3 + 1;
      }
      uVar3 = uVar4 + iVar6;
      uVar2 = uVar4 - iVar6;
    }
    uVar3 = 0;
    puVar5 = param_1 + iVar6;
    do {
      if (uVar1 == *puVar5) {
        return uVar3 + iVar6;
      }
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar3 <= uVar2);
  }
  return 0xffffffff;
}

/* ref: FUN_00519e70 */
uint F_00519e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x519e70u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00519e80 */
uint F_00519e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x519e80u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00519e90 */
uint F_00519e90(unsigned int gen_a0)
{
  GEN_ENTER(0x519e90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519eb0 */
uint F_00519eb0(unsigned int gen_a0)
{
  GEN_ENTER(0x519eb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519ec0 */
uint F_00519ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x519ec0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519ed0 */
uint F_00519ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x519ed0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519ee0 */
uint F_00519ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x519ee0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519ef0 */
uint F_00519ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x519ef0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519f00 */
uint F_00519f00(unsigned int gen_a0)
{
  GEN_ENTER(0x519f00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519f10 */
uint F_00519f10(unsigned int gen_a0)
{
  GEN_ENTER(0x519f10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519f20 */
uint F_00519f20(unsigned int gen_a0)
{
  GEN_ENTER(0x519f20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519f30 */
uint F_00519f30(unsigned int gen_a0)
{
  GEN_ENTER(0x519f30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519f40 */
uint F_00519f40(unsigned int gen_a0)
{
  GEN_ENTER(0x519f40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519f50 */
uint F_00519f50(unsigned int gen_a0)
{
  GEN_ENTER(0x519f50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519f60 */
uint F_00519f60(unsigned int gen_a0)
{
  GEN_ENTER(0x519f60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519f90 */
uint F_00519f90(unsigned int gen_a0)
{
  GEN_ENTER(0x519f90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519fa0 */
uint F_00519fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x519fa0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519fb0 */
uint F_00519fb0(unsigned int gen_a0)
{
  GEN_ENTER(0x519fb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519fc0 */
uint F_00519fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x519fc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519fd0 */
uint F_00519fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x519fd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519fe0 */
uint F_00519fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x519fe0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519ff0 */
uint F_00519ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x519ff0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a000 */
uint F_0051a000(unsigned int gen_a0)
{
  GEN_ENTER(0x51a000u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a010 */
uint F_0051a010(unsigned int gen_a0)
{
  GEN_ENTER(0x51a010u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a020 */
uint F_0051a020(unsigned int gen_a0)
{
  GEN_ENTER(0x51a020u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a030 */
uint F_0051a030(unsigned int gen_a0)
{
  GEN_ENTER(0x51a030u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a040 */
uint F_0051a040(unsigned int gen_a0)
{
  GEN_ENTER(0x51a040u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a060 */
uint F_0051a060(unsigned int gen_a0)
{
  GEN_ENTER(0x51a060u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a070 */
uint F_0051a070(unsigned int gen_a0)
{
  GEN_ENTER(0x51a070u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a090 */
uint F_0051a090(unsigned int gen_a0)
{
  GEN_ENTER(0x51a090u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a110 */
uint F_0051a110(unsigned int gen_a0)
{
  GEN_ENTER(0x51a110u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a160 */
unsigned int F_0051a160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51a160u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_0051a190 */
unsigned int F_0051a190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51a190u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_0051a1d0 */
unsigned int F_0051a1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51a1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: std::allocator<std::_Container_proxy>::construct_0051a250 */
unsigned int F_0051a250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51a250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_0051a2a0 */
unsigned int F_0051a2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x51a2a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x2d) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x2d) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x2d) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x2d) == '\0');
      *(int *)this = iVar4;
      return 0;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x2d);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x2d);
    }
    if (*(char *)(*(int *)this + 0x2d) != '\0') {
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_0051a300 */
unsigned int F_0051a300(unsigned int gen_a0)
{
  GEN_ENTER(0x51a300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x11) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
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
      return 0;
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
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_0051a3a0 */
unsigned int F_0051a3a0(unsigned int gen_a0)
{
  GEN_ENTER(0x51a3a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
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
      return 0;
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
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_0051a460 */
unsigned int F_0051a460(unsigned int gen_a0)
{
  GEN_ENTER(0x51a460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
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
      return 0;
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
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_0051a4c0 */
unsigned int F_0051a4c0(unsigned int gen_a0)
{
  GEN_ENTER(0x51a4c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
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
      return 0;
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
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_0051a530 */
unsigned int F_0051a530(unsigned int gen_a0)
{
  GEN_ENTER(0x51a530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
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
      return 0;
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
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_0051a5a0 */
unsigned int F_0051a5a0(unsigned int gen_a0)
{
  GEN_ENTER(0x51a5a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
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
      return 0;
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
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_0051a600 */
unsigned int F_0051a600(unsigned int gen_a0)
{
  GEN_ENTER(0x51a600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x21) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
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
      return 0;
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
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_0051a660 */
unsigned int F_0051a660(unsigned int gen_a0)
{
  GEN_ENTER(0x51a660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
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
      return 0;
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
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_0051a6c0 */
unsigned int F_0051a6c0(unsigned int gen_a0)
{
  GEN_ENTER(0x51a6c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x2d) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return 0;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x2d) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x2d) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x2d) == '\0');
      *(int *)this = iVar4;
      return 0;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x2d);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x2d);
    }
    if (*(char *)(*(int *)this + 0x2d) != '\0') {
      return 0;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return 0;
}

/* ref: FUN_0051a720 */
uint F_0051a720(unsigned int gen_a0)
{
  GEN_ENTER(0x51a720u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a730 */
uint F_0051a730(unsigned int gen_a0)
{
  GEN_ENTER(0x51a730u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a740 */
uint F_0051a740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51a740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051a760 */
uint F_0051a760(unsigned int gen_a0)
{
  GEN_ENTER(0x51a760u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a770 */
uint F_0051a770(unsigned int gen_a0)
{
  GEN_ENTER(0x51a770u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a780 */
uint F_0051a780(unsigned int gen_a0)
{
  GEN_ENTER(0x51a780u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a790 */
uint F_0051a790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51a790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051a7b0 */
uint F_0051a7b0(unsigned int gen_a0)
{
  GEN_ENTER(0x51a7b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a7c0 */
uint F_0051a7c0(unsigned int gen_a0)
{
  GEN_ENTER(0x51a7c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a7d0 */
uint F_0051a7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51a7d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051a7f0 */
uint F_0051a7f0(unsigned int gen_a0)
{
  GEN_ENTER(0x51a7f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a800 */
uint F_0051a800(unsigned int gen_a0)
{
  GEN_ENTER(0x51a800u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a810 */
uint F_0051a810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51a810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051a830 */
uint F_0051a830(unsigned int gen_a0)
{
  GEN_ENTER(0x51a830u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a840 */
uint F_0051a840(unsigned int gen_a0)
{
  GEN_ENTER(0x51a840u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a850 */
uint F_0051a850(unsigned int gen_a0)
{
  GEN_ENTER(0x51a850u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a860 */
uint F_0051a860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51a860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051a880 */
uint F_0051a880(unsigned int gen_a0)
{
  GEN_ENTER(0x51a880u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a890 */
uint F_0051a890(unsigned int gen_a0)
{
  GEN_ENTER(0x51a890u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a8a0 */
uint F_0051a8a0(unsigned int gen_a0)
{
  GEN_ENTER(0x51a8a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a8b0 */
uint F_0051a8b0(unsigned int gen_a0)
{
  GEN_ENTER(0x51a8b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a8c0 */
uint F_0051a8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51a8c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051a8e0 */
uint F_0051a8e0(unsigned int gen_a0)
{
  GEN_ENTER(0x51a8e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a8f0 */
uint F_0051a8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x51a8f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a900 */
uint F_0051a900(unsigned int gen_a0)
{
  GEN_ENTER(0x51a900u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a910 */
uint F_0051a910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51a910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051a930 */
uint F_0051a930(unsigned int gen_a0)
{
  GEN_ENTER(0x51a930u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a960 */
uint F_0051a960(unsigned int gen_a0)
{
  GEN_ENTER(0x51a960u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a970 */
uint F_0051a970(unsigned int gen_a0)
{
  GEN_ENTER(0x51a970u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a980 */
unsigned int F_0051a980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51a980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  *(undefined4 *)((int)this + 0xc) = param_2[1];
  *(undefined4 *)((int)this + 0x10) = param_2[2];
  *(undefined4 *)((int)this + 0x14) = param_2[3];
  *(undefined4 *)((int)this + 0x18) = param_2[4];
  *(undefined4 *)((int)this + 0x1c) = param_2[5];
  return 0;
}

/* ref: FUN_0051a9c0 */
uint F_0051a9c0(unsigned int gen_a0)
{
  GEN_ENTER(0x51a9c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a9d0 */
uint F_0051a9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x51a9d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a9e0 */
uint F_0051a9e0(unsigned int gen_a0)
{
  GEN_ENTER(0x51a9e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a9f0 */
uint F_0051a9f0(unsigned int gen_a0)
{
  GEN_ENTER(0x51a9f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051aa00 */
uint F_0051aa00(unsigned int gen_a0)
{
  GEN_ENTER(0x51aa00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051aa10 */
uint F_0051aa10(unsigned int gen_a0)
{
  GEN_ENTER(0x51aa10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051aa20 */
uint F_0051aa20(unsigned int gen_a0)
{
  GEN_ENTER(0x51aa20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051aa80 */
uint F_0051aa80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51aa80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_0051aad0 */
uint F_0051aad0(unsigned int gen_a0)
{
  GEN_ENTER(0x51aad0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051aae0 */
uint F_0051aae0(unsigned int gen_a0)
{
  GEN_ENTER(0x51aae0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051aaf0 */
uint F_0051aaf0(unsigned int gen_a0)
{
  GEN_ENTER(0x51aaf0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051ab00 */
uint F_0051ab00(unsigned int gen_a0)
{
  GEN_ENTER(0x51ab00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051ab10 */
uint F_0051ab10(unsigned int gen_a0)
{
  GEN_ENTER(0x51ab10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051ab20 */
uint F_0051ab20(unsigned int gen_a0)
{
  GEN_ENTER(0x51ab20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051ab30 */
uint F_0051ab30(unsigned int gen_a0)
{
  GEN_ENTER(0x51ab30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051ab40 */
uint F_0051ab40(unsigned int gen_a0)
{
  GEN_ENTER(0x51ab40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051ab50 */
uint F_0051ab50(unsigned int gen_a0)
{
  GEN_ENTER(0x51ab50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051ab60 */
uint F_0051ab60(unsigned int gen_a0)
{
  GEN_ENTER(0x51ab60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051ab70 */
uint F_0051ab70(unsigned int gen_a0)
{
  GEN_ENTER(0x51ab70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051ab80 */
uint F_0051ab80(unsigned int gen_a0)
{
  GEN_ENTER(0x51ab80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051ad80 */
uint F_0051ad80(unsigned int gen_a0)
{
  GEN_ENTER(0x51ad80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051ad90 */
uint F_0051ad90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51ad90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0051adc0 */
uint F_0051adc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51adc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_0051ae10 */
uint F_0051ae10(unsigned int gen_a0)
{
  GEN_ENTER(0x51ae10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051ae30 */
uint F_0051ae30(unsigned int gen_a0)
{
  GEN_ENTER(0x51ae30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051ae40 */
uint F_0051ae40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51ae40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051ae60 */
uint F_0051ae60(unsigned int gen_a0)
{
  GEN_ENTER(0x51ae60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051ae70 */
uint F_0051ae70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51ae70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051ae90 */
uint F_0051ae90(unsigned int gen_a0)
{
  GEN_ENTER(0x51ae90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051aea0 */
uint F_0051aea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51aea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051aec0 */
uint F_0051aec0(unsigned int gen_a0)
{
  GEN_ENTER(0x51aec0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051aed0 */
uint F_0051aed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51aed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051aef0 */
uint F_0051aef0(unsigned int gen_a0)
{
  GEN_ENTER(0x51aef0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051af00 */
uint F_0051af00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51af00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051af20 */
uint F_0051af20(unsigned int gen_a0)
{
  GEN_ENTER(0x51af20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051af30 */
uint F_0051af30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51af30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051af50 */
uint F_0051af50(unsigned int gen_a0)
{
  GEN_ENTER(0x51af50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051af60 */
uint F_0051af60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51af60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051af80 */
uint F_0051af80(unsigned int gen_a0)
{
  GEN_ENTER(0x51af80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051af90 */
uint F_0051af90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51af90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051afb0 */
uint F_0051afb0(unsigned int gen_a0)
{
  GEN_ENTER(0x51afb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051afc0 */
uint F_0051afc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51afc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051afe0 */
uint F_0051afe0(unsigned int gen_a0)
{
  GEN_ENTER(0x51afe0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051aff0 */
uint F_0051aff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51aff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051b010 */
uint F_0051b010(unsigned int gen_a0)
{
  GEN_ENTER(0x51b010u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051b020 */
uint F_0051b020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51b020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051b040 */
uint F_0051b040(unsigned int gen_a0)
{
  GEN_ENTER(0x51b040u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051b050 */
uint F_0051b050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51b050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051b080 */
unsigned int F_0051b080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_0051b0c0 */
uint F_0051b0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0051b0e0 */
uint F_0051b0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0051b100 */
uint F_0051b100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0051b120 */
uint F_0051b120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0051b140 */
uint F_0051b140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0051b160 */
uint F_0051b160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0051b180 */
uint F_0051b180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0051b1a0 */
unsigned int F_0051b1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  return 0;
}

/* ref: FUN_0051b210 */
uint F_0051b210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b210u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0051b250 */
uint F_0051b250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b250u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*in_ecx < *param_2);
}

/* ref: FUN_0051b270 */
byte F_0051b270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0051b2c0 */
uint F_0051b2c0(unsigned int gen_a0)
{
  GEN_ENTER(0x51b2c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051b2d0 */
uint F_0051b2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b2d0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*in_ecx < *param_2);
}

/* ref: FUN_0051b2f0 */
uint F_0051b2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_0051b330 */
unsigned int F_0051b330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return 0;
}

/* ref: FUN_0051b350 */
uint F_0051b350(unsigned int gen_a0)
{
  GEN_ENTER(0x51b350u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051b360 */
uint F_0051b360(unsigned int gen_a0)
{
  GEN_ENTER(0x51b360u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051b370 */
uint F_0051b370(unsigned int gen_a0)
{
  GEN_ENTER(0x51b370u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051b3d0 */
uint F_0051b3d0(unsigned int gen_a0)
{
  GEN_ENTER(0x51b3d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051b4b0 */
uint F_0051b4b0(unsigned int gen_a0)
{
  GEN_ENTER(0x51b4b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)((int)this + 8) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 8));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 8) = 0;
  }
  return uVar1;
}

/* ref: FUN_0051b4f0 */
uint F_0051b4f0(unsigned int gen_a0)
{
  GEN_ENTER(0x51b4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)((int)this + 8) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 8));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 8) = 0;
  }
  return uVar1;
}

/* ref: FUN_0051b570 */
uint F_0051b570(unsigned int gen_a0)
{
  GEN_ENTER(0x51b570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x20) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x20));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  return uVar1;
}

/* ref: FUN_0051b590 */
byte F_0051b590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b590u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  return *param_1 != *param_2;
}

/* ref: FUN_0051b5b0 */
uint F_0051b5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b5b0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_0051b5f0 */
byte F_0051b5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b5f0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  return *param_1 == *param_2;
}

/* ref: FUN_0051b610 */
byte F_0051b610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b610u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx == param_2;
}

/* ref: FUN_0051b630 */
uint F_0051b630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b630u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_0051b6c0 */
uint F_0051b6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b6c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(uint *)(in_ecx + 0x5c) ^ param_2) & 3;
  *(uint *)(in_ecx + 0x5c) = *(uint *)(in_ecx + 0x5c) ^ uVar1;
  return uVar1;
}

/* ref: FUN_0051b710 */
uint F_0051b710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  if (param_1 == 1) {
    piVar2 = (int *)((int)this + 0x88);
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2;
    UNLOCK();
    if (iVar1 != 3) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0051b740 */
uint F_0051b740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b740u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  LOCK();
  uVar1 = *(uint *)(in_ecx + 0x88);
  *(uint *)(in_ecx + 0x88) = param_2;
  UNLOCK();
  return uVar1;
}

/* ref: FUN_0051b760 */
uint F_0051b760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  LOCK();
  uVar1 = *(uint *)((int)this + 0x90);
  *(uint *)((int)this + 0x90) = param_1;
  UNLOCK();
  *(undefined4 *)((int)this + 0x34) = 0xffffffec;
  return uVar1;
}

/* ref: FUN_0051b780 */
byte F_0051b780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if ((*param_1 == 0xb) && (1 < (uint)param_1[0x13])) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xa4))(this);
    if (uVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0051b7b0 */
byte F_0051b7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b7b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if ((*param_1 == 0xb) && (1 < (uint)param_1[0x13])) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xa4))(this);
    if (uVar1 == 2) {
      return 1;
    }
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::ResourceHandleFactory::vf0 */
uint F_0051b8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0051b8f0 */
byte F_0051b8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b8f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x25) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0051b930 */
unsigned int F_0051b930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  while (param_1 < uVar1) {
    LOCK();
    if (uVar1 == *(uint *)this) {
      *(uint *)this = param_1;
    }
    UNLOCK();
    uVar1 = *(uint *)this;
  }
  return 0;
}

/* ref: FUN_0051b970 */
unsigned int F_0051b970(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x51b970u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  uint local_c;
  
  uVar1 = *(uint *)(param_1 + 4);
  local_c = (uint)(longlong)
                  TRUNC((float10)REFG(double, 0x10944b8) * ((float10)param_2 * (float10)REFG(double, 0x10944b8)));
  while (local_c < uVar1) {
    LOCK();
    if (uVar1 == *(uint *)(param_1 + 4)) {
      *(uint *)(param_1 + 4) = local_c;
    }
    UNLOCK();
    uVar1 = *(uint *)(param_1 + 4);
  }
  return 0;
}

/* ref: FUN_0051ba30 */
unsigned int F_0051ba30(unsigned int gen_a0)
{
  GEN_ENTER(0x51ba30u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    iVar2 = F_00c4ef4f((int)*param_1);
    *param_1 = (char)iVar2;
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  return 0;
}

/* ref: FUN_0051ba80 */
uint F_0051ba80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51ba80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0xb0) + param_2;
}

/* ref: FUN_0051bab0 */
uint F_0051bab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51bab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0xa8) + 4 + param_1 * 8))) +
         *(int *)((int)this + 0xb0);
}

/* ref: FUN_0051bad0 */
uint F_0051bad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51bad0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xa8) + param_2 * 8)));
}

/* ref: FUN_0051baf0 */
uint F_0051baf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51baf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0xac) + (uint)(byte)param_1 * 4))) +
         *(int *)((int)this + 0xb0);
}

/* ref: FUN_0051bb10 */
byte F_0051bb10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51bb10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *((byte *)GEN_TOP((*(int *)(in_ecx + 0xac) + 2 + (uint)(byte)param_2 * 4)));
}

/* ref: FUN_0051bb80 */
uint F_0051bb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51bb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (param_1 < *(ushort *)((int)this + 0x1c)) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 0x18) + 4 + param_1 * 0xc)));
  }
  return 0;
}

/* ref: FUN_0051bc10 */
uint F_0051bc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51bc10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((ushort)param_1 == 0xffff) {
    return 0;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  return uVar1 + 4 + (uint)(ushort)param_1 * 8;
}

/* ref: FUN_0051bc40 */
uint F_0051bc40(unsigned int gen_a0)
{
  GEN_ENTER(0x51bc40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
  return uVar1 + 4 + *piVar2 * 8;
}

/* ref: FUN_0051bc60 */
uint F_0051bc60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51bc60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  
  if ((ushort)param_1 == 0xffff) {
    return 0;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
  return uVar1 + 4 + ((uint)(ushort)param_1 + *piVar2) * 8;
}

/* ref: FUN_0051bcc0 */
uint F_0051bcc0(unsigned int gen_a0)
{
  GEN_ENTER(0x51bcc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this)));
  return uVar1 + 4 + *piVar2 * 4;
}

/* ref: FUN_0051bd50 */
byte F_0051bd50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51bd50u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  switch((unsigned int)(uintptr_t)(*param_2)) {
  case 0: ;
    return (byte)(*in_ecx >> 2) & 1;
  case 1: ;
    return (byte)(*in_ecx >> 4) & 1;
  case 2: ;
    return (byte)(*in_ecx >> 3) & 1;
  case 3: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: Client::System::Resource::Handle::ResidentPapTableResourceHandle::ILoadMotionPackAttributeChecker::vf1 */
byte F_0051bdd0(void)
{
  GEN_ENTER(0x51bdd0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::ResidentPapTableResourceHandle::ILoadMotionPackAttributeChecker::vf0 */
uint F_0051bde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51bde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1099414));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0051be40 */
uint F_0051be40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51be40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  return 0x10;
}

/* ref: FUN_0051bec0 */
uint F_0051bec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51bec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0x20) = *param_1;
  *(undefined4 *)((int)this + 0x24) = param_1[1];
  *(undefined4 *)((int)this + 0x28) = param_1[2];
  *(undefined4 *)((int)this + 0x2c) = param_1[3];
  *(undefined4 *)((int)this + 0x30) = param_1[4];
  *(undefined4 *)((int)this + 0x34) = param_1[5];
  *(undefined4 *)((int)this + 0x38) = param_1[6];
  F_00c49908(this,0x20,param_1 + 7);
  return 0x2c;
}

/* ref: FUN_0051bf10 */
uint F_0051bf10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51bf10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_00c49908(this,0x20,param_1);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x28);
  return 0x30;
}

/* ref: FUN_0051bf60 */
uint F_0051bf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51bf60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_00c49908(this,0x20,param_1);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return 0x40;
}

/* ref: FUN_0051bfd0 */
uint F_0051bfd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51bfd0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_0051bfe0 */
uint F_0051bfe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51bfe0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_0051bff0 */
uint F_0051bff0(unsigned int gen_a0)
{
  GEN_ENTER(0x51bff0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0051c020 */
uint F_0051c020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51c020u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_0051c040 */
byte F_0051c040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51c040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0051c090 */
uint F_0051c090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51c090u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0xcb);
  return (uint)uVar1;
}

/* ref: FUN_0051c0e0 */
uint F_0051c0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51c0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x3c,0xd6);
  return (uint)uVar1;
}

/* ref: FUN_0051c110 */
uint F_0051c110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51c110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0051c130 */
uint F_0051c130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51c130u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xcb);
  return (uint)uVar1;
}

/* ref: FUN_0051c160 */
uint F_0051c160(unsigned int gen_a0)
{
  GEN_ENTER(0x51c160u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_0051c170 */
uint F_0051c170(unsigned int gen_a0)
{
  GEN_ENTER(0x51c170u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_0051c180 */
uint F_0051c180(unsigned int gen_a0)
{
  GEN_ENTER(0x51c180u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051c190 */
uint F_0051c190(unsigned int gen_a0)
{
  GEN_ENTER(0x51c190u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_0051c1a0 */
uint F_0051c1a0(unsigned int gen_a0)
{
  GEN_ENTER(0x51c1a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_0051c1b0 */
uint F_0051c1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51c1b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0xcb);
  return uVar1;
}

/* ref: FUN_0051c1e0 */
uint F_0051c1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51c1e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0051c1f0 */
byte F_0051c1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51c1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0051c210 */
byte F_0051c210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51c210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0051c240 */
uint F_0051c240(unsigned int gen_a0)
{
  GEN_ENTER(0x51c240u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    param_1 = uVar3;
  }
  return param_1;
}

/* ref: FUN_0051c260 */
uint F_0051c260(unsigned int gen_a0)
{
  GEN_ENTER(0x51c260u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    param_1 = piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_0051c290 */
uint F_0051c290(unsigned int gen_a0)
{
  GEN_ENTER(0x51c290u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x38;
}

/* ref: FUN_0051c2a0 */
uint F_0051c2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x51c2a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x39;
}

/* ref: FUN_0051c2b0 */
uint F_0051c2b0(unsigned int gen_a0)
{
  GEN_ENTER(0x51c2b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051c2c0 */
uint F_0051c2c0(unsigned int gen_a0)
{
  GEN_ENTER(0x51c2c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_0051c2d0 */
uint F_0051c2d0(unsigned int gen_a0)
{
  GEN_ENTER(0x51c2d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_0051c2e0 */
uint F_0051c2e0(unsigned int gen_a0)
{
  GEN_ENTER(0x51c2e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0051c2f0 */
uint F_0051c2f0(unsigned int gen_a0)
{
  GEN_ENTER(0x51c2f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x39)));
  uVar2 = *(uint *)(param_1 + 8);
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x39);
    param_1 = uVar3;
  }
  return param_1;
}

/* ref: FUN_0051c310 */
uint F_0051c310(unsigned int gen_a0)
{
  GEN_ENTER(0x51c310u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)(*param_1 + 0x39);
  piVar2 = (int *)*param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x39);
    param_1 = piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_0051c350 */
unsigned int F_0051c350(unsigned int gen_a0)
{
  GEN_ENTER(0x51c350u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0051c3a0 */
uint F_0051c3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51c3a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0051c3b0 */
unsigned int F_0051c3b0(unsigned int gen_a0)
{
  GEN_ENTER(0x51c3b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x39) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x39) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x39);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x39);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x39);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x39);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_0051c400 */
uint F_0051c400(unsigned int gen_a0)
{
  GEN_ENTER(0x51c400u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051c410 */
uint F_0051c410(unsigned int gen_a0)
{
  GEN_ENTER(0x51c410u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051c430 */
uint F_0051c430(unsigned int gen_a0)
{
  GEN_ENTER(0x51c430u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051c460 */
uint F_0051c460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51c460u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x1c,0xcb);
  return (uint)uVar1;
}

/* ref: FUN_0051c4a0 */
uint F_0051c4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51c4a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_0051c520 */
uint F_0051c520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51c520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)this = 0;
  F_00c48350((undefined *)((int)this + 4),0,0x104);
  F_00c49908((undefined *)((int)this + 4),0x103,param_1);
  *(int *)this = *(int *)this + 1;
  return (uint)this;
}

/* ref: FUN_0051c570 */
uint F_0051c570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51c570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return *((int *)GEN_TOP((*(int *)((int)this + 0xd4) + (uint)(ushort)param_1 * 4))) + 8 +
         *(int *)((int)this + 0xa8);
}

/* ref: Client::System::Resource::Handle::ModelResourceHandleFactory::vf2 */
uint F_0051c5a0(void)
{
  GEN_ENTER(0x51c5a0u, 0u, 0u, 0u, 0u);
  return 0x180;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandleFactory::vf0 */
uint F_0051c5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51c5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandleFactory::vf2 */
uint F_0051c610(void)
{
  GEN_ENTER(0x51c610u, 0u, 0u, 0u, 0u);
  return 0x104;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandleFactory::vf0 */
uint F_0051c620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51c620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::MaterialResourceHandleFactory::vf2 */
uint F_0051c670(void)
{
  GEN_ENTER(0x51c670u, 0u, 0u, 0u, 0u);
  return 0xc4;
}

/* ref: Client::System::Resource::Handle::MaterialResourceHandleFactory::vf0 */
uint F_0051c680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51c680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ShaderCodeResourceHandleFactory::vf2 */
uint F_0051c6c0(void)
{
  GEN_ENTER(0x51c6c0u, 0u, 0u, 0u, 0u);
  return 0xa4;
}

/* ref: Client::System::Resource::Handle::ShaderCodeResourceHandleFactory::vf0 */
uint F_0051c6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51c6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ShaderPackageResourceHandleFactory::vf2 */
uint F_0051c730(void)
{
  GEN_ENTER(0x51c730u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::ShaderPackageResourceHandleFactory::vf0 */
uint F_0051c740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51c740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::TerrainResourceHandleFactory::vf2 */
uint F_0051c780(void)
{
  GEN_ENTER(0x51c780u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::TerrainResourceHandleFactory::vf0 */
uint F_0051c7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51c7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::GrassZoneDataResourceHandleFactory::vf2 */
uint F_0051c7f0(void)
{
  GEN_ENTER(0x51c7f0u, 0u, 0u, 0u, 0u);
  return 0x104;
}

/* ref: Client::System::Resource::Handle::GrassZoneDataResourceHandleFactory::vf0 */
uint F_0051c800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51c800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::GrassGridDataResourceHandleFactory::vf2 */
uint F_0051c850(void)
{
  GEN_ENTER(0x51c850u, 0u, 0u, 0u, 0u);
  return 0x3c4;
}

/* ref: Client::System::Resource::Handle::GrassGridDataResourceHandleFactory::vf0 */
uint F_0051c860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51c860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::EnvSetResourceHandleFactory::vf2 */
uint F_0051c8a0(void)
{
  GEN_ENTER(0x51c8a0u, 0u, 0u, 0u, 0u);
  return 0xa4;
}

/* ref: Client::System::Resource::Handle::EnvSetResourceHandleFactory::vf0 */
uint F_0051c8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51c8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::SoundSetResourceHandleFactory::vf2 */
uint F_0051c900(void)
{
  GEN_ENTER(0x51c900u, 0u, 0u, 0u, 0u);
  return 0xa4;
}

/* ref: Client::System::Resource::Handle::SoundSetResourceHandleFactory::vf0 */
uint F_0051c920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51c920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::AmbientSetResourceHandleFactory::vf2 */
uint F_0051c960(void)
{
  GEN_ENTER(0x51c960u, 0u, 0u, 0u, 0u);
  return 0xa4;
}

/* ref: Client::System::Resource::Handle::AmbientSetResourceHandleFactory::vf0 */
uint F_0051c980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51c980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ObjectBehaviorSetResourceHandleFactory::vf2 */
uint F_0051c9c0(void)
{
  GEN_ENTER(0x51c9c0u, 0u, 0u, 0u, 0u);
  return 0xa4;
}

/* ref: Client::System::Resource::Handle::ObjectBehaviorSetResourceHandleFactory::vf0 */
uint F_0051c9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51c9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::SkyVisibilityResourceHandleFactory::vf2 */
uint F_0051ca20(void)
{
  GEN_ENTER(0x51ca20u, 0u, 0u, 0u, 0u);
  return 0xa4;
}

/* ref: Client::System::Resource::Handle::SkyVisibilityResourceHandleFactory::vf0 */
uint F_0051ca40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51ca40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ClipAABBResourceHandleFactory::vf2 */
uint F_0051ca80(void)
{
  GEN_ENTER(0x51ca80u, 0u, 0u, 0u, 0u);
  return 0xa4;
}

/* ref: Client::System::Resource::Handle::ClipAABBResourceHandleFactory::vf0 */
uint F_0051caa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51caa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::AttachOffsetResourceHandleFactory::vf2 */
uint F_0051cae0(void)
{
  GEN_ENTER(0x51cae0u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::AttachOffsetResourceHandleFactory::vf0 */
uint F_0051cb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51cb00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::PreBoneDeformerResourceHandleFactory::vf2 */
uint F_0051cb50(void)
{
  GEN_ENTER(0x51cb50u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::PreBoneDeformerResourceHandleFactory::vf0 */
uint F_0051cb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51cb60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::EquipmentParameterResourceHandleFactory::vf2 */
uint F_0051cbb0(void)
{
  GEN_ENTER(0x51cbb0u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::EquipmentParameterResourceHandleFactory::vf0 */
uint F_0051cbc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51cbc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::CharaMakeParameterResourceHandleFactory::vf2 */
uint F_0051cc10(void)
{
  GEN_ENTER(0x51cc10u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::CharaMakeParameterResourceHandleFactory::vf0 */
uint F_0051cc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51cc20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ImageChangeDataResourceHandleFactory::vf2 */
uint F_0051cc70(void)
{
  GEN_ENTER(0x51cc70u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::ImageChangeDataResourceHandleFactory::vf0 */
uint F_0051cc80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51cc80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ExSkeletonTableResourceHandleFactory::vf2 */
uint F_0051ccd0(void)
{
  GEN_ENTER(0x51ccd0u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::ExSkeletonTableResourceHandleFactory::vf0 */
uint F_0051cce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51cce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::EquipmentDeformerParameterResourceHandleFactory::vf2 */
uint F_0051cd30(void)
{
  GEN_ENTER(0x51cd30u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::EquipmentDeformerParameterResourceHandleFactory::vf0 */
uint F_0051cd40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51cd40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::WeaponTypeDataResourceHandleFactory::vf2 */
uint F_0051cd90(void)
{
  GEN_ENTER(0x51cd90u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::WeaponTypeDataResourceHandleFactory::vf0 */
uint F_0051cda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51cda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::WeaponAttachOffsetExistResourceHandleFactory::vf2 */
uint F_0051cdf0(void)
{
  GEN_ENTER(0x51cdf0u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::WeaponAttachOffsetExistResourceHandleFactory::vf0 */
uint F_0051ce00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51ce00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::SkeletonResourceHandleFactory::vf2 */
uint F_0051ce50(void)
{
  GEN_ENTER(0x51ce50u, 0u, 0u, 0u, 0u);
  return 0x110;
}

/* ref: Client::System::Resource::Handle::SkeletonResourceHandleFactory::vf0 */
uint F_0051ce60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51ce60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::PartialAnimationPackResourceHandleFactory::vf2 */
uint F_0051ceb0(void)
{
  GEN_ENTER(0x51ceb0u, 0u, 0u, 0u, 0u);
  return 0xec;
}

/* ref: Client::System::Resource::Handle::PartialAnimationPackResourceHandleFactory::vf0 */
uint F_0051cec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51cec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::LookAtIkResourceHandleFactory::vf2 */
uint F_0051cf00(void)
{
  GEN_ENTER(0x51cf00u, 0u, 0u, 0u, 0u);
  return 0xe0;
}

/* ref: Client::System::Resource::Handle::LookAtIkResourceHandleFactory::vf0 */
uint F_0051cf20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51cf20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::AutoShakeIkResourceHandleFactory::vf2 */
uint F_0051cf60(void)
{
  GEN_ENTER(0x51cf60u, 0u, 0u, 0u, 0u);
  return 0x1d4;
}

/* ref: Client::System::Resource::Handle::AutoShakeIkResourceHandleFactory::vf0 */
uint F_0051cf80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51cf80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::SkeletonParamResourceHandleFactory::vf2 */
uint F_0051cfd0(void)
{
  GEN_ENTER(0x51cfd0u, 0u, 0u, 0u, 0u);
  return 0x108;
}

/* ref: Client::System::Resource::Handle::SkeletonParamResourceHandleFactory::vf0 */
uint F_0051cfe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51cfe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ResidentPapTableResourceHandleFactory::vf2 */
uint F_0051d030(void)
{
  GEN_ENTER(0x51d030u, 0u, 0u, 0u, 0u);
  return 200;
}

/* ref: Client::System::Resource::Handle::ResidentPapTableResourceHandleFactory::vf0 */
uint F_0051d040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51d040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ElementIdResourceHandleFactory::vf2 */
uint F_0051d090(void)
{
  GEN_ENTER(0x51d090u, 0u, 0u, 0u, 0u);
  return 0xa8;
}

/* ref: Client::System::Resource::Handle::ElementIdResourceHandleFactory::vf0 */
uint F_0051d0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51d0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::AnimationExchangeTableResourceHandleFactory::vf2 */
uint F_0051d0f0(void)
{
  GEN_ENTER(0x51d0f0u, 0u, 0u, 0u, 0u);
  return 0xb0;
}

/* ref: Client::System::Resource::Handle::AnimationExchangeTableResourceHandleFactory::vf0 */
uint F_0051d100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51d100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::MotionLineTableResourceHandleFactory::vf2 */
uint F_0051d150(void)
{
  GEN_ENTER(0x51d150u, 0u, 0u, 0u, 0u);
  return 0xc4;
}

/* ref: Client::System::Resource::Handle::MotionLineTableResourceHandleFactory::vf0 */
uint F_0051d160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51d160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::AnimationWorkTableResourceHandleFactory::vf2 */
uint F_0051d1b0(void)
{
  GEN_ENTER(0x51d1b0u, 0u, 0u, 0u, 0u);
  return 0xc0;
}

/* ref: Client::System::Resource::Handle::AnimationWorkTableResourceHandleFactory::vf0 */
uint F_0051d1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51d1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ApricotResourceHandleFactory::vf2 */
uint F_0051d210(void)
{
  GEN_ENTER(0x51d210u, 0u, 0u, 0u, 0u);
  return 0xa4;
}

/* ref: Client::System::Resource::Handle::ApricotResourceHandleFactory::vf0 */
uint F_0051d220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51d220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ApricotTextureResourceHandleFactory::vf2 */
uint F_0051d270(void)
{
  GEN_ENTER(0x51d270u, 0u, 0u, 0u, 0u);
  return 0xa8;
}

/* ref: Client::System::Resource::Handle::ApricotTextureResourceHandleFactory::vf0 */
uint F_0051d280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51d280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::SoundResourceHandleFactory::vf2 */
uint F_0051d2d0(void)
{
  GEN_ENTER(0x51d2d0u, 0u, 0u, 0u, 0u);
  return 0xb0;
}

/* ref: Client::System::Resource::Handle::SoundResourceHandleFactory::vf0 */
uint F_0051d2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51d2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::CollisionMeshResourceHandleFactory::vf2 */
uint F_0051d320(void)
{
  GEN_ENTER(0x51d320u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::CollisionMeshResourceHandleFactory::vf0 */
uint F_0051d340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51d340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::BonePhysicsResourceHandleFactory::vf2 */
uint F_0051d390(void)
{
  GEN_ENTER(0x51d390u, 0u, 0u, 0u, 0u);
  return 0xd4;
}

/* ref: Client::System::Resource::Handle::BonePhysicsResourceHandleFactory::vf0 */
uint F_0051d3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51d3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::CutSceneResourceHandleFactory::vf2 */
uint F_0051d3e0(void)
{
  GEN_ENTER(0x51d3e0u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::CutSceneResourceHandleFactory::vf0 */
uint F_0051d400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51d400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::TimeLineResourceHandleFactory::vf2 */
uint F_0051d440(void)
{
  GEN_ENTER(0x51d440u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::TimeLineResourceHandleFactory::vf0 */
uint F_0051d460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51d460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ControlPointResourceHandleFactory::vf2 */
uint F_0051d4a0(void)
{
  GEN_ENTER(0x51d4a0u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::ControlPointResourceHandleFactory::vf0 */
uint F_0051d4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51d4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::CameraShakeResourceHandleFactory::vf2 */
uint F_0051d500(void)
{
  GEN_ENTER(0x51d500u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::CameraShakeResourceHandleFactory::vf0 */
uint F_0051d520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51d520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::LevelSceneResourceHandleFactory::vf2 */
uint F_0051d560(void)
{
  GEN_ENTER(0x51d560u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::LevelSceneResourceHandleFactory::vf0 */
uint F_0051d580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51d580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::LayerGroupResourceHandleFactory::vf2 */
uint F_0051d5c0(void)
{
  GEN_ENTER(0x51d5c0u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::LayerGroupResourceHandleFactory::vf0 */
uint F_0051d5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51d5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::SharedGroupResourceHandleFactory::vf2 */
uint F_0051d620(void)
{
  GEN_ENTER(0x51d620u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::SharedGroupResourceHandleFactory::vf0 */
uint F_0051d640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51d640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::NaviMeshResourceHandleFactory::vf2 */
uint F_0051d680(void)
{
  GEN_ENTER(0x51d680u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::NaviMeshResourceHandleFactory::vf0 */
uint F_0051d6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51d6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ExlResourceHandleFactory::vf2 */
uint F_0051d6e0(void)
{
  GEN_ENTER(0x51d6e0u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::ExlResourceHandleFactory::vf0 */
uint F_0051d700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51d700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ExhResourceHandleFactory::vf2 */
uint F_0051d740(void)
{
  GEN_ENTER(0x51d740u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::ExhResourceHandleFactory::vf0 */
uint F_0051d760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51d760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ExdResourceHandleFactory::vf2 */
uint F_0051d7a0(void)
{
  GEN_ENTER(0x51d7a0u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::ExdResourceHandleFactory::vf0 */
uint F_0051d7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51d7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::HardwareCursorResourceHandleFactory::vf2 */
uint F_0051d800(void)
{
  GEN_ENTER(0x51d800u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::HardwareCursorResourceHandleFactory::vf0 */
uint F_0051d820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51d820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::CursorResourceHandleFactory::vf2 */
uint F_0051d860(void)
{
  GEN_ENTER(0x51d860u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::CursorResourceHandleFactory::vf0 */
uint F_0051d880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51d880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::PNGResourceHandleFactory::vf2 */
uint F_0051d8c0(void)
{
  GEN_ENTER(0x51d8c0u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::PNGResourceHandleFactory::vf0 */
uint F_0051d8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51d8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::UgdResourceHandleFactory::vf2 */
uint F_0051d920(void)
{
  GEN_ENTER(0x51d920u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::UgdResourceHandleFactory::vf0 */
uint F_0051d940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51d940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::UldResourceHandleFactory::vf2 */
uint F_0051d980(void)
{
  GEN_ENTER(0x51d980u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::UldResourceHandleFactory::vf0 */
uint F_0051d9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51d9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandleFactory::vf2 */
uint F_0051d9e0(void)
{
  GEN_ENTER(0x51d9e0u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::DefaultResourceHandleFactory::vf0 */
uint F_0051d9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51d9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::LuaResourceHandleFactory::vf2 */
uint F_0051da30(void)
{
  GEN_ENTER(0x51da30u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::LuaResourceHandleFactory::vf0 */
uint F_0051da50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51da50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::LuabResourceHandleFactory::vf2 */
uint F_0051da90(void)
{
  GEN_ENTER(0x51da90u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::LuabResourceHandleFactory::vf0 */
uint F_0051dab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51dab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::FontdataResourceHandleFactory::vf2 */
uint F_0051daf0(void)
{
  GEN_ENTER(0x51daf0u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::FontdataResourceHandleFactory::vf0 */
uint F_0051db10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51db10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::GaijiFontdataResourceHandleFactory::vf2 */
uint F_0051db50(void)
{
  GEN_ENTER(0x51db50u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::GaijiFontdataResourceHandleFactory::vf0 */
uint F_0051db70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51db70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0051dc10 */
uint F_0051dc10(unsigned int gen_a0)
{
  GEN_ENTER(0x51dc10u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_00d91340(in_ecx + 8);
  return in_ecx;
}

/* ref: FUN_0051dc30 */
uint F_0051dc30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51dc30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x1099414));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0051dc70 */
uint F_0051dc70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51dc70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x1099414));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0051dcb0 */
uint F_0051dcb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51dcb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x1099414));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0051dce0 */
uint F_0051dce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51dce0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0051dcf0 */
uint F_0051dcf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51dcf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0051dd50 */
uint F_0051dd50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51dd50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0051dd60 */
uint F_0051dd60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51dd60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0051de00 */
byte F_0051de00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51de00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0051de40 */
byte F_0051de40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51de40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0051de80 */
uint F_0051de80(unsigned int gen_a0)
{
  GEN_ENTER(0x51de80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00518da0(this);
  return (uint)this;
}

/* ref: FUN_0051de90 */
byte F_0051de90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51de90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0051def0 */
byte F_0051def0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51def0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0051df40 */
uint F_0051df40(unsigned int gen_a0)
{
  GEN_ENTER(0x51df40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0051df50 */
uint F_0051df50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51df50u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_0051df70 */
uint F_0051df70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x51df70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined * pvVar1;
  undefined * pvVar2;
  uint uVar3;
  gen_size32 _MaxCount;
  
  if ((param_3 != 0) || (*(uint *)((int)this + 0x10) < param_2)) {
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
    param_2 = 0xffffffff;
  }
  return param_2;
}

/* ref: FUN_0051e090 */
uint F_0051e090(unsigned int gen_a0)
{
  GEN_ENTER(0x51e090u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0051e0a0 */
uint F_0051e0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51e0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0051e0b0 */
uint F_0051e0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51e0b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0051e100 */
unsigned int F_0051e100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51e100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*((char *)GEN_TOP((*(int *)(iVar1 + 8) + 0x15))) == '\0') {
    *((int * PTR32 *)GEN_TOP((*(int *)(iVar1 + 8) + 4))) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
  if (param_1 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar1;
    *(int * PTR32 *)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return 0;
  }
  piVar2 = (int *)param_1[1];
  if (param_1 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int * PTR32 *)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return 0;
  }
  *piVar2 = iVar1;
  *(int * PTR32 *)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
  return 0;
}

/* ref: FUN_0051e160 */
uint F_0051e160(unsigned int gen_a0)
{
  GEN_ENTER(0x51e160u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0051e170 */
uint F_0051e170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51e170u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_0051e1e0 */
uint F_0051e1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51e1e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0051e1f0 */
uint F_0051e1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x51e1f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005190d0(this);
  return (uint)this;
}

/* ref: FUN_0051e200 */
uint F_0051e200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51e200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0051e210 */
uint F_0051e210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51e210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_0051e230 */
byte F_0051e230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51e230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0051e280 */
uint F_0051e280(unsigned int gen_a0)
{
  GEN_ENTER(0x51e280u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0051e290 */
uint F_0051e290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51e290u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_0051e2e0 */
uint F_0051e2e0(unsigned int gen_a0)
{
  GEN_ENTER(0x51e2e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0051e320 */
unsigned int F_0051e320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51e320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*((char *)GEN_TOP((*(int *)(iVar1 + 8) + 0x15))) == '\0') {
    *((int * PTR32 *)GEN_TOP((*(int *)(iVar1 + 8) + 4))) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
  if (param_1 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar1;
    *(int * PTR32 *)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return 0;
  }
  piVar2 = (int *)param_1[1];
  if (param_1 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int * PTR32 *)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return 0;
  }
  *piVar2 = iVar1;
  *(int * PTR32 *)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
  return 0;
}

/* ref: FUN_0051e380 */
uint F_0051e380(unsigned int gen_a0)
{
  GEN_ENTER(0x51e380u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0051e3c0 */
unsigned int F_0051e3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51e3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*((char *)GEN_TOP((*(int *)(iVar1 + 8) + 0x21))) == '\0') {
    *((int * PTR32 *)GEN_TOP((*(int *)(iVar1 + 8) + 4))) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
  if (param_1 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar1;
    *(int * PTR32 *)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return 0;
  }
  piVar2 = (int *)param_1[1];
  if (param_1 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int * PTR32 *)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return 0;
  }
  *piVar2 = iVar1;
  *(int * PTR32 *)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
  return 0;
}

/* ref: FUN_0051e420 */
uint F_0051e420(unsigned int gen_a0)
{
  GEN_ENTER(0x51e420u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0051e460 */
unsigned int F_0051e460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51e460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*((char *)GEN_TOP((*(int *)(iVar1 + 8) + 0x11))) == '\0') {
    *((int * PTR32 *)GEN_TOP((*(int *)(iVar1 + 8) + 4))) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
  if (param_1 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar1;
    *(int * PTR32 *)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return 0;
  }
  piVar2 = (int *)param_1[1];
  if (param_1 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int * PTR32 *)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return 0;
  }
  *piVar2 = iVar1;
  *(int * PTR32 *)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
  return 0;
}

/* ref: FUN_0051e4c0 */
uint F_0051e4c0(unsigned int gen_a0)
{
  GEN_ENTER(0x51e4c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0051e4e0 */
byte F_0051e4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51e4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) == *(int *)(param_1 + 8);
}

/* ref: FUN_0051e500 */
uint F_0051e500(unsigned int gen_a0)
{
  GEN_ENTER(0x51e500u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0051e5a0 */
uint F_0051e5a0(unsigned int gen_a0)
{
  GEN_ENTER(0x51e5a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0051e5c0 */
uint F_0051e5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51e5c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0051e5e0 */
unsigned int F_0051e5e0(unsigned int gen_a0)
{
  GEN_ENTER(0x51e5e0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0051e660 */
unsigned int F_0051e660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51e660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*((char *)GEN_TOP((*(int *)(iVar1 + 8) + 0x15))) == '\0') {
    *((int * PTR32 *)GEN_TOP((*(int *)(iVar1 + 8) + 4))) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
  if (param_1 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar1;
    *(int * PTR32 *)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return 0;
  }
  piVar2 = (int *)param_1[1];
  if (param_1 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int * PTR32 *)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return 0;
  }
  *piVar2 = iVar1;
  *(int * PTR32 *)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
  return 0;
}

/* ref: FUN_0051e6c0 */
uint F_0051e6c0(unsigned int gen_a0)
{
  GEN_ENTER(0x51e6c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0051e6f0 */
uint F_0051e6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51e6f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0051e700 */
uint F_0051e700(unsigned int gen_a0)
{
  GEN_ENTER(0x51e700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00519510(this);
  return (uint)this;
}

/* ref: FUN_0051e710 */
uint F_0051e710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51e710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0051e720 */
uint F_0051e720(unsigned int gen_a0)
{
  GEN_ENTER(0x51e720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00519570(this);
  return (uint)this;
}

/* ref: FUN_0051e750 */
uint F_0051e750(unsigned int gen_a0)
{
  GEN_ENTER(0x51e750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005195e0(this);
  return (uint)this;
}

/* ref: FUN_0051e770 */
uint F_0051e770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51e770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0051e780 */
uint F_0051e780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51e780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0051e790 */
uint F_0051e790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51e790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0051e7a0 */
byte F_0051e7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51e7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0051e860 */
uint F_0051e860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51e860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
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

/* ref: FUN_0051e890 */
uint F_0051e890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51e890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x1c;
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

/* ref: FUN_0051e8e0 */
uint F_0051e8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51e8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
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

/* ref: FUN_0051e910 */
uint F_0051e910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51e910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_0051e930 */
undefined4 * F_0051e930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51e930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0051e960 */
undefined4 * F_0051e960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51e960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0051e990 */
uint F_0051e990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51e990u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_0051e9a0 */
uint F_0051e9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51e9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
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

/* ref: FUN_0051e9d0 */
undefined4 * F_0051e9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51e9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0051ea00 */
undefined4 * F_0051ea00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51ea00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0051ea30 */
undefined4 * F_0051ea30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51ea30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0051ea60 */
undefined4 * F_0051ea60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51ea60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x21) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x21) == '\0');
  }
  return puVar2;
}

