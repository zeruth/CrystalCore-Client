#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00e05660 */
ushort F_00e05660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe05660u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x12) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00e05670 */
uint F_00e05670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe05670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  code * pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  switch((unsigned int)(uintptr_t)(param_3)) {
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
  case 0x18: ;
  case 0x1f: ;
  case 0x20: ;
    uVar3 = F_00da6030(param_1);
    return uVar3;
  case 0x13: ;
    uVar3 = F_00e05670(param_1,param_2,(uint)*(byte *)((int)param_1 + 0xd));
    return uVar3;
  case 0x14: ;
  case 0x15: ;
  case 0x1d: ;
  case 0x1e: ;
  case 0x21: ;
    uVar3 = (uint)*param_2;
    break;
  case 0x16: ;
    iVar4 = 4;
  case 0x1a: ;
    return iVar4 + 4 + (uint)*param_2;
  case 0x17: ;
    return 0;
  case 0x19: ;
    uVar3 = F_00da5fc0(param_1);
    uVar3 = F_00d929c0(uVar3);
    break;
  case 0x1b: ;
    return (uint)*param_2 * 2 + 4;
  case 0x1c: ;
    return (uint)*param_2 * 2;
  case 0x22: ;
    return 4;
  default: ;
    F_00da0a80(((undefined1 *)(gen_frame + 0x200)),((undefined1 *)(gen_frame + 0x0)),0x200);
    F_00d9fe80(((undefined1 *)(gen_frame + 0x200)),"Unknown class member type in structureLayout::getMemberSize().");
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                      (REFG(int * PTR32, 0x15dff78),3,0x50a18b58,((undefined1 *)(gen_frame + 0x0)),"Util\\hkStructureLayout.cpp",0xcd);
    if (uVar3 == 0) {
      F_00d9fda0(((undefined1 *)(gen_frame + 0x200)));
      return 0;
    }
    pcVar1 = ((code *)GEN_TOP(swi(3)));
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  uVar2 = F_00da5ff0(param_1);
  if (uVar2 != 0) {
    uVar2 = F_00da5ff0(param_1);
    return uVar2 * uVar3;
  }
  return uVar3;
}

/* ref: FUN_00e05800 */
uint F_00e05800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe05800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  undefined * this;
  uint uVar2;
  int iVar3;
  
  uVar1 = 0xffffffff;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
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
  case 0x18: ;
  case 0x1f: ;
  case 0x20: ;
  case 0x22: ;
    uVar1 = F_00da6140(param_1);
    break;
  case 0x13: ;
    uVar1 = F_00e05800(param_1,(uint)*(byte *)((int)param_1 + 0xd),param_3);
    break;
  case 0x14: ;
  case 0x15: ;
  case 0x16: ;
  case 0x1a: ;
  case 0x1b: ;
  case 0x1c: ;
  case 0x1d: ;
  case 0x1e: ;
  case 0x21: ;
    uVar1 = param_3;
    break;
  case 0x19: ;
    uVar1 = 1;
    this = (undefined *)F_00da5fc0(param_1);
    iVar3 = 0;
    uVar2 = F_00d927e0(this);
    if (0 < (int)uVar2) {
      do {
        uVar2 = F_00d92800(this,iVar3);
        uVar2 = F_00e05800((undefined *)uVar2,(uint)*(byte *)(uVar2 + 0xc),param_3);
        if ((int)uVar1 < (int)uVar2) {
          uVar1 = uVar2;
        }
        iVar3 = iVar3 + 1;
        uVar2 = F_00d927e0(this);
      } while (iVar3 < (int)uVar2);
    }
  }
  if (((*(ushort *)((int)param_1 + 0x10) & 0x180) != 0) &&
     (uVar2 = (uint)((*(ushort *)((int)param_1 + 0x10) & 0x180) == 0x100) * 8 + 8,
     (int)uVar1 < (int)uVar2)) {
    uVar1 = uVar2;
  }
  return uVar1;
}

/* ref: FUN_00e05900 */
uint F_00e05900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe05900u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined4 in_ecx;
  uint uVar2;
  uint uVar3;
  undefined * this;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte * pbVar7;
  undefined * pvVar8;
  
  this = (*(undefined * PTR32 *)&gen_args[0]);
  F_00dbd8b0((*(undefined * PTR32 *)&gen_args[2]),&REFG(undefined * PTR32, 0x13516ac),(*(undefined * PTR32 *)&gen_args[0]),0);
  if ((*(undefined * PTR32 *)&gen_args[3]) != (undefined *)0x0) {
    uVar2 = F_00d927e0((*(undefined * PTR32 *)&gen_args[0]));
    (*(uint *)(gen_frame + 0x14)) = uVar2;
    (*(undefined * PTR32 *)&gen_args[0]) = (undefined *)0x0;
    if (0 < (int)uVar2) {
      do {
        uVar2 = F_00d92840(this,(*(undefined * PTR32 *)&gen_args[0]));
        if (*(int *)(uVar2 + 4) != 0) {
          uVar3 = F_00da5fc0(uVar2);
          uVar3 = F_00dbd930((*(undefined * PTR32 *)&gen_args[2]),uVar3);
          if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 8))) < (int)uVar3) {
            pbVar7 = (*(byte * PTR32 *)&gen_args[1]);
            pvVar8 = (*(undefined * PTR32 *)&gen_args[2]);
            iVar6 = (int)(*(undefined * PTR32 *)&gen_args[3]);
            uVar2 = F_00da5fc0(uVar2);
            F_00e05900((undefined *)uVar2,pbVar7,pvVar8,(undefined *)iVar6);
          }
        }
        (*(undefined * PTR32 *)&gen_args[0]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 1)));
      } while ((int)(*(undefined * PTR32 *)&gen_args[0]) < (int)(*(uint *)(gen_frame + 0x14)));
    }
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0x80000000;
  F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x4)),0x10,4);
  for (; this != (undefined *)0x0; this = (undefined *)F_00d92620(this)) {
    (*(undefined * PTR32 *)&gen_args[3]) = this;
    F_00e05e90(&(*(int *)(gen_frame + 0x4)),&REFG(undefined * PTR32, 0x13516a4),0,&(*(undefined * PTR32 *)&gen_args[3]));
  }
  bVar1 = *(*(byte * PTR32 *)&gen_args[1]);
  uVar2 = 0;
  (*(undefined * PTR32 *)&gen_args[3]) = (undefined *)0x1;
  (*(uint *)(gen_frame + 0x10)) = (uint)bVar1;
  (*(int *)(gen_frame + 0x18)) = 0;
  if (0 < (*(int *)(gen_frame + 0x8))) {
    do {
      uVar3 = (*(uint *)(gen_frame + 0x10));
      in_ecx = *(undefined4 *)((*(int *)(gen_frame + 0x4)) + (*(int *)(gen_frame + 0x18)) * 4);
      (*(uint *)(gen_frame + 0x14)) = 0;
      uVar4 = F_00d926f0(in_ecx);
      if (0 < (int)uVar4) {
        do {
          if ((int)uVar2 % (int)uVar3 != 0) {
            uVar2 = uVar2 + (uVar3 - (int)uVar2 % (int)uVar3);
          }
          uVar2 = uVar2 + uVar3;
          if ((int)(*(undefined * PTR32 *)&gen_args[3]) < (int)uVar3) {
            (*(undefined * PTR32 *)&gen_args[3]) = (undefined *)uVar3;
          }
          (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) + 1;
          uVar4 = F_00d926f0(in_ecx);
        } while ((int)(*(uint *)(gen_frame + 0x14)) < (int)uVar4);
      }
      iVar6 = 0;
      uVar3 = F_00d92850(in_ecx);
      if (0 < (int)uVar3) {
        do {
          uVar3 = F_00d92860(in_ecx,iVar6);
          if (((uVar2 == 0) && ((*(int *)(gen_frame + 0x18)) != 0)) && ((*(byte * PTR32 *)&gen_args[1])[3] == 0)) {
            uVar2 = 1;
          }
          uVar4 = F_00e05800(uVar3,(uint)*(byte *)(uVar3 + 0xc),(uint)*(*(byte * PTR32 *)&gen_args[1]));
          if ((int)(*(undefined * PTR32 *)&gen_args[3]) < (int)uVar4) {
            (*(undefined * PTR32 *)&gen_args[3]) = (undefined *)uVar4;
          }
          if ((int)uVar2 % (int)uVar4 != 0) {
            uVar2 = uVar2 + (uVar4 - (int)uVar2 % (int)uVar4);
          }
          if (*(ushort *)(uVar3 + 0x12) != uVar2) {
            F_00e05660(uVar3,uVar2);
          }
          uVar3 = F_00e05670(uVar3,(*(byte * PTR32 *)&gen_args[1]),(uint)*(byte *)(uVar3 + 0xc));
          uVar2 = uVar2 + uVar3;
          iVar6 = iVar6 + 1;
          uVar3 = F_00d92850(in_ecx);
        } while (iVar6 < (int)uVar3);
      }
      uVar3 = uVar2;
      if ((int)uVar2 % (int)(*(undefined * PTR32 *)&gen_args[3]) != 0) {
        uVar3 = ((int)(*(undefined * PTR32 *)&gen_args[3]) - (int)uVar2 % (int)(*(undefined * PTR32 *)&gen_args[3])) + uVar2;
      }
      uVar4 = uVar3;
      if (uVar3 == 0) {
        uVar4 = 1;
      }
      uVar5 = F_00d929c0(in_ecx);
      if (uVar5 != uVar4) {
        F_00d929d0(in_ecx,uVar4);
      }
      if ((*(byte * PTR32 *)&gen_args[1])[2] == 0) {
        uVar2 = uVar3;
      }
      iVar6 = (*(int *)(gen_frame + 0x18)) + 1;
      (*(int *)(gen_frame + 0x18)) = iVar6;
    } while (iVar6 < (*(int *)(gen_frame + 0x8)));
  }
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar2 = (*(uint *)(gen_frame + 0xc));
  if (-1 < (int)(*(uint *)(gen_frame + 0xc))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x4)),(*(uint *)(gen_frame + 0xc)) * 4);
  }
  return uVar2;
}

/* ref: FUN_00e05b60 */
uint F_00e05b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe05b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00dbd930(param_2,param_1);
  if (*(int *)((int)param_2 + 8) < (int)uVar1) {
    uVar1 = F_00e05900(param_1,this,param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_00e05ba0 */
uint F_00e05ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe05ba0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return *(*(ushort * PTR32 *)&gen_args[0]) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00e05be0 */
uint F_00e05be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe05be0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e05c10 */
uint F_00e05c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe05c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e05c40 */
unsigned int F_00e05c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe05c40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e05c70 */
ushort F_00e05c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe05c70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x12) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00e05c80 */
uint F_00e05c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe05c80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *(int *)(in_ecx + 4) != 0;
  return param_2;
}

/* ref: FUN_00e05cc0 */
uint F_00e05cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe05cc0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e05d10 */
unsigned int F_00e05d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe05d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  uint uVar1;
  undefined4 * puVar2;
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
    F_00d95690(param_1,this,iVar3,4);
  }
  F_00da38f0(*(int *)this + (param_2 + param_5) * 4,*(int *)this + (param_3 + param_2) * 4,
               ((iVar4 - param_2) - param_3) * 4);
  puVar2 = (undefined4 *)(*(int *)this + param_2 * 4);
  if (0 < param_5) {
    iVar3 = param_4 - (int)puVar2;
    iVar4 = param_5;
    do {
      *puVar2 = *(undefined4 *)(iVar3 + (int)puVar2);
      puVar2 = puVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(int *)((int)this + 4) = iVar5;
  return 0;
}

/* ref: FUN_00e05db0 */
uint F_00e05db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe05db0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e05dd0 */
uint F_00e05dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe05dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd930(this,param_2);
  *(bool *)param_1 = (int)uVar1 <= *(int *)((int)this + 8);
  return param_1;
}

/* ref: FUN_00e05df0 */
uint F_00e05df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe05df0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e05e30 */
uint F_00e05e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe05e30u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e05e70 */
unsigned int F_00e05e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe05e70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00e05d10(this,param_1,param_2,0,param_3,param_4);
  return 0;
}

/* ref: FUN_00e05e90 */
unsigned int F_00e05e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe05e90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00e05e70(this,param_1,param_2,param_3,1);
  return 0;
}

/* ref: FUN_00e05eb0 */
uint F_00e05eb0(unsigned int gen_a0)
{
  GEN_ENTER(0xe05eb0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e05ef0 */
unsigned int F_00e05ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe05ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00e05e90(this,&REFG(undefined * PTR32, 0x13516a4),param_1,param_2);
  return 0;
}

/* ref: FUN_00e05f10 */
uint F_00e05f10(unsigned int gen_a0)
{
  GEN_ENTER(0xe05f10u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e05f60 */
uint F_00e05f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe05f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if ((*(int *)this == *param_1) && (*(int *)((int)this + 4) == param_1[1])) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00e05f90 */
uint F_00e05f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe05f90u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(*(uint * PTR32 *)&gen_args[0]) >> 4) * -0x61c8864f & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00e05fb0 */
uint F_00e05fb0(unsigned int gen_a0)
{
  GEN_ENTER(0xe05fb0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0xffffffff;
  return (uint)param_1;
}

/* ref: FUN_00e05fc0 */
byte F_00e05fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xe05fc0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  return *param_1 != -1;
}

/* ref: FUN_00e05fd0 */
uint F_00e05fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe05fd0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00e06010 */
uint F_00e06010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe06010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00e06040 */
uint F_00e06040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe06040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  return (uint)this;
}

/* ref: FUN_00e06080 */
uint F_00e06080(unsigned int gen_a0)
{
  GEN_ENTER(0xe06080u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  char * pcVar2;
  
  uVar1 = (*(undefined4 *)&gen_args[0]);
  pcVar2 = (char *)F_00d929e0((*(undefined4 *)&gen_args[0]),(int)&(*(undefined4 *)&gen_args[0]) + 3);
  if (*pcVar2 != '\0') {
    pcVar2 = (char *)F_00d92650(&REFG(undefined, 0x15da420),&(*(undefined1 *)(gen_frame + 0xb)),uVar1);
    if (*pcVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00e060d0 */
uint F_00e060d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe060d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  switch((unsigned int)(uintptr_t)((&REFG(undefined, 0x114d578))[param_2 * 4])) {
  case 1: ;
    return *((uint *)GEN_TOP(((int)param_1 + (uint)(byte)(&REFG(undefined, 0x114d579))[param_2 * 4] * 4 + 0xc)));
  default: ;
    return 0;
  case 4: ;
    uVar1 = F_00e1a6a0(param_1,*((undefined4 *)GEN_TOP(((int)param_1 + (uint)(byte)(&REFG(undefined, 0x114d579))[param_2 * 4] * 4 + 0xc
                                  ))),(uint)(byte)(&REFG(undefined, 0x114d57a))[param_2 * 4]);
    return uVar1;
  case 5: ;
    if (param_3 != 0) {
      uVar1 = F_00e1a240(param_1,param_3);
      uVar1 = F_00e1a640(param_1,uVar1);
      return uVar1;
    }
switchD_00e060e4_caseD_7: ;
    uVar1 = F_00e1a640(param_1,*(undefined4 *)((int)param_1 + 8));
    return uVar1;
  case 6: ;
    uVar1 = F_00e1a240(param_1,param_3);
    return uVar1;
  case 7: ;
    goto switchD_00e060e4_caseD_7;
  }
}

/* ref: FUN_00e06180 */
uint F_00e06180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe06180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = 0;
  switch((unsigned int)(uintptr_t)((&REFG(undefined, 0x114d578))[param_2 * 4])) {
  case 1: ;
    uVar1 = *((uint *)GEN_TOP(((int)param_1 + (uint)(byte)(&REFG(undefined, 0x114d579))[param_2 * 4] * 4 + 0xc)));
    break;
  case 2: ;
    if (param_3 == 0x19) {
      uVar1 = F_00e1a240(param_1,param_4);
    }
    else {
      uVar1 = F_00e060d0(param_1,param_3,param_4);
    }
    if (param_5 != 0) {
      uVar1 = F_00e1a6a0(param_1,uVar1,param_5);
    }
    uVar1 = F_00e1a670(param_1,uVar1);
    return uVar1;
  case 3: ;
    uVar3 = 0;
    iVar2 = param_3;
    goto LAB_00e0623b;
  case 4: ;
    uVar1 = F_00e1a6a0(param_1,*((undefined4 *)GEN_TOP(((int)param_1 + (uint)(byte)(&REFG(undefined, 0x114d579))[param_2 * 4] * 4 + 0xc
                                  ))),(uint)(byte)(&REFG(undefined, 0x114d57a))[param_2 * 4]);
    break;
  case 5: ;
    uVar1 = F_00e060d0(param_1,param_3,param_4);
    uVar1 = F_00e1a640(param_1,uVar1);
    break;
  case 6: ;
  case 7: ;
    iVar2 = param_2;
    uVar3 = param_4;
LAB_00e0623b: ;
    uVar1 = F_00e060d0(param_1,iVar2,uVar3);
  }
  if (param_5 != 0) {
    uVar1 = F_00e1a6a0(param_1,uVar1,param_5);
  }
  return uVar1;
}

/* ref: FUN_00e06280 */
uint F_00e06280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe06280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  if (param_4 != 0) {
    uVar1 = F_00d92610(param_4);
    uVar1 = F_00e06180(param_1,param_2,param_3,uVar1,param_5);
    return uVar1;
  }
  uVar1 = F_00e06180(param_1,param_2,param_3,0,param_5);
  return uVar1;
}

/* ref: FUN_00e062e0 */
uint F_00e062e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe062e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  uint uVar2;
  undefined4 * in_ecx;
  int * piVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  uVar2 = F_00d927e0(param_1);
  if (0 < (int)uVar2) {
    do {
      in_ecx = (undefined4 *)F_00d92800(param_1,iVar5);
      if (*(char *)(in_ecx + 3) == '\"') {
        ((code *)*(gen_code32 *)(*(int *)*param_2 + 0xc))((int *)*param_2,&(*(int * PTR32 *)(gen_frame + 0xc)),*in_ecx);
        piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x28))((*(int * PTR32 *)(gen_frame + 0xc)),(*(undefined4 *)(gen_frame + 0x10)))));
        if (piVar3 != (int *)0x0) {
          *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + 1;
          piVar3[2] = piVar3[2] + 1;
        }
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x14))(piVar3);
        uVar4 = F_00da61f0(in_ecx);
        (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) + (uVar4 * uVar2 + 0xf & 0xfffffff0);
        *(short *)((int)piVar3 + 6) = *(short *)((int)piVar3 + 6) + -1;
        piVar1 = piVar3 + 2;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          ((code *)*(gen_code32 *)*piVar3)(piVar3,1);
        }
      }
      iVar5 = (*(int *)(gen_frame + 0x14)) + 1;
      (*(int *)(gen_frame + 0x14)) = iVar5;
      uVar2 = F_00d927e0(param_1);
    } while (iVar5 < (int)uVar2);
    return (*(uint *)(gen_frame + 0x18));
  }
  return 0;
}

/* ref: FUN_00e063b0 */
uint F_00e063b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe063b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00e1f040(((undefined1 *)(gen_frame + 0x8)),param_1,param_2);
  uVar1 = F_00e1f710(this);
  F_00e06bd0(((undefined1 *)(gen_frame + 0x10)),&REFG(undefined * PTR32, 0x13516ac));
  return uVar1;
}

/* ref: FUN_00e063f0 */
uint F_00e063f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe063f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_00e08930(((undefined1 *)(gen_frame + 0x0)),param_2,1,param_4);
  uVar1 = F_00e09020(this,param_1,param_3);
  F_00e089b0(((undefined1 *)(gen_frame + 0x0)));
  return uVar1;
}

/* ref: FUN_00e06430 */
uint F_00e06430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe06430u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 in_ecx;
  undefined * this;
  LPVOID pvVar1;
  undefined * pvVar2;
  undefined * pvVar3;
  uint uVar4;
  
  this = (undefined *)F_00e08930(((undefined1 *)(gen_frame + 0x8)),param_2,0,param_3);
  if (*param_1 == 0) {
    F_00e089b0(((undefined1 *)(gen_frame + 0x8)));
    return 0;
  }
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                             (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x70)));
  *(undefined2 *)((int)pvVar2 + 4) = 0x70;
  pvVar3 = (undefined *)F_00e24780(pvVar2,*(undefined4 *)((int)this + 0x4c));
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x50);
  if ((pvVar2 != (undefined *)0x0) && (pvVar2 != pvVar3)) {
    F_00d91a80(pvVar2);
  }
  *(undefined * PTR32 *)((int)this + 0x50) = pvVar3;
  F_00e08de0(this,&(*(int *)(gen_frame + 0x64)),param_1);
  if (((*(int *)(gen_frame + 0x64)) != 0) && ((*(int *)(gen_frame + 0x68)) != 0)) {
    F_00e086b0(this,*(undefined4 *)((int)this + 0x50));
    in_ecx = *(undefined4 *)((int)this + 0x50);
    uVar4 = F_00d92610((*(int *)(gen_frame + 0x68)));
    F_00e242a0(in_ecx,(*(int *)(gen_frame + 0x64)),uVar4);
    pvVar2 = *(undefined * PTR32 *)((int)this + 0x50);
    F_00d919e0(pvVar2);
    if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
      F_00d91a80(*(undefined * PTR32 *)((int)this + 0x50));
    }
    *(undefined4 *)((int)this + 0x50) = 0;
    F_00e089b0(((undefined1 *)(gen_frame + 0x8)));
    return (uint)pvVar2;
  }
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x50));
  }
  *(undefined4 *)((int)this + 0x50) = 0;
  F_00e089b0(((undefined1 *)(gen_frame + 0x8)));
  return 0;
}

/* ref: FUN_00e06540 */
uint F_00e06540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06540u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = REFG(int * PTR32, 0x15e3738);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0xc))))(REFG(int * PTR32, 0x15e3738));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
  uVar2 = F_00e063f0(param_1,uVar3,uVar2,param_2);
  return uVar2;
}

/* ref: FUN_00e06580 */
uint F_00e06580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06580u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15e3738) + 0x10))))(REFG(int * PTR32, 0x15e3738));
  uVar1 = F_00e06430(param_1,uVar1,param_2);
  return uVar1;
}

/* ref: FUN_00e065b0 */
uint F_00e065b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe065b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00e065c0 */
uint F_00e065c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe065c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00e065f0 */
uint F_00e065f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe065f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00e06600 */
uint F_00e06600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00e06690 */
uint F_00e06690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06690u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = (*(uint *)(in_ecx + 4) & 0x80000000) == 0;
  return param_2;
}

/* ref: FUN_00e066b0 */
uint F_00e066b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe066b0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  return (uint)(((*(uint *)&gen_args[0]) - 1 & (*(uint *)&gen_args[0])) == 0);
}

/* ref: FUN_00e06740 */
uint F_00e06740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06740u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00e06790 */
uint F_00e06790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06790u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e067a0 */
uint F_00e067a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe067a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e067f0 */
uint F_00e067f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe067f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)this + 4 + param_2 * 0x10);
  *param_1 = *(undefined4 *)(*(int *)this + param_2 * 0x10);
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00e06810 */
uint F_00e06810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe06810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)this + 0xc + param_2 * 0x10);
  *param_1 = *(undefined4 *)(*(int *)this + 8 + param_2 * 0x10);
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00e06830 */
uint F_00e06830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe06830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  
  iVar1 = *(int *)this;
  *(undefined4 *)(iVar1 + 8 + param_1 * 0x10) = param_2;
  *(undefined4 *)(iVar1 + 0xc + param_1 * 0x10) = param_3;
  return param_1 * 2;
}

/* ref: FUN_00e06850 */
unsigned int F_00e06850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *(int *)((int)this + 8)) {
    piVar2 = (int *)(iVar1 * 0x10 + *(int *)this);
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 4;
    } while (iVar1 <= *(int *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_00e06880 */
uint F_00e06880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe06880u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00e068a0 */
uint F_00e068a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe068a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_00e07a00(this,param_1,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar3 = (param_2 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  iVar4 = uVar3 * 0x10;
  uVar2 = 1;
  if (*(int *)(iVar1 + iVar4) != -1) {
    do {
      if ((*(uint *)(iVar1 + iVar4) == param_2) && (*(int *)(iVar1 + 4 + iVar4) == param_3)) {
        uVar2 = 0;
        goto LAB_00e06912;
      }
      uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
      iVar4 = uVar3 * 0x10;
    } while (*(int *)(iVar4 + iVar1) != -1);
    uVar2 = 1;
  }
LAB_00e06912: ;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + uVar2;
  *(uint *)(iVar1 + uVar3 * 0x10) = param_2;
  *(int *)(iVar1 + 4 + uVar3 * 0x10) = param_3;
  iVar1 = *(int *)this;
  *(undefined4 *)(iVar1 + 8 + uVar3 * 0x10) = param_4;
  *(undefined4 *)(iVar1 + 0xc + uVar3 * 0x10) = param_5;
  return uVar2;
}

/* ref: FUN_00e06940 */
uint F_00e06940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe06940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  
  uVar1 = *(uint *)((int)this + 8);
  if (0 < (int)uVar1) {
    uVar3 = (param_1 >> 4) * -0x61c8864f & uVar1;
    puVar4 = (uint *)(uVar3 * 0x10 + *(int *)this);
    uVar2 = *puVar4;
    while (uVar2 != 0xffffffff) {
      if ((*puVar4 == param_1) && (puVar4[1] == param_2)) {
        return uVar3;
      }
      uVar3 = uVar3 + 1 & uVar1;
      puVar4 = (uint *)(uVar3 * 0x10 + *(int *)this);
      uVar2 = *puVar4;
    }
  }
  return uVar1 + 1;
}

/* ref: FUN_00e069a0 */
uint F_00e069a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe069a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint * puVar6;
  
  uVar1 = *(uint *)((int)this + 8);
  if (0 < (int)uVar1) {
    iVar2 = *(int *)this;
    uVar5 = (param_2 >> 4) * -0x61c8864f & uVar1;
    puVar6 = (uint *)(uVar5 * 0x10 + iVar2);
    uVar3 = *puVar6;
    while (uVar3 != 0xffffffff) {
      if ((*puVar6 == param_2) && (puVar6[1] == param_3)) {
        uVar4 = *(undefined4 *)(iVar2 + 0xc + uVar5 * 0x10);
        *param_1 = *(undefined4 *)(iVar2 + 8 + uVar5 * 0x10);
        param_1[1] = uVar4;
        return (uint)param_1;
      }
      uVar5 = uVar5 + 1 & uVar1;
      puVar6 = (uint *)(uVar5 * 0x10 + iVar2);
      uVar3 = *puVar6;
    }
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  return (uint)param_1;
}

/* ref: FUN_00e06a20 */
uint F_00e06a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe06a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  uint uVar2;
  
  uVar2 = F_00e06940(this,param_1,param_2);
  if ((int)uVar2 <= *(int *)((int)this + 8)) {
    iVar1 = *(int *)this;
    *param_3 = *(undefined4 *)(iVar1 + 8 + uVar2 * 0x10);
    param_3[1] = *(undefined4 *)(iVar1 + 0xc + uVar2 * 0x10);
    return 0;
  }
  return 1;
}

/* ref: FUN_00e06a60 */
unsigned int F_00e06a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  *(undefined4 *)(*(int *)this + param_1 * 0x10) = 0xffffffff;
  uVar6 = *(uint *)((int)this + 8);
  uVar2 = uVar6 + param_1 & uVar6;
  iVar1 = *(int *)(*(int *)this + uVar2 * 0x10);
  while (iVar1 != -1) {
    uVar2 = uVar2 + uVar6 & uVar6;
    iVar1 = *(int *)(*(int *)this + uVar2 * 0x10);
  }
  uVar3 = uVar2 + 1 & uVar6;
  uVar2 = param_1 + 1 & uVar6;
  iVar4 = uVar2 * 0x10;
  iVar1 = *(int *)(*(int *)this + iVar4);
  uVar5 = param_1;
  while (iVar1 != -1) {
    uVar6 = (*(uint *)(*(int *)this + iVar4) >> 4) * -0x61c8864f & uVar6;
    if ((((uVar2 < uVar3) || (uVar6 <= uVar5)) &&
        ((uVar5 <= uVar2 || ((uVar6 <= uVar5 && (uVar2 < uVar6)))))) &&
       ((uVar6 <= uVar5 || (uVar3 <= uVar6)))) {
      iVar1 = *(int *)this;
      *(undefined4 *)(iVar1 + uVar5 * 0x10) = *(undefined4 *)(iVar1 + iVar4);
      *(undefined4 *)(iVar1 + 4 + uVar5 * 0x10) = *(undefined4 *)(iVar1 + 4 + iVar4);
      iVar1 = *(int *)this;
      *(undefined4 *)(iVar1 + 8 + uVar5 * 0x10) = *(undefined4 *)(iVar1 + 8 + iVar4);
      *(undefined4 *)(iVar1 + 0xc + uVar5 * 0x10) = *(undefined4 *)(iVar1 + 0xc + iVar4);
      *(undefined4 *)(iVar4 + *(int *)this) = 0xffffffff;
      uVar5 = uVar2;
    }
    uVar6 = *(uint *)((int)this + 8);
    uVar2 = uVar2 + 1 & uVar6;
    iVar4 = uVar2 * 0x10;
    iVar1 = *(int *)(iVar4 + *(int *)this);
  }
  return 0;
}

/* ref: FUN_00e06b40 */
uint F_00e06b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  int local_8;
  
  uVar1 = *(uint *)((int)this + 8);
  if (-1 < (int)uVar1) {
    puVar2 = *(uint * PTR32 *)this;
    local_8 = uVar1 + 1;
    puVar5 = puVar2;
    do {
      uVar3 = *puVar5;
      if (uVar3 != 0xffffffff) {
        uVar4 = (uVar3 >> 4) * -0x61c8864f;
        while ((uVar4 = uVar4 & uVar1, puVar2[uVar4 * 4] != uVar3 ||
               (puVar2[uVar4 * 4 + 1] != puVar5[1]))) {
          uVar4 = uVar4 + 1;
        }
      }
      puVar5 = puVar5 + 4;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00e06ba0 */
uint F_00e06ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xe06ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 8) + 1;
  if (0 < iVar1) {
    in_EAX = 0;
    do {
      *(undefined4 *)(in_EAX + *(int *)this) = 0xffffffff;
      in_EAX = in_EAX + 0x10;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0x80000000;
  return in_EAX;
}

/* ref: FUN_00e06bd0 */
uint F_00e06bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00e06ba0(this);
  if ((*(uint *)((int)this + 4) & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))
                      (param_1,*(undefined4 *)this,(*(int *)((int)this + 8) + 1) * 0x10);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_00e06c20 */
uint F_00e06c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe06c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  *(undefined4 *)this = param_1;
  *(uint *)((int)this + 4) = param_2 | 0x80000000;
  *(uint *)((int)this + 8) = param_3 - 1U;
  return param_3 - 1U;
}

/* ref: FUN_00e06c40 */
uint F_00e06c40(unsigned int gen_a0)
{
  GEN_ENTER(0xe06c40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_1 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 2);
  }
  return iVar1 << 4;
}

