#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_009e9dc0 */
uint F_009e9dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9e9dc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_009e8920(this);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x11) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x11) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x11);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x11);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x11);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_009e6410(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_009e9e60 */
uint F_009e9e60(unsigned int gen_a0)
{
  GEN_ENTER(0x9e9e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_009e9dc0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_009e9e80 */
unsigned int F_009e9e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9e9e80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 3) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
  }
  return 0;
}

/* ref: FUN_009e9f10 */
uint F_009e9f10(unsigned int gen_a0)
{
  GEN_ENTER(0x9e9f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    for (; puVar2 != puVar1; puVar2 = puVar2 + 3) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,0);
    }
    F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0xc) * 0xc,0xca);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_009e9f70 */
byte F_009e9f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13)
{
  GEN_ENTER(0x9e9f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int param_8 = (int)gen_a8;
  int * param_9 = (int *)(uintptr_t)gen_a9;
  int param_10 = (int)gen_a10;
  int * param_11 = (int *)(uintptr_t)gen_a11;
  undefined2 * param_12 = (undefined2 *)(uintptr_t)gen_a12;
  undefined4 param_13 = (undefined4)gen_a13;
  int iVar1;
  int iVar2;
  
  iVar2 = param_8 * 0x30;
  iVar1 = param_10 * 2;
  if (*(char *)((int)this + 0x70) == '\0') {
    if ((*(uint *)((int)this + 0x78) <
         (uint)(*(int *)((int)this + 0x7c) + *(int *)((int)this + 0x80) + iVar2)) ||
       (*(uint *)((int)this + 0x88) <
        (uint)(*(int *)((int)this + 0x8c) + *(int *)((int)this + 0x90) + iVar1))) {
      F_009bd290(this);
    }
    else if ((*(int *)((int)this + 0x74) != 0) && (*(int *)((int)this + 0x84) != 0)) {
      F_009bd2f0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      if (((char)param_13 == '\0') ||
         ((*(int *)((int)this + 0x8c) + *(int *)((int)this + 0x90) & 0xfU) == 0)) {
        if (0x3fff < (uint)(*(int *)((int)this + 0x7c) + iVar2) / 0x30) {
          F_009bd290(this);
        }
      }
      else {
        F_009bd290(this);
        *(uint *)((int)this + 0x90) = *(int *)((int)this + 0x90) + 0xfU & 0xfffffff0;
      }
      if (iVar2 != 0) {
        *param_9 = *(int *)((int)this + 0x7c) + *(int *)((int)this + 0x80) +
                   *(int *)((int)this + 0x74);
      }
      if (iVar1 != 0) {
        *param_11 = *(int *)((int)this + 0x8c) + *(int *)((int)this + 0x90) +
                    *(int *)((int)this + 0x84);
        *param_12 = (short)(*(uint *)((int)this + 0x7c) / 0x30);
      }
      *(int *)((int)this + 0x7c) = *(int *)((int)this + 0x7c) + iVar2;
      *(int *)((int)this + 0x8c) = *(int *)((int)this + 0x8c) + iVar1;
      *(int *)((int)this + 0x94) = *(int *)((int)this + 0x94) + param_8;
      *(int *)((int)this + 0x98) = *(int *)((int)this + 0x98) + param_10;
      return 1;
    }
  }
  *(int *)((int)this + 0x7c) = *(int *)((int)this + 0x7c) + iVar2;
  *(int *)((int)this + 0x8c) = *(int *)((int)this + 0x8c) + iVar1;
  *(undefined1 *)((int)this + 0x70) = 1;
  if (param_9 != (int *)0x0) {
    *param_9 = 0;
  }
  if (param_11 != (int *)0x0) {
    *param_11 = 0;
  }
  return 0;
}

/* ref: FUN_009ea0d0 */
byte F_009ea0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13)
{
  GEN_ENTER(0x9ea0d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int param_8 = (int)gen_a8;
  int * param_9 = (int *)(uintptr_t)gen_a9;
  int param_10 = (int)gen_a10;
  int * param_11 = (int *)(uintptr_t)gen_a11;
  undefined2 * param_12 = (undefined2 *)(uintptr_t)gen_a12;
  undefined4 param_13 = (undefined4)gen_a13;
  int iVar1;
  int iVar2;
  
  iVar2 = param_8 * 0x30;
  iVar1 = param_10 * 2;
  if (*(char *)((int)this + 0x70) == '\0') {
    if ((*(uint *)((int)this + 0x78) <
         (uint)(*(int *)((int)this + 0x7c) + *(int *)((int)this + 0x80) + iVar2)) ||
       (*(uint *)((int)this + 0x88) <
        (uint)(*(int *)((int)this + 0x8c) + *(int *)((int)this + 0x90) + iVar1))) {
      F_009bd290(this);
    }
    else if ((*(int *)((int)this + 0x74) != 0) && (*(int *)((int)this + 0x84) != 0)) {
      F_009bd2f0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      if (((char)param_13 == '\0') ||
         ((*(int *)((int)this + 0x8c) + *(int *)((int)this + 0x90) & 0xfU) == 0)) {
        if (0x3fff < (uint)(*(int *)((int)this + 0x7c) + iVar2) / 0x30) {
          F_009bd290(this);
        }
      }
      else {
        F_009bd290(this);
        *(uint *)((int)this + 0x90) = *(int *)((int)this + 0x90) + 0xfU & 0xfffffff0;
      }
      if (iVar2 != 0) {
        *param_9 = *(int *)((int)this + 0x7c) + *(int *)((int)this + 0x80) +
                   *(int *)((int)this + 0x74);
      }
      if (iVar1 != 0) {
        *param_11 = *(int *)((int)this + 0x8c) + *(int *)((int)this + 0x90) +
                    *(int *)((int)this + 0x84);
        *param_12 = (short)(*(uint *)((int)this + 0x7c) / 0x30);
      }
      *(int *)((int)this + 0x7c) = *(int *)((int)this + 0x7c) + iVar2;
      *(int *)((int)this + 0x8c) = *(int *)((int)this + 0x8c) + iVar1;
      *(int *)((int)this + 0x94) = *(int *)((int)this + 0x94) + param_8;
      *(int *)((int)this + 0x98) = *(int *)((int)this + 0x98) + param_10;
      return 1;
    }
  }
  *(int *)((int)this + 0x7c) = *(int *)((int)this + 0x7c) + iVar2;
  *(int *)((int)this + 0x8c) = *(int *)((int)this + 0x8c) + iVar1;
  *(undefined1 *)((int)this + 0x70) = 1;
  if (param_9 != (int *)0x0) {
    *param_9 = 0;
  }
  if (param_11 != (int *)0x0) {
    *param_11 = 0;
  }
  return 0;
}

/* ref: FUN_009ea230 */
uint F_009ea230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ea230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,0xcf);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
  }
  F_009e8a50(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_009ea290 */
uint F_009ea290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ea290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,0xd0);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
  }
  F_009e8b30(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_009ea2f0 */
uint F_009ea2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9ea2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_009e7260(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_009ea320 */
unsigned int F_009ea320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ea320u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009ea350 */
unsigned int F_009ea350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ea350u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 0x29; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 0x29;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_009ea390 */
unsigned int F_009ea390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9ea390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_009e7310(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return 0;
}

/* ref: FUN_009ea3c0 */
unsigned int F_009ea3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ea3c0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009ea3f0 */
unsigned int F_009ea3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ea3f0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009ea420 */
unsigned int F_009ea420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ea420u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009ea450 */
unsigned int F_009ea450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ea450u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009ea480 */
unsigned int F_009ea480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ea480u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009ea4b0 */
unsigned int F_009ea4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ea4b0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009ea4e0 */
unsigned int F_009ea4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ea4e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009ea510 */
unsigned int F_009ea510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ea510u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009ea540 */
uint F_009ea540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9ea540u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    if (param_4 != (int *)0x0) {
      F_00406810(param_4);
    }
                    
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
      goto LAB_009ea5aa;
    }
    param_3[2] = param_4;
    iVar4 = *(int *)((int)this + 4);
    if (param_3 != *(undefined4 * PTR32 *)(iVar4 + 8)) goto LAB_009ea5aa;
  }
  *(int * PTR32 *)(iVar4 + 8) = param_4;
LAB_009ea5aa: ;
  cVar1 = *(char *)(param_4[1] + 0x28);
  piVar3 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar4 + 0x28) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar3[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar4 = piVar6[2];
      if (*(char *)(iVar4 + 0x28) == '\0') {
        *(undefined1 *)(piVar5 + 10) = 1;
        *(undefined1 *)(iVar4 + 0x28) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x28))) = 0;
        piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
      }
      else {
        if (piVar3 == (int *)piVar5[2]) {
          piVar3 = (int *)piVar5[2];
          piVar5[2] = *piVar3;
          if (*(char *)(*piVar3 + 0x29) == '\0') {
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
        *(undefined1 *)(piVar3[1] + 0x28) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x28))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x29) == '\0') {
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
LAB_009ea73d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar4 = *piVar6;
      if (*(char *)(iVar4 + 0x28) != '\0') {
        if (piVar3 == (int *)*piVar5) {
          iVar4 = *piVar5;
          *piVar5 = *(int *)(iVar4 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar4 + 8) + 0x29))) == '\0') {
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
        *(undefined1 *)(piVar3[1] + 0x28) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x28))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x29) == '\0') {
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
        goto LAB_009ea73d;
      }
      *(undefined1 *)(piVar5 + 10) = 1;
      *(undefined1 *)(iVar4 + 0x28) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x28))) = 0;
      piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
    }
    cVar1 = *(char *)(piVar3[1] + 0x28);
  } while( true );
}

/* ref: FUN_009ea770 */
uint F_009ea770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9ea770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_009e8fa0(param_1,param_2,param_3,param_4,in_ECX);
  return uVar1;
}

