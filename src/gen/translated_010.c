#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00484510 */
uint F_00484510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x484510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  gen_size32 _Size;
  
  iVar2 = *(int *)((int)this + 4);
  uVar3 = *(uint *)this;
  if (param_1 < iVar2 - uVar3) {
    iVar1 = uVar3 + param_1;
    if (iVar1 != iVar2) {
      uVar3 = F_00c46e20(iVar1,iVar2,0);
      *(int *)((int)this + 4) = iVar1;
    }
  }
  else if (iVar2 - uVar3 < param_1) {
    F_00482530(this,(uVar3 - iVar2) + param_1);
    _Size = (*(int *)this - (int)*(undefined * PTR32 *)((int)this + 4)) + param_1;
    if (_Size != 0) {
      F_00c48350(*(undefined * PTR32 *)((int)this + 4),0,_Size);
    }
    *(uint *)((int)this + 4) = *(int *)this + param_1;
    return *(int *)this + param_1;
  }
  return uVar3;
}

/* ref: FUN_00484580 */
uint F_00484580(unsigned int gen_a0)
{
  GEN_ENTER(0x484580u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_004845b0 */
uint F_004845b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4845b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  char cVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 4))[1]));
  cVar1 = *(char *)((int)puVar5 + 0x71);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  while (cVar1 == '\0') {
    bVar3 = F_0042c7c0(puVar5 + 3,param_2);
    if (bVar3 == 0) {
      puVar4 = (undefined4 *)*puVar5;
    }
    else {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x71);
  }
  if ((puVar2 != *(undefined4 * PTR32 *)((int)this + 4)) &&
     (bVar3 = F_0042c7c0(param_2,puVar2 + 3), bVar3 == 0)) {
    *param_1 = puVar2;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00484630 */
uint F_00484630(unsigned int gen_a0)
{
  GEN_ENTER(0x484630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00482650(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00484660 */
uint F_00484660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x484660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  piVar4 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar4 = (int *)*puVar1;
  }
  uVar2 = *(int *)((int)this + 0xc) + param_1;
  if (((piVar4 == (int *)0x0) || ((int *)*piVar4 == (int *)0x0)) ||
     (piVar4 = *(int * PTR32 *)*piVar4, piVar4 == (int *)0x0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar4;
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    return *((uint *)GEN_TOP((*(int *)(iVar3 + 4) + (uVar2 - *(uint *)(iVar3 + 8)) * 4)));
  }
  return *((uint *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4)));
}

/* ref: FUN_004846c0 */
uint F_004846c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4846c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_0047bed0(this,param_2);
  if (uVar1 != *(uint *)((int)this + 4)) {
    if ((*(uint *)(uVar1 + 0x14) <= param_2[1]) &&
       ((param_2[1] != *(uint *)(uVar1 + 0x14) || (*(uint *)(uVar1 + 0x10) <= *param_2)))) {
      *param_1 = uVar1;
      return (uint)param_1;
    }
  }
  *param_1 = *(uint *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00484720 */
uint F_00484720(unsigned int gen_a0)
{
  GEN_ENTER(0x484720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0xc,400);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0xc,400);
  return (uint)uVar3;
}

/* ref: FUN_00484770 */
uint F_00484770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x484770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0xc,0,400);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_004847d0 */
uint F_004847d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4847d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x71) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x71) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00484840 */
unsigned int F_00484840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x484840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x71);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00484840(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_0042c880(piVar3 + 4);
    F_00429760(piVar3,0x78,400);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x71);
  }
  return 0;
}

/* ref: FUN_00484890 */
unsigned int F_00484890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x484890u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int param_7 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  piVar3 = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x0;
  if (this != (undefined *)0x0) {
    (*(int * PTR32 *)(gen_frame + 0x18)) = *(int * PTR32 *)this;
  }
  (*(int *)(gen_frame + 0x20)) = param_4;
  if (this != (undefined *)0x0) {
    piVar3 = *(int * PTR32 *)this;
  }
  uVar2 = param_4 - *(int *)((int)this + 0xc);
  (*(uint *)(gen_frame + 0x24)) = uVar2;
  (*(int *)(gen_frame + 0x28)) = param_7 - param_4;
  (*(int *)(gen_frame + 0x14)) = param_7;
  uVar6 = 0;
  if (uVar2 < (uint)((*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc)) - param_7)) {
    if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*piVar3;
    }
    uVar5 = 0;
    if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
      uVar5 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
    }
    F_00482d00(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)this,0,*(undefined4 *)((int)this + 0xc),uVar5,0,param_4,
                 uVar6,0,param_7);
    for (iVar4 = (*(int *)(gen_frame + 0x28)); iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*(int *)((int)this + 0x10) != 0) {
        F_0042c880(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + *(int *)((int)this + 0xc) * 4))));
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
        if (*(uint *)((int)this + 8) <= *(uint *)((int)this + 0xc)) {
          *(undefined4 *)((int)this + 0xc) = 0;
        }
        piVar3 = (int *)((int)this + 0x10);
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          *(undefined4 *)((int)this + 0xc) = 0;
        }
      }
    }
  }
  else {
    if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
    }
    uVar5 = 0;
    if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
      uVar5 = *(undefined4 *)*piVar3;
    }
    F_00482d80(((undefined1 *)(gen_frame + 0xc)),uVar5,0,param_7,*(undefined4 *)this,0,
                 *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10),uVar6,0,param_4);
    for (iVar4 = (*(int *)(gen_frame + 0x28)); iVar4 != 0; iVar4 = iVar4 + -1) {
      if (*(int *)((int)this + 0x10) != 0) {
        uVar2 = *(int *)((int)this + 0xc) + -1 + *(int *)((int)this + 0x10);
        if (*(uint *)((int)this + 8) <= uVar2) {
          uVar2 = uVar2 - *(uint *)((int)this + 8);
        }
        F_0042c880(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4))));
        piVar3 = (int *)((int)this + 0x10);
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          *(undefined4 *)((int)this + 0xc) = 0;
        }
      }
    }
  }
  iVar4 = *(int *)((int)this + 0xc);
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (*(uint *)(gen_frame + 0x24)) + iVar4;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return 0;
}

/* ref: FUN_00484a50 */
uint F_00484a50(unsigned int gen_a0)
{
  GEN_ENTER(0x484a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00482990(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00484a70 */
uint F_00484a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x484a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_00482a30(this,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_00484ab0 */
uint F_00484ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x484ab0u, gen_a0, gen_a1, gen_a2, 0u);
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
          uVar1 = F_00482a30(this,this,(int)param_1 - *(int *)this,param_2);
          return uVar1;
        }
        uVar1 = F_00482a30(this,this,(int)param_1 - (int)this,param_2);
        return uVar1;
      }
    }
  }
  if (param_2 == 0xffffffff) {
                    
    F_00c4579a("string too long");
  }
  if (*(uint *)((int)this + 0x14) < param_2) {
    F_0047c420(this,param_2,*(undefined4 *)((int)this + 0x10));
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

/* ref: FUN_00484bb0 */
unsigned int F_00484bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x484bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  iVar2 = *(int *)((int)this + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return 0;
}

/* ref: FUN_00484bf0 */
uint F_00484bf0(unsigned int gen_a0)
{
  GEN_ENTER(0x484bf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar3 = *(int *)((int)this + 0x10) + -1 + *(int *)((int)this + 0xc);
    if (*(uint *)((int)this + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)((int)this + 8);
    }
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4)));
    F_0042c880((undefined *)(iVar2 + 0x58));
    uVar4 = F_0042c880((undefined *)(iVar2 + 4));
    uVar3 = (uint)uVar4;
    piVar1 = (int *)((int)this + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return uVar3;
}

/* ref: FUN_00484c30 */
uint F_00484c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x484c30u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00482b20(this);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x19) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x19) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x19);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x19);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x19);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x19);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00481a00(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00484cd0 */
unsigned int F_00484cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x484cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0x54)) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_00484d00 */
uint F_00484d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x484d00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00482b80(this);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0xe) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0xe) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0xe);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xe);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0xe);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0xe);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_0047fd10(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00484da0 */
uint F_00484da0(unsigned int gen_a0)
{
  GEN_ENTER(0x484da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar2 = *(int *)((int)this + 0x10) + -1 + *(int *)((int)this + 0xc);
    if (*(uint *)((int)this + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)((int)this + 8);
    }
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4)));
    F_0042c880((undefined *)((int)this_00 + 0x54));
    uVar3 = F_0042c880(this_00);
    uVar2 = (uint)uVar3;
    piVar1 = (int *)((int)this + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00484df0 */
uint F_00484df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x484df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00482a30(this,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_00484e10 */
uint F_00484e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x484e10u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x71))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00473f10(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x71) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x71) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x71) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[0x1c];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 0x1c))) = (char)piVar3[0x1c];
      *(char *)(piVar3 + 0x1c) = (char)iVar1;
      goto LAB_00484f2a;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x71) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x71) == '\0') {
      piVar4 = (int *)F_00473e60(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x71) == '\0') {
      uVar5 = F_00473e40(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00484f2a: ;
  if ((char)piVar3[0x1c] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[0x1c] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[0x1c] == '\0') {
            *(undefined1 *)(piVar6 + 0x1c) = 1;
            *(undefined1 *)(piVar4 + 0x1c) = 0;
            F_0047c690((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x71) == '\0') {
            if ((*(char *)(*piVar6 + 0x70) != '\x01') || (*(char *)(piVar6[2] + 0x70) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x70) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x70) = 1;
                *(undefined1 *)(piVar6 + 0x1c) = 0;
                F_0047c6f0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 0x1c) = (char)piVar4[0x1c];
              *(undefined1 *)(piVar4 + 0x1c) = 1;
              *(undefined1 *)(piVar6[2] + 0x70) = 1;
              F_0047c690((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_00484fe8: ;
            *(undefined1 *)(piVar6 + 0x1c) = 0;
          }
        }
        else {
          if ((char)piVar6[0x1c] == '\0') {
            *(undefined1 *)(piVar6 + 0x1c) = 1;
            *(undefined1 *)(piVar4 + 0x1c) = 0;
            F_0047c6f0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x71) == '\0') {
            if ((*(char *)(piVar6[2] + 0x70) == '\x01') && (*(char *)(*piVar6 + 0x70) == '\x01'))
            goto LAB_00484fe8;
            if (*(char *)(*piVar6 + 0x70) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x70) = 1;
              *(undefined1 *)(piVar6 + 0x1c) = 0;
              F_0047c690((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 0x1c) = (char)piVar4[0x1c];
            *(undefined1 *)(piVar4 + 0x1c) = 1;
            *(undefined1 *)(*piVar6 + 0x70) = 1;
            F_0047c6f0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 0x1c) = 1;
  }
  F_0042c880(piVar3 + 6);
  F_00429760(piVar3,0x74,400);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00485070 */
unsigned int F_00485070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x485070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x71);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00485070(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_0042c880(piVar3 + 6);
    F_00429760(piVar3,0x74,400);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x71);
  }
  return 0;
}

/* ref: FUN_004850c0 */
uint F_004850c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4850c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_2 != 0) {
    F_00481c90((undefined4 *)((int)this + 4),param_2);
  }
  *(undefined1 *)((int)this + 0x14) = (undefined1)param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091268));
  return (uint)this;
}

/* ref: FUN_00485100 */
uint F_00485100(unsigned int gen_a0)
{
  GEN_ENTER(0x485100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091268));
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = F_00406ad0(*(int *)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar1;
}

/* ref: FUN_00485130 */
uint F_00485130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x485130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x10,0,400);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)((int)puVar1 + 0xd) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 3) = *param_2;
  }
  F_00482f70(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00485190 */
uint F_00485190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x485190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x10,0,400);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)((int)puVar1 + 0xd) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 3) = *param_2;
  }
  F_00482f70(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_004851f0 */
uint F_004851f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4851f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if (param_2 != 0) {
    F_00481c90((undefined4 *)((int)this + 4),param_2);
  }
  *(undefined1 *)((int)this + 0x14) = (undefined1)param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091270));
  return (uint)this;
}

/* ref: FUN_00485230 */
uint F_00485230(unsigned int gen_a0)
{
  GEN_ENTER(0x485230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091270));
  uVar1 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = F_00406ad0(*(int *)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar1;
}

/* ref: FUN_00485260 */
unsigned int F_00485260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x485260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  return 0;
}

/* ref: FUN_00485280 */
unsigned int F_00485280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x485280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 in_ECX = 0;
  
  F_004835f0(param_1,param_2,param_3,in_ECX);
  return 0;
}

/* ref: FUN_004852a0 */
uint F_004852a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4852a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00480d60(param_1,param_2,param_3,(int)this + 0xc,param_3);
  return uVar1;
}

/* ref: FUN_004852d0 */
unsigned int F_004852d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4852d0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00485300 */
unsigned int F_00485300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x485300u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00485330 */
unsigned int F_00485330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x485330u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00485360 */
unsigned int F_00485360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x485360u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00485390 */
uint F_00485390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x485390u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_0042c880((undefined *)(param_2 + 8));
  return (uint)uVar1;
}

/* ref: FUN_004853a0 */
unsigned int F_004853a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4853a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_004853d0 */
unsigned int F_004853d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4853d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00485400 */
unsigned int F_00485400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x485400u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00485430 */
unsigned int F_00485430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x485430u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00485460 */
unsigned int F_00485460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x485460u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00485490 */
unsigned int F_00485490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x485490u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_004854c0 */
uint F_004854c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4854c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_0042cbc0(this,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 0x54);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00485500 */
unsigned int F_00485500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x485500u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00480fd0(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return 0;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00485530 */
unsigned int F_00485530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x485530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 8) {
    F_005a2670(this);
  }
  return 0;
}

/* ref: FUN_00485560 */
unsigned int F_00485560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x485560u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x5c) {
    F_0042c880((undefined *)(iVar1 + 8));
  }
  return 0;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00485590 */
unsigned int F_00485590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x485590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x58) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_004855c0 */
unsigned int F_004855c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4855c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0xa8)) {
    F_0042c880((undefined *)((int)this + 0x54));
    F_0042c880(this);
  }
  return 0;
}

/* ref: ChunkWrite_EG_Data_System_Client::vf0 */
uint F_004855f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4855f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091268));
  if (*(int *)((int)this + 4) != 0) {
    F_00406ad0(*(int *)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: ChunkWrite_EE_Data_System_Client::vf0 */
uint F_00485640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x485640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091270));
  if (*(int *)((int)this + 4) != 0) {
    F_00406ad0(*(int *)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00485690 */
uint F_00485690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x485690u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  undefined * this_00;
  undefined4 * puVar6;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1]));
  this_00 = (undefined *)((*(int *)&gen_args[2]) + 0x10);
  cVar1 = *(char *)((int)puVar5 + 0x71);
  bVar4 = 1;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  uVar3 = (*(undefined4 *)(gen_frame + 0x8));
  while (cVar1 == '\0') {
    if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
      bVar4 = F_0042c7c0(this_00,puVar5 + 4);
    }
    else {
      bVar4 = F_0042c7c0(puVar5 + 4,this_00);
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
    cVar1 = *(char *)((int)puVar6 + 0x71);
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar4 != 0) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar5 = (undefined4 *)F_00483170((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00474890(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[3]);
  bVar4 = F_0042c7c0((*(undefined4 * PTR32 *)&gen_args[3]) + 4,this_00);
  if (bVar4 != 0) {
    puVar5 = (undefined4 *)F_00483170((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),uVar3,puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_0042c880(this_00);
  F_00429760((*(int *)&gen_args[2]),0x78,400);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar5;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00485790 */
uint F_00485790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x485790u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  bVar3 = true;
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar2[1] + 0x71) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
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
    } while (*(char *)((int)puVar1 + 0x71) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_004833a0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00474a80(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_004833a0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_0042c880((undefined *)((*(int *)&gen_args[2]) + 0x18));
  F_00429760((*(int *)&gen_args[2]),0x74,400);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00485880 */
uint F_00485880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x485880u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_0042c880(param_4 + 5);
    F_00429760(param_4,0x6c,0x192);
                    
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
      goto LAB_004858f6;
    }
    param_3[2] = param_4;
    iVar4 = *(int *)((int)this + 4);
    if (param_3 != *(undefined4 * PTR32 *)(iVar4 + 8)) goto LAB_004858f6;
  }
  *(int * PTR32 *)(iVar4 + 8) = param_4;
LAB_004858f6: ;
  cVar1 = *(char *)(param_4[1] + 0x68);
  piVar3 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar4 + 0x68) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar3[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar4 = piVar6[2];
      if (*(char *)(iVar4 + 0x68) == '\0') {
        *(undefined1 *)(piVar5 + 0x1a) = 1;
        *(undefined1 *)(iVar4 + 0x68) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x68))) = 0;
        piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
      }
      else {
        if (piVar3 == (int *)piVar5[2]) {
          piVar3 = (int *)piVar5[2];
          piVar5[2] = *piVar3;
          if (*(char *)(*piVar3 + 0x69) == '\0') {
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
        *(undefined1 *)(piVar3[1] + 0x68) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x68))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x69) == '\0') {
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
LAB_00485a81: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar4 = *piVar6;
      if (*(char *)(iVar4 + 0x68) != '\0') {
        if (piVar3 == (int *)*piVar5) {
          iVar4 = *piVar5;
          *piVar5 = *(int *)(iVar4 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar4 + 8) + 0x69))) == '\0') {
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
        *(undefined1 *)(piVar3[1] + 0x68) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x68))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x69) == '\0') {
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
        goto LAB_00485a81;
      }
      *(undefined1 *)(piVar5 + 0x1a) = 1;
      *(undefined1 *)(iVar4 + 0x68) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x68))) = 0;
      piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
    }
    cVar1 = *(char *)(piVar3[1] + 0x68);
  } while( true );
}

/* ref: FUN_00485ab0 */
uint F_00485ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x485ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x78,0,400);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x1c) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    F_0042cbc0(puVar1 + 4,param_1);
    puVar1[0x1a] = *(undefined4 *)(param_1 + 0x58);
    puVar1[0x1b] = *(undefined4 *)(param_1 + 0x5c);
  }
  return (uint)puVar1;
}

/* ref: FUN_00485b10 */
uint F_00485b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x485b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar1 = (undefined4 *)F_004296a0(0x48,0,400);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x10) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    puVar1[4] = *param_1;
    puVar1[5] = param_1[1];
    puVar3 = param_1 + 2;
    puVar4 = puVar1 + 6;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
  }
  return (uint)puVar1;
}

/* ref: FUN_00485b70 */
uint F_00485b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x485b70u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * _Dst;
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  *((undefined1 *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + 0x28))) = 0;
  uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x4)),**(undefined4 * PTR32 *)(param_1 + 0x18),REFG(undefined4, 0x108cc50));
  F_0042e360((undefined *)(param_1 + 0x40),uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  _Dst = (undefined *)(param_1 + 0x94);
  F_00c48350(_Dst,-1,0x40);
  **(undefined4 * PTR32 *)(param_1 + 0x18) = _Dst;
  **(undefined4 * PTR32 *)(param_1 + 0x28) = _Dst;
  **(int * PTR32 *)(param_1 + 0x38) = (param_1 - (int)_Dst) + 0xd3;
  F_0042e360((undefined *)(param_1 + 0x40),param_2);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return param_1;
}

/* ref: FUN_00485c10 */
uint F_00485c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x485c10u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00560a60(this,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 8);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00485c50 */
unsigned int F_00485c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x485c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x58) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_00485c80 */
unsigned int F_00485c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x485c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  undefined * this;
  
  if (param_1 != param_2) {
    this = (undefined *)(param_1 + 0x10c);
    do {
      F_0042c880((undefined *)((int)this + 0x54));
      F_0042c880(this);
      F_0042c880((undefined *)((int)this + -0x54));
      F_0042c880((undefined *)((int)this + -0xb8));
      F_0042c880((undefined *)((int)this + -0x10c));
      iVar1 = (int)this + 0xac;
      this = (undefined *)((int)this + 0x1b8);
    } while (iVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00485ce0 */
unsigned int F_00485ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x485ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  undefined * this;
  
  if (param_1 != param_2) {
    this = (undefined *)(param_1 + 0x60);
    do {
      F_0042c880((undefined *)((int)this + 0xbc));
      F_0042c880((undefined *)((int)this + 0x5c));
      F_0042c880(this);
      F_0042c880((undefined *)((int)this + -0x58));
      iVar1 = (int)this + 0x110;
      this = (undefined *)((int)this + 0x170);
    } while (iVar1 != param_2);
  }
  return 0;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00485d30 */
unsigned int F_00485d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x485d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x58) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00485d60 */
unsigned int F_00485d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x485d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x58) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00485d90 */
unsigned int F_00485d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x485d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x54) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_00485dc0 */
uint F_00485dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x485dc0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (this != (undefined *)0x0) {
        F_0042cbc0(this,iVar1 + (int)this);
        *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)this);
      }
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00485e00 */
uint F_00485e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x485e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00483c50(param_1,param_2,param_3,param_4,0,in_ECX);
  return uVar1;
}

/* ref: FUN_00485e30 */
unsigned int F_00485e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x485e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  undefined * this;
  
  if (param_1 != param_2) {
    this = (undefined *)(param_1 + 0xa8);
    do {
      F_0042c880((undefined *)((int)this + 0x54));
      F_0042c880(this);
      F_0042c880((undefined *)((int)this + -0x54));
      F_0042c880((undefined *)((int)this + -0xa8));
      iVar1 = (int)this + 0xa8;
      this = (undefined *)((int)this + 0x150);
    } while (iVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00485e80 */
uint F_00485e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x485e80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    uVar1 = F_0042cbc0(param_1 + 2,param_2 + 2);
  }
  return uVar1;
}

/* ref: FUN_00485eb0 */
unsigned int F_00485eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x485eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  undefined4 uVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * local_8;
  
  puVar6 = param_2 + (((int)param_3 - (int)((int)(uintptr_t)param_2) >> 2) - ((int)param_3 - (int)((int)(uintptr_t)param_2) >> 0x1f) >>
                     1);
  F_00483d50(param_2,puVar6,param_3 + -1,param_4);
  puVar5 = puVar6;
  while (((param_2 < puVar5 && (uVar3 = (*param_4)(puVar5[-1],*puVar5), (char)uVar3 == '\0')) &&
         (uVar3 = (*param_4)(*puVar5,puVar5[-1]), (char)uVar3 == '\0'))) {
    puVar5 = puVar5 + -1;
  }
  do {
    puVar6 = puVar6 + 1;
    puVar2 = puVar6;
    puVar4 = puVar5;
    if ((param_3 <= puVar6) || (uVar3 = (*param_4)(*puVar6,*puVar5), (char)uVar3 != '\0')) break;
    uVar3 = (*param_4)(*puVar5,*puVar6);
  } while ((char)uVar3 == '\0');
joined_r0x00485f53: ;
  do {
    if (puVar6 < param_3) {
      uVar3 = (*param_4)(*puVar5,*puVar6);
      local_8 = puVar2;
      if ((char)uVar3 == '\0') {
        uVar3 = (*param_4)(*puVar6,*puVar5);
        if ((char)uVar3 != '\0') goto joined_r0x00485f93;
        local_8 = puVar2 + 1;
        uVar1 = *puVar2;
        *puVar2 = *puVar6;
        *puVar6 = uVar1;
      }
      puVar6 = puVar6 + 1;
      puVar2 = local_8;
      goto joined_r0x00485f53;
    }
joined_r0x00485f93: ;
    for (; param_2 < puVar4; puVar4 = puVar4 + -1) {
      uVar3 = (*param_4)(puVar4[-1],*puVar5);
      if ((char)uVar3 == '\0') {
        uVar3 = (*param_4)(*puVar5,puVar4[-1]);
        if ((char)uVar3 != '\0') break;
        uVar1 = puVar5[-1];
        puVar5 = puVar5 + -1;
        *puVar5 = puVar4[-1];
        puVar4[-1] = uVar1;
      }
    }
    if (puVar4 == param_2) {
      if (puVar6 == param_3) {
        *param_1 = puVar5;
        param_1[1] = puVar2;
        return 0;
      }
      if (puVar2 != puVar6) {
        uVar1 = *puVar5;
        *puVar5 = *puVar2;
        *puVar2 = uVar1;
      }
      uVar1 = *puVar5;
      *puVar5 = *puVar6;
      puVar5 = puVar5 + 1;
      *puVar6 = uVar1;
      puVar6 = puVar6 + 1;
      puVar2 = puVar2 + 1;
    }
    else {
      puVar4 = puVar4 + -1;
      if (puVar6 == param_3) {
        puVar5 = puVar5 + -1;
        if (puVar4 != puVar5) {
          uVar1 = *puVar4;
          *puVar4 = *puVar5;
          *puVar5 = uVar1;
        }
        uVar1 = *puVar5;
        *puVar5 = puVar2[-1];
        puVar2[-1] = uVar1;
        puVar2 = puVar2 + -1;
      }
      else {
        uVar1 = *puVar6;
        *puVar6 = *puVar4;
        *puVar4 = uVar1;
        puVar6 = puVar6 + 1;
      }
    }
  } while( true );
}

/* ref: FUN_00486060 */
uint F_00486060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x486060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    uVar1 = F_0042cbc0(param_2 + 2,param_3 + 2);
  }
  return uVar1;
}

/* ref: FUN_00486090 */
unsigned int F_00486090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x486090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    F_0042cbc0(param_2 + 3,param_3 + 3);
    *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)(param_3 + 0x18);
  }
  return 0;
}

/* ref: FUN_004860d0 */
uint F_004860d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4860d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined * this;
  
  this = param_3;
  if (param_1 == param_2) {
    return (uint)param_3;
  }
  do {
    if (this != (undefined *)0x0) {
      F_0042cbc0(this,param_1);
      *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
    }
    param_1 = param_1 + 0x58;
    this = (undefined *)((int)this + 0x58);
  } while (param_1 != param_2);
  return (uint)this;
}

/* ref: FUN_00486110 */
uint F_00486110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x486110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  *(int *)((int)this_00 + 0x54) = *(int *)((int)this_00 + 0x54) + -1;
  if (*(int *)((int)this_00 + 0x54) < 1) {
    F_0042c880(this_00);
    F_00406ad0(this_00);
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00486150 */
unsigned int F_00486150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x486150u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return 0;
}

