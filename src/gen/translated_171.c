#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00d9d910 */
uint F_00d9d910(unsigned int gen_a0)
{
  GEN_ENTER(0xd9d910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  F_00d9d700(&(*(undefined4 *)(gen_frame + 0x0)),this);
  F_00d9caf0(&(*(undefined4 *)(gen_frame + 0x0)),0x5c,0x2f,1);
  (*(int *)(gen_frame + 0x90)) = 0;
  (*(int *)(gen_frame + 0x94)) = 0;
  (*(uint *)(gen_frame + 0x98)) = 0x80000000;
  F_00d9cf30(((undefined *)(uint)(&(*(undefined4 *)(gen_frame + 0x0)))),0x2f,&(*(int *)(gen_frame + 0x90)));
  iVar4 = 0;
  (*(int *)(gen_frame + 0x8c)) = 0;
  if (0 < (*(int *)(gen_frame + 0x94))) {
    do {
      uVar2 = F_00da0d20(&REFG(undefined, 0x113be34),*(undefined4 *)((*(int *)(gen_frame + 0x90)) + iVar4 * 4));
      if (uVar2 != 0) {
        (*(int *)(gen_frame + 0x8c)) = iVar4;
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (*(int *)(gen_frame + 0x94)));
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xa0)) = (undefined4 *)0x0;
  (*(uint *)(gen_frame + 0xa4)) = 0;
  (*(int *)(gen_frame + 0x9c)) = 0;
  (*(uint *)(gen_frame + 0xa8)) = 0x80000000;
  iVar4 = (*(int *)(gen_frame + 0x94));
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    uVar2 = F_00da0d20(&REFG(undefined, 0x113be34),*(undefined4 *)((*(int *)(gen_frame + 0x90)) + iVar4 * 4));
    if (uVar2 == 0) {
      (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 1;
    }
    else if ((*(int *)(gen_frame + 0x9c)) < 1) {
      puVar1 = (undefined4 *)((*(int *)(gen_frame + 0x90)) + iVar4 * 4);
      uVar2 = F_00d9cbc0();
      if ((*(uint *)(gen_frame + 0xa4)) == ((*(uint *)(gen_frame + 0xa8)) & 0x3fffffff)) {
        F_00d95710(uVar2,&(*(undefined4 * PTR32 *)(gen_frame + 0xa0)),4);
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0xa0))[(*(uint *)(gen_frame + 0xa4))] = *puVar1;
      (*(uint *)(gen_frame + 0xa4)) = (*(uint *)(gen_frame + 0xa4)) + 1;
    }
    else {
      (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + -1;
    }
  }
  F_00d9cff0(this);
  uVar2 = (*(uint *)(gen_frame + 0xa4));
  if (0 < (int)(*(uint *)(gen_frame + 0xa4))) {
    while (uVar2 = uVar2 - 1, 0 < (int)uVar2) {
      F_00d9d120(this,(*(undefined4 * PTR32 *)(gen_frame + 0xa0))[uVar2],&REFG(undefined, 0x1080808),0,0,0,0);
    }
    F_00d9d390(this,*(*(undefined4 * PTR32 *)(gen_frame + 0xa0)),0xffffffff);
    iVar4 = (*(int *)(gen_frame + 0x8c));
    if (0 < (*(int *)(gen_frame + 0x8c))) {
      do {
        F_00d9d530(this,&REFG(undefined, 0x113be30),0xffffffff);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  piVar3 = (int *)F_00d9cbc0();
  (*(uint *)(gen_frame + 0xa4)) = 0;
  if (((*(uint *)(gen_frame + 0xa8)) & 0x80000000) == 0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3,(*(undefined4 * PTR32 *)(gen_frame + 0xa0)),(*(uint *)(gen_frame + 0xa8)) * 4);
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xa0)) = (undefined4 *)0x0;
  (*(uint *)(gen_frame + 0xa8)) = 0x80000000;
  piVar3 = (int *)F_00d9cbc0();
  (*(int *)(gen_frame + 0x94)) = 0;
  if (((*(uint *)(gen_frame + 0x98)) & 0x80000000) == 0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3,(*(int *)(gen_frame + 0x90)),(*(uint *)(gen_frame + 0x98)) * 4);
  }
  (*(int *)(gen_frame + 0x90)) = 0;
  (*(uint *)(gen_frame + 0x98)) = 0x80000000;
  piVar3 = (int *)F_00d9cbc0();
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  if (((*(uint *)(gen_frame + 0x8)) & 0x80000000) == 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3,(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff)));
  }
  return (uint)piVar3;
}

/* ref: FUN_00d9db00 */
uint F_00d9db00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd9db00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint uVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = F_00da0e60(param_1);
  (*(uint *)(gen_frame + 0x9c)) = uVar1;
  uVar2 = F_00da0e60(param_2);
  (*(uint *)(gen_frame + 0xa0)) = uVar2;
  (*(uint *)(gen_frame + 0xa8)) = 0;
  if ((int)uVar1 < (int)uVar2) {
    F_00d9d700(&(*(int *)(gen_frame + 0xc)),this);
    F_00d9cff0(this);
    iVar6 = 0;
    uVar1 = F_00d9c7c0(&(*(int *)(gen_frame + 0xc)),param_1,0,0x7fffffff);
    if (-1 < (int)uVar1) {
      (*(uint *)(gen_frame + 0xa8)) = 1;
      do {
        F_00d9d390(this,(*(int *)(gen_frame + 0xc)) + iVar6,uVar1 - iVar6);
        F_00d9d390(this,param_2,(*(uint *)(gen_frame + 0xa0)));
        iVar6 = uVar1 + (*(uint *)(gen_frame + 0x9c));
        if (param_3 == 0) break;
        uVar1 = F_00d9c7c0(&(*(int *)(gen_frame + 0xc)),param_1,iVar6,0x7fffffff);
      } while (-1 < (int)uVar1);
    }
    F_00d9d390(this,(*(int *)(gen_frame + 0xc)) + iVar6,((*(int *)(gen_frame + 0x10)) - iVar6) + -1);
    piVar3 = (int *)F_00d9cbc0();
    (*(int *)(gen_frame + 0x10)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
      ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3,(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) & 0x3fffffff);
      return (*(uint *)(gen_frame + 0xa8));
    }
  }
  else {
    iVar6 = *(int *)this;
    iVar7 = 0;
    (*(int *)(gen_frame + 0xa4)) = 0;
    (*(uint *)(gen_frame + 0x98)) = F_00d9c7c0(this,param_1,0,0x7fffffff);
    while (iVar5 = (*(int *)(gen_frame + 0xa4)), (*(uint *)(gen_frame + 0x98)) != 0xffffffff) {
      for (; iVar5 < (int)(*(uint *)(gen_frame + 0x98)); iVar5 = iVar5 + 1) {
        *(undefined1 *)(iVar7 + iVar6) = *(undefined1 *)(iVar5 + iVar6);
        iVar7 = iVar7 + 1;
      }
      iVar4 = 0;
      if (0 < (int)(*(uint *)(gen_frame + 0xa0))) {
        do {
          *(undefined1 *)(iVar7 + iVar6) = *(undefined1 *)(iVar4 + param_2);
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + 1;
        } while (iVar4 < (int)(*(uint *)(gen_frame + 0xa0)));
      }
      (*(int *)(gen_frame + 0xa4)) = iVar5 + (*(uint *)(gen_frame + 0x9c));
      if (param_3 == 0) break;
      (*(uint *)(gen_frame + 0x98)) = F_00d9c7c0(this,param_1,(*(uint *)(gen_frame + 0x98)) + (*(uint *)(gen_frame + 0x9c)),0x7fffffff);
    }
    iVar5 = (*(int *)(gen_frame + 0xa4));
    if ((*(int *)(gen_frame + 0xa4)) < *(int *)((int)this + 4) + -1) {
      do {
        *(undefined1 *)(iVar7 + iVar6) = *(undefined1 *)(iVar5 + iVar6);
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + 1;
      } while (iVar5 < *(int *)((int)this + 4) + -1);
    }
    *(undefined1 *)(iVar7 + iVar6) = 0;
    iVar6 = iVar7 + 1;
    uVar1 = F_00d9cbc0();
    uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
    if ((int)uVar2 < iVar6) {
      iVar5 = uVar2 * 2;
      if (iVar5 <= iVar6) {
        iVar5 = iVar6;
      }
      F_00d95690(uVar1,this,iVar5,1);
    }
    *(int *)((int)this + 4) = iVar6;
    *(undefined1 *)(iVar7 + *(int *)this) = 0;
  }
  return (*(uint *)(gen_frame + 0xa8));
}

/* ref: FUN_00d9dd00 */
uint F_00d9dd00(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xd9dd00u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x800000ff;
  while( true ) {
    while( true ) {
      uVar4 = (*(uint *)(gen_frame + 0x8)) & 0x3fffffff;
      uVar2 = F_00da0cd0((*(undefined1 * PTR32 *)(gen_frame + 0x0)),uVar4,param_2,((undefined *)&gen_args[2]));
      if (-1 < (int)uVar2) break;
      uVar2 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
      uVar4 = F_00d9cbc0();
      if (((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) < uVar2) {
        uVar1 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
        if (uVar2 < uVar1) {
          uVar2 = uVar1;
        }
        F_00d95690(uVar4,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),uVar2,1);
      }
    }
    if ((int)uVar2 < (int)uVar4) break;
    uVar4 = F_00d9cbc0();
    if ((int)((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) < (int)uVar2) {
      uVar1 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
      if ((int)uVar2 < (int)uVar1) {
        uVar2 = uVar1;
      }
      F_00d95690(uVar4,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),uVar2,1);
    }
  }
  F_00d9cde0(param_1,(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  F_00d9cde0(param_1,(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  piVar3 = (int *)F_00d9cbc0();
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3,(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff)));
  }
  return (uint)piVar3;
}

/* ref: FUN_00d9de40 */
uint F_00d9de40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9de40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da0d20(param_1,param_2);
  return (uint)(uVar1 == 0);
}

/* ref: FUN_00d9de60 */
uint F_00d9de60(unsigned int gen_a0)
{
  GEN_ENTER(0xd9de60u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * pcVar1;
  char cVar2;
  uint uVar3;
  char * pcVar4;
  
  uVar3 = 0;
  cVar2 = *param_1;
  pcVar4 = param_1;
  while (cVar2 != '\0') {
    pcVar1 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
    uVar3 = (int)cVar2 + uVar3 * 0x1f;
    cVar2 = *pcVar1;
  }
  return uVar3 & 0x7fffffff;
}

/* ref: FUN_00d9de90 */
uint F_00d9de90(unsigned int gen_a0)
{
  GEN_ENTER(0xd9de90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint extraout_EAX = 0;
  
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  F_00db3820((undefined *)((int)this + 8));
  F_00d9b7c0(this);
  return extraout_EAX;
}

/* ref: FUN_00d9deb0 */
uint F_00d9deb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9deb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d9dec0 */
uint F_00d9dec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9dec0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d9df30 */
uint F_00d9df30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9df30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d9df50 */
uint F_00d9df50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9df50u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_00d9df60 */
uint F_00d9df60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9df60u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_00d9dfe0 */
uint F_00d9dfe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9dfe0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 4 + param_2 * 0xc);
}

/* ref: FUN_00d9e000 */
uint F_00d9e000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9e000u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 8 + param_2 * 0xc);
}

/* ref: FUN_00d9e020 */
uint F_00d9e020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9e020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)(*(int *)this + 8 + param_1 * 0xc) = param_2;
  return param_1 * 3;
}

/* ref: FUN_00d9e040 */
unsigned int F_00d9e040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9e040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *(int *)((int)this + 8)) {
    piVar2 = (int *)(*(int *)this + iVar1 * 0xc);
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (iVar1 <= *(int *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_00d9e070 */
uint F_00d9e070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9e070u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00d9e090 */
uint F_00d9e090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9e090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char * pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char * pcVar7;
  uint uVar8;
  
  uVar5 = 0;
  cVar2 = *param_1;
  pcVar7 = param_1;
  while (cVar2 != '\0') {
    pcVar1 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
    uVar5 = (int)cVar2 + uVar5 * 0x1f;
    cVar2 = *pcVar1;
  }
  uVar5 = uVar5 & 0x7fffffff;
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_00d9ecf0(this,*(int *)((int)this + 8) * 2 + 2);
  }
  uVar8 = *(uint *)((int)this + 8) & uVar5;
  iVar4 = uVar8 * 0xc;
  iVar3 = *(int *)(iVar4 + *(int *)this);
  while (iVar3 != -1) {
    if ((*(uint *)(iVar4 + *(int *)this) == uVar5) &&
       (uVar6 = F_00da0d20(param_1,*(undefined4 *)(iVar4 + 4 + *(int *)this)), uVar6 == 0))
    goto LAB_00d9e122;
    uVar8 = uVar8 + 1 & *(uint *)((int)this + 8);
    iVar4 = uVar8 * 0xc;
    iVar3 = *(int *)(iVar4 + *(int *)this);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
LAB_00d9e122: ;
  uVar8 = uVar8 * 0xc;
  *(uint *)(uVar8 + *(int *)this) = uVar5;
  *(char * PTR32 *)(uVar8 + 4 + *(int *)this) = param_1;
  *(undefined4 *)(uVar8 + 8 + *(int *)this) = param_2;
  return uVar8;
}

/* ref: FUN_00d9e150 */
uint F_00d9e150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9e150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char * pcVar1;
  uint * puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  char * pcVar6;
  uint uVar7;
  
  uVar4 = 0;
  cVar3 = *param_1;
  pcVar6 = param_1;
  while (cVar3 != '\0') {
    pcVar1 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
    uVar4 = (int)cVar3 + uVar4 * 0x1f;
    cVar3 = *pcVar1;
  }
  uVar7 = *(uint *)((int)this + 8) & uVar4 & 0x7fffffff;
  puVar2 = (uint *)(*(int *)this + uVar7 * 0xc);
  uVar5 = *puVar2;
  while( true ) {
    if (uVar5 == 0xffffffff) {
      return *(int *)((int)this + 8) + 1;
    }
    if ((uVar5 == (uVar4 & 0x7fffffff)) && (uVar5 = F_00da0d20(param_1,puVar2[1]), uVar5 == 0))
    break;
    uVar7 = uVar7 + 1 & *(uint *)((int)this + 8);
    puVar2 = (uint *)(*(int *)this + uVar7 * 0xc);
    uVar5 = *puVar2;
  }
  return uVar7;
}

/* ref: FUN_00d9e1e0 */
uint F_00d9e1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9e1e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  
  uVar1 = (*(undefined4 *)&gen_args[1]);
  uVar2 = F_00d9e150((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  pcVar3 = (char *)F_00d9e070((*(undefined * PTR32 *)&gen_args[0]),(int)&(*(undefined4 *)&gen_args[1]) + 3,uVar2);
  uVar4 = (*(uint *)&gen_args[2]);
  if (*pcVar3 != '\0') {
    uVar4 = F_00d9e000((*(undefined * PTR32 *)&gen_args[0]),uVar2);
    return uVar4;
  }
  F_00d9e090((*(undefined * PTR32 *)&gen_args[0]),uVar1,(*(uint *)&gen_args[2]));
  return uVar4;
}

/* ref: FUN_00d9e230 */
uint F_00d9e230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9e230u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  char * pcVar2;
  
  uVar1 = F_00d9e150((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  pcVar2 = (char *)F_00d9e070((*(undefined * PTR32 *)&gen_args[0]),(int)&(*(undefined4 *)&gen_args[1]) + 3,uVar1);
  if (*pcVar2 != '\0') {
    uVar1 = F_00d9e000((*(undefined * PTR32 *)&gen_args[0]),uVar1);
    *(*(uint * PTR32 *)&gen_args[2]) = uVar1;
    return 0;
  }
  return 1;
}

/* ref: FUN_00d9e280 */
unsigned int F_00d9e280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9e280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  *(undefined4 *)(*(int *)this + param_1 * 0xc) = 0xffffffff;
  uVar5 = *(uint *)((int)this + 8);
  uVar3 = uVar5 + param_1 & uVar5;
  iVar1 = *(int *)(*(int *)this + uVar3 * 0xc);
  while (iVar1 != -1) {
    uVar3 = uVar3 + uVar5 & uVar5;
    iVar1 = *(int *)(*(int *)this + uVar3 * 0xc);
  }
  uVar4 = uVar3 + 1 & uVar5;
  uVar3 = param_1 + 1 & uVar5;
  iVar2 = uVar3 * 0xc;
  iVar1 = *(int *)(*(int *)this + iVar2);
  uVar6 = param_1;
  while (iVar1 != -1) {
    uVar5 = *(uint *)(*(int *)this + iVar2) & uVar5;
    if ((((uVar3 < uVar4) || (uVar5 <= uVar6)) &&
        ((uVar6 <= uVar3 || ((uVar5 <= uVar6 && (uVar3 < uVar5)))))) &&
       ((uVar5 <= uVar6 || (uVar4 <= uVar5)))) {
      iVar1 = uVar6 * 0xc;
      *(uint *)(iVar1 + *(int *)this) = *(uint *)(*(int *)this + iVar2);
      *(undefined4 *)(iVar1 + 4 + *(int *)this) = *(undefined4 *)(*(int *)this + 4 + iVar2);
      *(undefined4 *)(iVar1 + 8 + *(int *)this) = *(undefined4 *)(*(int *)this + 8 + iVar2);
      *(undefined4 *)(iVar2 + *(int *)this) = 0xffffffff;
      uVar6 = uVar3;
    }
    uVar5 = *(uint *)((int)this + 8);
    uVar3 = uVar3 + 1 & uVar5;
    iVar2 = uVar3 * 0xc;
    iVar1 = *(int *)(iVar2 + *(int *)this);
  }
  return 0;
}

/* ref: FUN_00d9e350 */
uint F_00d9e350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9e350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int local_c;
  int local_8;
  
  uVar4 = *(uint *)((int)this + 8);
  local_c = 0;
  if (-1 < (int)uVar4) {
    local_8 = 0;
    do {
      iVar1 = *(int *)this;
      if (*(int *)(iVar1 + local_8) != -1) {
        uVar2 = *(uint *)(iVar1 + local_8);
        uVar3 = *(undefined4 *)(iVar1 + 4 + local_8);
        uVar4 = uVar4 & uVar2;
        while ((*(uint *)(*(int *)this + uVar4 * 0xc) != uVar2 ||
               (uVar5 = F_00da0d20(uVar3,*(undefined4 *)(*(int *)this + uVar4 * 0xc + 4)),
               uVar5 != 0))) {
          uVar4 = uVar4 + 1 & *(uint *)((int)this + 8);
        }
      }
      uVar4 = *(uint *)((int)this + 8);
      local_8 = local_8 + 0xc;
      local_c = local_c + 1;
    } while (local_c <= (int)uVar4);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00d9e420 */
uint F_00d9e420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9e420u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d9e450 */
uint F_00d9e450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9e450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = param_1[2];
  if (-1 < (int)uVar1) {
    iVar2 = 0;
    iVar3 = uVar1 + 1;
    do {
      uVar1 = *param_1;
      if (*(int *)(uVar1 + iVar2) != -1) {
        uVar1 = F_00d9e090(this,*(undefined4 *)(uVar1 + 4 + iVar2),
                             *(undefined4 *)(uVar1 + 8 + iVar2));
      }
      iVar2 = iVar2 + 0xc;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar1;
}

/* ref: FUN_00d9e4c0 */
unsigned int F_00d9e4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9e4c0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d9e4f0 */
unsigned int F_00d9e4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9e4f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined1 * puVar1;
  int iVar2;
  
  if (0 < param_3) {
    puVar1 = param_1;
    iVar2 = param_3;
    do {
      *puVar1 = puVar1[param_2 - (int)param_1];
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00d9e510 */
unsigned int F_00d9e510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9e510u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d9e540 */
uint F_00d9e540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9e540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this,param_1 * 0xc);
  return uVar1;
}

/* ref: FUN_00d9e560 */
uint F_00d9e560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9e560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00d9e580 */
uint F_00d9e580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9e580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d9e5a0 */
unsigned int F_00d9e5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9e5a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined1 * puVar1;
  int iVar2;
  
  if (0 < param_3) {
    puVar1 = param_1;
    iVar2 = param_3;
    do {
      *puVar1 = puVar1[param_2 - (int)param_1];
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00d9e5c0 */
unsigned int F_00d9e5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9e5c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined1 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      *puVar1 = puVar1[param_3 - (int)param_1];
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00d9e5e0 */
uint F_00d9e5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9e5e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d9e650 */
uint F_00d9e650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9e650u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[3] = param_2;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0x80000000;
  in_ecx[4] = 0xffffffff;
  in_ecx[5] = 0xffffffff;
  return (uint)in_ecx;
}

/* ref: FUN_00d9e680 */
unsigned int F_00d9e680(unsigned int gen_a0)
{
  GEN_ENTER(0xd9e680u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x18);
  }
  return 0;
}

/* ref: FUN_00d9e6b0 */
uint F_00d9e6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9e6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[11])REFP(0x113bdd4));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: hkMallocAllocator::vf0 */
uint F_00d9e6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9e6d0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d9b7c0(in_ecx);
  return in_ecx;
}

/* ref: FUN_00d9e6e0 */
uint F_00d9e6e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9e6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x113be04));
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined4 *)((int)this + 0x14) = 0;
  F_00da5ee0((undefined *)((int)this + 0x20),0);
  return (uint)this;
}

/* ref: hkLeakDetectAllocator::vf0 */
uint F_00d9e720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9e720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x20));
  F_00db3820(this + 8);
  F_00d9b7c0(this);
  return (uint)this;
}

/* ref: FUN_00d9e750 */
uint F_00d9e750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9e750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  gen_imp_DeleteCriticalSection(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0x18);
  }
  return (uint)this;
}

/* ref: FUN_00d9e7b0 */
uint F_00d9e7b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9e7b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00d9e7d0 */
unsigned int F_00d9e7d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9e7d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x10);
  }
  return 0;
}

/* ref: FUN_00d9e800 */
uint F_00d9e800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9e800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00d9e150(this,param_2);
  F_00d9e070(this,param_1,uVar1);
  return param_1;
}

/* ref: FUN_00d9e830 */
uint F_00d9e830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd9e830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00d9e850 */
uint F_00d9e850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9e850u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d9e890 */
unsigned int F_00d9e890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9e890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined1 * puVar1;
  int iVar2;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) - param_2;
  iVar2 = *(int *)((int)this + 4) - param_1;
  puVar1 = (undefined1 *)(*(int *)this + param_1);
  if (0 < iVar2) {
    do {
      *puVar1 = puVar1[param_2];
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00d9e8d0 */
uint F_00d9e8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9e8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * puVar1;
  
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4))));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d9e8f0 */
uint F_00d9e8f0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9e8f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d9cbc0();
  uVar1 = F_00d92460(uVar1,param_1);
  return uVar1;
}

/* ref: FUN_00d9e910 */
uint F_00d9e910(unsigned int gen_a0)
{
  GEN_ENTER(0xd9e910u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d9cbc0();
  uVar1 = F_00d924b0(uVar1,param_1);
  return uVar1;
}

/* ref: FUN_00d9e930 */
uint F_00d9e930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9e930u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  F_00d9e230((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(uint *)&gen_args[2]));
  return (*(uint *)&gen_args[2]);
}