/* ref: FUN_00e06c60 */
unsigned int F_00e06c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe06c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 >> 4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0x80000000;
  *(uint *)((int)this + 8) = uVar2 - 1;
  if (uVar2 != 0) {
    iVar1 = 0;
    do {
      *(undefined4 *)(iVar1 + *(int *)this) = 0xffffffff;
      iVar1 = iVar1 + 0x10;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e06ca0 */
uint F_00e06ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06ca0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e06cd0 */
uint F_00e06cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00e06d20 */
uint F_00e06d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe06d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = param_3;
  if (param_3 < 0) {
    iVar3 = *(int *)((int)this + 4);
  }
  if ((int)param_2 < iVar3) {
    piVar2 = (int *)(*(int *)this + param_2 * 8);
    uVar1 = param_2;
    do {
      if ((*piVar2 == *param_1) && (piVar2[1] == param_1[1])) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 2;
    } while ((int)uVar1 < iVar3);
  }
  return 0xffffffff;
}

/* ref: FUN_00e06d90 */
uint F_00e06d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06d90u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00e06df0 */
uint F_00e06df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe06df0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = *in_ecx;
  *param_2 = *(undefined8 *)(iVar1 + 8 + param_3 * 0x18);
  param_2[1] = *(undefined8 *)(iVar1 + param_3 * 0x18 + 0x10);
  return (uint)param_2;
}

/* ref: FUN_00e06e20 */
uint F_00e06e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe06e20u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined8 * puVar1;
  
  puVar1 = (undefined8 *)(*in_ecx + 8 + param_2 * 0x18);
  *puVar1 = CONCAT44(param_4,param_3);
  puVar1[1] = CONCAT44(param_6,param_5);
  return (uint)puVar1;
}

/* ref: FUN_00e06e50 */
unsigned int F_00e06e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  iVar1 = param_1 + 1;
  if (iVar1 <= *(int *)((int)this + 8)) {
    piVar2 = (int *)(*(int *)this + iVar1 * 0x18);
    do {
      if (*piVar2 != -1) {
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 6;
    } while (iVar1 <= *(int *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_00e06e80 */
uint F_00e06e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe06e80u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00e06ea0 */
uint F_00e06ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xe06ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined8 * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_00e074f0(this,param_1,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar2 = *(int *)this;
  uVar4 = (param_2 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  iVar5 = uVar4 * 0x18;
  uVar3 = 1;
  if (*(int *)(iVar2 + iVar5) != -1) {
    do {
      if ((*(uint *)(iVar2 + iVar5) == param_2) && (*(int *)(iVar2 + 4 + iVar5) == param_3)) {
        uVar3 = 0;
        goto LAB_00e06f1a;
      }
      uVar4 = uVar4 + 1 & *(uint *)((int)this + 8);
      iVar5 = uVar4 * 0x18;
    } while (*(int *)(iVar5 + iVar2) != -1);
    uVar3 = 1;
  }
LAB_00e06f1a: ;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + uVar3;
  iVar5 = uVar4 * 0x18;
  *(uint *)(iVar2 + iVar5) = param_2;
  *(int *)(iVar2 + 4 + iVar5) = param_3;
  puVar1 = (undefined8 *)(iVar5 + 8 + *(int *)this);
  *puVar1 = CONCAT44(param_5,param_4);
  puVar1[1] = CONCAT44(param_7,param_6);
  return uVar3;
}

/* ref: FUN_00e06f60 */
uint F_00e06f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe06f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar1 = *(uint *)((int)this + 8);
  if (0 < (int)uVar1) {
    iVar2 = *(int *)this;
    uVar4 = (param_1 >> 4) * -0x61c8864f & uVar1;
    iVar3 = *(int *)(iVar2 + uVar4 * 0x18);
    while (iVar3 != -1) {
      puVar5 = (uint *)(iVar2 + uVar4 * 0x18);
      if ((*puVar5 == param_1) && (puVar5[1] == param_2)) {
        return uVar4;
      }
      uVar4 = uVar4 + 1 & uVar1;
      iVar3 = *(int *)(iVar2 + uVar4 * 0x18);
    }
  }
  return uVar1 + 1;
}

/* ref: FUN_00e06fc0 */
uint F_00e06fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xe06fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 8) + 1;
  if (0 < iVar1) {
    in_EAX = 0;
    do {
      *(undefined4 *)(in_EAX + *(int *)this) = 0xffffffff;
      in_EAX = in_EAX + 0x18;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0x80000000;
  return in_EAX;
}

/* ref: FUN_00e06ff0 */
uint F_00e06ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe06ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00e06fc0(this);
  if ((*(uint *)((int)this + 4) & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))
                      (param_1,*(undefined4 *)this,(*(int *)((int)this + 8) * 3 + 3) * 8);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_00e07050 */
unsigned int F_00e07050(unsigned int gen_a0)
{
  GEN_ENTER(0xe07050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00e07070 */
unsigned int F_00e07070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe07070u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e070c0 */
unsigned int F_00e070c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe070c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    if (this_00 != param_1) {
      F_00d91a80(this_00);
    }
    *(undefined * PTR32 *)this = param_1;
    return 0;
  }
  *(undefined * PTR32 *)this = param_1;
  return 0;
}

/* ref: FUN_00e07160 */
uint F_00e07160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe07160u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00e07180 */
uint F_00e07180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe07180u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 8 + param_2 * 0xc);
}

/* ref: FUN_00e071a0 */
uint F_00e071a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe071a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_00e07420(this,param_1,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar3 = (param_2 >> 4) * -0x61c8864f & *(uint *)((int)this + 8);
  iVar4 = uVar3 * 0xc;
  uVar2 = 1;
  if (*(int *)(iVar1 + iVar4) != -1) {
    do {
      if ((*(uint *)(iVar1 + iVar4) == param_2) && (*(int *)(iVar1 + 4 + iVar4) == param_3)) {
        uVar2 = 0;
        goto LAB_00e07216;
      }
      uVar3 = uVar3 + 1 & *(uint *)((int)this + 8);
      iVar4 = uVar3 * 0xc;
    } while (*(int *)(iVar4 + iVar1) != -1);
    uVar2 = 1;
  }
LAB_00e07216: ;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + uVar2;
  iVar4 = uVar3 * 0xc;
  *(uint *)(iVar1 + iVar4) = param_2;
  *(int *)(iVar1 + 4 + iVar4) = param_3;
  *(undefined4 *)(iVar4 + 8 + *(int *)this) = param_4;
  return uVar2;
}

/* ref: FUN_00e07250 */
uint F_00e07250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe07250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar1 = *(uint *)((int)this + 8);
  if (0 < (int)uVar1) {
    iVar2 = *(int *)this;
    uVar4 = (param_1 >> 4) * -0x61c8864f & uVar1;
    iVar3 = *(int *)(iVar2 + uVar4 * 0xc);
    while (iVar3 != -1) {
      puVar5 = (uint *)(iVar2 + uVar4 * 0xc);
      if ((*puVar5 == param_1) && (puVar5[1] == param_2)) {
        return uVar4;
      }
      uVar4 = uVar4 + 1 & uVar1;
      iVar3 = *(int *)(iVar2 + uVar4 * 0xc);
    }
  }
  return uVar1 + 1;
}

/* ref: FUN_00e072b0 */
uint F_00e072b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe072b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar1 = *(uint *)((int)this + 8);
  if (0 < (int)uVar1) {
    iVar2 = *(int *)this;
    uVar4 = (param_1 >> 4) * -0x61c8864f & uVar1;
    iVar3 = *(int *)(iVar2 + uVar4 * 0xc);
    while (iVar3 != -1) {
      puVar5 = (uint *)(iVar2 + uVar4 * 0xc);
      if ((*puVar5 == param_1) && (puVar5[1] == param_2)) {
        return *(uint *)(iVar2 + 8 + uVar4 * 0xc);
      }
      uVar4 = uVar4 + 1 & uVar1;
      iVar3 = *(int *)(iVar2 + uVar4 * 0xc);
    }
  }
  return param_3;
}

/* ref: FUN_00e07310 */
uint F_00e07310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe07310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  *(undefined4 *)(*(int *)this + param_1 * 0xc) = 0xffffffff;
  uVar7 = *(uint *)((int)this + 8);
  uVar4 = uVar7 + param_1 & uVar7;
  iVar1 = *(int *)(*(int *)this + uVar4 * 0xc);
  while (iVar1 != -1) {
    uVar4 = uVar4 + uVar7 & uVar7;
    iVar1 = *(int *)(*(int *)this + uVar4 * 0xc);
  }
  uVar5 = uVar4 + 1 & uVar7;
  uVar6 = param_1 + 1 & uVar7;
  uVar4 = uVar6 * 0xc;
  iVar1 = *(int *)(*(int *)this + uVar4);
  uVar3 = param_1;
  while (iVar1 != -1) {
    iVar1 = *(int *)this;
    uVar7 = (*(uint *)(iVar1 + uVar4) >> 4) * -0x61c8864f & uVar7;
    param_1 = uVar3;
    if ((((uVar6 < uVar5) || (uVar7 <= uVar3)) &&
        ((uVar3 <= uVar6 || ((uVar7 <= uVar3 && (uVar6 < uVar7)))))) &&
       ((uVar7 <= uVar3 || (uVar5 <= uVar7)))) {
      iVar2 = uVar3 * 0xc;
      *(undefined4 *)(iVar2 + iVar1) = *(undefined4 *)(iVar1 + uVar4);
      *(undefined4 *)(iVar2 + 4 + iVar1) = *(undefined4 *)(iVar1 + 4 + uVar4);
      *(undefined4 *)(iVar2 + 8 + *(int *)this) = *(undefined4 *)(*(int *)this + 8 + uVar4);
      *(undefined4 *)(uVar4 + *(int *)this) = 0xffffffff;
      param_1 = uVar6;
    }
    uVar7 = *(uint *)((int)this + 8);
    uVar6 = uVar6 + 1 & uVar7;
    uVar4 = uVar6 * 0xc;
    uVar3 = param_1;
    iVar1 = *(int *)(uVar4 + *(int *)this);
  }
  return uVar4;
}

/* ref: FUN_00e073f0 */
uint F_00e073f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe073f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 8) + 1;
  if (0 < iVar1) {
    in_EAX = 0;
    do {
      *(undefined4 *)(in_EAX + *(int *)this) = 0xffffffff;
      in_EAX = in_EAX + 0xc;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0x80000000;
  return in_EAX;
}

/* ref: FUN_00e07420 */
uint F_00e07420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe07420u, gen_a0, gen_a1, gen_a2, 0u);
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
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,iVar7 * 0xc);
  if (uVar3 != 0) {
    *(uint *)this = uVar3;
    if (0 < iVar7) {
      iVar4 = 0;
      iVar5 = iVar7;
      do {
        *(undefined4 *)(iVar4 + *(int *)this) = 0xffffffff;
        iVar4 = iVar4 + 0xc;
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
          F_00e071a0(this,param_1,*piVar8,piVar8[1],piVar8[2]);
        }
        iVar7 = param_2 + -1;
        piVar8 = piVar8 + 3;
        param_2 = iVar7;
      } while (iVar7 != 0);
    }
    if ((uVar1 & 0x80000000) == 0) {
      ((code *)*(gen_code32 *)(*param_1 + 8))(param_1,piVar2,iVar6 * 0xc);
    }
    return 0;
  }
  return 1;
}

/* ref: FUN_00e074f0 */
uint F_00e074f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe074f0u, gen_a0, gen_a1, gen_a2, 0u);
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
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,iVar7 * 0x18);
  if (uVar3 != 0) {
    *(uint *)this = uVar3;
    if (0 < iVar7) {
      iVar4 = 0;
      iVar5 = iVar7;
      do {
        *(undefined4 *)(iVar4 + *(int *)this) = 0xffffffff;
        iVar4 = iVar4 + 0x18;
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
          F_00e06ea0(this,param_1,*piVar8,piVar8[1],(int)*(undefined8 *)(piVar8 + 2),
                       (int)((ulonglong)*(undefined8 *)(piVar8 + 2) >> 0x20),
                       (int)*(undefined8 *)(piVar8 + 4),
                       (int)((ulonglong)*(undefined8 *)(piVar8 + 4) >> 0x20));
        }
        iVar7 = param_2 + -1;
        piVar8 = piVar8 + 6;
        param_2 = iVar7;
      } while (iVar7 != 0);
    }
    if ((uVar1 & 0x80000000) == 0) {
      ((code *)*(gen_code32 *)(*param_1 + 8))(param_1,piVar2,iVar6 * 0x18);
    }
    return 0;
  }
  return 1;
}

/* ref: FUN_00e075e0 */
uint F_00e075e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe075e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00e07600 */
uint F_00e07600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe07600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00e07620 */
uint F_00e07620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe07620u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00e07660 */
uint F_00e07660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe07660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00e07690 */
uint F_00e07690(unsigned int gen_a0)
{
  GEN_ENTER(0xe07690u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00e076c0 */
uint F_00e076c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe076c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00e076f0 */
unsigned int F_00e076f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe076f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x40);
  if (puVar3 < puVar3 + *(int *)((int)this + 0x44) * 2) {
    do {
      uVar1 = *puVar3;
      puVar2 = (undefined4 *)F_00d92c00((undefined *)puVar3[1],"hk.PostFinish");
      ((code *)*(gen_code32 *)*puVar2)(uVar1);
      puVar3 = puVar3 + 2;
    } while (puVar3 < ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x40) + *(int *)((int)this + 0x44) * 8))));
  }
  return 0;
}

/* ref: FUN_00e07770 */
uint F_00e07770(unsigned int gen_a0)
{
  GEN_ENTER(0xe07770u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00e07790 */
unsigned int F_00e07790(unsigned int gen_a0)
{
  GEN_ENTER(0xe07790u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00e077e0 */
uint F_00e077e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe077e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00e068a0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00e07810 */
uint F_00e07810(unsigned int gen_a0)
{
  GEN_ENTER(0xe07810u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00e07830 */
unsigned int F_00e07830(unsigned int gen_a0)
{
  GEN_ENTER(0xe07830u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00e07860 */
uint F_00e07860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe07860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00e06940(this,param_2,param_3);
  *(bool *)param_1 = (int)uVar1 <= *(int *)((int)this + 8);
  return param_1;
}

/* ref: FUN_00e07890 */
uint F_00e07890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe07890u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00e078b0 */
uint F_00e078b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe078b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 8 + param_2 * 0xc);
}

/* ref: FUN_00e078e0 */
uint F_00e078e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xe078e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  uint uVar1;
  
  uVar1 = F_00e06ea0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00e07950 */
uint F_00e07950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe07950u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e079a0 */
uint F_00e079a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe079a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00e06c60(this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00e079c0 */
uint F_00e079c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe079c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00e06940(this,param_1,param_2);
  if ((int)uVar1 <= *(int *)((int)this + 8)) {
    F_00e06a60(this,uVar1);
    return 0;
  }
  return 1;
}

/* ref: FUN_00e07a00 */
uint F_00e07a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe07a00u, gen_a0, gen_a1, gen_a2, 0u);
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
  uVar3 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,iVar7 << 4);
  if (uVar3 != 0) {
    *(uint *)this = uVar3;
    if (0 < iVar7) {
      iVar4 = 0;
      iVar5 = iVar7;
      do {
        *(undefined4 *)(iVar4 + *(int *)this) = 0xffffffff;
        iVar4 = iVar4 + 0x10;
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
          F_00e068a0(this,param_1,*piVar8,piVar8[1],piVar8[2],piVar8[3]);
        }
        iVar7 = param_2 + -1;
        piVar8 = piVar8 + 4;
        param_2 = iVar7;
      } while (iVar7 != 0);
    }
    if ((uVar1 & 0x80000000) == 0) {
      ((code *)*(gen_code32 *)(*param_1 + 8))(param_1,piVar2,iVar6 * 0x10);
    }
    return 0;
  }
  return 1;
}

/* ref: FUN_00e07ae0 */
uint F_00e07ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe07ae0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(int *)(in_ecx + 4) = *(int *)(in_ecx + 4) - param_2;
  return param_2;
}

/* ref: FUN_00e07af0 */
uint F_00e07af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe07af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00e073f0(this);
  if ((*(uint *)((int)this + 4) & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))
                      (param_1,*(undefined4 *)this,(*(int *)((int)this + 8) * 3 + 3) * 4);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_00e07b40 */
uint F_00e07b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe07b40u, gen_a0, gen_a1, gen_a2, 0u);
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
  uVar2 = F_00e07420(this,param_1,iVar1);
  return uVar2;
}

/* ref: FUN_00e07b70 */
uint F_00e07b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe07b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00e072b0((undefined *)((int)this + 0xc),param_1,param_2,0xffffffff);
  return uVar1;
}

/* ref: FUN_00e07b90 */
uint F_00e07b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe07b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = F_00e07250((undefined *)((int)this + 0xc),param_1,param_2);
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 8 + uVar6 * 0xc)));
  uVar6 = F_00e07310((undefined *)((int)this + 0xc),uVar6);
  if (iVar1 != -1) {
    iVar2 = *(int *)this;
    iVar5 = iVar1 * 0xc;
    iVar3 = *(int *)(iVar5 + 8 + iVar2);
    iVar4 = iVar1;
    while (iVar3 != -1) {
      iVar4 = *(int *)(iVar2 + 8 + iVar5);
      iVar5 = iVar4 * 0xc;
      iVar3 = *(int *)(iVar2 + 8 + iVar5);
    }
    uVar6 = iVar4 * 3;
    *(undefined4 *)(iVar2 + 8 + iVar4 * 0xc) = *(undefined4 *)((int)this + 0x18);
    *(int *)((int)this + 0x18) = iVar1;
  }
  return uVar6;
}

/* ref: FUN_00e07c00 */
uint F_00e07c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe07c00u, gen_a0, gen_a1, gen_a2, 0u);
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
  uVar2 = F_00e074f0(this,param_1,iVar1);
  return uVar2;
}

/* ref: FUN_00e07c30 */
uint F_00e07c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe07c30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00e071a0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00e07c50 */
uint F_00e07c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe07c50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e07c90 */
uint F_00e07c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe07c90u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e07cd0 */
unsigned int F_00e07cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe07cd0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e07d10 */
uint F_00e07d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe07d10u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e07d70 */
uint F_00e07d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe07d70u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * this_00;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 in_ecx;
  int iVar3;
  byte bVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  char * pcVar8;
  uint uVar9;
  uint local_8;
  
  puVar5 = (*(undefined4 * PTR32 *)&gen_args[1]);
  this_00 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  local_8 = 0;
  uVar7 = F_00e07b70(this_00,*(*(undefined4 * PTR32 *)&gen_args[1]),(*(undefined4 * PTR32 *)&gen_args[1])[1]);
  puVar6 = (*(undefined4 * PTR32 *)&gen_args[2]);
  uVar9 = local_8;
  while (uVar7 != 0xffffffff) {
    iVar3 = uVar7 * 0xc;
    puVar1 = *(undefined4 * PTR32 *)(*this_00 + iVar3);
    uVar2 = *(undefined4 *)(*this_00 + 4 + iVar3);
    *puVar1 = *(*(undefined4 * PTR32 *)&gen_args[2]);
    if ((char)uVar2 != '\0') {
      puVar1[1] = (*(undefined4 * PTR32 *)&gen_args[2])[1];
    }
    uVar9 = uVar9 + ((char)((uint)uVar2 >> 8) != '\0');
    uVar7 = *(uint *)(*this_00 + 8 + iVar3);
  }
  F_00e07b90(this_00,*puVar5,puVar5[1]);
  uVar2 = *puVar6;
  in_ecx = puVar6[1];
  pcVar8 = (char *)F_00d929e0(in_ecx,(int)&(*(undefined4 * PTR32 *)&gen_args[2]) + 3);
  if ((*pcVar8 == '\0') ||
     (pcVar8 = (char *)F_00d92650(&REFG(undefined, 0x15da420),(int)&(*(undefined4 * PTR32 *)&gen_args[1]) + 3,in_ecx), *pcVar8 == '\0')) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar9 = F_00e06ea0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))),&REFG(undefined * PTR32, 0x13516ac),*puVar5,puVar5[1],uVar2,
                       in_ecx,-(uint)bVar4 & uVar9,(*(undefined4 *)&gen_args[3]));
  return uVar9;
}

/* ref: FUN_00e07e80 */
uint F_00e07e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe07e80u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,0x10);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00e07ec0 */
uint F_00e07ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe07ec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00e079a0(this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00e07ef0 */
uint F_00e07ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe07ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00e07c00(this,&REFG(undefined * PTR32, 0x13516ac),param_1);
  return uVar1;
}

/* ref: FUN_00e07f10 */
uint F_00e07f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe07f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00e07b40(this,&REFG(undefined * PTR32, 0x13516ac),param_1);
  return uVar1;
}

/* ref: FUN_00e07f30 */
uint F_00e07f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xe07f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint * param_6 = (uint *)(uintptr_t)gen_a6;
  uint uVar1;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    uVar1 = F_00e07a00(this,param_1,*(int *)((int)this + 8) * 2 + 2);
    *param_6 = uVar1;
    if (uVar1 != 0) {
      return 0;
    }
  }
  else {
    *param_6 = 0;
  }
  uVar1 = F_00e068a0(this,param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00e07fa0 */
unsigned int F_00e07fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe07fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int iVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) < *(int *)((int)this + 4) * 2) {
    F_00e07a00(this,param_1,*(int *)((int)this + 8) * 2 + 2);
  }
  iVar1 = *(int *)this;
  uVar2 = (param_2 >> 4) * -0x61c8864f;
  while ((uVar2 = uVar2 & *(uint *)((int)this + 8), *(uint *)(iVar1 + uVar2 * 0x10) != param_2 ||
         (*(int *)(iVar1 + 4 + uVar2 * 0x10) != param_3))) {
    if (*(int *)(iVar1 + uVar2 * 0x10) == -1) {
      *(uint *)(iVar1 + uVar2 * 0x10) = param_2;
      *(int *)(iVar1 + 4 + uVar2 * 0x10) = param_3;
      iVar1 = *(int *)this;
      *(undefined4 *)(iVar1 + 8 + uVar2 * 0x10) = param_4;
      *(undefined4 *)(iVar1 + 0xc + uVar2 * 0x10) = param_5;
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
      return 0;
    }
    uVar2 = uVar2 + 1;
  }
  return 0;
}

/* ref: FUN_00e08020 */
uint F_00e08020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe08020u, gen_a0, gen_a1, gen_a2, 0u);
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
  uVar2 = F_00e07a00(this,param_1,iVar1);
  return uVar2;
}

/* ref: FUN_00e08050 */
uint F_00e08050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe08050u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e080a0 */
uint F_00e080a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe080a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = F_00e073f0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  return uVar1;
}

/* ref: FUN_00e080c0 */
uint F_00e080c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe080c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e08100 */
uint F_00e08100(unsigned int gen_a0)
{
  GEN_ENTER(0xe08100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e08140 */
uint F_00e08140(unsigned int gen_a0)
{
  GEN_ENTER(0xe08140u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e08180 */
unsigned int F_00e08180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe08180u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 8) = 0xffffffff;
      }
      iVar1 = iVar1 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e081a0 */
uint F_00e081a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe081a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 0x38) == (*(uint *)((int)this + 0x3c) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x34),4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x34) + *(int *)((int)this + 0x38) * 4)));
  *puVar1 = param_1;
  *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e081e0 */
unsigned int F_00e081e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe081e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  
  iVar3 = *(int *)((int)this + 0x30);
  iVar4 = 0;
  if (-1 < iVar3) {
    piVar6 = *(int * PTR32 *)((int)this + 0x28);
    do {
      if (*piVar6 != -1) break;
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 6;
    } while (iVar4 <= iVar3);
  }
  if (iVar4 <= iVar3) {
    do {
      uVar1 = *((undefined8 *)GEN_TOP((*(int *)((int)this + 0x28) + 8 + iVar4 * 0x18)));
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)((ulonglong)uVar1 >> 0x20);
      lVar2 = *((longlong *)GEN_TOP((*(int *)((int)this + 0x28) + iVar4 * 0x18 + 0x10)));
      uVar5 = F_00d92c00((*(undefined * PTR32 *)(gen_frame + 0x8)),"hk.PostFinish");
      (*(int *)(gen_frame + 0x4)) = (int)uVar1;
      if (uVar5 != 0) {
        if (*(uint *)((int)this + 0x44) == (*(uint *)((int)this + 0x48) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x40),8);
        }
        piVar6 = ((int *)GEN_TOP((*(int *)((int)this + 0x40) + *(int *)((int)this + 0x44) * 8)));
        *piVar6 = (*(int *)(gen_frame + 0x4));
        piVar6[1] = (int)(*(undefined * PTR32 *)(gen_frame + 0x8));
        *(int *)((int)this + 0x44) = *(int *)((int)this + 0x44) + 1;
      }
      (*(short *)(gen_frame + 0xc)) = (short)lVar2;
      if (0 < (*(short *)(gen_frame + 0xc))) {
        if (lVar2 < 0) {
          uVar5 = F_00d929c0((*(undefined * PTR32 *)(gen_frame + 0x8)));
          *(short *)((*(int *)(gen_frame + 0x4)) + 4) = (short)uVar5;
        }
        else {
          (*(undefined2 *)(gen_frame + 0x10)) = (undefined2)((ulonglong)lVar2 >> 0x20);
          *(undefined2 *)((*(int *)(gen_frame + 0x4)) + 4) = (*(undefined2 *)(gen_frame + 0x10));
        }
        *(short *)((*(int *)(gen_frame + 0x4)) + 6) = (*(short *)(gen_frame + 0xc));
      }
      iVar3 = *param_1;
      uVar5 = F_00d92610((*(undefined * PTR32 *)(gen_frame + 0x8)));
      ((code *)*(gen_code32 *)(iVar3 + 0x10))(param_1,(*(int *)(gen_frame + 0x4)),uVar5);
      F_00d929e0((*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined1 *)(gen_frame + 0x1b)));
      iVar3 = *(int *)((int)this + 0x30);
      iVar4 = iVar4 + 1;
      if (iVar4 <= iVar3) {
        piVar6 = ((int *)GEN_TOP((*(int *)((int)this + 0x28) + iVar4 * 0x18)));
        do {
          if (*piVar6 != -1) break;
          iVar4 = iVar4 + 1;
          piVar6 = piVar6 + 6;
        } while (iVar4 <= iVar3);
      }
    } while (iVar4 <= iVar3);
  }
  return 0;
}

/* ref: FUN_00e08320 */
uint F_00e08320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe08320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  F_00e080a0((undefined *)((int)this + 0xc));
  *(undefined4 *)((int)this + 4) = 0;
  F_00e06fc0((undefined *)((int)this + 0x28));
  *param_1 = 0;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00e08360 */
uint F_00e08360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe08360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_00e07f30(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00e08390 */
unsigned int F_00e08390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe08390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00e07fa0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,param_3,param_4);
  return 0;
}

/* ref: FUN_00e083c0 */
uint F_00e083c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe083c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00e08020(this,&REFG(undefined * PTR32, 0x13516ac),param_1);
  return uVar1;
}

/* ref: FUN_00e083e0 */
uint F_00e083e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe083e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e08400 */
uint F_00e08400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe08400u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e08450 */
uint F_00e08450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe08450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  if (param_1 != 0) {
    F_00e07c00(this,&REFG(undefined * PTR32, 0x13516ac),param_1);
  }
  return (uint)this;
}

/* ref: FUN_00e08490 */
uint F_00e08490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe08490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  if (param_1 != 0) {
    F_00e07b40(this,&REFG(undefined * PTR32, 0x13516ac),param_1);
  }
  return (uint)this;
}

/* ref: FUN_00e084d0 */
uint F_00e084d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe084d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e08510 */
uint F_00e08510(unsigned int gen_a0)
{
  GEN_ENTER(0xe08510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e08550 */
uint F_00e08550(unsigned int gen_a0)
{
  GEN_ENTER(0xe08550u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e08590 */
uint F_00e08590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe08590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0xc);
  }
  iVar1 = *(int *)this + *(int *)((int)this + 4) * 0xc;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 8) = 0xffffffff;
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 0xc;
}

/* ref: FUN_00e08630 */
uint F_00e08630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe08630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 0x44) == (*(uint *)((int)this + 0x48) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x40),0xc);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 0x40) + *(int *)((int)this + 0x44) * 0xc)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = CONCAT44(param_2,param_1);
    *(undefined4 *)(puVar1 + 1) = param_3;
  }
  *(int *)((int)this + 0x44) = *(int *)((int)this + 0x44) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e08690 */
uint F_00e08690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe08690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0((undefined *)((int)this + 0x10),&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e086b0 */
unsigned int F_00e086b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe086b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  undefined4 local_18;
  undefined * pvStack_14;
  
  iVar3 = *(int *)((int)this + 0x30);
  iVar6 = 0;
  if (-1 < iVar3) {
    piVar5 = *(int * PTR32 *)((int)this + 0x28);
    do {
      if (*piVar5 != -1) break;
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 6;
    } while (iVar6 <= iVar3);
  }
  if (iVar6 <= iVar3) {
    do {
      uVar2 = *((undefined8 *)GEN_TOP((*(int *)((int)this + 0x28) + 8 + iVar6 * 0x18)));
      pvStack_14 = (undefined *)((ulonglong)uVar2 >> 0x20);
      uVar4 = F_00d92610(pvStack_14);
      local_18 = (undefined4)uVar2;
      F_00dbd8b0((undefined *)(param_1 + 0x10),&REFG(undefined * PTR32, 0x13516ac),local_18,uVar4);
      uVar4 = F_00d92c00(pvStack_14,"hk.PostFinish");
      if (uVar4 != 0) {
        if (*(uint *)(param_1 + 0x68) == (*(uint *)(param_1 + 0x6c) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)(param_1 + 100),8);
        }
        puVar1 = ((undefined4 *)GEN_TOP((*(int *)(param_1 + 100) + *(int *)(param_1 + 0x68) * 8)));
        *puVar1 = local_18;
        puVar1[1] = pvStack_14;
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
      }
      iVar3 = *(int *)((int)this + 0x30);
      iVar6 = iVar6 + 1;
      if (iVar6 <= iVar3) {
        piVar5 = ((int *)GEN_TOP((*(int *)((int)this + 0x28) + iVar6 * 0x18)));
        do {
          if (*piVar5 != -1) break;
          iVar6 = iVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (iVar6 <= iVar3);
      }
    } while (iVar6 <= iVar3);
  }
  return 0;
}

/* ref: FUN_00e087b0 */
uint F_00e087b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe087b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00e07af0((undefined *)((int)this + 0xc),&REFG(undefined * PTR32, 0x13516ac));
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

/* ref: FUN_00e08800 */
uint F_00e08800(unsigned int gen_a0)
{
  GEN_ENTER(0xe08800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)((int)this + 0xc),iVar1 * 8);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar2 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00e08880 */
