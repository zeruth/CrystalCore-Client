#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_004e3ea0 */
uint F_004e3ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e3ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004e3eb0 */
uint F_004e3eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e3eb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_004e1d60(this);
  return (uint)param_1;
}

/* ref: FUN_004e3ed0 */
uint F_004e3ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e3ed0u, gen_a0, gen_a1, gen_a2, 0u);
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
  uVar4 = F_004296a0(uVar5 + 1,0,0x32);
  if (param_2 != 0) {
    pvVar3 = this;
    if (0xf < *(uint *)((int)this + 0x14)) {
      pvVar3 = *(undefined * PTR32 *)this;
    }
    F_00c46aa0(uVar4,pvVar3,param_2);
  }
  if (0xf < *(uint *)((int)this + 0x14)) {
    F_00429760(*(undefined4 *)this,*(uint *)((int)this + 0x14) + 1,0x32);
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

/* ref: FUN_004e3f90 */
unsigned int F_004e3f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_004e3f90(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x18,0xc9);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return 0;
}

/* ref: FUN_004e3fd0 */
uint F_004e3fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e3fd0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_004e4030 */
unsigned int F_004e4030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e4030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_004e4030(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x18,0xc9);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return 0;
}

/* ref: FUN_004e4070 */
uint F_004e4070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e4070u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_004e4110 */
uint F_004e4110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4e4110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*(int *)((int)this + 4) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_004e41b0 */
uint F_004e41b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e41b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar4 = puVar3;
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        if ((*(char *)((int)puVar3 + 0x15) != '\0') && (*param_2 < (uint)puVar1[3])) {
          puVar3 = puVar1;
        }
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if (*(char *)((int)puVar3 + 0x15) == '\0') {
    puVar1 = (undefined4 *)*puVar3;
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  }
  if (*(char *)((int)puVar1 + 0x15) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[3]) {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_004e4280 */
uint F_004e4280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e4280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar4 = puVar3;
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        if ((*(char *)((int)puVar3 + 0x15) != '\0') && (*param_2 < (uint)puVar1[3])) {
          puVar3 = puVar1;
        }
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if (*(char *)((int)puVar3 + 0x15) == '\0') {
    puVar1 = (undefined4 *)*puVar3;
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  }
  if (*(char *)((int)puVar1 + 0x15) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[3]) {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_004e4330 */
uint F_004e4330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e4330u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_004e2560(param_1,0,*(undefined4 *)((int)param_1 + 0x10),param_2,
                       (int)pcVar2 - (int)(param_2 + 1));
  return (uint)(uVar3 == 0);
}

/* ref: FUN_004e4370 */
unsigned int F_004e4370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e4370u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    puVar1 = puVar1 + 3;
  }
  return 0;
}

/* ref: FUN_004e43a0 */
unsigned int F_004e43a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e43a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_004e43d0 */
unsigned int F_004e43d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e43d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
        puVar1[2] = *(undefined4 *)(iVar2 + 8 + (int)puVar1);
      }
      puVar1 = puVar1 + 3;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_004e4410 */
unsigned int F_004e4410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e4410u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
        puVar1[2] = *(undefined4 *)(iVar2 + 8 + (int)puVar1);
      }
      puVar1 = puVar1 + 3;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_004e4450 */
uint F_004e4450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4e4450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_00429760(param_4,0x18,0xc9);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
  }
  else if ((char)param_2 == '\0') {
    param_3[2] = param_4;
    if (param_3 == *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
    }
  }
  else {
    *param_3 = param_4;
    if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
      **(int * PTR32 *)((int)this + 4) = (int)param_4;
    }
  }
  cVar1 = *(char *)(param_4[1] + 0x14);
  piVar4 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x14) == '\0') {
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(iVar2 + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x15) == '\0') {
            *(int * PTR32 *)(*piVar4 + 4) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar4;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
              *piVar6 = (int)piVar4;
            }
            else {
              piVar6[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar5;
          piVar5[1] = (int)piVar4;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x15) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar3[2]) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_004e464d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x14) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar2 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar2 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar2;
          }
          else {
            piVar4 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar4[2]) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *(int * PTR32 *)(iVar2 + 8) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x15) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar3) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_004e464d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x14);
  } while( true );
}

/* ref: FUN_004e4680 */
uint F_004e4680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4e4680u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_00429760(param_4,0x18,0xc9);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
  }
  else if ((char)param_2 == '\0') {
    param_3[2] = param_4;
    if (param_3 == *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
    }
  }
  else {
    *param_3 = param_4;
    if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
      **(int * PTR32 *)((int)this + 4) = (int)param_4;
    }
  }
  cVar1 = *(char *)(param_4[1] + 0x14);
  piVar4 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x14) == '\0') {
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(iVar2 + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x15) == '\0') {
            *(int * PTR32 *)(*piVar4 + 4) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar4;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
              *piVar6 = (int)piVar4;
            }
            else {
              piVar6[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar5;
          piVar5[1] = (int)piVar4;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x15) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar3[2]) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_004e487d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x14) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x15))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar2 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar2 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar2;
          }
          else {
            piVar4 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar4[2]) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *(int * PTR32 *)(iVar2 + 8) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x15) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar3) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_004e487d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x14);
  } while( true );
}

/* ref: FUN_004e48b0 */
uint F_004e48b0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e48b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_004e26a0(this);
  return (uint)this;
}

/* ref: FUN_004e48c0 */
uint F_004e48c0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e48c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_004e2700(this);
  return (uint)this;
}

/* ref: FUN_004e48d0 */
unsigned int F_004e48d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e48d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_004e4900 */
unsigned int F_004e4900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e4900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_004e4920 */
unsigned int F_004e4920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e4920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_004e4940 */
uint F_004e4940(unsigned int gen_a0)
{
  GEN_ENTER(0x4e4940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)((int)this + 0x14);
  if (0xf < uVar1) {
    uVar2 = F_00429760(*(undefined4 *)this,uVar1 + 1,0x32);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  return uVar1;
}

/* ref: FUN_004e4990 */
uint F_004e4990(unsigned int gen_a0)
{
  GEN_ENTER(0x4e4990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xc9);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_004e49d0 */
uint F_004e49d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e49d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_004e49f0 */
uint F_004e49f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e49f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_004e4a00 */
uint F_004e4a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e4a00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_004e4a20 */
uint F_004e4a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e4a20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_004e4a30 */
uint F_004e4a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e4a30u, gen_a0, gen_a1, gen_a2, 0u);
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
    F_004e3ed0(this,param_1,*(undefined4 *)((int)this + 0x10));
    return (uint)(param_1 != 0);
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
      F_00429760(uVar2,*(int *)((int)this + 0x14) + 1,0x32);
    }
    *(uint *)((int)this + 0x10) = uVar3;
    *(undefined4 *)((int)this + 0x14) = 0xf;
    *(undefined1 *)(uVar3 + (int)this) = 0;
    return (uint)(param_1 != 0);
  }
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    if (0xf < uVar1) {
      this = *(undefined * PTR32 *)this;
    }
    *(undefined1 *)this = 0;
  }
  return (uint)(param_1 != 0);
}

/* ref: FUN_004e4af0 */
uint F_004e4af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e4af0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x15))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_004e1d00(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x15) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x15) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar3[2];
        *(int * PTR32 *)(piVar3[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar3[1];
        if ((int *)*puVar2 == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_004e4c0a;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x15) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar7;
  }
  else if ((int *)*piVar6 == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar4 = (int *)F_004e1be0(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar5 = F_004e1bc0(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_004e4c0a: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_004e3fd0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(*piVar6 + 0x14) != '\x01') || (*(char *)(piVar6[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x14) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_004e3430((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              F_004e3fd0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_004e4cc8: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_004e3430((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(piVar6[2] + 0x14) == '\x01') && (*(char *)(*piVar6 + 0x14) == '\x01'))
            goto LAB_004e4cc8;
            if (*(char *)(*piVar6 + 0x14) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_004e3fd0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(*piVar6 + 0x14) = 1;
            F_004e3430((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00429760(piVar3,0x18,0xc9);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_004e4d50 */
uint F_004e4d50(unsigned int gen_a0)
{
  GEN_ENTER(0x4e4d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    F_004e3f90(this,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x18,0xc9);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x15);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_004e4db0 */
uint F_004e4db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e4db0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x15))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_004e1d60(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x15) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x15) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar3[2];
        *(int * PTR32 *)(piVar3[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar3[1];
        if ((int *)*puVar2 == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_004e4eca;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x15) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar7;
  }
  else if ((int *)*piVar6 == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar4 = (int *)F_004e1c80(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar5 = F_004e1c60(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_004e4eca: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_004e4070((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(*piVar6 + 0x14) != '\x01') || (*(char *)(piVar6[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x14) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_004e34b0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              F_004e4070((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_004e4f88: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_004e34b0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(piVar6[2] + 0x14) == '\x01') && (*(char *)(*piVar6 + 0x14) == '\x01'))
            goto LAB_004e4f88;
            if (*(char *)(*piVar6 + 0x14) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_004e4070((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(*piVar6 + 0x14) = 1;
            F_004e34b0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00429760(piVar3,0x18,0xc9);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_004e5010 */
uint F_004e5010(unsigned int gen_a0)
{
  GEN_ENTER(0x4e5010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    F_004e4030(this,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x18,0xc9);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x15);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_004e5090 */
uint F_004e5090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e5090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_004e41b0(this,param_1,param_2);
  return param_1;
}

/* ref: FUN_004e50b0 */
uint F_004e50b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e50b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_004e4280(this,param_1,param_2);
  return param_1;
}

/* ref: FUN_004e50f0 */
uint F_004e50f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4e50f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
      F_004e3ed0(this,uVar2,iVar1);
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

/* ref: FUN_004e51e0 */
unsigned int F_004e51e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e51e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_004e5210 */
unsigned int F_004e5210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e5210u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
        puVar1[2] = *(undefined4 *)(iVar2 + 8 + (int)puVar1);
      }
      puVar1 = puVar1 + 3;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_004e5250 */
unsigned int F_004e5250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e5250u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = param_1 - (int)param_3;
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
        puVar1[1] = *(undefined4 *)(iVar2 + 4 + (int)puVar1);
        puVar1[2] = *(undefined4 *)(iVar2 + 8 + (int)puVar1);
      }
      puVar1 = puVar1 + 3;
    } while (iVar2 + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_004e5290 */
unsigned int F_004e5290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e5290u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_004e52c0 */
uint F_004e52c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4e52c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool bVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar1 = (undefined4 *)puVar2[1];
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar1 + 0x15) == '\0') {
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 *)&gen_args[3]) == '\0') {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) < (uint)puVar2[3];
      }
      else {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) <= (uint)puVar2[3];
      }
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
      if (bVar3 == false) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  puVar2 = (undefined4 *)F_004e4450((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_004e5330 */
uint F_004e5330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4e5330u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool bVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar1 = (undefined4 *)puVar2[1];
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar1 + 0x15) == '\0') {
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 *)&gen_args[3]) == '\0') {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) < (uint)puVar2[3];
      }
      else {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) <= (uint)puVar2[3];
      }
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
      if (bVar3 == false) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  puVar2 = (undefined4 *)F_004e4680((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_004e53a0 */
uint F_004e53a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e53a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,0xc9);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_1;
    puVar1[4] = param_1[1];
  }
  return (uint)puVar1;
}

/* ref: FUN_004e53f0 */
uint F_004e53f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e53f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,0xc9);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 5) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_1;
    puVar1[4] = param_1[1];
  }
  return (uint)puVar1;
}

/* ref: FUN_004e5440 */
uint F_004e5440(unsigned int gen_a0)
{
  GEN_ENTER(0x4e5440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)((int)this + 0x14);
  if (0xf < uVar1) {
    uVar2 = F_00429760(*(undefined4 *)this,uVar1 + 1,0x32);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  return uVar1;
}

/* ref: FUN_004e5490 */
uint F_004e5490(unsigned int gen_a0)
{
  GEN_ENTER(0x4e5490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xc9);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_004e54d0 */
uint F_004e54d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4e54d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_004e3350(this,uVar3 + param_2,0xffffffff);
    F_004e3350(this,0,param_2);
    return (uint)this;
  }
  if (uVar3 == 0xffffffff) {
                    
    F_00c4579a("string too long");
  }
  if (*(uint *)((int)this + 0x14) < uVar3) {
    F_004e3ed0(this,uVar3,*(undefined4 *)((int)this + 0x10));
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

/* ref: FUN_004e55e0 */
uint F_004e55e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4e55e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) && (param_3 == *(int * PTR32 *)((int)this + 4))) {
    F_004e4d50(this);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x15);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x15);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x15);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_004e4af0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_004e5680 */
uint F_004e5680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4e5680u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) && (param_3 == *(int * PTR32 *)((int)this + 4))) {
    F_004e5010(this);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x15);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x15);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x15);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_004e4db0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_004e5720 */
uint F_004e5720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e5720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (0xf < *(uint *)((int)this + 0x14)) {
    F_00429760(*(undefined4 *)this,*(uint *)((int)this + 0x14) + 1,0x32);
  }
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004e5780 */
uint F_004e5780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e5780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  
  if ((param_1 & 2) == 0) {
    if (0xf < *(uint *)((int)this + 0x14)) {
      F_00429760(*(undefined4 *)this,*(uint *)((int)this + 0x14) + 1,0x32);
    }
    *(undefined4 *)((int)this + 0x14) = 0xf;
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined1 *)this = 0;
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
    return (uint)this;
  }
  piVar1 = (int *)((int)this + -4);
  iVar3 = *piVar1 + -1;
  if (-1 < iVar3) {
    puVar2 = (undefined4 *)((int)this + *piVar1 * 0x1c + 0x14);
    do {
      if (0xf < (uint)puVar2[-7]) {
        F_00429760(puVar2[-0xc],puVar2[-7] + 1,0x32);
      }
      iVar3 = iVar3 + -1;
      puVar2[-7] = 0xf;
      puVar2[-8] = 0;
      *(undefined1 *)(puVar2 + -0xc) = 0;
      puVar2 = puVar2 + -7;
    } while (-1 < iVar3);
  }
  if ((param_1 & 1) != 0) {
    F_00406b30(piVar1);
  }
  return (uint)piVar1;
}

/* ref: FUN_004e5840 */
uint F_004e5840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e5840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0xc,0,0xc9);
    F_004e5210(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0xc) * 0xc,0xc9);
    }
    *(uint *)((int)this + 8) = param_1 * 0xc + uVar3;
    *(uint *)((int)this + 4) = uVar3 + ((iVar2 - iVar1) / 0xc) * 0xc;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_004e5900 */
uint F_004e5900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e5900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004e54d0(this,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_004e5920 */
uint F_004e5920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4e5920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = param_2;
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 3) {
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      puVar3 = puVar3 + 3;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_004e5970 */
uint F_004e5970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4e5970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = param_2;
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 3) {
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      puVar3 = puVar3 + 3;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_004e59c0 */
uint F_004e59c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e59c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0xc;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_004e5840(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_004e5840(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_004e5a40 */
uint F_004e5a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e5a40u, gen_a0, gen_a1, gen_a2, 0u);
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
          uVar2 = F_004e50f0(this,this,(int)param_1 - *(int *)this,param_2);
          return uVar2;
        }
        uVar2 = F_004e50f0(this,this,(int)param_1 - (int)this,param_2);
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
      F_004e3ed0(this,uVar2,iVar1);
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

/* ref: FUN_004e5b60 */
uint F_004e5b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e5b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0xc,0,0xc9);
    F_004e5250(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0xc) * 0xc,0xc9);
    }
    *(uint *)((int)this + 8) = param_1 * 0xc + uVar3;
    *(uint *)((int)this + 4) = uVar3 + ((iVar2 - iVar1) / 0xc) * 0xc;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_004e5c20 */
uint F_004e5c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e5c20u, gen_a0, gen_a1, gen_a2, 0u);
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
          uVar1 = F_004e54d0(this,this,(int)param_1 - *(int *)this,param_2);
          return uVar1;
        }
        uVar1 = F_004e54d0(this,this,(int)param_1 - (int)this,param_2);
        return uVar1;
      }
    }
  }
  if (param_2 == 0xffffffff) {
                    
    F_00c4579a("string too long");
  }
  if (*(uint *)((int)this + 0x14) < param_2) {
    F_004e3ed0(this,param_2,*(undefined4 *)((int)this + 0x10));
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

/* ref: FUN_004e5d20 */
unsigned int F_004e5d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e5d20u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_004e5d50 */
uint F_004e5d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e5d50u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint * puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar5 = (undefined4 *)F_004296a0(0x18,0,0xc9);
  *puVar5 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar5[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar1 = puVar5 + 3;
  puVar5[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  *(undefined2 *)(puVar5 + 5) = 0;
  if (puVar1 != (uint *)0x0) {
    *puVar1 = *(*(uint * PTR32 *)&gen_args[2]);
    puVar5[4] = (*(uint * PTR32 *)&gen_args[2])[1];
  }
  puVar7 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar6 = (undefined4 *)puVar7[1];
  cVar3 = *(char *)((int)puVar6 + 0x15);
  (*(uint * PTR32 *)&gen_args[2]) = ((uint *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(uint * PTR32 *)&gen_args[2]), 1, 3),1)));
  if (cVar3 == '\0') {
    uVar4 = *puVar1;
    do {
      puVar7 = puVar6;
      uVar2 = puVar7[3];
      (*(uint * PTR32 *)&gen_args[2]) = ((uint *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(uint * PTR32 *)&gen_args[2]), 1, 3),uVar4 < uVar2)));
      if (uVar4 < uVar2) {
        puVar6 = (undefined4 *)*puVar7;
      }
      else {
        puVar6 = (undefined4 *)puVar7[2];
      }
    } while (*(char *)((int)puVar6 + 0x15) == '\0');
  }
  puVar5 = (undefined4 *)F_004e4450((*(undefined * PTR32 *)&gen_args[0]),&(*(uint * PTR32 *)&gen_args[2]),(*(uint * PTR32 *)&gen_args[2]),puVar7,puVar5);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_004e5df0 */
uint F_004e5df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e5df0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint * puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar5 = (undefined4 *)F_004296a0(0x18,0,0xc9);
  *puVar5 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar5[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar1 = puVar5 + 3;
  puVar5[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  *(undefined2 *)(puVar5 + 5) = 0;
  if (puVar1 != (uint *)0x0) {
    *puVar1 = *(*(uint * PTR32 *)&gen_args[2]);
    puVar5[4] = (*(uint * PTR32 *)&gen_args[2])[1];
  }
  puVar7 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  puVar6 = (undefined4 *)puVar7[1];
  cVar3 = *(char *)((int)puVar6 + 0x15);
  (*(uint * PTR32 *)&gen_args[2]) = ((uint *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(uint * PTR32 *)&gen_args[2]), 1, 3),1)));
  if (cVar3 == '\0') {
    uVar4 = *puVar1;
    do {
      puVar7 = puVar6;
      uVar2 = puVar7[3];
      (*(uint * PTR32 *)&gen_args[2]) = ((uint *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(uint * PTR32 *)&gen_args[2]), 1, 3),uVar4 < uVar2)));
      if (uVar4 < uVar2) {
        puVar6 = (undefined4 *)*puVar7;
      }
      else {
        puVar6 = (undefined4 *)puVar7[2];
      }
    } while (*(char *)((int)puVar6 + 0x15) == '\0');
  }
  puVar5 = (undefined4 *)F_004e4680((*(undefined * PTR32 *)&gen_args[0]),&(*(uint * PTR32 *)&gen_args[2]),(*(uint * PTR32 *)&gen_args[2]),puVar7,puVar5);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_004e5e90 */
uint F_004e5e90(unsigned int gen_a0)
{
  GEN_ENTER(0x4e5e90u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = param_1[5];
  if (0xf < uVar1) {
    uVar2 = F_00429760(*param_1,uVar1 + 1,0x32);
    uVar1 = (uint)uVar2;
  }
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  return uVar1;
}

/* ref: FUN_004e5ed0 */
uint F_004e5ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e5ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xc9);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_004e5f10 */
uint F_004e5f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4e5f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_004e54d0(this,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_004e5f50 */
unsigned int F_004e5f50(unsigned int gen_a0)
{
  GEN_ENTER(0x4e5f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0xc) * 0xc,0xc9);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_004e5fa0 */
unsigned int F_004e5fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e5fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0xc) * 0xc,0xc9);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_004e5ff0 */
uint F_004e5ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e5ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_004e55e0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_004e6010 */
uint F_004e6010(unsigned int gen_a0)
{
  GEN_ENTER(0x4e6010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_004e5680(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_004e6030 */
uint F_004e6030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e6030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004e54d0(this,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_004e6090 */
uint F_004e6090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e6090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_1;
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0xc9);
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar3;
    for (puVar4 = *(undefined4 * PTR32 *)this; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
      }
      puVar6 = puVar6 + 1;
    }
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xc9);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_004e6140 */
uint F_004e6140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e6140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  uVar2 = *(uint *)((int)this + 4);
  uVar4 = (int)(uVar2 - *(int *)this) / 0xc;
  if (param_1 < uVar4) {
    uVar4 = *(int *)this + param_1 * 0xc;
    if (uVar4 == uVar2) {
      return param_1 * 3;
    }
  }
  else {
    if (param_1 <= uVar4) {
      return uVar4;
    }
    F_004e59c0(this,param_1 - uVar4);
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar1 = param_1 - ((int)puVar3 - *(int *)this) / 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      puVar3 = puVar3 + 3;
    }
    uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0xc;
    uVar4 = *(int *)((int)this + 4) + (param_1 - uVar2) * 0xc;
  }
  *(uint *)((int)this + 4) = uVar4;
  return uVar2;
}

/* ref: FUN_004e6210 */
uint F_004e6210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e6210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_004e59c0(this,1);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar1) / 0xc) * 0xc)));
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_004e59c0(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
  return (uint)puVar3;
}

/* ref: FUN_004e62a0 */
uint F_004e62a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e62a0u, gen_a0, gen_a1, 0u, 0u);
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
  uVar3 = F_004e5a40(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_004e62d0 */
uint F_004e62d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e62d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0xc;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_004e5b60(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_004e5b60(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_004e6350 */
uint F_004e6350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e6350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_004e6090(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_004e6090(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_004e63c0 */
uint F_004e63c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e63c0u, gen_a0, gen_a1, 0u, 0u);
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
  uVar3 = F_004e5c20(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_004e63f0 */
uint F_004e63f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e63f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004e5d50(this,((undefined1 *)(gen_frame + 0x4)),param_2);
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_004e6410 */
uint F_004e6410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e6410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004e5df0(this,((undefined1 *)(gen_frame + 0x4)),param_2);
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_004e6430 */
uint F_004e6430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e6430u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = param_2[5];
  if (0xf < uVar1) {
    uVar2 = F_00429760(*param_2,uVar1 + 1,0x32);
    uVar1 = (uint)uVar2;
  }
  param_2[5] = 0xf;
  param_2[4] = 0;
  *(undefined1 *)param_2 = 0;
  return uVar1;
}

/* ref: FUN_004e6470 */
uint F_004e6470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4e6470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_004e54d0(this,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_004e64b0 */
unsigned int F_004e64b0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e64b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0xc) * 0xc,0xc9);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_004e6500 */
unsigned int F_004e6500(unsigned int gen_a0)
{
  GEN_ENTER(0x4e6500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0xc) * 0xc,0xc9);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_004e6550 */
uint F_004e6550(unsigned int gen_a0)
{
  GEN_ENTER(0x4e6550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_004e55e0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0xc9);
  return (uint)uVar1;
}

/* ref: FUN_004e6590 */
uint F_004e6590(unsigned int gen_a0)
{
  GEN_ENTER(0x4e6590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_004e5680(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0xc9);
  return (uint)uVar1;
}

/* ref: FUN_004e65f0 */
uint F_004e65f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e65f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004e54d0(this,param_1,0,0xffffffff);
  return (uint)this;
}

/* ref: FUN_004e6610 */
uint F_004e6610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e6610u, gen_a0, gen_a1, 0u, 0u);
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
  uVar3 = F_004e5a40(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return uVar3;
}

/* ref: FUN_004e6640 */
uint F_004e6640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e6640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_004e62d0(this,1);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar1) / 0xc) * 0xc)));
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_004e62d0(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
  return (uint)puVar3;
}

/* ref: FUN_004e66d0 */
uint F_004e66d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e66d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar3 = *(int *)((int)this + 4);
  uVar2 = iVar3 - *(int *)((int)(uintptr_t)this) >> 2;
  if (param_1 < uVar2) {
    iVar1 = *(int *)this + param_1 * 4;
    if (iVar1 != iVar3) {
      uVar2 = F_00c46e20(iVar1,iVar3,0);
      *(int *)((int)this + 4) = iVar1;
      return uVar2;
    }
  }
  else if (uVar2 < param_1) {
    F_004e6350(this,param_1 - uVar2);
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar3 = param_1 - ((int)puVar4 - *(int *)((int)(uintptr_t)this) >> 2); iVar3 != 0; iVar3 = iVar3 + -1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
    uVar2 = *(uint *)((int)this + 4);
    *(uint *)((int)this + 4) = uVar2 + (param_1 - ((int)(uVar2 - *(int *)this) >> 2)) * 4;
  }
  return uVar2;
}

/* ref: FUN_004e6760 */
uint F_004e6760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e6760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_004e6350(this,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_004e6350(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_004e6850 */
uint F_004e6850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e6850u, gen_a0, gen_a1, 0u, 0u);
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
  F_004e5c20(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return (uint)this;
}

/* ref: FUN_004e6890 */
unsigned int F_004e6890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e6890u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined1 *)0x0) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    F_004e54d0(param_1,param_2,0,0xffffffff);
  }
  return 0;
}

/* ref: FUN_004e68c0 */
uint F_004e68c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e68c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  iVar1 = param_1;
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    F_004e54d0(this,iVar1,0,0xffffffff);
    iVar1 = iVar1 + 0x1c;
    this = (undefined *)((int)this + 0x1c);
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_004e6900 */
uint F_004e6900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4e6900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  ulonglong uVar4;
  
  puVar2 = param_1;
  if (param_1 != param_2) {
    puVar3 = param_1 + 5;
    do {
      puVar2 = (undefined4 *)*puVar3;
      if ((undefined4 *)0xf < puVar2) {
        uVar4 = F_00429760(puVar3[-5],(int)puVar2 + 1,0x32);
        puVar2 = (undefined4 *)uVar4;
      }
      *puVar3 = 0xf;
      puVar3[-1] = 0;
      *(undefined1 *)(puVar3 + -5) = 0;
      puVar1 = puVar3 + 2;
      puVar3 = puVar3 + 7;
    } while (puVar1 != param_2);
  }
  return (uint)puVar2;
}

/* ref: FUN_004e6950 */
unsigned int F_004e6950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e6950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    F_004e54d0(param_2,param_3,0,0xffffffff);
  }
  return 0;
}

/* ref: FUN_004e6980 */
unsigned int F_004e6980(unsigned int gen_a0)
{
  GEN_ENTER(0x4e6980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0xc) * 0xc,0xc9);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_004e69d0 */
unsigned int F_004e69d0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e69d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0xc) * 0xc,0xc9);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_004e6a20 */
uint F_004e6a20(unsigned int gen_a0)
{
  GEN_ENTER(0x4e6a20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_004e55e0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0xc9);
  return (uint)uVar1;
}

/* ref: FUN_004e6a60 */
uint F_004e6a60(unsigned int gen_a0)
{
  GEN_ENTER(0x4e6a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_004e5680(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0xc9);
  return (uint)uVar1;
}

/* ref: FUN_004e6aa0 */
uint F_004e6aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e6aa0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),param_1);
  }
  return uVar1;
}

/* ref: FUN_004e6ac0 */
uint F_004e6ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e6ac0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),param_1);
  }
  return uVar1;
}

/* ref: FUN_004e6b60 */
uint F_004e6b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e6b60u, gen_a0, gen_a1, 0u, 0u);
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
  F_004e5c20(this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return (uint)this;
}

/* ref: FUN_004e6ba0 */
unsigned int F_004e6ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e6ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    F_004e54d0(param_2,param_3,0,0xffffffff);
  }
  return 0;
}

/* ref: FUN_004e6bd0 */
unsigned int F_004e6bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e6bd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *(undefined4 *)(param_2 + 0x14) = 0xf;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *param_2 = 0;
    F_004e54d0(param_2,param_3,0,0xffffffff);
  }
  return 0;
}

/* ref: FUN_004e6c00 */
uint F_004e6c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e6c00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  undefined * this;
  
  this = param_3;
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x1c) {
    F_004e54d0(this,iVar1,0,0xffffffff);
    this = (undefined *)((int)this + 0x1c);
  }
  return (uint)this;
}

/* ref: FUN_004e6c30 */
uint F_004e6c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e6c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_004e6900(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_004e6c50 */
uint F_004e6c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4e6c50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined1 * this;
  int iVar1;
  
  this = param_3;
  iVar1 = param_1;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined1 *)0x0) {
      *(undefined4 *)(this + 0x14) = 0xf;
      *(undefined4 *)(this + 0x10) = 0;
      *this = 0;
      F_004e54d0(this,iVar1,0,0xffffffff);
    }
    iVar1 = iVar1 + 0x1c;
    this = this + 0x1c;
  } while (iVar1 != param_2);
  return (uint)this;
}

/* ref: FUN_004e6ca0 */
unsigned int F_004e6ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e6ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096cd0));
  iVar1 = *(int *)((int)this + 0x70);
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 0x78) - iVar1) / 0xc) * 0xc,0xc9);
  }
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10969f4));
  return 0;
}

/* ref: Client::Graphics::Kernel::Device::vf0 */
uint F_004e6d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e6d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_004e6ca0(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),this);
  }
  return (uint)this;
}

/* ref: FUN_004e6d30 */
unsigned int F_004e6d30(unsigned int gen_a0)
{
  GEN_ENTER(0x4e6d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  int local_8;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096cdc));
  local_8 = 2;
  puVar2 = (undefined4 *)((int)this + 0x7c);
  do {
    iVar3 = puVar2[-4];
    if (iVar3 != 0) {
      F_00429760(iVar3,((puVar2[-2] - iVar3) / 0xc) * 0xc,0xc9);
    }
    local_8 = local_8 + -1;
    puVar2[-4] = 0;
    puVar2[-3] = 0;
    puVar2[-2] = 0;
    puVar2 = puVar2 + -4;
  } while (-1 < local_8);
  iVar3 = 2;
  puVar2 = (undefined4 *)((int)this + 0x4c);
  do {
    iVar1 = puVar2[-4];
    if (iVar1 != 0) {
      F_00429760(iVar1,(puVar2[-2] - iVar1 >> 2) * 4,0xc9);
    }
    iVar3 = iVar3 + -1;
    puVar2[-4] = 0;
    puVar2[-3] = 0;
    puVar2[-2] = 0;
    puVar2 = puVar2 + -4;
  } while (-1 < iVar3);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  return 0;
}

/* ref: Client::Graphics::Kernel::Device::DelayedReleaseManager::vf0 */
uint F_004e6df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e6df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_004e6d30(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),this);
  }
  return (uint)this;
}

/* ref: FUN_004e6e20 */
uint F_004e6e20(unsigned int gen_a0)
{
  GEN_ENTER(0x4e6e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_004e55e0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0xc9);
  return (uint)uVar1;
}

/* ref: FUN_004e6e60 */
uint F_004e6e60(unsigned int gen_a0)
{
  GEN_ENTER(0x4e6e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_004e5680(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x18,0xc9);
  return (uint)uVar1;
}

/* ref: FUN_004e6ea0 */
uint F_004e6ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e6ea0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),param_1);
  }
  return uVar1;
}

/* ref: FUN_004e6ec0 */
uint F_004e6ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e6ec0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),param_1);
  }
  return uVar1;
}

/* ref: FUN_004e6ee0 */
uint F_004e6ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e6ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_004e6900(param_1,param_2,(int)this + 0xc,param_2);
  return uVar1;
}

/* ref: FUN_004e6f00 */
uint F_004e6f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4e6f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_004e6c50(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_004e6f30 */
unsigned int F_004e6f30(unsigned int gen_a0)
{
  GEN_ENTER(0x4e6f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096ce4));
  F_004e55e0((undefined *)((int)this + 0x1c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x20),
               *(undefined4 * PTR32 *)((int)this + 0x20));
  F_00429760(*(undefined4 *)((int)this + 0x20),0x18,0xc9);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 4));
  return 0;
}

/* ref: Client::Graphics::Kernel::Device::InputLayoutManager::vf0 */
uint F_004e6f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e6f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096ce4));
  F_004e55e0(this + 0x1c,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)(this + 0x20),*(undefined4 * PTR32 *)(this + 0x20));
  F_00429760(*(undefined4 *)(this + 0x20),0x18,0xc9);
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(this + 4));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),this);
  }
  return (uint)this;
}