/* ref: FUN_00d9e950 */
uint F_00d9e950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9e950u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  char * pcVar2;
  
  uVar1 = F_00d9e150((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  pcVar2 = (char *)F_00d9e070((*(undefined * PTR32 *)&gen_args[0]),(int)&(*(undefined4 *)&gen_args[1]) + 3,uVar1);
  if (*pcVar2 != '\0') {
    F_00d9e280((*(undefined * PTR32 *)&gen_args[0]),uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_00d9e990 */
unsigned int F_00d9e990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd9e990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  uint uVar1;
  undefined1 * puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)((int)this + 4);
  iVar5 = (iVar4 - param_3) + param_5;
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar1 < iVar5) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    F_00d95690(param_1,this,iVar3,1);
  }
  F_00da38f0(param_2 + *(int *)this + param_5,param_3 + param_2 + *(int *)this,
               (iVar4 - param_2) - param_3);
  puVar2 = (undefined1 *)(*(int *)this + param_2);
  if (0 < param_5) {
    iVar3 = param_4 - (int)puVar2;
    iVar4 = param_5;
    do {
      *puVar2 = puVar2[iVar3];
      puVar2 = puVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(int *)((int)this + 4) = iVar5;
  return 0;
}

/* ref: FUN_00d9ea20 */
uint F_00d9ea20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd9ea20u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * piVar1;
  uint uVar2;
  undefined1 * puVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (*(int * PTR32 *)&gen_args[2]);
  uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) & 0x3fffffff;
  if ((int)uVar2 < (*(int * PTR32 *)&gen_args[2])[1]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x10))))((*(int * PTR32 *)&gen_args[1]),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),uVar2);
    }
    (*(int * PTR32 *)&gen_args[2]) = (int *)piVar1[1];
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xc))))((*(int * PTR32 *)&gen_args[1]),&(*(int * PTR32 *)&gen_args[2]));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
    *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (*(int * PTR32 *)&gen_args[2]);
  }
  iVar5 = piVar1[1];
  puVar3 = *(undefined1 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar5;
  if (0 < iVar5) {
    iVar4 = *piVar1 - (int)puVar3;
    do {
      *puVar3 = puVar3[iVar4];
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d9eac0 */
uint F_00d9eac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9eac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = F_00d9cbc0();
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(uVar2,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d9eb00 */
uint F_00d9eb00(unsigned int gen_a0)
{
  GEN_ENTER(0xd9eb00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  int in_ECX = 0;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00d9cbc0();
  uVar4 = *(uint *)(in_ECX + 8) & 0x3fffffff;
  if ((int)uVar4 < param_1) {
    iVar1 = uVar4 * 2;
    iVar5 = param_1;
    if (param_1 < iVar1) {
      iVar5 = iVar1;
    }
    bVar2 = F_00d95690(uVar3,in_ECX,iVar5,1);
    return CONCAT31(extraout_var,bVar2);
  }
  return 0;
}

/* ref: FUN_00d9eb40 */
uint F_00d9eb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9eb40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  int iVar4;
  
  uVar2 = F_00d9cbc0();
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < param_1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= param_1) {
      iVar4 = param_1;
    }
    bVar1 = F_00d95690(uVar2,this,iVar4,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00d9eb80 */
unsigned int F_00d9eb80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd9eb80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00d9e990(this,param_1,param_2,0,param_3,param_4);
  return 0;
}

/* ref: FUN_00d9eba0 */
uint F_00d9eba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9eba0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  undefined1 * puVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = (int *)F_00d9cbc0();
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) & 0x3fffffff;
  if ((int)uVar3 < (*(int * PTR32 *)&gen_args[1])[1]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
      ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2,*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),uVar3);
    }
    (*(int * PTR32 *)&gen_args[1]) = (int *)piVar1[1];
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,&(*(int * PTR32 *)&gen_args[1]));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar3;
    *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (*(int * PTR32 *)&gen_args[1]);
  }
  iVar6 = piVar1[1];
  puVar4 = *(undefined1 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar6;
  if (0 < iVar6) {
    iVar5 = *piVar1 - (int)puVar4;
    do {
      *puVar4 = puVar4[iVar5];
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d9ec20 */
uint F_00d9ec20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9ec20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00d9cbc0();
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,0xc0);
  *(uint *)this = uVar2;
  F_00da1030(uVar2,0xff,0xc0);
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xf;
  return (uint)this;
}

/* ref: FUN_00d9ec80 */
uint F_00d9ec80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9ec80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = (int *)F_00d9cbc0();
  ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2,*(undefined4 *)this,(*(int *)((int)this + 8) * 3 + 3) * 4);
  iVar1 = param_1[2];
  *(int *)((int)this + 8) = iVar1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,(iVar1 * 3 + 3) * 4);
  *(uint *)this = uVar3;
  F_00da1010(uVar3,*param_1,(*(int *)((int)this + 8) * 3 + 3) * 4);
  return (uint)this;
}

/* ref: FUN_00d9ecf0 */
uint F_00d9ecf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9ecf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  
  iVar1 = *(int *)this;
  iVar4 = *(int *)((int)this + 8) + 1;
  piVar2 = (int *)F_00d9cbc0();
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1 * 0xc);
  *(uint *)this = uVar3;
  F_00da1030(uVar3,0xff,param_1 * 0xc);
  *(undefined4 *)((int)this + 4) = 0;
  *(int *)((int)this + 8) = param_1 + -1;
  if (0 < iVar4) {
    puVar5 = (undefined4 *)(iVar1 + 4);
    param_1 = iVar4;
    do {
      if (puVar5[-1] != -1) {
        F_00d9e090(this,*puVar5,puVar5[1]);
      }
      puVar5 = puVar5 + 3;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2,iVar1,iVar4 * 0xc);
  return uVar3;
}

/* ref: FUN_00d9ed90 */
uint F_00d9ed90(unsigned int gen_a0)
{
  GEN_ENTER(0xd9ed90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = (int *)F_00d9cbc0();
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)*(uint *)((int)this + 8)) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x10))
                              (piVar1,*(undefined4 *)this,*(uint *)((int)this + 8) & 0x3fffffff)));
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return (uint)piVar1;
}

/* ref: FUN_00d9edd0 */
uint F_00d9edd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9edd0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d9ee10 */
uint F_00d9ee10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9ee10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = param_1 + 1;
  uVar2 = F_00d9cbc0();
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(uVar2,this,iVar4,1);
  }
  uVar2 = *(uint *)this;
  *(int *)((int)this + 4) = iVar1;
  *(undefined1 *)(param_1 + uVar2) = 0;
  return uVar2;
}

/* ref: FUN_00d9ee60 */
unsigned int F_00d9ee60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9ee60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined * in_ECX = 0;
  
  uVar1 = F_00d9cbc0();
  F_00d9eb80(in_ECX,uVar1,param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_00d9ee80 */
unsigned int F_00d9ee80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9ee80u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  undefined1 * puVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = (int *)F_00d9cbc0();
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) & 0x3fffffff;
  if ((int)uVar3 < (*(int * PTR32 *)&gen_args[1])[1]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
      ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2,*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),uVar3);
    }
    (*(int * PTR32 *)&gen_args[1]) = (int *)piVar1[1];
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2,&(*(int * PTR32 *)&gen_args[1]));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar3;
    *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (*(int * PTR32 *)&gen_args[1]);
  }
  iVar6 = piVar1[1];
  puVar4 = *(undefined1 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar6;
  if (0 < iVar6) {
    iVar5 = *piVar1 - (int)puVar4;
    do {
      *puVar4 = puVar4[iVar5];
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 0;
}

/* ref: FUN_00d9eef0 */
uint F_00d9eef0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9eef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = (int *)F_00d9cbc0();
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)*(uint *)((int)this + 8)) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x10))
                              (piVar1,*(undefined4 *)this,*(uint *)((int)this + 8) & 0x3fffffff)));
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return (uint)piVar1;
}

/* ref: FUN_00d9ef30 */
uint F_00d9ef30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9ef30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char * pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char * pcVar6;
  uint uVar7;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_00d9ecf0(this,*(int *)((int)this + 8) * 2 + 2);
  }
  uVar4 = 0;
  cVar2 = *param_1;
  pcVar6 = param_1;
  while (cVar2 != '\0') {
    pcVar1 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
    uVar4 = (int)cVar2 + uVar4 * 0x1f;
    cVar2 = *pcVar1;
  }
  uVar4 = uVar4 & 0x7fffffff;
  uVar7 = uVar4;
  while( true ) {
    uVar7 = uVar7 & *(uint *)((int)this + 8);
    iVar3 = uVar7 * 0xc;
    if ((*(uint *)(*(int *)this + iVar3) == uVar4) &&
       (uVar5 = F_00da0d20(param_1,*(undefined4 *)(*(int *)this + 4 + iVar3)), uVar5 == 0)) break;
    if (*(int *)(iVar3 + *(int *)this) == -1) {
      iVar3 = uVar7 * 0xc;
      *(uint *)(iVar3 + *(int *)this) = uVar4;
      *(char * PTR32 *)(iVar3 + 4 + *(int *)this) = param_1;
      *(undefined4 *)(iVar3 + 8 + *(int *)this) = param_2;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      return uVar7;
    }
    uVar7 = uVar7 + 1;
  }
  return uVar7;
}

/* ref: FUN_00d9efe0 */
uint F_00d9efe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9efe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = 8;
  if (8 < param_1 * 2) {
    do {
      uVar1 = uVar1 * 2;
    } while ((int)uVar1 < param_1 * 2);
  }
  if (*(int *)((int)this + 8) + 1 < (int)uVar1) {
    uVar1 = F_00d9ecf0(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00d9f010 */
uint F_00d9f010(unsigned int gen_a0)
{
  GEN_ENTER(0xd9f010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = (int *)F_00d9cbc0();
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < *(int *)((int)this + 8)) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x10))
                              (piVar1,*(undefined4 *)this,*(int *)((int)this + 8) * 4)));
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return (uint)piVar1;
}

/* ref: FUN_00d9f050 */
uint F_00d9f050(unsigned int gen_a0)
{
  GEN_ENTER(0xd9f050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = (int *)F_00d9cbc0();
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)*(uint *)((int)this + 8)) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x10))
                              (piVar1,*(undefined4 *)this,*(uint *)((int)this + 8) & 0x3fffffff)));
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return (uint)piVar1;
}

/* ref: FUN_00d9f090 */
uint F_00d9f090(unsigned int gen_a0)
{
  GEN_ENTER(0xd9f090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = (int *)F_00d9cbc0();
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)*(uint *)((int)this + 8)) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x10))
                              (piVar1,*(undefined4 *)this,*(uint *)((int)this + 8) & 0x3fffffff)));
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return (uint)piVar1;
}

/* ref: FUN_00d9f0d0 */
uint F_00d9f0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd9f0d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00d9f0f0 */
uint F_00d9f0f0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9f0f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = (int *)F_00d9cbc0();
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < *(int *)((int)this + 8)) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x10))
                              (piVar1,*(undefined4 *)this,*(int *)((int)this + 8) * 4)));
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return (uint)piVar1;
}

/* ref: FUN_00d9f130 */
uint F_00d9f130(unsigned int gen_a0)
{
  GEN_ENTER(0xd9f130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = (int *)F_00d9cbc0();
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)*(uint *)((int)this + 8)) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x10))
                              (piVar1,*(undefined4 *)this,*(uint *)((int)this + 8) & 0x3fffffff)));
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return (uint)piVar1;
}

/* ref: FUN_00d9f170 */
uint F_00d9f170(unsigned int gen_a0)
{
  GEN_ENTER(0xd9f170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = (int *)F_00d9cbc0();
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)*(uint *)((int)this + 8)) {
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x10))
                              (piVar1,*(undefined4 *)this,*(uint *)((int)this + 8) & 0x3fffffff)));
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return (uint)piVar1;
}

/* ref: FUN_00d9f1f0 */
uint F_00d9f1f0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9f1f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(int *)this = (int)this + 0xc;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000080;
  uVar1 = F_00d9cbc0();
  if ((*(uint *)((int)this + 8) & 0x3fffffff) == 0) {
    F_00d95690(uVar1,this,1,1);
  }
  *(undefined4 *)((int)this + 4) = 1;
  **(undefined1 * PTR32 *)this = 0;
  **(undefined1 * PTR32 *)this = 0;
  return (uint)this;
}

/* ref: FUN_00d9f250 */
uint F_00d9f250(unsigned int gen_a0)
{
  GEN_ENTER(0xd9f250u, gen_a0, 0u, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  uint uVar1;
  
  gen_imp_OutputDebugStringA(param_1);
  uVar1 = F_00c5181b(&REFG(undefined, 0x113bdcc),param_1);
  return uVar1;
}

/* ref: FUN_00d9f270 */
uint F_00d9f270(void)
{
  GEN_ENTER(0xd9f270u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = 0;
  if (REFG(int * PTR32, 0x15da4a8) != (int *)0x0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15da4a8) + 8))))(REFG(int * PTR32, 0x15da4a8));
    ((code *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x15da4a8))))(REFG(int * PTR32, 0x15da4a8),0);
    REFG(int * PTR32, 0x15da4a8) = (int *)0x0;
    F_00d9b8e0(0);
  }
  if (REFG(undefined * PTR32, 0x15da4ac) != (code *)0x0) {
    ((code *)REFG(gen_code32, 0x15da4ac))();
    REFG(undefined * PTR32, 0x15da4ac) = (code *)0x0;
  }
  return uVar1;
}

/* ref: FUN_00d9f360 */
uint F_00d9f360(unsigned int gen_a0)
{
  GEN_ENTER(0xd9f360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00da3670((undefined *)((int)this + 4),0,0xc);
  return (uint)this;
}

/* ref: FUN_00d9f380 */
uint F_00d9f380(unsigned int gen_a0)
{
  GEN_ENTER(0xd9f380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00db60b0((int)this + 8);
  F_00da3670((undefined *)((int)this + 0x24),0,1);
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  *(undefined4 *)this = 0;
  return (uint)this;
}

/* ref: hkCpuJobThreadPool::vf3 */
unsigned int F_00d9f3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9f3c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined * this_00;
  
  *(undefined4 *)(this + 0x248) = param_1;
  this[600] = (undefined1)0x1;
  iVar1 = *(int *)(this + 0x250) + -1;
  if (-1 < iVar1) {
    this_00 = this + iVar1 * 0x30 + 0x2c;
    do {
      F_00da36c0(this_00,1);
      this_00 = this_00 + -0x30;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: hkCpuJobThreadPool::vf5 */
byte F_00d9f400(unsigned int gen_a0)
{
  GEN_ENTER(0xd9f400u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 600) != '\0';
}

/* ref: hkCpuJobThreadPool::vf6 */
uint F_00d9f410(unsigned int gen_a0)
{
  GEN_ENTER(0xd9f410u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x250);
}

/* ref: FUN_00d9f420 */
unsigned int F_00d9f420(unsigned int gen_a0)
{
  GEN_ENTER(0xd9f420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  *(int *)((int)this + 0x250) = *(int *)((int)this + 0x250) + -1;
  iVar1 = *(int *)((int)this + 0x250) * 0x30;
  *(undefined1 *)((int)this + iVar1 + 0x28) = 1;
  F_00da36c0((undefined *)((int)this + iVar1 + 0x2c),1);
  F_00da36b0((undefined *)((int)this + 0x24c));
  F_00db60c0((undefined *)((int)this + iVar1 + 0x10));
  return 0;
}

/* ref: hkCpuJobThreadPool::vf4 */
unsigned int F_00d9f460(unsigned int gen_a0)
{
  GEN_ENTER(0xd9f460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (this[600] != (undefined1)0x0) {
    iVar1 = 0;
    if (0 < *(int *)(this + 0x250)) {
      do {
        F_00da36b0(this + 0x24c);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(this + 0x250));
    }
    this[600] = (undefined1)0x0;
  }
  return 0;
}

/* ref: hkCpuJobThreadPool::vf9 */
unsigned int F_00d9f4a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9f4a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * phVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0x250)) {
    phVar1 = this + 0x34;
    do {
      *(undefined4 *)phVar1 = *(undefined4 *)(phVar1 + -4);
      phVar1[-0xb] = (undefined1)0x1;
      iVar2 = iVar2 + 1;
      phVar1 = phVar1 + 0x30;
    } while (iVar2 < *(int *)(this + 0x250));
  }
  return 0;
}

/* ref: FUN_00d9f4d0 */
unsigned int F_00d9f4d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9f4d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x113be68));
  F_00d9f460(this);
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x250)) {
    pvVar2 = (undefined *)((int)this + 0x2c);
    do {
      *(undefined1 *)((int)pvVar2 + -4) = 1;
      F_00da36c0(pvVar2,1);
      iVar1 = iVar1 + 1;
      pvVar2 = (undefined *)((int)pvVar2 + 0x30);
    } while (iVar1 < *(int *)((int)this + 0x250));
  }
  iVar1 = 0;
  if (0 < *(int *)((int)this + 0x250)) {
    do {
      F_00da36b0((undefined *)((int)this + 0x24c));
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)((int)this + 0x250));
  }
  F_00d918e0(0);
  F_00da36a0((undefined *)((int)this + 0x24c));
  iVar1 = 0xb;
  pvVar2 = (undefined *)((int)this + 0x250);
  do {
    F_00da36a0((undefined *)((int)pvVar2 + -0x14));
    F_00db60c0((undefined *)((int)pvVar2 + -0x30));
    iVar1 = iVar1 + -1;
    pvVar2 = (undefined *)((int)pvVar2 + -0x30);
  } while (-1 < iVar1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return 0;
}

/* ref: hkCpuJobThreadPool::vf8 */
unsigned int F_00d9f570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9f570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined * phVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(this + 0x250)) {
    phVar3 = this + 0x34;
    do {
      if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
        F_00d95710(param_2,param_1,8);
      }
      puVar1 = (undefined4 *)(*param_1 + param_1[1] * 8);
      param_1[1] = param_1[1] + 1;
      *puVar1 = *(undefined4 *)(phVar3 + -4);
      iVar2 = iVar2 + 1;
      puVar1[1] = *(undefined4 *)phVar3;
      phVar3 = phVar3 + 0x30;
    } while (iVar2 < *(int *)(this + 0x250));
  }
  return 0;
}

/* ref: FUN_00d9f5e0 */
uint F_00d9f5e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9f5e0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  char cVar1;
  undefined4 * puVar2;
  HANDLE hThread;
  int * piVar3;
  LPVOID pvVar4;
  DWORD dwIdealProcessor;
  
  puVar2 = (undefined4 *)*param_1;
  MXCSR = MXCSR | 0x8000;
  dwIdealProcessor = param_1[7];
  hThread = gen_imp_GetCurrentThread();
  gen_imp_SetThreadIdealProcessor(hThread,dwIdealProcessor);
  F_00d92530(((undefined1 *)(gen_frame + 0xc)));
  piVar3 = (int *)F_00d9b8f0();
  ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,((undefined1 *)(gen_frame + 0xc)),"hkCpuJobThreadPool",3);
  F_00d9ba60(((undefined1 *)(gen_frame + 0xc)));
  gen_imp_TlsSetValue(REFG(undefined4, 0x15d9a8c),(LPVOID)param_1[6]);
  if (0 < (int)puVar2[3]) {
    pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
    F_00da13f0(pvVar4,puVar2[3]);
  }
  piVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  param_1[10] = *piVar3;
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  param_1[0xb] = *(int *)((int)pvVar4 + 4);
  F_00da36b0(param_1 + 9);
  cVar1 = (char)param_1[8];
  while (cVar1 == '\0') {
    if (*(char *)((int)param_1 + 0x21) != '\0') {
      pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
      F_00da1330(pvVar4);
      pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
      param_1[0xb] = *(int *)((int)pvVar4 + 4);
      *(undefined1 *)((int)param_1 + 0x21) = 0;
    }
    F_00d969a0((undefined *)*puVar2,1);
    pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
    param_1[0xb] = *(int *)((int)pvVar4 + 4);
    F_00da36c0(puVar2 + 1,1);
    F_00da36b0(param_1 + 9);
    cVar1 = (char)param_1[8];
  }
  F_00d9bb50();
  piVar3 = (int *)F_00d9b8f0();
  ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3,((undefined1 *)(gen_frame + 0xc)),3);
  F_00da36c0(puVar2 + 1,1);
  F_00d9b7c0(((undefined1 *)(gen_frame + 0xc)));
  return 0;
}

/* ref: FUN_00d9f740 */
uint F_00d9f740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9f740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * this_00;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x113be68));
  this_00 = (undefined *)((int)this + 8);
  iVar3 = 0xb;
  do {
    F_00d9f380(this_00);
    this_00 = (undefined *)((int)this_00 + 0x30);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  F_00d9f360((undefined *)((int)this + 0x248));
  *(undefined1 *)((int)this + 600) = 0;
  *(int *)((int)this + 0x25c) = param_1[6];
  *(int *)((int)this + 0x260) = param_1[1];
  *(int *)((int)this + 0x254) = param_1[2];
  (*(int *)(gen_frame + 0x8)) = *param_1;
  if (0xb < *param_1) {
    (*(int *)(gen_frame + 0x8)) = 0xb;
  }
  iVar3 = (*(int *)(gen_frame + 0x8));
  *(int *)((int)this + 0x250) = (*(int *)(gen_frame + 0x8));
  F_00d9baa0(&(*(int *)(gen_frame + 0x0)));
  if (0 < iVar3) {
    (*(int *)(gen_frame + 0x4)) = 0;
    iVar3 = 1;
    puVar2 = this;
    do {
      puVar2[2] = (int)this + 0x248;
      puVar2[8] = iVar3;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      *(undefined2 *)(puVar2 + 10) = 0;
      if (param_1[4] < 1) {
        puVar2[9] = iVar3 % (*(int *)(gen_frame + 0x0));
      }
      else {
        puVar2[9] = *(undefined4 *)((*(int *)(gen_frame + 0x4)) + param_1[3]);
      }
      F_00db60e0(puVar2 + 4,((code *)REFP(0xd9f5e0)),puVar2 + 2,*(undefined4 *)((int)this + 0x25c),
                   *(undefined4 *)((int)this + 0x260));
      (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 4;
      iVar3 = iVar3 + 1;
      iVar1 = (*(int *)(gen_frame + 0x8)) + -1;
      (*(int *)(gen_frame + 0x8)) = iVar1;
      puVar2 = puVar2 + 0xc;
    } while (iVar1 != 0);
  }
  F_00d918e0(1);
  return (uint)this;
}

/* ref: FUN_00d9f870 */
uint F_00d9f870(unsigned int gen_a0)
{
  GEN_ENTER(0xd9f870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = ((int *)GEN_TOP(((int)this + *(int *)((int)this + 0x250) * 0x30 + 8)));
  *piVar1 = (int)this + 0x248;
  iVar2 = *(int *)((int)this + 0x250);
  piVar1[10] = 0;
  piVar1[0xb] = 0;
  *(undefined2 *)(piVar1 + 8) = 0;
  piVar1[6] = iVar2 + 1;
  gen_imp_GetSystemInfo((GEN_LPANY)((byte *)(gen_frame + 0x8)));
  piVar1[7] = piVar1[6] % (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 20));
  uVar3 = F_00db60e0(piVar1 + 2,((code *)REFP(0xd9f5e0)),piVar1,*(undefined4 *)((int)this + 0x25c),
                       *(undefined4 *)((int)this + 0x260));
  *(int *)((int)this + 0x250) = *(int *)((int)this + 0x250) + 1;
  return uVar3;
}

/* ref: hkCpuJobThreadPool::vf7 */
unsigned int F_00d9f8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9f8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1;
  if (0xb < param_1) {
    iVar3 = 0xb;
  }
  iVar1 = *(int *)(this + 0x250);
  iVar2 = iVar1 - iVar3;
  while (iVar1 < iVar3) {
    F_00d9f870(this);
    iVar1 = *(int *)(this + 0x250);
    iVar2 = iVar1 - iVar3;
  }
  if (iVar1 != iVar3 && SBORROW4(iVar1,iVar3) == iVar2 < 0) {
    do {
      F_00d9f420(this);
    } while (iVar3 < *(int *)(this + 0x250));
  }
  return 0;
}

/* ref: FUN_00d9f940 */
uint F_00d9f940(unsigned int gen_a0)
{
  GEN_ENTER(0xd9f940u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 1;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0x80000000;
  in_ecx[6] = "HavokWorkerThread";
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00d9f990 */
unsigned int F_00d9f990(unsigned int gen_a0)
{
  GEN_ENTER(0xd9f990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00da36a0((undefined *)((int)this + 0x24));
  F_00db60c0((undefined *)((int)this + 8));
  return 0;
}

/* ref: FUN_00d9f9e0 */
uint F_00d9f9e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9f9e0u, gen_a0, 0u, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  return *param_1;
}

/* ref: FUN_00d9f9f0 */
uint F_00d9f9f0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9f9f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00d9fa20 */
uint F_00d9fa20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9fa20u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d9fa60 */
uint F_00d9fa60(unsigned int gen_a0)
{
  GEN_ENTER(0xd9fa60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00d9faa0 */
uint F_00d9faa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9faa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: hkCpuJobThreadPool::vf0 */
uint F_00d9fae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9fae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d9f4d0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d9fb20 */
uint F_00d9fb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9fb20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d9fb30 */
uint F_00d9fb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9fb30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d9fb40 */
uint F_00d9fb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9fb40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d9fb50 */
unsigned int F_00d9fb50(void)
{
  GEN_ENTER(0xd9fb50u, 0u, 0u, 0u, 0u);
  if (REFG(undefined4 * PTR32, 0x15dff44) != (undefined4 *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15dff44))))(REFG(undefined4 * PTR32, 0x15dff44),0);
    REFG(undefined4 * PTR32, 0x15dff44) = (undefined4 *)0x0;
  }
  if (REFG(undefined4 * PTR32, 0x15dff40) != (undefined4 *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15dff40))))(REFG(undefined4 * PTR32, 0x15dff40),0);
    REFG(undefined4 * PTR32, 0x15dff40) = (undefined4 *)0x0;
  }
  return 0;
}