uint F_00e08880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe08880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  if (param_1 != 0) {
    F_00e08020(this,&REFG(undefined * PTR32, 0x13516ac),param_1);
  }
  return (uint)this;
}

/* ref: FUN_00e088e0 */
uint F_00e088e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe088e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0xc);
  }
  iVar1 = *(int *)this + *(int *)((int)this + 4) * 0xc;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 8) = 0xffffffff;
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 0xc;
}

/* ref: FUN_00e08930 */
uint F_00e08930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe08930u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  *(undefined4 *)((int)this + 0x24) = 0xffffffff;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0xffffffff;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0x80000000;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0x80000000;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  *(undefined * PTR32 *)((int)this + 0x4c) = param_1;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = param_2;
  *(undefined4 *)((int)this + 0x58) = param_3;
  return (uint)this;
}

/* ref: FUN_00e089b0 */
uint F_00e089b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe089b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x50));
  }
  *(undefined4 *)((int)this + 0x50) = 0;
  if (*(undefined * PTR32 *)((int)this + 0x4c) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x4c));
  }
  *(undefined4 *)((int)this + 0x4c) = 0;
  uVar1 = *(uint *)((int)this + 0x48);
  *(undefined4 *)((int)this + 0x44) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x40),uVar1 * 8);
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x48) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x3c);
  *(undefined4 *)((int)this + 0x38) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x34),uVar1 * 8);
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0x80000000;
  F_00e06ff0((undefined *)((int)this + 0x28),&REFG(undefined * PTR32, 0x13516ac));
  F_00e07af0((undefined *)((int)this + 0x18),&REFG(undefined * PTR32, 0x13516ac));
  uVar1 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  return uVar1;
}

/* ref: FUN_00e08ac0 */
uint F_00e08ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xe08ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 0x18);
  if (uVar2 != 0xffffffff) {
    *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(*(int *)this + 8 + uVar2 * 0xc);
    return uVar2;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0xc);
  }
  iVar1 = *(int *)this + *(int *)((int)this + 4) * 0xc;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 8) = 0xffffffff;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar2;
}

/* ref: FUN_00e08b20 */
uint F_00e08b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe08b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00e072b0((undefined *)((int)this + 0xc),param_1,param_2,0xffffffff);
  uVar3 = F_00e08ac0(this);
  puVar1 = (undefined4 *)(*(int *)this + uVar3 * 0xc);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = uVar2;
  uVar2 = F_00e071a0((undefined *)((int)this + 0xc),&REFG(undefined * PTR32, 0x13516ac),param_1,param_2,uVar3);
  return uVar2;
}

/* ref: FUN_00e08b80 */
uint F_00e08b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe08b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined8 * puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 * puVar5;
  int iVar6;
  int * piVar7;
  uint uVar8;
  int iVar9;
  
  if ((*(int *)((int)this + 0x54) != 0) && (*(char *)((int)param_1 + 5) != '\0')) {
    iVar9 = 0;
    if (0 < *(int *)((int)this + 0x38)) {
      piVar7 = *(int * PTR32 *)((int)this + 0x34);
      do {
        if ((*piVar7 == *param_2) && (piVar7[1] == param_2[1])) {
          if (iVar9 != -1) {
            return 1;
          }
          break;
        }
        iVar9 = iVar9 + 1;
        piVar7 = piVar7 + 2;
      } while (iVar9 < *(int *)((int)this + 0x38));
    }
  }
  piVar7 = (int *)((int)this + 0x28);
  uVar8 = F_00e06f60(piVar7,*param_2,param_2[1]);
  if ((int)uVar8 <= *(int *)((int)this + 0x30)) {
    iVar9 = uVar8 * 0x18;
    uVar2 = *(undefined8 *)(*piVar7 + 8 + iVar9);
    uVar3 = *(undefined8 *)(*piVar7 + 0x10 + iVar9);
    puVar5 = (undefined4 *)*param_1;
    iVar6 = param_1[1];
    (*(undefined4 *)(gen_frame + 0xc)) = (undefined4)uVar2;
    *puVar5 = (*(undefined4 *)(gen_frame + 0xc));
    if ((char)iVar6 != '\0') {
      (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)((ulonglong)uVar2 >> 0x20);
      puVar5[1] = (*(undefined4 *)(gen_frame + 0x10));
    }
    cVar4 = *(char *)((int)param_1 + 5);
    puVar1 = (undefined8 *)(*piVar7 + 8 + iVar9);
    *puVar1 = uVar2;
    (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x14)) + 0)) = (int)uVar3;
    (*(undefined8 *)(gen_frame + 0x14)) = CONCAT44((int)((ulonglong)uVar3 >> 0x20),(int)(*(undefined8 *)(gen_frame + 0x14)) + (uint)(cVar4 != '\0'));
    puVar1[1] = (*(undefined8 *)(gen_frame + 0x14));
    return 0;
  }
  uVar8 = F_00e08b20((undefined *)((int)this + 0xc),*param_2,param_2[1],param_1);
  if ((uVar8 != 0) && (*(char *)((int)param_1 + 5) != '\0')) {
    if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
    }
    piVar7 = ((int *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
    if (piVar7 != (int *)0x0) {
      *piVar7 = *param_2;
      piVar7[1] = param_2[1];
    }
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  }
  return 0;
}

/* ref: FUN_00e08cc0 */
uint F_00e08cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe08cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined8 * puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int * piVar10;
  int iVar11;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  if (0 < param_1[4]) {
    do {
      iVar8 = *(int *)((int)this + 0x50);
      puVar1 = (undefined4 *)(param_1[3] + (*(int *)(gen_frame + 0x8)) * 8);
      iVar11 = puVar1[1];
      if (iVar11 == -1) {
        uVar5 = *puVar1;
        piVar10 = (int *)(iVar8 + 0x34);
        if (*(uint *)(iVar8 + 0x38) == (*(uint *)(iVar8 + 0x3c) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar10,4);
        }
        *((undefined4 *)GEN_TOP((*piVar10 + *(int *)(iVar8 + 0x38) * 4))) = uVar5;
      }
      else {
        uVar5 = *puVar1;
        piVar10 = (int *)(iVar8 + 0x40);
        if (*(uint *)(iVar8 + 0x44) == (*(uint *)(iVar8 + 0x48) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar10,0xc);
        }
        puVar2 = ((undefined8 *)GEN_TOP((*piVar10 + *(int *)(iVar8 + 0x44) * 0xc)));
        if (puVar2 != (undefined8 *)0x0) {
          *puVar2 = CONCAT44(iVar11,uVar5);
          *(undefined4 *)(puVar2 + 1) = 6;
        }
      }
      piVar10[1] = piVar10[1] + 1;
      iVar8 = (*(int *)(gen_frame + 0x8)) + 1;
      (*(int *)(gen_frame + 0x8)) = iVar8;
    } while (iVar8 < param_1[4]);
  }
  iVar8 = 0;
  if (0 < param_1[1]) {
    iVar11 = 0;
    do {
      iVar7 = (*(int *)(gen_frame + 0x8));
      iVar6 = *param_1;
      uVar3 = *(undefined1 *)(iVar6 + 0xc + iVar11);
      (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(iVar6 + 8 + iVar11);
      uVar4 = *(undefined1 *)(iVar6 + iVar11 + 0xd);
      (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 0)) = uVar3;
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x8)) + 2)) = SUB42(iVar7,2);
      (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x8)) + 1)) = uVar4;
      (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x8)) + 0)) = CONCAT11(uVar4,uVar3);
      uVar9 = F_00e08b80(this,&(*(undefined4 *)(gen_frame + 0x4)),iVar6 + iVar11);
      if (uVar9 == 1) {
        return 1;
      }
      iVar8 = iVar8 + 1;
      iVar11 = iVar11 + 0x10;
    } while (iVar8 < param_1[1]);
  }
  return 0;
}

/* ref: FUN_00e08de0 */
uint F_00e08de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe08de0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  undefined4 uVar7;
  
  piVar5 = (*(int * PTR32 *)&gen_args[2]);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))) + 8))))(((int *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))))));
  piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4)));
  uVar7 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54)));
  (*(int * PTR32 *)(gen_frame + 0x48)) = piVar4;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x14)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x28)) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c)));
  (*(undefined4 *)(gen_frame + 0x2c)) = uVar7;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(undefined4 *)(gen_frame + 0x0)),0x20,0x10);
  (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = &(*(undefined4 *)(gen_frame + 0x38));
  piVar5 = (int *)*piVar5;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x44)) + 0)) = 0x101;
  (*(int *)(gen_frame + 0x44)) = CONCAT22((*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x44)) + 2)),0x101);
  (*(int *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  if (piVar5 == (int *)0x0) {
    piVar5 = &(*(int *)(gen_frame + 0x30));
  }
  else {
    piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 4))(piVar5,((undefined1 *)(gen_frame + 0x18)))));
  }
  iVar1 = piVar5[1];
  (*(int *)(gen_frame + 0x20)) = *piVar5;
  (*(int *)(gen_frame + 0x24)) = iVar1;
  F_00e08b80((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)(gen_frame + 0x40)),&(*(int *)(gen_frame + 0x20)));
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  do {
    if (iVar1 == 0) {
      *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 *)(gen_frame + 0x38));
      (*(undefined4 * PTR32 *)&gen_args[1])[1] = (*(undefined4 *)(gen_frame + 0x3c));
LAB_00e08fba: ;
      F_00e08800(&(*(undefined4 *)(gen_frame + 0x0)));
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    iVar2 = *(int *)(*(undefined * PTR32 *)&gen_args[0]);
    puVar3 = *(undefined4 * PTR32 *)(iVar2 + -8 + iVar1 * 8);
    (*(undefined4 * PTR32 *)(gen_frame + 0x40)) = puVar3;
    (*(int *)(gen_frame + 0x44)) = *(int *)(iVar2 + -4 + iVar1 * 8);
    if (puVar3 != (undefined4 *)0x0) {
      if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) == (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))),8);
      }
      piVar5 = ((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) * 8)));
      if (piVar5 != (int *)0x0) {
        *piVar5 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x40));
        piVar5[1] = (*(int *)(gen_frame + 0x44));
      }
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) + 1;
      iVar1 = *(int *)(*(undefined * PTR32 *)&gen_args[0]);
      iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      *(undefined4 *)(iVar1 + -8 + iVar2 * 8) = 0;
      *(undefined4 *)(iVar1 + -4 + iVar2 * 8) = 0;
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x48)) + 0x28))((*(int * PTR32 *)(gen_frame + 0x48)),&(*(int * PTR32 *)&gen_args[2]),&(*(undefined4 * PTR32 *)(gen_frame + 0x40)));
      F_00e20280(&(*(undefined4 *)(gen_frame + 0x28)),&(*(int *)(gen_frame + 0x30)),&(*(int * PTR32 *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0x0)));
      if ((*(int *)(gen_frame + 0x30)) != 0) {
        uVar7 = 0xffffffff;
        if (*(int *)((*(int *)(gen_frame + 0xc)) + -8 + (*(int *)(gen_frame + 0x10)) * 8) == (*(int *)(gen_frame + 0x30))) {
          uVar7 = *(undefined4 *)((*(int *)(gen_frame + 0xc)) + -4 + (*(int *)(gen_frame + 0x10)) * 8);
        }
        F_00e07d70((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)(gen_frame + 0x40)),&(*(int *)(gen_frame + 0x30)),uVar7);
        F_00e22120(&(*(undefined4 *)(gen_frame + 0x28)),(*(int *)(gen_frame + 0x30)),&(*(int * PTR32 *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0x0)));
        uVar6 = F_00e08cc0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x0)));
        if (uVar6 == 0) {
          (*(int *)(gen_frame + 0x10)) = 0;
          (*(undefined4 *)(gen_frame + 0x4)) = 0;
          if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) != 0) {
            ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x70))))((*(int * PTR32 *)&gen_args[2]));
          }
          if ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0) {
            *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) + -1;
            piVar5 = (*(int * PTR32 *)&gen_args[2]) + 2;
            *piVar5 = *piVar5 + -1;
            if (*piVar5 == 0) {
              ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))))((*(int * PTR32 *)&gen_args[2]),1);
            }
          }
          goto LAB_00e08fa3;
        }
      }
      F_00e080a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))));
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
      F_00e06fc0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
      (*(undefined4 * PTR32 *)&gen_args[1])[1] = 0;
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0) {
        *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) + -1;
        piVar5 = (*(int * PTR32 *)&gen_args[2]) + 2;
        *piVar5 = *piVar5 + -1;
        if (*piVar5 == 0) {
          ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))))((*(int * PTR32 *)&gen_args[2]),1);
          F_00e08800(&(*(undefined4 *)(gen_frame + 0x0)));
          return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
        }
      }
      goto LAB_00e08fba;
    }
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar1 + -1;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) + -1;
LAB_00e08fa3: ;
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  } while( true );
}

/* ref: FUN_00e09020 */
uint F_00e09020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe09020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  LPVOID pvVar2;
  undefined * pvVar3;
  undefined * pvVar4;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                             (*(int * PTR32 *)((int)pvVar2 + 0x2c),0x70)));
  *(undefined2 *)((int)pvVar3 + 4) = 0x70;
  pvVar4 = (undefined *)F_00e24780(pvVar3,0);
  pvVar3 = *(undefined * PTR32 *)((int)this + 0x50);
  if ((pvVar3 != (undefined *)0x0) && (pvVar3 != pvVar4)) {
    F_00d91a80(pvVar3);
  }
  *(undefined * PTR32 *)((int)this + 0x50) = pvVar4;
  F_00e08de0(this,((int *)(gen_frame + 0x4)),param_1);
  if (((int *)(gen_frame + 0x4))[0] == 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x50) + 0x30))) = 0;
    if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
      F_00d91a80(*(undefined * PTR32 *)((int)this + 0x50));
    }
    *(undefined4 *)((int)this + 0x50) = 0;
    return 0;
  }
  F_00e081e0(this,param_2);
  F_00e076f0(this);
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                             (*(int * PTR32 *)((int)pvVar2 + 0x2c),0x18)));
  *(undefined2 *)((int)pvVar3 + 4) = 0x18;
  pvVar3 = (undefined *)F_00e24000(pvVar3,((int *)(gen_frame + 0x4)));
  F_00e23fa0(pvVar3,*(undefined4 *)((int)this + 0x4c));
  F_00e23fd0(pvVar3,param_2);
  iVar1 = *(int *)((int)this + 0x50);
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0;
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x50));
  }
  *(undefined4 *)((int)this + 0x50) = 0;
  return (uint)pvVar3;
}

/* ref: FUN_00e09120 */
uint F_00e09120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe09120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 in_ecx;
  LPVOID pvVar1;
  undefined * pvVar2;
  undefined * pvVar3;
  uint uVar4;
  
  if (*param_1 == 0) {
    return 0;
  }
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                             (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x70)));
  *(undefined2 *)((int)pvVar2 + 4) = 0x70;
  pvVar3 = (undefined *)F_00e24780(pvVar2,*(undefined4 *)((int)this + 0x4c));
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x50);
  if ((pvVar2 != (undefined *)0x0) && (pvVar2 != pvVar3)) {
    F_00d91a80(pvVar2);
  }
  *(undefined * PTR32 *)((int)this + 0x50) = pvVar3;
  F_00e08de0(this,&(*(int *)(gen_frame + 0x4)),param_1);
  if (((*(int *)(gen_frame + 0x4)) != 0) && ((*(int *)(gen_frame + 0x8)) != 0)) {
    F_00e086b0(this,*(undefined4 *)((int)this + 0x50));
    in_ecx = *(undefined4 *)((int)this + 0x50);
    uVar4 = F_00d92610((*(int *)(gen_frame + 0x8)));
    F_00e242a0(in_ecx,(*(int *)(gen_frame + 0x4)),uVar4);
    pvVar2 = *(undefined * PTR32 *)((int)this + 0x50);
    F_00d919e0(pvVar2);
    if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
      F_00d91a80(*(undefined * PTR32 *)((int)this + 0x50));
    }
    *(undefined4 *)((int)this + 0x50) = 0;
    return (uint)pvVar2;
  }
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x50));
  }
  *(undefined4 *)((int)this + 0x50) = 0;
  return 0;
}

/* ref: FUN_00e09200 */
byte F_00e09200(unsigned int gen_a0)
{
  GEN_ENTER(0xe09200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0105aec0(this,(int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3,1,1);
  return (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3));
}

/* ref: FUN_00e09220 */
uint F_00e09220(unsigned int gen_a0)
{
  GEN_ENTER(0xe09220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0105aec0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),4,1);
  return (uint)(*(undefined * PTR32 *)(gen_frame + 0x8));
}

/* ref: FUN_00e09240 */
float F_00e09240(unsigned int gen_a0)
{
  GEN_ENTER(0xe09240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0105aec0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),4,1);
  return ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))));
}

/* ref: FUN_00e09260 */
float F_00e09260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe09260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  
  fVar1 = F_0105aec0(this,param_1,1,param_2);
  return fVar1;
}

/* ref: FUN_00e09280 */
float F_00e09280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe09280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  
  fVar1 = F_0105aec0(this,param_1,4,param_2);
  return fVar1;
}

/* ref: FUN_00e092a0 */
uint F_00e092a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xe092a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x74))))
                    (*(int * PTR32 *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00e092b0 */
uint F_00e092b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xe092b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x8c))))
                    (*(int * PTR32 *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00e092e0 */
uint F_00e092e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xe092e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x20))))
                    (*(int * PTR32 *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00e092f0 */
uint F_00e092f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe092f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  
  F_0105aec0((undefined *)((int)this + 4),&(*(byte *)(gen_frame + 0xb)),1,1);
  bVar3 = (*(byte *)(gen_frame + 0xb)) & 1;
  uVar4 = (*(byte *)(gen_frame + 0xb)) >> 1 & 0xffffffbf;
  bVar1 = 6;
  while (((*(byte *)(gen_frame + 0xb)) & 0x80) != 0) {
    F_0105aec0((undefined *)((int)this + 4),&(*(byte *)(gen_frame + 0xb)),1,1);
    uVar2 = (ulonglong)bVar1;
    bVar1 = bVar1 + 7;
    uVar4 = uVar4 | (uint)(uVar2 < 0x40) * (((*(byte *)(gen_frame + 0xb)) & 0xffffff7f) << uVar2);
  }
  if (bVar3 != 0) {
    uVar4 = -uVar4;
  }
  return uVar4;
}

/* ref: FUN_00e093a0 */
float F_00e093a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe093a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0105aec0((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),4,1);
  return ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))));
}

/* ref: FUN_00e093c0 */
uint F_00e093c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe093c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dbd930(this,param_1);
  return uVar1;
}

/* ref: FUN_00e093d0 */
uint F_00e093d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe093d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dbd9f0(this,param_1);
  return uVar1;
}

/* ref: FUN_00e093e0 */
uint F_00e093e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe093e0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00e09400 */
uint F_00e09400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe09400u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00e09420 */
uint F_00e09420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe09420u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00e09440 */
uint F_00e09440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe09440u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00e09480 */
uint F_00e09480(unsigned int gen_a0)
{
  GEN_ENTER(0xe09480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  
  F_0105aec0((undefined *)((int)this + 4),&(*(byte *)(gen_frame + 0xb)),1,1);
  bVar2 = (*(byte *)(gen_frame + 0xb)) & 1;
  uVar3 = (*(byte *)(gen_frame + 0xb)) >> 1 & 0x7fffffbf;
  bVar4 = 6;
  while ((char)(*(byte *)(gen_frame + 0xb)) < '\0') {
    F_0105aec0((undefined *)((int)this + 4),&(*(byte *)(gen_frame + 0xb)),1,1);
    bVar1 = bVar4 & 0x1f;
    bVar4 = bVar4 + 7;
    uVar3 = uVar3 | ((*(byte *)(gen_frame + 0xb)) & 0xffffff7f) << bVar1;
  }
  if (bVar2 != 0) {
    uVar3 = -uVar3;
  }
  return uVar3;
}

/* ref: FUN_00e09500 */
uint F_00e09500(unsigned int gen_a0)
{
  GEN_ENTER(0xe09500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  
  F_0105aec0((undefined *)((int)this + 4),&(*(byte *)(gen_frame + 0xb)),1,1);
  bVar2 = (*(byte *)(gen_frame + 0xb)) & 1;
  uVar3 = (*(byte *)(gen_frame + 0xb)) >> 1 & 0x7fffffbf;
  bVar4 = 6;
  while ((char)(*(byte *)(gen_frame + 0xb)) < '\0') {
    F_0105aec0((undefined *)((int)this + 4),&(*(byte *)(gen_frame + 0xb)),1,1);
    bVar1 = bVar4 & 0x1f;
    bVar4 = bVar4 + 7;
    uVar3 = uVar3 | ((*(byte *)(gen_frame + 0xb)) & 0xffffff7f) << bVar1;
  }
  if (bVar2 != 0) {
    uVar3 = -uVar3;
  }
  return uVar3;
}

/* ref: FUN_00e095b0 */
uint F_00e095b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe095b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e095c0 */
uint F_00e095c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe095c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  
  F_0105aec0((undefined *)((int)this + 4),&(*(byte *)(gen_frame + 0xb)),1,1);
  bVar2 = (*(byte *)(gen_frame + 0xb)) & 1;
  uVar3 = (*(byte *)(gen_frame + 0xb)) >> 1 & 0x7fffffbf;
  bVar4 = 6;
  while ((char)(*(byte *)(gen_frame + 0xb)) < '\0') {
    F_0105aec0((undefined *)((int)this + 4),&(*(byte *)(gen_frame + 0xb)),1,1);
    bVar1 = bVar4 & 0x1f;
    bVar4 = bVar4 + 7;
    uVar3 = uVar3 | ((*(byte *)(gen_frame + 0xb)) & 0xffffff7f) << bVar1;
  }
  if (bVar2 != 0) {
    uVar3 = -uVar3;
  }
  return uVar3;
}

/* ref: FUN_00e09640 */
unsigned int F_00e09640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe09640u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e09670 */
uint F_00e09670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe09670u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e096b0 */
unsigned int F_00e096b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe096b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00e09710 */
uint F_00e09710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe09710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e09730 */
uint F_00e09730(unsigned int gen_a0)
{
  GEN_ENTER(0xe09730u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00e09750 */
unsigned int F_00e09750(unsigned int gen_a0)
{
  GEN_ENTER(0xe09750u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x18);
  }
  return 0;
}

/* ref: FUN_00e09780 */
unsigned int F_00e09780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe09780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 4)) {
    do {
      piVar1 = *(int * PTR32 *)(*(int *)this + iVar2 * 8);
      ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,*(undefined4 *)(*(int *)this + iVar2 * 8 + 4),*param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 4));
  }
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x10)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + iVar2 * 8)));
      ((code *)*(gen_code32 *)(*piVar1 + 0x5c))
                (piVar1,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + iVar2 * 8 + 4))),*param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x10));
  }
  return 0;
}

/* ref: FUN_00e09800 */
uint F_00e09800(unsigned int gen_a0)
{
  GEN_ENTER(0xe09800u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)in_ecx + 6) = 1;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x114d60c));
  return (uint)in_ecx;
}

/* ref: hkBinaryTagfileReader::vf3 */
uint F_00e09820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe09820u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  
  F_00e0a980(((undefined1 *)(gen_frame + 0xc)),param_2,param_3);
  F_00e0c7b0(((undefined1 *)(gen_frame + 0xc)),param_1);
  F_00e0aa80(((undefined1 *)(gen_frame + 0xc)));
  return param_1;
}

/* ref: FUN_00e09860 */
uint F_00e09860(unsigned int gen_a0)
{
  GEN_ENTER(0xe09860u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkBinaryTagfileReader::vf0 */
uint F_00e09890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe09890u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e09910 */
uint F_00e09910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe09910u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 4 + param_2 * 8);
}

/* ref: FUN_00e09920 */
uint F_00e09920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe09920u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00e099a0 */
uint F_00e099a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe099a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e099e0 */
uint F_00e099e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe099e0u, gen_a0, gen_a1, 0u, 0u);
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
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)&gen_args[1]));
    iVar3 = (*(int *)&gen_args[1]);
    if ((*(int *)&gen_args[1]) != 0) goto LAB_00e09a25;
  }
  iVar3 = ((int)0x80000000);
LAB_00e09a25: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar1;
  *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar3;
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00e09a40 */
unsigned int F_00e09a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe09a40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  undefined4 * puVar2;
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
    F_00d95690(param_1,this,iVar4,4);
  }
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  if (0 < param_3) {
    iVar3 = param_2 - (int)puVar2;
    iVar4 = param_3;
    do {
      *puVar2 = *(undefined4 *)(iVar3 + (int)puVar2);
      puVar2 = puVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(int *)((int)this + 4) = iVar5;
  return 0;
}

/* ref: FUN_00e09aa0 */
unsigned int F_00e09aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe09aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = param_1 - *(int *)((int)this + 4);
  if (0 < iVar2) {
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this + 8)));
    do {
      if (puVar1 != (undefined4 *)0x8) {
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(int *)((int)this + 4) = param_1;
  return 0;
}

/* ref: FUN_00e09b00 */
uint F_00e09b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe09b00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00e09b10 */
uint F_00e09b10(unsigned int gen_a0)
{
  GEN_ENTER(0xe09b10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 * 0x10 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00e09b50 */
uint F_00e09b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe09b50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 0x10 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00e09ba0 */
uint F_00e09ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xe09ba0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e09be0 */
uint F_00e09be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe09be0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e09c30 */
uint F_00e09c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe09c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbe3b0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e09c50 */
uint F_00e09c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe09c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  *(undefined4 *)(uVar1 + 4 + param_1 * 8) = param_2;
  return uVar1;
}

/* ref: FUN_00e09c70 */
uint F_00e09c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe09c70u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e09cb0 */
uint F_00e09cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe09cb0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e09cf0 */
byte F_00e09cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xe09cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  byte * pbVar2;
  
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)this;
  F_0105aec0(*(undefined * PTR32 *)((int)this + 4),*(undefined4 *)((int)this + 0x10),1,*(undefined4 *)this);
  pbVar2 = *(byte * PTR32 *)((int)this + 0x10);
  *(byte * PTR32 *)((int)this + 8) = pbVar2;
  *(byte * PTR32 *)((int)this + 0xc) = pbVar2 + *(int *)((int)this + 0x14);
  bVar1 = *pbVar2;
  *(byte * PTR32 *)((int)this + 8) = pbVar2 + 1;
  return bVar1;
}

/* ref: FUN_00e09d20 */
byte F_00e09d20(unsigned int gen_a0)
{
  GEN_ENTER(0xe09d20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  byte * pbVar2;
  
  pbVar2 = *(byte * PTR32 *)((int)this + 8);
  if (*(byte * PTR32 *)((int)this + 0xc) <= pbVar2) {
    *(undefined4 *)((int)this + 0x14) = *(undefined4 *)this;
    F_0105aec0(*(undefined * PTR32 *)((int)this + 4),*(undefined4 *)((int)this + 0x10),1,*(undefined4 *)this);
    pbVar2 = *(byte * PTR32 *)((int)this + 0x10);
    *(byte * PTR32 *)((int)this + 8) = pbVar2;
    *(byte * PTR32 *)((int)this + 0xc) = pbVar2 + *(int *)((int)this + 0x14);
  }
  bVar1 = *pbVar2;
  *(byte * PTR32 *)((int)this + 8) = pbVar2 + 1;
  return bVar1;
}

/* ref: FUN_00e09d60 */
uint F_00e09d60(unsigned int gen_a0)
{
  GEN_ENTER(0xe09d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte * pbVar4;
  byte bVar5;
  uint uVar6;
  
  pbVar4 = *(byte * PTR32 *)((int)this + 8);
  if (*(byte * PTR32 *)((int)this + 0xc) <= pbVar4) {
    *(undefined4 *)((int)this + 0x14) = *(undefined4 *)this;
    F_0105aec0(*(undefined * PTR32 *)((int)this + 4),*(undefined4 *)((int)this + 0x10),1,*(undefined4 *)this);
    pbVar4 = *(byte * PTR32 *)((int)this + 0x10);
    *(byte * PTR32 *)((int)this + 8) = pbVar4;
    *(byte * PTR32 *)((int)this + 0xc) = pbVar4 + *(int *)((int)this + 0x14);
  }
  bVar1 = *pbVar4;
  *(byte * PTR32 *)((int)this + 8) = pbVar4 + 1;
  bVar3 = bVar1 & 1;
  uVar6 = bVar1 >> 1 & 0x7fffffbf;
  bVar5 = 6;
  while ((char)bVar1 < '\0') {
    pbVar4 = *(byte * PTR32 *)((int)this + 8);
    if (*(byte * PTR32 *)((int)this + 0xc) <= pbVar4) {
      *(undefined4 *)((int)this + 0x14) = *(undefined4 *)this;
      F_0105aec0(*(undefined * PTR32 *)((int)this + 4),*(undefined4 *)((int)this + 0x10),1,*(undefined4 *)this
                  );
      pbVar4 = *(byte * PTR32 *)((int)this + 0x10);
      *(byte * PTR32 *)((int)this + 8) = pbVar4;
      *(byte * PTR32 *)((int)this + 0xc) = pbVar4 + *(int *)((int)this + 0x14);
    }
    bVar1 = *pbVar4;
    *(byte * PTR32 *)((int)this + 8) = pbVar4 + 1;
    bVar2 = bVar5 & 0x1f;
    bVar5 = bVar5 + 7;
    uVar6 = uVar6 | (bVar1 & 0xffffff7f) << bVar2;
  }
  *(int *)this = *(int *)this + -1;
  if (bVar3 != 0) {
    uVar6 = -uVar6;
  }
  return uVar6;
}

/* ref: FUN_00e09e20 */
uint F_00e09e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe09e20u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e09e60 */
unsigned int F_00e09e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe09e60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00e09a40(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return 0;
}

/* ref: FUN_00e09ea0 */
uint F_00e09ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe09ea0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e09ee0 */
uint F_00e09ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xe09ee0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e09f20 */
uint F_00e09f20(unsigned int gen_a0)
{
  GEN_ENTER(0xe09f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e09f60 */
uint F_00e09f60(unsigned int gen_a0)
{
  GEN_ENTER(0xe09f60u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e09fa0 */
uint F_00e09fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xe09fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  byte bVar1;
  LPVOID pvVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  
  this_00 = (undefined *)((int)this + 4);
  F_0105aec0(this_00,&(*(byte *)(gen_frame + 0xb)),1,1);
  uVar4 = (*(byte *)(gen_frame + 0xb)) >> 1 & 0x7fffffbf;
  bVar5 = 6;
  bVar1 = (*(byte *)(gen_frame + 0xb));
  while ((char)bVar1 < '\0') {
    F_0105aec0(this_00,&(*(byte *)(gen_frame + 0xa)),1,1);
    bVar1 = bVar5 & 0x1f;
    bVar5 = bVar5 + 7;
    uVar4 = uVar4 | ((*(byte *)(gen_frame + 0xa)) & 0xffffff7f) << bVar1;
    bVar1 = (*(byte *)(gen_frame + 0xa));
  }
  if (((*(byte *)(gen_frame + 0xb)) & 1) != 0) {
    uVar4 = -uVar4;
  }
  if (0 < (int)uVar4) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar3 = F_00d92460(*(undefined4 *)((int)pvVar2 + 0x2c),uVar4 + 1);
    F_0105afb0(this_00,uVar3,uVar4);
    *(undefined1 *)(uVar4 + uVar3) = 0;
    if (*(uint *)((int)this + 0x2c) == (*(uint *)((int)this + 0x30) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x28),4);
    }
    *((uint *)GEN_TOP((*(int *)((int)this + 0x28) + *(int *)((int)this + 0x2c) * 4))) = uVar3;
    *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + 1;
    return uVar3;
  }
  return *((uint *)GEN_TOP((*(int *)((int)this + 0x28) + uVar4 * -4)));
}

/* ref: FUN_00e0a0a0 */
uint F_00e0a0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0a0a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = param_1 + 7U & 0xfffffff8;
  iVar4 = (int)(((int)(param_1 + 7U) >> 0x1f & 7U) + uVar5) >> 3;
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  if ((int)(param_2[2] & 0x3fffffffU) < (int)uVar5) {
    uVar2 = (param_2[2] & 0x3fffffffU) * 2;
    if ((int)uVar2 <= (int)uVar5) {
      uVar2 = uVar5;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_2,uVar2,1);
  }
  param_2[1] = uVar5;
  F_0105aec0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x48)) + 4),((byte *)(gen_frame + 0x8)),1,iVar4);
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      bVar1 = ((byte *)(gen_frame + 0x8))[(int)(iVar3)];
      *(byte *)(*param_2 + iVar3 * 8) = bVar1 & 1;
      *(byte *)(*param_2 + 1 + iVar3 * 8) = bVar1 >> 1 & 1;
      *(byte *)(*param_2 + 2 + iVar3 * 8) = bVar1 >> 2 & 1;
      *(byte *)(*param_2 + 3 + iVar3 * 8) = bVar1 >> 3 & 1;
      *(byte *)(*param_2 + 4 + iVar3 * 8) = bVar1 >> 4 & 1;
      *(byte *)(*param_2 + 5 + iVar3 * 8) = bVar1 >> 5 & 1;
      *(byte *)(*param_2 + 6 + iVar3 * 8) = bVar1 >> 6 & 1;
      *(byte *)(*param_2 + 7 + iVar3 * 8) = bVar1 >> 7;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  uVar5 = param_2[2] & 0x3fffffff;
  if ((int)uVar5 < param_1) {
    iVar4 = uVar5 * 2;
    if (iVar4 <= param_1) {
      iVar4 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_2,iVar4,1);
    uVar5 = CONCAT31(extraout_var,bVar1);
  }
  param_2[1] = param_1;
  return uVar5;
}