/* ref: FUN_004e6fe0 */
uint F_004e6fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e6fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096cec));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x14));
  F_004e5680((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 8),0x18,0xc9);
  return (uint)uVar1;
}

/* ref: Client::Graphics::Kernel::Device::HandleManager::vf0 */
uint F_004e7030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e7030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1096cec));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x14));
  F_004e5680(this + 4,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)(this + 8),*(undefined4 * PTR32 *)(this + 8));
  F_00429760(*(undefined4 *)(this + 8),0x18,0xc9);
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 8) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 8),this);
  }
  return (uint)this;
}

/* ref: FUN_004e7090 */
uint F_004e7090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4e7090u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * this_00;
  
  if (param_2 != param_3) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    this_00 = param_2;
    for (pvVar2 = param_3; pvVar2 != pvVar1; pvVar2 = (undefined *)((int)pvVar2 + 0x1c)) {
      F_004e54d0(this_00,pvVar2,0,0xffffffff);
      this_00 = (undefined *)((int)this_00 + 0x1c);
    }
    F_004e6900(this_00,*(undefined4 *)((int)this + 4),(int)this + 0xc,param_1);
    *(undefined * PTR32 *)((int)this + 4) = this_00;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_004e7100 */
uint F_004e7100(unsigned int gen_a0)
{
  GEN_ENTER(0x4e7100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_004e6900(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x1c) * 0x1c,0xc9)
    ;
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_004e7170 */
uint F_004e7170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4e7170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_004e6c50(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_004e71b0 */
uint F_004e71b0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e71b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_004e7090(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_004e71d0 */
uint F_004e71d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e71d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x1c;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x1c,0,0xc9);
    F_004e6c50(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)this;
    if (*(int *)this != 0) {
      F_004e6900(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,uVar3);
      F_00429760(*(undefined4 *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x1c) * 0x1c,0xc9
                  );
    }
    *(uint *)((int)this + 8) = param_1 * 0x1c + uVar3;
    *(uint *)((int)this + 4) = uVar3 + ((iVar1 - iVar2) / 0x1c) * 0x1c;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_004e72f0 */
uint F_004e72f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e72f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x1c;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x1c;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_004e71d0(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_004e71d0(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_004e7380 */
unsigned int F_004e7380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e7380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined1 * this_00;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_004e72f0(this,1);
    }
    uVar1 = *(int *)this + ((int)(param_1 - uVar2) / 0x1c) * 0x1c;
    this_00 = *(undefined1 * PTR32 *)((int)this + 4);
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_004e72f0(this,1);
    }
    this_00 = *(undefined1 * PTR32 *)((int)this + 4);
    uVar1 = param_1;
  }
  if (this_00 != (undefined1 *)0x0) {
    *(undefined4 *)(this_00 + 0x14) = 0xf;
    *(undefined4 *)(this_00 + 0x10) = 0;
    *this_00 = 0;
    F_004e54d0(this_00,uVar1,0,0xffffffff);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x1c;
  return 0;
}

/* ref: FUN_004e7440 */
unsigned int F_004e7440(float gen_a0)
{
  GEN_ENTER(0x4e7440u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_004e7570 */
uint F_004e7570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e7570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  code * pcVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 != (int *)0x0) {
    uVar4 = param_1[3];
    if (*(int * PTR32 *)((int)this + 200) == param_1) {
      *(uint *)((int)this + 200) = uVar4;
    }
    piVar3 = *(int * PTR32 *)((int)this + 200);
    do {
      piVar2 = piVar3;
      if (piVar2 == (int *)0x0) goto LAB_004e75b5;
      piVar3 = (int *)piVar2[3];
    } while ((int *)piVar2[3] != param_1);
    piVar2[3] = param_1[3];
LAB_004e75b5: ;
    param_1[3] = *(int *)((int)this + 0xc4);
    *(int * PTR32 *)((int)this + 0xc4) = param_1;
    pcVar1 = *(gen_code32 *)(*param_1 + 0xa4);
    *(undefined1 *)(param_1 + 5) = 0;
    (*pcVar1)(param_1,0);
  }
  return uVar4;
}

/* ref: FUN_004e75e0 */
unsigned int F_004e75e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e75e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_004e7600 */
unsigned int F_004e7600(void)
{
  GEN_ENTER(0x4e7600u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_004e7610 */
unsigned int F_004e7610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e7610u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float fVar1;
  
  if (*(char *)(param_1 + 0x1d) == '\0') {
    fVar1 = *(float *)&REFG(undefined, 0x1097254);
    if ((char)param_2 == '\0') {
      fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x24) * (float10)*(float *)(param_1 + 0x20))));
    }
    F_00d2dcf0(fVar1,param_3);
    *(char *)(param_1 + 0xd9) = (char)param_2;
    *(char *)(param_1 + 0xdb) = (char)param_2;
  }
  return 0;
}

/* ref: FUN_004e7660 */
unsigned int F_004e7660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e7660u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(char *)(in_ecx + 0x1d) == '\0') {
    *(undefined1 *)(in_ecx + 0xda) = (undefined1)param_2;
  }
  return 0;
}

/* ref: FUN_004e7680 */
uint F_004e7680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e7680u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(char *)(param_1 + 0x1d) == '\0') {
    if ((*(char *)(param_1 + 0xd9) == '\0') &&
       (((char)param_2 == '\0' || (*(char *)(param_1 + 0xda) == '\0')))) {
      uVar1 = F_00d2dcf0(((float)GEN_TOF(((float10)*(float *)(param_1 + 0x24) *
                                  (float10)*(float *)(param_1 + 0x20)))),param_3);
      *(undefined1 *)(param_1 + 0xdb) = 0;
      return uVar1;
    }
    in_EAX = F_00d2dcf0(*(float *)&REFG(undefined, 0x1097254),param_3);
    *(undefined1 *)(param_1 + 0xdb) = 1;
  }
  return in_EAX;
}

/* ref: FUN_004e76f0 */
unsigned int F_004e76f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e76f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00d2cd90(param_1);
  return 0;
}

/* ref: FUN_004e7710 */
uint F_004e7710(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e7710u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint in_EAX = 0;
  
  if ((*(char *)(param_1 + 0x1d) == '\0') &&
     (*(float *)(param_1 + 0x20) = param_2, *(char *)(param_1 + 0xd9) == '\0')) {
    in_EAX = F_00d2dcf0(((float)GEN_TOF(((float10)*(float *)(param_1 + 0x24) * (float10)param_2))),param_3);
  }
  return in_EAX;
}

/* ref: FUN_004e7750 */
float10 F_004e7750(unsigned int gen_a0)
{
  GEN_ENTER(0x4e7750u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x20);
}

/* ref: FUN_004e7760 */
unsigned int F_004e7760(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e7760u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if ((*(char *)(param_1 + 0x1d) == '\0') &&
     (*(float *)(param_1 + 0x24) = param_2, *(char *)(param_1 + 0xd9) == '\0')) {
    F_00d2dcf0(((float)GEN_TOF(((float10)*(float *)(param_1 + 0x20) * (float10)param_2))),param_3);
  }
  return 0;
}

/* ref: FUN_004e77a0 */
float10 F_004e77a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e77a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x24);
}

/* ref: FUN_004e77b0 */
uint F_004e77b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e77b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  uint in_EAX = 0;
  
  if (*(char *)(param_1 + 0x1d) == '\0') {
    fVar1 = *(float *)&REFG(undefined, 0x1097254);
    if ((char)param_2 == '\0') {
      fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x24) * (float10)*(float *)(param_1 + 0x20))));
    }
    in_EAX = F_00d2dcf0(fVar1,100);
    *(char *)(param_1 + 0xd9) = (char)param_2;
    *(char *)(param_1 + 0xdb) = (char)param_2;
  }
  return in_EAX;
}

/* ref: FUN_004e7800 */
uint F_004e7800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e7800u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xe8);
  *(uint *)(in_ecx + 0xe8) = param_2;
  if (uVar1 != param_2) {
    *(undefined1 *)(in_ecx + 0xf0) = 1;
  }
  return param_2;
}

/* ref: FUN_004e7820 */
unsigned int F_004e7820(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4e7820u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xec) = param_2;
  return 0;
}

/* ref: FUN_004e7840 */
float10 F_004e7840(float gen_a0)
{
  GEN_ENTER(0x4e7840u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_1;
  fVar2 = (float10)*(double *)&REFG(undefined, 0x10972d0);
  if ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(fVar1)) && !(fVar2 < fVar1)) {
    return fVar1;
  }
  if (param_1 <= REFG(float, 0x1096e14)) {
    fVar1 = (float10)((float)GEN_TOF(((float10)1 - (fVar1 - fVar2) / (float10)*(double *)&REFG(undefined, 0x10972c8))));
    return (float10)((float)GEN_TOF((fVar2 + (float10)((float)GEN_TOF((((float10)1 - fVar1 * fVar1) *
                                                    (float10)*(double *)&REFG(undefined, 0x1094788)))))));
  }
  return (float10)REFG(float, 0x1096e18);
}

/* ref: FUN_004e78b0 */
uint F_004e78b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e78b0u, gen_a0, gen_a1, gen_a2, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte * param_3 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  piVar1 = (int *)F_00d2ccf0();
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1,((byte *)(gen_frame + 0x8)));
    *(undefined4 *)param_1 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0));
    *(undefined4 *)param_2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4));
    *(undefined4 *)param_3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8));
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_004e7910 */
uint F_004e7910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e7910u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_004e7920 */
uint F_004e7920(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4e7920u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint in_EAX = 0;
  uint uVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    return in_EAX;
  }
  if (0xf < param_2) {
    return in_EAX;
  }
  if (param_2 == 5) {
    uVar2 = 0xe;
  }
  else {
    if (param_2 != 0xb) goto LAB_004e795d;
    uVar2 = 0xf;
  }
  F_004e7920(param_1,uVar2,param_3,100);
LAB_004e795d: ;
  *(float *)(param_1 + 0x28 + param_2 * 4) = param_3;
  F_00d2ddd0(((undefined1 *)(gen_frame + 0xc)),param_2);
  uVar1 = F_00cbb050(((undefined1 *)(gen_frame + 0xc)),((float)GEN_TOF(((float10)*(float *)(param_1 + 0x68 + param_2 * 4) *
                                       (float10)*(float *)(param_1 + 0x28 + param_2 * 4)))),param_4);
  F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
  return uVar1;
}

/* ref: FUN_004e79b0 */
float10 F_004e79b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e79b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (float10)*(float *)(in_ecx + 0x68 + param_2 * 4);
}

/* ref: FUN_004e79c0 */
uint F_004e79c0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4e79c0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint in_EAX = 0;
  uint uVar1;
  float fVar2;
  undefined4 uVar3;
  
  if (param_2 == 0) {
    return in_EAX;
  }
  if (0xf < param_2) {
    return in_EAX;
  }
  if ((!GEN_ISNAN(param_3) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1097254))) && !(param_3 < *(float *)&REFG(undefined, 0x1097254))) {
    *(float *)(param_1 + 0x68 + param_2 * 4) = param_3;
    if (param_2 == 5) {
      uVar3 = 0xe;
    }
    else {
      if (param_2 != 0xb) goto LAB_004e7a19;
      uVar3 = 0xf;
    }
    F_004e79c0(param_1,uVar3,param_3,100);
  }
LAB_004e7a19: ;
  F_00d2ddd0(((undefined1 *)(gen_frame + 0xc)),param_2);
  fVar2 = REFG(float, 0x1097250);
  if (*(char *)(param_2 + 0xa8 + param_1) != '\0') {
    fVar2 = 0.0;
  }
  uVar1 = F_00cbb050(((undefined1 *)(gen_frame + 0xc)),((float)GEN_TOF((((float10)*(float *)(param_1 + 0x68 + param_2 * 4) *
                                        (float10)*(float *)(param_1 + 0x28 + param_2 * 4)) *
                                       (float10)fVar2))),param_4);
  F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
  return uVar1;
}

/* ref: FUN_004e7a80 */
unsigned int F_004e7a80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4e7a80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_1 != 0) && (param_1 < 0x10)) {
    if (param_1 == 5) {
      F_004e7a80(0xe,param_2);
    }
    else if (param_1 == 0xb) {
      F_004e7a80(0xf,param_2);
    }
    F_00d2ddd0(((undefined1 *)(gen_frame + 0x4)),param_1);
    F_00cbb3e0(((undefined1 *)(gen_frame + 0x4)),1);
    uVar2 = 0;
    uVar1 = F_00cbb250(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x14)));
    F_00cbb950(uVar1,param_2,uVar2);
    F_00cbb890(((undefined1 *)(gen_frame + 0x14)));
    F_00cbaf10(((undefined1 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: FUN_004e7b10 */
byte F_004e7b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e7b10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(byte *)(param_2 + 0xa8 + in_ecx);
}

/* ref: FUN_004e7b30 */
uint F_004e7b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e7b30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_1;
  while( true ) {
    fVar1 = REFG(float, 0x1090708);
    *(char *)((int)this + iVar3 + 0xa8) = (char)param_2;
    uVar2 = F_004e79c0(this,iVar3,fVar1,100);
    if (iVar3 == 5) {
      uVar2 = F_004e7b30(this,0xe,param_2);
      return uVar2;
    }
    if (iVar3 != 0xb) break;
    iVar3 = 0xf;
  }
  return uVar2;
}

/* ref: FUN_004e7b80 */
uint F_004e7b80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4e7b80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  float fVar2;
  
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1097254))) && !(param_2 < *(float *)&REFG(undefined, 0x1097254))) {
    *(float *)(param_1 + 0x6c) = param_2;
  }
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x8)),1);
  fVar2 = REFG(float, 0x1097250);
  if (*(char *)(param_1 + 0xa9) != '\0') {
    fVar2 = 0.0;
  }
  (*(float *)(gen_frame + 0x18)) = fVar2;
  fVar2 = ((float)GEN_TOF((((float10)*(float *)(param_1 + 0x6c) * (float10)*(float *)(param_1 + 0x2c)) *
                 (float10)fVar2)));
  (*(float *)(gen_frame + 0x18)) = fVar2;
  F_00cbb050(((undefined1 *)(gen_frame + 0x8)),fVar2,100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x8)));
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1097254))) && !(param_2 < *(float *)&REFG(undefined, 0x1097254))) {
    *(float *)(param_1 + 0x88) = param_2;
  }
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x8)),8);
  fVar2 = REFG(float, 0x1097250);
  if (*(char *)(param_1 + 0xb0) != '\0') {
    fVar2 = 0.0;
  }
  (*(float *)(gen_frame + 0x18)) = fVar2;
  fVar2 = ((float)GEN_TOF((((float10)*(float *)(param_1 + 0x88) * (float10)*(float *)(param_1 + 0x48)) *
                 (float10)fVar2)));
  (*(float *)(gen_frame + 0x18)) = fVar2;
  F_00cbb050(((undefined1 *)(gen_frame + 0x8)),fVar2,100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x8)));
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1097254))) && !(param_2 < *(float *)&REFG(undefined, 0x1097254))) {
    *(float *)(param_1 + 0x8c) = param_2;
  }
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x8)),9);
  fVar2 = REFG(float, 0x1097250);
  if (*(char *)(param_1 + 0xb1) != '\0') {
    fVar2 = 0.0;
  }
  uVar1 = F_00cbb050(((undefined1 *)(gen_frame + 0x8)),((float)GEN_TOF((((float10)*(float *)(param_1 + 0x8c) *
                                        (float10)*(float *)(param_1 + 0x4c)) * (float10)fVar2))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x8)));
  return uVar1;
}

/* ref: FUN_004e7cc0 */
uint F_004e7cc0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4e7cc0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  float fVar2;
  
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1097254))) && !(param_2 < *(float *)&REFG(undefined, 0x1097254))) {
    *(float *)(param_1 + 0x70) = param_2;
  }
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x8)),2);
  fVar2 = REFG(float, 0x1097250);
  if (*(char *)(param_1 + 0xaa) != '\0') {
    fVar2 = 0.0;
  }
  (*(float *)(gen_frame + 0x18)) = fVar2;
  fVar2 = ((float)GEN_TOF((((float10)*(float *)(param_1 + 0x70) * (float10)*(float *)(param_1 + 0x30)) *
                 (float10)fVar2)));
  (*(float *)(gen_frame + 0x18)) = fVar2;
  F_00cbb050(((undefined1 *)(gen_frame + 0x8)),fVar2,100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x8)));
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1097254))) && !(param_2 < *(float *)&REFG(undefined, 0x1097254))) {
    *(float *)(param_1 + 0x80) = param_2;
  }
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x8)),6);
  fVar2 = REFG(float, 0x1097250);
  if (*(char *)(param_1 + 0xae) != '\0') {
    fVar2 = 0.0;
  }
  (*(float *)(gen_frame + 0x18)) = fVar2;
  fVar2 = ((float)GEN_TOF((((float10)*(float *)(param_1 + 0x80) * (float10)*(float *)(param_1 + 0x40)) *
                 (float10)fVar2)));
  (*(float *)(gen_frame + 0x18)) = fVar2;
  F_00cbb050(((undefined1 *)(gen_frame + 0x8)),fVar2,100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x8)));
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1097254))) && !(param_2 < *(float *)&REFG(undefined, 0x1097254))) {
    *(float *)(param_1 + 0x84) = param_2;
  }
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x8)),7);
  fVar2 = REFG(float, 0x1097250);
  if (*(char *)(param_1 + 0xaf) != '\0') {
    fVar2 = 0.0;
  }
  (*(float *)(gen_frame + 0x18)) = fVar2;
  fVar2 = ((float)GEN_TOF((((float10)*(float *)(param_1 + 0x84) * (float10)*(float *)(param_1 + 0x44)) *
                 (float10)fVar2)));
  (*(float *)(gen_frame + 0x18)) = fVar2;
  F_00cbb050(((undefined1 *)(gen_frame + 0x8)),fVar2,100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x8)));
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1097254))) && !(param_2 < *(float *)&REFG(undefined, 0x1097254))) {
    *(float *)(param_1 + 0x90) = param_2;
  }
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x8)),10);
  fVar2 = REFG(float, 0x1097250);
  if (*(char *)(param_1 + 0xb2) != '\0') {
    fVar2 = 0.0;
  }
  uVar1 = F_00cbb050(((undefined1 *)(gen_frame + 0x8)),((float)GEN_TOF((((float10)*(float *)(param_1 + 0x90) *
                                        (float10)*(float *)(param_1 + 0x50)) * (float10)fVar2))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x8)));
  return uVar1;
}

/* ref: FUN_004e7e70 */
uint F_004e7e70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4e7e70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  float fVar2;
  
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1097254))) && !(param_2 < *(float *)&REFG(undefined, 0x1097254))) {
    *(float *)(param_1 + 0x74) = param_2;
  }
  F_00d2ddd0(((undefined1 *)(gen_frame + 0xc)),3);
  fVar2 = REFG(float, 0x1097250);
  if (*(char *)(param_1 + 0xab) != '\0') {
    fVar2 = 0.0;
  }
  uVar1 = F_00cbb050(((undefined1 *)(gen_frame + 0xc)),((float)GEN_TOF((((float10)*(float *)(param_1 + 0x74) *
                                        (float10)*(float *)(param_1 + 0x34)) * (float10)fVar2))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
  return uVar1;
}

/* ref: FUN_004e7ef0 */
uint F_004e7ef0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4e7ef0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  float fVar2;
  
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1097254))) && !(param_2 < *(float *)&REFG(undefined, 0x1097254))) {
    *(float *)(param_1 + 0x78) = param_2;
  }
  F_00d2ddd0(((undefined1 *)(gen_frame + 0xc)),4);
  fVar2 = REFG(float, 0x1097250);
  if (*(char *)(param_1 + 0xac) != '\0') {
    fVar2 = 0.0;
  }
  uVar1 = F_00cbb050(((undefined1 *)(gen_frame + 0xc)),((float)GEN_TOF((((float10)*(float *)(param_1 + 0x78) *
                                        (float10)*(float *)(param_1 + 0x38)) * (float10)fVar2))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
  return uVar1;
}

/* ref: FUN_004e7f70 */
uint F_004e7f70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4e7f70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  float fVar2;
  
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1097254))) && !(param_2 < *(float *)&REFG(undefined, 0x1097254))) {
    *(float *)(param_1 + 0x7c) = param_2;
    F_004e79c0(param_1,0xe,param_2,100);
  }
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x8)),5);
  fVar2 = REFG(float, 0x1097250);
  if (*(char *)(param_1 + 0xad) != '\0') {
    fVar2 = 0.0;
  }
  (*(float *)(gen_frame + 0x18)) = fVar2;
  fVar2 = ((float)GEN_TOF((((float10)*(float *)(param_1 + 0x7c) * (float10)*(float *)(param_1 + 0x3c)) *
                 (float10)fVar2)));
  (*(float *)(gen_frame + 0x18)) = fVar2;
  F_00cbb050(((undefined1 *)(gen_frame + 0x8)),fVar2,100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x8)));
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1097254))) && !(param_2 < *(float *)&REFG(undefined, 0x1097254))) {
    *(float *)(param_1 + 0x94) = param_2;
    F_004e79c0(param_1,0xf,param_2,100);
  }
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x8)),0xb);
  fVar2 = REFG(float, 0x1097250);
  if (*(char *)(param_1 + 0xb3) != '\0') {
    fVar2 = 0.0;
  }
  (*(float *)(gen_frame + 0x18)) = fVar2;
  fVar2 = ((float)GEN_TOF((((float10)*(float *)(param_1 + 0x94) * (float10)*(float *)(param_1 + 0x54)) *
                 (float10)fVar2)));
  (*(float *)(gen_frame + 0x18)) = fVar2;
  F_00cbb050(((undefined1 *)(gen_frame + 0x8)),fVar2,100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x8)));
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1097254))) && !(param_2 < *(float *)&REFG(undefined, 0x1097254))) {
    *(float *)(param_1 + 0x98) = param_2;
  }
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x8)),0xc);
  fVar2 = REFG(float, 0x1097250);
  if (*(char *)(param_1 + 0xb4) != '\0') {
    fVar2 = 0.0;
  }
  uVar1 = F_00cbb050(((undefined1 *)(gen_frame + 0x8)),((float)GEN_TOF((((float10)*(float *)(param_1 + 0x98) *
                                        (float10)*(float *)(param_1 + 0x58)) * (float10)fVar2))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0x8)));
  return uVar1;
}

/* ref: FUN_004e80e0 */
uint F_004e80e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e80e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  F_00d2ddd0(((undefined1 *)(gen_frame + 0xc)),param_1);
  uVar1 = F_00cbb090(((undefined1 *)(gen_frame + 0xc)),param_2);
  F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
  return uVar1;
}

/* ref: FUN_004e8110 */
uint F_004e8110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4e8110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * this_00;
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint local_8;
  
  if (*(char *)((int)this + 0x1d) != '\0') {
    return 0;
  }
  this_00 = *(int * PTR32 *)((int)this + 0xc4);
  if (this_00 != (int *)0x0) {
    *(int *)((int)this + 0xc4) = this_00[3];
    *(undefined1 *)(this_00 + 5) = 1;
    this_00[3] = *(int *)((int)this + 200);
    *(int * PTR32 *)((int)this + 200) = this_00;
    this_00[4] = 0;
    local_8 = 0xffffffff;
    if (param_1 != (int *)0x0) {
      F_00513f60(param_1,0,0);
      uVar3 = 0;
      uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x5c))(param_1);
      local_8 = F_00d2d340(uVar2,uVar3);
    }
    bVar1 = F_004ebef0(this_00,*(undefined4 *)((int)this + 0xe4),param_1,param_2,local_8);
    if (bVar1 == 0) {
      F_00d2d530(local_8,0);
      ((code *)*(gen_code32 *)(*this_00 + 0x78))(this_00,500);
      return 0;
    }
  }
  return (uint)this_00;
}

/* ref: FUN_004e81e0 */
uint F_004e81e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e81e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_004042b0();
  uVar1 = F_00406c00(param_1,0,uVar1,uVar2);
  return uVar1;
}

/* ref: FUN_004e8200 */
uint F_004e8200(unsigned int gen_a0)
{
  GEN_ENTER(0x4e8200u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar2 = F_00406b30(param_1);
    uVar1 = (uint)uVar2;
  }
  return uVar1;
}

/* ref: FUN_004e8220 */
uint F_004e8220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e8220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  
  if (*(char *)((int)this + 0x1d) != '\0') {
    return 0;
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0xc4);
  if (this_00 != (undefined *)0x0) {
    *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)((int)this_00 + 0xc);
    *(undefined1 *)((int)this_00 + 0x14) = 1;
    *(undefined4 *)((int)this_00 + 0xc) = *(undefined4 *)((int)this + 200);
    uVar1 = 0xffffffff;
    *(undefined * PTR32 *)((int)this + 200) = this_00;
    *(undefined4 *)((int)this_00 + 0x10) = 0;
    if (param_1 != (int *)0x0) {
      F_00513f60(param_1,0,0);
      uVar2 = 0;
      uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x5c))(param_1);
      uVar1 = F_00d2d340(uVar1,uVar2);
    }
    F_004ebfb0(this_00,*(undefined4 *)((int)this + 0xe4),param_1,param_2,uVar1);
  }
  return (uint)this_00;
}

/* ref: FUN_004e82b0 */
unsigned int F_004e82b0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e82b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00d2e330(param_1);
  return 0;
}

/* ref: FUN_004e82d0 */
byte F_004e82d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e82d0u, gen_a0, gen_a1, gen_a2, 0u);
  char * in_eax = (char *)(uintptr_t)gen_a0;
  int in_edx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  char cVar1;
  
  cVar1 = *in_eax;
  while( true ) {
    if (cVar1 == '\x06') {
      return 0xff;
    }
    if (cVar1 == in_edx) break;
    cVar1 = in_eax[2];
    in_eax = in_eax + 2;
  }
  if (param_3 == 2) {
    cVar1 = *in_eax;
    while (cVar1 != '\x06') {
      in_eax = in_eax + 2;
      cVar1 = *in_eax;
    }
  }
  return in_eax[1];
}

/* ref: FUN_004e8310 */
uint F_004e8310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e8310u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_eax = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  switch((unsigned int)(uintptr_t)(in_eax)) {
  case 1: ;
    return (param_2 != 2) - 1 & 3;
  case 2: ;
    return 2;
  case 3: ;
    return 1;
  case 4: ;
    return 4;
  case 5: ;
    return 5;
  default: ;
    return 6;
  }
}

/* ref: FUN_004e8370 */
byte F_004e8370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4e8370u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  uint * in_edx = (uint *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  uint * param_5 = (uint *)(uintptr_t)gen_a4;
  uint uVar1;
  
  if (in_eax == 0) {
    return 0;
  }
  uVar1 = in_eax - 1;
  *in_edx = uVar1 >> 4;
  *param_3 = uVar1 >> 3 & 1;
  *param_4 = uVar1 & 1;
  *param_5 = uVar1 >> 1 & 3;
  return 1;
}

/* ref: FUN_004e83b0 */
uint F_004e83b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4e83b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (in_eax == 0) {
    return 0xffffffff;
  }
  uVar2 = in_eax - 1;
  uVar3 = uVar2 >> 1 & 3;
  uVar4 = uVar2 >> 4;
  *param_3 = uVar3;
  if (5 < uVar4) {
    return 0xffffffff;
  }
  bVar1 = F_004e82d0(param_2,*(undefined4 *)(&REFG(undefined, 0x10972d8) + uVar4 * 4),2 - (uint)(uVar4 != 1));
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar4;
  }
  return (int)(char)bVar1 + (uVar3 * 0x32 + (uVar2 >> 3 & 1)) * 2 + (uVar2 & 1);
}

/* ref: FUN_004e8430 */
byte F_004e8430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e8430u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xd8) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_004e8440 */
byte F_004e8440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x4e8440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  int iVar1;
  int iVar2;
  
  if (param_2 - 1U < 0xd) {
    iVar1 = 1;
    if (param_3 != 3) {
      iVar1 = param_4;
    }
    if ((param_5 < 1) || (iVar2 = param_5, 5 < param_5)) {
      iVar2 = 1;
    }
    F_00c472af(param_1,0x80,"sound/foot/foot/fs_%s_%c_%c_%s.scd",(&REFG(undefined * PTR32, 0x1302510))[(int)(param_2)],
               (-(uint)(iVar1 != 0) & 0xfffffff9) + 0x6d,(-(uint)(param_6 != 0) & 0xc) + 0x66,
               (&REFG(undefined * PTR32, 0x130255c))[(int)((char)(&REFG(undefined, 0x10972ef))[(int)(iVar2)])]);
    return 1;
  }
  return 0;
}

/* ref: FUN_004e84c0 */
byte F_004e84c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e84c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  if ((param_2 < 1) || (iVar1 = param_2, 6 < param_2)) {
    iVar1 = 6;
  }
  F_00c472af(param_1,0x80,"sound/foot/dev/%04d.scd",iVar1 + 0x1b51);
  return 1;
}

/* ref: FUN_004e8500 */
float F_004e8500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e8500u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = 0;
  do {
    if (*(int *)((int)&REFG(undefined4, 0x10972f8) + uVar1) == param_1) {
      return *(float *)(&REFG(undefined, 0x10972fc) + (param_2 + iVar2 * 3) * 4);
    }
    uVar1 = uVar1 + 0xc;
    iVar2 = iVar2 + 1;
  } while (uVar1 < 0x3c);
  return REFG(float, 0x1097250);
}

/* ref: FUN_004e8540 */
unsigned int F_004e8540(unsigned int gen_a0)
{
  GEN_ENTER(0x4e8540u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_004e8550 */
uint F_004e8550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e8550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    *(undefined1 *)((int)this + 0xfd) = 0;
    uVar2 = 0;
  }
  else if (param_1 == 1) {
    uVar2 = F_00c49908((int)this + 0xfd,0x80,REFG(undefined * PTR32, 0x1302384));
  }
  else {
    uVar2 = param_1 - 2;
    if (uVar2 == 0) {
      uVar2 = F_00c49908((int)this + 0xfd,0x80,REFG(undefined * PTR32, 0x1302388));
    }
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x184);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1,500);
    *(undefined4 *)((int)this + 0x180) = 3;
  }
  return uVar2;
}

/* ref: FUN_004e8600 */
uint F_004e8600(unsigned int gen_a0)
{
  GEN_ENTER(0x4e8600u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_0050c620(param_1,0,0);
  }
  return uVar1;
}

/* ref: FUN_004e8630 */
uint F_004e8630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e8630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004ebcc0(*(undefined * PTR32 *)((int)this + 0xcc),param_1);
  return uVar1;
}