/* ref: FUN_00d9fb90 */
uint F_00d9fb90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9fb90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  uVar1 = F_00db94b0(&REFG(undefined, 0x15da4b0),param_1);
  if (uVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = uVar1 + 4;
  }
  uVar2 = F_00db7bc0(&REFG(undefined, 0x15da590),uVar1,iVar3,param_3);
  if (uVar2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = uVar2 + 4;
  }
  piVar4 = (int *)F_00db6b70(&REFG(undefined, 0x15db050),param_1,uVar2,iVar3,5);
  REFG(int * PTR32, 0x15da4a8) = piVar4;
  REFG(undefined4, 0x15dff40) = uVar1;
  REFG(undefined4, 0x15dff44) = uVar2;
  F_00d9b8e0(piVar4);
  REFG(undefined * PTR32, 0x15da4ac) = ((code *)REFP(0xd9fb50));
  uVar1 = ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4,param_2,3);
  return uVar1;
}

/* ref: FUN_00d9fc20 */
uint F_00d9fc20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd9fc20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  uVar1 = F_00db7bc0(&REFG(undefined, 0x15da590),param_1,param_2,param_4);
  if (uVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = uVar1 + 4;
  }
  piVar3 = (int *)F_00db6b70(&REFG(undefined, 0x15db050),param_1,uVar1,iVar2,5);
  REFG(int * PTR32, 0x15da4a8) = piVar3;
  REFG(undefined4, 0x15dff44) = uVar1;
  F_00d9b8e0(piVar3);
  REFG(undefined * PTR32, 0x15da4ac) = ((code *)REFP(0xd9fb50));
  uVar1 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,param_3,3);
  return uVar1;
}

/* ref: FUN_00d9fc90 */
uint F_00d9fc90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd9fc90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00db6b70(&REFG(undefined, 0x15db050),param_1,param_2,param_3,5);
  REFG(int * PTR32, 0x15da4a8) = piVar1;
  F_00d9b8e0(piVar1);
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_4,3);
  return uVar2;
}

/* ref: FUN_00d9fce0 */
uint F_00d9fce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9fce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x113bee4));
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  return (uint)this;
}

/* ref: hkMemoryTrackStreamWriter::vf3 */
uint F_00d9fd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9fd10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkMemoryTrackStreamWriter::vf6 */
uint F_00d9fd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9fd20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: hkMemoryTrackStreamWriter::vf7 */
uint F_00d9fd30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9fd30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: FUN_00d9fd40 */
uint F_00d9fd40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9fd40u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  int * in_edi = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  if (in_esi != 0) {
    iVar1 = *in_edi;
    uVar2 = F_00da0e60(in_esi);
    uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x10))(in_edi,in_esi,uVar2);
    return uVar2;
  }
  uVar2 = ((code *)*(gen_code32 *)(*in_edi + 0x10))(in_edi,&REFG(undefined1, 0x1119e80),6);
  return uVar2;
}

/* ref: FUN_00d9fd70 */
uint F_00d9fd70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9fd70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *(undefined2 *)((int)in_ecx + 6) = 1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x113bf10));
  in_ecx[2] = param_2;
  if (param_2 != 0) {
    F_00d91830(param_2);
  }
  return (uint)in_ecx;
}

/* ref: FUN_00d9fda0 */
uint F_00d9fda0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9fda0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113bf10));
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    in_EAX = F_00d91840(*(undefined * PTR32 *)((int)this + 8));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return in_EAX;
}

/* ref: FUN_00d9fdc0 */
uint F_00d9fdc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9fdc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xc))))(*(int * PTR32 *)((int)this + 8),param_1);
  return param_1;
}

/* ref: FUN_00d9fde0 */
uint F_00d9fde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9fde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x12730];
  
  (*(undefined4 *)(gen_frame + 0x12728)) = 0xd9fded;
  F_00da0ce0(((undefined1 *)(gen_frame + 0x10004)),0x2728,&REFG(undefined, 0x113bf1c),param_1);
  F_00d9fd40(((undefined1 *)(gen_frame + 0x10004)),*(undefined4 *)((int)this + 8));
  return (uint)this;
}

/* ref: FUN_00d9fe30 */
uint F_00d9fe30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9fe30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char * in_esi;
  
  in_esi = "true";
  if ((char)param_1 == '\0') {
    in_esi = "false";
  }
  F_00d9fd40(in_esi,*(undefined4 *)((int)this + 8));
  return (uint)this;
}

/* ref: FUN_00d9fe60 */
uint F_00d9fe60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9fe60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),&(*(undefined4 *)&gen_args[1]),1);
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d9fe80 */
uint F_00d9fe80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9fe80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00d9fd40(param_1,*(undefined4 *)((int)this + 8));
  return (uint)this;
}

/* ref: FUN_00d9fea0 */
uint F_00d9fea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9fea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x12730];
  
  (*(undefined4 *)(gen_frame + 0x12728)) = 0xd9fead;
  F_00da0ce0(((undefined1 *)(gen_frame + 0x10004)),0x2728,&REFG(undefined, 0x113bf30),(int)(short)param_1);
  F_00d9fd40(((undefined1 *)(gen_frame + 0x10004)),*(undefined4 *)((int)this + 8));
  return (uint)this;
}

/* ref: FUN_00d9fef0 */
uint F_00d9fef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9fef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x12730];
  
  (*(undefined4 *)(gen_frame + 0x12728)) = 0xd9fefd;
  F_00da0ce0(((undefined1 *)(gen_frame + 0x10004)),0x2728,&REFG(undefined, 0x110f840),param_1 & 0xffff);
  F_00d9fd40(((undefined1 *)(gen_frame + 0x10004)),*(undefined4 *)((int)this + 8));
  return (uint)this;
}

/* ref: FUN_00d9ff40 */
uint F_00d9ff40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9ff40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x12730];
  
  (*(undefined4 *)(gen_frame + 0x12728)) = 0xd9ff4d;
  F_00da0ce0(((undefined1 *)(gen_frame + 0x10004)),0x2728,&REFG(undefined, 0x113bf30),param_1);
  F_00d9fd40(((undefined1 *)(gen_frame + 0x10004)),*(undefined4 *)((int)this + 8));
  return (uint)this;
}

/* ref: FUN_00d9ff90 */
uint F_00d9ff90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9ff90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x12730];
  
  (*(undefined4 *)(gen_frame + 0x12728)) = 0xd9ff9d;
  F_00da0ce0(((undefined1 *)(gen_frame + 0x10004)),0x2728,&REFG(undefined, 0x110f840),param_1);
  F_00d9fd40(((undefined1 *)(gen_frame + 0x10004)),*(undefined4 *)((int)this + 8));
  return (uint)this;
}

/* ref: FUN_00d9ffe0 */
uint F_00d9ffe0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd9ffe0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x12730];
  
  (*(undefined4 *)(gen_frame + 0x12728)) = 0xd9ffed;
  F_00da0ce0(((undefined1 *)(gen_frame + 0x10004)),0x2728,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)param_2),
               (int)((ulonglong)gen_d2bits((double)param_2) >> 0x20));
  F_00d9fd40(((undefined1 *)(gen_frame + 0x10004)),*(undefined4 *)(param_1 + 8));
  return param_1;
}

/* ref: FUN_00da0040 */
uint F_00da0040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda0040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x12730];
  
  (*(undefined4 *)(gen_frame + 0x12728)) = 0xda004d;
  F_00da0ce0(((undefined1 *)(gen_frame + 0x10004)),0x2728,"%I64i",param_1,param_2);
  F_00d9fd40(((undefined1 *)(gen_frame + 0x10004)),*(undefined4 *)((int)this + 8));
  return (uint)this;
}

/* ref: FUN_00da0090 */
uint F_00da0090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda0090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x12730];
  
  (*(undefined4 *)(gen_frame + 0x12728)) = 0xda009d;
  F_00da0ce0(((undefined1 *)(gen_frame + 0x10004)),0x2728,"%I64u",param_1,param_2);
  F_00d9fd40(((undefined1 *)(gen_frame + 0x10004)),*(undefined4 *)((int)this + 8));
  return (uint)this;
}

/* ref: FUN_00da00e0 */
uint F_00da00e0(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xda00e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x12730];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x12728)) = 0xda00ed;
  F_00da0cd0(((undefined1 *)(gen_frame + 0x10004)),0x2728,param_2,((undefined *)&gen_args[2]));
  uVar1 = F_00d9fd40(((undefined1 *)(gen_frame + 0x10004)),*(undefined4 *)(param_1 + 8));
  return uVar1;
}

/* ref: FUN_00da0140 */
unsigned int F_00da0140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda0140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x10))))(*(int * PTR32 *)((int)this + 8),param_1,param_2);
  return 0;
}

/* ref: FUN_00da0150 */
uint F_00da0150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda0150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d919e0(param_1);
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    uVar1 = F_00d91a80(*(undefined * PTR32 *)((int)this + 8));
  }
  *(undefined * PTR32 *)((int)this + 8) = param_1;
  return uVar1;
}

/* ref: hkOstream::vf2 */
uint F_00da0180(void)
{
  GEN_ENTER(0xda0180u, 0u, 0u, 0u, 0u);
  return 0x15dff48;
}

/* ref: FUN_00da0190 */
uint F_00da0190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda0190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113bf10));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dffa8) + 0x10))))(REFG(int * PTR32, 0x15dffa8),param_1);
  *(uint *)((int)this + 8) = uVar1;
  return (uint)this;
}

/* ref: FUN_00da01c0 */
uint F_00da01c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xda01c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  LPVOID pvVar1;
  undefined * this_00;
  uint uVar2;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113bf10));
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                              (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x1c)));
  *(undefined2 *)((int)this_00 + 4) = 0x1c;
  uVar2 = F_00dba580(this_00,param_1,param_2,param_3);
  *(uint *)((int)this + 8) = uVar2;
  return (uint)this;
}

/* ref: FUN_00da0220 */
uint F_00da0220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda0220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  LPVOID pvVar1;
  undefined4 * puVar2;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113bf10));
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),0x10)));
  puVar2[1] = 0x10010;
  *puVar2 = (*(undefined * PTR32 (*)[10])REFP(0x113bee4));
  puVar2[2] = param_1;
  puVar2[3] = 1;
  *(undefined4 * PTR32 *)((int)this + 8) = puVar2;
  return (uint)this;
}

/* ref: FUN_00da0280 */
uint F_00da0280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda0280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x12730];
  
  (*(undefined * PTR32 *)(gen_frame + 0x12728)) = (undefined *)0xda028d;
  (*(undefined * PTR32 *)(gen_frame + 0x12728)) = this;
  F_00da0ce0(((undefined1 *)(gen_frame + 0x10000)),0x2728,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*param_1),
               (int)((ulonglong)gen_d2bits((double)*param_1) >> 0x20));
  F_00d9fd40(((undefined1 *)(gen_frame + 0x10000)),*(undefined4 *)((int)this + 8));
  return (uint)(*(undefined * PTR32 *)(gen_frame + 0x12728));
}

/* ref: FUN_00da02e0 */
uint F_00da02e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda02e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  F_00da00e0(this,"[%g,%g,%g,%g]",(int)(ulonglong)gen_d2bits((double)*param_1),
               (int)((ulonglong)gen_d2bits((double)*param_1) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)param_1[1]),
               (int)((ulonglong)gen_d2bits((double)param_1[1]) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)param_1[2]),
               (int)((ulonglong)gen_d2bits((double)param_1[2]) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)param_1[3]),
               (int)((ulonglong)gen_d2bits((double)param_1[3]) >> 0x20));
  return (uint)this;
}

/* ref: FUN_00da0340 */
uint F_00da0340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda0340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  F_00da00e0(this,"[%f,%f,%f,(%f)]",(int)(ulonglong)gen_d2bits((double)*param_1),
               (int)((ulonglong)gen_d2bits((double)*param_1) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)param_1[1]),
               (int)((ulonglong)gen_d2bits((double)param_1[1]) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)param_1[2]),
               (int)((ulonglong)gen_d2bits((double)param_1[2]) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)param_1[3]),
               (int)((ulonglong)gen_d2bits((double)param_1[3]) >> 0x20));
  return (uint)this;
}

/* ref: FUN_00da03a0 */
uint F_00da03a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda03a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  float * pfVar2;
  
  pfVar2 = (float *)(param_1 + 0x10);
  iVar1 = 3;
  do {
    F_00da00e0(this,"|%f,%f,%f|\n",(int)(ulonglong)gen_d2bits((double)pfVar2[-4]),
                 (int)((ulonglong)gen_d2bits((double)pfVar2[-4]) >> 0x20),
                 (int)(ulonglong)gen_d2bits((double)*pfVar2),
                 (int)((ulonglong)gen_d2bits((double)*pfVar2) >> 0x20),
                 (int)(ulonglong)gen_d2bits((double)pfVar2[4]),
                 (int)((ulonglong)gen_d2bits((double)pfVar2[4]) >> 0x20));
    pfVar2 = pfVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return (uint)this;
}

/* ref: FUN_00da0400 */
uint F_00da0400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda0400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x30;
  this_00 = (undefined *)F_00da03a0(this,param_1);
  uVar1 = F_00da02e0(this_00,iVar2);
  return uVar1;
}

/* ref: FUN_00da0420 */
uint F_00da0420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda0420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  if ((uVar1 & 0xfffffffe) != 0) {
    iVar2 = **(int * PTR32 *)((int)this + 8);
    uVar3 = F_00d91360(param_1);
    ((code *)*(gen_code32 *)(iVar2 + 0x10))(*(undefined4 *)((int)this + 8),uVar1 & 0xfffffffe,uVar3);
    return (uint)this;
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x10))))(*(int * PTR32 *)((int)this + 8),&REFG(undefined1, 0x1119e80),6);
  return (uint)this;
}

/* ref: FUN_00da0470 */
uint F_00da0470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda0470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if (*param_1 != 0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,*param_1,param_1[1] + -1);
    return (uint)this;
  }
  ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,&REFG(undefined1, 0x1119e80),6);
  return (uint)this;
}

/* ref: FUN_00da04b0 */
uint F_00da04b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda04b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  LPVOID pvVar1;
  undefined * this_00;
  uint uVar2;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113bf10));
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                              (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x14)));
  *(undefined2 *)((int)this_00 + 4) = 0x14;
  uVar2 = F_00da0820(this_00,param_1,1);
  *(uint *)((int)this + 8) = uVar2;
  return (uint)this;
}

/* ref: FUN_00da0540 */
unsigned int F_00da0540(unsigned int gen_a0)
{
  GEN_ENTER(0xda0540u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x1c);
  }
  return 0;
}

/* ref: FUN_00da0570 */
uint F_00da0570(unsigned int gen_a0)
{
  GEN_ENTER(0xda0570u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00da05c0 */
uint F_00da05c0(unsigned int gen_a0)
{
  GEN_ENTER(0xda05c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: hkOstream::vf0 */
uint F_00da05f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda05f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d9fda0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00da0630 */
uint F_00da0630(unsigned int gen_a0)
{
  GEN_ENTER(0xda0630u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkMemoryTrackStreamWriter::vf8 */
uint F_00da0660(unsigned int gen_a0)
{
  GEN_ENTER(0xda0660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  return (piVar1[5] + -1 + piVar1[3]) * *piVar1 + piVar1[1];
}

/* ref: FUN_00da0680 */
uint F_00da0680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda0680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00db9df0(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0x1c);
  }
  return (uint)this;
}

/* ref: FUN_00da06c0 */
uint F_00da06c0(unsigned int gen_a0)
{
  GEN_ENTER(0xda06c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00da06f0 */
uint F_00da06f0(unsigned int gen_a0)
{
  GEN_ENTER(0xda06f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00da0720 */
unsigned int F_00da0720(unsigned int gen_a0)
{
  GEN_ENTER(0xda0720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x113bee4));
  if (*(int *)((int)this + 0xc) == 0) {
    this_00 = *(undefined * PTR32 *)((int)this + 8);
    if (this_00 != (undefined *)0x0) {
      F_00db9df0(this_00);
      pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this_00,0x1c);
    }
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
    return 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return 0;
}

/* ref: hkMemoryTrackStreamWriter::vf0 */
uint F_00da0770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda0770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x113bee4));
  if ((*(int *)(this + 0xc) == 0) && (this_00 = *(undefined * PTR32 *)(this + 8), this_00 != (undefined *)0x0)) {
    F_00db9df0(this_00);
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this_00,0x1c);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00da07e0 */
uint F_00da07e0(unsigned int gen_a0)
{
  GEN_ENTER(0xda07e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)((int)this + 8);
  iVar3 = *(int *)(iVar1 + 4) + 1;
  uVar4 = *(uint *)(iVar1 + 8) & 0x3fffffff;
  if ((int)uVar4 < iVar3) {
    iVar2 = uVar4 * 2;
    if (iVar3 < iVar2) {
      iVar3 = iVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),iVar1,iVar3,1);
  }
  uVar4 = (*(int * PTR32 *)((int)this + 8))[1];
  *((undefined1 *)GEN_TOP((uVar4 + **(int * PTR32 *)((int)this + 8)))) = 0;
  return uVar4;
}

/* ref: FUN_00da0820 */
uint F_00da0820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda0820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x113bf78));
  *(int *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 0x10) = param_2;
  iVar2 = *(int *)(param_1 + 4) + 1;
  uVar3 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar2) {
    iVar1 = uVar3 * 2;
    if (iVar2 < iVar1) {
      iVar2 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_1,iVar2,1);
  }
  *((undefined1 *)GEN_TOP(((*(int * PTR32 *)((int)this + 8))[1] + **(int * PTR32 *)((int)this + 8)))) = 0;
  return (uint)this;
}

/* ref: hkArrayStreamWriter::vf3 */
uint F_00da0890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda0890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkArrayStreamWriter::vf6 */
uint F_00da08a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda08a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkArrayStreamWriter::vf8 */
uint F_00da08b0(unsigned int gen_a0)
{
  GEN_ENTER(0xda08b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: hkArrayStreamWriter::vf2 */
uint F_00da08c0(void)
{
  GEN_ENTER(0xda08c0u, 0u, 0u, 0u, 0u);
  return 0x15e0008;
}

/* ref: FUN_00da08d0 */
uint F_00da08d0(unsigned int gen_a0)
{
  GEN_ENTER(0xda08d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00da0900 */
unsigned int F_00da0900(unsigned int gen_a0)
{
  GEN_ENTER(0xda0900u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00da0930 */
uint F_00da0930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda0930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar2 + 0x2c),this,0xc);
  }
  return (uint)this;
}

/* ref: FUN_00da09a0 */
unsigned int F_00da09a0(unsigned int gen_a0)
{
  GEN_ENTER(0xda09a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  LPVOID pvVar4;
  
  iVar1 = *(int *)((int)this + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x113bf78));
  if (iVar1 == 0) {
    puVar2 = *(undefined4 * PTR32 *)((int)this + 8);
    if (puVar2 != (undefined4 *)0x0) {
      uVar3 = puVar2[2];
      puVar2[1] = 0;
      if (-1 < (int)uVar3) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*puVar2,uVar3 & 0x3fffffff)
        ;
      }
      *puVar2 = 0;
      puVar2[2] = 0x80000000;
      pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar4 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar4 + 0x2c),puVar2,0xc);
    }
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
    return 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return 0;
}

/* ref: hkArrayStreamWriter::vf0 */
uint F_00da0a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda0a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00da09a0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00da0a60 */
uint F_00da0a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda0a60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00da0a80 */
uint F_00da0a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda0a80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  uint in_ecx;
  
  F_00d9fd70(this,0);
  this_00 = (undefined *)(param_1 + -0x20 + param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113bfb0));
  if (this_00 != (undefined *)0x0) {
    in_ecx = F_00dba580(this_00,param_1,param_2 + -0x20,CONCAT31((int3)((uint)((int)(uintptr_t)this_00) >> 8),1));
    *(uint *)((int)this + 8) = in_ecx;
    F_00d91830(in_ecx);
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = 0;
  F_00d91830(0);
  return (uint)this;
}

/* ref: FUN_00da0ae0 */
uint F_00da0ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda0ae0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  code * pcVar1;
  undefined * pvVar2;
  uint uVar3;
  int iVar4;
  char * pcVar5;
  undefined * puVar6;
  undefined * puVar7;
  char * pcVar8;
  char * pcVar9;
  char * pcVar10;
  char * pcVar11;
  char * pcVar12;
  
  F_00da0a80(((undefined1 *)(gen_frame + 0x200)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar4 = (int)*(short *)(param_1 + 6);
  pcVar12 = " * Do you have more than 32768 references? (unlikely)\n";
  pcVar11 = " * Is this a valid object?\n";
  pcVar10 = 
  " * In a multithreaded environment, what is the hkReferencedObject lock mode you use (see setLockMode())?\n"
  ;
  pcVar9 = " * Have you called removeReference too many times?\n";
  pcVar8 = " * Are you calling delete instead of removeReference?\n";
  puVar7 = &REFG(undefined, 0x113c018);
  puVar6 = &REFG(undefined, 0x113c010);
  pcVar5 = " with ref count of ";
  pvVar2 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x200)),"Reference count error on object ");
  pvVar2 = (undefined *)F_00d9fde0(pvVar2,param_1);
  pvVar2 = (undefined *)F_00d9fe80(pvVar2,pcVar5);
  pvVar2 = (undefined *)F_00d9ff40(pvVar2,iVar4);
  pvVar2 = (undefined *)F_00d9fe80(pvVar2,puVar6);
  pvVar2 = (undefined *)F_00d9fe80(pvVar2,param_2);
  pvVar2 = (undefined *)F_00d9fe80(pvVar2,puVar7);
  pvVar2 = (undefined *)F_00d9fe80(pvVar2,pcVar8);
  pvVar2 = (undefined *)F_00d9fe80(pvVar2,pcVar9);
  pvVar2 = (undefined *)F_00d9fe80(pvVar2,pcVar10);
  pvVar2 = (undefined *)F_00d9fe80(pvVar2,pcVar11);
  F_00d9fe80(pvVar2,pcVar12);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(int * PTR32, 0x15dff78),3,0x2c66f2d8,((undefined1 *)(gen_frame + 0x0)),"System\\Error\\hkError.cpp",0x21);
  if (uVar3 != 0) {
    pcVar1 = ((code *)GEN_TOP(swi(3)));
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  uVar3 = F_00d9fda0(((undefined1 *)(gen_frame + 0x200)));
  return uVar3;
}