/* ref: FUN_00e0a1b0 */
uint F_00e0a1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0a1b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e0a1f0 */
uint F_00e0a1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0a1f0u, gen_a0, gen_a1, 0u, 0u);
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
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00e0a230 */
uint F_00e0a230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0a230u, gen_a0, gen_a1, 0u, 0u);
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
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00e0a270 */
uint F_00e0a270(unsigned int gen_a0)
{
  GEN_ENTER(0xe0a270u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e0a2b0 */
uint F_00e0a2b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe0a2b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00e0a2f0 */
uint F_00e0a2f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe0a2f0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e0a330 */
uint F_00e0a330(unsigned int gen_a0)
{
  GEN_ENTER(0xe0a330u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e0a370 */
uint F_00e0a370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0a370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  *(undefined4 *)((int)this + 4) = param_1;
  piVar1 = (int *)((int)this + 0x10);
  *(int *)this = param_2;
  *piVar1 = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  uVar2 = *(uint *)((int)this + 0x18) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),piVar1,iVar3,1);
  }
  *(int *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(int *)((int)this + 8) = *piVar1;
  *(int *)((int)this + 0xc) = *piVar1 + *(int *)((int)this + 0x14);
  return (uint)this;
}

/* ref: FUN_00e0a3e0 */
uint F_00e0a3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0a3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined * pvVar4;
  byte bVar5;
  byte * pbVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  
  uVar8 = *(uint *)this;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0x80000000;
  (*(uint *)(gen_frame + 0x14)) = uVar8;
  if (0 < (int)uVar8) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x4)),((int)uVar8 < 0) - 1 & uVar8,4);
  }
  (*(uint *)(gen_frame + 0x8)) = uVar8;
  (*(int *)(gen_frame + 0x18)) = 0;
  if (0 < (int)uVar8) {
    do {
      pbVar6 = *(byte * PTR32 *)((int)this + 8);
      if (*(byte * PTR32 *)((int)this + 0xc) <= pbVar6) {
        uVar2 = *(undefined4 *)this;
        uVar3 = *(undefined4 *)((int)this + 0x10);
        pvVar4 = *(undefined * PTR32 *)((int)this + 4);
        *(undefined4 *)((int)this + 0x14) = uVar2;
        F_0105aec0(pvVar4,uVar3,1,uVar2);
        pbVar6 = *(byte * PTR32 *)((int)this + 0x10);
        *(byte * PTR32 *)((int)this + 8) = pbVar6;
        *(byte * PTR32 *)((int)this + 0xc) = pbVar6 + *(int *)((int)this + 0x14);
      }
      bVar1 = *pbVar6;
      *(byte * PTR32 *)((int)this + 8) = pbVar6 + 1;
      uVar10 = bVar1 >> 1 & 0x7fffffbf;
      (*(uint *)(gen_frame + 0x10)) = bVar1 & 1;
      bVar9 = 6;
      uVar8 = (*(uint *)(gen_frame + 0x14));
      while ((*(uint *)(gen_frame + 0x14)) = uVar8, (char)bVar1 < '\0') {
        pbVar6 = *(byte * PTR32 *)((int)this + 8);
        if (*(byte * PTR32 *)((int)this + 0xc) <= pbVar6) {
          uVar2 = *(undefined4 *)this;
          pvVar4 = *(undefined * PTR32 *)((int)this + 4);
          *(undefined4 *)((int)this + 0x14) = uVar2;
          F_0105aec0(pvVar4,*(undefined4 *)((int)this + 0x10),1,uVar2);
          pbVar6 = *(byte * PTR32 *)((int)this + 0x10);
          *(byte * PTR32 *)((int)this + 8) = pbVar6;
          *(byte * PTR32 *)((int)this + 0xc) = pbVar6 + *(int *)((int)this + 0x14);
        }
        bVar1 = *pbVar6;
        *(byte * PTR32 *)((int)this + 8) = pbVar6 + 1;
        bVar5 = bVar9 & 0x1f;
        bVar9 = bVar9 + 7;
        uVar10 = uVar10 | (bVar1 & 0xffffff7f) << bVar5;
        uVar8 = (*(uint *)(gen_frame + 0x14));
      }
      *(int *)this = *(int *)this + -1;
      if ((*(uint *)(gen_frame + 0x10)) != 0) {
        uVar10 = -uVar10;
      }
      *(uint *)((*(int *)(gen_frame + 0x4)) + (*(int *)(gen_frame + 0x18)) * 4) = uVar10;
      iVar7 = (*(int *)(gen_frame + 0x18)) + 1;
      (*(int *)(gen_frame + 0x18)) = iVar7;
    } while (iVar7 < (int)uVar8);
  }
  ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x80))((int *)*param_1,(*(int *)(gen_frame + 0x4)),uVar8);
  (*(uint *)(gen_frame + 0x8)) = 0;
  uVar8 = (*(uint *)(gen_frame + 0xc));
  if (-1 < (int)(*(uint *)(gen_frame + 0xc))) {
    uVar8 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x4)),(*(uint *)(gen_frame + 0xc)) * 4);
  }
  return uVar8;
}

/* ref: FUN_00e0a540 */
uint F_00e0a540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0a540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 0x10) == (*(uint *)((int)this + 0x14) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0xc),8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10) * 8)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e0a590 */
uint F_00e0a590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0a590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00e0a5e0 */
uint F_00e0a5e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe0a5e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x14) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)((int)this + 0x10),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  *(undefined4 *)((int)this + 0x10) = 0;
  return uVar1;
}

/* ref: FUN_00e0a620 */
uint F_00e0a620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0a620u, gen_a0, gen_a1, 0u, 0u);
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
    uVar2 = param_1 + 0x7f & 0xffffff80;
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

/* ref: FUN_00e0a690 */
uint F_00e0a690(unsigned int gen_a0)
{
  GEN_ENTER(0xe0a690u, gen_a0, 0u, 0u, 0u);
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
  uVar3 = iVar2 + 0x7fU & 0xffffff80;
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
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar3 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: FUN_00e0a720 */
uint F_00e0a720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0a720u, gen_a0, gen_a1, 0u, 0u);
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
    uVar2 = param_1 * 0x10 + 0x7f & 0xffffff80;
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

/* ref: FUN_00e0a790 */
uint F_00e0a790(unsigned int gen_a0)
{
  GEN_ENTER(0xe0a790u, gen_a0, 0u, 0u, 0u);
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
  uVar3 = iVar2 * 0x10 + 0x7fU & 0xffffff80;
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
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar3 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: FUN_00e0a820 */
uint F_00e0a820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0a820u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e0a890 */
uint F_00e0a890(unsigned int gen_a0)
{
  GEN_ENTER(0xe0a890u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e0a920 */
uint F_00e0a920(unsigned int gen_a0)
{
  GEN_ENTER(0xe0a920u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e0a980 */
uint F_00e0a980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0a980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  
  *(undefined4 *)this = 0xffffffff;
  F_0105b020((undefined *)((int)this + 4),param_1,(uint)this & 0xffffff00);
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  *(undefined4 *)((int)this + 0x34) = 0;
  piVar1 = (int *)((int)this + 0x28);
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0x80000000;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0xffffffff;
  if (*(uint *)((int)this + 0x20) == (*(uint *)((int)this + 0x24) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x1c),4);
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + *(int *)((int)this + 0x20) * 4))) = 0;
  *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + 1;
  if (*(uint *)((int)this + 0x2c) == (*(uint *)((int)this + 0x30) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,4);
  }
  *((undefined1 * PTR32 *)GEN_TOP((*piVar1 + *(int *)((int)this + 0x2c) * 4))) = &REFG(undefined1, 0x107fc63);
  *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + 1;
  if (*(uint *)((int)this + 0x2c) == (*(uint *)((int)this + 0x30) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,4);
  }
  *((undefined4 *)GEN_TOP((*piVar1 + *(int *)((int)this + 0x2c) * 4))) = 0;
  *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + 1;
  *(undefined4 *)((int)this + 0x34) = 2;
  return (uint)this;
}

/* ref: FUN_00e0aa80 */
unsigned int F_00e0aa80(unsigned int gen_a0)
{
  GEN_ENTER(0xe0aa80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  LPVOID pvVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)this + 0x34);
  if (iVar4 < *(int *)((int)this + 0x2c)) {
    do {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28) + iVar4 * 4)));
      pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      F_00d924b0(*(undefined4 *)((int)pvVar3 + 0x2c),uVar1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)((int)this + 0x2c));
  }
  F_00dbdb20((undefined *)((int)this + 0x44),&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  uVar2 = *(uint *)((int)this + 0x40);
  *(undefined4 *)((int)this + 0x3c) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x38),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0x80000000;
  uVar2 = *(uint *)((int)this + 0x30);
  *(undefined4 *)((int)this + 0x2c) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x28),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  uVar2 = *(uint *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x20) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x1c),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  F_0105b090((undefined *)((int)this + 4));
  return 0;
}

/* ref: FUN_00e0ab70 */
uint F_00e0ab70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0ab70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  uVar1 = param_2;
  if (0 < (int)param_2) {
    F_00e0a370(((byte *)(gen_frame + 0x0)),(int)this + 4,param_2);
    F_00e0a3e0(((byte *)(gen_frame + 0x0)),param_1);
    ((byte *)(gen_frame + 0x0))[0x14] = 0;
    ((byte *)(gen_frame + 0x0))[0x15] = 0;
    ((byte *)(gen_frame + 0x0))[0x16] = 0;
    ((byte *)(gen_frame + 0x0))[0x17] = 0;
    uVar1 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24));
    if (-1 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24))) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516a4),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) & 0x3fffffff);
    }
  }
  return uVar1;
}

/* ref: FUN_00e0abd0 */
uint F_00e0abd0(unsigned int gen_a0)
{
  GEN_ENTER(0xe0abd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  undefined * pvVar5;
  int iVar6;
  byte bVar7;
  uint * puVar8;
  undefined * pvVar9;
  uint uVar10;
  
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = this;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(uint *)(gen_frame + 0x18)) = 0;
  (*(uint *)(gen_frame + 0x1c)) = 0x80000000;
  uVar2 = F_00e09fa0(this);
  (*(uint *)(gen_frame + 0x8)) = uVar2;
  pvVar9 = (undefined *)((int)this + 4);
  F_0105aec0(pvVar9,&(*(byte *)(gen_frame + 0x3b)),1,1);
  uVar2 = (*(byte *)(gen_frame + 0x3b)) >> 1 & 0x7fffffbf;
  (*(uint *)(gen_frame + 0x24)) = (*(byte *)(gen_frame + 0x3b)) & 1;
  bVar7 = 6;
  bVar1 = (*(byte *)(gen_frame + 0x3b));
  while ((char)bVar1 < '\0') {
    F_0105aec0(pvVar9,&(*(byte *)(gen_frame + 0x3a)),1,1);
    bVar1 = bVar7 & 0x1f;
    bVar7 = bVar7 + 7;
    uVar2 = uVar2 | ((*(byte *)(gen_frame + 0x3a)) & 0xffffff7f) << bVar1;
    bVar1 = (*(byte *)(gen_frame + 0x3a));
  }
  if ((*(uint *)(gen_frame + 0x24)) != 0) {
    uVar2 = -uVar2;
  }
  (*(uint *)(gen_frame + 0xc)) = uVar2;
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x14) + 0x18))))
                            (*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x14),&(*(uint * PTR32 *)(gen_frame + 0x20)))));
  if (*piVar3 == 0) {
    (*(uint *)(gen_frame + 0x18)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x1c))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x14)),((*(uint *)(gen_frame + 0x1c)) & 0x3fffffff) * 0xc);
    }
    return 1;
  }
  F_0105aec0(pvVar9,&(*(byte *)(gen_frame + 0x3a)),1,1);
  uVar2 = (*(byte *)(gen_frame + 0x3a)) >> 1 & 0x7fffffbf;
  (*(uint *)(gen_frame + 0x24)) = (*(byte *)(gen_frame + 0x3a)) & 1;
  bVar7 = 6;
  bVar1 = (*(byte *)(gen_frame + 0x3a));
  while ((char)bVar1 < '\0') {
    F_0105aec0(pvVar9,&(*(byte *)(gen_frame + 0x3b)),1,1);
    bVar1 = bVar7 & 0x1f;
    bVar7 = bVar7 + 7;
    uVar2 = uVar2 | ((*(byte *)(gen_frame + 0x3b)) & 0xffffff7f) << bVar1;
    bVar1 = (*(byte *)(gen_frame + 0x3b));
  }
  if ((*(uint *)(gen_frame + 0x24)) != 0) {
    uVar2 = -uVar2;
  }
  if (((int)uVar2 < 0) || (*((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x1c) + uVar2 * 4))) == 0)) {
    (*(uint *)(gen_frame + 0x10)) = 0;
  }
  else {
    piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x1c) + uVar2 * 4)));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
    (*(uint *)(gen_frame + 0x10)) = uVar2;
  }
  F_0105aec0(pvVar9,&(*(byte *)(gen_frame + 0x3a)),1,1);
  uVar2 = (*(byte *)(gen_frame + 0x3a)) >> 1 & 0x7fffffbf;
  (*(uint *)(gen_frame + 0x24)) = (*(byte *)(gen_frame + 0x3a)) & 1;
  bVar7 = 6;
  bVar1 = (*(byte *)(gen_frame + 0x3a));
  while ((char)bVar1 < '\0') {
    F_0105aec0(pvVar9,&(*(byte *)(gen_frame + 0x3b)),1,1);
    bVar1 = bVar7 & 0x1f;
    bVar7 = bVar7 + 7;
    uVar2 = uVar2 | ((*(byte *)(gen_frame + 0x3b)) & 0xffffff7f) << bVar1;
    bVar1 = (*(byte *)(gen_frame + 0x3b));
  }
  if ((*(uint *)(gen_frame + 0x24)) != 0) {
    uVar2 = -uVar2;
  }
  if ((int)((*(uint *)(gen_frame + 0x1c)) & 0x3fffffff) < (int)uVar2) {
    uVar4 = ((*(uint *)(gen_frame + 0x1c)) & 0x3fffffff) * 2;
    if ((int)uVar4 <= (int)uVar2) {
      uVar4 = uVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x14)),uVar4,0xc);
  }
  (*(uint *)(gen_frame + 0x18)) = uVar2;
  (*(uint *)(gen_frame + 0x24)) = 0;
  if (0 < (int)uVar2) {
    (*(int *)(gen_frame + 0x2c)) = 0;
    do {
      puVar8 = (uint *)((*(int *)(gen_frame + 0x14)) + (*(int *)(gen_frame + 0x2c)));
      (*(uint * PTR32 *)(gen_frame + 0x20)) = puVar8;
      uVar2 = F_00e09fa0((*(undefined * PTR32 *)(gen_frame + 0x34)));
      *puVar8 = uVar2;
      F_0105aec0(pvVar9,&(*(byte *)(gen_frame + 0x3a)),1,1);
      uVar2 = (*(byte *)(gen_frame + 0x3a)) >> 1 & 0x7fffffbf;
      (*(uint *)(gen_frame + 0x28)) = (*(byte *)(gen_frame + 0x3a)) & 1;
      bVar7 = 6;
      bVar1 = (*(byte *)(gen_frame + 0x3a));
      while ((char)bVar1 < '\0') {
        F_0105aec0(pvVar9,&(*(byte *)(gen_frame + 0x3b)),1,1);
        bVar1 = bVar7 & 0x1f;
        bVar7 = bVar7 + 7;
        uVar2 = uVar2 | ((*(byte *)(gen_frame + 0x3b)) & 0xffffff7f) << bVar1;
        bVar1 = (*(byte *)(gen_frame + 0x3b));
      }
      if ((*(uint *)(gen_frame + 0x28)) != 0) {
        uVar2 = -uVar2;
      }
      (*(uint *)(gen_frame + 0x30)) = uVar2;
      if ((uVar2 & 0x20) == 0) {
        (*(uint *)(gen_frame + 0x28)) = 0;
      }
      else {
        F_0105aec0(pvVar9,&(*(byte *)(gen_frame + 0x39)),1,1);
        (*(uint *)(gen_frame + 0x28)) = (*(byte *)(gen_frame + 0x39)) & 1;
        uVar2 = (*(byte *)(gen_frame + 0x39)) >> 1 & 0x7fffffbf;
        bVar7 = 6;
        bVar1 = (*(byte *)(gen_frame + 0x39));
        while ((char)bVar1 < '\0') {
          F_0105aec0(pvVar9,&(*(byte *)(gen_frame + 0x38)),1,1);
          bVar1 = bVar7 & 0x1f;
          bVar7 = bVar7 + 7;
          uVar2 = uVar2 | ((*(byte *)(gen_frame + 0x38)) & 0xffffff7f) << bVar1;
          bVar1 = (*(byte *)(gen_frame + 0x38));
        }
        if ((*(uint *)(gen_frame + 0x28)) != 0) {
          uVar2 = -uVar2;
        }
        (*(uint *)(gen_frame + 0x28)) = uVar2;
      }
      pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x34));
      if ((((*(uint *)(gen_frame + 0x30)) & 0xf) == 9) || (((*(uint *)(gen_frame + 0x30)) & 0xf) == 8)) {
        uVar2 = F_00e09fa0((*(undefined * PTR32 *)(gen_frame + 0x34)));
        if (uVar2 != 0) {
          piVar3 = *(int * PTR32 *)((int)pvVar5 + 0x14);
          ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,uVar2);
        }
      }
      else {
        uVar2 = 0;
      }
      piVar3 = *(int * PTR32 *)((int)pvVar5 + 0x14);
      uVar4 = (*(uint *)(gen_frame + 0x30));
      uVar10 = (*(uint *)(gen_frame + 0x28));
      pvVar5 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3)));
      uVar2 = F_00e1aa20(pvVar5,uVar4,uVar2,uVar10);
      (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + 0xc;
      (*(uint * PTR32 *)(gen_frame + 0x20))[1] = uVar2;
      iVar6 = (*(uint *)(gen_frame + 0x24)) + 1;
      (*(uint *)(gen_frame + 0x24)) = iVar6;
    } while (iVar6 < (int)(*(uint *)(gen_frame + 0x18)));
  }
  pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x34));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x14) + 0xc))))
                    (*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x14),&(*(uint *)(gen_frame + 0x8)));
  if (*(uint *)((int)pvVar9 + 0x20) == (*(uint *)((int)pvVar9 + 0x24) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)pvVar9 + 0x1c),4);
  }
  *((uint *)GEN_TOP((*(int *)((int)pvVar9 + 0x1c) + *(int *)((int)pvVar9 + 0x20) * 4))) = uVar2;
  *(int *)((int)pvVar9 + 0x20) = *(int *)((int)pvVar9 + 0x20) + 1;
  (*(uint *)(gen_frame + 0x18)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x1c))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x14)),((*(uint *)(gen_frame + 0x1c)) & 0x3fffffff) * 0xc);
  }
  return 0;
}

/* ref: FUN_00e0afb0 */
uint F_00e0afb0(unsigned int gen_a0)
{
  GEN_ENTER(0xe0afb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),iVar1 * 8);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00e0b030 */
uint F_00e0b030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0b030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined4 * puVar4;
  LPVOID pvVar5;
  int * piVar6;
  uint uVar7;
  int * piVar8;
  byte bVar9;
  
  if (*(int *)this < 2) {
    F_00e0c190(this,&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),0,0);
    ((code *)*(gen_code32 *)(*param_1 + 0x60))(param_1,param_2,(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
    puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x4));
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0) {
      *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 6) + -1;
      piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        uVar7 = ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x4)))((*(undefined4 * PTR32 *)(gen_frame + 0x4)),1);
        return uVar7;
      }
    }
  }
  else {
    F_0105aec0((undefined *)((int)this + 4),&(*(byte *)(gen_frame + 0xb)),1,1);
    uVar7 = (*(byte *)(gen_frame + 0xb)) >> 1 & 0x7fffffbf;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)((*(byte *)(gen_frame + 0xb)) & 1);
    bVar9 = 6;
    bVar3 = (*(byte *)(gen_frame + 0xb));
    while ((char)bVar3 < '\0') {
      F_0105aec0((undefined *)((int)this + 4),&(*(byte *)(gen_frame + 0xa)),1,1);
      bVar3 = bVar9 & 0x1f;
      bVar9 = bVar9 + 7;
      uVar7 = uVar7 | ((*(byte *)(gen_frame + 0xa)) & 0xffffff7f) << bVar3;
      bVar3 = (*(byte *)(gen_frame + 0xa));
    }
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != (undefined4 *)0x0) {
      uVar7 = -uVar7;
    }
    if (*(int *)((int)this + 0x3c) <= (int)uVar7) {
      piVar1 = (int *)((int)this + 0x44);
      uVar7 = F_00dbe3b0(piVar1,&REFG(undefined * PTR32, 0x13516ac),uVar7,0);
      piVar8 = *(int * PTR32 *)(*piVar1 + 4 + uVar7 * 8);
      if (piVar8 == (int *)0x0) {
        pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar5 + 0x2c) + 4))))
                                  (*(int * PTR32 *)((int)pvVar5 + 0x2c),0x18)));
        if (piVar6 != (int *)0x0) {
          *piVar6 = 0;
          piVar6[1] = 0;
          piVar6[2] = ((int)0x80000000);
          piVar6[3] = 0;
          piVar6[4] = 0;
          piVar6[5] = ((int)0x80000000);
          piVar8 = piVar6;
        }
        *(int * PTR32 *)(*piVar1 + 4 + uVar7 * 8) = piVar8;
      }
      if (piVar8[1] == (piVar8[2] & 0x3fffffffU)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar8,8);
      }
      puVar4 = (undefined4 *)(*piVar8 + piVar8[1] * 8);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = param_1;
        puVar4[1] = param_2;
      }
      piVar8[1] = piVar8[1] + 1;
      return (uint)puVar4;
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x38) + uVar7 * 4)));
    if (puVar2 != (undefined4 *)0x0) {
      *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
      puVar2[2] = puVar2[2] + 1;
    }
    puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x60))(param_1,param_2,puVar2)));
    if (puVar2 != (undefined4 *)0x0) {
      *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
      piVar1 = puVar2 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)*puVar2)(puVar2,1)));
      }
    }
  }
  return (uint)puVar4;
}