/* ref: FUN_004e8640 */
uint F_004e8640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e8640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x410];
  undefined * pvVar1;
  undefined1 * puVar2;
  uint uVar3;
  int * piVar4;
  undefined4 * puVar5;
  float * pfVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined * pvVar11;
  undefined4 uVar12;
  
  (*(uint *)(gen_frame + 0x408)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40c);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  iVar9 = *(int *)(REFG(int, 0x137104c) + 0x434);
  puVar2 = param_2;
  if (param_2 == (undefined1 *)0x0) {
    F_00c472af(((undefined1 *)(gen_frame + 0x68)),0x39d,
               "MAX_SOUND  166                 \r\n MAX_BUS     15                 \r\n MAX_REVERB   1                 \r\n BUS MUSIC   %d  2D 44100 OFF   \r\n BUS SE      %d  3D 44100 ON    \r\n BUS VOICE   %d  3D 44100 OFF   \r\n BUS System  %d  2D 44100 OFF   \r\n BUS BG      %d  3D 44100 ON    \r\n BUS Foot    %d  3D 44100 ON    \r\n BUS PlacedNPC   %d  3D 44100 ON   \r\n BUS TimeStretchBGM    %d  2D 44100 OFF   \r\n BUS Zingle   2  2D 44100 OFF   \r\n BUS CommonVFX   8  3D 44100 ON   \r\n BUS BGEnv       4  3D 44100 OFF  \r\n BUS Walla       2  3D 44100 ON  \r\n BUS Movie       2  2D 44100 OFF \r\n BUS New5       30  3D 44100 OFF \r\n BUS New11      4  2D 44100 OFF \r\n VOLUME_CURVE OLD               \r\n ENABLE_SCD_PRIORITY            \r\n STRINGENDO_SETTING 8 4          \r\n STRINGENDO_VOLUMES 1.1 1.3 1.6 2.0         \r\n STRINGENDO_FADE_TIMES 3000 2500 2000 1500\t\r\n FFXIV_BG_LOWPASS_BUSSES 15 14 \r\n END                            \r\n"
               ,2,0x14,5,5,0xc,0xf,5,2);
    puVar2 = ((undefined1 *)(gen_frame + 0x68));
  }
  if ((char)param_1 == '\0') {
    F_00d2f7c0(*(undefined4 *)(iVar9 + 8),puVar2);
  }
  else {
    F_00d2f740(*(undefined4 *)(iVar9 + 8),puVar2);
  }
  F_00d2f280(0x10,0xffff);
  F_00d2cd50(0);
  F_00d2e220(1);
  F_00d2e370(1);
  ((int *)(gen_frame + 0x2c))[6] = 2;
  ((int *)(gen_frame + 0x2c))[7] = 3;
  ((int *)(gen_frame + 0x2c))[8] = 5;
  ((int *)(gen_frame + 0x2c))[9] = 6;
  ((int *)(gen_frame + 0x2c))[10] = 7;
  ((int *)(gen_frame + 0x2c))[0xb] = 10;
  ((int *)(gen_frame + 0x2c))[0xc] = 0xc;
  ((int *)(gen_frame + 0x2c))[0xd] = 0xe;
  ((int *)(gen_frame + 0x2c))[0xe] = 0;
  iVar9 = 2;
  iVar10 = 0;
  do {
    F_00cbaed0(((undefined1 *)(gen_frame + 0x18)));
    uVar3 = F_00d2ddd0(((undefined1 *)(gen_frame + 0x8)),iVar9);
    F_00cbaf20(((undefined1 *)(gen_frame + 0x18)),uVar3);
    F_00cbaf10(((undefined1 *)(gen_frame + 0x8)));
    F_00cbb3e0(((undefined1 *)(gen_frame + 0x18)),1);
    F_00cbb1e0(((undefined1 *)(gen_frame + 0x18)),*(float *)&REFG(undefined, 0x1097254));
    uVar12 = 0;
    fVar7 = *(float *)&REFG(undefined, 0x1097254);
    uVar3 = F_00cbb250(((undefined1 *)(gen_frame + 0x18)),((undefined1 *)(gen_frame + 0x0)));
    F_00cbb950(uVar3,fVar7,uVar12);
    F_00cbb890(((undefined1 *)(gen_frame + 0x0)));
    F_00cbaf10(((undefined1 *)(gen_frame + 0x18)));
    iVar9 = ((int *)(gen_frame + 0x2c))[(int)(iVar10 + 7)];
    iVar10 = iVar10 + 1;
  } while (iVar9 != 0);
  ((int *)(gen_frame + 0x2c))[0] = 1;
  ((int *)(gen_frame + 0x2c))[2] = 1;
  ((int *)(gen_frame + 0x2c))[3] = 1;
  ((int *)(gen_frame + 0x2c))[4] = 1;
  ((int *)(gen_frame + 0x2c))[9] = 2;
  ((int *)(gen_frame + 0x2c))[10] = 5;
  ((int *)(gen_frame + 0x2c))[0xb] = 6;
  ((int *)(gen_frame + 0x2c))[0xc] = 7;
  ((int *)(gen_frame + 0x2c))[0xd] = 0xb;
  ((int *)(gen_frame + 0x2c))[0xe] = 0;
  ((int *)(gen_frame + 0x2c))[1] = 2;
  ((int *)(gen_frame + 0x2c))[5] = 0;
  iVar10 = 2;
  iVar9 = 0;
  iVar8 = 0;
  do {
    F_00cbaed0(((undefined1 *)(gen_frame + 0x18)));
    uVar3 = F_00d2ddd0(((undefined1 *)(gen_frame + 0x8)),iVar10);
    F_00cbaf20(((undefined1 *)(gen_frame + 0x18)),uVar3);
    F_00cbaf10(((undefined1 *)(gen_frame + 0x8)));
    F_00cbb2c0(((undefined1 *)(gen_frame + 0x18)),*(undefined4 *)((int)((int *)(gen_frame + 0x2c)) + iVar9));
    F_00cbaf10(((undefined1 *)(gen_frame + 0x18)));
    iVar9 = (iVar8 + 1) * 4;
    iVar10 = ((int *)(gen_frame + 0x2c))[(int)(iVar8 + 10)];
    iVar8 = iVar8 + 1;
  } while (iVar10 != 0);
  piVar4 = (int *)F_00d2ccf0();
  pvVar11 = (*(undefined * PTR32 *)(gen_frame + 0x28));
  if (piVar4 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4,2,0xffffffff);
    pvVar11 = (*(undefined * PTR32 *)(gen_frame + 0x28));
    *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0xdc) = uVar3;
    ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4,((undefined1 *)(gen_frame + 0x18)),uVar3);
    F_00cffe80(((undefined1 *)(gen_frame + 0x18)),0);
    F_00cffcb0(((undefined1 *)(gen_frame + 0x18)),1);
    F_00cffc10(((undefined1 *)(gen_frame + 0x18)));
  }
  if ((*(char *)((int)pvVar11 + 0x1d) == '\0') &&
     (*(undefined4 *)((int)pvVar11 + 0x24) = REFG(float, 0x1097380), *(char *)((int)pvVar11 + 0xd9) == '\0'))
  {
    pvVar1 = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)((int)pvVar11 + 0x20) *
                            (float10)*(double *)&REFG(undefined, 0x1097378)))))));
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = pvVar1;
    F_00d2dcf0(((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar1))),0);
  }
  uVar12 = 0;
  uVar3 = F_004042b0();
  puVar5 = (undefined4 *)F_00406bd0(0xc,0,uVar3,uVar12);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
  }
  uVar12 = 0;
  *(undefined4 * PTR32 *)((int)pvVar11 + 0xe0) = puVar5;
  uVar3 = F_004042b0();
  pfVar6 = (float *)F_00406bd0(8,0,uVar3,uVar12);
  if (pfVar6 == (float *)0x0) {
    pfVar6 = (float *)0x0;
  }
  else {
    *pfVar6 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar11)));
    pfVar6[1] = 0.0;
    fVar7 = gen_bits2f(F_00d2e9b0(0xffffffff));
    pfVar6[1] = fVar7;
  }
  *(float * PTR32 *)((int)pvVar11 + 0xe4) = pfVar6;
  uVar3 = F_00d2dcf0(REFG(float, 0x1097250),500);
  *(undefined4 *)((int)pvVar11 + 0x1a4) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
  return uVar3;
}

/* ref: FUN_004e89d0 */
byte F_004e89d0(unsigned int gen_a0)
{
  GEN_ENTER(0x4e89d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x184);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1,500);
    *(undefined4 *)((int)this + 0x184) = 0;
  }
  for (piVar1 = *(int * PTR32 *)((int)this + 200); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[3]) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1,500);
    ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1,500);
  }
  *(undefined1 *)((int)this + 0x1d) = 1;
  F_00d2dcf0(*(float *)&REFG(undefined, 0x1097254),500);
  (*(int *)(gen_frame + 0x4)) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
  (*(int *)(gen_frame + 0x8)) = (int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
  F_00d2da30(&(*(int *)(gen_frame + 0x8)));
  uVar3 = 0;
  do {
    if (*(int *)((int)&REFG(undefined4, 0x1302390) + uVar3) != 0) {
      F_0050c620(*(int *)((int)&REFG(undefined4, 0x1302390) + uVar3),0,0);
      *(undefined4 *)((int)&REFG(undefined4, 0x1302390) + uVar3) = 0;
    }
    uVar3 = uVar3 + 8;
  } while (uVar3 < 0x10);
  if (REFG(int * PTR32, 0x1375a68) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1375a68) + 0x78))))(REFG(int * PTR32, 0x1375a68),500);
    REFG(int * PTR32, 0x1375a68) = (int *)0x0;
  }
  REFG(undefined4, 0x1375a6c) = 0;
  if (*(int *)((int)this + 200) == 0) {
    F_00d2da30(&(*(int *)(gen_frame + 0x4)));
    bVar2 = F_00d2db30();
    return bVar2 != 0;
  }
  return 0;
}

/* ref: FUN_004e8ae0 */
uint F_004e8ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e8ae0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  float fVar2;
  
  *(undefined1 *)(param_1 + 0xa9) = (undefined1)param_2;
  F_00d2ddd0(((undefined1 *)(gen_frame + 0xc)),1);
  fVar2 = REFG(float, 0x1097250);
  if (*(char *)(param_1 + 0xa9) != '\0') {
    fVar2 = 0.0;
  }
  F_00cbb050(((undefined1 *)(gen_frame + 0xc)),((float)GEN_TOF((((float10)*(float *)(param_1 + 0x6c) *
                                (float10)*(float *)(param_1 + 0x2c)) * (float10)fVar2))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
  *(undefined1 *)(param_1 + 0xb0) = (undefined1)param_2;
  F_00d2ddd0(((undefined1 *)(gen_frame + 0xc)),8);
  fVar2 = REFG(float, 0x1097250);
  if (*(char *)(param_1 + 0xb0) != '\0') {
    fVar2 = 0.0;
  }
  F_00cbb050(((undefined1 *)(gen_frame + 0xc)),((float)GEN_TOF((((float10)*(float *)(param_1 + 0x88) *
                                (float10)*(float *)(param_1 + 0x48)) * (float10)fVar2))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
  *(undefined1 *)(param_1 + 0xb1) = (undefined1)param_2;
  F_00d2ddd0(((undefined1 *)(gen_frame + 0xc)),9);
  fVar2 = REFG(float, 0x1097250);
  if (*(char *)(param_1 + 0xb1) != '\0') {
    fVar2 = 0.0;
  }
  uVar1 = F_00cbb050(((undefined1 *)(gen_frame + 0xc)),((float)GEN_TOF((((float10)*(float *)(param_1 + 0x8c) *
                                        (float10)*(float *)(param_1 + 0x4c)) * (float10)fVar2))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
  return uVar1;
}

/* ref: FUN_004e8c00 */
uint F_004e8c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e8c00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  float fVar2;
  
  *(undefined1 *)(param_1 + 0xaa) = (undefined1)param_2;
  F_00d2ddd0(((undefined1 *)(gen_frame + 0xc)),2);
  fVar2 = REFG(float, 0x1097250);
  if (*(char *)(param_1 + 0xaa) != '\0') {
    fVar2 = 0.0;
  }
  F_00cbb050(((undefined1 *)(gen_frame + 0xc)),((float)GEN_TOF((((float10)*(float *)(param_1 + 0x70) *
                                (float10)*(float *)(param_1 + 0x30)) * (float10)fVar2))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
  *(undefined1 *)(param_1 + 0xae) = (undefined1)param_2;
  F_00d2ddd0(((undefined1 *)(gen_frame + 0xc)),6);
  fVar2 = REFG(float, 0x1097250);
  if (*(char *)(param_1 + 0xae) != '\0') {
    fVar2 = 0.0;
  }
  F_00cbb050(((undefined1 *)(gen_frame + 0xc)),((float)GEN_TOF((((float10)*(float *)(param_1 + 0x80) *
                                (float10)*(float *)(param_1 + 0x40)) * (float10)fVar2))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
  *(undefined1 *)(param_1 + 0xaf) = (undefined1)param_2;
  F_00d2ddd0(((undefined1 *)(gen_frame + 0xc)),7);
  fVar2 = REFG(float, 0x1097250);
  if (*(char *)(param_1 + 0xaf) != '\0') {
    fVar2 = 0.0;
  }
  F_00cbb050(((undefined1 *)(gen_frame + 0xc)),((float)GEN_TOF((((float10)*(float *)(param_1 + 0x84) *
                                (float10)*(float *)(param_1 + 0x44)) * (float10)fVar2))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
  *(undefined1 *)(param_1 + 0xb2) = (undefined1)param_2;
  F_00d2ddd0(((undefined1 *)(gen_frame + 0xc)),10);
  fVar2 = REFG(float, 0x1097250);
  if (*(char *)(param_1 + 0xb2) != '\0') {
    fVar2 = 0.0;
  }
  uVar1 = F_00cbb050(((undefined1 *)(gen_frame + 0xc)),((float)GEN_TOF((((float10)*(float *)(param_1 + 0x90) *
                                        (float10)*(float *)(param_1 + 0x50)) * (float10)fVar2))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
  return uVar1;
}

/* ref: FUN_004e8d70 */
uint F_004e8d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e8d70u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  float fVar2;
  
  *(undefined1 *)(param_1 + 0xab) = (undefined1)param_2;
  F_00d2ddd0(((undefined1 *)(gen_frame + 0xc)),3);
  fVar2 = REFG(float, 0x1097250);
  if (*(char *)(param_1 + 0xab) != '\0') {
    fVar2 = 0.0;
  }
  uVar1 = F_00cbb050(((undefined1 *)(gen_frame + 0xc)),((float)GEN_TOF((((float10)*(float *)(param_1 + 0x74) *
                                        (float10)*(float *)(param_1 + 0x34)) * (float10)fVar2))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
  return uVar1;
}

/* ref: FUN_004e8de0 */
uint F_004e8de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e8de0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  float fVar2;
  
  *(undefined1 *)(param_1 + 0xac) = (undefined1)param_2;
  F_00d2ddd0(((undefined1 *)(gen_frame + 0xc)),4);
  fVar2 = REFG(float, 0x1097250);
  if (*(char *)(param_1 + 0xac) != '\0') {
    fVar2 = 0.0;
  }
  uVar1 = F_00cbb050(((undefined1 *)(gen_frame + 0xc)),((float)GEN_TOF((((float10)*(float *)(param_1 + 0x78) *
                                        (float10)*(float *)(param_1 + 0x38)) * (float10)fVar2))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
  return uVar1;
}

/* ref: FUN_004e8e50 */
uint F_004e8e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e8e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined1 uVar2;
  float fVar3;
  
  uVar2 = (undefined1)param_2;
  *(undefined1 *)((int)param_1 + 0xad) = uVar2;
  F_00d2ddd0(((undefined1 *)(gen_frame + 0xc)),5);
  fVar3 = REFG(float, 0x1097250);
  if (*(char *)((int)param_1 + 0xad) != '\0') {
    fVar3 = 0.0;
  }
  F_00cbb050(((undefined1 *)(gen_frame + 0xc)),((float)GEN_TOF((((float10)*(float *)((int)param_1 + 0x7c) *
                                (float10)*(float *)((int)param_1 + 0x3c)) * (float10)fVar3))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
  F_004e7b30(param_1,0xe,param_2);
  *(undefined1 *)((int)param_1 + 0xb3) = uVar2;
  F_00d2ddd0(((undefined1 *)(gen_frame + 0xc)),0xb);
  fVar3 = REFG(float, 0x1097250);
  if (*(char *)((int)param_1 + 0xb3) != '\0') {
    fVar3 = 0.0;
  }
  F_00cbb050(((undefined1 *)(gen_frame + 0xc)),((float)GEN_TOF((((float10)*(float *)((int)param_1 + 0x94) *
                                (float10)*(float *)((int)param_1 + 0x54)) * (float10)fVar3))),100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
  F_004e7b30(param_1,0xf,param_2);
  *(undefined1 *)((int)param_1 + 0xb4) = uVar2;
  F_00d2ddd0(((undefined1 *)(gen_frame + 0xc)),0xc);
  fVar3 = REFG(float, 0x1097250);
  if (*(char *)((int)param_1 + 0xb4) != '\0') {
    fVar3 = 0.0;
  }
  uVar1 = F_00cbb050(((undefined1 *)(gen_frame + 0xc)),((float)GEN_TOF((((float10)*(float *)((int)param_1 + 0x98) *
                                        (float10)*(float *)((int)param_1 + 0x58)) * (float10)fVar3))),
                       100);
  F_00cbaf10(((undefined1 *)(gen_frame + 0xc)));
  return uVar1;
}

/* ref: FUN_004e8f80 */
float10 F_004e8f80(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x4e8f80u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  float fVar2;
  float * pfVar3;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(float *)(gen_frame + 0x48)) = param_2;
  (*(float *)(gen_frame + 0x4c)) = param_3;
  pfVar3 = &(*(float *)(gen_frame + 0x48));
  (*(float *)(gen_frame + 0x50)) = param_4;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  uVar1 = F_004ec420(((undefined1 *)(gen_frame + 0x8)));
  fVar2 = F_00d00380(param_1,uVar1,pfVar3);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (float10)fVar2;
}

/* ref: FUN_004e8ff0 */
uint F_004e8ff0(void)
{
  GEN_ENTER(0x4e8ff0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),4);
  F_004142d0(&(*(uint *)(gen_frame + 0x8)),*(undefined4 *)(uVar1 + 0x14));
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: FUN_004e9020 */
uint F_004e9020(unsigned int gen_a0)
{
  GEN_ENTER(0x4e9020u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (in_eax == -1) {
    uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),4);
    F_004142d0(&(*(int *)(gen_frame + 0x8)),*(undefined4 *)(uVar1 + 0x14));
    in_eax = (*(int *)(gen_frame + 0x8));
  }
  return (uint)(&REFG(undefined * PTR32, 0x13025e4))[(int)(in_eax)];
}

/* ref: FUN_004e9060 */
uint F_004e9060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4e9060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  DWORD DVar1;
  DWORD DVar2;
  uint uVar3;
  
  ((code *)*(gen_code32 *)(*param_2 + 0x10))(param_2,1);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
  (*(int * PTR32 *)(gen_frame + 0x8)) = param_2;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x21)) = 0x101;
  (*(undefined2 *)(gen_frame + 0x25)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 2;
  DVar1 = *((DWORD *)GEN_TOP((*(int *)(REFG(int, 0x1375ae8) + 0x28) + 0xb8)));
  DVar2 = gen_imp_GetCurrentThreadId();
  if (DVar1 != DVar2) {
    uVar3 = F_00513dc0(param_1,&(*(undefined * PTR32 *)(gen_frame + 0x4)),0,0);
    return uVar3;
  }
  uVar3 = F_00513e90(param_1,&(*(undefined * PTR32 *)(gen_frame + 0x4)),0,0);
  return uVar3;
}

/* ref: FUN_004e9110 */
uint F_004e9110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4e9110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x180];
  double dVar1;
  int * piVar2;
  float * pfVar3;
  float * pfVar4;
  uint uVar5;
  uint uVar6;
  float * pfVar7;
  bool bVar8;
  float10 fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  (*(uint *)(gen_frame + 0x16c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x170);
  (*(float * PTR32 *)(gen_frame + 0xe4)) = param_2;
  piVar2 = (int *)F_00d2ccf0();
  (*(int * PTR32 *)(gen_frame + 0xbc)) = piVar2;
  pfVar7 = (*(float * PTR32 *)(gen_frame + 0xe4));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2,((undefined1 *)(gen_frame + 0xac)),*(undefined4 *)((int)this + 0xdc));
    pfVar7 = (*(float * PTR32 *)(gen_frame + 0xe4));
    uVar5 = 0;
    do {
      if (uVar5 == 3) {
        fVar10 = *(float *)(param_1 + 0x30);
      }
      else {
        fVar10 = *(float *)(param_1 + uVar5 * 0x10);
      }
      (*(float *)(gen_frame + 0x60)) = fVar10;
      ((float *)(gen_frame + 0xe8))[(int)(uVar5 * 4)] = fVar10;
      if (uVar5 == 3) {
        fVar10 = *(float *)(param_1 + 0x34);
      }
      else {
        fVar10 = *(float *)(param_1 + 4 + uVar5 * 0x10);
      }
      (*(float *)(gen_frame + 0x94)) = fVar10;
      ((float *)(gen_frame + 0xe8))[(int)(uVar5 * 4 + 1)] = fVar10;
      if (uVar5 == 3) {
        fVar10 = *(float *)(param_1 + 0x38);
      }
      else {
        fVar10 = *(float *)(param_1 + 8 + uVar5 * 0x10);
      }
      uVar6 = uVar5 + 1;
      ((float *)(gen_frame + 0xe8))[(int)(uVar5 * 4 + 2)] = fVar10;
      (*(float *)(gen_frame + 0x78)) = fVar10;
      ((float *)(gen_frame + 0xe8))[(int)(uVar5 * 4 + 3)] = 0.0;
      uVar5 = uVar6;
    } while (uVar6 < 4);
    fVar10 = (*(float * PTR32 *)(gen_frame + 0xe4))[1];
    ((float *)(gen_frame + 0xe8))[0xf] = GEN_FLT_TO(((float *)(gen_frame + 0xe8))[0xf], REFG(float, 0x1097250));
    (*(float *)(gen_frame + 0xd0)) = *(*(float * PTR32 *)(gen_frame + 0xe4));
    (*(float *)(gen_frame + 0xd4)) = (float)((float10)fVar10 + (float10)*(double *)&REFG(undefined, 0x1097708));
    (*(float *)(gen_frame + 0xd8)) = (*(float * PTR32 *)(gen_frame + 0xe4))[2];
    F_004eb600(((float *)(gen_frame + 0xe8)),((undefined1 *)(gen_frame + 0x128)));
    dVar1 = REFG(double, 0x10909a0);
    (*(float *)(gen_frame + 0x80)) = (*(float *)(gen_frame + 0xd0));
    (*(float *)(gen_frame + 0x84)) = (*(float *)(gen_frame + 0xd4));
    (*(float *)(gen_frame + 0x88)) = (*(float *)(gen_frame + 0xd8));
    (*(float *)(gen_frame + 0x8c)) = REFG(float, 0x1097250);
    fVar10 = (*(float *)(gen_frame + 0xd0)) - (*(float *)(gen_frame + 0x158));
    fVar11 = (*(float *)(gen_frame + 0xd4)) - (*(float *)(gen_frame + 0x15c));
    fVar12 = (*(float *)(gen_frame + 0xd8)) - (*(float *)(gen_frame + 0x160));
    fVar13 = REFG(float, 0x1097250) - (*(float *)(gen_frame + 0x164));
    (*(float *)(gen_frame + 0xd0)) = fVar10;
    (*(float *)(gen_frame + 0xd4)) = fVar11;
    (*(float *)(gen_frame + 0xd8)) = fVar12;
    (*(float *)(gen_frame + 0xdc)) = fVar13;
    fVar11 = fVar11 * fVar11;
    fVar12 = fVar12 * fVar12;
    fVar10 = SQRT((fVar12 + fVar10 * fVar10) + fVar11);
    (*(float *)(gen_frame + 0xc0)) = fVar10;
    (*(float *)(gen_frame + 0xc4)) = (fVar12 + fVar11) + fVar11;
    (*(float *)(gen_frame + 0xc8)) = (fVar12 + fVar12) + fVar11;
    (*(float *)(gen_frame + 0xcc)) = (fVar12 + fVar13 * fVar13) + fVar11;
    *(float *)((int)this + 0xf8) = fVar10;
    bVar8 = GEN_ISNAN((double)*pfVar7) || GEN_ISNAN(dVar1);
    if ((bVar8 == (bVar8 || (double)*pfVar7 == dVar1)) && (*(int *)((int)this + 0xe8) != 1)) {
      fVar11 = 0.0;
      if (0.0 < fVar10) {
        fVar10 = ((float)GEN_TOF((((float10)1 - (float10)*(float *)((int)this + 0xec)) * (float10)fVar10)));
        (*(float * PTR32 *)(gen_frame + 0xe4)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar10)));
        fVar9 = F_004e7840(fVar10);
        (*(float * PTR32 *)(gen_frame + 0xe4)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar9)));
        *(float * PTR32 *)((int)this + 0xf4) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar9)));
        (*(float *)(gen_frame + 0xd0)) = fVar11;
        (*(float *)(gen_frame + 0xd4)) = fVar11;
        (*(float *)(gen_frame + 0xd8)) = REFG(float, 0x1097250);
        (*(float *)(gen_frame + 0xdc)) = fVar11;
        pfVar3 = (float *)F_004eb910(((undefined1 *)(gen_frame + 0x128)),((undefined1 *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0xd0)));
        fVar10 = pfVar3[1];
        (*(float *)(gen_frame + 0xc0)) = *pfVar3;
        (*(float *)(gen_frame + 0xc4)) = fVar10;
        (*(float *)(gen_frame + 0xc8)) = pfVar3[2];
        (*(float *)(gen_frame + 0xcc)) = pfVar3[3];
        pfVar4 = (float *)F_004eb3a0(&(*(float *)(gen_frame + 0xc0)),((undefined1 *)(gen_frame + 0x50)));
        pfVar3 = (*(float * PTR32 *)(gen_frame + 0xe4));
        fVar10 = pfVar4[2];
        fVar11 = pfVar4[3];
        fVar12 = *pfVar4;
        fVar13 = pfVar4[1];
        (*(float *)(gen_frame + 0xc0)) = fVar12 * ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar3)));
        (*(float *)(gen_frame + 0xc4)) = fVar13 * ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar3)));
        (*(float *)(gen_frame + 0xc8)) = fVar10 * ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar3)));
        (*(float *)(gen_frame + 0xcc)) = fVar11 * ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar3)));
        fVar12 = fVar12 * ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar3))) + (*(float *)(gen_frame + 0x80));
        fVar13 = fVar13 * ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar3))) + (*(float *)(gen_frame + 0x84));
        fVar10 = fVar10 * ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar3))) + (*(float *)(gen_frame + 0x88));
        fVar11 = fVar11 * ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar3))) + (*(float *)(gen_frame + 0x8c));
        (*(float *)(gen_frame + 0xc0)) = fVar12;
        (*(float *)(gen_frame + 0xc4)) = fVar13;
        (*(float *)(gen_frame + 0xc8)) = fVar10;
        (*(float *)(gen_frame + 0xcc)) = fVar11;
        (*(float *)(gen_frame + 0xd0)) = fVar12;
        (*(float *)(gen_frame + 0xd4)) = fVar13;
        (*(float *)(gen_frame + 0xd8)) = fVar10;
        (*(float *)(gen_frame + 0xdc)) = fVar11;
        (*(float *)(gen_frame + 0x158)) = fVar12;
        (*(float *)(gen_frame + 0x15c)) = fVar13;
        (*(float *)(gen_frame + 0x164)) = fVar11;
        (*(float *)(gen_frame + 0x160)) = fVar10;
        (*(float *)(gen_frame + 0x164)) = REFG(float, 0x1097250);
        uVar5 = F_004eb600(((undefined1 *)(gen_frame + 0x128)),((undefined1 *)(gen_frame + 0x0)));
        F_004eb4e0(((float *)(gen_frame + 0xe8)),uVar5);
      }
    }
    else {
      *(float *)((int)this + 0xf4) = fVar10;
    }
    if (*(char *)((int)this + 0xf0) == '\0') {
      F_00cffde0(((undefined1 *)(gen_frame + 0xac)),((float *)(gen_frame + 0xe8)));
    }
    else {
      F_00cffd70(((undefined1 *)(gen_frame + 0xac)),((float *)(gen_frame + 0xe8)));
    }
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xbc)) + 0xd8))((*(int * PTR32 *)(gen_frame + 0xbc)));
    *(undefined1 *)((int)this + 0xf0) = 0;
    F_00cffc10(((undefined1 *)(gen_frame + 0xac)));
  }
  uVar5 = REFG(undefined4, 0x1371290);
  (*(float *)(gen_frame + 0xd4)) = *pfVar7;
  fVar10 = pfVar7[1];
  (*(float *)(gen_frame + 0xd8)) = fVar10;
  fVar11 = pfVar7[2];
  *(float *)(REFG(undefined4, 0x1371290) + 0x324) = *pfVar7;
  (*(float *)(gen_frame + 0xdc)) = fVar11;
  *(float *)(uVar5 + 0x328) = fVar10;
  *(float *)(uVar5 + 0x32c) = fVar11;
  F_00c47745((*(uint *)(gen_frame + 0x16c)) ^ (uint)(uint)(gen_frame + 0x170));
  return uVar5;
}

/* ref: FUN_004e95a0 */
uint F_004e95a0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x4e95a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  int param_4 = (int)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  int param_9 = (int)gen_a8;
  int param_10 = (int)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  int * piVar1;
  uint uVar2;
  
  if (*(char *)((int)param_1 + 0x1d) != '\0') {
    return 0;
  }
  piVar1 = *(int * PTR32 *)((int)param_1 + 0xc4);
  if (piVar1 != (int *)0x0) {
    *(int *)((int)param_1 + 0xc4) = piVar1[3];
    *(undefined1 *)(piVar1 + 5) = 1;
    piVar1[3] = *(int *)((int)param_1 + 200);
    *(int * PTR32 *)((int)param_1 + 200) = piVar1;
    piVar1[0xc] = (int)gen_fl2bits(param_3);
    piVar1[0xe] = (int)gen_fl2bits(param_5);
    piVar1[0xf] = (int)gen_fl2bits(param_6);
    piVar1[0x13] = param_10;
    piVar1[0x12] = param_9;
    piVar1[0x10] = (int)gen_fl2bits(param_7);
    piVar1[4] = 0;
    piVar1[6] = 0;
    piVar1[7] = param_4;
    piVar1[0x11] = (int)gen_fl2bits(param_8);
    *(undefined1 *)(piVar1 + 0x1b) = 0;
    piVar1[0x19] = 0;
    *(undefined2 *)((int)piVar1 + 0x69) = 0x101;
    *(undefined1 *)((int)piVar1 + 0x6b) = (undefined1)param_11;
    uVar2 = F_004e9060(param_1,param_2,piVar1,0);
    if (uVar2 == 0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1,500);
      return 0;
    }
    piVar1[0xc] = (int)gen_fl2bits(param_3);
    piVar1[0xe] = (int)gen_fl2bits(param_5);
    piVar1[0xf] = (int)gen_fl2bits(param_6);
    piVar1[6] = uVar2;
    piVar1[0x10] = (int)gen_fl2bits(param_7);
    piVar1[7] = param_4;
    piVar1[0x11] = (int)gen_fl2bits(param_8);
    piVar1[0x12] = param_9;
    piVar1[0x13] = param_10;
    *(undefined1 *)(piVar1 + 0x1b) = 0;
    piVar1[0x19] = 0;
    *(undefined2 *)((int)piVar1 + 0x69) = 0x101;
    *(undefined1 *)((int)piVar1 + 0x6b) = (undefined1)param_11;
  }
  return (uint)piVar1;
}

/* ref: FUN_004e96c0 */
uint F_004e96c0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x4e96c0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  int param_4 = (int)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  int param_9 = (int)gen_a8;
  int param_10 = (int)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  uint uVar2;
  
  if (*(char *)((int)param_1 + 0x1d) != '\0') {
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((int)param_1 + 0x188);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar1 = *(int * PTR32 *)((int)param_1 + 0xc4);
  if (piVar1 != (int *)0x0) {
    *(int *)((int)param_1 + 0xc4) = piVar1[3];
    *(undefined1 *)(piVar1 + 5) = 1;
    piVar1[3] = *(int *)((int)param_1 + 200);
    *(int * PTR32 *)((int)param_1 + 200) = piVar1;
    piVar1[0xc] = (int)gen_fl2bits(param_3);
    piVar1[0xe] = (int)gen_fl2bits(param_5);
    piVar1[0xf] = (int)gen_fl2bits(param_6);
    piVar1[0x12] = param_9;
    piVar1[7] = param_4;
    piVar1[0x10] = (int)gen_fl2bits(param_7);
    piVar1[0x13] = param_10;
    piVar1[4] = 0;
    piVar1[6] = 0;
    piVar1[0x11] = (int)gen_fl2bits(param_8);
    *(undefined1 *)(piVar1 + 0x1b) = 0;
    piVar1[0x19] = 0;
    *(undefined2 *)((int)piVar1 + 0x69) = 1;
    *(undefined1 *)((int)piVar1 + 0x6b) = (undefined1)param_11;
    uVar2 = F_004e9060(param_1,param_2,piVar1,0);
    if (uVar2 == 0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1,500);
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
    piVar1[0xc] = (int)gen_fl2bits(param_3);
    piVar1[0xe] = (int)gen_fl2bits(param_5);
    piVar1[0xf] = (int)gen_fl2bits(param_6);
    piVar1[6] = uVar2;
    piVar1[7] = param_4;
    piVar1[0x10] = (int)gen_fl2bits(param_7);
    piVar1[0x11] = (int)gen_fl2bits(param_8);
    piVar1[0x12] = param_9;
    piVar1[0x13] = param_10;
    *(undefined1 *)(piVar1 + 0x1b) = 0;
    piVar1[0x19] = 0;
    *(undefined2 *)((int)piVar1 + 0x69) = 1;
    *(undefined1 *)((int)piVar1 + 0x6b) = (undefined1)param_11;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return (uint)piVar1;
}

/* ref: FUN_004e9820 */
float F_004e9820(unsigned int gen_a0)
{
  GEN_ENTER(0x4e9820u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  piVar1 = (int *)F_00d2ccf0();
  uVar3 = (*(undefined4 *)(gen_frame + 0x4));
  uVar4 = (*(undefined4 *)(gen_frame + 0x4));
  uVar5 = (*(undefined4 *)(gen_frame + 0x4));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1,&(*(undefined4 *)(gen_frame + 0x48)));
    uVar3 = (*(undefined4 *)(gen_frame + 0x50));
    uVar4 = (*(undefined4 *)(gen_frame + 0x4c));
    uVar5 = (*(undefined4 *)(gen_frame + 0x48));
  }
  puVar7 = &(*(undefined4 *)(gen_frame + 0x48));
  (*(undefined4 *)(gen_frame + 0x50)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x48)) = uVar5;
  (*(undefined4 *)(gen_frame + 0x4c)) = uVar4;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  uVar2 = F_004ec420(((undefined1 *)(gen_frame + 0x8)));
  fVar6 = F_00d00380(param_1,uVar2,puVar7);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return fVar6;
}