/* ref: FUN_00da0bc0 */
uint F_00da0bc0(unsigned int gen_a0)
{
  GEN_ENTER(0xda0bc0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  code * pcVar1;
  uint uVar2;
  
  F_00da0a80(((undefined1 *)(gen_frame + 0x200)),((undefined1 *)(gen_frame + 0x0)),0x200);
  F_00d9fe80(((undefined1 *)(gen_frame + 0x200)),param_1);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(int * PTR32, 0x15dff78),3,0x2636fe25,((undefined1 *)(gen_frame + 0x0)),"System\\Error\\hkError.cpp",0x28);
  if (uVar2 != 0) {
    pcVar1 = ((code *)GEN_TOP(swi(3)));
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  uVar2 = F_00d9fda0(((undefined1 *)(gen_frame + 0x200)));
  return uVar2;
}

/* ref: FUN_00da0c20 */
uint F_00da0c20(unsigned int gen_a0)
{
  GEN_ENTER(0xda0c20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkErrStream::vf0 */
uint F_00da0c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda0c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d9fda0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00da0c90 */
byte F_00da0c90(unsigned int gen_a0)
{
  GEN_ENTER(0xda0c90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  
  bVar1 = (byte)param_1;
  if ((byte)((byte)param_1 + 0x9f) < 0x1a) {
    bVar1 = (byte)param_1 - 0x20;
  }
  return bVar1;
}

/* ref: FUN_00da0cb0 */
byte F_00da0cb0(unsigned int gen_a0)
{
  GEN_ENTER(0xda0cb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  
  bVar1 = (byte)param_1;
  if ((byte)((byte)param_1 + 0xbf) < 0x1a) {
    bVar1 = (byte)param_1 + 0x20;
  }
  return bVar1;
}

/* ref: FUN_00da0cd0 */
uint F_00da0cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xda0cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  gen_size32 param_2 = (gen_size32)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = F_01051c9c(param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00da0ce0 */
uint F_00da0ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0xda0ce0u, gen_a0, gen_a1, gen_a2, 0u);
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
  
  uVar1 = F_01051c9c(param_1,param_2,param_3,((undefined *)&gen_args[3]));
  return uVar1;
}

/* ref: FUN_00da0d00 */
uint F_00da0d00(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xda0d00u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c576a9(param_1,param_2,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: FUN_00da0d20 */
uint F_00da0d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda0d20u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  pbVar2 = param_1;
  pbVar3 = param_2;
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (1 - (uint)bVar4) - (uint)(bVar4 != 0);
}

/* ref: FUN_00da0d60 */
uint F_00da0d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda0d60u, gen_a0, gen_a1, gen_a2, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  gen_size32 param_3 = (gen_size32)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c4b813(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00da0d70 */
uint F_00da0d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda0d70u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  byte bVar2;
  byte * pbVar3;
  
  pbVar3 = param_2;
  while( true ) {
    if ((pbVar3[param_1 - (int)param_2] == 0) && (*pbVar3 == 0)) {
      return 0;
    }
    bVar1 = F_00da0cb0((uint)pbVar3[param_1 - (int)param_2]);
    bVar2 = F_00da0cb0((uint)*pbVar3);
    if ((char)bVar1 < (char)bVar2) {
      return 0xffffffff;
    }
    if ((char)bVar2 < (char)bVar1) break;
    pbVar3 = pbVar3 + 1;
  }
  return 1;
}

/* ref: FUN_00da0dc0 */
uint F_00da0dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda0dc0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  byte bVar1;
  byte bVar2;
  byte * pbVar3;
  int iVar4;
  
  iVar4 = 0;
  pbVar3 = param_2;
  while( true ) {
    if (((pbVar3[param_1 - (int)param_2] == 0) && (*pbVar3 == 0)) || (param_3 <= iVar4)) {
      return 0;
    }
    bVar1 = F_00da0cb0((uint)pbVar3[param_1 - (int)param_2]);
    bVar2 = F_00da0cb0((uint)*pbVar3);
    if ((char)bVar1 < (char)bVar2) {
      return 0xffffffff;
    }
    if ((char)bVar2 < (char)bVar1) break;
    iVar4 = iVar4 + 1;
    pbVar3 = pbVar3 + 1;
  }
  return 1;
}

/* ref: FUN_00da0e20 */
unsigned int F_00da0e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda0e20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2[param_1 - (int)param_2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return 0;
}

/* ref: FUN_00da0e40 */
uint F_00da0e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda0e40u, gen_a0, gen_a1, gen_a2, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  gen_size32 param_3 = (gen_size32)gen_a2;
  char * pcVar1;
  
  pcVar1 = (char *)0x0;
  if (param_3 != 0) {
    pcVar1 = F_00c52620(param_1,param_2,param_3);
  }
  return (uint)pcVar1;
}

/* ref: FUN_00da0e60 */
uint F_00da0e60(unsigned int gen_a0)
{
  GEN_ENTER(0xda0e60u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00da0e80 */
uint F_00da0e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda0e80u, gen_a0, gen_a1, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  ulong uVar1;
  
  uVar1 = F_00c4abb6(param_1,(char * PTR32 *)0x0,param_2);
  return uVar1;
}

/* ref: FUN_00da0ea0 */
ulonglong F_00da0ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda0ea0u, gen_a0, gen_a1, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00c4afd5(param_1,(char * PTR32 *)0x0,param_2);
  return uVar1;
}

/* ref: FUN_00da0ec0 */
float F_00da0ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xda0ec0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  double dVar1;
  
  dVar1 = F_00c52474(param_1,0);
  return (float)dVar1;
}

/* ref: FUN_00da0ee0 */
uint F_00da0ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda0ee0u, gen_a0, gen_a1, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char * pcVar1;
  
  pcVar1 = F_00c46a10(param_1,param_2);
  return (uint)pcVar1;
}

/* ref: FUN_00da0ef0 */
uint F_00da0ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda0ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c51da0(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00da0f00 */
uint F_00da0f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda0f00u, gen_a0, gen_a1, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  char * pcVar1;
  
  pcVar1 = F_00c51220(param_1,param_2);
  return (uint)pcVar1;
}

/* ref: FUN_00da0f10 */
uint F_00da0f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda0f10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da0e60(param_1);
  uVar1 = F_00d92460(param_2,uVar1 + 1);
  F_00da0e20(uVar1,param_1);
  return uVar1;
}

/* ref: FUN_00da0f40 */
uint F_00da0f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda0f40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d924b0(param_2,param_1);
  return uVar1;
}

/* ref: FUN_00da0f60 */
uint F_00da0f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda0f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00da0e60(param_1);
  if ((int)param_2 < (int)uVar1) {
    uVar1 = param_2;
  }
  uVar2 = F_00d92460(param_3,uVar1 + 1);
  F_00da0e40(uVar2,param_1,uVar1);
  *(undefined1 *)(uVar2 + uVar1) = 0;
  return uVar2;
}

/* ref: FUN_00da0fb0 */
uint F_00da0fb0(unsigned int gen_a0)
{
  GEN_ENTER(0xda0fb0u, gen_a0, 0u, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte bVar1;
  byte * pbVar2;
  
  bVar1 = *param_1;
  pbVar2 = param_1;
  while (bVar1 != 0) {
    bVar1 = F_00da0cb0((uint)*pbVar2);
    *pbVar2 = bVar1;
    pbVar2 = pbVar2 + 1;
    bVar1 = *pbVar2;
  }
  return (uint)param_1;
}

/* ref: FUN_00da0fe0 */
uint F_00da0fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xda0fe0u, gen_a0, 0u, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte bVar1;
  byte * pbVar2;
  
  bVar1 = *param_1;
  pbVar2 = param_1;
  while (bVar1 != 0) {
    bVar1 = F_00da0c90((uint)*pbVar2);
    *pbVar2 = bVar1;
    pbVar2 = pbVar2 + 1;
    bVar1 = *pbVar2;
  }
  return (uint)param_1;
}

/* ref: FUN_00da1010 */
uint F_00da1010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda1010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(param_1,param_2,param_3);
  return (uint)uVar1;
}

/* ref: FUN_00da1020 */
uint F_00da1020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda1020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c46e20(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00da1030 */
uint F_00da1030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda1030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  gen_size32 param_3 = (gen_size32)gen_a2;
  undefined * pvVar1;
  
  pvVar1 = F_00c48350(param_1,param_2,param_3);
  return (uint)pvVar1;
}

/* ref: FUN_00da1040 */
uint F_00da1040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda1040u, gen_a0, gen_a1, gen_a2, 0u);
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
    if (*(int *)pbVar3 != *(int *)pbVar2) goto LAB_00da106b;
    pbVar2 = pbVar2 + 4;
    pbVar3 = pbVar3 + 4;
  }
  if (uVar4 == 0) {
    return 0;
  }
LAB_00da106b: ;
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

/* ref: FUN_00da10c0 */
uint F_00da10c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda10c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  char * pcVar1;
  char cVar2;
  
  cVar2 = *param_3;
  if (cVar2 != '\0') {
    pcVar1 = param_3;
    do {
      if (pcVar1[param_2 - (int)param_3] != cVar2) {
        *param_1 = 0;
        return (uint)param_1;
      }
      cVar2 = pcVar1[1];
      pcVar1 = pcVar1 + 1;
    } while (cVar2 != '\0');
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00da10f0 */
uint F_00da10f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda10f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = F_00da0e60(param_2);
  uVar2 = F_00da0e60(param_3);
  if ((int)uVar1 < (int)uVar2) {
LAB_00da1111: ;
    *param_1 = 0;
    return (uint)param_1;
  }
  iVar3 = 0;
  if (0 < (int)uVar2) {
    do {
      if (*((char *)GEN_TOP(((uVar1 - uVar2) + param_2 + iVar3))) != *(char *)(iVar3 + param_3))
      goto LAB_00da1111;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar2);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00da1140 */
uint F_00da1140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda1140u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da0f00(param_1,(int)(char)param_2);
  if (uVar1 != 0) {
    return uVar1 - param_1;
  }
  return 0xffffffff;
}

/* ref: FUN_00da1170 */
uint F_00da1170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xda1170u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = param_3;
  if (0 < (int)param_3) {
    do {
      if (*(char *)(iVar1 + param_1) == '\0') {
        return 0xffffffff;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_3);
  }
  for (; ((int)uVar2 < param_4 && (*(char *)(uVar2 + param_1) != '\0')); uVar2 = uVar2 + 1) {
    if (*(char *)(uVar2 + param_1) == (char)param_2) {
      return uVar2;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00da11c0 */
unsigned int F_00da11c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda11c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = param_2 >> 4;
  puVar1 = param_1;
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
  }
  return 0;
}

/* ref: FUN_00da11e0 */
uint F_00da11e0(unsigned int gen_a0)
{
  GEN_ENTER(0xda11e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00da0f40(param_1,*(undefined4 *)((int)pvVar1 + 0x2c));
  return uVar2;
}

/* ref: FUN_00da1210 */
uint F_00da1210(unsigned int gen_a0)
{
  GEN_ENTER(0xda1210u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00da0f10(param_1,*(undefined4 *)((int)pvVar1 + 0x2c));
  return uVar2;
}

/* ref: FUN_00da1240 */
uint F_00da1240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda1240u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00da0f60(param_1,param_2,*(undefined4 *)((int)pvVar1 + 0x2c));
  return uVar2;
}

/* ref: FUN_00da1270 */
uint F_00da1270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xda1270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  char cVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  
  pcVar3 = param_3;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00da0ee0(param_2,param_3);
  *param_1 = 0;
  while( true ) {
    if (uVar4 == 0) {
      return (uint)param_1;
    }
    uVar2 = param_4[2];
    *param_1 = 1;
    if (param_4[1] == (uVar2 & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_4,4);
    }
    *(uint *)(*param_4 + param_4[1] * 4) = uVar4 - param_2;
    param_4[1] = param_4[1] + 1;
    if (param_5 == 0) break;
    uVar4 = F_00da0ee0(pcVar3 + (uVar4 - (int)(param_3 + 1)),param_3);
  }
  return (uint)param_1;
}

/* ref: FUN_00da1310 */
uint F_00da1310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda1310u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00da1320 */
uint F_00da1320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda1320u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined1 *)(param_1 + 0x10);
  return (uint)param_2;
}

/* ref: FUN_00da1330 */
uint F_00da1330(unsigned int gen_a0)
{
  GEN_ENTER(0xda1330u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  param_1[1] = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00da1340 */
uint F_00da1340(void)
{
  GEN_ENTER(0xda1340u, 0u, 0u, 0u, 0u);
  LPVOID pvVar1;
  undefined4 * lpTlsValue;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  lpTlsValue = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x30) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x30),0x14)))
  ;
  gen_imp_TlsSetValue(REFG(undefined4, 0x15dff7c),lpTlsValue);
  *(undefined1 *)(lpTlsValue + 4) = 0;
  *lpTlsValue = 0;
  lpTlsValue[2] = 0;
  lpTlsValue[1] = 0;
  lpTlsValue[3] = 0;
  return 0;
}

/* ref: FUN_00da1380 */
uint F_00da1380(unsigned int gen_a0)
{
  GEN_ENTER(0xda1380u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  uint uVar5;
  
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  iVar1 = *param_1;
  if ((iVar1 != 0) && ((char)param_1[4] != '\0')) {
    iVar2 = param_1[2];
    pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar4 + 0x30) + 0x10))))
              (*(int * PTR32 *)((int)pvVar4 + 0x30),iVar1,iVar2 - iVar1);
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar4 + 0x30) + 8))))(*(int * PTR32 *)((int)pvVar4 + 0x30),pvVar3,0x14);
  uVar5 = gen_imp_TlsSetValue(REFG(undefined4, 0x15dff7c),(LPVOID)0x0);
  return uVar5;
}

/* ref: FUN_00da13f0 */
uint F_00da13f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda13f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(*(uint * PTR32 *)&gen_args[0]);
  uVar1 = (*(uint * PTR32 *)&gen_args[0])[2];
  uVar4 = (*(uint *)&gen_args[1]);
  if ((*(uint *)&gen_args[1]) != uVar1 - uVar3) {
    if (0 < (int)(*(uint *)&gen_args[1])) {
      if ((uVar3 != 0) && ((char)(*(uint * PTR32 *)&gen_args[0])[4] != '\0')) {
        pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x30) + 0x10))))
                  (*(int * PTR32 *)((int)pvVar2 + 0x30),uVar3,uVar1 - uVar3);
      }
      *((undefined1 *)GEN_TOP(((*(uint * PTR32 *)&gen_args[0]) + 4))) = 1;
      pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x30) + 0xc))))
                        (*(int * PTR32 *)((int)pvVar2 + 0x30),&(*(uint *)&gen_args[1]));
      *(*(uint * PTR32 *)&gen_args[0]) = uVar3;
      (*(uint * PTR32 *)&gen_args[0])[1] = uVar3;
      (*(uint * PTR32 *)&gen_args[0])[2] = uVar3 + (*(uint *)&gen_args[1]);
      uVar3 = (uVar3 + (*(uint *)&gen_args[1])) - 0x20;
      (*(uint * PTR32 *)&gen_args[0])[3] = uVar3;
      return uVar3;
    }
    uVar4 = F_00da1380((*(uint * PTR32 *)&gen_args[0]));
  }
  return uVar4;
}

/* ref: FUN_00da1480 */
uint F_00da1480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda1480u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  if ((char)param_1[4] != '\0') {
    F_00da13f0(param_1,0);
  }
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_2 + param_3;
  uVar1 = (param_2 + param_3) - 0x20;
  param_1[3] = uVar1;
  return uVar1;
}

/* ref: FUN_00da14e0 */
uint F_00da14e0(unsigned int gen_a0)
{
  GEN_ENTER(0xda14e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  DWORD DVar1;
  
  DVar1 = gen_imp_TlsAlloc();
  *(DWORD *)this = DVar1;
  return (uint)this;
}

/* ref: FUN_00da1500 */
unsigned int F_00da1500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda1500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPVOID param_1 = (LPVOID)gen_a1;
  gen_imp_TlsSetValue(*(DWORD *)this,param_1);
  return 0;
}

/* ref: FUN_00da1520 */
uint F_00da1520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda1520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this,param_1 * 0x14);
  return uVar1;
}

/* ref: FUN_00da1540 */
uint F_00da1540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda1540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this,param_1,param_2 * 0x14);
  return uVar1;
}

/* ref: FUN_00da1560 */
uint F_00da1560(unsigned int gen_a0)
{
  GEN_ENTER(0xda1560u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(param_1 + 8);
}

/* ref: FUN_00da1580 */
uint F_00da1580(unsigned int gen_a0)
{
  GEN_ENTER(0xda1580u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x30) + 4))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x30),param_1 * 0x14);
  return uVar2;
}

/* ref: FUN_00da15b0 */
uint F_00da15b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda15b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x30) + 0x10))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x30),param_1,param_2);
  return uVar2;
}

/* ref: FUN_00da15e0 */
uint F_00da15e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda15e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x30) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x30),param_1,param_2 * 0x14);
  return uVar2;
}

/* ref: FUN_00da1610 */
uint F_00da1610(unsigned int gen_a0)
{
  GEN_ENTER(0xda1610u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  undefined4 * puVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[0]);
  (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0])));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x30) + 0xc))))
                    (*(int * PTR32 *)((int)pvVar2 + 0x30),&(*(undefined4 * PTR32 *)&gen_args[0]));
  *puVar1 = (*(undefined4 * PTR32 *)&gen_args[0]);
  return uVar3;
}

/* ref: FUN_00da1640 */
unsigned int F_00da1640(unsigned int gen_a0)
{
  GEN_ENTER(0xda1640u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = in_ecx[6];
  uVar2 = in_ecx[1];
  uVar3 = in_ecx[2];
  *in_ecx = *in_ecx;
  in_ecx[1] = in_ecx[4];
  in_ecx[2] = in_ecx[8];
  in_ecx[3] = in_ecx[9];
  in_ecx[4] = uVar2;
  in_ecx[5] = in_ecx[5];
  in_ecx[6] = in_ecx[9];
  in_ecx[7] = in_ecx[0xb];
  in_ecx[8] = uVar3;
  in_ecx[9] = uVar1;
  in_ecx[10] = in_ecx[10];
  in_ecx[0xb] = in_ecx[0xb];
  return 0;
}

/* ref: FUN_00da1720 */
unsigned int F_00da1720(float gen_a0)
{
  GEN_ENTER(0xda1720u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00da1730 */
unsigned int F_00da1730(float gen_a0)
{
  GEN_ENTER(0xda1730u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00da1790 */
unsigned int F_00da1790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda1790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
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
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = param_1[8];
  fVar6 = param_1[9];
  fVar7 = param_1[10];
  fVar8 = param_1[0xb];
  fVar9 = param_1[4];
  fVar10 = param_1[5];
  fVar11 = param_1[6];
  *(float *)this = param_1[2] * fVar3 + (*param_1 * fVar1 + param_1[1] * fVar2);
  *(float *)((int)this + 4) = fVar3 * fVar11 + (fVar1 * fVar9 + fVar2 * fVar10);
  *(float *)((int)this + 8) = fVar7 * fVar3 + (fVar5 * fVar1 + fVar6 * fVar2);
  *(float *)((int)this + 0xc) = fVar8 * fVar4 + (fVar6 * fVar2 + fVar8 * fVar4);
  fVar1 = param_2[4];
  fVar2 = param_2[5];
  fVar3 = param_2[6];
  fVar4 = param_2[7];
  fVar5 = param_1[8];
  fVar6 = param_1[9];
  fVar7 = param_1[10];
  fVar8 = param_1[0xb];
  fVar9 = param_1[4];
  fVar10 = param_1[5];
  fVar11 = param_1[6];
  *(float *)((int)this + 0x10) = param_1[2] * fVar3 + (*param_1 * fVar1 + param_1[1] * fVar2);
  *(float *)((int)this + 0x14) = fVar3 * fVar11 + (fVar1 * fVar9 + fVar2 * fVar10);
  *(float *)((int)this + 0x18) = fVar7 * fVar3 + (fVar5 * fVar1 + fVar6 * fVar2);
  *(float *)((int)this + 0x1c) = fVar8 * fVar4 + (fVar6 * fVar2 + fVar8 * fVar4);
  fVar1 = param_2[8];
  fVar2 = param_2[9];
  fVar3 = param_2[10];
  fVar4 = param_2[0xb];
  fVar5 = param_1[8];
  fVar6 = param_1[9];
  fVar7 = param_1[10];
  fVar8 = param_1[0xb];
  fVar9 = param_1[4];
  fVar10 = param_1[5];
  fVar11 = param_1[6];
  *(float *)((int)this + 0x20) = param_1[2] * fVar3 + (*param_1 * fVar1 + param_1[1] * fVar2);
  *(float *)((int)this + 0x24) = fVar3 * fVar11 + (fVar1 * fVar9 + fVar2 * fVar10);
  *(float *)((int)this + 0x28) = fVar7 * fVar3 + (fVar5 * fVar1 + fVar6 * fVar2);
  *(float *)((int)this + 0x2c) = fVar8 * fVar4 + (fVar6 * fVar2 + fVar8 * fVar4);
  return 0;
}

/* ref: FUN_00da1860 */
uint F_00da1860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda1860u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = *param_2 * *in_ecx;
  in_ecx[1] = fVar1 * in_ecx[1];
  in_ecx[2] = fVar2 * in_ecx[2];
  in_ecx[3] = fVar3 * in_ecx[3];
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  in_ecx[4] = in_ecx[4] * *param_2;
  in_ecx[5] = in_ecx[5] * fVar1;
  in_ecx[6] = in_ecx[6] * fVar2;
  in_ecx[7] = in_ecx[7] * fVar3;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  in_ecx[8] = in_ecx[8] * *param_2;
  in_ecx[9] = in_ecx[9] * fVar1;
  in_ecx[10] = in_ecx[10] * fVar2;
  in_ecx[0xb] = in_ecx[0xb] * fVar3;
  return (uint)param_2;
}

/* ref: FUN_00da1890 */
unsigned int F_00da1890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda1890u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  *in_ecx = 0;
  in_ecx[1] = (undefined4)gen_fl2bits(fVar3);
  in_ecx[2] = (undefined4)gen_fl2bits(0.0 - fVar2);
  in_ecx[3] = 0;
  in_ecx[4] = (undefined4)gen_fl2bits(0.0 - fVar3);
  in_ecx[5] = 0;
  in_ecx[6] = (undefined4)gen_fl2bits(fVar1);
  in_ecx[7] = 0;
  in_ecx[8] = (undefined4)gen_fl2bits(fVar2);
  in_ecx[9] = (undefined4)gen_fl2bits(0.0 - fVar1);
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  return 0;
}

/* ref: FUN_00da18f0 */
uint F_00da18f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda18f0u, gen_a0, gen_a1, gen_a2, 0u);
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
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *(float *)((int)this + 0x10) = param_2[4] * *param_1;
  *(float *)((int)this + 0x14) = fVar1 * fVar4;
  *(float *)((int)this + 0x18) = fVar2 * fVar5;
  *(float *)((int)this + 0x1c) = fVar3 * fVar6;
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *(float *)((int)this + 0x20) = param_2[8] * *param_1;
  *(float *)((int)this + 0x24) = fVar1 * fVar4;
  *(float *)((int)this + 0x28) = fVar2 * fVar5;
  *(float *)((int)this + 0x2c) = fVar3 * fVar6;
  return (uint)param_1;
}

/* ref: FUN_00da1920 */
uint F_00da1920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda1920u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = *param_2 + *in_ecx;
  in_ecx[1] = fVar1 + in_ecx[1];
  in_ecx[2] = fVar2 + in_ecx[2];
  in_ecx[3] = fVar3 + in_ecx[3];
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  in_ecx[4] = param_2[4] + in_ecx[4];
  in_ecx[5] = fVar1 + in_ecx[5];
  in_ecx[6] = fVar2 + in_ecx[6];
  in_ecx[7] = fVar3 + in_ecx[7];
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  in_ecx[8] = param_2[8] + in_ecx[8];
  in_ecx[9] = fVar1 + in_ecx[9];
  in_ecx[10] = fVar2 + in_ecx[10];
  in_ecx[0xb] = fVar3 + in_ecx[0xb];
  return (uint)param_2;
}

/* ref: FUN_00da1950 */
uint F_00da1950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda1950u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = *in_ecx - *param_2;
  in_ecx[1] = in_ecx[1] - fVar1;
  in_ecx[2] = in_ecx[2] - fVar2;
  in_ecx[3] = in_ecx[3] - fVar3;
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  in_ecx[4] = in_ecx[4] - param_2[4];
  in_ecx[5] = in_ecx[5] - fVar1;
  in_ecx[6] = in_ecx[6] - fVar2;
  in_ecx[7] = in_ecx[7] - fVar3;
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  in_ecx[8] = in_ecx[8] - param_2[8];
  in_ecx[9] = in_ecx[9] - fVar1;
  in_ecx[10] = in_ecx[10] - fVar2;
  in_ecx[0xb] = in_ecx[0xb] - fVar3;
  return (uint)param_2;
}

/* ref: FUN_00da1a20 */
unsigned int F_00da1a20(float gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xda1a20u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_a2, gen_a3);
  float in_eax = (float)gen_a0;
  float in_ecx = (float)gen_a1;
  float * in_esi = (float *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = REFG(float, 0x1087f04);
  in_esi[3] = in_eax;
  in_esi[2] = in_ecx;
  fVar1 = (*(float *)(param_4 + (int)gen_fl2bits(in_eax) * 0x14) -
          *(float *)(param_4 + (int)gen_fl2bits(in_ecx) * 0x14)) /
          (*((float *)GEN_TOP((param_4 + ((int)gen_fl2bits(in_ecx) + (int)gen_fl2bits(in_eax) * 4) * 4))) *
          REFG(float, 0x10928e4));
  fVar3 = SQRT(fVar1 * fVar1 + fVar2);
  if (*(float *)&REFG(undefined, 0x1088114) <= fVar1) {
    fVar3 = fVar3 + fVar1;
  }
  else {
    fVar3 = fVar1 - fVar3;
  }
  fVar3 = fVar2 / fVar3;
  fVar2 = fVar2 / SQRT(fVar3 * fVar3 + fVar2);
  *in_esi = fVar2;
  in_esi[1] = fVar2 * fVar3;
  return 0;
}

/* ref: FUN_00da1c00 */
unsigned int F_00da1c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda1c00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  local_30 = (undefined4)param_2[2];
  uStack_2c = (undefined4)((ulonglong)param_2[2] >> 0x20);
  uStack_28 = (undefined4)param_2[3];
  local_20 = (undefined4)*param_2;
  uStack_1c = (undefined4)((ulonglong)*param_2 >> 0x20);
  uStack_18 = (undefined4)param_2[1];
  local_40 = (undefined4)param_2[4];
  uStack_3c = (undefined4)((ulonglong)param_2[4] >> 0x20);
  uStack_38 = (undefined4)param_2[5];
  uStack_34 = (undefined4)((ulonglong)param_2[5] >> 0x20);
  *in_ecx = local_20;
  in_ecx[1] = local_30;
  in_ecx[2] = local_40;
  in_ecx[3] = uStack_3c;
  in_ecx[4] = uStack_1c;
  in_ecx[5] = uStack_2c;
  in_ecx[6] = uStack_3c;
  in_ecx[7] = uStack_34;
  in_ecx[8] = uStack_18;
  in_ecx[9] = uStack_28;
  in_ecx[10] = uStack_38;
  in_ecx[0xb] = uStack_34;
  return 0;
}