/* ref: FUN_00e0b1e0 */
uint F_00e0b1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0b1e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined4 uVar1;
  byte bVar2;
  longlong lVar3;
  int * piVar4;
  undefined * pvVar5;
  int * in_ecx;
  uint uVar6;
  int * piVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  undefined1 * puVar10;
  LPVOID pvVar11;
  uint uVar12;
  undefined4 * puVar13;
  undefined4 * puVar14;
  int iVar15;
  uint uVar16;
  byte bVar17;
  int iVar18;
  undefined1 * puVar19;
  byte bVar20;
  bool bVar21;
  
  (*(undefined * PTR32 *)(gen_frame + 0x80)) = (*(undefined * PTR32 *)&gen_args[0]);
  in_ecx = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 4))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))))));
  piVar4 = (*(int * PTR32 *)&gen_args[2]);
  piVar7 = (int *)(*in_ecx + -2);
  switch((unsigned int)(uintptr_t)(piVar7)) {
  case (int *)0x0: ;
    (*(uint *)(gen_frame + 0x6c)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x70)) = (int *)0x0;
    (*(int * PTR32 *)(gen_frame + 0x74)) = (int *)0x80000000;
    if ((*(int * PTR32 *)&gen_args[2]) == (int *)0x0) {
      uVar6 = 0;
LAB_00e0b24c: ;
      piVar7 = (int *)0x80000000;
    }
    else {
      uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int * PTR32 *)&gen_args[2]));
      piVar7 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) == (int *)0x0) goto LAB_00e0b24c;
    }
    (*(int * PTR32 *)(gen_frame + 0x74)) = piVar7;
    (*(uint *)(gen_frame + 0x6c)) = uVar6;
    (*(int * PTR32 *)(gen_frame + 0x70)) = piVar4;
    if ((int)((uint)piVar7 & 0x3fffffff) < (int)piVar4) {
      piVar7 = ((int *)GEN_TOP((((uint)piVar7 & 0x3fffffff) * 2)));
      if ((int)piVar7 <= (int)piVar4) {
        piVar7 = piVar4;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(uint *)(gen_frame + 0x6c)),piVar7,1);
    }
    F_0105aec0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x80)) + 4),(*(uint *)(gen_frame + 0x6c)),1,piVar4);
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x8c))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))),(*(uint *)(gen_frame + 0x6c)),piVar4);
    (*(int * PTR32 *)(gen_frame + 0x70)) = (int *)0x0;
    piVar7 = (*(int * PTR32 *)(gen_frame + 0x74));
    if (-1 < (int)(*(int * PTR32 *)(gen_frame + 0x74))) {
      uVar6 = (uint)(*(int * PTR32 *)(gen_frame + 0x74)) & 0x3fffffff;
LAB_00e0b2bd: ;
      (*(int * PTR32 *)(gen_frame + 0x70)) = (int *)0x0;
      uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x6c)),uVar6);
      return uVar6;
    }
    break;
  case (int *)0x1: ;
    uVar6 = 0;
    (*(uint *)(gen_frame + 0x6c)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x70)) = (int *)0x0;
    (*(int * PTR32 *)(gen_frame + 0x74)) = (int *)0x80000000;
    if ((*(int * PTR32 *)&gen_args[2]) == (int *)0x0) {
LAB_00e0b476: ;
      piVar7 = (int *)0x80000000;
    }
    else {
      (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) * 4)));
      uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int * PTR32 *)&gen_args[2]));
      piVar7 = ((int *)GEN_TOP(((int)((int)(*(int * PTR32 *)&gen_args[2]) + ((int)(*(int * PTR32 *)&gen_args[2]) >> 0x1f & 3U)) >> 2)));
      if (piVar7 == (int *)0x0) goto LAB_00e0b476;
    }
    (*(int * PTR32 *)(gen_frame + 0x74)) = piVar7;
    (*(uint *)(gen_frame + 0x6c)) = uVar6;
    (*(int * PTR32 *)(gen_frame + 0x70)) = piVar4;
    if ((int)((uint)piVar7 & 0x3fffffff) < (int)piVar4) {
      piVar7 = ((int *)GEN_TOP((((uint)piVar7 & 0x3fffffff) * 2)));
      if ((int)piVar7 <= (int)piVar4) {
        piVar7 = piVar4;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(uint *)(gen_frame + 0x6c)),piVar7,4);
    }
    (*(int * PTR32 *)(gen_frame + 0x70)) = piVar4;
    F_0105aec0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),(*(uint *)(gen_frame + 0x6c)),4,piVar4);
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x70))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))),(*(uint *)(gen_frame + 0x6c)),(*(int * PTR32 *)(gen_frame + 0x70)));
    (*(int * PTR32 *)(gen_frame + 0x70)) = (int *)0x0;
    if ((int)(*(int * PTR32 *)(gen_frame + 0x74)) < 0) {
      return (uint)(*(int * PTR32 *)(gen_frame + 0x74));
    }
    uVar6 = (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x74))) * 4;
    goto LAB_00e0b2bd;
  case (int *)0x2: ;
    if (2 < *(int *)(*(undefined * PTR32 *)&gen_args[0])) {
      piVar7 = ((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      (*(int * PTR32 *)(gen_frame + 0x84)) = piVar7;
      F_0105aec0(piVar7,&(*(byte *)(gen_frame + 0x8b)),1,1);
      uVar6 = (uint)(*(byte *)(gen_frame + 0x8b));
      uVar16 = (*(byte *)(gen_frame + 0x8b)) >> 1 & 0x7fffffbf;
      (*(undefined4 * PTR32 *)(gen_frame + 0x7c)) = (undefined4 *)(uVar6 & 1);
      bVar17 = 6;
      bVar20 = (*(byte *)(gen_frame + 0x8b));
      while ((char)bVar20 < '\0') {
        F_0105aec0(piVar7,&(*(byte *)(gen_frame + 0x8a)),1,1);
        uVar6 = (uint)(*(byte *)(gen_frame + 0x8a));
        bVar20 = bVar17 & 0x1f;
        bVar17 = bVar17 + 7;
        uVar16 = uVar16 | (uVar6 & 0xffffff7f) << bVar20;
        bVar20 = (*(byte *)(gen_frame + 0x8a));
      }
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x7c)) != (undefined4 *)0x0) {
        uVar16 = -uVar16;
      }
      if (uVar16 != 4) {
        (*(int * PTR32 *)(gen_frame + 0x78)) = (int *)0x0;
        if ((int)(*(int * PTR32 *)&gen_args[2]) < 1) {
          return uVar6;
        }
        do {
          F_0105aec0(piVar7,&(*(byte *)(gen_frame + 0x8a)),1,1);
          (*(undefined4 * PTR32 *)(gen_frame + 0x7c)) = (undefined4 *)((*(byte *)(gen_frame + 0x8a)) & 1);
          uVar6 = (*(byte *)(gen_frame + 0x8a)) >> 1 & 0xffffffbf;
          uVar16 = 0;
          (*(uint *)(gen_frame + 0x60)) = 6;
          piVar4 = (*(int * PTR32 *)(gen_frame + 0x78));
          bVar17 = (*(byte *)(gen_frame + 0x8a));
          while ((*(int * PTR32 *)(gen_frame + 0x78)) = piVar4, (bVar17 & 0x80) != 0) {
            F_0105aec0((*(int * PTR32 *)(gen_frame + 0x84)),&(*(byte *)(gen_frame + 0x8b)),1,1);
            lVar3 = ((ulonglong)(((ulonglong)(byte)(*(uint *)(gen_frame + 0x60)) < 0x40) ? (((ulonglong)((*(byte *)(gen_frame + 0x8b)) & 0xffffff7f) << (ulonglong)(byte)(*(uint *)(gen_frame + 0x60)))) : 0));
            (*(uint *)(gen_frame + 0x60)) = (*(uint *)(gen_frame + 0x60)) + 7;
            uVar6 = uVar6 | (uint)lVar3;
            uVar16 = uVar16 | (uint)((ulonglong)lVar3 >> 0x20);
            piVar4 = (*(int * PTR32 *)(gen_frame + 0x78));
            bVar17 = (*(byte *)(gen_frame + 0x8b));
          }
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x7c)) != (undefined4 *)0x0) {
            bVar21 = uVar6 != 0;
            uVar6 = -uVar6;
            uVar16 = -(uVar16 + bVar21);
          }
          uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x58))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))),piVar4,uVar6,uVar16);
          (*(int * PTR32 *)(gen_frame + 0x78)) = (int *)((int)piVar4 + 1);
          piVar7 = (*(int * PTR32 *)(gen_frame + 0x84));
        } while ((int)piVar4 + 1 < (int)(*(int * PTR32 *)&gen_args[2]));
        return uVar6;
      }
    }
    uVar6 = F_00e0ab70((*(undefined * PTR32 *)(gen_frame + 0x80)),(*(undefined4 * PTR32 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[2]));
    return uVar6;
  case (int *)0x3: ;
    iVar18 = 0;
    if (0 < (int)(*(int * PTR32 *)&gen_args[2])) {
      do {
        uVar6 = F_00e09fa0((*(undefined * PTR32 *)(gen_frame + 0x80)));
        uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x38))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))),iVar18,uVar6);
        iVar18 = iVar18 + 1;
      } while (iVar18 < (int)piVar4);
      return uVar6;
    }
    break;
  case (int *)0x4: ;
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x10))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))),(*(int * PTR32 *)&gen_args[2]));
    piVar7 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x18))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))))));
    uVar6 = ((code *)*(gen_code32 *)(*piVar7 + 0x24))(piVar7);
    (*(uint *)(gen_frame + 0x60)) = uVar6;
    ((uint *)(gen_frame + 0x48))[0] = 0;
    ((uint *)(gen_frame + 0x48))[1] = 0;
    (*(int * PTR32 *)(gen_frame + 0x50)) = (int *)0x80000000;
    (*(int *)(gen_frame + 0x58)) = 0x80;
    pvVar11 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar6 = *(uint *)((int)pvVar11 + 0xc);
    if ((*(int *)((int)pvVar11 + 8) < 0x80) || (*(uint *)((int)pvVar11 + 0x10) < uVar6 + 0x80)) {
      uVar6 = F_00d94390(pvVar11,0x80);
    }
    else {
      *(uint *)((int)pvVar11 + 0xc) = uVar6 + 0x80;
    }
    uVar16 = (*(uint *)(gen_frame + 0x60));
    ((uint *)(gen_frame + 0x48))[0] = uVar6;
    (*(int * PTR32 *)(gen_frame + 0x50)) = (int *)0x80000080;
    (*(uint *)(gen_frame + 0x54)) = uVar6;
    F_00e0a0a0((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)(gen_frame + 0x60)),((uint *)(gen_frame + 0x48)));
    uVar6 = 0;
    uVar12 = 0;
    (*(uint *)(gen_frame + 0x64)) = 0;
    (*(uint *)(gen_frame + 0x68)) = 0;
    (*(uint *)(gen_frame + 0x6c)) = 0x80000000;
    (*(int * PTR32 *)(gen_frame + 0x74)) = (int *)uVar16;
    if (uVar16 != 0) {
      pvVar11 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar6 = *(uint *)((int)pvVar11 + 0xc);
      uVar12 = uVar16 * 0x10 + 0x7f & 0xffffff80;
      if ((*(int *)((int)pvVar11 + 8) < (int)uVar12) ||
         (*(uint *)((int)pvVar11 + 0x10) < uVar6 + uVar12)) {
        uVar6 = F_00d94390(pvVar11,uVar12);
        uVar12 = (*(uint *)(gen_frame + 0x68));
      }
      else {
        *(uint *)((int)pvVar11 + 0xc) = uVar6 + uVar12;
        uVar12 = (*(uint *)(gen_frame + 0x68));
      }
    }
    (*(uint *)(gen_frame + 0x6c)) = uVar16 | 0x80000000;
    iVar18 = uVar16 - uVar12;
    (*(uint *)(gen_frame + 0x64)) = uVar6;
    (*(int * PTR32 *)(gen_frame + 0x70)) = (int *)uVar6;
    if (0 < iVar18) {
      puVar13 = (undefined4 *)(uVar12 * 0x10 + uVar6 + 8);
      do {
        if (puVar13 != (undefined4 *)0x8) {
          puVar13[-2] = 0;
          puVar13[-1] = 0;
          *puVar13 = 0;
          puVar13[1] = 0;
        }
        puVar13 = puVar13 + 4;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
    }
    (*(uint *)(gen_frame + 0x68)) = uVar16;
    ((code *)*(gen_code32 *)(*piVar7 + 0x30))(piVar7,&(*(uint *)(gen_frame + 0x64)));
    (*(int *)(gen_frame + 0x5c)) = 0;
    if (0 < (int)uVar16) {
      (*(int * PTR32 *)(gen_frame + 0x78)) = (int *)0x0;
      do {
        puVar13 = (undefined4 *)((*(uint *)(gen_frame + 0x64)) + (int)(*(int * PTR32 *)(gen_frame + 0x78)));
        if (*(char *)(((uint *)(gen_frame + 0x48))[0] + (*(int *)(gen_frame + 0x5c))) != '\0') {
          piVar7 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x28))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))),*puVar13)));
          (*(int * PTR32 *)(gen_frame + 0x84)) = piVar7;
          if (piVar7 != (int *)0x0) {
            *(short *)((int)piVar7 + 6) = *(short *)((int)piVar7 + 6) + 1;
            piVar7[2] = piVar7[2] + 1;
          }
          piVar7 = (int *)puVar13[2];
          if ((*piVar7 == 9) &&
             ((*(int *)piVar7[1] != 3 ||
              ((((iVar18 = piVar7[2], iVar18 != 4 && (iVar18 != 8)) && (iVar18 != 0xc)) &&
               (iVar18 != 0x10)))))) {
            iVar18 = 0;
            if (0 < (int)(*(int * PTR32 *)&gen_args[2])) {
              do {
                puVar13 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x84)) + 100))((*(int * PTR32 *)(gen_frame + 0x84)),iVar18)));
                (*(undefined4 * PTR32 *)(gen_frame + 0x7c)) = puVar13;
                if (puVar13 != (undefined4 *)0x0) {
                  *(short *)((int)puVar13 + 6) = *(short *)((int)puVar13 + 6) + 1;
                  puVar13[2] = puVar13[2] + 1;
                }
                uVar6 = F_00e19c70(piVar7);
                F_00e0b1e0((*(undefined * PTR32 *)(gen_frame + 0x80)),&(*(undefined4 * PTR32 *)(gen_frame + 0x7c)),(int *)uVar6);
                if ((*(undefined4 * PTR32 *)(gen_frame + 0x7c)) != (undefined4 *)0x0) {
                  *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x7c)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x7c)) + 6) + -1;
                  piVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x7c)) + 2;
                  *piVar4 = *piVar4 + -1;
                  if (*piVar4 == 0) {
                    ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x7c)))((*(undefined4 * PTR32 *)(gen_frame + 0x7c)),1);
                  }
                }
                iVar18 = iVar18 + 1;
              } while (iVar18 < (int)(*(int * PTR32 *)&gen_args[2]));
            }
          }
          else {
            F_00e0b1e0((*(undefined * PTR32 *)(gen_frame + 0x80)),&(*(int * PTR32 *)(gen_frame + 0x84)),(*(int * PTR32 *)&gen_args[2]));
          }
          if ((*(int * PTR32 *)(gen_frame + 0x84)) != (int *)0x0) {
            *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x84)) + 6) = *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x84)) + 6) + -1;
            piVar7 = (*(int * PTR32 *)(gen_frame + 0x84)) + 2;
            *piVar7 = *piVar7 + -1;
            if (*piVar7 == 0) {
              ((code *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x84)))((*(int * PTR32 *)(gen_frame + 0x84)),1);
            }
          }
        }
        (*(int * PTR32 *)(gen_frame + 0x78)) = (*(int * PTR32 *)(gen_frame + 0x78)) + 4;
        iVar18 = (*(int *)(gen_frame + 0x5c)) + 1;
        (*(int *)(gen_frame + 0x5c)) = iVar18;
      } while (iVar18 < (int)(*(uint *)(gen_frame + 0x60)));
    }
    piVar4 = (*(int * PTR32 *)(gen_frame + 0x74));
    piVar7 = (*(int * PTR32 *)(gen_frame + 0x70));
    if ((*(int * PTR32 *)(gen_frame + 0x70)) == (int *)(*(uint *)(gen_frame + 0x64))) {
      (*(uint *)(gen_frame + 0x68)) = 0;
    }
    pvVar11 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar6 = (int)((int)(uintptr_t)piVar4) * 0x10 + 0x7fU & 0xffffff80;
    if (((*(int *)((int)pvVar11 + 8) < (int)uVar6) ||
        (uVar6 + (int)piVar7 != *(int *)((int)pvVar11 + 0xc))) ||
       ((int *)*(uint *)((int)pvVar11 + 0x14) == piVar7)) {
      F_00d945c0(pvVar11,piVar7,uVar6);
    }
    else {
      *(int * PTR32 *)((int)pvVar11 + 0xc) = piVar7;
    }
    (*(uint *)(gen_frame + 0x68)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x6c))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x64)),(*(uint *)(gen_frame + 0x6c)) << 4);
    }
    iVar18 = (*(int *)(gen_frame + 0x58));
    uVar6 = (*(uint *)(gen_frame + 0x54));
    (*(uint *)(gen_frame + 0x64)) = 0;
    (*(uint *)(gen_frame + 0x6c)) = 0x80000000;
    if ((*(uint *)(gen_frame + 0x54)) == ((uint *)(gen_frame + 0x48))[0]) {
      ((uint *)(gen_frame + 0x48))[1] = 0;
    }
    pvVar11 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar16 = iVar18 + 0x7fU & 0xffffff80;
    if (((*(int *)((int)pvVar11 + 8) < (int)uVar16) ||
        (uVar16 + uVar6 != *(int *)((int)pvVar11 + 0xc))) ||
       (*(uint *)((int)pvVar11 + 0x14) == uVar6)) {
      F_00d945c0(pvVar11,uVar6,uVar16);
    }
    else {
      *(uint *)((int)pvVar11 + 0xc) = uVar6;
    }
    ((uint *)(gen_frame + 0x48))[1] = 0;
    piVar7 = (*(int * PTR32 *)(gen_frame + 0x50));
    if (-1 < (int)(*(int * PTR32 *)(gen_frame + 0x50))) {
      uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                        (&REFG(undefined * PTR32, 0x13516ac),((uint *)(gen_frame + 0x48))[0],(uint)(*(int * PTR32 *)(gen_frame + 0x50)) & 0x3fffffff);
      return uVar6;
    }
    break;
  case (int *)0x5: ;
    iVar18 = 0;
    if (0 < (int)(*(int * PTR32 *)&gen_args[2])) {
      do {
        uVar6 = F_00e0b030((*(undefined * PTR32 *)(gen_frame + 0x80)),*(*(undefined4 * PTR32 *)&gen_args[1]),iVar18);
        iVar18 = iVar18 + 1;
      } while (iVar18 < (int)piVar4);
      return uVar6;
    }
    break;
  case (int *)0x6: ;
    piVar7 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x10))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))),(*(int * PTR32 *)&gen_args[2]))));
    (*(undefined4 * PTR32 *)(gen_frame + 0x7c)) = (undefined4 *)0x0;
    if (0 < (int)piVar4) {
      do {
        F_0105aec0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x80)) + 4),&(*(byte *)(gen_frame + 0x8a)),1,1);
        uVar6 = (*(byte *)(gen_frame + 0x8a)) >> 1 & 0x7fffffbf;
        bVar17 = (*(byte *)(gen_frame + 0x8a)) & 1;
        bVar20 = 6;
        puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x7c));
        bVar2 = (*(byte *)(gen_frame + 0x8a));
        while ((*(undefined4 * PTR32 *)(gen_frame + 0x7c)) = puVar13, (char)bVar2 < '\0') {
          F_0105aec0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x80)) + 4),&(*(byte *)(gen_frame + 0x8b)),1,1);
          bVar2 = bVar20 & 0x1f;
          bVar20 = bVar20 + 7;
          uVar6 = uVar6 | ((*(byte *)(gen_frame + 0x8b)) & 0xffffff7f) << bVar2;
          puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x7c));
          bVar2 = (*(byte *)(gen_frame + 0x8b));
        }
        if (bVar17 != 0) {
          uVar6 = -uVar6;
        }
        piVar7 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 100))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))),puVar13)));
        (*(int * PTR32 *)(gen_frame + 0x78)) = piVar7;
        if (piVar7 != (int *)0x0) {
          *(short *)((int)piVar7 + 6) = *(short *)((int)piVar7 + 6) + 1;
          piVar7[2] = piVar7[2] + 1;
        }
        ((code *)*(gen_code32 *)(*piVar7 + 0x10))(piVar7,uVar6);
        F_00e0b1e0((*(undefined * PTR32 *)(gen_frame + 0x80)),&(*(int * PTR32 *)(gen_frame + 0x78)),(int *)uVar6);
        piVar7 = (*(int * PTR32 *)(gen_frame + 0x78));
        if ((*(int * PTR32 *)(gen_frame + 0x78)) != (int *)0x0) {
          *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x78)) + 6) = *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x78)) + 6) + -1;
          piVar4 = (*(int * PTR32 *)(gen_frame + 0x78)) + 2;
          *piVar4 = *piVar4 + -1;
          if (*piVar4 == 0) {
            piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x78)))((*(int * PTR32 *)(gen_frame + 0x78)),1)));
          }
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x7c)) = (undefined4 *)((int)puVar13 + 1);
      } while ((int)puVar13 + 1 < (int)(*(int * PTR32 *)&gen_args[2]));
    }
    break;
  case (int *)0x7: ;
    if (*in_ecx != 9) {
      return (uint)piVar7;
    }
    if (*(int *)in_ecx[1] != 3) {
      return 7;
    }
    puVar10 = (undefined1 *)in_ecx[2];
    if ((((puVar10 != &REFG(undefined, 0x4)) && (puVar10 != (undefined1 *)0x8)) &&
        (puVar10 != (undefined1 *)0xc)) && (puVar10 != (undefined1 *)0x10)) {
      return (uint)puVar10;
    }
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x20))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))),((uint *)(gen_frame + 0x48)));
    if (uVar6 != 0) {
      puVar10 = (undefined1 *)F_00e19c70(in_ecx);
      pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x80));
      puVar19 = puVar10;
      if (puVar10 == &REFG(undefined, 0x4)) {
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        F_0105aec0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x80)) + 4),&(*(byte *)(gen_frame + 0x8a)),1,1);
        puVar10 = (undefined1 *)(uint)(*(byte *)(gen_frame + 0x8a));
        puVar19 = (undefined1 *)((*(byte *)(gen_frame + 0x8a)) >> 1 & 0x7fffffbf);
        (*(undefined4 * PTR32 *)(gen_frame + 0x7c)) = (undefined4 *)((uint)puVar10 & 1);
        bVar17 = 6;
        bVar20 = (*(byte *)(gen_frame + 0x8a));
        while ((char)bVar20 < '\0') {
          F_0105aec0((undefined *)((int)pvVar5 + 4),&(*(byte *)(gen_frame + 0x8b)),1,1);
          puVar10 = (undefined1 *)(uint)(*(byte *)(gen_frame + 0x8b));
          bVar20 = bVar17 & 0x1f;
          bVar17 = bVar17 + 7;
          puVar19 = ((undefined1 *)GEN_TOP(((uint)puVar19 | ((uint)puVar10 & 0xffffff7f) << bVar20)));
          bVar20 = (*(byte *)(gen_frame + 0x8b));
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x7c)) != (undefined4 *)0x0) {
          puVar19 = ((undefined1 *)GEN_TOP(-(int)puVar19));
        }
      }
      iVar18 = 0;
      if ((int)(*(int * PTR32 *)&gen_args[2]) < 1) {
        return (uint)puVar10;
      }
      (*(int * PTR32 *)(gen_frame + 0x84)) = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x80)) + 4);
      do {
        F_0105aec0((*(int * PTR32 *)(gen_frame + 0x84)),((undefined1 *)(gen_frame + 0x8)),4,puVar19);
        uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x30))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))),iVar18,((undefined1 *)(gen_frame + 0x8)));
        iVar18 = iVar18 + 1;
      } while (iVar18 < (int)(*(int * PTR32 *)&gen_args[2]));
      return uVar6;
    }
    piVar7 = (int *)F_00e19c70(in_ecx);
    pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x80));
    (*(int * PTR32 *)(gen_frame + 0x78)) = piVar7;
    (*(int * PTR32 *)(gen_frame + 0x84)) = piVar7;
    if (piVar7 == (int *)&REFG(undefined, 0x4)) {
      F_0105aec0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x80)) + 4),&(*(byte *)(gen_frame + 0x8a)),1,1);
      piVar7 = (int *)((*(byte *)(gen_frame + 0x8a)) >> 1 & 0x7fffffbf);
      (*(undefined4 * PTR32 *)(gen_frame + 0x7c)) = (undefined4 *)((*(byte *)(gen_frame + 0x8a)) & 1);
      bVar17 = 6;
      bVar20 = (*(byte *)(gen_frame + 0x8a));
      while ((char)bVar20 < '\0') {
        F_0105aec0((undefined *)((int)pvVar5 + 4),&(*(byte *)(gen_frame + 0x8b)),1,1);
        bVar20 = bVar17 & 0x1f;
        bVar17 = bVar17 + 7;
        piVar7 = ((int *)GEN_TOP(((uint)piVar7 | ((*(byte *)(gen_frame + 0x8b)) & 0xffffff7f) << bVar20)));
        bVar20 = (*(byte *)(gen_frame + 0x8b));
      }
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x7c)) != (undefined4 *)0x0) {
        piVar7 = ((int *)GEN_TOP(-(int)piVar7));
      }
      (*(int * PTR32 *)(gen_frame + 0x84)) = piVar7;
    }
    piVar4 = (*(int * PTR32 *)(gen_frame + 0x78));
    piVar7 = (*(int * PTR32 *)&gen_args[2]);
    uVar6 = (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x78))) * (int)(*(int * PTR32 *)&gen_args[2]);
    (*(uint *)(gen_frame + 0x6c)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x70)) = (int *)0x0;
    (*(int * PTR32 *)(gen_frame + 0x74)) = (int *)0x80000000;
    if (0 < (int)uVar6) {
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(uint *)(gen_frame + 0x6c)),((int)uVar6 < 0) - 1 & uVar6,4);
    }
    (*(int * PTR32 *)(gen_frame + 0x70)) = (int *)uVar6;
    F_0105aec0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x80)) + 4),(*(uint *)(gen_frame + 0x6c)),4,(int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x84))) * (int)piVar7);
    if (piVar4 != (*(int * PTR32 *)(gen_frame + 0x84))) {
      iVar18 = 0;
      puVar13 = ((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x6c)) + (int)((int)piVar7 + -1) * (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x84))) * 4)));
      puVar9 = ((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x6c)) + ((int)piVar7 + -1) * (int)((int)(uintptr_t)piVar4) * 4)));
      if (3 < (int)piVar7) {
        iVar15 = ((uint)(piVar7 + -1) >> 2) + 1;
        iVar18 = iVar15 * 4;
        puVar8 = puVar9;
        puVar14 = puVar13;
        do {
          puVar8[3] = 0;
          puVar8[2] = puVar14[2];
          puVar13 = puVar14 + -0xc;
          puVar9 = puVar8 + -0x10;
          iVar15 = iVar15 + -1;
          puVar8[1] = puVar14[1];
          uVar1 = *puVar14;
          puVar8[-1] = 0;
          *puVar8 = uVar1;
          puVar8[-2] = puVar14[-1];
          puVar8[-3] = puVar14[-2];
          uVar1 = puVar14[-3];
          puVar8[-5] = 0;
          puVar8[-4] = uVar1;
          puVar8[-6] = puVar14[-4];
          puVar8[-7] = puVar14[-5];
          uVar1 = puVar14[-6];
          puVar8[-9] = 0;
          puVar8[-8] = uVar1;
          puVar8[-10] = puVar14[-7];
          puVar8[-0xb] = puVar14[-8];
          puVar8[-0xc] = puVar14[-9];
          puVar8 = puVar9;
          puVar14 = puVar13;
        } while (iVar15 != 0);
      }
      if (iVar18 < (int)piVar7) {
        iVar18 = (int)piVar7 - iVar18;
        puVar9 = puVar9 + 2;
        puVar13 = puVar13 + 1;
        do {
          puVar9[1] = 0;
          *puVar9 = puVar13[1];
          iVar18 = iVar18 + -1;
          puVar9[-1] = *puVar13;
          puVar9[-2] = puVar13[-1];
          puVar9 = puVar9 + -4;
          puVar13 = puVar13 + -3;
        } while (iVar18 != 0);
      }
    }
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x70))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))),(*(uint *)(gen_frame + 0x6c)),piVar7);
    (*(int * PTR32 *)(gen_frame + 0x70)) = (int *)0x0;
    if ((int)(*(int * PTR32 *)(gen_frame + 0x74)) < 0) {
      return (uint)(*(int * PTR32 *)(gen_frame + 0x74));
    }
    uVar6 = (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x74))) * 4;
    goto LAB_00e0b2bd;
  }
  return (uint)piVar7;
}

/* ref: FUN_00e0bc80 */
uint F_00e0bc80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe0bc80u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  longlong lVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 * puVar5;
  float fVar6;
  int * piVar7;
  code * pcVar8;
  int * piVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  
  uVar3 = (*(uint *)&gen_args[3]);
  (*(int * PTR32 *)(gen_frame + 0x64)) = (*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[1]) != (int *)0x0) {
    *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 6))) + 1;
    (*(int * PTR32 *)&gen_args[1])[2] = (*(int * PTR32 *)&gen_args[1])[2] + 1;
  }
  puVar5 = *(undefined4 * PTR32 *)((*(uint *)&gen_args[3]) + 8);
  piVar7 = (int *)*puVar5;
  if ((piVar7 == (int *)0x9) &&
     ((*(int *)puVar5[1] != 3 ||
      ((((iVar11 = puVar5[2], iVar11 != 4 && (iVar11 != 8)) && (iVar11 != 0xc)) && (iVar11 != 0x10))
      )))) {
    puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x28))))((*(int * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]))));
    if (puVar2 != (undefined4 *)0x0) {
      *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + 1;
      puVar2[2] = puVar2[2] + 1;
    }
    (*(uint *)&gen_args[3]) = (uint)puVar2;
    uVar3 = F_00e19c70(puVar5);
    uVar3 = F_00e0b1e0((*(int * PTR32 *)&gen_args[0]),&(*(uint *)&gen_args[3]),uVar3);
    if (puVar2 != (undefined4 *)0x0) {
      *(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1;
      piVar7 = puVar2 + 2;
      *piVar7 = *piVar7 + -1;
      if (*piVar7 == 0) {
        uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      }
    }
    if ((*(int * PTR32 *)(gen_frame + 0x64)) == (int *)0x0) {
      return uVar3;
    }
    *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x64)) + 6) = *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x64)) + 6) + -1;
    piVar7 = (*(int * PTR32 *)(gen_frame + 0x64)) + 2;
    *piVar7 = *piVar7 + -1;
    if (*piVar7 != 0) {
      return uVar3;
    }
    uVar3 = ((code *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x64)))((*(int * PTR32 *)(gen_frame + 0x64)),1);
    return uVar3;
  }
  if (piVar7 == (int *)0x8) {
    pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[5])) + 0x2c))))(((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[5])))));
    (*(undefined8 *)(gen_frame + 0x44)) = *(undefined8 *)uVar3;
    (*(int * PTR32 *)(gen_frame + 0x54)) = pvVar4;
    (*(undefined8 *)(gen_frame + 0x4c)) = *(undefined8 *)(uVar3 + 8);
    F_0105aec0((*(int * PTR32 *)&gen_args[0]) + 1,(int)&(*(uint *)&gen_args[3]) + 3,1,1);
    piVar7 = ((int *)GEN_TOP(((*(undefined1 *)((char *)&(*(uint *)&gen_args[3]) + 3)) & 1)));
    piVar9 = ((int *)GEN_TOP(((*(undefined1 *)((char *)&(*(uint *)&gen_args[3]) + 3)) >> 1 & 0x7fffffbf)));
    (*(int * PTR32 *)(gen_frame + 0x5c)) = piVar7;
    (*(int *)(gen_frame + 0x60)) = 6;
    if ((int)(*(uint *)&gen_args[3]) < 0) {
      do {
        F_0105aec0((*(int * PTR32 *)&gen_args[0]) + 1,&(*(byte *)(gen_frame + 0x6b)),1,1);
        iVar11 = (*(int *)(gen_frame + 0x60));
        (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 7;
        piVar9 = ((int *)GEN_TOP(((uint)piVar9 | ((*(byte *)(gen_frame + 0x6b)) & 0xffffff7f) << ((byte)iVar11 & 0x1f))));
        piVar7 = (*(int * PTR32 *)(gen_frame + 0x5c));
      } while ((char)(*(byte *)(gen_frame + 0x6b)) < '\0');
    }
    if (piVar7 != (int *)0x0) {
      piVar9 = ((int *)GEN_TOP(-(int)piVar9));
    }
    (*(int * PTR32 *)(gen_frame + 0x5c)) = piVar9;
    uVar3 = F_00e1cd10(&(*(int * PTR32 *)&gen_args[1]));
    if ((**(int * PTR32 *)(uVar3 + 4) == 6) && (uVar3 = F_00e19c80(*(int * PTR32 *)(uVar3 + 4)), uVar3 == 0)) {
      F_0105aec0((*(int * PTR32 *)&gen_args[0]) + 1,(int)&(*(uint *)&gen_args[3]) + 3,1,1);
      uVar3 = (*(undefined1 *)((char *)&(*(uint *)&gen_args[3]) + 3)) >> 1 & 0x7fffffbf;
      (*(uint *)(gen_frame + 0x58)) = (*(undefined1 *)((char *)&(*(uint *)&gen_args[3]) + 3)) & 1;
      (*(int *)(gen_frame + 0x60)) = 6;
      if ((int)(*(uint *)&gen_args[3]) < 0) {
        do {
          F_0105aec0((*(int * PTR32 *)&gen_args[0]) + 1,&(*(byte *)(gen_frame + 0x6b)),1,1);
          iVar11 = (*(int *)(gen_frame + 0x60));
          (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 7;
          uVar3 = uVar3 | ((*(byte *)(gen_frame + 0x6b)) & 0xffffff7f) << ((byte)iVar11 & 0x1f);
        } while ((char)(*(byte *)(gen_frame + 0x6b)) < '\0');
      }
      if ((*(uint *)(gen_frame + 0x58)) != 0) {
        uVar3 = -uVar3;
      }
      piVar7 = *((int * PTR32 *)GEN_TOP(((*(int * PTR32 *)&gen_args[0])[7] + uVar3 * 4)));
      uVar3 = ((code *)*(gen_code32 *)(*piVar7 + 8))(piVar7);
      piVar7 = (*(int * PTR32 *)(gen_frame + 0x54));
      uVar3 = F_00e1a240((*(int * PTR32 *)(gen_frame + 0x54)),uVar3);
      uVar3 = F_00e1a670(piVar7,uVar3);
      (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x4c)) + 0)) = uVar3;
      (*(undefined8 *)(gen_frame + 0x4c)) = CONCAT44((*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x4c)) + 4)),uVar3);
    }
    piVar9 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[5])) + 0x14))))
                              (((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[5])),&(*(int * PTR32 *)(gen_frame + 0x64)),(*(undefined4 *)&gen_args[2]),&(*(undefined8 *)(gen_frame + 0x44)))));
    piVar7 = (*(int * PTR32 *)(gen_frame + 0x5c));
    if (piVar9 != (int *)0x0) {
      *(short *)((int)piVar9 + 6) = *(short *)((int)piVar9 + 6) + 1;
      piVar9[2] = piVar9[2] + 1;
    }
    (*(uint *)&gen_args[3]) = (uint)piVar9;
    ((code *)*(gen_code32 *)(*piVar9 + 0x10))(piVar9,(*(int * PTR32 *)(gen_frame + 0x5c)));
    uVar3 = F_00e0b1e0((*(int * PTR32 *)&gen_args[0]),&(*(uint *)&gen_args[3]),piVar7);
    *(short *)((int)piVar9 + 6) = *(short *)((int)piVar9 + 6) + -1;
    piVar7 = piVar9 + 2;
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      uVar3 = ((code *)*(gen_code32 *)*piVar9)(piVar9,1);
    }
    if ((*(int * PTR32 *)(gen_frame + 0x64)) == (int *)0x0) {
      return uVar3;
    }
    *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x64)) + 6) = *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x64)) + 6) + -1;
    piVar7 = (*(int * PTR32 *)(gen_frame + 0x64)) + 2;
    *piVar7 = *piVar7 + -1;
    if (*piVar7 != 0) {
      return uVar3;
    }
    uVar3 = ((code *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x64)))((*(int * PTR32 *)(gen_frame + 0x64)),1);
    return uVar3;
  }
  switch((unsigned int)(uintptr_t)(piVar7)) {
  case (int *)0x2: ;
    F_0105aec0((*(int * PTR32 *)&gen_args[0]) + 1,(int)&(*(uint *)&gen_args[3]) + 3,1,1);
    fVar6 = gen_bits2f((*(uint *)&gen_args[3]) >> 0x18);
    pcVar8 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x44)));
    goto LAB_00e0c103;
  case (int *)0x3: ;
    (*(uint *)&gen_args[3]) = (uint)gen_fl2bits(F_00e093a0((*(int * PTR32 *)&gen_args[0])));
    pcVar8 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x50)));
    fVar6 = gen_bits2f((*(uint *)&gen_args[3]));
    goto LAB_00e0c103;
  case (int *)0x4: ;
    piVar7 = (*(int * PTR32 *)&gen_args[0]) + 1;
    (*(int * PTR32 *)(gen_frame + 0x54)) = piVar7;
    F_0105aec0(piVar7,(int)&(*(uint *)&gen_args[3]) + 3,1,1);
    uVar3 = (*(undefined1 *)((char *)&(*(uint *)&gen_args[3]) + 3)) >> 1 & 0xffffffbf;
    uVar10 = 0;
    (*(uint *)(gen_frame + 0x58)) = (*(undefined1 *)((char *)&(*(uint *)&gen_args[3]) + 3)) & 1;
    (*(int *)(gen_frame + 0x60)) = 6;
    if (((*(uint *)&gen_args[3]) & 0x80000000) != 0) {
      do {
        F_0105aec0(piVar7,&(*(byte *)(gen_frame + 0x6b)),1,1);
        lVar1 = ((ulonglong)(((ulonglong)(byte)(*(int *)(gen_frame + 0x60)) < 0x40) ? (((ulonglong)((*(byte *)(gen_frame + 0x6b)) & 0xffffff7f) << (ulonglong)(byte)(*(int *)(gen_frame + 0x60)))) : 0));
        (*(int *)(gen_frame + 0x60)) = (*(int *)(gen_frame + 0x60)) + 7;
        uVar3 = uVar3 | (uint)lVar1;
        uVar10 = uVar10 | (uint)((ulonglong)lVar1 >> 0x20);
        piVar7 = (*(int * PTR32 *)(gen_frame + 0x54));
      } while (((*(byte *)(gen_frame + 0x6b)) & 0x80) != 0);
    }
    if ((*(uint *)(gen_frame + 0x58)) != 0) {
      bVar12 = uVar3 != 0;
      uVar3 = -uVar3;
      uVar10 = -(uVar10 + bVar12);
    }
    piVar7 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x40))))((*(int * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),uVar3,uVar10)));
    break;
  case (int *)0x5: ;
    fVar6 = gen_bits2f(F_00e09fa0((*(int * PTR32 *)&gen_args[0])));
    pcVar8 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x54)));