/* ref: FUN_004e98b0 */
uint F_004e98b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4e98b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  code * pcVar2;
  float fVar3;
  byte bVar4;
  uint uVar5;
  
  if (*(char *)((int)this + 0x1d) != '\0') {
    return 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0xc4);
  if (piVar1 != (int *)0x0) {
    *(int *)((int)this + 0xc4) = piVar1[3];
    *(undefined1 *)(piVar1 + 5) = 1;
    piVar1[3] = *(int *)((int)this + 200);
    *(int * PTR32 *)((int)this + 200) = piVar1;
    piVar1[4] = 2;
    if (*(char *)((int)this + 0x1e) != '\0') {
      bVar4 = F_004ecc60(piVar1,param_1,REFG(float, 0x1097250),0);
      if (bVar4 == 0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1,500);
        return 0;
      }
      ((code *)*(gen_code32 *)(*piVar1 + 0x8c))(piVar1,0);
      return (uint)piVar1;
    }
    uVar5 = F_004e9060(this,param_1,piVar1,0);
    if (uVar5 == 0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1,500);
      return 0;
    }
    piVar1[0xc] = (int)gen_fl2bits(REFG(float, 0x1097250));
    piVar1[7] = 0;
    fVar3 = REFG(float, 0x1097250);
    piVar1[6] = uVar5;
    pcVar2 = *(gen_code32 *)(*piVar1 + 0x8c);
    piVar1[0x11] = (int)gen_fl2bits(fVar3);
    piVar1[0x12] = 0;
    piVar1[0x13] = 0;
    piVar1[0x19] = 0;
    *(undefined4 *)((int)piVar1 + 0x69) = 0;
    (*pcVar2)(piVar1,0);
  }
  return (uint)piVar1;
}

/* ref: FUN_004e99a0 */
uint F_004e99a0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4e99a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  int param_4 = (int)gen_a3;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  if (*(char *)((int)param_1 + 0x1d) != '\0') {
    return 0;
  }
  piVar1 = *(int * PTR32 *)((int)param_1 + 0xc4);
  if (piVar1 != (int *)0x0) {
    *(int *)((int)param_1 + 0xc4) = piVar1[3];
    *(undefined1 *)(piVar1 + 5) = 1;
    piVar1[3] = *(int *)((int)param_1 + 200);
    *(int * PTR32 *)((int)param_1 + 200) = piVar1;
    piVar1[4] = 2;
    if (*(char *)((int)param_1 + 0x1e) == '\0') {
      uVar3 = F_004e9060(param_1,param_2,piVar1,0);
      if (uVar3 == 0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1,500);
        return 0;
      }
      piVar1[0xc] = (int)gen_fl2bits(param_3);
      piVar1[7] = param_4;
      piVar1[0x11] = GEN_FLT_TO(piVar1[0x11], REFG(float, 0x1097250));
      piVar1[0x12] = 0;
      piVar1[0x13] = 0;
      piVar1[0x19] = 0;
      *(undefined4 *)((int)piVar1 + 0x69) = 0x100;
      piVar1[6] = uVar3;
    }
    else {
      bVar2 = F_004ecc60(piVar1,param_2,param_3,param_4);
      if (bVar2 == 0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1,500);
        return 0;
      }
    }
  }
  return (uint)piVar1;
}

/* ref: FUN_004e9a80 */
uint F_004e9a80(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4e9a80u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  if (*(char *)((int)param_1 + 0x1d) != '\0') {
    return 0;
  }
  piVar1 = *(int * PTR32 *)((int)param_1 + 0xc4);
  if (piVar1 != (int *)0x0) {
    *(int *)((int)param_1 + 0xc4) = piVar1[3];
    *(undefined1 *)(piVar1 + 5) = 1;
    piVar1[3] = *(int *)((int)param_1 + 200);
    *(int * PTR32 *)((int)param_1 + 200) = piVar1;
    piVar1[4] = 1;
    uVar3 = F_004e9060(param_1,param_2,piVar1,0);
    if (uVar3 == 0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1,500);
      return 0;
    }
    piVar1[0xc] = (int)gen_fl2bits(param_3);
    piVar1[7] = param_5;
    iVar2 = REFG(float, 0x1097250);
    piVar1[6] = uVar3;
    piVar1[0x11] = iVar2;
    piVar1[0x12] = 0;
    *(undefined1 *)(piVar1 + 0x1b) = 0;
    piVar1[0x19] = 0;
    *(undefined2 *)((int)piVar1 + 0x69) = 0x100;
    piVar1[0x13] = param_4;
    *(undefined1 *)((int)piVar1 + 0x6b) = (undefined1)param_6;
  }
  return (uint)piVar1;
}

/* ref: FUN_004e9b30 */
uint F_004e9b30(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4e9b30u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  if (*(char *)((int)param_1 + 0x1d) != '\0') {
    return 0;
  }
  piVar1 = *(int * PTR32 *)((int)param_1 + 0xc4);
  if (piVar1 != (int *)0x0) {
    *(int *)((int)param_1 + 0xc4) = piVar1[3];
    *(undefined1 *)(piVar1 + 5) = 1;
    piVar1[3] = *(int *)((int)param_1 + 200);
    *(int * PTR32 *)((int)param_1 + 200) = piVar1;
    piVar1[4] = 1;
    piVar1[0xc] = (int)gen_fl2bits(param_3);
    piVar1[7] = 0;
    piVar1[0x11] = GEN_FLT_TO(piVar1[0x11], REFG(float, 0x1097250));
    piVar1[0x12] = 0;
    piVar1[0x13] = 0;
    *(undefined1 *)(piVar1 + 0x1b) = 0;
    piVar1[0x19] = 0;
    piVar1[6] = 0;
    *(undefined2 *)((int)piVar1 + 0x69) = 0;
    *(undefined1 *)((int)piVar1 + 0x6b) = (undefined1)param_6;
    uVar3 = F_004e9060(param_1,param_2,piVar1,0);
    if (uVar3 == 0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1,500);
      return 0;
    }
    piVar1[0xc] = (int)gen_fl2bits(param_3);
    piVar1[7] = param_5;
    iVar2 = REFG(float, 0x1097250);
    piVar1[6] = uVar3;
    piVar1[0x11] = iVar2;
    piVar1[0x12] = 0;
    *(undefined1 *)(piVar1 + 0x1b) = 0;
    piVar1[0x19] = 0;
    *(undefined2 *)((int)piVar1 + 0x69) = 0;
    piVar1[0x13] = param_4;
    *(undefined1 *)((int)piVar1 + 0x6b) = (undefined1)param_6;
  }
  return (uint)piVar1;
}

/* ref: FUN_004e9c10 */
uint F_004e9c10(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x4e9c10u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint param_5 = (uint)gen_a4;
  int param_6 = (int)gen_a5;
  int param_7 = (int)gen_a6;
  int param_8 = (int)gen_a7;
  int param_9 = (int)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint uVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  char * _Format;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  (*(int *)(gen_frame + 0x20)) = param_6;
  (*(int *)(gen_frame + 0x24)) = param_8;
  uVar5 = param_11;
  if ((param_7 == 0) || ((3000 < param_5 && (param_5 < 0x1195)))) {
    F_00c472af(((char *)(gen_frame + 0x28)),0x80,"sound/battle/mon/%04d.scd",param_5);
    iVar2 = (*(int *)(gen_frame + 0x20)) + -1;
    goto LAB_004ea088;
  }
  switch((unsigned int)(uintptr_t)(param_6)) {
  case 0x10: ;
  case 0x11: ;
  case 0x12: ;
  case 0x13: ;
  case 0x14: ;
  case 0x15: ;
  case 0x16: ;
  case 0x17: ;
  case 0x18: ;
  case 0x19: ;
    if (param_5 < 8000) {
      if (0x50 < param_5 / 100) goto switchD_004e9c6b_default;
      iVar2 = *(int *)(&REFG(undefined, 0x13025f8) + (param_5 / 100) * 8);
    }
    else {
      F_00688a60(REFG(void * PTR32, 0x137129c),&(*(int *)(gen_frame + 0x24)),param_5);
      uVar1 = 0;
      while ((&REFG(undefined4, 0x13025fc))[(int)(uVar1 * 2)] != (*(int *)(gen_frame + 0x24))) {
        uVar1 = uVar1 + 1;
        if (0x50 < uVar1) {
          F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
          return 0;
        }
      }
      iVar2 = *(int *)(&REFG(undefined, 0x13025f8) + uVar1 * 8);
    }
    if (iVar2 == 0) goto switchD_004e9c6b_default;
    F_00c472af(((char *)(gen_frame + 0x28)),0x80,"sound/battle/wep/%s_%02d.scd",iVar2,param_9);
    iVar2 = (*(int *)(gen_frame + 0x20)) + -0x10;
    goto LAB_004ea088;
  case 0x1a: ;
  case 0x1b: ;
    uVar1 = param_9 + 0x1194;
    if ((uVar1 < 0x1195) || (0x119a < uVar1)) {
      uVar1 = 0x119a;
    }
    F_00c472af(((char *)(gen_frame + 0x28)),0x80,"sound/battle/pc/%04d.scd",uVar1);
    iVar2 = (*(int *)(gen_frame + 0x20)) + -0x1a;
    uVar4 = 0;
    fVar3 = F_004e8500(param_7,(*(int *)(gen_frame + 0x24)));
    uVar5 = param_11;
    break;
  case 0x1c: ;
  case 0x1d: ;
  case 0x1e: ;
  case 0x1f: ;
  case 0x20: ;
    iVar2 = param_6 + -0x1c;
    if (param_5 - 1 < 0x60) {
      F_004ec010(&(*(int *)(gen_frame + 0xc)),param_5);
      if ((*(int *)(gen_frame + 0xc)) == 0) goto switchD_004e9c6b_default;
      F_00c472af(((char *)(gen_frame + 0x28)),0x80,"sound/voice/Vo_Battle/Vo_Battle_PC_%s_%c%c_%s.scd",
                 (&REFG(undefined * PTR32, 0x13024e0))[(int)((*(uint *)(gen_frame + 0x10)))],
                 (-(uint)((*(int *)(gen_frame + 0x14)) != 0) & 0xfffffff9) + 0x4d,(int)(char)((char)(*(int *)(gen_frame + 0x18)) + 'a'),
                 (&REFG(undefined * PTR32, 0x13024fc))[(int)((*(int *)(gen_frame + 0x1c)))]);
      goto LAB_004e9e24;
    }
    if (0x62 < param_5 - 0x1db1) {
      if (param_5 - 0x2261 < 0x95) {
        _Format = "sound/voice/Vo_Battle/%04d.scd";
      }
      else {
        _Format = "sound/voice/Voice_Battle/%04d.scd";
      }
      F_00c472af(((char *)(gen_frame + 0x28)),0x80,_Format,param_5);
      uVar4 = 0;
      fVar3 = REFG(float, 0x1097250);
      break;
    }
    uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),4);
    F_004142d0(&(*(int *)(gen_frame + 0x24)),*(undefined4 *)(uVar1 + 0x14));
    F_00c472af(((char *)(gen_frame + 0x28)),0x80,"sound/voice/Vo_Battle/Vo_NPC%02d_Battle_%s.scd",param_5 - 0x1db0,
               (&REFG(undefined * PTR32, 0x13025e4))[(int)((*(int *)(gen_frame + 0x24)))]);
LAB_004ea088: ;
    uVar4 = 0;
    fVar3 = REFG(float, 0x1097250);
    break;
  case 0x21: ;
  case 0x22: ;
  case 0x23: ;
  case 0x24: ;
  case 0x25: ;
  case 0x26: ;
    if (0x62 < param_5 - 0x2009) goto switchD_004e9c6b_default;
    F_004e8ff0();
    uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),4);
    F_004142d0(&(*(int *)(gen_frame + 0x24)),*(undefined4 *)(uVar1 + 0x14));
    F_00c472af(((char *)(gen_frame + 0x28)),0x80,"sound/voice/Vo_Line/Vo_NPC%02d_%s.scd",param_5 - 0x2008,
               (&REFG(undefined * PTR32, 0x13025e4))[(int)((*(int *)(gen_frame + 0x24)))]);
    iVar2 = (*(int *)(gen_frame + 0x20)) + -0x21;
LAB_004e9e24: ;
    uVar4 = 0;
    fVar3 = REFG(float, 0x1097250);
    break;
  case 0x27: ;
  case 0x28: ;
  case 0x29: ;
  case 0x2a: ;
  case 0x2b: ;
  case 0x2c: ;
  case 0x2d: ;
  case 0x2e: ;
  case 0x2f: ;
  case 0x30: ;
  case 0x31: ;
  case 0x32: ;
  case 0x33: ;
  case 0x34: ;
  case 0x35: ;
  case 0x36: ;
    F_004ec010(&(*(int *)(gen_frame + 0xc)),param_5);
    if ((*(int *)(gen_frame + 0xc)) == 0) goto switchD_004e9c6b_default;
    uVar1 = F_004e8310(param_7,param_10);
    if (uVar1 == (*(uint *)(gen_frame + 0x10))) {
      iVar2 = (*(int *)(gen_frame + 0x18)) + (int)(&REFG(undefined * PTR32, 0x1097284))[(int)((*(uint *)(gen_frame + 0x10)))] * 6;
    }
    else {
      iVar2 = (int)(&REFG(undefined * PTR32, 0x1097284))[(int)(uVar1)] * 6 + 2;
    }
    F_00c472af(((char *)(gen_frame + 0x28)),0x80,"sound/voice/Vo_Emote/%04d%03d.scd",
               (*(int *)(gen_frame + 0x14)) * 3 + 0x1c85 + (*(int *)(gen_frame + 0x1c)) * 0x32 + iVar2,(*(int *)(gen_frame + 0x20)) + -0x27);
    iVar2 = 0;
    uVar4 = 0;
    fVar3 = REFG(float, 0x1097250);
    break;
  default: ;
switchD_004e9c6b_default: ;
    F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
    return 0;
  }
  uVar1 = F_004e95a0(param_1,((char *)(gen_frame + 0x28)),REFG(float, 0x1097250),0,param_2,param_3,param_4,fVar3,uVar4,iVar2,
                       uVar5);
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return uVar1;
}

/* ref: FUN_004ea110 */
uint F_004ea110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ea110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  piVar2 = param_1;
  if ((int)param_1 - 1U < 0x60) {
    if (param_1 == (int *)0x0) {
      uVar4 = 0;
      uVar3 = 0;
      uVar5 = 0;
      uVar1 = 0;
    }
    else {
      uVar1 = (int)param_1 - 1;
      uVar4 = uVar1 >> 4;
      uVar3 = uVar1 >> 3 & 1;
      uVar5 = uVar1 & 1;
      uVar1 = uVar1 >> 1 & 3;
    }
    iVar6 = uVar5 + 1 + (uVar3 + uVar4 * 2) * 2;
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"sound/voice/Vo_CM/Vo_cm_PC%02d_%s.scd",iVar6,
               (&REFG(undefined * PTR32, 0x13024fc))[(int)(uVar1)]);
    iVar6 = iVar6 + uVar1;
    if (REFG(int, 0x1375a6c) == iVar6) {
      piVar2 = (int *)F_004e9a80(this,((undefined1 *)(gen_frame + 0x8)),REFG(float, 0x1097250),0,0,1);
    }
    else {
      if (REFG(int * PTR32, 0x1375a68) != (int *)0x0) {
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1375a68) + 0x78))))(REFG(int * PTR32, 0x1375a68),500);
        REFG(int * PTR32, 0x1375a68) = (int *)0x0;
      }
      piVar2 = (int *)F_004e9a80(this,((undefined1 *)(gen_frame + 0x8)),REFG(float, 0x1097250),0,0,0);
      REFG(int * PTR32, 0x1375a68) = piVar2;
      REFG(int, 0x1375a6c) = iVar6;
    }
    *(undefined4 *)&REFG(undefined, 0x1375a70) = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)piVar2;
}

/* ref: FUN_004ea220 */
uint F_004ea220(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4ea220u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  if (param_2 - 0x7d2328U < 0x17ed1) {
    uVar1 = F_0049c120(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4));
    if (uVar1 == 0xffffffff) {
      uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),4);
      F_004142d0(&(*(uint *)(gen_frame + 0x4)),*(undefined4 *)(uVar1 + 0x14));
      uVar1 = (*(uint *)(gen_frame + 0x4));
    }
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"sound/voice/Vo_Line/%07d_%s.scd",param_2,(&REFG(undefined * PTR32, 0x13025e4))[(int)(uVar1)]);
    uVar1 = F_004e95a0(param_1,((undefined1 *)(gen_frame + 0x8)),REFG(float, 0x1097250),0,param_3,param_4,param_5,REFG(float, 0x1097250),0,0,
                         param_6);
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return uVar1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
  return 0;
}

/* ref: FUN_004ea310 */
uint F_004ea310(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4ea310u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 in_esi = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  uVar1 = 0;
  if (param_5 != 0) {
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x80,"sound/battle/mon/%d.scd",param_5);
    uVar1 = F_004e95a0(in_esi,((undefined1 *)(gen_frame + 0x8)),REFG(float, 0x1097250),0,param_2,param_3,param_4,REFG(float, 0x1097250),0,
                         (char)(&REFG(undefined, 0x1097710))[(int)(param_6)] + -1,1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return uVar1;
}

/* ref: FUN_004ea3a0 */
unsigned int F_004ea3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4ea3a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = param_2 + param_1 + param_3;
  uVar1 = *(undefined4 *)((int)this + 0x180);
  *(char *)((int)this + 0xfc) = (char)param_4;
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1097250);
  (*(int *)(gen_frame + 0x8)) = iVar3;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    if (1 < iVar3) {
      if ((char)param_4 != '\0') {
        uVar4 = F_004e99a0(this,REFG(undefined * PTR32, 0x1302380),REFG(float, 0x1097250)
                             ,2000);
        *(uint *)((int)this + 0x184) = uVar4;
        *(undefined4 *)((int)this + 0x180) = 2;
        F_00d2ebf0(&(*(float *)(gen_frame + 0x4)));
        return 0;
      }
      if (*(char *)((int)this + 0xfd) != '\0') {
        uVar4 = F_004e99a0(this,(int)this + 0xfd,REFG(float, 0x1097250),2000);
        *(uint *)((int)this + 0x184) = uVar4;
        *(undefined4 *)((int)this + 0x180) = 1;
        F_00d2ebf0(&(*(float *)(gen_frame + 0x4)));
        return 0;
      }
    }
    goto switchD_004ea3da_default;
  case 1: ;
    if ((char)param_4 == '\0') {
LAB_004ea47f: ;
      if (0 < iVar3) goto switchD_004ea3da_default;
    }
    break;
  case 2: ;
    if ((char)param_4 != '\0') goto LAB_004ea47f;
    break;
  case 3: ;
    piVar2 = *(int * PTR32 *)((int)this + 0x184);
    if (piVar2 != (int *)0x0) {
      uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x7c))(piVar2);
      if ((char)uVar4 != '\0') goto switchD_004ea3da_default;
      piVar2 = *(int * PTR32 *)((int)this + 0x184);
      if (piVar2 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar2 + 0x78))(piVar2,500);
        *(undefined4 *)((int)this + 0x184) = 0;
      }
    }
    goto LAB_004ea525;
  case 4: ;
    piVar2 = *(int * PTR32 *)((int)this + 0x184);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0x78))(piVar2,500);
      *(undefined4 *)((int)this + 0x184) = 0;
    }
    if (*(int *)((int)this + 0xe8) == 1) goto switchD_004ea3da_default;
LAB_004ea525: ;
    *(undefined4 *)((int)this + 0x180) = 0;
  default: ;
    goto switchD_004ea3da_default;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x184);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x50))(piVar2,500);
    *(undefined4 *)((int)this + 0x180) = 3;
    F_00d2ebf0(&(*(float *)(gen_frame + 0x4)));
    return 0;
  }
switchD_004ea3da_default: ;
  F_00d2ebf0(&(*(float *)(gen_frame + 0x4)));
  return 0;
}

/* ref: FUN_004ea560 */
uint F_004ea560(void)
{
  GEN_ENTER(0x4ea560u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x1c)) = 5000;
  (*(undefined4 *)(gen_frame + 0x20)) = 0x10100;
  (*(undefined2 *)(gen_frame + 0x24)) = 0;
  (*(undefined1 *)(gen_frame + 0x26)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  uVar2 = 0;
  do {
    uVar1 = F_00513e90(*((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x130238c) + uVar2))),
                         &(*(undefined4 *)(gen_frame + 0x4)),0,0);
    *(uint *)((int)&REFG(undefined4, 0x1302390) + uVar2) = uVar1;
    uVar2 = uVar2 + 8;
  } while (uVar2 < 0x10);
  return uVar1;
}

/* ref: Client::Sound::SoundManager::vf3 */
unsigned int F_004ea5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ea5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x188);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  piVar1 = *(int * PTR32 *)(this + 200);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xa0))(piVar1);
    if ((uVar2 == param_1) && (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1), (char)uVar2 != '\0'))
    break;
    piVar1 = (int *)piVar1[3];
  }
  if (piVar1[4] == 2) {
    *(int * PTR32 *)(this + 0xbc) = piVar1;
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  UNLOCK();
  ((code *)*(gen_code32 *)(*piVar1 + 0xa8))(piVar1,param_1);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_004ea660 */
uint F_004ea660(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4ea660u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  int * piVar4;
  uint uVar5;
  
  piVar2 = (int *)F_00d2ccf0();
  ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2,((undefined1 *)(gen_frame + 0x0)),*(undefined4 *)((int)param_1 + 0xdc));
  F_00cfff50(((undefined1 *)(gen_frame + 0x0)),*(float *)((int)param_1 + 0xb8));
  iVar1 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
  if (REFG(void * PTR32, 0x1379694) == (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x1090998);
  }
  else {
    puVar3 = (undefined4 *)F_00a5feb0(REFG(void * PTR32, 0x1379694));
    (*(undefined4 *)(gen_frame + 0x10)) = *puVar3;
    (*(undefined4 *)(gen_frame + 0x14)) = puVar3[1];
    (*(undefined4 *)(gen_frame + 0x18)) = puVar3[2];
  }
  F_004e9110(param_1,iVar1 + 0x10,&(*(undefined4 *)(gen_frame + 0x10)));
  piVar4 = (int *)F_00d2d180(0xffffffff);
  piVar2 = *(int * PTR32 *)((int)param_1 + 200);
  while (piVar2 != (int *)0x0) {
    uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x80))(piVar2);
    if (((((char)uVar5 == '\0') &&
         (piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x88))(piVar2))), (char)piVar4 == '\0')) ||
        (piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x14))(piVar2))), (char)piVar4 != '\0')) ||
       ((piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x7c))(piVar2))), (char)piVar4 != '\0' ||
        (piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2))), (char)piVar4 == '\0')))) {
      piVar2 = (int *)piVar2[3];
    }
    else {
      uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0xa0))(piVar2);
      if (uVar5 != 0) {
        F_0050c620(uVar5,0,0);
      }
      piVar2 = (int *)F_004e7570(param_1,piVar2);
      piVar4 = piVar2;
    }
  }
  if (REFG(int * PTR32, 0x1375a68) != (int *)0x0) {
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1375a68) + 0x7c))))(REFG(int * PTR32, 0x1375a68))));
    if ((char)piVar4 == '\0') {
      *(float *)&REFG(undefined, 0x1375a70) = (float)((float10)*(float *)&REFG(undefined, 0x1375a70) + (float10)param_2);
      if (*(double *)&REFG(undefined, 0x1088070) < (double)*(float *)&REFG(undefined, 0x1375a70)) {
        if (REFG(int * PTR32, 0x1375a68) != (int *)0x0) {
          piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1375a68) + 0x78))))(REFG(int * PTR32, 0x1375a68),500)));
          REFG(int * PTR32, 0x1375a68) = (int *)0x0;
        }
        REFG(undefined4, 0x1375a6c) = 0;
      }
    }
    else {
      *(float *)&REFG(undefined, 0x1375a70) = 0.0;
    }
  }
  if (*(int *)((int)param_1 + 0xe8) == 1) {
    *(undefined4 *)((int)param_1 + 0x180) = 4;
  }
  F_00cffc10(((undefined1 *)(gen_frame + 0x0)));
  return (uint)piVar4;
}

/* ref: FUN_004ea820 */
uint F_004ea820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ea820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_EAX = 0;
  
  if (*(char *)((int)this + 0x1d) == '\0') {
    in_EAX = F_004e9a80(this,REFG(undefined * PTR32, 0x130238c),REFG(float, 0x1097250),param_1,0,1);
  }
  return in_EAX;
}

/* ref: FUN_004ea850 */
uint F_004ea850(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, float gen_a13, float gen_a14)
{
  GEN_ENTER(0x4ea850u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  int param_7 = (int)gen_a6;
  int param_8 = (int)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  int param_10 = (int)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  int param_12 = (int)gen_a11;
  int param_13 = (int)gen_a12;
  float param_14 = (float)gen_a13;
  float param_15 = (float)gen_a14;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  bool bVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  char * pcVar6;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  int iVar7;
  float fVar8;
  double dVar9;
  
  uVar4 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  (*(uint *)(gen_frame + 0xa8)) = uVar4;
  if ((*(char *)(param_1 + 0x1d) != '\0') || (param_5 == 0)) {
LAB_004eac59: ;
    F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
    return uVar4;
  }
  piVar5 = (int *)F_00d2ccf0();
  uVar4 = 0;
  if (piVar5 != (int *)0x0) {
    dVar9 = ((gen_fcode *)*(gen_code32 *)(*piVar5 + 0x30))(piVar5,&(*(float *)(gen_frame + 0x18)));
    uVar4 = (uint)(ulonglong)gen_d2bits(dVar9);
    (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x18));
    (*(float *)(gen_frame + 0xc)) = (*(float *)(gen_frame + 0x1c));
    (*(float *)(gen_frame + 0x8)) = (*(float *)(gen_frame + 0x20));
  }
  if (((float10)*(double *)&REFG(undefined, 0x1097728) <
       (float10)(float)((float10)(*(float *)(gen_frame + 0x8)) - (float10)param_4) *
       (float10)(float)((float10)(*(float *)(gen_frame + 0x8)) - (float10)param_4) +
       ((float10)(float)((float10)(*(float *)(gen_frame + 0xc)) - (float10)param_3) *
        (float10)(float)((float10)(*(float *)(gen_frame + 0xc)) - (float10)param_3) +
       (float10)(float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)param_2) *
       (float10)(float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)param_2))) ||
     (*(char *)(param_1 + 0xd8) == '\0')) goto LAB_004eac59;
  bVar1 = false;
  bVar2 = false;
  if ((param_5 != 0xe) && (param_5 != 0xf)) goto LAB_004eaa36;
  bVar2 = true;
  (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1097250);
  if (param_6 == 1) {
    fVar8 = *(float *)&REFG(undefined, 0x1096d78);
    if ((param_7 == 3) || (fVar8 = REFG(float, 0x1097724), param_7 == 5)) {
LAB_004ea9dc: ;
      (*(float *)(gen_frame + 0x10)) = fVar8;
    }
  }
  else {
    (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)1 - ((float10)param_15 - (float10)1))));
    fVar8 = REFG(float, 0x1096d74);
    if (((float10)(*(float *)(gen_frame + 0x10)) < (float10)REFG(float, 0x1096d74)) ||
       (fVar8 = *(float *)&REFG(undefined, 0x1096d78), *(float *)&REFG(undefined, 0x1096d78) < (*(float *)(gen_frame + 0x10)))) goto LAB_004ea9dc;
  }
  pcVar6 = "sound/foot/foot/fs_mesh_ex.scd";
  if (param_5 != 0xe) {
    pcVar6 = "sound/foot/foot/fs_sticky_ex.scd";
  }
  F_004e95a0(param_1,pcVar6,REFG(float, 0x1097250),0,param_2,param_3,param_4,(*(float *)(gen_frame + 0x10)),0,0,1);
  bVar1 = true;
LAB_004eaa36: ;
  iVar7 = param_6;
  if ((param_6 == 1) && (param_8 - 0xbb9U < 0x5dc)) {
    iVar7 = 3;
  }
  if (iVar7 == 1) {
    if (!GEN_ISNAN(param_14) && !(0.0 <= param_14)) {
      param_14 = F_004e8500(param_7,param_9);
      bVar1 = bVar2;
    }
    if ((!bVar1) &&
       (bVar3 = F_004e8440(((undefined1 *)(gen_frame + 0x28)),param_5,param_7,param_9,param_10,param_11,param_12),
       bVar3 != 0)) {
      F_004e95a0(param_1,((undefined1 *)(gen_frame + 0x28)),REFG(float, 0x1097250),0,param_2,param_3,param_4,param_14,0,param_12 + -1,
                   1);
    }
    bVar3 = F_004e84c0(((undefined1 *)(gen_frame + 0x28)),param_13);
    uVar4 = CONCAT31(extraout_var_00,bVar3);
    if (bVar3 != 0) {
      uVar4 = F_004e95a0(param_1,((undefined1 *)(gen_frame + 0x28)),REFG(float, 0x1097250),0,param_2,param_3,param_4,param_14,0,
                           param_12 + -1,1);
      F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
      return uVar4;
    }
  }
  else if (iVar7 == 2) {
    if (((param_10 == 0) && (param_8 - 0xbb9U < 0x5dc)) && (!bVar1)) {
      F_004ea310(param_1,param_2,param_3,param_4,param_8,param_5);
    }
    uVar4 = 0;
    if (param_13 != 0) {
      bVar3 = F_004e84c0(((undefined1 *)(gen_frame + 0x28)),param_13);
      uVar4 = CONCAT31(extraout_var,bVar3);
      if (bVar3 != 0) {
        uVar4 = F_004e95a0(param_1,((undefined1 *)(gen_frame + 0x28)),REFG(float, 0x1097250),0,param_2,param_3,param_4,REFG(float, 0x1097250),0,
                             param_12 + -1,1);
        F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
        return uVar4;
      }
    }
  }
  else {
    uVar4 = iVar7 - 3;
    if ((uVar4 == 0) && (!bVar1)) {
      uVar4 = F_004ea310(param_1,param_2,param_3,param_4,param_8,param_5);
      F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
      return uVar4;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return uVar4;
}

/* ref: FUN_004eac70 */
uint F_004eac70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4eac70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  HANDLE pvVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined * pvVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined * this_00;
  undefined4 uVar7;
  
  F_00509590(this);
  F_004cefe0((undefined *)((int)this + 4));
  uVar7 = REFG(float, 0x1096e0c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x109790c));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[6])REFP(0x10978f0));
  *(undefined1 *)((int)this + 0x1c) = (undefined1)param_2;
  *(undefined1 *)((int)this + 0x1d) = 0;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_1;
  *(undefined4 *)((int)this + 0x20) = REFG(float, 0x1097250);
  *(undefined4 *)((int)this + 0x24) = REFG(float, 0x1097250);
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0x10001;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = uVar7;
  *(undefined1 *)((int)this + 0xf0) = 1;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined1 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x188));
  pvVar1 = gen_imp_CreateEventA((GEN_LPANY)0x0,0,0,(LPCSTR)0x0);
  uVar7 = 0;
  *(HANDLE *)((int)this + 0x1a0) = pvVar1;
  uVar2 = F_004042b0();
  puVar3 = (undefined4 *)F_00406c00(0x7404,0,uVar2,uVar7);
  if (puVar3 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = puVar3 + 1;
    *puVar3 = 0x100;
    param_2 = 0xff;
    puVar3 = puVar5;
    do {
      puVar3[1] = 0;
      puVar3[2] = 0;
      *(undefined1 *)(puVar3 + 5) = 0;
      *puVar3 = (*(undefined * PTR32 (*)[44])REFP(0x10977e4));
      puVar3[6] = 0;
      F_00cbbd70(puVar3 + 8);
      puVar3[0xc] = 0;
      puVar3[0x19] = 3;
      puVar3 = puVar3 + 0x1d;
      param_2 = param_2 + -1;
    } while (-1 < param_2);
  }
  *(undefined4 * PTR32 *)((int)this + 0xc0) = puVar5;
  puVar3 = puVar5 + 3;
  iVar6 = 0xff;
  do {
    *puVar3 = puVar3 + 0x1a;
    puVar3 = puVar3 + 0x1d;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puVar5[0x1ce6] = 0;
  uVar7 = 0;
  *(undefined4 * PTR32 *)((int)this + 0xc4) = puVar5;
  *(undefined4 *)((int)this + 200) = 0;
  uVar2 = F_004042b0();
  pvVar4 = (undefined *)F_00406bd0(0x80550,0,uVar2,uVar7);
  if (pvVar4 == (undefined *)0x0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    param_2 = 3;
    this_00 = pvVar4;
    do {
      F_004ec500(this_00);
      this_00 = (undefined *)((int)this_00 + 0x20150);
      param_2 = param_2 + -1;
    } while (-1 < param_2);
    *(undefined4 *)((int)pvVar4 + 0x80540) = 0;
  }
  *(undefined * PTR32 *)((int)this + 0xcc) = pvVar4;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  uVar2 = 0;
  puVar3 = (undefined4 *)((int)this + 0x68);
  do {
    puVar3[-0x10] = GEN_FLT_TO(puVar3[-0x10], REFG(float, 0x1097250));
    *puVar3 = GEN_FLT_TO(*puVar3, REFG(float, 0x1097250));
    *(undefined1 *)((int)this + uVar2 + 0xa8) = 0;
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (uVar2 < 0x10);
  *(undefined1 *)((int)this + 0xfd) = 0;
  REFG(void * PTR32, 0x1375a64) = this;
  return (uint)this;
}

/* ref: FUN_004eae80 */
uint F_004eae80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4eae80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 * puVar2;
  undefined * this_00;
  byte bVar3;
  uint uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)(int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
  F_00d2da30(&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  bVar3 = F_00d2db30();
  while (bVar3 == 0) {
    F_004cee80();
    F_004ea660(this,*(float *)&REFG(undefined, 0x1097254));
    bVar3 = F_00d2db30();
  }
  iVar1 = *(int *)((int)this + 0xe4);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 0) {
      F_00d2ea00(*(int *)(iVar1 + 4));
    }
    F_00406ad0(iVar1);
    *(undefined4 *)((int)this + 0xe4) = 0;
  }
  F_00d2efa0();
  F_00d2f060(param_1);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0xc0);
  if (puVar2 != (undefined4 *)0x0) {
    if (puVar2[-1] == 0) {
      F_00406b30(puVar2 + -1);
    }
    else {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,3);
    }
  }
  *(undefined4 *)((int)this + 0xc0) = 0;
  uVar4 = 0;
  if (*(int *)((int)this + 0xe0) != 0) {
    uVar4 = F_00406ad0(*(int *)((int)this + 0xe0));
    *(undefined4 *)((int)this + 0xe0) = 0;
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0xcc);
  if (this_00 != (undefined *)0x0) {
    F_004eca20(this_00);
    uVar4 = F_00406ad0(this_00);
    *(undefined4 *)((int)this + 0xcc) = 0;
  }
  return uVar4;
}