/* ref: FUN_00486180 */
uint F_00486180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x486180u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = (*(undefined4 *)&gen_args[2]);
  uVar1 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  while (4 < (int)(uVar1 & 0xfffffffc)) {
    (*(int *)&gen_args[1]) = *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + (uVar1 - 4))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + (uVar1 - 4)))) = *(*(undefined4 * PTR32 *)&gen_args[0]);
    F_0047dac0((*(undefined4 * PTR32 *)&gen_args[0]),0,(int)(uVar1 - 4) >> 2,&(*(int *)&gen_args[1]),uVar2);
    uVar1 = uVar1 - 4;
  }
  return uVar1;
}

/* ref: FUN_004861e0 */
uint F_004861e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4861e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 8) {
    if (this != (undefined *)0x0) {
      F_00560a60(this,iVar1);
    }
    this = (undefined *)((int)this + 8);
  }
  return (uint)this;
}

/* ref: FUN_00486220 */
uint F_00486220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x486220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *(int *)((int)this + 4) - *(int *)this;
  F_00484510(this,iVar1 + param_2);
  uVar2 = F_00c46aa0(*(int *)this + iVar1,param_1,param_2);
  return (uint)uVar2;
}

/* ref: FUN_00486260 */
uint F_00486260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x486260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *(int *)((int)this + 4) - *(int *)this;
  F_00484510(this,iVar1 + param_2);
  uVar2 = F_00c46aa0(*(int *)this + iVar1,param_1,param_2);
  return (uint)uVar2;
}

/* ref: FUN_004862a0 */
uint F_004862a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4862a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_004862d0 */
uint F_004862d0(unsigned int gen_a0)
{
  GEN_ENTER(0x4862d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00482650((undefined *)((int)this + 0x30));
  F_00429760(*(undefined4 *)((int)this + 0x30),8,400);
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  uVar1 = 0;
  if (*(int *)((int)this + 0x14) != 0) {
    uVar1 = F_00406810(*(int *)((int)this + 0x14));
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return uVar1;
}

/* ref: Client::UI::Misc::AcquaintanceModule::vf4 */
uint F_00486320(void)
{
  GEN_ENTER(0x486320u, 0u, 0u, 0u, 0u);
  return 0x800;
}

/* ref: Client::UI::Misc::AcquaintanceModule::vf5 */
uint F_00486330(void)
{
  GEN_ENTER(0x486330u, 0u, 0u, 0u, 0u);
  return 100;
}

/* ref: Client::UI::Misc::AcquaintanceModule::vf6 */
uint F_00486340(void)
{
  GEN_ENTER(0x486340u, 0u, 0u, 0u, 0u);
  return 6;
}

/* ref: Client::UI::Misc::AcquaintanceModule::vf0 */
uint F_00486350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x486350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00482650(this + 0x30);
  F_00429760(*(undefined4 *)(this + 0x30),8,400);
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  if (*(int *)(this + 0x14) != 0) {
    F_00406810(*(int *)(this + 0x14));
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandAction::vf1 */
uint F_004863c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4863c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 * puVar3;
  undefined4 extraout_EDX = 0;
  uint uVar4;
  undefined4 uVar5;
  
  uVar4 = *(uint *)(param_1 + 4);
  if ((int)uVar4 < 0) {
    return 7;
  }
  if ((uint)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0x54) < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_0042a990(*(int *)(param_1 + 0x10) + 0x54);
  }
  uVar5 = 1;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x24))(param_2)));
  puVar3 = (undefined4 *)F_00455070(this_00,uVar2,uVar5);
  if (puVar3 == (undefined4 *)0x0) {
    return 2;
  }
  uVar5 = *(undefined4 *)(&REFG(undefined, 0x12fe6d4) + ((int)uVar4 >> 0x18) * 4);
  uVar4 = uVar4 & 0xffffff;
  switch((unsigned int)(uintptr_t)(uVar5)) {
  case 1: ;
    uVar4 = F_00ac1b60(uVar4);
    break;
  case 5: ;
    if (uVar4 == 2) {
      uVar5 = 1;
      uVar4 = 0x5c;
    }
    break;
  case 6: ;
  case 0xb: ;
    goto switchD_0048643d_caseD_6;
  case 9: ;
    uVar4 = F_00ac1cb0(uVar4);
  }
  bVar1 = F_00ac78f0(&REFG(undefined, 0x14bcf40),uVar5,uVar4);
  if (bVar1 != 0) {
    uVar2 = ((code *)*(gen_code32 *)*puVar3)(puVar3);
    F_00ac8af0(&REFG(undefined, 0x14bcf40),uVar5,uVar4,uVar2,extraout_EDX);
    return 0;
  }
switchD_0048643d_caseD_6: ;
  return 7;
}

/* ref: FUN_004864e0 */
uint F_004864e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4864e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  if (param_3 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x10912b0);
    *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[1])REFP(0x1091064));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  F_00483f60(((undefined *)GEN_TOP((*(int *)(*(int *)this + 4) + (int)this))),param_1,param_2);
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandAssist::vf1 */
uint F_00486530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x486530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  
  iVar4 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar1 = iVar4 >> 0x1f;
  if (iVar4 / 0x54 + iVar1 == iVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_0042a990(*(undefined4 *)(param_1 + 0x10));
  }
  uVar6 = 1;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x24))(param_2)));
  pvVar3 = (undefined *)F_00455070(pvVar3,uVar2,uVar6);
  if (pvVar3 != (undefined *)0x0) {
    uVar5 = F_00aa1840(pvVar3);
    if ((int)uVar5 != -0x20000000) {
      uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0),(int)uVar5,(int)(uVar5 >> 0x20));
      if (uVar2 != 0) {
        F_00543ca0(&REFG(undefined4, 0x1375bc0),uVar2,0,0);
        return 0;
      }
    }
  }
  return 2;
}

/* ref: Client::UI::Shell::ShellCommandFollow::vf1 */
uint F_004865c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4865c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined * this_00;
  int * piVar4;
  int iVar5;
  undefined4 extraout_EDX = 0;
  undefined4 uVar6;
  
  iVar5 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar1 = iVar5 >> 0x1f;
  if (iVar5 / 0x54 + iVar1 == iVar1) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_0042a990(*(undefined4 *)(param_1 + 0x10));
  }
  uVar6 = 1;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x24))(param_2)));
  piVar4 = (int *)F_00455070(this_00,uVar3,uVar6);
  if (piVar4 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4);
    if (uVar3 == 1) {
      uVar3 = ((code *)*(gen_code32 *)*piVar4)(piVar4);
      bVar2 = F_00aec010(uVar3,extraout_EDX);
      if (bVar2 != 0) {
        return 0;
      }
    }
  }
  return 2;
}

/* ref: Client::UI::Shell::ShellCommandTarget::vf1 */
uint F_00486640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x486640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  undefined4 uVar4;
  
  if (param_2 != (int *)0x0) {
    iVar3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
    iVar1 = iVar3 >> 0x1f;
    if (iVar3 / 0x54 + iVar1 != iVar1) {
      uVar4 = 0;
      uVar2 = F_0042a990(*(undefined4 *)(param_1 + 0x10));
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x24))(param_2)));
      uVar2 = F_00455070(this_00,uVar2,uVar4);
      if (uVar2 == 0) {
        uVar4 = 1;
        uVar2 = F_0042a990(*(undefined4 *)(param_1 + 0x10));
        uVar2 = F_00a64490(&REFG(undefined, 0x14a9a18),uVar2,uVar4);
        if (uVar2 == 0) {
          return 2;
        }
      }
      F_00477390(uVar2);
      return 0;
    }
  }
  return 7;
}

/* ref: Client::UI::Shell::ShellCommandMarking::vf1 */
uint F_004866d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4866d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  undefined * this_00;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  undefined4 extraout_EDX = 0;
  undefined4 extraout_EDX_00 = 0;
  undefined4 extraout_EDX_01 = 0;
  undefined4 extraout_EDX_02 = 0;
  undefined4 extraout_EDX_03 = 0;
  undefined4 extraout_EDX_04 = 0;
  undefined4 extraout_EDX_05 = 0;
  undefined4 extraout_EDX_06 = 0;
  undefined4 extraout_EDX_07 = 0;
  undefined4 extraout_EDX_08 = 0;
  undefined4 extraout_EDX_09 = 0;
  undefined4 uVar5;
  
  if ((uint)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0x54) < 2) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_0042a990(*(int *)(param_1 + 0x10) + 0x54);
  }
  uVar5 = 1;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x24))(param_2)));
  puVar2 = (undefined4 *)F_00455070(this_00,uVar1,uVar5);
  if ((puVar2 != (undefined4 *)0x0) && (-1 < *(int *)(param_1 + 4))) {
    uVar1 = ((code *)*(gen_code32 *)*puVar2)(puVar2);
    uVar1 = F_00a67f50(uVar1,extraout_EDX);
    if (uVar1 != 0) {
      F_00a6ce30(&REFG(undefined, 0x14b2788),uVar1,0xe0000000,0);
    }
    uVar1 = *(uint *)(param_1 + 4) & 0xfffffffe;
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0x50: ;
      uVar1 = F_00477520(0,5);
      if (0 < (int)uVar1) {
        uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2);
        F_00a6ce30(&REFG(undefined, 0x14b2788),uVar1,uVar3,extraout_EDX_00);
        return 0;
      }
      break;
    case 0x52: ;
    case 0x54: ;
    case 0x56: ;
    case 0x58: ;
    case 0x5a: ;
      uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2);
      F_00a6ce30(&REFG(undefined, 0x14b2788),((int)(uVar1 - 0x52) >> 1) + 1,uVar3,extraout_EDX_01);
      return 0;
    case 0x5c: ;
      uVar1 = F_00477520(5,8);
      if (0 < (int)uVar1) {
        uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2);
        F_00a6ce30(&REFG(undefined, 0x14b2788),uVar1,uVar3,extraout_EDX_02);
        return 0;
      }
      break;
    case 0x5e: ;
    case 0x60: ;
    case 0x62: ;
      uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2);
      F_00a6ce30(&REFG(undefined, 0x14b2788),((int)(uVar1 - 0x5e) >> 1) + 6,uVar3,extraout_EDX_03);
      return 0;
    case 100: ;
      uVar1 = F_00477520(8,10);
      if (0 < (int)uVar1) {
        uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2);
        F_00a6ce30(&REFG(undefined, 0x14b2788),uVar1,uVar3,extraout_EDX_04);
        return 0;
      }
      break;
    case 0x66: ;
    case 0x68: ;
      uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2);
      F_00a6ce30(&REFG(undefined, 0x14b2788),((int)(uVar1 - 0x66) >> 1) + 9,uVar3,extraout_EDX_05);
      return 0;
    case 0x6a: ;
      uVar1 = ((code *)*(gen_code32 *)*puVar2)(puVar2);
      F_00a6ce30(&REFG(undefined, 0x14b2788),0xb,uVar1,extraout_EDX_06);
      return 0;
    case 0x6c: ;
      uVar1 = ((code *)*(gen_code32 *)*puVar2)(puVar2);
      F_00a6ce30(&REFG(undefined, 0x14b2788),0xc,uVar1,extraout_EDX_07);
      return 0;
    case 0x6e: ;
      uVar1 = ((code *)*(gen_code32 *)*puVar2)(puVar2);
      F_00a6ce30(&REFG(undefined, 0x14b2788),0xd,uVar1,extraout_EDX_08);
      return 0;
    case 0x70: ;
      uVar1 = ((code *)*(gen_code32 *)*puVar2)(puVar2);
      F_00a6ce30(&REFG(undefined, 0x14b2788),0xe,uVar1,extraout_EDX_09);
    }
    return 0;
  }
  uVar5 = 0x1a;
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 0x48))(param_2);
  piVar4 = (int *)F_00763050(uVar1,uVar5);
  if (piVar4 == (int *)0x0) {
    return 7;
  }
  uVar1 = ((code *)*(gen_code32 *)(*piVar4 + 0x2c))(piVar4);
  if ((char)uVar1 == '\0') {
    return 10;
  }
  ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4);
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandFocus::vf1 */
uint F_004869c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4869c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  undefined4 * puVar3;
  int iVar4;
  undefined4 extraout_EDX = 0;
  undefined4 uVar5;
  
  iVar4 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar1 = iVar4 >> 0x1f;
  if (iVar4 / 0x54 + iVar1 == iVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_0042a990(*(undefined4 *)(param_1 + 0x10));
  }
  uVar5 = 1;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x24))(param_2)));
  puVar3 = (undefined4 *)F_00455070(this_00,uVar2,uVar5);
  if (puVar3 != (undefined4 *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)*puVar3)(puVar3);
    F_00537470(&REFG(undefined4, 0x1375bc0),uVar2,extraout_EDX);
    return 0;
  }
  F_00537470(&REFG(undefined4, 0x1375bc0),0xe0000000,0);
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandPartyInvite::vf1 */
uint F_00486a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x486a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined * this_00;
  int * piVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (param_2 == (int *)0x0) {
    return 8;
  }
  iVar5 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar1 = iVar5 >> 0x1f;
  if (iVar5 / 0x54 + iVar1 == iVar1) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_0042a990(*(undefined4 *)(param_1 + 0x10));
  }
  uVar6 = 1;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x24))(param_2)));
  piVar4 = (int *)F_00455070(this_00,uVar3,uVar6);
  if (piVar4 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    bVar2 = F_0043f660(uVar3);
    if (bVar2 != 0) {
      uVar3 = ((code *)*(gen_code32 *)(*param_2 + 0x44))(param_2);
      if (*(int *)(uVar3 + 0xc) == 0) {
        return 8;
      }
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
      F_00445760(uVar3);
      return 0;
    }
  }
  return 2;
}

/* ref: Client::UI::Shell::ShellCommandPartyKick::vf1 */
uint F_00486af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x486af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  int * piVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (param_2 != (int *)0x0) {
    iVar4 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
    iVar1 = iVar4 >> 0x1f;
    if (iVar4 / 0x54 + iVar1 == iVar1) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_0042a990(*(undefined4 *)(param_1 + 0x10));
    }
    uVar5 = 1;
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x24))(param_2)));
    piVar3 = (int *)F_00455070(this_00,uVar2,uVar5);
    if ((piVar3 == (int *)0x0) || ((*(byte *)((int)piVar3 + 0x2dd2) & 0x10) == 0)) {
      return 6;
    }
    uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x44))(param_2);
    if (*(int *)(uVar2 + 8) != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
      F_00445960(uVar2);
      return 0;
    }
  }
  return 8;
}

/* ref: Client::UI::Shell::ShellCommandPartyLeader::vf1 */
uint F_00486b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x486b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * this_00;
  int * piVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (param_2 != (int *)0x0) {
    iVar4 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
    iVar1 = iVar4 >> 0x1f;
    if (iVar4 / 0x54 + iVar1 == iVar1) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_0042a990(*(undefined4 *)(param_1 + 0x10));
    }
    uVar5 = 1;
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x24))(param_2)));
    piVar3 = (int *)F_00455070(this_00,uVar2,uVar5);
    if ((piVar3 == (int *)0x0) || ((*(byte *)((int)piVar3 + 0x2dd2) & 0x10) == 0)) {
      return 6;
    }
    uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x44))(param_2);
    if (*(int *)(uVar2 + 8) != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
      F_00445a80(uVar2);
      return 0;
    }
  }
  return 8;
}

/* ref: Client::UI::Shell::ShellCommandCheck::vf1 */
uint F_00486c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x486c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  int * piVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10);
  iVar1 = iVar5 >> 0x1f;
  if (iVar5 / 0x54 + iVar1 == iVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_0042a990(*(undefined4 *)(param_1 + 0x10));
  }
  uVar6 = 1;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x24))(param_2)));
  piVar4 = (int *)F_00455070(pvVar3,uVar2,uVar6);
  if (piVar4 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0xb8))(piVar4);
    if ((char)uVar2 != '\0') {
      uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4);
      if (uVar2 == 1) {
        uVar6 = 0x27;
        uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x48))(param_2);
        pvVar3 = (undefined *)F_00763050(uVar2,uVar6);
        F_00771500(pvVar3,piVar4[0x1d]);
        return 0;
      }
    }
  }
  return 2;
}

/* ref: FUN_00486cd0 */
uint F_00486cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x486cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00484840(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00486d00 */
uint F_00486d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x486d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  piVar4 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar4 = (int *)*puVar1;
  }
  uVar2 = *(int *)((int)this + 0xc) + param_1;
  if (((piVar4 == (int *)0x0) || ((int *)*piVar4 == (int *)0x0)) ||
     (piVar4 = *(int * PTR32 *)*piVar4, piVar4 == (int *)0x0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar4;
  }
  if (*(uint *)(iVar3 + 8) <= uVar2) {
    return *((uint *)GEN_TOP((*(int *)(iVar3 + 4) + (uVar2 - *(uint *)(iVar3 + 8)) * 4)));
  }
  return *((uint *)GEN_TOP((*(int *)(iVar3 + 4) + uVar2 * 4)));
}

/* ref: FUN_00486d50 */
uint F_00486d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x486d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  int * piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)0x0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    piVar1 = *(int * PTR32 *)*param_2;
  }
  uVar3 = 0;
  if ((piVar1 != (int *)0x0) && ((undefined4 *)*piVar1 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*piVar1;
  }
  uVar2 = 0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_2;
  }
  F_00484890(this,param_1,uVar2,0,param_4,uVar3,0,param_4 + 1);
  return param_1;
}

/* ref: FUN_00486dd0 */
uint F_00486dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x486dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * this_00;
  undefined * _Dst;
  
  if (param_1 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x10912c0);
    *(undefined * PTR32 * PTR32 *)((int)this + 0xd8) = (*(undefined * PTR32 (*)[1])REFP(0x1091064));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  this_00 = (undefined4 *)((int)this + 4);
  F_00483f60(((undefined *)GEN_TOP((*(int *)(*(int *)this + 4) + (int)this))),this_00,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x10912bc));
  F_00479880(this_00);
  *this_00 = (*(undefined * PTR32 (*)[15])REFP(0x1091164));
  F_0042b630((int)this + 0x40);
  _Dst = (undefined *)((int)this + 0x94);
  F_00c48350(_Dst,-1,0x40);
  **(undefined4 * PTR32 *)((int)this + 0x18) = _Dst;
  **(undefined4 * PTR32 *)((int)this + 0x28) = _Dst;
  **(int * PTR32 *)((int)this + 0x38) = (int)this_00 + (0xcf - (int)_Dst);
  return (uint)this;
}

/* ref: FUN_00486e70 */
uint F_00486e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x486e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + -0x98));
  F_00479ae0((undefined *)((int)this + -0xd4));
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + -0xd8) + 4))) + -0xd8 + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0((int)this - 0xd8U);
  }
  return (int)this - 0xd8U;
}

/* ref: FUN_00486ee0 */
uint F_00486ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x486ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00482990(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x48,400);
  return (uint)uVar1;
}

/* ref: FUN_00486f20 */
uint F_00486f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x486f20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_00484ab0(this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00486f50 */
uint F_00486f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x486f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  F_00482a30(param_1,this,param_2,param_3);
  return (uint)param_1;
}

/* ref: FUN_00486f80 */
uint F_00486f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x486f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  uVar6 = *(uint *)((int)this + 8);
  if (-uVar6 - 1 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= -uVar7 - 1)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc);
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,0x2c4);
  iVar5 = *(int *)((int)this + 8);
  iVar2 = *(int *)((int)this + 4);
  puVar8 = puVar3 + uVar7;
  for (puVar4 = (undefined4 *)(iVar2 + uVar7 * 4); puVar4 != (undefined4 *)(iVar2 + iVar5 * 4);
      puVar4 = puVar4 + 1) {
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *puVar4;
    }
    puVar8 = puVar8 + 1;
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if (param_1 < uVar7) {
    puVar1 = puVar4 + param_1;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    iVar5 = *(int *)((int)this + 4);
    puVar8 = puVar3;
    for (puVar4 = (undefined4 *)(iVar5 + param_1 * 4); uVar6 = param_1,
        puVar4 != (undefined4 *)(iVar5 + uVar7 * 4); puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
  }
  else {
    puVar1 = puVar4 + uVar7;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 + -1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
  }
  uVar6 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x2c4);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_004870f0 */
uint F_004870f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4870f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  uVar6 = *(uint *)((int)this + 8);
  if (-uVar6 - 1 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= -uVar7 - 1)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc);
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,400);
  iVar5 = *(int *)((int)this + 8);
  iVar2 = *(int *)((int)this + 4);
  puVar8 = puVar3 + uVar7;
  for (puVar4 = (undefined4 *)(iVar2 + uVar7 * 4); puVar4 != (undefined4 *)(iVar2 + iVar5 * 4);
      puVar4 = puVar4 + 1) {
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *puVar4;
    }
    puVar8 = puVar8 + 1;
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if (param_1 < uVar7) {
    puVar1 = puVar4 + param_1;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    iVar5 = *(int *)((int)this + 4);
    puVar8 = puVar3;
    for (puVar4 = (undefined4 *)(iVar5 + param_1 * 4); uVar6 = param_1,
        puVar4 != (undefined4 *)(iVar5 + uVar7 * 4); puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
  }
  else {
    puVar1 = puVar4 + uVar7;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 + -1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
  }
  uVar6 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,400);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00487260 */
unsigned int F_00487260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x487260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x69);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00487260(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_0042c880(piVar3 + 5);
    F_00429760(piVar3,0x6c,0x192);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x69);
  }
  return 0;
}

/* ref: FUN_004872b0 */
uint F_004872b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4872b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  uVar6 = *(uint *)((int)this + 8);
  if (-uVar6 - 1 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= -uVar7 - 1)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc);
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,0x192);
  iVar5 = *(int *)((int)this + 8);
  iVar2 = *(int *)((int)this + 4);
  puVar8 = puVar3 + uVar7;
  for (puVar4 = (undefined4 *)(iVar2 + uVar7 * 4); puVar4 != (undefined4 *)(iVar2 + iVar5 * 4);
      puVar4 = puVar4 + 1) {
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *puVar4;
    }
    puVar8 = puVar8 + 1;
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if (param_1 < uVar7) {
    puVar1 = puVar4 + param_1;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    iVar5 = *(int *)((int)this + 4);
    puVar8 = puVar3;
    for (puVar4 = (undefined4 *)(iVar5 + param_1 * 4); uVar6 = param_1,
        puVar4 != (undefined4 *)(iVar5 + uVar7 * 4); puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
  }
  else {
    puVar1 = puVar4 + uVar7;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 + -1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
  }
  uVar6 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x192);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00487420 */
uint F_00487420(unsigned int gen_a0)
{
  GEN_ENTER(0x487420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = *(int *)((int)this + 0x10);
  while (iVar3 != 0) {
    if (*(int *)((int)this + 0x10) != 0) {
      uVar2 = *(int *)((int)this + 0x10) + -1 + *(int *)((int)this + 0xc);
      if (*(uint *)((int)this + 8) <= uVar2) {
        uVar2 = uVar2 - *(uint *)((int)this + 8);
      }
      iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4)));
      F_0042c880((undefined *)(iVar3 + 0x58));
      F_0042c880((undefined *)(iVar3 + 4));
      piVar1 = (int *)((int)this + 0x10);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
    iVar3 = *(int *)((int)this + 0x10);
  }
  iVar3 = *(int *)((int)this + 8);
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar3 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar3 * 4))),0xac,0x192);
    }
  }
  uVar2 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x192);
    uVar2 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_004874c0 */
uint F_004874c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4874c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  uVar6 = *(uint *)((int)this + 8);
  if (-uVar6 - 1 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= -uVar7 - 1)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc);
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,0x192);
  iVar5 = *(int *)((int)this + 8);
  iVar2 = *(int *)((int)this + 4);
  puVar8 = puVar3 + uVar7;
  for (puVar4 = (undefined4 *)(iVar2 + uVar7 * 4); puVar4 != (undefined4 *)(iVar2 + iVar5 * 4);
      puVar4 = puVar4 + 1) {
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *puVar4;
    }
    puVar8 = puVar8 + 1;
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if (param_1 < uVar7) {
    puVar1 = puVar4 + param_1;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    iVar5 = *(int *)((int)this + 4);
    puVar8 = puVar3;
    for (puVar4 = (undefined4 *)(iVar5 + param_1 * 4); uVar6 = param_1,
        puVar4 != (undefined4 *)(iVar5 + uVar7 * 4); puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
  }
  else {
    puVar1 = puVar4 + uVar7;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 + -1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
  }
  uVar6 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x192);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00487630 */
uint F_00487630(unsigned int gen_a0)
{
  GEN_ENTER(0x487630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00484c30(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00487650 */
uint F_00487650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x487650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * pvVar1;
  undefined * this_00;
  undefined * pvVar2;
  
  if (param_2 != param_3) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    this_00 = param_2;
    for (pvVar2 = param_3; pvVar2 != pvVar1; pvVar2 = (undefined *)((int)pvVar2 + 0x54)) {
      F_0042ccf0(this_00,pvVar2);
      this_00 = (undefined *)((int)this_00 + 0x54);
    }
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (pvVar2 = this_00; pvVar2 != pvVar1; pvVar2 = (undefined *)((int)pvVar2 + 0x54)) {
      F_0042c880(pvVar2);
    }
    *(undefined * PTR32 *)((int)this + 4) = this_00;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_004876d0 */
uint F_004876d0(unsigned int gen_a0)
{
  GEN_ENTER(0x4876d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x54)) {
      F_0042c880(this_00);
    }
    F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x54) * 0x54,0x35);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00487730 */
uint F_00487730(unsigned int gen_a0)
{
  GEN_ENTER(0x487730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00484d00(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00487750 */
uint F_00487750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x487750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  uVar6 = *(uint *)((int)this + 8);
  if (-uVar6 - 1 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= -uVar7 - 1)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc);
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,400);
  iVar5 = *(int *)((int)this + 8);
  iVar2 = *(int *)((int)this + 4);
  puVar8 = puVar3 + uVar7;
  for (puVar4 = (undefined4 *)(iVar2 + uVar7 * 4); puVar4 != (undefined4 *)(iVar2 + iVar5 * 4);
      puVar4 = puVar4 + 1) {
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *puVar4;
    }
    puVar8 = puVar8 + 1;
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if (param_1 < uVar7) {
    puVar1 = puVar4 + param_1;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    iVar5 = *(int *)((int)this + 4);
    puVar8 = puVar3;
    for (puVar4 = (undefined4 *)(iVar5 + param_1 * 4); uVar6 = param_1,
        puVar4 != (undefined4 *)(iVar5 + uVar7 * 4); puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
  }
  else {
    puVar1 = puVar4 + uVar7;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 + -1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
  }
  uVar6 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,400);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_004878c0 */
uint F_004878c0(unsigned int gen_a0)
{
  GEN_ENTER(0x4878c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = *(int *)((int)this + 0x10);
  while (iVar3 != 0) {
    if (*(int *)((int)this + 0x10) != 0) {
      uVar2 = *(int *)((int)this + 0x10) + -1 + *(int *)((int)this + 0xc);
      if (*(uint *)((int)this + 8) <= uVar2) {
        uVar2 = uVar2 - *(uint *)((int)this + 8);
      }
      this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4)));
      F_0042c880((undefined *)((int)this_00 + 0x54));
      F_0042c880(this_00);
      piVar1 = (int *)((int)this + 0x10);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
    iVar3 = *(int *)((int)this + 0x10);
  }
  iVar3 = *(int *)((int)this + 8);
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar3 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar3 * 4))),0xa8,400);
    }
  }
  uVar2 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,400);
    uVar2 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00487960 */