/* ref: FUN_00da1ca0 */
unsigned int F_00da1ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda1ca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  float * pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float * pfVar5;
  int iVar6;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  local_40 = gen_bits2f((uint)*param_1);
  fStack_3c = gen_bits2f((uint)((ulonglong)*param_1 >> 0x20));
  fStack_38 = gen_bits2f((uint)param_1[1]);
  fStack_34 = gen_bits2f((uint)((ulonglong)param_1[1] >> 0x20));
  local_30 = gen_bits2f((uint)param_1[2]);
  fStack_2c = gen_bits2f((uint)((ulonglong)param_1[2] >> 0x20));
  fStack_28 = gen_bits2f((uint)param_1[3]);
  fStack_24 = gen_bits2f((uint)((ulonglong)param_1[3] >> 0x20));
  local_20 = gen_bits2f((uint)param_1[4]);
  fStack_1c = gen_bits2f((uint)((ulonglong)param_1[4] >> 0x20));
  fStack_18 = gen_bits2f((uint)param_1[5]);
  fStack_14 = gen_bits2f((uint)((ulonglong)param_1[5] >> 0x20));
  iVar6 = 2;
  pfVar5 = (float *)(param_2 + 0x20);
  do {
    fVar2 = *pfVar5;
    fVar3 = pfVar5[1];
    fVar4 = pfVar5[2];
    pfVar1 = ((float *)GEN_TOP((((int)this - param_2) + (int)pfVar5)));
    *pfVar1 = (fVar2 * local_40 + fVar3 * local_30) + fVar4 * local_20;
    pfVar1[1] = (fVar2 * fStack_3c + fVar3 * fStack_2c) + fVar4 * fStack_1c;
    pfVar1[2] = (fVar2 * fStack_38 + fVar3 * fStack_28) + fVar4 * fStack_18;
    pfVar1[3] = (fVar2 * fStack_34 + fVar3 * fStack_24) + fVar4 * fStack_14;
    pfVar5 = pfVar5 + -4;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  return 0;
}

/* ref: FUN_00da1f60 */
uint F_00da1f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda1f60u, gen_a0, gen_a1, gen_a2, 0u);
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
  *(float *)this = *param_1 * *param_2 + *(float *)this;
  *(float *)((int)this + 4) = fVar1 * fVar4 + *(float *)((int)this + 4);
  *(float *)((int)this + 8) = fVar2 * fVar5 + *(float *)((int)this + 8);
  *(float *)((int)this + 0xc) = fVar3 * fVar6 + *(float *)((int)this + 0xc);
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *(float *)((int)this + 0x10) = param_2[4] * *param_1 + *(float *)((int)this + 0x10);
  *(float *)((int)this + 0x14) = fVar1 * fVar4 + *(float *)((int)this + 0x14);
  *(float *)((int)this + 0x18) = fVar2 * fVar5 + *(float *)((int)this + 0x18);
  *(float *)((int)this + 0x1c) = fVar3 * fVar6 + *(float *)((int)this + 0x1c);
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *(float *)((int)this + 0x20) = param_2[8] * *param_1 + *(float *)((int)this + 0x20);
  *(float *)((int)this + 0x24) = fVar1 * fVar4 + *(float *)((int)this + 0x24);
  *(float *)((int)this + 0x28) = fVar2 * fVar5 + *(float *)((int)this + 0x28);
  *(float *)((int)this + 0x2c) = fVar3 * fVar6 + *(float *)((int)this + 0x2c);
  return (uint)param_1;
}

/* ref: FUN_00da1fa0 */
byte F_00da1fa0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xda1fa0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 in_EAX = 0;
  uint uVar4;
  undefined4 in_EDX = 0;
  undefined4 uVar5;
  
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(ABS(param_1[1] - param_2[1]) < param_3);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(ABS(*param_1 - *param_2) < param_3);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(ABS(param_1[2] - param_2[2]) < param_3);
  (*(undefined4 *)((char *)&auVar1 + 12)) = -(uint)(ABS(param_1[3] - param_2[3]) < param_3);
  uVar4 = gen_movmskps(&(auVar1));
  if ((((char)(uVar4 & 7) == '\a') &&
      ((*(undefined4 *)((char *)&auVar2 + 4)) = -(uint)(ABS(param_1[5] - param_2[5]) < param_3),
      (*(undefined4 *)((char *)&auVar2 + 0)) = -(uint)(ABS(param_1[4] - param_2[4]) < param_3),
      (*(undefined4 *)((char *)&auVar2 + 8)) = -(uint)(ABS(param_1[6] - param_2[6]) < param_3),
      (*(undefined4 *)((char *)&auVar2 + 12)) = -(uint)(ABS(param_1[7] - param_2[7]) < param_3),
      uVar5 = gen_movmskps(&(auVar2)), ((byte)uVar5 & 7) == 7)) &&
     ((*(undefined4 *)((char *)&auVar3 + 4)) = -(uint)(ABS(param_1[9] - param_2[9]) < param_3),
     (*(undefined4 *)((char *)&auVar3 + 0)) = -(uint)(ABS(param_1[8] - param_2[8]) < param_3),
     (*(undefined4 *)((char *)&auVar3 + 8)) = -(uint)(ABS(param_1[10] - param_2[10]) < param_3),
     (*(undefined4 *)((char *)&auVar3 + 12)) = -(uint)(ABS(param_1[0xb] - param_2[0xb]) < param_3),
     uVar5 = gen_movmskps(&(auVar3)), ((byte)uVar5 & 7) == 7)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00da2020 */
byte F_00da2020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda2020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 in_EDX = 0;
  undefined4 uVar8;
  
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = param_2[3];
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(ABS(*(float *)((int)this + 4) - param_1[1]) < fVar5);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(ABS(*(float *)this - *param_1) < fVar4);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(ABS(*(float *)((int)this + 8) - param_1[2]) < fVar6);
  (*(undefined4 *)((char *)&auVar1 + 12)) = -(uint)(ABS(*(float *)((int)this + 0xc) - param_1[3]) < fVar7);
  uVar8 = gen_movmskps(&(auVar1));
  if (((((byte)uVar8 & 7) == 7) &&
      ((*(undefined4 *)((char *)&auVar2 + 4)) = -(uint)(ABS(*(float *)((int)this + 0x14) - param_1[5]) < fVar5),
      (*(undefined4 *)((char *)&auVar2 + 0)) = -(uint)(ABS(*(float *)((int)this + 0x10) - param_1[4]) < fVar4),
      (*(undefined4 *)((char *)&auVar2 + 8)) = -(uint)(ABS(*(float *)((int)this + 0x18) - param_1[6]) < fVar6),
      (*(undefined4 *)((char *)&auVar2 + 12)) = -(uint)(ABS(*(float *)((int)this + 0x1c) - param_1[7]) < fVar7),
      uVar8 = gen_movmskps(&(auVar2)), ((byte)uVar8 & 7) == 7)) &&
     ((*(undefined4 *)((char *)&auVar3 + 4)) = -(uint)(ABS(*(float *)((int)this + 0x24) - param_1[9]) < fVar5),
     (*(undefined4 *)((char *)&auVar3 + 0)) = -(uint)(ABS(*(float *)((int)this + 0x20) - param_1[8]) < fVar4),
     (*(undefined4 *)((char *)&auVar3 + 8)) = -(uint)(ABS(*(float *)((int)this + 0x28) - param_1[10]) < fVar6),
     (*(undefined4 *)((char *)&auVar3 + 12)) = -(uint)(ABS(*(float *)((int)this + 0x2c) - param_1[0xb]) < fVar7),
     uVar8 = gen_movmskps(&(auVar3)), ((byte)uVar8 & 7) == 7)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00da2150 */
uint F_00da2150(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xda2150u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
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
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  
  fVar2 = in_ecx[8];
  fVar3 = in_ecx[9];
  fVar4 = in_ecx[10];
  fVar5 = in_ecx[0xb];
  fVar6 = in_ecx[4];
  fVar7 = in_ecx[5];
  fVar8 = in_ecx[6];
  fVar9 = in_ecx[7];
  fVar20 = fVar7 * fVar4 - fVar8 * fVar3;
  fVar21 = fVar8 * fVar2 - fVar6 * fVar4;
  fVar22 = fVar6 * fVar3 - fVar7 * fVar2;
  fVar10 = *in_ecx;
  fVar11 = in_ecx[1];
  fVar12 = in_ecx[2];
  fVar13 = in_ecx[3];
  fVar14 = fVar10 * fVar20;
  fVar15 = fVar11 * fVar21;
  fVar16 = fVar12 * fVar22;
  fVar17 = (fVar15 + fVar14) + fVar16;
  fVar18 = (fVar15 + fVar14) + fVar16;
  fVar19 = (fVar15 + fVar14) + fVar16;
  fVar16 = (fVar15 + fVar14) + fVar16;
  (*(undefined8 *)((char *)&auVar23 + 0)) = CONCAT44((uint)gen_fl2bits(fVar18),(uint)gen_fl2bits(fVar17)) & 0x7fffffff7fffffff
  ;
  (*(float *)((char *)&auVar23 + 8)) = ABS(fVar19);
  (*(float *)((char *)&auVar23 + 12)) = ABS(fVar16);
  if ((param_2 * param_2) * param_2 < ABS(fVar17)) {
    (*(undefined4 *)((char *)&auVar1 + 4)) = (undefined4)gen_fl2bits(fVar18);
    (*(undefined4 *)((char *)&auVar1 + 0)) = (undefined4)gen_fl2bits(fVar17);
    (*(undefined4 *)((char *)&auVar1 + 8)) = (undefined4)gen_fl2bits(fVar19);
    (*(undefined4 *)((char *)&auVar1 + 12)) = (undefined4)gen_fl2bits(fVar16);
    gen_rcpps(&(auVar23), &(auVar23), &(auVar1));
    fVar14 = (*(float *)&REFG(undefined, 0x113c150) - (*(float *)((char *)&auVar23 + 0)) * fVar17) * (*(float *)((char *)&auVar23 + 0));
    fVar15 = (*(float *)&REFG(undefined, 0x113c154) - (*(float *)((char *)&auVar23 + 4)) * fVar18) * (*(float *)((char *)&auVar23 + 4));
    fVar17 = (*(float *)&REFG(undefined, 0x113c158) - (*(float *)((char *)&auVar23 + 8)) * fVar19) * (*(float *)((char *)&auVar23 + 8));
    fVar16 = (*(float *)&REFG(undefined, 0x113c15c) - (*(float *)((char *)&auVar23 + 12)) * fVar16) * (*(float *)((char *)&auVar23 + 12));
    *in_ecx = fVar14 * fVar20;
    in_ecx[1] = fVar15 * fVar21;
    in_ecx[2] = fVar17 * fVar22;
    in_ecx[3] = fVar16 * (fVar9 * fVar5 - fVar9 * fVar5);
    in_ecx[4] = fVar14 * (fVar3 * fVar12 - fVar4 * fVar11);
    in_ecx[5] = fVar15 * (fVar4 * fVar10 - fVar2 * fVar12);
    in_ecx[6] = fVar17 * (fVar2 * fVar11 - fVar3 * fVar10);
    in_ecx[7] = fVar16 * (fVar5 * fVar13 - fVar5 * fVar13);
    in_ecx[8] = fVar14 * (fVar8 * fVar11 - fVar7 * fVar12);
    in_ecx[9] = fVar15 * (fVar6 * fVar12 - fVar8 * fVar10);
    in_ecx[10] = fVar17 * (fVar7 * fVar10 - fVar6 * fVar11);
    in_ecx[0xb] = fVar16 * (fVar9 * fVar13 - fVar9 * fVar13);
    F_00da1640(in_ecx);
    return 0;
  }
  return 1;
}

/* ref: FUN_00da25e0 */
unsigned int F_00da25e0(unsigned int gen_a0)
{
  GEN_ENTER(0xda25e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00da2230(param_1);
  return 0;
}

/* ref: FUN_00da3190 */
byte F_00da3190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda3190u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  
  fVar1 = *in_ecx;
  return (GEN_ISNAN(fVar1) || GEN_ISNAN(*param_2)) || (fVar1 < *param_2 || fVar1 == *param_2);
}

/* ref: FUN_00da31b0 */
uint F_00da31b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda31b0u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = in_ecx[1];
  fVar5 = in_ecx[2];
  fVar6 = in_ecx[3];
  *param_2 = -(uint)(*param_3 < *in_ecx);
  param_2[1] = -(uint)(fVar1 < fVar4);
  param_2[2] = -(uint)(fVar2 < fVar5);
  param_2[3] = -(uint)(fVar3 < fVar6);
  return (uint)param_2;
}

/* ref: FUN_00da31d0 */
uint F_00da31d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xda31d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
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
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = *param_4;
  fVar5 = param_4[1];
  fVar6 = param_4[2];
  fVar7 = *param_5;
  fVar8 = param_5[1];
  fVar9 = param_5[2];
  fVar10 = param_5[3];
  fVar11 = *param_6;
  fVar12 = param_6[1];
  fVar13 = param_6[2];
  fVar14 = param_6[3];
  *param_7 = param_1[2] * param_2[2] + (*param_1 * *param_2 + param_1[1] * param_2[1]);
  param_7[1] = fVar3 * fVar6 + (fVar1 * fVar4 + fVar2 * fVar5);
  param_7[2] = fVar9 * fVar13 + (fVar7 * fVar11 + fVar8 * fVar12);
  param_7[3] = fVar10 * fVar14 + (fVar8 * fVar12 + fVar10 * fVar14);
  return (uint)param_7;
}

/* ref: FUN_00da3230 */
uint F_00da3230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda3230u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *in_ecx;
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00da3250 */
uint F_00da3250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda3250u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(in_ecx + 0x14);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00da3270 */
uint F_00da3270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda3270u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(in_ecx + 0x28);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00da3290 */
uint F_00da3290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda3290u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(in_ecx + 0x24);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00da32b0 */
uint F_00da32b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda32b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(in_ecx + 0x20);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00da32d0 */
uint F_00da32d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda32d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(in_ecx + 0x10);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00da32f0 */
uint F_00da32f0(unsigned int gen_a0)
{
  GEN_ENTER(0xda32f0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138b0c);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138b08);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138b04);
  *param_1 = *(undefined4 *)&REFG(undefined, 0x1138b00);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00da3600 */
uint F_00da3600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda3600u, gen_a0, gen_a1, gen_a2, 0u);
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
  *(float *)this = *param_1 * *param_2 + *(float *)this;
  *(float *)((int)this + 4) = fVar1 * fVar4 + *(float *)((int)this + 4);
  *(float *)((int)this + 8) = fVar2 * fVar5 + *(float *)((int)this + 8);
  *(float *)((int)this + 0xc) = fVar3 * fVar6 + *(float *)((int)this + 0xc);
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *(float *)((int)this + 0x10) = param_2[4] * *param_1 + *(float *)((int)this + 0x10);
  *(float *)((int)this + 0x14) = fVar1 * fVar4 + *(float *)((int)this + 0x14);
  *(float *)((int)this + 0x18) = fVar2 * fVar5 + *(float *)((int)this + 0x18);
  *(float *)((int)this + 0x1c) = fVar3 * fVar6 + *(float *)((int)this + 0x1c);
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *(float *)((int)this + 0x20) = param_2[8] * *param_1 + *(float *)((int)this + 0x20);
  *(float *)((int)this + 0x24) = fVar1 * fVar4 + *(float *)((int)this + 0x24);
  *(float *)((int)this + 0x28) = fVar2 * fVar5 + *(float *)((int)this + 0x28);
  *(float *)((int)this + 0x2c) = fVar3 * fVar6 + *(float *)((int)this + 0x2c);
  return (uint)param_1;
}

/* ref: FUN_00da3670 */
uint F_00da3670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda3670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LONG param_1 = (LONG)gen_a1;
  LONG param_2 = (LONG)gen_a2;
  HANDLE pvVar1;
  
  pvVar1 = gen_imp_CreateSemaphoreA((GEN_LPANY)0x0,param_1,param_2,(LPCSTR)0x0);
  *(HANDLE *)this = pvVar1;
  return (uint)this;
}

/* ref: FUN_00da36a0 */
unsigned int F_00da36a0(unsigned int gen_a0)
{
  GEN_ENTER(0xda36a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_CloseHandle(*(HANDLE *)this);
  return 0;
}

/* ref: FUN_00da36b0 */
unsigned int F_00da36b0(unsigned int gen_a0)
{
  GEN_ENTER(0xda36b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_WaitForSingleObject(*(HANDLE *)this,0xffffffff);
  return 0;
}

/* ref: FUN_00da36c0 */
unsigned int F_00da36c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda36c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LONG param_1 = (LONG)gen_a1;
  gen_imp_ReleaseSemaphore(*(HANDLE *)this,param_1,(LPLONG)0x0);
  return 0;
}

/* ref: FUN_00da36e0 */
unsigned int F_00da36e0(unsigned int gen_a0)
{
  GEN_ENTER(0xda36e0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  F_00da36b0(param_1);
  return 0;
}

/* ref: FUN_00da36f0 */
unsigned int F_00da36f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda36f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00da36c0(param_1,param_2);
  return 0;
}

/* ref: FUN_00da3710 */
uint F_00da3710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda3710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(param_1,param_2,param_3);
  return (uint)uVar1;
}

/* ref: FUN_00da3720 */
uint F_00da3720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda3720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  gen_size32 param_3 = (gen_size32)gen_a2;
  undefined * pvVar1;
  
  pvVar1 = F_00c48350(param_1,param_2,param_3);
  return (uint)pvVar1;
}

/* ref: FUN_00da3730 */
unsigned int F_00da3730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda3730u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  int in_ecx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = in_eax >> 3;
  if (7 < in_eax) {
    puVar1 = (undefined4 *)(param_3 + -8 + uVar2 * 8);
    do {
      *puVar1 = *((undefined4 *)GEN_TOP(((in_ecx - param_3) + (int)puVar1)));
      puVar1[1] = *((undefined4 *)GEN_TOP(((in_ecx - param_3) + 4 + (int)puVar1)));
      puVar1 = puVar1 + -2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00da3760 */
unsigned int F_00da3760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda3760u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  int in_edx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = in_eax >> 2;
  if (3 < in_eax) {
    puVar1 = (undefined4 *)(param_3 + -4 + uVar2 * 4);
    do {
      *puVar1 = *((undefined4 *)GEN_TOP(((in_edx - param_3) + (int)puVar1)));
      puVar1 = puVar1 + -1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00da3790 */
unsigned int F_00da3790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda3790u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  int in_edx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined2 * puVar1;
  uint uVar2;
  
  uVar2 = in_eax >> 1;
  if (1 < in_eax) {
    puVar1 = (undefined2 *)(param_3 + -2 + uVar2 * 2);
    do {
      *puVar1 = *((undefined2 *)GEN_TOP(((in_edx - param_3) + (int)puVar1)));
      puVar1 = puVar1 + -1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00da37c0 */
unsigned int F_00da37c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda37c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined1 * puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)(param_2 + -1 + param_3);
    do {
      *puVar1 = puVar1[param_1 - param_3];
      puVar1 = puVar1 + -1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}

/* ref: FUN_00da37e0 */
uint F_00da37e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda37e0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 * puVar1;
  undefined2 * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 * puVar8;
  
  uVar4 = param_3 & 0xfffffff8;
  uVar6 = param_3;
  uVar3 = param_1;
  uVar5 = param_2;
  if ((((uVar4 != 0) && ((param_3 & 7) == 0)) && ((param_1 & 7) == 0)) && ((param_2 & 7) == 0)) {
    uVar6 = param_3 >> 3;
    if (7 < param_3) {
      puVar1 = ((undefined4 *)GEN_TOP(((param_1 - 8) + uVar6 * 8)));
      do {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - param_1) + (int)puVar1)));
        puVar1[1] = *((undefined4 *)GEN_TOP(((param_2 - param_1) + 4 + (int)puVar1)));
        puVar1 = puVar1 + -2;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    uVar3 = param_1 + uVar4;
    uVar5 = param_2 + uVar4;
    uVar6 = 0;
  }
  uVar4 = uVar6 & 0xfffffffc;
  if (((uVar4 != 0) && ((uVar6 & 3) == 0)) && (((uVar3 & 3) == 0 && ((uVar5 & 3) == 0)))) {
    uVar7 = uVar6 >> 2;
    if (3 < uVar6) {
      puVar1 = ((undefined4 *)GEN_TOP(((uVar3 - 4) + uVar7 * 4)));
      do {
        *puVar1 = *((undefined4 *)GEN_TOP(((int)puVar1 + (uVar5 - uVar3))));
        puVar1 = puVar1 + -1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    uVar3 = uVar3 + uVar4;
    uVar5 = uVar5 + uVar4;
    uVar6 = 0;
  }
  uVar4 = uVar6 & 0xfffffffe;
  if (((uVar4 != 0) && ((uVar6 & 1) == 0)) && (((uVar3 & 1) == 0 && ((uVar5 & 1) == 0)))) {
    uVar7 = uVar6 >> 1;
    if (1 < uVar6) {
      puVar2 = ((undefined2 *)GEN_TOP(((uVar3 - 2) + uVar7 * 2)));
      do {
        *puVar2 = *((undefined2 *)GEN_TOP(((int)puVar2 + (uVar5 - uVar3))));
        puVar2 = puVar2 + -1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    uVar3 = uVar3 + uVar4;
    uVar5 = uVar5 + uVar4;
    uVar6 = 0;
  }
  if (uVar6 != 0) {
    puVar8 = ((undefined1 *)GEN_TOP(((uVar6 - 1) + uVar3)));
    do {
      *puVar8 = puVar8[uVar5 - uVar3];
      puVar8 = puVar8 + -1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return 0;
}

/* ref: FUN_00da38f0 */
uint F_00da38f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda38f0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_2 < param_1) {
    uVar1 = F_00da37e0(param_1,param_2,param_3);
    return uVar1;
  }
  uVar1 = param_1;
  if (param_1 < param_2) {
    uVar1 = F_00da3710(param_1,param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_00da3920 */
uint F_00da3920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda3920u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00da3930 */
uint F_00da3930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda3930u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00da3970 */
uint F_00da3970(unsigned int gen_a0)
{
  GEN_ENTER(0xda3970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (-1 < *(int *)((int)this + 8)) {
    piVar2 = *(int * PTR32 *)this;
    do {
      if (*piVar2 != -1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 3;
    } while ((int)uVar1 <= *(int *)((int)this + 8));
  }
  return uVar1;
}

/* ref: FUN_00da3990 */
uint F_00da3990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda3990u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 4 + param_2 * 0xc);
}

/* ref: FUN_00da39b0 */
uint F_00da39b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda39b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 8 + param_2 * 0xc);
}

/* ref: FUN_00da39d0 */
uint F_00da39d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda39d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)(*(int *)this + 8 + param_1 * 0xc) = param_2;
  return param_1 * 3;
}

/* ref: FUN_00da39f0 */
uint F_00da39f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda39f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = param_1 + 1;
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    piVar2 = (int *)(*(int *)this + uVar1 * 0xc);
    do {
      if (*piVar2 != -1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 3;
    } while ((int)uVar1 <= *(int *)((int)this + 8));
  }
  return uVar1;
}

/* ref: FUN_00da3a20 */
uint F_00da3a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda3a20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char * pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char * pcVar7;
  uint uVar8;
  
  uVar5 = 0;
  cVar2 = *param_1;
  pcVar7 = param_1;
  while (cVar2 != '\0') {
    pcVar1 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
    uVar5 = (int)cVar2 + uVar5 * 0x1f;
    cVar2 = *pcVar1;
  }
  uVar5 = uVar5 & 0x7fffffff;
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_00da3fc0(this,*(int *)((int)this + 8) * 2 + 2);
  }
  uVar8 = *(uint *)((int)this + 8) & uVar5;
  iVar4 = uVar8 * 0xc;
  iVar3 = *(int *)(iVar4 + *(int *)this);
  while (iVar3 != -1) {
    if ((*(uint *)(iVar4 + *(int *)this) == uVar5) &&
       (uVar6 = F_00da0d20(param_1,*(undefined4 *)(iVar4 + 4 + *(int *)this)), uVar6 == 0))
    goto LAB_00da3ab2;
    uVar8 = uVar8 + 1 & *(uint *)((int)this + 8);
    iVar4 = uVar8 * 0xc;
    iVar3 = *(int *)(iVar4 + *(int *)this);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
LAB_00da3ab2: ;
  uVar8 = uVar8 * 0xc;
  *(uint *)(uVar8 + *(int *)this) = uVar5;
  *(char * PTR32 *)(uVar8 + 4 + *(int *)this) = param_1;
  *(undefined4 *)(uVar8 + 8 + *(int *)this) = param_2;
  return uVar8;
}

/* ref: FUN_00da3ae0 */
uint F_00da3ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda3ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char * pcVar1;
  uint * puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  char * pcVar6;
  uint uVar7;
  
  uVar4 = 0;
  cVar3 = *param_1;
  pcVar6 = param_1;
  while (cVar3 != '\0') {
    pcVar1 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
    uVar4 = (int)cVar3 + uVar4 * 0x1f;
    cVar3 = *pcVar1;
  }
  uVar7 = *(uint *)((int)this + 8) & uVar4 & 0x7fffffff;
  puVar2 = (uint *)(*(int *)this + uVar7 * 0xc);
  uVar5 = *puVar2;
  while( true ) {
    if (uVar5 == 0xffffffff) {
      return *(int *)((int)this + 8) + 1;
    }
    if ((uVar5 == (uVar4 & 0x7fffffff)) && (uVar5 = F_00da0d20(param_1,puVar2[1]), uVar5 == 0))
    break;
    uVar7 = uVar7 + 1 & *(uint *)((int)this + 8);
    puVar2 = (uint *)(*(int *)this + uVar7 * 0xc);
    uVar5 = *puVar2;
  }
  return uVar7;
}

/* ref: FUN_00da3b70 */
unsigned int F_00da3b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda3b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  *(undefined4 *)(*(int *)this + param_1 * 0xc) = 0xffffffff;
  uVar5 = *(uint *)((int)this + 8);
  uVar3 = uVar5 + param_1 & uVar5;
  iVar1 = *(int *)(*(int *)this + uVar3 * 0xc);
  while (iVar1 != -1) {
    uVar3 = uVar3 + uVar5 & uVar5;
    iVar1 = *(int *)(*(int *)this + uVar3 * 0xc);
  }
  uVar4 = uVar3 + 1 & uVar5;
  uVar3 = param_1 + 1 & uVar5;
  iVar2 = uVar3 * 0xc;
  iVar1 = *(int *)(*(int *)this + iVar2);
  uVar6 = param_1;
  while (iVar1 != -1) {
    uVar5 = *(uint *)(*(int *)this + iVar2) & uVar5;
    if ((((uVar3 < uVar4) || (uVar5 <= uVar6)) &&
        ((uVar6 <= uVar3 || ((uVar5 <= uVar6 && (uVar3 < uVar5)))))) &&
       ((uVar5 <= uVar6 || (uVar4 <= uVar5)))) {
      iVar1 = uVar6 * 0xc;
      *(uint *)(iVar1 + *(int *)this) = *(uint *)(*(int *)this + iVar2);
      *(undefined4 *)(iVar1 + 4 + *(int *)this) = *(undefined4 *)(*(int *)this + 4 + iVar2);
      *(undefined4 *)(iVar1 + 8 + *(int *)this) = *(undefined4 *)(*(int *)this + 8 + iVar2);
      *(undefined4 *)(iVar2 + *(int *)this) = 0xffffffff;
      uVar6 = uVar3;
    }
    uVar5 = *(uint *)((int)this + 8);
    uVar3 = uVar3 + 1 & uVar5;
    iVar2 = uVar3 * 0xc;
    iVar1 = *(int *)(iVar2 + *(int *)this);
  }
  return 0;
}

/* ref: FUN_00da3c40 */
uint F_00da3c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda3c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int local_c;
  int local_8;
  
  uVar4 = *(uint *)((int)this + 8);
  local_c = 0;
  if (-1 < (int)uVar4) {
    local_8 = 0;
    do {
      iVar1 = *(int *)this;
      if (*(int *)(iVar1 + local_8) != -1) {
        uVar2 = *(uint *)(iVar1 + local_8);
        uVar3 = *(undefined4 *)(iVar1 + 4 + local_8);
        uVar4 = uVar4 & uVar2;
        while ((*(uint *)(*(int *)this + uVar4 * 0xc) != uVar2 ||
               (uVar5 = F_00da0d20(uVar3,*(undefined4 *)(*(int *)this + uVar4 * 0xc + 4)),
               uVar5 != 0))) {
          uVar4 = uVar4 + 1 & *(uint *)((int)this + 8);
        }
      }
      uVar4 = *(uint *)((int)this + 8);
      local_8 = local_8 + 0xc;
      local_c = local_c + 1;
    } while (local_c <= (int)uVar4);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00da3cd0 */
unsigned int F_00da3cd0(unsigned int gen_a0)
{
  GEN_ENTER(0xda3cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (*(int *)((int)this + 8) != -1 && -1 < *(int *)((int)this + 8) + 1) {
    iVar2 = 0;
    do {
      *(undefined4 *)(iVar2 + *(int *)this) = 0xffffffff;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar1 < *(int *)((int)this + 8) + 1);
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  *(undefined4 *)((int)this + 4) = 0;
  return 0;
}

/* ref: FUN_00da3d10 */
uint F_00da3d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda3d10u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00da3d40 */
uint F_00da3d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda3d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = param_1[2];
  if (-1 < (int)uVar1) {
    iVar2 = 0;
    iVar3 = uVar1 + 1;
    do {
      uVar1 = *param_1;
      if (*(int *)(uVar1 + iVar2) != -1) {
        uVar1 = F_00da3a20(this,*(undefined4 *)(uVar1 + 4 + iVar2),
                             *(undefined4 *)(uVar1 + 8 + iVar2));
      }
      iVar2 = iVar2 + 0xc;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar1;
}

/* ref: FUN_00da3da0 */
uint F_00da3da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda3da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this,param_1 * 0xc);
  return uVar1;
}

/* ref: FUN_00da3dc0 */
uint F_00da3dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda3dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00da3de0 */
uint F_00da3de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda3de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 4))))(&REFG(undefined * PTR32, 0x13516ac),0xc0);
  *(uint *)this = uVar1;
  F_00da1030(uVar1,0xff,0xc0);
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xf;
  return (uint)this;
}