/* ref: FUN_004eaf80 */
uint F_004eaf80(unsigned int gen_a0)
{
  GEN_ENTER(0x4eaf80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x109790c));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[6])REFP(0x10978f0));
  F_004eae80(this,0);
  gen_imp_CloseHandle(*(HANDLE *)((int)this + 0x1a0));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x188));
  F_004cf880((undefined *)((int)this + 4));
  uVar1 = F_005095f0(this);
  return uVar1;
}

/* ref: FUN_004eafe0 */
uint F_004eafe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4eafe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  return (uint)this;
}

/* ref: FUN_004eb010 */
uint F_004eb010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4eb010u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return (uint)in_ecx;
}

/* ref: FUN_004eb040 */
uint F_004eb040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4eb040u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_004eb070 */
uint F_004eb070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4eb070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  return (uint)this;
}

/* ref: FUN_004eb0a0 */
uint F_004eb0a0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x4eb0a0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
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

/* ref: FUN_004eb100 */
uint F_004eb100(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x4eb100u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + param_2 * 4) = param_3;
  return in_ecx;
}

/* ref: FUN_004eb230 */
unsigned int F_004eb230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4eb230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1[2];
  fVar2 = param_1[3];
  fVar3 = param_1[1];
  *(float *)this = *(float *)this - *param_1;
  *(float *)((int)this + 4) = *(float *)((int)this + 4) - fVar3;
  *(float *)((int)this + 8) = *(float *)((int)this + 8) - fVar1;
  *(float *)((int)this + 0xc) = *(float *)((int)this + 0xc) - fVar2;
  return 0;
}

/* ref: FUN_004eb2e0 */
uint F_004eb2e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4eb2e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1097250));
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return (uint)param_1;
}

/* ref: FUN_004eb310 */
uint F_004eb310(unsigned int gen_a0)
{
  GEN_ENTER(0x4eb310u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1097250);
  *param_1 = 0;
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  return (uint)param_1;
}

/* ref: FUN_004eb340 */
uint F_004eb340(unsigned int gen_a0)
{
  GEN_ENTER(0x4eb340u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1097250);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar1;
  param_1[3] = 0;
  return (uint)param_1;
}

/* ref: FUN_004eb370 */
uint F_004eb370(unsigned int gen_a0)
{
  GEN_ENTER(0x4eb370u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = GEN_FLT_TO(param_1[3], REFG(float, 0x1097250));
  return (uint)param_1;
}

/* ref: FUN_004eb3a0 */
uint F_004eb3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4eb3a0u, gen_a0, gen_a1, 0u, 0u);
  gen_v12 * in_ecx = (gen_v12 *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar8;
  float fVar9;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar1 = *(float *)(*in_ecx + 8);
  fVar2 = *(float *)in_ecx[1];
  fVar3 = *(float *)*in_ecx;
  fVar4 = *(float *)(*in_ecx + 4);
  (*(float *)((char *)&auVar6 + 0)) = fVar3 * fVar3;
  (*(float *)((char *)&auVar6 + 4)) = gen_bits2f((uint)((ulonglong)*(undefined8 *)*in_ecx >> 0x20)) * fVar4;
  (*(float *)((char *)&auVar6 + 8)) = SUB124(*in_ecx,8) * fVar1;
  (*(float *)((char *)&auVar6 + 12)) = fVar2 * fVar2;
  fVar11 = ((*(float *)((char *)&auVar6 + 8)) + (*(float *)((char *)&auVar6 + 4))) + ((*(float *)((char *)&auVar6 + 12)) + (*(float *)((char *)&auVar6 + 0)));
  fVar12 = ((*(float *)((char *)&auVar6 + 12)) + (*(float *)((char *)&auVar6 + 8))) + ((*(float *)((char *)&auVar6 + 0)) + (*(float *)((char *)&auVar6 + 4)));
  fVar13 = ((*(float *)((char *)&auVar6 + 0)) + (*(float *)((char *)&auVar6 + 12))) + ((*(float *)((char *)&auVar6 + 4)) + (*(float *)((char *)&auVar6 + 8)));
  fVar14 = ((*(float *)((char *)&auVar6 + 4)) + (*(float *)((char *)&auVar6 + 0))) + ((*(float *)((char *)&auVar6 + 8)) + (*(float *)((char *)&auVar6 + 12)));
  (*(undefined4 *)((char *)&auVar7 + 4)) = (undefined4)gen_fl2bits(fVar12);
  (*(undefined4 *)((char *)&auVar7 + 0)) = (undefined4)gen_fl2bits(fVar11);
  (*(undefined4 *)((char *)&auVar7 + 8)) = (undefined4)gen_fl2bits(fVar13);
  (*(undefined4 *)((char *)&auVar7 + 12)) = (undefined4)gen_fl2bits(fVar14);
  gen_rsqrtps(&(auVar7), &(auVar6), &(auVar7));
  fVar5 = (*(float *)((char *)&auVar7 + 0));
  fVar8 = (*(float *)((char *)&auVar7 + 4));
  fVar9 = (*(float *)((char *)&auVar7 + 8));
  fVar10 = (*(float *)((char *)&auVar7 + 12));
  fVar12 = *(float *)&REFG(undefined, 0x1097204) - (fVar8 * fVar12) * fVar8;
  fVar13 = *(float *)&REFG(undefined, 0x1097208) - (fVar9 * fVar13) * fVar9;
  fVar14 = *(float *)&REFG(undefined, 0x109720c) - (fVar10 * fVar14) * fVar10;
  fVar15 = *(float *)&REFG(undefined, 0x1097214) * fVar8;
  fVar16 = *(float *)&REFG(undefined, 0x1097218) * fVar9;
  fVar17 = *(float *)&REFG(undefined, 0x109721c) * fVar10;
  *param_2 = ((*(float *)&REFG(undefined, 0x1097200) - (fVar5 * fVar11) * fVar5) *
              (*(float *)&REFG(undefined, 0x1097210) * fVar5) + fVar5) * fVar3;
  param_2[1] = (fVar12 * fVar15 + fVar8) * fVar4;
  param_2[2] = (fVar13 * fVar16 + fVar9) * fVar1;
  param_2[3] = (fVar14 * fVar17 + fVar10) * fVar2;
  return (uint)param_2;
}

/* ref: FUN_004eb470 */
unsigned int F_004eb470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4eb470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = *param_2;
  *(undefined4 *)((int)this + 0x14) = param_2[1];
  *(undefined4 *)((int)this + 0x18) = param_2[2];
  *(undefined4 *)((int)this + 0x1c) = param_2[3];
  *(undefined4 *)((int)this + 0x20) = *param_3;
  *(undefined4 *)((int)this + 0x24) = param_3[1];
  *(undefined4 *)((int)this + 0x28) = param_3[2];
  *(undefined4 *)((int)this + 0x2c) = param_3[3];
  *(undefined4 *)((int)this + 0x30) = *param_4;
  *(undefined4 *)((int)this + 0x34) = param_4[1];
  *(undefined4 *)((int)this + 0x38) = param_4[2];
  *(undefined4 *)((int)this + 0x3c) = param_4[3];
  return 0;
}

/* ref: FUN_004eb4e0 */
unsigned int F_004eb4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4eb4e0u, gen_a0, gen_a1, 0u, 0u);
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
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  return 0;
}

/* ref: FUN_004eb550 */
uint F_004eb550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4eb550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0x30) = *param_1;
  *(undefined4 *)((int)this + 0x34) = param_1[1];
  *(undefined4 *)((int)this + 0x38) = param_1[2];
  *(undefined4 *)((int)this + 0x3c) = param_1[3];
  return (uint)this;
}

/* ref: FUN_004eb5c0 */
uint F_004eb5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4eb5c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + in_ecx;
}

/* ref: FUN_004eb5d0 */
uint F_004eb5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4eb5d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + in_ecx;
}

/* ref: FUN_004eb5e0 */
uint F_004eb5e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4eb5e0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float param_4 = (float)gen_a3;
  *((float *)GEN_TOP((param_1 + (param_3 + param_2 * 4) * 4))) = param_4;
  return param_1;
}

/* ref: FUN_004eb600 */
uint F_004eb600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4eb600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
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
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  fVar3 = *(float *)&REFG(undefined, 0x109720c);
  fVar4 = *(float *)((int)this + 0x18);
  fVar5 = *(float *)((int)this + 0x10);
  fVar6 = *(float *)((int)this + 0x14);
  fVar7 = *(float *)this;
  fVar1 = *(float *)((int)this + 0x28);
  fVar9 = *(float *)((int)this + 8);
  fVar10 = *(float *)((int)this + 4);
  fVar2 = *(float *)((int)this + 0x24);
  fVar11 = fVar4 * fVar10 - fVar6 * fVar9;
  fVar12 = fVar5 * fVar9 - fVar4 * fVar7;
  fVar13 = fVar6 * fVar7 - fVar5 * fVar10;
  fVar17 = *(float *)*(gen_v12 *)((int)this + 0x20);
  fVar14 = fVar6 * fVar1 - fVar4 * fVar2;
  fVar15 = fVar4 * fVar17 - fVar5 * fVar1;
  fVar16 = fVar5 * fVar2 - fVar6 * fVar17;
  fVar8 = fVar2 * fVar9 - fVar1 * fVar10;
  fVar9 = fVar1 * fVar7 - fVar17 * fVar9;
  fVar10 = fVar17 * fVar10 - fVar2 * fVar7;
  fVar17 = 0.0 - *(float *)((int)this + 0x30);
  fVar18 = 0.0 - *(float *)((int)this + 0x34);
  fVar19 = 0.0 - *(float *)((int)this + 0x38);
  (*(undefined4 *)((char *)&auVar20 + 4)) = (undefined4)gen_fl2bits(fVar11);
  (*(undefined4 *)((char *)&auVar20 + 0)) = (undefined4)gen_fl2bits(fVar13);
  (*(undefined4 *)((char *)&auVar20 + 8)) = (undefined4)gen_fl2bits(fVar12);
  (*(undefined4 *)((char *)&auVar20 + 12)) = (undefined4)gen_fl2bits(fVar12);
  fVar7 = (fVar2 * fVar12 + SUB124(*(gen_v12 *)((int)this + 0x20),0) * fVar11) +
          fVar1 * fVar13;
  (*(undefined4 *)((char *)&auVar21 + 4)) = (undefined4)gen_fl2bits(fVar7);
  (*(undefined4 *)((char *)&auVar21 + 0)) = (undefined4)gen_fl2bits(fVar7);
  (*(undefined4 *)((char *)&auVar21 + 8)) = (undefined4)gen_fl2bits(fVar7);
  (*(undefined4 *)((char *)&auVar21 + 12)) = (undefined4)gen_fl2bits(fVar7);
  gen_rcpps(&(auVar21), &(auVar20), &(auVar21));
  fVar4 = (*(float *)((char *)&auVar21 + 0));
  fVar5 = (*(float *)((char *)&auVar21 + 4));
  fVar6 = (*(float *)((char *)&auVar21 + 8));
  fVar4 = (*(float *)&REFG(undefined, 0x1097200) - fVar4 * fVar7) * fVar4 + fVar4;
  fVar5 = (*(float *)&REFG(undefined, 0x1097204) - fVar5 * fVar7) * fVar5 + fVar5;
  fVar6 = (*(float *)&REFG(undefined, 0x1097208) - fVar6 * fVar7) * fVar6 + fVar6;
  *param_1 = fVar14 * fVar4;
  param_1[1] = fVar8 * fVar5;
  param_1[2] = fVar11 * fVar6;
  param_1[3] = 0.0;
  param_1[4] = fVar15 * fVar4;
  param_1[5] = fVar9 * fVar5;
  param_1[6] = fVar12 * fVar6;
  param_1[7] = 0.0;
  param_1[8] = fVar16 * fVar4;
  param_1[9] = fVar10 * fVar5;
  param_1[10] = fVar13 * fVar6;
  param_1[0xb] = 0.0;
  param_1[0xc] = fVar4 * ((fVar18 * fVar15 + fVar17 * fVar14) + fVar19 * fVar16);
  param_1[0xd] = fVar5 * ((fVar18 * fVar9 + fVar17 * fVar8) + fVar19 * fVar10);
  param_1[0xe] = fVar6 * ((fVar18 * fVar12 + fVar17 * fVar11) + fVar19 * fVar13);
  param_1[0xf] = fVar3;
  return (uint)param_1;
}

/* ref: FUN_004eb8f0 */
uint F_004eb8f0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4eb8f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = (int)((double)param_2 * *(double *)&REFG(undefined, 0x1097260));
  return (uint)in_ecx;
}

/* ref: FUN_004eb910 */
uint F_004eb910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4eb910u, gen_a0, gen_a1, gen_a2, 0u);
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
  
  fVar1 = param_3[2];
  fVar2 = *param_3;
  fVar3 = param_3[1];
  fVar4 = in_ecx[7];
  fVar5 = in_ecx[3];
  fVar6 = in_ecx[5];
  fVar7 = in_ecx[6];
  fVar8 = in_ecx[2];
  fVar9 = in_ecx[1];
  fVar10 = in_ecx[0xb];
  fVar11 = in_ecx[10];
  fVar12 = in_ecx[9];
  *param_2 = (in_ecx[4] * fVar3 + *in_ecx * fVar2) + in_ecx[8] * fVar1;
  param_2[1] = (fVar6 * fVar3 + fVar9 * fVar2) + fVar12 * fVar1;
  param_2[2] = (fVar7 * fVar3 + fVar8 * fVar2) + fVar11 * fVar1;
  param_2[3] = (fVar4 * fVar3 + fVar5 * fVar2) + fVar10 * fVar1;
  return (uint)param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IStreamReaderEx::vf2 */
unsigned int F_004eba10(void)
{
  GEN_ENTER(0x4eba10u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IStreamReaderEx::vf0 */
uint F_004eba20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4eba20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x109726c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004eba70 */
uint F_004eba70(unsigned int gen_a0)
{
  GEN_ENTER(0x4eba70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_004042b0();
  uVar1 = F_00406c00(param_1,0,uVar1,uVar2);
  return uVar1;
}

/* ref: FUN_004eba90 */
uint F_004eba90(unsigned int gen_a0)
{
  GEN_ENTER(0x4eba90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar2 = F_00406b30(param_1);
    uVar1 = (uint)uVar2;
  }
  return uVar1;
}

/* ref: FUN_004ebad0 */
uint F_004ebad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ebad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = F_00d2e9b0(0xffffffff);
  *(uint *)((int)this + 4) = uVar1;
  return (uint)this;
}

/* ref: FUN_004ebb10 */
uint F_004ebb10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ebb10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = F_00d2ea80(*(int *)((int)this + 4),param_1,0xffffffff);
    return uVar1;
  }
  return 0;
}

/* ref: Client::Sound::IResourceNameHolder::vf0 */
uint F_004ebb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ebb50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109727c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004ebbe0 */
uint F_004ebbe0(unsigned int gen_a0)
{
  GEN_ENTER(0x4ebbe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = (int *)((int)this + 0x20010);
  iVar3 = 3;
  do {
    uVar1 = 0;
    if (*piVar2 != 0) {
      uVar1 = F_0050c620(*piVar2,0,0);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return uVar1;
}

/* ref: FUN_004ebc40 */
uint F_004ebc40(unsigned int gen_a0)
{
  GEN_ENTER(0x4ebc40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  
  uVar1 = 0;
  do {
    if (*(char *)((int)this + uVar1 + 0x80540) == '\0') {
      *(undefined1 *)(uVar1 + 0x80540 + (int)this) = 1;
      pvVar2 = (undefined *)(uVar1 * 0x20150 + (int)this);
      *(undefined4 *)((int)pvVar2 + 0x20034) = 0;
      *(undefined4 *)((int)pvVar2 + 0x20038) = 0;
      *(undefined4 *)((int)pvVar2 + 0x2003c) = 0;
      *(undefined2 *)((int)pvVar2 + 0x20144) = 0x100;
      *(undefined4 *)((int)pvVar2 + 0x2001c) = 0xffffffff;
      *(undefined4 *)((int)pvVar2 + 0x20028) = 0;
      *(undefined4 *)((int)pvVar2 + 0x20010) = 0;
      *(undefined4 *)((int)pvVar2 + 0x20020) = 0xffffffff;
      *(undefined4 *)((int)pvVar2 + 0x2002c) = 0;
      *(undefined4 *)((int)pvVar2 + 0x20014) = 0;
      *(undefined4 *)((int)pvVar2 + 0x20024) = 0xffffffff;
      *(undefined4 *)((int)pvVar2 + 0x20030) = 0;
      *(undefined4 *)((int)pvVar2 + 0x20018) = 0;
      return (uint)pvVar2;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return 0;
}

/* ref: FUN_004ebcc0 */
uint F_004ebcc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ebcc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = 0;
  pvVar1 = this;
  do {
    if (pvVar1 == param_1) {
      piVar3 = (int *)((int)param_1 + 0x20010);
      iVar2 = 3;
      do {
        if (*piVar3 != 0) {
          F_0050c620(*piVar3,0,0);
          *piVar3 = 0;
        }
        piVar3 = piVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      *(undefined1 *)(uVar4 + 0x80540 + (int)this) = 0;
      return (uint)this;
    }
    uVar4 = uVar4 + 1;
    pvVar1 = (undefined *)((int)pvVar1 + 0x20150);
  } while (uVar4 < 4);
  return (uint)pvVar1;
}

/* ref: FUN_004ebd30 */
uint F_004ebd30(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4ebd30u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(float *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x44) = REFG(float, 0x1097250);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x6a) = (undefined1)param_4;
  *(undefined2 *)(param_1 + 0x6b) = 0;
  return 0;
}

/* ref: FUN_004ebd70 */
uint F_004ebd70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4ebd70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)((int)this + 0x50) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined4 *)((int)this + 0x54) = param_3;
  *(undefined4 *)((int)this + 0x58) = param_4;
  *(undefined1 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 100) = 1;
  *(undefined2 *)((int)this + 0x6a) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  return 0;
}

/* ref: FUN_004ebdb0 */
uint F_004ebdb0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4ebdb0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  *(float *)(param_1 + 0x30) = param_3;
  *(undefined4 *)(param_1 + 0x44) = REFG(float, 0x1097250);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x69) = 0x100;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return 0;
}

/* ref: FUN_004ebdf0 */
byte F_004ebdf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x4ebdf0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x1c) = param_5;
  *(float *)(param_1 + 0x30) = param_4;
  uVar1 = REFG(float, 0x1097250);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x6a) = (undefined1)param_6;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  *(byte *)(param_1 + 0x6b) = (byte)param_7;
  return (byte)param_7;
}

/* ref: FUN_004ebe40 */
byte F_004ebe40(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4ebe40u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(float *)(param_1 + 0x30) = param_3;
  uVar1 = REFG(float, 0x1097250);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined2 *)(param_1 + 0x69) = 0;
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(byte *)(param_1 + 0x6b) = (byte)param_4;
  return (byte)param_4;
}

/* ref: FUN_004ebe80 */
byte F_004ebe80(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11)
{
  GEN_ENTER(0x4ebe80u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  undefined4 param_12 = (undefined4)gen_a11;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(float *)(param_1 + 0x30) = param_3;
  *(float *)(param_1 + 0x38) = param_5;
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  *(undefined4 *)(param_1 + 0x48) = param_9;
  *(float *)(param_1 + 0x3c) = param_6;
  *(undefined4 *)(param_1 + 0x4c) = param_10;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(float *)(param_1 + 0x40) = param_7;
  *(float *)(param_1 + 0x44) = param_8;
  *(undefined1 *)(param_1 + 0x69) = 1;
  *(byte *)(param_1 + 0x6a) = (byte)param_11;
  *(undefined1 *)(param_1 + 0x6b) = (undefined1)param_12;
  return (byte)param_11;
}

/* ref: FUN_004ebef0 */
byte F_004ebef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4ebef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_004042b0();
  uVar1 = F_00406c00((uint)*param_3,0,uVar1,uVar2);
  *(uint *)((int)this + 0x5c) = uVar1;
  if (uVar1 == 0) {
    uVar1 = F_00406bb0((uint)*param_3,0,0);
    *(uint *)((int)this + 0x5c) = uVar1;
    F_00510e20(7);
    F_00510e20(0xc);
    if (*(int *)((int)this + 0x5c) == 0) {
      return 0;
    }
  }
  F_00c46aa0(*(undefined4 *)((int)this + 0x5c),param_3,(uint)*param_3);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x5c) + 8))) = param_4;
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00d2ea80(*(int *)(param_1 + 4),*(undefined4 *)((int)this + 0x5c),0xffffffff);
  }
  *(int *)((int)this + 0x50) = param_1;
  *(uint *)((int)this + 0x54) = uVar1;
  *(undefined4 *)((int)this + 0x58) = param_4;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined1 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 100) = 1;
  *(undefined2 *)((int)this + 0x6a) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  return 1;
}

/* ref: FUN_004ebfb0 */
uint F_004ebfb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4ebfb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  *(int *)((int)this + 0x60) = param_3;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)(param_3 + 8) = param_4;
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00d2ea80(*(int *)(param_1 + 4),*(undefined4 *)((int)this + 0x60),0xffffffff);
  }
  *(undefined4 *)((int)this + 0x58) = param_4;
  *(undefined1 *)((int)this + 0x6c) = 0;
  *(undefined2 *)((int)this + 0x6a) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(int *)((int)this + 0x50) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(uint *)((int)this + 0x54) = uVar1;
  *(undefined4 *)((int)this + 100) = 1;
  return uVar1;
}

/* ref: FUN_004ec010 */
uint F_004ec010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ec010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(int *)this = param_1;
  if (param_1 != 0) {
    uVar1 = param_1 - 1;
    *(uint *)((int)this + 4) = uVar1 >> 4;
    *(uint *)((int)this + 8) = uVar1 >> 3 & 1;
    *(uint *)((int)this + 0x10) = uVar1 >> 1 & 3;
    *(uint *)((int)this + 0xc) = uVar1 & 1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return (uint)this;
}

/* ref: FUN_004ec080 */
uint F_004ec080(unsigned int gen_a0)
{
  GEN_ENTER(0x4ec080u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)(&REFG(undefined * PTR32, 0x1097284))[(int)(param_1)];
}

/* ref: FUN_004ec100 */
uint F_004ec100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ec100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (*(int *)((int)this + 4) != 0) {
    F_00d2ea00(*(int *)((int)this + 4));
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004ec130 */
uint F_004ec130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ec130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004ec160 */
byte F_004ec160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ec160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_004ec190 */
uint F_004ec190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ec190u, gen_a0, gen_a1, 0u, 0u);
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
  return (uint)in_ecx;
}

/* ref: FUN_004ec1c0 */
uint F_004ec1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ec1c0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = in_ecx[1];
  fVar2 = in_ecx[2];
  fVar3 = in_ecx[3];
  *param_2 = SQRT(*in_ecx);
  param_2[1] = fVar1;
  param_2[2] = fVar2;
  param_2[3] = fVar3;
  return (uint)param_2;
}

/* ref: FUN_004ec1e0 */
uint F_004ec1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ec1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_004ec200 */
uint F_004ec200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ec200u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = REFG(float, 0x1097250);
  if (param_3 == 3) {
    *param_2 = *(undefined4 *)(in_ecx + 0x30);
    uVar1 = *(undefined4 *)(in_ecx + 0x34);
    param_2[3] = uVar2;
    param_2[1] = uVar1;
    param_2[2] = *(undefined4 *)(in_ecx + 0x38);
    return (uint)param_2;
  }
  iVar3 = in_ecx + param_3 * 0x10;
  *param_2 = *(undefined4 *)(in_ecx + param_3 * 0x10);
  param_2[3] = 0;
  param_2[1] = *(undefined4 *)(iVar3 + 4);
  param_2[2] = *(undefined4 *)(iVar3 + 8);
  return (uint)param_2;
}

/* ref: FUN_004ec280 */
uint F_004ec280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ec280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = *param_1;
  *(undefined4 *)((int)this + 8) = param_1[1];
  uVar1 = param_1[2];
  *(uint *)((int)this + 0xc) = uVar1;
  return uVar1;
}

/* ref: FUN_004ec2c0 */
uint F_004ec2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ec2c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_004ec2d0 */
uint F_004ec2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ec2d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_004ec2e0 */
uint F_004ec2e0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x4ec2e0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
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

/* ref: FUN_004ec310 */
uint F_004ec310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ec310u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_3[3];
  fVar2 = in_ecx[3];
  fVar3 = param_3[1] * in_ecx[1];
  fVar4 = param_3[2] * in_ecx[2];
  *param_2 = (fVar4 + *param_3 * *in_ecx) + fVar3;
  param_2[1] = (fVar4 + fVar3) + fVar3;
  param_2[2] = (fVar4 + fVar4) + fVar3;
  param_2[3] = (fVar4 + fVar1 * fVar2) + fVar3;
  return (uint)param_2;
}

/* ref: FUN_004ec370 */
uint F_004ec370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ec370u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = in_ecx[3];
  fVar2 = in_ecx[1] * in_ecx[1];
  fVar3 = in_ecx[2] * in_ecx[2];
  *param_2 = (fVar3 + *in_ecx * *in_ecx) + fVar2;
  param_2[1] = (fVar3 + fVar2) + fVar2;
  param_2[2] = (fVar3 + fVar3) + fVar2;
  param_2[3] = (fVar3 + fVar1 * fVar1) + fVar2;
  return (uint)param_2;
}

/* ref: FUN_004ec3b0 */
uint F_004ec3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ec3b0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = in_ecx[3];
  fVar2 = in_ecx[1] * in_ecx[1];
  fVar3 = in_ecx[2] * in_ecx[2];
  *param_2 = SQRT((fVar3 + *in_ecx * *in_ecx) + fVar2);
  param_2[1] = (fVar3 + fVar2) + fVar2;
  param_2[2] = (fVar3 + fVar3) + fVar2;
  param_2[3] = (fVar3 + fVar1 * fVar1) + fVar2;
  return (uint)param_2;
}

/* ref: FUN_004ec400 */
uint F_004ec400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ec400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004eb4e0(this,param_1);
  return (uint)this;
}

/* ref: FUN_004ec420 */
uint F_004ec420(unsigned int gen_a0)
{
  GEN_ENTER(0x4ec420u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1097250);
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1097250));
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = uVar1;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_004ec500 */
uint F_004ec500(unsigned int gen_a0)
{
  GEN_ENTER(0x4ec500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109727c));
  F_00509590((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[3])REFP(0x109726c));
  *(undefined4 *)((int)this + 0x20034) = 0;
  *(undefined4 *)((int)this + 0x20038) = 0;
  *(undefined4 *)((int)this + 0x2003c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1097368));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1097350));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[3])REFP(0x1097340));
  *(undefined2 *)((int)this + 0x20144) = 0x100;
  *(undefined4 *)((int)this + 0x20028) = 0;
  *(undefined4 *)((int)this + 0x20010) = 0;
  *(undefined4 *)((int)this + 0x2002c) = 0;
  *(undefined4 *)((int)this + 0x20014) = 0;
  *(undefined4 *)((int)this + 0x20030) = 0;
  *(undefined4 *)((int)this + 0x20018) = 0;
  *(undefined4 *)((int)this + 0x2001c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x20020) = 0xffffffff;
  *(undefined4 *)((int)this + 0x20024) = 0xffffffff;
  return (uint)this;
}

/* ref: Client::Sound::Stream::vf2 */
byte F_004ec590(void)
{
  GEN_ENTER(0x4ec590u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_004ec5a0 */
unsigned int F_004ec5a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4ec5a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x2013d) = 1;
  return 0;
}

/* ref: FUN_004ec5b0 */
uint F_004ec5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ec5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int * piVar2;
  uint in_EAX = 0;
  uint uVar3;
  float10 extraout_ST0;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((*(char *)((int)this + 0x20144) == '\0') &&
     (in_EAX = 0, *(int * PTR32 *)((int)this + 0x20034) != (int *)0x0)) {
    iVar1 = **(int * PTR32 *)((int)this + 0x20034);
    uVar3 = F_00d2d700(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)((int)this + 0x2003c),0,0,1);
    ((code *)*(gen_code32 *)(iVar1 + 0xc))(*(undefined4 *)((int)this + 0x20034),uVar3);
    F_00cbbdb0(((undefined1 *)(gen_frame + 0xc)));
    piVar2 = *(int * PTR32 *)((int)this + 0x20034);
    uVar7 = 0;
    uVar6 = 0;
    fVar5 = *(float *)&REFG(undefined, 0x1097254);
    extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar2 + 0x20))(piVar2);
    fVar4 = (float)extraout_ST0;
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
    in_EAX = F_00cbdfe0(uVar3,param_1,fVar4,fVar5,uVar6,uVar7);
    *(undefined2 *)((int)this + 0x20144) = 1;
  }
  return in_EAX;
}

/* ref: Client::Sound::Stream::vf1 */
uint F_004ec650(unsigned int gen_a0)
{
  GEN_ENTER(0x4ec650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20040;
}

/* ref: FUN_004ec660 */
uint F_004ec660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ec660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004ec990((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_004ec670 */
uint F_004ec670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ec670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004ec990((undefined *)((int)this + -8),param_1);
  return uVar1;
}

/* ref: FUN_004ec6e0 */
uint F_004ec6e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4ec6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1097368));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1097350));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[3])REFP(0x1097340));
  F_004ebbe0(this);
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[3])REFP(0x109726c));
  uVar1 = F_005095f0((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109727c));
  return uVar1;
}

/* ref: FUN_004ec720 */
uint F_004ec720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ec720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *((undefined4 *)GEN_TOP(((int)this + *(int *)(param_1 + 0x10) * 4 + 0x20024))) =
       *(undefined4 *)(param_1 + 0x1c);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20030) + 0x10))))(*(int * PTR32 *)((int)this + 0x20030),0);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20030) + 0x84))))(*(int * PTR32 *)((int)this + 0x20030));
  if ((char)uVar1 != '\0') {
    uVar1 = F_004ec5b0((undefined *)((int)this + -4),500);
  }
  return uVar1;
}