/* ref: FUN_009ea7a0 */
unsigned int F_009ea7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ea7a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009ea7d0 */
uint F_009ea7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9ea7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float fVar1;
  float fVar2;
  int iVar3;
  float * pfVar4;
  float * pfVar5;
  float * pfVar6;
  float * pfVar7;
  float * pfVar8;
  float * pfVar9;
  float10 fVar10;
  float10 fVar11;
  float * local_8;
  
  pfVar9 = param_2 + (((int)param_3 - (int)((int)(uintptr_t)param_2) >> 3) - ((int)param_3 - (int)((int)(uintptr_t)param_2) >> 0x1f) >>
                     1) * 2;
  F_009e9020(param_2,pfVar9,param_3 + -2,param_4,param_5);
  pfVar4 = pfVar9 + 2;
  for (; param_2 < pfVar9; pfVar9 = pfVar9 + -2) {
    fVar10 = (float10)pfVar9[-2];
    fVar11 = (float10)*pfVar9;
    if (((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar10)) && !(fVar11 <= fVar10)) ||
       ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11))) break;
  }
  pfVar8 = pfVar4;
  local_8 = pfVar9;
  if (pfVar4 < param_3) {
    iVar3 = (int)param_3 + (7 - (int)pfVar4);
    if (3 < (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3) {
      fVar10 = (float10)*pfVar9;
      do {
        fVar11 = (float10)*pfVar4;
        pfVar8 = pfVar4;
        if (((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) ||
           ((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar10)) && !(fVar11 <= fVar10))) goto LAB_009ea920;
        fVar11 = (float10)pfVar4[2];
        if (((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) ||
           ((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar10)) && !(fVar11 <= fVar10))) {
          pfVar4 = pfVar4 + 2;
          pfVar8 = pfVar4;
          goto LAB_009ea920;
        }
        fVar11 = (float10)pfVar4[4];
        if (((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) ||
           ((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar10)) && !(fVar11 <= fVar10))) {
          pfVar4 = pfVar4 + 4;
          pfVar8 = pfVar4;
          goto LAB_009ea920;
        }
        fVar11 = (float10)pfVar4[6];
        if (((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) ||
           ((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar10)) && !(fVar11 <= fVar10))) {
          pfVar4 = pfVar4 + 6;
          pfVar8 = pfVar4;
          goto LAB_009ea920;
        }
        pfVar4 = pfVar4 + 8;
      } while ((int)pfVar4 < (int)(param_3 + -6));
    }
    pfVar8 = pfVar4;
    if (pfVar4 < param_3) {
      fVar10 = (float10)*pfVar9;
      do {
        fVar11 = (float10)*pfVar4;
        pfVar8 = pfVar4;
        if (((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) ||
           ((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar10)) && !(fVar11 <= fVar10))) break;
        pfVar4 = pfVar4 + 2;
        pfVar8 = pfVar4;
      } while (pfVar4 < param_3);
    }
  }
LAB_009ea920: ;
  pfVar6 = local_8;
  pfVar7 = local_8;
  if (pfVar8 < param_3) {
    iVar3 = (int)param_3 + (7 - (int)pfVar8);
    if (3 < (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3) {
      pfVar5 = pfVar8 + 4;
      do {
        fVar10 = (float10)*pfVar9;
        fVar11 = (float10)*pfVar8;
        if (!(fVar10 < fVar11)) {
          if ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) goto joined_r0x009eaafe;
          fVar1 = *pfVar4;
          fVar2 = pfVar4[1];
          *pfVar4 = *pfVar8;
          pfVar4[1] = pfVar8[1];
          *pfVar8 = fVar1;
          pfVar4 = pfVar4 + 2;
          pfVar8[1] = fVar2;
        }
        fVar10 = (float10)*pfVar9;
        fVar11 = (float10)pfVar5[-2];
        if (!(fVar10 < fVar11)) {
          if ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) {
            pfVar8 = pfVar8 + 2;
            goto joined_r0x009eaafe;
          }
          fVar1 = *pfVar4;
          fVar2 = pfVar4[1];
          *pfVar4 = pfVar5[-2];
          pfVar4[1] = pfVar5[-1];
          pfVar5[-2] = fVar1;
          pfVar4 = pfVar4 + 2;
          pfVar5[-1] = fVar2;
        }
        fVar10 = (float10)*pfVar9;
        fVar11 = (float10)*pfVar5;
        if (!(fVar10 < fVar11)) {
          if ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) {
            pfVar8 = pfVar8 + 4;
            goto joined_r0x009eaafe;
          }
          fVar1 = *pfVar4;
          fVar2 = pfVar4[1];
          *pfVar4 = *pfVar5;
          pfVar4[1] = pfVar5[1];
          *pfVar5 = fVar1;
          pfVar4 = pfVar4 + 2;
          pfVar5[1] = fVar2;
        }
        fVar10 = (float10)*pfVar9;
        fVar11 = (float10)pfVar5[2];
        if (!(fVar10 < fVar11)) {
          if ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) {
            pfVar8 = pfVar8 + 6;
            goto joined_r0x009eaafe;
          }
          fVar1 = *pfVar4;
          fVar2 = pfVar4[1];
          *pfVar4 = pfVar5[2];
          pfVar4[1] = pfVar5[3];
          pfVar5[2] = fVar1;
          pfVar4 = pfVar4 + 2;
          pfVar5[3] = fVar2;
        }
        pfVar8 = pfVar8 + 8;
        pfVar5 = pfVar5 + 8;
      } while ((int)pfVar8 < (int)(param_3 + -6));
    }
    for (; pfVar8 < param_3; pfVar8 = pfVar8 + 2) {
      fVar10 = (float10)*pfVar9;
      fVar11 = (float10)*pfVar8;
      if (!(fVar10 < fVar11)) {
        if ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) break;
        fVar1 = pfVar4[1];
        fVar2 = *pfVar4;
        *pfVar4 = *pfVar8;
        pfVar4[1] = pfVar8[1];
        *pfVar8 = fVar2;
        pfVar4 = pfVar4 + 2;
        pfVar8[1] = fVar1;
      }
    }
  }
joined_r0x009eaafe: ;
  do {
    if (pfVar6 <= param_2) break;
    pfVar5 = pfVar7 + -2;
    fVar10 = (float10)*pfVar5;
    fVar11 = (float10)*pfVar9;
    if (!(fVar10 < fVar11)) {
      if ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) break;
      fVar1 = pfVar9[-2];
      fVar2 = pfVar9[-1];
      pfVar9[-2] = *pfVar5;
      pfVar9[-1] = pfVar7[-1];
      *pfVar5 = fVar1;
      pfVar7[-1] = fVar2;
      pfVar9 = pfVar9 + -2;
    }
    pfVar6 = pfVar6 + -2;
    pfVar7 = pfVar5;
  } while( true );
  if (pfVar6 == param_2) {
    if (pfVar8 == param_3) {
      *param_1 = pfVar9;
      param_1[1] = pfVar4;
      return (uint)param_1;
    }
    if (pfVar4 != pfVar8) {
      fVar1 = *pfVar9;
      fVar2 = pfVar9[1];
      *pfVar9 = *pfVar4;
      pfVar9[1] = pfVar4[1];
      *pfVar4 = fVar1;
      pfVar4[1] = fVar2;
    }
    fVar1 = *pfVar9;
    fVar2 = pfVar9[1];
    *pfVar9 = *pfVar8;
    pfVar9[1] = pfVar8[1];
    *pfVar8 = fVar1;
    pfVar8[1] = fVar2;
    pfVar4 = pfVar4 + 2;
    pfVar8 = pfVar8 + 2;
    pfVar9 = pfVar9 + 2;
    local_8 = pfVar6;
  }
  else {
    pfVar7 = pfVar6 + -2;
    local_8 = pfVar7;
    if (pfVar8 == param_3) {
      pfVar5 = pfVar9 + -2;
      if (pfVar7 != pfVar5) {
        fVar1 = pfVar6[-1];
        fVar2 = *pfVar7;
        *pfVar7 = *pfVar5;
        pfVar6[-1] = pfVar9[-1];
        *pfVar5 = fVar2;
        pfVar9[-1] = fVar1;
      }
      fVar1 = pfVar9[-1];
      fVar2 = *pfVar5;
      pfVar6 = pfVar4 + -2;
      *pfVar5 = *pfVar6;
      pfVar9[-1] = pfVar4[-1];
      *pfVar6 = fVar2;
      pfVar4[-1] = fVar1;
      pfVar4 = pfVar6;
      pfVar9 = pfVar5;
    }
    else {
      fVar1 = pfVar8[1];
      fVar2 = *pfVar8;
      *pfVar8 = *pfVar7;
      pfVar8[1] = pfVar6[-1];
      *pfVar7 = fVar2;
      pfVar6[-1] = fVar1;
      pfVar8 = pfVar8 + 2;
    }
  }
  goto LAB_009ea920;
}

/* ref: FUN_009eac40 */
unsigned int F_009eac40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9eac40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_009e90e0(param_1,param_2,param_3,param_4,0);
  return 0;
}

/* ref: FUN_009eac60 */
uint F_009eac60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9eac60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float fVar1;
  float fVar2;
  int iVar3;
  float * pfVar4;
  float * pfVar5;
  float * pfVar6;
  float * pfVar7;
  float * pfVar8;
  float * pfVar9;
  float10 fVar10;
  float10 fVar11;
  float * local_8;
  
  pfVar9 = param_2 + (((int)param_3 - (int)((int)(uintptr_t)param_2) >> 3) - ((int)param_3 - (int)((int)(uintptr_t)param_2) >> 0x1f) >>
                     1) * 2;
  F_009e9170(param_2,pfVar9,param_3 + -2,param_4,param_5);
  pfVar4 = pfVar9 + 2;
  for (; param_2 < pfVar9; pfVar9 = pfVar9 + -2) {
    fVar10 = (float10)pfVar9[-2];
    fVar11 = (float10)*pfVar9;
    if (((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar10)) && !(fVar11 <= fVar10)) ||
       ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11))) break;
  }
  pfVar8 = pfVar4;
  local_8 = pfVar9;
  if (pfVar4 < param_3) {
    iVar3 = (int)param_3 + (7 - (int)pfVar4);
    if (3 < (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3) {
      fVar10 = (float10)*pfVar9;
      do {
        fVar11 = (float10)*pfVar4;
        pfVar8 = pfVar4;
        if (((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) ||
           ((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar10)) && !(fVar11 <= fVar10))) goto LAB_009eadb0;
        fVar11 = (float10)pfVar4[2];
        if (((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) ||
           ((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar10)) && !(fVar11 <= fVar10))) {
          pfVar4 = pfVar4 + 2;
          pfVar8 = pfVar4;
          goto LAB_009eadb0;
        }
        fVar11 = (float10)pfVar4[4];
        if (((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) ||
           ((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar10)) && !(fVar11 <= fVar10))) {
          pfVar4 = pfVar4 + 4;
          pfVar8 = pfVar4;
          goto LAB_009eadb0;
        }
        fVar11 = (float10)pfVar4[6];
        if (((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) ||
           ((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar10)) && !(fVar11 <= fVar10))) {
          pfVar4 = pfVar4 + 6;
          pfVar8 = pfVar4;
          goto LAB_009eadb0;
        }
        pfVar4 = pfVar4 + 8;
      } while ((int)pfVar4 < (int)(param_3 + -6));
    }
    pfVar8 = pfVar4;
    if (pfVar4 < param_3) {
      fVar10 = (float10)*pfVar9;
      do {
        fVar11 = (float10)*pfVar4;
        pfVar8 = pfVar4;
        if (((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) ||
           ((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar10)) && !(fVar11 <= fVar10))) break;
        pfVar4 = pfVar4 + 2;
        pfVar8 = pfVar4;
      } while (pfVar4 < param_3);
    }
  }
LAB_009eadb0: ;
  pfVar6 = local_8;
  pfVar7 = local_8;
  if (pfVar8 < param_3) {
    iVar3 = (int)param_3 + (7 - (int)pfVar8);
    if (3 < (int)(iVar3 + (iVar3 >> 0x1f & 7U)) >> 3) {
      pfVar5 = pfVar8 + 4;
      do {
        fVar10 = (float10)*pfVar9;
        fVar11 = (float10)*pfVar8;
        if (!(fVar10 < fVar11)) {
          if ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) goto joined_r0x009eaf8e;
          fVar1 = *pfVar4;
          fVar2 = pfVar4[1];
          *pfVar4 = *pfVar8;
          pfVar4[1] = pfVar8[1];
          *pfVar8 = fVar1;
          pfVar4 = pfVar4 + 2;
          pfVar8[1] = fVar2;
        }
        fVar10 = (float10)*pfVar9;
        fVar11 = (float10)pfVar5[-2];
        if (!(fVar10 < fVar11)) {
          if ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) {
            pfVar8 = pfVar8 + 2;
            goto joined_r0x009eaf8e;
          }
          fVar1 = *pfVar4;
          fVar2 = pfVar4[1];
          *pfVar4 = pfVar5[-2];
          pfVar4[1] = pfVar5[-1];
          pfVar5[-2] = fVar1;
          pfVar4 = pfVar4 + 2;
          pfVar5[-1] = fVar2;
        }
        fVar10 = (float10)*pfVar9;
        fVar11 = (float10)*pfVar5;
        if (!(fVar10 < fVar11)) {
          if ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) {
            pfVar8 = pfVar8 + 4;
            goto joined_r0x009eaf8e;
          }
          fVar1 = *pfVar4;
          fVar2 = pfVar4[1];
          *pfVar4 = *pfVar5;
          pfVar4[1] = pfVar5[1];
          *pfVar5 = fVar1;
          pfVar4 = pfVar4 + 2;
          pfVar5[1] = fVar2;
        }
        fVar10 = (float10)*pfVar9;
        fVar11 = (float10)pfVar5[2];
        if (!(fVar10 < fVar11)) {
          if ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) {
            pfVar8 = pfVar8 + 6;
            goto joined_r0x009eaf8e;
          }
          fVar1 = *pfVar4;
          fVar2 = pfVar4[1];
          *pfVar4 = pfVar5[2];
          pfVar4[1] = pfVar5[3];
          pfVar5[2] = fVar1;
          pfVar4 = pfVar4 + 2;
          pfVar5[3] = fVar2;
        }
        pfVar8 = pfVar8 + 8;
        pfVar5 = pfVar5 + 8;
      } while ((int)pfVar8 < (int)(param_3 + -6));
    }
    for (; pfVar8 < param_3; pfVar8 = pfVar8 + 2) {
      fVar10 = (float10)*pfVar9;
      fVar11 = (float10)*pfVar8;
      if (!(fVar10 < fVar11)) {
        if ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) break;
        fVar1 = pfVar4[1];
        fVar2 = *pfVar4;
        *pfVar4 = *pfVar8;
        pfVar4[1] = pfVar8[1];
        *pfVar8 = fVar2;
        pfVar4 = pfVar4 + 2;
        pfVar8[1] = fVar1;
      }
    }
  }