/* ref: FUN_00da3e20 */
uint F_00da3e20(unsigned int gen_a0)
{
  GEN_ENTER(0xda3e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 8))))
                    (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(*(int *)((int)this + 8) * 3 + 3) * 4
                    );
  return uVar1;
}

/* ref: FUN_00da3e40 */
uint F_00da3e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda3e40u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00da3e60 */
uint F_00da3e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda3e60u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  
  uVar1 = (*(undefined4 *)&gen_args[1]);
  uVar2 = F_00da3ae0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  pcVar3 = (char *)F_00da3e40((*(undefined * PTR32 *)&gen_args[0]),(int)&(*(undefined4 *)&gen_args[1]) + 3,uVar2);
  uVar4 = (*(uint *)&gen_args[2]);
  if (*pcVar3 != '\0') {
    uVar4 = F_00da39b0((*(undefined * PTR32 *)&gen_args[0]),uVar2);
    return uVar4;
  }
  F_00da3a20((*(undefined * PTR32 *)&gen_args[0]),uVar1,(*(uint *)&gen_args[2]));
  return uVar4;
}

/* ref: FUN_00da3eb0 */
uint F_00da3eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda3eb0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  char * pcVar2;
  
  uVar1 = F_00da3ae0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  pcVar2 = (char *)F_00da3e40((*(undefined * PTR32 *)&gen_args[0]),(int)&(*(undefined4 *)&gen_args[1]) + 3,uVar1);
  if (*pcVar2 != '\0') {
    uVar1 = F_00da39b0((*(undefined * PTR32 *)&gen_args[0]),uVar1);
    *(*(uint * PTR32 *)&gen_args[2]) = uVar1;
    return 0;
  }
  return 1;
}

/* ref: FUN_00da3f00 */
uint F_00da3f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda3f00u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  char * pcVar2;
  
  uVar1 = F_00da3ae0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  pcVar2 = (char *)F_00da3e40((*(undefined * PTR32 *)&gen_args[0]),(int)&(*(undefined4 *)&gen_args[1]) + 3,uVar1);
  if (*pcVar2 != '\0') {
    F_00da3b70((*(undefined * PTR32 *)&gen_args[0]),uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_00da3f40 */
uint F_00da3f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda3f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 8))))
            (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(*(int *)((int)this + 8) * 3 + 3) * 4);
  iVar1 = param_1[2];
  *(int *)((int)this + 8) = iVar1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 4))))(&REFG(undefined * PTR32, 0x13516ac),(iVar1 * 3 + 3) * 4);
  iVar1 = *(int *)((int)this + 8);
  *(uint *)this = uVar2;
  F_00da1010(uVar2,*param_1,(iVar1 * 3 + 3) * 4);
  return (uint)this;
}

/* ref: FUN_00da3fc0 */
uint F_00da3fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda3fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar1 = *(int *)this;
  iVar3 = *(int *)((int)this + 8) + 1;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 4))))(&REFG(undefined * PTR32, 0x13516ac),param_1 * 0xc);
  *(uint *)this = uVar2;
  F_00da1030(uVar2,0xff,param_1 * 0xc);
  *(undefined4 *)((int)this + 4) = 0;
  *(int *)((int)this + 8) = param_1 + -1;
  if (0 < iVar3) {
    puVar4 = (undefined4 *)(iVar1 + 4);
    param_1 = iVar3;
    do {
      if (puVar4[-1] != -1) {
        F_00da3a20(this,*puVar4,puVar4[1]);
      }
      puVar4 = puVar4 + 3;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 8))))(&REFG(undefined * PTR32, 0x13516ac),iVar1,iVar3 * 0xc);
  return uVar2;
}

/* ref: FUN_00da4060 */
uint F_00da4060(unsigned int gen_a0)
{
  GEN_ENTER(0xda4060u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00da4080 */
unsigned int F_00da4080(unsigned int gen_a0)
{
  GEN_ENTER(0xda4080u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x10);
  }
  return 0;
}

/* ref: FUN_00da40b0 */
uint F_00da40b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda40b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da3ae0(this,param_2);
  F_00da3e40(this,param_1,uVar1);
  return param_1;
}

/* ref: FUN_00da40e0 */
uint F_00da40e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda40e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char * pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char * pcVar6;
  uint uVar7;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_00da3fc0(this,*(int *)((int)this + 8) * 2 + 2);
  }
  uVar4 = 0;
  cVar2 = *param_1;
  pcVar6 = param_1;
  while (cVar2 != '\0') {
    pcVar1 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
    uVar4 = (int)cVar2 + uVar4 * 0x1f;
    cVar2 = *pcVar1;
  }
  uVar4 = uVar4 & 0x7fffffff;
  uVar7 = uVar4;
  while( true ) {
    uVar7 = uVar7 & *(uint *)((int)this + 8);
    iVar3 = uVar7 * 0xc;
    if ((*(uint *)(*(int *)this + iVar3) == uVar4) &&
       (uVar5 = F_00da0d20(param_1,*(undefined4 *)(*(int *)this + 4 + iVar3)), uVar5 == 0)) break;
    if (*(int *)(iVar3 + *(int *)this) == -1) {
      iVar3 = uVar7 * 0xc;
      *(uint *)(iVar3 + *(int *)this) = uVar4;
      *(char * PTR32 *)(iVar3 + 4 + *(int *)this) = param_1;
      *(undefined4 *)(iVar3 + 8 + *(int *)this) = param_2;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      return uVar7;
    }
    uVar7 = uVar7 + 1;
  }
  return uVar7;
}

/* ref: FUN_00da4190 */
uint F_00da4190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda4190u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  F_00da3eb0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(uint *)&gen_args[2]));
  return (*(uint *)&gen_args[2]);
}

/* ref: FUN_00da41b0 */
uint F_00da41b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda41b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = 8;
  if (8 < param_1 * 2) {
    do {
      uVar1 = uVar1 * 2;
    } while ((int)uVar1 < param_1 * 2);
  }
  if (*(int *)((int)this + 8) + 1 < (int)uVar1) {
    uVar1 = F_00da3fc0(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00da4200 */
uint F_00da4200(unsigned int gen_a0)
{
  GEN_ENTER(0xda4200u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  return in_ecx;
}

/* ref: FUN_00da4230 */
uint F_00da4230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xda4230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 4) + -1;
  iVar3 = param_3;
  if (iVar1 <= param_3) {
    iVar3 = iVar1;
  }
  if ((int)param_2 < iVar3) {
    uVar2 = param_2;
    do {
      if (*(char *)(*(int *)this + uVar2) == (char)param_1) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < iVar3);
  }
  return 0xffffffff;
}

/* ref: FUN_00da4270 */
uint F_00da4270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xda4270u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00da0ee0(*(int *)this + param_2,param_1);
  if (uVar1 != 0) {
    return uVar1 - *(int *)this;
  }
  return 0xffffffff;
}

/* ref: FUN_00da42a0 */
uint F_00da42a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda42a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  char * pcVar6;
  uint local_8;
  
  pcVar6 = *(char * PTR32 *)this;
  cVar4 = *pcVar6;
  local_8 = 0;
  uVar2 = local_8;
  do {
    if (cVar4 == '\0') {
      return 0xffffffff;
    }
    iVar5 = 0;
    cVar4 = *param_1;
    while (cVar4 != '\0') {
      cVar3 = pcVar6[iVar5];
      if ((byte)(cVar3 + 0xbfU) < 0x1a) {
        cVar3 = cVar3 + ' ';
      }
      if ((byte)(cVar4 + 0xbfU) < 0x1a) {
        cVar4 = cVar4 + ' ';
      }
      if (cVar3 != cVar4) break;
      iVar1 = iVar5 + 1;
      iVar5 = iVar5 + 1;
      cVar4 = param_1[iVar1];
    }
    if (param_1[iVar5] == '\0') {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar6 = pcVar6 + 1;
    cVar4 = *pcVar6;
  } while( true );
}

/* ref: FUN_00da4330 */
uint F_00da4330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xda4330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 4) + -1;
  iVar3 = param_3;
  if (iVar1 < param_3) {
    iVar3 = iVar1;
  }
  uVar2 = iVar3 - 1;
  if (param_2 <= (int)uVar2) {
    do {
      if (*(char *)(*(int *)this + uVar2) == (char)param_1) {
        return uVar2;
      }
      uVar2 = uVar2 - 1;
    } while (param_2 <= (int)uVar2);
  }
  return 0xffffffff;
}

/* ref: FUN_00da4370 */
uint F_00da4370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xda4370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  for (uVar1 = F_00da0ee0(*(undefined4 *)this,param_1); uVar1 != 0;
      uVar1 = F_00da0ee0(uVar1 + 1,param_1)) {
    uVar2 = uVar1 - *(int *)this;
  }
  return uVar2;
}

/* ref: FUN_00da43b0 */
uint F_00da43b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda43b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da0d20(*(undefined4 *)this,param_1);
  return uVar1;
}

/* ref: FUN_00da43d0 */
uint F_00da43d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda43d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da0d70(*(undefined4 *)this,param_1);
  return uVar1;
}

/* ref: FUN_00da43f0 */
uint F_00da43f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda43f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da0d20(*(undefined4 *)this,param_2);
  *(bool *)param_1 = (int)uVar1 < 0;
  return param_1;
}

/* ref: FUN_00da4410 */
uint F_00da4410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda4410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da43b0(this,param_1);
  return (uint)(uVar1 == 0);
}

/* ref: FUN_00da4430 */
uint F_00da4430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda4430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  char * pcVar2;
  int iVar3;
  
  pcVar2 = *(char * PTR32 *)this;
  iVar3 = 0;
  cVar1 = *pcVar2;
  while ((cVar1 != '\0' && (*(char *)(iVar3 + param_1) != '\0'))) {
    if (pcVar2[iVar3] != *(char *)(iVar3 + param_1)) {
      return 0;
    }
    iVar3 = iVar3 + 1;
    cVar1 = pcVar2[iVar3];
  }
  return (uint)(*(char *)(iVar3 + param_1) == '\0');
}

/* ref: FUN_00da4470 */
uint F_00da4470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda4470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char cVar2;
  char * pcVar3;
  char * pcVar4;
  
  pcVar3 = *(char * PTR32 *)this;
  cVar2 = *pcVar3;
  pcVar4 = param_1;
  while( true ) {
    if ((cVar2 == '\0') || (cVar2 = *pcVar4, cVar2 == '\0')) {
      return 1;
    }
    cVar1 = *pcVar3;
    if ((byte)(cVar1 + 0xbfU) < 0x1a) {
      cVar1 = cVar1 + ' ';
    }
    if ((byte)(cVar2 + 0xbfU) < 0x1a) {
      cVar2 = cVar2 + ' ';
    }
    if (cVar1 != cVar2) break;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
    cVar2 = *pcVar3;
  }
  return 0;
}

/* ref: FUN_00da44d0 */
uint F_00da44d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda44d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00da0e60(param_1);
  if (*(int *)((int)this + 4) + -1 < (int)uVar1) {
    return 0;
  }
  iVar2 = 0;
  if (0 < (int)uVar1) {
    do {
      if (*((char *)GEN_TOP((*(int *)this + (*(int *)((int)this + 4) - uVar1) + -1 + iVar2))) !=
          *(char *)(iVar2 + param_1)) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)uVar1);
  }
  return 1;
}

/* ref: FUN_00da4520 */
uint F_00da4520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda4520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  
  uVar2 = F_00da0e60(param_1);
  if (*(int *)((int)this + 4) + -1 < (int)uVar2) {
    return 0;
  }
  iVar4 = 0;
  if (0 < (int)uVar2) {
    do {
      cVar1 = *((char *)GEN_TOP((*(int *)this + (*(int *)((int)this + 4) - uVar2) + -1 + iVar4)));
      if ((byte)(cVar1 + 0xbfU) < 0x1a) {
        cVar1 = cVar1 + ' ';
      }
      cVar3 = *(char *)(iVar4 + param_1);
      if ((byte)(cVar3 + 0xbfU) < 0x1a) {
        cVar3 = cVar3 + ' ';
      }
      if (cVar1 != cVar3) {
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar2);
  }
  return 1;
}

/* ref: FUN_00da45a0 */
uint F_00da45a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xda45a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  if (*(int *)((int)this + 4) == 1 || *(int *)((int)this + 4) + -1 < 0) {
    return 0;
  }
  do {
    if (*(char *)(*(int *)this + iVar1) == (char)param_1) {
      *(undefined1 *)(*(int *)this + iVar1) = (undefined1)param_2;
      uVar2 = 1;
      if (param_3 == 0) {
        return 1;
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < *(int *)((int)this + 4) + -1);
  return uVar2;
}

/* ref: FUN_00da45f0 */
unsigned int F_00da45f0(unsigned int gen_a0)
{
  GEN_ENTER(0xda45f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)((int)this + 4) != 1 && -1 < *(int *)((int)this + 4) + -1) {
    do {
      cVar1 = *(char *)(*(int *)this + iVar2);
      if ((byte)(cVar1 + 0xbfU) < 0x1a) {
        cVar1 = cVar1 + ' ';
      }
      *(char *)(*(int *)this + iVar2) = cVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 4) + -1);
  }
  return 0;
}

/* ref: FUN_00da4630 */
unsigned int F_00da4630(unsigned int gen_a0)
{
  GEN_ENTER(0xda4630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)((int)this + 4) != 1 && -1 < *(int *)((int)this + 4) + -1) {
    do {
      cVar1 = *(char *)(*(int *)this + iVar2);
      if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        cVar1 = cVar1 + -0x20;
      }
      *(char *)(*(int *)this + iVar2) = cVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 4) + -1);
  }
  return 0;
}

/* ref: FUN_00da4670 */
unsigned int F_00da4670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda4670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined1 * puVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 4) + -1;
  iVar3 = param_1;
  if (iVar1 <= param_1) {
    iVar3 = iVar1;
  }
  if (0 < iVar3) {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) - iVar3;
    puVar2 = *(undefined1 * PTR32 *)this;
    iVar1 = *(int *)((int)this + 4);
    if (0 < iVar1) {
      do {
        *puVar2 = puVar2[iVar3];
        puVar2 = puVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00da46f0 */
uint F_00da46f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda46f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 == 0) {
    if ((*(uint *)((int)this + 8) & 0x3fffffff) == 0) {
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,1,1);
    }
    *(undefined4 *)((int)this + 4) = 1;
    **(undefined1 * PTR32 *)this = 0;
    return (uint)this;
  }
  uVar2 = F_00da0e60(param_1);
  iVar1 = uVar2 + 1;
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar4,1);
  }
  *(int *)((int)this + 4) = iVar1;
  *(undefined1 *)(uVar2 + *(int *)this) = 0;
  F_00da1010(*(undefined4 *)this,param_1,uVar2);
  return (uint)this;
}

/* ref: FUN_00da47a0 */
uint F_00da47a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda47a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(undefined4 *)this;
  if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),param_2,4);
  }
  *(undefined4 *)(*param_2 + param_2[1] * 4) = uVar1;
  param_2[1] = param_2[1] + 1;
  uVar2 = param_2[1];
  for (uVar4 = F_00da4230(this,param_1,0,0x7fffffff); -1 < (int)uVar4;
      uVar4 = F_00da4230(this,param_1,uVar4 + 1,0x7fffffff)) {
    *(undefined1 *)(uVar4 + *(int *)this) = 0;
    iVar3 = *(int *)this;
    if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516a4),param_2,4);
    }
    *(uint *)(*param_2 + param_2[1] * 4) = iVar3 + uVar4 + 1;
    param_2[1] = param_2[1] + 1;
    uVar2 = param_2[1];
  }
  return uVar2;
}

/* ref: FUN_00da4850 */
uint F_00da4850(unsigned int gen_a0)
{
  GEN_ENTER(0xda4850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * puVar1;
  
  if ((*(uint *)((int)this + 8) & 0x3fffffff) == 0) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,1,1);
  }
  puVar1 = *(undefined1 * PTR32 *)this;
  *(undefined4 *)((int)this + 4) = 1;
  *puVar1 = 0;
  return (uint)puVar1;
}

/* ref: FUN_00da4890 */
uint F_00da4890(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xda4890u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  
  while( true ) {
    while( true ) {
      uVar5 = param_1[2] & 0x3fffffff;
      uVar3 = F_00da0cd0(*param_1,uVar5,param_2,((undefined *)&gen_args[2]));
      if (-1 < (int)uVar3) break;
      uVar5 = uVar5 * 2;
      if (uVar5 < 0x100) {
        uVar5 = 0xff;
      }
      iVar1 = uVar5 + 1;
      if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
        iVar4 = (param_1[2] & 0x3fffffffU) * 2;
        if (iVar4 <= iVar1) {
          iVar4 = iVar1;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516a4),param_1,iVar4,1);
      }
      param_1[1] = iVar1;
      *(undefined1 *)(uVar5 + *param_1) = 0;
    }
    if ((int)uVar3 < (int)uVar5) break;
    iVar1 = uVar3 + 1;
    if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
      iVar4 = (param_1[2] & 0x3fffffffU) * 2;
      if (iVar4 <= iVar1) {
        iVar4 = iVar1;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),param_1,iVar4,1);
    }
    param_1[1] = iVar1;
    *(undefined1 *)(uVar3 + *param_1) = 0;
  }
  iVar1 = uVar3 + 1;
  uVar5 = param_1[2] & 0x3fffffff;
  if ((int)uVar5 < iVar1) {
    iVar4 = uVar5 * 2;
    if ((int)(uVar5 * 2) <= iVar1) {
      iVar4 = iVar1;
    }
    bVar2 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),param_1,iVar4,1);
    uVar5 = CONCAT31(extraout_var,bVar2);
  }
  param_1[1] = iVar1;
  *(undefined1 *)(uVar3 + *param_1) = 0;
  return uVar5;
}

/* ref: FUN_00da4980 */
unsigned int F_00da4980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xda4980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = param_1;
  ((int *)(gen_frame + 0x8))[2] = param_3;
  ((int *)(gen_frame + 0x8))[1] = param_2;
  ((int *)(gen_frame + 0x8))[4] = param_5;
  iVar7 = 0;
  iVar5 = *(int *)((int)this + 4) + -1;
  ((int *)(gen_frame + 0x8))[3] = param_4;
  iVar6 = 0;
  (*(undefined8 *)(gen_frame + 0x24)) = 0;
  (*(undefined8 *)(gen_frame + 0x2c)) = 0;
  (*(undefined8 *)(gen_frame + 0x34)) = 0;
  ((int *)(gen_frame + 0x8))[0] = param_1;
  (*(undefined4 *)(gen_frame + 0x1c)) = param_6;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  iVar1 = iVar5;
  iVar3 = param_1;
  while (iVar3 != 0) {
    uVar2 = F_00da0e60(iVar3);
    iVar1 = iVar1 + uVar2;
    iVar6 = iVar6 + 1;
    *(uint *)((int)&(*(undefined8 *)(gen_frame + 0x24)) + iVar7) = uVar2;
    iVar7 = iVar6 * 4;
    iVar3 = ((int *)(gen_frame + 0x8))[(int)(iVar6)];
  }
  iVar7 = iVar1 + 1;
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar7) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar7) {
      iVar3 = iVar7;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,1);
  }
  *(int *)((int)this + 4) = iVar7;
  *(undefined1 *)(iVar1 + *(int *)this) = 0;
  param_1 = 0;
  if (iVar4 != 0) {
    iVar7 = 0;
    do {
      iVar1 = *(int *)((int)&(*(undefined8 *)(gen_frame + 0x24)) + iVar7);
      F_00da1010(*(int *)this + iVar5,iVar4,iVar1);
      param_1 = param_1 + 1;
      iVar7 = param_1 * 4;
      iVar4 = ((int *)(gen_frame + 0x8))[(int)(param_1)];
      iVar5 = iVar5 + iVar1;
    } while (iVar4 != 0);
  }
  return 0;
}