/* ref: FUN_004ec770 */
uint F_004ec770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ec770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x20010);
  if (iVar1 != 0) {
    F_0050c620(iVar1,0,0);
  }
  *(undefined4 *)((int)this + param_1 * 4 + 0x2001c) = param_2;
  *(undefined4 *)((int)this + param_1 * 4 + 0x20028) = 0;
  if (this == (undefined *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)this + 4;
  }
  (*(int *)(gen_frame + 0x4)) = iVar1;
  (*(undefined4 *)(gen_frame + 0x14)) = 1;
  (*(undefined4 *)(gen_frame + 0xc)) = param_2;
  (*(int *)(gen_frame + 0x8)) = param_1;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x20000;
  (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x21)) = 0x100;
  (*(undefined2 *)(gen_frame + 0x25)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  uVar2 = F_00513dc0((int)this + 0x20040,&(*(int *)(gen_frame + 0x4)),0,0);
  *(uint *)((int)this + param_1 * 4 + 0x20010) = uVar2;
  return uVar2;
}

/* ref: FUN_004ec810 */
uint F_004ec810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ec810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  uint * puVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  uint local_14;
  int local_10;
  
  uVar2 = *param_1;
  uVar3 = param_1[2];
  uVar4 = param_1[1];
  if (uVar4 == 0) {
    return 0;
  }
  local_10 = 0;
  param_1 = (undefined4 *)0x0;
  puVar7 = (uint *)((int)this + 0x20014);
  local_14 = uVar4;
  do {
    if ((local_10 == 0) && (local_14 == 0)) break;
    piVar5 = (int *)puVar7[-3];
    if ((piVar5 != (int *)0x0) && ((*puVar7 <= uVar3 && (uVar3 < *puVar7 + 0x20000)))) {
      piVar1 = piVar5 + 0x23;
      LOCK();
      iVar9 = *piVar1;
      *piVar1 = *piVar1;
      UNLOCK();
      if (iVar9 != 7) {
LAB_004ec969: ;
        return uVar4 - local_14;
      }
      piVar1 = piVar5 + 0x22;
      LOCK();
      iVar9 = *piVar1;
      *piVar1 = *piVar1;
      UNLOCK();
      if (iVar9 == 3) goto LAB_004ec969;
      iVar9 = uVar3 - *puVar7;
      uVar8 = local_14 + uVar3;
      if (0x20000 < uVar8) {
        uVar8 = 0x20000 - iVar9;
      }
      if ((local_10 == 0) && (local_14 < uVar8)) {
        uVar8 = local_14;
      }
      uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0x5c))(piVar5);
      F_00c46aa0(uVar2,uVar6 + iVar9,uVar8);
      bVar10 = local_14 < uVar8;
      local_14 = local_14 - uVar8;
      puVar7[3] = (0x20000 - uVar8) - iVar9;
      local_10 = local_10 - (uint)bVar10;
    }
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar7 = puVar7 + 1;
  } while (param_1 < 3);
  if (uVar4 - local_14 == 0) {
    uVar8 = (*(int *)((int)this + 0x20030) + 1U) % 3;
    *(uint *)((int)this + 0x20030) = uVar8;
    F_004ec770((undefined *)((int)this + -8),uVar8,uVar3);
  }
  return uVar4 - local_14;
}

/* ref: Client::Sound::Stream::vf0 */
uint F_004ec990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ec990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1097368));
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x1097350));
  *(undefined * PTR32 * PTR32 *)(this + 8) = (*(undefined * PTR32 (*)[3])REFP(0x1097340));
  F_004ebbe0(this);
  *(undefined * PTR32 * PTR32 *)(this + 8) = (*(undefined * PTR32 (*)[3])REFP(0x109726c));
  F_005095f0(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109727c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004eca20 */
uint F_004eca20(unsigned int gen_a0)
{
  GEN_ENTER(0x4eca20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int * piVar4;
  int local_c;
  int local_8;
  undefined4 * puVar3;
  
  local_c = 3;
  puVar2 = (undefined4 *)((int)this + 0x80540);
  do {
    puVar3 = puVar2 + -0x8054;
    *puVar3 = (*(undefined * PTR32 (*)[3])REFP(0x1097368));
    puVar2[-0x8053] = (*(undefined * PTR32 (*)[5])REFP(0x1097350));
    puVar2[-0x8052] = (*(undefined * PTR32 (*)[3])REFP(0x1097340));
    piVar4 = puVar2 + -0x50;
    local_8 = 3;
    do {
      if (*piVar4 != 0) {
        F_0050c620(*piVar4,0,0);
        *piVar4 = 0;
      }
      piVar4 = piVar4 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    puVar2[-0x8052] = (*(undefined * PTR32 (*)[3])REFP(0x109726c));
    uVar1 = F_005095f0(puVar2 + -0x8053);
    local_c = local_c + -1;
    *puVar3 = (*(undefined * PTR32 (*)[2])REFP(0x109727c));
    puVar2 = puVar3;
  } while (-1 < local_c);
  return uVar1;
}

/* ref: FUN_004ecab0 */
uint F_004ecab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ecab0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_004ecac0 */
uint F_004ecac0(unsigned int gen_a0)
{
  GEN_ENTER(0x4ecac0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_004ecb60 */
uint F_004ecb60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ecb60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  int * piVar2;
  
  *(int *)((int)this + 0x20034) = param_2;
  piVar2 = (int *)((int)this + 0x20010);
  param_2 = 3;
  do {
    piVar2[3] = -1;
    piVar2[6] = 0;
    if (*piVar2 != 0) {
      F_0050c620(*piVar2,0,0);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  *(undefined4 *)((int)this + 0x2001c) = 0;
  F_00c4d9ef((int)this + 0x20040,0x104,param_1,0xffffffff);
  uVar1 = F_00d2d4f0((int)this + 8,(int)this + 0x10,0x20000);
  *(uint *)((int)this + 0x2003c) = uVar1;
  *(undefined1 *)((int)this + 0x20144) = 0;
  uVar1 = *(uint *)((int)this + 0x20010);
  if (uVar1 != 0) {
    F_0050c620(uVar1,0,0);
  }
  *(undefined4 *)((int)this + 0x2001c) = 0;
  *(undefined4 *)((int)this + 0x20028) = 0;
  ((int *)(gen_frame + 0x4))[0] = (int)this + 4;
  ((int *)(gen_frame + 0x4))[1] = 0;
  ((int *)(gen_frame + 0x4))[2] = 0;
  ((int *)(gen_frame + 0x4))[3] = 0x20000;
  ((int *)(gen_frame + 0x4))[4] = 1;
  (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x21)) = 0x100;
  (*(undefined2 *)(gen_frame + 0x25)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  uVar1 = F_00513dc0((int)this + 0x20040,((int *)(gen_frame + 0x4)),0,0);
  *(uint *)((int)this + 0x20010) = uVar1;
  return uVar1;
}

/* ref: FUN_004ecc60 */
byte F_004ecc60(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4ecc60u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined * this;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(float *)(param_1 + 0x30) = param_3;
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  *(undefined4 *)(param_1 + 0x44) = REFG(float, 0x1097250);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x69) = 0x100;
  *(undefined4 *)(param_1 + 100) = 2;
  *(undefined1 *)(param_1 + 0x68) = 1;
  this = (undefined *)F_004ebc40(*(undefined * PTR32 *)(REFG(int, 0x1375a64) + 0xcc));
  *(undefined * PTR32 *)(param_1 + 0x70) = this;
  if (this == (undefined *)0x0) {
    return 0;
  }
  F_004ecb60(this,param_2,param_1);
  return 1;
}

/* ref: FUN_004ecce0 */
uint F_004ecce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ecce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_004eca20(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: LinkList_VISoundData_Sound_Client_V123_BGCollision::vf0 */
uint F_004ecd40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ecd40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1097338));
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

/* ref: FUN_004ecdb0 */
byte F_004ecdb0(void)
{
  GEN_ENTER(0x4ecdb0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Sound::SoundData::vf23 */
uint F_004ecdc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ecdc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,1,param_1);
  return uVar1;
}

/* ref: Client::Sound::SoundData::vf24 */
uint F_004ecde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ecde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x58))(this,0,param_1);
  return uVar1;
}

/* ref: FUN_004ece30 */
uint F_004ece30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ece30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1097338));
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

/* ref: FUN_004eced0 */
unsigned int F_004eced0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4eced0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((*(int *)((int)this + 4) != 0) && (-1 < param_1)) {
    F_00d2eaf0(*(int *)((int)this + 4),param_1);
  }
  return 0;
}

/* ref: FUN_004ecef0 */
unsigned int F_004ecef0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x4ecef0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  float param_2 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  undefined * this_00;
  undefined1 * puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((*(int *)((int)this + 4) != 0) && (-1 < (int)gen_fl2bits(param_1))) {
    piVar1 = (int *)F_00d2cce0();
    uVar4 = *(undefined4 *)((int)this + 4);
    uVar6 = 0;
    uVar5 = 0;
    if (param_2 != 0.0) {
      puVar3 = ((undefined1 *)(gen_frame + 0xc));
      uVar5 = REFG(float, 0x1097250);
      uVar6 = *(undefined4 *)&REFG(undefined, 0x1097254);
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xa4))(piVar1);
      F_00d04ca0(uVar2,puVar3,uVar4,param_1,param_2,uVar5,uVar6);
      F_00d046e0(((undefined1 *)(gen_frame + 0xc)));
      return 0;
    }
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xa4))(piVar1,((undefined1 *)(gen_frame + 0xc)),uVar4)));
    F_00d04c00(this_00,(undefined4)gen_fl2bits(param_1),uVar5,uVar6);
    F_00d046e0(((undefined1 *)(gen_frame + 0xc)));
  }
  return 0;
}

/* ref: FUN_004ecf80 */
unsigned int F_004ecf80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ecf80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined * this_00;
  int iVar2;
  
  if ((*(int *)((int)this + 4) != 0) && (-1 < param_1)) {
    piVar1 = (int *)F_00d2cce0();
    iVar2 = param_1;
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xa4))(piVar1,((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)((int)this + 4))));
    F_00d04a10(this_00,iVar2,param_2);
    F_00d046e0(((undefined1 *)(gen_frame + 0xc)));
    F_00d2eaf0(*(undefined4 *)((int)this + 4),param_1);
  }
  return 0;
}

/* ref: FUN_004ecfe0 */
uint F_004ecfe0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4ecfe0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint in_EAX = 0;
  int * piVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 4) != 0) && (-1 < param_2)) {
    piVar1 = (int *)F_00d2cce0();
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xa4))(piVar1,((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)(param_1 + 4));
    in_EAX = F_00d04d50(uVar2,param_2,param_3,param_4);
    F_00d046e0(((undefined1 *)(gen_frame + 0xc)));
  }
  return in_EAX;
}

/* ref: FUN_004ed040 */
unsigned int F_004ed040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ed040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  
  if (*(int *)((int)this + 0x20034) != 0) {
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20034) + 8))))
                                (*(int * PTR32 *)((int)this + 0x20034))));
    F_00cbdbf0(this_00,param_1);
  }
  return 0;
}

/* ref: Client::Sound::SoundData::vf2 */
uint F_004ed070(unsigned int gen_a0)
{
  GEN_ENTER(0x4ed070u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20;
}

/* ref: Client::Sound::SoundData::vf3 */
uint F_004ed080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ed080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00cbbdc0(this + 0x20,param_1);
  return (uint)(this + 0x20);
}

/* ref: Client::Sound::SoundData::vf43 */
uint F_004ed0a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4ed0a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  uVar1 = F_00cbbd70(((undefined1 *)(gen_frame + 0xc)));
  F_00cbbdc0(this + 0x20,uVar1);
  F_00cbbdb0(((undefined1 *)(gen_frame + 0xc)));
  return (uint)(this + 0x20);
}

/* ref: Client::Sound::SoundData::vf4 */
byte F_004ed0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ed0d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x68) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Client::Sound::SoundData::vf5 */
byte F_004ed0e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4ed0e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x68);
}

/* ref: Client::Sound::SoundData::vf35 */
byte F_004ed0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ed0f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x6a) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Client::Sound::SoundData::vf6 */
uint F_004ed100(unsigned int gen_a0)
{
  GEN_ENTER(0x4ed100u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: Client::Sound::SoundData::vf7 */
uint F_004ed110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ed110u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1c) = param_2;
  return param_2;
}

/* ref: Client::Sound::SoundData::vf8 */
float F_004ed120(unsigned int gen_a0)
{
  GEN_ENTER(0x4ed120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  float fVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x7c))(this);
  if (((char)uVar1 != '\0') && ((*(int *)(this + 100) == 0 || (*(int *)(this + 100) == 2)))) {
    fVar2 = F_00cbd130(this + 0x20);
    return fVar2;
  }
  return *(float *)(this + 0x30);
}

/* ref: Client::Sound::SoundData::vf9 */
uint F_004ed150(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ed150u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = param_1[0x19];
  if (-1 < (int)uVar1) {
    if ((int)uVar1 < 2) {
      uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x7c))(param_1);
      if ((char)uVar1 == '\0') goto LAB_004ed18b;
    }
    else if (uVar1 != 2) goto LAB_004ed18b;
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x54))((undefined4)gen_fl2bits(param_2),param_3);
  }
LAB_004ed18b: ;
  param_1[0xd] = param_3;
  param_1[0xc] = (int)gen_fl2bits(param_2);
  return uVar1;
}

/* ref: Client::Sound::SoundData::vf10 */
byte F_004ed1a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4ed1a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x69);
}

/* ref: Client::Sound::SoundData::vf11 */
unsigned int F_004ed1b0(unsigned int gen_a0)
{
  GEN_ENTER(0x4ed1b0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Client::Sound::SoundData::vf12 */
unsigned int F_004ed1c0(unsigned int gen_a0)
{
  GEN_ENTER(0x4ed1c0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Client::Sound::SoundData::vf13 */
unsigned int F_004ed1d0(unsigned int gen_a0)
{
  GEN_ENTER(0x4ed1d0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Client::Sound::SoundData::vf14 */
unsigned int F_004ed1e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4ed1e0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Client::Sound::SoundData::vf37 */
uint F_004ed1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4ed1f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x4c);
}

/* ref: Client::Sound::SoundData::vf15 */
float F_004ed200(unsigned int gen_a0)
{
  GEN_ENTER(0x4ed200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  float fVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  if (((char)uVar1 == '\0') && ((*(int *)(this + 100) == 0 || (*(int *)(this + 100) == 2)))) {
    fVar2 = F_00cbd050(this + 0x20);
    return fVar2;
  }
  return *(float *)&REFG(undefined, 0x1097254);
}

/* ref: Client::Sound::SoundData::vf19 */
uint F_004ed230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ed230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 100);
  if (iVar1 == 0) {
    uVar2 = F_00cbdfe0(this + 0x20,param_1,REFG(float, 0x1097250),*(float *)&REFG(undefined, 0x1097254),0,0);
  }
  else if (iVar1 == 1) {
    uVar2 = *(uint *)(this + 0x54);
    if (-1 < (int)uVar2) {
      F_004ecef0(*(undefined * PTR32 *)(this + 0x50),uVar2,param_1);
      uVar2 = F_004ecfe0(*(undefined4 *)(this + 0x50),*(undefined4 *)(this + 0x54),REFG(float, 0x1097250),
                           param_1);
      return uVar2;
    }
  }
  else {
    uVar2 = iVar1 - 2;
    if (uVar2 == 0) {
      uVar2 = F_004ec5b0(*(undefined * PTR32 *)(this + 0x70),param_1);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: Client::Sound::SoundData::vf20 */
uint F_004ed2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ed2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  
  iVar1 = *(int *)(this + 100);
  this[0x68] = (undefined1)0x0;
  if (iVar1 == 0) {
    uVar2 = F_00cbdbf0(this + 0x20,param_1);
    return uVar2;
  }
  if (iVar1 == 1) {
    uVar2 = *(uint *)(this + 0x54);
    if (-1 < (int)uVar2) {
      uVar2 = F_004ecfe0(*(undefined4 *)(this + 0x50),uVar2,*(float *)&REFG(undefined, 0x1097254),param_1);
      return uVar2;
    }
  }
  else {
    uVar2 = iVar1 - 2;
    if (((uVar2 == 0) && (iVar1 = *(int *)(this + 0x70), iVar1 != 0)) &&
       (*(int *)(iVar1 + 0x20034) != 0)) {
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0x20034) + 8))))(*(int * PTR32 *)(iVar1 + 0x20034))));
      uVar2 = F_00cbdbf0(this_00,param_1);
    }
  }
  return uVar2;
}

/* ref: Client::Sound::SoundData::vf21 */
uint F_004ed330(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ed330u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      uVar2 = *(uint *)(param_1 + 0x54);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar2 = F_004ecfe0(*(undefined4 *)(param_1 + 0x50),uVar2,param_2,param_3);
      return uVar2;
    }
    if (iVar1 - 2U != 0) {
      return iVar1 - 2U;
    }
    if (*(int *)(param_1 + 0x70) == 0) {
      return 0;
    }
  }
  uVar2 = F_00cbc390(param_1 + 0x20,param_2,param_3);
  return uVar2;
}

/* ref: Client::Sound::SoundData::vf22 */
uint F_004ed380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ed380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 100);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      uVar2 = *(uint *)(this + 0x54);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      if ((char)param_1 == '\0') {
        uVar2 = F_004ecfe0(*(undefined4 *)(this + 0x50),uVar2,REFG(float, 0x1097250),param_2);
        return uVar2;
      }
      uVar2 = F_004ecfe0(*(undefined4 *)(this + 0x50),uVar2,*(float *)&REFG(undefined, 0x1097254),param_2);
      return uVar2;
    }
    if (iVar1 - 2U != 0) {
      return iVar1 - 2U;
    }
  }
  if ((char)param_1 == '\0') {
    uVar2 = F_00cbc1a0(this + 0x20,param_2);
    return uVar2;
  }
  uVar2 = F_00cbc120(this + 0x20,param_2);
  return uVar2;
}

/* ref: Client::Sound::SoundData::vf25 */
unsigned int F_004ed3f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4ed3f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 100) == 0) {
    F_00cbcbc0(this + 0x20);
    return 0;
  }
  return 0;
}

/* ref: Client::Sound::SoundData::vf26 */
uint F_004ed400(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ed400u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      uVar2 = F_00d2dd80(((undefined1 *)(gen_frame + 0x0)),*(undefined4 *)(param_1 + 0x58));
      uVar2 = F_00cbeb80(uVar2,param_2,param_3);
      F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)));
      return uVar2;
    }
    if (iVar1 - 2U != 0) {
      return iVar1 - 2U;
    }
  }
  uVar2 = F_00cbcd10(param_1 + 0x20,param_2,param_3);
  return uVar2;
}

/* ref: Client::Sound::SoundData::vf27 */
uint F_004ed470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ed470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((*(int *)(this + 100) != 0) && (uVar1 = *(int *)(this + 100) - 2, uVar1 != 0)) {
    return uVar1;
  }
  uVar1 = F_00cbce00(this + 0x20,param_1);
  return uVar1;
}

/* ref: Client::Sound::SoundData::vf28 */
uint F_004ed490(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4ed490u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 uVar2;
  
  F_00d2ddd0(((undefined1 *)(gen_frame + 0x4)),5);
  F_00cbb3e0(((undefined1 *)(gen_frame + 0x4)),1);
  uVar2 = 0;
  uVar1 = F_00cbb250(((undefined1 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x14)));
  uVar1 = F_00cbb950(uVar1,param_1,uVar2);
  F_00cbb890(((undefined1 *)(gen_frame + 0x14)));
  F_00cbaf10(((undefined1 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: Client::Sound::SoundData::vf30 */
unsigned int F_004ed4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ed4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (this[0x6c] != (undefined1)0x0) {
    return 0;
  }
  iVar1 = *(int *)(this + 100);
  this[0x68] = (undefined1)0x0;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      F_004ecf80(*(undefined * PTR32 *)(this + 0x50),*(undefined4 *)(this + 0x54),param_1);
      this[0x6c] = (undefined1)0x1;
      return 0;
    }
    if (iVar1 != 2) goto LAB_004ed50a;
  }
  F_00cbdbf0(this + 0x20,param_1);
LAB_004ed50a: ;
  this[0x6c] = (undefined1)0x1;
  return 0;
}

/* ref: Client::Sound::SoundData::vf31 */
uint F_004ed530(unsigned int gen_a0)
{
  GEN_ENTER(0x4ed530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x410];
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint3 uVar5;
  uint uVar6;
  
  (*(uint *)(gen_frame + 0x408)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40c);
  iVar1 = *(int *)(this + 100);
  if (iVar1 == 0) {
    uVar3 = 0;
    if (*(int *)(this + 0x18) != 0) {
LAB_004ed55c: ;
      bVar2 = F_00cbc040(this + 0x20);
      if (bVar2 != 0) {
        uVar3 = F_00cbc220(this + 0x20);
        if (uVar3 == REFG(undefined4, 0x11299d8)) {
          F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
          return 1;
        }
      }
      F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
      return 0;
    }
  }
  else if (iVar1 == 1) {
    uVar3 = 0;
    if (*(int *)(this + 0x18) != 0) {
      uVar4 = F_00d2eba0(((int *)(gen_frame + 0x8)),0x100);
      uVar6 = 0;
      uVar3 = 0;
      if (uVar4 != 0) {
        do {
          uVar5 = (uint3)(uVar4 >> 8);
          if (((int *)(gen_frame + 0x8))[(int)(uVar6)] == *(int *)(this + 0x58)) {
            F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
            return CONCAT31(uVar5,1);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar4);
        F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
        return (uint)uVar5 << 8;
      }
    }
  }
  else {
    uVar3 = iVar1 - 2;
    if (uVar3 == 0) goto LAB_004ed55c;
  }
  F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
  return uVar3 & 0xffffff00;
}

/* ref: Client::Sound::SoundData::vf32 */
byte F_004ed620(unsigned int gen_a0)
{
  GEN_ENTER(0x4ed620u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x6c);
}

/* ref: Client::Sound::SoundData::vf33 */
byte F_004ed630(unsigned int gen_a0)
{
  GEN_ENTER(0x4ed630u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x6a);
}

/* ref: Client::Sound::SoundData::vf34 */
byte F_004ed640(unsigned int gen_a0)
{
  GEN_ENTER(0x4ed640u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x6b);
}

/* ref: Client::Sound::SoundData::vf40 */
uint F_004ed650(unsigned int gen_a0)
{
  GEN_ENTER(0x4ed650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: Client::Sound::SoundData::vf41 */
uint F_004ed660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ed660u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x18) = param_2;
  return param_2;
}

/* ref: FUN_004ed690 */
uint F_004ed690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ed690u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_004ed6a0 */
uint F_004ed6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ed6a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_004ed6c0 */
uint F_004ed6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ed6c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xa8) = param_2;
  return param_2;
}

/* ref: Client::Sound::MemoryHandleInterface::vf0 */
uint F_004ed710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ed710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1097898));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004ed760 */
unsigned int F_004ed760(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4ed760u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xb8) = param_2;
  return 0;
}

/* ref: Client::Sound::SoundData::vf1 */
byte F_004ed780(unsigned int gen_a0)
{
  GEN_ENTER(0x4ed780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte bVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  iVar1 = *(int *)(this + 100);
  if (iVar1 == 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)(int)(*(double *)&REFG(undefined, 0x1097260) * 0.0);
    F_00cbe1a0(this + 0x20,(uint)&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    iVar1 = *(int *)(this + 0x18);
    if (iVar1 == 0) {
      return 1;
    }
    if (0 < *(int *)(iVar1 + 0xac)) {
      *(int *)(iVar1 + 0xac) = *(int *)(iVar1 + 0xac) + -1;
    }
    if (*(int *)(iVar1 + 0xac) != 0) {
      return 1;
    }
    bVar2 = F_00d2d530(*((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0xa8))),0);
    if (bVar2 != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0xa8))) = 0;
      return 1;
    }
LAB_004ed82b: ;
    *((int *)GEN_TOP((*(int *)(this + 0x18) + 0xac))) = *((int *)GEN_TOP((*(int *)(this + 0x18) + 0xac))) + 1;
    return 0;
  }
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      return 1;
    }
    bVar2 = F_00cbc040(this + 0x20);
    if (bVar2 != 0) {
      return 0;
    }
    F_004ebcc0(*(undefined * PTR32 *)(REFG(int, 0x1375a64) + 0xcc),*(undefined4 *)(this + 0x70));
    *(undefined4 *)(this + 0x70) = 0;
    return 1;
  }
  if ((-1 < *(int *)(this + 0x54)) && (*(int *)(this + 0x50) != 0)) {
    iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x50) + 4)));
    if (iVar1 != 0) {
      F_00d2eaf0(iVar1,*(int *)(this + 0x54));
    }
    *(undefined4 *)(this + 0x54) = 0xffffffff;
  }
  if ((-1 < *(int *)(this + 0x58)) && (iVar1 = *(int *)(this + 0x18), iVar1 != 0)) {
    if (0 < *(int *)(iVar1 + 0xac)) {
      *(int *)(iVar1 + 0xac) = *(int *)(iVar1 + 0xac) + -1;
    }
    if (*(int *)(iVar1 + 0xac) == 0) {
      bVar2 = F_00d2d530(*(undefined4 *)(this + 0x58),0);
      if (bVar2 == 0) goto LAB_004ed82b;
      *((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + 0xa8))) = 0;
    }
    *(undefined4 *)(this + 0x58) = 0xffffffff;
  }
  if (*(int *)(this + 0x5c) == 0) {
    return 1;
  }
  F_00406b30(*(int *)(this + 0x5c));
  *(undefined4 *)(this + 0x5c) = 0;
  return 1;
}

/* ref: Client::Sound::SoundData::vf16 */
unsigned int F_004ed8d0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x4ed8d0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(float *)(gen_frame + 0x8)) = param_2;
  (*(float *)(gen_frame + 0xc)) = param_3;
  (*(float *)(gen_frame + 0x10)) = param_4;
  (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x1097250);
  if (*(int *)(param_1 + 100) == 0) {
    F_00cbc630((undefined *)(param_1 + 0x20),0);
    F_00cbc4e0((undefined *)(param_1 + 0x20),&(*(float *)(gen_frame + 0x8)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: Client::Sound::SoundData::vf17 */
unsigned int F_004ed940(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x4ed940u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(float *)(gen_frame + 0x8)) = param_2;
  (*(float *)(gen_frame + 0xc)) = param_3;
  (*(float *)(gen_frame + 0x10)) = param_4;
  (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x1097250);
  if (*(int *)(param_1 + 100) == 0) {
    F_00cbc630((undefined *)(param_1 + 0x20),0);
    F_00cbc550((undefined *)(param_1 + 0x20),&(*(float *)(gen_frame + 0x8)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: Client::Sound::SoundData::vf18 */
uint F_004ed9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ed9b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  ushort * puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = REFG(undefined4, 0x1375a64);
  if ((((*(char *)(REFG(undefined4, 0x1375a64) + 0x1d) == '\0') &&
       (puVar1 = *(ushort * PTR32 *)(this + 0x5c), puVar1 != (ushort *)0x0)) && (param_1 != (ushort *)0x0))
     && (((param_2 == 0 || (uVar2 = param_2, *param_1 == param_2)) &&
         (uVar2 = (uint)*puVar1, *puVar1 == *param_1)))) {
    uVar3 = F_00c46aa0(puVar1,param_1,uVar2);
    uVar2 = (uint)uVar3;
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(this + 0x58);
  }
  return uVar2;
}

/* ref: Client::Sound::SoundData::vf29 */
uint F_004eda00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4eda00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x1375a64);
  *(undefined4 *)(REFG(undefined4, 0x1375a64) + 0xb8) = param_1;
  return uVar1;
}

/* ref: FUN_004eda50 */
uint F_004eda50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4eda50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)this;
  uVar1 = *(uint *)this;
  if (uVar1 != 0) {
    *(int *)(uVar1 + 8) = param_1;
  }
  *(int *)this = param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar1;
}

/* ref: FUN_004eda70 */
uint F_004eda70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4eda70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (param_1 != 0) {
    if (*(uint *)this == param_1) {
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
  return param_1;
}

/* ref: FUN_004edac0 */
unsigned int F_004edac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4edac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 != (int *)0x0) {
    *(int *)this = *(int *)this + -1;
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    if (uVar1 != 0) {
      F_00406b30(uVar1);
    }
    if (*(int * PTR32 *)((int)this + 4) == param_1) {
      *(int *)((int)this + 4) = param_1[3];
    }
    if (param_1[2] != 0) {
      *(int *)(param_1[2] + 0xc) = param_1[3];
    }
    if (param_1[3] != 0) {
      *(int *)(param_1[3] + 8) = param_1[2];
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
    ((code *)*(gen_code32 *)*param_1)(param_1,1);
  }
  return 0;
}

/* ref: Client::Sound::SoundData::vf39 */
unsigned int F_004edb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4edb30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_004edac0(*(undefined * PTR32 *)(REFG(int, 0x1375a64) + 0xe0),param_1);
  return 0;
}

/* ref: Client::Sound::SoundData::vf42 */
uint F_004edb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4edb50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined * this_00;
  uint uVar5;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float * pfVar10;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  if (this[0x6c] == (undefined1)0x0) {
    piVar1 = param_1 + 0x23;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1;
    UNLOCK();
    if (iVar2 < 8) {
      uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0x5c))(param_1);
      uVar5 = param_1[0x2a];
      if (uVar5 == 0) {
        uVar5 = F_00d2d340(uVar4,0);
        param_1[0x2a] = uVar5;
      }
      param_1[0x2b] = param_1[0x2b] + 1;
      extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0x20))(this);
      (*(float *)(gen_frame + 0x20)) = (float)extraout_ST0;
      iVar2 = *(int *)this;
      uVar9 = 1;
      uVar7 = 0;
      uVar4 = ((code *)*(gen_code32 *)(iVar2 + 0x94))(this);
      uVar5 = F_00d2d700(((undefined1 *)(gen_frame + 0xc)),uVar5,uVar4,uVar7,uVar9);
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(iVar2 + 0xc))(this,uVar5)));
      F_00cbbdb0(((undefined1 *)(gen_frame + 0xc)));
      bVar3 = F_00cbc040(this_00);
      if (bVar3 != 0) {
        uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x84))(this);
        if ((char)uVar5 != '\0') {
          uVar9 = 0;
          uVar7 = 0;
          fVar6 = (*(float *)(gen_frame + 0x20));
          fVar8 = *(float *)&REFG(undefined, 0x1097254);
          uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
          F_00cbdfe0(this_00,uVar5,fVar6,fVar8,uVar7,uVar9);
        }
        uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this);
        F_00cbc630(this_00,(uint)((char)uVar5 == '\0'));
        uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this);
        if ((char)uVar5 != '\0') {
          extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0x2c))(this);
          (*(float *)(gen_frame + 0x20)) = (float)extraout_ST0_00;
          extraout_ST0_01 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0x30))(this);
          (*(float *)(gen_frame + 0x1c)) = (float)extraout_ST0_01;
          extraout_ST0_02 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0x34))(this);
          (*(float *)(gen_frame + 0x24)) = (float)extraout_ST0_02;
          (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x20));
          (*(float *)(gen_frame + 0x2c)) = (*(float *)(gen_frame + 0x1c));
          (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1097250);
          (*(float *)(gen_frame + 0x30)) = (float)extraout_ST0_02;
          F_00cbc4e0(this_00,&(*(float *)(gen_frame + 0x28)));
        }
        (*(float *)(gen_frame + 0x24)) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0));
        pfVar10 = &(*(float *)(gen_frame + 0x24));
        extraout_ST0_03 = ((gen_fcode *)*(gen_code32 *)(*(int *)this + 0x38))(this);
        F_00cbdeb0(this_00,(float)extraout_ST0_03,(uint)pfVar10);
      }
    }
    else {
      ((code *)*(gen_code32 *)(*(int *)this + 0xac))(this);
    }
  }
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,0);
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar5;
}

/* ref: LinkList_VHandle_MemoryManager_Sound_Client_V1234::vf0 */
uint F_004edd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4edd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10978bc));
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

/* ref: FUN_004edd90 */
uint F_004edd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4edd90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[1] = (*(undefined * PTR32 (*)[1])REFP(0x10978bc));
  *in_ecx = (*(undefined * PTR32 (*)[8])REFP(0x10978cc));
  in_ecx[1] = (*(undefined * PTR32 (*)[1])REFP(0x10978c4));
  in_ecx[4] = param_2;
  return (uint)in_ecx;
}