LAB_00e0c103: ;
    piVar7 = ((int *)GEN_TOP((*pcVar8)((*(int * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(undefined4)gen_fl2bits(fVar6))));
    break;
  case (int *)0x6: ;
    if (1 < *(*(int * PTR32 *)&gen_args[0])) {
      iVar11 = *((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[5]));
      uVar3 = F_00e19c80(puVar5);
      uVar3 = ((code *)*(gen_code32 *)(iVar11 + 0x24))((*(int * PTR32 *)&gen_args[0])[5],uVar3);
      puVar5 = (undefined4 *)F_00e0c190((*(int * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)(gen_frame + 0x5c)),3,uVar3);
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x5c))))((*(int * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),*puVar5);
      piVar7 = (*(int * PTR32 *)(gen_frame + 0x5c));
      if ((*(int * PTR32 *)(gen_frame + 0x5c)) != (int *)0x0) {
        *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x5c)) + 6) = *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x5c)) + 6) + -1;
        piVar9 = (*(int * PTR32 *)(gen_frame + 0x5c)) + 2;
        *piVar9 = *piVar9 + -1;
        if (*piVar9 == 0) {
          piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x5c)))((*(int * PTR32 *)(gen_frame + 0x5c)),1)));
        }
      }
      break;
    }
  case (int *)0x7: ;
    piVar7 = (int *)F_00e0cc30((*(int * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
    break;
  case (int *)0x9: ;
    if (((piVar7 == (int *)0x9) && (piVar7 = (int *)puVar5[1], *piVar7 == 3)) &&
       ((piVar7 = (int *)puVar5[2], piVar7 == (int *)&REFG(undefined, 0x4) ||
        (((piVar7 == (int *)0x8 || (piVar7 == (int *)0xc)) || (piVar7 == (int *)0x10)))))) {
      uVar3 = F_00e19c70(puVar5);
      iVar11 = 0;
      if (0 < (int)uVar3) {
        do {
          F_0105aec0((*(int * PTR32 *)&gen_args[0]) + 1,&(*(uint *)&gen_args[3]),4,1);
          ((uint *)(gen_frame + 0x4))[(int)(iVar11)] = (*(uint *)&gen_args[3]);
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)uVar3);
      }
      piVar7 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x48))))((*(int * PTR32 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),((uint *)(gen_frame + 0x4)),uVar3)));
    }
  }
  if ((*(int * PTR32 *)(gen_frame + 0x64)) != (int *)0x0) {
    piVar7 = (int *)0xffffffff;
    *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x64)) + 6) = *(short *)((int)(*(int * PTR32 *)(gen_frame + 0x64)) + 6) + -1;
    piVar9 = (*(int * PTR32 *)(gen_frame + 0x64)) + 2;
    *piVar9 = *piVar9 + -1;
    if (*piVar9 == 0) {
      piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)*(*(int * PTR32 *)(gen_frame + 0x64)))((*(int * PTR32 *)(gen_frame + 0x64)),1)));
    }
  }
  return (uint)piVar7;
}

/* ref: FUN_00e0c150 */
uint F_00e0c150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0c150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00e0afb0(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0x18);
  }
  return (uint)this;
}

/* ref: FUN_00e0c190 */
uint F_00e0c190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe0c190u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x260];
  undefined * pvVar1;
  code * pcVar2;
  byte bVar3;
  int * piVar4;
  undefined * pvVar5;
  uint uVar6;
  LPVOID pvVar7;
  uint uVar8;
  undefined4 * puVar9;
  int iVar10;
  int iVar11;
  int * piVar12;
  uint uVar13;
  byte bVar14;
  
  (*(undefined * PTR32 *)(gen_frame + 0x254)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(int * PTR32 *)&gen_args[2]) == (int *)0x0) {
    F_0105aec0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),(int)&(*(int * PTR32 *)&gen_args[2]) + 3,1,1);
    piVar12 = ((int *)GEN_TOP(((*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[2]) + 3)))) >> 1 & 0x7fffffbf)));
    (*(uint *)(gen_frame + 0x250)) = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[2]) + 3)))) & 1;
    bVar14 = 6;
    if ((int)(*(int * PTR32 *)&gen_args[2]) < 0) {
      do {
        F_0105aec0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(byte *)(gen_frame + 0x25b)),1,1);
        bVar3 = bVar14 & 0x1f;
        bVar14 = bVar14 + 7;
        piVar12 = ((int *)GEN_TOP(((uint)piVar12 | ((*(byte *)(gen_frame + 0x25b)) & 0xffffff7f) << bVar3)));
      } while ((char)(*(byte *)(gen_frame + 0x25b)) < '\0');
    }
    (*(int * PTR32 *)&gen_args[2]) = piVar12;
    if ((*(uint *)(gen_frame + 0x250)) != 0) {
      (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(-(int)piVar12));
    }
  }
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x254));
  if ((*(int * PTR32 *)&gen_args[2]) == (int *)&REFG(undefined, 0x5)) {
    F_0105aec0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x254)) + 4),(int)&(*(int * PTR32 *)&gen_args[2]) + 3,1,1);
    uVar13 = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[2]) + 3)))) >> 1 & 0x7fffffbf;
    (*(uint *)(gen_frame + 0x250)) = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[2]) + 3)))) & 1;
    bVar14 = 6;
    piVar12 = (*(int * PTR32 *)&gen_args[2]);
    while ((int)piVar12 < 0) {
      F_0105aec0((undefined *)((int)pvVar1 + 4),(int)&(*(int * PTR32 *)&gen_args[3]) + 3,1,1);
      bVar3 = bVar14 & 0x1f;
      bVar14 = bVar14 + 7;
      uVar13 = uVar13 | ((uint)(*(int * PTR32 *)&gen_args[3]) >> 0x18 & 0x7f) << bVar3;
      piVar12 = (*(int * PTR32 *)&gen_args[3]);
    }
    if ((*(uint *)(gen_frame + 0x250)) != 0) {
      uVar13 = -uVar13;
    }
    iVar10 = *((int *)GEN_TOP((*(int *)((int)pvVar1 + 0x38) + uVar13 * 4)));
    *(*(int * PTR32 *)&gen_args[1]) = iVar10;
    if (iVar10 != 0) {
      *(short *)(iVar10 + 6) = *(short *)(iVar10 + 6) + 1;
      *(int *)(iVar10 + 8) = *(int *)(iVar10 + 8) + 1;
      return (uint)(*(int * PTR32 *)&gen_args[1]);
    }
  }
  else {
    if ((*(int * PTR32 *)&gen_args[2]) == (int *)&REFG(undefined, 0x6)) {
      *(*(int * PTR32 *)&gen_args[1]) = 0;
      return (uint)(*(int * PTR32 *)&gen_args[1]);
    }
    piVar12 = (*(int * PTR32 *)&gen_args[3]);
    if ((*(int * PTR32 *)&gen_args[3]) == (int *)0x0) {
      F_0105aec0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x254)) + 4),(int)&(*(int * PTR32 *)&gen_args[3]) + 3,1,1);
      uVar13 = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[3]) + 3)))) >> 1 & 0x7fffffbf;
      (*(uint *)(gen_frame + 0x250)) = (*((undefined1 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[3]) + 3)))) & 1;
      bVar14 = 6;
      if ((int)(*(int * PTR32 *)&gen_args[3]) < 0) {
        do {
          F_0105aec0((undefined *)((int)pvVar1 + 4),&(*(byte *)(gen_frame + 0x25b)),1,1);
          bVar3 = bVar14 & 0x1f;
          bVar14 = bVar14 + 7;
          uVar13 = uVar13 | ((*(byte *)(gen_frame + 0x25b)) & 0xffffff7f) << bVar3;
        } while ((char)(*(byte *)(gen_frame + 0x25b)) < '\0');
      }
      if ((*(uint *)(gen_frame + 0x250)) != 0) {
        uVar13 = -uVar13;
      }
      piVar12 = *((int * PTR32 *)GEN_TOP((*(int *)((int)pvVar1 + 0x1c) + uVar13 * 4)));
    }
    piVar4 = (*(int * PTR32 *)&gen_args[2]);
    (*(int * PTR32 *)(gen_frame + 0x210)) = piVar12;
    uVar13 = ((code *)*(gen_code32 *)(*piVar12 + 0x24))(piVar12);
    (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x14) + 0x10))))
                               (*(int * PTR32 *)((int)pvVar1 + 0x14),&(*(int * PTR32 *)(gen_frame + 0x210)),0)));
    if ((*(int * PTR32 *)&gen_args[2]) != (int *)0x0) {
      *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) + 1;
      (*(int * PTR32 *)&gen_args[2])[2] = (*(int * PTR32 *)&gen_args[2])[2] + 1;
    }
    if (piVar4 != (int *)0x3) {
      if (piVar4 == (int *)&REFG(undefined, 0x4)) {
        (*(int * PTR32 *)&gen_args[3]) = *(int * PTR32 *)((int)pvVar1 + 0x3c);
        if (*(uint *)((int)pvVar1 + 0x3c) == (*(uint *)((int)pvVar1 + 0x40) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)pvVar1 + 0x38),4);
        }
        pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x254));
        *((int * PTR32 *)GEN_TOP((*(int *)((int)pvVar1 + 0x38) + *(int *)((int)pvVar1 + 0x3c) * 4))) = (*(int * PTR32 *)&gen_args[2]);
        *(int *)((int)pvVar1 + 0x3c) = *(int *)((int)pvVar1 + 0x3c) + 1;
        (*(int * PTR32 *)&gen_args[3]) = (int *)F_00dbd930((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x254)) + 0x44),(*(int * PTR32 *)&gen_args[3]));
        if ((int)(*(int * PTR32 *)&gen_args[3]) <= *(int *)((int)pvVar5 + 0x4c)) {
          pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)pvVar5 + 0x44) + 4 + (int)(*(int * PTR32 *)&gen_args[3]) * 8)));
          F_00e09780(pvVar1,&(*(int * PTR32 *)&gen_args[2]));
          if (pvVar1 != (undefined *)0x0) {
            F_00e0afb0(pvVar1);
            pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar7 + 0x2c) + 8))))
                      (*(int * PTR32 *)((int)pvVar7 + 0x2c),pvVar1,0x18);
          }
          F_00dbd9f0((undefined *)((int)pvVar5 + 0x44),(*(int * PTR32 *)&gen_args[3]));
        }
      }
      else {
        F_00da0a80(((undefined1 *)(gen_frame + 0x204)),((undefined1 *)(gen_frame + 0x4)),0x200);
        F_00d9fe80(((undefined1 *)(gen_frame + 0x204)),"corrupt file");
        uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                          (REFG(int * PTR32, 0x15dff78),3,0x484994d5,((undefined1 *)(gen_frame + 0x4)),
                           "Tagfile\\Binary\\hkBinaryTagfileReader.cpp",0x28a);
        if (uVar6 != 0) {
          pcVar2 = ((code *)GEN_TOP(swi(3)));
          uVar13 = (*pcVar2)();
          return uVar13;
        }
        F_00d9fda0(((undefined1 *)(gen_frame + 0x204)));
      }
    }
    ((uint *)(gen_frame + 0x214))[0] = 0;
    ((uint *)(gen_frame + 0x214))[1] = 0;
    ((uint *)(gen_frame + 0x214))[2] = 0x80000000;
    (*(int *)(gen_frame + 0x224)) = 0x80;
    pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar6 = *(uint *)((int)pvVar7 + 0xc);
    if ((*(int *)((int)pvVar7 + 8) < 0x80) || (*(uint *)((int)pvVar7 + 0x10) < uVar6 + 0x80)) {
      uVar6 = F_00d94390(pvVar7,0x80);
    }
    else {
      *(uint *)((int)pvVar7 + 0xc) = uVar6 + 0x80;
    }
    ((uint *)(gen_frame + 0x214))[0] = uVar6;
    ((uint *)(gen_frame + 0x214))[2] = 0x80000080;
    ((uint *)(gen_frame + 0x214))[3] = uVar6;
    F_00e0a0a0((*(undefined * PTR32 *)(gen_frame + 0x254)),uVar13,((uint *)(gen_frame + 0x214)));
    uVar6 = 0;
    uVar8 = 0;
    (*(uint *)(gen_frame + 0x23c)) = 0;
    (*(uint *)(gen_frame + 0x240)) = 0;
    (*(uint *)(gen_frame + 0x244)) = 0x80000000;
    (*(uint *)(gen_frame + 0x24c)) = uVar13;
    if (uVar13 != 0) {
      pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar6 = *(uint *)((int)pvVar7 + 0xc);
      uVar8 = uVar13 * 0x10 + 0x7f & 0xffffff80;
      if ((*(int *)((int)pvVar7 + 8) < (int)uVar8) ||
         (*(uint *)((int)pvVar7 + 0x10) < uVar6 + uVar8)) {
        uVar6 = F_00d94390(pvVar7,uVar8);
        uVar8 = (*(uint *)(gen_frame + 0x240));
      }
      else {
        *(uint *)((int)pvVar7 + 0xc) = uVar6 + uVar8;
        uVar8 = (*(uint *)(gen_frame + 0x240));
      }
    }
    iVar10 = uVar13 - uVar8;
    (*(uint *)(gen_frame + 0x23c)) = uVar6;
    (*(uint *)(gen_frame + 0x244)) = uVar13 | 0x80000000;
    (*(uint *)(gen_frame + 0x248)) = uVar6;
    if (0 < iVar10) {
      puVar9 = (undefined4 *)(uVar8 * 0x10 + uVar6 + 8);
      do {
        if (puVar9 != (undefined4 *)0x8) {
          puVar9[-2] = 0;
          puVar9[-1] = 0;
          *puVar9 = 0;
          puVar9[1] = 0;
        }
        puVar9 = puVar9 + 4;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    (*(uint *)(gen_frame + 0x240)) = uVar13;
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x210)) + 0x30))((*(int * PTR32 *)(gen_frame + 0x210)),&(*(uint *)(gen_frame + 0x23c)));
    (*(uint *)(gen_frame + 0x228)) = 0;
    (*(uint *)(gen_frame + 0x22c)) = 0;
    (*(uint *)(gen_frame + 0x230)) = 0x80000000;
    (*(uint *)(gen_frame + 0x238)) = uVar13;
    if (uVar13 == 0) {
      uVar6 = 0;
    }
    else {
      pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar6 = *(uint *)((int)pvVar7 + 0xc);
      uVar8 = uVar13 * 4 + 0x7f & 0xffffff80;
      if ((*(int *)((int)pvVar7 + 8) < (int)uVar8) ||
         (*(uint *)((int)pvVar7 + 0x10) < uVar6 + uVar8)) {
        uVar6 = F_00d94390(pvVar7,uVar8);
      }
      else {
        *(uint *)((int)pvVar7 + 0xc) = uVar6 + uVar8;
      }
    }
    (*(uint *)(gen_frame + 0x228)) = uVar6;
    (*(uint *)(gen_frame + 0x234)) = uVar6;
    (*(uint *)(gen_frame + 0x230)) = uVar13 | 0x80000000;
    (*(uint *)(gen_frame + 0x22c)) = uVar13;
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x74))))((*(int * PTR32 *)&gen_args[2]),&(*(uint *)(gen_frame + 0x228)));
    iVar10 = 0;
    if (0 < (int)uVar13) {
      iVar11 = 0;
      do {
        if (*(char *)(((uint *)(gen_frame + 0x214))[0] + iVar10) != '\0') {
          F_00e0bc80((*(undefined * PTR32 *)(gen_frame + 0x254)),(*(int * PTR32 *)&gen_args[2]),*(undefined4 *)((*(uint *)(gen_frame + 0x228)) + iVar10 * 4),iVar11 + (*(uint *)(gen_frame + 0x23c)));
        }
        iVar10 = iVar10 + 1;
        iVar11 = iVar11 + 0x10;
      } while (iVar10 < (int)uVar13);
    }
    uVar6 = (*(uint *)(gen_frame + 0x238));
    uVar13 = (*(uint *)(gen_frame + 0x234));
    *(*(int * PTR32 *)&gen_args[1]) = (int)(*(int * PTR32 *)&gen_args[2]);
    *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) + 1;
    (*(int * PTR32 *)&gen_args[2])[2] = (*(int * PTR32 *)&gen_args[2])[2] + 1;
    if ((*(uint *)(gen_frame + 0x234)) == (*(uint *)(gen_frame + 0x228))) {
      (*(uint *)(gen_frame + 0x22c)) = 0;
    }
    pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar6 = uVar6 * 4 + 0x7f & 0xffffff80;
    if (((*(int *)((int)pvVar7 + 8) < (int)uVar6) || (uVar6 + uVar13 != *(int *)((int)pvVar7 + 0xc))
        ) || (*(uint *)((int)pvVar7 + 0x14) == uVar13)) {
      F_00d945c0(pvVar7,uVar13,uVar6);
    }
    else {
      *(uint *)((int)pvVar7 + 0xc) = uVar13;
    }
    (*(uint *)(gen_frame + 0x22c)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x230))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x228)),(*(uint *)(gen_frame + 0x230)) * 4);
    }
    uVar6 = (*(uint *)(gen_frame + 0x24c));
    uVar13 = (*(uint *)(gen_frame + 0x248));
    (*(uint *)(gen_frame + 0x228)) = 0;
    (*(uint *)(gen_frame + 0x230)) = 0x80000000;
    if ((*(uint *)(gen_frame + 0x248)) == (*(uint *)(gen_frame + 0x23c))) {
      (*(uint *)(gen_frame + 0x240)) = 0;
    }
    pvVar7 = gen_imp_TlsGetValue(0,REFG(undefined4, 0x15d9a88));
    uVar6 = uVar6 * 0x10 + 0x7f & 0xffffff80;
    if (((*(int *)((int)pvVar7 + 8) < (int)uVar6) || (uVar6 + uVar13 != *(int *)((int)pvVar7 + 0xc))
        ) || (*(uint *)((int)pvVar7 + 0x14) == uVar13)) {
      F_00d945c0(pvVar7,uVar13,uVar6);
    }
    else {
      *(uint *)((int)pvVar7 + 0xc) = uVar13;
    }
    (*(uint *)(gen_frame + 0x240)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x244))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x23c)),(*(uint *)(gen_frame + 0x244)) << 4);
    }
    iVar10 = (*(int *)(gen_frame + 0x224));
    uVar13 = ((uint *)(gen_frame + 0x214))[3];
    (*(uint *)(gen_frame + 0x23c)) = 0;
    (*(uint *)(gen_frame + 0x244)) = 0x80000000;
    if (((uint *)(gen_frame + 0x214))[3] == ((uint *)(gen_frame + 0x214))[0]) {
      ((uint *)(gen_frame + 0x214))[1] = 0;
    }
    pvVar7 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar6 = iVar10 + 0x7fU & 0xffffff80;
    if (((*(int *)((int)pvVar7 + 8) < (int)uVar6) || (uVar6 + uVar13 != *(int *)((int)pvVar7 + 0xc))
        ) || (*(uint *)((int)pvVar7 + 0x14) == uVar13)) {
      F_00d945c0(pvVar7,uVar13,uVar6);
    }
    else {
      *(uint *)((int)pvVar7 + 0xc) = uVar13;
    }
    ((uint *)(gen_frame + 0x214))[1] = 0;
    if (-1 < (int)((uint *)(gen_frame + 0x214))[2]) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),((uint *)(gen_frame + 0x214))[0],((uint *)(gen_frame + 0x214))[2] & 0x3fffffff);
    }
    ((uint *)(gen_frame + 0x214))[0] = 0;
    ((uint *)(gen_frame + 0x214))[2] = 0x80000000;
    *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) = *((short *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 6))) + -1;
    piVar12 = (*(int * PTR32 *)&gen_args[2]) + 2;
    *piVar12 = *piVar12 + -1;
    if (*piVar12 == 0) {
      ((code *)*((gen_code32 *)GEN_TOP(*(*(int * PTR32 *)&gen_args[2]))))((*(int * PTR32 *)&gen_args[2]),1);
    }
  }
  return (uint)(*(int * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00e0c7b0 */
uint F_00e0c7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0c7b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x230];
  uint * this_00;
  int * piVar1;
  int iVar2;
  byte bVar3;
  uint * puVar4;
  undefined * pvVar5;
  byte bVar6;
  uint uVar7;
  
  pvVar5 = (undefined *)((int)this + 4);
  (*(uint * PTR32 *)(gen_frame + 0x21c)) = this;
  F_0105aec0(pvVar5,&(*(undefined4 * PTR32 *)(gen_frame + 0x218)),4,1);
  F_0105aec0(pvVar5,&(*(uint *)(gen_frame + 0x224)),4,1);
  if (((*(undefined4 * PTR32 *)(gen_frame + 0x218)) != (undefined4 *)0xcab00d1e) || ((*(uint *)(gen_frame + 0x224)) != 0xd011face)) {
    F_00da0a80(((undefined1 *)(gen_frame + 0x20c)),((undefined1 *)(gen_frame + 0xc)),0x200);
    F_00d9fe80(((undefined1 *)(gen_frame + 0x20c)),"This does not look like a binary tagfile (magic number mismatch)");
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(int * PTR32, 0x15dff78),1,0x2ab6036f,((undefined1 *)(gen_frame + 0xc)),"Tagfile\\Binary\\hkBinaryTagfileReader.cpp",
               0x2e4);
    F_00d9fda0(((undefined1 *)(gen_frame + 0x20c)));
    *param_1 = 0;
    return (uint)param_1;
  }
  F_0105aec0(pvVar5,&(*(byte *)(gen_frame + 0x22a)),1,1);
  uVar7 = (*(byte *)(gen_frame + 0x22a)) >> 1 & 0x7fffffbf;
  (*(uint *)(gen_frame + 0x224)) = (*(byte *)(gen_frame + 0x22a)) & 1;
  bVar6 = 6;
  bVar3 = (*(byte *)(gen_frame + 0x22a));
  while ((char)bVar3 < '\0') {
    F_0105aec0(pvVar5,&(*(byte *)(gen_frame + 0x22b)),1,1);
    bVar3 = bVar6 & 0x1f;
    bVar6 = bVar6 + 7;
    uVar7 = uVar7 | ((*(byte *)(gen_frame + 0x22b)) & 0xffffff7f) << bVar3;
    bVar3 = (*(byte *)(gen_frame + 0x22b));
  }
  if ((*(uint *)(gen_frame + 0x224)) != 0) {
    uVar7 = -uVar7;
  }
  if (uVar7 != 0xffffffff) {
    do {
      puVar4 = (*(uint * PTR32 *)(gen_frame + 0x21c));
      switch((unsigned int)(uintptr_t)(uVar7)) {
      case 1: ;
        F_0105aec0(pvVar5,&(*(byte *)(gen_frame + 0x22b)),1,1);
        uVar7 = (*(byte *)(gen_frame + 0x22b)) >> 1 & 0x7fffffbf;
        (*(uint *)(gen_frame + 0x224)) = (*(byte *)(gen_frame + 0x22b)) & 1;
        bVar6 = 6;
        puVar4 = (*(uint * PTR32 *)(gen_frame + 0x21c));
        bVar3 = (*(byte *)(gen_frame + 0x22b));
        while ((*(uint * PTR32 *)(gen_frame + 0x21c)) = puVar4, (char)bVar3 < '\0') {
          F_0105aec0(pvVar5,&(*(byte *)(gen_frame + 0x22a)),1,1);
          bVar3 = bVar6 & 0x1f;
          bVar6 = bVar6 + 7;
          uVar7 = uVar7 | ((*(byte *)(gen_frame + 0x22a)) & 0xffffff7f) << bVar3;
          puVar4 = (*(uint * PTR32 *)(gen_frame + 0x21c));
          bVar3 = (*(byte *)(gen_frame + 0x22a));
        }
        if ((*(uint *)(gen_frame + 0x224)) != 0) {
          uVar7 = -uVar7;
        }
        *puVar4 = uVar7;
        switch((unsigned int)(uintptr_t)(uVar7)) {
        case 0: ;
          break;
        case 1: ;
          F_0105aec0(pvVar5,&(*(byte *)(gen_frame + 0x222)),1,1);
          uVar7 = (*(byte *)(gen_frame + 0x222)) >> 1 & 0x7fffffbf;
          (*(uint *)(gen_frame + 0x224)) = (*(byte *)(gen_frame + 0x222)) & 1;
          bVar6 = 6;
          puVar4 = (*(uint * PTR32 *)(gen_frame + 0x21c));
          bVar3 = (*(byte *)(gen_frame + 0x222));
          while ((*(uint * PTR32 *)(gen_frame + 0x21c)) = puVar4, (char)bVar3 < '\0') {
            F_0105aec0(pvVar5,&(*(byte *)(gen_frame + 0x220)),1,1);
            bVar3 = bVar6 & 0x1f;
            bVar6 = bVar6 + 7;
            uVar7 = uVar7 | ((*(byte *)(gen_frame + 0x220)) & 0xffffff7f) << bVar3;
            puVar4 = (*(uint * PTR32 *)(gen_frame + 0x21c));
            bVar3 = (*(byte *)(gen_frame + 0x220));
          }
          if ((*(uint *)(gen_frame + 0x224)) != 0) {
            uVar7 = -uVar7;
          }
          if (uVar7 != 1) goto switchD_00e0c87f_caseD_5;
          this_00 = puVar4 + 10;
          puVar4[0xb] = 0;
          if (puVar4[0xb] == (puVar4[0xc] & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this_00,4);
          }
          *(undefined1 * PTR32 *)(*this_00 + puVar4[0xb] * 4) = &REFG(undefined1, 0x107fc63);
          puVar4[0xb] = puVar4[0xb] + 1;
          if (puVar4[0xb] == (puVar4[0xc] & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this_00,4);
          }
          *(undefined4 *)(*this_00 + puVar4[0xb] * 4) = 0;
          puVar4[0xb] = puVar4[0xb] + 1;
          F_00e09a40(this_00,&REFG(undefined * PTR32, 0x13516ac),&REFG(undefined * PTR32, 0x1354f18),0x6d8);
          puVar4[0xd] = 0x6da;
          break;
        case 2: ;
        case 3: ;
          if (puVar4[0xf] == (puVar4[0x10] & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),puVar4 + 0xe,4);
          }
          *(undefined4 *)(puVar4[0xe] + puVar4[0xf] * 4) = 0;
          puVar4[0xf] = puVar4[0xf] + 1;
          break;
        default: ;
          F_00da0a80(((undefined1 *)(gen_frame + 0x20c)),((undefined1 *)(gen_frame + 0xc)),0x200);
          uVar7 = *puVar4;
          pvVar5 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x20c)),"Unrecognised tagfile version ");
          F_00d9ff40(pvVar5,uVar7);
          ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(int * PTR32, 0x15dff78),1,0x2ab6036f,((undefined1 *)(gen_frame + 0xc)),
                     "Tagfile\\Binary\\hkBinaryTagfileReader.cpp",0x313);
          F_00d9fda0(((undefined1 *)(gen_frame + 0x20c)));
          goto switchD_00e0c87f_caseD_5;
        }
        break;
      case 2: ;
        uVar7 = F_00e0abd0((*(uint * PTR32 *)(gen_frame + 0x21c)));
        if (uVar7 == 1) goto switchD_00e0c87f_caseD_5;
        break;
      case 3: ;
      case 4: ;
      case 6: ;
        F_00e0c190((*(uint * PTR32 *)(gen_frame + 0x21c)),&(*(undefined4 * PTR32 *)(gen_frame + 0x218)),uVar7,0);
        if ((int)*puVar4 < 2) {
          *param_1 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x218));
          if ((*(undefined4 * PTR32 *)(gen_frame + 0x218)) != (undefined4 *)0x0) {
            *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x218)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x218)) + 6) + 1;
            (*(undefined4 * PTR32 *)(gen_frame + 0x218))[2] = (*(undefined4 * PTR32 *)(gen_frame + 0x218))[2] + 1;
            *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x218)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x218)) + 6) + -1;
            piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x218)) + 2;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x218)))((*(undefined4 * PTR32 *)(gen_frame + 0x218)),1);
            }
          }
          return (uint)param_1;
        }
        if ((*(undefined4 * PTR32 *)(gen_frame + 0x218)) != (undefined4 *)0x0) {
          *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x218)) + 6) = *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x218)) + 6) + -1;
          piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x218)) + 2;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            ((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x218)))((*(undefined4 * PTR32 *)(gen_frame + 0x218)),1);
          }
        }
        break;
      default: ;
        goto switchD_00e0c87f_caseD_5;
      case 7: ;
        iVar2 = *(int *)((*(uint * PTR32 *)(gen_frame + 0x21c))[0xe] + 4);
        *param_1 = iVar2;
        if (iVar2 == 0) {
          return (uint)param_1;
        }
        *(short *)(iVar2 + 6) = *(short *)(iVar2 + 6) + 1;
        *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1;
        return (uint)param_1;
      }
      F_0105aec0(pvVar5,&(*(byte *)(gen_frame + 0x221)),1,1);
      uVar7 = (*(byte *)(gen_frame + 0x221)) >> 1 & 0x7fffffbf;
      (*(uint *)(gen_frame + 0x224)) = (*(byte *)(gen_frame + 0x221)) & 1;
      bVar6 = 6;
      bVar3 = (*(byte *)(gen_frame + 0x221));
      while ((char)bVar3 < '\0') {
        F_0105aec0(pvVar5,&(*(byte *)(gen_frame + 0x223)),1,1);
        bVar3 = bVar6 & 0x1f;
        bVar6 = bVar6 + 7;
        uVar7 = uVar7 | ((*(byte *)(gen_frame + 0x223)) & 0xffffff7f) << bVar3;
        bVar3 = (*(byte *)(gen_frame + 0x223));
      }
      if ((*(uint *)(gen_frame + 0x224)) != 0) {
        uVar7 = -uVar7;
      }
      if (uVar7 == 0xffffffff) {
        *param_1 = 0;
        return (uint)param_1;
      }
    } while( true );
  }