/* ref: FUN_00da4a90 */
unsigned int F_00da4a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xda4a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  F_00da4850(this);
  F_00da4980(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return 0;
}

/* ref: FUN_00da4ac0 */
unsigned int F_00da4ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda4ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (0 < param_1) {
    uVar2 = (*(int *)((int)this + 4) - param_1) - 1;
    uVar2 = ((int)uVar2 < 0) - 1 & uVar2;
    iVar1 = uVar2 + 1;
    uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
    if ((int)uVar3 < iVar1) {
      iVar4 = uVar3 * 2;
      if (iVar4 <= iVar1) {
        iVar4 = iVar1;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar4,1);
    }
    *(int *)((int)this + 4) = iVar1;
    *(undefined1 *)(uVar2 + *(int *)this) = 0;
  }
  return 0;
}

/* ref: FUN_00da4b20 */
uint F_00da4b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda4b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined3 extraout_var = 0;
  
  if (param_1 != 0) {
    F_00da38f0(*(int *)this,param_1 + *(int *)this,param_2);
  }
  iVar1 = param_2 + 1;
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if ((int)(uVar3 * 2) <= iVar1) {
      iVar4 = iVar1;
    }
    bVar2 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar4,1);
    uVar3 = CONCAT31(extraout_var,bVar2);
  }
  *(int *)((int)this + 4) = iVar1;
  *(undefined1 *)(param_2 + *(int *)this) = 0;
  return uVar3;
}

/* ref: FUN_00da4b80 */
uint F_00da4b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda4b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = param_2;
  if ((int)param_2 < 0) {
    uVar2 = F_00da0e60(param_1);
  }
  iVar1 = uVar2 + 1;
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar4,1);
  }
  *(int *)((int)this + 4) = iVar1;
  *(undefined1 *)(uVar2 + *(int *)this) = 0;
  uVar2 = F_00da3710(*(undefined4 *)this,param_1,uVar2);
  return uVar2;
}

/* ref: FUN_00da4bf0 */
uint F_00da4bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda4bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if ((int)param_2 < 0) {
      param_2 = F_00da0e60(param_1);
    }
    iVar4 = *(int *)((int)this + 4) + -1;
    iVar1 = *(int *)((int)this + 4) + param_2;
    uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
    if ((int)uVar2 < iVar1) {
      iVar3 = uVar2 * 2;
      if (iVar3 <= iVar1) {
        iVar3 = iVar1;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,1);
    }
    *(int *)((int)this + 4) = iVar1;
    *(undefined1 *)(iVar4 + param_2 + *(int *)this) = 0;
    uVar2 = F_00da3710(*(int *)this + iVar4,param_1,param_2);
  }
  return uVar2;
}

/* ref: FUN_00da4cf0 */
uint F_00da4cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda4cf0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  undefined1 * puVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) & 0x3fffffff;
  if ((int)uVar2 < (*(int * PTR32 *)&gen_args[1])[1]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),uVar2);
    }
    (*(int * PTR32 *)&gen_args[1]) = (int *)piVar1[1];
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int * PTR32 *)&gen_args[1]));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
    *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (*(int * PTR32 *)&gen_args[1]);
  }
  iVar5 = piVar1[1];
  puVar3 = *(undefined1 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar5;
  if (0 < iVar5) {
    iVar4 = *piVar1 - (int)puVar3;
    do {
      *puVar3 = puVar3[iVar4];
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00da4d70 */
uint F_00da4d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda4d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = F_00da0e60(param_1);
    F_00d9eb80(this,&REFG(undefined * PTR32, 0x13516a4),*(int *)((int)this + 4) + -1,param_1,uVar1);
  }
  return (uint)this;
}

/* ref: FUN_00da4db0 */
unsigned int F_00da4db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xda4db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = param_3;
    if ((int)param_3 < 0) {
      uVar1 = F_00da0e60(param_2);
    }
    F_00d9eb80(this,&REFG(undefined * PTR32, 0x13516a4),param_1,param_2,uVar1);
  }
  return 0;
}

/* ref: FUN_00da4df0 */
uint F_00da4df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda4df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  *(undefined1 * PTR32 *)this = (undefined1 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000080;
  if (param_1 != 0) {
    uVar2 = F_00da0e60(param_1);
    iVar1 = uVar2 + 1;
    uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
    if ((int)uVar3 < iVar1) {
      iVar4 = uVar3 * 2;
      if (iVar4 <= iVar1) {
        iVar4 = iVar1;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar4,1);
    }
    *(int *)((int)this + 4) = iVar1;
    *(undefined1 *)(uVar2 + *(int *)this) = 0;
    F_00da1010(*(undefined4 *)this,param_1,uVar2);
    return (uint)this;
  }
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined1 *)((int)this + 0xc) = 0;
  return (uint)this;
}

/* ref: FUN_00da4e80 */
uint F_00da4e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda4e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  *(int *)this = (int)this + 0xc;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000080;
  F_00da46f0(this,*param_1 & 0xfffffffe);
  return (uint)this;
}

/* ref: FUN_00da4eb0 */
uint F_00da4eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xda4eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  *(undefined1 * PTR32 *)this = (undefined1 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000080;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  F_00da4980(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return (uint)this;
}

/* ref: FUN_00da4f00 */
uint F_00da4f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda4f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 + 1;
  *(int *)this = (int)this + 0xc;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000080;
  if (0x80 < iVar1) {
    iVar2 = 0x100;
    if (0xff < iVar1) {
      iVar2 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar2,1);
  }
  *(int *)((int)this + 4) = iVar1;
  *(undefined1 *)(param_2 + *(int *)this) = 0;
  F_00da1010(*(undefined4 *)this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00da4f70 */
uint F_00da4f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda4f70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  undefined1 * puVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  *(int *)(*(undefined * PTR32 *)&gen_args[0]) = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0x80000080;
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[1])[1]));
  if (0x80 < (int)(*(int * PTR32 *)&gen_args[1])) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int * PTR32 *)&gen_args[1]));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
    *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (*(int * PTR32 *)&gen_args[1]);
  }
  iVar5 = piVar1[1];
  puVar3 = *(undefined1 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar5;
  if (0 < iVar5) {
    iVar4 = *piVar1 - (int)puVar3;
    do {
      *puVar3 = puVar3[iVar4];
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00da4fe0 */
unsigned int F_00da4fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda4fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00da4db0(this,0,param_1,param_2);
  return 0;
}

/* ref: FUN_00da5000 */
uint F_00da5000(unsigned int gen_a0)
{
  GEN_ENTER(0xda5000u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  F_00da4f70(&(*(undefined4 *)(gen_frame + 0x0)),this);
  F_00da45a0(&(*(undefined4 *)(gen_frame + 0x0)),0x5c,0x2f,1);
  (*(int *)(gen_frame + 0x90)) = 0;
  (*(int *)(gen_frame + 0x94)) = 0;
  (*(uint *)(gen_frame + 0x98)) = 0x80000000;
  F_00da47a0(((undefined *)(uint)(&(*(undefined4 *)(gen_frame + 0x0)))),0x2f,&(*(int *)(gen_frame + 0x90)));
  iVar3 = 0;
  (*(int *)(gen_frame + 0x8c)) = 0;
  if (0 < (*(int *)(gen_frame + 0x94))) {
    do {
      uVar2 = F_00da0d20(&REFG(undefined, 0x113be34),*(undefined4 *)((*(int *)(gen_frame + 0x90)) + iVar3 * 4));
      if (uVar2 != 0) {
        (*(int *)(gen_frame + 0x8c)) = iVar3;
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (*(int *)(gen_frame + 0x94)));
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xa0)) = (undefined4 *)0x0;
  (*(uint *)(gen_frame + 0xa4)) = 0;
  (*(int *)(gen_frame + 0x9c)) = 0;
  (*(uint *)(gen_frame + 0xa8)) = 0x80000000;
  iVar3 = (*(int *)(gen_frame + 0x94));
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    uVar2 = F_00da0d20(&REFG(undefined, 0x113be34),*(undefined4 *)((*(int *)(gen_frame + 0x90)) + iVar3 * 4));
    if (uVar2 == 0) {
      (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 1;
    }
    else if ((*(int *)(gen_frame + 0x9c)) < 1) {
      puVar1 = (undefined4 *)((*(int *)(gen_frame + 0x90)) + iVar3 * 4);
      if ((*(uint *)(gen_frame + 0xa4)) == ((*(uint *)(gen_frame + 0xa8)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516a4),&(*(undefined4 * PTR32 *)(gen_frame + 0xa0)),4);
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0xa0))[(*(uint *)(gen_frame + 0xa4))] = *puVar1;
      (*(uint *)(gen_frame + 0xa4)) = (*(uint *)(gen_frame + 0xa4)) + 1;
    }
    else {
      (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + -1;
    }
  }
  F_00da4850(this);
  uVar2 = (*(uint *)(gen_frame + 0xa4));
  if (0 < (int)(*(uint *)(gen_frame + 0xa4))) {
    while (uVar2 = uVar2 - 1, 0 < (int)uVar2) {
      F_00da4980(this,(*(undefined4 * PTR32 *)(gen_frame + 0xa0))[uVar2],&REFG(undefined, 0x1080808),0,0,0,0);
    }
    F_00da4bf0(this,*(*(undefined4 * PTR32 *)(gen_frame + 0xa0)),0xffffffff);
    iVar3 = (*(int *)(gen_frame + 0x8c));
    if (0 < (*(int *)(gen_frame + 0x8c))) {
      do {
        F_00da4fe0(this,&REFG(undefined, 0x113be30),0xffffffff);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  (*(uint *)(gen_frame + 0xa4)) = 0;
  if (((*(uint *)(gen_frame + 0xa8)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(undefined4 * PTR32 *)(gen_frame + 0xa0)),(*(uint *)(gen_frame + 0xa8)) * 4);
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xa0)) = (undefined4 *)0x0;
  (*(uint *)(gen_frame + 0xa8)) = 0x80000000;
  (*(int *)(gen_frame + 0x94)) = 0;
  if (((*(uint *)(gen_frame + 0x98)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x90)),(*(uint *)(gen_frame + 0x98)) * 4);
  }
  (*(int *)(gen_frame + 0x90)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x98)) = 0x80000000;
  uVar2 = (*(uint *)(gen_frame + 0x8));
  if (((*(uint *)(gen_frame + 0x8)) & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10)))) (&REFG(undefined * PTR32, 0x13516a4),(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
  }
  return uVar2;
}

/* ref: FUN_00da51f0 */
uint F_00da51f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xda51f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = F_00da0e60(param_1);
  (*(uint *)(gen_frame + 0x9c)) = uVar1;
  uVar2 = F_00da0e60(param_2);
  (*(uint *)(gen_frame + 0xa0)) = uVar2;
  (*(uint *)(gen_frame + 0xa8)) = 0;
  if ((int)uVar1 < (int)uVar2) {
    F_00da4f70(&(*(int *)(gen_frame + 0xc)),this);
    F_00da4850(this);
    iVar5 = 0;
    uVar1 = F_00da4270(&(*(int *)(gen_frame + 0xc)),param_1,0,0x7fffffff);
    if (-1 < (int)uVar1) {
      (*(uint *)(gen_frame + 0xa8)) = 1;
      do {
        F_00da4bf0(this,(*(int *)(gen_frame + 0xc)) + iVar5,uVar1 - iVar5);
        F_00da4bf0(this,param_2,(*(uint *)(gen_frame + 0xa0)));
        iVar5 = uVar1 + (*(uint *)(gen_frame + 0x9c));
        if (param_3 == 0) break;
        uVar1 = F_00da4270(&(*(int *)(gen_frame + 0xc)),param_1,iVar5,0x7fffffff);
      } while (-1 < (int)uVar1);
    }
    F_00da4bf0(this,(*(int *)(gen_frame + 0xc)) + iVar5,((*(int *)(gen_frame + 0x10)) - iVar5) + -1);
    (*(int *)(gen_frame + 0x10)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) & 0x3fffffff);
      return (*(uint *)(gen_frame + 0xa8));
    }
  }
  else {
    iVar5 = *(int *)this;
    (*(int *)(gen_frame + 0xa4)) = 0;
    iVar6 = 0;
    (*(uint *)(gen_frame + 0x98)) = F_00da4270(this,param_1,0,0x7fffffff);
    while (iVar4 = (*(int *)(gen_frame + 0xa4)), (*(uint *)(gen_frame + 0x98)) != 0xffffffff) {
      for (; iVar4 < (int)(*(uint *)(gen_frame + 0x98)); iVar4 = iVar4 + 1) {
        *(undefined1 *)(iVar6 + iVar5) = *(undefined1 *)(iVar4 + iVar5);
        iVar6 = iVar6 + 1;
      }
      iVar3 = 0;
      if (0 < (int)(*(uint *)(gen_frame + 0xa0))) {
        do {
          *(undefined1 *)(iVar6 + iVar5) = *(undefined1 *)(iVar3 + param_2);
          iVar3 = iVar3 + 1;
          iVar6 = iVar6 + 1;
        } while (iVar3 < (int)(*(uint *)(gen_frame + 0xa0)));
      }
      (*(int *)(gen_frame + 0xa4)) = iVar4 + (*(uint *)(gen_frame + 0x9c));
      if (param_3 == 0) break;
      (*(uint *)(gen_frame + 0x98)) = F_00da4270(this,param_1,(*(uint *)(gen_frame + 0x98)) + (*(uint *)(gen_frame + 0x9c)),0x7fffffff);
    }
    iVar4 = (*(int *)(gen_frame + 0xa4));
    if ((*(int *)(gen_frame + 0xa4)) < *(int *)((int)this + 4) + -1) {
      do {
        *(undefined1 *)(iVar6 + iVar5) = *(undefined1 *)(iVar4 + iVar5);
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 1;
      } while (iVar4 < *(int *)((int)this + 4) + -1);
    }
    *(undefined1 *)(iVar6 + iVar5) = 0;
    iVar5 = iVar6 + 1;
    uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
    if ((int)uVar1 < iVar5) {
      iVar4 = uVar1 * 2;
      if (iVar4 <= iVar5) {
        iVar4 = iVar5;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar4,1);
    }
    iVar4 = *(int *)this;
    *(int *)((int)this + 4) = iVar5;
    *(undefined1 *)(iVar6 + iVar4) = 0;
  }
  return (*(uint *)(gen_frame + 0xa8));
}

/* ref: FUN_00da53f0 */
uint F_00da53f0(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xda53f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x8)) = 0x80000080;
  (*(int *)(gen_frame + 0x4)) = 1;
  ((undefined1 *)(gen_frame + 0xc))[0] = 0;
  while( true ) {
    while( true ) {
      uVar2 = (*(uint *)(gen_frame + 0x8)) & 0x3fffffff;
      uVar3 = F_00da0cd0((*(undefined1 * PTR32 *)(gen_frame + 0x0)),uVar2,param_2,((undefined *)&gen_args[2]));
      if (-1 < (int)uVar3) break;
      uVar2 = uVar2 * 2;
      if (uVar2 < 0x100) {
        uVar2 = 0xff;
      }
      iVar1 = uVar2 + 1;
      if ((int)((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) < iVar1) {
        iVar4 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
        if (iVar4 <= iVar1) {
          iVar4 = iVar1;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),iVar4,1);
      }
      (*(int *)(gen_frame + 0x4)) = iVar1;
      (*(undefined1 * PTR32 *)(gen_frame + 0x0))[uVar2] = 0;
    }
    if ((int)uVar3 < (int)uVar2) break;
    iVar1 = uVar3 + 1;
    if ((int)((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) < iVar1) {
      iVar4 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
      if (iVar4 <= iVar1) {
        iVar4 = iVar1;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),iVar4,1);
    }
    (*(int *)(gen_frame + 0x4)) = iVar1;
    (*(undefined1 * PTR32 *)(gen_frame + 0x0))[uVar3] = 0;
  }
  iVar1 = uVar3 + 1;
  if ((int)((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) < iVar1) {
    iVar4 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),iVar4,1);
  }
  (*(int *)(gen_frame + 0x4)) = iVar1;
  (*(undefined1 * PTR32 *)(gen_frame + 0x0))[uVar3] = 0;
  F_00da4bf0(param_1,(*(undefined1 * PTR32 *)(gen_frame + 0x0)),0xffffffff);
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar2 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
  }
  return uVar2;
}

/* ref: FUN_00da55b0 */
uint F_00da55b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xda55b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00da55d0 */
uint F_00da55d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda55d0u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00da5610 */
uint F_00da5610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda5610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00da5650 */
uint F_00da5650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda5650u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  undefined1 * puVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) & 0x3fffffff;
  if ((int)uVar2 < (*(int * PTR32 *)&gen_args[1])[1]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),uVar2);
    }
    (*(int * PTR32 *)&gen_args[1]) = (int *)piVar1[1];
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int * PTR32 *)&gen_args[1]));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
    *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (*(int * PTR32 *)&gen_args[1]);
  }
  iVar5 = piVar1[1];
  puVar3 = *(undefined1 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar5;
  if (0 < iVar5) {
    iVar4 = *piVar1 - (int)puVar3;
    do {
      *puVar3 = puVar3[iVar4];
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00da56d0 */
uint F_00da56d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda56d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = param_1 + 1;
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,1);
  }
  uVar2 = *(uint *)this;
  *(int *)((int)this + 4) = iVar1;
  *(undefined1 *)(param_1 + uVar2) = 0;
  return uVar2;
}

/* ref: FUN_00da5720 */
unsigned int F_00da5720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xda5720u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00d9eb80(this,&REFG(undefined * PTR32, 0x13516a4),param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_00da5740 */
uint F_00da5740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda5740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(int *)this = (int)this + 0xc;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0x80000080;
  return (uint)this;
}

/* ref: FUN_00da5760 */
uint F_00da5760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda5760u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  undefined1 * puVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) & 0x3fffffff;
  if ((int)uVar2 < (*(int * PTR32 *)&gen_args[1])[1]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),uVar2);
    }
    (*(int * PTR32 *)&gen_args[1]) = (int *)piVar1[1];
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int * PTR32 *)&gen_args[1]));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
    *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (*(int * PTR32 *)&gen_args[1]);
  }
  iVar5 = piVar1[1];
  puVar3 = *(undefined1 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar5;
  if (0 < iVar5) {
    iVar4 = *piVar1 - (int)puVar3;
    do {
      *puVar3 = puVar3[iVar4];
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00da57e0 */
uint F_00da57e0(unsigned int gen_a0)
{
  GEN_ENTER(0xda57e0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00da5820 */
uint F_00da5820(unsigned int gen_a0)
{
  GEN_ENTER(0xda5820u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00da5890 */
uint F_00da5890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda5890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  while ((*(int *)this == 0 || (uVar1 = F_00da0d20(param_1,*(int *)this), uVar1 != 0))) {
    this = *(undefined * PTR32 *)((int)this + 8);
    if (this == (int *)0x0) {
      return 0;
    }
  }
  return (uint)this;
}

/* ref: FUN_00da58d0 */
uint F_00da58d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda58d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16));
  ((byte *)(gen_frame + 0x8))[0x10] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16)) = uVar3 & 0xffffff00;
  F_00da3de0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16)));
  for (puVar1 = param_2; puVar2 = param_1, puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    F_00da3a20(((byte *)(gen_frame + 0x8)),*puVar1,puVar1);
  }
  for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[2]) {
    uVar4 = F_00da4190(((byte *)(gen_frame + 0x8)),*puVar2,0);
    if (uVar4 != 0) {
      *(undefined4 *)puVar2[3] = **(undefined4 * PTR32 *)(uVar4 + 0xc);
      if (*(int *)puVar2[3] != 0) {
        F_00d91830(*(int *)puVar2[3]);
      }
    }
  }
  uVar4 = F_00da3e20(((byte *)(gen_frame + 0x8)));
  return uVar4;
}

/* ref: FUN_00da5950 */
uint F_00da5950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda5950u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16));
  ((byte *)(gen_frame + 0x8))[0x10] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16)) = uVar3 & 0xffffff00;
  F_00da3de0(((byte *)(gen_frame + 0x8)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 16)));
  for (puVar1 = param_2; puVar2 = param_1, puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    F_00da3a20(((byte *)(gen_frame + 0x8)),*puVar1,puVar1);
  }
  for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[2]) {
    uVar4 = F_00da4190(((byte *)(gen_frame + 0x8)),*puVar2,0);
    if (uVar4 != 0) {
      if (*(int *)puVar2[3] != 0) {
        F_00d91840(*(undefined * PTR32 *)puVar2[3]);
      }
      *(undefined4 *)puVar2[3] = 0;
    }
  }
  uVar4 = F_00da3e20(((byte *)(gen_frame + 0x8)));
  return uVar4;
}

/* ref: FUN_00da59d0 */
uint F_00da59d0(unsigned int gen_a0)
{
  GEN_ENTER(0xda59d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this,local_8);
  return (uint)this;
}

/* ref: FUN_00da59f0 */
uint F_00da59f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda59f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da3a20(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00da5a00 */
uint F_00da5a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda5a00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da4190(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00da5a10 */
uint F_00da5a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda5a10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00da5a30 */
uint F_00da5a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda5a30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc) = param_2;
  return param_2;
}

/* ref: FUN_00da5a60 */
uint F_00da5a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda5a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION param_1 = (LPCRITICAL_SECTION)gen_a1;
  *(LPCRITICAL_SECTION *)this = param_1;
  gen_imp_EnterCriticalSection(param_1);
  return (uint)this;
}

/* ref: FUN_00da5a90 */
uint F_00da5a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda5a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00db3820(this);
  return (uint)this;
}