joined_r0x009eaf8e: ;
  do {
    if (pfVar6 <= param_2) break;
    pfVar5 = pfVar7 + -2;
    fVar10 = (float10)*pfVar5;
    fVar11 = (float10)*pfVar9;
    if (!(fVar10 < fVar11)) {
      if ((!GEN_ISNAN(fVar10) && !GEN_ISNAN(fVar11)) && !(fVar10 <= fVar11)) break;
      fVar1 = pfVar9[-2];
      fVar2 = pfVar9[-1];
      pfVar9[-2] = *pfVar5;
      pfVar9[-1] = pfVar7[-1];
      *pfVar5 = fVar1;
      pfVar7[-1] = fVar2;
      pfVar9 = pfVar9 + -2;
    }
    pfVar6 = pfVar6 + -2;
    pfVar7 = pfVar5;
  } while( true );
  if (pfVar6 == param_2) {
    if (pfVar8 == param_3) {
      *param_1 = pfVar9;
      param_1[1] = pfVar4;
      return (uint)param_1;
    }
    if (pfVar4 != pfVar8) {
      fVar1 = *pfVar9;
      fVar2 = pfVar9[1];
      *pfVar9 = *pfVar4;
      pfVar9[1] = pfVar4[1];
      *pfVar4 = fVar1;
      pfVar4[1] = fVar2;
    }
    fVar1 = *pfVar9;
    fVar2 = pfVar9[1];
    *pfVar9 = *pfVar8;
    pfVar9[1] = pfVar8[1];
    *pfVar8 = fVar1;
    pfVar8[1] = fVar2;
    pfVar4 = pfVar4 + 2;
    pfVar8 = pfVar8 + 2;
    pfVar9 = pfVar9 + 2;
    local_8 = pfVar6;
  }
  else {
    pfVar7 = pfVar6 + -2;
    local_8 = pfVar7;
    if (pfVar8 == param_3) {
      pfVar5 = pfVar9 + -2;
      if (pfVar7 != pfVar5) {
        fVar1 = pfVar6[-1];
        fVar2 = *pfVar7;
        *pfVar7 = *pfVar5;
        pfVar6[-1] = pfVar9[-1];
        *pfVar5 = fVar2;
        pfVar9[-1] = fVar1;
      }
      fVar1 = pfVar9[-1];
      fVar2 = *pfVar5;
      pfVar6 = pfVar4 + -2;
      *pfVar5 = *pfVar6;
      pfVar9[-1] = pfVar4[-1];
      *pfVar6 = fVar2;
      pfVar4[-1] = fVar1;
      pfVar4 = pfVar6;
      pfVar9 = pfVar5;
    }
    else {
      fVar1 = pfVar8[1];
      fVar2 = *pfVar8;
      *pfVar8 = *pfVar7;
      pfVar8[1] = pfVar6[-1];
      *pfVar7 = fVar2;
      pfVar6[-1] = fVar1;
      pfVar8 = pfVar8 + 2;
    }
  }
  goto LAB_009eadb0;
}

/* ref: FUN_009eb0d0 */
unsigned int F_009eb0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9eb0d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_009e9230(param_1,param_2,param_3,param_4,0);
  return 0;
}

/* ref: FUN_009eb0f0 */
uint F_009eb0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x9eb0f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  uint * puVar6;
  uint * puVar7;
  uint * puVar8;
  uint * puVar9;
  uint * puVar10;
  uint * puVar11;
  uint * local_c;
  
  local_c = param_2 + (((int)param_3 - (int)((int)(uintptr_t)param_2) >> 4) - ((int)param_3 - (int)((int)(uintptr_t)param_2) >> 0x1f) >>
                      1) * 4;
  F_009e92c0(param_2,local_c,param_3 + -4,param_4,param_5,param_6,param_7);
  puVar9 = local_c + 4;
  for (; param_2 < local_c; local_c = local_c + -4) {
    uVar1 = local_c[-3];
    uVar2 = local_c[1];
    if ((uVar1 < uVar2) ||
       ((((uVar1 == uVar2 && (local_c[-4] < *local_c)) || (uVar2 < uVar1)) ||
        ((uVar2 == uVar1 && (*local_c < local_c[-4])))))) break;
  }
  puVar10 = puVar9;
  puVar11 = local_c;
  puVar5 = local_c;
  if (puVar9 < param_3) {
    uVar1 = local_c[1];
    while( true ) {
      uVar2 = puVar9[1];
      puVar10 = puVar9;
      if (((uVar2 < uVar1) || ((uVar2 == uVar1 && (*puVar9 < *local_c)))) || (uVar1 < uVar2)) break;
      if (((uVar1 == uVar2) && (*local_c < *puVar9)) ||
         (puVar9 = puVar9 + 4, puVar10 = puVar9, param_3 <= puVar9)) break;
    }
  }
joined_r0x009eb1a3: ;
  do {
    puVar7 = puVar11;
    if (param_3 <= puVar9) {
joined_r0x009eb219: ;
      while (param_2 < puVar11) {
        puVar8 = puVar7 + -4;
        puVar6 = puVar5;
        if ((puVar5[1] <= puVar7[-3]) && ((puVar7[-3] != puVar5[1] || (*puVar5 <= *puVar8)))) {
          puVar11 = local_c;
          if ((puVar5[1] < puVar7[-3]) || ((puVar5[1] == puVar7[-3] && (*puVar5 < *puVar8)))) break;
          uVar1 = puVar5[-3];
          uVar2 = puVar5[-4];
          puVar6 = puVar5 + -4;
          uVar3 = puVar5[-2];
          uVar4 = puVar5[-1];
          *puVar6 = *puVar8;
          puVar5[-3] = puVar7[-3];
          puVar5[-2] = puVar7[-2];
          puVar5[-1] = puVar7[-1];
          *puVar8 = uVar2;
          puVar7[-3] = uVar1;
          puVar7[-2] = uVar3;
          puVar7[-1] = uVar4;
        }
        local_c = local_c + -4;
        puVar7 = puVar8;
        puVar5 = puVar6;
        puVar11 = local_c;
      }
      if (puVar11 == param_2) {
        if (puVar9 == param_3) {
          param_1[1] = puVar10;
          *param_1 = puVar5;
          return (uint)param_1;
        }
        if (puVar10 != puVar9) {
          uVar1 = puVar5[1];
          uVar2 = *puVar5;
          uVar3 = puVar5[2];
          uVar4 = puVar5[3];
          *puVar5 = *puVar10;
          puVar5[1] = puVar10[1];
          puVar5[2] = puVar10[2];
          puVar5[3] = puVar10[3];
          *puVar10 = uVar2;
          puVar10[1] = uVar1;
          puVar10[2] = uVar3;
          puVar10[3] = uVar4;
        }
        uVar1 = *puVar5;
        uVar2 = puVar5[1];
        uVar3 = puVar5[2];
        uVar4 = puVar5[3];
        *puVar5 = *puVar9;
        puVar5[1] = puVar9[1];
        puVar5[2] = puVar9[2];
        puVar5[3] = puVar9[3];
        *puVar9 = uVar1;
        puVar9[1] = uVar2;
        puVar9[2] = uVar3;
        puVar9[3] = uVar4;
        puVar9 = puVar9 + 4;
        puVar10 = puVar10 + 4;
        puVar5 = puVar5 + 4;
      }
      else {
        local_c = puVar11 + -4;
        if (puVar9 == param_3) {
          puVar7 = puVar5 + -4;
          if (local_c != puVar7) {
            uVar1 = puVar11[-3];
            uVar2 = *local_c;
            uVar3 = puVar11[-2];
            uVar4 = puVar11[-1];
            *local_c = *puVar7;
            puVar11[-3] = puVar5[-3];
            puVar11[-2] = puVar5[-2];
            puVar11[-1] = puVar5[-1];
            *puVar7 = uVar2;
            puVar5[-3] = uVar1;
            puVar5[-2] = uVar3;
            puVar5[-1] = uVar4;
          }
          uVar1 = puVar5[-3];
          uVar2 = *puVar7;
          uVar3 = puVar5[-2];
          puVar11 = puVar10 + -4;
          uVar4 = puVar5[-1];
          *puVar7 = *puVar11;
          puVar5[-3] = puVar10[-3];
          puVar5[-2] = puVar10[-2];
          puVar5[-1] = puVar10[-1];
          *puVar11 = uVar2;
          puVar10[-3] = uVar1;
          puVar10[-2] = uVar3;
          puVar10[-1] = uVar4;
          puVar10 = puVar11;
          puVar11 = local_c;
          puVar5 = puVar7;
        }
        else {
          uVar1 = puVar9[1];
          uVar2 = *puVar9;
          uVar3 = puVar9[2];
          uVar4 = puVar9[3];
          *puVar9 = *local_c;
          puVar9[1] = puVar11[-3];
          puVar9[2] = puVar11[-2];
          puVar9[3] = puVar11[-1];
          *local_c = uVar2;
          puVar11[-3] = uVar1;
          puVar11[-2] = uVar3;
          puVar11[-1] = uVar4;
          puVar9 = puVar9 + 4;
          puVar11 = local_c;
        }
      }
      goto joined_r0x009eb1a3;
    }
    if ((puVar9[1] <= puVar5[1]) && ((puVar5[1] != puVar9[1] || (*puVar9 <= *puVar5)))) {
      if ((puVar9[1] < puVar5[1]) || ((puVar9[1] == puVar5[1] && (*puVar9 < *puVar5))))
      goto joined_r0x009eb219;
      uVar1 = *puVar10;
      uVar2 = puVar10[1];
      uVar3 = puVar10[2];
      uVar4 = puVar10[3];
      *puVar10 = *puVar9;
      puVar10[1] = puVar9[1];
      puVar10[2] = puVar9[2];
      puVar10[3] = puVar9[3];
      *puVar9 = uVar1;
      puVar9[1] = uVar2;
      puVar9[2] = uVar3;
      puVar10 = puVar10 + 4;
      puVar9[3] = uVar4;
    }
    puVar9 = puVar9 + 4;
  } while( true );
}