switchD_00e0c87f_caseD_5: ;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00e0cc30 */
uint F_00e0cc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0cc30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  byte bVar4;
  LPVOID pvVar5;
  undefined4 * puVar6;
  uint uVar7;
  byte bVar8;
  
  iVar3 = *(int *)this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = this;
  if (iVar3 < 2) {
    F_00e0c190(this,&(*(undefined4 * PTR32 *)(gen_frame + 0x0)),0,0);
    puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x0));
    uVar7 = ((code *)*(gen_code32 *)(*param_1 + 0x5c))(param_1,param_2,(*(undefined4 * PTR32 *)(gen_frame + 0x0)));
    if (puVar6 != (undefined4 *)0x0) {
      uVar7 = 0xffffffff;
      *(short *)((int)puVar6 + 6) = *(short *)((int)puVar6 + 6) + -1;
      piVar1 = puVar6 + 2;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        uVar7 = ((code *)*(gen_code32 *)*puVar6)(puVar6,1);
        return uVar7;
      }
    }
  }
  else {
    F_0105aec0((undefined *)((int)this + 4),&(*(byte *)(gen_frame + 0xb)),1,1);
    uVar7 = (*(byte *)(gen_frame + 0xb)) >> 1 & 0x7fffffbf;
    (*(uint *)(gen_frame + 0x4)) = (*(byte *)(gen_frame + 0xb)) & 1;
    bVar8 = 6;
    bVar4 = (*(byte *)(gen_frame + 0xb));
    while ((char)bVar4 < '\0') {
      F_0105aec0((undefined *)((int)this + 4),&(*(byte *)(gen_frame + 0xa)),1,1);
      bVar4 = bVar8 & 0x1f;
      bVar8 = bVar8 + 7;
      uVar7 = uVar7 | ((*(byte *)(gen_frame + 0xa)) & 0xffffff7f) << bVar4;
      bVar4 = (*(byte *)(gen_frame + 0xa));
    }
    if ((*(uint *)(gen_frame + 0x4)) != 0) {
      uVar7 = -uVar7;
    }
    if ((int)(*(undefined4 * PTR32 *)(gen_frame + 0x0))[0xf] <= (int)uVar7) {
      piVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x0)) + 0x11;
      uVar7 = F_00dbe3b0(piVar1,&REFG(undefined * PTR32, 0x13516ac),uVar7,0);
      puVar6 = *(undefined4 * PTR32 *)(*piVar1 + 4 + uVar7 * 8);
      if (puVar6 == (undefined4 *)0x0) {
        pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        puVar6 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar5 + 0x2c) + 4))))
                           (*(int * PTR32 *)((int)pvVar5 + 0x2c),0x18)));
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0x80000000;
          puVar6[3] = 0;
          puVar6[4] = 0;
          puVar6[5] = 0x80000000;
        }
        *(undefined4 * PTR32 *)(*piVar1 + 4 + uVar7 * 8) = puVar6;
      }
      if (puVar6[4] == (puVar6[5] & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),puVar6 + 3,8);
      }
      puVar2 = (undefined4 *)(puVar6[3] + puVar6[4] * 8);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = param_1;
        puVar2[1] = param_2;
      }
      puVar6[4] = puVar6[4] + 1;
      return (uint)puVar2;
    }
    uVar7 = ((code *)*(gen_code32 *)(*param_1 + 0x5c))
                      (param_1,param_2,*(undefined4 *)((*(undefined4 * PTR32 *)(gen_frame + 0x0))[0xe] + uVar7 * 4));
  }
  return uVar7;
}

/* ref: FUN_00e0cde0 */
uint F_00e0cde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0cde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x58))))
                    (*(int * PTR32 *)this,*(undefined4 *)((int)this + 4),*param_1);
  return uVar1;
}

/* ref: FUN_00e0ce10 */
uint F_00e0ce10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0ce10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return (uint)(*(int *)this == *param_1);
}

/* ref: FUN_00e0ce40 */
uint F_00e0ce40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0ce40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e0ce70 */
uint F_00e0ce70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0ce70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x114d6c0));
  *(undefined4 *)((int)this + 8) = *param_1;
  return (uint)this;
}

/* ref: FUN_00e0ceb0 */
uint F_00e0ceb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe0ceb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *param_1;
  if ((uVar4 != 8) && (uVar4 != 9)) {
    if (uVar4 == 5) {
      iVar5 = 0;
      uVar4 = 0;
      if (0 < param_3) {
        do {
          uVar4 = F_00da11e0(param_2[iVar5 * 2]);
          param_2[iVar5 * 2] = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_3);
        return uVar4;
      }
    }
    else if (uVar4 == 6) {
      iVar5 = 0;
      uVar4 = 0;
      if (0 < param_3) {
        uVar4 = 0;
        do {
          piVar3 = (int *)param_2[iVar5 * 2];
          param_2[iVar5 * 2] = 0;
          if (piVar3 != (int *)0x0) {
            if (param_4 != 0) {
              uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x70))(piVar3);
            }
            piVar1 = piVar3 + 2;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              uVar4 = ((code *)*(gen_code32 *)*piVar3)(piVar3,1);
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_3);
        return uVar4;
      }
    }
    else {
      uVar4 = uVar4 - 7;
      if ((uVar4 == 0) && (iVar5 = 0, 0 < param_3)) {
        do {
          puVar2 = (undefined4 *)param_2[iVar5 * 2];
          param_2[iVar5 * 2] = 0;
          if (puVar2 != (undefined4 *)0x0) {
            piVar3 = puVar2 + 2;
            *piVar3 = *piVar3 + -1;
            if (*piVar3 == 0) {
              uVar4 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_3);
      }
    }
    return uVar4;
  }
  puVar2 = (undefined4 *)*param_2;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = puVar2 + 2;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      uVar4 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  *param_2 = 0;
  return uVar4;
}

/* ref: FUN_00e0cfa0 */
uint F_00e0cfa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0cfa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00e0ceb0(param_1,this,1,param_2);
  return uVar1;
}

/* ref: FUN_00e0cfd0 */
uint F_00e0cfd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0cfd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  return (uint)this;
}

/* ref: FUN_00e0d010 */
uint F_00e0d010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d010u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14) = param_2;
  return param_2;
}

/* ref: FUN_00e0d020 */
uint F_00e0d020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe0d020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114d6d4));
  *(int *)((int)this + 0x10) = param_2;
  *(undefined4 *)((int)this + 0x18) = 0;
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  return (uint)this;
}

/* ref: FUN_00e0d060 */
uint F_00e0d060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0d060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114d774));
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = param_2;
  return (uint)this;
}

/* ref: ArrayOfTuplesImplementation::View::vf1 */
uint F_00e0d090(unsigned int gen_a0)
{
  GEN_ENTER(0xe0d090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 4))))(*(int * PTR32 *)(this + 0xc));
  return *(uint *)(uVar1 + 4);
}

/* ref: ArrayOfTuplesImplementation::View::vf7 */
uint F_00e0d0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xe0d0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x1c))))
                    (*(int * PTR32 *)(this + 0xc),param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf6 */
uint F_00e0d0b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe0d0b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * in_ecx;
  uint uVar2;
  
  in_ecx = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  if (*in_ecx == 6) {
    iVar1 = **((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0xc)));
    uVar2 = F_00e19c80(in_ecx);
    uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x24))(*((undefined4 *)GEN_TOP((*(int *)(this + 0xc) + 0xc))),uVar2);
    return uVar2;
  }
  return 0;
}

/* ref: ArrayOfTuplesImplementation::View::vf2 */
uint F_00e0d0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xe0d0f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))),param_1,param_2,param_3,param_4,param_5,
                     param_6,param_7,param_8);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf3 */
unsigned int F_00e0d100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: ArrayOfTuplesImplementation::View::vf4 */
unsigned int F_00e0d110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: ArrayOfTuplesImplementation::View::vf5 */
uint F_00e0d120(unsigned int gen_a0)
{
  GEN_ENTER(0xe0d120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 4))))(*(int * PTR32 *)(this + 0xc));
  uVar1 = F_00e19c70(uVar1);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf35 */
unsigned int F_00e0d140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0d140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x50))))
                (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))),*(int *)(this + 0x10) + iVar1,
                 (uint)*(byte *)(iVar1 + param_1));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: ArrayOfTuplesImplementation::View::vf28 */
unsigned int F_00e0d180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0d180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x40))))
                (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))),*(int *)(this + 0x10) + iVar1,
                 *(undefined4 *)(param_1 + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: ArrayOfTuplesImplementation::View::vf32 */
unsigned int F_00e0d1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0d1c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x50))))
                (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))),*(int *)(this + 0x10) + iVar1,
                 *(undefined4 *)(param_1 + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: ArrayOfTuplesImplementation::View::vf8 */
uint F_00e0d200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: ArrayOfTuplesImplementation::View::vf11 */
uint F_00e0d210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x2c))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))),*(int *)(this + 0x10) + param_1);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf12 */
uint F_00e0d230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0d230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x30))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))),*(int *)(this + 0x10) + param_1,param_2)
  ;
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf13 */
uint F_00e0d260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x34))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))),*(int *)(this + 0x10) + param_1);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf14 */
uint F_00e0d280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0d280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x38))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))),*(int *)(this + 0x10) + param_1,param_2)
  ;
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf15 */
uint F_00e0d2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x3c))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))),*(int *)(this + 0x10) + param_1);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf16 */
uint F_00e0d2d0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xe0d2d0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0xc) + 0x10)));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x40))
                    (piVar1,*(int *)(param_1 + 0x10) + param_2,(undefined4)gen_fl2bits(param_3));
  return uVar2;
}

/* ref: ArrayOfTuplesImplementation::View::vf19 */
uint F_00e0d300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x4c))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))),*(int *)(this + 0x10) + param_1);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf20 */
uint F_00e0d320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0d320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x50))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))),*(int *)(this + 0x10) + param_1,param_2)
  ;
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf21 */
uint F_00e0d350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x54))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))),*(int *)(this + 0x10) + param_1);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf22 */
uint F_00e0d370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe0d370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x58))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))),*(int *)(this + 0x10) + param_1,param_2,
                     param_3);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf23 */
uint F_00e0d3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x5c))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))),*(int *)(this + 0x10) + param_1);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf24 */
uint F_00e0d3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0d3c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x60))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))),*(int *)(this + 0x10) + param_1,param_2)
  ;
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf25 */
uint F_00e0d3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 100))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))),*(int *)(this + 0x10) + param_1);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::View::vf26 */
uint F_00e0d410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0d410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))) + 0x68))))
                    (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0x10))),*(int *)(this + 0x10) + param_1,param_2)
  ;
  return uVar1;
}

/* ref: FUN_00e0d440 */
unsigned int F_00e0d440(unsigned int gen_a0)
{
  GEN_ENTER(0xe0d440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x114d6d4));
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x114c990));
  return 0;
}

/* ref: FUN_00e0d480 */
unsigned int F_00e0d480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x10);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  *(int *)((int)this + 0x10) = param_1;
  return 0;
}

/* ref: ArrayOfTuplesImplementation::vf1 */
uint F_00e0d4b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe0d4b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 4))))(*(int * PTR32 *)(this + 0x10));
  uVar2 = *(undefined4 *)(this + 0x14);
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x2c))))(*(int * PTR32 *)(this + 0xc))));
  uVar1 = F_00e1a6a0(this_00,uVar1,uVar2);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::vf7 */
uint F_00e0d4e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe0d4e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: ArrayOfTuplesImplementation::vf6 */
uint F_00e0d4f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe0d4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int * in_ecx;
  uint uVar3;
  
  in_ecx = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 4))(this)));
  if (*in_ecx == 6) {
    piVar1 = *(int * PTR32 *)(this + 0xc);
    iVar2 = *piVar1;
    uVar3 = F_00e19c80(in_ecx);
    uVar3 = ((code *)*(gen_code32 *)(iVar2 + 0x24))(piVar1,uVar3);
    return uVar3;
  }
  return 0;
}

/* ref: ArrayOfTuplesImplementation::vf2 */
uint F_00e0d520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xe0d520u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 8))))
                    (*(int * PTR32 *)(this + 0x10),param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::vf3 */
uint F_00e0d530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0xc))))
                    (*(int * PTR32 *)(this + 0x10),*(int *)(this + 0x14) * param_1);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::vf4 */
uint F_00e0d550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0x10))))
                    (*(int * PTR32 *)(this + 0x10),*(int *)(this + 0x14) * param_1);
  return uVar1;
}

/* ref: ArrayOfTuplesImplementation::vf5 */
uint F_00e0d570(unsigned int gen_a0)
{
  GEN_ENTER(0xe0d570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0x14))))(*(int * PTR32 *)(this + 0x10));
  return (int)uVar1 / *(int *)(this + 0x14);
}

/* ref: ArrayOfTuplesImplementation::vf8 */
uint F_00e0d590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: hkDataWorldDict::vf7 */
uint F_00e0d5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 0x30)));
  *param_1 = iVar1;
  if (iVar1 != 0) {
    *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  return (uint)param_1;
}

/* ref: hkDataWorldDict::vf10 */
uint F_00e0d620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0d620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = iVar1;
  if (iVar1 != 0) {
    *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  return (uint)param_1;
}

/* ref: hkDataWorldDict::vf14 */
uint F_00e0d650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0d650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)(*param_1 + 0x14) = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e0d670 */
uint F_00e0d670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d670u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 <= *(int *)(in_eax + 0x10)) {
    return *(uint *)(in_eax + 0xc);
  }
  return 0;
}

/* ref: hkDataWorldDict::vf6 */
uint F_00e0d690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkDataWorldDict::vf9 */
uint F_00e0d6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = F_00da4190(((undefined *)GEN_TOP((*(int *)(this + 8) + 4))),param_1,0);
    return uVar1;
  }
  return 0;
}

/* ref: hkDataWorldDict::vf17 */
uint F_00e0d6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe0d6d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint * puVar4;
  
  iVar1 = *param_1;
  iVar3 = *(int *)(this + 8);
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00da4190((undefined *)(iVar3 + 0x50),param_2,0);
    if (uVar2 == 0) {
      uVar2 = F_00da1210(param_2);
      F_00da3a20((undefined *)(iVar3 + 0x50),uVar2,uVar2);
    }
  }
  iVar3 = *(int *)(iVar1 + 0x2c) + -1;
  if (-1 < iVar3) {
    puVar4 = ((uint *)GEN_TOP((*(int *)(iVar1 + 0x28) + iVar3 * 0x18)));
    do {
      if (*puVar4 == uVar2) goto LAB_00e0d732;
      puVar4 = puVar4 + -6;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  iVar3 = -1;
LAB_00e0d732: ;
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x28) + 0x14 + iVar3 * 0x18))) = param_3;
  return iVar3 * 3;
}

/* ref: hkDataWorldDict::vf12 */
uint F_00e0d750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0d750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 8))((int *)*param_1);
  iVar1 = *(int *)(this + 8);
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = F_00da4190((undefined *)(iVar1 + 0x50),uVar2,0);
    if (uVar3 == 0) {
      uVar3 = F_00da1210(uVar2);
      F_00da3a20((undefined *)(iVar1 + 0x50),uVar3,uVar3);
    }
  }
  F_00e1a550(this + 0x10,uVar3,param_2);
  uVar2 = F_00e12420(*(undefined * PTR32 *)(this + 8),uVar3,param_2);
  return uVar2;
}

/* ref: hkDataWorldDict::vf8 */
uint F_00e0d7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0d7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00e14d90(*(undefined * PTR32 *)(this + 8),param_1);
  return uVar1;
}

/* ref: hkDataWorldDict::vf16 */
uint F_00e0d7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe0d7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint * puVar1;
  int iVar2;
  int * this_00;
  uint uVar3;
  
  iVar2 = *(int *)(this + 8);
  this_00 = (int *)*param_1;
  if (param_2 == 0) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    param_1 = (undefined4 *)F_00da4190((undefined *)(iVar2 + 0x50),param_2,0);
    if (param_1 == (undefined4 *)0x0) {
      param_1 = (undefined4 *)F_00da1210(param_2);
      F_00da3a20((undefined *)(iVar2 + 0x50),param_1,param_1);
    }
  }
  uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x20))(this_00,param_2);
  if (uVar3 != 0xffffffff) {
    F_00e13930(this_00,param_1);
  }
  if (this_00[0xb] == (this_00[0xc] & 0x3fffffffU)) {
    F_00d95710(*(undefined4 *)(this_00[3] + 0xc),this_00 + 10,0x18);
  }
  puVar1 = (uint *)(this_00[10] + this_00[0xb] * 0x18);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = (uint)param_1;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[4] = param_3;
    puVar1[5] = param_4;
  }
  this_00[0xb] = this_00[0xb] + 1;
  return (uint)puVar1;
}

/* ref: hkDataWorldDict::vf18 */
uint F_00e0d8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe0d8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint * puVar6;
  uint * puVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = *(int *)(this + 8);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  (*(int *)(gen_frame + 0x24)) = *param_1;
  if (param_2 == 0) {
    param_2 = 0;
    uVar3 = param_2;
  }
  else {
    uVar3 = F_00da4190((undefined *)(iVar8 + 0x50),param_2,0);
    if (uVar3 == 0) {
      uVar3 = F_00da1210(param_2);
      F_00da3a20((undefined *)(iVar8 + 0x50),uVar3,uVar3);
    }
  }
  param_2 = uVar3;
  iVar8 = *(int *)((*(undefined * PTR32 *)(gen_frame + 0x28)) + 8);
  if (param_3 == 0) {
    param_3 = 0;
    uVar3 = param_3;
  }
  else {
    uVar3 = F_00da4190((undefined *)(iVar8 + 0x50),param_3,0);
    if (uVar3 == 0) {
      uVar3 = F_00da1210(param_3);
      F_00da3a20((undefined *)(iVar8 + 0x50),uVar3,uVar3);
    }
  }
  param_3 = uVar3;
  piVar1 = (int *)*param_1;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0x80000000;
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  (*(int *)(gen_frame + 0x10)) = 0;
  F_00e14e20(*(undefined * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x28)) + 8),uVar3,1,0,&(*(int *)(gen_frame + 0xc)));
  iVar8 = (*(int *)(gen_frame + 0x24));
  iVar9 = 0;
  if (0 < (*(int *)(gen_frame + 0x10))) {
    do {
      iVar2 = *(int *)((*(int *)(gen_frame + 0xc)) + iVar9 * 4);
      iVar5 = *(int *)(iVar2 + 0x14);
      iVar4 = 0;
      if (0 < iVar5) {
        puVar6 = *(uint * PTR32 *)(iVar2 + 0x10);
        puVar7 = puVar6;
        do {
          if (*puVar7 == param_2) {
            puVar6[iVar4 * 4] = param_3;
            break;
          }
          iVar4 = iVar4 + 1;
          puVar7 = puVar7 + 4;
        } while (iVar4 < iVar5);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < (*(int *)(gen_frame + 0x10)));
  }
  this_00 = *(undefined * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x28)) + 8);
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x20)) = ((int)0x80000000);
  F_00e14c90(this_00,(*(int *)(gen_frame + 0x24)),1,&(*(int *)(gen_frame + 0x18)));
  iVar9 = 0;
  if (0 < (*(int *)(gen_frame + 0x1c))) {
    do {
      iVar8 = *(int *)((*(int *)(gen_frame + 0x18)) + iVar9 * 4);
      iVar2 = *(int *)(iVar8 + 0x10);
      iVar5 = 0;
      if (0 < iVar2) {
        puVar6 = *(uint * PTR32 *)(iVar8 + 0xc);
        do {
          if (*puVar6 == param_2) {
            *puVar6 = param_3;
            break;
          }
          iVar5 = iVar5 + 1;
          puVar6 = puVar6 + 2;
        } while (iVar5 < iVar2);
      }
      iVar9 = iVar9 + 1;
      iVar8 = (*(int *)(gen_frame + 0x24));
    } while (iVar9 < (*(int *)(gen_frame + 0x1c)));
  }
  iVar9 = *(int *)(iVar8 + 0x2c) + -1;
  if (-1 < iVar9) {
    puVar6 = ((uint *)GEN_TOP((*(int *)(iVar8 + 0x28) + iVar9 * 0x18)));
    do {
      if (*puVar6 == param_2) goto LAB_00e0da12;
      iVar9 = iVar9 + -1;
      puVar6 = puVar6 + -6;
    } while (-1 < iVar9);
  }
  iVar9 = -1;
LAB_00e0da12: ;
  *((uint *)GEN_TOP((*(int *)(iVar8 + 0x28) + iVar9 * 0x18))) = param_3;
  (*(int *)(gen_frame + 0x1c)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x20))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x18)),(*(int *)(gen_frame + 0x20)) * 4);
  }
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0x80000000;
  uVar3 = (*(uint *)(gen_frame + 0x14));
  if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) * 4);
  }
  return uVar3;
}

/* ref: hkDataWorldDict::vf19 */
uint F_00e0da90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0da90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined * this_00;
  int iVar2;
  uint uVar3;
  uint * puVar4;
  int iVar5;
  undefined4 * puVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = *(int *)(this + 8);
  (*(int *)(gen_frame + 0x18)) = *param_1;
  if (param_2 == 0) {
    param_2 = 0;
    uVar3 = param_2;
  }
  else {
    uVar3 = F_00da4190((undefined *)(iVar7 + 0x50),param_2,0);
    if (uVar3 == 0) {
      uVar3 = F_00da1210(param_2);
      F_00da3a20((undefined *)(iVar7 + 0x50),uVar3,uVar3);
    }
  }
  param_2 = uVar3;
  iVar7 = 0;
  piVar1 = (int *)*param_1;
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  (*(int *)(gen_frame + 0x4)) = 0;
  F_00e14e20(*(undefined * PTR32 *)(this + 8),uVar3,1,0,&(*(int *)(gen_frame + 0x0)));
  if (0 < (*(int *)(gen_frame + 0x4))) {
    do {
      F_00e13c60(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x0)) + iVar7 * 4),param_2);
      iVar7 = iVar7 + 1;
    } while (iVar7 < (*(int *)(gen_frame + 0x4)));
  }
  iVar7 = (*(int *)(gen_frame + 0x18));
  this_00 = *(undefined * PTR32 *)(this + 8);
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = ((int)0x80000000);
  F_00e14c90(this_00,(*(int *)(gen_frame + 0x18)),1,&(*(int *)(gen_frame + 0xc)));
  param_1 = (int *)0x0;
  if (0 < (*(int *)(gen_frame + 0x10))) {
    do {
      iVar5 = *(int *)((*(int *)(gen_frame + 0xc)) + (int)((int)(uintptr_t)param_1) * 4);
      iVar8 = 0;
      if (0 < *(int *)(iVar5 + 0x10)) {
        puVar4 = *(uint * PTR32 *)(iVar5 + 0xc);
        do {
          if (*puVar4 == param_2) {
            puVar6 = (undefined4 *)puVar4[1];
            piVar1 = puVar6 + 2;
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              ((code *)*(gen_code32 *)*puVar6)(puVar6,1);
            }
            *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + -1;
            iVar2 = (*(int *)(iVar5 + 0x10) - iVar8) * 8;
            puVar6 = ((undefined4 *)GEN_TOP((*(int *)(iVar5 + 0xc) + iVar8 * 8)));
            if (0 < iVar2) {
              iVar5 = (iVar2 - 1U >> 2) + 1;
              do {
                *puVar6 = puVar6[2];
                puVar6 = puVar6 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
            break;
          }
          iVar8 = iVar8 + 1;
          puVar4 = puVar4 + 2;
        } while (iVar8 < *(int *)(iVar5 + 0x10));
      }
      param_1 = (int *)((int)param_1 + 1);
    } while ((int)param_1 < (*(int *)(gen_frame + 0x10)));
  }
  iVar5 = *(int *)(iVar7 + 0x2c) + -1;
  if (-1 < iVar5) {
    puVar4 = ((uint *)GEN_TOP((*(int *)(iVar7 + 0x28) + iVar5 * 0x18)));
    do {
      if (*puVar4 == param_2) goto LAB_00e0dbe8;
      puVar4 = puVar4 + -6;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  iVar5 = -1;
LAB_00e0dbe8: ;
  *(int *)(iVar7 + 0x2c) = *(int *)(iVar7 + 0x2c) + -1;
  iVar8 = (*(int *)(iVar7 + 0x2c) - iVar5) * 0x18;
  puVar6 = ((undefined4 *)GEN_TOP((*(int *)(iVar7 + 0x28) + iVar5 * 0x18)));
  if (0 < iVar8) {
    iVar5 = (iVar8 - 1U >> 3) + 1;
    do {
      *puVar6 = puVar6[6];
      puVar6[1] = puVar6[7];
      puVar6 = puVar6 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  do {
    iVar5 = 0;
    if (0 < *(int *)(iVar7 + 0x2c)) {
      puVar4 = *(uint * PTR32 *)(iVar7 + 0x28);
      do {
        if (*puVar4 == param_2) goto LAB_00e0dc48;
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 6;
      } while (iVar5 < *(int *)(iVar7 + 0x2c));
    }
    iVar7 = *(int *)(iVar7 + 0x18);
  } while (iVar7 != 0);
LAB_00e0dc48: ;
  (*(int *)(gen_frame + 0x10)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x14))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x14)) * 4);
  }
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0x80000000;
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
  }
  return uVar3;
}

/* ref: hkDataWorldDict::vf21 */
uint F_00e0dcb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0dcb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)(this + 8);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = F_00e14e20(this_00,param_1,0,1,param_2);
  return uVar1;
}

/* ref: hkDataWorldDict::vf20 */
uint F_00e0dce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0dce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  this_00 = *(undefined * PTR32 *)(this + 8);
  *(undefined4 *)(param_2 + 4) = 0;
  uVar1 = F_00e14e20(this_00,param_1,1,1,param_2);
  return uVar1;
}

/* ref: FUN_00e0dd10 */
uint F_00e0dd10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0dd10u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 in_ecx;
  int * piVar1;
  LPVOID pvVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  switch((unsigned int)(uintptr_t)(*param_2)) {
  case 2: ;
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                               (*(int * PTR32 *)((int)pvVar2 + 0x2c),0x20)));
    *(undefined2 *)((int)pvVar3 + 4) = 0x20;
    uVar4 = F_00e14220(pvVar3,param_1,param_2);
    return uVar4;
  case 3: ;
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                               (*(int * PTR32 *)((int)pvVar2 + 0x2c),0x20)));
    *(undefined2 *)((int)pvVar3 + 4) = 0x20;
    uVar4 = F_00e14390(pvVar3,param_1,param_2);
    return uVar4;
  case 4: ;
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                               (*(int * PTR32 *)((int)pvVar2 + 0x2c),0x30)));
    *(undefined2 *)((int)pvVar3 + 4) = 0x30;
    uVar4 = F_00e0ff60(pvVar3,param_1);
    return uVar4;
  case 5: ;
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                               (*(int * PTR32 *)((int)pvVar2 + 0x2c),0x20)));
    *(undefined2 *)((int)pvVar3 + 4) = 0x20;
    uVar4 = F_00e14670(pvVar3,param_1,param_2);
    return uVar4;
  case 6: ;
    iVar6 = *param_1;
    uVar4 = F_00e19c80(param_2);
    uVar4 = ((code *)*(gen_code32 *)(iVar6 + 0x24))(param_1,uVar4);
    if (uVar4 != 0) {
      pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                                 (*(int * PTR32 *)((int)pvVar2 + 0x2c),0x28)));
      *(undefined2 *)((int)pvVar3 + 4) = 0x28;
      uVar4 = F_00e153f0(pvVar3,param_1,param_2,uVar4,param_3);
      return uVar4;
    }
    break;
  case 7: ;
    in_ecx = param_2[1];
    uVar4 = F_00e19c80(in_ecx);
    if (uVar4 != 0) {
      iVar6 = *param_1;
      uVar4 = F_00e19c80(in_ecx);
      uVar4 = ((code *)*(gen_code32 *)(iVar6 + 0x24))(param_1,uVar4);
      if (uVar4 == 0) {
        return 0;
      }
    }
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                               (*(int * PTR32 *)((int)pvVar2 + 0x2c),0x20)));
    *(undefined2 *)((int)pvVar3 + 4) = 0x20;
    uVar4 = F_00e144e0(pvVar3,param_1,param_2);
    return uVar4;
  case 8: ;
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                               (*(int * PTR32 *)((int)pvVar2 + 0x2c),0x20)));
    *(undefined2 *)((int)pvVar3 + 4) = 0x20;
    piVar1 = (int *)F_00e147e0(pvVar3,param_1,param_2);
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_3);
    iVar6 = 0;
    if (0 < param_3) {
      do {
        uVar4 = F_00e0dd10(param_1,(undefined4 *)param_2[1],0);
        ((code *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1,iVar6,uVar4);
        iVar6 = iVar6 + 1;
      } while (iVar6 < param_3);
    }
    return (uint)piVar1;
  case 9: ;
    if (*(int *)param_2[1] == 3) {
      pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                                 (*(int * PTR32 *)((int)pvVar2 + 0x2c),0x20)));
      *(undefined2 *)((int)pvVar3 + 4) = 0x20;
      uVar4 = F_00e10660(pvVar3,param_1,param_2);
      return uVar4;
    }
    uVar4 = F_00e0dd10(param_1,(int *)param_2[1],0);
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                               (*(int * PTR32 *)((int)pvVar2 + 0x2c),0x1c)));
    *(undefined2 *)((int)pvVar3 + 4) = 0x1c;
    uVar5 = F_00e19c70(param_2);
    uVar4 = F_00e0d020(pvVar3,param_1,uVar4,uVar5);
    return uVar4;
  }
  return 0;
}