/* ref: FUN_00da5aa0 */
unsigned int F_00da5aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda5aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = REFG(undefined4, 0x15dff8c);
  if (((*(ushort *)((int)this + 8) & 0x8000) == 0) && (REFG(undefined4, 0x15dff8c) != (LPCRITICAL_SECTION)0x0)) {
    gen_imp_EnterCriticalSection(REFG(undefined4, 0x15dff8c));
    iVar1 = *(int *)this;
    if ((iVar1 == -0x3f) || ((iVar1 == -0x1f || (iVar1 == -0xf)))) {
      *(uint *)this = (-(uint)(param_1 != 1) & 0xffffffe0) - 0x1f;
    }
    *(short *)((int)this + 10) = *(short *)((int)this + 10) << 1;
    *(short *)((int)this + 8) = *(short *)((int)this + 8) + 1;
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: FUN_00da5b00 */
unsigned int F_00da5b00(unsigned int gen_a0)
{
  GEN_ENTER(0xda5b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = REFG(undefined4, 0x15dff8c);
  if (((*(ushort *)((int)this + 8) & 0x8000) == 0) && (REFG(undefined4, 0x15dff8c) != (LPCRITICAL_SECTION)0x0)) {
    gen_imp_EnterCriticalSection(REFG(undefined4, 0x15dff8c));
    uVar1 = F_00db61e0();
    *(short *)((int)this + 8) = *(short *)((int)this + 8) + 1;
    *(ushort *)((int)this + 10) = *(short *)((int)this + 10) * 2 | 1;
    if (*(int *)this == -0xf) {
      *(uint *)this = uVar1;
    }
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: FUN_00da5ba0 */
unsigned int F_00da5ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xda5ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = REFG(undefined4, 0x15dff8c);
  if (((*(ushort *)((int)this + 8) & 0x8000) == 0) && (REFG(undefined4, 0x15dff8c) != (LPCRITICAL_SECTION)0x0)) {
    gen_imp_EnterCriticalSection(REFG(undefined4, 0x15dff8c));
    *(ushort *)((int)this + 10) = *(ushort *)((int)this + 10) >> 1;
    *(short *)((int)this + 8) = *(short *)((int)this + 8) + -1;
    if (*(short *)((int)this + 8) == 0) {
      *(undefined4 *)this = 0xfffffff1;
    }
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: FUN_00da5bf0 */
unsigned int F_00da5bf0(unsigned int gen_a0)
{
  GEN_ENTER(0xda5bf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = REFG(undefined4, 0x15dff8c);
  if (((*(ushort *)((int)this + 8) & 0x8000) == 0) && (REFG(undefined4, 0x15dff8c) != (LPCRITICAL_SECTION)0x0)) {
    gen_imp_EnterCriticalSection(REFG(undefined4, 0x15dff8c));
    *(ushort *)((int)this + 10) = *(ushort *)((int)this + 10) >> 1;
    *(short *)((int)this + 8) = *(short *)((int)this + 8) + -1;
    if (*(short *)((int)this + 8) == 0) {
      *(undefined4 *)this = 0xfffffff1;
    }
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: FUN_00da5c70 */
uint F_00da5c70(unsigned int gen_a0)
{
  GEN_ENTER(0xda5c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (((*(ushort *)((int)this + 8) & 0x8000) != 0) || (REFG(int, 0x15dff8c) == 0)) {
    *(undefined4 *)this = 0xfffffff1;
    *(undefined2 *)((int)this + 8) = 0;
  }
  return 0x8000;
}

/* ref: FUN_00da5cd0 */
uint F_00da5cd0(unsigned int gen_a0)
{
  GEN_ENTER(0xda5cd0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  undefined * pvVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                             (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x18)));
  if (pvVar2 == (undefined *)0x0) {
    REFG(undefined4, 0x15dff8c) = 0;
  }
  else {
    REFG(undefined4, 0x15dff8c) = F_00da5ee0(pvVar2,1000);
  }
  pvVar2 = REFG(void * PTR32, 0x15dffb0);
  if ((REFG(void * PTR32, 0x15dffb0) == (undefined *)0x0) &&
     (pvVar2 = (undefined *)F_00db36d0(), REFG(void * PTR32, 0x15dffb0) != (undefined *)0x0)) {
    F_00d91840(REFG(void * PTR32, 0x15dffb0));
  }
  REFG(void * PTR32, 0x15dffb0) = pvVar2;
  *(undefined * PTR32 *)&REFG(undefined, 0x15dff84) = REFG(void * PTR32, 0x15dffb0);
  *(undefined4 *)&REFG(undefined, 0x15dff90) = 0;
  *(undefined4 *)&REFG(undefined, 0x15dff94) = 0;
  *(undefined4 *)&REFG(undefined, 0x15dff98) = 0x80000000;
  *(undefined4 *)&REFG(undefined, 0x15dffa0) = 0xffffffff;
  *(undefined4 *)&REFG(undefined, 0x15dffa4) = 0xffffffff;
  *(undefined * PTR32 *)&REFG(undefined, 0x15dff88) = &REFG(undefined, 0x15dff90);
  *(undefined4 *)&REFG(undefined, 0x15dff9c) = param_1;
  return 0xffffffff;
}

/* ref: FUN_00da5df0 */
uint F_00da5df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda5df0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  
  F_00da4df0(((byte *)(gen_frame + 0x0)),param_1);
  uVar1 = F_00da4270(((byte *)(gen_frame + 0x0)),"Cannot find symbol",0,0x7fffffff);
  if (uVar1 == 0xffffffff) {
    uVar1 = F_00da4370(((byte *)(gen_frame + 0x0)),&REFG(undefined, 0x1118c14),0,0x7fffffff);
    if (uVar1 != 0xffffffff) {
      F_00da4670(((byte *)(gen_frame + 0x0)),uVar1 + 1);
    }
    F_00da4d70(param_2,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)));
  }
  ((byte *)(gen_frame + 0x0))[4] = 0;
  ((byte *)(gen_frame + 0x0))[5] = 0;
  ((byte *)(gen_frame + 0x0))[6] = 0;
  ((byte *)(gen_frame + 0x0))[7] = 0;
  uVar1 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
  if (-1 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) & 0x3fffffff);
  }
  return uVar1;
}

/* ref: FUN_00da5e90 */
unsigned int F_00da5e90(unsigned int gen_a0)
{
  GEN_ENTER(0xda5e90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if (REFG(void * PTR32, 0x15dffb0) != (undefined *)0x0) {
    F_00d91840(REFG(void * PTR32, 0x15dffb0));
    REFG(void * PTR32, 0x15dffb0) = (undefined *)param_1;
    return 0;
  }
  REFG(void * PTR32, 0x15dffb0) = (undefined *)param_1;
  return 0;
}

/* ref: FUN_00da5ec0 */
uint F_00da5ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xda5ec0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00da5ee0 */
uint F_00da5ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda5ee0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  DWORD dwSpinCount;
  
  dwSpinCount = (*(DWORD *)&gen_args[1]);
  if ((*(DWORD *)&gen_args[1]) == 0) {
    F_00d9baa0(&(*(DWORD *)&gen_args[1]));
    dwSpinCount = (*(DWORD *)&gen_args[1]) * 1000;
  }
  gen_imp_InitializeCriticalSectionAndSpinCount((*(undefined * PTR32 *)&gen_args[0]),dwSpinCount);
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00da5f30 */
uint F_00da5f30(unsigned int gen_a0)
{
  GEN_ENTER(0xda5f30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)(&REFG(undefined, 0x13523c8) + param_1 * 0xc);
}

/* ref: FUN_00da5f50 */
uint F_00da5f50(unsigned int gen_a0)
{
  GEN_ENTER(0xda5f50u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  if ((-1 < in_eax) &&
     ((((in_eax < 0x14 || (in_eax == 0x1c)) || (in_eax == 0x1e)) ||
      (((in_eax == 0x1d || (in_eax == 0x20)) || (in_eax == 0x21)))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00da5f80 */
uint F_00da5f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda5f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = F_00da46f0(param_1,(&REFG(undefined * PTR32, 0x13523cc))[(int)(param_3 * 3)]);
    return uVar1;
  }
  uVar1 = F_00da4890(param_1,"%s[%i]",(&REFG(undefined * PTR32, 0x13523cc))[(int)(param_3 * 3)],param_2);
  return uVar1;
}

/* ref: FUN_00da5fc0 */
uint F_00da5fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xda5fc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_00da5fd0 */
uint F_00da5fd0(unsigned int gen_a0)
{
  GEN_ENTER(0xda5fd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_00da5fe0 */
uint F_00da5fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xda5fe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: FUN_00da5ff0 */
uint F_00da5ff0(unsigned int gen_a0)
{
  GEN_ENTER(0xda5ff0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (int)*(short *)(in_ecx + 0xe);
}

/* ref: FUN_00da6010 */
uint F_00da6010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda6010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    uVar1 = F_00d925c0(*(undefined * PTR32 *)((int)this + 0x14),param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00da6030 */
uint F_00da6030(unsigned int gen_a0)
{
  GEN_ENTER(0xda6030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)((int)this + 0xc);
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 1: ;
  case 2: ;
  case 3: ;
  case 4: ;
  case 5: ;
  case 6: ;
  case 7: ;
  case 8: ;
  case 9: ;
  case 10: ;
  case 0xb: ;
  case 0xc: ;
  case 0xd: ;
  case 0xe: ;
  case 0xf: ;
  case 0x10: ;
  case 0x11: ;
  case 0x12: ;
  case 0x14: ;
  case 0x15: ;
  case 0x16: ;
  case 0x1a: ;
  case 0x1b: ;
  case 0x1c: ;
  case 0x1d: ;
  case 0x1e: ;
  case 0x20: ;
  case 0x21: ;
  case 0x22: ;
    break;
  default: ;
    return 0xffffffff;
  case 0x18: ;
  case 0x1f: ;
    uVar3 = F_00da5ff0(this);
    if (uVar3 == 0) {
      uVar3 = 1;
      iVar2 = ((int)(uint)(this));
    }
    else {
      uVar3 = F_00da5ff0(((int)(uint)(this)));
      iVar2 = ((int)(uint)(((int)(uint)(this))));
    }
    return (int)*(short *)(&REFG(undefined, 0x13523d0) + (uint)*(byte *)(iVar2 + 0xd) * 0xc) * uVar3;
  case 0x19: ;
    uVar3 = F_00da5ff0(this);
    if (uVar3 == 0) {
      uVar3 = F_00da5fc0(((undefined4)(uint)(this)));
      uVar3 = F_00d929c0(uVar3);
      return uVar3;
    }
    uVar3 = F_00da5ff0(((undefined4)(uint)(this)));
    uVar1 = F_00da5fc0(((undefined4)(uint)(this)));
    uVar1 = F_00d929c0(uVar1);
    return uVar1 * uVar3;
  }
  uVar1 = F_00da5ff0(this);
  if (uVar1 == 0) {
    return (int)*(short *)(&REFG(undefined, 0x13523d0) + uVar3 * 0xc);
  }
  uVar1 = F_00da5ff0(((undefined4)(uint)(this)));
  return (int)*(short *)(&REFG(undefined, 0x13523d0) + uVar3 * 0xc) * uVar1;
}

/* ref: FUN_00da6120 */
uint F_00da6120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda6120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(bool *)param_1 = (*(ushort *)((int)this + 0x10) & 0x200) == 0x200;
  return param_1;
}

/* ref: FUN_00da6140 */
uint F_00da6140(unsigned int gen_a0)
{
  GEN_ENTER(0xda6140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  
  uVar1 = (uint)*(byte *)((int)this + 0xc);
  if ((uVar1 == 0x18) || (uVar1 == 0x1f)) {
    uVar1 = (uint)*(byte *)((int)this + 0xd);
  }
  if (uVar1 == 0x19) {
    uVar1 = 1;
    iVar4 = 0;
    uVar2 = F_00d927e0(*(undefined * PTR32 *)((int)this + 4));
    if (0 < (int)uVar2) {
      do {
        pvVar3 = (undefined *)F_00d92800(*(undefined * PTR32 *)((int)this + 4),iVar4);
        uVar2 = F_00da6140(pvVar3);
        if ((int)uVar1 < (int)uVar2) {
          pvVar3 = (undefined *)F_00d92800(*(undefined * PTR32 *)((int)this + 4),iVar4);
          uVar1 = F_00da6140(pvVar3);
        }
        iVar4 = iVar4 + 1;
        uVar2 = F_00d927e0(*(undefined * PTR32 *)((int)this + 4));
      } while (iVar4 < (int)uVar2);
    }
  }
  else {
    uVar1 = (uint)*(short *)(&REFG(undefined, 0x13523d2) + uVar1 * 0xc);
  }
  if (((*(ushort *)((int)this + 0x10) & 0x180) != 0) &&
     (uVar2 = (-(uint)((*(ushort *)((int)this + 0x10) & 0x100) != 0) & 8) + 8,
     (int)uVar1 < (int)uVar2)) {
    uVar1 = uVar2;
  }
  return uVar1;
}

/* ref: FUN_00da61e0 */
uint F_00da61e0(unsigned int gen_a0)
{
  GEN_ENTER(0xda61e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(byte *)(in_ecx + 0xd);
}

/* ref: FUN_00da61f0 */
uint F_00da61f0(unsigned int gen_a0)
{
  GEN_ENTER(0xda61f0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00da61e0(in_ecx);
  if (uVar1 != 0x18) {
    uVar1 = F_00da61e0(((undefined4)(uint)(in_ecx)));
    if (uVar1 != 0x1f) {
      uVar1 = F_00da61e0(((undefined4)(uint)(in_ecx)));
      if (uVar1 != 0x19) {
        uVar1 = F_00da61e0(((undefined4)(uint)(in_ecx)));
        return (int)*(short *)(&REFG(undefined, 0x13523d0) + uVar1 * 0xc);
      }
      uVar1 = F_00da5fc0(((undefined4)(uint)(in_ecx)));
      uVar1 = F_00d929c0(uVar1);
      return uVar1;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00da6230 */
uint F_00da6230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda6230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dba980((uint)*(byte *)((int)this + 0xc),(uint)*(byte *)((int)this + 0xd),param_1);
  return uVar1;
}

/* ref: FUN_00da6250 */
uint F_00da6250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda6250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbaaa0((uint)*(byte *)((int)this + 0xc),(uint)*(byte *)((int)this + 0xd),param_1,
                       param_2,param_2 >> 0x1f);
  return uVar1;
}

/* ref: FUN_00da6280 */
uint F_00da6280(unsigned int gen_a0)
{
  GEN_ENTER(0xda6280u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  undefined * PTR32 * ppuVar3;
  
  uVar1 = F_00da0d60(param_1,"enum ",5);
  if (uVar1 == 0) {
    return 0x18;
  }
  uVar1 = F_00da0d60(param_1,"flags ",6);
  if (uVar1 == 0) {
    return 0x1f;
  }
  uVar1 = F_00da0d60(param_1,"hkArray<",8);
  if (uVar1 == 0) {
    return 0x16;
  }
  uVar1 = F_00da0d60(param_1,"hkRelArray<",0xb);
  if (uVar1 == 0) {
    return 0x22;
  }
  uVar1 = F_00da0d60(param_1,"hkSimpleArray<",0xe);
  if (uVar1 == 0) {
    return 0x1a;
  }
  uVar1 = F_00da0d60(param_1,"char*",5);
  if (uVar1 == 0) {
    return 0x1d;
  }
  uVar1 = F_00da0d60(param_1,"hkStringPtr",0xb);
  if (uVar1 == 0) {
    return 0x21;
  }
  uVar1 = F_00da0f00(param_1,0x2a);
  if ((uVar1 != 0) && (*(char *)(uVar1 + 1) == '\0')) {
    return 0x14;
  }
  F_00da4df0(((undefined1 *)(gen_frame + 0x0)),param_1);
  uVar1 = F_00da0ef0(param_1,0x5b);
  if (uVar1 != 0) {
    F_00da4b20(((undefined1 *)(gen_frame + 0x0)),0,uVar1 - param_1);
  }
  uVar1 = 0;
  ppuVar3 = &REFG(undefined * PTR32, 0x13523cc);
  do {
    uVar2 = F_00da4410(((undefined1 *)(gen_frame + 0x0)),*ppuVar3);
    if (uVar2 != 0) {
      F_00d877b0(((undefined1 *)(gen_frame + 0x0)));
      return uVar1;
    }
    ppuVar3 = ppuVar3 + 3;
    uVar1 = uVar1 + 1;
  } while ((int)ppuVar3 < 0x1352570);
  F_00d877b0(((undefined1 *)(gen_frame + 0x0)));
  return 0;
}

/* ref: FUN_00da6400 */
uint F_00da6400(unsigned int gen_a0)
{
  GEN_ENTER(0xda6400u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00da0d60(param_1,"hkArray<",8);
  if (uVar1 == 0) {
    uVar1 = F_00da0e60(param_1 + 8);
    F_00da4f00(((byte *)(gen_frame + 0x0)),param_1 + 8,uVar1 - 1);
    uVar1 = F_00da6280((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)));
    ((byte *)(gen_frame + 0x0))[4] = 0;
    ((byte *)(gen_frame + 0x0))[5] = 0;
    ((byte *)(gen_frame + 0x0))[6] = 0;
    ((byte *)(gen_frame + 0x0))[7] = 0;
    if (-1 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516a4),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) & 0x3fffffff);
    }
    return uVar1;
  }
  uVar1 = F_00da0d60(param_1,"hkRelArray<",0xb);
  if (uVar1 == 0) {
    uVar1 = F_00da0e60(param_1 + 0xb);
    F_00da4f00(((byte *)(gen_frame + 0x0)),param_1 + 0xb,uVar1 - 1);
    uVar1 = F_00da6280((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)));
    ((byte *)(gen_frame + 0x0))[4] = 0;
    ((byte *)(gen_frame + 0x0))[5] = 0;
    ((byte *)(gen_frame + 0x0))[6] = 0;
    ((byte *)(gen_frame + 0x0))[7] = 0;
    if (-1 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516a4),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) & 0x3fffffff);
    }
    return uVar1;
  }
  uVar1 = F_00da0d60(param_1,"hkSimpleArray<",0xe);
  if (uVar1 == 0) {
    uVar1 = F_00da0e60(param_1 + 0xe);
    F_00da4f00(((byte *)(gen_frame + 0x0)),param_1 + 0xe,uVar1 - 1);
    uVar1 = F_00da6280((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)));
    F_00d877b0(((byte *)(gen_frame + 0x0)));
    return uVar1;
  }
  uVar1 = F_00da0ef0(param_1,0x5b);
  if (uVar1 != 0) {
    uVar2 = F_00da0ef0(param_1,0x5d);
    F_00da4f00(((byte *)(gen_frame + 0x0)),uVar1 + 1,(uVar2 - uVar1) + -1);
    uVar1 = F_00da0e80((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)),0);
    F_00d877b0(((byte *)(gen_frame + 0x0)));
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00da65b0 */
uint F_00da65b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda65b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  char * pcVar2;
  uint in_eax;
  char * pcVar3;
  uint uVar4;
  
  uVar4 = (uint)*(byte *)((int)this + 0xc);
  if (*(int *)((int)this + 4) == 0) {
    pcVar2 = "unknown";
  }
  else {
    pcVar2 = (char *)F_00d92610(*(int *)((int)this + 4));
  }
  if (*(undefined4 * PTR32 *)((int)this + 8) == (undefined4 *)0x0) {
    pcVar3 = "unknown";
  }
  else {
    pcVar3 = ((char *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 8)));
  }
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x8)) = 0x80000080;
  (*(int *)(gen_frame + 0x4)) = 1;
  ((undefined1 *)(gen_frame + 0xc))[0] = 0;
  if (((((uVar4 < 0x14) || (uVar4 == 0x1c)) || (uVar4 == 0x1e)) ||
      ((uVar4 == 0x1d || (uVar4 == 0x20)))) || ((uVar4 == 0x21 || (uVar4 == 0x1b)))) {
    F_00da5f80(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(int)*(short *)((int)this + 0xe),uVar4);
  }
  else if (uVar4 == 0x14) {
    if (*(int *)((int)this + 4) == 0) {
      if (*(char *)((int)this + 0xd) == '\x02') {
        F_00da46f0(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),"char*");
      }
      else {
        F_00da46f0(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),"void*");
      }
    }
    else {
      uVar4 = F_00d92610(*(int *)((int)this + 4));
      F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),"struct %s*",uVar4);
    }
  }
  else if (((uVar4 == 0x16) || (uVar4 == 0x1a)) || (uVar4 == 0x22)) {
    in_eax = F_00da61e0(this);
    if (uVar4 == 0x16) {
      pcVar3 = "hkArray";
    }
    else {
      pcVar3 = "hkSimpleArray";
      if (uVar4 != 0x1a) {
        pcVar3 = "hkRelArray";
      }
    }
    uVar4 = F_00da5f50(in_eax);
    if ((char)uVar4 == '\0') {
      if (in_eax == 0x14) {
        if (*(int *)((int)this + 4) == 0) {
          F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),"%s&lt;void*&gt;",pcVar3);
        }
        else {
          F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),"%s&lt;%s*&gt;",pcVar3,pcVar2);
        }
      }
      else if (in_eax == 0x19) {
        F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),"%s&lt;struct %s&gt;",pcVar3,pcVar2);
      }
    }
    else {
      F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),"%s&lt;%s&gt;",pcVar3,(&REFG(undefined * PTR32, 0x13523cc))[(int)(in_eax * 3)]);
    }
  }
  else if (uVar4 == 0x18) {
    F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),"enum %s",pcVar3);
  }
  else if (uVar4 == 0x1f) {
    F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),"flags %s",pcVar3);
  }
  else if (uVar4 == 0x19) {
    if (*(short *)((int)this + 0xe) == 0) {
      F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),"struct %s",pcVar2);
    }
    else {
      F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),"struct %s[%i]",pcVar2,(int)*(short *)((int)this + 0xe));
    }
  }
  F_00da0e40(param_1,(*(undefined1 * PTR32 *)(gen_frame + 0x0)),param_2);
  iVar1 = (*(int *)(gen_frame + 0x4));
  (*(int *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff)
    ;
  }
  return iVar1 - 1;
}

/* ref: FUN_00da6860 */
uint F_00da6860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda6860u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00da6870 */
uint F_00da6870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda6870u, gen_a0, gen_a1, 0u, 0u);
  ushort * in_ecx = (ushort *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(*in_ecx & (ushort)param_2);
}

/* ref: FUN_00da6880 */
byte F_00da6880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda6880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return (*(ushort *)this & (ushort)param_1) == (ushort)param_1;
}

/* ref: FUN_00da68a0 */
uint F_00da68a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda68a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 1;
}

/* ref: FUN_00da68b0 */
uint F_00da68b0(void)
{
  GEN_ENTER(0xda68b0u, 0u, 0u, 0u, 0u);
  return 0xffffffff;
}

/* ref: FUN_00da68c0 */
uint F_00da68c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda68c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00da68d0 */
uint F_00da68d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda68d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113c3ec));
  *(undefined * PTR32 *)((int)this + 8) = param_1;
  *(undefined1 *)((int)this + 0xc) = (undefined1)param_2;
  F_00d919e0(param_1);
  return (uint)this;
}

/* ref: FUN_00da6900 */
uint F_00da6900(unsigned int gen_a0)
{
  GEN_ENTER(0xda6900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113c3ec));
  uVar1 = F_00d91a80(*(undefined * PTR32 *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00da6920 */
uint F_00da6920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda6920u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),&(*(undefined4 *)&gen_args[1]),1);
  return uVar1;
}

/* ref: FUN_00da6940 */
uint F_00da6940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda6940u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x10))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),&(*(undefined4 *)&gen_args[1]),1);
  return uVar1;
}

/* ref: FUN_00da6970 */
uint F_00da6970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xda6970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 * puVar7;
  uint uVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x200)) = this;
  if (*(char *)((int)this + 0xc) != '\0') {
    uVar3 = 0x200;
    (*(int *)(gen_frame + 0x208)) = param_1;
    uVar4 = (uint)(0x200 / (longlong)param_2);
    uVar8 = param_2 * param_3;
    uVar5 = uVar8 & 0x800001ff;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffe00) + 1;
    }
    uVar6 = (int)uVar5 / param_2;
    (*(uint *)(gen_frame + 0x204)) = uVar6;
    uVar2 = uVar4;
    for (; 0 < (int)uVar8; uVar8 = uVar8 - uVar3) {
      uVar6 = uVar4;
      param_1 = uVar2;
      if ((int)uVar8 < 0x200) {
        uVar3 = uVar5;
        uVar6 = (*(uint *)(gen_frame + 0x204));
        param_1 = (*(uint *)(gen_frame + 0x204));
      }
      F_00da1010(((undefined1 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x208)),uVar3);
      uVar4 = uVar6;
      if (param_2 == 2) {
        puVar7 = ((undefined1 *)(gen_frame + 0x0));
        if (0 < (int)uVar6) {
          do {
            uVar1 = *puVar7;
            *puVar7 = puVar7[1];
            puVar7[1] = uVar1;
            puVar7 = puVar7 + 2;
            uVar6 = uVar6 - 1;
            uVar4 = param_1;
          } while (uVar6 != 0);
        }
      }
      else if (param_2 == 4) {
        if (0 < (int)uVar6) {
          puVar7 = ((undefined1 *)(gen_frame + 0x0)) + 2;
          do {
            uVar1 = puVar7[-2];
            puVar7[-2] = puVar7[1];
            puVar7[1] = uVar1;
            uVar1 = puVar7[-1];
            puVar7[-1] = *puVar7;
            *puVar7 = uVar1;
            puVar7 = puVar7 + 4;
            uVar6 = uVar6 - 1;
            uVar4 = param_1;
          } while (uVar6 != 0);
        }
      }
      else if ((param_2 == 8) && (0 < (int)uVar6)) {
        puVar7 = ((undefined1 *)(gen_frame + 0x0)) + 6;
        do {
          uVar1 = puVar7[-6];
          puVar7[-6] = puVar7[1];
          puVar7[1] = uVar1;
          uVar1 = puVar7[-5];
          puVar7[-5] = *puVar7;
          *puVar7 = uVar1;
          uVar1 = puVar7[-4];
          puVar7[-4] = puVar7[-1];
          puVar7[-1] = uVar1;
          uVar1 = puVar7[-3];
          puVar7[-3] = puVar7[-2];
          puVar7[-2] = uVar1;
          puVar7 = puVar7 + 8;
          uVar6 = uVar6 - 1;
          uVar4 = param_1;
        } while (uVar6 != 0);
      }
      uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x200)) + 8) + 0x10))))
                        (*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x200)) + 8),((undefined1 *)(gen_frame + 0x0)),uVar3);
      (*(int *)(gen_frame + 0x208)) = (*(int *)(gen_frame + 0x208)) + uVar3;
      uVar2 = param_1;
    }
    return uVar6;
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x10))))
                    (*(int * PTR32 *)((int)this + 8),param_1,param_2 * param_3);
  return uVar3;
}

/* ref: FUN_00da6ae0 */
uint F_00da6ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda6ae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x10))))(*(int * PTR32 *)((int)this + 8),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00da6af0 */
byte F_00da6af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda6af0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xc) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00da6b00 */
uint F_00da6b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda6b00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined1 *)(in_ecx + 0xc);
  return (uint)param_2;
}

/* ref: FUN_00da6b10 */
uint F_00da6b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda6b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0xc))))(*(int * PTR32 *)((int)this + 8),param_1);
  return param_1;
}

/* ref: FUN_00da6b30 */
uint F_00da6b30(unsigned int gen_a0)
{
  GEN_ENTER(0xda6b30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: FUN_00da6b40 */
uint F_00da6b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda6b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  F_00d919e0(param_1);
  uVar1 = F_00d91a80(*(undefined * PTR32 *)((int)this + 8));
  *(undefined * PTR32 *)((int)this + 8) = param_1;
  return uVar1;
}

/* ref: FUN_00da6b70 */
uint F_00da6b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda6b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113c3ec));
  *(undefined1 *)((int)this + 0xc) = (undefined1)param_2;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dffa8) + 0x10))))(REFG(int * PTR32, 0x15dffa8),param_1);
  *(uint *)((int)this + 8) = uVar1;
  return (uint)this;
}