/* ref: Client::Sound::MemoryManager::Handle::vf1 */
uint F_004eddc0(unsigned int gen_a0)
{
  GEN_ENTER(0x4eddc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Client::Sound::MemoryManager::Handle::vf2 */
uint F_004eddd0(void)
{
  GEN_ENTER(0x4eddd0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Sound::MemoryManager::Handle::vf3 */
unsigned int F_004edde0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4edde0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::Sound::MemoryManager::Handle::vf4 */
uint F_004eddf0(void)
{
  GEN_ENTER(0x4eddf0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Sound::MemoryManager::Handle::vf5 */
uint F_004ede00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ede00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_1;
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0xa0))(param_1);
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0xa8))(param_1,uVar2);
  return uVar2;
}

/* ref: Client::Sound::MemoryManager::Handle::vf6 */
unsigned int F_004ede30(void)
{
  GEN_ENTER(0x4ede30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Sound::MemoryManager::Handle::vf7 */
uint F_004ede40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x4ede40u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_004ede50 */
uint F_004ede50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ede50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004edf50((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_004edec0 */
uint F_004edec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4edec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar1 = F_004042b0();
  uVar1 = F_00406c00(param_1,0,uVar1,uVar4);
  if (uVar1 != 0) {
    *(int *)this = *(int *)this + 1;
    uVar4 = 0;
    uVar2 = F_004042b0();
    puVar3 = (undefined4 *)F_00406bd0(0x14,0,uVar2,uVar4);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[1] = (*(undefined * PTR32 (*)[1])REFP(0x10978bc));
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = (*(undefined * PTR32 (*)[8])REFP(0x10978cc));
      puVar3[1] = (*(undefined * PTR32 (*)[1])REFP(0x10978c4));
      puVar3[4] = uVar1;
    }
    puVar3[3] = *(undefined4 *)((int)this + 4);
    if (*(int *)((int)this + 4) != 0) {
      *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = puVar3;
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
    return (uint)puVar3;
  }
  return 0;
}

/* ref: Client::Sound::MemoryManager::Handle::vf0 */
uint F_004edf50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4edf50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10978cc));
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10978c4));
  if (*(int *)(this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 8) + 0xc))) = *(undefined4 *)(this + 0xc);
  }
  if (*(int *)(this + 0xc) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 8))) = *(undefined4 *)(this + 8);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)(this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x10978bc));
  if (*(int *)(this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 8) + 0xc))) = *(undefined4 *)(this + 0xc);
  }
  if (*(int *)(this + 0xc) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 8))) = *(undefined4 *)(this + 8);
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x1097898));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Sound::SoundData::vf36 */
uint F_004edfd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x4edfd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int iVar1;
  uint * puVar2;
  uint uVar3;
  
  iVar1 = *(int *)(this + 0x18);
  if (iVar1 == 0) {
    if ((*(int *)(this + 100) == 2) && (*(int *)(this + 0x70) != 0)) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x70) + 4))))
                        (*(int * PTR32 *)(this + 0x70),param_1,param_2,param_3,param_4,param_5,param_6,
                         param_7,param_8);
      return uVar3;
    }
    puVar2 = (uint *)0x0;
  }
  else {
    puVar2 = (uint *)(iVar1 + 0x3c);
    if (0xf < *(uint *)(iVar1 + 0x50)) {
      return *puVar2;
    }
  }
  return (uint)puVar2;
}

/* ref: Client::Sound::SoundData::vf38 */
uint F_004ee000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_004edec0(*(undefined * PTR32 *)(REFG(int, 0x1375a64) + 0xe0),param_1);
  return uVar1;
}

/* ref: FUN_004ee020 */
uint F_004ee020(unsigned int gen_a0)
{
  GEN_ENTER(0x4ee020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00cbbdb0((int)this + 0x20);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1097338));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *(undefined4 *)((int)this + 4);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_004ee060 */
uint F_004ee060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ee060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004ee130((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: Client::Sound::SoundData::vf0 */
uint F_004ee070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ee070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pSVar1;
  undefined * pSVar2;
  int iVar4;
  undefined * pSVar3;
  
  if ((param_1 & 2) == 0) {
    F_00cbbdb0(this + 0x20);
    *(undefined * PTR32 * PTR32 *)this =
         (*(undefined * PTR32 (*)[1])REFP(0x1097338));
    if (*(int *)(this + 4) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 8))) = *(undefined4 *)(this + 8);
    }
    if (*(int *)(this + 8) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(this + 8) + 4))) = *(undefined4 *)(this + 4);
    }
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
    return (uint)this;
  }
  pSVar1 = this + -4;
  iVar4 = *(int *)pSVar1 + -1;
  if (-1 < iVar4) {
    pSVar3 = this + *(int *)((int)(uintptr_t)pSVar1) * 0x74 + 4;
    do {
      pSVar2 = pSVar3 + -0x74;
      F_00cbbdb0(pSVar3 + -0x58);
      *(undefined * PTR32 * PTR32 *)(pSVar3 + -0x78) =
           (*(undefined * PTR32 (*)[1])REFP(0x1097338));
      if (*(int *)pSVar2 != 0) {
        *(int *)(*(int *)pSVar2 + 8) = *(int *)(pSVar3 + -0x70);
      }
      if (*(int *)(pSVar3 + -0x70) != 0) {
        *((int *)GEN_TOP((*(int *)(pSVar3 + -0x70) + 4))) = *(int *)pSVar2;
      }
      iVar4 = iVar4 + -1;
      *(int *)pSVar2 = 0;
      *(int *)(pSVar3 + -0x70) = 0;
      pSVar3 = pSVar2;
    } while (-1 < iVar4);
  }
  if ((param_1 & 1) != 0) {
    F_00406b30(pSVar1);
  }
  return (uint)pSVar1;
}

/* ref: Client::Sound::SoundManager::vf0 */
uint F_004ee130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ee130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x109790c));
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[6])REFP(0x10978f0));
  F_004eae80(this,0);
  gen_imp_CloseHandle(*(HANDLE *)(this + 0x1a0));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x188));
  F_004cf880(this + 4);
  F_005095f0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004ee190 */
uint F_004ee190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee190u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_2;
  fVar3 = param_3[4];
  fVar4 = *param_3;
  fVar5 = param_3[0xc];
  param_1[1] = ((float)GEN_TOF((((float10)fVar1 * (float10)param_3[5] + (float10)param_3[1] * (float10)fVar2)
                      + (float10)param_3[0xd])));
  *param_1 = ((float)GEN_TOF(((float10)fVar5 +
                    ((float10)fVar2 * (float10)fVar4 + (float10)fVar1 * (float10)fVar3))));
  return (uint)param_1;
}

/* ref: FUN_004ee1e0 */
uint F_004ee1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee1e0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_2;
  fVar3 = param_3[4];
  fVar4 = *param_3;
  fVar5 = param_3[0xc];
  param_1[1] = ((float)GEN_TOF((((float10)fVar1 * (float10)param_3[5] + (float10)param_3[1] * (float10)fVar2)
                      + (float10)param_3[0xd])));
  *param_1 = ((float)GEN_TOF(((float10)fVar5 +
                    ((float10)fVar2 * (float10)fVar4 + (float10)fVar1 * (float10)fVar3))));
  return (uint)param_1;
}

/* ref: FUN_004ee230 */
uint F_004ee230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee230u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar4 = (float10)*(float *)param_2;
  fVar5 = (float10)*(float *)(param_2 + 4);
  fVar1 = param_3[4];
  fVar2 = *param_3;
  fVar3 = param_3[0xc];
  fVar6 = (float10)((float)GEN_TOF(((float10)1 /
                          ((fVar4 * (float10)param_3[3] + fVar5 * (float10)param_3[7]) +
                          (float10)param_3[0xf]))));
  param_1[1] = ((float)GEN_TOF((fVar6 * ((float10)param_3[0xd] +
                               ((float10)param_3[1] * fVar4 + (float10)param_3[5] * fVar5)))));
  *param_1 = ((float)GEN_TOF((fVar6 * ((fVar4 * (float10)fVar2 + (float10)fVar1 * fVar5) + (float10)fVar3))));
  return (uint)param_1;
}

/* ref: FUN_004ee2b0 */
uint F_004ee2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee2b0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_2;
  fVar3 = param_3[4];
  fVar4 = *param_3;
  param_1[1] = (float)((float10)fVar1 * (float10)param_3[5] + (float10)param_3[1] * (float10)fVar2);
  *param_1 = (float)((float10)fVar2 * (float10)fVar4 + (float10)fVar1 * (float10)fVar3);
  return (uint)param_1;
}

/* ref: FUN_004ee300 */
uint F_004ee300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee300u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_2;
  fVar3 = param_3[4];
  fVar4 = *param_3;
  param_1[1] = (float)((float10)fVar1 * (float10)param_3[5] + (float10)param_3[1] * (float10)fVar2);
  *param_1 = (float)((float10)fVar2 * (float10)fVar4 + (float10)fVar1 * (float10)fVar3);
  return (uint)param_1;
}

/* ref: FUN_004ee350 */
uint F_004ee350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee350u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_2;
  param_1[1] = ((float)GEN_TOF((((float10)fVar2 * (float10)param_3[1] + (float10)fVar1 * (float10)param_3[5])
                      + (float10)param_3[0xd])));
  *param_1 = ((float)GEN_TOF((((float10)fVar2 * (float10)*param_3 + (float10)param_3[4] * (float10)fVar1) +
                    (float10)param_3[0xc])));
  return (uint)param_1;
}

/* ref: FUN_004ee3a0 */
uint F_004ee3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee3a0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_2;
  param_1[1] = ((float)GEN_TOF((((float10)fVar2 * (float10)param_3[1] + (float10)fVar1 * (float10)param_3[5])
                      + (float10)param_3[0xd])));
  *param_1 = ((float)GEN_TOF((((float10)fVar2 * (float10)*param_3 + (float10)param_3[4] * (float10)fVar1) +
                    (float10)param_3[0xc])));
  return (uint)param_1;
}

/* ref: FUN_004ee3f0 */
uint F_004ee3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee3f0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_004ee230(param_1,param_2,param_3);
  return param_1;
}

/* ref: FUN_004ee410 */
uint F_004ee410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee410u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_2;
  param_1[1] = (float)((float10)fVar2 * (float10)param_3[1] + (float10)fVar1 * (float10)param_3[5]);
  *param_1 = (float)((float10)fVar2 * (float10)*param_3 + (float10)param_3[4] * (float10)fVar1);
  return (uint)param_1;
}

/* ref: FUN_004ee460 */
uint F_004ee460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee460u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_2;
  param_1[1] = (float)((float10)fVar2 * (float10)param_3[1] + (float10)fVar1 * (float10)param_3[5]);
  *param_1 = (float)((float10)fVar2 * (float10)*param_3 + (float10)param_3[4] * (float10)fVar1);
  return (uint)param_1;
}

/* ref: FUN_004ee4b0 */
unsigned int F_004ee4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ee4b0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = in_ecx[1];
  fVar2 = *(float *)(param_2 + 0x10);
  fVar3 = *(float *)param_2;
  fVar4 = *(float *)(param_2 + 0x30);
  in_ecx[1] = ((float)GEN_TOF((((float10)fVar1 * (float10)*(float *)(param_2 + 0x14) +
                      (float10)*(float *)(param_2 + 4) * (float10)*in_ecx) +
                     (float10)*(float *)(param_2 + 0x34))));
  *in_ecx = ((float)GEN_TOF((((float10)fVar1 * (float10)fVar2 + (float10)*in_ecx * (float10)fVar3) +
                   (float10)fVar4)));
  return 0;
}

/* ref: FUN_004ee500 */
unsigned int F_004ee500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ee500u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = in_ecx[1];
  fVar2 = *(float *)(param_2 + 0x10);
  fVar3 = *(float *)param_2;
  fVar4 = *(float *)(param_2 + 0x30);
  in_ecx[1] = ((float)GEN_TOF((((float10)fVar1 * (float10)*(float *)(param_2 + 0x14) +
                      (float10)*(float *)(param_2 + 4) * (float10)*in_ecx) +
                     (float10)*(float *)(param_2 + 0x34))));
  *in_ecx = ((float)GEN_TOF((((float10)fVar1 * (float10)fVar2 + (float10)*in_ecx * (float10)fVar3) +
                   (float10)fVar4)));
  return 0;
}

/* ref: FUN_004ee550 */
unsigned int F_004ee550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ee550u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar4 = (float10)*param_1;
  fVar5 = (float10)param_1[1];
  fVar1 = *(float *)(param_2 + 0x10);
  fVar2 = *(float *)param_2;
  fVar3 = *(float *)(param_2 + 0x30);
  fVar6 = (float10)((float)GEN_TOF(((float10)1 /
                          ((fVar4 * (float10)*(float *)(param_2 + 0xc) +
                           fVar5 * (float10)*(float *)(param_2 + 0x1c)) +
                          (float10)*(float *)(param_2 + 0x3c)))));
  param_1[1] = ((float)GEN_TOF((fVar6 * ((float10)*(float *)(param_2 + 0x34) +
                               ((float10)*(float *)(param_2 + 4) * fVar4 +
                               (float10)*(float *)(param_2 + 0x14) * fVar5)))));
  *param_1 = ((float)GEN_TOF((fVar6 * (((float10)fVar2 * fVar4 + (float10)fVar1 * fVar5) + (float10)fVar3))));
  return 0;
}

/* ref: FUN_004ee5d0 */
unsigned int F_004ee5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ee5d0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = in_ecx[1];
  fVar2 = *(float *)(param_2 + 0x10);
  fVar3 = *(float *)param_2;
  in_ecx[1] = ((float)GEN_TOF(((float10)fVar1 * (float10)*(float *)(param_2 + 0x14) +
                     (float10)*(float *)(param_2 + 4) * (float10)*in_ecx)));
  *in_ecx = (float)((float10)fVar1 * (float10)fVar2 + (float10)*in_ecx * (float10)fVar3);
  return 0;
}

/* ref: FUN_004ee620 */
unsigned int F_004ee620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ee620u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = in_ecx[1];
  fVar2 = *(float *)(param_2 + 0x10);
  fVar3 = *(float *)param_2;
  in_ecx[1] = ((float)GEN_TOF(((float10)fVar1 * (float10)*(float *)(param_2 + 0x14) +
                     (float10)*(float *)(param_2 + 4) * (float10)*in_ecx)));
  *in_ecx = (float)((float10)fVar1 * (float10)fVar2 + (float10)*in_ecx * (float10)fVar3);
  return 0;
}

/* ref: FUN_004ee670 */
uint F_004ee670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee670u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
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
  float10 fVar11;
  
  fVar9 = (float10)*(float *)(param_2 + 4);
  fVar10 = (float10)*(float *)param_2;
  fVar11 = (float10)*(float *)(param_2 + 8);
  fVar1 = *(float *)(param_3 + 4);
  fVar2 = *(float *)(param_3 + 0x14);
  fVar3 = *(float *)(param_3 + 0x24);
  fVar4 = *(float *)(param_3 + 0x34);
  fVar5 = *(float *)(param_3 + 8);
  fVar6 = *(float *)(param_3 + 0x18);
  fVar7 = *(float *)(param_3 + 0x28);
  fVar8 = *(float *)(param_3 + 0x38);
  *param_1 = ((float)GEN_TOF((((fVar10 * (float10)*(float *)param_3 +
                      fVar9 * (float10)*(float *)(param_3 + 0x10)) +
                     fVar11 * (float10)*(float *)(param_3 + 0x20)) +
                    (float10)*(float *)(param_3 + 0x30))));
  param_1[2] = ((float)GEN_TOF((((fVar10 * (float10)fVar5 + (float10)fVar6 * fVar9) + (float10)fVar7 * fVar11
                       ) + (float10)fVar8)));
  param_1[1] = ((float)GEN_TOF((((float10)fVar3 * fVar11 + ((float10)fVar2 * fVar9 + (float10)fVar1 * fVar10)
                       ) + (float10)fVar4)));
  return (uint)param_1;
}

/* ref: FUN_004ee700 */
uint F_004ee700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee700u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
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
  float10 fVar11;
  
  fVar9 = (float10)*(float *)(param_2 + 4);
  fVar10 = (float10)*(float *)param_2;
  fVar11 = (float10)*(float *)(param_2 + 8);
  fVar1 = *(float *)(param_3 + 4);
  fVar2 = *(float *)(param_3 + 0x14);
  fVar3 = *(float *)(param_3 + 0x24);
  fVar4 = *(float *)(param_3 + 0x34);
  fVar5 = *(float *)(param_3 + 8);
  fVar6 = *(float *)(param_3 + 0x18);
  fVar7 = *(float *)(param_3 + 0x28);
  fVar8 = *(float *)(param_3 + 0x38);
  *param_1 = ((float)GEN_TOF((((fVar10 * (float10)*(float *)param_3 +
                      fVar9 * (float10)*(float *)(param_3 + 0x10)) +
                     fVar11 * (float10)*(float *)(param_3 + 0x20)) +
                    (float10)*(float *)(param_3 + 0x30))));
  param_1[2] = ((float)GEN_TOF((((fVar10 * (float10)fVar5 + (float10)fVar6 * fVar9) + (float10)fVar7 * fVar11
                       ) + (float10)fVar8)));
  param_1[1] = ((float)GEN_TOF((((float10)fVar3 * fVar11 + ((float10)fVar2 * fVar9 + (float10)fVar1 * fVar10)
                       ) + (float10)fVar4)));
  return (uint)param_1;
}

/* ref: FUN_004ee790 */
uint F_004ee790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee790u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
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
  float10 fVar11;
  float10 fVar12;
  
  fVar9 = (float10)*(float *)param_2;
  fVar10 = (float10)*(float *)(param_2 + 4);
  fVar11 = (float10)*(float *)(param_2 + 8);
  fVar12 = (float10)((float)GEN_TOF(((float10)1 /
                           (((fVar9 * (float10)*(float *)(param_3 + 0xc) +
                             fVar10 * (float10)*(float *)(param_3 + 0x1c)) +
                            fVar11 * (float10)*(float *)(param_3 + 0x2c)) +
                           (float10)*(float *)(param_3 + 0x3c)))));
  fVar1 = *(float *)(param_3 + 4);
  fVar2 = *(float *)(param_3 + 0x14);
  fVar3 = *(float *)(param_3 + 0x24);
  fVar4 = *(float *)(param_3 + 0x34);
  fVar5 = *(float *)(param_3 + 8);
  fVar6 = *(float *)(param_3 + 0x18);
  fVar7 = *(float *)(param_3 + 0x28);
  fVar8 = *(float *)(param_3 + 0x38);
  *param_1 = ((float)GEN_TOF((fVar12 * (((float10)*(float *)(param_3 + 0x20) * fVar11 +
                               (fVar9 * (float10)*(float *)param_3 +
                               (float10)*(float *)(param_3 + 0x10) * fVar10)) +
                              (float10)*(float *)(param_3 + 0x30)))));
  param_1[2] = ((float)GEN_TOF((fVar12 * ((float10)fVar8 +
                                (fVar11 * (float10)fVar7 +
                                ((float10)fVar5 * fVar9 + (float10)fVar6 * fVar10))))));
  param_1[1] = ((float)GEN_TOF(((((float10)fVar3 * fVar11 +
                        ((float10)fVar2 * fVar10 + (float10)fVar1 * fVar9)) + (float10)fVar4) *
                      fVar12)));
  return (uint)param_1;
}

/* ref: FUN_004ee850 */
uint F_004ee850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee850u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar7 = (float10)*(float *)(param_2 + 4);
  fVar8 = (float10)*(float *)param_2;
  fVar9 = (float10)*(float *)(param_2 + 8);
  fVar1 = *(float *)(param_3 + 4);
  fVar2 = *(float *)(param_3 + 0x14);
  fVar3 = *(float *)(param_3 + 0x24);
  fVar4 = *(float *)(param_3 + 8);
  fVar5 = *(float *)(param_3 + 0x18);
  fVar6 = *(float *)(param_3 + 0x28);
  *param_1 = ((float)GEN_TOF(((fVar8 * (float10)*(float *)param_3 +
                     fVar7 * (float10)*(float *)(param_3 + 0x10)) +
                    fVar9 * (float10)*(float *)(param_3 + 0x20))));
  param_1[2] = ((float)GEN_TOF(((fVar8 * (float10)fVar4 + (float10)fVar5 * fVar7) + (float10)fVar6 * fVar9)));
  param_1[1] = ((float)GEN_TOF(((float10)fVar3 * fVar9 + ((float10)fVar2 * fVar7 + (float10)fVar1 * fVar8))));
  return (uint)param_1;
}

/* ref: FUN_004ee8e0 */
uint F_004ee8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee8e0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar7 = (float10)*(float *)(param_2 + 4);
  fVar8 = (float10)*(float *)param_2;
  fVar9 = (float10)*(float *)(param_2 + 8);
  fVar1 = *(float *)(param_3 + 4);
  fVar2 = *(float *)(param_3 + 0x14);
  fVar3 = *(float *)(param_3 + 0x24);
  fVar4 = *(float *)(param_3 + 8);
  fVar5 = *(float *)(param_3 + 0x18);
  fVar6 = *(float *)(param_3 + 0x28);
  *param_1 = ((float)GEN_TOF(((fVar8 * (float10)*(float *)param_3 +
                     fVar7 * (float10)*(float *)(param_3 + 0x10)) +
                    fVar9 * (float10)*(float *)(param_3 + 0x20))));
  param_1[2] = ((float)GEN_TOF(((fVar8 * (float10)fVar4 + (float10)fVar5 * fVar7) + (float10)fVar6 * fVar9)));
  param_1[1] = ((float)GEN_TOF(((float10)fVar3 * fVar9 + ((float10)fVar2 * fVar7 + (float10)fVar1 * fVar8))));
  return (uint)param_1;
}

/* ref: FUN_004ee970 */
uint F_004ee970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee970u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_004ee670(param_1,param_2,param_3);
  return param_1;
}

/* ref: FUN_004ee990 */
uint F_004ee990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee990u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_004ee700(param_1,param_2,param_3);
  return param_1;
}

/* ref: FUN_004ee9b0 */
uint F_004ee9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee9b0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_004ee790(param_1,param_2,param_3);
  return param_1;
}

/* ref: FUN_004ee9d0 */
uint F_004ee9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee9d0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_004ee850(param_1,param_2,param_3);
  return param_1;
}

/* ref: FUN_004ee9f0 */
uint F_004ee9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ee9f0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_004ee8e0(param_1,param_2,param_3);
  return param_1;
}

/* ref: FUN_004eea10 */
uint F_004eea10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4eea10u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  float10 fVar11;
  
  fVar9 = (float10)param_1[1];
  fVar10 = (float10)*param_1;
  fVar11 = (float10)param_1[2];
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_2 + 0x14);
  fVar3 = *(float *)(param_2 + 0x24);
  fVar4 = *(float *)(param_2 + 0x34);
  fVar5 = *(float *)(param_2 + 8);
  fVar6 = *(float *)(param_2 + 0x18);
  fVar7 = *(float *)(param_2 + 0x28);
  fVar8 = *(float *)(param_2 + 0x38);
  *param_1 = ((float)GEN_TOF((((fVar9 * (float10)*(float *)(param_2 + 0x10) +
                      fVar10 * (float10)*(float *)param_2) +
                     fVar11 * (float10)*(float *)(param_2 + 0x20)) +
                    (float10)*(float *)(param_2 + 0x30))));
  param_1[2] = ((float)GEN_TOF(((((float10)fVar5 * fVar10 + (float10)fVar6 * fVar9) + (float10)fVar7 * fVar11
                       ) + (float10)fVar8)));
  param_1[1] = ((float)GEN_TOF((((float10)fVar3 * fVar11 + ((float10)fVar2 * fVar9 + (float10)fVar1 * fVar10)
                       ) + (float10)fVar4)));
  return (uint)param_1;
}

/* ref: FUN_004eeaa0 */
unsigned int F_004eeaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4eeaa0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  float10 fVar11;
  
  fVar9 = (float10)param_1[1];
  fVar10 = (float10)*param_1;
  fVar11 = (float10)param_1[2];
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_2 + 0x14);
  fVar3 = *(float *)(param_2 + 0x24);
  fVar4 = *(float *)(param_2 + 0x34);
  fVar5 = *(float *)(param_2 + 8);
  fVar6 = *(float *)(param_2 + 0x18);
  fVar7 = *(float *)(param_2 + 0x28);
  fVar8 = *(float *)(param_2 + 0x38);
  *param_1 = ((float)GEN_TOF((((fVar9 * (float10)*(float *)(param_2 + 0x10) +
                      fVar10 * (float10)*(float *)param_2) +
                     fVar11 * (float10)*(float *)(param_2 + 0x20)) +
                    (float10)*(float *)(param_2 + 0x30))));
  param_1[2] = ((float)GEN_TOF(((((float10)fVar5 * fVar10 + (float10)fVar6 * fVar9) + (float10)fVar7 * fVar11
                       ) + (float10)fVar8)));
  param_1[1] = ((float)GEN_TOF((((float10)fVar3 * fVar11 + ((float10)fVar2 * fVar9 + (float10)fVar1 * fVar10)
                       ) + (float10)fVar4)));
  return 0;
}

/* ref: FUN_004eeb30 */
byte F_004eeb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4eeb30u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  float10 fVar11;
  float10 fVar12;
  
  fVar9 = (float10)*param_1;
  fVar10 = (float10)param_1[1];
  fVar11 = (float10)param_1[2];
  fVar12 = (float10)((float)GEN_TOF(((float10)1 /
                           (((fVar9 * (float10)*(float *)(param_2 + 0xc) +
                             fVar10 * (float10)*(float *)(param_2 + 0x1c)) +
                            fVar11 * (float10)*(float *)(param_2 + 0x2c)) +
                           (float10)*(float *)(param_2 + 0x3c)))));
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_2 + 0x14);
  fVar3 = *(float *)(param_2 + 0x24);
  fVar4 = *(float *)(param_2 + 0x34);
  fVar5 = *(float *)(param_2 + 8);
  fVar6 = *(float *)(param_2 + 0x18);
  fVar7 = *(float *)(param_2 + 0x28);
  fVar8 = *(float *)(param_2 + 0x38);
  *param_1 = ((float)GEN_TOF((fVar12 * (((float10)*(float *)(param_2 + 0x20) * fVar11 +
                               (fVar9 * (float10)*(float *)param_2 +
                               (float10)*(float *)(param_2 + 0x10) * fVar10)) +
                              (float10)*(float *)(param_2 + 0x30)))));
  param_1[2] = ((float)GEN_TOF((fVar12 * ((float10)fVar8 +
                                (fVar11 * (float10)fVar7 +
                                ((float10)fVar5 * fVar9 + (float10)fVar6 * fVar10))))));
  param_1[1] = ((float)GEN_TOF(((((float10)fVar3 * fVar11 +
                        ((float10)fVar2 * fVar10 + (float10)fVar1 * fVar9)) + (float10)fVar4) *
                      fVar12)));
  return (byte)param_1;
}

/* ref: FUN_004eebf0 */
uint F_004eebf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4eebf0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar7 = (float10)param_1[1];
  fVar8 = (float10)*param_1;
  fVar9 = (float10)param_1[2];
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_2 + 0x14);
  fVar3 = *(float *)(param_2 + 0x24);
  fVar4 = *(float *)(param_2 + 8);
  fVar5 = *(float *)(param_2 + 0x18);
  fVar6 = *(float *)(param_2 + 0x28);
  *param_1 = ((float)GEN_TOF(((fVar7 * (float10)*(float *)(param_2 + 0x10) +
                     fVar8 * (float10)*(float *)param_2) +
                    fVar9 * (float10)*(float *)(param_2 + 0x20))));
  param_1[2] = ((float)GEN_TOF((((float10)fVar4 * fVar8 + (float10)fVar5 * fVar7) + (float10)fVar6 * fVar9)));
  param_1[1] = ((float)GEN_TOF(((float10)fVar3 * fVar9 + ((float10)fVar2 * fVar7 + (float10)fVar1 * fVar8))));
  return (uint)param_1;
}

/* ref: FUN_004eec80 */
uint F_004eec80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4eec80u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar7 = (float10)param_1[1];
  fVar8 = (float10)*param_1;
  fVar9 = (float10)param_1[2];
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_2 + 0x14);
  fVar3 = *(float *)(param_2 + 0x24);
  fVar4 = *(float *)(param_2 + 8);
  fVar5 = *(float *)(param_2 + 0x18);
  fVar6 = *(float *)(param_2 + 0x28);
  *param_1 = ((float)GEN_TOF(((fVar7 * (float10)*(float *)(param_2 + 0x10) +
                     fVar8 * (float10)*(float *)param_2) +
                    fVar9 * (float10)*(float *)(param_2 + 0x20))));
  param_1[2] = ((float)GEN_TOF((((float10)fVar4 * fVar8 + (float10)fVar5 * fVar7) + (float10)fVar6 * fVar9)));
  param_1[1] = ((float)GEN_TOF(((float10)fVar3 * fVar9 + ((float10)fVar2 * fVar7 + (float10)fVar1 * fVar8))));
  return (uint)param_1;
}

/* ref: FUN_004eed10 */
uint F_004eed10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4eed10u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
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
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  fVar1 = *(float *)(param_3 + 0x10);
  fVar13 = (float10)*(float *)(param_2 + 4);
  fVar14 = (float10)*(float *)param_2;
  fVar2 = *(float *)param_3;
  fVar3 = *(float *)(param_3 + 0x20);
  fVar15 = (float10)*(float *)(param_2 + 8);
  fVar4 = *(float *)(param_3 + 0x30);
  fVar16 = (float10)*(float *)(param_2 + 0xc);
  fVar5 = *(float *)(param_3 + 8);
  fVar6 = *(float *)(param_3 + 0x18);
  fVar7 = *(float *)(param_3 + 0x28);
  fVar8 = *(float *)(param_3 + 0x38);
  fVar9 = *(float *)(param_3 + 0xc);
  fVar10 = *(float *)(param_3 + 0x1c);
  fVar11 = *(float *)(param_3 + 0x2c);
  fVar12 = *(float *)(param_3 + 0x3c);
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)(param_3 + 0x34) * fVar16 +
                      ((float10)*(float *)(param_3 + 0x24) * fVar15 +
                      ((float10)*(float *)(param_3 + 0x14) * fVar13 +
                      (float10)*(float *)(param_3 + 4) * fVar14)))));
  *param_1 = ((float)GEN_TOF((((fVar14 * (float10)fVar2 + fVar13 * (float10)fVar1) + fVar15 * (float10)fVar3)
                    + fVar16 * (float10)fVar4)));
  param_1[3] = ((float)GEN_TOF((fVar16 * (float10)fVar12 +
                      (((float10)fVar9 * fVar14 + (float10)fVar10 * fVar13) +
                      (float10)fVar11 * fVar15))));
  param_1[2] = ((float)GEN_TOF(((float10)fVar8 * fVar16 +
                      ((float10)fVar7 * fVar15 + ((float10)fVar6 * fVar13 + (float10)fVar5 * fVar14)
                      ))));
  return (uint)param_1;
}

/* ref: FUN_004eede0 */
uint F_004eede0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4eede0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_004eed10(param_1,param_2,param_3);
  return param_1;
}

/* ref: FUN_004eee00 */
unsigned int F_004eee00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4eee00u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  fVar1 = *(float *)(param_2 + 0x10);
  fVar13 = (float10)param_1[1];
  fVar14 = (float10)*param_1;
  fVar2 = *(float *)param_2;
  fVar3 = *(float *)(param_2 + 0x20);
  fVar15 = (float10)param_1[2];
  fVar4 = *(float *)(param_2 + 0x30);
  fVar16 = (float10)param_1[3];
  fVar5 = *(float *)(param_2 + 8);
  fVar6 = *(float *)(param_2 + 0x18);
  fVar7 = *(float *)(param_2 + 0x28);
  fVar8 = *(float *)(param_2 + 0x38);
  fVar9 = *(float *)(param_2 + 0xc);
  fVar10 = *(float *)(param_2 + 0x1c);
  fVar11 = *(float *)(param_2 + 0x2c);
  fVar12 = *(float *)(param_2 + 0x3c);
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 0x34) * fVar16 +
                      ((float10)*(float *)(param_2 + 0x24) * fVar15 +
                      ((float10)*(float *)(param_2 + 0x14) * fVar13 +
                      (float10)*(float *)(param_2 + 4) * fVar14)))));
  *param_1 = ((float)GEN_TOF((((fVar14 * (float10)fVar2 + fVar13 * (float10)fVar1) + fVar15 * (float10)fVar3)
                    + fVar16 * (float10)fVar4)));
  param_1[3] = ((float)GEN_TOF((fVar16 * (float10)fVar12 +
                      (((float10)fVar9 * fVar14 + (float10)fVar10 * fVar13) +
                      (float10)fVar11 * fVar15))));
  param_1[2] = ((float)GEN_TOF(((float10)fVar8 * fVar16 +
                      ((float10)fVar7 * fVar15 + ((float10)fVar6 * fVar13 + (float10)fVar5 * fVar14)
                      ))));
  return 0;
}