uint F_00487960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x487960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_0047d100(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_004879a0 */
unsigned int F_004879a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4879a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x18) * 0x18,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_004879f0 */
uint F_004879f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4879f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (this != param_1) {
    if (0xf < *(uint *)((int)this + 0x14)) {
      F_00429760(*(undefined4 *)this,*(uint *)((int)this + 0x14) + 1,0x192);
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

/* ref: FUN_00487a80 */
uint F_00487a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x487a80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00484840(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x71) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x71) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x71);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x71);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x71);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x71);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00484060(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00487b40 */
uint F_00487b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x487b40u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x69))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_0047c010(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x69) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x69) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x69) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[0x1a];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 0x1a))) = (char)piVar3[0x1a];
      *(char *)(piVar3 + 0x1a) = (char)iVar1;
      goto LAB_00487c5a;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x69) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x69) == '\0') {
      piVar4 = (int *)F_00473940(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x69) == '\0') {
      uVar5 = F_00473920(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00487c5a: ;
  if ((char)piVar3[0x1a] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[0x1a] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[0x1a] == '\0') {
            *(undefined1 *)(piVar6 + 0x1a) = 1;
            *(undefined1 *)(piVar4 + 0x1a) = 0;
            F_0047c200((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x69) == '\0') {
            if ((*(char *)(*piVar6 + 0x68) != '\x01') || (*(char *)(piVar6[2] + 0x68) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x68) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x68) = 1;
                *(undefined1 *)(piVar6 + 0x1a) = 0;
                F_0047c260((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 0x1a) = (char)piVar4[0x1a];
              *(undefined1 *)(piVar4 + 0x1a) = 1;
              *(undefined1 *)(piVar6[2] + 0x68) = 1;
              F_0047c200((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_00487d18: ;
            *(undefined1 *)(piVar6 + 0x1a) = 0;
          }
        }
        else {
          if ((char)piVar6[0x1a] == '\0') {
            *(undefined1 *)(piVar6 + 0x1a) = 1;
            *(undefined1 *)(piVar4 + 0x1a) = 0;
            F_0047c260((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x69) == '\0') {
            if ((*(char *)(piVar6[2] + 0x68) == '\x01') && (*(char *)(*piVar6 + 0x68) == '\x01'))
            goto LAB_00487d18;
            if (*(char *)(*piVar6 + 0x68) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x68) = 1;
              *(undefined1 *)(piVar6 + 0x1a) = 0;
              F_0047c200((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 0x1a) = (char)piVar4[0x1a];
            *(undefined1 *)(piVar4 + 0x1a) = 1;
            *(undefined1 *)(*piVar6 + 0x68) = 1;
            F_0047c260((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 0x1a) = 1;
  }
  F_0042c880(piVar3 + 5);
  F_00429760(piVar3,0x6c,0x192);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00487da0 */
uint F_00487da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x487da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x54;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x54,0,0x35);
    F_004854c0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    iVar2 = *(int *)this;
    this_00 = *(undefined * PTR32 *)this;
    if (this_00 != (undefined *)0x0) {
      for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x54)) {
        F_0042c880(this_00);
      }
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x54) * 0x54,0x35);
    }
    *(uint *)((int)this + 4) = (((int)pvVar1 - iVar2) / 0x54) * 0x54 + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x54 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00487e80 */
unsigned int F_00487e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x487e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((uint)((*(int *)((int)this + 8) - *(int *)this) / 0x18) < param_1) {
    uVar3 = F_004296a0(param_1 * 0x18,0,400);
    F_00480fd0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x18) * 0x18,400);
    }
    *(uint *)((int)this + 8) = param_1 * 0x18 + uVar3;
    *(uint *)((int)this + 4) = uVar3 + ((iVar2 - iVar1) / 0x18) * 0x18;
    *(uint *)this = uVar3;
  }
  return 0;
}

/* ref: FUN_00487f50 */
unsigned int F_00487f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x487f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 8)) {
    F_005a2670(this);
  }
  return 0;
}

/* ref: FUN_00487f80 */
unsigned int F_00487f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x487f80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  for (iVar1 = param_1; iVar1 != param_2; iVar1 = iVar1 + 0x5c) {
    F_0042c880((undefined *)(iVar1 + 8));
  }
  return 0;
}

/* ref: FUN_00487fb0 */
unsigned int F_00487fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x487fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0x58)) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_00487fe0 */
unsigned int F_00487fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x487fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0xa8)) {
    F_0042c880((undefined *)((int)this + 0x54));
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_00488010 */
uint F_00488010(unsigned int gen_a0)
{
  GEN_ENTER(0x488010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00485070(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00488040 */
uint F_00488040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x488040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * pvVar1;
  undefined * this_00;
  undefined * pvVar2;
  
  if (param_2 != param_3) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    this_00 = param_2;
    for (pvVar2 = param_3; pvVar2 != pvVar1; pvVar2 = (undefined *)((int)pvVar2 + 8)) {
      F_00596cd0(this_00,pvVar2);
      this_00 = (undefined *)((int)this_00 + 8);
    }
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (pvVar2 = this_00; pvVar2 != pvVar1; pvVar2 = (undefined *)((int)pvVar2 + 8)) {
      F_005a2670(pvVar2);
    }
    *(undefined * PTR32 *)((int)this + 4) = this_00;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_004880c0 */
uint F_004880c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4880c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x78,0,400);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x1c) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    F_0042cbc0(puVar1 + 4,param_2);
    puVar1[0x1a] = *(undefined4 *)(param_2 + 0x58);
    puVar1[0x1b] = *(undefined4 *)(param_2 + 0x5c);
  }
  F_00485690(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00488130 */
uint F_00488130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x488130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar1 = (undefined4 *)F_004296a0(0x48,0,400);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x10) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    puVar1[4] = *param_2;
    puVar1[5] = param_2[1];
    puVar3 = param_2 + 2;
    puVar4 = puVar1 + 6;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
  }
  F_00483050(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_004881a0 */
uint F_004881a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4881a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x180];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x178)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x17c);
  F_00486dd0(&(*(int *)(gen_frame + 0x58)),1);
  F_00485b70(&(*(int *)(gen_frame + 0x58)),param_2);
  *(undefined1 *)*(*(int * PTR32 *)(gen_frame + 0x80)) = 0;
  uVar1 = F_0042cc20(((undefined1 *)(gen_frame + 0x4)),*(*(int * PTR32 *)(gen_frame + 0x70)),REFG(undefined4, 0x108cc50));
  F_0042e360(((undefined1 *)(gen_frame + 0x98)),uVar1);
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c48350(((undefined1 *)(gen_frame + 0xec)),-1,0x40);
  *(*(int * PTR32 *)(gen_frame + 0x70)) = (int)((undefined1 *)(gen_frame + 0xec));
  *(*(int * PTR32 *)(gen_frame + 0x80)) = (int)((undefined1 *)(gen_frame + 0xec));
  *(*(undefined4 * PTR32 *)(gen_frame + 0x90)) = 0x3f;
  F_0042cbc0(param_1,((undefined1 *)(gen_frame + 0x98)));
  F_0042c880(((undefined1 *)(gen_frame + 0x98)));
  F_00479ae0(((undefined1 *)(gen_frame + 0x5c)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP((((undefined1 *)(gen_frame + 0x5c)) + *(int *)((*(int *)(gen_frame + 0x58)) + 4) + -4))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x130))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x130)));
  F_00c47745((*(uint *)(gen_frame + 0x178)) ^ (uint)(uint)(gen_frame + 0x17c));
  return (uint)param_1;
}

/* ref: FUN_004882b0 */
uint F_004882b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4882b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  this = param_3;
  if (param_1 != param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00560a60(this,(param_1 - (int)param_3) + (int)this);
      }
      this = (undefined *)((int)this + 8);
    } while ((param_1 - (int)param_3) + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_004882f0 */
unsigned int F_004882f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4882f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x58) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_00488320 */
unsigned int F_00488320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x488320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 in_ECX = 0;
  
  F_00485c80(param_1,param_2,param_3,in_ECX);
  return 0;
}

/* ref: FUN_00488340 */
unsigned int F_00488340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x488340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 in_ECX = 0;
  
  F_00485ce0(param_1,param_2,param_3,in_ECX);
  return 0;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00488360 */
unsigned int F_00488360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x488360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x58) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_00488390 */
unsigned int F_00488390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x488390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x58) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: std::_Destroy_range<fuzzer__fuzzer_allocator<fuzzer__MergeFileInfo>_>_004883c0 */
unsigned int F_004883c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4883c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  
  for (this = param_1; this != param_2; this = this + 0x54) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_004883f0 */
uint F_004883f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4883f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_3;
  if (param_1 != param_2) {
    iVar1 = param_1 - (int)param_3;
    do {
      if (this != (undefined *)0x0) {
        F_0042cbc0(this,iVar1 + (int)this);
        *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar1 + 0x54 + (int)this);
      }
      this = (undefined *)((int)this + 0x58);
    } while (iVar1 + (int)this != param_2);
  }
  return (uint)this;
}

/* ref: FUN_00488430 */
uint F_00488430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x488430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00483c50(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return uVar1;
}

/* ref: FUN_00488460 */
unsigned int F_00488460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x488460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 in_ECX = 0;
  
  F_00485e30(param_1,param_2,param_3,in_ECX);
  return 0;
}

/* ref: FUN_00488480 */
uint F_00488480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x488480u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  bVar3 = true;
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar2[1] + 0x69) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar3 = *(int *)((*(int *)&gen_args[2]) + 0xc) < (int)puVar2[3];
      }
      else {
        bVar3 = *(int *)((*(int *)&gen_args[2]) + 0xc) <= (int)puVar2[3];
      }
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
      if (bVar3 == false) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x69) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_00485880((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_004749b0(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((int)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(int *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_00485880((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_0042c880((undefined *)((*(int *)&gen_args[2]) + 0x14));
  F_00429760((*(int *)&gen_args[2]),0x6c,0x192);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00488570 */
uint F_00488570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x488570u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * this_00;
  uint uVar1;
  int iVar2;
  
  this_00 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - *this_00;
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) != '\0') {
    (*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0)) = CONCAT11((char)(*(undefined4 *)&gen_args[1]),(char)((uint)(*(undefined4 *)&gen_args[1]) >> 8));
    F_00484510(this_00,iVar2 + 2);
    *(ushort *)(*this_00 + iVar2) = (ushort)(*(undefined4 *)&gen_args[1]);
    return (uint)(ushort)(*(undefined4 *)&gen_args[1]);
  }
  uVar1 = F_00484510(this_00,iVar2 + 2);
  *(ushort *)(*this_00 + iVar2) = (ushort)(*(undefined4 *)&gen_args[1]);
  return CONCAT22((short)(uVar1 >> 0x10),(ushort)(*(undefined4 *)&gen_args[1]));
}

/* ref: FUN_004885d0 */
uint F_004885d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4885d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * this_00;
  uint uVar1;
  int iVar2;
  
  this_00 = (uint *)((int)this + 4);
  iVar2 = *(int *)((int)this + 8) - *this_00;
  if (*(char *)((int)this + 0x14) != '\0') {
    uVar1 = F_00484510(this_00,iVar2 + 1);
    *(undefined1 *)(*this_00 + iVar2) = (undefined1)param_1;
    return uVar1;
  }
  F_00484510(this_00,iVar2 + 1);
  uVar1 = *this_00;
  *(undefined1 *)(uVar1 + iVar2) = (undefined1)param_1;
  return uVar1;
}

/* ref: FUN_00488620 */
uint F_00488620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x488620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x6c,0,0x192);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x1a) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_1;
    puVar1[4] = param_1[1];
    F_0042cbc0(puVar1 + 5,param_1 + 2);
  }
  return (uint)puVar1;
}

/* ref: FUN_00488680 */
uint F_00488680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x488680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x74,0,400);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x1c) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_1;
    puVar1[4] = param_1[1];
    puVar1[5] = param_1[2];
    F_0042cbc0(puVar1 + 6,param_1 + 3);
    *(undefined1 *)(puVar1 + 0x1b) = *(undefined1 *)(param_1 + 0x18);
  }
  return (uint)puVar1;
}

/* ref: FUN_004886f0 */
uint F_004886f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4886f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_004860d0(param_1,param_2,param_3,param_4,in_ECX);
  return uVar1;
}

/* ref: FUN_00488720 */
uint F_00488720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x488720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    uVar1 = F_0042cbc0(param_2 + 2,param_3 + 2);
  }
  return uVar1;
}

/* ref: FUN_00488750 */
uint F_00488750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x488750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00486180(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00488760 */
unsigned int F_00488760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x488760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return 0;
}

/* ref: FUN_004887a0 */
uint F_004887a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4887a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00482990(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x48,400);
  return (uint)uVar1;
}

/* ref: Client::UI::Info::InfoProxyFreeCompany::vf1 */
unsigned int F_004887e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4887e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::UI::Info::InfoEventManager::vf0 */
uint F_004887f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4887f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091278));
  F_00484720(this + 4);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00488820 */
uint F_00488820(unsigned int gen_a0)
{
  GEN_ENTER(0x488820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00487260(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00488850 */
uint F_00488850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x488850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    F_004872b0(this,1);
  }
  uVar3 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar3) {
    uVar3 = uVar3 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4))) == 0) {
    uVar2 = F_004296a0(0xc,0,0x192);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4))) = uVar2;
  }
  uVar2 = *(uint *)((int)this + 4);
  puVar1 = *(undefined4 * PTR32 *)(uVar2 + uVar3 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    uVar2 = param_1[2];
    puVar1[2] = uVar2;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return uVar2;
}

/* ref: FUN_004888c0 */
uint F_004888c0(unsigned int gen_a0)
{
  GEN_ENTER(0x4888c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00487420(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x192);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_004888f0 */
uint F_004888f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4888f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00484c30(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x1c,400);
  return (uint)uVar1;
}

/* ref: FUN_00488940 */
uint F_00488940(unsigned int gen_a0)
{
  GEN_ENTER(0x488940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00487650(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00488960 */
uint F_00488960(unsigned int gen_a0)
{
  GEN_ENTER(0x488960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00484d00(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x10,400);
  return (uint)uVar1;
}

/* ref: FUN_004889a0 */
uint F_004889a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4889a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    F_00487750(this,1);
  }
  iVar2 = *(int *)((int)this + 0xc);
  if (iVar2 == 0) {
    iVar2 = *(int *)((int)this + 8);
  }
  iVar2 = iVar2 + -1;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))) == 0) {
    uVar1 = F_004296a0(0x54,0,400);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))) = uVar1;
  }
  uVar1 = *(uint *)((int)this + 4);
  this_00 = *(undefined * PTR32 *)(uVar1 + iVar2 * 4);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_0042cbc0(this_00,param_1);
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  *(int *)((int)this + 0xc) = iVar2;
  return uVar1;
}

/* ref: FUN_00488a10 */
uint F_00488a10(unsigned int gen_a0)
{
  GEN_ENTER(0x488a10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_004878c0(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00488a40 */
uint F_00488a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x488a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  iVar1 = (param_1[1] - *param_1) / 0x18;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (iVar1 != 0) {
    iVar1 = iVar1 * 0x18;
    uVar2 = F_004296a0(iVar1,0,400);
    *(uint *)this = uVar2;
    *(uint *)((int)this + 4) = uVar2;
    *(uint *)((int)this + 8) = iVar1 + uVar2;
    uVar2 = F_00480d60(*param_1,param_1[1],uVar2,(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar2;
  }
  return (uint)this;
}

/* ref: FUN_00488ad0 */
unsigned int F_00488ad0(unsigned int gen_a0)
{
  GEN_ENTER(0x488ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 8) - iVar1) / 0x18) * 0x18,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00488b20 */
uint F_00488b20(unsigned int gen_a0)
{
  GEN_ENTER(0x488b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  if (*(uint *)this != uVar1) {
    uVar1 = F_0047d100(uVar1,uVar1,*(uint *)this,this);
    *(uint *)((int)this + 4) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00488b90 */
uint F_00488b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x488b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004879f0(this,param_1);
  return uVar1;
}

/* ref: FUN_00488ba0 */
uint F_00488ba0(unsigned int gen_a0)
{
  GEN_ENTER(0x488ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00487a80(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00488bc0 */
uint F_00488bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x488bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00487260(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x69) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x69) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x69);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x69);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x69);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x69);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00487b40(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00488c80 */
uint F_00488c80(unsigned int gen_a0)
{
  GEN_ENTER(0x488c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00488bc0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00488ca0 */
unsigned int F_00488ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x488ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x54;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x54;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      F_00487da0(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00487da0(this,uVar1);
  }
  return 0;
}

/* ref: FUN_00488d30 */
unsigned int F_00488d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x488d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x18;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      F_00487e80(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00487e80(this,uVar1);
  }
  return 0;
}

/* ref: FUN_00488dc0 */
uint F_00488dc0(unsigned int gen_a0)
{
  GEN_ENTER(0x488dc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 8)) {
      F_005a2670(this_00);
    }
    F_00429760(*(int *)this,(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3) * 8,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00488e10 */
uint F_00488e10(unsigned int gen_a0)
{
  GEN_ENTER(0x488e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  if (iVar2 != 0) {
    iVar1 = *(int *)((int)this + 4);
    for (; iVar2 != iVar1; iVar2 = iVar2 + 0x5c) {
      F_0042c880((undefined *)(iVar2 + 8));
    }
    F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x5c) * 0x5c,0);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00488e70 */
uint F_00488e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x488e70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  undefined * pvVar1;
  undefined * this_00;
  undefined * pvVar2;
  
  if (param_2 != param_3) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    this_00 = param_2;
    for (pvVar2 = param_3; pvVar2 != pvVar1; pvVar2 = (undefined *)((int)pvVar2 + 0x58)) {
      F_0042ccf0(this_00,pvVar2);
      *(undefined4 *)((int)this_00 + 0x54) = *(undefined4 *)((int)pvVar2 + 0x54);
      this_00 = (undefined *)((int)this_00 + 0x58);
    }
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (pvVar2 = this_00; pvVar2 != pvVar1; pvVar2 = (undefined *)((int)pvVar2 + 0x58)) {
      F_0042c880(pvVar2);
    }
    *(undefined * PTR32 *)((int)this + 4) = this_00;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00488ef0 */
uint F_00488ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x488ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x58)) {
      F_0042c880(this_00);
    }
    F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x58) * 0x58,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00488f50 */
uint F_00488f50(unsigned int gen_a0)
{
  GEN_ENTER(0x488f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0xa8)) {
      F_0042c880((undefined *)((int)this_00 + 0x54));
      F_0042c880(this_00);
    }
    F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0xa8) * 0xa8,400);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00488fc0 */
uint F_00488fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x488fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  undefined * this_00;
  int iVar3;
  
  uVar2 = param_1;
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3) < param_1) {
    uVar2 = F_004296a0(param_1 * 8,0,400);
    F_004882b0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar2);
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    this_00 = *(undefined * PTR32 *)this;
    iVar3 = (int)pvVar1 - (int)this_00;
    if (this_00 != (undefined *)0x0) {
      for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 8)) {
        F_005a2670(this_00);
      }
      F_00429760(*(int *)this,(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3) * 8,400);
    }
    *(uint *)((int)this + 8) = param_1 * 8 + uVar2;
    *(uint *)((int)this + 4) = uVar2 + (iVar3 >> 3) * 8;
    *(uint *)this = uVar2;
  }
  return uVar2;
}

/* ref: FUN_00489090 */
unsigned int F_00489090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x489090u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0x58)) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_004890c0 */
unsigned int F_004890c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4890c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00485c80(param_1,param_2,(int)this + 0xc,param_2);
  return 0;
}

/* ref: FUN_004890e0 */
unsigned int F_004890e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4890e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00485ce0(param_1,param_2,(int)this + 0xc,param_2);
  return 0;
}

/* ref: FUN_00489100 */
unsigned int F_00489100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x489100u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0x58)) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_00489130 */
unsigned int F_00489130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x489130u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0x58)) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_00489160 */
unsigned int F_00489160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x489160u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * this;
  
  for (this = param_1; this != param_2; this = (undefined *)((int)this + 0x54)) {
    F_0042c880(this);
  }
  return 0;
}

/* ref: FUN_00489190 */
uint F_00489190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x489190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x58;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0x58,0,400);
    F_004883f0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3);
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    iVar2 = *(int *)this;
    this_00 = *(undefined * PTR32 *)this;
    if (this_00 != (undefined *)0x0) {
      for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x58)) {
        F_0042c880(this_00);
      }
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x58) * 0x58,400);
    }
    *(uint *)((int)this + 4) = (((int)pvVar1 - iVar2) / 0x58) * 0x58 + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0x58 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00489280 */
uint F_00489280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x489280u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00485070(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x71) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x71) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x71);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x71);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x71);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x71);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00484e10(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00489340 */
uint F_00489340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x489340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0xa8;
  if (uVar3 < param_1) {
    uVar3 = F_004296a0(param_1 * 0xa8,0,400);
    F_00483c50(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc,0,uVar3);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00487fe0(iVar1,*(undefined4 *)((int)this + 4));
      F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0xa8) * 0xa8,400);
    }
    *(uint *)((int)this + 4) = ((iVar2 - iVar1) / 0xa8) * 0xa8 + uVar3;
    *(uint *)((int)this + 8) = param_1 * 0xa8 + uVar3;
    *(uint *)this = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00489420 */
unsigned int F_00489420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x489420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00485e30(param_1,param_2,(int)this + 0xc,param_2);
  return 0;
}

/* ref: FUN_00489440 */
uint F_00489440(unsigned int gen_a0)
{
  GEN_ENTER(0x489440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00488040(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00489460 */
uint F_00489460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x489460u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * this_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  this_00 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - *this_00;
  F_00484510(this_00,iVar3 + 1);
  uVar2 = (*(uint *)&gen_args[3]) & 0xffff;
  *(undefined1 *)(*this_00 + iVar3) = *(*(undefined1 * PTR32 *)&gen_args[1]);
  iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - *this_00;
  uVar1 = uVar2;
  if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) != '\0') {
    (*(undefined2 *)((char *)&(*(uint *)&gen_args[3]) + 0)) = CONCAT11((char)(*(uint *)&gen_args[3]),(char)((*(uint *)&gen_args[3]) >> 8));
    uVar1 = (uint)(ushort)(*(uint *)&gen_args[3]);
  }
  (*(uint *)&gen_args[3]) = uVar1;
  F_00484510(this_00,iVar3 + 2);
  *(ushort *)(*this_00 + iVar3) = (ushort)(*(uint *)&gen_args[3]);
  iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - *this_00;
  F_00484510(this_00,iVar3 + uVar2);
  uVar4 = F_00c46aa0(*this_00 + iVar3,(*(undefined4 *)&gen_args[2]),uVar2);
  return (uint)uVar4;
}

/* ref: FUN_004894f0 */
uint F_004894f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4894f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * this_00;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *(int *)((int)this + 8) - *(int *)((int)this + 4);
  this_00 = (int *)((int)this + 4);
  F_00484510(this_00,iVar1 + 1);
  *(undefined1 *)(*this_00 + iVar1) = *param_1;
  iVar1 = *(int *)((int)this + 8) - *this_00;
  F_00484510(this_00,iVar1 + 1);
  *(byte *)(*this_00 + iVar1) = (byte)param_3;
  iVar1 = *(int *)((int)this + 8) - *this_00;
  F_00484510(this_00,iVar1 + (uint)(byte)param_3);
  uVar2 = F_00c46aa0(*this_00 + iVar1,param_2,(uint)(byte)param_3);
  return (uint)uVar2;
}

/* ref: FUN_00489560 */
uint F_00489560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x489560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * this_00;
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = *(int *)((int)this + 8) - *(int *)((int)this + 4);
  this_00 = (int *)((int)this + 4);
  F_00484510(this_00,iVar1 + 1);
  *(undefined1 *)(*this_00 + iVar1) = *param_1;
  iVar1 = *(int *)((int)this + 8) - *this_00;
  F_00484510(this_00,iVar1 + 1);
  *(byte *)(*this_00 + iVar1) = (byte)param_3;
  iVar1 = *(int *)((int)this + 8) - *this_00;
  F_00484510(this_00,(uint)(byte)param_3 + iVar1);
  uVar2 = F_00c46aa0(*this_00 + iVar1,param_2,(uint)(byte)param_3);
  return (uint)uVar2;
}

/* ref: FUN_004895d0 */
uint F_004895d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4895d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x6c,0,0x192);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x1a) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
    puVar1[4] = param_2[1];
    F_0042cbc0(puVar1 + 5,param_2 + 2);
  }
  F_00488480(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00489640 */
uint F_00489640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x489640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x74,0,400);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x1c) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
    puVar1[4] = param_2[1];
    puVar1[5] = param_2[2];
    F_0042cbc0(puVar1 + 6,param_2 + 3);
    *(undefined1 *)(puVar1 + 0x1b) = *(undefined1 *)(param_2 + 0x18);
  }
  F_00485790(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_004896c0 */
uint F_004896c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4896c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_004860d0(param_1,param_2,param_3,(int)this + 0xc,param_3);
  return uVar1;
}

/* ref: FUN_004896f0 */
uint F_004896f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4896f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x6c,0,0x192);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x1a) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_1;
    puVar1[4] = param_1[1];
    F_0042cbc0(puVar1 + 5,param_1 + 2);
  }
  return (uint)puVar1;
}

