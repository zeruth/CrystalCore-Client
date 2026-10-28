#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00b68f00 */
GEN_FRAME uint GEN_THISCALL F_00b68f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb68f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x1c))(param_1 GEN_EDX_FWD,3,&REFG(undefined, 0x13056c0));
  iVar1 = param_1[0x26];
  iVar2 = param_1[0x27];
  if (iVar1 == 0) {
    *(int *)((int)this + 0x14) = iVar2;
  }
  else {
    *(int *)(iVar1 + 0x9c) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x98) = iVar1;
  }
  if (((int *)((int)this + 0x20U) <= param_1) && (param_1 < (int *)((int)this + 0x9a0U))) {
    ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,0);
    uVar3 = (int)param_1 + (-0x20 - (int)this);
    *(undefined1 *)(uVar3 / 0x260 + 0x9a0 + (int)this) = 0;
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) - 1;
    return uVar3 * -0x50d79435;
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_ARG,1);
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) - 1;
  return uVar3;
}

/* ref: FUN_00b68fa0 */
GEN_NOFRAME uint GEN_THISCALL F_00b68fa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb68fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  
  piVar4 = *(int * PTR32 *)((int)this + 0x14);
  while (piVar4 != (int *)0x0) {
    piVar1 = (int *)piVar4[0x27];
    ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4 GEN_EDX_FWD,3,&REFG(undefined, 0x13056c0));
    iVar2 = piVar4[0x26];
    iVar3 = piVar4[0x27];
    if (iVar2 == 0) {
      *(int *)((int)this + 0x14) = iVar3;
    }
    else {
      *(int *)(iVar2 + 0x9c) = iVar3;
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x98) = iVar2;
    }
    if ((piVar4 < (int *)((int)this + 0x20U)) || ((int *)((int)this + 0x9a0U) <= piVar4)) {
      ((GEN_TCODE *)*(gen_code32 *)*piVar4)(piVar4 GEN_EDX_ARG,1);
    }
    else {
      ((GEN_TCODE *)*(gen_code32 *)*piVar4)(piVar4 GEN_EDX_ARG,0);
      *((undefined1 *)GEN_TOP(((uint)((int)piVar4 + (-0x20 - (int)this)) / 0x260 + 0x9a0 + (int)this))) = 0;
    }
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) - 1;
    piVar4 = piVar1;
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return 0;
}

/* ref: FUN_00b69050 */
GEN_NOFRAME byte GEN_THISCALL F_00b69050(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb69050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  while (piVar1 != (int *)0x0) {
    uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1 GEN_EDX_FWD);
    if ((char)uVar4 == '\0') {
      piVar1 = (int *)piVar1[0x27];
    }
    else {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG,3,&REFG(undefined, 0x13056c0));
      iVar2 = piVar1[0x26];
      iVar3 = piVar1[0x27];
      if (iVar2 == 0) {
        *(int *)((int)this + 0x14) = iVar3;
      }
      else {
        *(int *)(iVar2 + 0x9c) = iVar3;
      }
      if (iVar3 != 0) {
        *(int *)(iVar3 + 0x98) = iVar2;
      }
      if ((piVar1 < (int *)((int)this + 0x20U)) || ((int *)((int)this + 0x9a0U) <= piVar1)) {
        ((GEN_TCODE *)*(gen_code32 *)*piVar1)(piVar1 GEN_EDX_ARG,1);
        *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) - 1;
        piVar1 = *(int * PTR32 *)((int)this + 0x14);
      }
      else {
        ((GEN_TCODE *)*(gen_code32 *)*piVar1)(piVar1 GEN_EDX_ARG,0);
        *((undefined1 *)GEN_TOP(((uint)((int)piVar1 + (-0x20 - (int)this)) / 0x260 + 0x9a0 + (int)this))) = 0;
        *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) - 1;
        piVar1 = *(int * PTR32 *)((int)this + 0x14);
      }
    }
  }
  if ((*(int *)((int)this + 0x14) == 0) && (*(char *)((int)this + 0x9f4) == '\0')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b69120 */
GEN_FRAME byte GEN_THISCALL F_00b69120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xb69120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  undefined * pvVar6;
  undefined * pvVar7;
  int local_8;
  
  if ((*(byte *)((int)this + 0x9e0) & 1) != 0) {
    return 0;
  }
  pvVar7 = (undefined *)0x0;
  if ((((char *)*param_2 != (char *)0x0) && (*(char *)*param_2 != '\0')) &&
     (bVar2 = F_00b683c0(this GEN_EDX_FWD,param_2), bVar2 != 0)) {
    if (((*(int *)((int)this + 0x9e4) != 0) && ((char)param_6 == '\0')) &&
       (bVar2 = F_00b68cf0(this GEN_EDX_ARG,param_2), bVar2 != 0)) {
      return 1;
    }
    pvVar6 = *(undefined * PTR32 *)((int)this + 0x14);
    piVar5 = (int *)((int)this + 0x14);
    local_8 = 0;
    if (pvVar6 != (undefined *)0x0) {
      do {
        uVar3 = F_00bd0ae0(pvVar6 GEN_EDX_ARG,param_2);
        if ((char)uVar3 == '\0') {
          local_8 = local_8 + 1;
        }
        else {
          bVar2 = F_00bcfba0(pvVar6 GEN_EDX_ARG);
          if (bVar2 == 0) {
            return 0;
          }
          if ((*(char *)((int)pvVar6 + 0x24a) == '\0') &&
             (((*(uint *)((int)pvVar6 + 0x138) >> 2 & 1) != 0 ||
              (bVar2 = F_00bcf500(pvVar6 GEN_EDX_ARG), bVar2 == 0)))) {
            if ((char)param_6 != '\0') {
              return 1;
            }
            F_00b69de0((undefined *)((int)pvVar6 + 0x98) GEN_EDX_ARG,piVar5);
            F_00b69d80((undefined *)((int)pvVar6 + 0x98) GEN_EDX_ARG,piVar5);
            iVar4 = 1;
            for (iVar1 = *piVar5; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x9c)) {
              *(int *)(iVar1 + 0x1e0) = iVar4;
              iVar4 = iVar4 + 1;
            }
            F_00bd1210(pvVar6 GEN_EDX_ARG,param_2,param_5);
            if (*(char *)((int)this + 0x9f6) != '\0') {
              F_00bc3440(pvVar6 GEN_EDX_ARG,2,1,0);
            }
            F_00b68520(this GEN_EDX_ARG);
            return 1;
          }
        }
        if ((*(uint *)((int)pvVar6 + 0x138) >> 2 & 1) != 0) {
          pvVar7 = pvVar6;
        }
        pvVar6 = *(undefined * PTR32 *)((int)pvVar6 + 0x9c);
      } while (pvVar6 != (undefined *)0x0);
      if ((pvVar7 != (undefined *)0x0) &&
         (((char)param_6 != '\0' || (bVar2 = F_00bd0a80(pvVar7 GEN_EDX_ARG,param_5), bVar2 != 0)))) {
        F_00bd0910(pvVar7 GEN_EDX_ARG);
      }
    }
    if ((*(int *)(REFG(int, 0x1375b00) + 0x28) == 0) && (5 < local_8)) {
      iVar1 = local_8 - 5;
      pvVar7 = (undefined *)*piVar5;
      while ((pvVar6 = pvVar7, pvVar6 != (undefined *)0x0 && (iVar1 != 0))) {
        pvVar7 = *(undefined * PTR32 *)((int)pvVar6 + 0x9c);
        if (((*(char *)((int)pvVar6 + 0xd) == '\0') ||
            ((*(uint *)((int)pvVar6 + 0x138) >> 7 & 1) == 0)) &&
           (uVar3 = F_00bd1530(pvVar6 GEN_EDX_ARG), (char)uVar3 == '\0')) {
          F_00bd0910(pvVar6 GEN_EDX_ARG);
          iVar1 = iVar1 - 1;
        }
      }
    }
    pvVar7 = (undefined *)F_00b68e40(this GEN_EDX_ARG,param_1);
    if (pvVar7 != (undefined *)0x0) {
      if (*(char *)((int)this + 0x9f6) != '\0') {
        F_00bc3440(pvVar7 GEN_EDX_ARG,2,1,0);
      }
      uVar3 = F_00bbad30((undefined *)((int)this + 0x9a8) GEN_EDX_ARG);
      F_00bcfcc0(pvVar7 GEN_EDX_ARG,uVar3,param_3,param_4);
      bVar2 = F_00bd1110(pvVar7 GEN_EDX_ARG,param_2,param_6,param_5);
      if (bVar2 != 0) {
        F_00b68520(this GEN_EDX_ARG);
        if (*(char *)((int)this + 0x9f5) == '\0') {
          return 1;
        }
        F_00bcf980(pvVar7 GEN_EDX_ARG);
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b69380 */
GEN_FRAME uint GEN_THISCALL F_00b69380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb69380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = (undefined *)F_00b68e40(this GEN_EDX_FWD,param_1);
  uVar2 = 0;
  if (pvVar1 != (undefined *)0x0) {
    uVar2 = F_00bd1610(pvVar1 GEN_EDX_ARG,param_2,param_3);
    for (pvVar1 = *(undefined * PTR32 *)((int)this + 0x14); pvVar1 != (undefined *)0x0;
        pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x9c)) {
      uVar2 = F_00bd0840(pvVar1 GEN_EDX_ARG);
    }
  }
  return uVar2;
}

/* ref: FUN_00b693d0 */
GEN_FRAME uint GEN_THISCALL F_00b693d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xb693d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = (undefined *)F_00b68e40(this GEN_EDX_FWD,param_1);
  uVar2 = 0;
  if (pvVar1 != (undefined *)0x0) {
    if ((*(char *)((int)this + 0x9f6) != '\0') && ((char)param_6 == '\0')) {
      F_00bc3440(pvVar1 GEN_EDX_ARG,2,1,0);
    }
    uVar2 = F_00bd13a0(pvVar1 GEN_EDX_ARG,param_2,(int)this + 0x9a8,param_4,param_5,param_6);
    for (pvVar1 = *(undefined * PTR32 *)((int)this + 0x14); pvVar1 != (undefined *)0x0;
        pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x9c)) {
      uVar2 = F_00bd0840(pvVar1 GEN_EDX_ARG);
    }
  }
  return uVar2;
}

/* ref: FUN_00b69440 */
GEN_FRAME uint GEN_THISCALL F_00b69440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xb69440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  undefined4 param_10 = (undefined4)gen_a10;
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = (undefined *)F_00b68e40(this GEN_EDX_FWD,param_1);
  uVar2 = 0;
  if (pvVar1 != (undefined *)0x0) {
    if ((*(char *)((int)this + 0x9f6) != '\0') && ((char)param_7 == '\0')) {
      F_00bc3440(pvVar1 GEN_EDX_ARG,2,1,0);
    }
    uVar2 = F_00bd1460(pvVar1 GEN_EDX_ARG,param_2,(int)this + 0x9a8,param_4,param_5,param_6,param_7,param_8,
                         param_9,param_10);
    for (pvVar1 = *(undefined * PTR32 *)((int)this + 0x14); pvVar1 != (undefined *)0x0;
        pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x9c)) {
      uVar2 = F_00bd0840(pvVar1 GEN_EDX_ARG);
    }
  }
  return uVar2;
}

/* ref: FUN_00b694c0 */
GEN_FRAME uint GEN_THISCALL F_00b694c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, float gen_a9)
{
  GEN_ENTER(0xb694c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined * param_6 = (undefined *)(uintptr_t)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  float param_10 = (float)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  char * pcVar2;
  uint uVar3;
  undefined * pvVar4;
  int iVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
  if (param_4 == 0) {
    return 0;
  }
  pcVar2 = ((char *)GEN_TOP(((int)param_3 + (*param_3 & 0xffffff))));
  if (pcVar2 == (char *)0x0) {
    return 0;
  }
  if (*pcVar2 == '\0') {
    return (uint)pcVar2;
  }
  iVar5 = 0;
  for (pvVar1 = *(undefined * PTR32 *)((int)param_1 + 0x14); pvVar1 != (undefined *)0x0;
      pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x9c)) {
    if ((*(char *)((int)pvVar1 + 0xd) == '\0') && (*(int *)((int)pvVar1 + 200) == param_4 + 0x20000)
       ) {
      return (uint)pvVar1;
    }
    iVar5 = iVar5 + 1;
  }
  if ((*(int *)(REFG(int, 0x1375b00) + 0x28) == 0) && (1 < iVar5)) {
    iVar5 = iVar5 - 1;
    pvVar1 = *(undefined * PTR32 *)((int)param_1 + 0x14);
    while ((pvVar4 = pvVar1, pvVar4 != (undefined *)0x0 && (iVar5 != 0))) {
      pvVar1 = *(undefined * PTR32 *)((int)pvVar4 + 0x9c);
      if ((*(char *)((int)pvVar4 + 0xd) == '\0') &&
         (uVar3 = F_00bd1530(pvVar4 GEN_EDX_FWD), (char)uVar3 == '\0')) {
        F_00bd0910(pvVar4 GEN_EDX_ARG);
        iVar5 = iVar5 - 1;
      }
    }
  }
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  (*(int *)(gen_frame + 0x0)) = (*param_3 & 0xffffff) + (int)param_3;
  (*(int *)(gen_frame + 0x4)) = param_4 + 0x20000;
  pvVar4 = (undefined *)F_00b68e40((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG,param_2);
  if (pvVar4 == (undefined *)0x0) {
    return 0;
  }
  if (*(char *)((int)pvVar1 + 0x9f6) == '\0') {
    if ((char)param_9 != '\0') goto LAB_00b695dd;
  }
  else {
    if ((char)param_9 != '\0') goto LAB_00b695dd;
    F_00bc3440(pvVar4 GEN_EDX_ARG,2,1,0);
  }
  *(short *)((int)pvVar1 + 0x9ec) = (short)param_3[1];
  uVar3 = F_00bbad30(param_6 GEN_EDX_ARG);
  *(uint *)((int)pvVar1 + 0x9f0) = uVar3;
  *(undefined4 *)((int)pvVar1 + 0x9e8) = *param_2;
LAB_00b695dd: ;
  F_00bd12c0(pvVar4 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)),param_5,param_6,param_7,param_8,param_9,param_10);
  uVar3 = F_00b68520(pvVar1 GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00b69620 */
GEN_FRAME unsigned int GEN_THISCALL F_00b69620(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb69620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  
  if (-1 < *(short *)((int)this + 0x9ec)) {
    for (piVar1 = *(int * PTR32 *)((int)this + 0x14); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x27]) {
      if ((((piVar1[0x3e] ^ *(uint *)((int)this + 0x9e8)) & 0xc0000000) == 0 &&
           ((piVar1[0x3e] ^ *(uint *)((int)this + 0x9e8)) & 0x3fffffff) == 0) &&
         (uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_FWD), (char)uVar2 == '\0')) {
        return;
      }
    }
    F_00b5aba0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x18)));
    uVar2 = F_00ab2ae0((int)*(short *)((int)this + 0x9ec));
    F_00bbac80(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
    F_00bbadf0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x9f0),0);
    F_00b694c0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x18)),uVar2,(int)*(short *)((int)this + 0x9ec),(int)this + 0x9a8,((undefined1 *)(gen_frame + 0x4)),0,
                 0xffffffff,0,(float)(float10)0);
  }
  return;
}

/* ref: FUN_00b696f0 */
GEN_FRAME uint GEN_THISCALL F_00b696f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb696f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00bbaea0((undefined *)((int)this + 0x9a8) GEN_EDX_FWD,param_1);
  if ((char)uVar2 != '\0') {
    *(undefined2 *)((int)this + 0x9ec) = 0xffff;
    *(undefined1 *)((int)this + 0x9f4) = 0;
  }
  for (piVar1 = *(int * PTR32 *)((int)this + 0x14); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x27]) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x40))(piVar1 GEN_EDX_ARG,param_1);
  }
  F_00b69050(this GEN_EDX_ARG);
  uVar2 = F_00bbaf20((undefined *)((int)this + 0x9a8) GEN_EDX_ARG,param_1);
  if (*(char *)((int)this + 0x9f4) == '\0') {
    uVar2 = 0;
    if (*(int *)((int)this + 0x10) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x45c))) = 0;
      uVar2 = F_00b59c20(REFG(void * PTR32, 0x14c4e78) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x10));
      *(undefined4 *)((int)this + 0x10) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00b69780 */
GEN_NOFRAME uint GEN_THISCALL F_00b69780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb69780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined3 extraout_var = 0;
  int * piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = *(uint *)((int)this + 0x9dc);
  if ((uVar2 != 0) && (-1 < *(int *)(param_1 + 4))) {
    piVar4 = (int *)((int)this + uVar2 * 4 + 0x9bc);
    do {
      piVar4 = piVar4 - 1;
      uVar2 = uVar2 - 1;
      if (*piVar4 == *(int *)(param_1 + 4)) goto LAB_00b6988c;
    } while (uVar2 != 0);
  }
  F_00b5aba0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x5c)));
  pvVar3 = (undefined *)F_00b68e40(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x5c)));
  uVar2 = 0;
  if (pvVar3 != (undefined *)0x0) {
    uVar6 = 0;
    uVar5 = 0;
    uVar2 = F_00bbad30((undefined *)((int)this + 0x9a8) GEN_EDX_ARG);
    F_00bcfcc0(pvVar3 GEN_EDX_ARG,uVar2,uVar5,uVar6);
    *(uint *)((int)pvVar3 + 0xe0) = *(uint *)((int)pvVar3 + 0xe0) | 0x400;
    (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(undefined4 *)(gen_frame + 0x14)) = 1;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    bVar1 = F_00bd1110(pvVar3 GEN_EDX_ARG,param_1,0,&(*(undefined4 *)(gen_frame + 0x0)));
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      for (pvVar3 = *(undefined * PTR32 *)((int)this + 0x14); pvVar3 != (undefined *)0x0;
          pvVar3 = *(undefined * PTR32 *)((int)pvVar3 + 0x9c)) {
        F_00bd0840(pvVar3 GEN_EDX_ARG);
      }
      *(undefined4 *)((int)this + 0x9e4) = 1;
      return 1;
    }
  }
LAB_00b6988c: ;
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00b698a0 */
GEN_NOFRAME uint GEN_THISCALL F_00b698a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb698a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f38a0));
  F_00b68fa0(this GEN_EDX_FWD);
  uVar1 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x45c))) = 0;
    uVar1 = F_00b59c20(REFG(void * PTR32, 0x14c4e78) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x10));
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x9a8) = (*(undefined * PTR32 (*)[1])REFP(0x10f1498));
  return uVar1;
}

/* ref: FUN_00b698f0 */
GEN_FRAME byte GEN_THISCALL F_00b698f0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb698f0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  undefined * this;
  byte bVar2;
  
  if (*(int *)((int)param_1 + 0x9e4) != 0) {
    *(int *)((int)param_1 + 0x9e4) = *(int *)((int)param_1 + 0x9e4) + 1;
  }
  for (iVar1 = *(int *)((int)param_1 + 0x14); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x9c)) {
    F_00bd0e90(iVar1 GEN_EDX_FWD,param_2,param_3);
  }
  for (this = *(undefined * PTR32 *)((int)param_1 + 0x14); this != (undefined *)0x0;
      this = *(undefined * PTR32 *)((int)this + 0x9c)) {
    F_00bd0840(this GEN_EDX_ARG);
  }
  if (-1 < *(short *)((int)param_1 + 0x9ec)) {
    F_00b69620(param_1 GEN_EDX_ARG);
  }
  bVar2 = F_00b69050(param_1 GEN_EDX_ARG);
  return bVar2;
}

/* ref: FUN_00b69970 */
GEN_FRAME byte GEN_THISCALL F_00b69970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb69970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00b5aba0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  bVar1 = F_00b69120(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_1,param_2,param_3,param_4,1);
  return bVar1;
}

/* ref: FUN_00b699b0 */
GEN_FRAME byte GEN_THISCALL F_00b699b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb699b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00b5aba0(REFG(void * PTR32, 0x14c4e84) GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  bVar1 = F_00b69120(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),param_1,param_2,param_3,param_4,0);
  return bVar1;
}

/* ref: FUN_00b699f0 */
GEN_FRAME uint GEN_THISCALL F_00b699f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb699f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  bVar1 = F_00bbad00((undefined *)((int)this + 0x9a8) GEN_EDX_FWD);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (((bVar1 != 0) && ((*(byte *)((int)this + 0x9e0) & 1) == 0)) &&
     (uVar2 = REFG(undefined4, 0x1375b00), *(int *)(REFG(undefined4, 0x1375b00) + 0x28) == 0)) {
    (*(char * PTR32 *)(gen_frame + 0x14)) = "normal/idle";
    (*(undefined4 *)(gen_frame + 0x18)) = 3;
    uVar2 = F_00b69780(this GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0x14)));
    if ((char)uVar2 == '\0') {
      (*(char * PTR32 *)(gen_frame + 0xc)) = "battle/idle";
      (*(undefined4 *)(gen_frame + 0x10)) = 0x22;
      uVar2 = F_00b69780(this GEN_EDX_ARG,&(*(char * PTR32 *)(gen_frame + 0xc)));
    }
  }
  return uVar2;
}

/* ref: FUN_00b69a60 */
GEN_FRAME uint GEN_THISCALL F_00b69a60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb69a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  
  for (pvVar1 = *(undefined * PTR32 *)((int)this + 0x14); pvVar1 != (undefined *)0x0;
      pvVar1 = *(undefined * PTR32 *)((int)pvVar1 + 0x9c)) {
    if ((char)param_1 == '\0') {
      F_00bd0910(pvVar1 GEN_EDX_FWD);
    }
    else {
      F_00bd0880(pvVar1 GEN_EDX_ARG,1,0);
    }
  }
  pvVar1 = *(undefined * PTR32 *)((int)this + 0x10);
  if (pvVar1 == (undefined *)0x0) {
    pvVar1 = (undefined *)F_00b59660(REFG(void * PTR32, 0x14c4e78) GEN_EDX_ARG,(int)this + 0x9a8);
    if (pvVar1 == (undefined *)0x0) goto LAB_00b69ad5;
    *(undefined * PTR32 *)((int)this + 0x10) = pvVar1;
    F_00b595f0(pvVar1);
    *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x45c))) = this;
  }
  F_00bc3bc0(pvVar1 GEN_EDX_ARG,param_1);
LAB_00b69ad5: ;
  uVar2 = F_00b699f0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00b69af0 */
GEN_FRAME byte GEN_THISCALL F_00b69af0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb69af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * pvVar2;
  int iVar3;
  int local_8;
  
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x14);
  iVar3 = 0;
  local_8 = 0;
  for (; pvVar2 != (undefined *)0x0; pvVar2 = *(undefined * PTR32 *)((int)pvVar2 + 0x9c)) {
    if ((*(char *)((int)pvVar2 + 10) != '\0') || (*(char *)((int)pvVar2 + 0xd) != '\0')) {
      local_8 = local_8 + 1;
    }
    bVar1 = F_00bcf9c0(pvVar2 GEN_EDX_FWD);
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = F_00bcfba0(pvVar2 GEN_EDX_ARG);
    if (bVar1 != 0) {
      iVar3 = iVar3 + 1;
    }
  }
  if ((*(int *)((int)this + 0x14) != 0) || (*(int *)(REFG(int, 0x1375b00) + 0x28) == 0)) {
    pvVar2 = *(undefined * PTR32 *)((int)this + 0x10);
    if ((pvVar2 == (undefined *)0x0) &&
       (pvVar2 = (undefined *)F_00b59660(REFG(void * PTR32, 0x14c4e78) GEN_EDX_ARG,(int)this + 0x9a8), pvVar2 != (undefined *)0x0)) {
      *(undefined * PTR32 *)((int)this + 0x10) = pvVar2;
      F_00b595f0(pvVar2);
      *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x45c))) = this;
    }
    if (((iVar3 != 0) && (pvVar2 != (undefined *)0x0)) && (bVar1 = F_00bc5290(pvVar2 GEN_EDX_ARG), bVar1 == 0)) {
      return 0;
    }
    if (local_8 == 0) {
      F_00b699f0(this GEN_EDX_ARG);
    }
  }
  return 1;
}

/* ref: FUN_00b69bc0 */
GEN_FRAME uint GEN_THISCALL F_00b69bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb69bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0xf8) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00b69be0 */
GEN_FRAME uint GEN_THISCALL F_00b69be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb69be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  return (uint)(((*param_1 ^ *(uint *)((int)this + 0xf8)) & 0xc0000000) == 0 &&
               ((*param_1 ^ *(uint *)((int)this + 0xf8)) & 0x3fffffff) == 0);
}

/* ref: FUN_00b69c20 */
GEN_FRAME byte GEN_THISCALL F_00b69c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb69c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  if (*(int *)((int)this + 200) != -1) {
    return *(int *)((int)this + 200) == param_2;
  }
  pbVar2 = *(byte * PTR32 *)((int)this + 0xd4);
  pbVar3 = param_1;
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 1;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 1 - bVar4 == (uint)(bVar4 != 0);
}

/* ref: FUN_00b69cb0 */
GEN_FRAME byte GEN_THISCALL F_00b69cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb69cb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0xd0) == param_2;
}

/* ref: FUN_00b69ce0 */
GEN_FRAME uint GEN_THISCALL F_00b69ce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb69ce0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = ((param_2 & 0xff) * 2 ^ *(uint *)(in_ecx + 0x138)) & 2;
  *(uint *)(in_ecx + 0x138) = *(uint *)(in_ecx + 0x138) ^ uVar1;
  return uVar1;
}

/* ref: FUN_00b69d00 */
GEN_FRAME uint GEN_THISCALL F_00b69d00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb69d00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1e0) = param_2;
  return param_2;
}

/* ref: FUN_00b69d50 */
GEN_FRAME uint GEN_THISCALL F_00b69d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb69d50u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00b69d70 */
GEN_FRAME uint GEN_THISCALL F_00b69d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb69d70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00b69d80 */
GEN_FRAME uint GEN_THISCALL F_00b69d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb69d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (*param_1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *param_1 = (int)this - 0x98;
    return 0;
  }
  do {
    iVar2 = iVar1;
    iVar1 = *(int *)(iVar2 + 0x9c);
  } while (*(int *)(iVar2 + 0x9c) != 0);
  if (this != (undefined *)0x0) {
    *(uint *)(iVar2 + 0x9c) = (int)this - 0x98U;
    *(int *)this = iVar2;
    *(undefined4 *)((int)this + 4) = 0;
    return (int)this - 0x98U;
  }
  *(undefined4 *)(iVar2 + 0x9c) = 0;
  *(int *)&REFG(undefined, 0x0) = iVar2;
  *(undefined4 *)&REFG(undefined, 0x4) = 0;
  return 0;
}

/* ref: FUN_00b69de0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b69de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb69de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)((int)this + 4);
  if (iVar1 == 0) {
    *param_1 = iVar2;
  }
  else {
    *(int *)(iVar1 + 0x9c) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x98) = iVar1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::TimelineGroup::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b69e10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb69e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10f38a0));
  F_00b68fa0(this GEN_EDX_FWD);
  if (*(int *)(this + 0x10) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x10) + 0x45c))) = 0;
    F_00b59c20(REFG(void * PTR32, 0x14c4e78) GEN_EDX_ARG,*(undefined4 *)(this + 0x10));
    *(undefined4 *)(this + 0x10) = 0;
  }
  *(undefined * PTR32 * PTR32 *)(this + 0x9a8) = (*(undefined * PTR32 (*)[1])REFP(0x10f1498));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::CameraBase::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_00b69e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xb69e80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 4))))
                    (this + 0x10 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00b69e90 */
GEN_FRAME uint GEN_THISCALL F_00b69e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb69e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0068bf80((undefined *)((int)this + 0x10) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00b69ea0 */
GEN_FRAME float10 F_00b69ea0(float gen_a0)
{
  GEN_ENTER(0xb69ea0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00b69ec0 */
GEN_FRAME float10 F_00b69ec0(float gen_a0)
{
  GEN_ENTER(0xb69ec0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF(ABS((float10)param_1)));
}

/* ref: FUN_00b69ee0 */
GEN_FRAME uint GEN_THISCALL F_00b69ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb69ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[4] = *param_3;
  in_ecx[5] = param_3[1];
  in_ecx[6] = param_3[2];
  return (uint)param_3;
}

/* ref: FUN_00b69f10 */
GEN_NOFRAME byte GEN_THISCALL F_00b69f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb69f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float * param_4 = (float *)(uintptr_t)gen_a4;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar6 = (float10)*(float *)this;
  fVar7 = (float10)((float)GEN_TOF(((float10)param_2[2] * (float10)*(float *)((int)this + 8) +
                          ((float10)param_2[1] * (float10)*(float *)((int)this + 4) +
                          fVar6 * (float10)*param_2))));
  bVar5 = GEN_ISNAN(fVar7) || GEN_ISNAN((float10)0);
  if (bVar5 != (bVar5 || fVar7 == (float10)0)) {
    return 0;
  }
  fVar7 = (float10)*(float *)((int)this + 4);
  fVar8 = (float10)*(float *)((int)this + 8);
  fVar9 = (float10)((float)GEN_TOF((fVar8 * (float10)param_2[2] +
                          (fVar7 * (float10)param_2[1] + fVar6 * (float10)*param_2))));
  bVar5 = GEN_ISNAN(fVar9) || GEN_ISNAN((float10)0);
  if (bVar5 == (bVar5 || fVar9 == (float10)0)) {
    *param_4 = ((float)GEN_TOF((-(float10)((float)GEN_TOF(((float10)((float)GEN_TOF(-(((float10)*(float *)((int)this + 0x10) *
                                                            fVar6 + fVar7 * (float10)*((float *)GEN_TOP(((int
                                                  )this + 0x14)))) +
                                                  fVar8 * (float10)*(float *)((int)this + 0x18)))) +
                                        ((float10)param_1[2] * fVar8 +
                                        (fVar7 * (float10)param_1[1] + (float10)*param_1 * fVar6)))))
                      / fVar9)));
  }
  else {
    *param_4 = 0.0;
  }
  fVar6 = (float10)*param_4;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  *param_3 = ((float)GEN_TOF(((float10)*param_1 + (float10)(float)(fVar6 * (float10)*param_2))));
  param_3[1] = ((float)GEN_TOF(((float10)fVar3 + (float10)(float)(fVar6 * (float10)fVar1))));
  param_3[2] = ((float)GEN_TOF(((float10)fVar4 + (float10)(float)(fVar6 * (float10)fVar2))));
  return 1;
}

/* ref: FUN_00b6a060 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b6a060(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6a060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x133d28c)));
  fVar3 = (float10)*(float *)&REFG(undefined, 0x133d284);
  fVar4 = (float10)*(double *)&REFG(undefined, 0x1080228);
  *(undefined4 *)((int)this + 0xe4) = GEN_FLT_TO(*(undefined4 *)((int)this + 0xe4), REFG(float, 0x10f396c));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x133d290)));
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1080220);
  *(undefined4 *)((int)this + 0xe8) = uVar1;
  *(undefined4 *)((int)this + 0x148) = uVar1;
  *(undefined4 *)((int)this + 0xec) = uVar2;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined1 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined2 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x134) = 2;
  *(undefined4 *)((int)this + 0x138) = 2;
  *(undefined4 *)((int)this + 0xe0) = 1;
  *(float *)((int)this + 0x114) = ((float)GEN_TOF(((fVar3 * fVar4) / fVar5)));
  *(float *)((int)this + 0x118) = ((float)GEN_TOF(((fVar4 * (float10)*(float *)&REFG(undefined, 0x133d288)) / fVar5)));
  *(undefined4 *)((int)this + 0x140) = *(undefined4 *)((int)this + 0xf0);
  *(undefined4 *)((int)this + 0x13c) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x13c), REFG(float, 0x10f396c));
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x168) = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10928e4)));
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x170) = uVar1;
  *(undefined4 *)((int)this + 0x174) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x174), REFG(float, 0x1087ef8));
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x109482c)));
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x184) = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f3964)));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x1b4) = uVar1;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f3960)));
  *(undefined1 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined1 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined2 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = uVar1;
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined2 *)((int)this + 500) = 0;
  *(undefined1 *)((int)this + 0x1e0) = 0;
  *(undefined4 *)((int)this + 0x1f8) = 0;
  *(undefined1 *)((int)this + 0x1fc) = 1;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined1 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined1 *)((int)this + 0x244) = 0;
  *(undefined1 *)((int)this + 0x205) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x218) = 0;
  *(undefined1 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined4 *)((int)this + 0x238) = 0;
  return 0;
}

/* ref: FUN_00b6a2d0 */
GEN_NOFRAME byte GEN_THISCALL F_00b6a2d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb6a2d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  uint uVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x68))(param_1 GEN_EDX_FWD);
  if ((char)uVar2 == '\0') {
    return 0;
  }
  if ((char)param_2 != '\0') {
    *(undefined4 *)((int)this + 0x1f8) = 0;
    return 1;
  }
  uVar2 = F_00a5fd10(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)),0x46);
  uVar3 = F_00a5fd10(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x2e);
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(uVar3 + 4) - (float10)*(float *)(uVar2 + 4))));
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1f8) = (float)((float10)fVar1 * (float10)REFG(double, 0x1088108));
  return 1;
}

/* ref: FUN_00b6a390 */
GEN_NOFRAME uint GEN_STDCALL F_00b6a390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb6a390u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  
  fVar1 = param_2[1];
  fVar2 = param_3[1];
  fVar3 = param_2[2];
  fVar4 = param_3[2];
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1090b18);
  *param_1 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)*param_3 - (float10)*param_2) *
                                     fVar5))) + (float10)*param_2)));
  param_1[1] = ((float)GEN_TOF(((float10)fVar1 +
                      (float10)((float)GEN_TOF(((float10)(float)((float10)fVar2 - (float10)fVar1) * fVar5))))));
  param_1[2] = ((float)GEN_TOF(((float10)fVar3 +
                      (float10)((float)GEN_TOF((fVar5 * (float10)(float)((float10)fVar4 - (float10)fVar3)))))));
  return (uint)param_1;
}

/* ref: FUN_00b6a440 */
GEN_FRAME float10 GEN_STDCALL F_00b6a440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xb6a440u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  float10 fVar1;
  float10 fVar2;
  float fVar3;
  
  if (param_6 < 0.0) {
    param_6 = gen_bits2f((uint)gen_fl2bits(param_6) ^ REFG(uint, 0x10920d0));
  }
  if ((char)param_3 == '\0') {
    fVar3 = F_00aae900(param_1);
  }
  else {
    fVar3 = F_00aae920(param_1);
  }
  fVar1 = F_00aae710((float)((float10)param_4 - (float10)fVar3));
  fVar2 = (float10)param_6;
  if ((float10)(float)fVar1 < -fVar2) {
    return (float10)(float)((float10)fVar3 - fVar2);
  }
  if (fVar2 < (float10)(float)fVar1) {
    return (float10)(float)(fVar2 + (float10)fVar3);
  }
  return (float10)param_4;
}

/* ref: FUN_00b6a4f0 */
GEN_NOFRAME uint GEN_STDCALL F_00b6a4f0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb6a4f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  float fVar2;
  undefined4 * puVar3;
  float10 fVar4;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  fVar4 = ((float10)GEN_TOD(fsin((float10)param_3)));
  fVar1 = (float)fVar4;
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  (*(float *)(gen_frame + 0x18)) = fVar1;
  fVar4 = ((float10)GEN_TOD(fcos((float10)param_3)));
  fVar2 = (float)fVar4;
  (*(float *)(gen_frame + 0x1c)) = fVar2;
  (*(float *)(gen_frame + 0x34)) = fVar2;
  (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(float *)(gen_frame + 0x38)) = fVar1;
  (*(float *)(gen_frame + 0x44)) = ((float)GEN_TOF(-(float10)fVar1));
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(float *)(gen_frame + 0x48)) = fVar2;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  puVar3 = (undefined4 *)F_004ee670(((undefined1 *)(gen_frame + 0x0)),param_2,(uint)&(*(undefined4 *)(gen_frame + 0x20)));
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  param_1[2] = puVar3[2];
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_00b6a5c0 */
GEN_NOFRAME uint GEN_STDCALL F_00b6a5c0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb6a5c0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  float fVar2;
  undefined4 * puVar3;
  float10 fVar4;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  fVar4 = ((float10)GEN_TOD(fsin((float10)param_3)));
  fVar1 = (float)fVar4;
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  (*(float *)(gen_frame + 0x18)) = fVar1;
  fVar4 = ((float10)GEN_TOD(fcos((float10)param_3)));
  fVar2 = (float)fVar4;
  (*(float *)(gen_frame + 0x1c)) = fVar2;
  ((float *)(gen_frame + 0x20))[0] = fVar2;
  ((float *)(gen_frame + 0x20))[2] = ((float)GEN_TOF(-(float10)fVar1));
  ((float *)(gen_frame + 0x20))[1] = 0.0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(float *)(gen_frame + 0x40)) = fVar1;
  (*(undefined4 *)(gen_frame + 0x34)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(float *)(gen_frame + 0x48)) = fVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  puVar3 = (undefined4 *)F_004ee670(((undefined1 *)(gen_frame + 0x0)),param_2,(uint)((float *)(gen_frame + 0x20)));
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  param_1[2] = puVar3[2];
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_00b6a690 */
GEN_NOFRAME uint GEN_STDCALL F_00b6a690(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xb6a690u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  float fVar1;
  float fVar2;
  undefined4 * puVar3;
  float10 fVar4;
  
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  fVar4 = ((float10)GEN_TOD(fsin((float10)param_4)));
  fVar1 = (float)fVar4;
  (*(float *)(gen_frame + 0x38)) = fVar1;
  (*(float *)(gen_frame + 0x3c)) = fVar1;
  fVar4 = ((float10)GEN_TOD(fcos((float10)param_4)));
  fVar2 = (float)fVar4;
  (*(float *)(gen_frame + 0x38)) = fVar2;
  (*(undefined4 *)(gen_frame + 0x40)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(float *)(gen_frame + 0x54)) = fVar2;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(float *)(gen_frame + 0x58)) = fVar1;
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(float *)(gen_frame + 0x64)) = ((float)GEN_TOF(-(float10)fVar1));
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(float *)(gen_frame + 0x68)) = fVar2;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  fVar4 = ((float10)GEN_TOD(fsin((float10)param_3)));
  fVar1 = (float)fVar4;
  (*(float *)(gen_frame + 0x3c)) = fVar1;
  (*(float *)(gen_frame + 0x38)) = fVar1;
  fVar4 = ((float10)GEN_TOD(fcos((float10)param_3)));
  fVar2 = (float)fVar4;
  (*(float *)(gen_frame + 0x3c)) = fVar2;
  ((float *)(gen_frame + 0x80))[0] = fVar2;
  ((float *)(gen_frame + 0x80))[2] = ((float)GEN_TOF(-(float10)fVar1));
  ((float *)(gen_frame + 0x80))[1] = 0.0;
  (*(undefined4 *)(gen_frame + 0x90)) = 0;
  (*(float *)(gen_frame + 0xa0)) = fVar1;
  (*(undefined4 *)(gen_frame + 0x94)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x98)) = 0;
  (*(float *)(gen_frame + 0xa8)) = fVar2;
  (*(undefined4 *)(gen_frame + 0xa4)) = 0;
  (*(undefined4 *)(gen_frame + 0xb0)) = 0;
  (*(undefined4 *)(gen_frame + 0xb4)) = 0;
  (*(undefined4 *)(gen_frame + 0xb8)) = 0;
  puVar3 = (undefined4 *)F_004ee670(((undefined1 *)(gen_frame + 0x10)),param_2,(uint)&(*(undefined4 *)(gen_frame + 0x40)));
  (*(undefined4 *)(gen_frame + 0x20)) = *puVar3;
  (*(undefined4 *)(gen_frame + 0x24)) = puVar3[1];
  (*(undefined4 *)(gen_frame + 0x28)) = puVar3[2];
  puVar3 = (undefined4 *)F_004ee670(((undefined1 *)(gen_frame + 0x0)),(uint)&(*(undefined4 *)(gen_frame + 0x20)),(uint)((float *)(gen_frame + 0x80)));
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  param_1[2] = puVar3[2];
  F_00c47745((*(uint *)(gen_frame + 0xcc)) ^ (uint)(uint)(gen_frame + 0xd0) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_00b6a870 */
GEN_NOFRAME uint F_00b6a870(void)
{
  GEN_ENTER(0xb6a870u, 0u, 0u, 0u, 0u);
  byte bVar1;
  double dVar2;
  
  bVar1 = F_00542470();
  if (bVar1 != 0) {
    return 1;
  }
  dVar2 = F_0053b320();
  if (GEN_ISNAN(dVar2) != (GEN_ISNAN(dVar2) || dVar2 == 0.0)) {
    dVar2 = F_0053b360();
    if (GEN_ISNAN(dVar2) != (GEN_ISNAN(dVar2) || dVar2 == 0.0)) {
      return -(uint)(REFG(int, 0x1375b64) != 0) & 3;
    }
  }
  return 2;
}

/* ref: FUN_00b6a8d0 */
GEN_FRAME uint GEN_THISCALL F_00b6a8d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb6a8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (REFG(void * PTR32, 0x1379694) == (undefined *)0x0) {
    *param_1 = *(undefined4 *)((int)this + 0x180);
    param_1[1] = *(undefined4 *)((int)this + 0x184);
    param_1[2] = *(undefined4 *)((int)this + 0x188);
    return (uint)param_1;
  }
  puVar1 = (undefined4 *)F_00a5feb0(REFG(void * PTR32, 0x1379694) GEN_EDX_FWD);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return (uint)param_1;
}

/* ref: FUN_00b6aa40 */
GEN_FRAME unsigned int GEN_THISCALL F_00b6aa40(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb6aa40u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xfc) = param_2;
  return;
}

/* ref: FUN_00b6aa60 */
GEN_FRAME unsigned int GEN_THISCALL F_00b6aa60(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb6aa60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float10 extraout_ST0;
  float10 fVar1;
  
  if (REFG(int * PTR32, 0x1379694) != (int *)0x0) {
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0x50))))(REFG(int * PTR32, 0x1379694));
    fVar1 = (float10)REFG(double, 0x1094800) - (float10)(float)extraout_ST0;
    if ((float10)param_2 <= (float10)(float)fVar1) {
      *(float *)(param_1 + 0x11c) = (float)((float10)REFG(double, 0x1094800) + fVar1);
      return;
    }
    *(float *)(param_1 + 0x11c) = param_2;
  }
  return;
}

/* ref: FUN_00b6ab10 */
GEN_FRAME unsigned int GEN_THISCALL F_00b6ab10(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb6ab10u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  float local_8;
  
  if (REFG(int, 0x1379694) == 0) {
    local_8 = 0.0;
  }
  else {
    local_8 = *(float *)(REFG(int, 0x1379694) + 0xb0);
  }
  *(undefined4 *)(in_ecx + 0x104) = 0;
  fVar1 = (float10)*(double *)&REFG(undefined, 0x1080228);
  *(undefined4 *)(in_ecx + 0x108) = 0;
  *(float *)(in_ecx + 0xfc) = ((float)GEN_TOF((((float10)local_8 + fVar1) + (float10)param_2)));
  return 0;
}

/* ref: FUN_00b6ab60 */
GEN_FRAME float10 GEN_THISCALL F_00b6ab60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb6ab60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == 3) {
    return (float10)*(float *)(in_ecx + 0x240);
  }
  return (float10)*(float *)(in_ecx + 0xe4);
}

/* ref: FUN_00b6ab80 */
GEN_FRAME unsigned int GEN_THISCALL F_00b6ab80(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xb6ab80u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0x120) = param_2;
  *(float *)(in_ecx + 0x124) = param_3;
  return;
}

/* ref: FUN_00b6ad90 */
GEN_FRAME uint GEN_THISCALL F_00b6ad90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb6ad90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  uVar1 = param_1[2];
  *(uint *)((int)this + 8) = uVar1;
  return uVar1;
}

/* ref: FUN_00b6adb0 */
GEN_FRAME byte GEN_STDCALL F_00b6adb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb6adb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b6a870();
  if (uVar1 == 0) {
    if (param_2 == 0) {
      return (byte)param_1;
    }
    if ((param_2 == 1) || (param_2 != 2)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b6ade0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b6ade0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6ade0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  
  iVar1 = REFG(int, 0x1379694);
  if ((REFG(int, 0x1379694) != 0) && (*(int *)((int)this + 0xe0) == 0)) {
    bVar2 = F_005374c0(&REFG(undefined4, 0x1375bc0) GEN_EDX_FWD);
    if (bVar2 == 0) {
      *(undefined4 *)((int)this + 0xfc) = *(undefined4 *)(iVar1 + 0xb0);
    }
  }
  return;
}

/* ref: FUN_00b6ae20 */
GEN_FRAME uint GEN_STDCALL F_00b6ae20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb6ae20u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((char)param_2 != '\0') {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x24))(param_1 GEN_EDX_ARG,3,0);
    return uVar1;
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x28))(param_1 GEN_EDX_ARG,3,0);
  return uVar1;
}

/* ref: FUN_00b6ae50 */
GEN_FRAME uint GEN_THISCALL F_00b6ae50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb6ae50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x170) = *param_2;
  *(undefined4 *)(in_ecx + 0x174) = param_2[1];
  *(undefined4 *)(in_ecx + 0x178) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00b6ae80 */
GEN_FRAME uint GEN_THISCALL F_00b6ae80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb6ae80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x180) = *param_2;
  *(undefined4 *)(in_ecx + 0x184) = param_2[1];
  *(undefined4 *)(in_ecx + 0x188) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00b6aeb0 */
GEN_FRAME uint GEN_STDCALL F_00b6aeb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb6aeb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = 2;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
  case 4: ;
    return 0;
  case 1: ;
  case 2: ;
  case 3: ;
  case 5: ;
  case 6: ;
    uVar1 = 1;
  }
  return uVar1;
}

/* ref: FUN_00b6aef0 */
GEN_FRAME uint GEN_STDCALL F_00b6aef0(unsigned int gen_a0)
{
  GEN_ENTER(0xb6aef0u, gen_a0, 0u, 0u, 0u);
  if (((((*(int *)&gen_a0) != 3) && ((*(int *)&gen_a0) != 4)) && ((*(int *)&gen_a0) != 5)) && ((*(int *)&gen_a0) != 6)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00b6af20 */
GEN_NOFRAME byte GEN_STDCALL F_00b6af20(unsigned int gen_a0)
{
  GEN_ENTER(0xb6af20u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  this = REFG(void * PTR32, 0x1379694);
  if ((param_1 != (undefined *)0x0) && (param_1 != REFG(void * PTR32, 0x1379694))) {
    uVar1 = F_00a61360(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
    uVar2 = F_00a61360(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    fVar3 = F_00aaea30(uVar2,uVar1);
    if ((float10)0 < (float10)fVar3) {
      return 1;
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00b6afa0 */
GEN_NOFRAME uint F_00b6afa0(void)
{
  GEN_ENTER(0xb6afa0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  undefined * this;
  int * piVar2;
  
  uVar1 = F_006b8c00();
  uVar1 = F_006c5190(uVar1 GEN_EDX_ARG);
  if ((char)uVar1 == '\0') {
    this = (undefined *)F_00533c90(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
  }
  else {
    this = (undefined *)F_005339e0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
  }
  if (this != (undefined *)0x0) {
    piVar2 = (int *)F_00a5f290(this GEN_EDX_ARG);
    if ((((piVar2 != (int *)0x0) &&
         (uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 8))(piVar2 GEN_EDX_ARG), (char)uVar1 == '\x01')) &&
        (piVar2[0xbb6] != -0x20000000)) && (uVar1 = F_00ab1210(piVar2[0xbb6]), uVar1 != 0)) {
      return uVar1;
    }
    return (uint)this;
  }
  return 0;
}

/* ref: FUN_00b6b010 */
GEN_NOFRAME uint GEN_THISCALL F_00b6b010(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6b010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  undefined4 * puVar1;
  
  this_00 = (undefined *)F_00b6afa0();
  puVar1 = (undefined4 *)0x0;
  if (this_00 != (undefined *)0x0) {
    *(undefined1 *)((int)this + 0x220) = 1;
    puVar1 = (undefined4 *)F_00a61360(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
    *(undefined4 *)((int)this + 0x210) = *puVar1;
    *(undefined4 *)((int)this + 0x214) = puVar1[1];
    *(undefined4 *)((int)this + 0x218) = puVar1[2];
  }
  return (uint)puVar1;
}

/* ref: FUN_00b6b0c0 */
GEN_NOFRAME uint GEN_THISCALL F_00b6b0c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb6b0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float * in_EAX = 0;
  
  fVar1 = ((float)GEN_TOF(((float10)param_1[2] * (float10)param_1[2] +
                 ((float10)*param_1 * (float10)*param_1 + (float10)param_1[1] * (float10)param_1[1])
                 )));
  (*(float *)(gen_frame + 0x18)) = fVar1;
  fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
  (*(float *)(gen_frame + 0x18)) = fVar1;
  if ((float10)REFG(float, 0x10947f8) < (float10)fVar1) {
    (*(char *)(gen_frame + 0x1f)) = *(char *)((int)this + 0x1a4);
    in_EAX = (float *)F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_FWD,0x18);
    if ((char)in_EAX == '\0') {
      *(undefined1 *)((int)this + 0x1a4) = 0;
    }
    else {
      in_EAX = (float *)F_00b6a5c0(((undefined1 *)(gen_frame + 0x0)),param_1,REFG(float, 0x10f438c));
      *param_1 = *in_EAX;
      param_1[1] = in_EAX[1];
      param_1[2] = in_EAX[2];
      *(undefined1 *)((int)this + 0x1a4) = 1;
    }
    if ((*(char *)(gen_frame + 0x1f)) != *(char *)((int)this + 0x1a4)) {
      in_EAX = (float *)F_00533d10(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_00b6b1b0 */
GEN_FRAME float10 GEN_STDCALL F_00b6b1b0(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xb6b1b0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  return (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)1 -
                                                                                   ((float10)param_1
                                                                                   * (float10)
                                                  param_1) / ((float10)param_2 * (float10)param_2)))))))
                                              ))) * (float10)param_3)));
}

/* ref: FUN_00b6b1f0 */
GEN_FRAME float10 GEN_STDCALL F_00b6b1f0(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xb6b1f0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  return (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)1 -
                                                                                   (float10)(float)(
                                                  (float10)param_1 / (float10)param_3) *
                                                  (float10)(float)((float10)param_1 /
                                                                  (float10)param_3)))))))))) *
                         (float10)param_2)));
}

/* ref: FUN_00b6b230 */
GEN_FRAME float10 GEN_STDCALL F_00b6b230(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xb6b230u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = ((float10)GEN_TOD(fcos((float10)param_3)));
  fVar2 = ((float10)GEN_TOD(fsin((float10)param_3)));
  fVar2 = (float10)(float)((float10)param_1 * (float10)(float)fVar2);
  return (float10)((float)GEN_TOF(((float10)(double)((float10)param_2 * (float10)param_1) /
                         (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar2 * fVar2 +
                                                              (float10)(float)((float10)(float)fVar1
                                                                              * (float10)param_2) *
                                                              (float10)(float)((float10)(float)fVar1
                                                                              * (float10)param_2))))))))))
  ;
}

/* ref: FUN_00b6b2b0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b6b2b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6b2b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    piVar1 = *(int * PTR32 *)((int)this + iVar2 * 4);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  return 0;
}

/* ref: FUN_00b6b310 */
GEN_FRAME unsigned int GEN_THISCALL F_00b6b310(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xb6b310u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[6] = param_4;
  fVar1 = ((float)GEN_TOF(((float10)param_6 + ((float10)param_5 + (float10)param_4))));
  *(undefined1 *)(in_ecx + 10) = 1;
  fVar2 = (float10)fVar1;
  in_ecx[4] = param_5;
  in_ecx[2] = fVar1;
  in_ecx[5] = param_6;
  in_ecx[3] = 0.0;
  fVar3 = (float10)((float)GEN_TOF(((float10)(float)((float10)param_3 - (float10)param_2) / fVar2))) * fVar2;
  fVar1 = ((float)GEN_TOF(((fVar3 + fVar3) / (fVar2 + (float10)param_4))));
  fVar2 = (float10)fVar1;
  in_ecx[7] = fVar1;
  if (0.0 < param_5) {
    in_ecx[8] = (float)(fVar2 / (float10)param_5);
  }
  else {
    in_ecx[8] = 0.0;
  }
  if (0.0 < param_6) {
    in_ecx[9] = (float)(-fVar2 / (float10)param_6);
    return;
  }
  in_ecx[9] = 0.0;
  return;
}

/* ref: FUN_00b6b410 */
GEN_FRAME float10 GEN_THISCALL F_00b6b410(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6b410u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float10 fVar1;
  float10 fVar2;
  
  if (in_ecx[3] <= 0.0) {
    return (float10)*in_ecx;
  }
  fVar1 = (float10)in_ecx[3];
  if ((float10)in_ecx[2] <= fVar1) {
    return (float10)in_ecx[1];
  }
  if (fVar1 <= (float10)in_ecx[4]) {
    return (float10)((float)GEN_TOF(((((float10)in_ecx[3] * (float10)in_ecx[3]) * (float10)in_ecx[8]) *
                            (float10)REFG(double, 0x1088108) + (float10)*in_ecx)));
  }
  if (fVar1 <= (float10)in_ecx[4] + (float10)in_ecx[6]) {
    fVar2 = (float10)in_ecx[4];
    return (float10)((float)GEN_TOF((((float10)(float)(fVar1 - fVar2) * (float10)in_ecx[7] +
                            (float10)((float)GEN_TOF((((fVar2 * fVar2) * (float10)in_ecx[8]) *
                                            (float10)REFG(double, 0x1088108))))) + (float10)*in_ecx)));
  }
  fVar2 = (float10)in_ecx[4];
  fVar1 = (float10)((float)GEN_TOF(((fVar1 - fVar2) - (float10)in_ecx[6])));
  return (float10)((float)GEN_TOF((((((float10)in_ecx[9] * fVar1) * fVar1) * (float10)REFG(double, 0x1088108) +
                          ((float10)((float)GEN_TOF(((float10)((float)GEN_TOF((((fVar2 * fVar2) * (float10)in_ecx[8])
                                                            * (float10)REFG(double, 0x1088108)))) +
                                           (float10)in_ecx[7] * (float10)in_ecx[6]))) +
                          fVar1 * (float10)in_ecx[7])) + (float10)*in_ecx)));
}

/* ref: Client::Game::LowCutCamera::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_00b6b540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xb6b540u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 4))))
                    (this + 0x10 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00b6b550 */
GEN_NOFRAME byte GEN_THISCALL F_00b6b550(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6b550u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((!((float10)*(float *)(in_ecx + 0x118) < (float10)*(float *)(in_ecx + 0x114))) &&
     (!((float10)*(float *)(in_ecx + 0x144) < (float10)*(float *)(in_ecx + 0x140)))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00b6b580 */
GEN_NOFRAME byte GEN_THISCALL F_00b6b580(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6b580u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((!((float10)*(float *)(in_ecx + 0x170) < (float10)*(float *)(in_ecx + 0x16c))) &&
     (!((float10)*(float *)(in_ecx + 0x19c) < (float10)*(float *)(in_ecx + 0x198)))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00b6b5b0 */
GEN_NOFRAME byte GEN_THISCALL F_00b6b5b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6b5b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((float10)*(float *)(in_ecx + 0x1c8) < (float10)*(float *)(in_ecx + 0x1c4)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b6b5d0 */
GEN_NOFRAME byte GEN_THISCALL F_00b6b5d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6b5d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((float10)*(float *)(in_ecx + 500) < (float10)*(float *)(in_ecx + 0x1f0)) {
    return 1;
  }
  return 0;
}

/* ref: Client::Game::LobbyCamera::vf8 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b6b5f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6b5f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x2c8) = 0;
  return;
}

/* ref: FUN_00b6b600 */
GEN_FRAME unsigned int GEN_THISCALL F_00b6b600(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb6b600u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (!(param_2 <= 0.0)) {
    *(float *)(in_ecx + 0x294) = param_2;
  }
  return;
}

/* ref: FUN_00b6b620 */
GEN_FRAME unsigned int GEN_THISCALL F_00b6b620(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb6b620u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x2a4) = param_2;
  *(float *)(in_ecx + 0x2b4) =
       ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x294) -
              (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)param_2 -
                                               (float10)*(float *)(in_ecx + 0x294)))) *
                              (float10)*(float *)&REFG(undefined, 0x14c4ee0)))))));
  return;
}

/* ref: FUN_00b6b660 */
GEN_FRAME byte GEN_THISCALL F_00b6b660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb6b660u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x282) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b6b670 */
GEN_FRAME byte GEN_THISCALL F_00b6b670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb6b670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x283) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b6b680 */
GEN_FRAME byte GEN_THISCALL F_00b6b680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb6b680u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x280) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b6b690 */
GEN_NOFRAME byte GEN_THISCALL F_00b6b690(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6b690u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  bool bVar1;
  
  bVar1 = *(char *)(in_ecx + 0x281) == '\0';
  *(bool *)(in_ecx + 0x281) = bVar1;
  return bVar1;
}

/* ref: FUN_00b6b6b0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b6b6b0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb6b6b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x2c4) = param_2;
  return;
}

/* ref: FUN_00b6b6d0 */
GEN_NOFRAME float10 GEN_THISCALL F_00b6b6d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6b6d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x2c4);
}

/* ref: FUN_00b6b6e0 */
GEN_FRAME uint GEN_THISCALL F_00b6b6e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb6b6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined * this_00;
  uint * puVar2;
  undefined4 uVar3;
  
  if (*(int *)((int)this + 0x2c8) == 0) {
    return 0;
  }
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2c8) + 0x24))))
                            (*(int * PTR32 *)((int)this + 0x2c8) GEN_EDX_ARG,param_1)));
  uVar3 = 1;
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG)));
  puVar2 = (uint *)F_00cb0910(this_00 GEN_EDX_ARG,uVar3);
  return *puVar2;
}

/* ref: FUN_00b6b740 */
GEN_FRAME uint GEN_THISCALL F_00b6b740(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6b740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  
  fVar2 = *(float *)((int)this + 0x10c);
  if ((GEN_ISNAN(fVar2) != (GEN_ISNAN(fVar2) || fVar2 == 0.0)) &&
     (fVar2 = *(float *)((int)this + 0x110), GEN_ISNAN(fVar2) != (GEN_ISNAN(fVar2) || fVar2 == 0.0))) {
    return 4;
  }
  fVar2 = F_0053b3a0();
  dVar4 = F_0053b320();
  fVar3 = F_0053b3e0();
  dVar5 = F_0053b360();
  if ((((!((float10)((float)GEN_TOF(ABS((float10)fVar2))) < (float10)((float)GEN_TOF(ABS((float10)(float)dVar4))))) &&
       (!((float10)((float)GEN_TOF(ABS((float10)fVar3))) < (float10)((float)GEN_TOF(ABS((float10)(float)dVar5)))))) &&
      (REFG(int, 0x1375b64) != 1)) &&
     ((uVar1 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x20), (char)uVar1 == '\0' &&
      (uVar1 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x21), (char)uVar1 == '\0')))) {
    return 1;
  }
  return 3;
}

/* ref: FUN_00b6b820 */
GEN_FRAME float10 GEN_STDCALL F_00b6b820(float gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb6b820u, gen_trace_f(gen_a0), gen_a1, gen_a2, gen_a3);
  float param_1 = (float)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (float10)param_1;
  fVar2 = (float10)*(float *)param_3;
  fVar3 = (float10)*param_4;
  fVar4 = (float10)*param_2;
  return (float10)((float)GEN_TOF((((float10)((float)GEN_TOF((((float10)*(float *)(param_3 + 4) *
                                            ((float10)(double)(fVar1 - fVar4) * (fVar1 - fVar3))) /
                                           ((float10)(double)(fVar3 - fVar2) * (fVar4 - fVar2))))) +
                          (float10)((float)GEN_TOF(((((fVar1 - fVar3) * (fVar1 - fVar2)) *
                                           (float10)param_2[1]) /
                                          ((fVar4 - fVar3) * (fVar4 - fVar2)))))) +
                         (float10)((float)GEN_TOF((((float10)param_4[1] *
                                          ((float10)(double)(fVar1 - fVar4) * (fVar1 - fVar2))) /
                                         ((fVar3 - fVar4) * (float10)(double)(fVar3 - fVar2))))))));
}

/* ref: FUN_00b6b910 */
GEN_FRAME uint GEN_THISCALL F_00b6b910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb6b910u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = (undefined4)gen_fl2bits(param_3);
  *(undefined1 *)(param_1 + 7) = (undefined1)param_5;
  if (0.0 < param_4) {
    *param_1 = 1;
    param_1[5] = (undefined4)gen_fl2bits(param_4);
    return param_2;
  }
  *param_1 = 2;
  param_1[5] = 0;
  param_1[3] = (undefined4)gen_fl2bits(param_3);
  return param_2;
}

/* ref: FUN_00b6b970 */
GEN_FRAME unsigned int GEN_THISCALL F_00b6b970(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb6b970u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  if ((param_3 == 0) || (in_ecx[1] == param_3)) {
    if (0.0 < param_2) {
      *in_ecx = 3;
      in_ecx[4] = in_ecx[3];
      in_ecx[6] = (undefined4)gen_fl2bits(param_2);
      return 0;
    }
    *in_ecx = 0;
    in_ecx[3] = 0;
    in_ecx[1] = 0;
  }
  return 0;
}

/* ref: FUN_00b6b9c0 */
GEN_FRAME byte GEN_THISCALL F_00b6b9c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb6b9c0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  int * piVar1;
  char cVar2;
  int iVar3;
  double dVar4;
  uint uVar5;
  float10 fVar6;
  uint local_10;
  
  if (*param_1 == 0) {
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    *param_3 = 0.0;
    param_3[1] = 0.0;
    param_3[2] = 0.0;
    return 0;
  }
  dVar4 = ((double)GEN_TOD(gen_bits2f(param_1[2]))) / *(double *)&REFG(undefined, 0x10f4878);
  piVar1 = (int *)(&REFG(undefined, 0x133d37c) + param_1[1] * 8);
  cVar2 = (&REFG(undefined, 0x133d382))[(int)(param_1[1] * 8)];
  *(undefined4 *)(param_2 + 8) = 0;
  local_10 = (uint)(longlong)TRUNC(dVar4);
  if (cVar2 == '\0') {
    *(undefined4 *)param_2 = *(undefined4 *)(*piVar1 + local_10 * 4);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(*piVar1 + 4 + local_10 * 4);
    *param_3 = *(float *)(*piVar1 + 8 + local_10 * 4);
    param_3[1] = *(float *)(*piVar1 + 0xc + local_10 * 4);
    fVar6 = (float10)*(float *)(*piVar1 + 0x10 + local_10 * 4);
  }
  else {
    iVar3 = *piVar1;
    uVar5 = local_10 >> 1;
    if (((longlong)TRUNC(dVar4) & 1U) == 0) {
      *(undefined4 *)param_2 = *(undefined4 *)(iVar3 + uVar5 * 0x14);
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(*piVar1 + 4 + uVar5 * 0x14);
      *param_3 = *(float *)(*piVar1 + 8 + uVar5 * 0x14);
      param_3[1] = *(float *)(*piVar1 + 0xc + uVar5 * 0x14);
      fVar6 = (float10)*(float *)(*piVar1 + 0x10 + uVar5 * 0x14);
    }
    else {
      fVar6 = (float10)REFG(double, 0x1088108);
      *(float *)param_2 =
           ((float)GEN_TOF((((float10)*(float *)(iVar3 + uVar5 * 0x14) +
                   (float10)*(float *)(iVar3 + 0x14 + uVar5 * 0x14)) * fVar6)));
      *(float *)(param_2 + 4) =
           ((float)GEN_TOF((((float10)*(float *)(*piVar1 + 4 + uVar5 * 0x14) +
                   (float10)*(float *)(*piVar1 + 0x18 + uVar5 * 0x14)) * fVar6)));
      *param_3 = ((float)GEN_TOF((((float10)*(float *)(*piVar1 + 0x1c + uVar5 * 0x14) +
                         (float10)*(float *)(*piVar1 + 8 + uVar5 * 0x14)) * fVar6)));
      param_3[1] = ((float)GEN_TOF((((float10)*(float *)(*piVar1 + 0x20 + uVar5 * 0x14) +
                           (float10)*(float *)(*piVar1 + 0xc + uVar5 * 0x14)) * fVar6)));
      fVar6 = ((float10)*(float *)(*piVar1 + 0x24 + uVar5 * 0x14) +
              (float10)*(float *)(*piVar1 + 0x10 + uVar5 * 0x14)) * fVar6;
    }
  }
  param_3[2] = (float)fVar6;
  fVar6 = ((float10)GEN_TOD(gen_bits2f(param_1[3])));
  *(float *)param_2 = (float)(fVar6 * (float10)*(float *)param_2);
  *(float *)(param_2 + 4) = ((float)GEN_TOF((fVar6 * (float10)*(float *)(param_2 + 4))));
  *(float *)(param_2 + 8) = ((float)GEN_TOF((fVar6 * (float10)*(float *)(param_2 + 8))));
  fVar6 = ((float10)GEN_TOD(gen_bits2f(param_1[3])));
  *param_3 = (float)(fVar6 * (float10)*param_3);
  param_3[1] = (float)((float10)param_3[1] * fVar6);
  param_3[2] = (float)(fVar6 * (float10)param_3[2]);
  return 1;
}

/* ref: FUN_00b6bb60 */
GEN_NOFRAME uint GEN_THISCALL F_00b6bb60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6bb60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f4884));
  F_006906c0((undefined *)((int)this + 0x10) GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00b6bb90 */
GEN_NOFRAME float GEN_THISCALL F_00b6bb90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6bb90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x70) - (float10)*(float *)((int)this + 0x40))));
  (*(float *)(gen_frame + 0x10)) = fVar3;
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x74) - (float10)*(float *)((int)this + 0x44))));
  (*(float *)(gen_frame + 0x14)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x78) - (float10)*(float *)((int)this + 0x48))));
  (*(float *)(gen_frame + 0x18)) = fVar2;
  (*(float *)(gen_frame + 0x0)) = fVar3;
  (*(float *)(gen_frame + 0x4)) = fVar1;
  (*(float *)(gen_frame + 0x8)) = fVar2;
  fVar3 = F_00aae900(&(*(float *)(gen_frame + 0x0)));
  return fVar3;
}

/* ref: FUN_00b6bc50 */
GEN_FRAME byte GEN_THISCALL F_00b6bc50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb6bc50u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  byte bVar1;
  
  bVar1 = F_00b69f10((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[3]));
  return bVar1;
}

/* ref: FUN_00b6bc70 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b6bc70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6bc70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  int iVar5;
  int * this_00;
  float * pfVar6;
  uint uVar7;
  code * pcVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  if (REFG(char, 0x1379c96) == '\0') {
    (*(uint *)(gen_frame + 0x38)) = 0;
    (*(uint *)(gen_frame + 0x2c)) = 0;
    do {
      if (0x13 < (*(uint *)(gen_frame + 0x38))) {
        return 0;
      }
      if (0x157 < *(uint *)((int)this + 0x1ec)) {
        *(undefined4 *)((int)this + 0x1ec) = 0;
      }
      this_00 = (int *)F_00ab1250(*(undefined4 *)((int)this + 0x1ec));
      *(int *)((int)this + 0x1ec) = *(int *)((int)this + 0x1ec) + 1;
      if ((this_00 != (int *)0x0) && (this_00[0x1f] == 0)) {
        fVar1 = gen_bits2f(this_00[0x30]);
        pfVar6 = (float *)&REFG(undefined4, 0x10f3970);
        (*(float *)(gen_frame + 0x34)) = fVar1;
        if (!((double)fVar1 < *(double *)&REFG(undefined, 0x10920a8))) {
          pfVar6 = &(*(float *)(gen_frame + 0x34));
        }
        (*(float *)(gen_frame + 0x3c)) = *pfVar6;
        uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 0xb8))(this_00 GEN_EDX_ARG);
        iVar5 = REFG(int, 0x1379694);
        if (((((char)uVar7 != '\0') &&
             (uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*this_00 + 4))(this_00 GEN_EDX_ARG), this = (*(undefined * PTR32 *)(gen_frame + 0x30)), uVar7 == 8)) &&
            (iVar5 != 0)) &&
           ((*(int * PTR32 *)(iVar5 + 0x2e00) == this_00 &&
            (uVar7 = F_00ab2840((uint)*(byte *)(iVar5 + 0x2e08)), this = (*(undefined * PTR32 *)(gen_frame + 0x30)), uVar7 != 0))))
        {
          bVar4 = *(byte *)(uVar7 + 0x9f);
          (*(float *)(gen_frame + 0x34)) = gen_bits2f((uint)bVar4);
          (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF((((float10)bVar4 / (float10)*(double *)&REFG(undefined, 0x1088118)) *
                            (float10)(*(float *)(gen_frame + 0x3c)))));
        }
        pfVar6 = (float *)F_00a61360(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
        fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x40) - (float10)*pfVar6)));
        (*(float *)(gen_frame + 0x10)) = fVar1;
        fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x44) - (float10)pfVar6[1])));
        (*(float *)(gen_frame + 0x14)) = fVar2;
        fVar3 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x48) - (float10)pfVar6[2])));
        (*(float *)(gen_frame + 0x18)) = fVar3;
        fVar9 = (float10)fVar1;
        fVar10 = (float10)fVar2;
        fVar11 = (float10)fVar3;
        fVar1 = ((float)GEN_TOF((fVar11 * fVar11 + (fVar10 * fVar10 + fVar9 * fVar9))));
        (*(float *)(gen_frame + 0x34)) = fVar1;
        fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
        (*(float *)(gen_frame + 0x34)) = fVar1;
        if ((float10)(*(float *)(gen_frame + 0x3c)) < (float10)fVar1) {
          pcVar8 = *(gen_code32 *)(*this_00 + 0x24);
        }
        else {
          pcVar8 = *(gen_code32 *)(*this_00 + 0x28);
        }
        (*pcVar8)(this_00,3,0);
        (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x38)) + 1;
      }
      uVar7 = (*(uint *)(gen_frame + 0x2c)) + 1;
      (*(uint *)(gen_frame + 0x2c)) = uVar7;
    } while (uVar7 < 0x158);
  }
  return 0;
}

/* ref: FUN_00b6be10 */
GEN_NOFRAME uint GEN_THISCALL F_00b6be10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb6be10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float * pfVar6;
  float * pfVar7;
  
  pfVar6 = param_1;
  pfVar7 = param_2;
  if ((*(int *)((int)this + 0x134) == 0) ||
     (uVar5 = *(int *)((int)this + 0x134) - 1, pfVar6 = param_2, pfVar7 = param_1, uVar5 < 2)) {
    fVar1 = pfVar6[1];
    fVar2 = pfVar7[1];
    fVar3 = pfVar6[2];
    fVar4 = pfVar7[2];
    (*(float *)(gen_frame + 0x0)) = (float)((float10)*pfVar6 - (float10)*pfVar7);
    (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar1 - (float10)fVar2);
    (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar3 - (float10)fVar4);
    uVar5 = F_00b6b0c0(this GEN_EDX_FWD,&(*(float *)(gen_frame + 0x0)));
    fVar1 = pfVar7[1];
    fVar2 = pfVar7[2];
    *pfVar6 = (float)((float10)*pfVar7 + (float10)(*(float *)(gen_frame + 0x0)));
    pfVar6[1] = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x4)));
    pfVar6[2] = (float)((float10)(*(float *)(gen_frame + 0x8)) + (float10)fVar2);
  }
  return uVar5;
}

/* ref: FUN_00b6bec0 */
GEN_FRAME byte GEN_STDCALL F_00b6bec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb6bec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 2;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
  case 4: ;
    iVar2 = 0;
    break;
  case 1: ;
  case 2: ;
  case 3: ;
  case 5: ;
  case 6: ;
    iVar2 = 1;
  }
  if (param_3 == 1) {
LAB_00b6befe: ;
    if (iVar2 != 0) {
      iVar3 = ((char)param_2 == '\0') + 0x6d;
    }
    else {
      iVar3 = ((char)param_2 == '\0') + 0x6b;
    }
  }
  else {
    if (param_3 == 2) {
      if (iVar2 != 0) {
        iVar3 = ((char)param_2 == '\0') + 0x69;
      }
      else {
        iVar3 = ((char)param_2 == '\0') + 0x67;
      }
      goto LAB_00b6bf38;
    }
    if (param_3 == 3) goto LAB_00b6befe;
  }
  if (param_3 == 0) {
    return 0;
  }
LAB_00b6bf38: ;
  uVar1 = F_00414500(*(undefined4 *)(param_4 + 0x10) GEN_EDX_ARG,iVar3);
  return *(int *)(uVar1 + 0x14) != 0;
}

/* ref: FUN_00b6bf70 */
GEN_NOFRAME uint GEN_THISCALL F_00b6bf70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6bf70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = 1;
  if (*(int *)((int)this + 0xe0) == 0) {
    uVar3 = 0;
    if (*(char *)((int)this + 0x198) != '\0') {
      uVar2 = F_005339e0(&REFG(undefined4, 0x1375bc0) GEN_EDX_FWD);
      bVar1 = F_00b6af20(uVar2);
      if (bVar1 != 0) {
        return 4;
      }
    }
    bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    if (((bVar1 != 0) && (uVar2 = F_00b6afa0(), uVar2 != 0)) &&
       (bVar1 = F_00b6af20(uVar2), bVar1 != 0)) {
      return 4;
    }
  }
  else if (*(int *)((int)this + 0xe0) == 1) {
    uVar2 = F_005339e0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    if ((*(char *)((int)this + 0x198) != '\0') && (bVar1 = F_00b6af20(uVar2), bVar1 != 0)) {
      return 5;
    }
    bVar1 = F_00532990(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    if ((bVar1 != 0) && (uVar4 = F_00533c20(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG), uVar4 == 0xe0000000)) {
      F_005479a0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    }
    bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    if (bVar1 == 0) {
      uVar2 = F_00a5f2b0(REFG(undefined4, 0x1379694));
      if (uVar2 != 0) {
        uVar2 = F_00a9fc60(uVar2 GEN_EDX_ARG);
        if ((char)uVar2 != '\0') {
          return 2;
        }
        uVar2 = F_00aea9e0();
        if ((uVar2 != 1) || (bVar1 = F_00ae6960(), bVar1 == 0)) {
          uVar3 = F_00aea9e0();
          return (uVar3 != 1) + 1;
        }
      }
    }
    else {
      uVar2 = F_00b6afa0();
      if ((uVar2 != 0) && (bVar1 = F_00b6af20(uVar2), bVar1 != 0)) {
        uVar2 = F_00aea9e0();
        if (uVar2 == 0) {
          return 6;
        }
        if (uVar2 == 1) {
          return 3;
        }
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00b6c300 */
GEN_NOFRAME byte GEN_STDCALL F_00b6c300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xb6c300u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  byte bVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar3 = *param_3;
  (*(float *)(gen_frame + 0x88)) = fVar3;
  fVar4 = *param_2;
  fVar1 = param_2[2];
  (*(float *)(gen_frame + 0x9c)) = fVar4;
  (*(float *)(gen_frame + 0x0)) = 0.0;
  (*(float *)(gen_frame + 0x4)) = 0.0;
  (*(float *)(gen_frame + 0x8)) = 0.0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  fVar5 = (float)((float10)fVar3 - (float10)fVar4);
  (*(float *)(gen_frame + 0x70)) = fVar5;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  fVar6 = param_3[1];
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(float *)(gen_frame + 0x84)) = fVar6;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  fVar2 = param_2[1];
  (*(float *)(gen_frame + 0x8c)) = fVar2;
  (*(float *)(gen_frame + 0x98)) = fVar1;
  (*(float *)(gen_frame + 0x58)) = fVar2;
  fVar2 = (float)((float10)fVar6 - (float10)fVar2);
  (*(float *)(gen_frame + 0x74)) = fVar2;
  fVar7 = param_3[2];
  (*(float *)(gen_frame + 0x60)) = param_4;
  (*(float *)(gen_frame + 0x8c)) = fVar7;
  (*(float *)(gen_frame + 0x64)) = fVar5;
  (*(float *)(gen_frame + 0x54)) = fVar4;
  (*(float *)(gen_frame + 0x5c)) = fVar1;
  fVar1 = (float)((float10)fVar7 - (float10)fVar1);
  (*(float *)(gen_frame + 0x78)) = fVar1;
  (*(float *)(gen_frame + 0x68)) = fVar2;
  (*(float *)(gen_frame + 0x6c)) = fVar1;
  fVar4 = ((float)GEN_TOF((((float10)fVar5 * (float10)fVar5 + (float10)fVar2 * (float10)fVar2) +
                 (float10)fVar1 * (float10)fVar1)));
  (*(float *)(gen_frame + 0x98)) = fVar4;
  fVar4 = ((float)GEN_TOF(SQRT((float10)fVar4)));
  (*(float *)(gen_frame + 0x98)) = fVar4;
  (*(float *)(gen_frame + 0x9c)) = fVar4;
  fVar10 = (float10)fVar4;
  bVar9 = GEN_ISNAN(fVar10) || GEN_ISNAN((float10)0);
  if (bVar9 != (bVar9 || fVar10 == (float10)0)) {
    *param_1 = fVar3;
    param_1[1] = fVar6;
    param_1[2] = fVar7;
    return 0;
  }
  (*(float *)(gen_frame + 0x98)) = (float)((float10)1 / fVar10);
  fVar11 = (float10)(float)((float10)1 / fVar10);
  (*(float *)(gen_frame + 0x90)) = (float)(fVar11 * (float10)fVar5);
  (*(float *)(gen_frame + 0x94)) = (float)((float10)fVar2 * fVar11);
  (*(float *)(gen_frame + 0x98)) = (float)(fVar11 * (float10)fVar1);
  (*(float *)(gen_frame + 0x64)) = (float)(fVar11 * (float10)fVar5);
  (*(float *)(gen_frame + 0x68)) = (float)((float10)fVar2 * fVar11);
  (*(float *)(gen_frame + 0x6c)) = (float)(fVar11 * (float10)fVar1);
  if ((!GEN_ISNAN(param_5) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_5 <= *(float *)&REFG(undefined, 0x1088114))) {
    (*(float *)(gen_frame + 0x9c)) = param_5;
    fVar10 = (float10)param_5;
  }
  (*(float *)(gen_frame + 0x94)) = 5.73972e-42;
  (*(float *)(gen_frame + 0x98)) = 5.73972e-42;
  bVar8 = F_00551620(*(undefined4 *)(REFG(int, 0x137104c) + 0x25e0) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x54)),&(*(float *)(gen_frame + 0x64)),
                       (float)fVar10,1,&(*(float *)(gen_frame + 0x94)));
  *param_1 = (*(float *)(gen_frame + 0x0));
  param_1[1] = (*(float *)(gen_frame + 0x4));
  param_1[2] = (*(float *)(gen_frame + 0x8));
  return bVar8;
}

/* ref: FUN_00b6c520 */
GEN_NOFRAME uint GEN_STDCALL F_00b6c520(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xb6c520u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(float *)(gen_frame + 0x8)) = param_2;
  F_00b6a690(param_1,&(*(undefined4 *)(gen_frame + 0x0)),param_3,param_4);
  return param_1;
}

/* ref: FUN_00b6c680 */
GEN_FRAME uint GEN_STDCALL F_00b6c680(unsigned int gen_a0)
{
  GEN_ENTER(0xb6c680u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float fVar1;
  uint uVar2;
  
  uVar2 = REFG(undefined4, 0x137104c);
  fVar1 = ((float)GEN_TOF(((float10)*(float *)param_1 - (float10)*(float *)(REFG(undefined4, 0x137104c) + 0x1198))));
  *(float *)param_1 = fVar1;
  if ((float10)fVar1 <= (float10)0) {
    *(undefined4 *)param_1 = 0;
  }
  return uVar2;
}

/* ref: FUN_00b6c6b0 */
GEN_FRAME float F_00b6c6b0(void)
{
  GEN_ENTER(0xb6c6b0u, 0u, 0u, 0u, 0u);
  float fVar1;
  uint uVar2;
  double dVar3;
  
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) * (float10)REFG(float, 0x133d290))));
  uVar2 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x23);
  if ((char)uVar2 != '\0') {
    return ((float)GEN_TOF(-(float10)fVar1));
  }
  uVar2 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x24);
  if ((char)uVar2 != '\0') {
    return fVar1;
  }
  uVar2 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x25);
  if ((char)uVar2 != '\0') {
    dVar3 = F_0053b360();
    return (float)(-(float10)dVar3 * (float10)fVar1);
  }
  uVar2 = F_0053b300();
  if (uVar2 != 0) {
    uVar2 = F_0053b300();
    return (float)((float10)(int)-uVar2 * (float10)*(double *)&REFG(undefined, 0x10919f0));
  }
  return (float)(float10)0;
}

/* ref: FUN_00b6c760 */
GEN_FRAME float GEN_THISCALL F_00b6c760(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6c760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  float local_8;
  
  local_8 = 0.0;
  fVar1 = ((float)GEN_TOF(((((float10)*(float *)((int)this + 0xf4) - (float10)*(float *)((int)this + 0xf8)) *
                  (float10)*(float *)(REFG(int, 0x137104c) + 0x1198)) / (float10)REFG(double, 0x1094800))));
  uVar2 = F_0053b300();
  uVar3 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x23);
  if ((char)uVar3 != '\0') {
    return fVar1;
  }
  uVar3 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x24);
  if ((char)uVar3 != '\0') {
    return gen_bits2f((uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0));
  }
  uVar3 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x25);
  if ((char)uVar3 != '\0') {
    dVar4 = F_0053b360();
    return (float)((float10)dVar4 * (float10)fVar1);
  }
  if (uVar2 != 0) {
    local_8 = (float)((float10)(int)-uVar2 * (float10)*(float *)&REFG(undefined, 0x133d2a0));
  }
  return local_8;
}

/* ref: FUN_00b6c830 */
GEN_FRAME double GEN_THISCALL F_00b6c830(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6c830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  float10 fVar2;
  
  uVar1 = F_00b6bf70(this GEN_EDX_FWD);
  if (uVar1 == 0) {
    fVar2 = F_00aae710(((float)GEN_TOF(((float10)*(float *)((int)this + 0xfc) +
                                (float10)*(double *)&REFG(undefined, 0x1080228)))));
    return (double)fVar2;
  }
  return (double)*(float *)((int)this + 0xfc);
}

/* ref: Client::Game::Camera::vf6 */
GEN_NOFRAME float GEN_THISCALL F_00b6c870(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6c870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x40) - (float10)*(float *)(this + 0x70))));
  fVar4 = *(float *)(this + 0x44);
  fVar1 = *(float *)(this + 0x74);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar4 - (float10)fVar1);
  fVar2 = *(float *)(this + 0x48);
  fVar3 = *(float *)(this + 0x78);
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar2 - (float10)fVar3);
  (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x40) - (float10)*(float *)(this + 0x70))));
  (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar4 - (float10)fVar1);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar2 - (float10)fVar3);
  fVar4 = F_00aae900(&(*(float *)(gen_frame + 0x0)));
  return fVar4;
}

/* ref: Client::Game::Camera::vf5 */
GEN_NOFRAME float GEN_THISCALL F_00b6c8d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6c8d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x70) - (float10)*(float *)(this + 0x40))));
  fVar4 = *(float *)(this + 0x74);
  fVar1 = *(float *)(this + 0x44);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar4 - (float10)fVar1);
  fVar2 = *(float *)(this + 0x78);
  fVar3 = *(float *)(this + 0x48);
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar2 - (float10)fVar3);
  (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x70) - (float10)*(float *)(this + 0x40))));
  (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar4 - (float10)fVar1);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar2 - (float10)fVar3);
  fVar4 = F_00aae920(&(*(float *)(gen_frame + 0x0)));
  return fVar4;
}

/* ref: FUN_00b6c930 */
GEN_NOFRAME uint GEN_THISCALL F_00b6c930(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6c930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b6bf70(this GEN_EDX_FWD);
  if (uVar1 == 3) {
    return 2;
  }
  if (uVar1 != 4) {
    return 0;
  }
  return 3;
}

/* ref: FUN_00b6c950 */
GEN_FRAME uint GEN_THISCALL F_00b6c950(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6c950u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined1 gen_out[0x4];
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  *(undefined4 *)(in_ecx + 0x10) = 0x57;
  *(undefined4 *)(in_ecx + 0x14) = 0x58;
  *(undefined4 *)(in_ecx + 0x18) = 0x59;
  *(undefined4 *)(in_ecx + 4) = 0x5a;
  *(undefined4 *)(in_ecx + 8) = 0x5b;
  *(undefined4 *)(in_ecx + 0xc) = 0x5c;
  *(undefined4 *)(in_ecx + 0x1c) = 0x5d;
  *(undefined4 *)(in_ecx + 0x20) = 0x5e;
  *(undefined4 *)(in_ecx + 0x24) = 0x5f;
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0) GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_00b6cb40 */
GEN_FRAME uint GEN_STDCALL F_00b6cb40(unsigned int gen_a0)
{
  GEN_ENTER(0xb6cb40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  if (REFG(int, 0x137104c) == 0) {
    return 0;
  }
  uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00b6cb70 */
GEN_FRAME uint GEN_STDCALL F_00b6cb70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb6cb70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = 0;
  if (REFG(int, 0x137104c) != 0) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,param_1);
    bVar1 = F_00414ad0(uVar2 GEN_EDX_ARG,param_2);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00b6cba0 */
GEN_FRAME uint GEN_STDCALL F_00b6cba0(unsigned int gen_a0)
{
  GEN_ENTER(0xb6cba0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  if (REFG(int, 0x137104c) == 0) {
    return 0;
  }
  uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,param_1);
  return *(uint *)(uVar1 + 0x14);
}

/* ref: FUN_00b6cbd0 */
GEN_FRAME uint GEN_STDCALL F_00b6cbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb6cbd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 uVar3;
  uint uVar2;
  
  uVar2 = 0;
  if (REFG(int, 0x137104c) != 0) {
    uVar3 = 1;
    this = (undefined *)F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,param_1);
    bVar1 = F_00414a40(this GEN_EDX_ARG,param_2,uVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00b6cc00 */
GEN_FRAME byte GEN_STDCALL F_00b6cc00(unsigned int gen_a0)
{
  GEN_ENTER(0xb6cc00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  if (REFG(int, 0x137104c) == 0) {
    return 0;
  }
  uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,param_1);
  return *(int *)(uVar1 + 0x14) != 0;
}

/* ref: FUN_00b6cc40 */
GEN_FRAME uint GEN_STDCALL F_00b6cc40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb6cc40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  undefined * pvVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined3 extraout_var_00 = 0;
  
  uVar3 = REFG(undefined4, 0x137104c);
  if ((char)param_2 == '\x01') {
    if (REFG(undefined4, 0x137104c) != 0) {
      uVar5 = 1;
      uVar4 = 1;
      pvVar2 = (undefined *)F_00414500(*(undefined4 *)(REFG(undefined4, 0x137104c) + 0x10) GEN_EDX_ARG,param_1);
      bVar1 = F_00414a40(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
      return CONCAT31(extraout_var,bVar1);
    }
  }
  else if (REFG(undefined4, 0x137104c) != 0) {
    uVar5 = 1;
    uVar4 = 0;
    pvVar2 = (undefined *)F_00414500(*(undefined4 *)(REFG(undefined4, 0x137104c) + 0x10) GEN_EDX_ARG,param_1);
    bVar1 = F_00414a40(pvVar2 GEN_EDX_ARG,uVar4,uVar5);
    uVar3 = CONCAT31(extraout_var_00,bVar1);
  }
  return uVar3;
}

/* ref: FUN_00b6ccb0 */
GEN_FRAME uint GEN_THISCALL F_00b6ccb0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb6ccb0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = 0;
  if (REFG(int, 0x137104c) != 0) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_FWD,*param_1);
    bVar1 = F_00414ad0(uVar2 GEN_EDX_ARG,param_2);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00b6cce0 */
GEN_NOFRAME float10 GEN_THISCALL F_00b6cce0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6cce0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (REFG(int, 0x137104c) == 0) {
    return (float10)0;
  }
  uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_FWD,*(undefined4 *)(in_ecx + 4));
  return (float10)*(float *)(uVar1 + 0x14);
}

/* ref: FUN_00b6cd00 */
GEN_FRAME uint GEN_THISCALL F_00b6cd00(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb6cd00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = 0;
  if (REFG(int, 0x137104c) != 0) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_FWD,*(undefined4 *)(param_1 + 4));
    bVar1 = F_00414ad0(uVar2 GEN_EDX_ARG,param_2);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00b6cd50 */
GEN_FRAME uint GEN_THISCALL F_00b6cd50(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb6cd50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = 0;
  if (REFG(int, 0x137104c) != 0) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_FWD,*(undefined4 *)(param_1 + 8));
    bVar1 = F_00414ad0(uVar2 GEN_EDX_ARG,param_2);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00b6cdb0 */
GEN_FRAME uint GEN_STDCALL F_00b6cdb0(unsigned int gen_a0)
{
  GEN_ENTER(0xb6cdb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((char)param_1 == '\x01') {
    if (REFG(int, 0x137104c) == 0) {
      return 0;
    }
    uVar2 = 1;
  }
  else {
    if (REFG(int, 0x137104c) == 0) {
      return 0;
    }
    uVar2 = 0;
  }
  uVar3 = 1;
  this = (undefined *)F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,0x60);
  bVar1 = F_00414a40(this GEN_EDX_ARG,uVar2,uVar3);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00b6cfa0 */
GEN_FRAME float10 GEN_STDCALL F_00b6cfa0(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xb6cfa0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  float fVar1;
  float fVar2;
  float * pfVar3;
  float10 fVar4;
  float10 fVar5;
  
  (*(float *)&gen_args[1]) = (float)((float10)(*(float *)&gen_args[1]) - (float10)(*(float *)&gen_args[0]));
  fVar4 = F_00aae710((*(float *)&gen_args[1]));
  fVar1 = ((float)GEN_TOF(ABS((float10)(float)fVar4)));
  (*(float *)&gen_args[0]) = fVar1;
  pfVar3 = &(*(float *)&gen_args[1]);
  fVar2 = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) * (float10)(*(float *)&gen_args[2]))));
  (*(float *)&gen_args[1]) = fVar2;
  if (!((float10)fVar2 < (float10)fVar1)) {
    pfVar3 = &(*(float *)&gen_args[0]);
  }
  fVar5 = (float10)*pfVar3;
  if (!(*(float *)&REFG(undefined, 0x1088114) <= (float)fVar4)) {
    fVar5 = -fVar5;
  }
  return fVar5;
}

/* ref: FUN_00b6d020 */
GEN_FRAME uint GEN_STDCALL F_00b6d020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb6d020u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00414500(*(undefined4 *)(param_2 + 0x10) GEN_EDX_ARG,*param_1);
  uVar1 = *(uint *)(uVar1 + 0x14);
  if (2 < (int)uVar1) {
    uVar1 = 2;
  }
  return uVar1;
}

/* ref: FUN_00b6d050 */
GEN_FRAME uint GEN_THISCALL F_00b6d050(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6d050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  byte bVar3;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  float10 fVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (REFG(int, 0x1379694) != 0) {
    uVar2 = *(uint *)((int)this + 0x134);
    in_EAX = uVar2;
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 0: ;
    case 4: ;
      bVar3 = F_00ae8ef0((int)this + 0xfc);
      return CONCAT31(extraout_var,bVar3);
    case 1: ;
    case 2: ;
    case 3: ;
    case 5: ;
    case 6: ;
      if (uVar2 < 7) {
        in_EAX = (uint)(&REFG(byte, 0xb6d0e4))[(int)(uVar2)];
        switch((unsigned int)(uintptr_t)(uVar2)) {
        case 0: ;
        case 4: ;
          break;
        default: ;
          pvVar1 = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)((int)this + 0xfc) +
                                  (float10)*(double *)&REFG(undefined, 0x1080228)))))));
          (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
          fVar4 = F_00aae710(((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar1))));
          (*(undefined * PTR32 *)(gen_frame + 0x8)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)fVar4)));
          bVar3 = F_00ae8ef0(&(*(undefined * PTR32 *)(gen_frame + 0x8)));
          in_EAX = CONCAT31(extraout_var_00,bVar3);
        }
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00b6d0f0 */
GEN_FRAME uint GEN_THISCALL F_00b6d0f0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb6d0f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  *(float *)(param_1 + 0x194) = param_2;
  uVar1 = 0;
  if (REFG(int, 0x137104c) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x1a8) + 4))))(param_1 + 0x1a8 GEN_EDX_FWD,REFG(int, 0x137104c));
  }
  return uVar1;
}

/* ref: FUN_00b6d120 */
GEN_FRAME uint GEN_THISCALL F_00b6d120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb6d120u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x70) = *param_2;
  *(undefined4 *)(in_ecx + 0x74) = param_2[1];
  *(undefined4 *)(in_ecx + 0x78) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00b6d140 */
GEN_FRAME uint GEN_THISCALL F_00b6d140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb6d140u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x80) = *param_2;
  *(undefined4 *)(in_ecx + 0x84) = param_2[1];
  *(undefined4 *)(in_ecx + 0x88) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00b6d1a0 */
GEN_FRAME uint GEN_THISCALL F_00b6d1a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb6d1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  
  if (*(int *)((int)this + 0xe0) == 0) {
    bVar2 = F_005374c0(&REFG(undefined4, 0x1375bc0) GEN_EDX_FWD);
    if (bVar2 != 0) {
      return 4;
    }
    uVar3 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x1d);
    uVar4 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x1c);
    if (((char)uVar4 == '\0') && ((char)uVar3 == '\0')) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    bVar7 = GEN_ISNAN(*(float *)((int)this + 0x10c)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
    if (bVar7 == (bVar7 || *(float *)((int)this + 0x10c) == *(float *)&REFG(undefined, 0x1088114))) {
      if (!bVar6) {
        uVar3 = F_00b6a870();
        if (uVar3 == 1) {
          return 4;
        }
        return 1;
      }
      if ((char)uVar3 != '\0') {
        return 1;
      }
      if ((char)uVar4 != '\0') {
        return 4;
      }
      uVar3 = F_00b6d020((int)this + 0x250,param_1);
      bVar2 = F_00b6adb0((uint)*(byte *)((int)this + 0x151),uVar3);
      bVar6 = bVar2 == 0;
      goto LAB_00b6d3e0;
    }
    uVar3 = F_00414500(*(undefined4 *)(param_1 + 0x10) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x250));
    iVar5 = *(int *)(uVar3 + 0x14);
    if (2 < iVar5) {
      iVar5 = 2;
    }
    cVar1 = *(char *)((int)this + 0x151);
    uVar3 = F_00b6a870();
    if (uVar3 != 0) {
      return 4;
    }
    if (iVar5 != 0) {
      if (iVar5 == 1) {
        return 0;
      }
      bVar6 = iVar5 == 2;
      goto LAB_00b6d3e0;
    }
  }
  else {
    if (*(int *)((int)this + 0xe0) != 1) {
      return 4;
    }
    bVar2 = F_005374c0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
    if (bVar2 != 0) {
      return 3;
    }
    uVar3 = F_00aea9e0();
    if (uVar3 != 0) {
      bVar2 = F_00ae6960();
      if (bVar2 == 0) {
        return 3;
      }
      uVar3 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x1d);
      if ((char)uVar3 != '\0') {
        return 1;
      }
      return 3;
    }
    bVar6 = GEN_ISNAN(*(float *)((int)this + 0x10c)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114));
    if (bVar6 == (bVar6 || *(float *)((int)this + 0x10c) == *(float *)&REFG(undefined, 0x1088114))) {
      if (REFG(int, 0x1375b64) == 3) {
        return 1;
      }
      if (((REFG(int, 0x1375b64) != 1) && (uVar3 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x20), (char)uVar3 == '\0'))
         && (uVar3 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x21), (char)uVar3 == '\0')) {
        return 1;
      }
      return 3;
    }
    if ((REFG(int, 0x1375b64) != 3) && (uVar3 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x1c), (char)uVar3 != '\0')) {
      return 3;
    }
    uVar3 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x1d);
    if ((char)uVar3 != '\0') {
      return 3;
    }
    uVar3 = F_00414500(*(undefined4 *)(param_1 + 0x10) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x248));
    iVar5 = *(int *)(uVar3 + 0x14);
    if (2 < iVar5) {
      iVar5 = 2;
    }
    cVar1 = *(char *)((int)this + 0x150);
    uVar3 = F_00b6a870();
    if (uVar3 != 0) {
      return 4;
    }
    if (iVar5 != 0) {
      if (iVar5 == 1) {
        return 0;
      }
      bVar6 = iVar5 == 2;
      goto LAB_00b6d3e0;
    }
  }
  bVar6 = cVar1 == '\0';
LAB_00b6d3e0: ;
  if (!bVar6) {
    return 0;
  }
  return 4;
}

/* ref: FUN_00b6d3f0 */
GEN_FRAME float10 GEN_THISCALL F_00b6d3f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6d3f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)(in_ecx + 0xd0) + 0xa4))) *
                         (float10)REFG(double, 0x1088108))));
}

/* ref: FUN_00b6d410 */
GEN_FRAME float10 GEN_THISCALL F_00b6d410(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6d410u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)((float)GEN_TOF((((float10)*((float *)GEN_TOP((*(int *)(in_ecx + 0xd0) + 0xa4))) *
                          (float10)REFG(double, 0x1088108)) /
                         (float10)*((float *)GEN_TOP((*(int *)(in_ecx + 0xd0) + 0xa8))))));
}

/* ref: FUN_00b6d440 */
GEN_NOFRAME float10 GEN_STDCALL F_00b6d440(float gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xb6d440u, gen_trace_f(gen_a0), gen_a1, gen_a2, gen_trace_f(gen_a3));
  float param_1 = (float)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float * pfVar3;
  float10 fVar4;
  
  (*(float *)(gen_frame + 0x18)) = REFG(float, 0x10f438c);
  (*(float *)(gen_frame + 0x4)) = param_2[1];
  if ((char)param_3 == '\0') {
    (*(float *)(gen_frame + 0x4)) = 0.0;
  }
  fVar1 = ((float)GEN_TOF(((float10)param_2[2] * (float10)param_2[2] +
                 ((float10)(*(float *)(gen_frame + 0x4)) * (float10)(*(float *)(gen_frame + 0x4)) + (float10)*param_2 * (float10)*param_2))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  if ((float10)REFG(float, 0x10947f8) < (float10)fVar1) {
    fVar4 = ((float10)GEN_TOD(fsin((float10)param_1)));
    fVar1 = ((float)GEN_TOF((((float10)(float)fVar4 * (float10)param_4) / (float10)fVar1)));
    (*(float *)(gen_frame + 0x1c)) = fVar1;
    if (((float10)0 <= (float10)fVar1) && (fVar1 <= REFG(float, 0x1087f04))) {
      fVar4 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar1,6)));
      (*(float *)(gen_frame + 0x18)) = (float)((float10)(float)fVar4 + (float10)param_1);
    }
  }
  (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x133d374);
  if ((char)param_3 != '\0') {
    (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x133d378);
  }
  pfVar3 = &(*(float *)(gen_frame + 0x1c));
  if (!((float10)(*(float *)(gen_frame + 0x1c)) < (float10)(*(float *)(gen_frame + 0x18)))) {
    pfVar3 = &(*(float *)(gen_frame + 0x18));
  }
  fVar4 = F_00aae710(*pfVar3);
  return fVar4;
}

/* ref: FUN_00b6d580 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b6d580(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6d580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    puVar1 = *(undefined4 * PTR32 *)((int)this + iVar2 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,1);
      *(undefined4 *)((int)this + iVar2 * 4) = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return;
}

/* ref: FUN_00b6d5b0 */
GEN_NOFRAME unsigned int F_00b6d5b0(void)
{
  GEN_ENTER(0xb6d5b0u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar2)]));
    if (piVar1 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1 GEN_EDX_ARG,3,0);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x158);
  return;
}

/* ref: FUN_00b6d5e0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b6d5e0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb6d5e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  
  if (*(char *)(in_ecx + 0x28) != '\0') {
    fVar1 = ((float)GEN_TOF(((float10)param_2 + (float10)*(float *)(in_ecx + 0xc))));
    *(float *)(in_ecx + 0xc) = fVar1;
    if ((float10)fVar1 < (float10)*(float *)(in_ecx + 8)) {
      *(undefined1 *)(in_ecx + 0x28) = 1;
      return;
    }
    *(undefined1 *)(in_ecx + 0x28) = 0;
  }
  return;
}

/* ref: FUN_00b6d620 */
GEN_NOFRAME uint GEN_THISCALL F_00b6d620(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6d620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f4884));
  F_006906c0((undefined *)((int)this + 0x10) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f48bc));
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0x100) = 0xe0000000;
  *(undefined4 *)((int)this + 0x108) = 0x34;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined1 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined1 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined1 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined1 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined1 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x1f8) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined1 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined1 *)((int)this + 0x214) = 0;
  return (uint)this;
}

/* ref: FUN_00b6d8d0 */
GEN_NOFRAME uint GEN_THISCALL F_00b6d8d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xb6d8d0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  byte bVar8;
  float * pfVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  fVar2 = *param_3;
  fVar1 = param_3[2];
  (*(float *)(gen_frame + 0x30)) = fVar2;
  fVar3 = param_3[1];
  (*(float *)(gen_frame + 0x38)) = fVar1;
  (*(float *)(gen_frame + 0x34)) = fVar3;
  *(float *)(param_1 + 0x1e8) = param_4;
  (*(float * PTR32 *)(gen_frame + 0x54)) = (float *)(param_1 + 0x1e8);
  fVar4 = *param_2;
  (*(float *)(gen_frame + 0x40)) = fVar4;
  fVar5 = param_2[1];
  (*(uint *)(gen_frame + 0x50)) = 0;
  (*(float *)(gen_frame + 0x44)) = fVar5;
  fVar6 = param_2[2];
  (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)) = fVar6;
  (*(double *)(gen_frame + 0x48)) = gen_bits2d(CONCAT44((uint)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4))),(uint)gen_fl2bits(fVar6)));
  fVar2 = (float)((float10)fVar2 - (float10)fVar4);
  (*(float *)(gen_frame + 0x20)) = fVar2;
  fVar3 = (float)((float10)fVar3 - (float10)fVar5);
  (*(float *)(gen_frame + 0x24)) = fVar3;
  fVar1 = (float)((float10)fVar1 - (float10)fVar6);
  (*(float *)(gen_frame + 0x28)) = fVar1;
  (*(float *)(gen_frame + 0x10)) = fVar2;
  (*(float *)(gen_frame + 0x14)) = fVar3;
  (*(float *)(gen_frame + 0x18)) = fVar1;
  (*(float *)(gen_frame + 0x58)) = (float)((float10)param_4 + (float10)REFG(double, 0x1091858));
  pfVar9 = (float *)F_00aaeb70(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x10)),
                                 (float)((float10)param_4 + (float10)REFG(double, 0x1091858)));
  fVar1 = *pfVar9;
  (*(float *)(gen_frame + 0x20)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x40)));
  fVar2 = pfVar9[1];
  (*(float *)(gen_frame + 0x24)) = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x44)));
  fVar3 = pfVar9[2];
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)fVar3 + (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)))));
  (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x44)));
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)fVar3 + (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)))));
  (*(float *)(gen_frame + 0x58)) = *(float *)(param_1 + 0x1b4);
  bVar8 = F_00b6c300(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x10)),*(float *)(param_1 + 0x1b4),REFG(float, 0x1090708));
  if (bVar8 != 0) {
    (*(uint *)(gen_frame + 0x50)) = 1;
    (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x0)) - (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x8)) - (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)))));
    fVar10 = (float10)(float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)(*(float *)(gen_frame + 0x44)));
    fVar11 = (float10)(float)((float10)(*(float *)(gen_frame + 0x0)) - (float10)(*(float *)(gen_frame + 0x40)));
    fVar12 = (float10)((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x8)) - (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)))));
    fVar1 = ((float)GEN_TOF((fVar12 * fVar12 + (fVar11 * fVar11 + fVar10 * fVar10))));
    (*(float *)(gen_frame + 0x58)) = fVar1;
    fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
    (*(float *)(gen_frame + 0x58)) = fVar1;
    *(*(float * PTR32 *)(gen_frame + 0x54)) = fVar1;
    bVar8 = F_00b6c300(&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x10)),*(float *)(param_1 + 0x1b8),REFG(float, 0x1090708));
    if (bVar8 != 0) {
      (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)(*(float *)(gen_frame + 0x40)));
      (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x24)) - (float10)(*(float *)(gen_frame + 0x44)));
      (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x28)) - (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)))));
      fVar10 = (float10)(float)((float10)(*(float *)(gen_frame + 0x24)) - (float10)(*(float *)(gen_frame + 0x44)));
      fVar11 = (float10)(float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)(*(float *)(gen_frame + 0x40)));
      fVar12 = (float10)((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x28)) - (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)))));
      fVar1 = ((float)GEN_TOF((fVar12 * fVar12 + (fVar11 * fVar11 + fVar10 * fVar10))));
      (*(float *)(gen_frame + 0x58)) = fVar1;
      fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
      (*(float *)(gen_frame + 0x58)) = fVar1;
      (*(float *)(gen_frame + 0x5c)) = fVar1;
      fVar2 = *param_2;
      fVar3 = *param_3;
      (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar2 - (float10)fVar3);
      (*(float *)(gen_frame + 0x14)) = (float)((float10)param_2[1] - (float10)param_3[1]);
      (*(float *)(gen_frame + 0x18)) = (float)((float10)param_2[2] - (float10)param_3[2]);
      fVar10 = (float10)(float)((float10)param_2[1] - (float10)param_3[1]);
      fVar11 = (float10)(float)((float10)fVar2 - (float10)fVar3);
      fVar12 = (float10)(float)((float10)param_2[2] - (float10)param_3[2]);
      (*(double *)(gen_frame + 0x48)) = (double)fVar1;
      fVar2 = ((float)GEN_TOF((fVar12 * fVar12 + (fVar11 * fVar11 + fVar10 * fVar10))));
      (*(float *)(gen_frame + 0x58)) = fVar2;
      fVar2 = ((float)GEN_TOF(SQRT((float10)fVar2)));
      (*(float *)(gen_frame + 0x58)) = fVar2;
      if ((double)fVar1 < (double)fVar2) {
        (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x20));
        (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x24));
        (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x28));
        (*(uint *)(gen_frame + 0x50)) = 2;
        pfVar9 = (*(float * PTR32 *)(gen_frame + 0x54));
        if (!((float10)*(*(float * PTR32 *)(gen_frame + 0x54)) < (float10)fVar1)) {
          pfVar9 = &(*(float *)(gen_frame + 0x5c));
        }
        *(*(float * PTR32 *)(gen_frame + 0x54)) = *pfVar9;
      }
    }
  }
  fVar1 = *param_2;
  (*(float *)(gen_frame + 0x5c)) = fVar1;
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)fVar1);
  (*(float *)(gen_frame + 0x10)) = fVar2;
  fVar3 = param_2[1];
  (*(float *)(gen_frame + 0x58)) = fVar3;
  fVar4 = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)fVar3);
  (*(float *)(gen_frame + 0x14)) = fVar4;
  fVar5 = param_2[2];
  (*(float * PTR32 *)(gen_frame + 0x54)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar5)));
  fVar6 = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)fVar5);
  (*(float *)(gen_frame + 0x18)) = fVar6;
  (*(float *)(gen_frame + 0x20)) = fVar2;
  (*(float *)(gen_frame + 0x24)) = fVar4;
  (*(float *)(gen_frame + 0x28)) = fVar6;
  fVar2 = ((float)GEN_TOF((((float10)fVar2 * (float10)fVar2 + (float10)fVar4 * (float10)fVar4) +
                 (float10)fVar6 * (float10)fVar6)));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = fVar2;
  fVar2 = ((float)GEN_TOF(SQRT((float10)fVar2)));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = fVar2;
  if ((double)fVar2 < *(double *)&REFG(undefined, 0x10a1b58)) {
    fVar2 = (float)((float10)*param_3 - (float10)fVar1);
    (*(float *)(gen_frame + 0x30)) = fVar2;
    fVar4 = (float)((float10)param_3[1] - (float10)fVar3);
    (*(float *)(gen_frame + 0x34)) = fVar4;
    fVar6 = (float)((float10)param_3[2] - (float10)fVar5);
    (*(float *)(gen_frame + 0x38)) = fVar6;
    fVar7 = ((float)GEN_TOF(((float10)fVar6 * (float10)fVar6 +
                   ((float10)fVar2 * (float10)fVar2 + (float10)fVar4 * (float10)fVar4))));
    (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = fVar7;
    fVar7 = ((float)GEN_TOF(SQRT((float10)fVar7)));
    (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = fVar7;
    fVar10 = (float10)fVar7;
    if ((float10)0 < fVar10) {
      fVar11 = (float10)*(double *)&REFG(double, 0x10f48e0);
      (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar2 * fVar11);
      (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar4 * fVar11);
      (*(float *)(gen_frame + 0x18)) = (float)(fVar11 * (float10)fVar6);
      fVar2 = ((float)GEN_TOF(((float10)(float)((float10)fVar2 * fVar11) / fVar10)));
      (*(float *)(gen_frame + 0x30)) = fVar2;
      fVar4 = ((float)GEN_TOF(((float10)(float)((float10)fVar4 * fVar11) / fVar10)));
      (*(float *)(gen_frame + 0x34)) = fVar4;
      fVar6 = ((float)GEN_TOF(((float10)(float)(fVar11 * (float10)fVar6) / fVar10)));
      (*(float *)(gen_frame + 0x38)) = fVar6;
      (*(float *)(gen_frame + 0x20)) = fVar2;
      (*(float *)(gen_frame + 0x24)) = fVar4;
      (*(float *)(gen_frame + 0x28)) = fVar6;
    }
  }
  (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x24)));
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar5 + (float10)(*(float *)(gen_frame + 0x28)));
  *param_3 = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x20)));
  param_3[1] = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x24)));
  param_3[2] = (float)((float10)fVar5 + (float10)(*(float *)(gen_frame + 0x28)));
  return (*(uint *)(gen_frame + 0x50));
}

/* ref: FUN_00b6dc90 */
GEN_FRAME uint GEN_THISCALL F_00b6dc90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6dc90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  byte bVar2;
  undefined * this_00;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar3;
  uint extraout_EAX = 0;
  bool bVar4;
  float10 fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  this_00 = (undefined *)F_00424770(REFG(void * PTR32, 0x137104c) GEN_EDX_FWD);
  fVar8 = F_0053b3a0();
  dVar6 = F_0053b320();
  fVar9 = F_0053b3e0();
  dVar7 = F_0053b360();
  bVar4 = GEN_ISNAN((float10)fVar9) || GEN_ISNAN((float10)0);
  if (bVar4 == (bVar4 || (float10)fVar9 == (float10)0)) {
    bVar2 = F_00a34870(this_00 GEN_EDX_ARG,0x11f);
    if (bVar2 != 0) {
      return CONCAT31(extraout_var,bVar2);
    }
  }
  bVar2 = F_00a34150(this_00 GEN_EDX_ARG,2,0,0);
  uVar3 = CONCAT31(extraout_var_00,bVar2);
  if (bVar2 == 0) {
    if ((!((float10)((float)GEN_TOF(ABS((float10)(float)dVar6))) < (float10)((float)GEN_TOF(ABS((float10)fVar8))))) &&
       (!((float10)((float)GEN_TOF(ABS((float10)(float)dVar7))) < (float10)((float)GEN_TOF(ABS((float10)fVar9)))))) {
      return uVar3;
    }
    uVar3 = F_00414500(*((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x10))) GEN_EDX_ARG,
                         *(undefined4 *)((int)this + 0x1c0));
    fVar8 = *(float *)(uVar3 + 0x14);
    fVar1 = (float10)*(float *)&REFG(undefined, 0x133d36c);
    fVar5 = (float10)*(float *)&REFG(undefined, 0x133d368);
    fVar9 = *((float *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x1198)));
    fVar10 = F_0053b3a0();
    fVar11 = F_0053b3e0();
    fVar5 = (float10)((float)GEN_TOF(((float10)(float)((float10)fVar8 * fVar1 + fVar5) * (float10)fVar9)));
    *(float *)((int)this + 0x10c) = (float)(-fVar5 * (float10)fVar10);
    *(float *)((int)this + 0x110) = ((float)GEN_TOF(((fVar5 * (float10)fVar11) * (float10)REFG(double, 0x1088108))));
    uVar3 = extraout_EAX;
  }
  return uVar3;
}

/* ref: FUN_00b6ddd0 */
GEN_NOFRAME float10 GEN_THISCALL F_00b6ddd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6ddd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x74);
}

/* ref: FUN_00b6dde0 */
GEN_FRAME float10 GEN_STDCALL F_00b6dde0(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xb6dde0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  float fVar1;
  float * pfVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = (float10)(*(float *)&gen_args[0]);
  fVar4 = (float10)(float)((float10)(*(float *)&gen_args[1]) - fVar3);
  if ((float10)((float)GEN_TOF(ABS(fVar4))) < (float10)*(float *)&REFG(undefined, 0x133d27c)) {
    return (float10)(*(float *)&gen_args[1]);
  }
  fVar1 = *(float *)(REFG(int, 0x137104c) + 0x1198);
  (*(float *)&gen_args[0]) = REFG(float, 0x1087f04);
  pfVar2 = &(*(float *)&gen_args[1]);
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)fVar1 * (float10)*(double *)&REFG(undefined, 0x10943d8)) *
                 (float10)REFG(double, 0x1094800))));
  (*(float *)&gen_args[1]) = fVar1;
  if (!((float10)fVar1 < (float10)1)) {
    pfVar2 = &(*(float *)&gen_args[0]);
  }
  return (float10)(float)(fVar3 + (float10)*pfVar2 * fVar4);
}

/* ref: FUN_00b6de70 */
GEN_FRAME unsigned int GEN_THISCALL F_00b6de70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6de70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  iVar2 = *(int *)this;
  if (iVar2 != 0) {
    fVar4 = (float10)*(float *)(REFG(int, 0x137104c) + 0x1198);
    if (iVar2 == 1) {
      fVar5 = (float10)*(float *)((int)this + 0x10);
      fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xc) +
                     fVar5 * (fVar4 / (float10)*(float *)((int)this + 0x14)))));
      *(float *)((int)this + 0xc) = fVar1;
      if (fVar5 < (float10)fVar1) {
        *(float *)((int)this + 0xc) = *(float *)((int)this + 0x10);
        *(undefined4 *)this = 2;
      }
    }
    else if ((iVar2 == 3) &&
            (fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xc) -
                            (fVar4 / (float10)*(float *)((int)this + 0x18)) *
                            (float10)*(float *)((int)this + 0x10)))),
            *(float *)((int)this + 0xc) = fVar1, (float10)fVar1 <= (float10)0)) {
      *(undefined4 *)this = 0;
      *(undefined4 *)((int)this + 0xc) = 0;
      *(undefined4 *)((int)this + 4) = 0;
      return 0;
    }
    iVar2 = *(int *)((int)this + 4) * 8;
    if ((&REFG(undefined, 0x133d382))[(int)(iVar2)] == '\0') {
      fVar5 = (float10)(int)(*(ushort *)(&REFG(undefined, 0x133d380) + iVar2) - 1) *
              (float10)*(double *)&REFG(undefined, 0x10f4878);
    }
    else {
      fVar5 = (float10)(int)(*(ushort *)(&REFG(undefined, 0x133d380) + iVar2) - 1) *
              (float10)*(double *)&REFG(undefined, 0x10f4878);
      fVar5 = fVar5 + fVar5;
    }
    fVar3 = (float10)REFG(double, 0x1094438);
    fVar1 = ((float)GEN_TOF((fVar4 + (float10)*(float *)((int)this + 8))));
    fVar4 = (float10)fVar1;
    *(float *)((int)this + 8) = fVar1;
    if (!(fVar4 < (float10)(float)(fVar5 + fVar3))) {
      if (*(char *)((int)this + 0x1c) != '\0') {
        *(float *)((int)this + 8) = ((float)GEN_TOF((fVar4 - (float10)(float)(fVar5 + fVar3))));
        return 0;
      }
      *(undefined4 *)this = 0;
      *(undefined4 *)((int)this + 0xc) = 0;
      *(undefined4 *)((int)this + 4) = 0;
    }
  }
  return 0;
}

/* ref: Client::Game::CameraBase::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00b6dfb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6dfb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  F_006906f0(this + 0x10 GEN_EDX_FWD);
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10a509c)));
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = uVar1;
  *(undefined4 *)(this + 0x48) = uVar2;
  *(uint *)(this + 0x34) = *(uint *)(this + 0x34) | 2;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x74) = uVar1;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f3960)));
  *(undefined4 *)(this + 0x84) = uVar1;
  *((undefined4 *)GEN_TOP((*(int *)(this + 0xd0) + 0xac))) = uVar2;
  *((undefined4 *)GEN_TOP((*(int *)(this + 0xd0) + 0xb0))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((*(int *)(this + 0xd0) + 0xb0))), REFG(float, 0x1094724));
  *((undefined4 *)GEN_TOP((*(int *)(this + 0xd0) + 0xa4))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((*(int *)(this + 0xd0) + 0xa4))), REFG(float, 0x10f38c0));
  uVar3 = F_00690f90(this + 0x10 GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00b6e060 */
GEN_FRAME float F_00b6e060(void)
{
  GEN_ENTER(0xb6e060u, 0u, 0u, 0u, 0u);
  return ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) * (float10)*(double *)&REFG(undefined, 0x10943d8))));
}

/* ref: FUN_00b6e080 */
GEN_FRAME float10 F_00b6e080(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xb6e080u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  float fVar1;
  float * pfVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = (float10)(*(float *)&gen_args[0]);
  fVar4 = (float10)(float)((float10)(*(float *)&gen_args[1]) - fVar3);
  if ((float10)((float)GEN_TOF(ABS(fVar4))) < (float10)REFG(float, 0x10947f8)) {
    return (float10)(*(float *)&gen_args[1]);
  }
  fVar1 = *(float *)(REFG(int, 0x137104c) + 0x1198);
  (*(float *)&gen_args[0]) = REFG(float, 0x1087f04);
  pfVar2 = &(*(float *)&gen_args[1]);
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)fVar1 * (float10)*(double *)&REFG(undefined, 0x10943d8)) *
                 (float10)(*(float *)&gen_args[2]))));
  (*(float *)&gen_args[1]) = fVar1;
  if (!((float10)fVar1 < (float10)1)) {
    pfVar2 = &(*(float *)&gen_args[0]);
  }
  return (float10)(float)(fVar3 + (float10)*pfVar2 * fVar4);
}

/* ref: FUN_00b6e1f0 */
GEN_NOFRAME uint F_00b6e1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xb6e1f0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  bool bVar7;
  float10 fVar8;
  float10 fVar9;
  
  (*(float *)(gen_frame + 0x2c)) = *(float *)(REFG(int, 0x137104c) + 0x1198);
  fVar8 = (float10)param_4;
  fVar9 = (float10)*(float *)(REFG(int, 0x137104c) + 0x1198);
  if (((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar8)) && !(fVar9 < fVar8)) || (!GEN_ISNAN(param_4) && !(0.0 < param_4))) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    return (uint)param_1;
  }
  fVar1 = (float)(fVar9 / fVar8);
  (*(float *)(gen_frame + 0x24)) = fVar1;
  fVar2 = *param_3;
  (*(float *)(gen_frame + 0x2c)) = fVar2;
  fVar3 = (float)((float10)fVar2 - (float10)*param_2);
  (*(float *)(gen_frame + 0x10)) = fVar3;
  fVar4 = (float)((float10)param_3[1] - (float10)param_2[1]);
  (*(float *)(gen_frame + 0x14)) = fVar4;
  fVar5 = (float)((float10)param_3[2] - (float10)param_2[2]);
  (*(float *)(gen_frame + 0x18)) = fVar5;
  (*(float *)(gen_frame + 0x0)) = fVar3;
  (*(float *)(gen_frame + 0x4)) = fVar4;
  (*(float *)(gen_frame + 0x8)) = fVar5;
  fVar3 = ((float)GEN_TOF(((float10)fVar5 * (float10)fVar5 +
                 ((float10)fVar4 * (float10)fVar4 + (float10)fVar3 * (float10)fVar3))));
  (*(float *)(gen_frame + 0x28)) = fVar3;
  fVar3 = ((float)GEN_TOF(SQRT((float10)fVar3)));
  (*(float *)(gen_frame + 0x28)) = fVar3;
  fVar8 = (float10)fVar3;
  bVar7 = GEN_ISNAN(fVar8) || GEN_ISNAN((float10)0);
  if ((bVar7 == (bVar7 || fVar8 == (float10)0)) &&
     (!((float10)fVar1 * fVar8 < (float10)REFG(double, 0x1091858)))) {
    uVar6 = F_004bd7b0(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x0)),fVar1);
    F_004bd670(param_1,param_2,uVar6);
    return (uint)param_1;
  }
  *param_1 = fVar2;
  param_1[1] = param_3[1];
  param_1[2] = param_3[2];
  return (uint)param_1;
}

/* ref: FUN_00b6e330 */
GEN_FRAME float10 F_00b6e330(float gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xb6e330u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  
  if ((!((float10)param_3 <= (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))) && (!(param_3 <= 0.0))) {
    fVar1 = (float10)((float)GEN_TOF(((((float10)param_2 - (float10)param_1) *
                             (float10)*(float *)(REFG(int, 0x137104c) + 0x1198)) / (float10)param_3)));
    if ((float10)((float)GEN_TOF(ABS(fVar1))) < (float10)param_4) {
      return (float10)param_2;
    }
    return (float10)(float)((float10)param_1 + fVar1);
  }
  return (float10)param_2;
}

/* ref: FUN_00b6e3b0 */
GEN_FRAME float10 F_00b6e3b0(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xb6e3b0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  unsigned int gen_args[3];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float * pfVar2;
  float10 fVar3;
  
  fVar1 = *(float *)(REFG(int, 0x137104c) + 0x1198);
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
  pfVar2 = &(*(float *)&gen_args[2]);
  fVar1 = (float)((float10)fVar1 * (float10)*(double *)&REFG(undefined, 0x10943d8));
  (*(float *)(gen_frame + 0x8)) = fVar1;
  (*(float *)&gen_args[2]) = (float)((float10)fVar1 * (float10)(*(float *)&gen_args[2]));
  if (!((float10)(*(float *)&gen_args[2]) < (float10)1)) {
    pfVar2 = &(*(float *)(gen_frame + 0x4));
  }
  fVar3 = F_00aae710((float)((float10)(*(float *)&gen_args[1]) - (float10)(*(float *)&gen_args[0])));
  fVar3 = F_00aae710((float)(fVar3 * (float10)*pfVar2 + (float10)(*(float *)&gen_args[0])));
  return fVar3;
}

/* ref: FUN_00b6e430 */
GEN_FRAME float10 F_00b6e430(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xb6e430u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  float10 fVar2;
  
  fVar1 = *(float *)(REFG(int, 0x137104c) + 0x1198);
  if ((*(float *)&REFG(undefined, 0x1088114) < param_3) && ((float10)fVar1 < (float10)param_3)) {
    fVar2 = F_00aae710((float)((float10)param_2 - (float10)param_1));
    fVar2 = (fVar2 * (float10)fVar1) / (float10)param_3;
  }
  else {
    fVar2 = (float10)param_2 - (float10)param_1;
  }
  fVar2 = F_00aae710((float)fVar2);
  return fVar2;
}

/* ref: FUN_00b6e4a0 */
GEN_FRAME float10 F_00b6e4a0(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xb6e4a0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  float10 fVar2;
  float local_8;
  
  local_8 = param_2;
  fVar1 = *(float *)(REFG(int, 0x137104c) + 0x1198);
  if (((!GEN_ISNAN(param_3) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_3 <= *(float *)&REFG(undefined, 0x1088114))) &&
     ((float10)fVar1 < (float10)param_3)) {
    fVar2 = F_00aae710((float)((float10)param_2 - (float10)param_1));
    local_8 = ((float)GEN_TOF(((fVar2 * (float10)fVar1) / (float10)param_3 + (float10)param_1)));
  }
  return (float10)local_8;
}

/* ref: FUN_00b6e680 */
GEN_NOFRAME uint GEN_THISCALL F_00b6e680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb6e680u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  float * pfVar5;
  float10 fVar6;
  float fVar7;
  
  if (((char)param_3 != '\0') || (*(char *)((int)this + 0x205) != '\0')) {
    fVar7 = *(float *)((int)this + 0x100);
    fVar1 = *(float *)((int)this + 0xfc);
    (*(float *)(gen_frame + 0x10)) = 0.0;
    (*(float *)(gen_frame + 0x14)) = 0.0;
    (*(float *)(gen_frame + 0x18)) = gen_bits2f(*(undefined4 *)((int)this + 0x13c));
    F_00b6a690(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x10)),fVar1,fVar7);
    (*(float *)(gen_frame + 0x30)) = (float)((float10)*param_2 + (float10)(*(float *)(gen_frame + 0x0)));
    (*(float *)(gen_frame + 0x34)) = (float)((float10)param_2[1] + (float10)(*(float *)(gen_frame + 0x4)));
    fVar6 = (float10)param_2[2] + (float10)(*(float *)(gen_frame + 0x8));
    goto LAB_00b6e9c6;
  }
  (*(char *)(gen_frame + 0x5f)) = '\0';
  fVar7 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x230) - (float10)*param_2)));
  (*(float *)(gen_frame + 0x30)) = fVar7;
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x234) - (float10)param_2[1])));
  (*(float *)(gen_frame + 0x34)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x238) - (float10)param_2[2])));
  (*(float *)(gen_frame + 0x38)) = fVar2;
  (*(float *)(gen_frame + 0x20)) = fVar7;
  (*(float *)(gen_frame + 0x24)) = fVar1;
  (*(float *)(gen_frame + 0x28)) = fVar2;
  fVar7 = ((float)GEN_TOF((((float10)fVar7 * (float10)fVar7 + (float10)fVar1 * (float10)fVar1) +
                 (float10)fVar2 * (float10)fVar2)));
  ((float *)(gen_frame + 0x4c))[1] = fVar7;
  fVar7 = ((float)GEN_TOF(SQRT((float10)fVar7)));
  ((float *)(gen_frame + 0x4c))[1] = fVar7;
  iVar3 = *(int *)((int)this + 0x1e4);
  ((float *)(gen_frame + 0x4c))[2] = fVar7;
  (*(float *)(gen_frame + 0x58)) = fVar7;
  if (iVar3 == 0) {
LAB_00b6e760: ;
    if (*(char *)((int)this + 0x1e0) == '\0') {
      if ((!GEN_ISNAN(REFG(float, 0x10f38d0)) && !GEN_ISNAN(fVar7)) && (!(REFG(float, 0x10f38d0) < fVar7) && REFG(uint, 0x10f38d0) != fVar7))
      {
        fVar6 = F_00b6e080(fVar7,REFG(float, 0x10f38d0),REFG(float, 0x10f3960));
        (*(float *)(gen_frame + 0x58)) = (float)fVar6;
        pfVar5 = (float *)((int)this + 0x1e8);
        if ((float10)(float)fVar6 < (float10)*pfVar5) {
          pfVar5 = &(*(float *)(gen_frame + 0x58));
        }
        (*(float *)(gen_frame + 0x58)) = *pfVar5;
        (*(char *)(gen_frame + 0x5f)) = '\x01';
      }
    }
    else {
      (*(float *)(gen_frame + 0x58)) = *(float *)((int)this + 0x13c);
      (*(char *)(gen_frame + 0x5f)) = '\x01';
    }
  }
  else {
    fVar1 = *(float *)((int)this + 0x1e8);
    ((float *)(gen_frame + 0x4c))[1] = fVar1;
    if (!((float10)fVar1 < (float10)fVar7)) goto LAB_00b6e760;
    fVar6 = F_00b6e080(fVar7,fVar1,REFG(float, 0x10f3960));
    (*(float *)(gen_frame + 0x58)) = (float)fVar6;
    (*(char *)(gen_frame + 0x5f)) = '\x01';
  }
  fVar7 = *(float *)((int)this + 0x13c);
  ((float *)(gen_frame + 0x4c))[1] = fVar7;
  if ((float10)fVar7 < (float10)(*(float *)(gen_frame + 0x58))) {
    (*(float *)(gen_frame + 0x58)) = fVar7;
LAB_00b6e80a: ;
    pfVar5 = &(*(float *)(gen_frame + 0x58));
    if (!(*(double *)&REFG(undefined, 0x10a1b58) < (double)(*(float *)(gen_frame + 0x58)))) {
      pfVar5 = (float *)&REFG(float, 0x10f396c);
    }
    (*(float *)(gen_frame + 0x58)) = *pfVar5;
  }
  else if (((*(char *)(gen_frame + 0x5f)) != '\0') ||
          ((!GEN_ISNAN(*(float *)((int)this + 0x154)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
           !(*(float *)((int)this + 0x154) <= *(float *)&REFG(undefined, 0x1088114)))) goto LAB_00b6e80a;
  if ((((REFG(int, 0x1375b64) == 0) && (bVar4 = F_00a9fcf0(param_4 GEN_EDX_ARG), bVar4 == 0)) &&
      (fVar7 = *(float *)((int)this + 0x108), GEN_ISNAN(fVar7) != (GEN_ISNAN(fVar7) || fVar7 == 0.0))) &&
     ((fVar7 = *(float *)((int)this + 0x104), GEN_ISNAN(fVar7) != (GEN_ISNAN(fVar7) || fVar7 == 0.0) &&
      ((!GEN_ISNAN(((float *)(gen_frame + 0x4c))[2]) && !GEN_ISNAN(REFG(float, 0x10947f8))) && !(((float *)(gen_frame + 0x4c))[2] <= REFG(float, 0x10947f8)))))) {
    fVar7 = F_00aae900(&(*(float *)(gen_frame + 0x20)));
    fVar7 = ((float)GEN_TOF(((float10)fVar7 - (float10)*(float *)((int)this + 0xfc))));
    ((float *)(gen_frame + 0x4c))[1] = fVar7;
    fVar6 = F_00aae710(fVar7);
    fVar7 = (float)fVar6;
    ((float *)(gen_frame + 0x4c))[2] = fVar7;
    ((float *)(gen_frame + 0x4c))[1] = ((float)GEN_TOF(ABS((float10)fVar7)));
    if ((double)((float)GEN_TOF(ABS((float10)fVar7))) < *(double *)&REFG(undefined, 0x10f4918)) {
      ((float *)(gen_frame + 0x4c))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x4c))[1], REFG(float, 0x10f4914));
      ((float *)(gen_frame + 0x4c))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x4c))[0], REFG(float, 0x10f4910));
      pfVar5 = ((float *)(gen_frame + 0x4c)) + 2;
      if (!(fVar7 < REFG(float, 0x10f4914))) {
        pfVar5 = ((float *)(gen_frame + 0x4c)) + 1;
      }
      if (!(REFG(float, 0x10f4910) < *pfVar5)) {
        pfVar5 = ((float *)(gen_frame + 0x4c));
      }
      ((float *)(gen_frame + 0x4c))[2] = *pfVar5;
      fVar7 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xfc) + (float10)*pfVar5)));
      ((float *)(gen_frame + 0x4c))[0] = fVar7;
      fVar6 = F_00aae710(fVar7);
      *(float *)((int)this + 0xfc) = (float)fVar6;
    }
  }
  fVar7 = *(float *)((int)this + 0x100);
  fVar1 = *(float *)((int)this + 0xfc);
  (*(float *)(gen_frame + 0x30)) = 0.0;
  (*(float *)(gen_frame + 0x34)) = 0.0;
  (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x58));
  F_00b6a690(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x30)),fVar1,fVar7);
  (*(float *)(gen_frame + 0x30)) = (float)((float10)*param_2 + (float10)(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x34)) = (float)((float10)param_2[1] + (float10)(*(float *)(gen_frame + 0x14)));
  fVar6 = (float10)(*(float *)(gen_frame + 0x18)) + (float10)param_2[2];
LAB_00b6e9c6: ;
  (*(float *)(gen_frame + 0x38)) = (float)fVar6;
  *param_1 = (*(float *)(gen_frame + 0x30));
  param_1[1] = (*(float *)(gen_frame + 0x34));
  param_1[2] = (float)fVar6;
  return (uint)param_1;
}

/* ref: FUN_00b6e9f0 */
GEN_FRAME float10 GEN_STDCALL F_00b6e9f0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xb6e9f0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float * pfVar2;
  float fVar3;
  
  fVar3 = F_00aae920((*(uint *)&gen_args[0]));
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x4)) = 0.0;
  pfVar2 = (float *)&(*(uint *)&gen_args[0]);
  fVar3 = ((float)GEN_TOF((((float10)((float)GEN_TOF(ABS((float10)fVar3))) / (float10)*(double *)&REFG(undefined, 0x1080228)) *
                 (float10)REFG(double, 0x1088108))));
  (*(uint *)&gen_args[0]) = (uint)gen_fl2bits(fVar3);
  if (!((float10)fVar3 < (float10)1)) {
    pfVar2 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(0.0 < *pfVar2)) {
    pfVar2 = &(*(float *)(gen_frame + 0x4));
  }
  fVar3 = *pfVar2;
  (*(uint *)&gen_args[0]) = (uint)gen_fl2bits(fVar3);
  pfVar2 = &(*(float *)&gen_args[1]);
  if (!((float10)(*(float *)&gen_args[1]) < (float10)(*(float *)&gen_args[2]))) {
    pfVar2 = &(*(float *)&gen_args[2]);
  }
  fVar1 = (float)((float10)(*(float *)&gen_args[2]) - (float10)(*(float *)&gen_args[1]));
  (*(float *)(gen_frame + 0x4)) = fVar1;
  fVar1 = ((float)GEN_TOF(ABS((float10)fVar1)));
  (*(float *)(gen_frame + 0x4)) = fVar1;
  return (float10)(float)((float10)fVar1 * (float10)fVar3 + (float10)*pfVar2);
}

/* ref: FUN_00b6ea90 */
GEN_NOFRAME uint GEN_THISCALL F_00b6ea90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0xb6ea90u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  gen_args[3] = gen_a3;
  memcpy(&gen_args[4], &gen_a4, sizeof gen_a4);
  memcpy(&gen_args[5], &gen_a5, sizeof gen_a5);
  memcpy(&gen_args[6], &gen_a6, sizeof gen_a6);
  memcpy(&gen_args[7], &gen_a7, sizeof gen_a7);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float * pfVar1;
  float10 fVar2;
  float fVar3;
  
  fVar3 = F_00aae920((*(undefined4 *)&gen_args[3]));
  (*(float *)(gen_frame + 0x28)) = fVar3;
  fVar3 = F_00aae900((*(undefined4 *)&gen_args[3]));
  (*(float *)(gen_frame + 0x24)) = fVar3;
  (*(float *)(gen_frame + 0x1c)) = (float)((float10)(*(float *)(gen_frame + 0x28)) - (float10)(*(float *)&gen_args[5]));
  fVar2 = F_00aae710((float)((float10)(*(float *)(gen_frame + 0x28)) - (float10)(*(float *)&gen_args[5])));
  (*(float *)(gen_frame + 0x2c)) = (float)fVar2;
  (*(float *)(gen_frame + 0x20)) = gen_bits2f((uint)gen_fl2bits((*(float *)&gen_args[7])) ^ REFG(uint, 0x10920d0));
  pfVar1 = &(*(float *)(gen_frame + 0x2c));
  if (!((float10)(float)fVar2 < (float10)(*(float *)&gen_args[7]))) {
    pfVar1 = &(*(float *)&gen_args[7]);
  }
  if (!(((float10)GEN_TOD(gen_bits2f((uint)gen_fl2bits((*(float *)&gen_args[7])) ^ REFG(uint, 0x10920d0)))) < (float10)*pfVar1)) {
    pfVar1 = &(*(float *)(gen_frame + 0x20));
  }
  fVar3 = *pfVar1;
  (*(float *)(gen_frame + 0x2c)) = fVar3;
  fVar3 = (float)((float10)fVar3 / (float10)(*(float *)&gen_args[7]));
  (*(float *)(gen_frame + 0x1c)) = fVar3;
  fVar2 = (float10)fVar3;
  fVar3 = (float)((float10)1 - fVar2 * fVar2);
  (*(float *)(gen_frame + 0x1c)) = fVar3;
  fVar3 = ((float)GEN_TOF(ABS((float10)fVar3)));
  (*(float *)(gen_frame + 0x1c)) = fVar3;
  fVar3 = ((float)GEN_TOF(SQRT((float10)fVar3)));
  (*(float *)(gen_frame + 0x1c)) = fVar3;
  (*(float *)(gen_frame + 0x1c)) = (*(float *)&gen_args[5]);
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar3 * (float10)(*(float *)&gen_args[6]));
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)&gen_args[5]) - (float10)(*(float *)(gen_frame + 0x28)));
  fVar2 = F_00aae710((float)((float10)(*(float *)&gen_args[5]) - (float10)(*(float *)(gen_frame + 0x28))));
  (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(ABS(fVar2)));
  fVar3 = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0x2c)))));
  (*(float *)(gen_frame + 0x20)) = fVar3;
  if ((float10)fVar3 < (float10)((float)GEN_TOF(ABS(fVar2)))) {
    (*(float *)(gen_frame + 0x1c)) = (float)((float10)(*(float *)(gen_frame + 0x28)) - (float10)(*(float *)(gen_frame + 0x2c)));
  }
  (*(float *)(gen_frame + 0x28)) = (*(float *)&gen_args[4]);
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)&gen_args[4]) - (float10)(*(float *)(gen_frame + 0x24)));
  fVar2 = F_00aae710((float)((float10)(*(float *)&gen_args[4]) - (float10)(*(float *)(gen_frame + 0x24))));
  fVar3 = (float)fVar2;
  (*(float *)(gen_frame + 0x20)) = fVar3;
  (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(ABS((float10)fVar3)));
  fVar2 = (float10)(*(float *)(gen_frame + 0x18));
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(ABS(fVar2)));
  if ((float10)((float)GEN_TOF(ABS(fVar2))) < (float10)((float)GEN_TOF(ABS((float10)fVar3)))) {
    if (0.0 <= fVar3) {
      (*(float *)(gen_frame + 0x28)) = (float)(fVar2 + (float10)(*(float *)(gen_frame + 0x24)));
    }
    else {
      (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x24)) - fVar2);
    }
  }
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(float *)(gen_frame + 0x8)) = (*(float *)&gen_args[2]);
  F_00b6a690((*(uint *)&gen_args[1]),&(*(undefined4 *)(gen_frame + 0x0)),(*(float *)(gen_frame + 0x28)),(*(float *)(gen_frame + 0x1c)));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_00b6ec30 */
GEN_NOFRAME byte GEN_THISCALL F_00b6ec30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6ec30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar6;
  float * pfVar7;
  float10 fVar8;
  
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x40) - (float10)*(float *)((int)this + 0x70))));
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x44) - (float10)*(float *)((int)this + 0x74))));
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x48) - (float10)*(float *)((int)this + 0x78))));
  (*(float *)(gen_frame + 0x8)) = fVar3;
  (*(float *)(gen_frame + 0x10)) = fVar1;
  (*(float *)(gen_frame + 0x14)) = fVar2;
  (*(float *)(gen_frame + 0x18)) = fVar3;
  fVar1 = ((float)GEN_TOF((((float10)fVar1 * (float10)fVar1 + (float10)fVar2 * (float10)fVar2) +
                 (float10)fVar3 * (float10)fVar3)));
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  if (*(double *)&REFG(undefined, 0x10a1b58) < (double)fVar1) {
    pfVar7 = (float *)F_004bd580(&(*(float *)(gen_frame + 0x10)) GEN_EDX_FWD);
    fVar1 = *pfVar7;
    (*(float *)(gen_frame + 0x10)) = fVar1;
    fVar2 = pfVar7[1];
    (*(float *)(gen_frame + 0x14)) = fVar2;
    fVar3 = pfVar7[2];
    (*(float *)(gen_frame + 0x18)) = fVar3;
    fVar4 = ((float)GEN_TOF(((float10)REFG(float, 0x1302c88) * (float10)fVar3 +
                   ((float10)REFG(float, 0x1302c80) * (float10)fVar1 + (float10)REFG(float, 0x1302c84) * (float10)fVar2)
                   )));
    (*(float *)(gen_frame + 0x2c)) = fVar4;
    fVar8 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar4,7)));
    fVar4 = (float)fVar8;
    (*(float *)(gen_frame + 0x2c)) = fVar4;
    if (((float10)fVar4 < (float10)*(float *)&REFG(undefined, 0x133d35c)) &&
       ((!GEN_ISNAN(fVar4) && !GEN_ISNAN(REFG(float, 0x10947f8))) && !(fVar4 <= REFG(float, 0x10947f8)))) {
      *(float *)((int)this + 0x160) = fVar1;
      *(float *)((int)this + 0x164) = fVar2;
      *(float *)((int)this + 0x168) = fVar3;
    }
  }
  F_0054ce40(&(*(float *)(gen_frame + 0x10)),(int)this + 0x160U,0x1302c80);
  bVar6 = F_0054ce40(&(*(float *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x10)),(int)this + 0x160U);
  *(float *)((int)this + 0x80) = (*(float *)(gen_frame + 0x0));
  *(float *)((int)this + 0x84) = (*(float *)(gen_frame + 0x4));
  *(float *)((int)this + 0x88) = (*(float *)(gen_frame + 0x8));
  return bVar6;
}

/* ref: FUN_00b6eda0 */
GEN_NOFRAME uint GEN_THISCALL F_00b6eda0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb6eda0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  byte bVar8;
  float * pfVar9;
  uint uVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  
  fVar2 = *param_3;
  fVar1 = param_3[2];
  (*(float *)(gen_frame + 0x30)) = fVar2;
  fVar3 = param_3[1];
  (*(float *)(gen_frame + 0x34)) = fVar3;
  (*(float *)(gen_frame + 0x38)) = fVar1;
  *(float *)(param_1 + 0x1e8) = param_4;
  (*(float * PTR32 *)(gen_frame + 0x58)) = (float *)(param_1 + 0x1e8);
  fVar4 = *param_2;
  (*(float *)(gen_frame + 0x40)) = fVar4;
  fVar5 = param_2[1];
  (*(uint *)(gen_frame + 0x50)) = 0;
  (*(float *)(gen_frame + 0x44)) = fVar5;
  fVar6 = param_2[2];
  (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)) = fVar6;
  (*(double *)(gen_frame + 0x48)) = gen_bits2d(CONCAT44((uint)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4))),(uint)gen_fl2bits(fVar6)));
  fVar2 = (float)((float10)fVar2 - (float10)fVar4);
  (*(float *)(gen_frame + 0x20)) = fVar2;
  fVar3 = (float)((float10)fVar3 - (float10)fVar5);
  (*(float *)(gen_frame + 0x24)) = fVar3;
  fVar1 = (float)((float10)fVar1 - (float10)fVar6);
  (*(float *)(gen_frame + 0x28)) = fVar1;
  (*(float *)(gen_frame + 0x10)) = fVar2;
  (*(float *)(gen_frame + 0x14)) = fVar3;
  (*(float *)(gen_frame + 0x18)) = fVar1;
  (*(float *)(gen_frame + 0x54)) = (float)((float10)param_4 + (float10)REFG(double, 0x1091858));
  pfVar9 = (float *)F_00aaeb70(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x10)),
                                 (float)((float10)param_4 + (float10)REFG(double, 0x1091858)));
  fVar2 = *pfVar9;
  fVar1 = *(float *)(param_1 + 0x1b4);
  (*(float *)(gen_frame + 0x20)) = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x54)) = fVar1;
  fVar1 = pfVar9[1];
  (*(float *)(gen_frame + 0x24)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x44)));
  fVar3 = pfVar9[2];
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)fVar3 + (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)))));
  (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x44)));
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)fVar3 + (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)))));
  uVar10 = F_00aa0f90(param_5 GEN_EDX_ARG);
  if ((char)uVar10 != '\0') {
    (*(float *)(gen_frame + 0x54)) = REFG(float, 0x10f3968);
  }
  bVar8 = F_00b6c300(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x10)),(*(float *)(gen_frame + 0x54)),REFG(float, 0x1090708));
  if (bVar8 != 0) {
    (*(uint *)(gen_frame + 0x50)) = 1;
    (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x0)) - (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x8)) - (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)))));
    fVar11 = (float10)(float)((float10)(*(float *)(gen_frame + 0x4)) - (float10)(*(float *)(gen_frame + 0x44)));
    fVar12 = (float10)(float)((float10)(*(float *)(gen_frame + 0x0)) - (float10)(*(float *)(gen_frame + 0x40)));
    fVar13 = (float10)((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x8)) - (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)))));
    fVar1 = ((float)GEN_TOF((fVar13 * fVar13 + (fVar12 * fVar12 + fVar11 * fVar11))));
    (*(float *)(gen_frame + 0x54)) = fVar1;
    fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
    (*(float *)(gen_frame + 0x54)) = fVar1;
    *(*(float * PTR32 *)(gen_frame + 0x58)) = fVar1;
    bVar8 = F_00b6c300(&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x10)),*(float *)(param_1 + 0x1b8),REFG(float, 0x1090708));
    if (bVar8 != 0) {
      (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)(*(float *)(gen_frame + 0x40)));
      (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x24)) - (float10)(*(float *)(gen_frame + 0x44)));
      (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x28)) - (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)))));
      fVar11 = (float10)(float)((float10)(*(float *)(gen_frame + 0x24)) - (float10)(*(float *)(gen_frame + 0x44)));
      fVar12 = (float10)(float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)(*(float *)(gen_frame + 0x40)));
      fVar13 = (float10)((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x28)) - (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 0)))));
      fVar1 = ((float)GEN_TOF((fVar13 * fVar13 + (fVar12 * fVar12 + fVar11 * fVar11))));
      (*(float *)(gen_frame + 0x54)) = fVar1;
      fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
      (*(float *)(gen_frame + 0x54)) = fVar1;
      (*(float *)(gen_frame + 0x5c)) = fVar1;
      fVar2 = *param_2;
      fVar3 = *param_3;
      (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar2 - (float10)fVar3);
      (*(float *)(gen_frame + 0x14)) = (float)((float10)param_2[1] - (float10)param_3[1]);
      (*(float *)(gen_frame + 0x18)) = (float)((float10)param_2[2] - (float10)param_3[2]);
      fVar11 = (float10)(float)((float10)param_2[1] - (float10)param_3[1]);
      fVar12 = (float10)(float)((float10)fVar2 - (float10)fVar3);
      fVar13 = (float10)(float)((float10)param_2[2] - (float10)param_3[2]);
      (*(double *)(gen_frame + 0x48)) = (double)fVar1;
      fVar2 = ((float)GEN_TOF((fVar13 * fVar13 + (fVar12 * fVar12 + fVar11 * fVar11))));
      (*(float *)(gen_frame + 0x54)) = fVar2;
      fVar2 = ((float)GEN_TOF(SQRT((float10)fVar2)));
      (*(float *)(gen_frame + 0x54)) = fVar2;
      if ((double)fVar1 < (double)fVar2) {
        (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x20));
        (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x24));
        (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x28));
        (*(uint *)(gen_frame + 0x50)) = 2;
        pfVar9 = (*(float * PTR32 *)(gen_frame + 0x58));
        if (!((float10)*(*(float * PTR32 *)(gen_frame + 0x58)) < (float10)fVar1)) {
          pfVar9 = &(*(float *)(gen_frame + 0x5c));
        }
        *(*(float * PTR32 *)(gen_frame + 0x58)) = *pfVar9;
      }
    }
  }
  fVar1 = *param_2;
  (*(float *)(gen_frame + 0x5c)) = fVar1;
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)fVar1);
  (*(float *)(gen_frame + 0x10)) = fVar2;
  fVar3 = param_2[1];
  (*(float * PTR32 *)(gen_frame + 0x58)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar3)));
  fVar4 = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)fVar3);
  (*(float *)(gen_frame + 0x14)) = fVar4;
  fVar5 = param_2[2];
  (*(float *)(gen_frame + 0x54)) = fVar5;
  fVar6 = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)fVar5);
  (*(float *)(gen_frame + 0x18)) = fVar6;
  (*(float *)(gen_frame + 0x20)) = fVar2;
  (*(float *)(gen_frame + 0x24)) = fVar4;
  (*(float *)(gen_frame + 0x28)) = fVar6;
  fVar2 = ((float)GEN_TOF((((float10)fVar2 * (float10)fVar2 + (float10)fVar4 * (float10)fVar4) +
                 (float10)fVar6 * (float10)fVar6)));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = fVar2;
  fVar2 = ((float)GEN_TOF(SQRT((float10)fVar2)));
  (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = fVar2;
  if ((double)fVar2 < *(double *)&REFG(undefined, 0x10a1b58)) {
    fVar2 = (float)((float10)*param_3 - (float10)fVar1);
    (*(float *)(gen_frame + 0x30)) = fVar2;
    fVar4 = (float)((float10)param_3[1] - (float10)fVar3);
    (*(float *)(gen_frame + 0x34)) = fVar4;
    fVar6 = (float)((float10)param_3[2] - (float10)fVar5);
    (*(float *)(gen_frame + 0x38)) = fVar6;
    fVar7 = ((float)GEN_TOF(((float10)fVar6 * (float10)fVar6 +
                   ((float10)fVar2 * (float10)fVar2 + (float10)fVar4 * (float10)fVar4))));
    (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = fVar7;
    fVar7 = ((float)GEN_TOF(SQRT((float10)fVar7)));
    (*(float *)((char *)&(*(double *)(gen_frame + 0x48)) + 4)) = fVar7;
    fVar11 = (float10)fVar7;
    if ((float10)0 < fVar11) {
      fVar12 = (float10)*(double *)&REFG(double, 0x10f48e0);
      (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar2 * fVar12);
      (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar4 * fVar12);
      (*(float *)(gen_frame + 0x18)) = (float)(fVar12 * (float10)fVar6);
      fVar2 = ((float)GEN_TOF(((float10)(float)((float10)fVar2 * fVar12) / fVar11)));
      (*(float *)(gen_frame + 0x30)) = fVar2;
      fVar4 = ((float)GEN_TOF(((float10)(float)((float10)fVar4 * fVar12) / fVar11)));
      (*(float *)(gen_frame + 0x34)) = fVar4;
      fVar6 = ((float)GEN_TOF(((float10)(float)(fVar12 * (float10)fVar6) / fVar11)));
      (*(float *)(gen_frame + 0x38)) = fVar6;
      (*(float *)(gen_frame + 0x20)) = fVar2;
      (*(float *)(gen_frame + 0x24)) = fVar4;
      (*(float *)(gen_frame + 0x28)) = fVar6;
    }
  }
  (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x24)));
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar5 + (float10)(*(float *)(gen_frame + 0x28)));
  *param_3 = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x20)));
  param_3[1] = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x24)));
  param_3[2] = (float)((float10)fVar5 + (float10)(*(float *)(gen_frame + 0x28)));
  return (*(uint *)(gen_frame + 0x50));
}

/* ref: FUN_00b6f180 */
GEN_NOFRAME uint GEN_THISCALL F_00b6f180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb6f180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  float fVar1;
  float fVar2;
  uint uVar3;
  float * pfVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  
  (*(uint *)(gen_frame + 0xdc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xe0);
  (*(float * PTR32 *)(gen_frame + 0x4c)) = param_2;
  if (0.0 < *(float *)((int)this + 0x154)) {
    (*(float *)(gen_frame + 0x60)) = (float)((float10)*param_1 - (float10)*param_2);
    fVar7 = param_1[1];
    fVar6 = param_2[1];
    (*(float *)(gen_frame + 0x64)) = (float)((float10)fVar7 - (float10)fVar6);
    fVar1 = param_1[2];
    fVar2 = param_2[2];
    (*(float *)(gen_frame + 0x68)) = (float)((float10)fVar1 - (float10)fVar2);
    (*(float *)(gen_frame + 0x50)) = (float)((float10)*param_1 - (float10)*param_2);
    (*(float *)(gen_frame + 0x54)) = (float)((float10)fVar7 - (float10)fVar6);
    (*(float *)(gen_frame + 0x58)) = (float)((float10)fVar1 - (float10)fVar2);
    fVar7 = F_00aae900(&(*(float *)(gen_frame + 0x50)));
    (*(float *)(gen_frame + 0x7c)) = fVar7;
    fVar7 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x70) - (float10)*(float *)((int)this + 0x40))));
    (*(float *)(gen_frame + 0x60)) = fVar7;
    fVar6 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x74) - (float10)*(float *)((int)this + 0x44))));
    (*(float *)(gen_frame + 0x64)) = fVar6;
    fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x78) - (float10)*(float *)((int)this + 0x48))));
    (*(float *)(gen_frame + 0x68)) = fVar1;
    (*(float *)(gen_frame + 0x30)) = fVar7;
    (*(float *)(gen_frame + 0x34)) = fVar6;
    (*(float *)(gen_frame + 0x38)) = fVar1;
    fVar7 = F_00aae900(&(*(float *)(gen_frame + 0x30)));
    (*(float *)(gen_frame + 0x84)) = fVar7;
    fVar7 = F_00aae920(&(*(float *)(gen_frame + 0x50)));
    (*(float *)(gen_frame + 0x78)) = fVar7;
    if ((char)param_3 != '\0') {
      fVar7 = F_00aae920(&(*(float *)(gen_frame + 0x30)));
      (*(float *)(gen_frame + 0x8c)) = fVar7;
      (*(float *)(gen_frame + 0x8c)) = (float)((float10)fVar7 - (float10)(*(float *)(gen_frame + 0x78)));
      fVar5 = F_00aae710((float)((float10)fVar7 - (float10)(*(float *)(gen_frame + 0x78))));
      *(float *)((int)this + 0x1a0) = (float)fVar5;
      (*(float *)(gen_frame + 0x8c)) = (float)((float10)(*(float *)(gen_frame + 0x84)) - (float10)(*(float *)(gen_frame + 0x7c)));
      fVar5 = F_00aae710((float)((float10)(*(float *)(gen_frame + 0x84)) - (float10)(*(float *)(gen_frame + 0x7c))));
      *(float *)((int)this + 0x19c) = (float)fVar5;
    }
    fVar7 = *(float *)((int)this + 0x154);
    (*(float *)(gen_frame + 0x84)) = *(float *)((int)this + 0x1a0);
    (*(float *)(gen_frame + 0x80)) = fVar7;
    fVar6 = 0.0;
    (*(float *)(gen_frame + 0x88)) = *(float *)(REFG(int, 0x137104c) + 0x1198);
    if ((0.0 < fVar7) && ((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) < (float10)fVar7)) {
      fVar7 = ((float)GEN_TOF(((float10)0 - (float10)*(float *)((int)this + 0x1a0))));
      (*(float *)(gen_frame + 0x8c)) = fVar7;
      fVar5 = F_00aae710(fVar7);
      fVar6 = ((float)GEN_TOF(((fVar5 * (float10)(*(float *)(gen_frame + 0x88))) / (float10)(*(float *)(gen_frame + 0x80)) + (float10)(*(float *)(gen_frame + 0x84)))));
      (*(float *)(gen_frame + 0x8c)) = fVar6;
    }
    *(float *)((int)this + 0x1a0) = fVar6;
    (*(float *)(gen_frame + 0x8c)) = *(float *)((int)this + 0x19c);
    fVar7 = *(float *)((int)this + 0x154);
    (*(float *)(gen_frame + 0x80)) = fVar7;
    (*(float *)(gen_frame + 0x88)) = 0.0;
    (*(float *)(gen_frame + 0x84)) = *(float *)(REFG(int, 0x137104c) + 0x1198);
    if ((0.0 < fVar7) && ((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) < (float10)fVar7)) {
      fVar7 = ((float)GEN_TOF(((float10)0 - (float10)*(float *)((int)this + 0x19c))));
      (*(float *)(gen_frame + 0x88)) = fVar7;
      fVar5 = F_00aae710(fVar7);
      (*(float *)(gen_frame + 0x88)) = ((float)GEN_TOF(((fVar5 * (float10)(*(float *)(gen_frame + 0x84))) / (float10)(*(float *)(gen_frame + 0x80)) + (float10)(*(float *)(gen_frame + 0x8c)))));
    }
    fVar7 = (float)(float10)0;
    *(float *)((int)this + 0x19c) = (*(float *)(gen_frame + 0x88));
    fVar5 = (float10)(*(float *)(gen_frame + 0x7c));
    (*(float *)(gen_frame + 0x7c)) = (float)((float10)(*(float *)(gen_frame + 0x88)) + fVar5);
    fVar5 = F_00aae710((float)((float10)(*(float *)(gen_frame + 0x88)) + fVar5));
    fVar6 = (float)fVar5;
    fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x1a0) + (float10)(*(float *)(gen_frame + 0x78)))));
    (*(float *)(gen_frame + 0x78)) = fVar1;
    fVar5 = F_00aae710(fVar1);
    F_00666d70(((undefined1 *)(gen_frame + 0x90)) GEN_EDX_ARG,(float)fVar5,fVar6,fVar7);
    (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c90)));
    (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c94)));
    (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c98)));
    uVar3 = F_00aaeb70(((undefined1 *)(gen_frame + 0x10)),&(*(undefined4 *)(gen_frame + 0x20)),(float)(float10)1);
    pfVar4 = (float *)F_004ee670(((undefined1 *)(gen_frame + 0x0)),uVar3,(uint)((undefined1 *)(gen_frame + 0x90)));
    (*(float *)(gen_frame + 0x60)) = *pfVar4;
    fVar7 = pfVar4[1];
    (*(float *)(gen_frame + 0x64)) = fVar7;
    fVar6 = pfVar4[2];
    (*(float *)(gen_frame + 0x68)) = fVar6;
    fVar1 = (float)((float10)*pfVar4 + (float10)*(*(float * PTR32 *)(gen_frame + 0x4c)));
    (*(float *)(gen_frame + 0x50)) = fVar1;
    fVar7 = (float)((float10)fVar7 + (float10)(*(float * PTR32 *)(gen_frame + 0x4c))[1]);
    (*(float *)(gen_frame + 0x54)) = fVar7;
    fVar6 = (float)((float10)(*(float * PTR32 *)(gen_frame + 0x4c))[2] + (float10)fVar6);
    (*(float *)(gen_frame + 0x58)) = fVar6;
    *param_1 = fVar1;
    param_1[1] = fVar7;
    param_1[2] = fVar6;
    pfVar4 = (*(float * PTR32 *)(gen_frame + 0x4c));
  }
  else {
    *(undefined4 *)((int)this + 0x1a0) = 0;
    *(undefined4 *)((int)this + 0x19c) = 0;
    pfVar4 = param_2;
  }
  (*(float * PTR32 *)(gen_frame + 0x4c)) = pfVar4;
  F_00c47745((*(uint *)(gen_frame + 0xdc)) ^ (uint)(uint)(gen_frame + 0xe0) GEN_EDX_ARG);
  return (uint)pfVar4;
}

/* ref: FUN_00b6f4c0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b6f4c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb6f4c0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  float * pfVar1;
  float fVar2;
  float fVar5;
  float fVar6;
  uint uVar7;
  float * pfVar8;
  float10 fVar9;
  double dVar10;
  float fVar3;
  float fVar4;
  
  switch((unsigned int)(uintptr_t)((*(undefined4 *)&gen_args[1]))) {
  case 0: ;
    *(undefined4 *)((*(int *)&gen_args[0]) + 0x120) = 0;
    *(undefined4 *)((*(int *)&gen_args[0]) + 0x124) = 0;
    goto switchD_00b6f4d2_default;
  case 1: ;
    uVar7 = F_00414500(*(undefined4 *)((*(uint *)&gen_args[4]) + 0x10) GEN_EDX_FWD,*(undefined4 *)((*(int *)&gen_args[0]) + 0x1bc));
    (*(uint *)&gen_args[4]) = (uint)gen_fl2bits(((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)REFG(double, 0x1088108) +
                                                        (float10)*(float *)(uVar7 + 0x14) *
                                                        (float10)REFG(double, 0x1088108)))) *
                                       (float10)*(float *)(REFG(int, 0x137104c) + 0x1198)))));
    uVar7 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x20);
    if ((char)uVar7 == '\0') {
      uVar7 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x21);
      if ((char)uVar7 != '\0') {
        fVar9 = (float10)*(float *)((*(int *)&gen_args[0]) + 0x120) -
                ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) * (float10)(*(float *)&gen_args[2]);
        goto LAB_00b6f560;
      }
    }
    else {
      fVar9 = ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) * (float10)(*(float *)&gen_args[2]) + (float10)*(float *)((*(int *)&gen_args[0]) + 0x120)
      ;
LAB_00b6f560: ;
      *(float *)((*(int *)&gen_args[0]) + 0x120) = (float)fVar9;
    }
    uVar7 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x1e);
    if ((char)uVar7 != '\0') {
      fVar9 = ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4]))));
      goto LAB_00b6f682;
    }
    uVar7 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x1f);
    if ((char)uVar7 == '\0') goto switchD_00b6f4d2_default;
    fVar9 = (float10)*(float *)((*(int *)&gen_args[0]) + 0x124) - ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) * (float10)(*(float *)&gen_args[3]);
    break;
  case 2: ;
    dVar10 = F_0053b320();
    (*(uint *)&gen_args[4]) = (uint)gen_fl2bits((float)dVar10);
    (*(float *)&gen_args[2]) = (float)(-((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) * (float10)(*(float *)&gen_args[2]));
    fVar9 = F_00b6e080(*(float *)((*(int *)&gen_args[0]) + 0x120),(*(float *)&gen_args[2]),REFG(float, 0x10f396c));
    *(float *)((*(int *)&gen_args[0]) + 0x120) = (float)fVar9;
    dVar10 = F_0053b360();
    (*(float *)&gen_args[2]) = (float)((float10)(float)dVar10 * (float10)(*(float *)&gen_args[3]));
    fVar9 = F_00b6e080(*(float *)((*(int *)&gen_args[0]) + 0x124),(*(float *)&gen_args[2]),REFG(float, 0x10f396c));
    break;
  case 3: ;
    uVar7 = F_00414500(*(undefined4 *)((*(uint *)&gen_args[4]) + 0x10) GEN_EDX_ARG,*(undefined4 *)((*(int *)&gen_args[0]) + 0x1c4));
    (*(uint *)&gen_args[4]) = (uint)gen_fl2bits(((float)GEN_TOF((((float10)1 - (float10)*(float *)(uVar7 + 0x14)) *
                                        (float10)*(double *)&REFG(undefined, 0x10df708) +
                                       (float10)*(double *)&REFG(undefined, 0x10d57f0)))));
    uVar7 = F_00535e40(&REFG(undefined, 0x1375b30) GEN_EDX_ARG);
    *(float *)((*(int *)&gen_args[0]) + 0x120) =
         ((float)GEN_TOF((((float10)(int)uVar7 / ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4]))))) * (float10)(*(float *)&gen_args[2]) +
                (float10)*(float *)((*(int *)&gen_args[0]) + 0x120))));
    uVar7 = F_00535e50(&REFG(undefined, 0x1375b30) GEN_EDX_ARG);
    fVar9 = (float10)(int)uVar7 / ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4]))));
LAB_00b6f682: ;
    fVar9 = fVar9 * (float10)(*(float *)&gen_args[3]) + (float10)*(float *)((*(int *)&gen_args[0]) + 0x124);
    break;
  default: ;
    goto switchD_00b6f4d2_default;
  }
  *(float *)((*(int *)&gen_args[0]) + 0x124) = (float)fVar9;
switchD_00b6f4d2_default: ;
  fVar6 = REFG(float, 0x1090708);
  fVar5 = REFG(float, 0x1087f04);
  pfVar8 = (float *)((*(int *)&gen_args[0]) + 0x120);
  fVar2 = *pfVar8;
  fVar3 = *pfVar8;
  fVar4 = *pfVar8;
  (*(float *)&gen_args[2]) = REFG(float, 0x1087f04);
  (*(float *)&gen_args[3]) = REFG(float, 0x1090708);
  pfVar8 = (float *)((*(int *)&gen_args[0]) + 0x120);
  if ((GEN_ISNAN(REFG(float, 0x1087f04)) || GEN_ISNAN(fVar2)) || (REFG(float, 0x1087f04) < fVar4 || REFG(uint, 0x1087f04) == fVar3)) {
    pfVar8 = &(*(float *)&gen_args[2]);
  }
  if (!(REFG(float, 0x1090708) < *pfVar8)) {
    pfVar8 = &(*(float *)&gen_args[3]);
  }
  pfVar1 = (float *)((*(int *)&gen_args[0]) + 0x124);
  *(float *)((*(int *)&gen_args[0]) + 0x120) = *pfVar8;
  fVar2 = *pfVar1;
  fVar3 = *pfVar1;
  fVar4 = *pfVar1;
  (*(float *)&gen_args[2]) = fVar5;
  (*(float *)&gen_args[3]) = fVar6;
  pfVar8 = pfVar1;
  if ((GEN_ISNAN(fVar5) || GEN_ISNAN(fVar2)) || (fVar5 < fVar4 || fVar5 == fVar3)) {
    pfVar8 = &(*(float *)&gen_args[2]);
  }
  if (!(fVar6 < *pfVar8)) {
    pfVar8 = &(*(float *)&gen_args[3]);
  }
  *pfVar1 = *pfVar8;
  return 0;
}

/* ref: FUN_00b6f710 */
GEN_FRAME uint GEN_THISCALL F_00b6f710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb6f710u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint param_5 = (uint)gen_a4;
  float fVar1;
  float fVar2;
  float10 fVar3;
  uint uVar4;
  uint extraout_EAX = 0;
  float10 fVar5;
  double dVar6;
  double dVar7;
  
  if (param_2 == 1) {
    uVar4 = F_00414500(*(undefined4 *)(param_5 + 0x10) GEN_EDX_FWD,*(undefined4 *)(param_1 + 0x1bc));
    fVar1 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(uVar4 + 0x14) *
                                     (float10)*(float *)&REFG(undefined, 0x133d36c) +
                                    (float10)*(float *)&REFG(undefined, 0x133d368)))) *
                   (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))));
    uVar4 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x21);
    if ((char)uVar4 == '\0') {
      uVar4 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x20);
      if ((char)uVar4 != '\0') {
        fVar5 = (float10)fVar1;
        goto LAB_00b6f85e;
      }
    }
    else {
      fVar5 = -(float10)fVar1;
LAB_00b6f85e: ;
      *(float *)(param_1 + 0x10c) = (float)(fVar5 * (float10)param_3);
    }
    uVar4 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x1e);
    if ((char)uVar4 == '\0') {
      uVar4 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x1f);
      if ((char)uVar4 == '\0') goto LAB_00b6f89a;
      fVar5 = -(float10)fVar1;
    }
    else {
      fVar5 = (float10)fVar1;
    }
  }
  else if (param_2 == 2) {
    uVar4 = F_00414500(*(undefined4 *)(param_5 + 0x10) GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x1c0));
    fVar1 = *(float *)(uVar4 + 0x14);
    fVar3 = (float10)*(float *)&REFG(undefined, 0x133d36c);
    fVar5 = (float10)*(float *)&REFG(undefined, 0x133d368);
    fVar2 = *(float *)(REFG(int, 0x137104c) + 0x1198);
    dVar6 = F_0053b320();
    dVar7 = F_0053b360();
    fVar5 = (float10)((float)GEN_TOF(((float10)(float)((float10)fVar1 * fVar3 + fVar5) * (float10)fVar2)));
    *(float *)(param_1 + 0x10c) = ((float)GEN_TOF(((-fVar5 * (float10)(float)dVar6) * (float10)param_3)));
    fVar5 = (fVar5 * (float10)(float)dVar7) * (float10)REFG(double, 0x1088108);
    uVar4 = extraout_EAX;
  }
  else {
    uVar4 = param_2 - 3;
    if (uVar4 != 0) goto LAB_00b6f89a;
    uVar4 = F_00414500(*(undefined4 *)(param_5 + 0x10) GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x1c4));
    fVar1 = ((float)GEN_TOF(((float10)*(float *)(uVar4 + 0x14) * (float10)*(float *)&REFG(undefined, 0x133d36c) +
                   (float10)*(float *)&REFG(undefined, 0x133d368))));
    uVar4 = F_00535e40(&REFG(undefined, 0x1375b30) GEN_EDX_ARG);
    *(float *)(param_1 + 0x10c) =
         ((float)GEN_TOF(((((float10)(int)uVar4 * (float10)fVar1) / (float10)*(double *)&REFG(undefined, 0x10912a8)) *
                (float10)param_3)));
    uVar4 = F_00535e50(&REFG(undefined, 0x1375b30) GEN_EDX_ARG);
    fVar5 = ((float10)(int)uVar4 * (float10)fVar1) / (float10)*(double *)&REFG(undefined, 0x10912a8);
  }
  *(float *)(param_1 + 0x110) = (float)(fVar5 * (float10)param_4);
LAB_00b6f89a: ;
  if (*(int *)(param_1 + 0xe0) == 0) {
    *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) ^ REFG(uint, 0x10920d0);
  }
  return uVar4;
}

/* ref: FUN_00b6f8d0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b6f8d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6f8d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float * pfVar5;
  float10 fVar6;
  float fVar7;
  
  uVar4 = F_00b6bf70(this GEN_EDX_FWD);
  (*(float *)(gen_frame + 0x0)) = REFG(float, 0x10f3960);
  fVar1 = *(float *)((int)this + 0x154);
  (*(float *)(gen_frame + 0x4)) = fVar1;
  if (*(float *)&REFG(undefined, 0x1088114) < fVar1) {
    fVar2 = *(float *)((int)this + 0x158);
    fVar3 = *(float *)(REFG(int, 0x137104c) + 0x1198);
    (*(float *)(gen_frame + 0x0)) = fVar2;
    fVar7 = *(float *)((int)this + 0xf0);
    (*(float *)(gen_frame + 0x8)) = fVar3;
    if ((float10)fVar3 < (float10)fVar1) {
      fVar6 = F_00aae710((float)((float10)fVar7 - (float10)fVar2));
      fVar7 = ((float)GEN_TOF(((fVar6 * (float10)(*(float *)(gen_frame + 0x8))) / (float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x0)))));
    }
    *(float *)((int)this + 0x158) = fVar7;
  }
  else {
    if ((uVar4 == 3) || (uVar4 == 6)) {
      (*(float *)(gen_frame + 0x0)) = REFG(float, 0x10f396c);
    }
    fVar7 = *(float *)(REFG(int, 0x137104c) + 0x1198);
    fVar1 = *(float *)((int)this + 0x158);
    (*(float *)(gen_frame + 0x4)) = fVar1;
    fVar2 = *(float *)((int)this + 0xf0);
    (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
    pfVar5 = &(*(float *)(gen_frame + 0x0));
    fVar7 = ((float)GEN_TOF(((float10)(float)((float10)fVar7 * (float10)*(double *)&REFG(undefined, 0x10943d8)) *
                   (float10)(*(float *)(gen_frame + 0x0)))));
    (*(float *)(gen_frame + 0x0)) = fVar7;
    if (!((float10)fVar7 < (float10)1)) {
      pfVar5 = &(*(float *)(gen_frame + 0x8));
    }
    fVar6 = F_00aae710((float)((float10)fVar2 - (float10)fVar1));
    fVar6 = F_00aae710((float)(fVar6 * (float10)*pfVar5 + (float10)(*(float *)(gen_frame + 0x4))));
    *(float *)((int)this + 0x158) = (float)fVar6;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd0) + 0xa4))) = *(undefined4 *)((int)this + 0x158);
  return 0;
}

/* ref: FUN_00b6fa30 */
GEN_FRAME unsigned int GEN_THISCALL F_00b6fa30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6fa30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float fVar1;
  float10 fVar2;
  
  fVar1 = ((float)GEN_TOF(((float10)((float)GEN_TOF((((float10)*(float *)&REFG(undefined, 0x133d284) *
                                   (float10)*(double *)&REFG(undefined, 0x1080228)) /
                                  (float10)*(double *)&REFG(undefined, 0x1080220)))) -
                 (float10)*(double *)&REFG(undefined, 0x10f4920))));
  if ((((REFG(int, 0x1375b64) != 1) && (REFG(int, 0x1375b64) != 2)) &&
      ((float10)*(float *)(in_ecx + 0x100) <= (float10)fVar1)) &&
     (*(char *)(in_ecx + 0x130) != '\0')) {
    fVar2 = F_00b6e3b0(*(float *)(in_ecx + 0x100),fVar1,REFG(float, 0x10f396c));
    *(float *)(in_ecx + 0x100) = (float)fVar2;
    return 0;
  }
  return 0;
}

/* ref: FUN_00b6fac0 */
GEN_FRAME byte GEN_THISCALL F_00b6fac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb6fac0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  bool bVar5;
  float fVar6;
  double dVar7;
  
  bVar2 = false;
  if (REFG(int, 0x137104c) == 0) {
    return 0;
  }
  uVar4 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_FWD,0x60);
  if (*(int *)(uVar4 + 0x14) == 0) {
    return 0;
  }
  bVar3 = false;
  uVar4 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x23);
  if ((char)uVar4 != '\0') {
    bVar3 = true;
    goto LAB_00b6fb97;
  }
  uVar4 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x24);
  if ((char)uVar4 == '\0') {
    uVar4 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x25);
    if ((char)uVar4 == '\0') {
      uVar4 = F_0053b300();
      if (uVar4 == 0) goto LAB_00b6fb97;
      uVar4 = F_0053b300();
      if ((!GEN_ISNAN((float)(int)uVar4) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
          !((float)(int)uVar4 <= *(float *)&REFG(undefined, 0x1088114))) {
        bVar3 = true;
        goto LAB_00b6fb97;
      }
      uVar4 = F_0053b300();
      fVar6 = (float)(int)uVar4;
      bVar5 = GEN_ISNAN(fVar6) || fVar6 == 0.0;
      bVar1 = fVar6 <= 0.0;
    }
    else {
      dVar7 = F_0053b360();
      if (0.0 < dVar7) {
        bVar3 = true;
        goto LAB_00b6fb97;
      }
      dVar7 = F_0053b360();
      bVar5 = GEN_ISNAN(dVar7) || dVar7 == 0.0;
      bVar1 = dVar7 <= 0.0;
    }
    if (!bVar1 || bVar5) goto LAB_00b6fb97;
  }
  bVar2 = true;
LAB_00b6fb97: ;
  if (((*(int *)(param_1 + 0xe0) == 0) &&
      ((float10)*(float *)(param_1 + 0xf8) <= (float10)*(float *)(param_1 + 0xf0))) && (bVar2)) {
    *(undefined4 *)(param_1 + 0xe0) = 1;
    return 1;
  }
  if (*(int *)(param_1 + 0xe0) == 1) {
    if (param_2 == 3) {
      fVar6 = *(float *)(param_1 + 0x240);
    }
    else {
      fVar6 = *(float *)(param_1 + 0xe4);
    }
    if ((((float10)fVar6 <= (float10)*(float *)(param_1 + 0xe8)) &&
        ((float10)*(float *)(param_1 + 0xf0) <= (float10)*(float *)(param_1 + 0xf4))) && (bVar3)) {
      *(undefined4 *)(param_1 + 0xe0) = 0;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b6fc40 */
GEN_FRAME float10 GEN_STDCALL F_00b6fc40(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xb6fc40u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  float fVar1;
  float fVar2;
  float * pfVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = F_00b6e080((*(float *)&gen_args[0]),(*(float *)&gen_args[1]),REFG(float, 0x10f3960));
  (*(float *)&gen_args[0]) = (float)fVar4;
  fVar5 = (float10)(*(float *)&gen_args[1]);
  pfVar3 = &(*(float *)&gen_args[0]);
  fVar1 = (float)(fVar5 + (float10)*(double *)&REFG(undefined, 0x10c6318));
  (*(float *)&gen_args[1]) = fVar1;
  fVar2 = (float)(fVar5 - (float10)*(double *)&REFG(undefined, 0x10c6318));
  if (!((float10)(float)fVar4 < (float10)fVar1)) {
    pfVar3 = &(*(float *)&gen_args[1]);
  }
  if ((float10)fVar2 < (float10)*pfVar3) {
    return (float10)*pfVar3;
  }
  return (float10)fVar2;
}

/* ref: FUN_00b6fcb0 */
GEN_FRAME float10 GEN_THISCALL F_00b6fcb0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb6fcb0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float * pfVar2;
  float10 fVar3;
  
  (*(float *)(gen_frame + 0x8)) = (float)((float10)(*(float *)&gen_args[1]) + (float10)*(double *)&REFG(undefined, 0x10c6318));
  fVar1 = (float)((float10)(*(float *)&gen_args[1]) - (float10)*(double *)&REFG(undefined, 0x10c6318));
  fVar3 = F_00b6e080(*(float *)((*(int *)&gen_args[0]) + 0x1f0),(*(float *)&gen_args[1]),REFG(float, 0x10f3960));
  (*(float *)&gen_args[1]) = (float)fVar3;
  pfVar2 = &(*(float *)&gen_args[1]);
  if (!((float10)(float)fVar3 < (float10)(*(float *)(gen_frame + 0x8)))) {
    pfVar2 = &(*(float *)(gen_frame + 0x8));
  }
  if ((float10)fVar1 < (float10)*pfVar2) {
    return (float10)*pfVar2;
  }
  return (float10)fVar1;
}

/* ref: FUN_00b6fde0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b6fde0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb6fde0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  gen_args[2] = gen_a2;
  float * pfVar1;
  
  pfVar1 = (float *)((*(int *)&gen_args[0]) + 0xec);
  if ((float10)(*(float *)&gen_args[1]) < (float10)*pfVar1) {
    pfVar1 = &(*(float *)&gen_args[1]);
  }
  if ((float10)*(float *)((*(int *)&gen_args[0]) + 0xe8) < (float10)*pfVar1) {
    *(*(float * PTR32 *)&gen_args[2]) = *pfVar1;
    return;
  }
  *(*(float * PTR32 *)&gen_args[2]) = *(float *)((*(int *)&gen_args[0]) + 0xe8);
  return;
}

/* ref: FUN_00b6fe20 */
GEN_FRAME unsigned int GEN_THISCALL F_00b6fe20(float gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb6fe20u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  float in_ecx = (float)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float * pfVar2;
  
  (*(float *)(gen_frame + 0x8)) = in_ecx;
  fVar1 = *(float *)((int)gen_fl2bits(in_ecx) + 0xec);
  pfVar2 = (float *)((int)gen_fl2bits(in_ecx) + 0xec);
  (*(float *)(gen_frame + 0x8)) = param_2;
  if ((float10)param_2 < (float10)fVar1) {
    pfVar2 = &(*(float *)(gen_frame + 0x8));
  }
  if ((float10)*(float *)((int)gen_fl2bits(in_ecx) + 0xe8) < (float10)*pfVar2) {
    *(float *)((int)gen_fl2bits(in_ecx) + 0xe4) = *pfVar2;
    return;
  }
  *(undefined4 *)((int)gen_fl2bits(in_ecx) + 0xe4) =
       *(undefined4 *)((int)gen_fl2bits(in_ecx) + 0xe8);
  return;
}

/* ref: FUN_00b6fe80 */
GEN_FRAME unsigned int GEN_THISCALL F_00b6fe80(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb6fe80u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  gen_args[2] = gen_a2;
  float fVar1;
  float fVar2;
  float * pfVar3;
  float10 fVar4;
  
  if ((*(uint *)&gen_args[2]) == 3) {
    pfVar3 = (float *)((*(int *)&gen_args[0]) + 0xec);
    if ((float10)(*(float *)&gen_args[1]) < (float10)*pfVar3) {
      pfVar3 = &(*(float *)&gen_args[1]);
    }
    if (!((float10)*(float *)((*(int *)&gen_args[0]) + 0xe8) < (float10)*pfVar3)) {
      pfVar3 = (float *)((*(int *)&gen_args[0]) + 0xe8);
    }
    fVar1 = *pfVar3;
    *(undefined1 *)((*(int *)&gen_args[0]) + 0x244) = 1;
    *(float *)((*(int *)&gen_args[0]) + 0x240) = fVar1;
    return;
  }
  fVar1 = *(float *)((*(int *)&gen_args[0]) + 0xec);
  pfVar3 = &(*(float *)&gen_args[1]);
  if (!((float10)(*(float *)&gen_args[1]) < (float10)fVar1)) {
    pfVar3 = (float *)((*(int *)&gen_args[0]) + 0xec);
  }
  (*(uint *)&gen_args[2]) = (uint)gen_fl2bits(*(float *)((*(int *)&gen_args[0]) + 0xe8));
  fVar4 = (float10)*(float *)((*(int *)&gen_args[0]) + 0xe8);
  if (!(fVar4 < (float10)*pfVar3)) {
    pfVar3 = (float *)((*(int *)&gen_args[0]) + 0xe8);
  }
  fVar2 = *pfVar3;
  pfVar3 = &(*(float *)&gen_args[1]);
  (*(float *)&gen_args[1]) = fVar2;
  if (!((float10)fVar2 < (float10)fVar1)) {
    pfVar3 = (float *)((*(int *)&gen_args[0]) + 0xec);
  }
  if (!(fVar4 < (float10)*pfVar3)) {
    pfVar3 = (float *)((*(int *)&gen_args[0]) + 0xe8);
  }
  *(float *)((*(int *)&gen_args[0]) + 0xe4) = *pfVar3;
  return;
}

/* ref: FUN_00b6ff40 */
GEN_FRAME unsigned int GEN_THISCALL F_00b6ff40(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb6ff40u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  float * pfVar1;
  
  pfVar1 = (float *)((*(int *)&gen_args[0]) + 0x118);
  if ((float10)(*(float *)&gen_args[1]) < (float10)*pfVar1) {
    pfVar1 = &(*(float *)&gen_args[1]);
  }
  if ((float10)*(float *)((*(int *)&gen_args[0]) + 0x114) < (float10)*pfVar1) {
    *(float *)((*(int *)&gen_args[0]) + 0x100) = *pfVar1;
    return;
  }
  *(undefined4 *)((*(int *)&gen_args[0]) + 0x100) = *(undefined4 *)((*(int *)&gen_args[0]) + 0x114);
  return;
}

/* ref: FUN_00b6ff90 */
GEN_FRAME unsigned int GEN_THISCALL F_00b6ff90(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb6ff90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  float * pfVar1;
  
  pfVar1 = (float *)((*(int *)&gen_args[0]) + 0xf8);
  if ((float10)(*(float *)&gen_args[1]) < (float10)*pfVar1) {
    pfVar1 = &(*(float *)&gen_args[1]);
  }
  if ((float10)*(float *)((*(int *)&gen_args[0]) + 0xf4) < (float10)*pfVar1) {
    *(float *)((*(int *)&gen_args[0]) + 0xf0) = *pfVar1;
    return;
  }
  *(undefined4 *)((*(int *)&gen_args[0]) + 0xf0) = *(undefined4 *)((*(int *)&gen_args[0]) + 0xf4);
  return;
}

/* ref: FUN_00b6ffe0 */
GEN_FRAME uint GEN_THISCALL F_00b6ffe0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb6ffe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float10 fVar2;
  float * pfVar3;
  uint uVar4;
  float fVar5;
  
  if (REFG(int, 0x137104c) == 0) {
    fVar5 = 0.0;
  }
  else {
    uVar4 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_FWD,*(undefined4 *)(in_ecx + 0x25c));
    fVar5 = *(float *)(uVar4 + 0x14);
  }
  (*(float *)(gen_frame + 0x8)) = fVar5;
  pfVar3 = (float *)(in_ecx + 0x118);
  fVar1 = *pfVar3;
  (*(float *)(gen_frame + 0x4)) = fVar5;
  if ((float10)fVar5 < (float10)fVar1) {
    pfVar3 = &(*(float *)(gen_frame + 0x4));
  }
  if (!((float10)*(float *)(in_ecx + 0x114) < (float10)*pfVar3)) {
    pfVar3 = (float *)(in_ecx + 0x114);
  }
  *(float *)(in_ecx + 0x100) = *pfVar3;
  uVar4 = REFG(undefined4, 0x1379694);
  if (REFG(undefined4, 0x1379694) == 0) {
    (*(float *)(gen_frame + 0x8)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x8)) = *(float *)(REFG(undefined4, 0x1379694) + 0xb0);
  }
  *(undefined4 *)(in_ecx + 0x104) = 0;
  fVar2 = (float10)*(double *)&REFG(undefined, 0x1080228);
  *(undefined4 *)(in_ecx + 0x108) = 0;
  *(undefined1 *)(in_ecx + 0x205) = 1;
  *(float *)(in_ecx + 0xfc) = (float)((float10)(*(float *)(gen_frame + 0x8)) + fVar2);
  *(undefined4 *)(in_ecx + 0x13c) = *(undefined4 *)(in_ecx + 0xe4);
  return uVar4;
}

/* ref: FUN_00b700b0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b700b0(float gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xb700b0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float in_ecx = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float * pfVar2;
  
  (*(float *)(gen_frame + 0x8)) = in_ecx;
  fVar1 = *(float *)((int)gen_fl2bits(in_ecx) + 0x118);
  pfVar2 = (float *)((int)gen_fl2bits(in_ecx) + 0x118);
  (*(float *)(gen_frame + 0x8)) = param_3;
  if ((float10)param_3 < (float10)fVar1) {
    pfVar2 = &(*(float *)(gen_frame + 0x8));
  }
  if (!((float10)*(float *)((int)gen_fl2bits(in_ecx) + 0x114) < (float10)*pfVar2)) {
    pfVar2 = (float *)((int)gen_fl2bits(in_ecx) + 0x114);
  }
  fVar1 = *pfVar2;
  *(float *)((int)gen_fl2bits(in_ecx) + 0xfc) = param_2;
  *(float *)((int)gen_fl2bits(in_ecx) + 0x100) = fVar1;
  *(undefined4 *)((int)gen_fl2bits(in_ecx) + 0x104) = 0;
  *(undefined4 *)((int)gen_fl2bits(in_ecx) + 0x108) = 0;
  return;
}

/* ref: Client::Game::Camera::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_00b70120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xb70120u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  *(undefined4 *)(REFG(int, 0x1371298) + 0x34) = 0;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 4))))
                    (this + 0x10 GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00b70140 */
GEN_FRAME uint GEN_THISCALL F_00b70140(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xb70140u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  if (REFG(int, 0x137104c) != 0) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_FWD,*(undefined4 *)(param_1 + 4));
    F_00414ad0(uVar2 GEN_EDX_ARG,param_2);
  }
  if (REFG(int, 0x137104c) != 0) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,*(undefined4 *)(param_1 + 8));
    F_00414ad0(uVar2 GEN_EDX_ARG,param_3);
  }
  uVar2 = 0;
  if (REFG(int, 0x137104c) != 0) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,*(undefined4 *)(param_1 + 0xc));
    bVar1 = F_00414ad0(uVar2 GEN_EDX_ARG,param_4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00b701c0 */
GEN_FRAME uint GEN_THISCALL F_00b701c0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xb701c0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  if (REFG(int, 0x137104c) != 0) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_FWD,*(undefined4 *)(param_1 + 0x10));
    F_00414ad0(uVar2 GEN_EDX_ARG,param_2);
  }
  if (REFG(int, 0x137104c) != 0) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x14));
    F_00414ad0(uVar2 GEN_EDX_ARG,param_3);
  }
  uVar2 = 0;
  if (REFG(int, 0x137104c) != 0) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x18));
    bVar1 = F_00414ad0(uVar2 GEN_EDX_ARG,param_4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00b70240 */
GEN_FRAME uint GEN_THISCALL F_00b70240(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xb70240u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  if (REFG(int, 0x137104c) != 0) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_FWD,*(undefined4 *)(param_1 + 0x1c));
    F_00414ad0(uVar2 GEN_EDX_ARG,param_2);
  }
  if (REFG(int, 0x137104c) != 0) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x20));
    F_00414ad0(uVar2 GEN_EDX_ARG,param_3);
  }
  uVar2 = 0;
  if (REFG(int, 0x137104c) != 0) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,*(undefined4 *)(param_1 + 0x24));
    bVar1 = F_00414ad0(uVar2 GEN_EDX_ARG,param_4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00b702c0 */
GEN_NOFRAME uint GEN_THISCALL F_00b702c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb702c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  
  if (REFG(int, 0x137104c) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_FWD,*(undefined4 *)(in_ecx + 0x264));
    uVar2 = *(undefined4 *)(uVar1 + 0x14);
  }
  *(undefined4 *)(in_ecx + 0xe4) = uVar2;
  if (REFG(int, 0x137104c) == 0) {
    *(undefined4 *)(in_ecx + 0x100) = 0;
    return 0;
  }
  uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,*(undefined4 *)(in_ecx + 0x25c));
  *(undefined4 *)(in_ecx + 0x100) = *(undefined4 *)(uVar1 + 0x14);
  return uVar1;
}

/* ref: FUN_00b70330 */
GEN_FRAME uint GEN_THISCALL F_00b70330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb70330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  float fVar2;
  
  if (REFG(int, 0x137104c) == 0) {
    fVar2 = 0.0;
  }
  else {
    uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_FWD,*(undefined4 *)((int)this + 0x27c));
    fVar2 = *(float *)(uVar1 + 0x14);
  }
  F_00b6fe80(this GEN_EDX_ARG,fVar2,param_1);
  if (REFG(int, 0x137104c) == 0) {
    *(undefined4 *)((int)this + 0x100) = 0;
    return 0;
  }
  uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x274));
  *(undefined4 *)((int)this + 0x100) = *(undefined4 *)(uVar1 + 0x14);
  return uVar1;
}

/* ref: FUN_00b703c0 */
GEN_FRAME uint GEN_THISCALL F_00b703c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb703c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  uint uVar2;
  float * pfVar3;
  float fVar4;
  
  if (REFG(int, 0x137104c) == 0) {
    fVar4 = 0.0;
    uVar2 = 0;
  }
  else {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_FWD,*(undefined4 *)(in_ecx + 0x26c));
    fVar4 = *(float *)(uVar2 + 0x14);
  }
  (*(float *)(gen_frame + 0x8)) = fVar4;
  pfVar3 = (float *)(in_ecx + 0xf8);
  fVar1 = *pfVar3;
  (*(float *)(gen_frame + 0x4)) = fVar4;
  if ((float10)fVar4 < (float10)fVar1) {
    pfVar3 = &(*(float *)(gen_frame + 0x4));
  }
  if ((float10)*(float *)(in_ecx + 0xf4) < (float10)*pfVar3) {
    *(float *)(in_ecx + 0xf0) = *pfVar3;
    return uVar2;
  }
  *(undefined4 *)(in_ecx + 0xf0) = *(undefined4 *)(in_ecx + 0xf4);
  return uVar2;
}

/* ref: FUN_00b70440 */
GEN_NOFRAME uint GEN_THISCALL F_00b70440(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb70440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b6bf70(this GEN_EDX_FWD);
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    *(undefined4 *)((int)this + 0x100) = 0;
switchD_00b7044d_caseD_4: ;
    uVar1 = F_00b703c0(this GEN_EDX_ARG);
    return uVar1;
  case 1: ;
  case 2: ;
    uVar1 = F_00b702c0(this GEN_EDX_ARG);
    return uVar1;
  case 3: ;
  case 6: ;
    uVar1 = F_00b70330(this GEN_EDX_ARG,uVar1);
    return uVar1;
  case 4: ;
    goto switchD_00b7044d_caseD_4;
  default: ;
    return uVar1;
  }
}

/* ref: FUN_00b704a0 */
GEN_NOFRAME uint GEN_THISCALL F_00b704a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb704a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  uVar1 = F_00b6bf70(this GEN_EDX_FWD);
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
  case 4: ;
    if (REFG(int, 0x137104c) != 0) {
      fVar3 = REFG(float, 0x10f38c0);
      uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x26c));
      F_00414ad0(uVar1 GEN_EDX_ARG,fVar3);
    }
    F_00b703c0(this GEN_EDX_ARG);
    break;
  case 1: ;
  case 2: ;
    if (REFG(int, 0x137104c) != 0) {
      fVar3 = *(float *)&REFG(undefined, 0x10f38b4);
      uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x264));
      F_00414ad0(uVar1 GEN_EDX_ARG,fVar3);
    }
    if (REFG(int, 0x137104c) != 0) {
      fVar3 = REFG(float, 0x108b28c);
      uVar1 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x25c));
      F_00414ad0(uVar1 GEN_EDX_ARG,fVar3);
    }
    F_00b702c0(this GEN_EDX_ARG);
    *(undefined4 *)((int)this + 0x13c) = *(undefined4 *)((int)this + 0xe4);
    *(undefined1 *)((int)this + 0x205) = 1;
    uVar1 = F_00ab9000(0x35e);
    return uVar1;
  case 3: ;
  case 6: ;
    if (REFG(int, 0x137104c) != 0) {
      fVar3 = *(float *)&REFG(undefined, 0x10f38b4);
      uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x27c));
      F_00414ad0(uVar2 GEN_EDX_ARG,fVar3);
    }
    if (REFG(int, 0x137104c) != 0) {
      fVar3 = REFG(float, 0x108b28c);
      uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,*(undefined4 *)((int)this + 0x274));
      F_00414ad0(uVar2 GEN_EDX_ARG,fVar3);
    }
    F_00b70330(this GEN_EDX_ARG,uVar1);
    uVar1 = F_00ab9000(0x35e);
    return uVar1;
  }
  uVar1 = F_00ab9000(0x35e);
  return uVar1;
}

/* ref: FUN_00b708a0 */
GEN_NOFRAME uint GEN_THISCALL F_00b708a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb708a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  bool bVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (REFG(int, 0x137104c) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x1a8) + 8))))((int)this + 0x1a8,REFG(int, 0x137104c));
  }
  fVar8 = 0.0;
  fVar9 = *(float *)((int)this + 0x154);
  (*(float *)(gen_frame + 0x10)) = (float)((float10)*param_3 - (float10)*param_2);
  fVar1 = param_3[1];
  fVar2 = param_2[1];
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar1 - (float10)fVar2);
  fVar7 = param_3[2];
  fVar3 = param_2[2];
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar7 - (float10)fVar3);
  (*(float *)(gen_frame + 0x20)) = (float)((float10)*param_3 - (float10)*param_2);
  (*(float *)(gen_frame + 0x24)) = (float)((float10)fVar1 - (float10)fVar2);
  (*(float *)(gen_frame + 0x28)) = (float)((float10)fVar7 - (float10)fVar3);
  if (fVar9 <= 0.0) {
    fVar6 = F_00b6e080(*(float *)((int)this + 0x200),*(float *)((int)this + 0x1f8),REFG(float, 0x10f3960));
    fVar7 = REFG(float, 0x1087f04);
    fVar9 = (float)fVar6;
    ((float *)(gen_frame + 0x50))[0] = fVar9;
    *(float *)((int)this + 0x200) = fVar9;
    (*(float *)(gen_frame + 0x5c)) = fVar7;
    fVar1 = *(float *)((int)this + 0xe8);
    ((float *)(gen_frame + 0x50))[2] = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xec) - (float10)fVar1)));
    ((float *)(gen_frame + 0x50))[1] = fVar2;
    bVar5 = GEN_ISNAN((float10)fVar2) || GEN_ISNAN((float10)0);
    if (bVar5 == (bVar5 || (float10)fVar2 == (float10)0)) {
      (*(float *)(gen_frame + 0x4c)) = fVar8;
      fVar7 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x18)) * (float10)(*(float *)(gen_frame + 0x18)) +
                     ((float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x10)) + (float10)(*(float *)(gen_frame + 0x14)) * (float10)(*(float *)(gen_frame + 0x14)))
                     )));
      (*(float *)(gen_frame + 0x5c)) = fVar7;
      fVar7 = ((float)GEN_TOF(SQRT((float10)fVar7)));
      (*(float *)(gen_frame + 0x5c)) = fVar7;
      pfVar4 = ((float *)(gen_frame + 0x50)) + 2;
      fVar1 = (float)((float10)fVar7 - (float10)fVar1);
      ((float *)(gen_frame + 0x50))[2] = fVar1;
      if (!((float10)0 < (float10)fVar1)) {
        pfVar4 = &(*(float *)(gen_frame + 0x4c));
      }
      fVar8 = 0.0;
      (*(float *)(gen_frame + 0x5c)) = (float)((float10)1 - (float10)*pfVar4 / (float10)fVar2);
      fVar7 = REFG(float, 0x1087f04);
    }
    (*(float *)(gen_frame + 0x4c)) = fVar7;
    ((float *)(gen_frame + 0x50))[1] = fVar8;
    pfVar4 = &(*(float *)(gen_frame + 0x5c));
    if (!((*(float *)(gen_frame + 0x5c)) < fVar7)) {
      pfVar4 = &(*(float *)(gen_frame + 0x4c));
    }
    if (!(fVar8 < *pfVar4)) {
      pfVar4 = ((float *)(gen_frame + 0x50)) + 1;
    }
    fVar2 = *pfVar4;
    fVar1 = param_3[2];
    (*(float *)(gen_frame + 0x5c)) = fVar2;
    (*(float *)(gen_frame + 0x18)) = fVar1;
    fVar7 = *param_3;
    (*(float *)(gen_frame + 0x10)) = fVar7;
    fVar3 = param_3[1];
    (*(float *)(gen_frame + 0x14)) = fVar3;
    fVar9 = (float)((float10)fVar9 * (float10)fVar2);
    (*(float *)(gen_frame + 0x4c)) = fVar9;
    fVar9 = (float)((float10)fVar9 + (float10)fVar3);
    (*(float *)(gen_frame + 0x14)) = fVar9;
    fVar2 = (float)((float10)fVar7 - (float10)*param_2);
    (*(float *)(gen_frame + 0x0)) = fVar2;
    fVar9 = (float)((float10)fVar9 - (float10)param_2[1]);
    (*(float *)(gen_frame + 0x4)) = fVar9;
    fVar1 = (float)((float10)fVar1 - (float10)param_2[2]);
    (*(float *)(gen_frame + 0x8)) = fVar1;
    (*(float *)(gen_frame + 0x20)) = fVar2;
    (*(float *)(gen_frame + 0x24)) = fVar9;
    (*(float *)(gen_frame + 0x28)) = fVar1;
  }
  else {
    *(undefined4 *)((int)this + 0x200) = 0;
  }
  fVar9 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x28)) * (float10)(*(float *)(gen_frame + 0x28)) +
                 ((float10)(*(float *)(gen_frame + 0x20)) * (float10)(*(float *)(gen_frame + 0x20)) + (float10)(*(float *)(gen_frame + 0x24)) * (float10)(*(float *)(gen_frame + 0x24))))));
  (*(float *)(gen_frame + 0x4c)) = fVar9;
  fVar9 = ((float)GEN_TOF(SQRT((float10)fVar9)));
  (*(float *)(gen_frame + 0x4c)) = fVar9;
  (*(float *)(gen_frame + 0x5c)) = fVar9;
  if ((double)fVar9 < *(double *)&REFG(undefined, 0x10a1b58)) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    return (uint)param_1;
  }
  ((float *)(gen_frame + 0x50))[1] = ((float)GEN_TOF(-(float10)*(float *)((int)this + 0x114)));
  ((float *)(gen_frame + 0x50))[2] = gen_bits2f(*(uint *)((int)this + 0x118) ^ REFG(uint, 0x10920d0));
  fVar9 = F_00aae920(&(*(float *)(gen_frame + 0x20)));
  pfVar4 = ((float *)(gen_frame + 0x50));
  fVar9 = ((float)GEN_TOF(((float10)fVar9 - (float10)*(float *)((int)this + 0x194))));
  ((float *)(gen_frame + 0x50))[0] = fVar9;
  if (!((float10)fVar9 < (float10)((float *)(gen_frame + 0x50))[1])) {
    pfVar4 = ((float *)(gen_frame + 0x50)) + 1;
  }
  if (!((float10)((float *)(gen_frame + 0x50))[2] < (float10)*pfVar4)) {
    pfVar4 = ((float *)(gen_frame + 0x50)) + 2;
  }
  fVar9 = *pfVar4;
  (*(float *)(gen_frame + 0x30)) = 0.0;
  (*(float *)(gen_frame + 0x34)) = 0.0;
  (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x5c));
  pfVar4 = (float *)F_00b6a4f0(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),fVar9);
  (*(float *)(gen_frame + 0x30)) = *pfVar4;
  (*(float *)(gen_frame + 0x34)) = pfVar4[1];
  (*(float *)(gen_frame + 0x38)) = pfVar4[2];
  fVar9 = F_00aae900(&(*(float *)(gen_frame + 0x20)));
  pfVar4 = (float *)F_00b6a5c0(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),fVar9);
  fVar9 = *pfVar4;
  (*(float *)(gen_frame + 0x30)) = fVar9;
  fVar1 = pfVar4[1];
  (*(float *)(gen_frame + 0x34)) = fVar1;
  fVar2 = pfVar4[2];
  (*(float *)(gen_frame + 0x38)) = fVar2;
  fVar9 = (float)((float10)*param_2 + (float10)fVar9);
  (*(float *)(gen_frame + 0x0)) = fVar9;
  fVar1 = (float)((float10)param_2[1] + (float10)fVar1);
  (*(float *)(gen_frame + 0x4)) = fVar1;
  fVar2 = (float)((float10)param_2[2] + (float10)fVar2);
  (*(float *)(gen_frame + 0x8)) = fVar2;
  *param_1 = fVar9;
  param_1[1] = fVar1;
  param_1[2] = fVar2;
  return (uint)param_1;
}

/* ref: FUN_00b70bd0 */
GEN_FRAME float10 GEN_THISCALL F_00b70bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb70bd0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  float10 in_ST0 = 0;
  float10 fVar4;
  float10 extraout_ST1 = 0;
  float fVar5;
  float local_c;
  float local_8;
  
  iVar1 = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) != 0) {
    fVar5 = 0.0;
    local_c = *(float *)(REFG(int, 0x1379694) + 0xb0);
    local_8 = 0.0;
    iVar3 = param_1 + 0x250;
    if ((char)param_2 == '\0') {
      if (REFG(int, 0x137104c) != 0) {
        uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_FWD,*(undefined4 *)(param_1 + 0x25c));
        fVar5 = *(float *)(uVar2 + 0x14);
      }
      iVar3 = param_1 + 0x248;
      local_c = (float)((float10)local_c + (float10)*(double *)&REFG(undefined, 0x1080228));
      local_8 = fVar5;
    }
    uVar2 = F_00414500(*(undefined4 *)(param_3 + 0x10) GEN_EDX_ARG,*(undefined4 *)(iVar3 + 4));
    if (*(int *)(uVar2 + 0x14) != 0) {
      fVar4 = F_00b6cfa0(*(float *)(param_1 + 0x100),local_8,REFG(float, 0x10f438c));
      *(float *)(param_1 + 0x108) = ((float)GEN_TOF((fVar4 + (float10)*(float *)(param_1 + 0x108))));
    }
    param_2 = (uint)gen_fl2bits((float)(REFG(float, 0x133d358)));
    uVar2 = F_00ab2840((uint)*(byte *)(iVar1 + 0x2e08));
    if (uVar2 != 0) {
      param_2 = *(uint *)(uVar2 + 0x38);
    }
    fVar4 = F_00b6cfa0(*(float *)(param_1 + 0xfc),local_c,
                         (float)(((float10)GEN_TOD(gen_bits2f(param_2))) * (float10)*(double *)&REFG(undefined, 0x1094788)));
    *(float *)(param_1 + 0x104) = ((float)GEN_TOF((fVar4 + (float10)*(float *)(param_1 + 0x104))));
    in_ST0 = extraout_ST1;
  }
  return in_ST0;
}

/* ref: FUN_00b70cf0 */
GEN_FRAME uint GEN_THISCALL F_00b70cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb70cf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x40) = *param_2;
  *(undefined4 *)(in_ecx + 0x44) = param_2[1];
  *(undefined4 *)(in_ecx + 0x48) = param_2[2];
  *(uint *)(in_ecx + 0x34) = *(uint *)(in_ecx + 0x34) | 2;
  return (uint)param_2;
}

/* ref: FUN_00b70d10 */
GEN_FRAME unsigned int GEN_THISCALL F_00b70d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb70d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined4 uVar2;
  
  if (*(int *)((int)this + 0x2c) != param_1) {
    F_00b6d5b0();
    if (*(int *)((int)this + 0x2c) != -1) {
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x2c) * 4)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1 GEN_EDX_ARG);
    }
    if (*(int *)((int)this + 0x2c) == -1) {
      uVar2 = 0;
    }
    else {
      uVar2 = *((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x2c) * 4)));
    }
    *((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1371298) + 0x34))) = *(int *)((int)this + param_1 * 4) + 0x10;
    F_0069c300(REFG(void * PTR32, 0x1371298) GEN_EDX_ARG,0);
    *(int *)((int)this + 0x2c) = param_1;
    piVar1 = *(int * PTR32 *)((int)this + param_1 * 4);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_ARG,uVar2);
  }
  return;
}

/* ref: FUN_00b70d80 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b70d80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb70d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  F_00b6de70((undefined *)((int)this + 0xc) GEN_EDX_FWD);
  if (*(int *)((int)this + 0x2c) != -1) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x2c) * 4)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_ARG);
    return;
  }
  return;
}

/* ref: FUN_00b70dc0 */
GEN_NOFRAME uint GEN_THISCALL F_00b70dc0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb70dc0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x1b0];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char cVar10;
  undefined4 uVar12;
  byte bVar13;
  byte extraout_AL = 0;
  uint uVar14;
  float * pfVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  
  (*(uint *)(gen_frame + 0x19c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1a0);
  fVar16 = (float10)param_2;
  if (*(char *)(param_1 + 0x134) != '\0') {
    fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x118) + fVar16)));
    (*(float *)(gen_frame + 0xcc)) = fVar1;
    *(float *)(param_1 + 0x118) = fVar1;
    *(bool *)(param_1 + 0x134) =
         (!GEN_ISNAN((float10)*(float *)(param_1 + 0x114)) && !GEN_ISNAN((float10)fVar1)) &&
         !((float10)*(float *)(param_1 + 0x114) <= (float10)fVar1);
  }
  if (*(char *)(param_1 + 0x160) != '\0') {
    fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x144) + fVar16)));
    (*(float *)(gen_frame + 0xcc)) = fVar1;
    *(float *)(param_1 + 0x144) = fVar1;
    *(bool *)(param_1 + 0x160) =
         (!GEN_ISNAN((float10)*(float *)(param_1 + 0x140)) && !GEN_ISNAN((float10)fVar1)) &&
         !((float10)*(float *)(param_1 + 0x140) <= (float10)fVar1);
  }
  if (*(char *)(param_1 + 0x18c) != '\0') {
    fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x170) + fVar16)));
    (*(float *)(gen_frame + 0xcc)) = fVar1;
    *(float *)(param_1 + 0x170) = fVar1;
    *(bool *)(param_1 + 0x18c) =
         (!GEN_ISNAN((float10)*(float *)(param_1 + 0x16c)) && !GEN_ISNAN((float10)fVar1)) &&
         !((float10)*(float *)(param_1 + 0x16c) <= (float10)fVar1);
  }
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    fVar1 = ((float)GEN_TOF((fVar16 + (float10)*(float *)(param_1 + 0x19c))));
    (*(float *)(gen_frame + 0xcc)) = fVar1;
    *(float *)(param_1 + 0x19c) = fVar1;
    *(bool *)(param_1 + 0x1b8) =
         (!GEN_ISNAN((float10)*(float *)(param_1 + 0x198)) && !GEN_ISNAN((float10)fVar1)) &&
         !((float10)*(float *)(param_1 + 0x198) <= (float10)fVar1);
  }
  if (*(char *)(param_1 + 0x1e4) != '\0') {
    fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x1c8) + fVar16)));
    (*(float *)(gen_frame + 0xcc)) = fVar1;
    *(float *)(param_1 + 0x1c8) = fVar1;
    *(bool *)(param_1 + 0x1e4) =
         (!GEN_ISNAN((float10)*(float *)(param_1 + 0x1c4)) && !GEN_ISNAN((float10)fVar1)) &&
         !((float10)*(float *)(param_1 + 0x1c4) <= (float10)fVar1);
  }
  if (*(char *)(param_1 + 0x210) != '\0') {
    fVar1 = ((float)GEN_TOF((fVar16 + (float10)*(float *)(param_1 + 500))));
    (*(float *)(gen_frame + 0xcc)) = fVar1;
    *(float *)(param_1 + 500) = fVar1;
    if ((float10)fVar1 < (float10)*(float *)(param_1 + 0x1f0)) {
      *(undefined1 *)(param_1 + 0x210) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x210) = 0;
    }
  }
  if (*(char *)(param_1 + 0x214) != '\0') {
    if ((*(int *)(param_1 + 0x100) != -0x20000000) &&
       (uVar14 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_FWD,*(int *)(param_1 + 0x100),
                              *(undefined4 *)(param_1 + 0x104)), uVar14 != 0)) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar14 + 0xec) + 0x40))))
                (*(int * PTR32 *)(uVar14 + 0xec) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x150)),*(undefined4 *)(param_1 + 0x108));
      *(undefined4 *)(param_1 + 0xe0) = (*(undefined4 *)(gen_frame + 0x180));
      *(undefined4 *)(param_1 + 0xe4) = (*(undefined4 *)(gen_frame + 0x184));
      *(undefined4 *)(param_1 + 0xe8) = (*(undefined4 *)(gen_frame + 0x188));
    }
  }
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0xe0) - (float10)*(float *)(param_1 + 0xf0))));
  (*(float *)(gen_frame + 0x70)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0xe4) - (float10)*(float *)(param_1 + 0xf4))));
  (*(float *)(gen_frame + 0x74)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0xe8) - (float10)*(float *)(param_1 + 0xf8))));
  (*(float *)(gen_frame + 0x78)) = fVar3;
  (*(float *)(gen_frame + 0x10)) = fVar1;
  (*(float *)(gen_frame + 0x14)) = fVar2;
  (*(float *)(gen_frame + 0x18)) = fVar3;
  fVar4 = ((float)GEN_TOF(((float10)fVar3 * (float10)fVar3 +
                 ((float10)fVar2 * (float10)fVar2 + (float10)fVar1 * (float10)fVar1))));
  (*(float *)(gen_frame + 0xcc)) = fVar4;
  fVar4 = ((float)GEN_TOF(SQRT((float10)fVar4)));
  (*(float *)(gen_frame + 0xcc)) = fVar4;
  fVar4 = (float)((float10)1 / (float10)fVar4);
  (*(float *)(gen_frame + 0xcc)) = fVar4;
  fVar17 = (float10)fVar4;
  (*(float *)(gen_frame + 0x40)) = (float)(fVar17 * (float10)fVar1);
  (*(float *)(gen_frame + 0x44)) = (float)((float10)fVar2 * fVar17);
  (*(float *)(gen_frame + 0x48)) = (float)(fVar17 * (float10)fVar3);
  fVar18 = (float10)(float)((float10)fVar2 * fVar17);
  fVar16 = (float10)0;
  fVar19 = (float10)(float)(fVar17 * (float10)fVar3);
  fVar2 = (float)(fVar18 * fVar16 - fVar19);
  (*(float *)(gen_frame + 0x30)) = fVar2;
  fVar17 = (float10)(float)(fVar17 * (float10)fVar1);
  fVar1 = (float)(fVar19 * fVar16 - fVar17 * fVar16);
  (*(float *)(gen_frame + 0x34)) = fVar1;
  fVar3 = (float)(fVar17 - fVar18 * fVar16);
  (*(float *)(gen_frame + 0x38)) = fVar3;
  fVar16 = (float10)fVar3;
  fVar20 = (float10)fVar1;
  (*(float *)(gen_frame + 0x70)) = (float)(fVar16 * fVar18 - fVar20 * fVar19);
  fVar21 = (float10)fVar2;
  (*(float *)(gen_frame + 0x74)) = (float)(fVar21 * fVar19 - fVar17 * fVar16);
  (*(float *)(gen_frame + 0x78)) = (float)(fVar20 * fVar17 - fVar18 * fVar21);
  bVar13 = F_00b6b9c0(&REFG(undefined, 0x1375b9c) GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x90)));
  (*(byte *)(gen_frame + 0xbf)) = bVar13;
  (*(float *)(gen_frame + 0xc4)) = 0.0;
  (*(float *)(gen_frame + 0xc0)) = 0.0;
  if (*(char *)(param_1 + 0x214) == '\0') {
    fVar16 = F_00b6b410(param_1 + 0x138 GEN_EDX_ARG);
    (*(float *)(gen_frame + 0xc4)) = (float)fVar16;
    fVar16 = F_00b6b410(param_1 + 0x10c GEN_EDX_ARG);
    (*(float *)(gen_frame + 0xc0)) = (float)fVar16;
    bVar13 = extraout_AL;
  }
  if (bVar13 != 0) {
    (*(float *)(gen_frame + 0xc0)) = (float)((float10)(*(float *)(gen_frame + 0x94)) + (float10)(*(float *)(gen_frame + 0xc0)));
    (*(float *)(gen_frame + 0xc4)) = (float)((float10)(*(float *)(gen_frame + 0x90)) + (float10)(*(float *)(gen_frame + 0xc4)));
  }
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0xc0)) * (float10)REFG(double, 0x1088108));
  (*(float *)(gen_frame + 0xc0)) = fVar1;
  fVar16 = ((float10)GEN_TOD(fsin((float10)fVar1)));
  fVar2 = (float)fVar16;
  (*(float *)(gen_frame + 0xcc)) = fVar2;
  fVar16 = (float10)fVar2;
  (*(float *)(gen_frame + 0x20)) = (float)(fVar16 * (float10)(*(float *)(gen_frame + 0x30)));
  (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x34)) * fVar16);
  (*(float *)(gen_frame + 0x28)) = (float)(fVar16 * (float10)(*(float *)(gen_frame + 0x38)));
  fVar16 = ((float10)GEN_TOD(fcos((float10)fVar1)));
  (*(float *)(gen_frame + 0xcc)) = (float)fVar16;
  (*(float *)(gen_frame + 0x2c)) = (float)fVar16;
  F_004ef0c0(((undefined1 *)(gen_frame + 0x110)) GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x20)));
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0xc4)) * (float10)REFG(double, 0x1088108));
  (*(float *)(gen_frame + 0xc4)) = fVar1;
  fVar16 = ((float10)GEN_TOD(fsin((float10)fVar1)));
  fVar2 = (float)fVar16;
  (*(float *)(gen_frame + 0xcc)) = fVar2;
  fVar16 = (float10)fVar2;
  (*(float *)(gen_frame + 0x20)) = (float)(fVar16 * (float10)(*(float *)(gen_frame + 0x70)));
  (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x74)) * fVar16);
  (*(float *)(gen_frame + 0x28)) = (float)(fVar16 * (float10)(*(float *)(gen_frame + 0x78)));
  fVar16 = ((float10)GEN_TOD(fcos((float10)fVar1)));
  (*(float *)(gen_frame + 0xcc)) = (float)fVar16;
  (*(float *)(gen_frame + 0x2c)) = (float)fVar16;
  F_004ef0c0(((undefined1 *)(gen_frame + 0xd0)) GEN_EDX_ARG,(uint)&(*(float *)(gen_frame + 0x20)));
  pfVar15 = (float *)F_004ee670(&(*(float *)(gen_frame + 0x50)),(uint)&(*(float *)(gen_frame + 0x10)),(uint)((undefined1 *)(gen_frame + 0x110)));
  (*(float *)(gen_frame + 0x90)) = *pfVar15;
  (*(float *)(gen_frame + 0x94)) = pfVar15[1];
  (*(float *)(gen_frame + 0x98)) = pfVar15[2];
  pfVar15 = (float *)F_004ee670(&(*(float *)(gen_frame + 0x60)),(uint)&(*(float *)(gen_frame + 0x90)),(uint)((undefined1 *)(gen_frame + 0xd0)));
  (*(float *)(gen_frame + 0xa0)) = *pfVar15;
  fVar3 = pfVar15[1];
  (*(float *)(gen_frame + 0xa4)) = fVar3;
  fVar4 = pfVar15[2];
  (*(float *)(gen_frame + 0xa8)) = fVar4;
  fVar5 = *(float *)(param_1 + 0xf0);
  fVar1 = *(float *)(param_1 + 0xf4);
  fVar2 = *(float *)(param_1 + 0xf8);
  (*(float *)(gen_frame + 0xc4)) = fVar5;
  (*(float *)(gen_frame + 0xcc)) = fVar1;
  (*(float *)(gen_frame + 0xa0)) = fVar5;
  (*(float *)(gen_frame + 0x60)) = (float)((float10)fVar5 + (float10)*pfVar15);
  (*(float *)(gen_frame + 0xa4)) = fVar1;
  (*(float *)(gen_frame + 0xcc)) = fVar2;
  (*(float *)(gen_frame + 0x64)) = (float)((float10)fVar3 + (float10)fVar1);
  (*(float *)(gen_frame + 0xa8)) = fVar2;
  (*(float *)(gen_frame + 0x68)) = (float)((float10)fVar4 + (float10)fVar2);
  fVar16 = F_00b6b410(param_1 + 0x1bc GEN_EDX_ARG);
  (*(float *)(gen_frame + 0xcc)) = (float)fVar16;
  fVar16 = (float10)(float)fVar16;
  (*(float *)(gen_frame + 0x50)) = (float)(fVar16 * (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x54)) = (float)((float10)(*(float *)(gen_frame + 0x44)) * fVar16);
  (*(float *)(gen_frame + 0x58)) = (float)(fVar16 * (float10)(*(float *)(gen_frame + 0x48)));
  (*(float *)(gen_frame + 0xa0)) = ((float)GEN_TOF(((float10)(float)(fVar16 * (float10)(*(float *)(gen_frame + 0x40))) + (float10)(*(float *)(gen_frame + 0xa0)))));
  (*(float *)(gen_frame + 0xa4)) = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x44)) * fVar16) + (float10)(*(float *)(gen_frame + 0xa4)))));
  (*(float *)(gen_frame + 0xa8)) = ((float)GEN_TOF(((float10)(float)(fVar16 * (float10)(*(float *)(gen_frame + 0x48))) + (float10)(*(float *)(gen_frame + 0xa8)))));
  fVar16 = F_00b6b410(param_1 + 0x164 GEN_EDX_ARG);
  (*(float *)(gen_frame + 0xc4)) = (float)fVar16;
  (*(float *)(gen_frame + 0xc0)) = (float)fVar16;
  fVar16 = F_00b6b410(param_1 + 400 GEN_EDX_ARG);
  fVar1 = (float)fVar16;
  (*(float *)(gen_frame + 0xcc)) = fVar1;
  (*(float *)(gen_frame + 0x8c)) = fVar1;
  if ((*(byte *)(gen_frame + 0xbf)) != 0) {
    (*(float *)(gen_frame + 0xc0)) = (float)((float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0xc4)));
    (*(float *)(gen_frame + 0x8c)) = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x0)));
  }
  fVar2 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x30)) * (float10)(*(float *)(gen_frame + 0x30)) + (float10)(*(float *)(gen_frame + 0x34)) * (float10)(*(float *)(gen_frame + 0x34))
                  ) + (float10)(*(float *)(gen_frame + 0x38)) * (float10)(*(float *)(gen_frame + 0x38)))));
  (*(float *)(gen_frame + 0xc8)) = fVar2;
  fVar2 = ((float)GEN_TOF(SQRT((float10)fVar2)));
  (*(float *)(gen_frame + 0xc8)) = fVar2;
  fVar2 = (float)((float10)1 / (float10)fVar2);
  (*(float *)(gen_frame + 0xc8)) = fVar2;
  fVar16 = (float10)fVar2;
  (*(float *)(gen_frame + 0x90)) = (float)(fVar16 * (float10)(*(float *)(gen_frame + 0x30)));
  (*(float *)(gen_frame + 0x94)) = (float)((float10)(*(float *)(gen_frame + 0x34)) * fVar16);
  (*(float *)(gen_frame + 0x98)) = (float)(fVar16 * (float10)(*(float *)(gen_frame + 0x38)));
  fVar2 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x78)) * (float10)(*(float *)(gen_frame + 0x78)) +
                 ((float10)(*(float *)(gen_frame + 0x74)) * (float10)(*(float *)(gen_frame + 0x74)) + (float10)(*(float *)(gen_frame + 0x70)) * (float10)(*(float *)(gen_frame + 0x70)))
                 )));
  (*(float *)(gen_frame + 0xc8)) = fVar2;
  fVar2 = ((float)GEN_TOF(SQRT((float10)fVar2)));
  (*(float *)(gen_frame + 0xc8)) = fVar2;
  fVar2 = (float)((float10)1 / (float10)fVar2);
  (*(float *)(gen_frame + 0xc8)) = fVar2;
  fVar17 = (float10)fVar2;
  (*(float *)(gen_frame + 0x50)) = (float)(fVar17 * (float10)(*(float *)(gen_frame + 0x70)));
  (*(float *)(gen_frame + 0x54)) = (float)((float10)(*(float *)(gen_frame + 0x74)) * fVar17);
  (*(float *)(gen_frame + 0x58)) = (float)(fVar17 * (float10)(*(float *)(gen_frame + 0x78)));
  fVar18 = (float10)(float)(fVar17 * (float10)(*(float *)(gen_frame + 0x70)));
  fVar19 = (float10)(*(float *)(gen_frame + 0xc0));
  fVar2 = (float)(fVar19 * fVar18);
  (*(float *)(gen_frame + 0x40)) = fVar2;
  fVar20 = (float10)(float)((float10)(*(float *)(gen_frame + 0x74)) * fVar17);
  fVar3 = (float)(fVar20 * fVar19);
  (*(float *)(gen_frame + 0x44)) = fVar3;
  fVar17 = (float10)(float)(fVar17 * (float10)(*(float *)(gen_frame + 0x78)));
  fVar4 = (float)(fVar17 * fVar19);
  (*(float *)(gen_frame + 0x48)) = fVar4;
  fVar2 = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0xa0)));
  (*(float *)(gen_frame + 0xa0)) = fVar2;
  fVar3 = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0xa4)));
  (*(float *)(gen_frame + 0xa4)) = fVar3;
  cVar10 = *(char *)(param_1 + 0x214);
  fVar4 = (float)((float10)fVar4 + (float10)(*(float *)(gen_frame + 0xa8)));
  (*(float *)(gen_frame + 0xa8)) = fVar4;
  fVar19 = (float10)(float)(fVar16 * (float10)(*(float *)(gen_frame + 0x30)));
  fVar21 = (float10)(*(float *)(gen_frame + 0x8c));
  fVar5 = (float)(fVar21 * fVar19);
  (*(float *)(gen_frame + 0x50)) = fVar5;
  fVar22 = (float10)(float)((float10)(*(float *)(gen_frame + 0x34)) * fVar16);
  fVar6 = (float)(fVar22 * fVar21);
  (*(float *)(gen_frame + 0x54)) = fVar6;
  fVar16 = (float10)(float)(fVar16 * (float10)(*(float *)(gen_frame + 0x38)));
  fVar7 = (float)(fVar16 * fVar21);
  (*(float *)(gen_frame + 0x58)) = fVar7;
  fVar2 = (float)((float10)fVar5 + (float10)fVar2);
  (*(float *)(gen_frame + 0xa0)) = fVar2;
  fVar3 = (float)((float10)fVar6 + (float10)fVar3);
  (*(float *)(gen_frame + 0xa4)) = fVar3;
  fVar4 = (float)((float10)fVar7 + (float10)fVar4);
  (*(float *)(gen_frame + 0xa8)) = fVar4;
  if (cVar10 == '\0') {
    fVar21 = (float10)(*(float *)(gen_frame + 0xc4));
    fVar5 = (float)(fVar21 * fVar18);
    (*(float *)(gen_frame + 0x90)) = fVar5;
    fVar6 = (float)(fVar21 * fVar20);
    (*(float *)(gen_frame + 0x94)) = fVar6;
    fVar7 = (float)(fVar17 * fVar21);
    (*(float *)(gen_frame + 0x98)) = fVar7;
    fVar5 = (float)((float10)fVar5 + (float10)(*(float *)(gen_frame + 0x60)));
    (*(float *)(gen_frame + 0x60)) = fVar5;
    fVar6 = (float)((float10)fVar6 + (float10)(*(float *)(gen_frame + 0x64)));
    (*(float *)(gen_frame + 0x64)) = fVar6;
    fVar7 = (float)((float10)fVar7 + (float10)(*(float *)(gen_frame + 0x68)));
    (*(float *)(gen_frame + 0x68)) = fVar7;
    fVar17 = (float10)fVar1;
    fVar1 = (float)(fVar17 * fVar19);
    (*(float *)(gen_frame + 0x90)) = fVar1;
    fVar8 = (float)(fVar22 * fVar17);
    (*(float *)(gen_frame + 0x94)) = fVar8;
    fVar9 = (float)(fVar16 * fVar17);
    (*(float *)(gen_frame + 0x98)) = fVar9;
    (*(float *)(gen_frame + 0x60)) = (float)((float10)fVar1 + (float10)fVar5);
    (*(float *)(gen_frame + 0x64)) = (float)((float10)fVar8 + (float10)fVar6);
    (*(float *)(gen_frame + 0x68)) = (float)((float10)fVar9 + (float10)fVar7);
  }
  *(float *)(param_1 + 0x70) = (*(float *)(gen_frame + 0x60));
  *(float *)(param_1 + 0x74) = (*(float *)(gen_frame + 0x64));
  *(float *)(param_1 + 0x78) = (*(float *)(gen_frame + 0x68));
  *(float *)(param_1 + 0x40) = fVar2;
  *(float *)(param_1 + 0x44) = fVar3;
  *(float *)(param_1 + 0x48) = fVar4;
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 2;
  fVar16 = F_00b6b410(param_1 + 0x1e8 GEN_EDX_ARG);
  *(float *)(param_1 + 0xd4) = (float)fVar16;
  uVar12 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = uVar12;
  *(undefined4 *)(param_1 + 0x88) = 0;
  F_00690e20((undefined *)(param_1 + 0x10) GEN_EDX_ARG);
  fVar16 = (float10)*(int *)(REFG(int, 0x1370b90) + 0x90);
  (*(float *)(gen_frame + 0xc4)) = *(float *)(param_1 + 0x218);
  if (*(int *)(REFG(int, 0x1370b90) + 0x90) < 0) {
    fVar16 = fVar16 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar1 = (float)fVar16;
  (*(float *)(gen_frame + 0x8c)) = fVar1;
  fVar16 = (float10)*(int *)(REFG(int, 0x1370b90) + 0x94);
  if (*(int *)(REFG(int, 0x1370b90) + 0x94) < 0) {
    fVar16 = fVar16 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar2 = (float)fVar16;
  (*(float *)(gen_frame + 0xcc)) = fVar2;
  if ((float10)fVar1 / (float10)fVar2 < (float10)*(double *)&REFG(undefined, 0x10968c8)) {
    fVar3 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x218) * (float10)REFG(double, 0x1088108))));
    (*(float *)(gen_frame + 0xc8)) = fVar3;
    fVar16 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar3,4)));
    (*(float *)(gen_frame + 0xc8)) = (float)fVar16;
    fVar3 = ((float)GEN_TOF((((float10)(float)fVar16 * (float10)*(double *)&REFG(undefined, 0x10968a8)) /
                   (float10)*(double *)&REFG(undefined, 0x109cac0))));
    (*(float *)(gen_frame + 0xc8)) = fVar3;
    fVar1 = ((float)GEN_TOF((((float10)fVar3 * (float10)fVar2) / (float10)fVar1)));
    (*(float *)(gen_frame + 0xc8)) = fVar1;
    fVar16 = ((float10)GEN_TOD(GEN_X87MATH((float10)fVar1,5)));
    (*(float *)(gen_frame + 0xc8)) = (float)fVar16;
    fVar16 = (float10)(float)fVar16;
    (*(float *)(gen_frame + 0xc4)) = (float)(fVar16 + fVar16);
  }
  uVar14 = *(uint *)(param_1 + 0xd0);
  *(float *)(uVar14 + 0xa4) = (*(float *)(gen_frame + 0xc4));
  F_00c47745((*(uint *)(gen_frame + 0x19c)) ^ (uint)(uint)(gen_frame + 0x1a0) GEN_EDX_ARG);
  return uVar14;
}

/* ref: FUN_00b718e0 */
GEN_FRAME uint GEN_THISCALL F_00b718e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb718e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f38c0)));
  *(undefined4 *)((int)this + 0xe0) = *param_1;
  *(undefined4 *)((int)this + 0xe4) = param_1[1];
  *(undefined4 *)((int)this + 0xe8) = param_1[2];
  *(undefined4 *)((int)this + 0xf0) = *param_2;
  *(undefined4 *)((int)this + 0xf4) = param_2[1];
  *(undefined4 *)((int)this + 0xf8) = param_2[2];
  *(undefined4 *)((int)this + 0x218) = uVar1;
  *(undefined1 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined1 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined1 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined1 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined1 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  *(undefined4 *)((int)this + 0x1dc) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0;
  *(undefined1 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x1ec) = 0;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x1f8) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined4 *)((int)this + 0x100) = 0xe0000000;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0x34;
  uVar2 = F_00b70dc0(this GEN_EDX_FWD,(float)(float10)0);
  return uVar2;
}

/* ref: FUN_00b71b60 */
GEN_FRAME uint GEN_THISCALL F_00b71b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb71b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x100) = param_1;
  *(undefined4 *)((int)this + 0x104) = param_2;
  *(undefined4 *)((int)this + 0x108) = param_3;
  uVar1 = F_00b70dc0(this GEN_EDX_FWD,(float)(float10)0);
  return uVar1;
}

/* ref: FUN_00b71b90 */
GEN_FRAME uint GEN_THISCALL F_00b71b90(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xb71b90u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint uVar1;
  
  F_00b6b310(param_1 + 0x10c GEN_EDX_FWD,param_2,param_3,param_4,param_5,param_6);
  uVar1 = F_00b70dc0(param_1 GEN_EDX_ARG,(float)(float10)0);
  return uVar1;
}

/* ref: FUN_00b71be0 */
GEN_FRAME uint GEN_THISCALL F_00b71be0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xb71be0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint uVar1;
  
  F_00b6b310(param_1 + 0x138 GEN_EDX_FWD,param_2,param_3,param_4,param_5,param_6);
  uVar1 = F_00b70dc0(param_1 GEN_EDX_ARG,(float)(float10)0);
  return uVar1;
}

/* ref: FUN_00b71d10 */
GEN_FRAME uint GEN_THISCALL F_00b71d10(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xb71d10u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint uVar1;
  
  F_00b6b310(param_1 + 0x164 GEN_EDX_FWD,param_2,param_3,param_4,param_5,param_6);
  uVar1 = F_00b70dc0(param_1 GEN_EDX_ARG,(float)(float10)0);
  return uVar1;
}

/* ref: FUN_00b71d60 */
GEN_FRAME uint GEN_THISCALL F_00b71d60(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xb71d60u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint uVar1;
  
  F_00b6b310(param_1 + 400 GEN_EDX_FWD,param_2,param_3,param_4,param_5,param_6);
  uVar1 = F_00b70dc0(param_1 GEN_EDX_ARG,(float)(float10)0);
  return uVar1;
}

/* ref: FUN_00b71e90 */
GEN_FRAME uint GEN_THISCALL F_00b71e90(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xb71e90u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint uVar1;
  
  F_00b6b310(param_1 + 0x1bc GEN_EDX_FWD,param_2,param_3,param_4,param_5,param_6);
  uVar1 = F_00b70dc0(param_1 GEN_EDX_ARG,(float)(float10)0);
  return uVar1;
}

/* ref: FUN_00b71f50 */
GEN_FRAME uint GEN_THISCALL F_00b71f50(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xb71f50u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint uVar1;
  
  F_00b6b310(param_1 + 0x1e8 GEN_EDX_FWD,param_2,param_3,param_4,param_5,param_6);
  uVar1 = F_00b70dc0(param_1 GEN_EDX_ARG,(float)(float10)0);
  return uVar1;
}

/* ref: FUN_00b72010 */
GEN_FRAME uint GEN_THISCALL F_00b72010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb72010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined1 *)((int)this + 0x214) = (undefined1)param_1;
  uVar1 = F_00b70dc0(this GEN_EDX_FWD,(float)(float10)0);
  return uVar1;
}

/* ref: FUN_00b72030 */
GEN_NOFRAME uint GEN_THISCALL F_00b72030(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb72030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f4884));
  F_006906c0((undefined *)((int)this + 0x10) GEN_EDX_FWD);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a8) = (*(undefined * PTR32 (*)[3])REFP(0x10f48ac));
  *(undefined1 *)((int)this + 600) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f492c));
  *(undefined4 *)((int)this + 0x280) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = uVar1;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = uVar1;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined4 *)((int)this + 0x2b4) = uVar1;
  *(undefined4 *)((int)this + 0x2b8) = 0;
  *(undefined4 *)((int)this + 0x2c8) = 0;
  *(undefined4 *)((int)this + 0x2c0) = 0;
  *(undefined4 *)((int)this + 0x2c4) = 0;
  return (uint)this;
}

/* ref: FUN_00b720d0 */
GEN_FRAME uint GEN_THISCALL F_00b720d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xb720d0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  *(undefined1 *)(in_ecx + 0x280) = 1;
  *(undefined4 *)(in_ecx + 0x40) = *param_2;
  *(undefined4 *)(in_ecx + 0x44) = param_2[1];
  *(undefined4 *)(in_ecx + 0x48) = param_2[2];
  *(uint *)(in_ecx + 0x34) = *(uint *)(in_ecx + 0x34) | 2;
  *(undefined4 *)(in_ecx + 0x70) = *param_3;
  *(undefined4 *)(in_ecx + 0x74) = param_3[1];
  *(undefined4 *)(in_ecx + 0x78) = param_3[2];
  uVar1 = *(uint *)(in_ecx + 0xd0);
  *(float *)(uVar1 + 0xa4) = param_4;
  return uVar1;
}

/* ref: FUN_00b72120 */
GEN_FRAME unsigned int GEN_THISCALL F_00b72120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xb72120u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  memcpy(&gen_args[4], &gen_a4, sizeof gen_a4);
  memcpy(&gen_args[5], &gen_a5, sizeof gen_a5);
  float fVar1;
  float10 fVar2;
  float * pfVar3;
  int iVar4;
  int * piVar5;
  undefined * this;
  float * pfVar6;
  float10 fVar7;
  undefined4 uVar8;
  
  pfVar6 = (float *)((*(int *)&gen_args[0]) + 0xe8);
  *pfVar6 = (*(float *)&gen_args[3]);
  pfVar3 = (float *)((*(int *)&gen_args[0]) + 0xec);
  *pfVar3 = (*(float *)&gen_args[4]);
  *(undefined1 *)((*(int *)&gen_args[0]) + 0x280) = 0;
  fVar1 = *pfVar3;
  (*(float *)&gen_args[3]) = (*(float *)&gen_args[2]);
  if ((float10)(*(float *)&gen_args[2]) < (float10)fVar1) {
    pfVar3 = &(*(float *)&gen_args[3]);
  }
  if ((float10)*pfVar6 < (float10)*pfVar3) {
    pfVar6 = pfVar3;
  }
  pfVar3 = (float *)((*(int *)&gen_args[0]) + 0xf8);
  *(float *)((*(int *)&gen_args[0]) + 0xe4) = *pfVar6;
  fVar1 = ((float)GEN_TOF((((float10)(*(float *)&gen_args[5]) * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                 (float10)*(double *)&REFG(undefined, 0x1080220))));
  (*(float *)&gen_args[2]) = fVar1;
  if ((float10)fVar1 < (float10)*pfVar3) {
    pfVar3 = &(*(float *)&gen_args[2]);
  }
  if (!((float10)*(float *)((*(int *)&gen_args[0]) + 0xf4) < (float10)*pfVar3)) {
    pfVar3 = (float *)((*(int *)&gen_args[0]) + 0xf4);
  }
  piVar5 = *(int * PTR32 *)((*(int *)&gen_args[0]) + 0x2c8);
  *(float *)((*(int *)&gen_args[0]) + 0xf0) = *pfVar3;
  if (piVar5 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    piVar5 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x24))
                              (piVar5 GEN_EDX_ARG,*(undefined4 *)(&REFG(undefined, 0x10f39c8) + ((*(uint *)&gen_args[1]) & 0xff) * 0x14))));
    uVar8 = 1;
    this = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 8))(piVar5 GEN_EDX_ARG)));
    piVar5 = (int *)F_00cb0910(this GEN_EDX_ARG,uVar8);
    iVar4 = *piVar5;
  }
  fVar7 = (float10)iVar4;
  if (iVar4 < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar2 = (float10)REFG(double, 0x10944b8);
  *(undefined4 *)((*(int *)&gen_args[0]) + 0x2c4) = 0;
  *(float *)((*(int *)&gen_args[0]) + 0x118) =
       ((float)GEN_TOF((((float10)(float)(fVar7 / fVar2) * (float10)*(double *)&REFG(undefined, 0x1080228)) /
              (float10)*(double *)&REFG(undefined, 0x1080220))));
  return 0;
}

/* ref: FUN_00b72240 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b72240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb72240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = ((float)GEN_TOF(((float10)param_2[1] - (float10)*(float *)((int)this + 0x2c4))));
  param_2[1] = fVar1;
  if (*(char *)((int)this + 0x282) == '\0') {
    fVar2 = F_00b6dde0(fVar1,*(float *)((int)this + 0x294));
    param_2[1] = (float)fVar2;
  }
  else if (*(char *)((int)this + 0x283) == '\0') {
    fVar2 = F_00b6b820(((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)param_2[2] -
                                                                      (float10)param_1[2]) *
                                                      (float10)(float)((float10)param_2[2] -
                                                                      (float10)param_1[2]) +
                                                     ((float10)(float)((float10)*param_2 -
                                                                      (float10)*param_1) *
                                                      (float10)(float)((float10)*param_2 -
                                                                      (float10)*param_1) +
                                                     (float10)(float)((float10)fVar1 -
                                                                     (float10)param_1[1]) *
                                                     (float10)(float)((float10)fVar1 -
                                                                     (float10)param_1[1])))))))),
                         (int)this + 0x2a0,(int)this + 0x290U,(int)this + 0x2b0);
    if ((float10)((float)GEN_TOF(ABS((float10)(float)((float10)fVar1 - (float10)(float)fVar2)))) <
        (float10)*(float *)&REFG(undefined, 0x133d280)) {
      param_2[1] = (float)fVar2;
    }
    else {
      *(undefined1 *)((int)this + 0x283) = 1;
    }
  }
  else {
    fVar2 = F_00b6b820(*(float *)((int)this + 0x13c),(int)this + 0x2a0,(int)this + 0x290U,
                         (int)this + 0x2b0);
    fVar3 = F_00b6dde0(fVar1,(float)fVar2);
    param_2[1] = (float)fVar3;
    if ((float10)((float)GEN_TOF(ABS((float10)(float)((float10)(float)fVar2 - (float10)(float)fVar3)))) <
        (float10)*(float *)&REFG(undefined, 0x133d27c)) {
      *(undefined1 *)((int)this + 0x283) = 0;
    }
  }
  param_2[1] = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x2c4) + (float10)param_2[1])));
  return 0;
}

/* ref: FUN_00b723c0 */
GEN_FRAME uint GEN_THISCALL F_00b723c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb723c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 2;
  *(uint *)((int)this + 0xd8) =
       *(uint *)((int)this + 0xd8) ^
       ((uint)*(byte *)(param_1 + 0xd8) ^ *(uint *)((int)this + 0xd8)) & 1;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd0) + 0xa4))) =
       *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xd0) + 0xa4)));
  if ((*(uint *)((int)this + 0xd8) >> 1 & 1) == 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd0) + 0xa8))) =
         *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xd0) + 0xa8)));
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd0) + 0xac))) =
       *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xd0) + 0xac)));
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd0) + 0xb0))) =
       *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xd0) + 0xb0)));
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)((int)this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)((int)this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xd0) + 0xb8))) =
       *((undefined1 *)GEN_TOP((*(int *)(param_1 + 0xd0) + 0xb8)));
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd0) + 0xb4))) =
       *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xd0) + 0xb4)));
  *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  uVar1 = F_00690f90((undefined *)((int)this + 0x10) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00b724f0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b724f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb724f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  uint uVar2;
  float * pfVar3;
  float fVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(in_ecx + 0xe0) = 0;
  if (REFG(int, 0x137104c) == 0) {
    fVar4 = 0.0;
  }
  else {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_FWD,*(undefined4 *)(in_ecx + 0x26c));
    fVar4 = *(float *)(uVar2 + 0x14);
  }
  (*(float *)(gen_frame + 0x8)) = fVar4;
  pfVar3 = (float *)(in_ecx + 0xf8);
  fVar1 = *pfVar3;
  (*(float *)(gen_frame + 0x4)) = fVar4;
  if ((float10)fVar4 < (float10)fVar1) {
    pfVar3 = &(*(float *)(gen_frame + 0x4));
  }
  if (!((float10)*(float *)(in_ecx + 0xf4) < (float10)*pfVar3)) {
    pfVar3 = (float *)(in_ecx + 0xf4);
  }
  *(float *)(in_ecx + 0xf0) = *pfVar3;
  if (REFG(int, 0x1379694) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(REFG(int, 0x1379694) + 0xb0);
  }
  *(undefined4 *)(in_ecx + 0xfc) = uVar5;
  *(undefined4 *)(in_ecx + 0x100) = 0;
  *(undefined4 *)(in_ecx + 0x104) = 0;
  *(undefined4 *)(in_ecx + 0x108) = 0;
  *(undefined4 *)(in_ecx + 0x10c) = 0;
  *(undefined4 *)(in_ecx + 0x110) = 0;
  *(undefined4 *)(in_ecx + 0x120) = 0;
  *(undefined4 *)(in_ecx + 0x124) = 0;
  *(undefined4 *)(in_ecx + 0x128) = 0;
  *(undefined4 *)(in_ecx + 300) = 0;
  *(undefined4 *)(in_ecx + 0x19c) = 0;
  *(undefined4 *)(in_ecx + 0x1a0) = 0;
  return 0;
}

/* ref: FUN_00b725f0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b725f0(float gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb725f0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float in_ecx = (float)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  float * pfVar2;
  float10 fVar3;
  float fVar4;
  
  (*(float *)(gen_frame + 0x8)) = in_ecx;
  fVar4 = *(float *)((int)gen_fl2bits(in_ecx) + 0x140);
  pfVar2 = (float *)((int)gen_fl2bits(in_ecx) + 0xf8);
  (*(float *)(gen_frame + 0x8)) = fVar4;
  if ((float10)fVar4 < (float10)*pfVar2) {
    pfVar2 = &(*(float *)(gen_frame + 0x8));
  }
  if (!((float10)*(float *)((int)gen_fl2bits(in_ecx) + 0xf4) < (float10)*pfVar2)) {
    pfVar2 = (float *)((int)gen_fl2bits(in_ecx) + 0xf4);
  }
  *(float *)((int)gen_fl2bits(in_ecx) + 0xf0) = *pfVar2;
  if (REFG(int, 0x1379694) == 0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = *(float *)(REFG(int, 0x1379694) + 0xb0);
  }
  (*(float *)(gen_frame + 0x8)) = fVar4;
  (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar4 + (float10)*(double *)&REFG(undefined, 0x1080228));
  fVar3 = F_00aae710((float)((float10)fVar4 + (float10)*(double *)&REFG(undefined, 0x1080228)));
  *(float *)((int)gen_fl2bits(in_ecx) + 0xfc) = (float)fVar3;
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  *(undefined4 *)((int)gen_fl2bits(in_ecx) + 0x100) =
       *(undefined4 *)((int)gen_fl2bits(in_ecx) + 0x144);
  *(undefined4 *)((int)gen_fl2bits(in_ecx) + 0x104) = 0;
  *(undefined4 *)((int)gen_fl2bits(in_ecx) + 0x13c) =
       *(undefined4 *)((int)gen_fl2bits(in_ecx) + 0xe8);
  *(undefined4 *)((int)gen_fl2bits(in_ecx) + 0x108) = 0;
  *(undefined4 *)((int)gen_fl2bits(in_ecx) + 0x10c) = 0;
  *(undefined4 *)((int)gen_fl2bits(in_ecx) + 0x110) = 0;
  *(undefined4 *)((int)gen_fl2bits(in_ecx) + 0x120) = 0;
  *(undefined4 *)((int)gen_fl2bits(in_ecx) + 0x124) = 0;
  *(undefined4 *)((int)gen_fl2bits(in_ecx) + 0x128) = 0;
  *(undefined4 *)((int)gen_fl2bits(in_ecx) + 300) = 0;
  *(undefined4 *)((int)gen_fl2bits(in_ecx) + 0x154) = uVar1;
  *(undefined4 *)((int)gen_fl2bits(in_ecx) + 0x19c) = 0;
  *(undefined4 *)((int)gen_fl2bits(in_ecx) + 0x1a0) = 0;
  return 0;
}

/* ref: FUN_00b726f0 */
GEN_NOFRAME byte GEN_THISCALL F_00b726f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb726f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float * pfVar6;
  float fVar7;
  
  (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1375ac0);
  (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1375ac4);
  uVar1 = *(undefined4 *)((int)this + 0xe4);
  (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1375ac8);
  fVar7 = 0.0;
  (*(float *)(gen_frame + 0x20)) = 0.0;
  (*(float *)(gen_frame + 0x24)) = 0.0;
  (*(float *)(gen_frame + 0x28)) = gen_bits2f(uVar1);
  if (REFG(int, 0x1379694) != 0) {
    fVar7 = *(float *)(REFG(int, 0x1379694) + 0xb0);
  }
  (*(float *)(gen_frame + 0x3c)) = fVar7;
  (*(float *)(gen_frame + 0x3c)) = (float)((float10)fVar7 - (float10)*(double *)&REFG(undefined, 0x1080228));
  pfVar6 = (float *)F_00b6a5c0(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x20)),
                                 (float)((float10)fVar7 - (float10)*(double *)&REFG(undefined, 0x1080228)));
  fVar7 = *pfVar6;
  iVar4 = *(int *)((int)this + 0xd0);
  (*(float *)(gen_frame + 0x20)) = fVar7;
  fVar2 = pfVar6[1];
  (*(float *)(gen_frame + 0x24)) = fVar2;
  (*(float *)(gen_frame + 0x3c)) = gen_bits2f(REFG(float, 0x133d294));
  fVar3 = pfVar6[2];
  (*(float *)(gen_frame + 0x28)) = fVar3;
  fVar7 = (float)((float10)fVar7 + (float10)(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x0)) = fVar7;
  fVar2 = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x14)));
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar3 = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x18)));
  (*(float *)(gen_frame + 0x8)) = fVar3;
  (*(float *)(gen_frame + 0x20)) = fVar7;
  (*(float *)(gen_frame + 0x24)) = fVar2;
  (*(float *)(gen_frame + 0x28)) = fVar3;
  if (iVar4 == 0) {
    F_006906f0((undefined *)((int)this + 0x10) GEN_EDX_ARG);
  }
  *(float *)((int)this + 0x40) = (*(float *)(gen_frame + 0x20));
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(float *)((int)this + 0x44) = (*(float *)(gen_frame + 0x24));
  *(float *)((int)this + 0x48) = (*(float *)(gen_frame + 0x28));
  *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 2;
  *(float *)((int)this + 0x70) = (*(float *)(gen_frame + 0x10));
  *(float *)((int)this + 0x74) = (*(float *)(gen_frame + 0x14));
  *(float *)((int)this + 0x78) = (*(float *)(gen_frame + 0x18));
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f3960)));
  *(undefined4 *)((int)this + 0x84) = uVar1;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd0) + 0xac))) = uVar5;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd0) + 0xb0))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd0) + 0xb0))), REFG(float, 0x10f38dc));
  *((float *)GEN_TOP((*(int *)((int)this + 0xd0) + 0xa4))) = (*(float *)(gen_frame + 0x3c));
  return 1;
}

/* ref: FUN_00b72890 */
GEN_FRAME unsigned int GEN_THISCALL F_00b72890(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xb72890u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  float fVar1;
  float * pfVar2;
  
  *(float *)((*(int *)&gen_args[0]) + 0xe8) = (*(float *)&gen_args[2]);
  pfVar2 = (float *)((*(int *)&gen_args[0]) + 0xec);
  *pfVar2 = (*(float *)&gen_args[3]);
  fVar1 = *pfVar2;
  (*(float *)&gen_args[2]) = (*(float *)&gen_args[1]);
  if ((float10)(*(float *)&gen_args[1]) < (float10)fVar1) {
    pfVar2 = &(*(float *)&gen_args[2]);
  }
  if (!((float10)*(float *)((*(int *)&gen_args[0]) + 0xe8) < (float10)*pfVar2)) {
    pfVar2 = (float *)((*(int *)&gen_args[0]) + 0xe8);
  }
  fVar1 = *pfVar2;
  *(float *)((*(int *)&gen_args[0]) + 0x13c) = (*(float *)&gen_args[1]);
  *(float *)((*(int *)&gen_args[0]) + 0xe4) = fVar1;
  return;
}

/* ref: FUN_00b72900 */
GEN_FRAME unsigned int GEN_THISCALL F_00b72900(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xb72900u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  float fVar1;
  float * pfVar2;
  
  *(float *)((*(int *)&gen_args[0]) + 0xf4) = (*(float *)&gen_args[2]);
  pfVar2 = (float *)((*(int *)&gen_args[0]) + 0xf8);
  *pfVar2 = (*(float *)&gen_args[3]);
  fVar1 = *pfVar2;
  (*(float *)&gen_args[2]) = (*(float *)&gen_args[1]);
  if ((float10)(*(float *)&gen_args[1]) < (float10)fVar1) {
    pfVar2 = &(*(float *)&gen_args[2]);
  }
  if (!((float10)*(float *)((*(int *)&gen_args[0]) + 0xf4) < (float10)*pfVar2)) {
    pfVar2 = (float *)((*(int *)&gen_args[0]) + 0xf4);
  }
  fVar1 = *pfVar2;
  *(float *)((*(int *)&gen_args[0]) + 0xf0) = fVar1;
  *(float *)((*(int *)&gen_args[0]) + 0x158) = fVar1;
  return;
}

/* ref: FUN_00b72970 */
GEN_FRAME unsigned int GEN_THISCALL F_00b72970(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb72970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float * pfVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar1 = *(float *)((int)this + 0x154);
  (*(float *)(gen_frame + 0x10)) = fVar1;
  if (0.0 < fVar1) {
    fVar2 = *(float *)((int)this + 0x100);
    fVar3 = *(float *)(REFG(int, 0x137104c) + 0x1198);
    (*(float *)(gen_frame + 0xc)) = fVar2;
    (*(float *)(gen_frame + 0x14)) = fVar3;
    (*(float *)(gen_frame + 0x18)) = 0.0;
    if ((float10)fVar3 < (float10)fVar1) {
      fVar1 = (float)((float10)0 - (float10)fVar2);
      (*(float *)(gen_frame + 0x18)) = fVar1;
      fVar6 = F_00aae710(fVar1);
      (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((fVar6 * (float10)(*(float *)(gen_frame + 0x14))) / (float10)(*(float *)(gen_frame + 0x10)) + (float10)(*(float *)(gen_frame + 0xc)))));
    }
    fVar1 = *(float *)((int)this + 0x118);
    pfVar5 = (float *)((int)this + 0x118);
    (*(float *)(gen_frame + 0xc)) = (*(float *)(gen_frame + 0x18));
    if ((float10)(*(float *)(gen_frame + 0x18)) < (float10)fVar1) {
      pfVar5 = &(*(float *)(gen_frame + 0xc));
    }
    if (!((float10)*(float *)((int)this + 0x114) < (float10)*pfVar5)) {
      pfVar5 = (float *)((int)this + 0x114);
    }
    *(float *)((int)this + 0x100) = *pfVar5;
  }
  fVar2 = *(float *)((int)this + 0x120);
  fVar6 = (float10)*(double *)&REFG(undefined, 0x1080228);
  fVar1 = *(float *)((int)this + 0x128);
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar7 = (float10)REFG(double, 0x1088108);
  (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
  pfVar5 = &(*(float *)(gen_frame + 0xc));
  fVar2 = ((float)GEN_TOF((((float10)fVar2 * fVar6) * fVar7)));
  (*(float *)(gen_frame + 0x18)) = fVar2;
  fVar3 = *(float *)((int)this + 0x124);
  fVar4 = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) * (float10)*(double *)&REFG(undefined, 0x10943d8))));
  (*(float *)(gen_frame + 0xc)) = fVar4;
  fVar4 = (float)((float10)fVar4 * (float10)REFG(double, 0x1094800));
  (*(float *)(gen_frame + 0xc)) = fVar4;
  if (!((float10)fVar4 < (float10)1)) {
    pfVar5 = &(*(float *)(gen_frame + 0x14));
  }
  fVar1 = (float)((float10)fVar2 - (float10)fVar1);
  (*(float *)(gen_frame + 0x18)) = fVar1;
  fVar8 = F_00aae710(fVar1);
  fVar1 = (float)(fVar8 * (float10)*pfVar5 + (float10)(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0xc)) = fVar1;
  fVar8 = F_00aae710(fVar1);
  fVar1 = *(float *)((int)this + 300);
  *(float *)((int)this + 0x128) = (float)fVar8;
  fVar2 = *(float *)(REFG(int, 0x137104c) + 0x1198);
  (*(float *)(gen_frame + 0x10)) = fVar1;
  (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
  fVar2 = (float)((float10)fVar2 * (float10)*(double *)&REFG(undefined, 0x10943d8));
  (*(float *)(gen_frame + 0xc)) = fVar2;
  pfVar5 = &(*(float *)(gen_frame + 0xc));
  fVar2 = (float)((float10)fVar2 * (float10)REFG(double, 0x1094800));
  (*(float *)(gen_frame + 0xc)) = fVar2;
  if (!((float10)fVar2 < (float10)1)) {
    pfVar5 = &(*(float *)(gen_frame + 0x14));
  }
  fVar6 = F_00aae710(((float)GEN_TOF(((float10)((float)GEN_TOF(((fVar6 * (float10)fVar3) * fVar7))) - (float10)fVar1))))
  ;
  fVar6 = F_00aae710((float)(fVar6 * (float10)*pfVar5 + (float10)(*(float *)(gen_frame + 0x10))));
  *(float *)((int)this + 300) = (float)fVar6;
  return 0;
}

/* ref: FUN_00b72b50 */
GEN_NOFRAME uint GEN_THISCALL F_00b72b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb72b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float * pfVar6;
  float * pfVar7;
  float * pfVar8;
  float10 fVar9;
  float fVar10;
  
  fVar10 = *param_3;
  fVar1 = *param_2;
  (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar10 - (float10)fVar1);
  fVar2 = param_3[1];
  fVar3 = param_2[1];
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar2 - (float10)fVar3);
  fVar4 = param_3[2];
  fVar5 = param_2[2];
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar4 - (float10)fVar5);
  (*(float *)(gen_frame + 0x0)) = (float)((float10)fVar10 - (float10)fVar1);
  (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar2 - (float10)fVar3);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar4 - (float10)fVar5);
  fVar10 = F_00aae900(&(*(float *)(gen_frame + 0x0)));
  *(float *)((int)this + 0xfc) = fVar10;
  fVar10 = F_00aae920(&(*(float *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(-(float10)fVar10));
  pfVar7 = (float *)((int)this + 0x118);
  pfVar8 = (float *)((int)this + 0x114);
  pfVar6 = &(*(float *)(gen_frame + 0x2c));
  if (!((float10)((float)GEN_TOF(-(float10)fVar10)) < (float10)*pfVar7)) {
    pfVar6 = pfVar7;
  }
  if (!((float10)*pfVar8 < (float10)*pfVar6)) {
    pfVar6 = pfVar8;
  }
  fVar1 = *(float *)((int)this + 0x120);
  fVar10 = *pfVar6;
  fVar9 = (float10)*(double *)&REFG(undefined, 0x1080228);
  (*(float *)(gen_frame + 0x2c)) = fVar10;
  *(float *)((int)this + 0x100) = fVar10;
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xfc) +
                 ((float10)fVar1 * fVar9) * (float10)REFG(double, 0x1088108))));
  (*(float *)(gen_frame + 0x28)) = fVar1;
  fVar10 = ((float)GEN_TOF(((fVar9 * (float10)*(float *)((int)this + 0x124)) * (float10)REFG(double, 0x1088108) +
                  (float10)fVar10)));
  (*(float *)(gen_frame + 0x2c)) = fVar10;
  if ((float10)fVar10 < (float10)*pfVar7) {
    pfVar7 = &(*(float *)(gen_frame + 0x2c));
  }
  if ((float10)*pfVar8 < (float10)*pfVar7) {
    pfVar8 = pfVar7;
  }
  fVar10 = *pfVar8;
  (*(float *)(gen_frame + 0x10)) = 0.0;
  (*(float *)(gen_frame + 0x14)) = 0.0;
  (*(float *)(gen_frame + 0x18)) = gen_bits2f(REFG(float, 0x10a509c));
  F_00b6a690(param_1,&(*(float *)(gen_frame + 0x10)),fVar1,GEN_TOF(gen_bits2f((uint)gen_fl2bits(fVar10) ^ REFG(uint, 0x10920d0))));
  return param_1;
}

/* ref: FUN_00b72ca0 */
GEN_NOFRAME uint GEN_THISCALL F_00b72ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xb72ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar6;
  float * pfVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float fVar13;
  
  (*(uint *)(gen_frame + 0xdc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xe0);
  (*(float * PTR32 *)(gen_frame + 0x2c)) = param_3;
  fVar13 = *param_7;
  (*(float * PTR32 *)(gen_frame + 0x18)) = param_2;
  fVar1 = *param_6;
  (*(float * PTR32 *)(gen_frame + 0x24)) = param_6;
  (*(float * PTR32 *)(gen_frame + 0x28)) = param_7;
  (*(float *)(gen_frame + 0x58)) = param_5;
  (*(float *)(gen_frame + 0x70)) = 0.0;
  (*(float *)(gen_frame + 0x74)) = 0.0;
  (*(float *)(gen_frame + 0x78)) = param_5;
  F_00b6a690(&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x70)),fVar1,fVar13);
  fVar13 = *(*(float * PTR32 *)(gen_frame + 0x2c));
  fVar1 = *param_4;
  (*(float *)(gen_frame + 0x8c)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x5c)) = 0.0;
  fVar13 = (float)((float10)fVar13 - (float10)fVar1);
  (*(float *)(gen_frame + 0x70)) = fVar13;
  fVar1 = (float)((float10)(*(float * PTR32 *)(gen_frame + 0x2c))[1] - (float10)param_4[1]);
  (*(float *)(gen_frame + 0x74)) = fVar1;
  pfVar7 = &(*(float *)(gen_frame + 0x54));
  fVar2 = (float)((float10)(*(float * PTR32 *)(gen_frame + 0x2c))[2] - (float10)param_4[2]);
  (*(float *)(gen_frame + 0x78)) = fVar2;
  (*(float *)(gen_frame + 0x30)) = fVar13;
  (*(float *)(gen_frame + 0x34)) = fVar1;
  (*(float *)(gen_frame + 0x38)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x58)) / ((float10)REFG(float, 0x133d290) / (float10)*(double *)&REFG(undefined, 0x10944e0)))));
  (*(float *)(gen_frame + 0x54)) = fVar3;
  if (!((float10)fVar3 < (float10)1)) {
    pfVar7 = &(*(float *)(gen_frame + 0x8c));
  }
  if (!(0.0 < *pfVar7)) {
    pfVar7 = &(*(float *)(gen_frame + 0x5c));
  }
  F_0046f390(&(*(float *)(gen_frame + 0x70)) GEN_EDX_ARG);
  (*(float *)(gen_frame + 0x60)) = (float)((float10)REFG(float, 0x1302c88) * (float10)(*(float *)(gen_frame + 0x74)) -
                    (float10)REFG(float, 0x1302c84) * (float10)(*(float *)(gen_frame + 0x78)));
  (*(float *)(gen_frame + 0x64)) = (float)((float10)REFG(float, 0x1302c80) * (float10)(*(float *)(gen_frame + 0x78)) -
                    (float10)(*(float *)(gen_frame + 0x70)) * (float10)REFG(float, 0x1302c88));
  (*(float *)(gen_frame + 0x68)) = (float)((float10)(*(float *)(gen_frame + 0x70)) * (float10)REFG(float, 0x1302c84) -
                    (float10)REFG(float, 0x1302c80) * (float10)(*(float *)(gen_frame + 0x74)));
  fVar13 = (float)((float10)*pfVar7 * (float10)*(double *)&REFG(undefined, 0x10f4958) -
                  (float10)*(double *)&REFG(undefined, 0x10f4950));
  (*(float *)(gen_frame + 0x8c)) = fVar13;
  uVar6 = F_0046f390(&(*(float *)(gen_frame + 0x60)) GEN_EDX_ARG);
  F_004ef1c0(((undefined1 *)(gen_frame + 0x90)) GEN_EDX_ARG,uVar6,fVar13);
  F_004eea10(&(*(float *)(gen_frame + 0x30)) GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x90)));
  iVar4 = *(int *)(param_1 + 0xd0);
  fVar13 = *(float *)(iVar4 + 0xa4);
  (*(float *)(gen_frame + 0x8c)) = fVar13;
  fVar1 = *(float *)(iVar4 + 0xa8);
  (*(float *)(gen_frame + 0x5c)) = fVar1;
  fVar13 = ((float)GEN_TOF((((float10)fVar13 * (float10)REFG(double, 0x1088108)) / (float10)fVar1)));
  (*(float *)(gen_frame + 0x8c)) = fVar13;
  fVar8 = F_00b6d440(fVar13,&(*(float *)(gen_frame + 0x30)),1,(*(float *)(gen_frame + 0x58)));
  (*(float *)(gen_frame + 0x5c)) = (float)fVar8;
  fVar13 = *((float *)GEN_TOP((*(int *)(param_1 + 0xd0) + 0xa4)));
  (*(float *)(gen_frame + 0x8c)) = fVar13;
  fVar13 = (float)((float10)fVar13 * (float10)REFG(double, 0x1088108));
  (*(float *)(gen_frame + 0x8c)) = fVar13;
  fVar8 = F_00b6d440(fVar13,&(*(float *)(gen_frame + 0x30)),0,(*(float *)(gen_frame + 0x58)));
  fVar13 = *(float *)(param_1 + 0x104);
  (*(float *)(gen_frame + 0x8c)) = (float)fVar8;
  if ((GEN_ISNAN(fVar13) == (GEN_ISNAN(fVar13) || fVar13 == 0.0)) ||
     (fVar13 = *(float *)(param_1 + 0x108), GEN_ISNAN(fVar13) == (GEN_ISNAN(fVar13) || fVar13 == 0.0))) {
    (*(float *)(gen_frame + 0x64)) = (*(float *)(gen_frame + 0x44));
    (*(float *)(gen_frame + 0x60)) = (*(float *)(gen_frame + 0x40));
    (*(float *)(gen_frame + 0x70)) = (*(float *)(gen_frame + 0x30));
    (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x48));
    (*(float *)(gen_frame + 0x74)) = (*(float *)(gen_frame + 0x34));
    (*(float *)(gen_frame + 0x78)) = (*(float *)(gen_frame + 0x38));
    F_0046f390(&(*(float *)(gen_frame + 0x60)) GEN_EDX_ARG);
    F_0046f390(&(*(float *)(gen_frame + 0x70)) GEN_EDX_ARG);
    fVar8 = (float10)(*(float *)(gen_frame + 0x74));
    fVar9 = (float10)(*(float *)(gen_frame + 0x64));
    (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x20)) = REFG(float, 0x1090708);
    fVar10 = (float10)(*(float *)(gen_frame + 0x70));
    pfVar7 = &(*(float *)(gen_frame + 0x54));
    fVar11 = (float10)(*(float *)(gen_frame + 0x60));
    fVar12 = (float10)(*(float *)(gen_frame + 0x78));
    fVar13 = ((float)GEN_TOF((fVar12 * (float10)(*(float *)(gen_frame + 0x68)) + (fVar9 * fVar8 + fVar11 * fVar10))));
    (*(float *)(gen_frame + 0x54)) = fVar13;
    if (!((float10)fVar13 < (float10)1)) {
      pfVar7 = &(*(float *)(gen_frame + 0x1c));
    }
    if (!(REFG(float, 0x1090708) < *pfVar7)) {
      pfVar7 = &(*(float *)(gen_frame + 0x20));
    }
    (*(float *)(gen_frame + 0x70)) = (float)(fVar12 * fVar9 - fVar8 * (float10)(*(float *)(gen_frame + 0x68)));
    (*(float *)(gen_frame + 0x74)) = (float)((float10)(*(float *)(gen_frame + 0x68)) * fVar10 - fVar11 * fVar12);
    (*(float *)(gen_frame + 0x78)) = (float)(fVar8 * fVar11 - fVar9 * fVar10);
    fVar13 = F_00aae920(&(*(float *)(gen_frame + 0x70)));
    (*(float *)(gen_frame + 0x88)) = ((float)GEN_TOF(ABS((float10)fVar13)));
    fVar13 = (float)((float10)((float)GEN_TOF(ABS((float10)fVar13))) + (float10)*(double *)&REFG(undefined, 0x1094620));
    (*(float *)(gen_frame + 0x88)) = fVar13;
    fVar8 = F_00b6b230((*(float *)(gen_frame + 0x8c)),(*(float *)(gen_frame + 0x5c)),fVar13);
    fVar13 = (float)fVar8;
    (*(float *)(gen_frame + 0x8c)) = fVar13;
    fVar8 = ((float10)GEN_TOD(GEN_X87MATH((float10)*pfVar7,7)));
    (*(float *)(gen_frame + 0x88)) = (float)fVar8;
    if (((float10)fVar13 < (float10)(float)fVar8) &&
       (fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x78)) * (float10)(*(float *)(gen_frame + 0x78)) +
                       ((float10)(*(float *)(gen_frame + 0x70)) * (float10)(*(float *)(gen_frame + 0x70)) +
                       (float10)(*(float *)(gen_frame + 0x74)) * (float10)(*(float *)(gen_frame + 0x74)))))), (*(float *)(gen_frame + 0x88)) = fVar1,
       (float10)REFG(float, 0x10947f8) < (float10)fVar1)) {
      fVar13 = gen_bits2f((uint)gen_fl2bits(fVar13) ^ REFG(uint, 0x10920d0));
      uVar6 = F_0046f390(&(*(float *)(gen_frame + 0x70)) GEN_EDX_ARG);
      F_004ef1c0(((undefined1 *)(gen_frame + 0x90)) GEN_EDX_ARG,uVar6,fVar13);
      pfVar7 = (float *)F_0046f390(&(*(float *)(gen_frame + 0x30)) GEN_EDX_ARG);
      (*(float *)(gen_frame + 0x30)) = *pfVar7;
      (*(float *)(gen_frame + 0x34)) = pfVar7[1];
      (*(float *)(gen_frame + 0x38)) = pfVar7[2];
      pfVar7 = (float *)F_004ee670(((undefined1 *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x30)),(uint)((undefined1 *)(gen_frame + 0x90)));
      fVar13 = *pfVar7;
      (*(float *)(gen_frame + 0x60)) = fVar13;
      fVar1 = pfVar7[1];
      (*(float *)(gen_frame + 0x64)) = fVar1;
      fVar2 = pfVar7[2];
      (*(float *)(gen_frame + 0x68)) = fVar2;
      fVar3 = ((float)GEN_TOF(((float10)fVar2 * (float10)fVar2 +
                     ((float10)fVar13 * (float10)fVar13 + (float10)fVar1 * (float10)fVar1))));
      (*(float *)(gen_frame + 0x88)) = fVar3;
      fVar3 = ((float)GEN_TOF(SQRT((float10)fVar3)));
      (*(float *)(gen_frame + 0x88)) = fVar3;
      fVar8 = (float10)fVar3;
      if ((float10)REFG(float, 0x10947f8) < fVar8) {
        fVar9 = (float10)(*(float *)(gen_frame + 0x58));
        (*(float *)(gen_frame + 0x70)) = (float)(fVar9 * (float10)fVar13);
        (*(float *)(gen_frame + 0x74)) = (float)((float10)fVar1 * fVar9);
        (*(float *)(gen_frame + 0x78)) = (float)(fVar9 * (float10)fVar2);
        fVar13 = ((float)GEN_TOF(((float10)(float)(fVar9 * (float10)fVar13) / fVar8)));
        (*(float *)(gen_frame + 0x60)) = fVar13;
        fVar1 = ((float)GEN_TOF(((float10)(float)((float10)fVar1 * fVar9) / fVar8)));
        (*(float *)(gen_frame + 0x64)) = fVar1;
        fVar2 = ((float)GEN_TOF(((float10)(float)(fVar9 * (float10)fVar2) / fVar8)));
        (*(float *)(gen_frame + 0x68)) = fVar2;
        (*(float *)(gen_frame + 0x40)) = fVar13;
        (*(float *)(gen_frame + 0x44)) = fVar1;
        (*(float *)(gen_frame + 0x48)) = fVar2;
      }
    }
  }
  else {
    pfVar7 = (float *)F_00b6ea90(param_1 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x70)),(*(float *)(gen_frame + 0x58)),&(*(float *)(gen_frame + 0x30)),*(*(float * PTR32 *)(gen_frame + 0x24)),*(*(float * PTR32 *)(gen_frame + 0x28)),
                                   (float)fVar8,(*(float *)(gen_frame + 0x5c)));
    (*(float *)(gen_frame + 0x40)) = *pfVar7;
    (*(float *)(gen_frame + 0x44)) = pfVar7[1];
    (*(float *)(gen_frame + 0x48)) = pfVar7[2];
  }
  fVar13 = F_00aae900(&(*(float *)(gen_frame + 0x40)));
  *(*(float * PTR32 *)(gen_frame + 0x24)) = fVar13;
  fVar13 = F_00aae920(&(*(float *)(gen_frame + 0x40)));
  *(*(float * PTR32 *)(gen_frame + 0x28)) = fVar13;
  fVar13 = *(*(float * PTR32 *)(gen_frame + 0x2c));
  (*(float *)(gen_frame + 0x70)) = (float)((float10)fVar13 + (float10)(*(float *)(gen_frame + 0x40)));
  fVar1 = (*(float * PTR32 *)(gen_frame + 0x2c))[1];
  (*(float *)(gen_frame + 0x74)) = (float)((float10)(*(float *)(gen_frame + 0x44)) + (float10)fVar1);
  fVar2 = (*(float * PTR32 *)(gen_frame + 0x2c))[2];
  pfVar7 = (*(float * PTR32 *)(gen_frame + 0x18));
  (*(float *)(gen_frame + 0x78)) = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x48)));
  *(*(float * PTR32 *)(gen_frame + 0x18)) = (float)((float10)fVar13 + (float10)(*(float *)(gen_frame + 0x40)));
  (*(float * PTR32 *)(gen_frame + 0x18))[1] = (float)((float10)(*(float *)(gen_frame + 0x44)) + (float10)fVar1);
  (*(float * PTR32 *)(gen_frame + 0x18))[2] = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x48)));
  F_00c47745((*(uint *)(gen_frame + 0xdc)) ^ (uint)(uint)(gen_frame + 0xe0) GEN_EDX_ARG);
  return (uint)pfVar7;
}

/* ref: FUN_00b732f0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b732f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb732f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float fVar5;
  
  (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF((((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[1]))) - ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[2]))))));
  fVar5 = (*(float * PTR32 *)&gen_args[1])[1];
  fVar1 = (*(float * PTR32 *)&gen_args[2])[1];
  (*(float *)(gen_frame + 0x24)) = (float)((float10)fVar5 - (float10)fVar1);
  fVar2 = (*(float * PTR32 *)&gen_args[1])[2];
  fVar3 = (*(float * PTR32 *)&gen_args[2])[2];
  (*(float *)(gen_frame + 0x28)) = (float)((float10)fVar2 - (float10)fVar3);
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF((((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[1]))) - ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[2]))))));
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar5 - (float10)fVar1);
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar2 - (float10)fVar3);
  fVar5 = F_00aae900(&(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x38)) = fVar5;
  fVar5 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))) - (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))))));
  (*(float *)(gen_frame + 0x20)) = fVar5;
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) - (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))))));
  (*(float *)(gen_frame + 0x24)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) - (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))));
  (*(float *)(gen_frame + 0x28)) = fVar2;
  (*(float *)(gen_frame + 0x0)) = fVar5;
  (*(float *)(gen_frame + 0x4)) = fVar1;
  (*(float *)(gen_frame + 0x8)) = fVar2;
  fVar5 = F_00aae900(&(*(float *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x3c)) = fVar5;
  if ((*(int *)&gen_args[4]) == 3) {
LAB_00b73398: ;
    if (*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x154))) <= 0.0) {
      fVar4 = (float10)(*(float *)(gen_frame + 0x38));
      (*(float *)(gen_frame + 0x38)) = (float)((float10)fVar5 - fVar4);
      fVar4 = F_00aae710((float)((float10)fVar5 - fVar4));
      (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(ABS(fVar4)));
      if (*(double *)&REFG(undefined, 0x10f4960) < (double)((float)GEN_TOF(ABS(fVar4)))) {
        (*(undefined4 *)&gen_args[3]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[3]), 1, 3),1);
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x154))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x154))), REFG(float, 0x10f3968));
      }
    }
LAB_00b733e4: ;
    if (REFG(char, 0x1375c50) == '\0') goto LAB_00b73401;
  }
  else {
    if ((*(int *)&gen_args[4]) != 4) {
      if ((*(int *)&gen_args[4]) != 5) goto LAB_00b73401;
      goto LAB_00b73398;
    }
    if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a5))) == '\0') goto LAB_00b733e4;
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x154))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x154))), REFG(float, 0x10f3968));
  (*(undefined4 *)&gen_args[3]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[3]), 1, 3),1);
LAB_00b73401: ;
  F_00b6f180((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(*(float * PTR32 *)&gen_args[1]),(*(float * PTR32 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
  return;
}

/* ref: FUN_00b73430 */
GEN_FRAME byte GEN_THISCALL F_00b73430(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb73430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  byte bVar2;
  byte local_5;
  
  bVar2 = 1;
  if (REFG(int * PTR32, 0x1379694) != (int *)0x0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379694) + 0x68))))(REFG(int * PTR32, 0x1379694) GEN_EDX_FWD);
    if ((char)uVar1 != '\0') {
      *(undefined4 *)((int)this + 0x170) = *(undefined4 *)((int)this + 0x40);
      *(undefined4 *)((int)this + 0x174) = *(undefined4 *)((int)this + 0x44);
      *(undefined4 *)((int)this + 0x178) = *(undefined4 *)((int)this + 0x48);
      *(undefined4 *)((int)this + 0x180) = *(undefined4 *)((int)this + 0x70);
      *(undefined4 *)((int)this + 0x184) = *(undefined4 *)((int)this + 0x74);
      *(undefined4 *)((int)this + 0x188) = *(undefined4 *)((int)this + 0x78);
      if (*(char *)((int)this + 400) != '\0') {
        ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_ARG);
      }
      goto LAB_00b734da;
    }
  }
  local_5 = 0;
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)((int)this + 0x180);
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)((int)this + 0x184);
  *(undefined4 *)((int)this + 0x78) = *(undefined4 *)((int)this + 0x188);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x170);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)((int)this + 0x174);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)((int)this + 0x178);
  *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 2;
  bVar2 = local_5;
LAB_00b734da: ;
  *(bool *)((int)this + 400) = REFG(int * PTR32, 0x1379694) == (int *)0x0;
  return bVar2;
}

/* ref: FUN_00b73500 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b73500(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb73500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x44) -
                          (float10)*(float *)((int)this + 0x74))));
  fVar2 = (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x40) -
                          (float10)*(float *)((int)this + 0x70))));
  fVar3 = (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x48) -
                          (float10)*(float *)((int)this + 0x78))));
  if ((double)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar3 * fVar3 + (fVar2 * fVar2 + fVar1 * fVar1))))))) <
      *(double *)&REFG(undefined, 0x10a1b58)) {
    *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x170);
    *(undefined4 *)((int)this + 0x44) = *(undefined4 *)((int)this + 0x174);
    *(undefined4 *)((int)this + 0x48) = *(undefined4 *)((int)this + 0x178);
    *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) | 2;
    *(undefined4 *)((int)this + 0x70) = *(undefined4 *)((int)this + 0x180);
    *(undefined4 *)((int)this + 0x74) = *(undefined4 *)((int)this + 0x184);
    *(undefined4 *)((int)this + 0x78) = *(undefined4 *)((int)this + 0x188);
    return 0;
  }
  *(float *)((int)this + 0x170) = *(float *)((int)this + 0x40);
  *(undefined4 *)((int)this + 0x174) = *(undefined4 *)((int)this + 0x44);
  *(undefined4 *)((int)this + 0x178) = *(undefined4 *)((int)this + 0x48);
  *(undefined4 *)((int)this + 0x180) = *(undefined4 *)((int)this + 0x70);
  *(undefined4 *)((int)this + 0x184) = *(undefined4 *)((int)this + 0x74);
  *(undefined4 *)((int)this + 0x188) = *(undefined4 *)((int)this + 0x78);
  return 0;
}

/* ref: FUN_00b73600 */
GEN_FRAME uint GEN_THISCALL F_00b73600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb73600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float local_10;
  int local_c;
  
  uVar7 = param_2;
  uVar3 = F_00ab11c0();
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  uVar3 = F_00b6bf70(param_1 GEN_EDX_ARG);
  if (uVar3 == 3) {
    local_c = 2;
  }
  else if (uVar3 == 4) {
    local_c = 3;
  }
  else {
    local_c = 0;
  }
  fVar1 = *(float *)((int)param_1 + 0x120);
  fVar2 = *(float *)((int)param_1 + 0x124);
  *(undefined4 *)((int)param_1 + 0x10c) = 0;
  *(undefined4 *)((int)param_1 + 0x110) = 0;
  uVar3 = REFG(undefined4, 0x137104c);
  if (REFG(undefined4, 0x137104c) == 0) goto LAB_00b737ee;
  uVar4 = F_00b6a870();
  iVar8 = 0;
  local_10 = REFG(float, 0x1087f04);
  iVar5 = 2;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
  case 4: ;
    iVar5 = 0;
    break;
  case 1: ;
  case 2: ;
  case 3: ;
  case 5: ;
  case 6: ;
    iVar5 = 1;
  }
  if (uVar4 == 1) {
LAB_00b736c7: ;
    iVar8 = (uint)(iVar5 != 0) * 2 + 0x6b;
LAB_00b736d2: ;
    if (uVar4 != 0) goto LAB_00b736d6;
  }
  else {
    if (uVar4 != 2) {
      if (uVar4 == 3) goto LAB_00b736c7;
      goto LAB_00b736d2;
    }
    iVar8 = (uint)(iVar5 != 0) * 2 + 0x67;
LAB_00b736d6: ;
    uVar6 = F_00414500(*(undefined4 *)(uVar3 + 0x10) GEN_EDX_ARG,iVar8);
    if (*(int *)(uVar6 + 0x14) != 0) {
      local_10 = REFG(float, 0x1090708);
    }
  }
  iVar8 = 0;
  param_2 = (uint)gen_fl2bits(REFG(float, 0x1087f04));
  iVar5 = 2;
  switch((unsigned int)(uintptr_t)(uVar7)) {
  case 0: ;
  case 4: ;
    iVar5 = 0;
    break;
  case 1: ;
  case 2: ;
  case 3: ;
  case 5: ;
  case 6: ;
    iVar5 = 1;
  }
  if (uVar4 == 1) {
LAB_00b73745: ;
    iVar8 = (uint)(iVar5 != 0) * 2 + 0x6c;
LAB_00b73750: ;
    if (uVar4 != 0) goto LAB_00b73754;
  }
  else {
    if (uVar4 != 2) {
      if (uVar4 == 3) goto LAB_00b73745;
      goto LAB_00b73750;
    }
    iVar8 = (uint)(iVar5 != 0) * 2 + 0x68;
LAB_00b73754: ;
    uVar7 = F_00414500(*(undefined4 *)(uVar3 + 0x10) GEN_EDX_ARG,iVar8);
    if (*(int *)(uVar7 + 0x14) != 0) {
      param_2 = (uint)gen_fl2bits(REFG(float, 0x1090708));
    }
  }
  if ((char)param_3 != '\0') {
    param_2 = 0;
  }
  if ((local_c == 1) || (local_c == 3)) {
    F_00b6f4c0(param_1 GEN_EDX_ARG,uVar4,local_10,GEN_TOF(gen_bits2f(param_2)),uVar3);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x120) = 0;
    *(undefined4 *)((int)param_1 + 0x124) = 0;
    F_00b6f710(param_1 GEN_EDX_ARG,uVar4,local_10,GEN_TOF(gen_bits2f(param_2)),uVar3);
  }
LAB_00b737ee: ;
  if (((GEN_ISNAN(fVar1) != (GEN_ISNAN(fVar1) || fVar1 == 0.0)) ||
      (fVar1 = *(float *)((int)param_1 + 0x120), GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0))) &&
     ((GEN_ISNAN(fVar2) != (GEN_ISNAN(fVar2) || fVar2 == 0.0) ||
      (fVar1 = *(float *)((int)param_1 + 0x124), GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0))))) {
    *(undefined1 *)((int)param_1 + 0x1a5) = 0;
    return 0;
  }
  *(undefined1 *)((int)param_1 + 0x1a5) = 1;
  return 1;
}

/* ref: FUN_00b73870 */
GEN_NOFRAME uint GEN_THISCALL F_00b73870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb73870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  undefined * pvVar3;
  byte bVar4;
  uint uVar5;
  undefined * pvVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float fVar13;
  
  uVar5 = F_00b6bf70(this GEN_EDX_FWD);
  uVar7 = *(uint *)((int)this + 0x138);
  *(uint *)((int)this + 0x134) = uVar5;
  if (uVar7 != uVar5) {
    iVar9 = 2;
    (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (undefined *)0x2;
    switch((unsigned int)(uintptr_t)(uVar5)) {
    case 0: ;
    case 4: ;
      (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (undefined *)0x0;
      break;
    case 1: ;
    case 2: ;
    case 3: ;
    case 5: ;
    case 6: ;
      (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (undefined *)0x1;
    }
    pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
    switch((unsigned int)(uintptr_t)(uVar7)) {
    case 0: ;
    case 4: ;
      iVar9 = 0;
      break;
    case 1: ;
    case 2: ;
    case 3: ;
    case 5: ;
    case 6: ;
      iVar9 = 1;
    }
    if ((*(undefined * PTR32 *)(gen_frame + 0x2c)) == (undefined *)iVar9) {
      if ((((uVar5 == 4) || (uVar5 == 3)) || (uVar5 == 6)) || (((uVar5 == 5 || (uVar7 == 4)) || ((uVar7 == 3 || ((uVar7 == 6 || (uVar7 == 5)))))))) {
        *(undefined4 *)((int)this + 0x154) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x154), REFG(float, 0x10f3968));
      }
      if (uVar5 == 3) {
        fVar13 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x40) - (float10)*(float *)((int)this + 0x70))));
        (*(float *)(gen_frame + 0x10)) = fVar13;
        fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x44) - (float10)*(float *)((int)this + 0x74))));
        (*(float *)(gen_frame + 0x14)) = fVar1;
        fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x48) - (float10)*(float *)((int)this + 0x78))));
        (*(float *)(gen_frame + 0x18)) = fVar2;
        fVar10 = (float10)fVar1;
        fVar11 = (float10)fVar13;
        fVar12 = (float10)fVar2;
        fVar13 = ((float)GEN_TOF((fVar12 * fVar12 + (fVar11 * fVar11 + fVar10 * fVar10))));
        (*(undefined * PTR32 *)(gen_frame + 0x2c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar13)));
        fVar13 = ((float)GEN_TOF(SQRT((float10)fVar13)));
        (*(undefined * PTR32 *)(gen_frame + 0x2c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar13)));
        *(undefined1 *)((int)this + 0x244) = 0;
        *(float *)((int)this + 0x240) = fVar13;
      }
      if ((*(int *)((int)this + 0x138) == 3) && (*(char *)((int)this + 0x244) != '\0')) {
        *(undefined4 *)((int)this + 0xe4) = *(undefined4 *)((int)this + 0x240);
      }
      uVar8 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f3964)));
      if ((*(int *)((int)this + 0x134) == 5) || (uVar8 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f3980))), *(int *)((int)this + 0x138) == 5)) {
        *(undefined4 *)((int)this + 0x154) = uVar8;
      }
    }
    else {
      if (*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25f8) != (undefined *)0x0) {
        F_004ea820(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25f8) GEN_EDX_ARG,0x1e);
      }
      *(undefined4 *)((int)this + 0x154) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x154), REFG(float, 0x1088068));
      if (pvVar3 == (undefined *)0x0) {
        *(undefined4 *)((int)this + 0x140) = *(undefined4 *)((int)this + 0xf0);
        *(undefined4 *)((int)this + 0x144) = *(undefined4 *)((int)this + 0x100);
        *(undefined4 *)((int)this + 0x148) = *(undefined4 *)((int)this + 0xe4);
        F_00b724f0(this GEN_EDX_ARG);
        if ((char)param_1 == '\0') {
          fVar10 = F_00b6cce0((int)this + 0x268 GEN_EDX_ARG);
          F_00b6ff90(this GEN_EDX_ARG,(float)fVar10);
        }
        else {
          F_00b6ff90(this GEN_EDX_ARG,*(float *)((int)this + 0xf8));
        }
      }
      else if (pvVar3 == (undefined *)0x1) {
        F_00b725f0(GEN_TOF(this) GEN_EDX_ARG);
        if ((char)param_1 == '\0') {
          F_00b6ff90(this GEN_EDX_ARG,*(float *)((int)this + 0x140));
          fVar13 = *(float *)((int)this + 0x148);
          uVar8 = ((undefined4)(uint)(this));
        }
        else {
          F_00b6ff90(this GEN_EDX_ARG,*(float *)((int)this + 0xf4));
          fVar13 = *(float *)((int)this + 0xe8);
          uVar8 = ((undefined4)(uint)(this));
        }
        F_00b6fde0(uVar8 GEN_EDX_ARG,fVar13,(int)this + 0xe4);
        *(undefined1 *)((int)this + 0x1e0) = 1;
        F_00b6ff40(this GEN_EDX_ARG,*(float *)((int)this + 0x144));
        pvVar6 = (undefined *)F_00b6afa0();
        pvVar3 = REFG(void * PTR32, 0x1379694);
        (*(undefined * PTR32 *)(gen_frame + 0x2c)) = pvVar6;
        if (((REFG(void * PTR32, 0x1379694) != (undefined *)0x0) && (pvVar6 != (undefined *)0x0)) && (bVar4 = F_00b75a10(*(undefined4 *)((int)this + 0x134)), bVar4 != 0)) {
          uVar7 = F_00a5feb0((*(undefined * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG);
          uVar5 = F_00a5feb0(pvVar3 GEN_EDX_ARG);
          F_0046f4a0(&(*(float *)(gen_frame + 0x10)),uVar5,uVar7);
          fVar13 = F_00aae900(&(*(float *)(gen_frame + 0x10)));
          *(float *)((int)this + 0xfc) = fVar13;
        }
        uVar7 = F_00a61360(pvVar3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
        *(undefined4 *)((int)this + 0x1f0) = *(undefined4 *)(uVar7 + 4);
        *(undefined4 *)((int)this + 0x200) = 0;
        *(undefined4 *)((int)this + 0x240) = *(undefined4 *)((int)this + 0xe4);
        *(undefined1 *)((int)this + 0x244) = 0;
      }
    }
    *(undefined1 *)((int)this + 0x244) = 0;
  }
  uVar7 = *(uint *)((int)this + 0x134);
  if ((((uVar7 == 4) || (uVar7 == 3)) || ((uVar7 == 6 || (uVar7 == 5)))) && (REFG(char, 0x1375c50) != '\0')) {
    *(undefined4 *)((int)this + 0x154) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x154), REFG(float, 0x1088068));
  }
  return uVar7;
}

/* ref: FUN_00b73bc0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b73bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xb73bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  float fVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined4 * puVar5;
  float10 fVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0xac)) = REFG(void * PTR32, 0x1379694);
  if (REFG(void * PTR32, 0x1379694) != (undefined *)0x0) {
    puVar3 = (undefined4 *)F_00a61360(REFG(void * PTR32, 0x1379694) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x80)));
    *param_3 = *puVar3;
    param_3[1] = puVar3[1];
    param_3[2] = puVar3[2];
    switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x134))) {
    case 1: ;
    case 2: ;
    case 3: ;
    case 5: ;
    case 6: ;
      if ((char)param_5 == '\0') {
        fVar6 = F_00b6fcb0(this GEN_EDX_ARG,GEN_TOF(gen_bits2f(param_3[1])));
        fVar1 = (float)fVar6;
        (*(float *)(gen_frame + 0xa8)) = fVar1;
        *(float *)((int)this + 0x1f0) = fVar1;
        param_3[1] = (undefined4)gen_fl2bits(fVar1);
      }
    }
    puVar3 = param_1;
    switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x134))) {
    case 0: ;
      *param_2 = *param_3;
      uVar2 = param_3[1];
      (*(undefined4 *)(gen_frame + 0x90)) = 0;
      param_2[1] = uVar2;
      uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
      (*(undefined4 *)(gen_frame + 0x94)) = 0;
      param_2[2] = param_3[2];
      (*(undefined4 *)(gen_frame + 0x98)) = uVar2;
      F_00b6a690(((undefined1 *)(gen_frame + 0x80)),&(*(undefined4 *)(gen_frame + 0x90)),*(float *)((int)this + 0xfc),GEN_TOF(gen_bits2f(*(uint *)((int)this + 0x100) ^ REFG(uint, 0x10920d0))));
      puVar5 = (undefined4 *)F_004bd670(((undefined1 *)(gen_frame + 0x50)),param_3,((undefined1 *)(gen_frame + 0x80)));
      break;
    case 1: ;
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      puVar3 = (undefined4 *)F_00b6e680(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x30)),param_3,param_5,(*(undefined * PTR32 *)(gen_frame + 0xac)));
      *param_2 = *puVar3;
      param_2[1] = puVar3[1];
      param_2[2] = puVar3[2];
      *(undefined4 *)((int)this + 0x230) = *param_2;
      *(undefined4 *)((int)this + 0x234) = param_2[1];
      *(undefined4 *)((int)this + 0x238) = param_2[2];
      *(undefined1 *)((int)this + 0x205) = 0;
      return;
    case 2: ;
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      uVar4 = F_00b6c520(((undefined1 *)(gen_frame + 0x70)),*(float *)((int)this + 0x13c),*(float *)((int)this + 0xfc),
                           *(float *)((int)this + 0x100));
      puVar5 = (undefined4 *)F_004bd670(((undefined1 *)(gen_frame + 0x10)),param_3,uVar4);
      puVar3 = param_2;
      break;
    case 3: ;
    case 5: ;
    case 6: ;
      puVar3 = (undefined4 *)F_00b6a390(((undefined1 *)(gen_frame + 0x20)),param_3,param_4);
      *param_1 = *puVar3;
      param_1[1] = puVar3[1];
      param_1[2] = puVar3[2];
      puVar5 = (undefined4 *)
               F_00b72ca0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),param_3,param_1,*(float *)((int)this + 0x13c),
                            (int)this + 0xfc,(int)this + 0x100);
      puVar3 = param_2;
      break;
    case 4: ;
      *param_2 = *param_3;
      param_2[1] = param_3[1];
      param_2[2] = param_3[2];
      uVar4 = F_00b72b50(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x60)),param_2,param_4);
      puVar5 = (undefined4 *)F_004bd670(((undefined1 *)(gen_frame + 0x40)),param_3,uVar4);
      break;
    default: ;
      goto switchD_00b73c5a_default;
    }
    *puVar3 = *puVar5;
    puVar3[1] = puVar5[1];
    puVar3[2] = puVar5[2];
  }
switchD_00b73c5a_default: ;
  *(undefined1 *)((int)this + 0x205) = 0;
  return;
}

/* ref: FUN_00b73e70 */
GEN_FRAME float10 GEN_THISCALL F_00b73e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb73e70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  float * pfVar1;
  float10 in_ST0 = 0;
  float10 fVar2;
  float10 extraout_ST1 = 0;
  float fVar3;
  
  switch((unsigned int)(uintptr_t)((*(uint *)&gen_args[1]))) {
  case 0: ;
  case 4: ;
    fVar2 = (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
    break;
  default: ;
    fVar3 = F_00b6c760((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
    fVar2 = (float10)fVar3 + (float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0)));
    in_ST0 = extraout_ST1;
  }
  pfVar1 = ((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf8)));
  (*(uint *)&gen_args[1]) = (uint)gen_fl2bits((float)fVar2);
  if ((float10)(float)fVar2 < (float10)*pfVar1) {
    pfVar1 = (float *)&(*(uint *)&gen_args[1]);
  }
  if (!((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf4))) < (float10)*pfVar1)) {
    pfVar1 = ((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf4)));
  }
  *((float *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0))) = *pfVar1;
  return in_ST0;
}

/* ref: FUN_00b73ef0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b73ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb73ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float10 fVar1;
  undefined * this_00;
  bool bVar2;
  float fVar3;
  
  if (*(int *)((int)this + 0xe0) == 1) {
    if (param_1 == 3) {
      fVar3 = *(float *)((int)this + 0x240);
    }
    else {
      fVar3 = *(float *)((int)this + 0xe4);
    }
    (*(float *)(gen_frame + 0x14)) = fVar3;
    fVar3 = F_00b6c6b0();
    (*(float *)(gen_frame + 0x18)) = fVar3;
    bVar2 = GEN_ISNAN((float10)fVar3) || GEN_ISNAN((float10)0);
    if (bVar2 == (bVar2 || (float10)fVar3 == (float10)0)) {
      (*(float *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0x14));
      if (((param_1 == 1) && (*(char *)((int)this + 0x1e0) == '\0')) &&
         ((*(int *)((int)this + 0x1e4) == 0 || (!GEN_ISNAN(fVar3) && !(0.0 <= fVar3))))) {
        this_00 = (undefined *)F_0046f4a0(((undefined1 *)(gen_frame + 0x0)),(int)this + 0x40,(int)this + 0x70);
        fVar3 = F_004bd280(this_00 GEN_EDX_ARG);
        (*(float *)(gen_frame + 0x1c)) = fVar3;
        *(undefined1 *)((int)this + 0x1e0) = 1;
        *(float *)((int)this + 0x13c) = fVar3;
      }
      fVar1 = (float10)(*(float *)(gen_frame + 0x18));
      (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x1c)) + fVar1);
      F_00b6fe80(this GEN_EDX_ARG,(float)((float10)(*(float *)(gen_frame + 0x1c)) + fVar1),param_1);
    }
    if (*(char *)((int)this + 0x1e0) != '\0') {
      fVar3 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x14)) - (float10)*(float *)((int)this + 0x13c))));
      (*(float *)(gen_frame + 0x14)) = fVar3;
      fVar3 = ((float)GEN_TOF(ABS((float10)fVar3)));
      (*(float *)(gen_frame + 0x14)) = fVar3;
      if ((float10)REFG(float, 0x10947f8) < (float10)fVar3) {
        *(undefined1 *)((int)this + 0x1e0) = 1;
        return;
      }
      *(undefined1 *)((int)this + 0x1e0) = 0;
    }
  }
  return;
}

/* ref: FUN_00b74020 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b74020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb74020u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  uint param_5 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this;
  float10 fVar1;
  float fVar2;
  
  (*(float *)(gen_frame + 0x1c)) = param_4;
  if (*(int *)(param_1 + 0x1e4) != 0) {
    if (1 < *(int *)(param_1 + 0x1e4) - 1U) {
      return 0;
    }
    fVar2 = F_00b6c6b0();
    if ((float10)fVar2 < (float10)0) {
      this = (undefined *)F_0046f4a0(((undefined1 *)(gen_frame + 0x0)),param_3,param_2);
      fVar2 = F_004bd280(this GEN_EDX_ARG);
      (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar2 - (float10)REFG(double, 0x1094800));
      F_00b6fe80(param_1 GEN_EDX_ARG,(float)((float10)fVar2 - (float10)REFG(double, 0x1094800)),param_5);
    }
    (*(float *)(gen_frame + 0x1c)) = *(float *)(param_1 + 0x1e8);
  }
  fVar1 = F_00b6e080(*(float *)(param_1 + 0x13c),(*(float *)(gen_frame + 0x1c)),REFG(float, 0x10f3960));
  fVar2 = (float)fVar1;
  (*(float *)(gen_frame + 0x18)) = fVar2;
  *(float *)(param_1 + 0x13c) = fVar2;
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar2 - (float10)param_4);
  fVar2 = ((float)GEN_TOF(ABS((float10)(float)((float10)fVar2 - (float10)param_4))));
  (*(float *)(gen_frame + 0x18)) = fVar2;
  if ((float10)fVar2 < (float10)REFG(float, 0x10947f8)) {
    *(float *)(param_1 + 0x13c) = param_4;
  }
  return 0;
}

/* ref: FUN_00b74110 */
GEN_FRAME uint GEN_THISCALL F_00b74110(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb74110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  undefined3 extraout_var = 0;
  uint extraout_EAX = 0;
  
  *(undefined4 *)((int)this + 0x104) = *(undefined4 *)((int)this + 0x10c);
  if (*(int *)((int)this + 0xe0) == 0) {
    *(uint *)((int)this + 0x108) = *(uint *)((int)this + 0x110) ^ REFG(uint, 0x10920d0);
    uVar4 = 0;
  }
  else {
    uVar4 = *(int *)((int)this + 0xe0) - 1;
    if (uVar4 == 0) {
      *(undefined4 *)((int)this + 0x108) = *(undefined4 *)((int)this + 0x110);
    }
  }
  iVar1 = REFG(int, 0x137104c);
  if (REFG(int, 0x137104c) != 0) {
    piVar5 = (int *)F_00424750(REFG(int, 0x137104c) GEN_EDX_FWD);
    bVar3 = F_00ac3640(&REFG(undefined, 0x14bcf40) GEN_EDX_ARG);
    if (bVar3 != 0) {
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar5 + 0x6c))(piVar5 GEN_EDX_ARG);
      if ((char)uVar4 != '\0') {
        *(float *)((int)this + 0x108) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x108) * (float10)REFG(double, 0x1088108))));
      }
    }
    uVar4 = F_00b6d1a0(this GEN_EDX_ARG,iVar1);
    iVar2 = REFG(int, 0x1379694);
    if (uVar4 != 0) {
      if (uVar4 == 1) {
        *(float *)((int)this + 0xfc) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x104) + (float10)*(float *)((int)this + 0xfc)))) ;
        F_00b6ff40(this GEN_EDX_ARG,((float)GEN_TOF(((float10)*(float *)((int)this + 0x108) + (float10)*(float *)((int)this + 0x100)))));
        uVar4 = F_00b6d050(((undefined *)(uint)(this)) GEN_EDX_ARG);
        return uVar4;
      }
      if (uVar4 - 2 != 0) {
        *(float *)((int)this + 0xfc) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x104) + (float10)*(float *)((int)this + 0xfc)))) ;
        F_00b6ff40(this GEN_EDX_ARG,((float)GEN_TOF(((float10)*(float *)((int)this + 0x108) + (float10)*(float *)((int)this + 0x100)))));
        return uVar4 - 2;
      }
      uVar4 = 0;
      if ((REFG(int, 0x1379694) != 0) && (*(int *)((int)this + 0xe0) == 0)) {
        bVar3 = F_005374c0(&REFG(undefined4, 0x1375bc0) GEN_EDX_ARG);
        uVar4 = CONCAT31(extraout_var,bVar3);
        if (bVar3 == 0) {
          *(undefined4 *)((int)this + 0xfc) = *(undefined4 *)(iVar2 + 0xb0);
        }
      }
      *(float *)((int)this + 0xfc) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x104) + (float10)*(float *)((int)this + 0xfc))));
      F_00b6ff40(this GEN_EDX_ARG,((float)GEN_TOF(((float10)*(float *)((int)this + 0x108) + (float10)*(float *)((int)this + 0x100)))));
      return uVar4;
    }
    F_00b70bd0(this GEN_EDX_ARG,(uint)(*(int *)((int)this + 0xe0) == 0),iVar1);
    *(float *)((int)this + 0xfc) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x104) + (float10)*(float *)((int)this + 0xfc))));
    F_00b6ff40(this GEN_EDX_ARG,((float)GEN_TOF(((float10)*(float *)((int)this + 0x108) + (float10)*(float *)((int)this + 0x100)))));
    uVar4 = extraout_EAX;
  }
  return uVar4;
}

/* ref: Client::Game::Camera::vf1 */
GEN_FRAME unsigned int GEN_THISCALL F_00b742e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb742e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  uint uVar2;
  undefined * pCVar3;
  undefined4 uVar4;
  float fVar5;
  
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc);
  F_00b6a060(this GEN_EDX_FWD);
  *(undefined4 *)(this + 0x268) = 0x57;
  *(undefined4 *)(this + 0x26c) = 0x58;
  *(undefined4 *)(this + 0x270) = 0x59;
  *(undefined4 *)(this + 0x25c) = 0x5a;
  *(undefined4 *)(this + 0x260) = 0x5b;
  *(undefined4 *)(this + 0x264) = 0x5c;
  *(undefined4 *)(this + 0x274) = 0x5d;
  *(undefined4 *)(this + 0x278) = 0x5e;
  *(undefined4 *)(this + 0x27c) = 0x5f;
  F_00aaf650(this + 0x1a8 GEN_EDX_ARG,this + 0x194,99);
  *(undefined4 *)(this + 0x1bc) = 100;
  *(undefined4 *)(this + 0x1c0) = 0x65;
  *(undefined4 *)(this + 0x1c4) = 0x66;
  if (REFG(int, 0x137104c) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x1a8) + 8))))(this + 0x1a8 GEN_EDX_ARG,REFG(int, 0x137104c));
  }
  if (REFG(int, 0x137104c) == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,*(undefined4 *)(this + 0x264));
    uVar4 = *(undefined4 *)(uVar2 + 0x14);
  }
  *(undefined4 *)(this + 0xe4) = uVar4;
  if (REFG(int, 0x137104c) == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,*(undefined4 *)(this + 0x25c));
    uVar4 = *(undefined4 *)(uVar2 + 0x14);
  }
  *(undefined4 *)(this + 0x100) = uVar4;
  if (REFG(int, 0x137104c) == 0) {
    fVar5 = 0.0;
  }
  else {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10) GEN_EDX_ARG,*(undefined4 *)(this + 0x260));
    fVar5 = *(float *)(uVar2 + 0x14);
  }
  *(undefined4 *)(this + 0xf4) = GEN_FLT_TO(*(undefined4 *)(this + 0xf4), REFG(float, 0x133d298));
  pCVar3 = this + 0xf8;
  (*(float *)(gen_frame + 0x4)) = fVar5;
  *(float *)pCVar3 = GEN_FLT_TO(*(float *)pCVar3, REFG(float, 0x133d29c));
  fVar1 = *(float *)pCVar3;
  (*(float *)(gen_frame + 0x0)) = fVar5;
  if ((float10)fVar5 < (float10)fVar1) {
    pCVar3 = (undefined *)&(*(float *)(gen_frame + 0x0));
  }
  if (!((float10)*(float *)(this + 0xf4) < (float10)*(float *)pCVar3)) {
    pCVar3 = this + 0xf4;
  }
  fVar5 = *(float *)pCVar3;
  *(float *)(this + 0xf0) = fVar5;
  *(float *)(this + 0x158) = fVar5;
  F_00b726f0(this GEN_EDX_ARG);
  F_00b6ffe0(this GEN_EDX_ARG);
  *(undefined4 *)(this + 0x248) = 0x61;
  *(undefined4 *)(this + 0x24c) = 0x62;
  *(undefined4 *)(this + 0x250) = 0x70;
  *(undefined4 *)(this + 0x254) = 0x71;
  F_00c47745((*(uint *)(gen_frame + 0x8)) ^ (uint)(uint)(gen_frame + 0xc) GEN_EDX_ARG);
  return;
}

/* ref: Client::Game::Camera::vf4 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b744d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb744d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0xe0) == 0) {
    *(undefined4 *)(in_ecx + 0x108) = 0;
    *(undefined4 *)(in_ecx + 0x104) = 0;
    *(undefined4 *)(in_ecx + 0x100) = 0;
    if (REFG(int, 0x1379694) != 0) {
      *(undefined4 *)(in_ecx + 0xfc) = *(undefined4 *)(REFG(int, 0x1379694) + 0xb0);
    }
  }
  else if (*(int *)(in_ecx + 0xe0) == 1) {
    F_00b6ffe0(in_ecx GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: FUN_00b74520 */
GEN_FRAME unsigned int GEN_THISCALL F_00b74520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb74520u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined * PTR32 * ppvVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = param_1;
  uVar3 = F_00b6bf70(param_1 GEN_EDX_FWD);
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
    *(undefined4 *)((int)param_1 + 0x100) = 0;
  case 4: ;
    F_00b703c0(param_1 GEN_EDX_ARG);
    break;
  case 1: ;
  case 2: ;
    F_00b702c0(param_1 GEN_EDX_ARG);
    break;
  case 3: ;
  case 6: ;
    F_00b70330(param_1 GEN_EDX_ARG,uVar3);
  }
  *(undefined4 *)((int)param_1 + 0x104) = 0;
  *(undefined4 *)((int)param_1 + 0x108) = 0;
  if ((0 < (int)param_2) && ((int)param_2 < 3)) {
    pvVar1 = *(undefined * PTR32 *)((int)param_1 + 0xe4);
    ppvVar4 = (undefined * PTR32 *)((int)param_1 + 0xec);
    pvVar2 = *ppvVar4;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
    if ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar1))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar2)))) {
      ppvVar4 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
    }
    if (!((float10)*(float *)((int)param_1 + 0xe8) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppvVar4))))) {
      ppvVar4 = (undefined * PTR32 *)((int)param_1 + 0xe8);
    }
    *(undefined * PTR32 *)((int)param_1 + 0xe4) = *ppvVar4;
    *(undefined * PTR32 *)((int)param_1 + 0x13c) = pvVar1;
    F_00b6ffe0(param_1 GEN_EDX_ARG);
  }
  return;
}

/* ref: Client::Game::Camera::vf2 */
GEN_NOFRAME byte GEN_THISCALL F_00b745f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb745f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char cVar1;
  int iVar2;
  int iVar3;
  undefined1 CVar4;
  byte bVar5;
  undefined * this_00;
  undefined4 * puVar6;
  uint uVar7;
  float fVar8;
  
  iVar2 = REFG(int, 0x1379694);
  (*(int *)(gen_frame + 0x40)) = REFG(int, 0x1379694);
  if (REFG(int, 0x1379694) != 0) {
    cVar1 = *(char *)(REFG(int, 0x1379694) + 0x2f04);
    if (((cVar1 == '\x02') || (cVar1 == '\x03')) || (cVar1 == '\x01')) {
      CVar4 = (undefined1)0x1;
    }
    else {
      CVar4 = (undefined1)0x0;
    }
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x4c)) + 0)) = CVar4;
    (*(float *)(gen_frame + 0x4c)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x4c)), 1, 3),CVar4));
    this[0x1fc] = (undefined1)((byte)this[0x1fc] | CVar4 != this[0x204]);
    this[0x204] = CVar4;
    if (this[0x1fc] != (undefined1)0x0) {
      bVar5 = F_00b6a2d0(this GEN_EDX_FWD,iVar2,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x4c))));
      this[0x1fc] = (undefined1)(bVar5 == 0);
    }
  }
  bVar5 = F_00b73430(this GEN_EDX_ARG);
  if ((bVar5 != 0) && (REFG(int, 0x14bcc80) != 4)) {
    (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(this + 0x70);
    (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(this + 0x74);
    (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(this + 0x78);
    (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(this + 0x40);
    (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(this + 0x44);
    (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(this + 0x48);
    F_00ab1160(this + 0x154,1);
    F_00b74110(this GEN_EDX_ARG);
    F_00b73870(this GEN_EDX_ARG,(uint)(byte)this[500]);
    iVar2 = *(int *)(this + 0x134);
    iVar3 = *(int *)(this + 0x138);
    *(int *)(this + 0x138) = iVar2;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x48)) + 0)) = iVar3 != iVar2;
    (*(undefined4 *)(gen_frame + 0x48)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x48)), 1, 3),iVar3 != iVar2);
    if (iVar2 == 3) {
      fVar8 = *(float *)(this + 0x240);
    }
    else {
      fVar8 = *(float *)(this + 0xe4);
    }
    (*(float *)(gen_frame + 0x4c)) = fVar8;
    F_00b74020(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x30)),fVar8,iVar2);
    this_00 = (undefined *)F_00b6afa0();
    if ((this_00 == (undefined *)0x0) ||
       (((iVar2 = *(int *)(this + 0x134), iVar2 != 4 && (iVar2 != 3)) &&
        ((iVar2 != 6 && (iVar2 != 5)))))) {
      this[0x220] = (undefined1)0x0;
    }
    else if (this[0x220] == (undefined1)0x0) {
      puVar6 = (undefined4 *)F_00a61360(this_00 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
      (*(undefined4 *)(gen_frame + 0x10)) = *puVar6;
      (*(undefined4 *)(gen_frame + 0x14)) = puVar6[1];
      (*(undefined4 *)(gen_frame + 0x18)) = puVar6[2];
    }
    else {
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(this + 0x210);
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + 0x214);
      (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(this + 0x218);
    }
    F_00b73bc0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),(*(undefined4 *)(gen_frame + 0x48)));
    F_00b6f8d0(this GEN_EDX_ARG);
    F_00b6be10(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x30)));
    fVar8 = *(float *)(this + 0x154);
    (*(float *)(gen_frame + 0x44)) = fVar8;
    if ((!GEN_ISNAN(fVar8) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar8 <= *(float *)&REFG(undefined, 0x1088114))) {
      puVar6 = (undefined4 *)F_00b6e1f0(&(*(undefined4 *)(gen_frame + 0x10)),this + 0x1d0,&(*(undefined4 *)(gen_frame + 0x30)),fVar8);
      (*(undefined4 *)(gen_frame + 0x30)) = *puVar6;
      (*(undefined4 *)(gen_frame + 0x34)) = puVar6[1];
      (*(undefined4 *)(gen_frame + 0x38)) = puVar6[2];
    }
    *(undefined4 *)(this + 0x1d0) = (*(undefined4 *)(gen_frame + 0x30));
    *(undefined4 *)(this + 0x1d4) = (*(undefined4 *)(gen_frame + 0x34));
    *(undefined4 *)(this + 0x1d8) = (*(undefined4 *)(gen_frame + 0x38));
    if ((*(int *)(gen_frame + 0x40)) != 0) {
      uVar7 = F_00b6eda0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x4c)),(*(int *)(gen_frame + 0x40)));
      *(uint *)(this + 0x1e4) = uVar7;
    }
    if (*(int *)(this + 0x134) - 1U < 2) {
      puVar6 = (undefined4 *)F_00b708a0(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x20)));
      (*(undefined4 *)(gen_frame + 0x20)) = *puVar6;
      (*(undefined4 *)(gen_frame + 0x24)) = puVar6[1];
      (*(undefined4 *)(gen_frame + 0x28)) = puVar6[2];
    }
    F_00b732f0(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x48)),*(undefined4 *)(this + 0x134));
    *(undefined4 *)(this + 0x40) = (*(undefined4 *)(gen_frame + 0x30));
    *(undefined4 *)(this + 0x44) = (*(undefined4 *)(gen_frame + 0x34));
    *(undefined4 *)(this + 0x48) = (*(undefined4 *)(gen_frame + 0x38));
    *(uint *)(this + 0x34) = *(uint *)(this + 0x34) | 2;
    *(undefined4 *)(this + 0x70) = (*(undefined4 *)(gen_frame + 0x20));
    *(undefined4 *)(this + 0x74) = (*(undefined4 *)(gen_frame + 0x24));
    *(undefined4 *)(this + 0x78) = (*(undefined4 *)(gen_frame + 0x28));
    F_00b73500(this GEN_EDX_ARG);
    F_00b6bc70(this GEN_EDX_ARG);
    bVar5 = F_00b6ec30(this GEN_EDX_ARG);
  }
  return bVar5;
}

/* ref: FUN_00b74940 */
GEN_NOFRAME uint GEN_THISCALL F_00b74940(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb74940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b70140((int)this + 600 GEN_EDX_FWD,*(float *)((int)this + 0x100),*(float *)((int)this + 0xf0),
                       *(float *)((int)this + 0xe4));
  return uVar1;
}

/* ref: FUN_00b74970 */
GEN_FRAME uint GEN_THISCALL F_00b74970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb74970u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  float fVar2;
  
  if (param_2 == 3) {
    fVar2 = *(float *)(param_1 + 0x240);
  }
  else {
    fVar2 = *(float *)(param_1 + 0xe4);
  }
  uVar1 = F_00b70240(param_1 + 600 GEN_EDX_FWD,*(float *)(param_1 + 0x100),*(float *)(param_1 + 0xf0),fVar2);
  return uVar1;
}

/* ref: FUN_00b749c0 */
GEN_NOFRAME uint GEN_THISCALL F_00b749c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb749c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b701c0((int)this + 600 GEN_EDX_FWD,(float)(float10)0,*(float *)((int)this + 0xf0),
                       *(float *)((int)this + 0xe8));
  return uVar1;
}

/* ref: FUN_00b749f0 */
GEN_FRAME uint GEN_THISCALL F_00b749f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb749f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  float fVar2;
  
  uVar1 = F_00b6bf70(this GEN_EDX_FWD);
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
  case 4: ;
    F_00b749c0(this GEN_EDX_ARG);
  default: ;
    uVar1 = F_00ab9000(0x35d);
    return uVar1;
  case 1: ;
  case 2: ;
    F_00b74940(this GEN_EDX_ARG);
  case 3: ;
  case 6: ;
    if (uVar1 == 3) {
      fVar2 = *(float *)((int)this + 0x240);
    }
    else {
      fVar2 = *(float *)((int)this + 0xe4);
    }
    F_00b70240((int)this + 600 GEN_EDX_ARG,*(float *)((int)this + 0x100),*(float *)((int)this + 0xf0),fVar2);
    uVar1 = F_00ab9000(0x35d);
    return uVar1;
  }
}

/* ref: FUN_00b74aa0 */
GEN_NOFRAME uint GEN_THISCALL F_00b74aa0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb74aa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined * pvVar2;
  uint uVar3;
  
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  puVar1 = (undefined4 *)F_00406b90(0x280,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[9])REFP(0x10f4884));
    F_006906c0(puVar1 + 4 GEN_EDX_ARG);
    *puVar1 = (*(undefined * PTR32 (*)[9])REFP(0x10f48ec));
    puVar1[0x6a] = (*(undefined * PTR32 (*)[3])REFP(0x10f48ac));
    *(undefined1 *)(puVar1 + 0x96) = 1;
  }
  *(undefined4 * PTR32 *)this = puVar1;
  pvVar2 = (undefined *)F_00406b90(0x220,0,0);
  if (pvVar2 == (undefined *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00b6d620(pvVar2 GEN_EDX_ARG);
  }
  *(uint *)((int)this + 4) = uVar3;
  pvVar2 = (undefined *)F_00406b90(0x2d0,0,0);
  if (pvVar2 != (undefined *)0x0) {
    uVar3 = F_00b72030(pvVar2 GEN_EDX_ARG);
    *(uint *)((int)this + 8) = uVar3;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return (uint)this;
}

/* ref: FUN_00b74b70 */
GEN_NOFRAME uint GEN_THISCALL F_00b74b70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb74b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = 0;
  do {
    piVar1 = *(int * PTR32 *)((int)this + iVar3 * 4);
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  if (*(int *)((int)this + 0x2c) != 0) {
    uVar2 = 0;
    do {
      piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar2)]));
      if (piVar1 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1 GEN_EDX_ARG,3,0);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x158);
    if (*(int *)((int)this + 0x2c) != -1) {
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x2c) * 4)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1 GEN_EDX_ARG);
    }
    if (*(int *)((int)this + 0x2c) == -1) {
      uVar4 = 0;
    }
    else {
      uVar4 = *((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x2c) * 4)));
    }
    *((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1371298) + 0x34))) = *(int *)this + 0x10;
    F_0069c300(REFG(void * PTR32, 0x1371298) GEN_EDX_ARG,0);
    *(undefined4 *)((int)this + 0x2c) = 0;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x1c))))(*(int * PTR32 *)this GEN_EDX_ARG,uVar4);
  }
  return uVar2;
}

/* ref: FUN_00b74c10 */
GEN_NOFRAME uint GEN_THISCALL F_00b74c10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb74c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = 0;
  do {
    piVar1 = *(int * PTR32 *)((int)this + iVar3 * 4);
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_FWD);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  if (*(int *)((int)this + 0x2c) != 0) {
    uVar2 = 0;
    do {
      piVar1 = ((int *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar2)]));
      if (piVar1 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1 GEN_EDX_ARG,3,0);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x158);
    if (*(int *)((int)this + 0x2c) != -1) {
      piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + *(int *)((int)this + 0x2c) * 4)));
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1 GEN_EDX_ARG);
    }
    if (*(int *)((int)this + 0x2c) == -1) {
      uVar4 = 0;
    }
    else {
      uVar4 = *((undefined4 *)GEN_TOP(((int)this + *(int *)((int)this + 0x2c) * 4)));
    }
    *((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1371298) + 0x34))) = *(int *)this + 0x10;
    F_0069c300(REFG(void * PTR32, 0x1371298) GEN_EDX_ARG,0);
    *(undefined4 *)((int)this + 0x2c) = 0;
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x1c))))(*(int * PTR32 *)this GEN_EDX_ARG,uVar4);
  }
  return uVar2;
}

/* ref: Client::Game::LowCutCamera::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00b74cb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb74cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b70dc0(this GEN_EDX_FWD,*(float *)(REFG(int, 0x137104c) + 0x1198));
  return uVar1;
}

/* ref: Client::Game::LowCutCamera::vf7 */
GEN_FRAME unsigned int GEN_THISCALL F_00b74cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb74cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  
  if (param_1 != 0) {
    F_00b723c0(this GEN_EDX_FWD,param_1);
    *(undefined4 *)(this + 0xf0) = *(undefined4 *)(this + 0x40);
    *(undefined4 *)(this + 0xf4) = *(undefined4 *)(this + 0x44);
    *(undefined4 *)(this + 0xf8) = *(undefined4 *)(this + 0x48);
    *(undefined4 *)(this + 0xe0) = *(undefined4 *)(this + 0x70);
    *(undefined4 *)(this + 0xe4) = *(undefined4 *)(this + 0x74);
    *(undefined4 *)(this + 0xe8) = *(undefined4 *)(this + 0x78);
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(this + 0xd0) + 0xa4)));
    *(undefined4 *)(this + 0x100) = 0xe0000000;
    *(undefined4 *)(this + 0x218) = uVar1;
    *(undefined4 *)(this + 0x104) = 0;
    *(undefined4 *)(this + 0x108) = 0x34;
    this[0x134] = (undefined1)0x0;
    *(undefined4 *)(this + 0x10c) = 0;
    *(undefined4 *)(this + 0x110) = 0;
    *(undefined4 *)(this + 0x124) = 0;
    *(undefined4 *)(this + 0x11c) = 0;
    *(undefined4 *)(this + 0x120) = 0;
    *(undefined4 *)(this + 0x114) = 0;
    *(undefined4 *)(this + 0x118) = 0;
    *(undefined4 *)(this + 0x128) = 0;
    *(undefined4 *)(this + 300) = 0;
    *(undefined4 *)(this + 0x130) = 0;
    this[0x160] = (undefined1)0x0;
    *(undefined4 *)(this + 0x138) = 0;
    *(undefined4 *)(this + 0x13c) = 0;
    *(undefined4 *)(this + 0x150) = 0;
    *(undefined4 *)(this + 0x148) = 0;
    *(undefined4 *)(this + 0x14c) = 0;
    *(undefined4 *)(this + 0x140) = 0;
    *(undefined4 *)(this + 0x144) = 0;
    *(undefined4 *)(this + 0x154) = 0;
    *(undefined4 *)(this + 0x158) = 0;
    *(undefined4 *)(this + 0x15c) = 0;
    this[0x18c] = (undefined1)0x0;
    *(undefined4 *)(this + 0x164) = 0;
    *(undefined4 *)(this + 0x168) = 0;
    *(undefined4 *)(this + 0x17c) = 0;
    *(undefined4 *)(this + 0x174) = 0;
    *(undefined4 *)(this + 0x178) = 0;
    *(undefined4 *)(this + 0x16c) = 0;
    *(undefined4 *)(this + 0x170) = 0;
    *(undefined4 *)(this + 0x180) = 0;
    *(undefined4 *)(this + 0x184) = 0;
    *(undefined4 *)(this + 0x188) = 0;
    this[0x1b8] = (undefined1)0x0;
    *(undefined4 *)(this + 400) = 0;
    *(undefined4 *)(this + 0x194) = 0;
    *(undefined4 *)(this + 0x1a8) = 0;
    *(undefined4 *)(this + 0x1a0) = 0;
    *(undefined4 *)(this + 0x1a4) = 0;
    *(undefined4 *)(this + 0x198) = 0;
    *(undefined4 *)(this + 0x19c) = 0;
    *(undefined4 *)(this + 0x1ac) = 0;
    *(undefined4 *)(this + 0x1b0) = 0;
    *(undefined4 *)(this + 0x1b4) = 0;
    this[0x1e4] = (undefined1)0x0;
    *(undefined4 *)(this + 0x1bc) = 0;
    *(undefined4 *)(this + 0x1c0) = 0;
    *(undefined4 *)(this + 0x1d4) = 0;
    *(undefined4 *)(this + 0x1cc) = 0;
    *(undefined4 *)(this + 0x1d0) = 0;
    *(undefined4 *)(this + 0x1c4) = 0;
    *(undefined4 *)(this + 0x1c8) = 0;
    *(undefined4 *)(this + 0x1d8) = 0;
    *(undefined4 *)(this + 0x1dc) = 0;
    *(undefined4 *)(this + 0x1e0) = 0;
    this[0x210] = (undefined1)0x0;
    *(undefined4 *)(this + 0x1e8) = 0;
    *(undefined4 *)(this + 0x1ec) = 0;
    *(undefined4 *)(this + 0x200) = 0;
    *(undefined4 *)(this + 0x1f8) = 0;
    *(undefined4 *)(this + 0x1fc) = 0;
    *(undefined4 *)(this + 0x1f0) = 0;
    *(undefined4 *)(this + 500) = 0;
    *(undefined4 *)(this + 0x204) = 0;
    *(undefined4 *)(this + 0x208) = 0;
    *(undefined4 *)(this + 0x20c) = 0;
    this[0x214] = (undefined1)0x0;
  }
  return 0;
}

/* ref: Client::Game::LobbyCamera::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b74f60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb74f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  uint uVar2;
  float fVar3;
  
  if (this[0x280] == (undefined1)0x0) {
    uVar2 = F_00542520(&REFG(undefined, 0x1375b30) GEN_EDX_FWD);
    this[0x1f5] = SUB41(uVar2,0);
    F_00b73600(this GEN_EDX_ARG,2,uVar2);
    F_00b6dc90(this GEN_EDX_ARG);
    uVar2 = (uint)gen_fl2bits((float)(REFG(float, 0x10920d0)));
    if (this[0x281] != (undefined1)0x0) {
      *(uint *)(this + 0x10c) = *(uint *)(this + 0x10c) ^ REFG(uint, 0x10920d0);
      *(uint *)(this + 0x110) = *(uint *)(this + 0x110) ^ uVar2;
    }
    fVar3 = *(float *)(this + 0x154);
    fVar1 = *(float *)(REFG(int, 0x137104c) + 0x1198);
    (*(float *)(gen_frame + 0x48)) = *(float *)(this + 0xfc);
    (*(float *)(gen_frame + 0x20)) = *(float *)(this + 0x70);
    fVar3 = (float)((float10)fVar3 - (float10)fVar1);
    (*(float *)(gen_frame + 0x4c)) = fVar3;
    (*(float *)(gen_frame + 0x24)) = *(float *)(this + 0x74);
    (*(float *)(gen_frame + 0x28)) = *(float *)(this + 0x78);
    (*(float *)(gen_frame + 0x30)) = *(float *)(this + 0x40);
    (*(float *)(gen_frame + 0x34)) = gen_bits2f(*(undefined4 *)(this + 0x44));
    *(float *)(this + 0x154) = fVar3;
    (*(float *)(gen_frame + 0x38)) = gen_bits2f(*(undefined4 *)(this + 0x48));
    if ((float10)fVar3 <= (float10)0) {
      *(undefined4 *)(this + 0x154) = 0;
    }
    F_00b74110(this GEN_EDX_ARG);
    uVar2 = F_00b6b740(this GEN_EDX_ARG);
    if (uVar2 == 1) {
      (*(float *)(gen_frame + 0x4c)) = ((float)GEN_TOF(((float10)*(float *)(this + 0xfc) - (float10)(*(float *)(gen_frame + 0x48)))));
      fVar3 = F_00782c40();
      (*(float *)(gen_frame + 0x48)) = fVar3;
      (*(float *)(gen_frame + 0x48)) = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x4c)));
      F_00782c20((float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x4c))));
    }
    F_00b73ef0(this GEN_EDX_ARG,2);
    F_00b74020(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x30)),*(float *)(this + 0xe4),2);
    fVar3 = *(float *)(this + 0x100);
    fVar1 = *(float *)(this + 0xfc);
    (*(float *)(gen_frame + 0x10)) = 0.0;
    (*(float *)(gen_frame + 0x14)) = 0.0;
    (*(float *)(gen_frame + 0x18)) = gen_bits2f(*(undefined4 *)(this + 0x13c));
    F_00b6a690(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x10)),fVar1,fVar3);
    (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x0)) + (float10)(*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x0)) + (float10)(*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x24)));
    (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x24)));
    (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x8)) + (float10)(*(float *)(gen_frame + 0x28)));
    (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x8)) + (float10)(*(float *)(gen_frame + 0x28)));
    F_00b73e70(this GEN_EDX_ARG,2);
    F_00b6f8d0(this GEN_EDX_ARG);
    F_00b6be10(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x30)));
    *(float *)(this + 0x1d0) = (*(float *)(gen_frame + 0x30));
    *(float *)(this + 0x1d4) = (*(float *)(gen_frame + 0x34));
    *(float *)(this + 0x1d8) = (*(float *)(gen_frame + 0x38));
    uVar2 = F_00b6d8d0(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x30)),*(float *)(this + 0xe4));
    *(uint *)(this + 0x1e4) = uVar2;
    F_00b72240(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0x20)));
    *(float *)(this + 0x40) = (*(float *)(gen_frame + 0x30));
    *(float *)(this + 0x44) = (*(float *)(gen_frame + 0x34));
    *(float *)(this + 0x48) = (*(float *)(gen_frame + 0x38));
    *(uint *)(this + 0x34) = *(uint *)(this + 0x34) | 2;
    *(float *)(this + 0x70) = (*(float *)(gen_frame + 0x20));
    *(float *)(this + 0x74) = (*(float *)(gen_frame + 0x24));
    *(float *)(this + 0x78) = (*(float *)(gen_frame + 0x28));
  }
  return;
}

/* ref: FUN_00b75200 */
GEN_FRAME uint GEN_THISCALL F_00b75200(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb75200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float fVar2;
  int * piVar3;
  undefined * pvVar4;
  float * pfVar5;
  float * pfVar6;
  float10 fVar7;
  undefined4 uVar8;
  
  piVar3 = *(int * PTR32 *)((int)this + 0x2c8);
  if (piVar3 == (int *)0x0) {
    fVar2 = 0.0;
  }
  else {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3 GEN_EDX_FWD,0x795)));
    uVar8 = 1;
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG)));
    pfVar5 = (float *)F_00cb0910(pvVar4 GEN_EDX_ARG,uVar8);
    fVar2 = *pfVar5;
  }
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar7 = (float10)(int)gen_fl2bits(fVar2);
  if ((int)gen_fl2bits(fVar2) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x2c8);
  *(float *)((int)this + 0xfc) =
       ((float)GEN_TOF(((fVar7 / (float10)*(double *)&REFG(undefined, 0x1080220)) * (float10)*(double *)&REFG(undefined, 0x1080228))));
  if (piVar3 == (int *)0x0) {
    fVar2 = 0.0;
  }
  else {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3 GEN_EDX_ARG,0x797)));
    uVar8 = 1;
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG)));
    pfVar5 = (float *)F_00cb0910(pvVar4 GEN_EDX_ARG,uVar8);
    fVar2 = *pfVar5;
  }
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar7 = (float10)(int)gen_fl2bits(fVar2);
  if ((int)gen_fl2bits(fVar2) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x2c8);
  (*(float *)(gen_frame + 0x8)) = (float)(fVar7 / (float10)REFG(double, 0x10944b8));
  if (piVar3 == (int *)0x0) {
    fVar2 = 0.0;
  }
  else {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3 GEN_EDX_ARG,0x76e)));
    uVar8 = 1;
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG)));
    pfVar5 = (float *)F_00cb0910(pvVar4 GEN_EDX_ARG,uVar8);
    fVar2 = *pfVar5;
  }
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar7 = (float10)(int)gen_fl2bits(fVar2);
  if ((int)gen_fl2bits(fVar2) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x2c8);
  (*(float *)(gen_frame + 0x4)) = (float)(fVar7 / (float10)REFG(double, 0x10944b8));
  if (piVar3 == (int *)0x0) {
    fVar2 = 0.0;
  }
  else {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3 GEN_EDX_ARG,0x76f)));
    uVar8 = 1;
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG)));
    pfVar5 = (float *)F_00cb0910(pvVar4 GEN_EDX_ARG,uVar8);
    fVar2 = *pfVar5;
  }
  fVar1 = (*(float *)(gen_frame + 0x4));
  pfVar6 = (float *)((int)this + 0xe8);
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar7 = (float10)(int)gen_fl2bits(fVar2);
  *pfVar6 = fVar1;
  pfVar5 = (float *)((int)this + 0xec);
  if ((int)gen_fl2bits(fVar2) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0x8));
  *pfVar5 = (float)(fVar7 / (float10)REFG(double, 0x10944b8));
  if ((float10)(*(float *)(gen_frame + 0x8)) < (float10)*pfVar5) {
    pfVar5 = &(*(float *)(gen_frame + 0x4));
  }
  if ((float10)*pfVar6 < (float10)*pfVar5) {
    pfVar6 = pfVar5;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x2c8);
  *(float *)((int)this + 0xe4) = *pfVar6;
  *(float *)((int)this + 0x13c) = (*(float *)(gen_frame + 0x8));
  if (piVar3 == (int *)0x0) {
    fVar2 = 0.0;
  }
  else {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3 GEN_EDX_ARG,0x798)));
    uVar8 = 1;
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG)));
    pfVar5 = (float *)F_00cb0910(pvVar4 GEN_EDX_ARG,uVar8);
    fVar2 = *pfVar5;
  }
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar7 = (float10)(int)gen_fl2bits(fVar2);
  if ((int)gen_fl2bits(fVar2) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  pfVar5 = (float *)((int)this + 0xf8);
  (*(float *)(gen_frame + 0x8)) = (float)(fVar7 / (float10)REFG(double, 0x10944b8));
  if ((float10)(float)(fVar7 / (float10)REFG(double, 0x10944b8)) < (float10)*pfVar5) {
    pfVar5 = &(*(float *)(gen_frame + 0x8));
  }
  if (!((float10)*(float *)((int)this + 0xf4) < (float10)*pfVar5)) {
    pfVar5 = (float *)((int)this + 0xf4);
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x2c8);
  *(float *)((int)this + 0xf0) = *pfVar5;
  if (piVar3 == (int *)0x0) {
    fVar2 = 0.0;
  }
  else {
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3 GEN_EDX_ARG,0x796)));
    uVar8 = 1;
    pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 8))(piVar3 GEN_EDX_ARG)));
    pfVar5 = (float *)F_00cb0910(pvVar4 GEN_EDX_ARG,uVar8);
    fVar2 = *pfVar5;
  }
  uVar8 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f38c0)));
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar7 = (float10)(int)gen_fl2bits(fVar2);
  if ((int)gen_fl2bits(fVar2) < 0) {
    fVar7 = fVar7 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  pfVar5 = (float *)((int)this + 0x118);
  fVar2 = ((float)GEN_TOF(((fVar7 / (float10)*(double *)&REFG(undefined, 0x1080220)) * (float10)*(double *)&REFG(undefined, 0x1080228))));
  (*(float *)(gen_frame + 0x8)) = fVar2;
  if ((float10)fVar2 < (float10)*pfVar5) {
    pfVar5 = &(*(float *)(gen_frame + 0x8));
  }
  if (!((float10)*(float *)((int)this + 0x114) < (float10)*pfVar5)) {
    pfVar5 = (float *)((int)this + 0x114);
  }
  *(float *)((int)this + 0x100) = *pfVar5;
  *(undefined4 *)((int)this + 0x2c0) = uVar8;
  *(undefined1 *)((int)this + 0x280) = 0;
  return (uint)pfVar5;
}

/* ref: FUN_00b75490 */
GEN_FRAME uint GEN_THISCALL F_00b75490(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb75490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint extraout_EAX = 0;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float fVar7;
  
  uVar3 = F_00ab11c0();
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  uVar3 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x16);
  if ((char)uVar3 != '\0') {
    if (*(int *)((int)this + 0xe0) == 0) {
      *(undefined4 *)((int)this + 0xe0) = 1;
    }
    else if (*(int *)((int)this + 0xe0) == 1) {
      *(undefined4 *)((int)this + 0xe0) = 0;
    }
  }
  uVar3 = F_00542520(&REFG(undefined, 0x1375b30) GEN_EDX_ARG);
  *(char *)((int)this + 0x1f5) = (char)uVar3;
  bVar2 = F_00b6fac0(this GEN_EDX_ARG,*(uint *)((int)this + 0x134));
  *(byte *)((int)this + 500) = bVar2;
  F_00b73600(this GEN_EDX_ARG,*(uint *)((int)this + 0x134),(uint)*(byte *)((int)this + 0x1f5));
  uVar3 = F_00b6bf70(this GEN_EDX_ARG);
  *(uint *)((int)this + 0x134) = uVar3;
  uVar3 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x19);
  if ((char)uVar3 == '\0') {
    uVar3 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x1a);
    if ((char)uVar3 == '\0') {
      uVar3 = F_0053b420(&REFG(undefined, 0x1375b30) GEN_EDX_ARG,0x1b);
      if ((char)uVar3 != '\0') {
        F_00b704a0(this GEN_EDX_ARG);
      }
    }
    else {
      F_00b749f0(this GEN_EDX_ARG);
    }
  }
  else {
    F_00b74520(this GEN_EDX_ARG,*(uint *)((int)this + 0x134));
  }
  uVar3 = *(uint *)((int)this + 0x134);
  if (uVar3 == 3) {
    fVar7 = *(float *)((int)this + 0x240);
  }
  else {
    fVar7 = *(float *)((int)this + 0xe4);
  }
  switch((unsigned int)(uintptr_t)(uVar3)) {
  default: ;
switchD_00b755a0_caseD_0: ;
LAB_00b755f5: ;
    F_00b73e70(this GEN_EDX_ARG,uVar3);
    break;
  case 1: ;
  case 2: ;
  case 3: ;
  case 5: ;
  case 6: ;
    if ((!((float10)*(float *)((int)this + 0xe8) < (float10)fVar7)) ||
       (!((float10)*(float *)((int)this + 0xf8) <= (float10)*(float *)((int)this + 0xf0)))) {
      if (((float10)*(float *)((int)this + 0xf0) < (float10)*(float *)((int)this + 0xf8)) &&
         ((float10)fVar7 <= (float10)*(float *)((int)this + 0xe8))) goto switchD_00b755a0_caseD_0;
      F_00b73ef0(this GEN_EDX_ARG,uVar3);
      uVar3 = *(uint *)((int)this + 0x134);
      goto LAB_00b755f5;
    }
    F_00b73ef0(this GEN_EDX_ARG,uVar3);
  }
  uVar3 = *(uint *)((int)this + 0x134);
  iVar5 = 2;
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
  case 4: ;
    iVar5 = 0;
    break;
  case 1: ;
  case 2: ;
  case 3: ;
  case 5: ;
  case 6: ;
    iVar5 = 1;
  }
  uVar1 = *(uint *)((int)this + 0x138);
  iVar4 = 2;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
  case 4: ;
    iVar4 = 0;
    break;
  case 1: ;
  case 2: ;
  case 3: ;
  case 5: ;
  case 6: ;
    iVar4 = 1;
  }
  if (iVar5 == iVar4) {
    return uVar1;
  }
  if ((uVar3 == 4) || (uVar3 == 3)) {
LAB_00b7569b: ;
    if (uVar3 < 7) goto LAB_00b756a0;
  }
  else {
    if (uVar3 != 6) {
      if (uVar3 != 5) {
        if (uVar1 == 4) {
          return 4;
        }
        if (uVar1 == 3) {
          return 3;
        }
        if (uVar1 == 6) {
          return 6;
        }
        if (uVar1 == 5) {
          return 5;
        }
      }
      goto LAB_00b7569b;
    }
LAB_00b756a0: ;
                    
    switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0xb75750) + uVar3))))) {
    case 0: ;
      if (REFG(int, 0x1379694) == 0) {
        fVar6 = (float10)0.0;
      }
      else {
        fVar6 = (float10)*(float *)(REFG(int, 0x1379694) + 0xb0);
      }
      goto LAB_00b75700;
    }
  }
  if (REFG(int, 0x1379694) == 0) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = *(float *)(REFG(int, 0x1379694) + 0xb0);
  }
  fVar6 = (float10)(float)((float10)fVar7 + (float10)3.1415927410125732);
LAB_00b75700: ;
  fVar6 = F_00aae710((float)fVar6);
  *(float *)((int)this + 0xfc) = (float)fVar6;
  return extraout_EAX;
}

/* ref: FUN_00b75760 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b75760(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb75760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (((*(int *)((int)this + 0x2c) == 0) && (REFG(int, 0x1375bbc) != -1)) &&
     (((undefined *)GEN_TOP((&REFG(undefined4, 0x1375b90))[(int)(REFG(int, 0x1375bbc))])) != (undefined *)0x0)) {
    F_00b75490(((undefined *)GEN_TOP((&REFG(undefined4, 0x1375b90))[(int)(REFG(int, 0x1375bbc))])) GEN_EDX_FWD);
    return;
  }
  return;
}

/* ref: Client::Game::LobbyCamera::vf7 */
GEN_FRAME uint GEN_THISCALL F_00b75790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb75790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  int * piVar4;
  undefined * pvVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 uVar11;
  
  *(undefined4 *)(this + 0x1b4) = GEN_FLT_TO(*(undefined4 *)(this + 0x1b4), REFG(float, 0x10f3960));
  *(undefined4 *)(this + 0x1b8) = GEN_FLT_TO(*(undefined4 *)(this + 0x1b8), REFG(float, 0x10f396c));
  *(undefined4 *)(this + 0x154) = GEN_FLT_TO(*(undefined4 *)(this + 0x154), REFG(float, 0x10928e4));
  piVar4 = (int *)F_0052fba0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8) GEN_EDX_FWD,"Lobby");
  *(int * PTR32 *)(this + 0x2c8) = piVar4;
  iVar6 = 0;
  if (piVar4 != (int *)0x0) {
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4 GEN_EDX_ARG,0x76f)));
    uVar11 = 1;
    pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG)));
    piVar4 = (int *)F_00cb0910(pvVar5 GEN_EDX_ARG,uVar11);
    iVar6 = *piVar4;
  }
  fVar8 = (float10)iVar6;
  if (iVar6 < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar1 = (float10)REFG(double, 0x10944b8);
  piVar4 = *(int * PTR32 *)(this + 0x2c8);
  if (piVar4 == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4 GEN_EDX_ARG,0x774)));
    uVar11 = 1;
    pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG)));
    piVar4 = (int *)F_00cb0910(pvVar5 GEN_EDX_ARG,uVar11);
    iVar6 = *piVar4;
  }
  fVar9 = (float10)iVar6;
  if (iVar6 < 0) {
    fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar2 = (float10)REFG(double, 0x10944b8);
  piVar4 = *(int * PTR32 *)(this + 0x2c8);
  if (piVar4 == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4 GEN_EDX_ARG,0x76d)));
    uVar11 = 1;
    pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG)));
    piVar4 = (int *)F_00cb0910(pvVar5 GEN_EDX_ARG,uVar11);
    iVar6 = *piVar4;
  }
  fVar10 = (float10)iVar6;
  if (iVar6 < 0) {
    fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar3 = (float10)REFG(double, 0x10944b8);
  piVar4 = *(int * PTR32 *)(this + 0x2c8);
  *(float *)(this + 0x2a0) = (float)(fVar9 / fVar2);
  *(float *)(this + 0x2b0) = (float)(fVar8 / fVar1);
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(float *)(this + 0x290) = (float)(fVar10 / fVar3);
  if (piVar4 == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    piVar4 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4 GEN_EDX_ARG,0x775)));
    uVar11 = 1;
    pvVar5 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 8))(piVar4 GEN_EDX_ARG)));
    piVar4 = (int *)F_00cb0910(pvVar5 GEN_EDX_ARG,uVar11);
    iVar6 = *piVar4;
  }
  fVar8 = (float10)iVar6;
  if (iVar6 < 0) {
    fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)&REFG(undefined, 0x14c4ee0) = (float)(fVar8 / (float10)*(double *)&REFG(undefined, 0x1088118));
  uVar7 = F_00b75200(this GEN_EDX_ARG);
  return uVar7;
}

/* ref: Client::Game::ConfigElementInterface::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b75950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb75950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10f486c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b75980 */
GEN_FRAME uint GEN_THISCALL F_00b75980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb75980u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00b75990 */
GEN_FRAME uint GEN_THISCALL F_00b75990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb75990u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00b759a0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b759a0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb759a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = param_2;
  *(undefined1 *)(in_ecx + 1) = 0;
  return;
}

/* ref: FUN_00b759c0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b759c0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb759c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = param_2;
  *(undefined1 *)(in_ecx + 1) = 1;
  return;
}

/* ref: FUN_00b75a10 */
GEN_FRAME byte GEN_STDCALL F_00b75a10(unsigned int gen_a0)
{
  GEN_ENTER(0xb75a10u, gen_a0, 0u, 0u, 0u);
  if (((((*(int *)&gen_a0) != 4) && ((*(int *)&gen_a0) != 3)) && ((*(int *)&gen_a0) != 6)) && ((*(int *)&gen_a0) != 5)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00b75a40 */
GEN_FRAME unsigned int GEN_THISCALL F_00b75a40(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb75a40u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xe8) = param_2;
  return;
}

/* ref: FUN_00b75a60 */
GEN_FRAME unsigned int GEN_THISCALL F_00b75a60(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb75a60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xec) = param_2;
  return;
}

/* ref: FUN_00b75b20 */
GEN_FRAME uint GEN_THISCALL F_00b75b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb75b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined2 *)((int)this + 4) = (undefined2)param_2;
  *(undefined1 *)((int)this + 6) = (undefined1)param_3;
  return (uint)this;
}

/* ref: FUN_00b75b50 */
GEN_FRAME unsigned int GEN_THISCALL F_00b75b50(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb75b50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xc4) = param_2;
  return;
}

/* ref: Client::Game::CameraBase::vf2 */
GEN_NOFRAME unsigned int F_00b75b90(void)
{
  GEN_ENTER(0xb75b90u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::CameraBase::vf4 */
GEN_NOFRAME unsigned int F_00b75ba0(void)
{
  GEN_ENTER(0xb75ba0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Game::CameraBase::vf7 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b75bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb75bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::Game::CameraBase::vf8 */
GEN_NOFRAME unsigned int F_00b75bc0(void)
{
  GEN_ENTER(0xb75bc0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00b75bd0 */
GEN_FRAME float GEN_THISCALL F_00b75bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb75bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00414500(*(undefined4 *)(param_1 + 0x10) GEN_EDX_FWD,*(undefined4 *)this);
  return *(float *)(uVar1 + 0x14);
}

/* ref: FUN_00b75bf0 */
GEN_FRAME uint GEN_THISCALL F_00b75bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb75bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00414500(*(undefined4 *)(param_1 + 0x10) GEN_EDX_FWD,*(undefined4 *)this);
  return *(uint *)(uVar1 + 0x14);
}

/* ref: Client::Game::ConfigFloat::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b75c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb75c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10f486c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::CameraBase::vf5 */
GEN_NOFRAME float GEN_THISCALL F_00b75c70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb75c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x70) - (float10)*(float *)(this + 0x40))));
  fVar4 = *(float *)(this + 0x74);
  fVar1 = *(float *)(this + 0x44);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar4 - (float10)fVar1);
  fVar2 = *(float *)(this + 0x78);
  fVar3 = *(float *)(this + 0x48);
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar2 - (float10)fVar3);
  (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x70) - (float10)*(float *)(this + 0x40))));
  (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar4 - (float10)fVar1);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar2 - (float10)fVar3);
  fVar4 = F_00aae920(&(*(float *)(gen_frame + 0x0)));
  return fVar4;
}

/* ref: Client::Game::CameraBase::vf6 */
GEN_NOFRAME float GEN_THISCALL F_00b75cd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb75cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x70) - (float10)*(float *)(this + 0x40))));
  fVar4 = *(float *)(this + 0x74);
  fVar1 = *(float *)(this + 0x44);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar4 - (float10)fVar1);
  fVar2 = *(float *)(this + 0x78);
  fVar3 = *(float *)(this + 0x48);
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar2 - (float10)fVar3);
  (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x70) - (float10)*(float *)(this + 0x40))));
  (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar4 - (float10)fVar1);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar2 - (float10)fVar3);
  fVar4 = F_00aae900(&(*(float *)(gen_frame + 0x0)));
  return fVar4;
}

/* ref: Client::Game::CameraBase::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b75d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb75d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f4884));
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b75d60 */
GEN_NOFRAME uint GEN_THISCALL F_00b75d60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb75d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f4884));
  F_006906c0((undefined *)((int)this + 0x10) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f48ec));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a8) = (*(undefined * PTR32 (*)[3])REFP(0x10f48ac));
  *(undefined1 *)((int)this + 600) = 1;
  return (uint)this;
}

/* ref: Client::Game::Camera::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b75d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb75d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 0x1a8) = (*(undefined * PTR32 (*)[3])REFP(0x10f486c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f4884));
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::LowCutCamera::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b75dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb75dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f4884));
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::LobbyCamera::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b75e00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb75e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 0x1a8) = (*(undefined * PTR32 (*)[3])REFP(0x10f486c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10f4884));
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b75e40 */
GEN_FRAME uint GEN_THISCALL F_00b75e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb75e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((char)param_1 != '\0') | *(uint *)((int)this + 200) & 0xfffffffe;
  *(uint *)((int)this + 200) = uVar1;
  return uVar1;
}

/* ref: FUN_00b75e60 */
GEN_FRAME uint GEN_THISCALL F_00b75e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb75e60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = 0;
  in_ecx[0x13] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00b75e80 */
GEN_FRAME byte GEN_THISCALL F_00b75e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb75e80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b75e90 */
GEN_FRAME float10 F_00b75e90(float gen_a0)
{
  GEN_ENTER(0xb75e90u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00b75eb0 */
GEN_FRAME float10 F_00b75eb0(float gen_a0)
{
  GEN_ENTER(0xb75eb0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF(ABS((float10)param_1)));
}

/* ref: FUN_00b75ec0 */
GEN_FRAME float10 F_00b75ec0(float gen_a0)
{
  GEN_ENTER(0xb75ec0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar5 = (float10)param_1;
  fVar6 = (float10)*(double *)&REFG(undefined, 0x1080228);
  uVar2 = (uint)(fVar5 / fVar6);
  fVar7 = (float10)((float)GEN_TOF(ABS(fVar5)));
  fVar1 = (float10)0;
  if ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar1)) != ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar1)) || fVar7 == fVar1)) {
    return fVar1;
  }
  uVar3 = uVar2 & 0x80000001;
  bVar4 = uVar3 == 0;
  if ((int)uVar3 < 0) {
    bVar4 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (bVar4) {
    return (float10)(float)(fVar5 - fVar6 * (float10)(int)uVar2);
  }
  return (float10)((float)GEN_TOF((fVar5 - ((float10)(int)uVar2 + (float10)(float)(fVar5 / fVar7)) * fVar6)));
}

/* ref: FUN_00b75f50 */
GEN_NOFRAME unsigned int F_00b75f50(unsigned int gen_a0)
{
  GEN_ENTER(0xb75f50u, gen_a0, 0u, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  bool bVar2;
  float10 fVar3;
  
  fVar3 = (float10)param_1[2];
  fVar3 = (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar3 * fVar3 +
                                               ((float10)0 * (float10)0 +
                                               (float10)*param_1 * (float10)*param_1)))))));
  bVar2 = GEN_ISNAN(fVar3) || GEN_ISNAN((float10)0);
  if (bVar2 != (bVar2 || fVar3 == (float10)0)) {
    return 0;
  }
  fVar3 = ((float10)GEN_TOD(GEN_X87MATH((float10)(float)((float10)param_1[2] / fVar3),7)));
  return (uint)(F_00b75ec0((float)fVar3));
}

/* ref: FUN_00b76010 */
GEN_FRAME float10 F_00b76010(float gen_a0)
{
  GEN_ENTER(0xb76010u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080220)) /
                         (float10)*(double *)&REFG(undefined, 0x1080228))));
}

/* ref: FUN_00b76030 */
GEN_FRAME float10 F_00b76030(float gen_a0)
{
  GEN_ENTER(0xb76030u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00b76050 */
GEN_FRAME uint F_00b76050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb76050u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  return (&REFG(undefined4, 0x14a9e84))[(int)(param_2 * 0x12)];
}

/* ref: FUN_00b76070 */
GEN_FRAME uint F_00b76070(unsigned int gen_a0)
{
  GEN_ENTER(0xb76070u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (&REFG(undefined4, 0x14a9a1c))[(int)(param_1)];
}

/* ref: FUN_00b76080 */
GEN_FRAME uint GEN_THISCALL F_00b76080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb76080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_3;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00b760a0 */
GEN_FRAME byte GEN_STDCALL F_00b760a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb760a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  uint uVar2;
  
  uVar2 = F_00a5feb0((undefined *)param_2 GEN_EDX_ARG);
  fVar1 = *(float *)(uVar2 + 4);
  uVar2 = F_00a5feb0(param_1 GEN_EDX_ARG);
  if ((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)(uVar2 + 4))))))) <
      (float10)REFG(float, 0x1087ef8)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b76280 */
GEN_FRAME uint F_00b76280(unsigned int gen_a0)
{
  GEN_ENTER(0xb76280u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * this;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  int * local_10;
  float local_c;
  
  uVar3 = 0;
  local_c = REFG(float, 0x1090998);
  local_10 = (int *)0x0;
  do {
    this = *(int * PTR32 *)((int)&REFG(undefined4, 0x14a9a1c) + uVar3);
    if ((this != (int *)0x0) && (this != param_1)) {
      uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*this + 4))(this GEN_EDX_ARG);
      if (uVar1 == 1) {
        uVar1 = F_00a5feb0(param_1 GEN_EDX_ARG);
        uVar2 = F_00a5feb0(this GEN_EDX_ARG);
        fVar4 = F_00aaea30(uVar2,uVar1);
        if ((float10)fVar4 < (float10)local_c) {
          local_10 = this;
          local_c = fVar4;
        }
      }
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 400);
  return (uint)local_10;
}

/* ref: FUN_00b76310 */
GEN_FRAME uint F_00b76310(unsigned int gen_a0)
{
  GEN_ENTER(0xb76310u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * this;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  undefined * local_10;
  float local_c;
  
  local_c = REFG(float, 0x1090998);
  local_10 = (undefined *)0x0;
  uVar3 = 0;
  do {
    this = *(undefined * PTR32 *)((int)&REFG(undefined4, 0x14a9a1c) + uVar3);
    if ((this != (undefined *)0x0) && (this != param_1)) {
      uVar1 = F_00a5feb0(param_1 GEN_EDX_ARG);
      uVar2 = F_00a5feb0(this GEN_EDX_ARG);
      fVar4 = F_00aaea30(uVar2,uVar1);
      if ((float10)fVar4 < (float10)local_c) {
        local_10 = this;
        local_c = fVar4;
      }
    }
    uVar3 = uVar3 + 4;
  } while (uVar3 < 400);
  return (uint)local_10;
}

/* ref: FUN_00b76390 */
GEN_FRAME uint F_00b76390(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb76390u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined * this;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  
  uVar4 = 0;
  uVar3 = 0;
  do {
    this = *(undefined * PTR32 *)((int)&REFG(undefined4, 0x14a9a1c) + uVar4);
    if ((this != (undefined *)0x0) && (this != param_1)) {
      uVar1 = F_00a5feb0(param_1 GEN_EDX_ARG);
      uVar2 = F_00a5feb0(this GEN_EDX_ARG);
      fVar5 = F_00aaea30(uVar2,uVar1);
      if ((float10)fVar5 <= (float10)param_2) {
        *(undefined * PTR32 *)(param_3 + uVar3 * 4) = this;
        uVar3 = uVar3 + 1;
      }
    }
    uVar4 = uVar4 + 4;
  } while (uVar4 < 400);
  return uVar3;
}

/* ref: FUN_00b763f0 */
GEN_FRAME float F_00b763f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb763f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  uVar1 = F_00a5feb0(param_2 GEN_EDX_ARG);
  uVar2 = F_00a5feb0(param_1 GEN_EDX_ARG);
  fVar3 = F_00aaea30(uVar2,uVar1);
  return fVar3;
}

/* ref: FUN_00b76410 */
GEN_FRAME byte F_00b76410(unsigned int gen_a0)
{
  GEN_ENTER(0xb76410u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  undefined * this;
  int * piVar2;
  uint uVar3;
  
  uVar1 = F_006b8c00();
  uVar1 = F_006c5190(uVar1 GEN_EDX_ARG);
  if ((char)uVar1 == '\0') {
    return 0;
  }
  this = (undefined *)F_006b8c00();
  uVar1 = F_006de750(this GEN_EDX_ARG);
  piVar2 = (int *)F_00a5f2b0(uVar1);
  if (piVar2 != (int *)0x0) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 4))(piVar2 GEN_EDX_ARG);
    if (uVar3 == 3) {
      return *(int *)(uVar1 + 0x80) == param_1;
    }
  }
  return 0;
}

/* ref: FUN_00b76470 */
GEN_FRAME uint GEN_THISCALL F_00b76470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb76470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10f50f8));
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00b76490 */
GEN_FRAME uint F_00b76490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb76490u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  switch((unsigned int)(uintptr_t)(*(undefined1 *)(param_2 + 0x15))) {
  case 1: ;
    iVar1 = param_1;
    break;
  default: ;
    return 0xe0000000;
  case 4: ;
    iVar1 = REFG(int, 0x1379694);
    if (REFG(int, 0x1379694) == 0) {
      return 0xe0000000;
    }
  }
  return *(uint *)(iVar1 + 0x74);
}

/* ref: FUN_00b764d0 */
GEN_FRAME uint F_00b764d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb764d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0) {
    return 0;
  }
  return (uint)*(byte *)(param_1 + 0x14);
}

/* ref: FUN_00b764f0 */
GEN_FRAME uint F_00b764f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb764f0u, gen_a0, gen_a1, gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  if (param_3 == 0) {
    *param_2 = (uint)(byte)param_1[6];
    param_2[3] = (uint)*(byte *)((int)param_1 + 0x17);
    param_2[1] = *param_1;
    uVar1 = (uint)*(ushort *)((int)param_1 + 0xe);
    param_2[2] = uVar1;
  }
  else {
    uVar1 = param_3 - 1;
    if (uVar1 == 0) {
      *param_2 = (uint)*(byte *)((int)param_1 + 0x1a);
      param_2[3] = (uint)*(byte *)((int)param_1 + 0x19);
      param_2[1] = (uint)(ushort)param_1[4];
      uVar1 = param_1[1];
      param_2[2] = uVar1;
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_00b76550 */
GEN_FRAME uint F_00b76550(unsigned int gen_a0)
{
  GEN_ENTER(0xb76550u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0) {
    return 0;
  }
  return (uint)*(byte *)(param_1 + 0x16);
}

/* ref: FUN_00b76580 */
GEN_FRAME uint F_00b76580(unsigned int gen_a0)
{
  GEN_ENTER(0xb76580u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0) {
    return 0;
  }
  return *(uint *)(param_1 + 8);
}

/* ref: FUN_00b765d0 */
GEN_FRAME uint F_00b765d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb765d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    uVar1 = F_00ab2990(param_1,uVar2);
    if ((uVar1 != 0) && (*(char *)(uVar1 + 0x14) == (char)param_2)) break;
    uVar2 = uVar2 + 1;
    if (uVar1 == 0) {
      return 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00b76610 */
GEN_FRAME uint F_00b76610(unsigned int gen_a0)
{
  GEN_ENTER(0xb76610u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((*(char *)(param_1 + 0x16) == '\0') && (*(short *)(param_1 + 0xc) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00b76630 */
GEN_FRAME uint F_00b76630(unsigned int gen_a0)
{
  GEN_ENTER(0xb76630u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = F_00ab29c0((uint)*(ushort *)(param_1 + 0xc));
  return uVar1;
}

/* ref: FUN_00b76650 */
GEN_NOFRAME uint F_00b76650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb76650u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int * this;
  uint uVar1;
  float * pfVar2;
  float * pfVar3;
  longlong lVar4;
  undefined4 * local_20;
  uint local_1c;
  undefined4 * local_18;
  float local_14;
  
  local_14 = 0.0;
  if (param_2 == 0) {
    if (REFG(char, 0x14c4ef1) != '\0') {
      return 0;
    }
    local_14 = REFG(float, 0x10a509c);
    local_18 = &REFG(undefined4, 0x14c5088);
  }
  else {
    local_18 = local_20;
    if (param_2 == 1) {
      if (REFG(char, 0x14c4ef0) != '\0') {
        return 0;
      }
      local_14 = REFG(float, 0x1094880);
      local_18 = &REFG(undefined4, 0x14c4ef8);
    }
  }
  local_1c = 0;
  do {
    this = *(int * PTR32 *)((int)&REFG(undefined4, 0x14a9a1c) + local_1c);
    if (((this != (int *)0x0) && (lVar4 = ((GEN_TCODE *)*(gen_code32 *)*this)(this GEN_EDX_ARG), lVar4 != 0xe0000000)) &&
       (uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*this + 4))(this GEN_EDX_ARG), uVar1 == 1)) {
      pfVar2 = (float *)F_00a5feb0(this GEN_EDX_ARG);
      pfVar3 = (float *)F_00a5feb0(param_1 GEN_EDX_ARG);
      if ((float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)(float)((float10)pfVar3[2] -
                                                                (float10)pfVar2[2]) *
                                                (float10)(float)((float10)pfVar3[2] -
                                                                (float10)pfVar2[2]) +
                                               ((float10)(float)((float10)*pfVar3 - (float10)*pfVar2
                                                                ) *
                                                (float10)(float)((float10)*pfVar3 - (float10)*pfVar2
                                                                ) +
                                               (float10)(float)((float10)pfVar3[1] -
                                                               (float10)pfVar2[1]) *
                                               (float10)(float)((float10)pfVar3[1] -
                                                               (float10)pfVar2[1])))))))) <=
          (float10)local_14) {
        *local_18 = this;
        local_18 = local_18 + 1;
      }
    }
    local_1c = local_1c + 4;
  } while (local_1c < 400);
  if (param_2 == 0) {
    REFG(char, 0x14c4ef1) = '\x01';
    uVar1 = 0;
  }
  else {
    uVar1 = param_2 - 1;
    if (uVar1 == 0) {
      REFG(char, 0x14c4ef0) = 1;
      return 0;
    }
  }
  return uVar1;
}

/* ref: fVirtual */
GEN_FRAME int F_00b767a0(unsigned int gen_a0)
{
  GEN_ENTER(0xb767a0u, gen_a0, 0u, 0u, 0u);
  if (((((*(int *)&gen_a0) != 2) && ((*(int *)&gen_a0) != 3)) && ((*(int *)&gen_a0) != 0x14)) && ((*(int *)&gen_a0) != 0x15)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00b767d0 */
GEN_FRAME uint F_00b767d0(unsigned int gen_a0)
{
  GEN_ENTER(0xb767d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return ~(uint)(*(byte *)(param_1 + 0x8e) >> 6) & 1;
}

/* ref: FUN_00b767f0 */
GEN_FRAME float10 GEN_THISCALL F_00b767f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb767f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float local_8;
  
  local_8 = *(float *)(in_ecx + 0xc);
  if (local_8 <= REFG(float, 0x10a509c)) {
    local_8 = REFG(float, 0x1094880);
  }
  return (float10)(float)((float10)local_8 + (float10)REFG(double, 0x1094800));
}

/* ref: FUN_00b768a0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b768a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xb768a0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float fVar1;
  
  fVar1 = REFG(float, 0x10a509c);
  param_1[2] = (undefined4)gen_fl2bits(param_4);
  param_4 = gen_bits2f(param_1[3]);
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 4) = 1;
  if (param_4 <= fVar1) {
    param_4 = REFG(float, 0x1094880);
  }
  param_1[3] = (undefined4)gen_fl2bits((float)((float10)param_4 + (float10)REFG(double, 0x1094800)));
  return 0;
}

/* ref: FUN_00b768f0 */
GEN_FRAME byte GEN_THISCALL F_00b768f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb768f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00aa02d0(param_1 GEN_EDX_FWD,*(undefined4 *)((int)this + 0x14),0);
  return (char)uVar1 == '\0';
}

/* ref: FUN_00b76910 */
GEN_FRAME byte GEN_THISCALL F_00b76910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb76910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (*(char *)((int)this + 0x20) == '\0') {
    return 0;
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD);
  if (uVar1 == 3) {
    this_00 = (undefined *)F_006b8c00();
    uVar1 = F_006c5190(this_00 GEN_EDX_ARG);
    if ((char)uVar1 != '\0') {
      uVar2 = ((gen_lcode *)*(gen_code32 *)*param_1)(param_1);
      uVar3 = F_006d9e70(this_00 GEN_EDX_ARG);
      if (uVar2 == uVar3) {
        return 0;
      }
    }
    return 1;
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
  if (((uVar1 == 2) && ((*(byte *)((int)param_1 + 0x2dd2) & 2) == 0)) &&
     ((char)param_1[0x62] != '\x02')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b769a0 */
GEN_FRAME byte GEN_THISCALL F_00b769a0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xb769a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(undefined1 *)(in_ecx + 0x1c) = 0;
  *(float *)(in_ecx + 0x10) = param_2;
  return 1;
}

/* ref: FUN_00b769c0 */
GEN_FRAME byte GEN_THISCALL F_00b769c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xb769c0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  uint uVar2;
  float10 fVar3;
  
  uVar2 = F_00a4b780(10000);
  fVar3 = (float10)(int)uVar2;
  if ((int)uVar2 < 0) {
    fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar1 = (float10)*(double *)&REFG(undefined, 0x10a2b98);
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(float *)(param_1 + 0x10) =
       ((float)GEN_TOF((((float10)param_4 - (float10)param_3) * (float10)(float)(fVar3 / fVar1) +
              (float10)param_3)));
  return 1;
}

/* ref: FUN_00b76a20 */
GEN_FRAME byte GEN_THISCALL F_00b76a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb76a20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 0x1c) = 3;
  F_00bc8440(param_1 + 0x1570 GEN_EDX_FWD,(float)(int)param_2[2],param_2[4],*param_2);
  return 1;
}

/* ref: FUN_00b76a60 */
GEN_FRAME byte GEN_STDCALL F_00b76a60(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb76a60u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  float10 fVar2;
  float fVar3;
  
  uVar1 = F_00a5feb0(param_1 GEN_EDX_ARG);
  fVar3 = F_00aaea30(uVar1,param_2);
  if ((double)fVar3 < *(double *)&REFG(undefined, 0x1094810)) {
    fVar2 = F_00aae710(((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0xb0) - (float10)param_3))));
    if ((float10)((float)GEN_TOF(ABS(fVar2))) < (float10)*(float *)&REFG(undefined, 0x133df78)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b76ae0 */
GEN_FRAME byte GEN_STDCALL F_00b76ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xb76ae0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00aa0790(param_1 GEN_EDX_ARG);
  if ((char)uVar1 == '\0') {
    uVar1 = F_00a9fbf0(param_1 GEN_EDX_ARG);
    if ((char)uVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00b76b10 */
GEN_NOFRAME uint F_00b76b10(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xb76b10u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  if ((GEN_ISNAN(param_3) == (GEN_ISNAN(param_3) || param_3 == 0.0)) ||
     (GEN_ISNAN(param_4) == (GEN_ISNAN(param_4) || param_4 == 0.0))) {
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1302c98);
    (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1302c90);
    (*(float *)(gen_frame + 0x14)) = gen_bits2f(REFG(float, 0x1302c94));
    F_004f41e0(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG,param_2);
    (*(float *)(gen_frame + 0x14)) = 0.0;
    (*(float *)(gen_frame + 0x0)) = (float)((float10)REFG(float, 0x1302c88) * (float10)0 -
                      (float10)(*(float *)(gen_frame + 0x18)) * (float10)REFG(float, 0x1302c84));
    (*(float *)(gen_frame + 0x4)) = (float)((float10)REFG(float, 0x1302c80) * (float10)(*(float *)(gen_frame + 0x18)) -
                      (float10)(*(float *)(gen_frame + 0x10)) * (float10)REFG(float, 0x1302c88));
    (*(float *)(gen_frame + 0x8)) = (float)((float10)REFG(float, 0x1302c84) * (float10)(*(float *)(gen_frame + 0x10)) -
                      (float10)0 * (float10)REFG(float, 0x1302c80));
    if (GEN_ISNAN(param_3) == (GEN_ISNAN(param_3) || param_3 == 0.0)) {
      F_0046f0e0(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG,param_3);
      *param_1 = (float)((float10)*param_1 + (float10)(*(float *)(gen_frame + 0x10)));
      param_1[1] = (float)((float10)param_1[1] + (float10)(*(float *)(gen_frame + 0x14)));
      param_1[2] = (float)((float10)param_1[2] + (float10)(*(float *)(gen_frame + 0x18)));
    }
    if (GEN_ISNAN(param_4) == (GEN_ISNAN(param_4) || param_4 == 0.0)) {
      F_0046f0e0(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG,param_4);
      *param_1 = (float)((float10)*param_1 + (float10)(*(float *)(gen_frame + 0x0)));
      param_1[1] = (float)((float10)param_1[1] + (float10)(*(float *)(gen_frame + 0x4)));
      param_1[2] = (float)((float10)param_1[2] + (float10)(*(float *)(gen_frame + 0x8)));
    }
  }
  return (uint)param_1;
}

/* ref: FUN_00b76c70 */
GEN_FRAME ushort GEN_THISCALL F_00b76c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb76c70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x1a) = (ushort)param_2;
  *(undefined1 *)(in_ecx + 0x21) = 1;
  return (ushort)param_2;
}

/* ref: FUN_00b76ca0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b76ca0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb76ca0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(char *)(in_ecx + 0x40) == '\0') {
    *(undefined4 *)(in_ecx + 0x34) = 0;
  }
  return;
}

/* ref: FUN_00b76cb0 */
GEN_NOFRAME uint GEN_THISCALL F_00b76cb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb76cb0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[7] = 0x10000;
  uVar1 = F_00bf0a20(in_ecx + 0x11 GEN_EDX_FWD);
  in_ecx[0x84] = (undefined4)REFG(float, 0x1375ad0);
  in_ecx[0x85] = (*(undefined4 *)((char *)&REFG(float, 0x1375ad0) + 4));
  in_ecx[0x86] = (undefined4)REFG(float, 0x1375ad8);
  in_ecx[0x87] = (*(undefined4 *)((char *)&REFG(float, 0x1375ad8) + 4));
  *(undefined1 *)(in_ecx + 0x88) = 0;
  in_ecx[0xb] = 0;
  *(undefined1 *)(in_ecx + 0xe) = 0;
  in_ecx[10] = 0xe0000000;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  *(undefined1 *)(in_ecx + 0x10) = 1;
  return uVar1;
}

/* ref: FUN_00b76d60 */
GEN_FRAME ushort GEN_THISCALL F_00b76d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb76d60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x18) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00b76d70 */
GEN_FRAME uint GEN_THISCALL F_00b76d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb76d70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (int)*(short *)(in_ecx + param_2 * 2);
}

/* ref: FUN_00b76d80 */
GEN_FRAME uint GEN_THISCALL F_00b76d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb76d80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  short * psVar1;
  
  psVar1 = (short *)(in_ecx + param_2 * 2);
  *psVar1 = *psVar1 + 1;
  return param_2;
}

/* ref: FUN_00b76d90 */
GEN_FRAME uint GEN_THISCALL F_00b76d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb76d90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  short * psVar1;
  
  psVar1 = (short *)(in_ecx + param_2 * 2);
  *psVar1 = *psVar1 - 1;
  return param_2;
}

/* ref: FUN_00b76da0 */
GEN_FRAME uint GEN_THISCALL F_00b76da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb76da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined2 *)((int)this + param_1 * 2) = 0;
  return 0;
}

/* ref: FUN_00b76db0 */
GEN_FRAME float10 GEN_THISCALL F_00b76db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb76db0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (float10)*(float *)(in_ecx + 8 + param_2 * 4);
}

/* ref: FUN_00b76dc0 */
GEN_FRAME float10 GEN_THISCALL F_00b76dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb76dc0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 8 + param_2 * 4) = param_3;
  return (float10)param_3;
}

/* ref: FUN_00b76de0 */
GEN_FRAME uint GEN_STDCALL F_00b76de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb76de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00aa0560(param_1 GEN_EDX_ARG,param_2);
  return uVar1;
}

/* ref: FUN_00b76e00 */
GEN_NOFRAME ulonglong GEN_THISCALL F_00b76e00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb76e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x40) != '\0') {
    return *(ulonglong *)((int)this + 0x28);
  }
  return 0xe0000000;
}

/* ref: FUN_00b76e20 */
GEN_FRAME uint GEN_STDCALL F_00b76e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb76e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  float10 fVar2;
  
  uVar1 = F_00a5feb0(param_1 GEN_EDX_ARG);
  fVar2 = F_00aaea90(param_2,uVar1);
  if (fVar2 < (float10)*(float *)&REFG(undefined, 0x10f50bc)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00b76e60 */
GEN_FRAME byte GEN_STDCALL F_00b76e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb76e60u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG);
  return (int)uVar1 <= (int)(param_2 & 0xff);
}

/* ref: FUN_00b76e80 */
GEN_FRAME uint GEN_THISCALL F_00b76e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb76e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if ((param_1 != 0) && (*(int *)((int)this + 0xc) == 0)) {
    uVar1 = F_005f3270(0x41,param_1,0);
    if (uVar1 != 0) {
      *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(uVar1 + 0x60);
    }
  }
  return *(uint *)((int)this + 0xc);
}

/* ref: FUN_00b76ec0 */
GEN_FRAME byte GEN_STDCALL F_00b76ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb76ec0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte * param_3 = (byte *)(uintptr_t)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG);
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = uVar2 - 1;
  }
  if (*param_2 < uVar3) {
    bVar1 = *param_3 + 1;
    if (bVar1 < 0x10) {
      *param_3 = bVar1;
      return bVar1;
    }
    *param_3 = 0;
    *param_2 = *param_2 + 1;
    return bVar1;
  }
  *param_2 = (byte)uVar2;
  return (byte)uVar2;
}

/* ref: FUN_00b76f10 */
GEN_NOFRAME uint GEN_STDCALL F_00b76f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb76f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float * pfVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  *param_1 = *param_4;
  param_1[1] = param_4[1];
  param_1[2] = param_4[2];
  pfVar9 = (float *)F_00a5feb0(param_2 GEN_EDX_ARG);
  fVar1 = *param_4;
  fVar2 = *pfVar9;
  fVar3 = param_4[1];
  fVar4 = pfVar9[1];
  fVar5 = param_4[2];
  fVar6 = pfVar9[2];
  fVar10 = (float10)(float)((float10)fVar3 - (float10)fVar4);
  fVar11 = (float10)(float)((float10)fVar1 - (float10)fVar2);
  fVar12 = (float10)(float)((float10)fVar5 - (float10)fVar6);
  fVar10 = (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar12 * fVar12 +
                                                (fVar11 * fVar11 + fVar10 * fVar10)))))));
  if ((float10)1 < fVar10) {
    fVar10 = (float10)(float)((float10)1 / fVar10);
    pfVar9 = (float *)F_00a5feb0(param_2 GEN_EDX_ARG);
    fVar7 = pfVar9[1];
    fVar8 = pfVar9[2];
    *param_1 = ((float)GEN_TOF(((float10)*pfVar9 +
                      (float10)((float)GEN_TOF((fVar10 * (float10)(float)((float10)fVar1 - (float10)fVar2)))))));
    param_1[1] = ((float)GEN_TOF(((float10)fVar7 +
                        (float10)((float)GEN_TOF(((float10)(float)((float10)fVar3 - (float10)fVar4) * fVar10)))
                        )));
    param_1[2] = ((float)GEN_TOF(((float10)fVar8 +
                        (float10)((float)GEN_TOF((fVar10 * (float10)(float)((float10)fVar5 - (float10)fVar6))))
                        )));
    return (uint)param_1;
  }
  return (uint)param_1;
}

/* ref: FUN_00b77030 */
GEN_NOFRAME float GEN_STDCALL F_00b77030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb77030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  uint uVar2;
  float * pfVar3;
  float * pfVar4;
  uint uVar5;
  bool bVar6;
  float10 in_ST0 = 0;
  float10 extraout_ST0 = 0;
  float10 fVar7;
  float10 fVar8;
  float10 extraout_ST1 = 0;
  
  if ((*(char *)(param_4 + 2) != '\0') &&
     (bVar6 = GEN_ISNAN(*(float *)((int)param_1 + 0x2ec8)) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114)),
     bVar6 != (bVar6 || *(float *)((int)param_1 + 0x2ec8) == *(float *)&REFG(undefined, 0x1088114)))) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x10))(param_2 GEN_EDX_ARG);
    uVar5 = 0;
    if ((char)uVar2 != '\0') {
      uVar5 = uVar2 - 1;
    }
    in_ST0 = extraout_ST0;
    if ((uVar5 & 0xff) <= (param_3 & 0xff) + 1) {
      pfVar3 = ((float *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar5 & 0xff)));
      pfVar4 = (float *)F_00a5feb0(param_1 GEN_EDX_ARG);
      (*(float *)(gen_frame + 0x10)) = (float)((float10)*pfVar4 - (float10)*pfVar3);
      (*(float *)(gen_frame + 0x18)) = (float)((float10)pfVar4[2] - (float10)pfVar3[2]);
      fVar7 = (float10)(float)((float10)pfVar4[2] - (float10)pfVar3[2]);
      fVar8 = (float10)(float)((float10)*pfVar4 - (float10)*pfVar3);
      fVar1 = (float)(fVar8 * fVar8 + fVar7 * fVar7);
      (*(float *)(gen_frame + 0x2c)) = fVar1;
      fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
      (*(float *)(gen_frame + 0x2c)) = fVar1;
      (*(float *)(gen_frame + 0x28)) = fVar1;
      fVar7 = F_00a9fad0(param_1 GEN_EDX_ARG);
      (*(float *)(gen_frame + 0x2c)) = (float)(fVar7 * (float10)*(double *)&REFG(undefined, 0x109cb18));
      in_ST0 = extraout_ST1;
      if ((float10)(*(float *)(gen_frame + 0x28)) <= (float10)(float)(fVar7 * (float10)*(double *)&REFG(undefined, 0x109cb18))) {
        *(undefined4 *)((int)param_1 + 0x2ec8) = GEN_FLT_TO(*(undefined4 *)((int)param_1 + 0x2ec8), REFG(float, 0x10f49a4));
      }
    }
  }
  return (float)in_ST0;
}

/* ref: FUN_00b77140 */
GEN_FRAME uint GEN_THISCALL F_00b77140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb77140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined1 *)((int)this + 6) = (undefined1)param_2;
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 7) = 4;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return 0;
}

/* ref: FUN_00b77190 */
GEN_FRAME uint GEN_THISCALL F_00b77190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb77190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = this;
  do {
    *puVar1 = *((undefined4 *)GEN_TOP((((int)&REFG(undefined4, 0x14a31f0) - (int)this) + (int)puVar1)));
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (uVar2 < 0x158);
  *(undefined4 *)((int)this + 0x560) = 0;
  *(undefined4 *)((int)this + 0x564) = 0;
  *(uint *)((int)this + 0x568) = param_1;
  *(undefined1 *)((int)this + 0x56c) = 1;
  return param_1;
}

/* ref: FUN_00b771f0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b771f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb771f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if ((float10)*(float *)(param_1 + 0x560) < (float10)param_3) {
    *(float *)(param_1 + 0x560) = param_3;
    F_00ae2110(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_2,param_3);
    F_00ae21b0(param_1,0x158,((undefined1 *)(gen_frame + 0x0)));
    return;
  }
  return;
}

/* ref: FUN_00b77250 */
GEN_FRAME uint GEN_THISCALL F_00b77250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb77250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  bool bVar2;
  byte bVar3;
  uint3 uVar6;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  uint uVar4;
  uint uVar5;
  undefined3 extraout_var_02 = 0;
  undefined3 uVar7;
  undefined3 extraout_var_03 = 0;
  undefined * this_00;
  undefined3 extraout_var_04 = 0;
  undefined3 extraout_var_05 = 0;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  iVar1 = *(int *)this;
  uVar6 = (uint3)((uint)iVar1 >> 8);
  switch((unsigned int)(uintptr_t)(iVar1)) {
  case 0: ;
    return CONCAT31(uVar6,1);
  default: ;
    if (param_2 == (int *)0x0) {
      return (uint)uVar6 << 8;
    }
    uVar7 = (undefined3)((uint)(iVar1 - 1) >> 8);
    switch((unsigned int)(uintptr_t)(iVar1)) {
    case 1: ;
      bVar3 = F_00b760a0(param_1,(uint)param_2);
      if (bVar3 == 0) {
        return 0;
      }
      break;
    case 2: ;
      bVar3 = F_00b760a0(param_1,(uint)param_2);
      if (bVar3 == 0) {
        return 1;
      }
      fVar10 = F_00b763f0(param_1,param_2);
      fVar9 = (float10)*(int *)((int)this + 4);
      if (*(int *)((int)this + 4) < 0) {
        fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      if (fVar9 <= (float10)fVar10) {
        return 1;
      }
      return 0;
    case 3: ;
      fVar9 = (float10)*(int *)((int)this + 4);
      if (*(int *)((int)this + 4) < 0) {
        fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      uVar4 = F_00b760f0(param_1,param_2,(float)(float10)0,(float)fVar9);
      return uVar4;
    case 4: ;
      fVar9 = (float10)*(int *)((int)this + 4);
      if (*(int *)((int)this + 4) < 0) {
        fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar8 = (float10)0;
      goto LAB_00b776a0;
    case 5: ;
      fVar9 = (float10)*(int *)((int)this + 4);
      if (*(int *)((int)this + 4) < 0) {
        fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      uVar4 = F_00b760f0(param_1,param_2,*(float *)&REFG(undefined, 0x133df6c),(float)fVar9);
      return uVar4;
    case 6: ;
      fVar9 = (float10)*(int *)((int)this + 4);
      if (*(int *)((int)this + 4) < 0) {
        fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      uVar4 = F_00b761b0(param_1,param_2,*(float *)&REFG(undefined, 0x133df6c),(float)fVar9);
      return uVar4;
    case 7: ;
      fVar9 = (float10)*(int *)((int)this + 4);
      if (*(int *)((int)this + 4) < 0) {
        fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      uVar4 = F_00b760f0(param_1,param_2,*(float *)&REFG(undefined, 0x133df70),(float)fVar9);
      return uVar4;
    case 8: ;
      fVar9 = (float10)*(int *)((int)this + 4);
      if (*(int *)((int)this + 4) < 0) {
        fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      uVar4 = F_00b761b0(param_1,param_2,*(float *)&REFG(undefined, 0x133df70),(float)fVar9);
      return uVar4;
    case 9: ;
      fVar9 = (float10)*(int *)((int)this + 4);
      if (*(int *)((int)this + 4) < 0) {
        fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      uVar4 = F_00b760f0(param_1,param_2,*(float *)&REFG(undefined, 0x133df74),(float)fVar9);
      return uVar4;
    case 10: ;
      fVar9 = (float10)*(int *)((int)this + 4);
      if (*(int *)((int)this + 4) < 0) {
        fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar8 = (float10)*(float *)&REFG(undefined, 0x133df74);
LAB_00b776a0: ;
      uVar4 = F_00b761b0(param_1,param_2,(float)fVar8,(float)fVar9);
      return uVar4;
    case 0xb: ;
      uVar4 = F_00a9fc10(param_2 GEN_EDX_ARG);
      return uVar4;
    case 0xc: ;
      uVar4 = F_00a9fc10(param_2 GEN_EDX_ARG);
      return CONCAT31((int3)(uVar4 >> 8),(char)uVar4 == '\0');
    default: ;
      return CONCAT31(uVar7,1);
    case 0x14: ;
      return (uint)(*(int *)((int)this + 4) <= (int)(uint)*(byte *)((int)param_1 + 0x1689));
    case 0x15: ;
      return (uint)((int)(uint)*(byte *)((int)param_1 + 0x1689) <= *(int *)((int)this + 4));
    case 0x1b: ;
      return (uint)((uint)*(byte *)(param_2 + 0xb6e) == *(uint *)((int)this + 4));
    case 0x1c: ;
      return (uint)((uint)*(byte *)(param_2 + 0xb6f) == *(uint *)((int)this + 4));
    case 0x1d: ;
      return (uint)((uint)*(byte *)(param_2 + 0x5a2) == *(uint *)((int)this + 4));
    case 0x1e: ;
      bVar3 = F_00a9f440(param_2 GEN_EDX_ARG,*(undefined4 *)((int)this + 4));
      return CONCAT31(extraout_var_03,bVar3);
    case 0x1f: ;
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x1c))(param_2 GEN_EDX_ARG);
      return CONCAT31((int3)(uVar4 >> 8),(char)uVar4 == '\0');
    case 0x20: ;
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x1c))(param_2 GEN_EDX_ARG);
      return CONCAT31((int3)(uVar4 >> 8),(char)uVar4 == '\x01');
    case 0x21: ;
      uVar11 = *(undefined4 *)((int)this + 4);
      this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0xd4))(param_2 GEN_EDX_ARG)));
      bVar3 = F_00b7aac0(this_00 GEN_EDX_ARG,uVar11);
      return CONCAT31(extraout_var_04,bVar3);
    case 0x22: ;
      bVar3 = F_00a9f390(*(undefined4 *)((int)this + 4));
      return CONCAT31(extraout_var_05,bVar3);
    case 0x29: ;
      return (uint)((uint)*(byte *)((int)param_2 + 0x168a) == *(uint *)((int)this + 4));
    case 0x2a: ;
      return CONCAT31(uVar7,*(byte *)((int)param_2 + 0x2dd2) >> 1) & 0xffffff01;
    case 0x2b: ;
      if ((uint)*(byte *)((int)param_2 + 0x168a) != *(uint *)((int)this + 4)) {
        return 0;
      }
      if ((uint)*(byte *)((int)param_2 + 0x168b) <= *(uint *)((int)this + 8)) {
        return 1;
      }
      return 0;
    case 0x2c: ;
      break;
    case 0x2d: ;
      fVar10 = F_00b763f0(param_1,param_2);
      fVar9 = (float10)*(int *)((int)this + 4);
      if (*(int *)((int)this + 4) < 0) {
        fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      bVar2 = fVar9 <= (float10)fVar10;
      goto LAB_00b774b8;
    }
    fVar10 = F_00b763f0(param_1,param_2);
    fVar9 = (float10)*(int *)((int)this + 4);
    if (*(int *)((int)this + 4) < 0) {
      fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    bVar2 = (float10)fVar10 <= fVar9;
LAB_00b774b8: ;
    if (bVar2) {
      return 1;
    }
    return 0;
  case 0xd: ;
    uVar4 = F_00b79ca0((undefined *)(REFG(int, 0x137104c) + 0x1210) GEN_EDX_ARG,0);
    return uVar4;
  case 0xe: ;
    uVar4 = F_00b79ca0((undefined *)(REFG(int, 0x137104c) + 0x1210) GEN_EDX_ARG,0);
    return CONCAT31((int3)(uVar4 >> 8),(char)uVar4 == '\0');
  case 0xf: ;
    uVar4 = F_00470090((undefined *)(REFG(int, 0x137104c) + 0x1210) GEN_EDX_ARG,0);
    return (uint)(*(uint *)((int)this + 4) <= uVar4);
  case 0x10: ;
    uVar4 = F_00470090((undefined *)(REFG(int, 0x137104c) + 0x1210) GEN_EDX_ARG,0);
    return (uint)(uVar4 < *(uint *)((int)this + 4));
  case 0x11: ;
    uVar4 = F_00470090((undefined *)(REFG(int, 0x137104c) + 0x1210) GEN_EDX_ARG,0);
    if ((*(uint *)((int)this + 4) <= uVar4) && (uVar4 < *(uint *)((int)this + 8))) {
      return 1;
    }
    break;
  case 0x12: ;
    bVar3 = F_00b7c0c0(&REFG(undefined, 0x133e5c0) GEN_EDX_ARG);
    return (uint)((uint)bVar3 == *(uint *)((int)this + 4));
  case 0x13: ;
    bVar3 = F_00b7c0c0(&REFG(undefined, 0x133e5c0) GEN_EDX_ARG);
    return (uint)((uint)bVar3 != *(uint *)((int)this + 4));
  case 0x16: ;
    fVar9 = (float10)*((float *)GEN_TOP(((int)param_1 + *(int *)((int)this + 4) * 4 + 0x1348)));
    fVar8 = (float10)*(int *)((int)this + 8);
    if (*(int *)((int)this + 8) < 0) {
      fVar8 = fVar8 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    if ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar8)) && !(fVar9 < fVar8)) {
      return 1;
    }
    break;
  case 0x17: ;
    fVar9 = (float10)*(int *)((int)this + 8);
    if (*(int *)((int)this + 8) < 0) {
      fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    if ((float10)*((float *)GEN_TOP(((int)param_1 + *(int *)((int)this + 4) * 4 + 0x1348))) <= fVar9) {
      return 1;
    }
    break;
  case 0x18: ;
    return (uint)(*(int *)((int)this + 8) <=
                 (int)*((short *)GEN_TOP(((int)param_1 + *(int *)((int)this + 4) * 2 + 0x1340))));
  case 0x19: ;
    return (uint)((int)*((short *)GEN_TOP(((int)param_1 + *(int *)((int)this + 4) * 2 + 0x1340))) <=
                 *(int *)((int)this + 8));
  case 0x1a: ;
    uVar12 = 100;
    uVar11 = 0;
    F_009a46a0();
    uVar4 = F_00978ca0(uVar11,uVar12);
    return (uint)(uVar4 <= *(uint *)((int)this + 4));
  case 0x23: ;
    bVar3 = F_00b76410(*(undefined4 *)((int)this + 4));
    return CONCAT31(extraout_var,bVar3);
  case 0x24: ;
    bVar3 = F_00b76410(*(undefined4 *)((int)this + 4));
    return CONCAT31(extraout_var_00,bVar3 == 0);
  case 0x25: ;
    uVar4 = F_00a5feb0(param_1 GEN_EDX_ARG);
    uVar5 = F_00b070f0();
    bVar3 = F_00b08460(uVar5 GEN_EDX_ARG,uVar4);
    return CONCAT31(extraout_var_01,bVar3);
  case 0x26: ;
    uVar4 = F_00a5feb0(param_1 GEN_EDX_ARG);
    uVar5 = F_00b070f0();
    bVar3 = F_00b08460(uVar5 GEN_EDX_ARG,uVar4);
    return CONCAT31(extraout_var_02,bVar3 == 0);
  }
  return 0;
}

/* ref: FUN_00b77930 */
GEN_FRAME byte GEN_THISCALL F_00b77930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb77930u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 * local_8;
  
  uVar4 = 0;
  uVar2 = 0;
  local_8 = (undefined4 *)0x0;
  if (param_2 == 5) {
    uVar2 = 0;
    local_8 = &REFG(undefined4, 0x14c5088);
  }
  else if (param_2 == 10) {
    uVar2 = 1;
    local_8 = &REFG(undefined4, 0x14c4ef8);
  }
  F_00b76650(param_1,uVar2);
  while (((puVar1 = (undefined4 *)local_8[uVar4], puVar1 == (undefined4 *)0x0 ||
          (lVar5 = ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_ARG), lVar5 == 0xe0000000)) ||
         (uVar3 = F_00b77250(this GEN_EDX_ARG,param_1,puVar1), (char)uVar3 == '\0'))) {
    uVar4 = uVar4 + 1;
    if (99 < uVar4) {
      return 0;
    }
  }
  uVar4 = F_00a5f330(puVar1);
  *param_3 = uVar4;
  return 1;
}

/* ref: FUN_00b779d0 */
GEN_FRAME byte GEN_THISCALL F_00b779d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb779d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  float10 fVar4;
  float fVar5;
  
  pvVar1 = REFG(void * PTR32, 0x1379694);
  if (REFG(void * PTR32, 0x1379694) == (undefined *)0x0) {
    return 0;
  }
  uVar2 = F_00a5feb0(REFG(void * PTR32, 0x1379694) GEN_EDX_FWD);
  uVar3 = F_00a5feb0(param_1 GEN_EDX_ARG);
  fVar5 = F_00aaea30(uVar3,uVar2);
  fVar4 = (float10)param_2;
  if (param_2 < 0) {
    fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  if ((float10)fVar5 <= fVar4) {
    uVar2 = F_00b77250(this GEN_EDX_ARG,param_1,pvVar1);
    if ((char)uVar2 != '\0') {
      *param_3 = *(undefined4 *)((int)pvVar1 + 0x74);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b77a50 */
GEN_FRAME uint GEN_THISCALL F_00b77a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xb77a50u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  iVar1 = (int)(*(undefined * PTR32 * PTR32 *)&gen_args[2]);
  fVar3 = (float10)(*(float *)&gen_args[3]);
  if ((float10)*((float *)GEN_TOP(((int)(*(undefined * PTR32 * PTR32 *)&gen_args[2]) + 0x560))) < fVar3) {
    *((float *)GEN_TOP(((int)(*(undefined * PTR32 * PTR32 *)&gen_args[2]) + 0x560))) = (*(float *)&gen_args[3]);
    F_00ae2110(((undefined1 *)(gen_frame + 0x18)) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]),(*(float *)&gen_args[3]));
    F_00ae21b0(iVar1,0x158,((undefined1 *)(gen_frame + 0x18)));
    fVar3 = (float10)(*(float *)&gen_args[3]);
  }
  F_00ae2110(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,(*(undefined4 *)&gen_args[1]),(float)fVar3);
  (*(undefined1 * PTR32 *)(gen_frame + 0x24)) = ((undefined1 *)(gen_frame + 0xc));
  (*(undefined * PTR32 * PTR32 *)&gen_args[2]) = (*(undefined * PTR32 (*)[2])REFP(0x10f50ec));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x30)) = (*(undefined * PTR32 (*)[2])REFP(0x10f50f8));
  (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 *)&gen_args[1]);
  (*(undefined4 *)(gen_frame + 0x38)) = (*(undefined4 *)&gen_args[0]);
  (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = &(*(undefined * PTR32 * PTR32 *)&gen_args[2]);
  (*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x2c)) = &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x30));
  uVar2 = F_00ae21f0(iVar1,0x158,&(*(undefined1 * PTR32 *)(gen_frame + 0x24)),3);
  return uVar2;
}

/* ref: FUN_00b77af0 */
GEN_FRAME uint GEN_THISCALL F_00b77af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xb77af0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  if ((float10)*(float *)(param_3 + 0x560) < (float10)param_4) {
    *(float *)(param_3 + 0x560) = param_4;
    F_00ae2110(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_FWD,param_2,param_4);
    F_00ae21b0(param_3,0x158,((undefined1 *)(gen_frame + 0xc)));
  }
  F_00ae2110(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_2,param_4);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 (*)[2])REFP(0x10f50f8));
  (*(undefined4 *)(gen_frame + 0x1c)) = param_2;
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  (*(undefined1 * PTR32 *)(gen_frame + 0x24)) = ((undefined1 *)(gen_frame + 0x0));
  (*(undefined * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x28)) = &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x18));
  uVar1 = F_00ae21f0(param_3,0x158,&(*(undefined1 * PTR32 *)(gen_frame + 0x24)),2);
  return uVar1;
}

/* ref: Client::Game::Think::Behavior::Condition::ConditionFilter::vf1 */
GEN_FRAME uint GEN_THISCALL F_00b77b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb77b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xb8))(param_1 GEN_EDX_FWD);
  if ((char)uVar1 != '\0') {
    uVar1 = F_00b77250(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,*(undefined4 *)(this + 4),param_1);
    return uVar1;
  }
  return uVar1 & 0xffffff00;
}

/* ref: FUN_00b77bd0 */
GEN_NOFRAME byte F_00b77bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb77bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  int * piVar2;
  float * pfVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  
  piVar2 = (int *)F_005f3270(8,*(undefined4 *)((int)param_1 + 0x78),0);
  if (piVar2 != (int *)0x0) {
    if (*(char *)(param_2 + 0x16) == '\x0f') {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x38))(piVar2 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x20)));
    }
    else if (*(char *)(param_2 + 0x16) == '\x10') {
      (*(float *)(gen_frame + 0x38)) = (float)*(int *)(param_2 + 8);
      (*(float *)(gen_frame + 0x3c)) = (float)(int)*(short *)(param_2 + 0x12);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x38))(piVar2 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x20)));
      if ((GEN_ISNAN((*(float *)(gen_frame + 0x38))) == (GEN_ISNAN((*(float *)(gen_frame + 0x38))) || (*(float *)(gen_frame + 0x38)) == 0.0)) ||
         (GEN_ISNAN((*(float *)(gen_frame + 0x3c))) == (GEN_ISNAN((*(float *)(gen_frame + 0x3c))) || (*(float *)(gen_frame + 0x3c)) == 0.0))) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2 GEN_EDX_ARG,((float *)(gen_frame + 0x10)));
        pfVar3 = (float *)F_00b76b10(((undefined1 *)(gen_frame + 0x0)),((float *)(gen_frame + 0x10)),(*(float *)(gen_frame + 0x38)),(*(float *)(gen_frame + 0x3c)));
        (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x20)) + (float10)*pfVar3);
        (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar3[1] + (float10)(*(float *)(gen_frame + 0x24)));
        (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar3[2] + (float10)(*(float *)(gen_frame + 0x28)));
      }
    }
    (*(float *)(gen_frame + 0x38)) = *(float *)((int)param_1 + 0xc0);
    uVar4 = F_00af2610(&(*(float *)(gen_frame + 0x20)),*(float *)&REFG(undefined, 0x133dec8),*(float *)((int)param_1 + 0xc0),&(*(float *)(gen_frame + 0x34))
                         ,REFG(float, 0x10f49a4),0,0,0,0,0,0,0,3,0);
    if ((char)uVar4 != '\0') {
      (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x34));
    }
    pfVar3 = (float *)F_00a5feb0(param_1 GEN_EDX_ARG);
    fVar1 = *pfVar3;
    ((float *)(gen_frame + 0x10))[0] = (float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)fVar1);
    (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x28)) - (float10)pfVar3[2]);
    fVar5 = (float10)(float)((float10)(*(float *)(gen_frame + 0x28)) - (float10)pfVar3[2]);
    fVar6 = (float10)(float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)fVar1);
    fVar1 = (float)(fVar6 * fVar6 + fVar5 * fVar5);
    (*(float *)(gen_frame + 0x34)) = fVar1;
    fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
    (*(float *)(gen_frame + 0x34)) = fVar1;
    if (!((float10)fVar1 < (float10)REFG(float, 0x10920a4))) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b77d70 */
GEN_NOFRAME byte F_00b77d70(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb77d70u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  float fVar2;
  int iVar3;
  int * piVar4;
  float * pfVar5;
  float10 fVar6;
  float fVar7;
  
  (*(byte *)(gen_frame + 0x6f)) = 0;
  piVar4 = (int *)F_005f3270(8,*(undefined4 *)((int)param_1 + 0x78),0);
  if (piVar4 != (int *)0x0) {
    (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1375ac0);
    (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1375ac4);
    (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1375ac8);
    if ((GEN_ISNAN(param_2) == (GEN_ISNAN(param_2) || param_2 == 0.0)) ||
       (GEN_ISNAN(param_3) == (GEN_ISNAN(param_3) || param_3 == 0.0))) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x3c))(piVar4 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x10)));
      iVar3 = *piVar4;
      (*(float *)(gen_frame + 0x40)) = REFG(float, 0x1375ac0);
      (*(float *)(gen_frame + 0x44)) = REFG(float, 0x1375ac4);
      (*(float *)(gen_frame + 0x48)) = REFG(float, 0x1375ac8);
      ((code *)*(gen_code32 *)(iVar3 + 0x38))(piVar4,&(*(float *)(gen_frame + 0x40)));
      pfVar5 = (float *)F_00b76b10(((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x10)),param_2,param_3);
      (*(float *)(gen_frame + 0x20)) = (float)((float10)*pfVar5 + (float10)(*(float *)(gen_frame + 0x40)));
      (*(float *)(gen_frame + 0x24)) = (float)((float10)pfVar5[1] + (float10)(*(float *)(gen_frame + 0x44)));
      (*(float *)(gen_frame + 0x28)) = (float)((float10)pfVar5[2] + (float10)(*(float *)(gen_frame + 0x48)));
      (*(float *)(gen_frame + 0x50)) = (float)((float10)*pfVar5 + (float10)(*(float *)(gen_frame + 0x40)));
      (*(float *)(gen_frame + 0x54)) = (float)((float10)pfVar5[1] + (float10)(*(float *)(gen_frame + 0x44)));
      (*(float *)(gen_frame + 0x58)) = (float)((float10)pfVar5[2] + (float10)(*(float *)(gen_frame + 0x48)));
    }
    pfVar5 = (float *)F_00a5feb0(param_1 GEN_EDX_ARG);
    fVar7 = (float)((float10)(*(float *)(gen_frame + 0x50)) - (float10)*pfVar5);
    (*(float *)(gen_frame + 0x20)) = fVar7;
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0x54)) - (float10)pfVar5[1]);
    (*(float *)(gen_frame + 0x24)) = fVar1;
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0x58)) - (float10)pfVar5[2]);
    (*(float *)(gen_frame + 0x28)) = fVar2;
    (*(float *)(gen_frame + 0x30)) = fVar7;
    (*(float *)(gen_frame + 0x34)) = fVar1;
    (*(float *)(gen_frame + 0x38)) = fVar2;
    fVar7 = ((float)GEN_TOF((((float10)fVar7 * (float10)fVar7 + (float10)fVar1 * (float10)fVar1) +
                   (float10)fVar2 * (float10)fVar2)));
    (*(float *)(gen_frame + 0x68)) = fVar7;
    fVar7 = ((float)GEN_TOF(SQRT((float10)fVar7)));
    (*(float *)(gen_frame + 0x68)) = fVar7;
    if ((float10)*(float *)&REFG(undefined, 0x10f50c8) < (float10)fVar7) {
      (*(float *)(gen_frame + 0x68)) = *(float *)((int)param_1 + 0xb0);
      fVar7 = F_00aae900(&(*(float *)(gen_frame + 0x30)));
      fVar6 = (float10)(*(float *)(gen_frame + 0x68));
      (*(float *)(gen_frame + 0x68)) = (float)((float10)fVar7 - fVar6);
      fVar6 = F_00aae710((float)((float10)fVar7 - fVar6));
      (*(float *)(gen_frame + 0x68)) = ((float)GEN_TOF(ABS(fVar6)));
      if ((float10)*(float *)&REFG(undefined, 0x10f5100) < (float10)((float)GEN_TOF(ABS(fVar6)))) {
        *param_4 = (*(float *)(gen_frame + 0x30));
        param_4[1] = (*(float *)(gen_frame + 0x34));
        param_4[2] = (*(float *)(gen_frame + 0x38));
        return 1;
      }
    }
  }
  return (*(byte *)(gen_frame + 0x6f));
}

/* ref: FUN_00b77f50 */
GEN_FRAME byte F_00b77f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb77f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  byte bVar1;
  uint uVar2;
  
  bVar1 = 1;
  if ((*(char *)(param_2 + 0x16) != '\0') || (*(short *)(param_2 + 0xc) != 0)) {
    uVar2 = (uint)*(byte *)(param_2 + 0x14);
    if (uVar2 != 0) {
      if (uVar2 != 1) {
        return uVar2 != param_4;
      }
      return param_1 != param_3;
    }
    bVar1 = 0;
  }
  return bVar1;
}

/* ref: FUN_00b77f90 */
GEN_FRAME uint F_00b77f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb77f90u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *param_3;
  param_3[2] = param_2;
  iVar3 = 0;
  do {
    uVar2 = F_00ab2990(uVar1,iVar3);
    if ((uVar2 != 0) && (*(char *)(uVar2 + 0x14) == (char)param_2)) goto LAB_00b77fc3;
    iVar3 = iVar3 + 1;
  } while (uVar2 != 0);
  iVar3 = 0;
LAB_00b77fc3: ;
  param_3[1] = iVar3;
  *(undefined4 *)(param_1 + 0x1340) = 0;
  *(undefined4 *)(param_1 + 0x1344) = 0;
  *(undefined4 *)(param_1 + 0x1348) = 0;
  *(undefined4 *)(param_1 + 0x134c) = 0;
  return param_1;
}

/* ref: FUN_00b78000 */
GEN_FRAME uint GEN_THISCALL F_00b78000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb78000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  float fVar3;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0xe0000000) || (*(int *)((int)this + 4) != 0)) {
    fVar3 = ((float)GEN_TOF(((float10)*(float *)((int)this + 8) - (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))))
    ;
    *(float *)((int)this + 8) = fVar3;
    if ((*(char *)((int)this + 0x10) != '\0') && (fVar3 <= 0.0)) {
      *(undefined4 *)this = 0xe0000000;
      *(undefined4 *)((int)this + 4) = 0;
      return uVar1;
    }
    if (uVar1 != 0xe0000000) {
      this_00 = (undefined *)F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_FWD,uVar1,*(int *)((int)this + 4));
      uVar1 = 0;
      if (this_00 != (undefined *)0x0) {
        uVar1 = F_00a5feb0(param_1 GEN_EDX_ARG);
        uVar2 = F_00a5feb0(this_00 GEN_EDX_ARG);
        fVar3 = F_00aaea30(uVar2,uVar1);
        uVar1 = extraout_EAX;
        if (!((float10)*(float *)((int)this + 0xc) <= (float10)fVar3)) {
          return extraout_EAX;
        }
      }
    }
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)this = 0xe0000000;
  }
  return uVar1;
}

/* ref: FUN_00b780b0 */
GEN_NOFRAME byte GEN_THISCALL F_00b780b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb780b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  undefined * pvVar4;
  float * pfVar5;
  float * pfVar6;
  float fVar7;
  undefined4 uVar8;
  
  if (param_2 != -0x20000000) {
    pvVar4 = (undefined *)F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_FWD,param_2,param_3);
    (*(undefined * PTR32 *)(gen_frame + 0x2c)) = pvVar4;
    if (pvVar4 != (undefined *)0x0) {
      pfVar5 = (float *)F_00a5feb0(param_1 GEN_EDX_ARG);
      pfVar6 = (float *)F_00a5feb0((*(undefined * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG);
      uVar8 = 0;
      (*(float *)(gen_frame + 0x10)) = (float)((float10)*pfVar6 - (float10)*pfVar5);
      fVar7 = pfVar6[1];
      fVar1 = pfVar5[1];
      (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar7 - (float10)fVar1);
      fVar2 = pfVar6[2];
      fVar3 = pfVar5[2];
      (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar2 - (float10)fVar3);
      (*(float *)(gen_frame + 0x0)) = (float)((float10)*pfVar6 - (float10)*pfVar5);
      (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar7 - (float10)fVar1);
      (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar2 - (float10)fVar3);
      fVar7 = F_00aae900(&(*(float *)(gen_frame + 0x0)));
      F_00a9f850(param_1 GEN_EDX_ARG,fVar7,uVar8);
      *(undefined1 *)((int)this + 0x1c) = 2;
      *(undefined4 *)((int)this + 0x10) = 0;
      return 1;
    }
  }
  *(undefined1 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x10) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x10), REFG(float, 0x10f50cc));
  return 0;
}

/* ref: FUN_00b78180 */
GEN_NOFRAME uint GEN_THISCALL F_00b78180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb78180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float * pfVar6;
  float * pfVar7;
  uint uVar8;
  undefined1 uVar9;
  undefined * this_00;
  float fVar10;
  
  *(int *)((int)this + 0x14) = param_2[2];
  iVar4 = *param_2;
  this_00 = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  if ((iVar4 != -0x20000000) && (iVar4 != -0x20000000)) {
    this_00 = (undefined *)F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_FWD,iVar4,0);
  }
  pfVar6 = (float *)0x0;
  (*(float *)(gen_frame + 0x2c)) = 0.0;
  if ((this_00 != (undefined *)0x0) && (param_2[1] != 0x15)) {
    pfVar6 = (float *)F_00a5feb0(param_1 GEN_EDX_ARG);
    pfVar7 = (float *)F_00a5feb0(this_00 GEN_EDX_ARG);
    (*(float *)(gen_frame + 0x10)) = (float)((float10)*pfVar7 - (float10)*pfVar6);
    fVar10 = pfVar7[1];
    fVar1 = pfVar6[1];
    (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar10 - (float10)fVar1);
    fVar2 = pfVar7[2];
    fVar3 = pfVar6[2];
    (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar2 - (float10)fVar3);
    (*(float *)(gen_frame + 0x0)) = (float)((float10)*pfVar7 - (float10)*pfVar6);
    (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar10 - (float10)fVar1);
    (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar2 - (float10)fVar3);
    fVar10 = F_00aae900(&(*(float *)(gen_frame + 0x0)));
    (*(float *)(gen_frame + 0x2c)) = fVar10;
    pfVar6 = &(*(float *)(gen_frame + 0x2c));
  }
  if ((param_2[1] == 3) || (param_2[1] == 0x15)) {
    uVar9 = 1;
  }
  else {
    uVar9 = 0;
  }
  (*(undefined1 *)(gen_frame + 0x26)) = uVar9;
  (*(undefined2 *)(gen_frame + 0x24)) = 0;
  uVar5 = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x14);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 (*)[1])REFP(0x109c984));
  uVar8 = F_00aa0000(param_1 GEN_EDX_ARG,uVar5,pfVar6,0,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x20)),0);
  if (this_00 != (undefined *)0x0) {
    F_00bf0ae0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x44) GEN_EDX_ARG,param_2);
    uVar8 = F_00bc8170((int)param_1 + 0x1570 GEN_EDX_ARG,param_2[4],*param_2);
  }
  return uVar8;
}

/* ref: FUN_00b782a0 */
GEN_FRAME uint GEN_STDCALL F_00b782a0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xb782a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined2 *)(gen_frame + 0x2c)) = 0;
  (*(undefined1 *)(gen_frame + 0x2e)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined1 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined1 *)(gen_frame + 0x2f)) = 1;
  (*(undefined4 *)(gen_frame + 0x28)) = 1;
  (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f49a4)));
  fVar1 = param_2[2];
  (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f49a4)));
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f49a4)));
  fVar2 = param_2[1];
  (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f49a4)));
  (*(undefined4 *)(gen_frame + 0x1c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f49a4)));
  fVar3 = *param_2;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  uVar4 = F_00a9f7c0(param_1 GEN_EDX_ARG,fVar3,fVar2,fVar1,param_3,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  return uVar4;
}

/* ref: FUN_00b78330 */
GEN_FRAME ushort GEN_THISCALL F_00b78330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb78330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  ushort uVar1;
  
  uVar1 = (ushort)param_2;
  if ((ushort)param_3 != 0) {
    uVar1 = (ushort)param_3;
  }
  if ((char)param_4 != '\0') {
    *(undefined1 *)((int)this + 0x21) = 0;
    F_00b76cb0(this GEN_EDX_FWD);
    if ((ushort)param_3 == 0) {
      F_00aa05b0(param_1 GEN_EDX_ARG);
      F_00aa2cc0(param_1 GEN_EDX_ARG,0);
    }
  }
  return uVar1;
}

/* ref: FUN_00b78380 */
GEN_NOFRAME uint GEN_THISCALL F_00b78380(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb78380u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  *(undefined4 *)(in_ecx + 0x18) = 0;
  *(undefined2 *)(in_ecx + 0x20) = 1;
  uVar1 = F_00b76cb0(in_ecx GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00b78390 */
GEN_FRAME uint GEN_THISCALL F_00b78390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb78390u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 uVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = param_3;
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0xe0000000;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  uVar5 = *(uint *)param_3;
  if (uVar5 != 0xe0000000) {
    uVar4 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_FWD,uVar5,0);
    fVar2 = REFG(float, 0x10a509c);
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar1 = *(undefined4 *)param_3;
      *(undefined4 *)(param_1 + 0x30) = 0;
      param_3 = *(uint *)(param_1 + 0x34);
      *(undefined4 *)(param_1 + 0x28) = uVar1;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined1 *)(param_1 + 0x38) = 0;
      if (gen_bits2f(param_3) <= fVar2) {
        param_3 = (uint)gen_fl2bits((float)(REFG(float, 0x1094880)));
      }
      *(float *)(param_1 + 0x34) = (float)(((float10)GEN_TOD(gen_bits2f(param_3))) + (float10)REFG(double, 0x1094800));
      uVar5 = F_00bc8170(param_2 + 0x1570 GEN_EDX_ARG,*(undefined4 *)(uVar3 + 0x10),*(undefined4 *)uVar3);
    }
  }
  return uVar5;
}

/* ref: FUN_00b78440 */
GEN_FRAME uint GEN_THISCALL F_00b78440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb78440u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 uVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = param_3;
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0xe0000000;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  uVar5 = *(uint *)param_3;
  if (uVar5 != 0xe0000000) {
    uVar4 = F_00a354d0(&REFG(undefined4, 0x14a31f0) GEN_EDX_FWD,uVar5,0);
    fVar2 = REFG(float, 0x10a509c);
    uVar5 = 0;
    if (uVar4 != 0) {
      uVar1 = *(undefined4 *)param_3;
      *(float *)(param_1 + 0x30) = (float)*(int *)(param_3 + 8);
      param_3 = *(uint *)(param_1 + 0x34);
      *(undefined4 *)(param_1 + 0x28) = uVar1;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined1 *)(param_1 + 0x38) = 1;
      if (gen_bits2f(param_3) <= fVar2) {
        param_3 = (uint)gen_fl2bits((float)(REFG(float, 0x1094880)));
      }
      *(float *)(param_1 + 0x34) = (float)(((float10)GEN_TOD(gen_bits2f(param_3))) + (float10)REFG(double, 0x1094800));
      uVar5 = F_00bc8170(param_2 + 0x1570 GEN_EDX_ARG,*(undefined4 *)(uVar3 + 0x10),*(undefined4 *)uVar3);
    }
  }
  return uVar5;
}

/* ref: FUN_00b784f0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b784f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb784f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  float fVar2;
  
  if (((param_2 != (int *)0x0) && ((char)param_3 == '\x01')) && ((char)param_4 == '\0')) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 4))(param_2 GEN_EDX_FWD);
    if ((uVar1 == 3) && (*(char *)(param_1 + 0x1c) == '\x04')) {
      fVar2 = gen_bits2f(param_2[0x2c]);
      uVar1 = F_00a5feb0(param_2 GEN_EDX_ARG);
      F_00b782a0(param_2,uVar1,fVar2);
      *(undefined1 *)(param_1 + 0x220) = 1;
    }
  }
  return;
}

/* ref: FUN_00b78550 */
GEN_FRAME float10 GEN_STDCALL F_00b78550(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xb78550u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  float fVar1;
  float * pfVar2;
  float10 fVar3;
  
  fVar3 = F_00a9fad0((*(uint *)&gen_args[0]) GEN_EDX_ARG);
  (*(uint *)&gen_args[0]) = (uint)gen_fl2bits((float)fVar3);
  pfVar2 = (float *)&(*(uint *)&gen_args[0]);
  if (!((float10)1 < (float10)(float)fVar3)) {
    pfVar2 = (float *)&REFG(undefined4, 0x10f50c0);
  }
  fVar1 = *pfVar2;
  pfVar2 = (float *)&(*(uint *)&gen_args[0]);
  (*(uint *)&gen_args[0]) = (uint)gen_fl2bits((float)((float10)fVar1 * (float10)(*(float *)&gen_args[1])));
  if (!((float10)(float)((float10)fVar1 * (float10)(*(float *)&gen_args[1])) < (float10)REFG(float, 0x10f50c4))) {
    pfVar2 = &REFG(float, 0x10f50c4);
  }
  fVar1 = *pfVar2;
  return (float10)fVar1;
}

/* ref: FUN_00b785a0 */
GEN_NOFRAME uint GEN_STDCALL F_00b785a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb785a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  float * pfVar4;
  uint uVar5;
  float fVar6;
  undefined * PTR32 * PTR32 * pppuVar7;
  
  pfVar4 = (float *)F_00a5feb0(param_1 GEN_EDX_ARG);
  fVar6 = *param_2;
  (*(float *)(gen_frame + 0x6c)) = fVar6;
  uVar3 = *param_3;
  (*(float *)(gen_frame + 0x50)) = (float)((float10)fVar6 - (float10)*pfVar4);
  fVar1 = param_2[2];
  (*(float *)(gen_frame + 0x68)) = fVar1;
  fVar2 = pfVar4[2];
  (*(float *)(gen_frame + 0x58)) = (float)((float10)fVar1 - (float10)fVar2);
  (*(float *)(gen_frame + 0x10)) = REFG(float, 0x10f49a4);
  (*(float *)(gen_frame + 0x14)) = REFG(float, 0x10f49a4);
  ((float *)(gen_frame + 0x40))[0] = (float)((float10)fVar6 - (float10)*pfVar4);
  (*(float *)(gen_frame + 0x18)) = REFG(float, 0x10f49a4);
  (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x10f49a4);
  ((float *)(gen_frame + 0x40))[2] = (float)((float10)fVar1 - (float10)fVar2);
  (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f50d0)));
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = 0;
  (*(undefined1 *)(gen_frame + 0x32)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(float *)(gen_frame + 0x50)) = fVar6;
  (*(float *)(gen_frame + 0x54)) = param_2[1];
  ((float *)(gen_frame + 0x40))[1] = 0.0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined1 *)(gen_frame + 0x33)) = uVar3;
  (*(undefined1 *)(gen_frame + 0x38)) = 1;
  (*(undefined4 *)(gen_frame + 0x2c)) = 3;
  (*(float *)(gen_frame + 0x58)) = fVar1;
  (*(float *)(gen_frame + 0x64)) = 0.0;
  uVar5 = F_00a9fa80(param_1 GEN_EDX_ARG,param_2,&(*(float *)(gen_frame + 0x64)),(float)(float10)0,REFG(float, 0x10f49a4),0,1);
  if ((char)uVar5 != '\0') {
    (*(float *)(gen_frame + 0x54)) = (*(float *)(gen_frame + 0x64));
  }
  pppuVar7 = &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc));
  fVar6 = F_00aae900(((float *)(gen_frame + 0x40)));
  uVar5 = F_00a9f7c0(param_1 GEN_EDX_ARG,(*(float *)(gen_frame + 0x50)),(*(float *)(gen_frame + 0x54)),(*(float *)(gen_frame + 0x58)),fVar6,pppuVar7);
  return uVar5;
}

/* ref: FUN_00b78700 */
GEN_FRAME uint GEN_THISCALL F_00b78700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb78700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x1a0];
  float fVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  uint uVar5;
  
  uVar4 = 0;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0xc))) {
  case 0xe: ;
  case 0x10: ;
    fVar1 = REFG(float, 0x10a509c);
    break;
  case 0xf: ;
  case 0x11: ;
    fVar1 = REFG(float, 0x1094880);
    break;
  default: ;
    goto switchD_00b78721_default;
  }
  uVar4 = F_00b77a50(this GEN_EDX_FWD,param_1,param_3,fVar1);
switchD_00b78721_default: ;
  iVar2 = REFG(int, 0x1379694);
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0xc))) {
  case 0: ;
    *param_2 = 0xe0000000;
    uVar4 = F_00b77250(this GEN_EDX_ARG,param_1,0);
    return uVar4;
  case 1: ;
    *param_2 = *(uint *)(param_1 + 0x74);
    uVar4 = F_00b77250(this GEN_EDX_ARG,param_1,param_1);
    return uVar4;
  case 2: ;
    uVar4 = F_00b76280(param_1);
    uVar5 = F_00a5f330(uVar4);
    *param_2 = uVar5;
    uVar4 = F_00b77250(this GEN_EDX_ARG,param_1,uVar4);
    return uVar4;
  case 3: ;
    uVar4 = F_00b76310(param_1);
    uVar5 = F_00a5f330(uVar4);
    *param_2 = uVar5;
    uVar4 = F_00b77250(this GEN_EDX_ARG,param_1,uVar4);
    return uVar4;
  case 4: ;
    bVar3 = F_00b77930(this GEN_EDX_ARG,param_1,5,param_2);
    return CONCAT31(extraout_var,bVar3);
  case 5: ;
    bVar3 = F_00b77930(this GEN_EDX_ARG,param_1,10,param_2);
    return CONCAT31(extraout_var_00,bVar3);
  case 7: ;
    uVar5 = F_00b77af0(this GEN_EDX_ARG,param_1,param_3,REFG(float, 0x1094880));
    uVar4 = 0;
    if (uVar5 == 0) break;
    uVar4 = *(uint *)(uVar5 + 0x74);
    *param_2 = uVar4;
  default: ;
    return CONCAT31((int3)(uVar4 >> 8),1);
  case 8: ;
    fVar1 = REFG(float, 0x10a509c);
    goto LAB_00b78822;
  case 9: ;
    fVar1 = REFG(float, 0x1094880);
LAB_00b78822: ;
    uVar4 = F_00b76390(param_1,fVar1,((undefined1 *)(gen_frame + 0xc)),100);
    return (uint)(uVar4 == 0);
  case 10: ;
    bVar3 = F_00b779d0(this GEN_EDX_ARG,param_1,5,param_2);
    return CONCAT31(extraout_var_01,bVar3);
  case 0xb: ;
    bVar3 = F_00b779d0(this GEN_EDX_ARG,param_1,10,param_2);
    return CONCAT31(extraout_var_02,bVar3);
  case 0xc: ;
    bVar3 = F_00b779d0(this GEN_EDX_ARG,param_1,5,param_2);
    return CONCAT31(extraout_var_03,bVar3 == 0);
  case 0xd: ;
    bVar3 = F_00b779d0(this GEN_EDX_ARG,param_1,10,param_2);
    return CONCAT31(extraout_var_04,bVar3 == 0);
  case 0xe: ;
  case 0xf: ;
    if (uVar4 != 0) {
      *param_2 = *(uint *)(uVar4 + 0x74);
      return CONCAT31((int3)((uint)((int)(uintptr_t)param_2) >> 8),1);
    }
    break;
  case 0x10: ;
  case 0x11: ;
    *param_2 = 0xe0000000;
    return CONCAT31((int3)(uVar4 >> 8),uVar4 == 0);
  case 0x12: ;
    if ((REFG(int, 0x1379694) != 0) &&
       (uVar4 = F_00b77250(this GEN_EDX_ARG,param_1,REFG(int, 0x1379694)), (char)uVar4 != '\0')) {
      *param_2 = *(uint *)(iVar2 + 0x74);
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return uVar4 & 0xffffff00;
}

/* ref: FUN_00b789a0 */
GEN_NOFRAME byte F_00b789a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb789a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  byte bVar2;
  
  (*(float *)(gen_frame + 0x1c)) = gen_bits2f((int)*(short *)(param_2 + 0x12));
  (*(float *)(gen_frame + 0x18)) = (float)*(int *)(param_2 + 8);
  fVar1 = (float)(int)*(short *)(param_2 + 0x12);
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  bVar2 = F_00b77d70(param_1,(float)*(int *)(param_2 + 8),fVar1,((undefined1 *)(gen_frame + 0x0)));
  return bVar2;
}

/* ref: FUN_00b78a00 */
GEN_FRAME byte F_00b78a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xb78a00u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  char cVar1;
  byte bVar2;
  uint uVar3;
  
  cVar1 = *(char *)(param_2 + 0x16);
  bVar2 = 1;
  if ((((cVar1 == '\x02') || (cVar1 == '\x03')) || (cVar1 == '\x14')) || (cVar1 == '\x15')) {
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG);
    if ((uVar3 != 2) || (uVar3 = F_00a9fbf0(param_1 GEN_EDX_ARG), (char)uVar3 == '\0')) {
      return 1;
    }
  }
  else {
    switch((unsigned int)(uintptr_t)(cVar1)) {
    case '\x01': ;
      uVar3 = F_00aa0580(param_1 GEN_EDX_ARG,0);
      return *(uint *)(param_2 + 8) != uVar3;
    default: ;
      goto switchD_00b78a4f_caseD_2;
    case '\t': ;
    case '\n': ;
    case '\v': ;
    case '\f': ;
      bVar2 = F_00b79b90(param_1 + 0x4d0 GEN_EDX_ARG);
      return bVar2 == 0;
    case '\x0f': ;
    case '\x10': ;
      bVar2 = F_00b77bd0(param_1,param_2);
      return bVar2;
    case '\x11': ;
      bVar2 = F_00b789a0(param_1,param_2);
      return bVar2;
    case '\x13': ;
      if ((*(int *)(param_2 + 8) != 0) && (bVar2 = F_00b79b90(param_1 + 0x4d0 GEN_EDX_ARG), bVar2 == 0)) {
        return 1;
      }
    }
  }
  bVar2 = 0;
switchD_00b78a4f_caseD_2: ;
  return bVar2;
}

/* ref: FUN_00b78af0 */
GEN_FRAME byte GEN_THISCALL F_00b78af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb78af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined1 *)((int)this + 0x1c) = 1;
  *(undefined4 *)((int)this + 0x10) = 0;
  F_00b78180(this GEN_EDX_FWD,param_1,param_2);
  return 1;
}

/* ref: FUN_00b78b20 */
GEN_FRAME byte GEN_THISCALL F_00b78b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb78b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined1 *)((int)this + 0x1c) = 1;
  *(undefined4 *)((int)this + 0x10) = 0;
  F_00b78180(this GEN_EDX_FWD,param_1,param_2);
  return 1;
}

/* ref: FUN_00b78b50 */
GEN_NOFRAME byte GEN_THISCALL F_00b78b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb78b50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  float fVar2;
  int * piVar3;
  float * pfVar4;
  uint uVar5;
  float fVar6;
  
  piVar3 = (int *)F_005f3270(8,*(undefined4 *)((int)param_1 + 0x78),0);
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  if (*(int *)(param_2 + 4) == 0xf) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x38))(piVar3 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x30)));
  }
  else if (*(int *)(param_2 + 4) == 0x10) {
    (*(float *)(gen_frame + 0x48)) = (float)*(int *)(param_2 + 8);
    (*(float *)(gen_frame + 0x4c)) = (float)*(int *)(param_2 + 0xc);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x38))(piVar3 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x30)));
    if ((GEN_ISNAN((*(float *)(gen_frame + 0x48))) == (GEN_ISNAN((*(float *)(gen_frame + 0x48))) || (*(float *)(gen_frame + 0x48)) == 0.0)) ||
       (GEN_ISNAN((*(float *)(gen_frame + 0x4c))) == (GEN_ISNAN((*(float *)(gen_frame + 0x4c))) || (*(float *)(gen_frame + 0x4c)) == 0.0))) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar3 + 0x3c))(piVar3 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x20)));
      pfVar4 = (float *)F_00b76b10(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x20)),(*(float *)(gen_frame + 0x48)),(*(float *)(gen_frame + 0x4c)));
      (*(float *)(gen_frame + 0x30)) = (float)((float10)*pfVar4 + (float10)(*(float *)(gen_frame + 0x30)));
      (*(float *)(gen_frame + 0x34)) = (float)((float10)pfVar4[1] + (float10)(*(float *)(gen_frame + 0x34)));
      (*(float *)(gen_frame + 0x38)) = (float)((float10)pfVar4[2] + (float10)(*(float *)(gen_frame + 0x38)));
    }
  }
  (*(float *)(gen_frame + 0x48)) = *(float *)((int)param_1 + 0xc0);
  uVar5 = F_00af2610(&(*(float *)(gen_frame + 0x30)),*(float *)&REFG(undefined, 0x133dec8),*(float *)((int)param_1 + 0xc0),&(*(float *)(gen_frame + 0x44)),
                       REFG(float, 0x10f49a4),0,0,0,0,0,0,0,3,0);
  if ((char)uVar5 != '\0') {
    (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x44));
  }
  pfVar4 = (float *)F_00a5feb0(param_1 GEN_EDX_ARG);
  fVar6 = *pfVar4;
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)fVar6);
  fVar1 = pfVar4[1];
  (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)fVar1);
  fVar2 = pfVar4[2];
  (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)fVar2);
  (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)fVar6);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)fVar1);
  (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)fVar2);
  uVar5 = F_0046f390(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG);
  fVar6 = F_00aae900(uVar5);
  (*(float *)(gen_frame + 0x48)) = fVar6;
  F_00b782a0(param_1,&(*(float *)(gen_frame + 0x30)),fVar6);
  *(float *)((int)this + 0x21c) = (*(float *)(gen_frame + 0x48));
  *(float *)((int)this + 0x210) = (*(float *)(gen_frame + 0x30));
  *(float *)((int)this + 0x214) = (*(float *)(gen_frame + 0x34));
  *(float *)((int)this + 0x218) = (*(float *)(gen_frame + 0x38));
  *(undefined1 *)((int)this + 0x220) = 0;
  *(undefined1 *)((int)this + 0x1c) = 4;
  return 1;
}

/* ref: FUN_00b78d40 */
GEN_NOFRAME byte GEN_THISCALL F_00b78d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb78d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  float10 fVar5;
  float fVar6;
  
  iVar1 = *(int *)(param_2 + 8);
  (*(float *)(gen_frame + 0x18)) = (float)iVar1;
  iVar2 = *(int *)(param_2 + 0xc);
  (*(float *)(gen_frame + 0x1c)) = (float)iVar2;
  (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c90)));
  (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c94)));
  (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1302c98)));
  bVar3 = F_00b77d70(param_1,(float)iVar1,(float)iVar2,&(*(undefined4 *)(gen_frame + 0x0)));
  if (bVar3 != 0) {
    fVar6 = F_00aae900(&(*(undefined4 *)(gen_frame + 0x0)));
    fVar5 = F_00aae710(fVar6);
    fVar6 = (float)fVar5;
    (*(float *)(gen_frame + 0x18)) = fVar6;
    uVar4 = F_00a5feb0(param_1 GEN_EDX_ARG);
    F_00b782a0(param_1,uVar4,fVar6);
    *(undefined1 *)((int)this + 0x1c) = 2;
    return 1;
  }
  return 0;
}

/* ref: FUN_00b78e00 */
GEN_NOFRAME byte GEN_STDCALL F_00b78e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb78e00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  uint uVar2;
  float * pfVar3;
  undefined4 * puVar4;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG);
  if (((int)(param_2 & 0xff) < (int)uVar2) && ((byte)param_3 < 0x10)) {
    ((float *)(gen_frame + 0x14))[2] = gen_bits2f((uint)(byte)param_3);
    ((float *)(gen_frame + 0x14))[1] = gen_bits2f(REFG(float, 0x10f50cc));
    ((float *)(gen_frame + 0x14))[0] = 0.0;
    pfVar3 = ((float *)(gen_frame + 0x14)) + 2;
    fVar1 = (float)((float10)(byte)param_3 / (float10)*(double *)&REFG(undefined, 0x1094560));
    ((float *)(gen_frame + 0x14))[2] = fVar1;
    if (!((float10)fVar1 < (float10)1)) {
      pfVar3 = ((float *)(gen_frame + 0x14)) + 1;
    }
    if (!(0.0 < *pfVar3)) {
      pfVar3 = ((float *)(gen_frame + 0x14));
    }
    puVar4 = (undefined4 *)F_00b66960(param_1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),*pfVar3,param_2 & 0xff);
    *param_4 = *puVar4;
    param_4[1] = puVar4[1];
    param_4[2] = puVar4[2];
    return 1;
  }
  return 0;
}

/* ref: FUN_00b78ec0 */
GEN_NOFRAME byte GEN_THISCALL F_00b78ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb78ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  float10 fVar5;
  
  (*(byte *)(gen_frame + 0x2c)) = 1;
  if ((*(int *)this != 0) && (*(int *)((int)this + 0xc) == 0)) {
    uVar4 = F_005f3270(0x41,*(int *)this,0);
    if (uVar4 != 0) {
      *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(uVar4 + 0x60);
    }
  }
  piVar2 = *(int * PTR32 *)((int)this + 0xc);
  if (piVar2 != (int *)0x0) {
    bVar3 = *(byte *)((int)this + 5);
    (*(byte * PTR32 *)(gen_frame + 0x28)) = (byte *)((int)this + 4);
    bVar1 = *(byte *)((int)this + 4);
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    bVar3 = F_00b78e00(piVar2,(uint)bVar1,(uint)bVar3,&(*(undefined4 *)(gen_frame + 0x10)));
    if (bVar3 != 0) {
      (*(byte *)(gen_frame + 0x2c)) = 0;
      uVar4 = F_00a5feb0(param_1 GEN_EDX_ARG);
      fVar5 = F_00aaea90((uint)&(*(undefined4 *)(gen_frame + 0x10)),uVar4);
      if (fVar5 < (float10)*(float *)&REFG(undefined, 0x10f50bc)) {
        F_00b76ec0(piVar2,(*(byte * PTR32 *)(gen_frame + 0x28)),(int)this + 5);
        bVar3 = F_00b78e00(piVar2,(uint)*(*(byte * PTR32 *)(gen_frame + 0x28)),(uint)*(byte *)((int)this + 5),&(*(undefined4 *)(gen_frame + 0x10)));
        (*(byte *)(gen_frame + 0x2c)) = bVar3;
      }
      uVar4 = F_00ab29f0((uint)*(byte *)((int)this + 6));
      (*(uint *)(gen_frame + 0x20)) = uVar4;
      if ((*(byte *)((int)this + 7) < 4) && ((*(byte *)(gen_frame + 0x2c)) == 0)) {
        *(byte *)((int)this + 7) = *(byte *)((int)this + 7) + 1;
      }
      else {
        (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(REFG(int, 0x137104c) + 0x1198);
        F_00b76f10(((undefined1 *)(gen_frame + 0x0)),param_1,*(undefined4 *)(REFG(int, 0x137104c) + 0x1198),&(*(undefined4 *)(gen_frame + 0x10)));
        if ((*(uint *)(gen_frame + 0x20)) != 0) {
          F_00b785a0(param_1,((undefined1 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x24)));
        }
        *(undefined1 *)((int)this + 7) = 0;
      }
      if ((*(uint *)(gen_frame + 0x20)) != 0) {
        F_00b77030(param_1,piVar2,(uint)*(*(byte * PTR32 *)(gen_frame + 0x28)),(*(uint *)(gen_frame + 0x20)));
      }
      (*(byte *)(gen_frame + 0x2c)) = *(*(byte * PTR32 *)(gen_frame + 0x28));
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2 GEN_EDX_ARG);
      return (int)uVar4 <= (int)(uint)(*(byte *)(gen_frame + 0x2c));
    }
  }
  return (*(byte *)(gen_frame + 0x2c));
}

/* ref: FUN_00b79060 */
GEN_NOFRAME byte GEN_THISCALL F_00b79060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb79060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  code * pcVar2;
  byte bVar3;
  uint uVar4;
  float fVar5;
  undefined4 uVar6;
  
  if ((param_2 != 0) && (*(int *)((int)this + 0xc) == 0)) {
    uVar4 = F_005f3270(0x41,param_2,0);
    if (uVar4 != 0) {
      *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(uVar4 + 0x60);
    }
  }
  piVar1 = *(int * PTR32 *)((int)this + 0xc);
  if (piVar1 != (int *)0x0) {
    pcVar2 = *(gen_code32 *)(*piVar1 + 0x10);
    ((float *)(gen_frame + 0x20))[0] = 0.0;
    (*(float *)(gen_frame + 0x28)) = 0.0;
    uVar4 = (*pcVar2)(piVar1);
    if (1 < (int)uVar4) {
      bVar3 = F_00b78e00(piVar1,0,1,((float *)(gen_frame + 0x20)));
      if (bVar3 != 0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG,&(*(float *)(gen_frame + 0x30)),0);
        uVar6 = 0;
        (*(float *)(gen_frame + 0x10)) = (float)((float10)((float *)(gen_frame + 0x20))[0] - (float10)(*(float *)(gen_frame + 0x30)));
        ((float *)(gen_frame + 0x0))[1] = 0.0;
        (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x28)) - (float10)(*(float *)(gen_frame + 0x38)));
        ((float *)(gen_frame + 0x0))[0] = (float)((float10)((float *)(gen_frame + 0x20))[0] - (float10)(*(float *)(gen_frame + 0x30)));
        ((float *)(gen_frame + 0x0))[2] = (float)((float10)(*(float *)(gen_frame + 0x28)) - (float10)(*(float *)(gen_frame + 0x38)));
        fVar5 = F_00aae900(((float *)(gen_frame + 0x0)));
        F_00a9f980(param_1 GEN_EDX_ARG,(*(float *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x34)),(*(float *)(gen_frame + 0x38)),fVar5,uVar6);
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00b79160 */
GEN_FRAME byte F_00b79160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb79160u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  char cVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(int *)(gen_frame + 0x14)) = param_1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = param_3;
  (*(undefined4 *)(gen_frame + 0xc)) = param_4;
  bVar3 = F_00b78a00(param_1,param_2);
  if (bVar3 == 0) {
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
    return 0;
  }
  uVar2 = *param_2;
  bVar3 = *(byte *)((int)param_2 + 0x17);
  (*(uint *)(gen_frame + 0x18)) = (uint)*(byte *)(param_2 + 6);
  (*(undefined4 *)(gen_frame + 0x1c)) = uVar2;
  (*(uint *)(gen_frame + 0x24)) = (uint)bVar3;
  (*(uint *)(gen_frame + 0x20)) = (uint)*(ushort *)((int)param_2 + 0xe);
  (*(uint *)(gen_frame + 0x34)) = (uint)*(byte *)((int)param_2 + 0x19);
  (*(uint *)(gen_frame + 0x28)) = (uint)*(byte *)((int)param_2 + 0x1a);
  uVar2 = param_2[1];
  (*(uint *)(gen_frame + 0x2c)) = (uint)*(ushort *)(param_2 + 4);
  param_3[1] = (uint)*(byte *)((int)param_2 + 0x16);
  (*(undefined4 *)(gen_frame + 0x30)) = uVar2;
  uVar6 = 0;
  (*(uint * PTR32 *)(gen_frame + 0x10)) = &(*(uint *)(gen_frame + 0x18));
  puVar5 = &(*(undefined4 *)(gen_frame + 0x0));
  do {
    uVar4 = F_00b78700((*(uint * PTR32 *)(gen_frame + 0x10)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x14)),puVar5,(*(undefined4 *)(gen_frame + 0xc)));
    if ((char)uVar4 == '\0') goto LAB_00b792a5;
    (*(uint * PTR32 *)(gen_frame + 0x10)) = (*(uint * PTR32 *)(gen_frame + 0x10)) + 4;
    uVar6 = uVar6 + 1;
    puVar5 = puVar5 + 1;
  } while (uVar6 < 2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x8))[4] = (uint)*(ushort *)(param_2 + 3);
  cVar1 = *(char *)((int)param_2 + 0x15);
  if (cVar1 == '\x02') {
    *(*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (*(undefined4 *)(gen_frame + 0x0));
  }
  else if (cVar1 == '\x03') {
    *(*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (*(undefined4 *)(gen_frame + 0x4));
  }
  else {
    switch((unsigned int)(uintptr_t)(cVar1)) {
    case '\x01': ;
      *(*(undefined4 * PTR32 *)(gen_frame + 0x8)) = *(undefined4 *)((*(int *)(gen_frame + 0x14)) + 0x74);
      break;
    case '\x04': ;
      if (REFG(int, 0x1379694) != 0) {
        *(*(undefined4 * PTR32 *)(gen_frame + 0x8)) = *(undefined4 *)(REFG(int, 0x1379694) + 0x74);
        break;
      }
    default: ;
      *(*(undefined4 * PTR32 *)(gen_frame + 0x8)) = 0xe0000000;
    }
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x8))[2] = param_2[2];
  (*(undefined4 * PTR32 *)(gen_frame + 0x8))[3] = (int)*(short *)((int)param_2 + 0x12);
  cVar1 = *(char *)((int)param_2 + 0x16);
  if (((((cVar1 != '\x02') && (cVar1 != '\x03')) && (cVar1 != '\x14')) && (cVar1 != '\x15')) ||
     (bVar3 = F_00bf0a60((undefined *)((*(int *)(gen_frame + 0x14)) + 0x1384) GEN_EDX_ARG,(*(undefined4 * PTR32 *)(gen_frame + 0x8))), bVar3 == 0)) {
    F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
    return 1;
  }
LAB_00b792a5: ;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00b792e0 */
GEN_FRAME uint F_00b792e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb792e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  uint local_8;
  
  local_8 = 4;
  do {
    uVar4 = F_00ab2990(*param_2,REFG(int, 0x14c5780));
    if ((uVar4 == 0) || ((*(char *)(uVar4 + 0x16) == '\0' && (*(short *)(uVar4 + 0xc) == 0)))) {
LAB_00b79338: ;
      iVar1 = *param_2;
      iVar2 = param_2[2];
      iVar6 = 0;
      do {
        uVar4 = F_00ab2990(iVar1,iVar6);
        if ((uVar4 != 0) && (*(char *)(uVar4 + 0x14) == (char)iVar2)) goto LAB_00b7935a;
        iVar6 = iVar6 + 1;
      } while (uVar4 != 0);
      iVar6 = 0;
LAB_00b7935a: ;
      if (REFG(int, 0x14c5780) == param_2[1]) {
        param_2[1] = iVar6;
      }
      REFG(int, 0x14c5780) = iVar6;
      uVar4 = F_00ab2990(*param_2,iVar6);
    }
    else {
      uVar5 = (uint)*(byte *)(uVar4 + 0x14);
      if (uVar5 != 0) {
        if (uVar5 == 1) {
          bVar7 = REFG(int, 0x14c5780) == *param_2;
        }
        else {
          bVar7 = uVar5 == param_2[2];
        }
        if (!bVar7) goto LAB_00b79338;
      }
    }
    if ((REFG(char, 0x14c5784) == '\0') && (REFG(int, 0x14c5780) == param_2[1])) {
      local_8 = 1;
    }
    else if (uVar4 == 0) {
      local_8 = 3;
    }
    else {
      bVar3 = F_00b79160(param_1,uVar4,param_4,param_3);
      if (bVar3 != 0) {
        local_8 = 0;
      }
      REFG(int, 0x14c5780) = REFG(int, 0x14c5780) + 1;
    }
    REFG(undefined4, 0x14c577c) = REFG(undefined4, 0x14c577c) + 1;
    if (0x31 < REFG(undefined4, 0x14c577c)) {
      local_8 = 2;
    }
    REFG(char, 0x14c5784) = '\0';
    if (local_8 != 4) {
      return local_8;
    }
  } while( true );
}

/* ref: FUN_00b79410 */
GEN_FRAME byte GEN_THISCALL F_00b79410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb79410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = F_00b79060((undefined4 *)((int)this + 0x28) GEN_EDX_FWD,param_1,*(undefined4 *)(param_2 + 8));
  if (bVar2 != 0) {
    *(undefined1 *)((int)this + 0x1c) = 5;
    uVar1 = *(undefined4 *)(param_2 + 8);
    *(undefined1 *)((int)this + 0x2e) = *(undefined1 *)(param_2 + 0xc);
    *(undefined4 *)((int)this + 0x28) = uVar1;
    *(undefined2 *)((int)this + 0x2c) = 0;
    *(undefined1 *)((int)this + 0x2f) = 4;
    *(undefined4 *)((int)this + 0x30) = 0;
    *(undefined4 *)((int)this + 0x34) = 0;
    *(undefined1 *)((int)this + 0x40) = 0;
    uVar3 = F_00ab29f0(*(undefined4 *)(param_2 + 0xc));
    if ((uVar3 != 0) && (*(char *)(uVar3 + 1) != '\0')) {
      *(undefined4 *)(param_1 + 0x2ec8) = GEN_FLT_TO(*(undefined4 *)(param_1 + 0x2ec8), REFG(float, 0x10f50cc));
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_00b794a0 */
GEN_FRAME byte GEN_THISCALL F_00b794a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb794a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  
  switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)this + 0x1c))) {
  case 0: ;
  case 3: ;
    if (!(*(float *)((int)this + 0x10) <= 0.0)) {
      return 0;
    }
    return 1;
  case 1: ;
    uVar2 = F_00aa02d0(param_1 GEN_EDX_FWD,*(undefined4 *)((int)this + 0x14),0);
    if ((char)uVar2 == '\0') {
      F_00bc81b0((int)param_1 + 0x1570 GEN_EDX_ARG);
      *(undefined1 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x10) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x10), REFG(float, 0x10f50cc));
    }
    break;
  case 2: ;
    bVar1 = F_00a9fc00(param_1 GEN_EDX_ARG);
    return bVar1 == 0;
  case 4: ;
    bVar1 = F_00b76ae0(param_1);
    if (bVar1 == 0) {
      uVar2 = F_00aa0210(param_1 GEN_EDX_ARG,0,0);
      bVar1 = F_00aa06e0(param_1 GEN_EDX_ARG,uVar2);
      if (bVar1 == 0) {
        bVar1 = F_00b76a60(param_1,(int)this + 0x210U,*(float *)((int)this + 0x21c));
        if (bVar1 != 0) {
          return 1;
        }
        if (*(char *)((int)this + 0x220) != '\0') {
          F_00b782a0(param_1,(int)this + 0x210U,*(float *)((int)this + 0x21c));
          *(undefined1 *)((int)this + 0x220) = 0;
        }
        return 0;
      }
    }
    break;
  case 5: ;
    bVar1 = F_005e1600();
    if (((bVar1 != 0) && (bVar1 = F_005d99e0(), bVar1 != 0)) && (REFG(char, 0x1379c96) == '\0')) {
      bVar1 = F_00b78ec0((undefined *)((int)this + 0x28) GEN_EDX_ARG,param_1);
      return bVar1;
    }
    break;
  default: ;
    return 1;
  }
  return 0;
}

/* ref: FUN_00b79600 */
GEN_FRAME byte F_00b79600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb79600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  short * psVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  
  F_00b77190(&REFG(undefined, 0x14c5218) GEN_EDX_ARG,*(undefined4 *)(param_2 + 4));
  puVar6 = &REFG(undefined4, 0x14c4ef8);
  for (iVar5 = 100; iVar5 != 0; iVar5 = iVar5 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puVar6 = &REFG(undefined4, 0x14c5088);
  for (iVar5 = 100; iVar5 != 0; iVar5 = iVar5 - 1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  REFG(undefined1, 0x14c4ef1) = 0;
  REFG(undefined1, 0x14c4ef0) = 0;
  do {
    uVar3 = F_00b792e0(param_1,param_2,&REFG(undefined, 0x14c5218),param_3);
    switch((unsigned int)(uintptr_t)(uVar3)) {
    case 0: ;
      if ((*(byte *)((int)param_1 + 0x8e) & 0x40) == 0) {
        switch((unsigned int)(uintptr_t)(*(undefined4 *)(param_3 + 4))) {
        case 1: ;
          uVar3 = *(uint *)(param_3 + 8);
          uVar4 = F_00aa0580(param_1 GEN_EDX_ARG,0);
          if (uVar4 != uVar3) {
            F_00aa0560(param_1 GEN_EDX_ARG,uVar3);
          }
          break;
        default: ;
          goto switchD_00b79659_caseD_1;
        case 4: ;
          psVar1 = ((short *)GEN_TOP(((int)param_1 + *(int *)(param_3 + 8) * 2 + 0x1340)));
          *psVar1 = *psVar1 + 1;
          break;
        case 5: ;
          psVar1 = ((short *)GEN_TOP(((int)param_1 + *(int *)(param_3 + 8) * 2 + 0x1340)));
          *psVar1 = *psVar1 - 1;
          break;
        case 6: ;
          *((undefined2 *)GEN_TOP(((int)param_1 + *(int *)(param_3 + 8) * 2 + 0x1340))) = 0;
          break;
        case 7: ;
          *((undefined4 *)GEN_TOP(((int)param_1 + *(int *)(param_3 + 8) * 4 + 0x1348))) = 0;
          break;
        case 9: ;
          F_00b78390((int)param_1 + 0x1340 GEN_EDX_ARG,param_1,param_3);
          break;
        case 10: ;
          F_00b78440((int)param_1 + 0x1340 GEN_EDX_ARG,param_1,param_3);
          break;
        case 0x16: ;
          uVar2 = *(ushort *)((int)param_1 + 0x2f00);
          uVar3 = F_00aa0580(param_1 GEN_EDX_ARG,0);
          if (uVar3 != uVar2) {
            F_00aa0560(param_1 GEN_EDX_ARG,(uint)uVar2);
          }
          break;
        case 0x17: ;
          F_00b77f90(param_1,*(undefined4 *)(param_3 + 8),param_2);
          REFG(undefined1, 0x14c5784) = 1;
          break;
        case 0x18: ;
          if (REFG(int, 0x1379694) != 0) {
            F_00bf0b70((int)param_1 + 0x1384 GEN_EDX_ARG,*(undefined4 *)(REFG(int, 0x1379694) + 0x74));
          }
        }
      }
      break;
    case 1: ;
    case 2: ;
    case 3: ;
switchD_00b79659_caseD_1: ;
      *(undefined4 *)(param_3 + 0x14) = REFG(undefined4, 0x14c5780);
      return uVar3 == 0;
    }
  } while( true );
}

/* ref: FUN_00b797d0 */
GEN_FRAME byte GEN_THISCALL F_00b797d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb797d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar2;
  uVar3 = uVar2;
  if (*(int *)(param_1 + 0x11c) != 0) {
LAB_00b79a15: ;
    F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_FWD);
    return (byte)uVar3;
  }
  if (((ushort)param_2 == 0) || (uVar3 = (uint)*(byte *)((int)this + 0x1e), *(byte *)((int)this + 0x1e) == 0)) {
    *(undefined1 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x10) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x10), REFG(float, 0x10f50cc));
    goto LAB_00b79a15;
  }
  if ((ushort)param_2 < 0x7531) goto LAB_00b79a15;
  bVar1 = *(byte *)((int)this + 0x1d);
  (*(uint *)(gen_frame + 0x4)) = (uint)(ushort)param_2;
  (*(uint *)(gen_frame + 0x8)) = (uint)bVar1;
  (*(uint *)(gen_frame + 0xc)) = uVar3;
  F_00bf0ba0(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG);
  bVar1 = F_00b79600(param_1,&(*(uint *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x10)));
  if (bVar1 == 0) {
    *(undefined1 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x10) = GEN_FLT_TO(*(undefined4 *)((int)this + 0x10), REFG(float, 0x10f50cc));
    goto switchD_00b79894_caseD_1;
  }
  F_00bc81b0(param_1 + 0x1570 GEN_EDX_ARG);
  iVar4 = F_00b767a0((*(int *)(gen_frame + 0x14)));
  if ((char)iVar4 == '\0') {
    switch((unsigned int)(uintptr_t)(((undefined4)(uint)(param_1 + 0x1570)))) {
    case 0: ;
      if ((*(int *)(gen_frame + 0x20)) == 0) goto switchD_00b79894_caseD_1;
    case 0x12: ;
      F_00b76a20(this GEN_EDX_ARG,param_1,&(*(undefined4 *)(gen_frame + 0x10)));
      bVar1 = (byte)(*(uint *)(gen_frame + 0xc));
      *(undefined1 *)((int)this + 0x1d) = (*(undefined1 *)(gen_frame + 0x24));
      *(byte *)((int)this + 0x1e) = (byte)(*(uint *)(gen_frame + 0xc));
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
      return bVar1;
    default: ;
      goto switchD_00b79894_caseD_1;
    case 8: ;
      bVar1 = F_00b780b0(this GEN_EDX_ARG,param_1,(*(undefined4 *)(gen_frame + 0x10)),0);
      break;
    case 0xd: ;
      *(undefined1 *)((int)this + 0x1c) = 0;
      *(float *)((int)this + 0x10) = (float)(*(int *)(gen_frame + 0x18));
      goto LAB_00b798e6;
    case 0xe: ;
      bVar1 = F_00b769c0(this GEN_EDX_ARG,param_1,(float)(*(int *)(gen_frame + 0x18)),(float)(*(int *)(gen_frame + 0x1c)));
      break;
    case 0xf: ;
    case 0x10: ;
      F_00b78b50(this GEN_EDX_ARG,param_1,&(*(undefined4 *)(gen_frame + 0x10)));
      bVar1 = (byte)(*(uint *)(gen_frame + 0xc));
      *(undefined1 *)((int)this + 0x1d) = (*(undefined1 *)(gen_frame + 0x24));
      *(byte *)((int)this + 0x1e) = (byte)(*(uint *)(gen_frame + 0xc));
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
      return bVar1;
    case 0x11: ;
      F_00b78d40(this GEN_EDX_ARG,param_1,&(*(undefined4 *)(gen_frame + 0x10)));
      bVar1 = (byte)(*(uint *)(gen_frame + 0xc));
      *(undefined1 *)((int)this + 0x1d) = (*(undefined1 *)(gen_frame + 0x24));
      *(byte *)((int)this + 0x1e) = (byte)(*(uint *)(gen_frame + 0xc));
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
      return bVar1;
    case 0x13: ;
      F_00b79410(this GEN_EDX_ARG,param_1,&(*(undefined4 *)(gen_frame + 0x10)));
      bVar1 = (byte)(*(uint *)(gen_frame + 0xc));
      *(undefined1 *)((int)this + 0x1d) = (*(undefined1 *)(gen_frame + 0x24));
      *(byte *)((int)this + 0x1e) = (byte)(*(uint *)(gen_frame + 0xc));
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
      return bVar1;
    case 0x14: ;
      goto switchD_00b79894_caseD_14;
    }
    if (bVar1 == 0) {
switchD_00b79894_caseD_1: ;
      bVar1 = (byte)(*(uint *)(gen_frame + 0xc));
      *(undefined1 *)((int)this + 0x1d) = (*(undefined1 *)(gen_frame + 0x24));
      *(byte *)((int)this + 0x1e) = (byte)(*(uint *)(gen_frame + 0xc));
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
      return bVar1;
    }
  }
  else {
switchD_00b79894_caseD_14: ;
    *(undefined1 *)((int)this + 0x1c) = 1;
    *(undefined4 *)((int)this + 0x10) = 0;
    F_00b78180(this GEN_EDX_ARG,param_1,&(*(undefined4 *)(gen_frame + 0x10)));
  }
LAB_00b798e6: ;
  F_00bc8170(param_1 + 0x1570 GEN_EDX_ARG,(*(int *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x10)));
  bVar1 = (byte)(*(uint *)(gen_frame + 0xc));
  *(undefined1 *)((int)this + 0x1d) = (*(undefined1 *)(gen_frame + 0x24));
  *(byte *)((int)this + 0x1e) = (byte)(*(uint *)(gen_frame + 0xc));
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return bVar1;
}

/* ref: FUN_00b79a70 */
GEN_FRAME byte GEN_THISCALL F_00b79a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb79a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  ushort uVar1;
  ushort uVar2;
  uint this;
  byte bVar3;
  byte bVar4;
  float10 fVar5;
  
  this = param_2;
  if (*(char *)((int)param_1 + 0x40) != '\0') {
    F_00b78000((undefined *)((int)param_1 + 0x28) GEN_EDX_FWD,param_2);
  }
  bVar3 = F_00b76910(param_1 GEN_EDX_ARG,param_2);
  bVar4 = 0;
  if (bVar3 != 0) {
    fVar5 = (float10)*(float *)(REFG(int, 0x137104c) + 0x1198);
    *(float *)((int)param_1 + 8) = ((float)GEN_TOF((fVar5 + (float10)*(float *)((int)param_1 + 8))));
    *(float *)((int)param_1 + 0xc) = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0xc) + fVar5)));
    *(float *)((int)param_1 + 0x10) = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x10) - fVar5)));
    bVar3 = F_00b794a0(param_1 GEN_EDX_ARG,param_2);
    bVar4 = 0;
    if (bVar3 != 0) {
      uVar1 = *(ushort *)((int)param_1 + 0x1a);
      uVar2 = *(ushort *)((int)param_1 + 0x18);
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      param_2 = (uint)uVar2;
      if (*(char *)((int)param_1 + 0x21) != '\0') {
        *(undefined1 *)((int)param_1 + 0x21) = 0;
        F_00b76cb0(param_1 GEN_EDX_ARG);
        if (uVar1 == 0) {
          F_00aa05b0((undefined *)this GEN_EDX_ARG);
          F_00aa2cc0((undefined *)this GEN_EDX_ARG,0);
        }
      }
      bVar4 = F_00b797d0(param_1 GEN_EDX_ARG,this,param_2);
    }
  }
  return bVar4;
}

/* ref: FUN_00b79b20 */
GEN_FRAME byte GEN_THISCALL F_00b79b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb79b20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 6) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00b79b90 */
GEN_NOFRAME byte GEN_THISCALL F_00b79b90(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb79b90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(char *)(in_ecx + 0x40) == '\0') {
    return 0;
  }
  if ((*(int *)(in_ecx + 0x28) == -0x20000000) && (*(int *)(in_ecx + 0x2c) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: Client::Game::Object::BnpcFilter::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b79c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb79c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Think::Behavior::Condition::ConditionFilter::vf0 */
GEN_FRAME uint GEN_THISCALL F_00b79c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb79c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b79ca0 */
GEN_FRAME uint GEN_THISCALL F_00b79ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb79ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = ((gen_lcode *)*(gen_code32 *)(*(int *)this + 4))(this,param_1);
  if (REFG(undefined4, 0x133dd04) <= (uint)((uVar1 / 0xe10) % 0x18)) {
    uVar1 = ((gen_lcode *)*(gen_code32 *)(*(int *)this + 4))(this,param_1);
    if ((uint)((uVar1 / 0xe10) % 0x18) < REFG(undefined4, 0x133de90)) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b79d60 */
GEN_FRAME float10 F_00b79d60(float gen_a0)
{
  GEN_ENTER(0xb79d60u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00b79d80 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b79d80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb79d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0x2f20;
  *(undefined4 *)((int)this + 0xc) = 400;
  uVar1 = F_00406bb0(0x75d00,0,0);
  *(uint *)this = uVar1;
  uVar1 = F_00406bb0(*(int *)((int)this + 0xc) * 0x14,0,0);
  *(uint *)((int)this + 4) = uVar1;
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
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  return 0;
}

/* ref: FUN_00b79ee0 */
GEN_NOFRAME unsigned int GEN_STDCALL F_00b79ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xb79ee0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return;
}

/* ref: FUN_00b79f30 */
GEN_FRAME uint GEN_THISCALL F_00b79f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb79f30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < 0x3c) {
    return *(uint *)(in_ecx + 0x10 + param_2 * 4);
  }
  return 0;
}

/* ref: FUN_00b79f50 */
GEN_FRAME uint GEN_THISCALL F_00b79f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb79f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  
  uVar3 = 0;
  puVar2 = (uint *)((int)this + 0x10);
  while (((0x3b < uVar3 || (uVar1 = *puVar2, uVar1 == 0)) || (*(int *)(uVar1 + 0x78) != param_1))) {
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 1;
    if (0x3b < (int)uVar3) {
      return 0;
    }
  }
  return uVar1;
}

/* ref: FUN_00b79f80 */
GEN_FRAME uint GEN_THISCALL F_00b79f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb79f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar4 = 0;
  piVar3 = (int *)((int)this + 0x10);
  do {
    if (((uVar4 < 0x3c) && (piVar1 = (int *)*piVar3, piVar1 != (int *)0x0)) &&
       (piVar1[0x20] == param_1)) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xb8))(piVar1 GEN_EDX_FWD);
      if ((char)uVar2 != '\0') {
        return (uint)piVar1;
      }
    }
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 1;
  } while ((int)uVar4 < 0x3c);
  return 0;
}

/* ref: FUN_00b79fe0 */
GEN_FRAME uint GEN_THISCALL F_00b79fe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb79fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  piVar3 = (int *)((int)this + 0x10);
  do {
    if ((uVar4 < 0x3c) && (piVar1 = (int *)*piVar3, piVar1 != (int *)0x0)) {
      uVar5 = ((gen_lcode *)*(gen_code32 *)*piVar1)(piVar1);
      if (((int)uVar5 == param_1) && ((int)((ulonglong)uVar5 >> 0x20) == 0)) {
        uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xb8))(piVar1 GEN_EDX_FWD);
        if ((char)uVar2 == '\0') {
          return (uint)piVar1;
        }
      }
    }
    uVar4 = uVar4 + 1;
    piVar3 = piVar3 + 1;
  } while ((int)uVar4 < 0x3c);
  return 0;
}

/* ref: FUN_00b7a040 */
GEN_FRAME uint GEN_STDCALL F_00b7a040(unsigned int gen_a0)
{
  GEN_ENTER(0xb7a040u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a35730(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00b7a050 */
GEN_FRAME uint GEN_STDCALL F_00b7a050(unsigned int gen_a0)
{
  GEN_ENTER(0xb7a050u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a35760(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00b7a060 */
GEN_FRAME unsigned int GEN_THISCALL F_00b7a060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7a060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 1;
  iVar3 = 0xc;
  do {
    if (((iVar2 - 1U < 0x3c) && (iVar1 = *(int *)((int)this + 0x10), iVar1 != 0)) &&
       (*(int *)(iVar1 + 0xe4) == param_1)) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    if (((-1 < iVar2) && (iVar2 < 0x3c)) &&
       ((iVar1 = *(int *)((int)this + 0x14), iVar1 != 0 && (*(int *)(iVar1 + 0xe4) == param_1)))) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    if (((-1 < iVar2 + 1) && (iVar2 + 1 < 0x3c)) &&
       ((iVar1 = *(int *)((int)this + 0x18), iVar1 != 0 && (*(int *)(iVar1 + 0xe4) == param_1)))) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    if ((((-1 < iVar2 + 2) && (iVar2 + 2 < 0x3c)) &&
        (iVar1 = *(int *)((int)this + 0x1c), iVar1 != 0)) && (*(int *)(iVar1 + 0xe4) == param_1)) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    if (((-1 < iVar2 + 3) && (iVar2 + 3 < 0x3c)) &&
       ((iVar1 = *(int *)((int)this + 0x20), iVar1 != 0 && (*(int *)(iVar1 + 0xe4) == param_1)))) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    iVar2 = iVar2 + 5;
    iVar3 = iVar3 - 1;
    this = (int *)((int)this + 0x14);
  } while (iVar3 != 0);
  return 0;
}

/* ref: FUN_00b7a140 */
GEN_FRAME byte GEN_THISCALL F_00b7a140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7a140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  
  piVar3 = (int *)((int)this + 0x10);
  uVar5 = 0;
  while ((((0x3b < uVar5 || (piVar2 = (int *)*piVar3, piVar2 == (int *)0x0)) ||
          (bVar1 = *(byte *)((int)piVar2 + 0x8a), ((byte)param_1 & 1 < bVar1) == 0)) ||
         ((uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2 GEN_EDX_FWD), (char)uVar4 != '\0' &&
          (((*(byte *)((int)piVar2 + 0x8e) & 0x80) == 0 ||
           ((uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x70))(piVar2 GEN_EDX_ARG), (char)uVar4 != '\0' &&
            ((bVar1 != 7 || ((char)piVar2[99] != '\0'))))))))))) {
    uVar5 = uVar5 + 1;
    piVar3 = piVar3 + 1;
    if (0x3b < uVar5) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00b7a1d0 */
GEN_FRAME unsigned int GEN_THISCALL F_00b7a1d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7a1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if ((param_1 < 0x3c) && (piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x10), piVar1 != (int *)0x0)
     ) {
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1 GEN_EDX_ARG);
    if ((uVar2 == 3) || ((uVar2 == 5 || (uVar2 == 7)))) {
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xb4))(piVar1 GEN_EDX_ARG,0);
    }
    *(undefined4 *)((int)this + param_1 * 4 + 0x10) = 0;
    F_00a35760(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,piVar1);
  }
  return;
}

/* ref: FUN_00b7a240 */
GEN_FRAME unsigned int GEN_THISCALL F_00b7a240(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7a240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  uint local_8;
  
  local_8 = 0;
  piVar3 = (int *)((int)this + 0x10);
  do {
    if ((local_8 < 0x3c) && (piVar1 = (int *)*piVar3, piVar1 != (int *)0x0)) {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_FWD);
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1 GEN_EDX_ARG);
      if ((uVar2 == 3) || ((uVar2 == 5 || (uVar2 == 7)))) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xb4))(piVar1 GEN_EDX_ARG,0);
      }
      *piVar3 = 0;
      F_00a35760(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,piVar1);
    }
    local_8 = local_8 + 1;
    piVar3 = piVar3 + 1;
  } while ((int)local_8 < 0x3c);
  return 0;
}

/* ref: FUN_00b7a2c0 */
GEN_FRAME uint GEN_THISCALL F_00b7a2c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7a2c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  int local_8;
  
  uVar4 = 0;
  local_8 = 0;
  iVar3 = 0;
  piVar5 = (int *)((int)this + 0x10);
  do {
    if (((uVar4 < 0x3c) && (piVar1 = (int *)*piVar5, piVar1 != (int *)0x0)) && (piVar1[0x3b] != 0))
    {
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1 GEN_EDX_FWD);
      if ((char)uVar2 != '\0') {
        local_8 = local_8 + 1;
      }
      iVar3 = iVar3 + 1;
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 1;
  } while ((int)uVar4 < 0x3c);
  if (iVar3 == 0) {
    return 100;
  }
  return (local_8 * 100) / iVar3;
}

/* ref: FUN_00b7a320 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b7a320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7a320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  
  if ((REFG(char, 0x1379c96) == '\0') && (REFG(char, 0x1379c97) == '\0')) {
    uVar2 = 0;
    piVar3 = (int *)((int)this + 0x10);
    do {
      if ((uVar2 < 0x3c) && (piVar1 = (int *)*piVar3, piVar1 != (int *)0x0)) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1 GEN_EDX_FWD);
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while ((int)uVar2 < 0x3c);
  }
  return;
}

/* ref: FUN_00b7a360 */
GEN_NOFRAME uint GEN_THISCALL F_00b7a360(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7a360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00b7a240(this GEN_EDX_FWD);
  F_00406ad0(*(undefined4 *)this);
  *(undefined4 *)this = 0;
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 4));
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00b7a390 */
GEN_FRAME uint GEN_THISCALL F_00b7a390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb7a390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  int iVar2;
  
  if (*(int *)((int)this + 4) == 0) {
    return 0xffffffff;
  }
  iVar2 = 0;
  piVar1 = (int *)((int)this + 0xb0);
  do {
    if (*piVar1 == 0) {
      if (iVar2 == -1) {
        return 0xffffffff;
      }
      piVar1 = *(int * PTR32 *)((int)this + iVar2 * 4 + 0xb0);
      if (piVar1 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1 GEN_EDX_FWD);
      }
      piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0xc) * iVar2 + *(int *)((int)this + 4))));
      if (piVar1 == (int *)0x0) {
        piVar1 = (int *)0x0;
      }
      else {
        *piVar1 = (int)(*(undefined * PTR32 (*)[53])REFP(0x10eb834));
      }
      *(int * PTR32 *)((int)this + iVar2 * 4 + 0xb0) = piVar1;
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xac))(piVar1 GEN_EDX_ARG,iVar2 + 0x144);
      F_00ae1e60(piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4);
      F_00a35730(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,*(undefined4 *)((int)this + iVar2 * 4 + 0xb0));
      return iVar2 + 0x28;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 0x14);
  return 0xffffffff;
}

/* ref: FUN_00b7a450 */
GEN_FRAME uint GEN_THISCALL F_00b7a450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xb7a450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  int iVar2;
  
  if (*(int *)((int)this + 4) == 0) {
    return 0xffffffff;
  }
  iVar2 = 0;
  piVar1 = (int *)((int)this + 0xb0);
  do {
    if (*piVar1 == 0) {
      if (iVar2 == -1) {
        return 0xffffffff;
      }
      piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0xc) * iVar2 + *(int *)((int)this + 4))));
      if (piVar1 == (int *)0x0) {
        piVar1 = (int *)0x0;
      }
      else {
        *piVar1 = (int)(*(undefined * PTR32 (*)[53])REFP(0x10f518c));
      }
      *(int * PTR32 *)((int)this + iVar2 * 4 + 0xb0) = piVar1;
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xac))(piVar1 GEN_EDX_FWD,iVar2 + 0x144);
      F_00bf0cb0(piVar1 GEN_EDX_ARG,param_1,param_2,param_3,param_4);
      F_00a35730(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,*(undefined4 *)((int)this + iVar2 * 4 + 0xb0));
      return iVar2 + 0x28;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 0x14);
  return 0xffffffff;
}

/* ref: FUN_00b7a500 */
GEN_FRAME uint GEN_THISCALL F_00b7a500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7a500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  
  if (*(int *)this == 0) {
    return 0xffffffff;
  }
  uVar2 = 0;
  piVar1 = (int *)((int)this + 0x10);
  do {
    if (*piVar1 == 0) {
      if (uVar2 == 0xffffffff) {
        return 0xffffffff;
      }
      piVar1 = *(int * PTR32 *)((int)this + uVar2 * 4 + 0x10);
      if (piVar1 != (int *)0x0) {
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1 GEN_EDX_FWD);
      }
      this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 8) * uVar2 + *(int *)this)));
      if (this_00 == (undefined *)0x0) {
        piVar1 = (int *)0x0;
      }
      else {
        piVar1 = (int *)F_00a665b0(this_00 GEN_EDX_ARG);
      }
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xac))(piVar1 GEN_EDX_ARG,uVar2 + 0x11c);
      F_00a5f430(piVar1 GEN_EDX_ARG,param_2);
      F_00aaa870(piVar1 GEN_EDX_ARG,param_1);
      *(int * PTR32 *)((int)this + uVar2 * 4 + 0x10) = piVar1;
      F_00a35730(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,piVar1);
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 1;
  } while ((int)uVar2 < 0x28);
  return 0xffffffff;
}

/* ref: FUN_00b7a5b0 */
GEN_NOFRAME uint GEN_THISCALL F_00b7a5b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7a5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  char cVar1;
  int iVar2;
  int * piVar3;
  byte bVar4;
  uint uVar5;
  int * piVar6;
  undefined3 extraout_var = 0;
  int iVar7;
  int * piVar8;
  bool bVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0x12c)) = this;
  (*(undefined1 *)(gen_frame + 0x13f)) = 0;
  uVar5 = F_00424810(REFG(undefined4, 0x137104c) GEN_EDX_FWD);
  piVar6 = (int *)0x0;
  if ((uVar5 != 0) && (piVar6 = (int *)F_00974710(uVar5 GEN_EDX_ARG), (char)piVar6 != '\0')) {
    bVar4 = F_005e1600();
    piVar6 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar4)));
    if ((bVar4 != 0) && ((REFG(char, 0x1379c96) == '\0' && (REFG(char, 0x1379c97) == '\0')))) {
      piVar6 = ((int *)(gen_frame + 0x0));
      for (iVar7 = 0x3c; iVar7 != 0; iVar7 = iVar7 - 1) {
        *piVar6 = 0;
        piVar6 = piVar6 + 1;
      }
      (*(int *)(gen_frame + 0x138)) = 0;
      uVar5 = F_005effe0(8,&(*(undefined1 *)(gen_frame + 0x13f)));
      piVar6 = (int *)0x0;
      if (uVar5 != 0) {
        piVar6 = *(int * PTR32 *)(uVar5 + 4);
        (*(int * PTR32 *)(gen_frame + 0x134)) = (int *)*piVar6;
        while (((*(int * PTR32 *)(gen_frame + 0x134)) != piVar6 && ((*(int *)(gen_frame + 0x138)) < 0x28))) {
          piVar8 = (int *)(*(int * PTR32 *)(gen_frame + 0x134))[4];
          if (piVar8 != (int *)0x0) {
            uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x114))(piVar8 GEN_EDX_ARG);
            uVar5 = F_00ab2440(uVar5);
            if ((*(char *)(uVar5 + 0x14) != '\x01') && (*(char *)(uVar5 + 0x14) != '\x02')) {
              ((int *)(gen_frame + 0x0))[(int)((*(int *)(gen_frame + 0x138)))] = (int)piVar8;
              (*(int *)(gen_frame + 0x138)) = (*(int *)(gen_frame + 0x138)) + 1;
            }
          }
          F_0054f4d0(&(*(int * PTR32 *)(gen_frame + 0x134)) GEN_EDX_ARG);
        }
        iVar7 = 0x28;
        (*(int *)(gen_frame + 0x138)) = 0x28;
        uVar5 = F_005effe0(0xc,&(*(undefined1 *)(gen_frame + 0x13f)));
        piVar6 = (int *)0x0;
        if (uVar5 != 0) {
          piVar6 = *(int * PTR32 *)(uVar5 + 4);
          piVar8 = (int *)*piVar6;
          (*(int * PTR32 *)(gen_frame + 0x134)) = piVar8;
          if (piVar8 != piVar6) {
            do {
              if (0x3b < iVar7) break;
              ((int *)(gen_frame + 0x0))[(int)(iVar7)] = (*(int * PTR32 *)(gen_frame + 0x134))[4];
              iVar7 = iVar7 + 1;
              F_0054f4d0(&(*(int * PTR32 *)(gen_frame + 0x134)) GEN_EDX_ARG);
            } while ((*(int * PTR32 *)(gen_frame + 0x134)) != piVar6);
            (*(int *)(gen_frame + 0x138)) = iVar7;
          }
          uVar5 = F_005effe0(0x2d,&(*(undefined1 *)(gen_frame + 0x13f)));
          piVar6 = (int *)0x0;
          if (uVar5 != 0) {
            piVar6 = *(int * PTR32 *)(uVar5 + 4);
            piVar8 = (int *)*piVar6;
            (*(int * PTR32 *)(gen_frame + 0x130)) = piVar6;
            if (piVar8 != piVar6) {
              do {
                if (0x3b < (*(int *)(gen_frame + 0x138))) break;
                iVar7 = piVar8[4];
                if ((iVar7 != 0) &&
                   (uVar5 = F_00ab2470(*(undefined4 *)(iVar7 + 0x30)),
                   *(char *)(uVar5 + 0x16) == '\x03')) {
                  ((int *)(gen_frame + 0x0))[(int)((*(int *)(gen_frame + 0x138)))] = iVar7;
                  (*(int *)(gen_frame + 0x138)) = (*(int *)(gen_frame + 0x138)) + 1;
                }
                if (*(char *)((int)piVar8 + 0x15) == '\0') {
                  piVar6 = (int *)piVar8[2];
                  if (*(char *)((int)piVar6 + 0x15) == '\0') {
                    cVar1 = *(char *)(*piVar6 + 0x15);
                    piVar8 = piVar6;
                    piVar6 = (int *)*piVar6;
                    while (cVar1 == '\0') {
                      cVar1 = *(char *)(*piVar6 + 0x15);
                      piVar8 = piVar6;
                      piVar6 = (int *)*piVar6;
                    }
                  }
                  else {
                    cVar1 = *(char *)(piVar8[1] + 0x15);
                    piVar3 = (int *)piVar8[1];
                    piVar6 = piVar8;
                    while ((piVar8 = piVar3, cVar1 == '\0' && (piVar6 == (int *)piVar8[2]))) {
                      cVar1 = *(char *)(piVar8[1] + 0x15);
                      piVar3 = (int *)piVar8[1];
                      piVar6 = piVar8;
                    }
                  }
                }
              } while (piVar8 != (*(int * PTR32 *)(gen_frame + 0x130)));
            }
            (*(int * PTR32 *)(gen_frame + 0x130)) = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x12c)) + 0x10);
            (*(int * PTR32 *)(gen_frame + 0x134)) = (int *)0x0;
            do {
              piVar6 = (*(int * PTR32 *)(gen_frame + 0x134));
              if (((*(int * PTR32 *)(gen_frame + 0x134)) < (int *)0x3c) && (piVar8 = (int *)*(*(int * PTR32 *)(gen_frame + 0x130)), piVar8 != (int *)0x0)) {
                iVar7 = 0;
                bVar9 = (*(int *)(gen_frame + 0x138)) == 0;
                if (0 < (*(int *)(gen_frame + 0x138))) {
                  do {
                    iVar2 = ((int *)(gen_frame + 0x0))[(int)(iVar7)];
                    if ((iVar2 != 0) &&
                       (uVar5 = F_00b79f30((*(undefined * PTR32 *)(gen_frame + 0x12c)) GEN_EDX_ARG,piVar6), piVar6 = (*(int * PTR32 *)(gen_frame + 0x134)),
                       *(int *)(uVar5 + 0x78) == *(int *)(iVar2 + 0x14))) break;
                    iVar7 = iVar7 + 1;
                  } while (iVar7 < (*(int *)(gen_frame + 0x138)));
                  bVar9 = iVar7 == (*(int *)(gen_frame + 0x138));
                }
                if (bVar9) {
                  if (piVar8 != (int *)0x0) {
                    uVar5 = ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 4))(piVar8 GEN_EDX_ARG);
                    ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xb0))(piVar8 GEN_EDX_ARG);
                    if (((uVar5 == 3) || (uVar5 == 5)) || (uVar5 == 7)) {
                      ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0xb4))(piVar8 GEN_EDX_ARG,0);
                    }
                    *(*(int * PTR32 *)(gen_frame + 0x130)) = 0;
                    F_00a35760(&REFG(undefined, 0x14a31e0) GEN_EDX_ARG,piVar8);
                    piVar6 = (*(int * PTR32 *)(gen_frame + 0x134));
                  }
                }
                else {
                  ((int *)(gen_frame + 0x0))[(int)(iVar7)] = 0;
                }
              }
              (*(int * PTR32 *)(gen_frame + 0x130)) = (*(int * PTR32 *)(gen_frame + 0x130)) + 1;
              (*(int * PTR32 *)(gen_frame + 0x134)) = (int *)((int)piVar6 + 1U);
            } while ((int)((int)piVar6 + 1U) < 0x3c);
            piVar6 = (int *)0x0;
            (*(int * PTR32 *)(gen_frame + 0x134)) = (int *)0x0;
            if (0 < (*(int *)(gen_frame + 0x138))) {
              do {
                piVar6 = (int *)((int *)(gen_frame + 0x0))[(int)((int)(*(int * PTR32 *)(gen_frame + 0x134)))];
                if (piVar6 != (int *)0x0) {
                  cVar1 = *(char *)((int)piVar6 + 0x11);
                  if (cVar1 == '\b') {
                    piVar8 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x114))(piVar6 GEN_EDX_ARG)));
                    (*(int * PTR32 *)(gen_frame + 0x130)) = piVar8;
                    uVar5 = F_00b7a500((*(undefined * PTR32 *)(gen_frame + 0x12c)) GEN_EDX_ARG,piVar8,piVar6[5]);
                  }
                  else if (cVar1 == '\f') {
                    (*(int * PTR32 *)(gen_frame + 0x130)) = (int *)piVar6[0xc];
                    uVar5 = F_00b7a450((*(undefined * PTR32 *)(gen_frame + 0x12c)) GEN_EDX_ARG,(int *)piVar6[0xc],
                                         (uint)*(ushort *)((int)piVar6 + 0x12),piVar6[5],piVar6[0xd]
                                        );
                  }
                  else {
                    if (cVar1 != '-') goto LAB_00b7a992;
                    (*(int * PTR32 *)(gen_frame + 0x130)) = (int *)piVar6[0xc];
                    uVar5 = F_00b7a390((*(undefined * PTR32 *)(gen_frame + 0x12c)) GEN_EDX_ARG,(int *)piVar6[0xc],
                                         (uint)*(ushort *)((int)piVar6 + 0x12),piVar6[5],piVar6[0xd]
                                        );
                  }
                  if (uVar5 != 0xffffffff) {
                    if (uVar5 < 0x3c) {
                      if ((int)uVar5 < 0x28) {
                        piVar8 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x12c)) + uVar5 * 4 + 0x10);
                      }
                      else {
                        piVar8 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x12c)) + uVar5 * 4 + 0x10);
                      }
                    }
                    else {
                      piVar8 = (int *)0x0;
                    }
                    ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x38))(piVar6 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x110)));
                    ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x3c))(piVar8 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x110)));
                    ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x3c))(piVar6 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xf0)));
                    F_00a1e160(((undefined1 *)(gen_frame + 0x128)),((undefined1 *)(gen_frame + 0xf0)));
                    ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x48))(piVar8 GEN_EDX_ARG);
                    ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x40))(piVar6 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x100)));
                    ((GEN_TCODE *)*(gen_code32 *)(*piVar8 + 0x4c))(piVar8 GEN_EDX_ARG,((undefined4 *)(gen_frame + 0x100))[0]);
                    F_00a5f430(piVar8 GEN_EDX_ARG,piVar6[5]);
                    piVar8[0x20] = (int)(*(int * PTR32 *)(gen_frame + 0x130));
                    if ((*(char *)((int)piVar6 + 0x11) != '-') &&
                       (piVar6 = (int *)piVar8[0x3b], piVar6 != (int *)0x0)) {
                      ((GEN_TCODE *)*(gen_code32 *)(*piVar6 + 0x1c))(piVar6 GEN_EDX_ARG,1);
                    }
                  }
                }
LAB_00b7a992: ;
                piVar6 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x134)) + 1);
                (*(int * PTR32 *)(gen_frame + 0x134)) = piVar6;
              } while ((int)piVar6 < (*(int *)(gen_frame + 0x138)));
            }
          }
        }
      }
    }
  }
  return (uint)piVar6;
}

/* ref: Client::Game::Object::Aetheryte::vf47 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00b7a9e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7a9e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Client::Game::Object::Aetheryte::vf45 */
GEN_FRAME uint GEN_THISCALL F_00b7aa00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7aa00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[53])REFP(0x10e6c8c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00b7aa30 */
GEN_FRAME float10 F_00b7aa30(float gen_a0)
{
  GEN_ENTER(0xb7aa30u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return (float10)((float)GEN_TOF((((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x1080220))));
}

/* ref: FUN_00b7aa60 */
GEN_NOFRAME uint GEN_THISCALL F_00b7aa60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7aa60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined2 *)((int)this + 0x16c) = 0;
  puVar1 = (undefined4 *)((int)this + 8);
  iVar2 = 0x1e;
  do {
    *(undefined2 *)(puVar1 - 1) = 0;
    *puVar1 = 0;
    *(undefined2 *)((int)puVar1 - 2) = 0;
    puVar1[1] = 0xe0000000;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return (uint)puVar1;
}

/* ref: FUN_00b7aaa0 */
GEN_FRAME byte GEN_THISCALL F_00b7aaa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7aaa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (*(ushort *)(in_ecx + 0x16c) & (ushort)param_2) != 0;
}

/* ref: FUN_00b7aac0 */
GEN_FRAME byte GEN_THISCALL F_00b7aac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7aac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  ushort * puVar2;
  
  iVar1 = 0;
  puVar2 = (ushort *)((int)this + 4);
  do {
    if (*puVar2 == param_1) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 6;
  } while (iVar1 < 0x1e);
  return 0;
}

/* ref: FUN_00b7aaf0 */
GEN_FRAME float10 GEN_THISCALL F_00b7aaf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7aaf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (0x1d < param_2) {
    return (float10)0;
  }
  return (float10)*(float *)(in_ecx + 8 + param_2 * 0xc);
}

/* ref: FUN_00b7ab10 */
GEN_FRAME ushort GEN_THISCALL F_00b7ab10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7ab10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (0x1d < param_2) {
    return 0xffff;
  }
  return *(ushort *)(in_ecx + 6 + param_2 * 0xc);
}

/* ref: FUN_00b7ab30 */
GEN_FRAME byte GEN_STDCALL F_00b7ab30(unsigned int gen_a0)
{
  GEN_ENTER(0xb7ab30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (((param_1 < 0xfc) || (0x103 < param_1)) && (1 < param_1 - 0x105)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00b7ab60 */
GEN_FRAME uint GEN_THISCALL F_00b7ab60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7ab60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (0x1d < param_2) {
    return 0;
  }
  return (uint)*(ushort *)(in_ecx + 4 + param_2 * 0xc);
}

/* ref: FUN_00b7ab80 */
GEN_FRAME uint GEN_THISCALL F_00b7ab80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7ab80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (0x1d < param_2) {
    return 0;
  }
  return *((uint *)GEN_TOP((in_ecx + (param_2 * 3 + 3) * 4)));
}

/* ref: FUN_00b7aba0 */
GEN_FRAME uint GEN_THISCALL F_00b7aba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7aba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  ushort * puVar2;
  
  uVar1 = 0;
  puVar2 = (ushort *)((int)this + 4);
  do {
    if (*puVar2 == param_1) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 6;
  } while ((int)uVar1 < 0x1e);
  return 0xffffffff;
}

/* ref: FUN_00b7abd0 */
GEN_FRAME ushort GEN_THISCALL F_00b7abd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7abd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  ushort * puVar2;
  
  iVar1 = 0;
  puVar2 = (ushort *)((int)this + 4);
  do {
    if (*puVar2 == param_1) {
      if (iVar1 == -1) {
        return 0;
      }
      return *(ushort *)((int)this + iVar1 * 0xc + 6);
    }
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 6;
  } while (iVar1 < 0x1e);
  return 0;
}

/* ref: FUN_00b7ac20 */
GEN_FRAME uint GEN_THISCALL F_00b7ac20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7ac20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  ushort * puVar3;
  
  uVar2 = 0;
  puVar3 = (ushort *)((int)this + 4);
  do {
    if (*puVar3 != 0) {
      uVar1 = F_00ab1ff0((uint)*puVar3);
      if ((uVar1 != 0) && (*(byte *)(uVar1 + 0xc) == (ushort)param_1)) {
        return uVar2;
      }
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 6;
    if (0x1d < (int)uVar2) {
      return 0xffffffff;
    }
  } while( true );
}

/* ref: FUN_00b7ac70 */
GEN_FRAME uint GEN_THISCALL F_00b7ac70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb7ac70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * pvVar1;
  
  pvVar1 = (undefined *)((int)this + param_1 * 0xc);
  if (*(short *)((int)pvVar1 + 4) == (short)param_2) {
    *(undefined2 *)((int)pvVar1 + 6) = (undefined2)param_3;
  }
  return (uint)pvVar1;
}

/* ref: FUN_00b7aca0 */
GEN_FRAME uint GEN_THISCALL F_00b7aca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7aca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ab1ff0(param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (uint)*(ushort *)(uVar1 + 10);
    if (*(ushort *)(uVar1 + 10) == 0) {
      uVar2 = (*(char *)(uVar1 + 0xf) == '\x02') + 0x25b;
    }
    uVar2 = F_00a7d4b0(uVar2,*(undefined4 *)this,*(undefined4 *)this,0,0,param_1,0,0,0,
                         REFG(float, 0x10916ec));
  }
  return uVar2;
}

/* ref: FUN_00b7ad00 */
GEN_FRAME uint GEN_THISCALL F_00b7ad00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7ad00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ab1ff0(param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00ab4370((uint)*(byte *)(uVar1 + 0x10),*(undefined4 *)this,*(undefined4 *)this,0,0);
  }
  return uVar2;
}

/* ref: FUN_00b7ad30 */
GEN_FRAME uint GEN_THISCALL F_00b7ad30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xb7ad30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ab1ff0(param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = F_00a7d4b0(0x226,*(undefined4 *)this,*(undefined4 *)this,0,0,param_1,param_2,0,0,
                         REFG(float, 0x10916ec));
  }
  return uVar2;
}

/* ref: FUN_00b7ad80 */
GEN_FRAME uint GEN_THISCALL F_00b7ad80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7ad80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  uVar2 = F_006b8c00();
  bVar1 = F_006c5260(uVar2 GEN_EDX_ARG);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    uVar3 = F_00ab1ff0(param_1);
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = F_00ab4370(((*(char *)(uVar3 + 0xf) != '\x02') - 1 & 0xffffffdf) + 0x49,
                           *(undefined4 *)this,*(undefined4 *)this,0,0);
    }
  }
  return uVar2;
}

/* ref: FUN_00b7add0 */
GEN_NOFRAME unsigned int F_00b7add0(void)
{
  GEN_ENTER(0xb7add0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00b7ade0 */
GEN_FRAME uint GEN_STDCALL F_00b7ade0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xb7ade0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = param_3 - 3;
  if (uVar2 < 0x1e) {
    uVar2 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0xb7aecc) + param_3 + 1)));
    switch((unsigned int)(uintptr_t)(param_3)) {
    case 3: ;
      F_00a77000(param_1,param_1,0,0,0,0,param_4,0,0,0);
      uVar2 = F_00ab4370(0x45,param_1,param_1,0,0);
      return uVar2;
    case 4: ;
      uVar2 = F_00a7b5b0(param_1,param_1,0x207,0,0,param_4,0,0,0);
      return uVar2;
    case 0xe: ;
      uVar2 = F_00a7b5b0(param_1,param_1,0x212,0,0,param_4,0,0,0);
      return uVar2;
    case 0x20: ;
      F_00ab4370(0x2e,param_1,param_1,0,0);
      bVar1 = F_00a9f620(param_1 GEN_EDX_ARG);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0xc,1);
        uVar2 = F_00a4a760(&REFG(undefined, 0x14a7360) GEN_EDX_ARG,0xd,1);
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00b7aef0 */
GEN_NOFRAME uint GEN_THISCALL F_00b7aef0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7aef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  short * psVar2;
  int iVar3;
  
  iVar3 = 0;
  psVar2 = (short *)((int)this + 4);
  do {
    sVar1 = *psVar2;
    if (sVar1 != 0) {
      if (sVar1 == 0xad) {
        return 1;
      }
      if (sVar1 == 0xae) {
        return 2;
      }
      if (sVar1 == 0xaf) {
        return 3;
      }
      if (sVar1 == 0xb0) {
        return 0xffffffff;
      }
      if (sVar1 == 0xb1) {
        return 0xfffffffe;
      }
      if (sVar1 == 0xb2) {
        return 0xfffffffd;
      }
    }
    iVar3 = iVar3 + 1;
    psVar2 = psVar2 + 6;
    if (0x1d < iVar3) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00b7af70 */
GEN_FRAME uint GEN_THISCALL F_00b7af70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7af70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = param_1;
  *(undefined2 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  uVar1 = F_00b7aa60(this GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00b7afa0 */
GEN_FRAME uint GEN_THISCALL F_00b7afa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xb7afa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2;
  if ((0x1d < param_2) ||
     (uVar1 = (uint)*(ushort *)(in_ecx + 4 + param_2 * 0xc), uVar2 = 0, uVar1 == 0)) {
    return uVar2 & 0xffffff00;
  }
  if (((uVar1 < 0xfc) || (0x103 < uVar1)) && (1 < uVar1 - 0x105)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00b7aff0 */
GEN_NOFRAME uint GEN_THISCALL F_00b7aff0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xb7aff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 in_ecx;
  float10 fVar4;
  undefined4 uVar5;
  float fVar6;
  float * pfVar7;
  float * pfVar8;
  float10 fVar9;
  float10 fVar10;
  
  pfVar8 = (float *)((int)this + 8);
  (*(int *)(gen_frame + 0x58)) = 0x1e;
  do {
    fVar6 = gen_bits2f((uint)*(ushort *)(pfVar8 - 1));
    if (*(ushort *)(pfVar8 - 1) != 0) {
      fVar6 = gen_bits2f(F_00ab1ff0((undefined4)gen_fl2bits(fVar6)));
      fVar3 = REFG(undefined4, 0x137104c);
      (*(float *)(gen_frame + 0x50)) = fVar6;
      if (fVar6 != 0.0) {
        if (*(short *)(pfVar8 - 1) == 0x128) {
          fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x170) -
                         (float10)*(float *)((int)gen_fl2bits(REFG(undefined4, 0x137104c)) + 0x1198))));
          (*(float *)(gen_frame + 0x5c)) = fVar2;
          *(float *)((int)this + 0x170) = fVar2;
          fVar6 = fVar3;
          if ((float10)fVar2 <= (float10)0) {
            fVar6 = F_00a4b7d0();
            uVar5 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f529c)));
            in_ecx = *(undefined4 *)this;
            (*(float *)(gen_frame + 0x10)) = gen_bits2f(REFG(float, 0x10f529c));
            (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f529c)));
            (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10f529c)));
            *(float *)((int)this + 0x170) =
                 ((float)GEN_TOF((((float10)fVar6 + (float10)fVar6) + (float10)*(double *)&REFG(undefined, 0x10944e0))));
            (*(undefined4 *)(gen_frame + 0x1c)) = uVar5;
            (*(undefined4 *)(gen_frame + 0x20)) = uVar5;
            (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
            (*(undefined4 *)(gen_frame + 0x24)) = 0;
            (*(undefined4 *)(gen_frame + 0x28)) = 0;
            (*(undefined4 *)(gen_frame + 0x2c)) = 0;
            (*(undefined4 *)(gen_frame + 0x30)) = 0;
            (*(undefined4 *)(gen_frame + 0x34)) = 0;
            (*(undefined1 *)(gen_frame + 0x38)) = 0;
            (*(undefined4 *)(gen_frame + 0x3c)) = 0;
            fVar9 = F_00a9fad0(in_ecx GEN_EDX_ARG);
            (*(float *)(gen_frame + 0x10)) = (float)fVar9;
            fVar6 = F_00a4b7d0();
            fVar6 = (float)((float10)fVar6 * (float10)*(double *)&REFG(undefined, 0x10f59a0) -
                           (float10)*(double *)&REFG(undefined, 0x10f5998));
            (*(float *)(gen_frame + 0x5c)) = fVar6;
            fVar9 = ((float10)GEN_TOD(fsin((float10)fVar6)));
            fVar3 = (float)fVar9;
            (*(float *)(gen_frame + 0x54)) = fVar3;
            (*(float *)(gen_frame + 0x40)) = fVar3;
            fVar9 = ((float10)GEN_TOD(fcos((float10)fVar6)));
            fVar6 = (float)fVar9;
            (*(float *)(gen_frame + 0x54)) = fVar6;
            (*(float *)(gen_frame + 0x48)) = fVar6;
            fVar9 = (float10)*(double *)&REFG(undefined, 0x1094560);
            (*(float *)(gen_frame + 0x40)) = (float)((float10)fVar3 * fVar9);
            (*(float *)(gen_frame + 0x44)) = (float)((float10)0 * fVar9);
            (*(float *)(gen_frame + 0x48)) = (float)(fVar9 * (float10)fVar6);
            pfVar7 = (float *)F_00a5feb0(*(undefined * PTR32 *)this GEN_EDX_ARG);
            fVar10 = (float10)(*(float *)(gen_frame + 0x40));
            (*(float *)(gen_frame + 0x40)) = (float)(fVar10 + (float10)*pfVar7);
            fVar9 = (float10)(*(float *)(gen_frame + 0x44));
            (*(float *)(gen_frame + 0x44)) = (float)((float10)pfVar7[1] + fVar9);
            fVar4 = (float10)(*(float *)(gen_frame + 0x48));
            (*(float *)(gen_frame + 0x48)) = (float)((float10)pfVar7[2] + fVar4);
            fVar6 = gen_bits2f(F_00a9f7c0(*(undefined4 *)this GEN_EDX_ARG,(float)(fVar10 + (float10)*pfVar7),
                                            (float)((float10)pfVar7[1] + fVar9),
                                            (float)((float10)pfVar7[2] + fVar4),(*(float *)(gen_frame + 0x5c)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc))))
            ;
          }
        }
        if (*(char *)((int)gen_fl2bits((*(float *)(gen_frame + 0x50))) + 0x14) == '\0') {
          fVar3 = ((float)GEN_TOF(((float10)*pfVar8 -
                         (float10)*(float *)((int)gen_fl2bits(REFG(undefined4, 0x137104c)) + 0x1198))));
          (*(float *)(gen_frame + 0x50)) = fVar3;
          *pfVar8 = fVar3;
          if ((float10)fVar3 <= (float10)0) {
            *pfVar8 = 0.0;
          }
        }
      }
    }
    pfVar8 = pfVar8 + 3;
    iVar1 = (*(int *)(gen_frame + 0x58)) - 1;
    (*(int *)(gen_frame + 0x58)) = iVar1;
  } while (iVar1 != 0);
  return (uint)gen_fl2bits(fVar6);
}