/* ref: FUN_009eb450 */
uint F_009eb450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x9eb450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_009e93e0(param_1,param_2);
  return uVar1;
}

/* ref: FUN_009eb490 */
unsigned int F_009eb490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9eb490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar2 = param_2 - (int)param_1;
  if (8 < (int)(uVar2 & 0xfffffff8)) {
    puVar3 = (undefined4 *)(param_2 + -8);
    do {
      uVar1 = puVar3[1];
      (*(undefined4 *)(gen_frame + 0x4)) = *puVar3;
      (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      F_009e3d60(param_1,0,(int)(uVar2 - 8) >> 3,&(*(undefined4 *)(gen_frame + 0x4)),param_3,param_4);
      puVar3 = puVar3 + -2;
      uVar2 = (int)puVar3 + (8 - (int)param_1);
    } while (8 < (int)(uVar2 & 0xfffffff8));
  }
  return 0;
}

/* ref: FUN_009eb500 */
unsigned int F_009eb500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9eb500u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  uVar2 = param_2 - (int)param_1;
  if (8 < (int)(uVar2 & 0xfffffff8)) {
    puVar3 = (undefined4 *)(param_2 + -8);
    do {
      uVar1 = puVar3[1];
      (*(undefined4 *)(gen_frame + 0x4)) = *puVar3;
      (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      F_009e3e40(param_1,0,(int)(uVar2 - 8) >> 3,&(*(undefined4 *)(gen_frame + 0x4)),param_3,param_4);
      puVar3 = puVar3 + -2;
      uVar2 = (int)puVar3 + (8 - (int)param_1);
    } while (8 < (int)(uVar2 & 0xfffffff8));
  }
  return 0;
}

/* ref: FUN_009eb570 */
uint F_009eb570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x9eb570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  uVar3 = param_2 - (int)param_1;
  uVar2 = param_2;
  if (0x10 < (int)(uVar3 & 0xfffffff0)) {
    puVar4 = (undefined4 *)(param_2 - 0x10);
    do {
      uVar1 = puVar4[1];
      (*(undefined4 *)(gen_frame + 0xc)) = *puVar4;
      (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x14)) = puVar4[2];
      *puVar4 = *param_1;
      (*(undefined4 *)(gen_frame + 0x18)) = puVar4[3];
      puVar4[1] = param_1[1];
      puVar4[2] = param_1[2];
      puVar4[3] = param_1[3];
      uVar2 = F_009e3f40(param_1,0,(int)(uVar3 - 0x10) >> 4,&(*(undefined4 *)(gen_frame + 0xc)),param_3,param_4,param_5,
                           param_6);
      puVar4 = puVar4 + -4;
      uVar3 = (int)puVar4 + (0x10 - (int)param_1);
    } while (0x10 < (int)(uVar3 & 0xfffffff0));
  }
  return uVar2;
}

/* ref: FUN_009eb610 */
uint F_009eb610(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009eb640 */
uint F_009eb640(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009eb670 */
uint F_009eb670(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009eb6a0 */
uint F_009eb6a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb6a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009eb6d0 */
uint F_009eb6d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb6d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009eb700 */
uint F_009eb700(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009eb730 */
uint F_009eb730(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009eb760 */
uint F_009eb760(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf1 */
byte F_009eb790(void)
{
  GEN_ENTER(0x9eb790u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf17 */
uint F_009eb7a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb7a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x108);
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf18 */
unsigned int F_009eb7b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb7b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(int *)(in_ecx + 0x108) = *(int *)(in_ecx + 0x108) + 1;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf19 */
unsigned int F_009eb7c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb7c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(int *)(in_ecx + 0x108) = *(int *)(in_ecx + 0x108) + -1;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf28 */
byte F_009eb7d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb7d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0xac);
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf29 */
unsigned int F_009eb7e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb7e0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf30 */
unsigned int F_009eb7f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb7f0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf31 */
unsigned int F_009eb800(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb800u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf32 */
unsigned int F_009eb810(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb810u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf33 */
unsigned int F_009eb820(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb820u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf34 */
unsigned int F_009eb830(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb830u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf35 */
unsigned int F_009eb840(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb840u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf36 */
unsigned int F_009eb850(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb850u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf37 */
unsigned int F_009eb860(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb860u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf38 */
unsigned int F_009eb870(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb870u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf39 */
unsigned int F_009eb880(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb880u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf40 */
unsigned int F_009eb890(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb890u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf41 */
unsigned int F_009eb8a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb8a0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf42 */
unsigned int F_009eb8b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb8b0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf43 */
unsigned int F_009eb8c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb8c0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf44 */
unsigned int F_009eb8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb8d0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf45 */
unsigned int F_009eb8e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb8e0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf46 */
unsigned int F_009eb8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb8f0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf47 */
unsigned int F_009eb900(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb900u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf48 */
unsigned int F_009eb910(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb910u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf49 */
unsigned int F_009eb920(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb920u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf50 */
unsigned int F_009eb930(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb930u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf51 */
byte F_009eb940(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb940u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x88);
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf52 */
byte F_009eb950(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb950u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x89);
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf53 */
byte F_009eb960(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb960u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x8a);
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf54 */
byte F_009eb970(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb970u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x8b);
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf55 */
byte F_009eb980(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb980u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x8c);
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf56 */
unsigned int F_009eb990(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb990u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf57 */
unsigned int F_009eb9a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb9a0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf58 */
uint F_009eb9b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb9b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x98);
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf59 */
uint F_009eb9c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb9c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x9c);
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf60 */
uint F_009eb9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb9d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xa0);
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf61 */
uint F_009eb9e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb9e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xa4);
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf62 */
uint F_009eb9f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eb9f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xa8);
}

/* ref: FUN_009eba00 */
uint F_009eba00(unsigned int gen_a0)
{
  GEN_ENTER(0x9eba00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Color1::vf3 */
byte F_009eba30(unsigned int gen_a0)
{
  GEN_ENTER(0x9eba30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Color1::vf4 */
byte F_009eba40(unsigned int gen_a0)
{
  GEN_ENTER(0x9eba40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 5);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Color1::vf5 */
byte F_009eba50(unsigned int gen_a0)
{
  GEN_ENTER(0x9eba50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 6);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Color1::vf6 */
byte F_009eba60(unsigned int gen_a0)
{
  GEN_ENTER(0x9eba60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 7);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Color1::vf7 */
uint F_009eba70(unsigned int gen_a0)
{
  GEN_ENTER(0x9eba70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Color1::vf8 */
byte F_009eba80(unsigned int gen_a0)
{
  GEN_ENTER(0x9eba80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0xc);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Color1::vf9 */
byte F_009eba90(unsigned int gen_a0)
{
  GEN_ENTER(0x9eba90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0xd);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Color1::vf10 */
uint F_009ebaa0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebaa0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Color1::vf11 */
uint F_009ebab0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebab0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Color1::vf12 */
uint F_009ebac0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebac0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Color1::vf1 */
uint F_009ebad0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebad0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20;
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Color2::vf2 */
byte F_009ebae0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebae0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Color2::vf3 */
byte F_009ebaf0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebaf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 5);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Color2::vf4 */
byte F_009ebb00(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebb00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 6);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Color2::vf11 */
byte F_009ebb10(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebb10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 7);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Color2::vf5 */
uint F_009ebb20(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebb20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Color2::vf6 */
uint F_009ebb30(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebb30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Color2::vf7 */
uint F_009ebb40(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebb40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Color2::vf8 */
uint F_009ebb50(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebb50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Color2::vf9 */
uint F_009ebb60(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebb60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Color2::vf10 */
uint F_009ebb70(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebb70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Normal::vf2 */
byte F_009ebb80(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebb80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Normal::vf3 */
uint F_009ebb90(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebb90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Normal::vf4 */
uint F_009ebba0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebba0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Normal::vf5 */
uint F_009ebbb0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebbb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Normal::vf6 */
uint F_009ebbc0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebbc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Normal::vf7 */
uint F_009ebbd0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebbd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x18;
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Reflection::vf2 */
byte F_009ebbe0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebbe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Reflection::vf3 */
byte F_009ebbf0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebbf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 5);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Reflection::vf4 */
uint F_009ebc00(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebc00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Reflection::vf5 */
uint F_009ebc10(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebc10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Reflection::vf6 */
uint F_009ebc20(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebc20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20;
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Distortion::vf2 */
byte F_009ebc30(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebc30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Distortion::vf3 */
byte F_009ebc40(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebc40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 5);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Distortion::vf4 */
byte F_009ebc50(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebc50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 6);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Distortion::vf5 */
byte F_009ebc60(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebc60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 7);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Distortion::vf6 */
byte F_009ebc70(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebc70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Distortion::vf7 */
uint F_009ebc80(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebc80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Distortion::vf8 */
uint F_009ebc90(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebc90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Distortion::vf9 */
uint F_009ebca0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebca0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Distortion::vf10 */
uint F_009ebcb0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebcb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Distortion::vf11 */
uint F_009ebcc0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebcc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20;
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Palette::vf2 */
byte F_009ebcd0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebcd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Palette::vf3 */
uint F_009ebce0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebce0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Palette::vf4 */
uint F_009ebcf0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebcf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x10;
}

/* ref: FUN_009ebd00 */
uint F_009ebd00(unsigned int gen_a0)
{
  GEN_ENTER(0x9ebd00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: Apricot::Engine::Instance::ConeEmitterInstance::vf0 */
uint F_009ebd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ebd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[35])REFP(0x10df8a4));
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x88))))(REFG(int * PTR32, 0x14a0ea8),*(undefined4 *)(this + 0x2a8));
  F_0097ee40(this);
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::ConeModelEmitterInstance::vf0 */
uint F_009ebdc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ebdc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[35])REFP(0x10df8a4));
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x88))))(REFG(int * PTR32, 0x14a0ea8),*(undefined4 *)(this + 0x2a8));
  F_0097ee40(this);
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::CylinderModelEmitterInstance::vf0 */
uint F_009ebe50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ebe50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[35])REFP(0x10df8a4));
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x88))))(REFG(int * PTR32, 0x14a0ea8),*(undefined4 *)(this + 0x2a8));
  F_0097ee40(this);
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::ModelEmitterInstance::vf0 */
uint F_009ebee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ebee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[35])REFP(0x10df8a4));
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x88))))(REFG(int * PTR32, 0x14a0ea8),*(undefined4 *)(this + 0x2a8));
  F_0097ee40(this);
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::PointEmitterInstance::vf0 */
uint F_009ebf70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ebf70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[35])REFP(0x10df8a4));
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x88))))(REFG(int * PTR32, 0x14a0ea8),*(undefined4 *)(this + 0x2a8));
  F_0097ee40(this);
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::SphereModelEmitterInstance::vf0 */
uint F_009ec000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ec000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[35])REFP(0x10df8a4));
  if ((*(uint *)&REFG(undefined, 0x14a22e8) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x14a22e8) = *(uint *)&REFG(undefined, 0x14a22e8) | 1;
    F_00994de0(&REFG(float, 0x14a0d58));
    F_00c47de6(((code *)REFP(0x107c350)));
  }
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a0ea8) + 0x88))))(REFG(int * PTR32, 0x14a0ea8),*(undefined4 *)(this + 0x2a8));
  F_0097ee40(this);
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::LaserParticleInstance::vf0 */
uint F_009ec090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ec090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[34])REFP(0x10ddf84));
  F_0097ee40(this);
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::WindmillParticleInstance::vf0 */
uint F_009ec0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ec0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[34])REFP(0x10ddf84));
  F_0097ee40(this);
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_009ec140 */
uint F_009ec140(unsigned int gen_a0)
{
  GEN_ENTER(0x9ec140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd2);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_009ec180 */
uint F_009ec180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ec180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x18))();
  return uVar1;
}