/* ref: FUN_00489750 */
uint F_00489750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x489750u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
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
    uVar2 = iVar1 >> 2;
    if ((int)uVar2 < 0x21) {
LAB_004897e2: ;
      if (1 < (int)uVar2) {
        uVar2 = F_004813c0(iVar3,iVar5,param_4,0);
      }
      return uVar2;
    }
    if (iVar4 < 1) {
      if (0x20 < (int)uVar2) {
        if (4 < (int)(iVar5 - iVar3 & 0xfffffffcU)) {
          F_00481310(iVar3,iVar5,param_4,0,0);
        }
        uVar2 = F_00486180(iVar3,iVar5,param_4);
        return uVar2;
      }
      goto LAB_004897e2;
    }
    F_00485eb0(&(*(int *)(gen_frame + 0x4)),iVar3,iVar5,param_4);
    iVar4 = iVar4 / 2 + (iVar4 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x4)) - iVar3 & 0xfffffffcU) < (int)(iVar5 - (*(int *)(gen_frame + 0x8)) & 0xfffffffcU)) {
      F_00489750(iVar3,(*(int *)(gen_frame + 0x4)),iVar4,param_4);
      iVar3 = (*(int *)(gen_frame + 0x8));
    }
    else {
      F_00489750((*(int *)(gen_frame + 0x8)),iVar5,iVar4,param_4);
      iVar5 = (*(int *)(gen_frame + 0x4));
    }
    iVar1 = iVar5 - iVar3;
  } while( true );
}

/* ref: FUN_00489840 */
uint F_00489840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x489840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x1c,0,400);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 6) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_1;
    puVar1[4] = param_1[1];
    puVar1[5] = param_1[2];
  }
  return (uint)puVar1;
}

/* ref: FUN_00489890 */
unsigned int F_00489890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x489890u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this;
  
  if (param_1 == 1) {
    this = *(undefined * PTR32 *)*param_2;
    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + -1;
    if (*(int *)((int)this + 0x54) < 1) {
      F_0042c880(this);
      F_00406ad0(this);
    }
  }
  return 0;
}

/* ref: FUN_004898c0 */
uint F_004898c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4898c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  int iVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  iVar1 = param_1[1];
  iVar2 = *param_1;
  *(undefined4 *)this = 0;
  iVar1 = iVar1 - iVar2 >> 3;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (iVar1 != 0) {
    iVar1 = iVar1 * 8;
    this_00 = (undefined *)F_004296a0(iVar1,0,400);
    *(undefined * PTR32 *)((int)this + 8) = (undefined *)(iVar1 + (int)this_00);
    *(undefined * PTR32 *)this = this_00;
    *(undefined * PTR32 *)((int)this + 4) = this_00;
    iVar1 = param_1[1];
    for (iVar2 = *param_1; iVar2 != iVar1; iVar2 = iVar2 + 8) {
      if (this_00 != (undefined *)0x0) {
        F_00560a60(this_00,iVar2);
      }
      this_00 = (undefined *)((int)this_00 + 8);
    }
    *(undefined * PTR32 *)((int)this + 4) = this_00;
  }
  return (uint)this;
}

/* ref: FUN_00489950 */
uint F_00489950(unsigned int gen_a0)
{
  GEN_ENTER(0x489950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_004878c0((undefined *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),8,400);
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10904dc));
  return (uint)uVar1;
}

/* ref: Client::UI::Info::InfoProxyFreeCompany::vf0 */
uint F_00489980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x489980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10912cc));
  *(undefined * PTR32 * PTR32 *)(this + 0x490) = (*(undefined * PTR32 (*)[1])REFP(0x1091278));
  F_00484720(this + 0x494);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004899c0 */
uint F_004899c0(unsigned int gen_a0)
{
  GEN_ENTER(0x4899c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  ulonglong uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x10912ec));
  F_00482990((undefined *)((int)this + 0x30),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x34),
               *(undefined4 * PTR32 *)((int)this + 0x34));
  F_00429760(*(undefined4 *)((int)this + 0x34),0x48,400);
  iVar1 = *(int *)((int)this + 0x20);
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 0x28) - iVar1) / 0x18) * 0x18,400);
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x109078c));
  uVar2 = F_00406b30(*(undefined4 *)((int)this + 0x18));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  return (uint)uVar2;
}

/* ref: Client::UI::Info::InfoProxyPartyMember::vf0 */
uint F_00489a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x489a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_004899c0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00489a90 */
uint F_00489a90(unsigned int gen_a0)
{
  GEN_ENTER(0x489a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00484d00(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x10,400);
  return (uint)uVar1;
}

/* ref: Client::UI::Misc::LogFilterConfig::vf4 */
uint F_00489ad0(void)
{
  GEN_ENTER(0x489ad0u, 0u, 0u, 0u, 0u);
  return 0x800;
}

/* ref: Client::UI::Misc::LogFilterConfig::vf5 */
uint F_00489ae0(void)
{
  GEN_ENTER(0x489ae0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::UI::Misc::LogFilterConfig::vf6 */
uint F_00489af0(void)
{
  GEN_ENTER(0x489af0u, 0u, 0u, 0u, 0u);
  return 4;
}

/* ref: Client::UI::Misc::LogFilterConfig::vf7 */
unsigned int F_00489b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x489b00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  if ((param_1 != 0 || param_2 != 0) &&
     ((param_1 != *(int *)(this + 8) || (param_2 != *(int *)(this + 0xc))))) {
    this[0x2c] = (undefined1)0x1;
  }
  *(int *)(this + 8) = param_1;
  *(int *)(this + 0xc) = param_2;
  if (param_1 == 0 && param_2 == 0) {
    F_0044bb10(this);
  }
  return 0;
}

/* ref: FUN_00489b60 */
uint F_00489b60(unsigned int gen_a0)
{
  GEN_ENTER(0x489b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00484c30(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x1c,400);
  return (uint)uVar1;
}

/* ref: Client::UI::Shell::ShellCommandLookParty::vf1 */
uint F_00489ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x489ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  undefined * this_00;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(uint *)(gen_frame + 0x30)) = param_1;
  if (param_2 == (int *)0x0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c) ^ (uint)(uint)(gen_frame + 0x8c));
    return 7;
  }
  uVar3 = ((code *)*(gen_code32 *)(*param_2 + 0x44))(param_2);
  this_00 = *(undefined * PTR32 *)(uVar3 + 0x28);
  if (this_00 == (undefined *)0x0) {
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
    return 7;
  }
  uVar3 = F_0077a990(*(undefined4 *)((int)this_00 + 0x18),*(undefined4 *)((int)this_00 + 0x1c));
  iVar4 = *(int *)((*(uint *)(gen_frame + 0x30)) + 0x14) - *(int *)((*(uint *)(gen_frame + 0x30)) + 0x10);
  iVar1 = iVar4 >> 0x1f;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  if (iVar4 / 0x54 + iVar1 != iVar1) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x34)),&REFG(undefined, 0x1091348),REFG(undefined4, 0x108cc50));
    F_00ada2c0(*(undefined4 *)((*(uint *)(gen_frame + 0x30)) + 0x10),((undefined1 *)(gen_frame + 0x34)),&(*(int *)(gen_frame + 0xc)));
    F_0042c880(((undefined1 *)(gen_frame + 0x34)));
  }
  cVar2 = REFG(char, 0x14ab0d4);
  iVar1 = ((*(int *)(gen_frame + 0x10)) - (*(int *)(gen_frame + 0xc))) / 0x54;
  if (iVar1 == 0) {
    (*(uint *)(gen_frame + 0x2c)) = -(uint)(uVar3 != 4) & 4;
  }
  else {
    (*(uint *)(gen_frame + 0x2c)) = 4;
  }
  (*(uint *)(gen_frame + 0x30)) = 0;
  (*(uint *)(gen_frame + 0x20)) = 1 << (REFG(char, 0x14ab0d4) - 1U & 0x1f);
  if (0 < iVar1) {
    (*(int *)(gen_frame + 0x28)) = 0;
    (*(int *)(gen_frame + 0x1c)) = iVar1;
    do {
      uVar3 = F_0043da00(param_2,(*(int *)(gen_frame + 0xc)) + (*(int *)(gen_frame + 0x28)),&(*(int *)(gen_frame + 0x24)));
      if ((char)uVar3 == '\0') {
        uVar3 = F_0043dac0(param_2,(*(int *)(gen_frame + 0xc)) + (*(int *)(gen_frame + 0x28)),&(*(int *)(gen_frame + 0x24)));
        iVar1 = (*(int *)(gen_frame + 0x24));
        if (((char)uVar3 != '\0') &&
           (uVar3 = F_00a68280(&REFG(undefined1, 0x14ab070),(*(int *)(gen_frame + 0x24)),1), (short)uVar3 != 0)) {
          (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) | 1 << ((char)iVar1 - 1U & 0x1f);
        }
      }
      else {
        switch((unsigned int)(uintptr_t)((*(int *)(gen_frame + 0x24)))) {
        case 0: ;
          (*(uint *)(gen_frame + 0x2c)) = 4;
          break;
        case 2: ;
          (*(uint *)(gen_frame + 0x2c)) = 0;
          break;
        case 0xe6: ;
        case 0xe8: ;
        case 0xea: ;
        case 0xec: ;
          (*(uint *)(gen_frame + 0x30)) = (*(uint *)(gen_frame + 0x30)) | 1 << ((byte)((*(int *)(gen_frame + 0x24)) + -0xe6 >> 1) & 0x1f);
        }
      }
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 0x54;
      iVar1 = (*(int *)(gen_frame + 0x1c)) + -1;
      (*(int *)(gen_frame + 0x1c)) = iVar1;
    } while (iVar1 != 0);
  }
  if ((*(uint *)(gen_frame + 0x2c)) == 4) {
    if ((*(uint *)((int)this_00 + 0x20) != (*(uint *)(gen_frame + 0x20))) ||
       (*(int *)((int)this_00 + 0x24) != (int)(*(uint *)(gen_frame + 0x20)) >> 0x1f)) {
      *(uint *)((int)this_00 + 0x20) = (*(uint *)(gen_frame + 0x20));
      *(int *)((int)this_00 + 0x24) = (int)(*(uint *)(gen_frame + 0x20)) >> 0x1f;
      *(undefined1 *)((int)this_00 + 0x1ec) = 1;
    }
    if (*(char *)((int)this_00 + 0x28) != cVar2) {
      *(char *)((int)this_00 + 0x28) = cVar2;
      *(undefined1 *)((int)this_00 + 0x1ec) = 1;
    }
    if ((((*(uint *)(gen_frame + 0x30)) != 0) && (cVar2 = (char)(*(uint *)(gen_frame + 0x30)), cVar2 != '\0')) &&
       (*(char *)((int)this_00 + 0x29) != cVar2)) {
      *(char *)((int)this_00 + 0x29) = cVar2;
      *(undefined1 *)((int)this_00 + 0x1ec) = 1;
    }
  }
  uVar5 = F_0077a9f0((*(uint *)(gen_frame + 0x2c)));
  if ((*(int *)((int)this_00 + 0x18) != (int)uVar5) ||
     (*(int *)((int)this_00 + 0x1c) != (int)(uVar5 >> 0x20))) {
    *(ulonglong *)((int)this_00 + 0x18) = uVar5;
    *(undefined1 *)((int)this_00 + 0x1ec) = 1;
  }
  F_004408a0(this_00,0);
  F_004876d0(&(*(int *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return 0;
}

/* ref: FUN_00489f20 */
uint F_00489f20(unsigned int gen_a0)
{
  GEN_ENTER(0x489f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00487a80(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x78,400);
  return (uint)uVar1;
}

/* ref: FUN_00489f60 */
uint F_00489f60(unsigned int gen_a0)
{
  GEN_ENTER(0x489f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00488bc0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x6c,0x192);
  return (uint)uVar1;
}

/* ref: FUN_00489fa0 */
uint F_00489fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x489fa0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_0047f720((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x4)),(*(uint *)&gen_args[1]));
  (*(uint *)&gen_args[1]) = 0;
  F_004835f0((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]),0);
  F_00488bc0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_0048a040 */
unsigned int F_0048a040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x48a040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00488ca0(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0042cbc0(*(undefined * PTR32 *)((int)this + 4),((int)(param_1 - uVar2) / 0x54) * 0x54 + *(int *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_00488ca0(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_0042cbc0(*(undefined * PTR32 *)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
  return 0;
}

/* ref: FUN_0048a100 */
unsigned int F_0048a100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x48a100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00488d30(this,1);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar2) / 0x18) * 0x18)));
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      puVar2[4] = puVar1[4];
      puVar2[5] = puVar1[5];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x18;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00488d30(this,1);
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
      puVar1[2] = param_1[2];
      puVar1[3] = param_1[3];
      puVar1[4] = param_1[4];
      puVar1[5] = param_1[5];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x18;
  return 0;
}

/* ref: FUN_0048a1f0 */
uint F_0048a1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x48a1f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00488e70(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),*(undefined4 *)this,*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_0048a220 */
uint F_0048a220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x48a220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00488fc0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00488fc0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_0048a290 */
uint F_0048a290(unsigned int gen_a0)
{
  GEN_ENTER(0x48a290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x58)) {
      F_0042c880(this_00);
    }
    F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x58) * 0x58,0);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_0048a2f0 */
uint F_0048a2f0(unsigned int gen_a0)
{
  GEN_ENTER(0x48a2f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_00485c80(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x1b8) * 0x1b8,0);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_0048a360 */
uint F_0048a360(unsigned int gen_a0)
{
  GEN_ENTER(0x48a360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_00485ce0(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x170) * 0x170,0);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_0048a3d0 */
uint F_0048a3d0(unsigned int gen_a0)
{
  GEN_ENTER(0x48a3d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x58)) {
      F_0042c880(this_00);
    }
    F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x58) * 0x58,0);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_0048a430 */
uint F_0048a430(unsigned int gen_a0)
{
  GEN_ENTER(0x48a430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x58)) {
      F_0042c880(this_00);
    }
    F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x58) * 0x58,0);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_0048a490 */
uint F_0048a490(unsigned int gen_a0)
{
  GEN_ENTER(0x48a490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 4);
    for (; this_00 != pvVar1; this_00 = (undefined *)((int)this_00 + 0x54)) {
      F_0042c880(this_00);
    }
    F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x54) * 0x54,0);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_0048a4f0 */
unsigned int F_0048a4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x48a4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x58;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x58;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      F_00489190(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00489190(this,uVar1);
  }
  return 0;
}

/* ref: FUN_0048a580 */
uint F_0048a580(unsigned int gen_a0)
{
  GEN_ENTER(0x48a580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00489280(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_0048a5a0 */
unsigned int F_0048a5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x48a5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0xa8;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xa8;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      F_00489340(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_00489340(this,uVar1);
  }
  return 0;
}

/* ref: FUN_0048a630 */
uint F_0048a630(unsigned int gen_a0)
{
  GEN_ENTER(0x48a630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_00485e30(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x150) * 0x150,400
                        );
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_0048a6a0 */
uint F_0048a6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x48a6a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * puVar1;
  uint uVar2;
  uint * puVar3;
  uint * local_8;
  
  puVar3 = *(uint * PTR32 *)((int)this + 4);
  if (*(char *)((int)param_1 + 0x69) == '\0') {
    puVar1 = (uint *)F_004296a0(0x6c,0,0x192);
    *puVar1 = *(uint *)((int)this + 4);
    puVar1[1] = *(uint *)((int)this + 4);
    puVar1[2] = *(uint *)((int)this + 4);
    *(undefined2 *)(puVar1 + 0x1a) = 0;
    if (puVar1 + 3 != (uint *)0x0) {
      puVar1[3] = param_1[3];
      puVar1[4] = param_1[4];
      F_0042cbc0(puVar1 + 5,param_1 + 5);
    }
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 0x1a) = *(undefined1 *)(param_1 + 0x1a);
    local_8 = puVar3;
    if (*(char *)((int)puVar3 + 0x69) != '\0') {
      local_8 = puVar1;
    }
    uVar2 = F_0048a6a0(this,(undefined4 *)*param_1,(uint)puVar1);
    *puVar1 = uVar2;
    uVar2 = F_0048a6a0(this,(undefined4 *)param_1[2],(uint)puVar1);
    puVar1[2] = uVar2;
    puVar3 = local_8;
  }
  return (uint)puVar3;
}

/* ref: FUN_0048a750 */
uint F_0048a750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x48a750u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00489750(param_1,param_2,param_2 - param_1 >> 2,param_3);
  return uVar1;
}

/* ref: FUN_0048a780 */
uint F_0048a780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x48a780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x1c,0,400);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 6) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
    puVar1[4] = param_2[1];
    puVar1[5] = param_2[2];
  }
  F_00482e90(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_0048a7e0 */
uint F_0048a7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x48a7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this;
  undefined4 * puVar1;
  
  puVar1 = param_1;
  if ((param_1 != (undefined4 *)0x0) && (param_1 == (undefined4 *)0x1)) {
    puVar1 = (undefined4 *)*param_2;
    this = (undefined *)*puVar1;
    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + -1;
    if (*(int *)((int)this + 0x54) < 1) {
      F_0042c880(this);
      puVar1 = (undefined4 *)F_00406ad0(this);
    }
  }
  return (uint)puVar1;
}

/* ref: FUN_0048a820 */
uint F_0048a820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x48a820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  F_004898c0((undefined *)((int)this + 0x54),param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_0048a850 */
uint F_0048a850(unsigned int gen_a0)
{
  GEN_ENTER(0x48a850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00487a80(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x78,400);
  return (uint)uVar1;
}

/* ref: FUN_0048a890 */
uint F_0048a890(unsigned int gen_a0)
{
  GEN_ENTER(0x48a890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00488bc0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x6c,0x192);
  return (uint)uVar1;
}

/* ref: FUN_0048a8d0 */
uint F_0048a8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x48a8d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00488bc0((undefined *)((int)this + 0x72c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x730),
               *(undefined4 * PTR32 *)((int)this + 0x730));
  F_00429760(*(undefined4 *)((int)this + 0x730),0x6c,0x192);
  F_00a4b160((undefined *)((int)this + 0x708));
  F_0042c880((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_0048a930 */
uint F_0048a930(unsigned int gen_a0)
{
  GEN_ENTER(0x48a930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00488dc0((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: Client::UI::Misc::LogFilterConfig::vf0 */
uint F_0048a950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x48a950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_004564b0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0048a9a0 */
uint F_0048a9a0(unsigned int gen_a0)
{
  GEN_ENTER(0x48a9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00488ef0((undefined *)((int)this + 0xb8));
  F_0042c880((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: Client::UI::Shell::ShellCommandEcho::vf1 */
uint F_0048a9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x48a9e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  int iVar4;
  undefined4 uVar5;
  undefined1 * puVar6;
  undefined * pvVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  if ((param_2 != (int *)0x0) &&
     (iVar4 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10), iVar1 = iVar4 >> 0x1f,
     iVar4 / 0x54 + iVar1 != iVar1)) {
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x24))(param_2);
    pvVar7 = (undefined *)(uVar2 + 0x10);
    uVar3 = F_00a27410((undefined *)(uVar2 + 0x110),((undefined1 *)(gen_frame + 0x60)),uVar5,uVar2,1,0x3ff);
    F_0042ccf0(pvVar7,uVar3);
    F_0042c880(((undefined1 *)(gen_frame + 0x60)));
    F_00a27330((undefined *)(uVar2 + 0x110),pvVar7);
    F_0042cbc0(((char * PTR32 *)(gen_frame + 0xb4)),pvVar7);
    if (*((char * PTR32 *)(gen_frame + 0xb4))[0] != '\0') {
      F_0042cc20(((undefined1 *)(gen_frame + 0x60)),&REFG(undefined1, 0x107fc63),REFG(undefined4, 0x108cc50));
      uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x24))(param_2);
      *(undefined1 *)(uVar2 + 0x1b4) = 0;
      pvVar7 = (undefined *)(uVar2 + 0x10);
      uVar2 = F_00a27410((undefined *)(uVar2 + 0x110),((undefined1 *)(gen_frame + 0xc)),((char * PTR32 *)(gen_frame + 0xb4)),uVar2,0,0xffffffff);
      F_0042ccf0(pvVar7,uVar2);
      F_0042c880(((undefined1 *)(gen_frame + 0xc)));
      uVar8 = 0;
      puVar6 = ((undefined1 *)(gen_frame + 0x60));
      uVar5 = 0x38;
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x28))(param_2)));
      F_00459b00(this_00,uVar5,puVar6,pvVar7,uVar8);
      F_0042c880(((undefined1 *)(gen_frame + 0x60)));
      F_0042c880(((char * PTR32 *)(gen_frame + 0xb4)));
      F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
      return 0;
    }
    F_0042c880(((char * PTR32 *)(gen_frame + 0xb4)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return 7;
}

/* ref: Client::UI::Shell::ShellCommandChatParty::vf1 */
uint F_0048b060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x48b060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined * this_00;
  int iVar7;
  undefined1 * puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  iVar1 = *(int *)(param_1 + 0x10);
  iVar7 = *(int *)(param_1 + 0x14) - iVar1;
  iVar2 = iVar7 >> 0x1f;
  if (iVar7 / 0x54 + iVar2 == iVar2) {
    pvVar6 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x20))(param_2)));
    F_0042cc20(((undefined1 *)(gen_frame + 0xb4)),"/party",REFG(undefined4, 0x108cc50));
    bVar3 = F_00abe720(pvVar6,((undefined1 *)(gen_frame + 0xb4)));
    F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
    if (bVar3 != 0) {
      *(undefined4 *)((int)pvVar6 + 0x718) = 2;
    }
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
    return 0;
  }
  if (REFG(char, 0x1338ad4) == '\0') {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c) ^ (uint)(uint)(gen_frame + 0x10c));
    return 6;
  }
  uVar4 = ((code *)*(gen_code32 *)(*param_2 + 0x24))(param_2);
  pvVar6 = (undefined *)(uVar4 + 0x10);
  uVar5 = F_00a27410((undefined *)(uVar4 + 0x110),((undefined1 *)(gen_frame + 0xb4)),iVar1,uVar4,1,0x3ff);
  F_0042ccf0(pvVar6,uVar5);
  F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
  F_00a27330((undefined *)(uVar4 + 0x110),pvVar6);
  F_0042cbc0(((char * PTR32 *)(gen_frame + 0x60)),pvVar6);
  pvVar6 = REFG(undefined4, 0x1379694);
  if (*((char * PTR32 *)(gen_frame + 0x60))[0] != '\0') {
    if (REFG(undefined4, 0x1379694) != (undefined *)0x0) {
      uVar9 = 0xe;
      uVar4 = F_0042a970(((char * PTR32 *)(gen_frame + 0x60)));
      F_00aa5d80(pvVar6,uVar4,uVar9);
    }
    pvVar6 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    F_00974ee0(pvVar6,REFG(undefined4, 0x1338ac8),REFG(undefined4, 0x1338acc),((char * PTR32 *)(gen_frame + 0x60)));
    uVar4 = ((code *)*(gen_code32 *)(*param_2 + 0x44))(param_2);
    if (((**(char * PTR32 *)(uVar4 + 0x50) == '\0') && (*((int *)GEN_TOP((*(int *)(uVar4 + 8) + 8))) != 0)) &&
       (iVar1 = *((int *)GEN_TOP((*(int *)(uVar4 + 8) + 0x18))), iVar1 != 0)) {
      F_0042e430((undefined *)(uVar4 + 0x50),iVar1 + 0x1c);
    }
    uVar4 = F_0042a990((undefined *)(uVar4 + 0x50));
    F_0042cc20(((undefined1 *)(gen_frame + 0xb4)),uVar4,REFG(undefined4, 0x108cc50));
    uVar4 = ((code *)*(gen_code32 *)(*param_2 + 0x24))(param_2);
    *(undefined1 *)(uVar4 + 0x1b4) = 1;
    pvVar6 = (undefined *)(uVar4 + 0x10);
    uVar4 = F_00a27410((undefined *)(uVar4 + 0x110),((undefined1 *)(gen_frame + 0xc)),((char * PTR32 *)(gen_frame + 0x60)),uVar4,0,0xffffffff);
    F_0042ccf0(pvVar6,uVar4);
    F_0042c880(((undefined1 *)(gen_frame + 0xc)));
    uVar10 = 0;
    puVar8 = ((undefined1 *)(gen_frame + 0xb4));
    uVar9 = 0xe;
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x28))(param_2)));
    F_00459b00(this_00,uVar9,puVar8,pvVar6,uVar10);
    F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
  }
  F_0042c880(((char * PTR32 *)(gen_frame + 0x60)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandEmote::vf1 */
uint F_0048bad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x48bad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  int iVar1;
  int * this_00;
  byte bVar2;
  int * piVar3;
  undefined * pvVar4;
  uint uVar5;
  float * pfVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 * puVar9;
  undefined1 * puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  this_00 = REFG(undefined4, 0x1379694);
  (*(uint *)(gen_frame + 0xd8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc);
  (*(int * PTR32 *)(gen_frame + 0x2c)) = REFG(undefined4, 0x1379694);
  if (REFG(undefined4, 0x1379694) == (int *)0x0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xdc) ^ (uint)(uint)(gen_frame + 0xdc));
    return 2;
  }
  if (*param_1 == 0x191) {
    bVar2 = F_00a620a0();
    if (bVar2 != 0) {
      F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
      return 0xb;
    }
    if ((*(int *)(param_1 + 10) - *(int *)(param_1 + 8)) / 0x54 == 0) {
      F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
      return 7;
    }
    piVar3 = (int *)F_00424810(REFG(undefined4, 0x137104c));
    (*(int * PTR32 *)(gen_frame + 0x2c)) = piVar3;
    if (piVar3 != (int *)0x0) {
      uVar11 = *(undefined4 *)(param_1 + 8);
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x24))(param_2)));
      uVar5 = F_0043a500(pvVar4,uVar11);
      F_0042cbc0(((undefined1 *)(gen_frame + 0x84)),uVar5);
      pfVar6 = (float *)F_00a5feb0(this_00);
      F_00974e60((*(int * PTR32 *)(gen_frame + 0x2c)),this_00[0x1d],*pfVar6,pfVar6[1],pfVar6[2],GEN_TOF(gen_bits2f(this_00[0x2c])),
                   ((undefined1 *)(gen_frame + 0x84)),0x1c);
      uVar11 = 0;
      puVar10 = ((undefined1 *)(gen_frame + 0x84));
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x24))(param_2)));
      uVar5 = F_0043a560(pvVar4,puVar10,uVar11);
      F_0042ccf0(((undefined1 *)(gen_frame + 0x84)),uVar5);
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x14))(param_2)));
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3)));
      if (*piVar3 - 1U < 3) {
        F_0042d190(((undefined1 *)(gen_frame + 0x84)),0x20);
      }
      uVar11 = REFG(undefined4, 0x108cc50);
      uVar5 = ((code *)*(gen_code32 *)(*this_00 + 0xc))(this_00);
      F_0042cc20(((undefined1 *)(gen_frame + 0x30)),uVar5,uVar11);
      uVar12 = 0;
      puVar10 = ((undefined1 *)(gen_frame + 0x84));
      puVar9 = ((undefined1 *)(gen_frame + 0x30));
      uVar11 = 0x1c;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x28))(param_2)));
      F_00459b00(pvVar4,uVar11,puVar9,puVar10,uVar12);
      F_0042c880(((undefined1 *)(gen_frame + 0x30)));
      F_0042c880(((undefined1 *)(gen_frame + 0x84)));
    }
  }
  else {
    iVar7 = *(int *)(param_1 + 10) - (int)*(undefined * PTR32 *)(param_1 + 8);
    iVar1 = iVar7 >> 0x1f;
    uVar5 = 1;
    if (iVar7 / 0x54 + iVar1 != iVar1) {
      bVar2 = F_0042b6a0(*(undefined * PTR32 *)(param_1 + 8),&REFG(undefined, 0x109134c));
      if (bVar2 != 0) {
        if ((uint)((*(int *)(param_1 + 10) - *(int *)(param_1 + 8)) / 0x54) < 2) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = F_00a4cf70(*(int *)(param_1 + 8) + 0x54,10);
        }
      }
    }
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1090544));
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 0)) = 0xe0000000;
    (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x14)) + 4)) = 0;
    (*(ulonglong *)(gen_frame + 0x14)) = 0xe0000000;
    (*(ushort *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0xffffffff;
    (*(uint *)(gen_frame + 0x24)) = 1;
    if ((param_1[1] == 0) || ((*(uint *)(param_1 + 2) & 0xfffffffe) != 0x16)) {
      bVar2 = 0;
    }
    else {
      bVar2 = 1;
    }
    uVar8 = F_00533c20(&REFG(undefined4, 0x1375bc0));
    (*(ulonglong *)(gen_frame + 0x14)) = uVar8;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x1c)) + 0)) = bVar2;
    (*(undefined1 *)((char *)&(*(ushort *)(gen_frame + 0x1c)) + 1)) = 0;
    (*(ushort *)(gen_frame + 0x1c)) = (ushort)bVar2;
    (*(undefined4 *)(gen_frame + 0x20)) = 0xffffffff;
    (*(uint *)(gen_frame + 0x24)) = uVar5;
    F_00aa0ed0((*(int * PTR32 *)(gen_frame + 0x2c)),*param_1 + -0x191,((undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
  }
  F_00c47745((*(uint *)(gen_frame + 0xd8)) ^ (uint)(uint)(gen_frame + 0xdc));
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandSearch::vf1 */
uint F_0048bda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x48bda0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  uVar5 = 0x30;
  uVar1 = ((code *)*(gen_code32 *)(*param_2 + 0x48))(param_2);
  this_00 = (undefined *)F_00763050(uVar1,uVar5);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x14))(param_2)));
  puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2)));
  uVar5 = *puVar3;
  F_0042b630(((undefined1 *)(gen_frame + 0x18)));
  F_0077c0f0(((undefined1 *)(gen_frame + 0x18)),uVar5);
  (*(undefined * PTR32 *)(gen_frame + 0x10))[4] = (undefined1)0x0;
  (*(int *)(gen_frame + 0x4)) = (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) / 0x54;
  iVar4 = 0;
  (*(char *)(gen_frame + 0x17)) = '\0';
  (*(uint *)(gen_frame + 0xc)) = 0;
  if (0 < (*(int *)(gen_frame + 0x4))) {
    do {
      if ((*(uint *)(gen_frame + 0xc)) == 1) {
        uVar5 = 0;
LAB_0048bed6: ;
        uVar1 = F_0042a990(*(int *)(param_1 + 0x10) + iVar4);
        F_0077c140(((undefined1 *)(gen_frame + 0x18)),uVar1,uVar5);
        (*(uint *)(gen_frame + 0xc)) = 0;
      }
      else {
        if ((*(uint *)(gen_frame + 0xc)) == 2) {
          uVar5 = 1;
          goto LAB_0048bed6;
        }
        uVar1 = F_0043da00(param_2,*(int *)(param_1 + 0x10) + iVar4,&(*(int *)(gen_frame + 0x8)));
        if ((char)uVar1 == '\0') {
          uVar1 = F_0043dac0(param_2,*(int *)(param_1 + 0x10) + iVar4,&(*(int *)(gen_frame + 0x8)));
          if ((char)uVar1 == '\0') {
            F_004582f0(((undefined1 *)(gen_frame + 0x18)),*(int *)(param_1 + 0x10) + iVar4);
          }
          else {
            if ((*(char *)(gen_frame + 0x17)) == '\0') {
              F_0077c200(((undefined1 *)(gen_frame + 0x18)),0,0,1);
              (*(char *)(gen_frame + 0x17)) = '\x01';
            }
            F_0077c200(((undefined1 *)(gen_frame + 0x18)),(*(int *)(gen_frame + 0x8)) + -1,1,0);
          }
        }
        else {
          uVar1 = F_0043d570((*(undefined * PTR32 *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0x18)),(*(int *)(gen_frame + 0x8)));
          (*(uint *)(gen_frame + 0xc)) = uVar1;
        }
      }
      iVar4 = iVar4 + 0x54;
      (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
    } while ((*(int *)(gen_frame + 0x4)) != 0);
  }
  F_0087ddb0(this_00,((undefined1 *)(gen_frame + 0x18)));
  F_0042c880(((undefined1 *)(gen_frame + 0x18)));
  F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c));
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandFaq::vf1 */
uint F_0048bf30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x48bf30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int iVar1;
  uint uVar2;
  int * piVar3;
  undefined * pvVar4;
  undefined1 * puVar5;
  undefined1 * puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  if ((param_2 != (int *)0x0) && (iVar1 = *(int *)(param_1 + 4), -1 < iVar1)) {
    uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x18))(param_2);
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x34) + 8))))
                              (*(int * PTR32 *)(uVar2 + 0x34),"TextCommand")));
    if (piVar3 != (int *)0x0) {
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,iVar1)));
      if (piVar3 != (int *)0x0) {
        uVar7 = 7;
        pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3)));
        uVar2 = F_00cb0950(pvVar4,uVar7);
        if (uVar2 != 0) {
          F_0042cc20(((undefined1 *)(gen_frame + 0x0)),uVar2,REFG(undefined4, 0x108cc50));
          F_0042cc20(((undefined1 *)(gen_frame + 0x54)),&REFG(undefined1, 0x107fc63),REFG(undefined4, 0x108cc50));
          uVar8 = 0;
          puVar6 = ((undefined1 *)(gen_frame + 0x0));
          puVar5 = ((undefined1 *)(gen_frame + 0x54));
          uVar7 = 0x39;
          pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x28))(param_2)));
          F_00459b00(pvVar4,uVar7,puVar5,puVar6,uVar8);
          F_0042c880(((undefined1 *)(gen_frame + 0x54)));
          F_0042c880(((undefined1 *)(gen_frame + 0x0)));
        }
      }
    }
    F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
    return 0;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac) ^ (uint)(uint)(gen_frame + 0xac));
  return 7;
}