/* ref: hkDataWorldDict::vf5 */
uint F_00e0dfc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe0dfc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  piVar1 = *(int * PTR32 *)(param_3 + 8);
  if (*piVar1 == 9) {
    uVar2 = F_00e19c70(piVar1);
  }
  else {
    uVar2 = 0;
  }
  puVar3 = (undefined4 *)F_00e0dd10(this,piVar1[1],uVar2);
  piVar1 = (int *)*param_1;
  if (puVar3 != (undefined4 *)0x0) {
    *(short *)((int)puVar3 + 6) = *(short *)((int)puVar3 + 6) + 1;
    puVar3[2] = puVar3[2] + 1;
  }
  ((code *)*(gen_code32 *)(*piVar1 + 0x58))(piVar1,param_2,puVar3);
  if (puVar3 != (undefined4 *)0x0) {
    *(short *)((int)puVar3 + 6) = *(short *)((int)puVar3 + 6) + -1;
    piVar1 = puVar3 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*puVar3)(puVar3,1);
    }
  }
  return (uint)puVar3;
}

/* ref: hkDataWorldDict::vf4 */
uint F_00e0e5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0e5b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  LPVOID pvVar2;
  int * piVar3;
  uint uVar4;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                            (*(int * PTR32 *)((int)pvVar2 + 0x2c),0x20)));
  *(undefined2 *)(piVar3 + 1) = 0x20;
  iVar1 = *(*(int * PTR32 *)&gen_args[1]);
  *(undefined2 *)((int)piVar3 + 6) = 0;
  piVar3[2] = 0;
  *piVar3 = (int)(*(undefined * PTR32 (*)[30])REFP(0x114d814));
  if (iVar1 != 0) {
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  piVar3[3] = iVar1;
  piVar3[4] = 0;
  piVar3[5] = 0;
  piVar3[6] = ((int)0x80000000);
  piVar3[7] = (uint)(*(int * PTR32 *)&gen_args[2]) & 0xff;
  piVar3[2] = piVar3[2] + 1;
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8)));
  (*(int * PTR32 *)&gen_args[2]) = piVar3;
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
  F_00e16440((undefined *)(iVar1 + 0x34),uVar4,&(*(int * PTR32 *)&gen_args[2]));
  if (*(int *)(iVar1 + 0x30) == 0) {
    *(int * PTR32 *)(iVar1 + 0x30) = piVar3;
  }
  return (uint)piVar3;
}

/* ref: hkDataWorldDict::vf3 */
uint F_00e0e650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0e650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  int iVar2;
  code * pcVar3;
  LPVOID pvVar4;
  undefined * pvVar5;
  int * piVar6;
  uint uVar7;
  uint uVar8;
  int * piVar9;
  int * piVar10;
  
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar4 + 0x2c) + 4))))
                             (*(int * PTR32 *)((int)pvVar4 + 0x2c),0x40)));
  *(undefined2 *)((int)pvVar5 + 4) = 0x40;
  piVar6 = (int *)F_00e13540(pvVar5,this,*param_1,param_1[1]);
  if (param_1[2] != 0) {
    uVar7 = F_00da4190(((undefined *)GEN_TOP((*(int *)(this + 8) + 4))),param_1[2],0);
    if (uVar7 != 0) {
      *(int *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1;
    }
    puVar1 = (undefined4 *)piVar6[6];
    if (puVar1 != (undefined4 *)0x0) {
      piVar9 = puVar1 + 2;
      *piVar9 = *piVar9 + -1;
      if (*piVar9 == 0) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      }
    }
    piVar6[6] = uVar7;
  }
  piVar6[2] = piVar6[2] + 1;
  iVar2 = *(int *)(this + 8);
  pcVar3 = *(gen_code32 *)(*piVar6 + 0x10);
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar6;
  (*(int *)(gen_frame + 0x14)) = iVar2;
  uVar7 = (*pcVar3)(piVar6);
  uVar8 = ((code *)*(gen_code32 *)(*piVar6 + 8))(piVar6);
  pvVar5 = (undefined *)(iVar2 + 4);
  uVar8 = F_00da3ae0(pvVar5,uVar8);
  F_00da3e40(pvVar5,&(*(char *)(gen_frame + 0x1b)),uVar8);
  if ((*(char *)(gen_frame + 0x1b)) == '\0') {
    uVar8 = ((code *)*(gen_code32 *)(*piVar6 + 8))(piVar6);
    F_00da3a20(pvVar5,uVar8,piVar6);
    if (uVar7 != 0) {
      F_00e163b0((undefined *)((*(int *)(gen_frame + 0x14)) + 0x14),uVar7,&(*(int * PTR32 *)(gen_frame + 0x10)));
    }
  }
  (*(int *)(gen_frame + 0xc)) = 0;
  if (0 < (int)param_1[4]) {
    (*(int *)(gen_frame + 0x14)) = 0;
    do {
      piVar10 = (int *)(param_1[3] + (*(int *)(gen_frame + 0x14)));
      piVar9 = (int *)*piVar10;
      iVar2 = *(int *)(this + 8);
      (*(int * PTR32 *)(gen_frame + 0x10)) = piVar9;
      if (piVar9 == (int *)0x0) {
        (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)0x0;
      }
      else {
        piVar9 = (int *)F_00da4190((undefined *)(iVar2 + 0x50),piVar9,0);
        if (piVar9 == (int *)0x0) {
          piVar9 = (int *)F_00da1210((*(int * PTR32 *)(gen_frame + 0x10)));
          (*(int * PTR32 *)(gen_frame + 0x10)) = piVar9;
          F_00da3a20((undefined *)(iVar2 + 0x50),piVar9,piVar9);
          piVar9 = (*(int * PTR32 *)(gen_frame + 0x10));
        }
        (*(int * PTR32 *)(gen_frame + 0x10)) = piVar9;
      }
      iVar2 = piVar10[1];
      if (piVar6[0xb] == (piVar6[0xc] & 0x3fffffffU)) {
        F_00d95710(*(undefined4 *)(piVar6[3] + 0xc),piVar6 + 10,0x18);
      }
      puVar1 = (undefined4 *)(piVar6[10] + piVar6[0xb] * 0x18);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = (*(int * PTR32 *)(gen_frame + 0x10));
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = iVar2;
        puVar1[5] = 0;
      }
      piVar6[0xb] = piVar6[0xb] + 1;
      (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 0xc;
      (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + 1;
    } while ((*(int *)(gen_frame + 0xc)) < (int)param_1[4]);
  }
  F_00e1a240(this + 0x10,*param_1);
  return (uint)piVar6;
}

/* ref: FUN_00e0e830 */
uint F_00e0e830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0e830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined4 * puVar2;
  code * pcVar3;
  LPVOID pvVar4;
  undefined * pvVar5;
  uint uVar6;
  uint uVar7;
  int * piVar8;
  int * piVar9;
  uint * puVar10;
  undefined1 * in_ecx;
  int iVar11;
  
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this;
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar4 + 0x2c) + 4))))
                             (*(int * PTR32 *)((int)pvVar4 + 0x2c),0x40)));
  *(undefined2 *)((int)pvVar5 + 4) = 0x40;
  uVar6 = F_00d92a10(param_1);
  uVar7 = F_00d92610(param_1);
  piVar8 = (int *)F_00e13540(pvVar5,this,uVar7,uVar6);
  (*(int * PTR32 *)(gen_frame + 0x14)) = piVar8;
  uVar6 = F_00d92620(param_1);
  if (uVar6 == 0) goto LAB_00e0e8e5;
  uVar6 = F_00d92620(param_1);
  uVar6 = F_00d92610(uVar6);
  if (uVar6 == 0) {
LAB_00e0e8b5: ;
    uVar6 = F_00d92620(param_1);
    uVar6 = F_00e0e830((*(undefined * PTR32 *)(gen_frame + 0x24)),uVar6);
    if (uVar6 != 0) goto LAB_00e0e8cb;
  }
  else {
    uVar6 = F_00da4190(((undefined *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 8) + 4))),uVar6,0);
    if (uVar6 == 0) goto LAB_00e0e8b5;
LAB_00e0e8cb: ;
    *(int *)(uVar6 + 8) = *(int *)(uVar6 + 8) + 1;
  }
  puVar2 = (undefined4 *)piVar8[6];
  if (puVar2 != (undefined4 *)0x0) {
    piVar9 = puVar2 + 2;
    *piVar9 = *piVar9 + -1;
    if (*piVar9 == 0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  piVar8[6] = uVar6;
LAB_00e0e8e5: ;
  piVar8[2] = piVar8[2] + 1;
  iVar11 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 8);
  pcVar3 = *(gen_code32 *)(*piVar8 + 0x10);
  (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar8;
  uVar6 = (*pcVar3)(piVar8);
  (*(uint *)(gen_frame + 0x18)) = uVar6;
  uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8);
  uVar6 = F_00da3ae0((undefined *)(iVar11 + 4),uVar6);
  F_00da3e40(iVar11 + 4,&(*(char *)(gen_frame + 0x2b)),uVar6);
  if ((*(char *)(gen_frame + 0x2b)) == '\0') {
    uVar6 = ((code *)*(gen_code32 *)(*piVar8 + 8))(piVar8);
    F_00da3a20((undefined *)(iVar11 + 4),uVar6,piVar8);
    if ((*(uint *)(gen_frame + 0x18)) != 0) {
      F_00e163b0((undefined *)(iVar11 + 0x14),(*(uint *)(gen_frame + 0x18)),&(*(int * PTR32 *)(gen_frame + 0x1c)));
    }
  }
  (*(int *)(gen_frame + 0x20)) = 0;
  uVar6 = F_00d92850(param_1);
  if (0 < (int)uVar6) {
    do {
      piVar9 = (int *)F_00d92860(param_1,(*(int *)(gen_frame + 0x20)));
      (*(uint *)(gen_frame + 0x18)) = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x20);
      if ((*(ushort *)(piVar9 + 4) & 0x400) != 0x400) {
        pvVar5 = (undefined *)F_00da5fd0(piVar9);
        uVar6 = 0;
        if (pvVar5 != (undefined *)0x0) {
          uVar6 = F_00d92610(pvVar5);
          uVar7 = F_00da6010(piVar9,REFG(undefined * PTR32, 0x1354944));
          if (uVar7 == 0) {
            uVar7 = F_00d92c00(pvVar5,REFG(undefined * PTR32, 0x1354944));
            if (uVar7 == 0) goto LAB_00e0e9f6;
            F_0105a6d0(((undefined1 *)(gen_frame + 0x4)),uVar7,"typeName");
            in_ecx = ((undefined1 *)(gen_frame + 0x4));
          }
          else {
            F_0105a6d0(((undefined1 *)(gen_frame + 0xc)),uVar7,"typeName");
            in_ecx = ((undefined1 *)(gen_frame + 0xc));
          }
          puVar10 = (uint *)F_0105a770(in_ecx,0);
          uVar6 = *puVar10;
        }
LAB_00e0e9f6: ;
        bVar1 = *(byte *)((int)piVar9 + 0xd);
        (*(uint *)(gen_frame + 0x18)) = (uint)*(byte *)(piVar9 + 3);
        uVar7 = F_00da5ff0(piVar9);
        uVar6 = F_00e06180((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x10,(*(uint *)(gen_frame + 0x18)),(uint)bVar1,uVar6,uVar7);
        (*(uint *)(gen_frame + 0x18)) = uVar6;
        piVar8 = (*(int * PTR32 *)(gen_frame + 0x14));
      }
      iVar11 = *piVar9;
      if (iVar11 == 0) {
        (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)0x0;
      }
      else {
        piVar9 = ((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 8) + 0x50)));
        (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar9;
        piVar9 = (int *)F_00da4190(piVar9,iVar11,0);
        if (piVar9 == (int *)0x0) {
          piVar9 = (int *)F_00da1210(iVar11);
          F_00da3a20((*(int * PTR32 *)(gen_frame + 0x1c)),piVar9,piVar9);
        }
        (*(int * PTR32 *)(gen_frame + 0x1c)) = piVar9;
      }
      if (piVar8[0xb] == (piVar8[0xc] & 0x3fffffffU)) {
        F_00d95710(*(undefined4 *)(piVar8[3] + 0xc),piVar8 + 10,0x18);
      }
      puVar2 = (undefined4 *)(piVar8[10] + piVar8[0xb] * 0x18);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = (*(int * PTR32 *)(gen_frame + 0x1c));
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = (*(uint *)(gen_frame + 0x18));
        puVar2[5] = 0;
      }
      piVar8[0xb] = piVar8[0xb] + 1;
      iVar11 = (*(int *)(gen_frame + 0x20)) + 1;
      (*(int *)(gen_frame + 0x20)) = iVar11;
      uVar6 = F_00d92850(param_1);
    } while (iVar11 < (int)uVar6);
  }
  return (uint)piVar8;
}

/* ref: hkDataWorldDict::vf13 */
uint F_00e0eae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0eae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar3 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 8))((int *)*param_1);
  uVar3 = F_00e1a1a0(this + 0x10,uVar3);
  if (uVar3 != 0) {
    F_00e1ac10(this + 0x10,uVar3);
  }
  puVar2 = (undefined4 *)*param_1;
  *param_1 = 0;
  uVar3 = F_00e16d40(*(undefined * PTR32 *)(this + 8),puVar2);
  piVar1 = puVar2 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
  }
  return uVar3;
}

/* ref: hkDataWorldDict::vf15 */
uint F_00e0eb40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0eb40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  uVar5 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0x10))((int *)*param_1);
  iVar2 = *param_1;
  iVar3 = *param_2;
  if (iVar3 != 0) {
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
  }
  puVar4 = *(undefined4 * PTR32 *)(iVar2 + 0x18);
  if (puVar4 != (undefined4 *)0x0) {
    piVar1 = puVar4 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
    }
  }
  *(int *)(iVar2 + 0x18) = iVar3;
  uVar5 = F_00e16f50(*(undefined * PTR32 *)(this + 8),uVar5,*param_1);
  return uVar5;
}

/* ref: hkDataWorldDict::vf22 */
uint F_00e0eba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0eba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00e16fc0(*(undefined * PTR32 *)(this + 8),*param_1,*param_2);
  return uVar1;
}

/* ref: FUN_00e0ebc0 */
uint F_00e0ebc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0ebc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1;
  uVar1 = param_1 >> 8;
  param_1 = uVar1 << 8;
  *(uint *)this = uVar2;
  F_00da3de0((undefined *)((int)this + 4),param_1);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0x80000000;
  param_1 = uVar1 << 8;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0xffffffff;
  *(undefined4 *)((int)this + 0x4c) = 0xffffffff;
  F_00da3de0((undefined *)((int)this + 0x50),param_1);
  param_1 = uVar1 << 8;
  F_00da3de0((undefined *)((int)this + 0x60),param_1);
  *(undefined4 *)((int)this + 0x78) = 0xffffffff;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  return (uint)this;
}

/* ref: FUN_00e0ec50 */
uint F_00e0ec50(unsigned int gen_a0)
{
  GEN_ENTER(0xe0ec50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPVOID pvVar1;
  undefined * this_00;
  uint uVar2;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x114e37c));
  F_00e1ae10((undefined *)((int)this + 0x10));
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)pvVar1 + 0x2c);
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                              (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x7c)));
  if (this_00 != (undefined *)0x0) {
    uVar2 = F_00e0ebc0(this_00,*(undefined4 *)((int)this + 0xc));
    *(uint *)((int)this + 8) = uVar2;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return (uint)this;
}

/* ref: FUN_00e0ecc0 */
uint F_00e0ecc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0ecc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  LPVOID pvVar1;
  undefined * this_00;
  uint uVar2;
  
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x114e37c));
  F_00e1ae10((undefined *)((int)this + 0x10));
  *(undefined4 *)((int)this + 0xc) = param_1;
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                              (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x7c)));
  if (this_00 != (undefined *)0x0) {
    uVar2 = F_00e0ebc0(this_00,*(undefined4 *)((int)this + 0xc));
    *(uint *)((int)this + 8) = uVar2;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return (uint)this;
}

/* ref: FUN_00e0ed30 */
uint F_00e0ed30(unsigned int gen_a0)
{
  GEN_ENTER(0xe0ed30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  LPVOID pvVar1;
  uint uVar2;
  
  this_00 = *(undefined * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[24])REFP(0x114e37c));
  if (this_00 != (undefined *)0x0) {
    F_00e0e030(this_00);
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this_00,0x7c);
  }
  uVar2 = F_00e1a370((undefined *)((int)this + 0x10));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: hkDataWorldDict::vf23 */
uint F_00e0ed80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0ed80u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  
  uVar1 = (*(int * PTR32 *)&gen_args[1]);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))))((*(undefined * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[1]));
  if (uVar2 != 0) {
    return uVar2;
  }
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x24))))((*(int * PTR32 *)&gen_args[2]),uVar1)));
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(uint *)(gen_frame + 0x20)) = 0x80000000;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]));
  (*(uint *)(gen_frame + 0xc)) = uVar2;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xc))))((*(int * PTR32 *)&gen_args[1]));
  (*(uint *)(gen_frame + 0x10)) = uVar2;
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x10))))((*(int * PTR32 *)&gen_args[1]))));
  if (piVar3 == (int *)0x0) {
    (*(uint *)(gen_frame + 0x14)) = 0;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
    (*(uint *)(gen_frame + 0x14)) = uVar2;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))))((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)(gen_frame + 0xc)));
    if (uVar2 != 0) {
      F_00df1580(&(*(uint *)(gen_frame + 0xc)));
      return uVar2;
    }
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(uint *)(gen_frame + 0xc)));
  (*(uint *)(gen_frame + 0x40)) = uVar2;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x18))))((*(int * PTR32 *)&gen_args[1]));
  (*(uint *)(gen_frame + 0x24)) = 0;
  (*(uint *)(gen_frame + 0x28)) = 0;
  (*(int *)(gen_frame + 0x2c)) = 0x80000000;
  if (uVar2 == 0) {
    uVar4 = 0;
  }
  else {
    (*(int *)(gen_frame + 0x48)) = uVar2 << 4;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc))))(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x48)));
    iVar5 = (int)((*(int *)(gen_frame + 0x48)) + ((*(int *)(gen_frame + 0x48)) >> 0x1f & 0xfU)) >> 4;
    if (iVar5 != 0) goto LAB_00e0ee4b;
  }
  iVar5 = ((int)0x80000000);
LAB_00e0ee4b: ;
  (*(uint *)(gen_frame + 0x24)) = uVar4;
  (*(uint *)(gen_frame + 0x28)) = uVar2;
  (*(int *)(gen_frame + 0x2c)) = iVar5;
  if (0 < (int)uVar2) {
    puVar6 = (undefined4 *)(uVar4 + 8);
    do {
      if (puVar6 != (undefined4 *)0x8) {
        puVar6[-2] = 0;
        puVar6[-1] = 0;
        *puVar6 = 0;
        puVar6[1] = 0;
      }
      puVar6 = puVar6 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  F_00e1ce00(&(*(int * PTR32 *)&gen_args[1]),&(*(uint *)(gen_frame + 0x24)));
  if ((int)((*(uint *)(gen_frame + 0x20)) & 0x3fffffff) < (int)(*(uint *)(gen_frame + 0x28))) {
    uVar2 = ((*(uint *)(gen_frame + 0x20)) & 0x3fffffff) * 2;
    uVar4 = (*(uint *)(gen_frame + 0x28));
    if ((int)(*(uint *)(gen_frame + 0x28)) < (int)uVar2) {
      uVar4 = uVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined4 *)(gen_frame + 0x18)),uVar4,0xc);
  }
  (*(uint *)(gen_frame + 0x30)) = (*(uint *)(gen_frame + 0x40));
  (*(int *)(gen_frame + 0x44)) = 0;
  if (0 < (int)(*(uint *)(gen_frame + 0x28))) {
    (*(int *)(gen_frame + 0x48)) = 0;
    do {
      puVar6 = (undefined4 *)((*(int *)(gen_frame + 0x48)) + (*(uint *)(gen_frame + 0x24)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar6;
      uVar2 = F_00e1aff0((*(undefined * PTR32 *)&gen_args[0]) + 0x10,puVar6[2]);
      piVar3 = (int *)F_00e19d40(uVar2);
      (*(int * PTR32 *)(gen_frame + 0x38)) = piVar3;
      if (*piVar3 == 6) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = ((undefined4 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x24)));
        uVar4 = F_00e19c80(uVar2);
        uVar4 = (*(code *)*(*(undefined4 * PTR32 *)(gen_frame + 0x3c)))((*(int * PTR32 *)&gen_args[2]),uVar4);
        if (uVar4 != 0) {
          iVar5 = *(int *)(*(undefined * PTR32 *)&gen_args[0]);
          piVar3 = (*(int * PTR32 *)&gen_args[2]);
          uVar4 = F_00e19c80((*(int * PTR32 *)(gen_frame + 0x38)));
          ((code *)*(gen_code32 *)(iVar5 + 0x5c))((*(undefined * PTR32 *)&gen_args[0]),uVar4,piVar3);
          puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x34));
        }
      }
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))))((*(undefined * PTR32 *)&gen_args[0]),&(*(uint *)(gen_frame + 0x30)),*puVar6,uVar2,0);
      (*(int *)(gen_frame + 0x48)) = (*(int *)(gen_frame + 0x48)) + 0x10;
      iVar5 = (*(int *)(gen_frame + 0x44)) + 1;
      (*(int *)(gen_frame + 0x44)) = iVar5;
    } while (iVar5 < (int)(*(uint *)(gen_frame + 0x28)));
  }
  (*(uint *)(gen_frame + 0x28)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x2c))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(uint *)(gen_frame + 0x24)),(*(int *)(gen_frame + 0x2c)) << 4);
  }
  (*(uint *)(gen_frame + 0x24)) = 0;
  (*(int *)(gen_frame + 0x2c)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  uVar2 = (*(uint *)(gen_frame + 0x40));
  if (-1 < (int)(*(uint *)(gen_frame + 0x20))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x18)),((*(uint *)(gen_frame + 0x20)) & 0x3fffffff) * 0xc);
    uVar2 = (*(uint *)(gen_frame + 0x40));
  }
  return uVar2;
}

/* ref: FUN_00e0f010 */
uint F_00e0f010(unsigned int gen_a0)
{
  GEN_ENTER(0xe0f010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this,local_8);
  return (uint)this;
}

/* ref: FUN_00e0f030 */
uint F_00e0f030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da3a20(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e0f040 */
uint F_00e0f040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da4190(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e0f050 */
uint F_00e0f050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da3f00(this,param_1);
  return uVar1;
}

/* ref: FUN_00e0f070 */
uint F_00e0f070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f070u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da39b0(in_ecx,param_2);
  return uVar1;
}

/* ref: FUN_00e0f080 */
uint F_00e0f080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da39f0(this,param_1);
  return uVar1;
}

/* ref: FUN_00e0f090 */
uint F_00e0f090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00da3e40(in_ecx,param_2,param_3);
  return param_2;
}

/* ref: FUN_00e0f0b0 */
uint F_00e0f0b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe0f0b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this,local_8);
  return (uint)this;
}

/* ref: FUN_00e0f0d0 */
uint F_00e0f0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f0d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da3a20(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e0f0e0 */
uint F_00e0f0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da4190(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e0f0f0 */
uint F_00e0f0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da3f00(this,param_1);
  return uVar1;
}

/* ref: FUN_00e0f110 */
uint F_00e0f110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f110u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da39b0(in_ecx,param_2);
  return uVar1;
}

/* ref: FUN_00e0f120 */
uint F_00e0f120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da39f0(this,param_1);
  return uVar1;
}

/* ref: FUN_00e0f130 */
uint F_00e0f130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00da3e40(in_ecx,param_2,param_3);
  return param_2;
}

/* ref: FUN_00e0f150 */
uint F_00e0f150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd970(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e0f1b0 */
uint F_00e0f1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f1b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00e0f1d0 */
uint F_00e0f1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f1d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00e0f1f0 */
uint F_00e0f1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f1f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00e0f210 */
uint F_00e0f210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00e0f250 */
unsigned int F_00e0f250(unsigned int gen_a0)
{
  GEN_ENTER(0xe0f250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00e0f270 */
unsigned int F_00e0f270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f270u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e0f2d0 */
uint F_00e0f2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f2d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e0f320 */
uint F_00e0f320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f320u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e0f360 */
uint F_00e0f360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f360u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e0f390 */
uint F_00e0f390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f390u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e0f3b0 */
unsigned int F_00e0f3b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe0f3b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00e0f3d0 */
unsigned int F_00e0f3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  puVar2 = *(undefined4 * PTR32 *)this;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  *(int *)this = param_1;
  return 0;
}

/* ref: FUN_00e0f430 */
uint F_00e0f430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f430u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e0f480 */
uint F_00e0f480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f480u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x18;
}

/* ref: FUN_00e0f4a0 */
uint F_00e0f4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f4a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x18;
}

/* ref: FUN_00e0f4e0 */
uint F_00e0f4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f4e0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e0f500 */
unsigned int F_00e0f500(unsigned int gen_a0)
{
  GEN_ENTER(0xe0f500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00e0f560 */
uint F_00e0f560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f560u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00e0f5e0 */
uint F_00e0f5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f5e0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e0f630 */
uint F_00e0f630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f630u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e0f680 */
uint F_00e0f680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f680u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00e0f6a0 */
uint F_00e0f6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f6a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e0f6c0 */
uint F_00e0f6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dbd930(this,param_1);
  return uVar1;
}

/* ref: FUN_00e0f6d0 */
uint F_00e0f6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f6d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd970(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00e0f6e0 */
uint F_00e0f6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dbd9f0(this,param_1);
  return uVar1;
}

/* ref: FUN_00e0f6f0 */
uint F_00e0f6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f6f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + 4 + param_2 * 8);
}

/* ref: FUN_00e0f730 */
uint F_00e0f730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e0f760 */
uint F_00e0f760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f760u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e0f770 */
uint F_00e0f770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f770u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00e0f790 */
uint F_00e0f790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00e0f7e0 */
uint F_00e0f7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f7e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e0f820 */
uint F_00e0f820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0x18);
  return uVar1;
}

/* ref: FUN_00e0f860 */
uint F_00e0f860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00e0f890 */
unsigned int F_00e0f890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0f890u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 2;
  puVar1 = param_1;
  do {
    *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
    puVar1[1] = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + 4 + (int)puVar1)));
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_00e0f900 */
unsigned int F_00e0f900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f900u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e0f950 */
unsigned int F_00e0f950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f950u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e0f9c0 */
uint F_00e0f9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f9c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00e0f9f0 */
uint F_00e0f9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0f9f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00e0fa10 */
uint F_00e0fa10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0fa10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00e0fa20 */
uint F_00e0fa20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0fa20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e0fa40 */
uint F_00e0fa40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0fa40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00e0fa90 */
uint F_00e0fa90(unsigned int gen_a0)
{
  GEN_ENTER(0xe0fa90u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00e0fac0 */
uint F_00e0fac0(unsigned int gen_a0)
{
  GEN_ENTER(0xe0fac0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00e0faf0 */
uint F_00e0faf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0faf0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e0fb30 */
uint F_00e0fb30(unsigned int gen_a0)
{
  GEN_ENTER(0xe0fb30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  F_00d919e0(&REFG(undefined * PTR32, 0x1354948));
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x1354948);
  return (uint)this;
}

/* ref: FUN_00e0fb60 */
uint F_00e0fb60(unsigned int gen_a0)
{
  GEN_ENTER(0xe0fb60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d919e0(&REFG(undefined * PTR32, 0x1354948));
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    uVar1 = F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x1354948);
  return uVar1;
}

/* ref: FUN_00e0fb80 */
uint F_00e0fb80(unsigned int gen_a0)
{
  GEN_ENTER(0xe0fb80u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00e0fba0 */
unsigned int F_00e0fba0(unsigned int gen_a0)
{
  GEN_ENTER(0xe0fba0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x7c);
  }
  return 0;
}

/* ref: FUN_00e0fbd0 */
uint F_00e0fbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0fbd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = F_00da4190((undefined *)((int)this + 4),param_1,0);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00e0fbf0 */
unsigned int F_00e0fbf0(unsigned int gen_a0)
{
  GEN_ENTER(0xe0fbf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x10);
  }
  return 0;
}

/* ref: FUN_00e0fc20 */
uint F_00e0fc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0fc20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = param_2[1] - 1;
  if (-1 < (int)uVar1) {
    piVar2 = (int *)(*param_2 + uVar1 * 0x18);
    do {
      if (*piVar2 == param_1) {
        return uVar1;
      }
      piVar2 = piVar2 + -6;
      uVar1 = uVar1 - 1;
    } while (-1 < (int)uVar1);
  }
  return 0xffffffff;
}

/* ref: FUN_00e0fc50 */
uint F_00e0fc50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0fc50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)((int)this + 0x2c) + -1;
  if (-1 < iVar1) {
    piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x28) + iVar1 * 0x18)));
    do {
      if (*piVar2 == param_1) goto LAB_00e0fc73;
      piVar2 = piVar2 + -6;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  iVar1 = -1;
LAB_00e0fc73: ;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28) + iVar1 * 0x18))) = param_2;
  return iVar1 * 3;
}

/* ref: FUN_00e0fc90 */
uint F_00e0fc90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0fc90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)((int)this + 0x2c) + -1;
  if (-1 < iVar1) {
    piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x28) + iVar1 * 0x18)));
    do {
      if (*piVar2 == param_1) goto LAB_00e0fcb3;
      piVar2 = piVar2 + -6;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  iVar1 = -1;
LAB_00e0fcb3: ;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28) + 0x14 + iVar1 * 0x18))) = param_2;
  return iVar1 * 3;
}

/* ref: FUN_00e0fcd0 */
unsigned int F_00e0fcd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0fcd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  *(int *)((int)this + 0x18) = param_1;
  return 0;
}

/* ref: FUN_00e0fd00 */
unsigned int F_00e0fd00(unsigned int gen_a0)
{
  GEN_ENTER(0xe0fd00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00e0fd40 */
uint F_00e0fd40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0fd40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[30])REFP(0x114d814));
  if (param_1 != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  *(int *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  *(uint *)((int)this + 0x1c) = (uint)(byte)param_2;
  return (uint)this;
}

/* ref: FUN_00e0fd80 */
uint F_00e0fd80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0fd80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *param_2 = *(undefined4 *)this;
  param_2[1] = param_1;
  param_2[2] = *(undefined4 *)((int)this + 0x10);
  param_2[3] = *(undefined4 *)((int)this + 0x14);
  return (uint)param_2;
}

/* ref: FUN_00e0fda0 */
uint F_00e0fda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe0fda0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: hkDataObjectDict::vf27 */
uint F_00e0fdc0(unsigned int gen_a0)
{
  GEN_ENTER(0xe0fdc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: hkDataObjectDict::vf1 */
uint F_00e0fdd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0fdd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = in_ecx;
  param_2[1] = 0;
  return (uint)param_2;
}

/* ref: hkDataObjectDict::vf5 */
uint F_00e0fdf0(void)
{
  GEN_ENTER(0xe0fdf0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkDataObjectDict::vf7 */
uint F_00e0fe00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe0fe00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return param_1 + 1;
}