/* ref: FUN_009ec190 */
uint F_009ec190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ec190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_009ed5b0((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_009ec1a0 */
uint F_009ec1a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ec1a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_009e9d00(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0xcf);
  return (uint)uVar1;
}

/* ref: FUN_009ec1e0 */
uint F_009ec1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ec1e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_009e6340((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x4)),(*(uint *)&gen_args[1]));
  (*(uint *)&gen_args[1]) = 0;
  F_009e70b0((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]),0);
  F_009e9d00((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_009ec240 */
uint F_009ec240(unsigned int gen_a0)
{
  GEN_ENTER(0x9ec240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_009e9dc0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0xd0);
  return (uint)uVar1;
}

/* ref: FUN_009ec280 */
uint F_009ec280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ec280u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_009e6670((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x4)),(*(uint *)&gen_args[1]));
  (*(uint *)&gen_args[1]) = 0;
  F_009e7120((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]),0);
  F_009e9dc0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_009ec380 */
uint F_009ec380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ec380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0xc,0,0xca);
    F_009e7260(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,param_1)
    ;
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    iVar2 = *(int *)this;
    puVar4 = *(undefined4 * PTR32 *)this;
    if (puVar4 != (undefined4 *)0x0) {
      for (; puVar4 != puVar1; puVar4 = puVar4 + 3) {
        ((code *)*(gen_code32 *)*puVar4)(puVar4,0);
      }
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0xc) * 0xc,0xca);
    }
    *(uint *)((int)this + 8) = param_1 * 0xc + uVar3;
    *(uint *)((int)this + 4) = uVar3 + (((int)puVar1 - iVar2) / 0xc) * 0xc;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_009ec480 */
uint F_009ec480(unsigned int gen_a0)
{
  GEN_ENTER(0x9ec480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ec4b0 */
uint F_009ec4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9ec4b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    for (puVar2 = param_3; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      *puVar3 = *puVar2;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009ec4f0 */
uint F_009ec4f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ec4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ec520 */
uint F_009ec520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9ec520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar2 = param_2;
    puVar3 = param_3;
    while (puVar3 != puVar1) {
      puVar4 = puVar3 + 0x29;
      puVar6 = puVar2 + 0x29;
      puVar7 = puVar3;
      puVar8 = puVar2;
      for (iVar5 = 0x29; puVar2 = puVar6, puVar3 = puVar4, iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009ec580 */
uint F_009ec580(unsigned int gen_a0)
{
  GEN_ENTER(0x9ec580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ec5b0 */
uint F_009ec5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9ec5b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_009e3860(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009ec5f0 */
uint F_009ec5f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ec5f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ec620 */
uint F_009ec620(unsigned int gen_a0)
{
  GEN_ENTER(0x9ec620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ec650 */
uint F_009ec650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ec650u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x29))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_009dcbe0(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x29) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x29) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x29) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[10];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 10))) = (char)piVar3[10];
      *(char *)(piVar3 + 10) = (char)iVar1;
      goto LAB_009ec76a;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x29) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x29) == '\0') {
      piVar4 = (int *)F_009dc950(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x29) == '\0') {
      uVar5 = F_009dc920(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_009ec76a: ;
  if ((char)piVar3[10] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[10] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[10] == '\0') {
            *(undefined1 *)(piVar6 + 10) = 1;
            *(undefined1 *)(piVar4 + 10) = 0;
            F_009e2880((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x29) == '\0') {
            if ((*(char *)(*piVar6 + 0x28) != '\x01') || (*(char *)(piVar6[2] + 0x28) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x28) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x28) = 1;
                *(undefined1 *)(piVar6 + 10) = 0;
                F_009e28e0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 10) = (char)piVar4[10];
              *(undefined1 *)(piVar4 + 10) = 1;
              *(undefined1 *)(piVar6[2] + 0x28) = 1;
              F_009e2880((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_009ec828: ;
            *(undefined1 *)(piVar6 + 10) = 0;
          }
        }
        else {
          if ((char)piVar6[10] == '\0') {
            *(undefined1 *)(piVar6 + 10) = 1;
            *(undefined1 *)(piVar4 + 10) = 0;
            F_009e28e0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x29) == '\0') {
            if ((*(char *)(piVar6[2] + 0x28) == '\x01') && (*(char *)(*piVar6 + 0x28) == '\x01'))
            goto LAB_009ec828;
            if (*(char *)(*piVar6 + 0x28) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x28) = 1;
              *(undefined1 *)(piVar6 + 10) = 0;
              F_009e2880((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 10) = (char)piVar4[10];
            *(undefined1 *)(piVar4 + 10) = 1;
            *(undefined1 *)(*piVar6 + 0x28) = 1;
            F_009e28e0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 10) = 1;
  }
  F_00406810(piVar3);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_009ec8a0 */
unsigned int F_009ec8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ec8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x29);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_009ec8a0(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    if (piVar3 != (int *)0x0) {
      F_00406810(piVar3);
    }
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x29);
  }
  return 0;
}