/* ref: Client::UI::Shell::ShellCommandGM::vf1 */
byte F_0048c030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x48c030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  int * piVar2;
  undefined * this_00;
  char * pcVar3;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this,param_1,param_2,param_3);
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      pcVar3 = "GM Command Faied";
    }
    else {
      if (uVar1 != 2) {
        return 0;
      }
      piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
      pcVar3 = "GM Rank Faied";
    }
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
    F_0045a500(this_00,pcVar3);
  }
  return 1;
}

/* ref: FUN_00490b70 */
uint F_00490b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x490b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 4);
  if ((param_1 < uVar2) && (uVar1 = *(uint *)this, uVar1 <= param_1)) {
    if (uVar2 == *(uint *)((int)this + 8)) {
      uVar2 = F_0048a220(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      uVar2 = F_00560a60(*(undefined * PTR32 *)((int)this + 4),
                           *(int *)this + ((int)(param_1 - uVar1) >> 3) * 8);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
      return uVar2;
    }
  }
  else {
    if (uVar2 == *(uint *)((int)this + 8)) {
      uVar2 = F_0048a220(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      uVar2 = F_00560a60(*(undefined * PTR32 *)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
  return uVar2;
}

/* ref: FUN_00490be0 */
uint F_00490be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x490be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  iVar2 = (param_1[1] - *param_1) / 0x58;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (iVar2 != 0) {
    iVar2 = iVar2 * 0x58;
    uVar1 = F_004296a0(iVar2,0,0);
    *(uint *)this = uVar1;
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)((int)this + 8) = iVar2 + uVar1;
    uVar1 = F_004860d0(*param_1,param_1[1],uVar1,(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00490cc0 */
unsigned int F_00490cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x490cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_0048a4f0(this,1);
    }
    pvVar3 = *(undefined * PTR32 *)((int)this + 4);
    iVar4 = ((int)(param_1 - uVar2) / 0x58) * 0x58 + *(int *)this;
    if (pvVar3 != (undefined *)0x0) {
      F_0042cbc0(pvVar3,iVar4);
      *(undefined4 *)((int)pvVar3 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x58;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_0048a4f0(this,1);
    }
    pvVar3 = *(undefined * PTR32 *)((int)this + 4);
    if (pvVar3 != (undefined *)0x0) {
      F_0042cbc0(pvVar3,param_1);
      *(undefined4 *)((int)pvVar3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x58;
  return 0;
}

/* ref: FUN_00490d50 */
uint F_00490d50(unsigned int gen_a0)
{
  GEN_ENTER(0x490d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00489280(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x74,400);
  return (uint)uVar1;
}

/* ref: FUN_00490d90 */
unsigned int F_00490d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x490d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_0048a5a0(this,1);
    }
    uVar2 = ((int)(param_1 - uVar2) / 0xa8) * 0xa8 + *(int *)this;
  }
  else {
    uVar2 = param_1;
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_0048a5a0(this,1);
    }
  }
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  if (this_00 != (undefined *)0x0) {
    F_0042cbc0(this_00,uVar2);
    F_0042cbc0((undefined *)((int)this_00 + 0x54),uVar2 + 0x54);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xa8;
  return 0;
}

/* ref: FUN_00490e70 */
unsigned int F_00490e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x490e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  int * piVar6;
  uint uVar7;
  
  iVar2 = *(int *)((int)this + 4);
  uVar7 = F_0048a6a0(this,*((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 4))),iVar2);
  *(uint *)(iVar2 + 4) = uVar7;
  piVar3 = *(int * PTR32 *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0x69) != '\0') {
    *piVar3 = (int)piVar3;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    return 0;
  }
  cVar1 = *(char *)(*piVar4 + 0x69);
  piVar6 = (int *)*piVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar6 + 0x69);
    piVar4 = piVar6;
    piVar6 = (int *)*piVar6;
  }
  *piVar3 = (int)piVar4;
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  iVar5 = *(int *)(iVar2 + 8);
  cVar1 = *(char *)(iVar5 + 0x69);
  while (cVar1 == '\0') {
    cVar1 = *((char *)GEN_TOP((*(int *)(iVar5 + 8) + 0x69)));
    iVar2 = iVar5;
    iVar5 = *(int *)(iVar5 + 8);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = iVar2;
  return 0;
}

/* ref: FUN_00490ef0 */
unsigned int F_00490ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x490ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (this != param_1) {
    F_00488dc0(this);
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return 0;
}

/* ref: FUN_00490f30 */
uint F_00490f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x490f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this_00;
  
  if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
    if ((*(char *)((int)this + 8) != '\0') && (*(char *)((int)this + 8) == '\x01')) {
      this_00 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 4)));
      *(int *)((int)this_00 + 0x54) = *(int *)((int)this_00 + 0x54) + -1;
      if (*(int *)((int)this_00 + 0x54) < 1) {
        F_0042c880(this_00);
        F_00406ad0(this_00);
      }
    }
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined1 *)((int)this + 8) = 0xff;
  }
  *(undefined4 *)this = *param_1;
  *(undefined * PTR32 *)((int)this + 4) = this;
  *(undefined1 *)((int)this + 8) = 0;
  return (uint)this;
}

/* ref: FUN_00490f90 */
uint F_00490f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x490f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  
  if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
    if ((*(char *)((int)this + 8) != '\0') && (*(char *)((int)this + 8) == '\x01')) {
      pvVar1 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 4)));
      *(int *)((int)pvVar1 + 0x54) = *(int *)((int)pvVar1 + 0x54) + -1;
      if (*(int *)((int)pvVar1 + 0x54) < 1) {
        F_0042c880(pvVar1);
        F_00406ad0(pvVar1);
      }
    }
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined1 *)((int)this + 8) = 0xff;
  }
  pvVar1 = (undefined *)F_00406b90(0x58,0,0);
  if (pvVar1 != (undefined *)0x0) {
    F_0042cbc0(pvVar1,param_1);
    *(undefined4 *)((int)pvVar1 + 0x54) = 1;
    *(undefined * PTR32 *)this = pvVar1;
    *(undefined * PTR32 *)((int)this + 4) = this;
    *(undefined1 *)((int)this + 8) = 1;
    return (uint)this;
  }
  *(undefined4 *)this = 0;
  *(undefined * PTR32 *)((int)this + 4) = this;
  *(undefined1 *)((int)this + 8) = 1;
  return (uint)this;
}

/* ref: FUN_00491020 */
uint F_00491020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x491020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  F_004898c0((undefined *)((int)this + 0x54),param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00491050 */
uint F_00491050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x491050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this_00;
  
  if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
    if ((*(char *)((int)this + 8) != '\0') && (*(char *)((int)this + 8) == '\x01')) {
      this_00 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 4)));
      *(int *)((int)this_00 + 0x54) = *(int *)((int)this_00 + 0x54) + -1;
      if (*(int *)((int)this_00 + 0x54) < 1) {
        F_0042c880(this_00);
        F_00406ad0(this_00);
      }
    }
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined1 *)((int)this + 8) = 0xff;
  }
  *(undefined4 *)this = *param_1;
  *(undefined * PTR32 *)((int)this + 4) = this;
  *(undefined1 *)((int)this + 8) = 0;
  return (uint)this;
}

/* ref: FUN_004910b0 */
uint F_004910b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4910b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined * this_00;
  int iVar2;
  
  if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
    if ((*(char *)((int)this + 8) != '\0') && (*(char *)((int)this + 8) == '\x01')) {
      this_00 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 4)));
      *(int *)((int)this_00 + 0x54) = *(int *)((int)this_00 + 0x54) + -1;
      if (*(int *)((int)this_00 + 0x54) < 1) {
        F_0042c880(this_00);
        F_00406ad0(this_00);
      }
    }
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined1 *)((int)this + 8) = 0xff;
  }
  iVar2 = *param_1;
  piVar1 = (int *)(iVar2 + 0x54);
  *piVar1 = *piVar1 + 1;
  *(int *)this = iVar2;
  *(undefined * PTR32 *)((int)this + 4) = this;
  *(undefined1 *)((int)this + 8) = 1;
  return (uint)this;
}

/* ref: FUN_00491110 */
uint F_00491110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x491110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10916cc));
  *(undefined4 *)((int)this + 0x658) = 0;
  uVar1 = F_004296a0(0x78,0,400);
  *(uint *)((int)this + 0x654) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x654) + 4))) = *(int *)((int)this + 0x654);
  *((int *)GEN_TOP((*(int *)((int)this + 0x654) + 8))) = *(int *)((int)this + 0x654);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x654) + 0x70))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x654) + 0x71))) = 1;
  *(undefined1 *)((int)this + 0x660) = 0;
  return (uint)this;
}

/* ref: FUN_00491180 */
uint F_00491180(unsigned int gen_a0)
{
  GEN_ENTER(0x491180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10916cc));
  F_00487a80((undefined *)((int)this + 0x650),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x654),
               *(undefined4 * PTR32 *)((int)this + 0x654));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 0x654),0x78,400);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  return (uint)uVar1;
}

/* ref: Client::UI::Info::InfoProxyBlacklist::vf0 */
uint F_004911d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4911d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10916cc));
  F_00487a80(this + 0x650,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)(this + 0x654),*(undefined4 * PTR32 *)(this + 0x654))
  ;
  F_00429760(*(undefined4 *)(this + 0x654),0x78,400);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109054c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00491230 */
uint F_00491230(unsigned int gen_a0)
{
  GEN_ENTER(0x491230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0042b630(this);
  F_0042b630((int)this + 0x54);
  *(undefined4 *)((int)this + 0x704) = 0;
  *(undefined4 *)((int)this + 0x6e8) = 0;
  *(undefined4 *)((int)this + 0x6ec) = 0;
  *(undefined4 *)((int)this + 0x6f0) = 0;
  *(undefined4 *)((int)this + 0x6f4) = 0;
  *(undefined4 *)((int)this + 0x6f8) = 0;
  *(undefined4 *)((int)this + 0x6fc) = 0;
  *(undefined4 *)((int)this + 0x700) = 0;
  F_00a4afe0((undefined *)((int)this + 0x708),0x2000,0);
  *(undefined4 *)((int)this + 0x71c) = 0;
  *(undefined4 *)((int)this + 0x720) = 0xffffffff;
  *(undefined4 *)((int)this + 0x724) = 0xff010000;
  *(undefined1 *)((int)this + 0x728) = 0xff;
  *(undefined2 *)((int)this + 0x72a) = 0x80;
  *(undefined4 *)((int)this + 0x734) = 0;
  uVar1 = F_004296a0(0x6c,0,0x192);
  *(uint *)((int)this + 0x730) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x730) + 4))) = *(int *)((int)this + 0x730);
  *((int *)GEN_TOP((*(int *)((int)this + 0x730) + 8))) = *(int *)((int)this + 0x730);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x730) + 0x68))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x730) + 0x69))) = 1;
  *(undefined4 *)((int)this + 0x73c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x740) = 0xffffffff;
  *(undefined4 *)((int)this + 0x744) = 0xffffffff;
  *(undefined4 *)((int)this + 0x748) = 0xffffffff;
  *(undefined4 *)((int)this + 0x74c) = 0xffffffff;
  *(undefined1 *)((int)this + 0x752) = 0;
  *(undefined2 *)((int)this + 0x750) = 0;
  return (uint)this;
}

/* ref: FUN_00491340 */
uint F_00491340(unsigned int gen_a0)
{
  GEN_ENTER(0x491340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00488dc0((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_00491360 */
uint F_00491360(unsigned int gen_a0)
{
  GEN_ENTER(0x491360u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  F_0042b630(in_ecx + 0x54);
  *(undefined1 *)(in_ecx + 0xa8) = 0;
  *(undefined1 *)(in_ecx + 0xac) = 0;
  *(undefined4 *)(in_ecx + 0xb8) = 0;
  *(undefined4 *)(in_ecx + 0xbc) = 0;
  *(undefined4 *)(in_ecx + 0xc0) = 0;
  *(undefined1 *)(in_ecx + 200) = 0;
  return in_ecx;
}

/* ref: FUN_004913a0 */
uint F_004913a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4913a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00489280(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x74,400);
  return (uint)uVar1;
}

/* ref: FUN_004914a0 */
uint F_004914a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4914a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00490be0(this,param_1);
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandHotbar::vf2 */
byte F_004914d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4914d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint param_5 = (uint)gen_a5;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x30))(param_1)));
  if ((((param_2 < 0x1d) && (param_4 < 0x1d)) && (param_3 < 10)) && (param_5 < 10)) {
    F_00459650(this_00,param_2,param_3,param_4,param_5);
    return 1;
  }
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandHotbar::vf3 */
byte F_00491520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x491520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  byte bVar1;
  undefined * pvVar2;
  int iVar3;
  char * pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_4 < 0) {
    uVar6 = 0;
    uVar5 = 1;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x30))(param_1)));
    bVar1 = F_0045c2f0(pvVar2,param_2,param_3,uVar5,uVar6);
    return bVar1;
  }
  if (param_5 < 0) {
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x30))(param_1)));
    F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0xb9);
    iVar3 = 0;
    pcVar4 = (char *)(param_4 * 0x1640 + 0x50 + (int)pvVar2);
    do {
      if (*pcVar4 == '\0') {
        F_00459030(pvVar2,param_4,iVar3,param_2,param_3);
        return 1;
      }
      iVar3 = iVar3 + 1;
      pcVar4 = pcVar4 + 0x164;
    } while (iVar3 < 0xc);
    return 0;
  }
  if ((param_4 < 10) && (param_5 < 0x10)) {
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x30))(param_1)));
    F_00459030(pvVar2,param_4,param_5,param_2,param_3);
    return 1;
  }
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandHotbarCross::vf2 */
byte F_004915f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4915f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint param_5 = (uint)gen_a5;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x30))(param_1)));
  if ((((param_2 < 0x1d) && (param_4 < 0x1d)) && (param_3 < 8)) && (param_5 < 8)) {
    F_00459650(this_00,param_2,param_3 + 10,param_4,param_5 + 10);
    return 1;
  }
  return 0;
}

/* ref: Client::UI::Shell::ShellCommandHotbarCross::vf3 */
byte F_00491640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x491640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  byte bVar1;
  undefined * pvVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_4 < 0) {
    uVar5 = 0;
    uVar4 = 1;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x30))(param_1)));
    bVar1 = F_0045c3c0(pvVar2,param_2,param_3,uVar4,uVar5);
    return bVar1;
  }
  if (param_5 < 0) {
    uVar5 = 0;
    uVar4 = 1;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x30))(param_1)));
    bVar1 = F_0045c1c0(pvVar2,param_4,param_2,param_3,uVar4,uVar5);
    return bVar1;
  }
  if ((param_4 < 8) && (param_5 < 0x10)) {
    iVar3 = param_4 + 10;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x30))(param_1)));
    F_00459030(pvVar2,iVar3,param_5,param_2,param_3);
    return 1;
  }
  return 0;
}

/* ref: FUN_004916d0 */
uint F_004916d0(unsigned int gen_a0)
{
  GEN_ENTER(0x4916d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10916f4));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  F_0042b630(in_ecx + 5);
  F_0042b630(in_ecx + 0x1a);
  F_0042b630(in_ecx + 0x2f);
  F_0042b630(in_ecx + 0x44);
  F_0042b630(in_ecx + 0x59);
  F_0042b630(in_ecx + 0x6e);
  F_0042b630(in_ecx + 0x83);
  F_0042b630(in_ecx + 0x98);
  F_0042b630(in_ecx + 0xad);
  return (uint)in_ecx;
}

/* ref: FUN_00491750 */
uint F_00491750(unsigned int gen_a0)
{
  GEN_ENTER(0x491750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0042c880((undefined *)((int)this + 0x2b4));
  F_0042c880((undefined *)((int)this + 0x260));
  F_0042c880((undefined *)((int)this + 0x20c));
  F_0042c880((undefined *)((int)this + 0x1b8));
  F_0042c880((undefined *)((int)this + 0x164));
  F_0042c880((undefined *)((int)this + 0x110));
  F_0042c880((undefined *)((int)this + 0xbc));
  F_0042c880((undefined *)((int)this + 0x68));
  F_0042c880((undefined *)((int)this + 0x14));
  uVar1 = F_0048a630((undefined *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10905cc));
  return uVar1;
}

/* ref: FUN_004917c0 */
unsigned int F_004917c0(unsigned int gen_a0)
{
  GEN_ENTER(0x4917c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
    if ((*(char *)((int)this + 8) != '\0') && (*(char *)((int)this + 8) == '\x01')) {
      this_00 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 4)));
      *(int *)((int)this_00 + 0x54) = *(int *)((int)this_00 + 0x54) + -1;
      if (*(int *)((int)this_00 + 0x54) < 1) {
        F_0042c880(this_00);
        F_00406ad0(this_00);
      }
    }
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined1 *)((int)this + 8) = 0xff;
  }
  return 0;
}

/* ref: FUN_00491850 */
uint F_00491850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x491850u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * pvVar1;
  
  pvVar1 = (*(undefined * PTR32 *)&gen_args[1]);
  if ((*(undefined * PTR32 *)&gen_args[0]) != (*(undefined * PTR32 *)&gen_args[1])) {
    F_00488bc0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined * PTR32 *)&gen_args[1]),**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
    F_00490e70((*(undefined * PTR32 *)&gen_args[0]),pvVar1);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00491880 */
uint F_00491880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x491880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (this != param_1) {
    F_00488dc0(this);
    *(undefined4 *)this = *param_1;
    *(undefined4 *)((int)this + 4) = param_1[1];
    *(undefined4 *)((int)this + 8) = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_004918c0 */
uint F_004918c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4918c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 8) = 0xff;
  F_00490f90(this,param_1);
  return (uint)this;
}

/* ref: FUN_004918f0 */
unsigned int F_004918f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4918f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 8) = 0xff;
  *(undefined4 *)this = *param_1;
  *(undefined * PTR32 *)((int)this + 4) = this;
  *(undefined1 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00491920 */
uint F_00491920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x491920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  
  if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
    if ((*(char *)((int)this + 8) != '\0') && (*(char *)((int)this + 8) == '\x01')) {
      this_00 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 4)));
      *(int *)((int)this_00 + 0x54) = *(int *)((int)this_00 + 0x54) + -1;
      if (*(int *)((int)this_00 + 0x54) < 1) {
        F_0042c880(this_00);
        F_00406ad0(this_00);
      }
    }
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined1 *)((int)this + 8) = 0xff;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00491980 */
uint F_00491980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x491980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00488dc0((undefined *)((int)this + 0x54));
  F_0042c880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004919b0 */
uint F_004919b0(unsigned int gen_a0)
{
  GEN_ENTER(0x4919b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined * this_00;
  undefined4 * puVar3;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar2 = *(undefined4 * PTR32 *)this;
  puVar3 = (undefined4 *)puVar2[1];
  if (puVar3 != (undefined4 *)0x0) {
    if ((*(char *)(puVar2 + 2) != '\0') && (*(char *)(puVar2 + 2) == '\x01')) {
      this_00 = (undefined *)*puVar3;
      *(int *)((int)this_00 + 0x54) = *(int *)((int)this_00 + 0x54) + -1;
      if (*(int *)((int)this_00 + 0x54) < 1) {
        F_0042c880(this_00);
        puVar3 = (undefined4 *)F_00406ad0(this_00);
      }
    }
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 2) = 0xff;
  }
  *puVar2 = *puVar1;
  puVar2[1] = puVar2;
  *(undefined1 *)(puVar2 + 2) = 0;
  return (uint)puVar3;
}