/* ref: FUN_004eeed0 */
uint F_004eeed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4eeed0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined1 uVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  uVar5 = param_2;
  fVar7 = (float10)*(float *)(param_2 + 0x14);
  fVar8 = (float10)*(float *)(param_2 + 0x28);
  fVar9 = (float10)*(float *)param_2;
  fVar1 = ((float)GEN_TOF(((fVar7 - fVar8) - fVar9)));
  fVar2 = ((float)GEN_TOF(((fVar8 - fVar9) - fVar7)));
  fVar3 = ((float)GEN_TOF(((fVar9 + fVar7) + fVar8)));
  fVar4 = ((float)GEN_TOF(((fVar9 - fVar7) - fVar8)));
  fVar7 = (float10)fVar4;
  fVar8 = (float10)fVar1;
  param_2 = (uint)gen_fl2bits(fVar4);
  if (fVar7 < fVar8) {
    param_2 = (uint)gen_fl2bits(fVar1);
  }
  uVar6 = (!GEN_ISNAN(fVar8) && !GEN_ISNAN(fVar7)) && !(fVar8 <= fVar7);
  if (((float10)GEN_TOD(gen_bits2f(param_2))) < (float10)fVar2) {
    uVar6 = 2;
    param_2 = (uint)gen_fl2bits(fVar2);
  }
  if (((float10)GEN_TOD(gen_bits2f(param_2))) < (float10)fVar3) {
    uVar6 = 3;
    param_2 = (uint)gen_fl2bits(fVar3);
  }
  fVar1 = ((float)GEN_TOF(((float10)((float)GEN_TOF(SQRT((float10)(float)(((float10)GEN_TOD(gen_bits2f(param_2))) +
                                                       (float10)REFG(double, 0x1088130))))) *
                 (float10)REFG(double, 0x1088108))));
  fVar2 = (float)((float10)*(double *)&REFG(undefined, 0x1094878) / (float10)fVar1);
  switch((unsigned int)(uintptr_t)(uVar6)) {
  case 0: ;
    *param_1 = fVar1;
    fVar7 = (float10)fVar2;
    param_1[1] = ((float)GEN_TOF((fVar7 * ((float10)*(float *)(uVar5 + 0x10) + (float10)*(float *)(uVar5 + 4)
                                 ))));
    param_1[2] = ((float)GEN_TOF((((float10)*(float *)(uVar5 + 0x20) + (float10)*(float *)(uVar5 + 8)) *
                        fVar7)));
    param_1[3] = ((float)GEN_TOF((((float10)*(float *)(uVar5 + 0x18) - (float10)*(float *)(uVar5 + 0x24)) *
                        fVar7)));
    return (uint)param_1;
  case 1: ;
    fVar3 = *(float *)(uVar5 + 0x10);
    fVar4 = *(float *)(uVar5 + 4);
    param_1[1] = fVar1;
    fVar7 = (float10)fVar2;
    *param_1 = ((float)GEN_TOF((fVar7 * ((float10)fVar3 + (float10)fVar4))));
    param_1[2] = ((float)GEN_TOF((((float10)*(float *)(uVar5 + 0x24) + (float10)*(float *)(uVar5 + 0x18)) *
                        fVar7)));
    param_1[3] = ((float)GEN_TOF((((float10)*(float *)(uVar5 + 0x20) - (float10)*(float *)(uVar5 + 8)) *
                        fVar7)));
    return (uint)param_1;
  case 2: ;
    fVar7 = (float10)fVar2;
    *param_1 = ((float)GEN_TOF((fVar7 * ((float10)*(float *)(uVar5 + 0x20) + (float10)*(float *)(uVar5 + 8)))))
    ;
    fVar2 = *(float *)(uVar5 + 0x24);
    fVar3 = *(float *)(uVar5 + 0x18);
    param_1[2] = fVar1;
    param_1[1] = ((float)GEN_TOF((((float10)fVar2 + (float10)fVar3) * fVar7)));
    param_1[3] = ((float)GEN_TOF((((float10)*(float *)(uVar5 + 4) - (float10)*(float *)(uVar5 + 0x10)) *
                        fVar7)));
    return (uint)param_1;
  case 3: ;
    fVar7 = (float10)fVar2;
    *param_1 = ((float)GEN_TOF((fVar7 * ((float10)*(float *)(uVar5 + 0x18) -
                               (float10)*(float *)(uVar5 + 0x24)))));
    param_1[1] = ((float)GEN_TOF((((float10)*(float *)(uVar5 + 0x20) - (float10)*(float *)(uVar5 + 8)) *
                        fVar7)));
    fVar2 = *(float *)(uVar5 + 4);
    fVar3 = *(float *)(uVar5 + 0x10);
    param_1[3] = fVar1;
    param_1[2] = ((float)GEN_TOF((((float10)fVar2 - (float10)fVar3) * fVar7)));
  }
  return (uint)param_1;
}

/* ref: FUN_004ef0c0 */
uint F_004ef0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ef0c0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar1 = *(float *)param_2;
  fVar4 = (float10)*(double *)&REFG(undefined, 0x1092098);
  fVar5 = (float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 4) * fVar4)));
  fVar3 = (float10)1;
  fVar6 = (float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 8) * fVar4)));
  *param_1 = ((float)GEN_TOF(((fVar3 - fVar5 * (float10)*(float *)(param_2 + 4)) -
                    fVar6 * (float10)*(float *)(param_2 + 8))));
  fVar4 = (float10)(float)((float10)fVar1 * fVar4);
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 0xc) * fVar6 +
                      fVar4 * (float10)*(float *)(param_2 + 4))));
  param_1[2] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) * fVar4 -
                      (float10)*(float *)(param_2 + 0xc) * fVar5)));
  param_1[4] = ((float)GEN_TOF(((float10)*(float *)param_2 * fVar5 -
                      (float10)*(float *)(param_2 + 0xc) * fVar6)));
  param_1[5] = ((float)GEN_TOF(((fVar3 - (float10)*(float *)param_2 * fVar4) -
                      (float10)*(float *)(param_2 + 8) * fVar6)));
  param_1[6] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 0xc) * fVar4 +
                      (float10)*(float *)(param_2 + 8) * fVar5)));
  param_1[8] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 0xc) * fVar5 +
                      (float10)*(float *)(param_2 + 8) * fVar4)));
  param_1[9] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) * fVar5 -
                      (float10)*(float *)(param_2 + 0xc) * fVar4)));
  fVar1 = *(float *)param_2;
  fVar2 = *(float *)(param_2 + 4);
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[10] = ((float)GEN_TOF(((fVar3 - (float10)fVar1 * fVar4) - (float10)fVar2 * fVar5)));
  return (uint)param_1;
}

/* ref: FUN_004ef1c0 */
uint F_004ef1c0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x4ef1c0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar5 = ((float10)GEN_TOD(fsin((float10)param_3)));
  fVar3 = ((float10)GEN_TOD(fcos((float10)param_3)));
  fVar3 = (float10)(float)fVar3;
  fVar6 = (float10)1 - fVar3;
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_2 + 8);
  fVar4 = (float10)(float)((float10)*(float *)param_2 * fVar6);
  *param_1 = (float)(fVar3 + fVar4 * (float10)*(float *)param_2);
  fVar5 = (float10)(float)fVar5;
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) * fVar4 +
                      fVar5 * (float10)*(float *)(param_2 + 8))));
  param_1[2] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) * fVar4 -
                      (float10)*(float *)(param_2 + 4) * fVar5)));
  fVar4 = (float10)(float)((float10)fVar1 * fVar6);
  param_1[4] = ((float)GEN_TOF((fVar4 * (float10)*(float *)param_2 - (float10)*(float *)(param_2 + 8) * fVar5
                      )));
  param_1[5] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) * fVar4 + fVar3)));
  param_1[6] = ((float)GEN_TOF(((float10)*(float *)param_2 * fVar5 + (float10)*(float *)(param_2 + 8) * fVar4
                      )));
  fVar4 = (float10)(float)((float10)fVar2 * fVar6);
  param_1[8] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) * fVar5 + fVar4 * (float10)*(float *)param_2
                      )));
  param_1[9] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) * fVar4 - (float10)*(float *)param_2 * fVar5
                      )));
  fVar1 = *(float *)(param_2 + 8);
  param_1[0xc] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[10] = (float)(fVar4 * (float10)fVar1 + fVar3);
  return (uint)param_1;
}

/* ref: FUN_004ef2d0 */
float10 F_004ef2d0(unsigned int gen_a0)
{
  GEN_ENTER(0x4ef2d0u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  return (float10)((float)GEN_TOF(((((float10)in_ecx[10] * (float10)in_ecx[5] -
                           (float10)in_ecx[9] * (float10)in_ecx[6]) * (float10)*in_ecx -
                          (float10)in_ecx[4] *
                          ((float10)in_ecx[1] * (float10)in_ecx[10] -
                          (float10)in_ecx[2] * (float10)in_ecx[9])) +
                         (float10)in_ecx[8] *
                         ((float10)in_ecx[1] * (float10)in_ecx[6] -
                         (float10)in_ecx[2] * (float10)in_ecx[5]))));
}

/* ref: FUN_004ef350 */
uint F_004ef350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ef350u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
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
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_2;
  fVar3 = *(float *)(param_2 + 8);
  fVar20 = (float10)fVar2;
  fVar21 = (float10)*(float *)(param_3 + 4);
  fVar22 = (float10)*(float *)(param_3 + 0x14);
  fVar23 = (float10)fVar1;
  fVar24 = (float10)*(float *)(param_3 + 0x24);
  fVar4 = *(float *)(param_3 + 0x28);
  fVar25 = (float10)*(float *)(param_3 + 8);
  fVar26 = (float10)*(float *)(param_3 + 0x18);
  fVar5 = *(float *)(param_2 + 0x14);
  fVar6 = *(float *)(param_3 + 0x10);
  fVar7 = *(float *)(param_2 + 0x10);
  fVar8 = *(float *)param_3;
  fVar9 = *(float *)(param_2 + 0x18);
  fVar10 = *(float *)(param_3 + 0x20);
  fVar11 = *(float *)(param_2 + 0x24);
  fVar12 = *(float *)(param_2 + 0x20);
  fVar13 = *(float *)(param_2 + 0x28);
  fVar14 = *(float *)(param_2 + 0x34);
  fVar15 = *(float *)(param_2 + 0x30);
  fVar16 = *(float *)(param_2 + 0x38);
  fVar17 = *(float *)(param_3 + 0x30);
  fVar27 = (float10)fVar15;
  fVar28 = (float10)fVar14;
  fVar29 = (float10)fVar16;
  fVar18 = *(float *)(param_3 + 0x34);
  fVar19 = *(float *)(param_3 + 0x38);
  param_1[1] = ((float)GEN_TOF(((fVar21 * fVar20 + fVar23 * fVar22) + fVar24 * (float10)fVar3)));
  param_1[2] = ((float)GEN_TOF(((float10)fVar4 * (float10)fVar3 + (fVar25 * fVar20 + fVar26 * fVar23))));
  param_1[4] = ((float)GEN_TOF(((float10)fVar10 * (float10)fVar9 +
                      ((float10)fVar6 * (float10)fVar5 + (float10)fVar8 * (float10)fVar7))));
  param_1[5] = ((float)GEN_TOF(((float10)fVar9 * fVar24 + ((float10)fVar5 * fVar22 + (float10)fVar7 * fVar21)
                      )));
  param_1[6] = ((float)GEN_TOF(((float10)fVar9 * (float10)fVar4 +
                      ((float10)fVar5 * fVar26 + (float10)fVar7 * fVar25))));
  param_1[8] = ((float)GEN_TOF(((float10)fVar13 * (float10)fVar10 +
                      ((float10)fVar11 * (float10)fVar6 + (float10)fVar12 * (float10)fVar8))));
  param_1[9] = ((float)GEN_TOF(((float10)fVar13 * fVar24 +
                      ((float10)fVar11 * fVar22 + (float10)fVar12 * fVar21))));
  param_1[10] = ((float)GEN_TOF(((float10)fVar13 * (float10)fVar4 +
                       ((float10)fVar11 * fVar26 + (float10)fVar12 * fVar25))));
  param_1[0xc] = ((float)GEN_TOF((((float10)fVar16 * (float10)fVar10 +
                         ((float10)fVar14 * (float10)fVar6 + (float10)fVar15 * (float10)fVar8)) +
                        (float10)fVar17)));
  param_1[0xd] = ((float)GEN_TOF(((float10)fVar18 + ((fVar27 * fVar21 + fVar28 * fVar22) + fVar29 * fVar24))));
  *param_1 = ((float)GEN_TOF(((float10)fVar10 * (float10)fVar3 +
                    ((float10)fVar6 * (float10)fVar1 + (float10)fVar8 * (float10)fVar2))));
  param_1[0xe] = ((float)GEN_TOF(((fVar29 * (float10)fVar4 + (fVar27 * fVar25 + fVar28 * fVar26)) +
                        (float10)fVar19)));
  return (uint)param_1;
}

/* ref: FUN_004ef5a0 */
unsigned int F_004ef5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4ef5a0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_2;
  fVar3 = *(float *)(param_2 + 8);
  fVar5 = (float10)*(float *)param_3;
  fVar6 = (float10)fVar2;
  fVar7 = (float10)*(float *)(param_3 + 0x10);
  fVar8 = (float10)fVar1;
  fVar9 = (float10)*(float *)(param_3 + 0x20);
  *(float *)param_1 = ((float)GEN_TOF(((fVar6 * fVar5 + fVar8 * fVar7) + fVar9 * (float10)fVar3)));
  fVar4 = *(float *)(param_3 + 0x24);
  fVar10 = (float10)*(float *)(param_3 + 4);
  fVar11 = (float10)*(float *)(param_3 + 0x14);
  *(float *)(param_1 + 4) =
       ((float)GEN_TOF(((float10)fVar4 * (float10)fVar3 + (fVar10 * fVar6 + fVar11 * fVar8))));
  fVar1 = *(float *)(param_3 + 0x18);
  fVar1 = *(float *)(param_3 + 8);
  fVar1 = *(float *)(param_3 + 0x28);
  *(float *)(param_1 + 8) =
       ((float)GEN_TOF(((float10)fVar1 * (float10)fVar3 +
              ((float10)fVar1 * (float10)fVar1 + (float10)fVar1 * (float10)fVar2))));
  fVar1 = *(float *)(param_2 + 0x14);
  fVar1 = *(float *)(param_2 + 0x10);
  fVar1 = *(float *)(param_2 + 0x18);
  *(float *)(param_1 + 0x10) =
       ((float)GEN_TOF(((float10)fVar1 * fVar9 + ((float10)fVar1 * fVar7 + (float10)fVar1 * fVar5))));
  *(float *)(param_1 + 0x14) =
       ((float)GEN_TOF(((float10)fVar1 * (float10)fVar4 + ((float10)fVar1 * fVar11 + (float10)fVar1 * fVar10)
              )));
  *(float *)(param_1 + 0x18) =
       ((float)GEN_TOF(((float10)fVar1 * (float10)fVar1 +
              ((float10)fVar1 * (float10)fVar1 + (float10)fVar1 * (float10)fVar1))));
  fVar1 = *(float *)(param_2 + 0x24);
  fVar1 = *(float *)(param_2 + 0x20);
  fVar1 = *(float *)(param_2 + 0x28);
  *(float *)(param_1 + 0x20) =
       ((float)GEN_TOF(((float10)fVar1 * fVar9 + ((float10)fVar1 * fVar7 + (float10)fVar1 * fVar5))));
  *(float *)(param_1 + 0x24) =
       ((float)GEN_TOF(((float10)fVar1 * (float10)fVar4 + ((float10)fVar1 * fVar11 + (float10)fVar1 * fVar10)
              )));
  *(float *)(param_1 + 0x28) =
       ((float)GEN_TOF(((float10)fVar1 * (float10)fVar1 +
              ((float10)fVar1 * (float10)fVar1 + (float10)fVar1 * (float10)fVar1))));
  fVar5 = (float10)*(float *)(param_2 + 0x30);
  fVar5 = (float10)*(float *)(param_2 + 0x34);
  fVar5 = (float10)*(float *)(param_2 + 0x38);
  *(float *)(param_1 + 0x30) =
       ((float)GEN_TOF(((float10)*(float *)(param_3 + 0x30) +
              ((fVar5 * fVar5 + fVar5 * fVar7) + fVar5 * fVar9))));
  *(float *)(param_1 + 0x34) =
       ((float)GEN_TOF(((float10)*(float *)(param_3 + 0x34) +
              (fVar5 * (float10)fVar4 + (fVar5 * fVar10 + fVar5 * fVar11)))));
  *(float *)(param_1 + 0x38) =
       ((float)GEN_TOF(((fVar5 * (float10)fVar1 + ((float10)fVar1 * fVar5 + (float10)fVar1 * fVar5)) +
              (float10)*(float *)(param_3 + 0x38))));
  return 0;
}

/* ref: FUN_004ef780 */
uint F_004ef780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ef780u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  float * pfVar11;
  float * pfVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  
  fVar13 = F_004ef2d0(param_2);
  fVar13 = (float10)(float)((float10)1 / fVar13);
  if (((float10)REFG(double, 0x10909a8) <= fVar13) && (fVar13 <= (float10)REFG(double, 0x10909a0))) {
    fVar1 = ((float *)(uint)(param_2))[1];
    fVar2 = ((float *)(uint)(param_2))[2];
    fVar14 = (float10)fVar1;
    fVar15 = ((float10)GEN_TOD(((float *)(uint)(param_2))[10]));
    fVar16 = ((float10)GEN_TOD(((float *)(uint)(param_2))[9]));
    fVar3 = ((float *)(uint)(param_2))[6];
    fVar4 = ((float *)(uint)(param_2))[5];
    fVar18 = (float10)fVar3 * fVar14 - (float10)fVar4 * (float10)fVar2;
    fVar5 = ((float *)(uint)(param_2))[4];
    fVar17 = ((float10)GEN_TOD(((float *)(uint)(param_2))[8]));
    fVar6 = *((float *)(uint)(param_2));
    fVar19 = (float10)fVar6 * (float10)fVar4 - (float10)fVar5 * fVar14;
    fVar7 = ((float *)(uint)(param_2))[0xe];
    fVar8 = ((float *)(uint)(param_2))[0xd];
    fVar9 = ((float *)(uint)(param_2))[0xc];
    *param_1 = ((float)GEN_TOF(((float10)(float)((float10)fVar4 * fVar15 - fVar16 * (float10)fVar3) * fVar13)))
    ;
    param_1[1] = ((float)GEN_TOF((-(float10)(float)(fVar15 * fVar14 - fVar16 * (float10)fVar2) * fVar13)));
    param_1[2] = (float)((float10)(float)fVar18 * fVar13);
    param_1[4] = ((float)GEN_TOF((-(float10)(float)((float10)fVar5 * fVar15 - fVar17 * (float10)fVar3) *
                        fVar13)));
    param_1[5] = ((float)GEN_TOF(((float10)(float)((float10)fVar6 * fVar15 - fVar17 * (float10)fVar2) *
                        fVar13)));
    param_1[6] = ((float)GEN_TOF((-(float10)(float)((float10)fVar6 * (float10)fVar3 -
                                          (float10)fVar5 * (float10)fVar2) * fVar13)));
    param_1[8] = ((float)GEN_TOF(((float10)(float)((float10)fVar5 * fVar16 - fVar17 * (float10)fVar4) *
                        fVar13)));
    param_1[9] = ((float)GEN_TOF((-(float10)(float)((float10)fVar6 * fVar16 - fVar17 * fVar14) * fVar13)));
    param_1[10] = (float)((float10)(float)fVar19 * fVar13);
    param_1[0xc] = ((float)GEN_TOF((-(float10)((float)GEN_TOF((((float10)fVar8 * fVar17 - (float10)fVar9 * fVar16) *
                                             (float10)fVar3 +
                                            (((float10)fVar7 * fVar16 - (float10)fVar8 * fVar15) *
                                             (float10)fVar5 +
                                            (float10)fVar4 *
                                            ((float10)fVar9 * fVar15 - (float10)fVar7 * fVar17))))) *
                          fVar13)));
    param_1[0xd] = ((float)GEN_TOF(((float10)((float)GEN_TOF((((float10)fVar9 * (float10)fVar1 -
                                            (float10)fVar8 * (float10)fVar6) * fVar15 +
                                           (((float10)fVar7 * (float10)fVar6 -
                                            (float10)fVar2 * (float10)fVar9) * fVar16 +
                                           ((float10)fVar8 * (float10)fVar2 -
                                           (float10)fVar7 * (float10)fVar1) * fVar17)))) * fVar13)));
    param_1[0xe] = ((float)GEN_TOF((-(float10)((float)GEN_TOF(((float10)fVar7 * (float10)(double)fVar19 +
                                            ((float10)fVar9 * (float10)(double)fVar18 +
                                            ((float10)(double)((float10)fVar5 * (float10)fVar2) -
                                            (float10)(double)((float10)fVar6 * (float10)fVar3)) *
                                            (float10)fVar8)))) * fVar13)));
    return (uint)param_1;
  }
  pfVar11 = (float *)&REFG(float, 0x1302d00);
  pfVar12 = param_1;
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    *pfVar12 = *pfVar11;
    pfVar11 = pfVar11 + 1;
    pfVar12 = pfVar12 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_004ef9d0 */
unsigned int F_004ef9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4ef9d0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  
  fVar1 = in_ecx[1];
  fVar2 = in_ecx[2];
  fVar16 = (float10)*in_ecx;
  fVar17 = (float10)*(float *)(param_2 + 4);
  fVar18 = (float10)fVar1;
  fVar19 = (float10)*(float *)(param_2 + 0x14);
  fVar20 = (float10)*(float *)(param_2 + 0x24);
  fVar3 = *(float *)(param_2 + 0x28);
  fVar21 = (float10)*(float *)(param_2 + 8);
  fVar22 = (float10)*(float *)(param_2 + 0x18);
  fVar4 = *(float *)(param_2 + 0x10);
  fVar5 = in_ecx[5];
  fVar6 = in_ecx[4];
  fVar7 = *(float *)param_2;
  fVar8 = *(float *)(param_2 + 0x20);
  fVar9 = in_ecx[6];
  fVar10 = in_ecx[9];
  fVar11 = in_ecx[8];
  fVar12 = in_ecx[10];
  fVar13 = *(float *)(param_2 + 0x30);
  fVar23 = (float10)in_ecx[0xc];
  fVar24 = (float10)in_ecx[0xd];
  fVar25 = (float10)in_ecx[0xe];
  fVar14 = *(float *)(param_2 + 0x34);
  fVar15 = *(float *)(param_2 + 0x38);
  in_ecx[1] = ((float)GEN_TOF(((fVar17 * fVar16 + fVar19 * fVar18) + fVar20 * (float10)fVar2)));
  in_ecx[2] = ((float)GEN_TOF(((float10)fVar3 * (float10)fVar2 + (fVar21 * fVar16 + fVar22 * fVar18))));
  in_ecx[4] = ((float)GEN_TOF(((float10)fVar9 * (float10)fVar8 +
                     ((float10)fVar5 * (float10)fVar4 + (float10)fVar7 * (float10)fVar6))));
  in_ecx[5] = ((float)GEN_TOF(((float10)fVar9 * fVar20 + ((float10)fVar5 * fVar19 + (float10)fVar6 * fVar17))))
  ;
  in_ecx[6] = ((float)GEN_TOF(((float10)fVar9 * (float10)fVar3 +
                     ((float10)fVar5 * fVar22 + (float10)fVar6 * fVar21))));
  in_ecx[8] = ((float)GEN_TOF(((float10)fVar12 * (float10)fVar8 +
                     ((float10)fVar10 * (float10)fVar4 + (float10)fVar11 * (float10)fVar7))));
  in_ecx[9] = ((float)GEN_TOF(((float10)fVar12 * fVar20 +
                     ((float10)fVar10 * fVar19 + (float10)fVar11 * fVar17))));
  in_ecx[10] = ((float)GEN_TOF(((float10)fVar12 * (float10)fVar3 +
                      ((float10)fVar10 * fVar22 + (float10)fVar11 * fVar21))));
  in_ecx[0xc] = ((float)GEN_TOF((((float10)in_ecx[0xe] * (float10)fVar8 +
                        ((float10)in_ecx[0xd] * (float10)fVar4 +
                        (float10)in_ecx[0xc] * (float10)fVar7)) + (float10)fVar13)));
  in_ecx[0xd] = ((float)GEN_TOF(((float10)fVar14 + ((fVar23 * fVar17 + fVar24 * fVar19) + fVar25 * fVar20))));
  *in_ecx = ((float)GEN_TOF(((float10)fVar8 * (float10)fVar2 +
                   ((float10)fVar4 * (float10)fVar1 + (float10)fVar7 * (float10)*in_ecx))));
  in_ecx[0xe] = ((float)GEN_TOF(((fVar25 * (float10)fVar3 + (fVar23 * fVar21 + fVar24 * fVar22)) +
                       (float10)fVar15)));
  return 0;
}

/* ref: FUN_004efc20 */
unsigned int F_004efc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4efc20u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)param_2;
  fVar3 = *(float *)(param_2 + 8);
  fVar17 = (float10)fVar2;
  fVar18 = (float10)in_ecx[1];
  fVar19 = (float10)in_ecx[5];
  fVar20 = (float10)fVar1;
  fVar21 = (float10)in_ecx[9];
  fVar4 = in_ecx[10];
  fVar22 = (float10)in_ecx[2];
  fVar23 = (float10)in_ecx[6];
  fVar5 = *(float *)(param_2 + 0x14);
  fVar6 = in_ecx[4];
  fVar7 = *(float *)(param_2 + 0x10);
  fVar8 = *in_ecx;
  fVar9 = *(float *)(param_2 + 0x18);
  fVar10 = in_ecx[8];
  fVar11 = *(float *)(param_2 + 0x24);
  fVar12 = *(float *)(param_2 + 0x20);
  fVar13 = *(float *)(param_2 + 0x28);
  fVar14 = *(float *)(param_2 + 0x34);
  fVar15 = *(float *)(param_2 + 0x30);
  fVar16 = *(float *)(param_2 + 0x38);
  fVar24 = (float10)fVar15;
  fVar25 = (float10)fVar14;
  fVar26 = (float10)fVar16;
  in_ecx[1] = ((float)GEN_TOF(((fVar18 * fVar17 + fVar20 * fVar19) + fVar21 * (float10)fVar3)));
  in_ecx[2] = ((float)GEN_TOF(((float10)fVar4 * (float10)fVar3 + (fVar22 * fVar17 + fVar23 * fVar20))));
  in_ecx[4] = ((float)GEN_TOF(((float10)fVar10 * (float10)fVar9 +
                     ((float10)fVar6 * (float10)fVar5 + (float10)fVar8 * (float10)fVar7))));
  in_ecx[5] = ((float)GEN_TOF(((float10)fVar9 * fVar21 + ((float10)fVar5 * fVar19 + (float10)fVar7 * fVar18))))
  ;
  in_ecx[6] = ((float)GEN_TOF(((float10)fVar9 * (float10)fVar4 +
                     ((float10)fVar5 * fVar23 + (float10)fVar7 * fVar22))));
  in_ecx[8] = ((float)GEN_TOF(((float10)fVar13 * (float10)fVar10 +
                     ((float10)fVar11 * (float10)fVar6 + (float10)fVar12 * (float10)fVar8))));
  in_ecx[9] = ((float)GEN_TOF(((float10)fVar13 * fVar21 +
                     ((float10)fVar11 * fVar19 + (float10)fVar12 * fVar18))));
  in_ecx[10] = ((float)GEN_TOF(((float10)fVar13 * (float10)fVar4 +
                      ((float10)fVar11 * fVar23 + (float10)fVar12 * fVar22))));
  in_ecx[0xc] = ((float)GEN_TOF((((float10)fVar16 * (float10)fVar10 +
                        ((float10)fVar14 * (float10)fVar6 + (float10)fVar15 * (float10)fVar8)) +
                       (float10)in_ecx[0xc])));
  in_ecx[0xd] = ((float)GEN_TOF(((float10)in_ecx[0xd] +
                       ((fVar24 * fVar18 + fVar25 * fVar19) + fVar26 * fVar21))));
  in_ecx[0xe] = ((float)GEN_TOF(((fVar26 * (float10)fVar4 + (fVar24 * fVar22 + fVar25 * fVar23)) +
                       (float10)in_ecx[0xe])));
  *in_ecx = ((float)GEN_TOF(((float10)fVar10 * (float10)fVar3 +
                   ((float10)fVar6 * (float10)fVar1 + (float10)fVar8 * (float10)fVar2))));
  return 0;
}

/* ref: FUN_004efe70 */
uint F_004efe70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4efe70u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
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
  double dVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  
  fVar13 = (float10)*(float *)param_2;
  fVar14 = (float10)*(double *)&REFG(undefined, 0x1092098);
  fVar15 = (float10)*(float *)(param_2 + 4);
  fVar16 = (float10)*(float *)(param_2 + 8);
  fVar17 = (float10)(float)(fVar15 * fVar14);
  fVar25 = (float10)(float)(fVar16 * fVar14) * fVar16;
  fVar1 = *(float *)(param_2 + 0xc);
  dVar12 = ((double)GEN_TOD(((float10)(float)(fVar16 * fVar14) * (float10)fVar1)));
  fVar14 = (float10)(float)(fVar13 * fVar14);
  fVar26 = (float10)1 - fVar14 * fVar13;
  fVar2 = (float)(fVar26 - fVar17 * fVar15);
  fVar3 = in_ecx[1];
  fVar4 = in_ecx[2];
  fVar18 = (float10)*in_ecx;
  fVar19 = (float10)(float)(fVar14 * fVar15 + (float10)dVar12);
  fVar20 = (float10)fVar3;
  fVar26 = (float10)(float)(fVar26 - fVar25);
  fVar21 = (float10)(float)(fVar17 * fVar16 - (float10)fVar1 * fVar14);
  fVar22 = (float10)((float)GEN_TOF(((float10)(double)(fVar16 * fVar14) - (float10)fVar1 * fVar17)));
  fVar23 = (float10)(float)((float10)fVar1 * fVar14 + fVar17 * fVar16);
  fVar5 = in_ecx[5];
  fVar6 = in_ecx[4];
  fVar7 = in_ecx[6];
  fVar8 = in_ecx[9];
  fVar9 = in_ecx[8];
  fVar10 = in_ecx[10];
  in_ecx[1] = ((float)GEN_TOF(((fVar19 * fVar18 + fVar26 * fVar20) + fVar21 * (float10)fVar4)));
  in_ecx[2] = ((float)GEN_TOF(((float10)fVar4 * (float10)fVar2 + (fVar22 * fVar18 + fVar23 * fVar20))));
  fVar11 = in_ecx[0xe];
  in_ecx[5] = ((float)GEN_TOF(((float10)fVar7 * fVar21 + ((float10)fVar5 * fVar26 + (float10)fVar6 * fVar19))))
  ;
  fVar18 = (float10)in_ecx[0xc];
  in_ecx[6] = ((float)GEN_TOF(((float10)fVar7 * (float10)fVar2 +
                     ((float10)fVar5 * fVar23 + (float10)fVar6 * fVar22))));
  in_ecx[9] = ((float)GEN_TOF(((float10)fVar10 * fVar21 + ((float10)fVar8 * fVar26 + (float10)fVar9 * fVar19)
                     )));
  fVar20 = (float10)in_ecx[0xd];
  in_ecx[10] = ((float)GEN_TOF(((float10)fVar10 * (float10)fVar2 +
                      ((float10)fVar8 * fVar23 + (float10)fVar9 * fVar22))));
  fVar24 = (float10)fVar11;
  fVar15 = (float10)((float)GEN_TOF((((float10)1 - fVar17 * fVar15) - fVar25)));
  fVar13 = (float10)(float)(fVar13 * fVar17 - (float10)dVar12);
  fVar14 = (float10)((float)GEN_TOF(((float10)(double)((float10)fVar1 * fVar17) +
                           (float10)(double)(fVar16 * fVar14))));
  *in_ecx = ((float)GEN_TOF(((fVar15 * (float10)*in_ecx + fVar13 * (float10)fVar3) + fVar14 * (float10)fVar4)))
  ;
  in_ecx[4] = ((float)GEN_TOF(((float10)fVar7 * fVar14 + ((float10)fVar5 * fVar13 + (float10)fVar6 * fVar15))))
  ;
  in_ecx[8] = ((float)GEN_TOF(((float10)fVar10 * fVar14 + ((float10)fVar8 * fVar13 + (float10)fVar9 * fVar15)
                     )));
  in_ecx[0xd] = ((float)GEN_TOF(((fVar18 * fVar19 + fVar20 * fVar26) + fVar24 * fVar21)));
  in_ecx[0xe] = ((float)GEN_TOF(((fVar18 * fVar22 + fVar20 * fVar23) + (float10)fVar2 * fVar24)));
  in_ecx[0xc] = ((float)GEN_TOF(((fVar20 * fVar13 + fVar18 * fVar15) + (float10)fVar11 * fVar14)));
  return (uint)in_ecx;
}