/* ref: FUN_009ec8f0 */
uint F_009ec8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ec8f0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar2 = F_009ec380(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_009ec380(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_009ec970 */
uint F_009ec970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ec970u, gen_a0, gen_a1, 0u, 0u);
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
    if ((REFG(undefined * PTR32, 0x14a0a14) == (code *)0x0) || ((int)((int)(uintptr_t)param_1) * 4 == 0)) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))((int)((int)(uintptr_t)param_1) * 4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    }
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
    if ((iVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
      ((code *)REFG(gen_code32, 0x14a0a18))(iVar1);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_009eca20 */
uint F_009eca20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9eca20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (*(int *)((int)this + 8) - *(int *)this) / 0xa4;
  if (uVar4 < param_1) {
    iVar3 = param_1 * 0xa4;
    if ((REFG(undefined * PTR32, 0x14a0a14) == (code *)0x0) || (iVar3 == 0)) {
      param_1 = 0;
    }
    else {
      param_1 = ((code *)REFG(gen_code32, 0x14a0a14))(iVar3,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    }
    F_009ea350(*(undefined4 *)this,*(undefined4 *)((int)this + 4),param_1);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if ((iVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
      ((code *)REFG(gen_code32, 0x14a0a18))(iVar1);
    }
    *(uint *)((int)this + 8) = iVar3 + param_1;
    *(uint *)((int)this + 4) = ((iVar2 - iVar1) / 0xa4) * 0xa4 + param_1;
    *(uint *)this = param_1;
    uVar4 = param_1;
  }
  return uVar4;
}

/* ref: FUN_009ecaf0 */
uint F_009ecaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ecaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (*(int *)((int)this + 8) - *(int *)this) / 0x2a;
  if (uVar4 < param_1) {
    iVar3 = param_1 * 0x2a;
    if ((REFG(undefined * PTR32, 0x14a0a14) == (code *)0x0) || (iVar3 == 0)) {
      param_1 = 0;
    }
    else {
      param_1 = ((code *)REFG(gen_code32, 0x14a0a14))(iVar3,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0);
    }
    F_009e7310(*(undefined4 *)this,*(undefined4 *)((int)this + 4),param_1,(int)this + 0xc,0,
                 param_1);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if ((iVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
      ((code *)REFG(gen_code32, 0x14a0a18))(iVar1);
    }
    *(uint *)((int)this + 8) = iVar3 + param_1;
    *(uint *)((int)this + 4) = ((iVar2 - iVar1) / 0x2a) * 0x2a + param_1;
    *(uint *)this = param_1;
    uVar4 = param_1;
  }
  return uVar4;
}

/* ref: FUN_009ecbd0 */
uint F_009ecbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ecbd0u, gen_a0, gen_a1, 0u, 0u);
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
    if ((REFG(undefined * PTR32, 0x14a0a14) == (code *)0x0) || ((int)((int)(uintptr_t)param_1) * 4 == 0)) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))((int)((int)(uintptr_t)param_1) * 4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    }
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
    if ((iVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
      ((code *)REFG(gen_code32, 0x14a0a18))(iVar1);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_009ecc80 */
uint F_009ecc80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ecc80u, gen_a0, gen_a1, 0u, 0u);
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
    if ((REFG(undefined * PTR32, 0x14a0a14) == (code *)0x0) || ((int)((int)(uintptr_t)param_1) * 4 == 0)) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))((int)((int)(uintptr_t)param_1) * 4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    }
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
    if ((iVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
      ((code *)REFG(gen_code32, 0x14a0a18))(iVar1);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_009ecd30 */
uint F_009ecd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ecd30u, gen_a0, gen_a1, 0u, 0u);
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
    if ((REFG(undefined * PTR32, 0x14a0a14) == (code *)0x0) || ((int)((int)(uintptr_t)param_1) * 4 == 0)) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))((int)((int)(uintptr_t)param_1) * 4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    }
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
    if ((iVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
      ((code *)REFG(gen_code32, 0x14a0a18))(iVar1);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_009ecde0 */
uint F_009ecde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ecde0u, gen_a0, gen_a1, 0u, 0u);
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
    if ((REFG(undefined * PTR32, 0x14a0a14) == (code *)0x0) || ((int)((int)(uintptr_t)param_1) * 4 == 0)) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))((int)((int)(uintptr_t)param_1) * 4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    }
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
    if ((iVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
      ((code *)REFG(gen_code32, 0x14a0a18))(iVar1);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_009ece90 */
uint F_009ece90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ece90u, gen_a0, gen_a1, 0u, 0u);
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
    if ((REFG(undefined * PTR32, 0x14a0a14) == (code *)0x0) || ((int)((int)(uintptr_t)param_1) * 4 == 0)) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))((int)((int)(uintptr_t)param_1) * 4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    }
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
    if ((iVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
      ((code *)REFG(gen_code32, 0x14a0a18))(iVar1);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_009ecf40 */
uint F_009ecf40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ecf40u, gen_a0, gen_a1, 0u, 0u);
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
    if ((REFG(undefined * PTR32, 0x14a0a14) == (code *)0x0) || ((int)((int)(uintptr_t)param_1) * 4 == 0)) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))((int)((int)(uintptr_t)param_1) * 4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    }
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
    if ((iVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
      ((code *)REFG(gen_code32, 0x14a0a18))(iVar1);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_009ed000 */
uint F_009ed000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed000u, gen_a0, gen_a1, 0u, 0u);
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
    if ((REFG(undefined * PTR32, 0x14a0a14) == (code *)0x0) || ((int)((int)(uintptr_t)param_1) * 4 == 0)) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))((int)((int)(uintptr_t)param_1) * 4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    }
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
    if ((iVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
      ((code *)REFG(gen_code32, 0x14a0a18))(iVar1);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_009ed0b0 */
uint F_009ed0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed0b0u, gen_a0, gen_a1, 0u, 0u);
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
    if ((REFG(undefined * PTR32, 0x14a0a14) == (code *)0x0) || ((int)((int)(uintptr_t)param_1) * 4 == 0)) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = ((undefined4 *)GEN_TOP(((code *)REFG(gen_code32, 0x14a0a14))((int)((int)(uintptr_t)param_1) * 4,0x10,&REFG(undefined, 0x10daa3c),&REFG(undefined, 0x10daa38),0)));
    }
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
    if ((iVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
      ((code *)REFG(gen_code32, 0x14a0a18))(iVar1);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_009ed160 */
uint F_009ed160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9ed160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_009e8fa0(param_1,param_2,param_3,(int)this + 0xc,param_3);
  return uVar1;
}

/* ref: FUN_009ed190 */
unsigned int F_009ed190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ed190u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009ed1c0 */
uint F_009ed1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9ed1c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1]));
  cVar1 = *(char *)((int)puVar5 + 0x29);
  bVar4 = 1;
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  uVar3 = (*(undefined4 *)(gen_frame + 0x8));
  while (cVar1 == '\0') {
    if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
      bVar4 = F_009dbaa0((*(int *)&gen_args[2]) + 0xc,puVar5 + 3);
    }
    else {
      bVar4 = F_009dbaa0(puVar5 + 3,(*(int *)&gen_args[2]) + 0xc);
      bVar4 = bVar4 == 0;
    }
    gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)uVar3 >> 8)));
    (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar4);
    if (bVar4 == 0) {
      puVar6 = (undefined4 *)puVar5[2];
    }
    else {
      puVar6 = (undefined4 *)*puVar5;
    }
    puVar2 = puVar5;
    puVar5 = puVar6;
    uVar3 = (*(undefined4 *)(gen_frame + 0x8));
    cVar1 = *(char *)((int)puVar6 + 0x29);
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar4 != 0) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar5 = (undefined4 *)F_009ea540((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_009de310(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[3]);
  bVar4 = F_009dbaa0((*(undefined4 * PTR32 *)&gen_args[3]) + 3,(*(int *)&gen_args[2]) + 0xc);
  if (bVar4 == 0) {
    if ((*(int *)&gen_args[2]) != 0) {
      F_00406810((*(int *)&gen_args[2]));
    }
    *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar5;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  puVar5 = (undefined4 *)F_009ea540((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),uVar3,puVar2,(*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_009ed2d0 */
unsigned int F_009ed2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9ed2d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_009eb490(param_1,param_2,param_3,param_4);
  return 0;
}

/* ref: FUN_009ed2f0 */
unsigned int F_009ed2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9ed2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_009eb500(param_1,param_2,param_3,param_4);
  return 0;
}

/* ref: FUN_009ed310 */
uint F_009ed310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x9ed310u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_009eb570(param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: Apricot::Engine::Data::Communicator::Document::vf0 */
uint F_009ed350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009c0300(this);
  if ((((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) && (this != (undefined *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Color1::vf0 */
uint F_009ed380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009c0690(this);
  if ((((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) &&
     (this != (undefined *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Color2::vf0 */
uint F_009ed3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  code * pcVar1;
  
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x10dfd9c));
  if ((*(int *)(this + 0x20) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(*(int *)(this + 0x20));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x10dd6b8));
  if (((param_1 & 1) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Normal::vf0 */
uint F_009ed410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009c0770(this);
  if ((((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) &&
     (this != (undefined *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Reflection::vf0 */
uint F_009ed440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009c07d0(this);
  if ((((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) &&
     (this != (undefined *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Distortion::vf0 */
uint F_009ed470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009c0840(this);
  if ((((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) &&
     (this != (undefined *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::TextureProperty_Palette::vf0 */
uint F_009ed4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009c08a0(this);
  if ((((param_1 & 1) != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) &&
     (this != (undefined *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::PowderParticleInstance::vf0 */
uint F_009ed4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[34])REFP(0x10ddf84));
  F_0097ee40(this);
  if ((param_1 & 1) != 0) {
    uVar1 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar1 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_009ed520 */
uint F_009ed520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_009ef2a0((undefined *)((int)this + -0x170),param_1);
  return uVar1;
}

/* ref: FUN_009ed530 */
uint F_009ed530(unsigned int gen_a0)
{
  GEN_ENTER(0x9ed530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_009e9d00(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0xcf);
  return (uint)uVar1;
}

/* ref: FUN_009ed570 */
uint F_009ed570(unsigned int gen_a0)
{
  GEN_ENTER(0x9ed570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_009e9dc0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0xd0);
  return (uint)uVar1;
}

/* ref: Apricot::ApricotListenner::vf0 */
uint F_009ed5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009c84a0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009ed660 */
uint F_009ed660(unsigned int gen_a0)
{
  GEN_ENTER(0x9ed660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ed690 */
uint F_009ed690(unsigned int gen_a0)
{
  GEN_ENTER(0x9ed690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ed6f0 */
uint F_009ed6f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ed6f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ed720 */
unsigned int F_009ed720(unsigned int gen_a0)
{
  GEN_ENTER(0x9ed720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)this != *(int *)((int)this + 4)) {
    *(int *)((int)this + 4) = *(int *)this;
  }
  return 0;
}

/* ref: FUN_009ed770 */
uint F_009ed770(unsigned int gen_a0)
{
  GEN_ENTER(0x9ed770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ed7a0 */
uint F_009ed7a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ed7a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  if (*(uint *)this != uVar1) {
    uVar1 = F_009e3860(uVar1,uVar1,*(uint *)this,this);
    *(uint *)((int)this + 4) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_009ed7d0 */
uint F_009ed7d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ed7d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ed830 */
uint F_009ed830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar2 = *(uint *)((int)this + 4);
  if ((param_1 < uVar2) && (uVar3 = *(uint *)this, uVar3 <= param_1)) {
    if (uVar2 == *(uint *)((int)this + 8)) {
      F_009ec8f0(this,1);
    }
    iVar1 = *(int *)this + ((int)(param_1 - uVar3) / 0xc) * 0xc;
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar5 = (undefined4 *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
      puVar4[1] = *(undefined4 *)(iVar1 + 4);
      puVar4[2] = *(undefined4 *)(iVar1 + 8);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
      return (uint)puVar4;
    }
  }
  else {
    if (uVar2 == *(uint *)((int)this + 8)) {
      F_009ec8f0(this,1);
    }
    puVar5 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
      puVar5[1] = *(undefined4 *)(param_1 + 4);
      puVar5[2] = *(undefined4 *)(param_1 + 8);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
  return (uint)puVar5;
}

/* ref: CVector_VShaderSceneKey_Kernel_Graphics_Client_Kernel::vf0 */
uint F_009ed8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10e046c));
  F_009e9f10((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009ed900 */
uint F_009ed900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  bVar1 = F_009e6740(this,(param_1[1] - *param_1) / 0x14);
  if (bVar1 != 0) {
    uVar2 = F_009e8fa0(*param_1,param_1[1],*(undefined4 *)this,(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar2;
  }
  return (uint)this;
}

/* ref: FUN_009ed960 */
uint F_009ed960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed960u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_009ec970(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009ec970(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009ed9d0 */
uint F_009ed9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0xa4;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xa4;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_009eca20(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_009eca20(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_009eda60 */
uint F_009eda60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9eda60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x2a;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x2a;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_009ecaf0(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_009ecaf0(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_009edaf0 */
uint F_009edaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9edaf0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_009ecbd0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009ecbd0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009edb60 */
uint F_009edb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9edb60u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_009ecc80(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009ecc80(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009edbd0 */
uint F_009edbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9edbd0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_009ecd30(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009ecd30(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009edc40 */
uint F_009edc40(unsigned int gen_a0)
{
  GEN_ENTER(0x9edc40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x29);
  while (cVar1 == '\0') {
    F_009ec8a0(this,piVar2[2]);
    piVar3 = (int *)*piVar2;
    if (piVar2 != (int *)0x0) {
      F_00406810(piVar2);
    }
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x29);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_009edca0 */
uint F_009edca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9edca0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_009ecde0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009ecde0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009edd10 */
uint F_009edd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9edd10u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_009ece90(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009ece90(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009edd80 */
uint F_009edd80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9edd80u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_009ecf40(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009ecf40(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009eddf0 */
uint F_009eddf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9eddf0u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_009ed000(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009ed000(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009ede60 */
uint F_009ede60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ede60u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_009ed0b0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009ed0b0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009eded0 */
uint F_009eded0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9eded0u, gen_a0, gen_a1, 0u, 0u);
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
    puVar3 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0xd2);
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
      F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0xd2);
    }
    puVar5 = puVar3 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar3;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar5;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar3 + (iVar2 - iVar1 >> 2);
  }
  return (uint)puVar5;
}

/* ref: FUN_009edf80 */
uint F_009edf80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9edf80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_009e8c10(this,param_2);
  F_009ed1c0(this,param_1,uVar1,uVar2);
  return param_1;
}

/* ref: FUN_009edfb0 */
unsigned int F_009edfb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9edfb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 - param_1;
  iVar2 = param_1;
  iVar4 = param_2;
  iVar3 = param_3;
  do {
    iVar1 = iVar1 >> 3;
    if (iVar1 < 0x21) {
LAB_009ee050: ;
      if (1 < iVar1) {
        F_009e90e0(iVar2,iVar4,param_4,param_5,0);
      }
      return 0;
    }
    if (iVar3 < 1) {
      if (0x20 < iVar1) {
        if (8 < (int)(iVar4 - iVar2 & 0xfffffff8U)) {
          F_009e7560(iVar2,iVar4,param_4,param_5,0,0);
        }
        F_009eb490(iVar2,iVar4,param_4,param_5);
        return 0;
      }
      goto LAB_009ee050;
    }
    F_009ea7d0(&(*(int *)(gen_frame + 0x4)),iVar2,iVar4,param_4,param_5);
    iVar3 = iVar3 / 2 + (iVar3 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x4)) - iVar2 & 0xfffffff8U) < (int)(iVar4 - (*(int *)(gen_frame + 0x8)) & 0xfffffff8U)) {
      F_009edfb0(iVar2,(*(int *)(gen_frame + 0x4)),iVar3,param_4,param_5);
      iVar2 = (*(int *)(gen_frame + 0x8));
    }
    else {
      F_009edfb0((*(int *)(gen_frame + 0x8)),iVar4,iVar3,param_4,param_5);
      iVar4 = (*(int *)(gen_frame + 0x4));
    }
    iVar1 = iVar4 - iVar2;
  } while( true );
}

/* ref: FUN_009ee0b0 */
unsigned int F_009ee0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9ee0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 - param_1;
  iVar2 = param_1;
  iVar4 = param_2;
  iVar3 = param_3;
  do {
    iVar1 = iVar1 >> 3;
    if (iVar1 < 0x21) {
LAB_009ee150: ;
      if (1 < iVar1) {
        F_009e9230(iVar2,iVar4,param_4,param_5,0);
      }
      return 0;
    }
    if (iVar3 < 1) {
      if (0x20 < iVar1) {
        if (8 < (int)(iVar4 - iVar2 & 0xfffffff8U)) {
          F_009e7690(iVar2,iVar4,param_4,param_5,0,0);
        }
        F_009eb500(iVar2,iVar4,param_4,param_5);
        return 0;
      }
      goto LAB_009ee150;
    }
    F_009eac60(&(*(int *)(gen_frame + 0x4)),iVar2,iVar4,param_4,param_5);
    iVar3 = iVar3 / 2 + (iVar3 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x4)) - iVar2 & 0xfffffff8U) < (int)(iVar4 - (*(int *)(gen_frame + 0x8)) & 0xfffffff8U)) {
      F_009ee0b0(iVar2,(*(int *)(gen_frame + 0x4)),iVar3,param_4,param_5);
      iVar2 = (*(int *)(gen_frame + 0x8));
    }
    else {
      F_009ee0b0((*(int *)(gen_frame + 0x8)),iVar4,iVar3,param_4,param_5);
      iVar4 = (*(int *)(gen_frame + 0x4));
    }
    iVar1 = iVar4 - iVar2;
  } while( true );
}

/* ref: FUN_009ee1b0 */
uint F_009ee1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x9ee1b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_2 - param_1;
  iVar3 = param_1;
  iVar5 = param_2;
  iVar4 = param_3;
  do {
    uVar2 = iVar1 >> 4;
    if ((int)uVar2 < 0x21) {
LAB_009ee28a: ;
      if (1 < (int)uVar2) {
        uVar2 = F_009e93e0(iVar3,iVar5);
      }
      return uVar2;
    }
    if (iVar4 < 1) {
      if (0x20 < (int)uVar2) {
        if (0x10 < (int)(iVar5 - iVar3 & 0xfffffff0U)) {
          F_009e77e0(iVar3,iVar5,param_4,param_5,param_6,param_7);
        }
        uVar2 = F_009eb570(iVar3,iVar5,param_4,param_5,param_6,param_7);
        return uVar2;
      }
      goto LAB_009ee28a;
    }
    F_009eb0f0(&(*(int *)(gen_frame + 0x4)),iVar3,iVar5,param_4,param_5,param_6,param_7);
    iVar4 = iVar4 / 2 + (iVar4 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x4)) - iVar3 & 0xfffffff0U) < (int)(iVar5 - (*(int *)(gen_frame + 0x8)) & 0xfffffff0U)) {
      F_009ee1b0(iVar3,(*(int *)(gen_frame + 0x4)),iVar4,param_4,param_5,param_6,param_7);
      iVar3 = (*(int *)(gen_frame + 0x8));
    }
    else {
      F_009ee1b0((*(int *)(gen_frame + 0x8)),iVar5,iVar4,param_4,param_5,param_6,param_7);
      iVar5 = (*(int *)(gen_frame + 0x4));
    }
    iVar1 = iVar5 - iVar3;
  } while( true );
}

/* ref: FUN_009ee330 */
uint F_009ee330(unsigned int gen_a0)
{
  GEN_ENTER(0x9ee330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ee360 */
uint F_009ee360(unsigned int gen_a0)
{
  GEN_ENTER(0x9ee360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: Apricot::Engine::Data::Communicator::Scheduler::vf3 */
uint F_009ee390(void)
{
  GEN_ENTER(0x9ee390u, 0u, 0u, 0u, 0u);
  return 0xc;
}

/* ref: Apricot::Engine::Data::Communicator::Scheduler::vf4 */
uint F_009ee3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee3a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x14 + param_2 * 4;
}

/* ref: FUN_009ee3b0 */
uint F_009ee3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee3b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: Apricot::Engine::Data::Communicator::Scheduler::vf1 */
uint F_009ee3c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ee3c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 8) - *(int *)(in_ecx + 4) >> 2;
}

/* ref: Apricot::Engine::Data::Communicator::Scheduler::vf2 */
uint F_009ee3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee3d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 4) + param_2 * 4;
}

/* ref: FUN_009ee3e0 */
uint F_009ee3e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ee3e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ee410 */
uint F_009ee410(unsigned int gen_a0)
{
  GEN_ENTER(0x9ee410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: Apricot::Engine::Data::Communicator::Timeline::vf1 */
uint F_009ee440(unsigned int gen_a0)
{
  GEN_ENTER(0x9ee440u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x24);
}

/* ref: Apricot::Engine::Data::Communicator::Timeline::vf2 */
uint F_009ee450(unsigned int gen_a0)
{
  GEN_ENTER(0x9ee450u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x28);
}

/* ref: Apricot::Engine::Data::Communicator::Timeline::vf4 */
uint F_009ee460(unsigned int gen_a0)
{
  GEN_ENTER(0x9ee460u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x2c);
}

/* ref: FUN_009ee470 */
uint F_009ee470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee470u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0xa4 + *in_ecx;
}

/* ref: FUN_009ee490 */
uint F_009ee490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee490u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x2a + *in_ecx;
}

/* ref: Apricot::Engine::Data::Communicator::Timeline::vf3 */
uint F_009ee4a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ee4a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (*(int *)(this + 0x18) - *(int *)(this + 0x14)) / 0x2a;
}

/* ref: Apricot::Engine::Data::Communicator::Timeline::vf5 */
uint F_009ee4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee4c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x2a + *(int *)(in_ecx + 0x14);
}

/* ref: Apricot::Engine::Data::Communicator::Timeline::vf6 */
uint F_009ee4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee4d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0xa4 + *(int *)(in_ecx + 4);
}

/* ref: FUN_009ee4f0 */
uint F_009ee4f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ee4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined * PTR32, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ee560 */
uint F_009ee560(unsigned int gen_a0)
{
  GEN_ENTER(0x9ee560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_009e9d00(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0xcf);
  return (uint)uVar1;
}

/* ref: FUN_009ee5e0 */
uint F_009ee5e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ee5e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_009e9dc0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0xd0);
  return (uint)uVar1;
}

/* ref: FUN_009ee630 */
uint F_009ee630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  bVar1 = F_009e6740(this,(param_1[1] - *param_1) / 0x14);
  if (bVar1 != 0) {
    uVar2 = F_009e8fa0(*param_1,param_1[1],*(undefined4 *)this,(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar2;
  }
  return (uint)this;
}

/* ref: FUN_009ee6a0 */
uint F_009ee6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009ed960(this,1);
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
      F_009ed960(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_009ee720 */
unsigned int F_009ee720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009ed9d0(this,1);
    }
    puVar2 = ((undefined4 *)GEN_TOP(((((int)param_1 - (int)puVar2) / 0xa4) * 0xa4 + *(int *)this)));
  }
  else {
    puVar2 = param_1;
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009ed9d0(this,1);
    }
  }
  if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar1 = 0x29; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xa4;
  return 0;
}

/* ref: FUN_009ee7a0 */
unsigned int F_009ee7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_009eda60(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_009daf30(*(undefined * PTR32 *)((int)this + 4),((int)(param_1 - uVar2) / 0x2a) * 0x2a + *(int *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x2a;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_009eda60(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_009daf30(*(undefined * PTR32 *)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x2a;
  return 0;
}

/* ref: FUN_009ee830 */
uint F_009ee830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edaf0(this,1);
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
      F_009edaf0(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_009ee8a0 */
uint F_009ee8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edb60(this,1);
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
      F_009edb60(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_009ee910 */
uint F_009ee910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edbd0(this,1);
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
      F_009edbd0(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_009ee980 */
uint F_009ee980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edca0(this,1);
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
      F_009edca0(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_009ee9f0 */
uint F_009ee9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edd10(this,1);
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
      F_009edd10(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_009eea60 */
uint F_009eea60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9eea60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edd80(this,1);
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
      F_009edd80(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_009eead0 */
uint F_009eead0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9eead0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009eddf0(this,1);
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
      F_009eddf0(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_009eeb40 */
uint F_009eeb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9eeb40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009ede60(this,1);
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
      F_009ede60(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_009eebb0 */
uint F_009eebb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9eebb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_009edc40(this);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x29) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x29) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x29);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x29);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x29);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x29);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_009ec650(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_009eec50 */
uint F_009eec50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9eec50u, gen_a0, gen_a1, 0u, 0u);
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
      uVar1 = F_009eded0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009eded0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009eecc0 */
unsigned int F_009eecc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9eecc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_009edfb0(param_1,param_2,param_2 - param_1 >> 3,param_3,param_4);
  return 0;
}

/* ref: FUN_009eecf0 */
unsigned int F_009eecf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9eecf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_009ee0b0(param_1,param_2,param_2 - param_1 >> 3,param_3,param_4);
  return 0;
}

/* ref: FUN_009eed20 */
uint F_009eed20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x9eed20u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_009ee1b0(param_1,param_2,param_2 - param_1 >> 4,param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: Apricot::Engine::Data::Communicator::Scheduler::vf0 */
uint F_009eed60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9eed60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  code * pcVar1;
  
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10e0474));
  if ((*(int *)(this + 4) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(*(int *)(this + 4));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd320));
  if (((param_1 & 1) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::Timeline::vf0 */
uint F_009eedc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9eedc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  code * pcVar1;
  
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10e048c));
  if ((*(int *)(this + 0x14) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(*(int *)(this + 0x14));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  if ((*(int *)(this + 4) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(*(int *)(this + 4));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10dd338));
  if (((param_1 & 1) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::ColorFunctionCurve::vf1 */
uint F_009eee30(void)
{
  GEN_ENTER(0x9eee30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::RgbFunctionCurve::vf0 */
uint F_009eee40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9eee40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  code * pcVar1;
  
  pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e04ac));
  if ((*(int *)(this + 4) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(*(int *)(this + 4));
    pcVar1 = REFG(undefined * PTR32, 0x14a0a18);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  if (((param_1 & 1) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::LineParticle::vf1 */
uint F_009eeea0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eeea0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::LineParticle::vf2 */
uint F_009eeeb0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eeeb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::LineParticle::vf3 */
uint F_009eeec0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eeec0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x90;
}

/* ref: Apricot::Engine::Data::Communicator::LineParticle::vf4 */
uint F_009eeed0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eeed0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x328;
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf1 */
uint F_009eeee0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eeee0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf2 */
uint F_009eeef0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eeef0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf3 */
uint F_009eef00(unsigned int gen_a0)
{
  GEN_ENTER(0x9eef00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf4 */
byte F_009eef10(unsigned int gen_a0)
{
  GEN_ENTER(0x9eef10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x20);
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf5 */
byte F_009eef20(unsigned int gen_a0)
{
  GEN_ENTER(0x9eef20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x21);
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf6 */
uint F_009eef30(unsigned int gen_a0)
{
  GEN_ENTER(0x9eef30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x28;
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf7 */
uint F_009eef40(unsigned int gen_a0)
{
  GEN_ENTER(0x9eef40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xb0;
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf8 */
uint F_009eef50(unsigned int gen_a0)
{
  GEN_ENTER(0x9eef50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x210;
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf9 */
uint F_009eef60(unsigned int gen_a0)
{
  GEN_ENTER(0x9eef60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x4a8;
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf10 */
uint F_009eef70(unsigned int gen_a0)
{
  GEN_ENTER(0x9eef70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x740;
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf11 */
uint F_009eef80(unsigned int gen_a0)
{
  GEN_ENTER(0x9eef80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x778;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf1 */
uint F_009eef90(unsigned int gen_a0)
{
  GEN_ENTER(0x9eef90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf2 */
uint F_009eefa0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eefa0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf3 */
uint F_009eefb0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eefb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf4 */
uint F_009eefc0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eefc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf5 */
uint F_009eefd0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eefd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf6 */
byte F_009eefe0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eefe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x18);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf7 */
byte F_009eeff0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eeff0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x19);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf8 */
byte F_009ef000(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef000u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x1a);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf9 */
byte F_009ef010(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef010u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x1b);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf10 */
byte F_009ef020(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef020u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x1c);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf11 */
uint F_009ef030(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef030u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf12 */
uint F_009ef040(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef040u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xa8;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf13 */
uint F_009ef050(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef050u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x130;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf14 */
uint F_009ef060(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef060u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1b8;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf15 */
uint F_009ef070(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef070u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x240;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf16 */
uint F_009ef080(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef080u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2c8;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf17 */
uint F_009ef090(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef090u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x3d8;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf18 */
uint F_009ef0a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef0a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x350;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf19 */
uint F_009ef0b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef0b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x410;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf20 */
uint F_009ef0c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef0c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x6a8;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf21 */
uint F_009ef0d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef0d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x940;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf22 */
uint F_009ef0e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef0e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xbd8;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf23 */
uint F_009ef0f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef0f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xe70;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf24 */
uint F_009ef100(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef100u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1108;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf1 */
uint F_009ef110(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef110u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf2 */
uint F_009ef120(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef120u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf3 */
uint F_009ef130(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef130u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf4 */
unsigned int F_009ef140(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef140u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf5 */
uint F_009ef150(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef150u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x18;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf6 */
uint F_009ef160(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef160u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xa0;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf7 */
uint F_009ef170(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef170u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x128;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf8 */
uint F_009ef180(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef180u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1b0;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf9 */
uint F_009ef190(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef190u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x238;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf10 */
uint F_009ef1a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef1a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2c0;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf11 */
uint F_009ef1b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef1b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x348;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf12 */
uint F_009ef1c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef1c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x3d0;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf13 */
uint F_009ef1d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef1d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x458;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf14 */
uint F_009ef1e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef1e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x4e0;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf15 */
uint F_009ef1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef1f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x778;
}

/* ref: FUN_009ef200 */
unsigned int F_009ef200(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  pvVar1 = *(undefined * PTR32 *)this;
  if (pvVar1 != (undefined *)0x0) {
    F_009cfa70(pvVar1);
    F_00406ad0(pvVar1);
    *(undefined4 *)this = 0;
  }
  pvVar1 = *(undefined * PTR32 *)((int)this + 4);
  if (pvVar1 != (undefined *)0x0) {
    F_009cfa70(pvVar1);
    F_00406ad0(pvVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 8) = 0xe0000000;
  *(undefined4 *)((int)this + 0x14) = 0;
  return 0;
}

/* ref: FUN_009ef260 */
unsigned int F_009ef260(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    F_009cfa70(this_00);
    F_00406ad0(this_00);
    *(undefined4 *)this = 0;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0xe0000000;
  return 0;
}

/* ref: Client::Graphics::Vfx::VfxData::vf0 */
uint F_009ef2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ef2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009cfb10(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009ef2d0 */
uint F_009ef2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ef2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009eec50(this,1);
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
      F_009eec50(this,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_009ef340 */
uint F_009ef340(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_009eebb0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf1 */
unsigned int F_009ef360(void)
{
  GEN_ENTER(0x9ef360u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf2 */
uint F_009ef370(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef370u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf3 */
uint F_009ef380(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef380u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf4 */
uint F_009ef390(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef390u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf5 */
uint F_009ef3a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef3a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf6 */
uint F_009ef3b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef3b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x25;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf7 */
uint F_009ef3c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef3c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x128);
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf8 */
uint F_009ef3d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef3d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf9 */
uint F_009ef3e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef3e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf10 */
uint F_009ef3f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef3f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf11 */
uint F_009ef400(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef400u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf12 */
uint F_009ef410(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef410u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x14c;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf13 */
uint F_009ef420(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef420u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x160;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf14 */
uint F_009ef430(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef430u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1e8;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf15 */
uint F_009ef440(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef440u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x270;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf16 */
uint F_009ef450(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef450u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2f8;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf17 */
uint F_009ef460(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef460u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x380;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf18 */
uint F_009ef470(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef470u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x618;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf19 */
uint F_009ef480(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef480u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x778;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf20 */
uint F_009ef490(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef490u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x8d8;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf21 */
uint F_009ef4a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef4a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xa38;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf22 */
uint F_009ef4b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef4b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xac0;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf23 */
uint F_009ef4c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef4c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xb48;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf24 */
uint F_009ef4d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef4d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xbd0;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf25 */
uint F_009ef4e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef4e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xc58;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf26 */
uint F_009ef4f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef4f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xce0;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf27 */
uint F_009ef500(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef500u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xd68;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf28 */
uint F_009ef510(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef510u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xd70;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf29 */
uint F_009ef520(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef520u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1130;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf30 */
uint F_009ef530(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef530u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1478;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf31 */
uint F_009ef540(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef540u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1738;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf32 */
uint F_009ef550(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef550u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1a80;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf35 */
byte F_009ef560(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef560u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x24);
}

/* ref: FUN_009ef590 */
uint F_009ef590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ef590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)this + param_1 * 0x44;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf33 */
uint F_009ef5b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (*(int *)(this + 0x130) - *(int *)(this + 300)) / 0x44;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf34 */
uint F_009ef5d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef5d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (*(int *)(this + 0x140) - *(int *)(this + 0x13c)) / 0x44;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf36 */
uint F_009ef5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ef5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)(this + 300) + param_1 * 0x44;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf37 */
uint F_009ef610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ef610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)(this + 0x13c) + param_1 * 0x44;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf63 */
uint F_009ef630(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef630u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf1 */
unsigned int F_009ef640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ef640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf2 */
uint F_009ef650(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x68;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf3 */
uint F_009ef660(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef660u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x78;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf4 */
uint F_009ef670(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef670u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x100;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf5 */
uint F_009ef680(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef680u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x188;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf6 */
uint F_009ef690(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef690u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x420;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf7 */
uint F_009ef6a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef6a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x580;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf8 */
uint F_009ef6b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef6b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x6e0;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf9 */
uint F_009ef6c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef6c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x840;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf10 */
uint F_009ef6d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef6d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x8c8;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf11 */
uint F_009ef6e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef6e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x950;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf12 */
uint F_009ef6f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef6f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf13 */
uint F_009ef700(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef700u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf14 */
uint F_009ef710(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef710u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf15 */
uint F_009ef720(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef720u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf16 */
uint F_009ef730(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef730u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf17 */
uint F_009ef740(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef740u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf18 */
unsigned int F_009ef750(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef750u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf19 */
unsigned int F_009ef760(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef760u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf20 */
unsigned int F_009ef770(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef770u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf21 */
unsigned int F_009ef780(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef780u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf22 */
byte F_009ef790(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef790u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x36);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf23 */
byte F_009ef7a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef7a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x37);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf24 */
uint F_009ef7b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef7b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 100);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf25 */
unsigned int F_009ef7c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef7c0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf26 */
uint F_009ef7d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef7d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x28);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf27 */
byte F_009ef7e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef7e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x30);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf28 */
byte F_009ef7f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef7f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x31);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf29 */
byte F_009ef800(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef800u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x32);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf30 */
byte F_009ef810(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef810u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x33);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf31 */
byte F_009ef820(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef820u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x34);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf32 */
uint F_009ef830(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef830u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf33 */
uint F_009ef840(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef840u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x4c);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf34 */
uint F_009ef850(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef850u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x50);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf35 */
uint F_009ef860(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef860u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x54);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf36 */
uint F_009ef870(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef870u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf37 */
uint F_009ef880(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef880u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x58);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf38 */
uint F_009ef890(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef890u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x24);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf39 */
uint F_009ef8a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef8a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x5c);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf40 */
uint F_009ef8b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef8b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x60);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf41 */
byte F_009ef8c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef8c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x35);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf42 */
uint F_009ef8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef8d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x9d8;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf43 */
uint F_009ef8e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef8e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xf98;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf44 */
uint F_009ef8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef8f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xfa8;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf45 */
uint F_009ef900(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef900u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xfb0;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf46 */
uint F_009ef910(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef910u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xfb8;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf47 */
uint F_009ef920(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef920u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1048;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf48 */
uint F_009ef930(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef930u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1160;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf49 */
uint F_009ef940(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef940u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2500;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf50 */
uint F_009ef950(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef950u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2cb0;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf51 */
uint F_009ef960(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef960u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2cb8;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf52 */
uint F_009ef970(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef970u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2cc0;
}