/* ref: FUN_00491a10 */
unsigned int F_00491a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x491a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_0042cbc0(param_1,param_2);
    F_004898c0((undefined *)((int)param_1 + 0x54),param_2 + 0x54);
  }
  return 0;
}

/* ref: FUN_00491a40 */
uint F_00491a40(unsigned int gen_a0)
{
  GEN_ENTER(0x491a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0048a290((undefined *)((int)this + 0x58));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_00491a60 */
uint F_00491a60(unsigned int gen_a0)
{
  GEN_ENTER(0x491a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint * puVar2;
  undefined * this_00;
  uint uVar3;
  
  puVar1 = *(uint * PTR32 *)((int)this + 4);
  puVar2 = *(uint * PTR32 *)this;
  if ((undefined4 *)puVar2[1] != (undefined4 *)0x0) {
    if (((char)puVar2[2] != '\0') && ((char)puVar2[2] == '\x01')) {
      this_00 = *(undefined * PTR32 *)puVar2[1];
      *(int *)((int)this_00 + 0x54) = *(int *)((int)this_00 + 0x54) + -1;
      if (*(int *)((int)this_00 + 0x54) < 1) {
        F_0042c880(this_00);
        F_00406ad0(this_00);
      }
    }
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 2) = 0xff;
  }
  uVar3 = *puVar1;
  *(int *)(uVar3 + 0x54) = *(int *)(uVar3 + 0x54) + 1;
  *puVar2 = uVar3;
  puVar2[1] = (uint)puVar2;
  *(undefined1 *)(puVar2 + 2) = 1;
  return uVar3;
}

/* ref: Client::UI::Shell::ShellCommandWritePcInfo::vf0 */
uint F_00491b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x491b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00491750(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00491b90 */
uint F_00491b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x491b90u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * pvVar1;
  
  pvVar1 = (*(undefined * PTR32 *)&gen_args[1]);
  if ((*(undefined * PTR32 *)&gen_args[0]) != (*(undefined * PTR32 *)&gen_args[1])) {
    F_00488bc0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined * PTR32 *)&gen_args[1]),**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
    F_00490e70((*(undefined * PTR32 *)&gen_args[0]),pvVar1);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00491bc0 */
uint F_00491bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x491bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * this_00;
  
  F_0042cbc0(this,param_1);
  this_00 = (undefined4 *)((int)this + 0x54);
  *this_00 = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  if (this_00 != param_2) {
    F_00488dc0(this_00);
    *this_00 = *param_2;
    *(undefined4 *)((int)this + 0x58) = param_2[1];
    *(undefined4 *)((int)this + 0x5c) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00491c10 */
unsigned int F_00491c10(unsigned int gen_a0)
{
  GEN_ENTER(0x491c10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined * this;
  
  if (*(undefined4 * PTR32 *)(param_1 + 4) != (undefined4 *)0x0) {
    if ((*(char *)(param_1 + 8) != '\0') && (*(char *)(param_1 + 8) == '\x01')) {
      this = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + 4)));
      *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + -1;
      if (*(int *)((int)this + 0x54) < 1) {
        F_0042c880(this);
        F_00406ad0(this);
      }
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 8) = 0xff;
  }
  return 0;
}

/* ref: FUN_00491c60 */
uint F_00491c60(unsigned int gen_a0)
{
  GEN_ENTER(0x491c60u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00488dc0((undefined *)((int)param_1 + 0x54));
  uVar1 = F_0042c880(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00491c80 */
unsigned int F_00491c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x491c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_0042cbc0(param_2,param_3);
    F_004898c0((undefined *)((int)param_2 + 0x54),param_3 + 0x54);
  }
  return 0;
}

/* ref: FUN_00491cb0 */
unsigned int F_00491cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x491cb0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 == 1) {
    F_00491a60(param_2);
  }
  return 0;
}

/* ref: FUN_00491cd0 */
uint F_00491cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x491cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0048a290((undefined *)((int)this + 0x58));
  F_0042c880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00491d00 */
uint F_00491d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x491d00u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * this_00;
  int iVar1;
  
  iVar1 = (*(int *)&gen_args[1]);
  F_00470fd0((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]));
  F_00a4b0d0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x708))),iVar1 + 0x708);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x71c))) = *(undefined4 *)(iVar1 + 0x71c);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x720))) = *(undefined4 *)(iVar1 + 0x720);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x724))) = *(undefined4 *)(iVar1 + 0x724);
  this_00 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x72c)));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x728))) = *(undefined4 *)(iVar1 + 0x728);
  if (this_00 != (undefined *)(iVar1 + 0x72c)) {
    F_00488bc0(this_00,&(*(int *)&gen_args[1]),**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x730))),
                 *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x730))));
    F_00490e70(this_00,iVar1 + 0x72c);
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x73c))) = *(undefined4 *)(iVar1 + 0x73c);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x740))) = *(undefined4 *)(iVar1 + 0x740);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x744))) = *(undefined4 *)(iVar1 + 0x744);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x748))) = *(undefined4 *)(iVar1 + 0x748);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74c))) = *(undefined4 *)(iVar1 + 0x74c);
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x750))) = *(undefined2 *)(iVar1 + 0x750);
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x752))) = *(undefined1 *)(iVar1 + 0x752);
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x753))) = *(undefined1 *)(iVar1 + 0x753);
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00491df0 */
uint F_00491df0(unsigned int gen_a0)
{
  GEN_ENTER(0x491df0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  F_0042b630(in_ecx + 0x54);
  *(undefined4 *)(in_ecx + 0xa8) = 0;
  *(undefined4 *)(in_ecx + 0xac) = 0;
  *(undefined4 *)(in_ecx + 0xb0) = 0;
  F_0042b630(in_ecx + 0xb8);
  return in_ecx;
}

/* ref: FUN_00491e30 */
uint F_00491e30(unsigned int gen_a0)
{
  GEN_ENTER(0x491e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0xb8));
  F_0048a360((undefined *)((int)this + 0xa8));
  F_0042c880((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_00491e60 */
uint F_00491e60(unsigned int gen_a0)
{
  GEN_ENTER(0x491e60u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  F_0042b630(in_ecx + 0x54);
  *(undefined4 *)(in_ecx + 0xa8) = 0;
  *(undefined4 *)(in_ecx + 0xac) = 0;
  *(undefined4 *)(in_ecx + 0xb0) = 0;
  return in_ecx;
}

/* ref: FUN_00491e90 */
uint F_00491e90(unsigned int gen_a0)
{
  GEN_ENTER(0x491e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0048a2f0((undefined *)((int)this + 0xa8));
  F_0042c880((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_00491eb0 */
uint F_00491eb0(unsigned int gen_a0)
{
  GEN_ENTER(0x491eb0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  F_0042b630(in_ecx + 0x54);
  *(undefined4 *)(in_ecx + 0xa8) = 0;
  *(undefined4 *)(in_ecx + 0xac) = 0;
  *(undefined4 *)(in_ecx + 0xb0) = 0;
  return in_ecx;
}

/* ref: FUN_00491ee0 */
uint F_00491ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x491ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0048a360((undefined *)((int)this + 0xa8));
  F_0042c880((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_00491f00 */
uint F_00491f00(unsigned int gen_a0)
{
  GEN_ENTER(0x491f00u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  F_0042b630(in_ecx + 0x54);
  *(undefined4 *)(in_ecx + 0xa8) = 0;
  *(undefined4 *)(in_ecx + 0xac) = 0;
  *(undefined4 *)(in_ecx + 0xb0) = 0;
  return in_ecx;
}

/* ref: FUN_00491f30 */
uint F_00491f30(unsigned int gen_a0)
{
  GEN_ENTER(0x491f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0048a3d0((undefined *)((int)this + 0xa8));
  F_0042c880((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_00491f50 */
uint F_00491f50(unsigned int gen_a0)
{
  GEN_ENTER(0x491f50u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  F_0042b630(in_ecx + 0x54);
  F_0042b630(in_ecx + 0xa8);
  F_0042b630(in_ecx + 0x110);
  *(undefined4 *)(in_ecx + 0x164) = 0;
  *(undefined4 *)(in_ecx + 0x168) = 0;
  *(undefined4 *)(in_ecx + 0x16c) = 0;
  return in_ecx;
}

/* ref: FUN_00491f90 */
uint F_00491f90(unsigned int gen_a0)
{
  GEN_ENTER(0x491f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0048a3d0((undefined *)((int)this + 0x164));
  F_0042c880((undefined *)((int)this + 0x110));
  F_0042c880((undefined *)((int)this + 0xa8));
  F_0042c880((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_00491fd0 */
uint F_00491fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x491fd0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  F_0042b630(in_ecx + 0x54);
  *(undefined4 *)(in_ecx + 0xa8) = 0;
  *(undefined4 *)(in_ecx + 0xac) = 0;
  *(undefined4 *)(in_ecx + 0xb0) = 0;
  return in_ecx;
}

/* ref: FUN_00492000 */
uint F_00492000(unsigned int gen_a0)
{
  GEN_ENTER(0x492000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0048a490((undefined *)((int)this + 0xa8));
  F_0042c880((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_00492020 */
uint F_00492020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x492020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * this_00;
  
  F_0042cbc0(this,param_1);
  this_00 = (undefined4 *)((int)this + 0x54);
  *this_00 = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  if (this_00 != param_2) {
    F_00488dc0(this_00);
    *this_00 = *param_2;
    *(undefined4 *)((int)this + 0x58) = param_2[1];
    *(undefined4 *)((int)this + 0x5c) = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  return (uint)this;
}

/* ref: FUN_00492070 */
uint F_00492070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x492070u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ulonglong uVar1;
  
  F_00488dc0((undefined *)((int)param_2 + 0x54));
  uVar1 = F_0042c880(param_2);
  return (uint)uVar1;
}

/* ref: FUN_00492090 */
unsigned int F_00492090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x492090u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  
  if (*(undefined4 * PTR32 *)(param_2 + 4) != (undefined4 *)0x0) {
    if ((*(char *)(param_2 + 8) != '\0') && (*(char *)(param_2 + 8) == '\x01')) {
      this = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)(param_2 + 4)));
      *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + -1;
      if (*(int *)((int)this + 0x54) < 1) {
        F_0042c880(this);
        F_00406ad0(this);
      }
    }
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)(param_2 + 8) = 0xff;
  }
  return 0;
}

/* ref: FUN_004920e0 */
uint F_004920e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4920e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00488dc0(param_4 + 0x18);
    F_0042c880(param_4 + 3);
    F_00429760(param_4,0x74,400);
                    
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
      goto LAB_0049215b;
    }
    param_3[2] = param_4;
    iVar4 = *(int *)((int)this + 4);
    if (param_3 != *(undefined4 * PTR32 *)(iVar4 + 8)) goto LAB_0049215b;
  }
  *(int * PTR32 *)(iVar4 + 8) = param_4;
LAB_0049215b: ;
  cVar1 = *(char *)(param_4[1] + 0x70);
  piVar3 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar4 + 0x70) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar3[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar4 = piVar6[2];
      if (*(char *)(iVar4 + 0x70) == '\0') {
        *(undefined1 *)(piVar5 + 0x1c) = 1;
        *(undefined1 *)(iVar4 + 0x70) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x70))) = 0;
        piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
      }
      else {
        if (piVar3 == (int *)piVar5[2]) {
          piVar3 = (int *)piVar5[2];
          piVar5[2] = *piVar3;
          if (*(char *)(*piVar3 + 0x71) == '\0') {
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
        *(undefined1 *)(piVar3[1] + 0x70) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x70))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x71) == '\0') {
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
LAB_004922ed: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar4 = *piVar6;
      if (*(char *)(iVar4 + 0x70) != '\0') {
        if (piVar3 == (int *)*piVar5) {
          iVar4 = *piVar5;
          *piVar5 = *(int *)(iVar4 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar4 + 8) + 0x71))) == '\0') {
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
        *(undefined1 *)(piVar3[1] + 0x70) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x70))) = 0;
        piVar5 = *(int * PTR32 *)(piVar3[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x71) == '\0') {
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
        goto LAB_004922ed;
      }
      *(undefined1 *)(piVar5 + 0x1c) = 1;
      *(undefined1 *)(iVar4 + 0x70) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar3[1] + 4) + 0x70))) = 0;
      piVar3 = *(int * PTR32 *)(piVar3[1] + 4);
    }
    cVar1 = *(char *)(piVar3[1] + 0x70);
  } while( true );
}

/* ref: FUN_00492320 */
uint F_00492320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x492320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x74,0,400);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x1c) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar1 + 3,param_1);
    F_004898c0(puVar1 + 0x18,param_1 + 0x54);
  }
  return (uint)puVar1;
}

/* ref: FUN_00492380 */
uint F_00492380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x492380u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 == 0) {
    uVar1 = F_004919b0(param_2);
    return uVar1;
  }
  uVar1 = param_1;
  if (param_1 == 1) {
    uVar1 = F_00491a60(param_2);
  }
  return uVar1;
}

/* ref: FUN_004923b0 */
uint F_004923b0(unsigned int gen_a0)
{
  GEN_ENTER(0x4923b0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0048a290((undefined *)((int)param_1 + 0x58));
  uVar1 = F_0042c880(param_1);
  return (uint)uVar1;
}

/* ref: FUN_004923d0 */
uint F_004923d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4923d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  int * piVar7;
  int * piVar8;
  undefined * this_00;
  
  piVar4 = (*(int * PTR32 *)&gen_args[2]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x71))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_004731e0(&(*(int * PTR32 *)&gen_args[2]));
  piVar7 = (int *)*piVar4;
  if (*(char *)((int)piVar7 + 0x71) == '\0') {
    piVar8 = piVar7;
    if ((*(char *)(piVar4[2] + 0x71) == '\0') && (piVar8 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar4)) {
      piVar7[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar4;
      piVar7 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar4[2]) {
        piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar8 + 0x71) == '\0') {
          piVar8[1] = (int)piVar7;
        }
        *piVar7 = (int)piVar8;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar4[2];
        *(int * PTR32 *)(piVar4[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar4) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar4[1];
        if ((int *)*puVar2 == piVar4) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar4[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[0x1c];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 0x1c))) = (char)piVar4[0x1c];
      *(char *)(piVar4 + 0x1c) = (char)iVar1;
      goto LAB_004924ea;
    }
  }
  else {
    piVar8 = (int *)piVar4[2];
  }
  piVar7 = (int *)piVar4[1];
  if (*(char *)((int)piVar8 + 0x71) == '\0') {
    piVar8[1] = (int)piVar7;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar4) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar8;
  }
  else if ((int *)*piVar7 == piVar4) {
    *piVar7 = (int)piVar8;
  }
  else {
    piVar7[2] = (int)piVar8;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))) == piVar4) {
    piVar5 = piVar7;
    if (*(char *)((int)piVar8 + 0x71) == '\0') {
      piVar5 = (int *)F_00472100(piVar8);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar5;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar4) {
    if (*(char *)((int)piVar8 + 0x71) == '\0') {
      uVar6 = F_004720e0(piVar8);
      *(uint *)(iVar1 + 8) = uVar6;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar7;
    }
  }
LAB_004924ea: ;
  if ((char)piVar4[0x1c] == '\x01') {
    if (piVar8 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar5 = piVar7;
        if ((char)piVar8[0x1c] != '\x01') break;
        piVar7 = (int *)*piVar5;
        if (piVar8 == piVar7) {
          piVar7 = (int *)piVar5[2];
          if ((char)piVar7[0x1c] == '\0') {
            *(undefined1 *)(piVar7 + 0x1c) = 1;
            *(undefined1 *)(piVar5 + 0x1c) = 0;
            F_0047eff0((*(undefined * PTR32 *)&gen_args[0]),piVar5);
            piVar7 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar7 + 0x71) == '\0') {
            if ((*(char *)(*piVar7 + 0x70) != '\x01') || (*(char *)(piVar7[2] + 0x70) != '\x01')) {
              if (*(char *)(piVar7[2] + 0x70) == '\x01') {
                *(undefined1 *)(*piVar7 + 0x70) = 1;
                *(undefined1 *)(piVar7 + 0x1c) = 0;
                F_0047b3e0((*(undefined * PTR32 *)&gen_args[0]),piVar7);
                piVar7 = (int *)piVar5[2];
              }
              *(char *)(piVar7 + 0x1c) = (char)piVar5[0x1c];
              *(undefined1 *)(piVar5 + 0x1c) = 1;
              *(undefined1 *)(piVar7[2] + 0x70) = 1;
              F_0047eff0((*(undefined * PTR32 *)&gen_args[0]),piVar5);
              break;
            }
LAB_004925a8: ;
            *(undefined1 *)(piVar7 + 0x1c) = 0;
          }
        }
        else {
          if ((char)piVar7[0x1c] == '\0') {
            *(undefined1 *)(piVar7 + 0x1c) = 1;
            *(undefined1 *)(piVar5 + 0x1c) = 0;
            F_0047b3e0((*(undefined * PTR32 *)&gen_args[0]),piVar5);
            piVar7 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar7 + 0x71) == '\0') {
            if ((*(char *)(piVar7[2] + 0x70) == '\x01') && (*(char *)(*piVar7 + 0x70) == '\x01'))
            goto LAB_004925a8;
            if (*(char *)(*piVar7 + 0x70) == '\x01') {
              *(undefined1 *)(piVar7[2] + 0x70) = 1;
              *(undefined1 *)(piVar7 + 0x1c) = 0;
              F_0047eff0((*(undefined * PTR32 *)&gen_args[0]),piVar7);
              piVar7 = (int *)*piVar5;
            }
            *(char *)(piVar7 + 0x1c) = (char)piVar5[0x1c];
            *(undefined1 *)(piVar5 + 0x1c) = 1;
            *(undefined1 *)(*piVar7 + 0x70) = 1;
            F_0047b3e0((*(undefined * PTR32 *)&gen_args[0]),piVar5);
            break;
          }
        }
        piVar7 = (int *)piVar5[1];
        piVar8 = piVar5;
      } while (piVar5 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar8 + 0x1c) = 1;
  }
  this_00 = (undefined *)piVar4[0x18];
  if (this_00 != (undefined *)0x0) {
    pvVar3 = (undefined *)piVar4[0x19];
    for (; this_00 != pvVar3; this_00 = (undefined *)((int)this_00 + 8)) {
      F_005a2670(this_00);
    }
    F_00429760(piVar4[0x18],(piVar4[0x1a] - piVar4[0x18] >> 3) * 8,400);
  }
  piVar4[0x18] = 0;
  piVar4[0x19] = 0;
  piVar4[0x1a] = 0;
  F_0042c880(piVar4 + 3);
  F_00429760(piVar4,0x74,400);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00492680 */
unsigned int F_00492680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x492680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  undefined * pvVar3;
  int * piVar4;
  undefined * this_00;
  
  cVar1 = *(char *)((int)param_1 + 0x71);
  piVar4 = param_1;
  while (cVar1 == '\0') {
    F_00492680(this,(int *)piVar4[2]);
    this_00 = (undefined *)piVar4[0x18];
    piVar2 = (int *)*piVar4;
    if (this_00 != (undefined *)0x0) {
      pvVar3 = (undefined *)piVar4[0x19];
      for (; this_00 != pvVar3; this_00 = (undefined *)((int)this_00 + 8)) {
        F_005a2670(this_00);
      }
      F_00429760(piVar4[0x18],(piVar4[0x1a] - piVar4[0x18] >> 3) * 8,400);
    }
    piVar4[0x18] = 0;
    piVar4[0x19] = 0;
    piVar4[0x1a] = 0;
    F_0042c880(piVar4 + 3);
    F_00429760(piVar4,0x74,400);
    piVar4 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x71);
  }
  return 0;
}

/* ref: FUN_00492740 */
unsigned int F_00492740(unsigned int gen_a0)
{
  GEN_ENTER(0x492740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  undefined * this_00;
  
  if (*(int *)((int)this + 0x10) != 0) {
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + *(int *)((int)this + 0xc) * 4)));
    if (*(undefined4 * PTR32 *)(iVar2 + 4) != (undefined4 *)0x0) {
      if ((*(char *)(iVar2 + 8) != '\0') && (*(char *)(iVar2 + 8) == '\x01')) {
        this_00 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)(iVar2 + 4)));
        *(int *)((int)this_00 + 0x54) = *(int *)((int)this_00 + 0x54) + -1;
        if (*(int *)((int)this_00 + 0x54) < 1) {
          F_0042c880(this_00);
          F_00406ad0(this_00);
        }
      }
      *(undefined4 *)(iVar2 + 4) = 0;
      *(undefined1 *)(iVar2 + 8) = 0xff;
    }
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    if (*(uint *)((int)this + 8) <= *(uint *)((int)this + 0xc)) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    piVar1 = (int *)((int)this + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return 0;
}

/* ref: FUN_004927b0 */
uint F_004927b0(unsigned int gen_a0)
{
  GEN_ENTER(0x4927b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  undefined4 * puVar4;
  
  puVar4 = (undefined4 *)0x0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar3 = *(int *)((int)this + 0x10) + -1 + *(int *)((int)this + 0xc);
    if (*(uint *)((int)this + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)((int)this + 8);
    }
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4)));
    puVar4 = *(undefined4 * PTR32 *)(iVar2 + 4);
    if (puVar4 != (undefined4 *)0x0) {
      if ((*(char *)(iVar2 + 8) != '\0') && (*(char *)(iVar2 + 8) == '\x01')) {
        this_00 = (undefined *)*puVar4;
        *(int *)((int)this_00 + 0x54) = *(int *)((int)this_00 + 0x54) + -1;
        if (*(int *)((int)this_00 + 0x54) < 1) {
          F_0042c880(this_00);
          puVar4 = (undefined4 *)F_00406ad0(this_00);
        }
      }
      *(undefined4 *)(iVar2 + 4) = 0;
      *(undefined1 *)(iVar2 + 8) = 0xff;
    }
    piVar1 = (int *)((int)this + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return (uint)puVar4;
}

/* ref: FUN_00492820 */
uint F_00492820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x492820u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  undefined * this_00;
  undefined4 * puVar6;
  
  puVar5 = ((undefined4 *)GEN_TOP((*((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))[1]));
  this_00 = (undefined *)((*(int *)&gen_args[2]) + 0xc);
  cVar1 = *(char *)((int)puVar5 + 0x71);
  bVar4 = 1;
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  uVar3 = (*(undefined4 *)(gen_frame + 0x8));
  while (cVar1 == '\0') {
    if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
      bVar4 = F_0042c7c0(this_00,puVar5 + 3);
    }
    else {
      bVar4 = F_0042c7c0(puVar5 + 3,this_00);
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
    cVar1 = *(char *)((int)puVar6 + 0x71);
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar4 != 0) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar5 = (undefined4 *)F_004920e0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00474950(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[3]);
  bVar4 = F_0042c7c0((*(undefined4 * PTR32 *)&gen_args[3]) + 3,this_00);
  if (bVar4 != 0) {
    puVar5 = (undefined4 *)F_004920e0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),uVar3,puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar5;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00488dc0((undefined *)((*(int *)&gen_args[2]) + 0x60));
  F_0042c880(this_00);
  F_00429760((*(int *)&gen_args[2]),0x74,400);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar5;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00492930 */
uint F_00492930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x492930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  
  cVar1 = *(char *)((int)param_1 + 8);
  if ((cVar1 != -1) && (this != param_1)) {
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)param_1 + 4);
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    if (cVar1 == '\0') {
      F_004919b0(&(*(undefined * PTR32 *)(gen_frame + 0x4)));
      return (uint)this;
    }
    if (cVar1 == '\x01') {
      F_00491a60(&(*(undefined * PTR32 *)(gen_frame + 0x4)));
    }
  }
  return (uint)this;
}

/* ref: FUN_00492980 */
unsigned int F_00492980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x492980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint param_7 = (uint)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  uint param_10 = (uint)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined * this;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = param_7;
  uVar7 = param_10;
  while (param_4 != uVar6) {
    uVar6 = uVar6 - 1;
    if (param_5 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *param_5;
    }
    uVar4 = uVar6;
    if (*(uint *)(iVar5 + 8) <= uVar6) {
      uVar4 = uVar6 - *(uint *)(iVar5 + 8);
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar5 + 4) + uVar4 * 4)));
    uVar7 = uVar7 - 1;
    if (param_8 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *param_8;
    }
    uVar4 = uVar7;
    if (*(uint *)(iVar5 + 8) <= uVar7) {
      uVar4 = uVar7 - *(uint *)(iVar5 + 8);
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar5 + 4) + uVar4 * 4)));
    cVar1 = *(char *)(puVar2 + 2);
    if ((cVar1 != -1) && (puVar3 != puVar2)) {
      puVar2 = (undefined4 *)puVar2[1];
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar3;
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar2;
      if (cVar1 == '\0') {
        if ((undefined4 *)puVar3[1] != (undefined4 *)0x0) {
          if ((*(char *)(puVar3 + 2) != '\0') && (*(char *)(puVar3 + 2) == '\x01')) {
            this = *(undefined * PTR32 *)puVar3[1];
            *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + -1;
            if (*(int *)((int)this + 0x54) < 1) {
              F_0042c880(this);
              F_00406ad0(this);
            }
          }
          puVar3[1] = 0;
          *(undefined1 *)(puVar3 + 2) = 0xff;
        }
        *puVar3 = *puVar2;
        puVar3[1] = puVar3;
        *(undefined1 *)(puVar3 + 2) = 0;
      }
      else if (cVar1 == '\x01') {
        F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar7;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*param_8;
  }
  return 0;
}

/* ref: FUN_00492a90 */
unsigned int F_00492a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x492a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint param_7 = (uint)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  uint param_10 = (uint)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = param_10;
  for (uVar6 = param_4; uVar6 != param_7; uVar6 = uVar6 + 1) {
    if (param_2 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *param_2;
    }
    uVar3 = uVar6;
    if (*(uint *)(iVar7 + 8) <= uVar6) {
      uVar3 = uVar6 - *(uint *)(iVar7 + 8);
    }
    if (param_8 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *param_8;
    }
    uVar4 = uVar1;
    if (*(uint *)(iVar5 + 8) <= uVar1) {
      uVar4 = uVar1 - *(uint *)(iVar5 + 8);
    }
    iVar7 = *((int *)GEN_TOP((*(int *)(iVar7 + 4) + uVar3 * 4)));
    iVar5 = *((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar4 * 4)));
    cVar2 = *(char *)(iVar7 + 8);
    if ((cVar2 != -1) && (iVar5 != iVar7)) {
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(iVar7 + 4);
      (*(int *)(gen_frame + 0x4)) = iVar5;
      if (cVar2 == '\0') {
        F_004919b0(&(*(int *)(gen_frame + 0x4)));
      }
      else if (cVar2 == '\x01') {
        F_00491a60(&(*(int *)(gen_frame + 0x4)));
      }
    }
    uVar1 = uVar1 + 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (param_8 != (int *)0x0) {
    if ((undefined4 *)*param_8 == (undefined4 *)0x0) {
      param_1[2] = uVar1;
      return 0;
    }
    *param_1 = *(undefined4 *)*param_8;
  }
  param_1[2] = uVar1;
  return 0;
}

/* ref: FUN_00492b60 */
uint F_00492b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x492b60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  ulonglong uVar1;
  
  F_0048a290((undefined *)((int)param_2 + 0x58));
  uVar1 = F_0042c880(param_2);
  return (uint)uVar1;
}

/* ref: FUN_00492b80 */
uint F_00492b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x492b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint param_5 = (uint)gen_a4;
  int param_6 = (int)gen_a5;
  uint param_7 = (uint)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = param_7;
  for (uVar6 = param_3; uVar6 != param_5; uVar6 = uVar6 + 1) {
    uVar4 = uVar6;
    if (*(uint *)(param_2 + 8) <= uVar6) {
      uVar4 = uVar6 - *(uint *)(param_2 + 8);
    }
    uVar5 = uVar7;
    if (*(uint *)(param_6 + 8) <= uVar7) {
      uVar5 = uVar7 - *(uint *)(param_6 + 8);
    }
    iVar2 = *((int *)GEN_TOP((*(int *)(param_2 + 4) + uVar4 * 4)));
    iVar3 = *((int *)GEN_TOP((*(int *)(param_6 + 4) + uVar5 * 4)));
    cVar1 = *(char *)(iVar2 + 8);
    if ((cVar1 != -1) && (iVar3 != iVar2)) {
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(iVar2 + 4);
      (*(int *)(gen_frame + 0x4)) = iVar3;
      if (cVar1 == '\0') {
        F_004919b0(&(*(int *)(gen_frame + 0x4)));
      }
      else if (cVar1 == '\x01') {
        F_00491a60(&(*(int *)(gen_frame + 0x4)));
      }
    }
    uVar7 = uVar7 + 1;
  }
  param_1[1] = uVar7;
  *param_1 = param_6;
  return (uint)param_1;
}

/* ref: FUN_00492c20 */
uint F_00492c20(unsigned int gen_a0)
{
  GEN_ENTER(0x492c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00492680(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00492c50 */
uint F_00492c50(unsigned int gen_a0)
{
  GEN_ENTER(0x492c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = *(int *)((int)this + 0x10);
  while (iVar3 != 0) {
    if (*(int *)((int)this + 0x10) != 0) {
      uVar2 = *(int *)((int)this + 0x10) + -1 + *(int *)((int)this + 0xc);
      if (*(uint *)((int)this + 8) <= uVar2) {
        uVar2 = uVar2 - *(uint *)((int)this + 8);
      }
      iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4)));
      if (*(undefined4 * PTR32 *)(iVar3 + 4) != (undefined4 *)0x0) {
        if ((*(char *)(iVar3 + 8) != '\0') && (*(char *)(iVar3 + 8) == '\x01')) {
          this_00 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)(iVar3 + 4)));
          *(int *)((int)this_00 + 0x54) = *(int *)((int)this_00 + 0x54) + -1;
          if (*(int *)((int)this_00 + 0x54) < 1) {
            F_0042c880(this_00);
            F_00406ad0(this_00);
          }
        }
        *(undefined4 *)(iVar3 + 4) = 0;
        *(undefined1 *)(iVar3 + 8) = 0xff;
      }
      piVar1 = (int *)((int)this + 0x10);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
    iVar3 = *(int *)((int)this + 0x10);
  }
  iVar3 = *(int *)((int)this + 8);
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar3 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar3 * 4))),0xc,0x2c4);
    }
  }
  uVar2 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x2c4);
    uVar2 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00492d20 */
uint F_00492d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x492d20u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00492680(this,piVar2[1]);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 8) = 0;
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x71) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x71) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x71);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x71);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x71);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x71);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_004923d0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00492de0 */
uint F_00492de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x492de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x74,0,400);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 0x1c) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    F_0042cbc0(puVar1 + 3,param_2);
    F_004898c0(puVar1 + 0x18,param_2 + 0x54);
  }
  F_00492820(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_00492e50 */
uint F_00492e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x492e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*param_8;
  }
  uVar2 = 0;
  if ((param_5 != (int *)0x0) && ((undefined4 *)*param_5 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_5;
  }
  uVar1 = 0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    uVar1 = *(undefined4 *)*param_2;
  }
  F_00492980(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10);
  return param_1;
}

/* ref: FUN_00492ed0 */
uint F_00492ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x492ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*param_8;
  }
  uVar2 = 0;
  if ((param_5 != (int *)0x0) && ((undefined4 *)*param_5 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_5;
  }
  uVar1 = 0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    uVar1 = *(undefined4 *)*param_2;
  }
  F_00492a90(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10);
  return param_1;
}

/* ref: FUN_00492f50 */
uint F_00492f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x492f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 8) = 0xff;
  cVar1 = *(char *)((int)param_1 + 8);
  if ((cVar1 != -1) && (this != param_1)) {
    (*(undefined * PTR32 *)(gen_frame + 0x4)) = this;
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)param_1 + 4);
    if (cVar1 == '\0') {
      F_004919b0(&(*(undefined * PTR32 *)(gen_frame + 0x4)));
      return (uint)this;
    }
    if (cVar1 == '\x01') {
      F_00491a60(&(*(undefined * PTR32 *)(gen_frame + 0x4)));
    }
  }
  return (uint)this;
}

/* ref: FUN_00492fb0 */
uint F_00492fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x492fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * piVar1;
  undefined * pvVar2;
  int * piVar3;
  int * piVar4;
  undefined * this;
  ulonglong uVar5;
  
  piVar3 = param_1;
  if (param_1 != param_2) {
    piVar4 = param_1 + 0x16;
    do {
      this = (undefined *)*piVar4;
      if (this != (undefined *)0x0) {
        pvVar2 = (undefined *)piVar4[1];
        for (; this != pvVar2; this = (undefined *)((int)this + 0x58)) {
          F_0042c880(this);
        }
        F_00429760(*piVar4,((piVar4[2] - *piVar4) / 0x58) * 0x58,0);
      }
      *piVar4 = 0;
      piVar4[1] = 0;
      piVar4[2] = 0;
      uVar5 = F_0042c880(piVar4 + -0x16);
      piVar3 = (int *)uVar5;
      piVar1 = piVar4 + 4;
      piVar4 = piVar4 + 0x1a;
    } while (piVar1 != param_2);
  }
  return (uint)piVar3;
}

/* ref: FUN_00493030 */
uint F_00493030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x493030u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  F_00492b80(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_1);
  return param_1;
}

/* ref: FUN_00493070 */
uint F_00493070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x493070u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  undefined * this;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  cVar1 = *(char *)(param_1 + 2);
  uVar2 = CONCAT31((int3)((REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c)) >> 8),cVar1);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)0x0;
  (*(char *)(gen_frame + 0x14)) = -1;
  if ((cVar1 != -1) && (&(*(undefined4 *)(gen_frame + 0xc)) != param_1)) {
    uVar2 = (uint)cVar1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0xc));
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)param_1[1];
    if (uVar2 == 0) {
      uVar2 = F_004919b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
    }
    else if (uVar2 == 1) {
      uVar2 = F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
    }
  }
  cVar1 = *(char *)(param_2 + 2);
  uVar2 = CONCAT31((int3)(uVar2 >> 8),cVar1);
  if ((cVar1 != -1) && (param_1 != param_2)) {
    uVar2 = (uint)cVar1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)param_2[1];
    if (uVar2 == 0) {
      uVar2 = F_004919b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
    }
    else if (uVar2 == 1) {
      uVar2 = F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
    }
  }
  uVar2 = CONCAT31((int3)(uVar2 >> 8),(*(char *)(gen_frame + 0x14)));
  if (((*(char *)(gen_frame + 0x14)) != -1) && (param_2 != &(*(undefined4 *)(gen_frame + 0xc)))) {
    uVar2 = (uint)(*(char *)(gen_frame + 0x14));
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = param_2;
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
    if (uVar2 == 0) {
      uVar2 = F_004919b0(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
    }
    else if (uVar2 == 1) {
      uVar2 = F_00491a60(&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
    }
  }
  if ((((*(undefined4 * PTR32 *)(gen_frame + 0x10)) != (undefined4 *)0x0) && (uVar2 = (uint)(*(char *)(gen_frame + 0x14)), uVar2 != 0)) && (uVar2 == 1)) {
    this = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x10));
    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + -1;
    if (*(int *)((int)this + 0x54) < 1) {
      F_0042c880(this);
      uVar2 = F_00406ad0(this);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_00493180 */
uint F_00493180(unsigned int gen_a0)
{
  GEN_ENTER(0x493180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00492c50(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x2c4);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_004931c0 */
unsigned int F_004931c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x4931c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int param_7 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  piVar3 = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x0;
  if (this != (undefined *)0x0) {
    (*(int * PTR32 *)(gen_frame + 0x18)) = *(int * PTR32 *)this;
  }
  (*(int *)(gen_frame + 0x20)) = param_4;
  if (this != (undefined *)0x0) {
    piVar3 = *(int * PTR32 *)this;
  }
  uVar2 = param_4 - *(int *)((int)this + 0xc);
  (*(uint *)(gen_frame + 0x24)) = uVar2;
  (*(int *)(gen_frame + 0x28)) = param_7 - param_4;
  (*(int *)(gen_frame + 0x14)) = param_7;
  uVar6 = 0;
  if (uVar2 < (uint)((*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc)) - param_7)) {
    if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*piVar3;
    }
    uVar5 = 0;
    if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
      uVar5 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
    }
    F_00492e50(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)this,0,*(undefined4 *)((int)this + 0xc),uVar5,0,param_4,
                 uVar6,0,param_7);
    while ((*(int *)(gen_frame + 0x28)) != 0) {
      if (*(int *)((int)this + 0x10) != 0) {
        iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 4) + *(int *)((int)this + 0xc) * 4)));
        if (*(undefined4 * PTR32 *)(iVar4 + 4) != (undefined4 *)0x0) {
          if ((*(char *)(iVar4 + 8) != '\0') && (*(char *)(iVar4 + 8) == '\x01')) {
            this_00 = ((undefined *)GEN_TOP(**(undefined4 * PTR32 *)(iVar4 + 4)));
            *(int *)((int)this_00 + 0x54) = *(int *)((int)this_00 + 0x54) + -1;
            if (*(int *)((int)this_00 + 0x54) < 1) {
              F_0042c880(this_00);
              F_00406ad0(this_00);
            }
          }
          *(undefined4 *)(iVar4 + 4) = 0;
          *(undefined1 *)(iVar4 + 8) = 0xff;
        }
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
        if (*(uint *)((int)this + 8) <= *(uint *)((int)this + 0xc)) {
          *(undefined4 *)((int)this + 0xc) = 0;
        }
        piVar3 = (int *)((int)this + 0x10);
        *piVar3 = *piVar3 + -1;
        if (*piVar3 == 0) {
          *(undefined4 *)((int)this + 0xc) = 0;
        }
      }
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + -1;
    }
  }
  else {
    if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
    }
    uVar5 = 0;
    if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
      uVar5 = *(undefined4 *)*piVar3;
    }
    F_00492ed0(((undefined1 *)(gen_frame + 0xc)),uVar5,0,param_7,*(undefined4 *)this,0,
                 *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10),uVar6,0,param_4);
    for (iVar4 = (*(int *)(gen_frame + 0x28)); iVar4 != 0; iVar4 = iVar4 + -1) {
      F_004927b0(this);
    }
  }
  iVar4 = *(int *)((int)this + 0xc);
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (*(uint *)(gen_frame + 0x24)) + iVar4;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return 0;
}

/* ref: FUN_004933a0 */
uint F_004933a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4933a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00492d20(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_004933c0 */
uint F_004933c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4933c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00492fb0(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_004933e0 */
unsigned int F_004933e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4933e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00492f50(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00493400 */
unsigned int F_00493400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x493400u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  if (((param_8 == (int *)0x0) || ((int *)*param_8 == (int *)0x0)) ||
     (puVar1 = *(undefined4 * PTR32 *)*param_8, puVar1 == (undefined4 *)0x0)) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x8)) = *puVar1;
  }
  if (((param_5 == (int *)0x0) || ((int *)*param_5 == (int *)0x0)) ||
     (puVar1 = *(undefined4 * PTR32 *)*param_5, puVar1 == (undefined4 *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  if (((param_2 != (int *)0x0) && ((int *)*param_2 != (int *)0x0)) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_2, puVar1 != (undefined4 *)0x0)) {
    uVar2 = *puVar1;
  }
  F_00492b80(((undefined1 *)(gen_frame + 0x4)),uVar2,param_4,uVar3,param_7,(*(undefined4 *)(gen_frame + 0x8)),param_10,param_1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (*(undefined4 *)(gen_frame + 0x8));
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*param_8;
  }
  return 0;
}

/* ref: FUN_004934b0 */
uint F_004934b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4934b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_4;
  if (*(uint *)(param_3 + 8) <= param_4) {
    uVar1 = param_4 - *(uint *)(param_3 + 8);
  }
  uVar2 = param_2;
  if (*(uint *)(param_1 + 8) <= param_2) {
    uVar2 = param_2 - *(uint *)(param_1 + 8);
  }
  uVar1 = F_00493070(*((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + uVar2 * 4))),
                       *((undefined4 *)GEN_TOP((*(int *)(param_3 + 4) + uVar1 * 4))));
  return uVar1;
}

/* ref: FUN_00493500 */
unsigned int F_00493500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x493500u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint param_6 = (uint)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  int iVar2;
  byte * pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = param_4 - param_2;
  (*(int *)(gen_frame + 0x34)) = iVar2;
  (*(int *)(gen_frame + 0x38)) = param_6 - param_2;
  iVar1 = (*(int *)(gen_frame + 0x38));
  while (iVar2 != 0) {
    (*(int *)(gen_frame + 0x38)) = iVar2;
    iVar2 = iVar1 % iVar2;
    iVar1 = (*(int *)(gen_frame + 0x38));
  }
  (*(int *)(gen_frame + 0x38)) = iVar1;
  if (iVar1 < (int)(param_6 - param_2)) {
    while (0 < (*(int *)(gen_frame + 0x38))) {
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) = param_2;
      uVar6 = param_2 + (*(int *)(gen_frame + 0x38));
      (*(int *)(gen_frame + 0x2c)) = param_1;
      uVar4 = (*(int *)(gen_frame + 0x34)) + uVar6;
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) = uVar6;
      iVar2 = param_1;
      uVar5 = param_2;
      if (uVar4 != param_6) {
        (*(int *)(gen_frame + 0x24)) = param_1;
        (*(uint *)(gen_frame + 0x28)) = uVar4;
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) = uVar6;
        uVar5 = uVar4;
      }
      do {
        uVar4 = uVar5;
        if (*(uint *)(iVar2 + 8) <= uVar5) {
          uVar4 = uVar5 - *(uint *)(iVar2 + 8);
        }
        if (*(uint *)((*(int *)(gen_frame + 0x2c)) + 8) <= uVar6) {
          uVar6 = uVar6 - *(uint *)((*(int *)(gen_frame + 0x2c)) + 8);
        }
        F_00493070(*((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x2c)) + 4) + uVar6 * 4))),
                     *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 4) + uVar4 * 4))));
        (*(int *)(gen_frame + 0x2c)) = iVar2;
        (*(uint *)(gen_frame + 0x30)) = uVar5;
        if ((*(int *)(gen_frame + 0x34)) < (int)(param_6 - uVar5)) {
          ((byte *)(gen_frame + 0x8))[0] = (char)uVar5;
          ((byte *)(gen_frame + 0x8))[1] = (char)(uVar5 >> 8);
          ((byte *)(gen_frame + 0x8))[2] = (char)(uVar5 >> 0x10);
          ((byte *)(gen_frame + 0x8))[3] = (char)(uVar5 >> 0x18);
          (*(int *)(gen_frame + 0x1c)) = iVar2;
          (*(int *)(gen_frame + 0x20)) = uVar5 + (*(int *)(gen_frame + 0x34));
          pbVar3 = (byte *)&(*(int *)(gen_frame + 0x1c));
        }
        else {
          (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16)) = (param_2 - (param_6 - uVar5)) + (*(int *)(gen_frame + 0x34));
          (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) = param_2;
          (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)) = param_1;
          pbVar3 = ((byte *)(gen_frame + 0x8)) + 0xc;
        }
        iVar2 = *(int *)pbVar3;
        uVar6 = uVar5;
        uVar5 = *(uint *)(pbVar3 + 4);
      } while (*(uint *)(pbVar3 + 4) != (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)));
      iVar2 = (*(int *)(gen_frame + 0x38)) + -1;
      (*(int *)(gen_frame + 0x38)) = iVar2;
    }
  }
  return 0;
}

/* ref: FUN_00493650 */
uint F_00493650(unsigned int gen_a0)
{
  GEN_ENTER(0x493650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x70));
  F_0042c880((undefined *)((int)this + 0x1c));
  F_00492c50((undefined *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),8,0x2c4);
  *(undefined4 *)((int)this + 4) = 0;
  return (uint)uVar1;
}

/* ref: Component::Text::MacroDecoder::vf11 */
uint F_00493690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x493690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf12 */
uint F_004936a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4936a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf14 */
uint F_004936b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4936b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf15 */
uint F_004936c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4936c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf16 */
uint F_004936d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4936d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf17 */
uint F_004936e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4936e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf18 */
uint F_004936f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4936f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::MacroDecoder::vf19 */
uint F_00493700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x493700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: Component::Text::TextModule::vf13 */
uint F_00493710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x493710u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  bVar1 = F_00a23c00(this + 4,param_1,param_2,param_3);
  return (uint)(bVar1 != 0);
}

/* ref: Component::Text::TextModule::vf3 */
uint F_00493740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x493740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)this;
  uVar2 = F_0042a990(param_1);
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x34))(this,uVar2,param_2,param_3);
  return uVar2;
}

/* ref: FUN_00493770 */
uint F_00493770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x493770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00493af0((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00493780 */
uint F_00493780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x493780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00493af0((undefined *)((int)this + -0x1ac),param_1);
  return uVar1;
}

/* ref: FUN_00493790 */
uint F_00493790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x493790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00493af0((undefined *)((int)this + -0x1b0),param_1);
  return uVar1;
}

/* ref: Client::UI::Misc::RaptureTextModule::vf11 */
uint F_004937a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4937a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 gen_out[0x4];
  uint uVar1;
  uint uVar2;
  int * piVar3;
  undefined * this_00;
  undefined4 uVar4;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  if (*(int *)(this + 600) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 8))))(*(int * PTR32 *)(this + 0x34),"Addon");
    *(uint *)(this + 600) = uVar2;
  }
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 600) + 0x24))))(*(int * PTR32 *)(this + 600),param_1)));
  uVar4 = 0;
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3)));
  uVar2 = F_00cb0950(this_00,uVar4);
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0));
  return uVar2;
}

/* ref: FUN_00493810 */
uint F_00493810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x493810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00493b20((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00493820 */
uint F_00493820(unsigned int gen_a0)
{
  GEN_ENTER(0x493820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00492d20(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x74,400);
  return (uint)uVar1;
}

/* ref: FUN_00493860 */
uint F_00493860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x493860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00492fb0(param_1,param_2,(int)this + 0xc,param_2);
  return uVar1;
}

/* ref: FUN_00493880 */
unsigned int F_00493880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x493880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00492f50(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_004938a0 */
unsigned int F_004938a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4938a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (param_2 != (undefined *)0x0) {
    F_00492f50(param_2,param_3);
  }
  return 0;
}

/* ref: FUN_004938c0 */
uint F_004938c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4938c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00492c50((undefined *)((int)this + 4));
  F_00429760(*(undefined4 *)((int)this + 4),8,0x2c4);
  *(undefined4 *)((int)this + 4) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00493900 */
uint F_00493900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x493900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + 0x70));
  F_0042c880((undefined *)((int)this + 0x1c));
  F_00492c50((undefined *)((int)this + 4));
  F_00429760(*(undefined4 *)((int)this + 4),8,0x2c4);
  *(undefined4 *)((int)this + 4) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00493950 */
unsigned int F_00493950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x493950u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; 0 < iVar2; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined1 *)(puVar1 + 2) = 0xff;
    }
    puVar1 = puVar1 + 3;
  }
  return 0;
}

/* ref: FUN_00493980 */
uint F_00493980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x493980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    F_00486f80(this,1);
  }
  iVar2 = *(int *)((int)this + 0xc);
  if (iVar2 == 0) {
    iVar2 = *(int *)((int)this + 8);
  }
  iVar2 = iVar2 + -1;
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))) == 0) {
    uVar1 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))) = uVar1;
  }
  uVar1 = *(uint *)((int)this + 4);
  this_00 = *(undefined * PTR32 *)(uVar1 + iVar2 * 4);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00492f50(this_00,param_1);
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  *(int *)((int)this + 0xc) = iVar2;
  return uVar1;
}

/* ref: FUN_004939f0 */
unsigned int F_004939f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4939f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_4;
  if (param_2 != param_4) {
    do {
      uVar2 = uVar2 - 1;
      if (param_2 == uVar2) {
        return 0;
      }
      uVar3 = uVar2;
      if (*(uint *)(param_3 + 8) <= uVar2) {
        uVar3 = uVar2 - *(uint *)(param_3 + 8);
      }
      uVar1 = param_2;
      if (*(uint *)(param_1 + 8) <= param_2) {
        uVar1 = param_2 - *(uint *)(param_1 + 8);
      }
      F_00493070(*((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + uVar1 * 4))),
                   *((undefined4 *)GEN_TOP((*(int *)(param_3 + 4) + uVar3 * 4))));
      param_2 = param_2 + 1;
    } while (param_2 != uVar2);
  }
  return 0;
}

/* ref: FUN_00493a50 */
unsigned int F_00493a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x493a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  F_00493500(param_1,param_2,param_3,param_4,param_5,param_6,0,0);
  return 0;
}

/* ref: FUN_00493a80 */
uint F_00493a80(unsigned int gen_a0)
{
  GEN_ENTER(0x493a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00492d20(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x74,400);
  return (uint)uVar1;
}

/* ref: Client::UI::Misc::AddonConfig::vf4 */
uint F_00493ac0(void)
{
  GEN_ENTER(0x493ac0u, 0u, 0u, 0u, 0u);
  return 0x5000;
}

/* ref: Client::UI::Misc::AddonConfig::vf5 */
uint F_00493ad0(void)
{
  GEN_ENTER(0x493ad0u, 0u, 0u, 0u, 0u);
  return 100;
}

/* ref: Client::UI::Misc::AddonConfig::vf6 */
uint F_00493ae0(void)
{
  GEN_ENTER(0x493ae0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::UI::Misc::RaptureTextModule::vf0 */
uint F_00493af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x493af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0045fdf0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Misc::ConfigModule::vf0 */
uint F_00493b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x493b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_004600d0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00493b50 */
uint F_00493b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x493b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    F_00486f80(this,1);
  }
  uVar2 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4))) == 0) {
    uVar1 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4))) = uVar1;
  }
  uVar1 = *(uint *)((int)this + 4);
  this_00 = *(undefined * PTR32 *)(uVar1 + uVar2 * 4);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00492f50(this_00,param_1);
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return uVar1;
}

/* ref: FUN_00493bc0 */
uint F_00493bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x493bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
    F_00486f80(this,1);
  }
  uVar2 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  if (*(uint *)((int)this + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4))) == 0) {
    uVar1 = F_004296a0(0xc,0,0x2c4);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4))) = uVar1;
  }
  uVar1 = *(uint *)((int)this + 4);
  this_00 = *(undefined * PTR32 *)(uVar1 + uVar2 * 4);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00492f50(this_00,param_1);
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return uVar1;
}

/* ref: FUN_00493c70 */
uint F_00493c70(unsigned int gen_a0)
{
  GEN_ENTER(0x493c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    F_00492fb0(*(int *)this,*(undefined4 *)((int)this + 4),(int)this + 0xc,this);
    uVar2 = F_00429760(*(int *)this,((*(int *)((int)this + 8) - *(int *)this) / 0x68) * 0x68,0);
    uVar1 = (uint)uVar2;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00493ce0 */
unsigned int F_00493ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x493ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; 0 < iVar2; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined1 *)(puVar1 + 2) = 0xff;
    }
    puVar1 = puVar1 + 3;
  }
  return 0;
}

/* ref: FUN_00493d10 */
uint F_00493d10(unsigned int gen_a0)
{
  GEN_ENTER(0x493d10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  ulonglong uVar1;
  
  F_00492c50((undefined *)(param_1 + 4));
  uVar1 = F_00429760(*(undefined4 *)(param_1 + 4),8,0x2c4);
  *(undefined4 *)(param_1 + 4) = 0;
  return (uint)uVar1;
}

/* ref: FUN_00493d40 */
uint F_00493d40(unsigned int gen_a0)
{
  GEN_ENTER(0x493d40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)(param_1 + 0x70));
  F_0042c880((undefined *)(param_1 + 0x1c));
  F_00492c50((undefined *)(param_1 + 4));
  uVar1 = F_00429760(*(undefined4 *)(param_1 + 4),8,0x2c4);
  *(undefined4 *)(param_1 + 4) = 0;
  return (uint)uVar1;
}

/* ref: FUN_00493d80 */
unsigned int F_00493d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x493d80u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 * puVar1;
  undefined4 uVar2;
  
  if (((param_4 == (int *)0x0) || ((int *)*param_4 == (int *)0x0)) ||
     (puVar1 = *(undefined4 * PTR32 *)*param_4, puVar1 == (undefined4 *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  if (((param_1 != (int *)0x0) && ((int *)*param_1 != (int *)0x0)) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    F_004939f0(*puVar1,param_3,uVar2,param_6,param_6);
    return 0;
  }
  F_004939f0(0,param_3,uVar2,param_6,param_6);
  return 0;
}

/* ref: FUN_00493de0 */
unsigned int F_00493de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x493de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int param_7 = (int)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  int param_10 = (int)gen_a9;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = param_4;
  if ((param_4 != param_7) && (param_7 != param_10)) {
    if ((param_8 == (int *)0x0) ||
       (((int *)*param_8 == (int *)0x0 ||
        (puVar1 = *(undefined4 * PTR32 *)*param_8, puVar1 == (undefined4 *)0x0)))) {
      uVar4 = 0;
    }
    else {
      uVar4 = *puVar1;
    }
    if (((param_5 == (int *)0x0) || ((int *)*param_5 == (int *)0x0)) ||
       (puVar1 = *(undefined4 * PTR32 *)*param_5, puVar1 == (undefined4 *)0x0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *puVar1;
    }
    if (((param_2 == (int *)0x0) || ((int *)*param_2 == (int *)0x0)) ||
       (puVar1 = *(undefined4 * PTR32 *)*param_2, puVar1 == (undefined4 *)0x0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *puVar1;
    }
    F_00493500(uVar2,param_4,uVar3,param_7,uVar4,param_10,0,0);
    iVar5 = param_4 + (param_10 - param_7);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar5;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*param_2;
  }
  return 0;
}

/* ref: Client::UI::Misc::AddonConfig::vf0 */
uint F_00493e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x493e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x109181c));
  F_00492d20(this + 0x38,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)(this + 0x3c),*(undefined4 * PTR32 *)(this + 0x3c));
  F_00429760(*(undefined4 *)(this + 0x3c),0x74,400);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x1090a64));
  if (*(int *)(this + 0x14) != 0) {
    F_00406810(*(int *)(this + 0x14));
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI::Shell::ShellCommandRecast::vf1 */
uint F_00493f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x493f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  int * piVar5;
  double dVar6;
  float fVar7;
  undefined4 uVar8;
  undefined1 * puVar9;
  undefined1 * puVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  uVar2 = *(uint *)(param_1 + 4);
  if (-1 < (int)uVar2) {
    uVar8 = *(undefined4 *)(&REFG(undefined, 0x12fe6d4) + ((int)uVar2 >> 0x18) * 4);
    uVar2 = uVar2 & 0xffffff;
    switch((unsigned int)(uintptr_t)(uVar8)) {
    case 1: ;
      uVar2 = F_00ac1b60(uVar2);
      break;
    case 6: ;
    case 0xb: ;
      goto switchD_00493f4f_caseD_6;
    case 9: ;
      uVar2 = F_00ac1cb0(uVar2);
    }
    bVar1 = F_00ac78f0(&REFG(undefined, 0x14bcf40),uVar8,uVar2);
    if (bVar1 != 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0xb4)),&REFG(undefined, 0x1091850),REFG(undefined4, 0x108cc50));
      puVar9 = ((undefined1 *)(gen_frame + 0xb4));
      pvVar3 = (undefined *)F_0042cbc0(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)(param_1 + 0x10));
      uVar4 = F_0042e360(pvVar3,puVar9);
      F_0042cbc0(((undefined1 *)(gen_frame + 0x60)),uVar4);
      F_0042c880(((undefined1 *)(gen_frame + 0xc)));
      F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
      bVar1 = F_00ac2f60(&REFG(undefined, 0x14bcf40),uVar8,uVar2);
      if (bVar1 == 0) {
        uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x18))(param_2);
        if (*(int *)(uVar2 + 600) == 0) {
          uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x34) + 8))))(*(int * PTR32 *)(uVar2 + 0x34),"Addon");
          *(uint *)(uVar2 + 600) = uVar4;
        }
        piVar5 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 600) + 0x24))))(*(int * PTR32 *)(uVar2 + 600),0x30)));
        uVar8 = 0;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 8))(piVar5)));
        uVar2 = F_00cb0950(pvVar3,uVar8);
        F_0042e370(((undefined1 *)(gen_frame + 0x60)),uVar2);
      }
      else {
        fVar7 = F_00ac3090(&REFG(undefined, 0x14bcf40),uVar8,uVar2);
        uVar11 = 0x21;
        dVar6 = F_00ac3060(&REFG(undefined, 0x14bcf40),uVar8,uVar2);
        (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)
                    (longlong)TRUNC(((float10)fVar7 - (float10)dVar6) + (float10)REFG(double, 0x1088108));
        uVar2 = ((code *)*(gen_code32 *)(*param_2 + 0x18))(param_2);
        uVar2 = F_00462440(uVar2,param_2,(*(undefined4 *)(gen_frame + 0x0)),uVar11);
        F_0042e360(((undefined1 *)(gen_frame + 0x60)),uVar2);
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0xb4)),&REFG(undefined1, 0x107fc63),REFG(undefined4, 0x108cc50));
      uVar11 = 0;
      puVar10 = ((undefined1 *)(gen_frame + 0x60));
      puVar9 = ((undefined1 *)(gen_frame + 0xb4));
      uVar8 = 0x39;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x28))(param_2)));
      F_00459b00(pvVar3,uVar8,puVar9,puVar10,uVar11);
      F_0042c880(((undefined1 *)(gen_frame + 0xb4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x60)));
      F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
      return 0;
    }
  }
switchD_00493f4f_caseD_6: ;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return 7;
}

/* ref: FUN_00494140 */
unsigned int F_00494140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x494140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar5 = *(uint *)((int)this + 0x10);
  if (uVar5 <= param_1) {
    while (uVar5 < param_1) {
      if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
        F_00486f80(this,1);
      }
      uVar5 = *(int *)((int)this + 0x10) + *(int *)((int)this + 0xc);
      if (*(uint *)((int)this + 8) <= uVar5) {
        uVar5 = uVar5 - *(uint *)((int)this + 8);
      }
      if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4))) == 0) {
        uVar2 = F_004296a0(0xc,0,0x2c4);
        *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4))) = uVar2;
      }
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4)));
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined1 *)(puVar1 + 2) = 0xff;
      }
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
      uVar5 = *(uint *)((int)this + 0x10);
    }
    return 0;
  }
  uVar7 = 0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    uVar7 = *puVar1;
  }
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  piVar4 = (int *)0x0;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    piVar4 = *(int * PTR32 *)*piVar3;
  }
  uVar6 = 0;
  if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
    uVar6 = *(undefined4 *)*piVar4;
  }
  F_004931c0(this,((undefined1 *)(gen_frame + 0x0)),uVar6,0,param_1 + *(int *)((int)this + 0xc),uVar7,0,
               *(int *)((int)this + 0xc) + uVar5);
  return 0;
}

/* ref: FUN_00494260 */
uint F_00494260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x494260u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  F_00492c50((undefined *)(param_2 + 4));
  uVar1 = F_00429760(*(undefined4 *)(param_2 + 4),8,0x2c4);
  *(undefined4 *)(param_2 + 4) = 0;
  return (uint)uVar1;
}

/* ref: FUN_00494290 */
uint F_00494290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x494290u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  F_0042c880((undefined *)(param_2 + 0x70));
  F_0042c880((undefined *)(param_2 + 0x1c));
  F_00492c50((undefined *)(param_2 + 4));
  uVar1 = F_00429760(*(undefined4 *)(param_2 + 4),8,0x2c4);
  *(undefined4 *)(param_2 + 4) = 0;
  return (uint)uVar1;
}

/* ref: FUN_004942d0 */
unsigned int F_004942d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x4942d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint param_6 = (uint)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint param_9 = (uint)gen_a9;
  undefined4 param_10 = (undefined4)gen_a10;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * pvVar1;
  undefined4 * puVar2;
  uint uVar3;
  int * piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int * piVar9;
  int * piVar10;
  int iVar11;
  
  uVar3 = param_3 - *(int *)((int)this + 0xc);
  (*(uint *)(gen_frame + 0x18)) = uVar3;
  (*(uint *)(gen_frame + 0x14)) = *(uint *)((int)this + 0x10);
  if (param_6 != param_9) {
    if (uVar3 <= *(uint *)((int)this + 0x10) >> 1) {
      do {
        if (param_4 == (int *)0x0) {
          iVar11 = 0;
        }
        else {
          iVar11 = *param_4;
        }
        uVar3 = param_6;
        if (*(uint *)(iVar11 + 8) <= param_6) {
          uVar3 = param_6 - *(uint *)(iVar11 + 8);
        }
        uVar5 = *((undefined4 *)GEN_TOP((*(int *)(iVar11 + 4) + uVar3 * 4)));
        if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
          F_00486f80(this,1);
        }
        iVar11 = *(int *)((int)this + 0xc);
        if (iVar11 == 0) {
          iVar11 = *(int *)((int)this + 8);
        }
        iVar11 = iVar11 + -1;
        if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar11 * 4))) == 0) {
          uVar3 = F_004296a0(0xc,0,0x2c4);
          *((uint *)GEN_TOP((*(int *)((int)this + 4) + iVar11 * 4))) = uVar3;
        }
        pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + iVar11 * 4)));
        if (pvVar1 != (undefined *)0x0) {
          F_00492f50(pvVar1,uVar5);
        }
        *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
        param_6 = param_6 + 1;
        *(int *)((int)this + 0xc) = iVar11;
      } while (param_6 != param_9);
      iVar8 = *(int *)((int)this + 0x10) - (*(uint *)(gen_frame + 0x14));
      piVar10 = *(int * PTR32 *)this;
      piVar4 = (int *)0x0;
      (*(uint *)(gen_frame + 0x14)) = iVar8;
      if ((piVar10 != (int *)0x0) && ((undefined4 *)*piVar10 != (undefined4 *)0x0)) {
        piVar4 = *(int * PTR32 *)*piVar10;
      }
      piVar9 = (int *)0x0;
      if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
        piVar9 = *(int * PTR32 *)*piVar4;
      }
      if (((piVar9 == (int *)0x0) || ((int *)*piVar9 == (int *)0x0)) ||
         (puVar2 = *(undefined4 * PTR32 *)*piVar9, puVar2 == (undefined4 *)0x0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *puVar2;
      }
      if (((piVar10 == (int *)0x0) || ((int *)*piVar10 == (int *)0x0)) ||
         (puVar2 = *(undefined4 * PTR32 *)*piVar10, puVar2 == (undefined4 *)0x0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *puVar2;
      }
      F_004939f0(uVar6,iVar11,uVar5,iVar8 + iVar11,param_6);
      piVar10 = (int *)0x0;
      if ((*(int * PTR32 *)this != (int *)0x0) &&
         (puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar2 != (undefined4 *)0x0)) {
        piVar10 = (int *)*puVar2;
      }
      piVar4 = (int *)0x0;
      if ((piVar10 != (int *)0x0) && ((undefined4 *)*piVar10 != (undefined4 *)0x0)) {
        piVar4 = *(int * PTR32 *)*piVar10;
      }
      piVar10 = (int *)0x0;
      if ((piVar4 != (int *)0x0) && ((undefined4 *)*piVar4 != (undefined4 *)0x0)) {
        piVar10 = *(int * PTR32 *)*piVar4;
      }
      uVar5 = 0;
      if ((piVar10 != (int *)0x0) && ((undefined4 *)*piVar10 != (undefined4 *)0x0)) {
        uVar5 = *(undefined4 *)*piVar10;
      }
      piVar10 = (int *)0x0;
      if ((*(int * PTR32 *)this != (int *)0x0) &&
         (puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar2 != (undefined4 *)0x0)) {
        piVar10 = (int *)*puVar2;
      }
      uVar6 = 0;
      if ((piVar10 != (int *)0x0) && ((undefined4 *)*piVar10 != (undefined4 *)0x0)) {
        uVar6 = *(undefined4 *)*piVar10;
      }
      F_00493de0(((undefined1 *)(gen_frame + 0x8)),*(undefined4 *)this,0,*(undefined4 *)((int)this + 0xc),uVar6,0,
                   (*(uint *)(gen_frame + 0x14)) + *(int *)((int)this + 0xc),uVar5,0,
                   (*(uint *)(gen_frame + 0x18)) + *(int *)((int)this + 0xc) + (*(uint *)(gen_frame + 0x14)));
      return 0;
    }
    do {
      if (param_4 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = *param_4;
      }
      uVar3 = param_6;
      if (*(uint *)(iVar11 + 8) <= param_6) {
        uVar3 = param_6 - *(uint *)(iVar11 + 8);
      }
      uVar5 = *((undefined4 *)GEN_TOP((*(int *)(iVar11 + 4) + uVar3 * 4)));
      if (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 1U) {
        F_00486f80(this,1);
      }
      uVar3 = *(int *)((int)this + 0x10) + *(int *)((int)this + 0xc);
      if (*(uint *)((int)this + 8) <= uVar3) {
        uVar3 = uVar3 - *(uint *)((int)this + 8);
      }
      if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4))) == 0) {
        uVar7 = F_004296a0(0xc,0,0x2c4);
        *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4))) = uVar7;
      }
      pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4)));
      if (pvVar1 != (undefined *)0x0) {
        F_00492f50(pvVar1,uVar5);
      }
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
      param_6 = param_6 + 1;
    } while (param_6 != param_9);
    piVar10 = (int *)0x0;
    if ((*(int * PTR32 *)this != (int *)0x0) &&
       (puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar2 != (undefined4 *)0x0)) {
      piVar10 = (int *)*puVar2;
    }
    uVar5 = 0;
    if ((piVar10 != (int *)0x0) && ((undefined4 *)*piVar10 != (undefined4 *)0x0)) {
      uVar5 = *(undefined4 *)*piVar10;
    }
    piVar10 = (int *)0x0;
    if ((*(int * PTR32 *)this != (int *)0x0) &&
       (puVar2 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar2 != (undefined4 *)0x0)) {
      piVar10 = (int *)*puVar2;
    }
    uVar6 = 0;
    if ((piVar10 != (int *)0x0) && ((undefined4 *)*piVar10 != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*piVar10;
    }
    F_00493de0(((undefined1 *)(gen_frame + 0x8)),uVar6,0,*(int *)((int)this + 0xc) + (*(uint *)(gen_frame + 0x18)),uVar5,0,
                 (*(uint *)(gen_frame + 0x14)) + *(int *)((int)this + 0xc),*(undefined4 *)this,0,
                 *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10));
  }
  return 0;
}

/* ref: FUN_004945e0 */
unsigned int F_004945e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4945e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x10) != 0) {
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + *(int *)((int)this + 0xc) * 4)));
    F_00492c50((undefined *)(iVar2 + 4));
    F_00429760(*(undefined4 *)(iVar2 + 4),8,0x2c4);
    *(undefined4 *)(iVar2 + 4) = 0;
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    if (*(uint *)((int)this + 8) <= *(uint *)((int)this + 0xc)) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    piVar1 = (int *)((int)this + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00494640 */
unsigned int F_00494640(unsigned int gen_a0)
{
  GEN_ENTER(0x494640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x10) != 0) {
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + *(int *)((int)this + 0xc) * 4)));
    F_0042c880((undefined *)(iVar2 + 0x70));
    F_0042c880((undefined *)(iVar2 + 0x1c));
    F_00492c50((undefined *)(iVar2 + 4));
    F_00429760(*(undefined4 *)(iVar2 + 4),8,0x2c4);
    *(undefined4 *)(iVar2 + 4) = 0;
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    if (*(uint *)((int)this + 8) <= *(uint *)((int)this + 0xc)) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    piVar1 = (int *)((int)this + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return 0;
}

/* ref: FUN_004946b0 */
uint F_004946b0(unsigned int gen_a0)
{
  GEN_ENTER(0x4946b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar3 = *(int *)((int)this + 0x10) + -1 + *(int *)((int)this + 0xc);
    if (*(uint *)((int)this + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)((int)this + 8);
    }
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4)));
    F_00492c50((undefined *)(iVar2 + 4));
    uVar4 = F_00429760(*(undefined4 *)(iVar2 + 4),8,0x2c4);
    uVar3 = (uint)uVar4;
    *(undefined4 *)(iVar2 + 4) = 0;
    piVar1 = (int *)((int)this + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return uVar3;
}

/* ref: FUN_00494710 */
uint F_00494710(unsigned int gen_a0)
{
  GEN_ENTER(0x494710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar3 = *(int *)((int)this + 0x10) + -1 + *(int *)((int)this + 0xc);
    if (*(uint *)((int)this + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)((int)this + 8);
    }
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + uVar3 * 4)));
    F_0042c880((undefined *)(iVar2 + 0x70));
    F_0042c880((undefined *)(iVar2 + 0x1c));
    F_00492c50((undefined *)(iVar2 + 4));
    uVar4 = F_00429760(*(undefined4 *)(iVar2 + 4),8,0x2c4);
    uVar3 = (uint)uVar4;
    *(undefined4 *)(iVar2 + 4) = 0;
    piVar1 = (int *)((int)this + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return uVar3;
}

/* ref: FUN_00494780 */
unsigned int F_00494780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x494780u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int * param_7 = (int *)(uintptr_t)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_7 != (int *)0x0) && ((undefined4 *)*param_7 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*param_7;
  }
  uVar2 = 0;
  if ((param_4 != (int *)0x0) && ((undefined4 *)*param_4 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_4;
  }
  uVar1 = 0;
  if ((param_1 != (int *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
    uVar1 = *(undefined4 *)*param_1;
  }
  F_004942d0(this,uVar1,0,param_3,uVar2,0,param_6,uVar3,0,param_9,param_9);
  return 0;
}

/* ref: FUN_00494810 */
uint F_00494810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x494810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (this != param_1) {
    if (param_1[4] == 0) {
      F_00492c50(this);
      return (uint)this;
    }
    if ((uint)param_1[4] <= *(uint *)((int)this + 0x10)) {
      F_00493400(&(*(int * PTR32 *)(gen_frame + 0x4)),*param_1,0,param_1[3],*param_1,0,param_1[4] + param_1[3],
                   *(undefined4 *)this,0,*(undefined4 *)((int)this + 0xc));
      uVar3 = 0;
      if ((*(int * PTR32 *)this != (int *)0x0) &&
         (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
        uVar3 = *puVar1;
      }
      uVar2 = 0;
      if (((*(int * PTR32 *)(gen_frame + 0x4)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0)) {
        uVar2 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x4));
      }
      F_004931c0(this,&(*(int * PTR32 *)(gen_frame + 0x4)),uVar2,0,(*(undefined4 *)(gen_frame + 0xc)),uVar3,0,
                   *(int *)((int)this + 0x10) + *(int *)((int)this + 0xc));
      return (uint)this;
    }
    (*(undefined4 *)(gen_frame + 0xc)) = param_1[3];
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)*param_1;
    F_0047f520(&(*(int * PTR32 *)(gen_frame + 0x4)),((int * PTR32 *)(gen_frame + 0x10)),*(uint *)((int)this + 0x10));
    uVar3 = 0;
    if ((((int * PTR32 *)(gen_frame + 0x10))[0] != (int *)0x0) && (((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x10))[0])) != (undefined4 *)0x0)) {
      uVar3 = *((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x10))[0]));
    }
    F_00493400(&(*(int * PTR32 *)(gen_frame + 0x4)),*param_1,0,param_1[3],uVar3,0,(*(undefined4 *)(gen_frame + 0x18)),*(undefined4 *)this,0,
                 *(undefined4 *)((int)this + 0xc));
    uVar3 = 0;
    if ((((int * PTR32 *)(gen_frame + 0x10))[0] != (int *)0x0) && (((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x10))[0])) != (undefined4 *)0x0)) {
      uVar3 = *((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x10))[0]));
    }
    uVar2 = 0;
    if ((*(int * PTR32 *)this != (int *)0x0) &&
       (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
      uVar2 = *puVar1;
    }
    F_00494780(this,uVar2,0,*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc),uVar3,0,(*(undefined4 *)(gen_frame + 0x18))
                 ,*param_1,0,param_1[4] + param_1[3]);
  }
  return (uint)this;
}

/* ref: FUN_004949f0 */
uint F_004949f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4949f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 uVar2;
  
  *(undefined4 *)this = 0;
  puVar1 = (undefined4 *)F_004296a0(8,0,0x2c4);
  *(undefined4 * PTR32 *)this = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  **(undefined4 * PTR32 *)this = this;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  uVar2 = 0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    uVar2 = *puVar1;
  }
  F_00494780(this,uVar2,0,*(undefined4 *)((int)this + 0xc),*param_1,0,param_1[3],*param_1,0,
               param_1[4] + param_1[3]);
  return (uint)this;
}

/* ref: FUN_00494a90 */
uint F_00494a90(unsigned int gen_a0)
{
  GEN_ENTER(0x494a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = *(int *)((int)this + 0x10);
  while (iVar3 != 0) {
    if (*(int *)((int)this + 0x10) != 0) {
      uVar2 = *(int *)((int)this + 0x10) + -1 + *(int *)((int)this + 0xc);
      if (*(uint *)((int)this + 8) <= uVar2) {
        uVar2 = uVar2 - *(uint *)((int)this + 8);
      }
      iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 4) + uVar2 * 4)));
      F_0042c880((undefined *)(iVar3 + 0x70));
      F_0042c880((undefined *)(iVar3 + 0x1c));
      F_00492c50((undefined *)(iVar3 + 4));
      F_00429760(*(undefined4 *)(iVar3 + 4),8,0x2c4);
      *(undefined4 *)(iVar3 + 4) = 0;
      piVar1 = (int *)((int)this + 0x10);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
    iVar3 = *(int *)((int)this + 0x10);
  }
  iVar3 = *(int *)((int)this + 8);
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar3 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar3 * 4))),0xd4,0x192);
    }
  }
  uVar2 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x192);
    uVar2 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00494b50 */
uint F_00494b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x494b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  F_004949f0((undefined *)((int)this + 4),param_1 + 1);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  return (uint)this;
}

/* ref: FUN_00494b80 */
uint F_00494b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x494b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  F_004949f0((undefined *)((int)this + 4),param_1 + 1);
  F_0042cbc0((undefined *)((int)this + 0x1c),param_1 + 7);
  F_0042cbc0((undefined *)((int)this + 0x70),param_1 + 0x1c);
  *(undefined1 *)((int)this + 0xc4) = *(undefined1 *)(param_1 + 0x31);
  *(undefined1 *)((int)this + 0xc5) = *(undefined1 *)((int)param_1 + 0xc5);
  *(undefined1 *)((int)this + 0xc6) = *(undefined1 *)((int)param_1 + 0xc6);
  *(undefined1 *)((int)this + 199) = *(undefined1 *)((int)param_1 + 199);
  *(undefined4 *)((int)this + 200) = param_1[0x32];
  *(undefined4 *)((int)this + 0xcc) = param_1[0x33];
  *(undefined1 *)((int)this + 0xd0) = *(undefined1 *)(param_1 + 0x34);
  *(undefined1 *)((int)this + 0xd1) = *(undefined1 *)((int)param_1 + 0xd1);
  return (uint)this;
}

/* ref: FUN_00494c20 */
uint F_00494c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x494c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  F_00494810((undefined *)((int)this + 4),param_1 + 1);
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  return (uint)this;
}

/* ref: FUN_00494c50 */
uint F_00494c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x494c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ulonglong uVar1;
  
  *(undefined4 *)this = param_1;
  F_004949f0((undefined *)((int)this + 4),param_2);
  uVar1 = F_00427d90();
  *(ulonglong *)((int)this + 0x20) = uVar1;
  return (uint)this;
}

/* ref: FUN_00494c80 */
uint F_00494c80(unsigned int gen_a0)
{
  GEN_ENTER(0x494c80u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  F_0042b630(in_ecx + 0x54);
  *(undefined4 *)(in_ecx + 0xa8) = 0;
  *(undefined4 *)(in_ecx + 0xac) = 0;
  *(undefined4 *)(in_ecx + 0xb0) = 0;
  *(undefined4 *)(in_ecx + 0xb8) = 0;
  *(undefined4 *)(in_ecx + 0xbc) = 0;
  *(undefined4 *)(in_ecx + 0xc0) = 0;
  *(undefined4 *)(in_ecx + 200) = 0;
  *(undefined4 *)(in_ecx + 0xcc) = 0;
  *(undefined4 *)(in_ecx + 0xd0) = 0;
  *(undefined4 *)(in_ecx + 0xd8) = 0;
  *(undefined4 *)(in_ecx + 0xdc) = 0;
  *(undefined4 *)(in_ecx + 0xe0) = 0;
  return in_ecx;
}

/* ref: FUN_00494ce0 */
uint F_00494ce0(unsigned int gen_a0)
{
  GEN_ENTER(0x494ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00488e10((undefined *)((int)this + 0xd8));
  F_0048a430((undefined *)((int)this + 200));
  F_00493c70((undefined *)((int)this + 0xb8));
  F_0048a2f0((undefined *)((int)this + 0xa8));
  F_0042c880((undefined *)((int)this + 0x54));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_00494d20 */
uint F_00494d20(unsigned int gen_a0)
{
  GEN_ENTER(0x494d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00494a90(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x192);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00494d50 */
unsigned int F_00494d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x494d50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    F_004949f0(param_1 + 1,param_2 + 1);
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
  }
  return 0;
}

/* ref: FUN_00494d90 */
unsigned int F_00494d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x494d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00494b80(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00494db0 */
unsigned int F_00494db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x494db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint param_7 = (uint)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  uint param_10 = (uint)gen_a9;
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = param_7;
  uVar5 = param_10;
  while (param_4 != uVar3) {
    uVar3 = uVar3 - 1;
    iVar6 = 0;
    if (param_5 != (int *)0x0) {
      iVar6 = *param_5;
    }
    uVar4 = uVar3;
    if (*(uint *)(iVar6 + 8) <= uVar3) {
      uVar4 = uVar3 - *(uint *)(iVar6 + 8);
    }
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar6 + 4) + uVar4 * 4)));
    uVar5 = uVar5 - 1;
    iVar6 = 0;
    if (param_8 != (int *)0x0) {
      iVar6 = *param_8;
    }
    uVar4 = uVar5;
    if (*(uint *)(iVar6 + 8) <= uVar5) {
      uVar4 = uVar5 - *(uint *)(iVar6 + 8);
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar6 + 4) + uVar4 * 4)));
    *puVar2 = *puVar1;
    F_00494810(puVar2 + 1,puVar1 + 1);
    puVar2[8] = puVar1[8];
    puVar2[9] = puVar1[9];
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (param_8 != (int *)0x0) {
    if ((undefined4 *)*param_8 == (undefined4 *)0x0) {
      param_1[2] = uVar5;
      return 0;
    }
    *param_1 = *(undefined4 *)*param_8;
  }
  param_1[2] = uVar5;
  return 0;
}

