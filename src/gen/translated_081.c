#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_0089fa30 */
uint F_0089fa30(unsigned int gen_a0)
{
  GEN_ENTER(0x89fa30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  int iVar5;
  uint * this_01;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (*(int *)((int)this + 0x30) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x30),0);
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  uVar1 = *(undefined4 *)((int)this + 8);
  *(undefined1 *)((int)this + 0x34) = 0;
  uVar3 = F_0043bd00(*(undefined * PTR32 *)((int)this + 0x10),0xb3b,0,0);
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_005593a0(this_00,1);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
  (*(uint *)(gen_frame + 0xc)) = uVar3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
  (*(undefined4 *)(gen_frame + 0x1c)) = 1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  uVar3 = F_008668b0(this_00,8,4,&(*(undefined4 *)(gen_frame + 0x8)),this,0xb,uVar1,4);
  this_01 = &(*(uint *)(gen_frame + 0x28));
  iVar5 = 3;
  do {
    this_01 = this_01 + -2;
    uVar4 = F_005a2670(this_01);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  *(uint *)((int)this + 0x30) = uVar3;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar4;
}

/* ref: FUN_0089fb40 */
byte F_0089fb40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x89fb40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  if ((*param_1 & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 4);
  }
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    if (*(char *)((int)this + 0x174) == '\0') {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
      if (*(undefined * PTR32 *)(uVar1 + 0x11c) != (undefined *)0x0) {
        F_00880490(*(undefined * PTR32 *)(uVar1 + 0x11c),(int)this + 0x178,*(undefined4 *)((int)this + 8));
        return 0;
      }
    }
    break;
  case 1: ;
    if ((param_1[8] & 0xf) != 0) {
      F_0087f810(this,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)((int)this + 8),1);
      return 0;
    }
    F_0087f810(this,0,*(undefined4 *)((int)this + 8),1);
    return 0;
  case 2: ;
    if ((param_1[8] & 0xf) == 0) {
      F_0087e890(this,0);
      return 0;
    }
    F_0087e890(this,*(undefined4 *)(param_1 + 0xc));
    break;
  case 0xfffffffe: ;
  case 0xffffffff: ;
    *(undefined4 *)((int)this + 0x1c) = 0;
    return 1;
  }
  return 0;
}

/* ref: FUN_0089fc30 */
byte F_0089fc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x89fc30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((*param_1 & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 4);
  }
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
    if ((param_1[8] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0xc);
    }
    if (*(char *)((int)this + 0x21) != (char)uVar3) {
      F_0077ca30(this,uVar3);
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x27);
      if ((uVar2 != 0) && (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x1900))) != 0)) {
        *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x1900))) = 0;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
      F_007e1250(this);
      return 0;
    }
    break;
  case 1: ;
    if ((param_1[8] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0xc);
    }
    if (*(char *)((int)this + 0x22) != (char)uVar3) {
      F_0077ca60(this,uVar3);
      F_007e1250(this);
      return 0;
    }
    break;
  case 2: ;
    if (((param_1[0x10] & 0xf) == 0) || (*(int *)(param_1 + 0x14) == 0)) {
      *(undefined1 *)((int)this + 0x23) = 3;
      if (*(int *)((int)this + 0x14) != 0) {
        F_00436dd0(*(int *)((int)this + 0x14),3);
      }
    }
    else {
      *(undefined1 *)((int)this + 0x23) = 1;
      if (*(int *)((int)this + 0x14) != 0) {
        F_00436dd0(*(int *)((int)this + 0x14),1);
        F_007e1250(this);
        return 0;
      }
    }
    F_007e1250(this);
    return 0;
  case 3: ;
    uVar3 = *(undefined4 *)((int)this + 8);
    uVar4 = 1;
    uVar2 = F_0043bd00(*(undefined * PTR32 *)((int)this + 0x10),0xb25,0,0);
    F_0087e200(this,uVar2,uVar4,uVar3);
    return 0;
  case 4: ;
    if ((param_1[8] & 0xf) == 0) {
      F_0087e890(this,0);
      return 0;
    }
    F_0087e890(this,*(undefined4 *)(param_1 + 0xc));
    break;
  case 0xfffffffe: ;
  case 0xffffffff: ;
    *(undefined4 *)((int)this + 0x1c) = 0;
    return 1;
  }
  return 0;
}

/* ref: FUN_0089fdd0 */
byte F_0089fdd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x89fdd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((*param_1 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    F_0087ecb0(this);
    return 0;
  case 1: ;
    F_0087f460(this,0);
    return 0;
  case 2: ;
    if ((param_1[8] & 0xf) != 0) {
      F_0077ce20(this,*(undefined4 *)(param_1 + 0xc));
      return 0;
    }
    F_0077ce20(this,0);
    return 0;
  case 3: ;
    if ((param_1[8] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0xc);
    }
    F_0077ce20(this,uVar1);
    if ((param_1[8] & 0xf) != 0) {
      F_0087ebe0(this,*(undefined4 *)(param_1 + 0xc));
      return 0;
    }
    F_0087ebe0(this,0);
    return 0;
  case 4: ;
    break;
  case 5: ;
    F_0077c820(this,(uint)(byte)(*(char *)((int)this + 0xc6) + 1));
    return 0;
  case 6: ;
    F_0077c820(this,(uint)(byte)(*(char *)((int)this + 0xc6) - 1));
  default: ;
    return 0;
  case 0xfffffffe: ;
  case 0xffffffff: ;
    *(undefined4 *)((int)this + 0x1c) = 0;
    return 1;
  }
  if ((param_1[0x10] & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
  }
  if ((param_1[0x18] & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
  }
  F_0087e4d0(this,uVar1,uVar2);
  if ((param_1[8] & 0xf) != 0) {
    *(char *)((int)this + 0xc5) = (char)*(undefined4 *)(param_1 + 0xc);
    F_0077d140(this);
    return 0;
  }
  *(undefined1 *)((int)this + 0xc5) = 0;
  F_0077d140(this);
  return 0;
}

/* ref: FUN_0089ff60 */
byte F_0089ff60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x89ff60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  
  if ((*param_1 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    break;
  case 1: ;
    if ((param_1[8] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0xc);
    }
    F_0087f810(this,uVar1,*(undefined4 *)((int)this + 8),0);
  default: ;
    return 0;
  case 0xfffffffe: ;
  case 0xffffffff: ;
    *(undefined4 *)((int)this + 0x1c) = 0;
    return 1;
  }
  if ((param_1[8] & 0xf) != 0) {
    F_0087f810(this,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)((int)this + 8),1);
    return 0;
  }
  F_0087f810(this,0,*(undefined4 *)((int)this + 8),1);
  return 0;
}

/* ref: FUN_008a0010 */
uint F_008a0010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a0010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined * this_00;
  undefined * extraout_ECX = 0;
  undefined * this_01;
  undefined4 uVar3;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  if (((char)param_2 == '\0') &&
     (uVar2 = CONCAT31((int3)(uVar2 >> 8),*(char *)((int)this + 0x41)),
     *(char *)((int)this + 0x41) == (char)param_1)) {
    bVar1 = F_0077ccf0(this,0x98);
    if (bVar1 == 0) {
      bVar1 = F_0077ccf0(this_00,0xf);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 == 0) goto LAB_008a0055;
      uVar3 = 5;
      this_01 = extraout_ECX;
    }
    else {
      uVar3 = 0;
      this_01 = this_00;
    }
    uVar2 = F_0087f650(this_01,uVar3);
  }
LAB_008a0055: ;
  if (*(int *)((int)this + 0x14) != 0) {
    bVar1 = F_00441d60();
    uVar2 = CONCAT31(extraout_var_00,bVar1);
  }
  return uVar2;
}

/* ref: FUN_008a0070 */
uint F_008a0070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a0070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar2 != '\0') {
    if ((char)param_1 == '\0') {
      if ((char)param_2 != '\0') {
        uVar2 = F_0087f460(this,1);
      }
    }
    else if (*(int *)((int)this + 0x14) != 0) {
      bVar1 = F_00441cd0();
      return CONCAT31(extraout_var,bVar1);
    }
  }
  return uVar2;
}

/* ref: FUN_008a00b0 */
uint F_008a00b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a00b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined * this_00;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar2 != '\0') {
    if ((char)param_1 == '\0') {
      if ((char)param_2 != '\0') {
        uVar2 = F_0087f460(this,0);
      }
    }
    else {
      if (*(int *)((int)this + 0x14) != 0) {
        F_00441cd0();
      }
      if ((char)param_2 != '\0') {
        uVar2 = F_0077ce20(this,(uint)*(byte *)((int)this + 0x6d));
        return uVar2;
      }
      bVar1 = F_0077ccf0(this,0x9b);
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        uVar2 = F_0087f650(this_00,3);
        return uVar2;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_008a0120 */
uint F_008a0120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a0120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined4 uVar8;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  uVar6 = 0;
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,0x2c);
  uVar2 = 0;
  if (uVar4 != 0) {
    iVar5 = *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4 + (param_1 & 0xff) * 0xc)));
    if (0 < iVar5) {
      iVar5 = iVar5 + -1;
    }
    uVar2 = 0;
    piVar3 = ((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4)));
    do {
      if (*piVar3 == iVar5) {
        uVar6 = uVar2 & 0xff;
        break;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 3;
    } while ((int)uVar2 < 0x10);
  }
  if ((char)param_2 == '\0') {
    if (*(char *)((int)this + 0x41) == (char)param_1) {
      if (*(int *)((int)this + 0x58) == 0) {
        bVar7 = *(int *)((int)this + 100) != 0;
        uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar7);
        if (!bVar7) goto LAB_008a01be;
        uVar8 = 6;
      }
      else {
        uVar8 = 1;
      }
      uVar2 = F_0087f650(this,uVar8);
    }
LAB_008a01be: ;
    bVar7 = *(int *)((int)this + 0x60) != 0;
    uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar7);
    if (bVar7) {
      uVar2 = F_0087f650(this,4);
    }
    if ((uVar4 == 0) || (uVar2 = param_1 & 0xff, uVar2 != *((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 200)))))
    goto LAB_008a0216;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  }
  else {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,0x2c);
  if ((uVar2 != 0) && (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 200))) != uVar6)) {
    *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 200))) = uVar6;
    *(undefined1 *)(uVar2 + 0x1d) = 1;
  }
LAB_008a0216: ;
  if (*(int *)((int)this + 0x14) != 0) {
    bVar1 = F_00441cd0();
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  if (((*(char *)((int)this + 0x20) == '\x01') && (*(char *)((int)this + 0x21) == '\0')) &&
     (*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0)) {
    uVar2 = F_00437860(*(undefined * PTR32 *)((int)this + 0x18),param_1);
  }
  return uVar2;
}

/* ref: FUN_008a0250 */
uint F_008a0250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a0250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  bool bVar3;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar2 != '\0') {
    if (((char)param_1 == '\0') &&
       (bVar3 = *(int *)((int)this + 0x60) != 0, uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar3), bVar3))
    {
      uVar2 = F_0087f650(this,2);
    }
    if (*(int *)((int)this + 0x14) != 0) {
      bVar1 = F_00441d60();
      uVar2 = CONCAT31(extraout_var,bVar1);
    }
  }
  return uVar2;
}

/* ref: FUN_008a0290 */
byte F_008a0290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a0290u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * this_00;
  byte bVar1;
  uint uVar2;
  byte * pbVar3;
  byte * pbVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  
  if ((*(*(byte * PTR32 *)&gen_args[1]) & 0xf) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 4)));
  }
  switch((unsigned int)(uintptr_t)(uVar6)) {
  case 0: ;
    if (((*(byte * PTR32 *)&gen_args[1])[8] & 0xf) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 0xc)));
    }
    this_00 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70)));
    F_0042e430(this_00,uVar6);
    if (*(char *)*this_00 == '\0') {
      F_0077cdd0((*(undefined * PTR32 *)&gen_args[0]),(uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x41))));
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))) = 0;
      return 1;
    }
    bVar1 = F_0077d6b0(this_00);
    if (bVar1 == 0) {
      F_0087f650((*(undefined * PTR32 *)&gen_args[0]),7);
      return 0;
    }
    (*(byte * PTR32 *)&gen_args[1]) = ((byte *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(byte * PTR32 *)&gen_args[1]), 1, 3),*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x41))))));
    uVar2 = F_00436a90(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),(*(byte * PTR32 *)&gen_args[1]));
    if (uVar2 != 0) {
      pbVar3 = (byte *)F_00441270(uVar2);
      pbVar4 = (byte *)F_0042a990(this_00);
      do {
        bVar1 = *pbVar4;
        bVar7 = bVar1 < *pbVar3;
        if (bVar1 != *pbVar3) {
LAB_008a0367: ;
          iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_008a036c;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar7 = bVar1 < pbVar3[1];
        if (bVar1 != pbVar3[1]) goto LAB_008a0367;
        pbVar4 = pbVar4 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_008a036c: ;
      if (iVar5 != 0) {
        uVar2 = F_0042a990(this_00);
        F_004414f0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),(*(byte * PTR32 *)&gen_args[1]),uVar2);
      }
    }
switchD_008a02b7_caseD_fffffffe: ;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))) = 0;
    return 1;
  case 0xfffffffe: ;
  case 0xffffffff: ;
  case 1: ;
    goto switchD_008a02b7_caseD_fffffffe;
  default: ;
    return 1;
  }
}

/* ref: FUN_008a03b0 */
byte F_008a03b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a03b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((*(*(byte * PTR32 *)&gen_args[1]) & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 4)));
  }
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) != 0) {
      if (((*(byte * PTR32 *)&gen_args[1])[8] & 0xf) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[1]) + 0xc)));
      }
      F_0042e430(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))),uVar4);
      bVar1 = F_0077d6b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))));
      if (bVar1 == 0) {
        F_0087f650((*(undefined * PTR32 *)&gen_args[0]),7);
        return 0;
      }
      bVar1 = 0;
      (*(byte * PTR32 *)&gen_args[1]) = ((byte *)GEN_TOP(((uint)(*(byte * PTR32 *)&gen_args[1]) & 0xffffff00)));
      do {
        bVar2 = F_004368a0((*(byte * PTR32 *)&gen_args[1]));
        if (((bVar2 != 0) &&
            (uVar3 = F_00436a90(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),(*(byte * PTR32 *)&gen_args[1])), uVar3 != 0)) &&
           (*(char *)(uVar3 + 0xb) == '\0')) {
          if (bVar1 != 0x11) {
            uVar5 = 0;
            uVar4 = 0;
            uVar3 = F_0042a990((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70);
            bVar2 = F_00441680(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),(*(byte * PTR32 *)&gen_args[1]),uVar3,uVar4,uVar5);
            if (bVar2 != 0) {
              *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6d))) = bVar1;
              *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))) = 0;
              return 1;
            }
          }
          break;
        }
        bVar1 = bVar1 + 1;
        (*(byte * PTR32 *)&gen_args[1]) = ((byte *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(byte * PTR32 *)&gen_args[1]), 1, 3),bVar1)));
      } while (bVar1 < 0x11);
      uVar4 = 0xbbc;
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))));
      F_0046a630(this_00,uVar4);
    }
switchD_008a03d7_caseD_fffffffe: ;
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))) = 0;
    return 1;
  case 0xfffffffe: ;
  case 0xffffffff: ;
  case 1: ;
    goto switchD_008a03d7_caseD_fffffffe;
  default: ;
    return 1;
  }
}

/* ref: FUN_008a04d0 */
byte F_008a04d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a04d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  
  if ((*param_1 & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 < 0) {
      return 0;
    }
  }
  if (iVar1 == 0) {
    F_0087eed0(this);
  }
  else {
    if (iVar1 == 1) {
      F_0087f460(this,1);
      return 1;
    }
    if (iVar1 == 2) {
      F_0087eb40(this);
      return 1;
    }
  }
  return 1;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyProfile::vf2 */
uint F_008a0960(unsigned int gen_a0)
{
  GEN_ENTER(0x8a0960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x10) != -0x20000000) {
    uVar1 = F_0087ffb0(this,*(int *)(this + 0x10));
    return uVar1;
  }
  uVar1 = F_00880040(this,*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c));
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyInvite::vf1 */
uint F_008a0980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8a0980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if ((param_3 == 0) || ((uVar3 = *param_2 & 0xf, uVar3 != 0 && ((int)param_2[1] < 0)))) {
    iVar1 = *(int *)(this + 0x68);
    if (iVar1 != 0) {
      *(undefined4 *)(this + 0x68) = 0;
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,iVar1,0);
    }
    *(undefined4 *)(this + 8) = 0;
  }
  else {
    switch((unsigned int)(uintptr_t)(param_4)) {
    case 0: ;
      if (this[0x10] == (undefined1)0x0) {
        if ((param_2[4] & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = param_2[5];
        }
        F_008802c0(this,uVar3,*(undefined4 *)(this + 8));
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 2;
        return (uint)param_1;
      }
      if ((param_2[4] & 0xf) != 0) {
        F_008800e0(this,param_2[5],*(undefined4 *)(this + 8),0);
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 2;
        return (uint)param_1;
      }
      F_008800e0(this,0,*(undefined4 *)(this + 8),0);
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    case 1: ;
      if ((uVar3 == 0) || (param_2[1] == 0)) {
        uVar3 = F_0042a990(this + 0x14);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x1c))))(*(int * PTR32 *)(this + 0xc),uVar3,1);
      }
      *(undefined4 *)(this + 0x68) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return (uint)param_1;
    case 2: ;
      *(undefined4 *)(this + 0x68) = 0;
      if (((*param_2 & 0xf) != 0) && (param_2[1] != 0)) {
        uVar4 = 0;
        uVar3 = F_0042a990(this + 0x14);
        F_008802c0(this,uVar3,uVar4);
        *(undefined1 *)(param_1 + 1) = 1;
        *param_1 = 2;
        return (uint)param_1;
      }
      uVar3 = F_0042a990(this + 0x14);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x1c))))(*(int * PTR32 *)(this + 0xc),uVar3,1);
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return (uint)param_1;
    case 3: ;
      if ((uVar3 == 0) || (param_2[1] == 0)) {
        uVar3 = F_0042a990(this + 0x14);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0xc) + 0x1c))))(*(int * PTR32 *)(this + 0xc),uVar3,0);
      }
      *(undefined4 *)(this + 0x68) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return (uint)param_1;
    }
  }
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyInputString::vf2 */
uint F_008a0b40(unsigned int gen_a0)
{
  GEN_ENTER(0x8a0b40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00880490(this,this + 0x10,*(undefined4 *)(this + 0xc));
  return uVar1;
}

/* ref: FUN_008a0b50 */
byte F_008a0b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a0b50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined * this_00;
  undefined4 uVar4;
  
  if (((*param_1 & 0xf) == 0) || (iVar1 = *(int *)(param_1 + 4), iVar1 < 1)) {
    if (*(int *)((int)this + 0x1490) != 9999) {
      F_00a3d7c0(&REFG(undefined, 0x14a4230),*(int *)((int)this + 0x1490),(uint)*(ushort *)((int)this + 0x1494))
      ;
    }
    *(undefined4 *)((int)this + 0x1490) = 9999;
    *(undefined2 *)((int)this + 0x1494) = 0;
    *(undefined4 *)((int)this + 0x1498) = 0;
    *(undefined4 *)((int)this + 0x149c) = 0;
    *(undefined4 *)((int)this + 0x14a0) = 9999;
    *(undefined2 *)((int)this + 0x14a4) = 0;
    *(undefined4 *)((int)this + 0x14a8) = 0;
    *(undefined4 *)((int)this + 0x14ac) = 0;
  }
  else if (*(int *)((int)this + 0x1490) != 9999) {
    uVar2 = F_00a3a150(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x1490),
                         (int)*(short *)((int)this + 0x1494));
    if (uVar2 != 0) {
      uVar2 = F_00a3a150(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x1490),
                           (int)*(short *)((int)this + 0x1494));
      if ((*(char *)(uVar2 + 6) != '\0') || (*(int *)(uVar2 + 8) != 0)) {
        uVar2 = F_00a3a150(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x14a0),
                             (int)*(short *)((int)this + 0x14a4));
        uVar3 = F_00a3a150(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x1490),
                             (int)*(short *)((int)this + 0x1494));
        F_00880510(this,uVar3,uVar2,iVar1,*(undefined4 *)((int)this + 0x14c0));
        *(undefined4 *)((int)this + 0x1488) = 0;
        return 1;
      }
    }
    F_00a3d7c0(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x1490),
                 (uint)*(ushort *)((int)this + 0x1494));
    *(undefined4 *)((int)this + 0x1490) = 9999;
    *(undefined4 *)((int)this + 0x1498) = 0;
    *(undefined4 *)((int)this + 0x149c) = 0;
    *(undefined2 *)((int)this + 0x1494) = 0;
    *(undefined2 *)((int)this + 0x14a4) = 0;
    *(undefined4 *)((int)this + 0x14a0) = 9999;
    *(undefined4 *)((int)this + 0x14a8) = 0;
    *(undefined4 *)((int)this + 0x14ac) = 0;
    uVar4 = 0x745;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
    F_0046a630(this_00,uVar4);
    *(undefined4 *)((int)this + 0x1488) = 0;
    return 1;
  }
  *(undefined4 *)((int)this + 0x1488) = 0;
  return 1;
}

/* ref: FUN_008a0d00 */
byte F_008a0d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a0d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined4 uVar2;
  
  if ((*param_1 & 0xf) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 4);
  }
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    iVar1 = *(int *)((int)this + 0x1478);
    if (iVar1 != 0) {
      if (*(char *)((int)this + 0x147c) == '\0') {
        F_00a3c360(&REFG(undefined, 0x14a4230),iVar1);
        F_0043f8b0(0x14);
      }
      else {
        F_00a3c570(&REFG(undefined, 0x14a4230),iVar1);
        F_0043f8b0(0x14);
      }
    }
    break;
  case 2: ;
    *(bool *)((int)this + 0x147c) = *(char *)((int)this + 0x147c) == '\0';
    *(undefined4 *)((int)this + 0x1478) = 0;
    F_008808f0(this);
    return 0;
  case 3: ;
    if ((param_1[8] & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0xc);
    }
    *(undefined4 *)((int)this + 0x1478) = uVar2;
    F_008808f0(this);
  default: ;
    return 0;
  case 0xfffffffe: ;
  case 0xffffffff: ;
  case 1: ;
  }
  *(undefined4 *)((int)this + 0x148c) = 0;
  F_0077f300(this);
  return 1;
}

/* ref: FUN_008a0df0 */
uint F_008a0df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8a0df0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (param_2 != (uint *)0x0) {
    if (*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) {
      if (*param_2 == 0x55f1) {
        uVar2 = 0x20;
      }
      else {
        bVar1 = (char)*param_2 - 0x20;
        if (4 < bVar1) goto LAB_008a0f86;
        uVar2 = (uint)(byte)(&REFG(undefined1, 0x10c0596))[(uint)bVar1 * 3];
      }
      bVar1 = F_00441290(*(undefined * PTR32 *)((int)this + 0x18),uVar2);
      if (bVar1 != 0) {
        uVar2 = *param_2;
        uVar4 = *param_1;
        if (uVar4 == uVar2) {
          if (uVar2 != 0x55f1) {
            uVar2 = F_00a47f70(&REFG(undefined, 0x14a4230),uVar4,(uint)(ushort)param_1[1],uVar2,
                                 (uint)(ushort)param_2[1],1);
            return uVar2;
          }
        }
        else {
          uVar2 = F_00a3eaa0(&REFG(undefined, 0x14a4230),uVar4,(uint)(ushort)param_1[1]);
          if (uVar2 == 0) {
            if ((*(char *)((int)param_2 + 6) == '\0') && (param_2[2] == 0)) {
LAB_008a0f2e: ;
              uVar2 = F_00a3a8a0(param_1);
              if (1 < uVar2) {
                iVar6 = 0;
                uVar2 = F_0071d3a0(param_2);
                if ((char)uVar2 == '\0') {
                  uVar2 = F_00a3a8a0(param_2);
                  iVar6 = *(int *)(param_4 + 0x28) - uVar2;
                }
                uVar2 = F_008806d0(this,param_1,param_2,iVar6,*(undefined4 *)((int)this + 8));
                return uVar2;
              }
              uVar2 = F_00880510(this,param_1,param_2,0,*(undefined4 *)((int)this + 8));
              return uVar2;
            }
            uVar2 = F_0046e5e0(param_1);
            uVar4 = F_0046e5e0(param_2);
            if ((uVar2 == uVar4) &&
               (uVar2 = F_00a3a8a0(param_2), *(uint *)(param_4 + 0x28) != uVar2))
            goto LAB_008a0f2e;
            uVar2 = F_0046e5e0(param_1);
            uVar4 = F_0046e5e0(param_2);
            if (uVar2 != uVar4) {
              uVar7 = 0x74b;
              pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))
                                         (*(int * PTR32 *)((int)this + 4))));
              uVar2 = F_0046a630(pvVar3,uVar7);
              return uVar2;
            }
            piVar5 = *(int * PTR32 *)((int)this + 4);
            uVar7 = 0x74d;
          }
          else {
            if ((int)uVar2 < 0x1b) {
              return uVar2;
            }
            if (0x1d < (int)uVar2) {
              return uVar2;
            }
            piVar5 = *(int * PTR32 *)((int)this + 4);
            uVar7 = 0x74a;
          }
          pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5)));
          uVar4 = F_0046a630(pvVar3,uVar7);
        }
        return uVar4;
      }
    }
  }
LAB_008a0f86: ;
  uVar7 = 0x748;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0046a630(pvVar3,uVar7);
  return uVar2;
}

/* ref: FUN_008a0fb0 */
uint F_008a0fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8a0fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int * piVar1;
  uint * this_00;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  
  this_00 = (*(uint * PTR32 *)&gen_args[2]);
  if (*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) != (undefined *)0x0) {
    if (*(*(int * PTR32 *)&gen_args[1]) == 0x55f1) {
      uVar3 = 0x20;
    }
    else {
      bVar2 = (char)*(*(int * PTR32 *)&gen_args[1]) - 0x20;
      if (4 < bVar2) goto LAB_008a0fec;
      uVar3 = (uint)(byte)(&REFG(undefined1, 0x10c0596))[(uint)bVar2 * 3];
    }
    bVar2 = F_00441290(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))),uVar3);
    if (bVar2 != 0) {
      if (((*(uint * PTR32 *)&gen_args[2]) != (uint *)0x0) && ((*((char *)GEN_TOP(((int)(*(uint * PTR32 *)&gen_args[2]) + 6))) != '\0' || ((*(uint * PTR32 *)&gen_args[2])[2] != 0))))
      {
        uVar3 = F_0046e5e0((*(int * PTR32 *)&gen_args[1]));
        uVar5 = F_0046e5e0((*(uint * PTR32 *)&gen_args[2]));
        if ((uVar3 != uVar5) || (uVar3 = F_00a3a8a0((*(uint * PTR32 *)&gen_args[2])), *(uint *)((*(int *)&gen_args[4]) + 0x28) == uVar3))
        {
          uVar3 = F_0046e5e0((*(int * PTR32 *)&gen_args[1]));
          uVar5 = F_0046e5e0((*(uint * PTR32 *)&gen_args[2]));
          piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
          if (uVar3 == uVar5) {
            uVar8 = 0x74e;
            pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
            uVar3 = F_0046a630(pvVar4,uVar8);
            return uVar3;
          }
          uVar8 = 0x74c;
          pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
          uVar3 = F_0046a630(pvVar4,uVar8);
          return uVar3;
        }
      }
      uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
      if ((*(uint * PTR32 *)&gen_args[2]) != (uint *)0x0) {
        uVar5 = *(*(uint * PTR32 *)&gen_args[2]);
        (*(uint * PTR32 *)&gen_args[2]) = (uint *)uVar3;
        if (((-1 < (int)uVar5) && ((int)uVar5 < 4)) || (uVar5 == 0x7d1)) {
          uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x48))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))));
          piVar1 = *(int * PTR32 *)(uVar3 + 0x20);
          if (piVar1 != (int *)0x0) {
            (*(uint * PTR32 *)&gen_args[2]) = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1)));
          }
        }
        uVar3 = (uint)(*(uint * PTR32 *)&gen_args[2]);
        if ((((0xdab < (int)uVar5) && ((int)uVar5 < 0xdad)) ||
            ((0xc7f < (int)uVar5 && ((int)uVar5 < 0xc8a)))) ||
           ((uVar5 == 0xce4 || (uVar5 == 0xd48)))) {
          bVar2 = F_00a36920((*(undefined4 *)&gen_args[3]));
          (*(undefined4 *)&gen_args[3]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[3]), 1, 3),bVar2);
          if (bVar2 == 0xe) {
            uVar8 = 0x312;
            pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x28))))
                                       (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))));
            uVar3 = F_0046a630(pvVar4,uVar8);
            return uVar3;
          }
          uVar5 = *this_00;
          uVar6 = F_00a36960((*(undefined4 *)&gen_args[3]));
          piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
          if (uVar6 != uVar5) {
            uVar8 = 0x313;
            pvVar4 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
            uVar3 = F_0046a630(pvVar4,uVar8);
            return uVar3;
          }
          uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
          piVar1 = *(int * PTR32 *)(uVar5 + 0x130);
          if (piVar1 != (int *)0x0) {
            uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x30))(piVar1);
          }
        }
      }
      (*(uint * PTR32 *)&gen_args[2]) = (uint *)uVar3;
      uVar3 = F_00a3a8a0((*(int * PTR32 *)&gen_args[1]));
      if (uVar3 < 2) {
        uVar3 = F_00880510((*(undefined * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[1]),this_00,0,(*(uint * PTR32 *)&gen_args[2]));
        return uVar3;
      }
      iVar7 = 0;
      if ((this_00 != (uint *)0x0) && ((*(char *)((int)this_00 + 6) != '\0' || (this_00[2] != 0))))
      {
        uVar3 = F_00a3a8a0(this_00);
        iVar7 = *(int *)((*(int *)&gen_args[4]) + 0x28) - uVar3;
      }
      uVar3 = F_008806d0((*(undefined * PTR32 *)&gen_args[0]),(*(int * PTR32 *)&gen_args[1]),this_00,iVar7,(*(uint * PTR32 *)&gen_args[2]));
      return uVar3;
    }
  }
LAB_008a0fec: ;
  uVar8 = 0x748;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x28))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))));
  uVar3 = F_0046a630(pvVar4,uVar8);
  return uVar3;
}

/* ref: FUN_008a1260 */
uint F_008a1260(unsigned int gen_a0)
{
  GEN_ENTER(0x8a1260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined * this_01;
  uint uVar3;
  uint * this_02;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar3 + 0x130);
  if (piVar1 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    if ((char)uVar3 != '\0') {
      uVar3 = F_00869af0(piVar1,piVar1[4],9,*(undefined4 *)((int)this + 8),0);
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return uVar3;
    }
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  this_00 = *(undefined * PTR32 *)(uVar3 + 0x20);
  if (this_00 != (undefined *)0x0) {
    uVar2 = *(undefined4 *)((int)this + 8);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    if (*(int *)((int)this_00 + 0xc) == 6) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this_00 + 4) + 0x48))))(*(int * PTR32 *)((int)this_00 + 4));
      this_01 = *(undefined * PTR32 *)(uVar3 + 0x130);
      if ((this_01 != (undefined *)0x0) && (*(int *)((int)this_01 + 0x14) == 2)) {
        F_00869af0(this_01,*(undefined4 *)((int)this_01 + 0x10),0,0,1);
      }
    }
    *(undefined4 *)((int)this_00 + 0x10) = 0xdfb;
    *(undefined4 *)((int)this_00 + 0xc) = 9;
    *(undefined4 *)((int)this_00 + 0x18) = 4;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this_00 + 4) + 0x48))))(*(int * PTR32 *)((int)this_00 + 4));
    piVar1 = *(int * PTR32 *)(uVar3 + 0x130);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
      if ((char)uVar3 != '\0') {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      }
    }
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = 4;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(undefined4 *)(gen_frame + 0x1c)) = uVar2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),2);
    (*(undefined1 *)(gen_frame + 0x24)) = 0;
    F_0086e5a0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),4);
    this_02 = &(*(uint *)(gen_frame + 0x28));
    iVar4 = 3;
    do {
      this_02 = this_02 + -2;
      uVar3 = F_005a2670(this_02);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: FUN_008a13c0 */
uint F_008a13c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x8a13c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  if (*(undefined * PTR32 *)(uVar2 + 0x20) != (undefined *)0x0) {
    F_0089aef0(*(undefined * PTR32 *)(uVar2 + 0x20),9,4);
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar2 + 0x130);
  if ((piVar1 != (int *)0x0) && (piVar1[5] == 9)) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return uVar2;
}

/* ref: FUN_008a1400 */
uint F_008a1400(unsigned int gen_a0)
{
  GEN_ENTER(0x8a1400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x1488) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x1488),0);
    *(undefined4 *)((int)this + 0x1488) = 0;
  }
  if (*(int *)((int)this + 0x1484) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0x1484),0);
    *(undefined4 *)((int)this + 0x1484) = 0;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar2 + 0x130);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    if ((char)uVar2 != '\0') {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
      return uVar2;
    }
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  this_00 = *(undefined * PTR32 *)(uVar2 + 0x20);
  if (this_00 != (undefined *)0x0) {
    uVar2 = F_0089ad50(this_00,*(undefined4 *)((int)this_00 + 0xc),4,
                         *(undefined4 *)((int)this + 8),1);
  }
  return uVar2;
}

/* ref: FUN_008a14c0 */
uint F_008a14c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a14c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  int * piVar2;
  uint uVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  uint * this_00;
  undefined4 uVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar3 = param_1;
  if (*(int *)((int)this + 0x1480) == 0) {
    if (*(int *)((int)this + 0x1484) != 0) {
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x1484),0);
      *(undefined4 *)((int)this + 0x1484) = 0;
    }
    if (*(int *)((int)this + 0x1488) != 0) {
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x1488),0);
      *(undefined4 *)((int)this + 0x1488) = 0;
    }
    if (*(int *)((int)this + 0x148c) != 0) {
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x148c),0);
      *(undefined4 *)((int)this + 0x148c) = 0;
    }
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    piVar2 = *(int * PTR32 *)(uVar3 + 0x24);
    if (piVar2 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
      if (((char)uVar3 != '\0') && (piVar2[0x82] == *(int *)((int)this + 8))) {
        ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
      }
    }
    if (*(int *)((int)this + 0x1480) != 0) {
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x1480),0);
      *(undefined4 *)((int)this + 0x1480) = 0;
    }
    uVar1 = *(undefined4 *)((int)this + 8);
    uVar8 = 0;
    uVar7 = 0;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar3 = F_0043bd00(pvVar4,param_1,uVar7,uVar8);
    pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar5 = F_005593a0(pvVar4,1);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
    (*(uint *)(gen_frame + 0xc)) = uVar3;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
    (*(uint *)(gen_frame + 0x14)) = uVar5;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
    (*(undefined4 *)(gen_frame + 0x1c)) = 1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    uVar5 = F_008668b0(pvVar4,8,4,&(*(undefined4 *)(gen_frame + 0x8)),this,1,uVar1,4);
    this_00 = &(*(uint *)(gen_frame + 0x28));
    iVar6 = 3;
    do {
      this_00 = this_00 + -2;
      uVar3 = F_005a2670(this_00);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    *(uint *)((int)this + 0x1480) = uVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: FUN_008a1690 */
uint F_008a1690(unsigned int gen_a0)
{
  GEN_ENTER(0x8a1690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1,*(undefined4 *)((int)this + 8));
  if ((char)uVar2 != '\0') {
    F_007e2a20(this,1);
    uVar2 = F_008a14c0(this,0xb4e);
    return uVar2;
  }
  *(undefined4 *)((int)this + 0x14c4) = 2;
  return uVar2;
}

/* ref: FUN_008a16e0 */
uint F_008a16e0(unsigned int gen_a0)
{
  GEN_ENTER(0x8a16e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1,*(undefined4 *)((int)this + 8));
  if ((char)uVar2 != '\0') {
    F_007e2a20(this,1);
    uVar2 = F_008a14c0(this,0xb53);
    return uVar2;
  }
  *(undefined4 *)((int)this + 0x14c4) = 3;
  return uVar2;
}

/* ref: FUN_008a1730 */
byte F_008a1730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a1730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  code * pcVar1;
  int * piVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  uint uVar5;
  
  (*(byte *)(gen_frame + 0xb)) = 0;
  if ((*param_1 & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 4);
  }
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    pvVar3 = *(undefined * PTR32 *)(uVar5 + 0x108);
    if (pvVar3 != (undefined *)0x0) {
      if ((param_1[8] & 0xf) != 0) {
        F_0087f810(pvVar3,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)((int)this + 8),1);
        return (*(byte *)(gen_frame + 0xb));
      }
      F_0087f810(pvVar3,0,*(undefined4 *)((int)this + 8),1);
      return (*(byte *)(gen_frame + 0xb));
    }
    break;
  case 1: ;
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    pvVar3 = *(undefined * PTR32 *)(uVar5 + 0x108);
    if (pvVar3 != (undefined *)0x0) {
      if ((param_1[8] & 0xf) != 0) {
        F_0087f810(pvVar3,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)((int)this + 8),0);
        return (*(byte *)(gen_frame + 0xb));
      }
      F_0087f810(pvVar3,0,*(undefined4 *)((int)this + 8),0);
      return (*(byte *)(gen_frame + 0xb));
    }
    break;
  case 2: ;
    if ((param_1[8] & 0xf) == 0) {
      F_00880ed0(this,0);
      return (*(byte *)(gen_frame + 0xb));
    }
    F_00880ed0(this,*(undefined4 *)(param_1 + 0xc));
    break;
  case 0xfffffffe: ;
  case 0xffffffff: ;
    pcVar1 = *(gen_code32 *)(*(int *)this + 0xc);
    (*(byte *)(gen_frame + 0xb)) = 1;
    *(undefined4 *)((int)this + 8) = 0;
    (*pcVar1)(this);
    piVar2 = *(int * PTR32 *)((int)this + 0x10);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,((undefined1 *)(gen_frame + 0x0)),param_1,param_2,0);
      F_005a2670(((undefined1 *)(gen_frame + 0x0)));
      *(undefined4 *)((int)this + 0x10) = 0;
      return (*(byte *)(gen_frame + 0xb));
    }
  }
  return (*(byte *)(gen_frame + 0xb));
}

/* ref: Client::UI2::Agent::AgentFreeCompanyExchange::vf2 */
unsigned int F_008a1890(void)
{
  GEN_ENTER(0x8a1890u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_008a18a0 */
uint F_008a18a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a18a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  int * piVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint * this_00;
  undefined4 uVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (*(int *)((int)this + 0x1c) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x1c),0);
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  if (*(int *)((int)this + 0x20) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x20),0);
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  uVar1 = *(undefined4 *)((int)this + 8);
  uVar8 = 0;
  uVar7 = 0;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043bd00(pvVar3,param_1,uVar7,uVar8);
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_005593a0(pvVar3,1);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
  (*(uint *)(gen_frame + 0xc)) = uVar4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
  (*(uint *)(gen_frame + 0x14)) = uVar5;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
  (*(undefined4 *)(gen_frame + 0x1c)) = 1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  uVar4 = F_008668b0(pvVar3,8,4,&(*(undefined4 *)(gen_frame + 0x8)),this,2,uVar1,4);
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar6 = 3;
  do {
    this_00 = this_00 + -2;
    uVar5 = F_005a2670(this_00);
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  *(uint *)((int)this + 0x20) = uVar4;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar5;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyProfileEdit::vf2 */
uint F_008a19d0(unsigned int gen_a0)
{
  GEN_ENTER(0x8a19d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  undefined * this_00;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  undefined * pAVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),"",REFG(undefined4, 0x108cc50));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 == '\0') {
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    uVar1 = F_0042a990(((undefined1 *)(gen_frame + 0x14)));
    F_005a2710(&(*(undefined4 *)(gen_frame + 0xc)),6);
    uVar9 = 4;
    uVar8 = 0;
    uVar7 = 0;
    puVar5 = &(*(undefined4 *)(gen_frame + 0xc));
    (*(uint *)(gen_frame + 0x10)) = uVar1;
    uVar4 = 1;
    uVar3 = 0xb5;
    pAVar6 = this;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = F_008668b0(this_00,uVar3,uVar4,puVar5,pAVar6,uVar7,uVar8,uVar9);
    *(uint *)(this + 8) = uVar1;
    F_005a2670(&(*(undefined4 *)(gen_frame + 0xc)));
  }
  uVar2 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)uVar2;
}

/* ref: FUN_008a1a70 */
uint F_008a1a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a1a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)((int)this + 0x28) = param_1;
  uVar3 = 0xb;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
  uVar1 = F_00435440(uVar1,uVar3);
  *(uint *)((int)this + 0x24) = uVar1;
  if (uVar1 != 0) {
    F_00453fa0((undefined *)(uVar1 + 0x490),(int)this + 0xc);
    uVar2 = F_00436a80(*(undefined * PTR32 *)((int)this + 0x24));
    *(ulonglong *)((int)this + 0x30) = uVar2;
  }
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)((int)this + 0x34);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)((int)this + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)((int)this + 0x30);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x30);
  uVar1 = F_00881060(this);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyCrestEditor::vf2 */
uint F_008a1ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x8a1ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 != '\0') {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))
                      (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar1;
  }
  uVar1 = F_008a1a70(this,0);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyCrestEditor::vf5 */
unsigned int F_008a1b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a1b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  if (*(int *)(this + 8) != 0) {
    if (*(int *)(this + 0x58) == 1) {
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2,*(undefined4 *)(this + 8));
      if ((char)uVar3 != '\0') {
        if (*(int *)(this + 0x24) != 0) {
          bVar1 = F_00436880(*(int *)(this + 0x24));
          if (bVar1 != 3) {
            F_008814e0(this,0);
            F_007e32e0(this);
            return 0;
          }
        }
        *(undefined4 *)(this + 0x58) = 2;
      }
    }
    F_007e32e0(this);
  }
  return 0;
}

/* ref: FUN_008a1b70 */
uint F_008a1b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a1b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(byte *)(param_1 + 4) - 1;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    if (*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) {
      uVar2 = F_00436a80(*(undefined * PTR32 *)((int)this + 0x18));
      uVar1 = (uint)uVar2;
      *(ulonglong *)((int)this + 0x24) = uVar2;
    }
    break;
  case 3: ;
  case 4: ;
    uVar1 = F_008814e0((undefined *)((int)this + -0xc),0);
    return uVar1;
  case 5: ;
    uVar1 = F_008814e0((undefined *)((int)this + -0xc),1);
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_008a1be0 */
uint F_008a1be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8a1be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    if ((*(int *)((int)this + 0x30) != *(int *)((int)this + 0x38)) ||
       (*(int *)((int)this + 0x34) != *(int *)((int)this + 0x3c))) {
      F_008812d0(this,0);
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    }
LAB_008a1c0f: ;
    F_0077f780(this,param_2,param_3);
    *(undefined1 *)(param_1 + 1) = uVar2;
    *param_1 = 2;
    return (uint)param_1;
  case 1: ;
    if (*(int *)((int)this + 8) != 0) {
      if ((*(int *)((int)this + 0x30) == *(int *)((int)this + 0x38)) &&
         (*(int *)((int)this + 0x34) == *(int *)((int)this + 0x3c))) {
        F_0077f780(this,param_2,param_3);
        *(undefined1 *)(param_1 + 1) = 1;
        *param_1 = 2;
        return (uint)param_1;
      }
      F_008812d0(this,1);
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    }
    break;
  case 2: ;
    if ((*(int *)((int)this + 0x30) != *(int *)((int)this + 0x38)) ||
       (*(int *)((int)this + 0x34) != *(int *)((int)this + 0x3c))) {
      F_008812d0(this,2);
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    }
    break;
  case 3: ;
    if ((param_2[8] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xc);
    }
    if ((param_2[0x10] & 0xf) != 0) {
      *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_2 + 0x14);
      *(undefined4 *)((int)this + 0x40) = uVar1;
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    }
    *(undefined4 *)((int)this + 0x44) = 0;
    *(undefined4 *)((int)this + 0x40) = uVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  case 4: ;
    if ((param_2[8] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0xc);
    }
    if ((param_2[0x10] & 0xf) != 0) {
      *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_2 + 0x14);
      *(undefined4 *)((int)this + 0x38) = uVar1;
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    }
    *(undefined4 *)((int)this + 0x3c) = 0;
    *(undefined4 *)((int)this + 0x38) = uVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  case 5: ;
    F_007e33f0(this,(undefined4 *)((int)this + 0x40));
    *(undefined4 *)((int)this + 0x38) = *(undefined4 *)((int)this + 0x40);
    *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)((int)this + 0x44);
    *(undefined4 *)((int)this + 0x5c) = 0x1010101;
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  case 6: ;
    if (((param_2[8] & 0xf) == 0) || (*(uint *)(param_2 + 0xc) == 0)) {
      if ((param_2[0x10] & 0xf) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 0x14);
      }
      F_00881200(this,uVar1);
    }
    else if (*(uint *)(param_2 + 0xc) < 3) {
      F_00881130(this);
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    }
    break;
  case 0xfffffffe: ;
  case 0xffffffff: ;
    uVar2 = 1;
    goto LAB_008a1c0f;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_008a1e40 */
byte F_008a1e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a1e40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  code * pcVar1;
  int * piVar2;
  undefined4 uVar3;
  
  (*(byte *)(gen_frame + 0xb)) = 0;
  if ((*param_1 & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 4);
  }
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
    if ((param_1[8] & 0xf) != 0) {
      F_00881770(this,*(undefined4 *)(param_1 + 0xc));
      return (*(byte *)(gen_frame + 0xb));
    }
    F_00881770(this,0);
    return (*(byte *)(gen_frame + 0xb));
  case 1: ;
    if ((param_1[0x10] & 0xf) != 0) {
      F_00881890(this,*(undefined4 *)(param_1 + 0x14));
      return (*(byte *)(gen_frame + 0xb));
    }
    F_00881890(this,0);
    return (*(byte *)(gen_frame + 0xb));
  case 2: ;
    if ((param_1[0x10] & 0xf) != 0) {
      F_00881970(this,0,*(undefined4 *)(param_1 + 0x14));
      return (*(byte *)(gen_frame + 0xb));
    }
    F_00881970(this,0,0);
    return (*(byte *)(gen_frame + 0xb));
  case 3: ;
    F_00881970(this,1,0);
    break;
  case 0xfffffffe: ;
  case 0xffffffff: ;
    pcVar1 = *(gen_code32 *)(*(int *)this + 0xc);
    (*(byte *)(gen_frame + 0xb)) = 1;
    *(undefined4 *)((int)this + 8) = 0;
    (*pcVar1)(this);
    piVar2 = *(int * PTR32 *)((int)this + 0x10);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,((undefined1 *)(gen_frame + 0x0)),param_1,param_2,0);
      F_005a2670(((undefined1 *)(gen_frame + 0x0)));
      *(undefined4 *)((int)this + 0x10) = 0;
      return (*(byte *)(gen_frame + 0xb));
    }
  }
  return (*(byte *)(gen_frame + 0xb));
}

/* ref: Client::UI2::Agent::AgentFreeCompanyCrestDecal::vf2 */
uint F_008a1f80(unsigned int gen_a0)
{
  GEN_ENTER(0x8a1f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00881550(this,0);
  return uVar1;
}

/* ref: FUN_008a1f90 */
uint F_008a1f90(unsigned int gen_a0)
{
  GEN_ENTER(0x8a1f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00881770(this,(uint)*(byte *)((int)this + 0x20));
  return uVar1;
}

/* ref: FUN_008a1fa0 */
uint F_008a1fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a1fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  int * piVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint * this_00;
  undefined4 uVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (*(int *)((int)this + 0x1c) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x1c),0);
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  if (*(int *)((int)this + 0x18) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x18),0);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  uVar1 = *(undefined4 *)((int)this + 8);
  uVar8 = 0;
  uVar7 = 0;
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043bd00(pvVar3,param_1,uVar7,uVar8);
  pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = F_005593a0(pvVar3,1);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),6);
  (*(uint *)(gen_frame + 0xc)) = uVar4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),6);
  (*(uint *)(gen_frame + 0x14)) = uVar5;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
  (*(undefined4 *)(gen_frame + 0x1c)) = 1;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  uVar4 = F_008668b0(pvVar3,8,4,&(*(undefined4 *)(gen_frame + 0x8)),this,1,uVar1,4);
  this_00 = &(*(uint *)(gen_frame + 0x28));
  iVar6 = 3;
  do {
    this_00 = this_00 + -2;
    uVar5 = F_005a2670(this_00);
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  *(uint *)((int)this + 0x18) = uVar4;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar5;
}

/* ref: Client::UI2::Agent::AgentCharaMakeBase::vf5 */
uint F_008a20d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a20d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pAVar1;
  undefined1 AVar2;
  uint uVar3;
  byte bVar5;
  uint in_EAX = 0;
  uint uVar6;
  undefined * this_00;
  undefined3 extraout_var = 0;
  longlong lVar4;
  
  if (*(int *)(this + 8) != 0) {
    F_0082ce60((char)this[0x1fb8] + 2,(uint)*(ushort *)(this + 0x1fba));
    if (this[0x1fb8] == (undefined1)0xff) {
      if (REFG(undefined4, 0x148a44c) != (int *)0x0) {
        ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x148a44c) + 0x28))))(REFG(undefined4, 0x148a44c),6,0);
        REFG(undefined4, 0x1328330) = 0xffffffff;
        REFG(undefined4, 0x148a44c) = (int *)0x0;
      }
    }
    else {
      if ((this[0x1fbc] == (undefined1)0x2) && (REFG(undefined4, 0x148a44c) != (int *)0x0)) {
        uVar6 = F_00aa02d0(REFG(undefined4, 0x148a44c),3,0);
        if ((char)uVar6 != '\0') {
          lVar4 = (longlong)((double)*(float *)(REFG(int, 0x137104c) + 0x1198) * *(double *)&REFG(undefined, 0x10912a8));
          uVar3 = (uint)lVar4;
          pAVar1 = this + 0x1fc8;
          uVar6 = *(uint *)pAVar1;
          *(uint *)pAVar1 = *(uint *)pAVar1 + uVar3;
          *(uint *)(this + 0x1fcc) =
               *(int *)(this + 0x1fcc) + (int)((ulonglong)lVar4 >> 0x20) + (uint)CARRY4(uVar6,uVar3)
          ;
          if ((*(int *)(this + 0x1fcc) != 0) || (2000 < *(uint *)(this + 0x1fc8))) {
            F_007e3e10(this);
          }
        }
      }
      if (4 < *(int *)(this + 0x1fac)) {
        AVar2 = this[0x1fd0];
        uVar6 = (uint)(AVar2 == (undefined1)0x1);
        if ((uVar6 != (byte)this[0x1fd2]) ||
           ((uint)*((byte *)GEN_TOP((*(int *)(this + 0xf5c) + 7))) != (int)(char)this[0x1fd1])) {
          bVar5 = F_00782a00((uint)*((byte *)GEN_TOP((*(int *)(this + 0xf5c) + 7))),uVar6);
          if (bVar5 != 0) {
            this[0x1fd1] = *((undefined *)GEN_TOP((*(int *)(this + 0xf5c) + 7)));
            this[0x1fd2] = (undefined1)(AVar2 == (undefined1)0x1);
            if (this[0x1fd0] == (undefined1)0x1) {
              ((code *)*(gen_code32 *)(*(int *)this + 0x90))(this,1,1);
            }
          }
        }
      }
    }
    uVar6 = F_00424810(REFG(int, 0x137104c));
    in_EAX = 0;
    if (uVar6 != 0) {
      this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x50))))(*(int * PTR32 *)(this + 4))));
      F_007822b0();
      F_00782110(this_00);
      F_008844c0();
      bVar5 = F_00a34970(this_00,0x166);
      in_EAX = CONCAT31(extraout_var,bVar5);
      if (bVar5 != 0) {
        if (REFG(int, 0x148a444) != 0) {
          F_00b6b690(REFG(int, 0x148a444));
        }
        in_EAX = F_0043f8b0(0x22);
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_008a2280 */
uint F_008a2280(unsigned int gen_a0)
{
  GEN_ENTER(0x8a2280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint * puVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  puVar2 = (uint *)F_00ab36c0(0x888);
  if (puVar2 == (uint *)0x0) {
    (*(int *)(gen_frame + 0xc)) = 0;
  }
  else {
    (*(int *)(gen_frame + 0xc)) = (*puVar2 & 0xffffff) + (int)puVar2;
  }
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this + 8);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  bVar1 = F_005594e0(uVar3);
  if (bVar1 != 0) {
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_005593a0(this_00,1);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
  (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0xc));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),6);
  (*(uint *)(gen_frame + 0x24)) = uVar3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  uVar3 = F_008668b0(this_00,8,4,&(*(undefined4 *)(gen_frame + 0x18)),this,4,(*(undefined4 *)(gen_frame + 0x10)),0xb);
  puVar2 = &(*(uint *)(gen_frame + 0x38));
  iVar5 = 3;
  do {
    puVar2 = puVar2 + -2;
    uVar4 = F_005a2670(puVar2);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  *(uint *)((int)this + 0x1fb4) = uVar3;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar4;
}

/* ref: FUN_008a2390 */
uint F_008a2390(unsigned int gen_a0)
{
  GEN_ENTER(0x8a2390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  uint * puVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  puVar2 = (uint *)F_00ab36c0(0x889);
  if (puVar2 == (uint *)0x0) {
    (*(int *)(gen_frame + 0xc)) = 0;
  }
  else {
    (*(int *)(gen_frame + 0xc)) = (*puVar2 & 0xffffff) + (int)puVar2;
  }
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this + 8);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4));
  bVar1 = F_005594e0(uVar3);
  if (bVar1 != 0) {
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_005593a0(this_00,1);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
  (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0xc));
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),6);
  (*(uint *)(gen_frame + 0x24)) = uVar3;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),4);
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),4);
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  uVar3 = F_008668b0(this_00,8,4,&(*(undefined4 *)(gen_frame + 0x18)),this,5,(*(undefined4 *)(gen_frame + 0x10)),0xb);
  puVar2 = &(*(uint *)(gen_frame + 0x38));
  iVar5 = 3;
  do {
    puVar2 = puVar2 + -2;
    uVar4 = F_005a2670(puVar2);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
  *(uint *)((int)this + 0x1fb4) = uVar3;
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar4;
}

/* ref: FUN_008a24a0 */
uint F_008a24a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a24a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_008a2280(this);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentCreate::vf5 */
uint F_008a24b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a24b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  F_008a20d0((undefined *)this,param_1);
  uVar2 = *(int *)(this + 0x2184) - 1;
  if (uVar2 == 0) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this);
    if ((char)uVar2 != '\0') {
      bVar1 = F_007826f0();
      uVar2 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x8c))(this,(*(int *)(this + 0x1fd8) < 0) - 1 & 2);
        *(undefined4 *)(this + 0x2184) = 2;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_008a2510 */
uint F_008a2510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a2510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if ((char)param_1 != '\0') {
    uVar1 = F_00882cf0(this,param_1);
    *(undefined1 *)((int)this + 0x68f) = 2;
    return uVar1;
  }
  *(undefined1 *)((int)this + 0x68f) = 0xf;
  return param_1;
}

/* ref: Global::CheckNewCharacter */
uint F_008a2540(unsigned int gen_a0)
{
  GEN_ENTER(0x8a2540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  bool bVar1;
  bool bVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint * puVar7;
  undefined * pvVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint * puVar12;
  undefined * puVar13;
  undefined4 uVar14;
  
  piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,2);
  uVar5 = 0;
  piVar3 = (int *)((int)this + 0x48);
  do {
    if ((piVar3[-7] != 0) && (*piVar3 != 0)) {
      uVar5 = uVar5 * 0x118;
      iVar10 = *(int *)(uVar5 + 0x48 + (int)this);
      goto LAB_008a258d;
    }
    uVar5 = uVar5 + 1;
    piVar3 = piVar3 + 0x46;
  } while ((int)uVar5 < 2);
  iVar10 = 0;
LAB_008a258d: ;
  iVar9 = *(int *)((int)this + 0x684);
  if (iVar9 != 0) {
    *(undefined4 *)((int)this + 0x684) = 0;
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar5 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,iVar9,0);
  }
  if ((iVar10 != 0) && (uVar4 != 0)) {
    bVar1 = true;
    bVar2 = true;
    uVar5 = F_00e3c050(iVar10);
    uVar11 = 0;
    piVar3 = (int *)((int)this + 0x2c);
    do {
      if ((uVar11 < 2) && (9 < piVar3[0x3c])) {
        if (*piVar3 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (piVar3[0x25] - piVar3[0x24]) / 0x18;
        }
        if ((int)(uVar6 & 0xff) < (int)uVar5) {
          bVar1 = false;
          break;
        }
      }
      uVar11 = uVar11 + 1;
      piVar3 = piVar3 + 0x46;
    } while ((int)uVar11 < 2);
    uVar5 = F_00e3c030(iVar10);
    piVar3 = ((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 8)));
    puVar7 = ((uint *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x20)));
    iVar10 = 8;
    do {
      puVar12 = puVar7;
      for (iVar9 = iVar10; iVar9 < *piVar3 + iVar10; iVar9 = iVar9 + 1) {
        if ((int)(*puVar12 & 0xf) < (int)uVar5) {
          bVar2 = false;
          break;
        }
        puVar12 = puVar12 + 1;
      }
      iVar10 = iVar10 + 0x28;
      puVar7 = puVar7 + 0x28;
      piVar3 = piVar3 + 1;
    } while (iVar10 < 0x58);
    if (bVar1) {
      uVar14 = 0x3c;
    }
    else {
      if (!bVar2) {
        uVar4 = F_00883080(this);
        return uVar4;
      }
      uVar14 = 0x3d;
    }
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e8) + 0x24))))
                              (*(int * PTR32 *)((int)this + 0x2e8),uVar14)));
    if (piVar3 == (int *)0x0) {
      puVar13 = &REFG(undefined, 0x10be54a);
    }
    else {
      uVar14 = 3;
      pvVar8 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3)));
      puVar13 = (undefined *)F_00cb0950(pvVar8,uVar14);
    }
    pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = F_005593a0(pvVar8,1);
    uVar5 = F_00866c30(pvVar8,puVar13,uVar4,this,0x12,0,0xb,0,0,1);
    *(uint *)((int)this + 0x684) = uVar5;
  }
  return uVar5;
}

/* ref: FUN_008a2730 */
uint F_008a2730(unsigned int gen_a0)
{
  GEN_ENTER(0x8a2730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined * puVar4;
  undefined4 uVar5;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x2e8) + 0x24))))
                            (*(int * PTR32 *)((int)this + 0x2e8),0x1a)));
  if (piVar1 == (int *)0x0) {
    puVar4 = &REFG(undefined, 0x10be54a);
  }
  else {
    uVar5 = 3;
    pvVar2 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
    puVar4 = (undefined *)F_00cb0950(pvVar2,uVar5);
  }
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = F_005593a0(pvVar2,1);
  uVar3 = F_00866c30(pvVar2,puVar4,uVar3,this,7,0,0xb,0,0,1);
  *(uint *)((int)this + 0x684) = uVar3;
  return uVar3;
}

/* ref: FUN_008a27a0 */
unsigned int F_008a27a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a27a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  uVar5 = 2;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  F_00760260(pvVar1,uVar5);
  if (param_1 == 0) {
    if (param_2 == 0xf) {
      *(undefined1 *)((int)this + 0x68c) = 8;
    }
    else if (param_2 == 0x13) {
      F_007e5390(this);
    }
  }
  else if (param_1 == 2) {
    F_00e3bd90(((undefined4 *)(gen_frame + 0x4)));
    (*(undefined2 *)(gen_frame + 0x64)) = 0x3e81;
    (*(undefined4 *)(gen_frame + 0xc)) = 4;
    ((undefined4 *)(gen_frame + 0x4))[0] = 0;
    F_0082c8e0(this,((undefined4 *)(gen_frame + 0x4)),0);
    F_0042c880(((undefined1 *)(gen_frame + 0x10)));
  }
  else if (param_2 == 0xf) {
    *(undefined1 *)((int)this + 0x68f) = 0xf;
  }
  else if (param_2 == 0x13) {
    uVar6 = 0;
    uVar4 = 0;
    uVar3 = 1;
    uVar2 = 0x18;
    uVar5 = 0;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    F_0075ec30(pvVar1,uVar5,uVar2,uVar3,uVar4,uVar6);
    F_00783600((undefined *)((int)this + 0x18));
    F_00882820(this,0);
  }
  F_0053cd40(&REFG(undefined4, 0x1375bc0));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return 0;
}

/* ref: Client::UI2::Agent::AgentRetainerCharaMake::vf5 */
unsigned int F_008a2890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a2890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined2 uVar2;
  undefined * pvVar3;
  int * piVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (*(int *)(this + 0x2180) != 0) {
    F_008a20d0((undefined *)this,param_1);
    switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0x2180))) {
    case 1: ;
      bVar1 = F_0049b5a0(*(undefined4 *)(REFG(int, 0x137104c) + 0x25f4));
      if (bVar1 == 0) {
        piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        ((code *)*(gen_code32 *)(*piVar4 + 0xf8))(piVar4,1);
        uVar6 = 0;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        F_0075d840(pvVar3,uVar6);
        *(undefined4 *)(this + 0x2180) = 2;
        return 0;
      }
      break;
    case 2: ;
      uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this);
      if ((char)uVar5 != '\0') {
        uVar6 = 1;
        uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4));
        bVar1 = F_005590e0(uVar5,uVar6);
        if (bVar1 != 0) {
          *(undefined4 *)(this + 0x2180) = 3;
          F_00781eb0(this);
          F_007820e0();
          F_0082cb40(0,1);
          this[0x1fb8] = (undefined1)0x4;
          uVar5 = F_00ab36c0(0x1c3);
          if (uVar5 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = (undefined2)*(undefined4 *)(uVar5 + 0x10);
          }
          *(undefined2 *)(this + 0x1fba) = uVar2;
          piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x14))))(*(int * PTR32 *)(this + 4))));
          uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4,"Lobby");
          F_00782420(uVar5);
          return 0;
        }
      }
      break;
    case 3: ;
      F_0082ce60((char)this[0x1fb8] + 2,(uint)*(ushort *)(this + 0x1fba));
      if (REFG(char, 0x148a113) == '\0') {
        F_00920c00(0,(float)(float10)0);
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 1;
        uVar7 = 0x18;
        uVar6 = 0;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        F_00820b30(pvVar3,uVar6,uVar7,uVar8,uVar9,uVar10);
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 1;
        uVar7 = 0x18;
        uVar6 = 1;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        F_00820b30(pvVar3,uVar6,uVar7,uVar8,uVar9,uVar10);
        if (*((char *)GEN_TOP((*(int *)(this + 0xf60) + 0x10))) != '\0') {
          *(undefined4 *)(this + 0x2180) = 5;
          return 0;
        }
        F_00883d00(this);
        *(undefined4 *)(this + 0x2180) = 4;
        return 0;
      }
      break;
    case 5: ;
      if ((REFG(char, 0x148a113) == '\0') && (bVar1 = F_007826f0(), bVar1 != 0)) {
        ((code *)*(gen_code32 *)(*(int *)this + 0x8c))(this,(*(int *)(this + 0x1fd8) < 0) - 1 & 2);
        *(undefined4 *)(this + 0x2180) = 6;
        return 0;
      }
      break;
    case 7: ;
      uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4));
      bVar1 = F_0075ee20(uVar5);
      if (bVar1 != 0) {
        F_007e5570(this);
        return 0;
      }
      break;
    case 8: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4,0);
      if ((char)uVar5 != '\0') {
        F_00920c00(0,(float)(float10)0);
        uVar10 = 0;
        uVar9 = 0;
        uVar8 = 1;
        uVar7 = 0;
        uVar6 = 0;
        pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        F_0075ec30(pvVar3,uVar6,uVar7,uVar8,uVar9,uVar10);
        *(undefined4 *)(this + 0x2180) = 9;
        return 0;
      }
      break;
    case 9: ;
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4,1);
      if ((char)uVar5 != '\0') {
        F_007e5650(this);
        return 0;
      }
      break;
    case 10: ;
      ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    }
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentCharaRemake::vf5 */
uint F_008a2b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a2b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)(this + 0x2180);
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this);
      if ((char)uVar2 != '\0') {
        bVar1 = F_007826f0();
        uVar2 = CONCAT31(extraout_var,bVar1);
        if (bVar1 != 0) {
          uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x8c))(this,8);
          *(undefined4 *)(this + 0x2180) = 2;
        }
      }
    }
    else {
      uVar2 = uVar2 - 2;
      if (uVar2 == 0) {
        uVar2 = F_008a20d0((undefined *)this,param_1);
        return uVar2;
      }
    }
  }
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentCharaRemake::vf40 */
uint F_008a2c00(unsigned int gen_a0)
{
  GEN_ENTER(0x8a2c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = F_00884220(this);
  if (*(int *)(this + 8) != 0) {
    F_005a2710(this + 0x1dc4,3);
    *(undefined4 *)(this + 0x1dc8) = 0x115;
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2,*(undefined4 *)(this + 8),0x205,this + 0xf7c);
  }
  if (REFG(undefined4, 0x148a44c) != (undefined *)0x0) {
    F_00aa0560(REFG(undefined4, 0x148a44c),3);
    uVar1 = F_00aa4270(REFG(undefined4, 0x148a44c),0x2c5,0,0);
  }
  return uVar1;
}

/* ref: FUN_008a2c80 */
byte F_008a2c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15)
{
  GEN_ENTER(0x8a2c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[16];
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
  undefined4 uVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  
  uVar1 = (*(undefined4 *)&gen_args[15]);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) != 0) {
    piVar3 = (int *)F_00884650((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
    if ((piVar3 != (int *)0x0) && ((char)(*(undefined4 *)&gen_args[4]) != '\0')) {
      (*(int *)&gen_args[12]) = piVar3[4];
      if (*piVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (uint)*(byte *)(*piVar3 + 0x10);
      }
      bVar2 = F_00974b60(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),uVar4,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),uVar1,&(*(undefined4 *)&gen_args[3]),(*(undefined * PTR32 *)&gen_args[0]),
                           *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))));
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xfc))) = (bVar2 == 0) + 0x21;
      F_00e75880(&(*(undefined4 *)&gen_args[3]));
      return bVar2;
    }
  }
  F_00e75880(&(*(undefined4 *)&gen_args[3]));
  return 0;
}

/* ref: FUN_008a2d20 */
byte F_008a2d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8a2d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0xc) == 0) {
    return 0;
  }
  piVar2 = (int *)F_00884650(this,param_1,param_2);
  if ((piVar2 != (int *)0x0) && (*(char *)(param_3 + 4) != '\0')) {
    *(int *)(param_3 + 0x24) = piVar2[4];
    if (*piVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)(*piVar2 + 0x10);
    }
    bVar1 = F_00974b20(*(undefined * PTR32 *)((int)this + 8),uVar3,param_1,param_2,param_3,this,
                         *(undefined4 *)((int)this + 0xc));
    *(uint *)((int)this + 0xfc) = (bVar1 == 0) + 0x24;
    return bVar1;
  }
  return 0;
}

/* ref: FUN_008a2da0 */
byte F_008a2da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a2da0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * PTR32 * ppvVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  pvVar2 = (undefined *)F_00929420(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec))),&(*(uint *)&gen_args[1]));
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0)));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar2;
  if (pvVar2 != pvVar1) {
    if ((*(uint *)((int)pvVar2 + 0x14) <= (*(undefined * PTR32 *)&gen_args[2])) &&
       (((*(undefined * PTR32 *)&gen_args[2]) != (undefined *)*(uint *)((int)pvVar2 + 0x14) ||
        (*(uint *)((int)pvVar2 + 0x10) <= (*(uint *)&gen_args[1]))))) {
      ppvVar3 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
      goto LAB_008a2de1;
    }
  }
  (*(undefined * PTR32 *)&gen_args[2]) = pvVar1;
  ppvVar3 = &(*(undefined * PTR32 *)&gen_args[2]);
LAB_008a2de1: ;
  if (*ppvVar3 != pvVar1) {
    return *(byte *)((int)*ppvVar3 + 0x18);
  }
  return 0;
}

/* ref: FUN_008a2e00 */
uint F_008a2e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a2e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  
  iVar3 = *(int *)((int)this + 0xb0);
  if (iVar3 == 0) {
    iVar6 = 0;
    iVar3 = 0;
  }
  else {
    iVar6 = *(int *)(iVar3 + 8);
    iVar3 = *(int *)(iVar3 + 0xc);
  }
  if ((param_1 == iVar6) && (param_2 == iVar3)) {
    uVar4 = F_00ab21a0((uint)*(byte *)((int)this + 0xea));
    if (uVar4 != 0) {
      cVar2 = *(char *)(uVar4 + 0x40);
      goto LAB_008a2ea0;
    }
  }
  else {
    piVar5 = (int *)F_00884650(this,param_1,param_2);
    if ((piVar5 == (int *)0x0) || (*piVar5 == 0)) {
      return 0;
    }
    uVar4 = F_00e3be40(*piVar5);
    if (uVar4 == 0) {
      return 0;
    }
    if (-1 < *(short *)(uVar4 + 0x54)) {
      return (int)*(short *)(uVar4 + 0x54);
    }
    bVar1 = F_008a2da0(this,param_1,param_2);
    uVar4 = F_00ab21a0((uint)bVar1);
    if (uVar4 != 0) {
      cVar2 = *(char *)(uVar4 + 0x40);
      goto LAB_008a2ea0;
    }
  }
  cVar2 = '\0';
LAB_008a2ea0: ;
  if (cVar2 == '\x01') {
    return 0xb5;
  }
  if (cVar2 == '\x02') {
    return 0xb7;
  }
  if (cVar2 == '\x03') {
    return 0xb6;
  }
  return 0;
}

/* ref: FUN_008a2ee0 */
unsigned int F_008a2ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8a2ee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  undefined * pvVar2;
  undefined * PTR32 * ppvVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  pvVar2 = (undefined *)F_00929470(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xec))),&(*(uint *)&gen_args[1]));
  pvVar1 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xf0)));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar2;
  if (pvVar2 != pvVar1) {
    if ((*(uint *)((int)pvVar2 + 0x14) <= (*(undefined * PTR32 *)&gen_args[2])) &&
       (((*(undefined * PTR32 *)&gen_args[2]) != (undefined *)*(uint *)((int)pvVar2 + 0x14) ||
        (*(uint *)((int)pvVar2 + 0x10) <= (*(uint *)&gen_args[1]))))) {
      ppvVar3 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
      goto LAB_008a2f21;
    }
  }
  (*(undefined * PTR32 *)&gen_args[2]) = pvVar1;
  ppvVar3 = &(*(undefined * PTR32 *)&gen_args[2]);
LAB_008a2f21: ;
  if (*ppvVar3 != pvVar1) {
    *(undefined1 *)((int)*ppvVar3 + 0x18) = (undefined1)(*(undefined4 *)&gen_args[3]);
  }
  return 0;
}

/* ref: FUN_008a2f40 */
byte F_008a2f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8a2f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined * this_00;
  byte bVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  int * piVar5;
  undefined1 * puVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = 0;
  piVar5 = (int *)((int)this + 0x34);
  while (bVar1 = F_008846f0(piVar5 + -0xb,param_2,param_3), bVar1 == 0) {
    if ((piVar5[-8] != 0) && (*piVar5 != 0)) {
      for (piVar2 = *(int * PTR32 *)*piVar5; piVar2 != ((int *)GEN_TOP(((undefined4 *)*piVar5)[1]));
          piVar2 = piVar2 + 1) {
        if ((*(int *)(*piVar2 + 8) == param_2) && (*(int *)(*piVar2 + 0xc) == param_3))
        goto LAB_008a2fb6;
      }
    }
    iVar8 = iVar8 + 1;
    piVar5 = piVar5 + 0x46;
    if (1 < iVar8) {
      return 0;
    }
  }
LAB_008a2fb6: ;
  this_00 = (undefined *)(iVar8 * 0x118 + 8 + (int)this);
  bVar1 = F_0082d310(this_00,param_1,param_2,param_3);
  *(uint *)((int)this + 0x238) = (bVar1 != 0) + 0xf;
  if (bVar1 != 0) {
    if (*(int *)((int)this_00 + 0xc) == 0) {
      uVar4 = 0;
    }
    else {
      puVar3 = (undefined4 *)F_00e3bd20(*(int *)((int)this_00 + 0xc));
      uVar4 = *puVar3;
    }
    *(undefined4 *)((int)this + 0x254) = uVar4;
    piVar5 = (int *)F_00884650(this_00,param_2,param_3);
    if (piVar5 != (int *)0x0) {
      *(int *)((int)this + 600) = param_2;
      *(int *)((int)this + 0x25c) = param_3;
      if (*piVar5 == 0) {
        puVar6 = &REFG(undefined1, 0x107fc63);
      }
      else {
        puVar6 = (undefined1 *)(*piVar5 + 0x3a);
      }
      F_0042e430((undefined *)((int)this + 0x260),puVar6);
      uVar7 = F_008a2e00(this_00,param_2,param_3);
      *(uint *)((int)this + 0x2b4) = uVar7;
    }
  }
  return bVar1;
}

/* ref: FUN_008a3070 */
byte F_008a3070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8a3070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined1 gen_out[0x4];
  byte bVar1;
  int iVar2;
  undefined * this_00;
  undefined * PTR32 * local_44;
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
  
  iVar2 = 0;
  this_00 = (undefined *)((int)this + 8);
  do {
    uStack_14 = param_2;
    uStack_18 = param_1;
    uStack_1c = 0x8a308f;
    bVar1 = F_008846f0(this_00,param_1,param_2);
    if (bVar1 != 0) {
      uStack_14 = param_4;
      F_00e78fe0((gen_out + 0x0),param_3);
      local_44 = (*(undefined * PTR32 (*)[27])REFP(0x10c45d4));
      bVar1 = F_008a2c80((undefined *)(iVar2 * 0x118 + 8 + (int)this),param_1,param_2,
                           (*(undefined * PTR32 (*)[27])REFP(0x10c45d4)),uStack_40,
                           uStack_3c,uStack_38,uStack_34,uStack_30,uStack_2c,uStack_28,uStack_24,
                           uStack_20,uStack_1c,uStack_18,uStack_14);
      *(uint *)((int)this + 0x238) = (bVar1 != 0) + 0x22;
      return bVar1;
    }
    iVar2 = iVar2 + 1;
    this_00 = (undefined *)((int)this_00 + 0x118);
  } while (iVar2 < 2);
  return 0;
}

/* ref: FUN_008a30f0 */
byte F_008a30f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8a30f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  int iVar2;
  undefined * this_00;
  
  iVar2 = 0;
  this_00 = (undefined *)((int)this + 8);
  do {
    bVar1 = F_008846f0(this_00,param_1,param_2);
    if (bVar1 != 0) {
      bVar1 = F_008a2d20((undefined *)(iVar2 * 0x118 + 8 + (int)this),param_1,param_2,param_3);
      *(uint *)((int)this + 0x238) = (bVar1 != 0) + 0x25;
      return bVar1;
    }
    iVar2 = iVar2 + 1;
    this_00 = (undefined *)((int)this_00 + 0x118);
  } while (iVar2 < 2);
  return 0;
}

/* ref: FUN_008a3160 */
byte F_008a3160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a3160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  byte bVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * PTR32 * ppuVar5;
  undefined4 * puVar6;
  int * piVar7;
  int iVar8;
  
  iVar8 = 0;
  piVar7 = (int *)((int)this + 0xf8);
  while( true ) {
    puVar6 = ((undefined4 *)GEN_TOP(((undefined4 *)*piVar7)[1]));
    cVar1 = *(char *)((int)puVar6 + 0x21);
    puVar3 = (undefined4 *)*piVar7;
    while (cVar1 == '\0') {
      if ((param_2 < (uint)puVar6[5]) ||
         ((param_2 <= (uint)puVar6[5] && (param_1 <= (uint)puVar6[4])))) {
        puVar4 = (undefined4 *)*puVar6;
      }
      else {
        puVar4 = (undefined4 *)puVar6[2];
        puVar6 = puVar3;
      }
      puVar3 = puVar6;
      puVar6 = puVar4;
      cVar1 = *(char *)((int)puVar4 + 0x21);
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar3;
    if (((puVar3 == (undefined4 *)*piVar7) || (param_2 < (uint)puVar3[5])) ||
       ((param_2 == puVar3[5] && (param_1 < (uint)puVar3[4])))) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)*piVar7;
      ppuVar5 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
    }
    else {
      ppuVar5 = &(*(undefined4 * PTR32 *)(gen_frame + 0x8));
    }
    if ((*ppuVar5 != (undefined4 *)*piVar7) && (bVar2 = *(byte *)(*ppuVar5 + 6), bVar2 != 0)) break;
    iVar8 = iVar8 + 1;
    piVar7 = piVar7 + 0x46;
    if (1 < iVar8) {
      return 0;
    }
  }
  return bVar2;
}

/* ref: Client::UI2::Agent::AgentSupportSubView::vf5 */
unsigned int F_008a31f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a31f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (((*(int *)(this + 8) == 0) || (*(int *)(this + 0xc) == 0)) || (*(int *)(this + 0x20) < 0))
  goto switchD_008a323e_caseD_2;
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1,*(undefined4 *)(this + 8));
  if (((char)uVar2 == '\0') ||
     (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0xc) + 0xc))), this_00 == (undefined *)0x0))
  goto switchD_008a323e_caseD_2;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0x20))) {
  case 0: ;
    uVar4 = *(undefined4 *)(this + 0x14);
    uVar3 = 1;
    break;
  case 1: ;
    uVar4 = *(undefined4 *)(this + 0x14);
    uVar3 = 2;
    break;
  default: ;
    goto switchD_008a323e_caseD_2;
  case 3: ;
    if (*(int *)(this + 0x10) == 4) {
      uVar4 = *(undefined4 *)(this + 0x14);
      uVar3 = 4;
    }
    else {
      uVar4 = *(undefined4 *)(this + 0x14);
      uVar3 = 5;
    }
    goto LAB_008a328e;
  case 4: ;
    uVar4 = *(undefined4 *)(this + 0x14);
    uVar3 = 6;
LAB_008a328e: ;
    uVar2 = F_0044cf40(this_00,uVar3,uVar4);
    if (*(char *)(uVar2 + 0xac) != '\0') {
      *(undefined4 *)(this + 0x20) = 0xffffffff;
      F_008852c0(this,uVar2);
    }
    goto switchD_008a323e_caseD_2;
  }
  uVar2 = F_0045d8f0(this_00,uVar3,uVar4);
  if (*(char *)(uVar2 + 0xa8) != '\0') {
    *(undefined4 *)(this + 0x20) = 0xffffffff;
    F_00783be0(this,uVar2);
  }
switchD_008a323e_caseD_2: ;
  if (this[0x1c] != (undefined1)0x0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x15c) + 0x30))))(*(int * PTR32 *)(uVar2 + 0x15c));
    if (uVar2 == 0) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this);
    }
  }
  return 0;
}

/* ref: FUN_008a32f0 */
uint F_008a32f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a32f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined * pvVar4;
  undefined * this_00;
  undefined4 * this_01;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (*(char *)(param_1 + 0xac) != '\0') {
    uVar2 = F_008852c0(this,param_1);
    return uVar2;
  }
  this_01 = (undefined4 *)0x0;
  uVar8 = 0;
  uVar2 = F_00404270();
  puVar3 = (undefined4 *)F_00406c00(0x3c,0,uVar2,uVar8);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 7;
    puVar3[1] = 0;
    puVar3[3] = 0;
    puVar3[5] = 0;
    puVar3[7] = 0;
    puVar3[9] = 0;
    puVar3[0xb] = 0;
    puVar3[0xd] = 0;
    this_01 = puVar3 + 1;
  }
  F_005a2710(this_01 + 2,6);
  this_01[3] = "";
  F_005a2710(this_01 + 4,6);
  this_01[5] = "";
  F_005a2710(this_01 + 0xc,6);
  this_01[0xd] = "";
  F_005a2710(this_01,3);
  this_01[1] = 4;
  F_005a2710(this_01 + 6,6);
  this_01[7] = "";
  uVar9 = 0;
  uVar6 = 0;
  uVar8 = 0x11b2;
  pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_0043bd00(pvVar4,uVar8,uVar6,uVar9);
  F_005a2710(this_01 + 8,6);
  this_01[9] = uVar2;
  F_005a2710(this_01 + 10,3);
  uVar10 = 4;
  uVar7 = 0;
  uVar9 = 0;
  this_01[0xb] = 0;
  uVar6 = 7;
  uVar8 = 0x7e;
  puVar3 = this_01;
  pvVar4 = this;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = F_008668b0(this_00,uVar8,uVar6,puVar3,pvVar4,uVar9,uVar7,uVar10);
  *(uint *)((int)this + 8) = uVar2;
  iVar1 = this_01[-1];
  puVar3 = this_01 + iVar1 * 2;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    puVar3 = puVar3 + -2;
    F_005a2670(puVar3);
  }
  uVar5 = F_00406b30(this_01 + -1);
  *(undefined4 *)((int)this + 0x20) = 3;
  return (uint)uVar5;
}

/* ref: Client::UI2::Agent::AgentSupportSubEdit::vf18 */
unsigned int F_008a3430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8a3430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (*(int *)(this + 0xc) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(uVar1 + 0x150);
  }
  *(undefined4 *)(this + 0x10) = 9;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  if (*(int *)(this + 8) == 0) {
    F_008858b0(this,param_2,param_3);
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentSupportSubEdit::vf17 */
unsigned int F_008a3480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a3480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(this + 0xc) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(uVar1 + 0x150);
  }
  *(undefined4 *)(this + 0x10) = 9;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x5c);
  if (*(int *)(this + 8) == 0) {
    uVar1 = F_0042a990(param_1 + 0x11c);
    uVar2 = F_0042a990(param_1 + 0x60);
    F_008858b0(this,uVar2,uVar1);
  }
  return 0;
}

/* ref: FUN_008a34e0 */
byte F_008a34e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a34e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  code * pcVar1;
  int * piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined * pvVar5;
  uint uVar6;
  int iVar7;
  uint * this_00;
  undefined4 uVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  if (((byte)*param_1 & 0xf) != 3) goto LAB_008a36ee;
  iVar7 = param_1[1];
  if (iVar7 != 0) {
    if ((0 < iVar7) && (iVar7 < 3)) {
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x2c),0);
      pcVar1 = *(gen_code32 *)(*(int *)this + 0x18);
      *(undefined4 *)((int)this + 0x2c) = 0;
      (*pcVar1)(this);
      F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
      return 0;
    }
    goto LAB_008a36ee;
  }
  F_0042ccf0((undefined *)((int)this + 0x34),(int)this + 0xf0);
  *(undefined4 *)((int)this + 0x88) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x90) = 0;
  F_0042ccf0((undefined *)((int)this + 0x9c),(int)this + 0x144);
  piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 0x2c),0);
  if ((*(int *)((int)this + 0xc) == 0) ||
     (pvVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))), pvVar5 == (undefined *)0x0))
  goto LAB_008a36ee;
  F_004474f0(pvVar5,(int)this + 0x30);
  F_0042b630(((undefined1 *)(gen_frame + 0x4)));
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x10))) {
  case 4: ;
  case 5: ;
    uVar3 = 0x17ef;
    break;
  default: ;
    goto switchD_008a35dd_caseD_6;
  case 7: ;
    switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x14))) {
    case 0: ;
      uVar3 = 0x17f0;
      break;
    case 1: ;
      uVar3 = 0x17f3;
      break;
    case 2: ;
      uVar3 = 0x17f4;
      break;
    case 3: ;
      uVar3 = 0x17f5;
      break;
    default: ;
      goto switchD_008a35dd_caseD_6;
    }
    break;
  case 9: ;
    uVar3 = 0x17f2;
  }
  uVar9 = 0;
  uVar8 = 0;
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_0043bd00(pvVar5,uVar3,uVar8,uVar9);
  F_0042e430(((undefined1 *)(gen_frame + 0x4)),uVar4);
switchD_008a35dd_caseD_6: ;
  uVar3 = *(undefined4 *)((int)this + 8);
  uVar4 = F_0042a990(((undefined1 *)(gen_frame + 0x4)));
  pvVar5 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar6 = F_005593a0(pvVar5,1);
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x58)),6);
  (*(uint *)(gen_frame + 0x5c)) = uVar4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x60)),6);
  (*(uint *)(gen_frame + 0x64)) = uVar6;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x68)),4);
  (*(undefined4 *)(gen_frame + 0x6c)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x70)),4);
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  uVar4 = F_008668b0(pvVar5,8,4,&(*(undefined4 *)(gen_frame + 0x58)),this,2,uVar3,4);
  this_00 = &(*(uint *)(gen_frame + 0x78));
  iVar7 = 3;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  *(uint *)((int)this + 0x2c) = uVar4;
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
LAB_008a36ee: ;
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
}

/* ref: Client::UI2::Agent::AgentCreditPlayer::vf1 */
uint F_008a3730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8a3730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined * pvVar1;
  int * piVar2;
  int iVar3;
  undefined1 uVar4;
  
  if ((*param_2 & 0xf) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_2 + 4);
  }
  uVar4 = 0;
  if (param_4 == 0) {
    if (-3 < iVar3) {
      if (iVar3 < 0) {
        if (*(int *)(this + 0xc) != 0) {
          piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
          ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 0xc),0);
          *(undefined4 *)(this + 0xc) = 0;
        }
        *(undefined4 *)(this + 8) = 0;
        pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        F_007cbc20(pvVar1);
        uVar4 = 1;
      }
      else if (iVar3 == 0) {
        F_00885ea0(this);
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 2;
        return (uint)param_1;
      }
    }
  }
  else if (param_4 == 1) {
    if (iVar3 == 0) {
      pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      F_007cbc20(pvVar1);
    }
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 2;
    return (uint)param_1;
  }
  *(undefined1 *)(param_1 + 1) = uVar4;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentCreditScroll::vf1 */
uint F_008a3800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8a3800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined * pvVar1;
  int * piVar2;
  int iVar3;
  undefined1 uVar4;
  
  if ((*param_2 & 0xf) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_2 + 4);
  }
  uVar4 = 0;
  if (param_4 == 0) {
    if (-3 < iVar3) {
      if (iVar3 < 0) {
        if (*(int *)(this + 0xc) != 0) {
          piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
          ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 0xc),0);
          *(undefined4 *)(this + 0xc) = 0;
        }
        *(undefined4 *)(this + 8) = 0;
        pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        F_007cbc20(pvVar1);
        uVar4 = 1;
      }
      else if (iVar3 == 0) {
        F_00886080(this);
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 2;
        return (uint)param_1;
      }
    }
  }
  else if (param_4 == 1) {
    if (iVar3 == 0) {
      pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      F_007cbc20(pvVar1);
    }
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 2;
    return (uint)param_1;
  }
  *(undefined1 *)(param_1 + 1) = uVar4;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentCreditScroll::vf2 */
uint F_008a38d0(unsigned int gen_a0)
{
  GEN_ENTER(0x8a38d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined * pAVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar1 == '\0') {
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),3);
    uVar8 = 4;
    uVar7 = 0;
    uVar6 = 0;
    puVar4 = &(*(undefined4 *)(gen_frame + 0x4));
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    uVar3 = 1;
    uVar2 = 0xbe;
    pAVar5 = this;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = F_008668b0(this_00,uVar2,uVar3,puVar4,pAVar5,uVar6,uVar7,uVar8);
    *(uint *)(this + 8) = uVar1;
    uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return uVar1;
}

/* ref: FUN_008a3930 */
uint F_008a3930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a3930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  ushort uVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint * this_00;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  F_00886700(this,1,0);
  if (((*(char *)((int)this + 0x68) != '\0') || (*(int *)((int)this + 0x10) == 0)) ||
     (uVar4 = F_0055a350(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x70)))), (char)uVar4 == '\0')
     ) goto LAB_008a3b19;
  iVar5 = *(int *)((int)this + 0x48) - (uint)*(ushort *)((int)this + 0x3e);
  (*(int *)(gen_frame + 0xc)) = iVar5 >> 0x1f;
  uVar7 = (uint)((ulonglong)
                 ((longlong)iVar5 * (longlong)*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0xb0)))) /
                (ulonglong)(longlong)*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0xa8))));
  uVar4 = *(uint *)((int)this + 0x30);
  if ((uVar7 < uVar4) && (*(char *)((int)this + 0x69) < '\0')) {
    uVar6 = *(int *)((int)this + 0x2c) - 1;
    uVar8 = 0;
    if (uVar6 < *(uint *)((int)this + 0x34)) {
      uVar6 = *(uint *)((int)this + 0x34);
    }
    iVar5 = uVar7 - uVar4;
LAB_008a3afa: ;
    F_00784950(this,uVar6,iVar5,0,uVar8);
  }
  else {
    uVar7 = *(ushort *)((int)this + 0x3e) + uVar7;
    if ((uVar7 <= *(ushort *)((int)this + 0x4c) + uVar4) || (*(char *)((int)this + 0x69) < '\x01'))
    {
      *(undefined1 *)((int)this + 0x69) = 0;
      goto LAB_008a3b19;
    }
    if (uVar7 < *(uint *)((int)this + 0x48)) {
      uVar8 = 1;
      uVar6 = *(int *)((int)this + 0x2c) + 1;
      iVar5 = uVar7 - (*(ushort *)((int)this + 0x4c) + uVar4);
      if (*(uint *)((int)this + 0x38) < uVar6) {
        uVar6 = *(uint *)((int)this + 0x38);
      }
      goto LAB_008a3afa;
    }
    bVar1 = *(byte *)((int)this + 0x1c);
    *(undefined2 *)((int)this + 0x68) = 0x101;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(uint *)(gen_frame + 0x14)) = (uint)bVar1;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(undefined4 *)(gen_frame + 0x1c)) = 0x7fffffff;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
    uVar2 = *(ushort *)((int)this + 0x3e);
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
    (*(int *)(gen_frame + 0x2c)) = uVar2 + 1;
    uVar2 = *(ushort *)((int)this + 0x3c);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
    (*(uint *)(gen_frame + 0x34)) = (uint)uVar2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),2);
    (*(undefined1 *)(gen_frame + 0x3c)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),2);
    (*(undefined1 *)(gen_frame + 0x44)) = 1;
    piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x38)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,((undefined1 *)(gen_frame + 0x8)),0x16,7,&(*(undefined4 *)(gen_frame + 0x10)));
    F_005a2670(((undefined1 *)(gen_frame + 0x8)));
    this_00 = &(*(uint *)(gen_frame + 0x48));
    (*(int *)(gen_frame + 0xc)) = 6;
    do {
      this_00 = this_00 + -2;
      F_005a2670(this_00);
      iVar5 = (*(int *)(gen_frame + 0xc)) + -1;
      (*(int *)(gen_frame + 0xc)) = iVar5;
    } while (-1 < iVar5);
    *(undefined4 *)((int)this + 0xa4) = 0x7fffffff;
    *(undefined4 *)((int)this + 0xa8) = 0;
    *(uint *)((int)this + 0xac) = (uint)*(ushort *)((int)this + 0x3e);
    *(uint *)((int)this + 0xb0) = (uint)*(ushort *)((int)this + 0x3c);
  }
  *(undefined1 *)((int)this + 0x6a) = *(undefined1 *)((int)this + 0x68);
  *(undefined4 *)((int)this + 0x50) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0xb0)));
LAB_008a3b19: ;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return param_1;
}

/* ref: FUN_008a3b30 */
uint F_008a3b30(unsigned int gen_a0)
{
  GEN_ENTER(0x8a3b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  byte bVar2;
  int * piVar3;
  ushort uVar4;
  undefined2 extraout_var = 0;
  uint * this_00;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  *(undefined1 *)((int)this + 0xa1) = 1;
  *(undefined1 *)((int)this + 0x68) = 0;
  *(undefined1 *)((int)this + 0x6a) = 0;
  F_00886700(this,0,0);
  bVar2 = *(byte *)((int)this + 0x1c);
  *(undefined2 *)((int)this + 0x68) = 0xff01;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
  (*(uint *)(gen_frame + 0x14)) = (uint)bVar2;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0x7fffffff;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
  uVar4 = *(ushort *)((int)this + 0x3e);
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
  (*(int *)(gen_frame + 0x2c)) = uVar4 + 1;
  uVar4 = *(ushort *)((int)this + 0x3c);
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
  (*(uint *)(gen_frame + 0x34)) = (uint)uVar4;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),2);
  (*(undefined1 *)(gen_frame + 0x3c)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),2);
  (*(undefined1 *)(gen_frame + 0x44)) = 0;
  piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x38)));
  ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,((undefined1 *)(gen_frame + 0x8)),0x16,7,&(*(undefined4 *)(gen_frame + 0x10)));
  F_005a2670(((undefined1 *)(gen_frame + 0x8)));
  this_00 = &(*(uint *)(gen_frame + 0x48));
  (*(int *)(gen_frame + 0xc)) = 6;
  do {
    this_00 = this_00 + -2;
    F_005a2670(this_00);
    iVar1 = (*(int *)(gen_frame + 0xc)) + -1;
    (*(int *)(gen_frame + 0xc)) = iVar1;
  } while (-1 < iVar1);
  *(uint *)((int)this + 0xb0) = (uint)*(ushort *)((int)this + 0x3c);
  *(undefined4 *)((int)this + 0xa4) = 0x7fffffff;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(uint *)((int)this + 0xac) = (uint)*(ushort *)((int)this + 0x3e);
  uVar4 = F_005602f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x18) + 0x20c))),0,0,0);
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0xffffffff;
  *(undefined2 *)((int)this + 200) = 0xffff;
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return CONCAT22(extraout_var,uVar4);
}

/* ref: FUN_008a3c80 */
uint F_008a3c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a3c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((char)param_1 == '\0') {
    uVar4 = *(undefined4 *)((int)this + 0xcc);
    uVar3 = *(undefined4 *)((int)this + 0xd0);
  }
  else {
    uVar4 = *(undefined4 *)((int)this + 0xcc);
    uVar3 = *(undefined4 *)((int)this + 0xd4);
  }
  F_0059b300(*(undefined * PTR32 *)((int)this + 0x18),uVar3,uVar4,0);
  F_0055ad50(*(undefined * PTR32 *)((int)this + 8),0,0);
  uVar2 = F_008a3b30(this);
  if ((*((byte *)GEN_TOP((*(int *)((int)this + 4) + 0xfb))) & 2) != 0) {
    puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 4) + 0x120)));
    *puVar1 = *puVar1 & 0xffffffbf;
  }
  return uVar2;
}

/* ref: FUN_008a3ce0 */
byte F_008a3ce0(unsigned int gen_a0)
{
  GEN_ENTER(0x8a3ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  
  if (-1 < *(int *)((int)this + 0xc4)) {
    F_0059b300(*(undefined * PTR32 *)((int)this + 0x18),*(undefined4 *)((int)this + 0xd0),
                 *(undefined4 *)((int)this + 0xcc),0);
    F_0055ad50(*(undefined * PTR32 *)((int)this + 8),0,0);
    F_008a3b30(this);
    if ((*((byte *)GEN_TOP((*(int *)((int)this + 4) + 0xfb))) & 2) != 0) {
      puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 4) + 0x120)));
      *puVar1 = *puVar1 & 0xffffffbf;
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_008a3d40 */
byte F_008a3d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a3d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = F_00a34970(*(undefined * PTR32 *)(param_1 + 8),0x161);
  if (bVar2 == 0) {
    bVar2 = F_00a34970(*(undefined * PTR32 *)(param_1 + 8),0x162);
    if (bVar2 == 0) {
      uVar3 = F_0055a2d0(*(undefined4 *)((int)this + 8));
      if ((char)uVar3 == '\0') {
        F_0059b300(*(undefined * PTR32 *)((int)this + 0x18),*(undefined4 *)((int)this + 0xd0),
                     *(undefined4 *)((int)this + 0xcc),0);
        F_0055ad50(*(undefined * PTR32 *)((int)this + 8),0,0);
        F_008a3b30(this);
        if ((*((byte *)GEN_TOP((*(int *)((int)this + 4) + 0xfb))) & 2) != 0) {
          puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 4) + 0x120)));
          *puVar1 = *puVar1 & 0xffffffbf;
        }
      }
      return 1;
    }
  }
  F_0059b300(*(undefined * PTR32 *)((int)this + 0x18),*(undefined4 *)((int)this + 0xd0),
               *(undefined4 *)((int)this + 0xcc),0);
  F_0055ad50(*(undefined * PTR32 *)((int)this + 8),0,0);
  F_008a3b30(this);
  if ((*((byte *)GEN_TOP((*(int *)((int)this + 4) + 0xfb))) & 2) != 0) {
    puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 4) + 0x120)));
    *puVar1 = *puVar1 & 0xffffffbf;
  }
  return 0;
}

/* ref: FUN_008a3e40 */
uint F_008a3e40(unsigned int gen_a0)
{
  GEN_ENTER(0x8a3e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d6bdc));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  *(undefined4 *)((int)this + 0x1a8) = 0;
  uVar2 = F_004296a0(0x18,0,400);
  *(uint *)((int)this + 0x1a4) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1a4) + 4))) = *(int *)((int)this + 0x1a4);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x80;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc6;
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x5f ^ bVar1 | 0x20;
  return (uint)this;
}

/* ref: FUN_008a3f00 */
uint F_008a3f00(unsigned int gen_a0)
{
  GEN_ENTER(0x8a3f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_008a3e40(this);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x80;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc6;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d6f5c));
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x5f ^ bVar1 | 0x20;
  return (uint)this;
}

/* ref: FUN_008a3f50 */
uint F_008a3f50(unsigned int gen_a0)
{
  GEN_ENTER(0x8a3f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_008a3e40(this);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x80;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc6;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d706c));
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x5f ^ bVar1 | 0x20;
  return (uint)this;
}

/* ref: FUN_008a3fa0 */
uint F_008a3fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x8a3fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d717c));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined1 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  uVar2 = F_004296a0(0x14,0,400);
  *(uint *)((int)this + 400) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 400) + 4))) = *(int *)((int)this + 400);
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a8) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  *(undefined4 *)((int)this + 0x1b0) = 0;
  uVar2 = F_004296a0(0x18,0,400);
  *(uint *)((int)this + 0x1ac) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1ac) + 4))) = *(int *)((int)this + 0x1ac);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x80;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc6;
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x5f ^ bVar1 | 0x20;
  return (uint)this;
}

/* ref: FUN_008a4080 */
uint F_008a4080(unsigned int gen_a0)
{
  GEN_ENTER(0x8a4080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d6cec));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0x10001;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined1 *)((int)this + 0x1a4) = 0;
  F_0058d480((int)this + 0x1a8);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d8) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  *(undefined4 *)((int)this + 0x1e0) = 0;
  uVar2 = F_004296a0(0x18,0,400);
  *(uint *)((int)this + 0x1dc) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1dc) + 4))) = *(int *)((int)this + 0x1dc);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined2 *)((int)this + 0x1ec) = 0;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x80;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc6;
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x5f ^ bVar1 | 0x20;
  return (uint)this;
}

/* ref: FUN_008a4170 */
uint F_008a4170(unsigned int gen_a0)
{
  GEN_ENTER(0x8a4170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_008a4080(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d728c));
  return (uint)this;
}

/* ref: FUN_008a4190 */
uint F_008a4190(unsigned int gen_a0)
{
  GEN_ENTER(0x8a4190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_008a4080(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d739c));
  return (uint)this;
}

/* ref: FUN_008a41b0 */
uint F_008a41b0(unsigned int gen_a0)
{
  GEN_ENTER(0x8a41b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d74ac));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 400) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  *(undefined4 *)((int)this + 0x198) = 0;
  uVar2 = F_004296a0(0x18,0,400);
  *(uint *)((int)this + 0x194) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x194) + 4))) = *(int *)((int)this + 0x194);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x80;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc6;
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x5f ^ bVar1 | 0x20;
  return (uint)this;
}

/* ref: FUN_008a4250 */
uint F_008a4250(unsigned int gen_a0)
{
  GEN_ENTER(0x8a4250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10d6dfc));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 400) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  *(undefined4 *)((int)this + 0x198) = 0;
  uVar2 = F_004296a0(0x18,0,400);
  *(uint *)((int)this + 0x194) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x194) + 4))) = *(int *)((int)this + 0x194);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x80;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc6;
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x5f ^ bVar1 | 0x20;
  return (uint)this;
}

/* ref: FUN_008a42f0 */
uint F_008a42f0(unsigned int gen_a0)
{
  GEN_ENTER(0x8a42f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_008a4250(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10d75bc));
  *(undefined4 *)((int)this + 0x1a0) = 0;
  return (uint)this;
}

/* ref: FUN_008a4310 */
uint F_008a4310(unsigned int gen_a0)
{
  GEN_ENTER(0x8a4310u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_008a4250(this);
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10d76d4));
  return (uint)this;
}

/* ref: FUN_008a4330 */
uint F_008a4330(unsigned int gen_a0)
{
  GEN_ENTER(0x8a4330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_008a4250(this);
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[69])REFP(0x10d77ec));
  return (uint)this;
}

/* ref: FUN_008a4350 */
byte F_008a4350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x8a4350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x40;
  if (*(int *)(iVar2 + 400 + (int)this) != param_4) {
    if (param_4 == 0) {
      F_007eeef0(this,param_1);
      *(undefined4 *)((int)this + iVar2 + 400) = 0;
      return 1;
    }
    iVar1 = *(int *)((int)this + iVar2 + 0x198);
    if (iVar1 == 0) {
      F_00831fe0(this,param_1);
    }
    else if ((*(byte *)(iVar1 + 0xf9) & 1) != 0) {
      F_00887900(this,param_1,param_2,param_3,param_4,param_5);
      *(int *)((int)this + iVar2 + 400) = param_4;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_008a43d0 */
byte F_008a43d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8a43d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if ((short)param_1 == 5) {
    F_00888470(this,param_4);
  }
  else {
    if ((short)param_1 == 8) {
      F_00888400(this,param_4);
      return 1;
    }
    if ((short)param_1 != 9) {
      return 0;
    }
    if (*(char *)(param_4 + 6) == '\0') {
      (*(undefined4 *)(gen_frame + 0x4)) = 3;
      (*(undefined4 *)(gen_frame + 0x8)) = 0xd;
      F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
      F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
      return 1;
    }
  }
  return 1;
}

/* ref: Client::UI2::AddonMainCross::vf2 */
uint F_008a4450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8a4450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  uint uVar3;
  int iVar4;
  undefined * this_00;
  int iVar5;
  
  uVar2 = param_1 & 0xffff;
  if (0xb < uVar2) {
    if (uVar2 < 0xe) {
      uVar2 = F_008888e0(this,param_3,param_4);
      return uVar2;
    }
    if (uVar2 == 0x3d) {
      uVar2 = param_2 & 0xff;
      switch((unsigned int)(uintptr_t)(uVar2)) {
      case 0: ;
        bVar1 = F_005610b0(this + *(int *)(this + 0x48c) * 0x30 + 0x29c);
        uVar2 = CONCAT31(extraout_var,bVar1);
        if (bVar1 == 0) {
          F_0056c5f0(this + *(int *)(this + 0x48c) * 0x30 + 0x29c);
          uVar2 = F_00588f80(this + *(int *)(this + 0x48c) * 0x30 + 0x29c,0x3d,0,this,0);
        }
        break;
      case 1: ;
        break;
      case 2: ;
        if (*(int *)(this + 0x3bc) != 0) {
          iVar4 = (*((int *)GEN_TOP((this + *(int *)(this + 0x48c) * 0x14 + 0x1f0))) -
                  *((int *)GEN_TOP((this + *(int *)(this + 0x48c) * 0x14 + 0x1ec)))) / 0x14;
          uVar2 = 0;
          if (iVar4 != 0) {
            iVar5 = 0;
            do {
              bVar1 = F_005610b0(*(int *)(this + 0x3bc) + iVar5);
              uVar2 = CONCAT31(extraout_var_02,bVar1);
              if (bVar1 == 0) {
                F_0056c5f0(((undefined *)GEN_TOP((*(int *)(this + 0x3bc) + iVar5))));
                uVar2 = F_00588f80(((undefined *)GEN_TOP((*(int *)(this + 0x3bc) + iVar5))),0x3d,2,this,0);
              }
              iVar5 = iVar5 + 0x30;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            return uVar2;
          }
        }
        break;
      case 3: ;
        uVar3 = param_2 >> 8 & 0xff;
        this_00 = this + (uVar3 * 3 + 0x3f) * 0x10;
        bVar1 = F_005610b0(this_00);
        uVar2 = CONCAT31(extraout_var_00,bVar1);
        if (bVar1 == 0) {
          F_00588f80(this_00,0x3d,uVar3 * 0x100 + 3,this,0);
          uVar2 = F_0056c5f0(this_00);
          return uVar2;
        }
        break;
      case 4: ;
        bVar1 = F_005610b0(this + 0x3c0);
        uVar2 = CONCAT31(extraout_var_01,bVar1);
        if (bVar1 == 0) {
          F_0056c5f0(this + 0x3c0);
          uVar2 = F_00588f80(this + 0x3c0,0x3d,4,this,0);
          return uVar2;
        }
        break;
      default: ;
        goto switchD_008a447e_default;
      }
    }
  }
switchD_008a447e_default: ;
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyMemberRankOrderEdit::vf2 */
uint F_008a4600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8a4600u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  uint uVar1;
  uint uVar2;
  undefined * in_ecx;
  
  uVar1 = param_1 & 0xffff;
  if (0x11 < uVar1 - 0x17) {
    return uVar1 - 0x17;
  }
  uVar2 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x8a476c) + uVar1 + 1)));
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0x17: ;
    uVar1 = F_0088bd90(this,param_2,param_3,param_4);
    return uVar1;
  case 0x21: ;
    uVar1 = F_007f93b0(this,param_2,param_3,param_4);
    return uVar1;
  case 0x23: ;
    if (param_2 == 8) {
      if (*(int *)(param_4 + 8) == 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x78))))(*(int * PTR32 *)(this + 0x180));
      }
      uVar1 = F_00557670(param_3,0);
      return uVar1;
    }
    break;
  case 0x24: ;
    if (param_2 == 8) {
      F_00798960(this,*(undefined4 *)(param_4 + 8),(uint)(*(byte *)(param_4 + 0x11) >> 3 & 1));
      uVar1 = F_00557670(param_3,0);
      return uVar1;
    }
    break;
  case 0x25: ;
    if (param_2 == 8) {
      F_0059b390(this,*(undefined4 *)(this + 0x18c),1,0);
      uVar1 = F_00557670(param_3,0);
      return uVar1;
    }
    break;
  case 0x26: ;
    if (param_2 != 8) {
      return uVar2;
    }
    in_ecx = this + 0x1ec;
    goto LAB_008a474a;
  case 0x27: ;
    if (param_2 != 8) {
      return uVar2;
    }
    in_ecx = this + 0x198;
LAB_008a474a: ;
    uVar1 = F_0042a990(in_ecx);
    uVar2 = F_00584110(*(undefined * PTR32 *)(this + 0x194),uVar1);
    break;
  case 0x28: ;
    if ((param_2 == 8) && (uVar2 = *(uint *)(param_4 + 8), 0 < (int)uVar2)) {
      if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 0xd0))) <= (int)uVar2) {
        if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 0xd0))) < (int)uVar2) {
          F_0083b490(this);
        }
        uVar1 = F_00557670(param_3,0);
        return uVar1;
      }
      F_0083b340(this);
      uVar1 = F_00557670(param_3,0);
      return uVar1;
    }
  }
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyChest::vf2 */
uint F_008a47a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8a47a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 & 0xffff;
  uVar2 = uVar1 - 3;
  if (uVar2 < 0x32) {
    uVar2 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x8a4858) + uVar1 + 1)));
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 3: ;
      uVar2 = F_007f96e0(this,param_2,param_3,param_4);
      break;
    case 0x17: ;
      uVar1 = F_0088c2e0(this,param_2,param_3,param_4);
      return uVar1;
    case 0x2d: ;
      uVar1 = F_0088c340(this,param_2,param_3,param_4);
      return uVar1;
    case 0x2e: ;
      uVar1 = F_0088c3d0(this,param_2,param_3,param_4);
      return uVar1;
    case 0x30: ;
      uVar1 = F_007f9640(this,param_2,param_3,param_4);
      return uVar1;
    case 0x34: ;
      uVar1 = F_007f9690(this,param_2,param_3,param_4);
      return uVar1;
    }
  }
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyCrestEditor::vf52 */
byte F_008a4890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a4890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined * pAVar3;
  uint uVar4;
  byte local_5;
  
  local_5 = 0;
  switch((unsigned int)(uintptr_t)(*param_1)) {
  case 2: ;
    local_5 = 1;
    if (*(char *)(param_1 + 1) == '\0') {
      uVar2 = F_0055dcb0();
      uVar2 = F_0055b9e0(uVar2);
      uVar4 = 0;
      pAVar3 = this + 400;
      do {
        if (((*(int *)pAVar3 != 0) && (bVar1 = F_005615c0(*(int *)pAVar3,uVar2), bVar1 != 0)) &&
           (*(int *)(this + 0x1bc) != 0)) {
          uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1bc) + 0x3c))))(*(int * PTR32 *)(this + 0x1bc));
          if (uVar4 != 0) goto LAB_008a4a26;
          break;
        }
        uVar4 = uVar4 + 1;
        pAVar3 = pAVar3 + 4;
      } while (uVar4 < 3);
      uVar4 = 0;
      do {
        if ((*(int *)(this + uVar4 * 4 + 0x1b4) != 0) &&
           (bVar1 = F_005615c0(*(int *)(this + uVar4 * 4 + 0x1b4),uVar2), bVar1 != 0)) {
          if (uVar4 != 0) {
            F_00799d60(this,1,this + 0x200);
            break;
          }
          if (*(int *)(this + 0x1c0) != 0) {
            uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c0) + 0x3c))))(*(int * PTR32 *)(this + 0x1c0));
            if (uVar4 != 0) goto LAB_008a4a26;
            break;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 4);
      if (((*(int *)(this + 0x1c8) != 0) &&
          (bVar1 = F_005615c0(*(int *)(this + 0x1c8),uVar2), bVar1 != 0)) &&
         ((*((int *)GEN_TOP((this + *(int *)(this + 600) * 4 + 400))) != 0 &&
          (uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((this + *(int *)(this + 600) * 4 + 400))) + 0x3c))))
                             (*((int * PTR32 *)GEN_TOP((this + *(int *)(this + 600) * 4 + 400)))), uVar4 != 0)))) {
LAB_008a4a26: ;
        F_0059b340(this,uVar4,1,0);
      }
    }
    break;
  case 5: ;
    local_5 = 1;
    if (*(char *)(param_1 + 1) == '\0') {
      F_00799d60(this,5,this + 0x200);
      return 1;
    }
    break;
  case 0xf: ;
    local_5 = 1;
    if (*(char *)(param_1 + 1) != '\x02') {
      F_0088c420(this,(*(int *)(this + 0x25c) + 1 + *(uint *)(this + 0x260)) %
                        *(uint *)(this + 0x260));
      return 1;
    }
    break;
  case 0x10: ;
    local_5 = 1;
    if (*(char *)(param_1 + 1) != '\x02') {
      F_0088c420(this,(*(int *)(this + 0x25c) + -1 + *(uint *)(this + 0x260)) %
                        *(uint *)(this + 0x260));
      return 1;
    }
  }
  return local_5;
}

/* ref: FUN_008a4a80 */
uint F_008a4a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a4a80u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = (*(uint *)&gen_args[1]);
  if ((((*(uint *)&gen_args[1]) != 0) && ((*(int *)&gen_args[2]) != 0)) && (iVar1 = *(int *)((*(uint *)&gen_args[1]) + 0xf0), iVar1 != 0)) {
    puVar2 = *(uint * PTR32 *)(iVar1 + 0x20);
    uVar6 = puVar2[4];
    uVar7 = *puVar2;
    uVar3 = puVar2[5];
    uVar4 = puVar2[6];
    if ((uVar7 & 1) == 0) {
      F_00799e90((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1f8,puVar2[3],uVar6);
      F_00799e90((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x200,uVar3,uVar4);
    }
    else {
      F_00560080(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1f8))),puVar2[3]);
      F_005600b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1f8))),uVar6);
      F_00560080(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x200))),uVar3);
      F_005600b0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x200))),uVar4);
      uVar7 = uVar7 & 0xfffffffe;
      **(uint * PTR32 *)(iVar1 + 0x20) = uVar7;
      F_0083c5b0((*(undefined * PTR32 *)&gen_args[0]));
    }
    if ((uVar7 & 8) != 0) {
      F_0088c500((*(undefined * PTR32 *)&gen_args[0]));
      uVar7 = uVar7 & 0xfffffff7;
      **(uint * PTR32 *)(iVar1 + 0x20) = uVar7;
    }
    piVar5 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1bc)));
    if (piVar5 != (int *)0x0) {
      (*(uint *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[1]), 1, 3),(char)(uVar7 >> 4)) & 0xffffff01;
      ((code *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5,(*(uint *)&gen_args[1]));
      if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x278))) != (char)(*(uint *)&gen_args[1])) {
        *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x278))) = (char)(*(uint *)&gen_args[1]);
        F_0059d640(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))),
                     (-(uint)((char)(*(uint *)&gen_args[1]) != '\0') & 0xffffffac) + 0x65);
      }
    }
    piVar5 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1b8)));
    if (piVar5 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar5 + 0x28))(piVar5,(uint)((byte)(uVar7 >> 5) & 1));
    }
    F_0083c6f0((*(undefined * PTR32 *)&gen_args[0]));
    uVar6 = F_007fa8f0((*(undefined * PTR32 *)&gen_args[0]));
  }
  return uVar6;
}

/* ref: FUN_008a4bd0 */
uint F_008a4bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8a4bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint local_8;
  
  uVar4 = param_1 + *(int *)((int)this + 0x25c) * 0x18;
  uVar5 = *(uint *)((int)this + 600);
  if (uVar4 < (uint)(*(int *)((int)this + uVar5 * 0x10 + 0x20c) -
                     *(int *)((int)this + uVar5 * 0x10 + 0x208) >> 3)) {
    param_1 = -1;
    local_8 = 0xffffffff;
    if (uVar5 == 0) {
      if (uVar4 < (uint)(*(int *)((int)this + 0x20c) - *(int *)((int)this + 0x208) >> 3)) {
        F_0056bb00((undefined *)((int)this + 0x200),
                     (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x208) + uVar4 * 8))));
      }
      iVar1 = *(int *)((int)this + uVar5 * 0x10 + 0x208) + uVar4 * 8;
      uVar2 = *(ushort *)(iVar1 + 2);
      bVar3 = F_0056bbf0((int)this + 0x200);
      if (uVar2 <= bVar3) {
        F_007fa870(this,uVar2 - 1);
      }
      if (1 < *(ushort *)(iVar1 + 2)) {
        param_1 = 0;
        bVar3 = F_0056bb30((int)this + 0x200);
        local_8 = (uint)bVar3;
      }
    }
    else if (uVar5 == 1) {
      if (uVar4 < (uint)(*(int *)((int)this + 0x21c) - *(int *)((int)this + 0x218) >> 3)) {
        F_0056bb80((undefined *)((int)this + 0x200),
                     (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x218) + uVar4 * 8))));
      }
    }
    else if (uVar5 == 2) {
      if (uVar4 < (uint)(*(int *)((int)this + 0x22c) - *(int *)((int)this + 0x228) >> 3)) {
        F_0056bb40((undefined *)((int)this + 0x200),
                     (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x228) + uVar4 * 8))));
      }
      param_1 = 1;
      bVar3 = F_0056bb70((int)this + 0x200);
      local_8 = (uint)bVar3;
    }
    F_00799d60(this,3,(int)this + 0x200);
    if ((char)param_2 != '\0') {
      if (((param_1 != -1) && (local_8 != 0xffffffff)) && (param_3 != 1)) {
        F_00799cd0(this,param_1,local_8);
        uVar4 = F_007fa8f0(this);
        return uVar4;
      }
      F_00560050((undefined *)((int)this + 0x1f8),(int)this + 0x200);
      F_0083c5b0(this);
      F_00799d60(this,4,(undefined *)((int)this + 0x1f8));
    }
    uVar5 = F_007fa8f0(this);
  }
  return uVar5;
}

/* ref: FUN_008a4d90 */
unsigned int F_008a4d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a4d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (1 < *(uint *)((int)this + 0x260)) {
    if (param_1 == 0) {
      F_0088c420(this,(*(int *)((int)this + 0x25c) + -1 + *(uint *)((int)this + 0x260)) %
                        *(uint *)((int)this + 0x260));
      return 0;
    }
    if (param_1 == 1) {
      F_0088c420(this,(*(int *)((int)this + 0x25c) + 1 + *(uint *)((int)this + 0x260)) %
                        *(uint *)((int)this + 0x260));
    }
  }
  return 0;
}

/* ref: FUN_008a4df0 */
unsigned int F_008a4df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a4df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (1 < *(uint *)((int)this + 0x260)) {
    F_0088c420(this,param_1 % *(uint *)((int)this + 0x260));
  }
  return 0;
}

/* ref: FUN_008a4e20 */
uint F_008a4e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a4e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),1 < param_1);
  *(uint *)((int)this + 0x260) = param_1;
  uVar2 = 0;
  piVar3 = (int *)((int)this + 0x1d4);
  do {
    if (uVar2 < param_1) {
      (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),1);
      if (1 >= param_1) goto LAB_008a4e59;
    }
    else {
LAB_008a4e59: ;
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) & 0xffffff00;
    }
    if (*piVar3 == 0) {
      pvVar1 = (undefined *)0x0;
    }
    else {
      pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
    }
    F_0055a300(pvVar1,(*(uint *)(gen_frame + 0x8)));
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 1;
    if (8 < uVar2) {
      piVar3 = (int *)((int)this + 0x1cc);
      iVar4 = 2;
      do {
        if (*piVar3 == 0) {
          pvVar1 = (undefined *)0x0;
        }
        else {
          pvVar1 = *(undefined * PTR32 *)(*piVar3 + 0x70);
        }
        uVar2 = F_0055a300(pvVar1,(*(undefined4 *)(gen_frame + 0x4)));
        piVar3 = piVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      if (*(uint *)((int)this + 0x260) <= *(uint *)((int)this + 0x25c)) {
        uVar2 = F_0088c420(this,0);
      }
      return uVar2;
    }
  } while( true );
}

/* ref: Client::UI2::AddonFreeCompanyCrestColor::vf47 */
unsigned int F_008a4ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a4ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((byte)this[0xf9] & 1) != 0) {
    F_0088c5b0(this,param_1,param_2);
    return 0;
  }
  return 0;
}

/* ref: FUN_008a4ef0 */
uint F_008a4ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8a4ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 < (uint)(*(int *)((int)this + 0x1ac) - *(int *)((int)this + 0x1a8) >> 3)) {
    if (param_2 == 0) {
      if (param_1 < (uint)(*(int *)((int)this + 0x1ac) - *(int *)((int)this + 0x1a8) >> 3)) {
        F_0056bc40((int)this + 0x1a0,(uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x1a8) + param_1 * 8))));
      }
    }
    else if ((param_2 == 1) &&
            (param_1 < (uint)(*(int *)((int)this + 0x1ac) - *(int *)((int)this + 0x1a8) >> 3))) {
      F_0056bc80((int)this + 0x1a0,(uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x1a8) + param_1 * 8))));
    }
    if ((char)param_3 != '\0') {
      F_00560050((undefined *)((int)this + 0x198),(int)this + 0x1a0);
      F_0083c990(this);
      F_00799f70(this,3,(undefined *)((int)this + 0x198));
    }
    uVar1 = F_00799f70(this,2,(int)this + 0x1a0);
  }
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyCrestSymbolColor::vf47 */
unsigned int F_008a4fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a4fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((byte)this[0xf9] & 1) != 0) {
    F_0088c6d0(this,param_1,param_2);
    return 0;
  }
  return 0;
}

/* ref: FUN_008a4fd0 */
uint F_008a4fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a4fd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_1 < (uint)(*(int *)((int)this + 0x1ac) - *(int *)((int)this + 0x1a8) >> 3)) {
    F_0056bbc0((undefined *)((int)this + 0x1a0),
                 (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x1a8) + param_1 * 8))));
  }
  if ((char)param_2 != '\0') {
    F_00560050((undefined *)((int)this + 0x198),(int)this + 0x1a0);
    F_0083cb40(this);
    F_0079a1a0(this,3,(undefined *)((int)this + 0x198));
  }
  uVar1 = F_0079a1a0(this,2,(int)this + 0x1a0);
  return uVar1;
}

/* ref: Client::UI2::AddonJournal::vf2 */
uint F_008a5040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8a5040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  uVar4 = param_1 & 0xffff;
  uVar5 = uVar4 - 0xf;
  if (uVar5 < 0x30) {
    uVar5 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x8a51bc) + uVar4 + 1)));
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0xf: ;
      if (*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 4))) != (undefined *)0x0) {
        uVar5 = F_0083eee0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x188) + 4))),param_3,param_4);
        return uVar5;
      }
      break;
    case 0x17: ;
      F_00557670(param_3,0);
      uVar5 = param_2;
      if (5 < param_2) {
        if (param_2 < 8) {
          uVar5 = F_007fd4a0(this,param_2 - 6);
          return uVar5;
        }
        if (param_2 == 8) {
          bVar1 = F_005a9130(this,2);
          return CONCAT31(extraout_var,bVar1);
        }
      }
      break;
    case 0x1f: ;
      uVar5 = F_0083e210(this,param_4);
      return uVar5;
    case 0x20: ;
      bVar1 = F_0056b780(this,0);
      return CONCAT31(extraout_var_00,bVar1);
    case 0x21: ;
      uVar5 = param_2 - 1;
      if (uVar5 == 0) {
        uVar5 = F_0088d880(this,param_4);
        return uVar5;
      }
      break;
    case 0x23: ;
      F_00557670(param_3,0);
      if (param_2 == 0) {
        uVar5 = F_007fd5a0(this,param_4);
        return uVar5;
      }
      uVar5 = param_2 - 2;
      if (uVar5 == 0) {
        uVar5 = F_0083e1c0(this,param_4);
        return uVar5;
      }
      break;
    case 0x29: ;
      uVar5 = F_0079dc10(this,param_4);
      return uVar5;
    case 0x3e: ;
      uVar5 = F_00581000(this + 0x6c0,*param_4);
      if (((uVar5 != 0) && (*(int *)(uVar5 + 4) != 0)) && (uVar5 == *(uint *)(this + 0x188))) {
        uVar4 = F_0055e2f0(this,2);
        uVar2 = F_00559d70(uVar4);
        uVar3 = F_00559d90(uVar4);
        *(ushort *)(uVar5 + 0x28) = uVar2;
        *(ushort *)(uVar5 + 0x2a) = uVar3;
        uVar5 = F_007fd190(this);
      }
    }
  }
  return uVar5;
}

/* ref: FUN_008a54e0 */
unsigned int F_008a54e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a54e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 in_ecx;
  uint * puVar5;
  
  *(undefined * PTR32 *)((int)this + 0x1c0) = param_1;
  *(undefined4 *)((int)this + 0x1c4) = param_2;
  uVar2 = F_0055e2f0(param_1,0x2d);
  if (((uVar2 == 0) || (pvVar3 = (undefined *)F_00559c20(uVar2), pvVar3 == (undefined *)0x0)) ||
     (uVar2 = F_005613a0(pvVar3), uVar2 != 0)) {
    pvVar3 = (undefined *)0x0;
  }
  uVar2 = F_00561490(pvVar3,2);
  if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
     (uVar4 = F_005613a0(uVar2), uVar4 != 0xf)) {
    uVar2 = 0;
  }
  *(uint *)this = uVar2;
  uVar2 = F_00561490(pvVar3,3);
  F_00561990(*(undefined * PTR32 *)this,uVar2);
  uVar2 = F_0055e340(*(undefined * PTR32 *)((int)this + 0x1c0),0x21);
  *(uint *)((int)this + 4) = uVar2;
  uVar2 = F_0055e340(*(undefined * PTR32 *)((int)this + 0x1c0),0x24);
  *(uint *)((int)this + 8) = uVar2;
  uVar2 = F_0055e340(*(undefined * PTR32 *)((int)this + 0x1c0),0x27);
  *(uint *)((int)this + 0xc) = uVar2;
  uVar2 = F_0055e340(*(undefined * PTR32 *)((int)this + 0x1c0),0x2a);
  *(uint *)((int)this + 0x10) = uVar2;
  uVar2 = F_0055e340(*(undefined * PTR32 *)((int)this + 0x1c0),0x2b);
  *(uint *)((int)this + 0x14) = uVar2;
  uVar2 = F_0055e360(*(undefined * PTR32 *)((int)this + 0x1c0),0x31);
  *(uint *)((int)this + 0x18) = uVar2;
  uVar2 = F_0055e340(*(undefined * PTR32 *)((int)this + 0x1c0),0x2f);
  *(uint *)((int)this + 0x1c) = uVar2;
  uVar2 = F_0055e340(*(undefined * PTR32 *)((int)this + 0x1c0),0x30);
  *(uint *)((int)this + 0x20) = uVar2;
  uVar2 = F_0055e2f0(*(undefined * PTR32 *)((int)this + 0x1c0),0x33);
  *(uint *)((int)this + 0x24) = uVar2;
  uVar2 = F_0055e360(*(undefined * PTR32 *)((int)this + 0x1c0),0x37);
  *(uint *)((int)this + 0x28) = uVar2;
  uVar2 = F_0055e340(*(undefined * PTR32 *)((int)this + 0x1c0),0x35);
  *(uint *)((int)this + 0x2c) = uVar2;
  uVar2 = F_0055e340(*(undefined * PTR32 *)((int)this + 0x1c0),0x36);
  *(uint *)((int)this + 0x30) = uVar2;
  uVar2 = F_0055e2f0(*(undefined * PTR32 *)((int)this + 0x1c0),0x39);
  *(uint *)((int)this + 0x34) = uVar2;
  param_1 = (undefined *)0x0;
  puVar5 = (uint *)((int)this + 0x40);
  do {
    uVar2 = F_0055e2f0(*(undefined * PTR32 *)((int)this + 0x1c0),(int)param_1 + 0x3f);
    pvVar3 = (undefined *)F_00559c20(uVar2);
    if (pvVar3 != (undefined *)0x0) {
      puVar5[-1] = *(uint *)((int)pvVar3 + 0x70);
      puVar5[-2] = (uint)pvVar3;
      uVar2 = F_00561530(pvVar3,0x10);
      *puVar5 = uVar2;
      uVar2 = F_00561530(pvVar3,2);
      puVar5[1] = uVar2;
      uVar2 = F_00561490(pvVar3,3);
      if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
         (uVar4 = F_005613a0(uVar2), uVar4 != 0xf)) {
        uVar2 = 0;
      }
      puVar5[2] = uVar2;
      F_0055b080(uVar2 + 0x78);
      uVar2 = F_00561490(pvVar3,4);
      F_00561990((undefined *)puVar5[2],uVar2);
      uVar2 = F_00561530(pvVar3,0xb);
      puVar5[3] = uVar2;
      uVar2 = F_00561530(pvVar3,0xe);
      puVar5[4] = uVar2;
      uVar2 = F_00561490(pvVar3,10);
      if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
         (uVar4 = F_005613a0(uVar2), uVar4 != 1)) {
        uVar2 = 0;
      }
      puVar5[6] = uVar2;
      uVar2 = F_00561490(pvVar3,0xd);
      if (((uVar2 == 0) || (uVar2 = F_00559c20(uVar2), uVar2 == 0)) ||
         (uVar4 = F_005613a0(uVar2), uVar4 != 1)) {
        uVar2 = 0;
      }
      puVar5[7] = uVar2;
      uVar2 = F_00561530(pvVar3,5);
      puVar5[5] = uVar2;
      F_007a0950(this,param_1,0);
    }
    param_1 = (undefined *)((int)param_1 + 1);
    puVar5 = puVar5 + 0xe;
  } while (param_1 < 6);
  F_00584110(*(undefined * PTR32 *)((int)this + 4),"");
  F_00584110(*(undefined * PTR32 *)((int)this + 8),"");
  F_00584110(*(undefined * PTR32 *)((int)this + 0xc),"");
  F_00584110(*(undefined * PTR32 *)((int)this + 0x10),"");
  F_007a0af0(this,0);
  F_008429d0(this,0);
  F_0058d590(*(undefined * PTR32 *)this);
  iVar1 = *(int *)((int)this + 0x1c4);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x38))))(*(int * PTR32 *)this);
  F_00596b10((undefined *)(iVar1 + 0xe0),uVar2);
  in_ecx = 0;
  if (*(int *)this != 0) {
    in_ecx = *(undefined4 *)(*(int *)this + 0x70);
  }
  F_0055a3c0(in_ecx,1);
  if (this != (undefined *)0xffffffc8) {
    *(undefined4 *)((int)this + 0x1bc) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x40) + 0x90)));
  }
  return 0;
}

/* ref: Client::UI2::AddonRecipeNoteBook::vf44 */
uint F_008a5810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a5810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  byte * pbVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined * pvVar4;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(byte * PTR32 *)(gen_frame + 0x30)) = param_2;
  if (param_2 == (byte *)0x0) goto LAB_008a5bcf;
  F_00843040(this + 0x180,this);
  uVar2 = F_0055dcb0();
  F_008a54e0(this + 0x218,this,uVar2);
  if ((*param_2 & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 4);
  }
  *(undefined4 *)(this + 0x150c) = uVar3;
  F_00801df0(this + 0x180,uVar3,0x17,1);
  F_005624c0(*(undefined * PTR32 *)(this + 0x208),1,0,0);
  F_005624c0(*(undefined * PTR32 *)(this + 0x20c),1,0,0);
  F_005624c0(*(undefined * PTR32 *)(this + 0x210),1,0,1);
  if (*(int *)(this + 0x208) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x208) + 0x70)));
  }
  F_00568380(pvVar4,0x24,7,this,0,0);
  if (*(int *)(this + 0x208) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x208) + 0x70)));
  }
  F_00568380(pvVar4,0x21,9,this,0,0);
  if (*(int *)(this + 0x208) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x208) + 0x70)));
  }
  F_00568380(pvVar4,0x11,0xe,this,0,0);
  if (*(int *)(this + 0x20c) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x20c) + 0x70)));
  }
  F_00568380(pvVar4,0x24,8,this,0,0);
  if (*(int *)(this + 0x20c) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x20c) + 0x70)));
  }
  F_00568380(pvVar4,0x21,10,this,0,0);
  if (*(int *)(this + 0x20c) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x20c) + 0x70)));
  }
  F_00568380(pvVar4,0x11,0xf,this,0,0);
  if (*(int *)(this + 0x210) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x210) + 0x70)));
  }
  F_00568380(pvVar4,0x24,0xb,this,0,0);
  if (*(int *)(this + 0x210) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x210) + 0x70)));
  }
  F_00568380(pvVar4,0x21,0xc,this,0,0);
  if (*(int *)(this + 0x210) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x210) + 0x70)));
  }
  F_00568380(pvVar4,0x25,0xd,this,0,0);
  if (*(int *)(this + 0x210) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x210) + 0x70)));
  }
  F_00568380(pvVar4,0x1f,5,this,0,0);
  if (*(int *)(this + 0x210) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x210) + 0x70)));
  }
  F_00568380(pvVar4,0x20,6,this,0,0);
  F_00801bf0(this + 0x218,0x17,2);
  if (*(int *)(this + 0x1fc) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1fc) + 0x70)));
  }
  F_00568380(pvVar4,0x17,3,this,0,0);
  if (*(int *)(this + 0x1f8) == 0) {
    pvVar4 = (undefined *)0x0;
  }
  else {
    pvVar4 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1f8) + 0x70)));
  }
  F_00568380(pvVar4,0x17,4,this,0,0);
  F_007a0da0(this + 0x180,(*(byte * PTR32 *)(gen_frame + 0x30)),1);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 4;
  (*(undefined4 *)(gen_frame + 0x18)) = 2;
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = this;
  (*(gen_code32 *)(gen_frame + 0x38)) = ((code *)REFP(0x7a12a0));
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_00574320(*(undefined * PTR32 *)(this + 0x208),&(*(undefined * PTR32 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0xc)),2,0);
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 4;
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = this;
  (*(gen_code32 *)(gen_frame + 0x38)) = ((code *)REFP(0x7a12e0));
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_00574320(*(undefined * PTR32 *)(this + 0x20c),&(*(undefined * PTR32 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x24)),1,0);
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = 0;
  (*(undefined4 *)(gen_frame + 0x6c)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x7c)) = 0;
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(undefined4 *)(gen_frame + 0x88)) = 0;
  (*(undefined4 *)(gen_frame + 0x90)) = 0;
  (*(undefined4 *)(gen_frame + 0x94)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 7;
  (*(undefined4 *)(gen_frame + 0x50)) = 8;
  (*(undefined4 *)(gen_frame + 0x5c)) = 10;
  (*(undefined4 *)(gen_frame + 0x68)) = 9;
  (*(undefined4 *)(gen_frame + 0x74)) = 2;
  (*(undefined4 *)(gen_frame + 0x80)) = 4;
  (*(undefined4 *)(gen_frame + 0x8c)) = 6;
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = this;
  (*(gen_code32 *)(gen_frame + 0x38)) = ((code *)REFP(0x802360));
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  F_00574320(*(undefined * PTR32 *)(this + 0x210),&(*(undefined * PTR32 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x44)),7,0);
  pbVar1 = (*(byte * PTR32 *)(gen_frame + 0x30));
  *((undefined1 *)GEN_TOP((*(int *)(this + 0x210) + 0x11e))) = 1;
  if ((((*(byte * PTR32 *)(gen_frame + 0x30))[0x68] & 0xf) == 0) || (*(int *)((*(byte * PTR32 *)(gen_frame + 0x30)) + 0x6c) == 0)) {
    *(undefined4 *)(this + 0x14e4) = 0;
LAB_008a5bab: ;
    uVar3 = 0x18ace;
  }
  else {
    *(undefined4 *)(this + 0x14e4) = 1;
    F_0059b390(this,*(undefined4 *)(this + 0x210),1,0);
    if ((*(int *)(this + 0x14e4) == 0) || (*(int *)(this + 0x14e4) == 2)) goto LAB_008a5bab;
    uVar3 = 0x184;
  }
  F_0056b630(this,uVar3,7,0,9,0,0);
  ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,pbVar1);
LAB_008a5bcf: ;
  F_005a91d0(this,1,0x1c);
  uVar2 = F_005a91d0(this,0,0x19);
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c));
  return uVar2;
}

/* ref: Client::UI2::AddonRecipeNoteBook::vf52 */
byte F_008a5c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a5c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  (*(byte *)(gen_frame + 0x1b)) = 0;
  switch((unsigned int)(uintptr_t)(*param_1)) {
  case 2: ;
    if (*(int *)(this + 0x14e4) == 3) {
      (*(byte *)(gen_frame + 0x1b)) = 1;
      *(undefined4 *)(this + 0x14e4) = 1;
      F_0059b390(this,*(undefined4 *)(this + 0x210),1,0);
      if ((*(int *)(this + 0x14e4) == 0) || (*(int *)(this + 0x14e4) == 2)) {
        uVar5 = 0x18ace;
      }
      else {
        uVar5 = 0x184;
      }
      F_0056b630(this,uVar5,7,0,9,0,0);
      uVar3 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x0)),3);
      F_005a2670(((undefined1 *)(gen_frame + 0x0)));
      return (*(byte *)(gen_frame + 0x1b));
    }
    break;
  case 3: ;
  case 4: ;
  case 6: ;
  case 7: ;
  case 8: ;
  case 9: ;
  case 10: ;
  case 0xb: ;
  case 0xc: ;
  case 0xd: ;
  case 0xe: ;
    break;
  case 5: ;
    if ((*(int *)(this + 0x14e4) != 0) && (*(int *)(this + 0x14e4) != 2)) {
      (*(byte *)(gen_frame + 0x1b)) = 1;
      F_005a9130(this,6);
    }
    break;
  case 0xf: ;
    (*(byte *)(gen_frame + 0x1b)) = 1;
    iVar2 = 0;
    iVar4 = *(int *)(this + 0x150c);
    do {
      iVar4 = iVar4 + 1;
      if (7 < iVar4) {
        iVar4 = 0;
      }
      if ((*(uint *)(this + 0x1508) & 1 << ((byte)iVar4 & 0x1f)) != 0) goto LAB_008a5c5d;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    iVar4 = 0;
LAB_008a5c5d: ;
    if (((*(int *)(this + 0x150c) < iVar4) || (*(char *)(param_1 + 1) != '\x02')) &&
       (bVar1 = F_0088e770(this,iVar4), bVar1 != 0)) {
      uVar3 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x10)),0xd);
      F_005a2670(((undefined1 *)(gen_frame + 0x10)));
      return (*(byte *)(gen_frame + 0x1b));
    }
    break;
  case 0x10: ;
    (*(byte *)(gen_frame + 0x1b)) = 1;
    iVar2 = 0;
    iVar4 = *(int *)(this + 0x150c);
    do {
      iVar4 = iVar4 + -1;
      if (iVar4 < 0) {
        iVar4 = 7;
      }
      if ((*(uint *)(this + 0x1508) & 1 << ((byte)iVar4 & 0x1f)) != 0) goto LAB_008a5cdb;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
    iVar4 = 0;
LAB_008a5cdb: ;
    if (((iVar4 < *(int *)(this + 0x150c)) || (*(char *)(param_1 + 1) != '\x02')) &&
       (bVar1 = F_0088e770(this,iVar4), bVar1 != 0)) {
      uVar3 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x8)),0xd);
      F_005a2670(((undefined1 *)(gen_frame + 0x8)));
      return (*(byte *)(gen_frame + 0x1b));
    }
    break;
  default: ;
    goto switchD_008a5c27_default;
  }
switchD_008a5c27_default: ;
  return (*(byte *)(gen_frame + 0x1b));
}

/* ref: FUN_008a5e00 */
uint F_008a5e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a5e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  uVar2 = F_00557670(param_1,0);
  if (*(int *)(param_1 + 4) != 0) {
    uVar2 = F_00559c20(*(int *)(param_1 + 4));
    if (uVar2 != 0) {
      uVar3 = F_005613a0(uVar2);
      if (uVar3 == 4) {
        bVar1 = F_0088e770(this,**(undefined4 * PTR32 *)(uVar2 + 0x110));
        return CONCAT31(extraout_var,bVar1);
      }
    }
    bVar1 = F_0088e770(this,0xffffffff);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
  }
  return uVar2;
}

/* ref: Client::UI2::AddonContentsFinder::vf44 */
uint F_008a5e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a5e60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int * piVar7;
  uint uVar8;
  undefined * this_00;
  uint3 uVar9;
  undefined * pvVar10;
  byte bVar11;
  undefined * pAVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  if ((this[0x1c0] == (undefined1)0x0) || (*(int *)(this + 0x1a4) == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = F_0093f170(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a8) + 0x14))),REFG(undefined * PTR32, 0x132840c),0,0,
                         *((ushort *)GEN_TOP((*(int *)(this + 0x1a4) + 0xf6))) & 0xf,0);
    uVar4 = F_00594fc0(this + 0x18c,uVar4,1,0,0,uVar4,0,1,0,0);
    if ((uVar4 != 0) && (*(int *)(uVar4 + 4) != 0)) {
      *((undefined1 *)GEN_TOP((*(int *)(uVar4 + 4) + 0x13b))) = *((undefined1 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x13a)))
      ;
    }
  }
  *(uint *)(this + 0x1c4) = uVar4;
  uVar4 = F_0055e2f0(this,0x28);
  if (((uVar4 == 0) || (uVar4 = F_00559c20(uVar4), uVar4 == 0)) ||
     (uVar5 = F_005613a0(uVar4), uVar5 != 1)) {
    uVar4 = 0;
  }
  *(uint *)(this + 0x1cc) = uVar4;
  uVar4 = F_0055e2f0(this,0x29);
  if (((uVar4 == 0) || (uVar4 = F_00559c20(uVar4), uVar4 == 0)) ||
     (uVar5 = F_005613a0(uVar4), uVar5 != 1)) {
    uVar4 = 0;
  }
  *(uint *)(this + 0x1d0) = uVar4;
  uVar4 = F_0055e2f0(this,0x11);
  if (((uVar4 == 0) || (uVar4 = F_00559c20(uVar4), uVar4 == 0)) ||
     (uVar5 = F_005613a0(uVar4), uVar5 != 3)) {
    uVar4 = 0;
  }
  *(uint *)(this + 0x1d4) = uVar4;
  uVar4 = F_0055e340(this,5);
  *(uint *)(this + 0x1fc) = uVar4;
  uVar4 = F_0055e340(this,6);
  *(uint *)(this + 0x200) = uVar4;
  uVar4 = F_0055e340(this,4);
  *(uint *)(this + 0x204) = uVar4;
  uVar4 = F_0055e340(this,0xf);
  *(uint *)(this + 0x208) = uVar4;
  uVar4 = F_0055e340(this,0x27);
  *(uint *)(this + 0x20c) = uVar4;
  uVar4 = F_0055e380(this,7);
  *(uint *)(this + 0x214) = uVar4;
  uVar4 = F_0055e340(this,0x22);
  *(uint *)(this + 0x210) = uVar4;
  uVar2 = F_00559d70(*(undefined4 *)(this + 0x200));
  uVar3 = F_00559d70(*(undefined4 *)(this + 0x1fc));
  *(ushort *)(this + 0x734) = uVar2 - uVar3;
  uVar4 = F_0055dcb0();
  uVar4 = F_0055b9a0(uVar4);
  if (*(int *)(uVar4 + 8) != 0) {
    F_007a2690(this,*(int *)(uVar4 + 8));
  }
  ((byte *)(gen_frame + 0x0))[0x10] = 1;
  ((byte *)(gen_frame + 0x0))[0x10] = 1;
  if ((*(byte *)(param_2 + 0x10) & 0xf) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(param_2 + 0x14);
  }
  this[0x736] = (undefined1)(iVar6 != 0);
  if (iVar6 != 0) {
    F_0059d6a0(this,0x11,1,0);
    uVar4 = F_0055e2f0(this,0x1f);
    if (((uVar4 == 0) || (uVar4 = F_00559c20(uVar4), uVar4 == 0)) ||
       (uVar5 = F_005613a0(uVar4), uVar5 != 0xc)) {
      uVar4 = 0;
    }
    *(uint *)(this + 0x1c8) = uVar4;
    pvVar10 = (undefined *)0x0;
    if (uVar4 != 0) {
      pvVar10 = *(undefined * PTR32 *)(uVar4 + 0x70);
    }
    F_00568380(pvVar10,0x21,0,this,0,0);
  }
  else {
    F_0059d6a0(this,0x65,1,0);
    uVar4 = F_0055e2f0(this,0x20);
    if (((uVar4 == 0) || (uVar4 = F_00559c20(uVar4), uVar4 == 0)) ||
       (uVar5 = F_005613a0(uVar4), uVar5 != 0xc)) {
      uVar4 = 0;
    }
    uVar13 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16));
    *(uint *)(this + 0x1c8) = uVar4;
    ((byte *)(gen_frame + 0x0))[0x10] = 0;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) = uVar13 & 0xffffff00;
  }
  if (*(int *)(this + 0x1c8) == 0) {
    pvVar10 = (undefined *)0x0;
  }
  else {
    pvVar10 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c8) + 0x70)));
  }
  F_00568380(pvVar10,0x23,1,this,0,0);
  pvVar10 = (undefined *)0x0;
  if (*(int *)(this + 0x1c8) != 0) {
    pvVar10 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c8) + 0x70)));
  }
  F_00568380(pvVar10,0x29,2,this,0,0);
  pvVar10 = (undefined *)0x0;
  if (*(int *)(this + 0x1c8) != 0) {
    pvVar10 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c8) + 0x70)));
  }
  F_0055a300(pvVar10,0);
  F_0088ee20(this);
  uVar2 = F_0056d300(*(undefined * PTR32 *)(this + 0x1c8),4);
  iVar6 = 0;
  if (uVar2 != 0) {
    do {
      uVar4 = F_0056d250(*(undefined * PTR32 *)(this + 0x1c8),4,iVar6);
      if (uVar4 != 0) {
        uVar14 = 0;
        uVar13 = 1;
        pvVar10 = (undefined *)F_0056d250(*(undefined * PTR32 *)(this + 0x1c8),4,iVar6);
        F_00561ee0(pvVar10,uVar13,uVar14);
      }
      iVar6 = iVar6 + 1;
    } while ((ushort)iVar6 < uVar2);
  }
  if ((*(byte *)(param_2 + 0x90) & 0xf) == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined4 *)(param_2 + 0x94);
  }
  if ((*(byte *)(param_2 + 0xf8) & 0xf) == 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)0x0;
  }
  else {
    iVar6 = *(int *)(param_2 + 0xfc);
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)iVar6;
    if (iVar6 != 0) {
      F_00597190(*(undefined * PTR32 *)(this + 0x1c8),param_1,param_2,0x20,0x1a0,3,2,iVar6,this + 0x180);
      pvVar10 = (undefined *)0x0;
      if (*(int *)(this + 0x1c8) != 0) {
        pvVar10 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c8) + 0x70)));
      }
      F_0055a300(pvVar10,1);
      F_0058e350(*(undefined * PTR32 *)(this + 0x1c8),uVar13,1);
      pAVar12 = this + 0x218;
      iVar6 = param_2 + 0x1500;
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0xa1;
      do {
        F_00596cd0(pAVar12,iVar6);
        iVar6 = iVar6 + 8;
        pAVar12 = pAVar12 + 8;
        iVar1 = (int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + -1;
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)iVar1;
      } while (iVar1 != 0);
      F_00803690(this);
      uVar13 = 0x11;
      goto LAB_008a629f;
    }
  }
  if ((*(byte *)(param_2 + 0x1a30) & 0xf) == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined4 *)(param_2 + 0x1a34);
  }
  F_00584110(*(undefined * PTR32 *)(this + 0x210),uVar13);
  pvVar10 = (undefined *)0x0;
  if (*(int *)(this + 0x1c8) != 0) {
    pvVar10 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c8) + 0x70)));
  }
  F_0055a300(pvVar10,0);
  piVar7 = *(int * PTR32 *)(this + 0x1c8);
  if (-1 < piVar7[0x33]) {
    ((code *)*(gen_code32 *)(*piVar7 + 0x74))(piVar7,0xfffffffe,0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c8) + 0x78))))(*(int * PTR32 *)(this + 0x1c8));
  }
  uVar13 = 0x66;
LAB_008a629f: ;
  F_0059d6a0(this,uVar13,0,0);
  *(undefined * PTR32 *)(this + 0x724) = (*(undefined * PTR32 *)(gen_frame + 0x14));
  if (*(int *)(this + 0x1d4) == 0) {
    pvVar10 = (undefined *)0x0;
  }
  else {
    pvVar10 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1d4) + 0x70)));
  }
  F_00568380(pvVar10,0x17,6,this,0,0);
  pvVar10 = (undefined *)0x0;
  if (*(int *)(this + 0x1cc) != 0) {
    pvVar10 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1cc) + 0x70)));
  }
  F_00568380(pvVar10,0x17,3,this,0,0);
  pvVar10 = (undefined *)0x0;
  if (*(int *)(this + 0x1d0) != 0) {
    pvVar10 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1d0) + 0x70)));
  }
  F_00568380(pvVar10,0x17,4,this,0,0);
  if ((*(byte *)(param_2 + 0x18) & 0xf) == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined4 *)(param_2 + 0x1c);
  }
  *(undefined4 *)(this + 0x728) = uVar13;
  if ((*(byte *)(param_2 + 0x28) & 0xf) == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined4 *)(param_2 + 0x2c);
  }
  *(undefined4 *)(this + 0x72c) = uVar13;
  if ((*(byte *)(param_2 + 0x38) & 0xf) == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined4 *)(param_2 + 0x3c);
  }
  F_00589280(*(undefined * PTR32 *)(this + 0x1cc),uVar13);
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0)) = *(int *)(this + 0x72c) != 0;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x14)), 1, 3),*(int *)(this + 0x72c) != 0)));
  pvVar10 = (undefined *)0x0;
  if (*(int *)(this + 0x1cc) != 0) {
    pvVar10 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1cc) + 0x70)));
  }
  F_0055a300(pvVar10,(*(undefined * PTR32 *)(gen_frame + 0x14)));
  if ((*(byte *)(param_2 + 0x20) & 0xf) == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined4 *)(param_2 + 0x24);
  }
  *(undefined4 *)(this + 0x730) = uVar13;
  if ((*(byte *)(param_2 + 0x30) & 0xf) == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined4 *)(param_2 + 0x34);
  }
  F_00589280(*(undefined * PTR32 *)(this + 0x1d0),uVar13);
  (*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0)) = *(int *)(this + 0x730) != 0;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = ((undefined *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined * PTR32 *)(gen_frame + 0x14)), 1, 3),*(int *)(this + 0x730) != 0)));
  if (*(int *)(this + 0x1d0) == 0) {
    pvVar10 = (undefined *)0x0;
  }
  else {
    pvVar10 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1d0) + 0x70)));
  }
  F_0055a300(pvVar10,(*(undefined * PTR32 *)(gen_frame + 0x14)));
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)0x11;
  uVar4 = F_0055dcb0();
  piVar7 = (int *)F_0055b990(uVar4);
  iVar6 = *((int *)GEN_TOP((*(int *)(*piVar7 + 0x20) + 0x44)));
  if ((iVar6 == 4) || (iVar6 == 5)) {
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)0x65;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this + 0x1d8;
  uVar4 = 0;
  do {
    uVar5 = F_0055e2f0(this,*(undefined4 *)((int)&REFG(undefined4, 0x10c1bf0) + uVar4));
    if (((uVar5 == 0) || (uVar5 = F_00559c20(uVar5), uVar5 == 0)) ||
       (uVar8 = F_005613a0(uVar5), uVar8 != 3)) {
      uVar5 = 0;
    }
    *(uint *)(*(undefined * PTR32 *)(gen_frame + 0x18)) = uVar5;
    if (uVar5 == 0) {
      pvVar10 = (undefined *)0x0;
    }
    else {
      pvVar10 = *(undefined * PTR32 *)(uVar5 + 0x70);
    }
    F_00568380(pvVar10,0x17,5,this,0,0);
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)(gen_frame + 0x18)) + 4;
    uVar4 = uVar4 + 4;
  } while (uVar4 < 0x10);
  pAVar12 = (*(undefined * PTR32 *)(gen_frame + 0x14));
  pvVar10 = (undefined *)F_0055e2f0(this,0x12);
  F_0059d670(pvVar10,pAVar12);
  uVar4 = F_0055dcb0();
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)) = uVar4 + 0xe0;
  F_00560760(((byte *)(gen_frame + 0x0)));
  if ((*(byte *)(param_2 + 0xa8) & 0xf) == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined4 *)(param_2 + 0xac);
  }
  uVar4 = 0;
  *(undefined4 *)(this + 0x720) = uVar13;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = this + 0x1e8;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)(param_2 + 0xac);
  do {
    uVar5 = F_0055e2f0(this,(&REFG(undefined4, 0x10c1c30))[uVar4]);
    if (uVar5 == 0) {
      this_00 = (undefined *)0x0;
      pvVar10 = (undefined *)0x0;
    }
    else {
      this_00 = (undefined *)F_00559c20(uVar5);
      if ((this_00 == (undefined *)0x0) || (uVar5 = F_005613a0(this_00), uVar5 != 4)) {
        this_00 = (undefined *)0x0;
      }
      if (this_00 == (undefined *)0x0) {
        pvVar10 = (undefined *)0x0;
      }
      else {
        pvVar10 = *(undefined * PTR32 *)((int)this_00 + 0x70);
      }
    }
    F_00568380(pvVar10,0x17,uVar4 + 7,this,0,0);
    if (uVar4 != 0) {
      if ((*(byte *)((*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x195c) & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(uint *)((*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x1960);
        if (4 < uVar5) goto LAB_008a6579;
      }
      uVar13 = (&REFG(undefined4, 0x10c1c44))[uVar5];
      pvVar10 = (undefined *)F_00561490(this_00,3);
      F_0059d670(pvVar10,uVar13);
      if ((*(byte *)((*(undefined * PTR32 *)(gen_frame + 0x18)) + -4) & 0xf) == 0) {
        (*(undefined1 *)((char *)&uVar13 + 0)) = 0;
        (*(undefined1 *)((char *)&uVar13 + 1)) = 0;
        (*(undefined1 *)((char *)&uVar13 + 2)) = 0;
        (*(undefined1 *)((char *)&uVar13 + 3)) = 0;
      }
      else {
        uVar13 = *(undefined4 *)(*(undefined * PTR32 *)(gen_frame + 0x18));
      }
      ((byte *)(gen_frame + 0x0))[0] = (byte)uVar13;
      ((byte *)(gen_frame + 0x0))[1] = SUB41(uVar13,1);
      ((byte *)(gen_frame + 0x0))[2] = SUB41(uVar13,2);
      ((byte *)(gen_frame + 0x0))[3] = SUB41(uVar13,3);
      if (this_00 == (undefined *)0x0) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined4 *)((int)this_00 + 0x70);
      }
      F_00590ad0((undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 12)),2,(uint)(byte)this[0x13a],uVar13,((byte *)(gen_frame + 0x0)));
    }
LAB_008a6579: ;
    if (uVar4 == *(uint *)(this + 0x720)) {
      F_0059dde0(this_00,1);
    }
    (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)(gen_frame + 0x18)) + 8;
    *(undefined * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x14)) = this_00;
    uVar4 = uVar4 + 1;
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 *)(gen_frame + 0x14)) + 4;
    if (4 < uVar4) {
      (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)0x1;
      pAVar12 = this + 0x1d8;
      uVar4 = 0;
      do {
        if ((*(byte *)(param_2 + 0x48) & 0xf) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(uint *)(param_2 + 0x4c);
        }
        F_0059dde0(*(undefined * PTR32 *)pAVar12,(uint)(((uint)(*(undefined * PTR32 *)(gen_frame + 0x18)) & uVar5) != 0));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar12 + 0x28))))
                  (*(int * PTR32 *)pAVar12,(uint)(*(int *)(this + 0x728) == 0));
        pvVar10 = (undefined *)F_00561490(*(undefined * PTR32 *)pAVar12,*(undefined4 *)((int)&REFG(undefined4, 0x10c1c20) + uVar4)
                                      );
        if ((*(byte *)(param_2 + 0x40) & 0xf) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(uint *)(param_2 + 0x44);
        }
        if (((uint)(*(undefined * PTR32 *)(gen_frame + 0x18)) & uVar5) == 0) {
          uVar13 = *(undefined4 *)((int)&REFG(undefined4, 0x10c1c10) + uVar4);
        }
        else {
          uVar13 = *(undefined4 *)((int)&REFG(undefined4, 0x10c1c00) + uVar4);
        }
        F_0059d670(pvVar10,uVar13);
        uVar4 = uVar4 + 4;
        pAVar12 = pAVar12 + 4;
        (*(undefined * PTR32 *)(gen_frame + 0x18)) = (undefined *)((int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x18))) << 1 | (uint)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) < 0));
      } while (uVar4 < 0x10);
      if ((*(byte *)(param_2 + 0x50) & 0xf) == 0) {
        bVar11 = 0;
      }
      else {
        bVar11 = (byte)*(undefined4 *)(param_2 + 0x54);
      }
      uVar4 = F_0059dde0(*(undefined * PTR32 *)(this + 0x1d4),(uint)(bVar11 & 1));
      uVar9 = (uint3)(uVar4 >> 8);
      if ((*(int *)(this + 0x728) == 0) && ((bVar11 & 2) != 0)) {
        iVar6 = CONCAT31(uVar9,1);
      }
      else {
        iVar6 = (uint)uVar9 << 8;
      }
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d4) + 0x28))))(*(int * PTR32 *)(this + 0x1d4),iVar6);
      if (this[0x736] != (undefined1)0x0) {
        if ((*(byte *)(param_2 + 0x80) & 0xf) == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(param_2 + 0x84);
        }
        this[0x737] = (undefined1)(iVar6 != 0);
        if ((*(byte *)(param_2 + 0x88) & 0xf) == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = *(undefined4 *)(param_2 + 0x8c);
        }
        F_00584110(*(undefined * PTR32 *)(this + 0x20c),uVar13);
      }
      F_007a2720(this,param_1,param_2);
      F_00568380(*(undefined * PTR32 *)(this + 0x90),0xc,0,this,0,0);
      F_00568380(*(undefined * PTR32 *)(this + 0x90),0xf,0,this,0,0);
      F_005a91d0(this,0,2);
      F_00803790(this,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)));
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c8) + 0x3c))))(*(int * PTR32 *)(this + 0x1c8));
      *(uint *)(this + 0xa4) = uVar4;
      return uVar4;
    }
  } while( true );
}

/* ref: Client::UI2::AddonContentsFinder::vf2 */
uint F_008a6740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8a6740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 * this_00;
  undefined1 * this_01;
  int iVar5;
  
  this_00 = (gen_frame + 0x1c);
  this_01 = (gen_frame + 0x1c);
  uVar3 = param_1 & 0xffff;
  uVar4 = uVar3 - 0xc;
  if (uVar4 < 0x33) {
    uVar4 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x8a69c0) + uVar3)));
    switch((unsigned int)(uintptr_t)(uVar3)) {
    case 0xc: ;
      uVar4 = F_0088edb0(this,param_3,param_4);
      return uVar4;
    case 0xf: ;
      if (*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c4) + 4))) != (undefined *)0x0) {
        uVar4 = F_0083eee0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1c4) + 4))),param_3,param_4);
      }
      break;
    case 0x17: ;
      F_00557670(param_3,0);
      if (param_2 == 5) {
        uVar4 = (uint)(*((char *)GEN_TOP((*(int *)(this + 0x1d8) + 0x88))) != '\0');
        if (*((char *)GEN_TOP((*(int *)(this + 0x1dc) + 0x88))) != '\0') {
          uVar4 = uVar4 | 2;
        }
        if (*((char *)GEN_TOP((*(int *)(this + 0x1e0) + 0x88))) != '\0') {
          uVar4 = uVar4 | 4;
        }
        if (*((char *)GEN_TOP((*(int *)(this + 0x1e4) + 0x88))) != '\0') {
          uVar4 = uVar4 | 8;
        }
        (*(uint *)(gen_frame + 0x18)) = uVar4;
        (*(undefined4 *)(gen_frame + 0xc)) = 3;
        (*(undefined4 *)(gen_frame + 0x14)) = 3;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
        iVar5 = 1;
        do {
          this_00 = this_00 + -8;
          uVar4 = F_005a2670(this_00);
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
        return uVar4;
      }
      if (param_2 == 6) {
        (*(undefined4 *)(gen_frame + 0xc)) = 3;
        (*(undefined4 *)(gen_frame + 0x10)) = 1;
        (*(undefined4 *)(gen_frame + 0x14)) = 2;
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = *((undefined1 *)GEN_TOP((*(int *)(this + 0x1d4) + 0x88)));
        (*(uint *)(gen_frame + 0x18)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x18)), 1, 3),*((undefined1 *)GEN_TOP((*(int *)(this + 0x1d4) + 0x88))));
        F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
        iVar5 = 1;
        do {
          this_01 = this_01 + -8;
          uVar4 = F_005a2670(this_01);
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
        return uVar4;
      }
      if (6 < param_2) {
        uVar4 = F_007a25c0(this,param_2 - 7);
        return uVar4;
      }
      if (param_2 == 3) {
        iVar5 = *(int *)(this + 0x72c);
      }
      else {
        iVar5 = *(int *)(this + 0x730);
      }
      uVar4 = 0;
      if (iVar5 != 0) {
        if (iVar5 != 5) {
          (*(uint *)(gen_frame + 0x18)) = iVar5;
          (*(undefined4 *)(gen_frame + 0x14)) = 3;
          F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x14)));
          uVar4 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
          return uVar4;
        }
        uVar4 = F_007a2630(this,param_4);
        return uVar4;
      }
      break;
    case 0x21: ;
      if (param_2 == 0) {
        uVar4 = F_0088ec70(this,param_3,param_4);
        return uVar4;
      }
      break;
    case 0x23: ;
      uVar4 = param_2 - 1;
      if (uVar4 == 0) {
        uVar4 = F_0088ecc0(this,param_4);
        return uVar4;
      }
      break;
    case 0x3e: ;
      uVar4 = F_00581000(this + 0x18c,*param_4);
      if (((uVar4 != 0) && (*(int *)(uVar4 + 4) != 0)) && (uVar4 == *(uint *)(this + 0x1c4))) {
        uVar3 = F_0055e2f0(this,2);
        uVar1 = F_00559d70(uVar3);
        uVar2 = F_00559d90(uVar3);
        *(ushort *)(uVar4 + 0x28) = uVar1;
        *(ushort *)(uVar4 + 0x2a) = uVar2;
        uVar4 = F_00803690(this);
        return uVar4;
      }
    }
  }
  return uVar4;
}

/* ref: FUN_008a6a00 */
uint F_008a6a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a6a00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  undefined * this_00;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar3 = (uint)*(char *)((int)this + 0x1cc);
  if (uVar3 != param_1) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + param_1 * 4 + 0x1a4) + 0x110)));
    F_0059bd30((undefined *)((int)this + 0x21c),*piVar1 + 1,1,0);
    *(char *)((int)this + 0x1cc) = (char)param_1;
    uVar3 = F_00581060((undefined *)((int)this + 0x21c),*piVar1 + 1);
    uVar4 = 0;
    if (*(int *)((int)this + 0x19c) != 0) {
      uVar4 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x19c) + 0x70)));
    }
    uVar2 = F_0055a030(uVar4);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 4) + 0x4c))))
              (*(int * PTR32 *)(uVar3 + 4),(uint)*(ushort *)((int)this + 0x1ec),
               (uint)(ushort)(*(short *)((int)this + 0x1ee) - uVar2));
    this_00 = *(undefined * PTR32 *)(uVar3 + 4);
    uVar4 = 0;
    if (*(int *)((int)this + 0x19c) != 0) {
      uVar4 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x19c) + 0x70)));
    }
    uVar2 = F_0055a030(uVar4);
    uVar3 = (uint)(ushort)(*(short *)((int)this + 0x1ee) - uVar2);
    uVar2 = F_0055a020(*(undefined4 *)((int)this + 0x200));
    F_00809130(this_00,(uint)uVar2,uVar3);
    if (-1 < param_2) {
      F_00581060((undefined *)((int)this + 0x21c),
                   **((int * PTR32 *)GEN_TOP((*(int *)((int)this + param_2 * 4 + 0x1a4) + 0x110))) + 1);
    }
    uVar3 = F_00886700((undefined *)((int)this_00 + 0x1a0),1,1);
  }
  return uVar3;
}

/* ref: Client::UI2::AddonChatLogPanel::vf46 */
byte F_008a6b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a6b10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined * this_00;
  undefined1 AVar1;
  
  if (((byte)this[0xf9] & 1) == 0) {
    return 0;
  }
  if (-1 < *(int *)(this + 0x264)) {
    this[0x2ba] = (undefined1)0x1;
  }
  this_00 = this + 0x1a0;
  F_008a3b30(this_00);
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  if ((*param_2 & 0xf) == 0) {
    AVar1 = (undefined1)0x0;
  }
  else {
    AVar1 = SUB41(*(undefined4 *)(param_2 + 4),0);
  }
  this[0x1c4] = AVar1;
  F_00784800(this_00);
  F_00784950(this_00,*(undefined4 *)(this + 0x1cc),0,1,0);
  return 1;
}

/* ref: Client::UI2::AddonChatLogPanel::vf40 */
uint F_008a6b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a6b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined1 AVar1;
  bool bVar2;
  uint uVar3;
  undefined * pAVar4;
  int * in_ecx;
  undefined * this_00;
  undefined4 uVar5;
  
  if (this[0x260] != (undefined1)0x0) {
    this[0x260] = (undefined1)0x0;
    uVar3 = F_0055dcb0();
    if ((this[0x29c] == (undefined1)0x0) && (*(int *)(uVar3 + 0x20c) != 10)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    F_0055ad50(*(undefined * PTR32 *)(this + 0x198),0,0);
    uVar3 = F_0055dcb0();
    if ((*(char *)(uVar3 + 0x21b) != '\0') && (!bVar2)) {
      *(undefined1 *)(uVar3 + 0x21b) = 0;
      F_005aa060((undefined *)(uVar3 + 0x20c),0,0);
    }
    this[0x2b5] = (undefined1)0x0;
    if (this[0x2b4] != (undefined1)0x0) {
      F_00557640(((undefined1 *)(gen_frame + 0xc)),5);
      (*(undefined2 *)(gen_frame + 0x16)) = *(undefined2 *)(this + 0x2b2);
      (*(undefined2 *)(gen_frame + 0x14)) = *(undefined2 *)(this + 0x2b0);
      F_00599860(*(undefined * PTR32 *)(this + 0x198),((undefined1 *)(gen_frame + 0xc)));
    }
  }
  uVar3 = F_0055dcb0();
  if ((*(char *)(uVar3 + 0x21d) == '\0') && (*(char *)(uVar3 + 0x218) == '\0')) {
    AVar1 = this[0x13c];
    uVar3 = F_0055dcb0();
    pAVar4 = (undefined *)F_0057f810(*(undefined * PTR32 *)(uVar3 + 0x14),(uint)(byte)AVar1);
    uVar3 = F_0055dcb0();
    uVar3 = F_0055b9e0(uVar3);
    if (((pAVar4 != (undefined *)0x0) && (*(uint *)(pAVar4 + 0x94) == uVar3)) ||
       ((uVar3 == *(uint *)(this + 0x188) || (uVar3 == *(uint *)(this + 0x198))))) {
      if ((pAVar4 == (undefined *)0x0) ||
         ((int)(char)pAVar4[0x1cc] != (uint)(byte)this[0x1bc])) {
        uVar3 = F_0055e2f0(this,8);
        if (((uVar3 == 0) || (in_ecx = (int *)F_00559c20(uVar3), in_ecx == (int *)0x0)) ||
           (uVar3 = F_005613a0(in_ecx), uVar3 != 1)) {
          in_ecx = (int *)0x0;
        }
        uVar5 = 0;
        pAVar4 = this;
        uVar3 = ((code *)*(gen_code32 *)(*in_ecx + 0x3c))(in_ecx,this,0);
      }
      else if (*(int *)(pAVar4 + 0x19c) == 0) {
        uVar3 = 0;
        uVar5 = 0;
      }
      else {
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(pAVar4 + 0x19c) + 0x38))))(*(int * PTR32 *)(pAVar4 + 0x19c));
        uVar5 = 0;
      }
      this_00 = (undefined *)F_0055dcb0();
      F_0059b300(this_00,uVar3,pAVar4,uVar5);
    }
  }
  uVar3 = F_008a3930(this + 0x1a0,param_1,param_2);
  return uVar3;
}

/* ref: Client::UI2::AddonChatLogPanel::vf2 */
unsigned int F_008a6d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8a6d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined * pvVar1;
  uint uVar2;
  undefined * pAVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (((byte)this[0xf9] & 1) != 0) {
    switch((unsigned int)(uintptr_t)(param_1 & 0xffff)) {
    case 3: ;
      if (param_2 == 0x3f4) {
        F_007a8ef0(this,param_3,param_4);
      }
      break;
    case 4: ;
      if (param_2 == 0x3eb) {
        F_00808df0(this,param_3,param_4);
        F_00886700(this + 0x1a0,1,1);
      }
      else if (param_2 == 0x3f5) {
        this[0x2b6] = (undefined1)0x0;
      }
      break;
    case 5: ;
      if (param_2 == 0x3ea) {
        F_00808ba0(this,param_3,param_4);
      }
      else if (param_2 == 0x3f2) {
        if (this[0x2b6] == (undefined1)0x0) {
          F_007a8e40(this,param_3,param_4);
        }
        else {
          F_007a8f60(this,param_3,param_4);
        }
      }
      break;
    case 6: ;
      if (param_2 == 0x3ec) {
        uVar2 = F_0055dcb0();
        F_005aa060((undefined *)(uVar2 + 0x20c),10,0);
        uVar2 = F_0055dcb0();
        *(undefined1 *)(uVar2 + 0x21b) = 1;
      }
      else if (param_2 == 0x3f1) {
        uVar6 = 0;
        uVar5 = 0;
        uVar7 = 0x3f2;
        uVar4 = 5;
        pAVar3 = this;
        pvVar1 = (undefined *)F_0055dcb0();
        F_0056a3d0(pvVar1,uVar4,uVar7,pAVar3,uVar5,uVar6);
        this[0x2b4] = (undefined1)0x1;
        F_007a8e40(this,param_3,param_4);
      }
      break;
    case 7: ;
      if (param_2 == 0x3ed) {
        if (this[0x29c] == (undefined1)0x0) {
          uVar2 = F_0055dcb0();
          *(undefined1 *)(uVar2 + 0x21b) = 0;
          uVar2 = F_0055dcb0();
          F_005aa060((undefined *)(uVar2 + 0x20c),0,0);
        }
      }
      else if (param_2 == 0x3f3) {
        uVar7 = 0x3f2;
        uVar4 = 5;
        pAVar3 = this;
        pvVar1 = (undefined *)F_0055dcb0();
        F_00586850(pvVar1,uVar4,uVar7,pAVar3);
        if (this[0x2b7] == (undefined1)0x0) {
          F_007a8ea0(this,(uint)(byte)this[0x29c]);
        }
        this[0x2b4] = (undefined1)0x0;
      }
      break;
    case 8: ;
      if (param_2 == 0x3f1) {
        F_0082d7e0(this + 0x1a0,param_3,param_4);
        uVar4 = *(undefined4 *)(this + 0x188);
        uVar7 = 0;
        pAVar3 = this;
        pvVar1 = (undefined *)F_0055dcb0();
        F_0059b300(pvVar1,uVar4,pAVar3,uVar7);
      }
      break;
    case 9: ;
      if ((param_2 == 0x3f0) && (this[0x2b6] == (undefined1)0x0)) {
        F_007a8df0(this,param_3,param_4);
      }
      break;
    case 0xc: ;
      if (param_2 == 1000) {
        F_007a8fb0(this,param_3,param_4);
      }
      break;
    case 0x12: ;
      if (param_2 == 0) {
        F_005840a0(*(undefined * PTR32 *)(this + 0x198),0xf,0,this,0);
      }
      break;
    case 0x16: ;
      if (param_2 == 0x3e9) {
        F_007a9060(this,param_3,param_4);
      }
      break;
    case 0x17: ;
      if (param_2 == 0x3ee) {
        F_00557670(param_3,0);
        ((code *)*(gen_code32 *)(*(int *)this + 100))(this);
      }
      break;
    case 0x42: ;
      uVar2 = F_0055dcb0();
      *(undefined1 *)(uVar2 + 0x21b) = 0;
      F_005aa060((undefined *)(uVar2 + 0x20c),0,0);
      if (this[0x2b7] == (undefined1)0x0) {
        F_007e81e0(this + 0x1a0,*param_4,0);
      }
      break;
    case 0x43: ;
      if (((this[0x29c] == (undefined1)0x0) && (this[0x2b6] == (undefined1)0x0)) &&
         (this[0x2b7] == (undefined1)0x0)) {
        F_00785010(this + 0x1a0,*param_4);
        uVar2 = F_0055dcb0();
        F_005aa060((undefined *)(uVar2 + 0x20c),0xb,0);
        *(undefined1 *)(uVar2 + 0x21b) = 1;
        this[0x2b5] = (undefined1)0x1;
      }
      break;
    case 0x44: ;
      if ((this[0x2b6] == (undefined1)0x0) && (this[0x2b7] == (undefined1)0x0)) {
        F_007a8ea0(this,(uint)(byte)this[0x29c]);
      }
    }
    if ((*(byte *)(param_3 + 0x16) & 1) == 0) {
      ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x1a0) + 8))))(this + 0x1a0,param_1,param_2,param_3,param_4);
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonCharacter::vf59 */
byte F_008a7150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a7150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined * pAVar5;
  undefined4 uVar6;
  
  ((int *)(gen_frame + 0x30))[0xe] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(byte *)(gen_frame + 0x2f)) = 0;
  uVar2 = F_0055dcb0();
  F_0055b9e0(uVar2);
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9e0(uVar2);
  iVar4 = 0;
  pAVar5 = this + 0x20c;
  do {
    if (uVar2 == *(uint *)pAVar5) {
      (*(int *)(gen_frame + 0x28)) = iVar4;
      goto LAB_008a71a3;
    }
    iVar4 = iVar4 + 1;
    pAVar5 = pAVar5 + 4;
  } while (iVar4 < 0xe);
  (*(int *)(gen_frame + 0x28)) = -1;
LAB_008a71a3: ;
  uVar2 = F_005b1020((undefined *)this,param_1,param_2);
  if ((char)uVar2 != '\0') {
    (*(byte *)(gen_frame + 0x2f)) = 1;
    goto LAB_008a74b2;
  }
  iVar4 = *(int *)(this + 700);
  if (iVar4 == 0) goto LAB_008a74de;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0x280))) {
  case 0: ;
    if (param_1 != 7) {
      if ((char)param_2 != '\0') goto LAB_008a74de;
      if (param_1 == 8) {
        ((int *)(gen_frame + 0x30))[0] = -1;
        ((int *)(gen_frame + 0x30))[1] = 0x29;
        ((int *)(gen_frame + 0x30))[2] = 0xffffffff;
        ((int *)(gen_frame + 0x30))[3] = 0xffffffff;
        ((int *)(gen_frame + 0x30))[4] = 0xffffffff;
        ((int *)(gen_frame + 0x30))[5] = 0xffffffff;
        ((int *)(gen_frame + 0x30))[6] = 0xffffffff;
        ((int *)(gen_frame + 0x30))[7] = 0xffffffff;
        ((int *)(gen_frame + 0x30))[8] = 0x2d;
        ((int *)(gen_frame + 0x30))[9] = 0x2b;
        ((int *)(gen_frame + 0x30))[10] = 0x3f;
        ((int *)(gen_frame + 0x30))[0xb] = 0x4f;
        ((int *)(gen_frame + 0x30))[0xc] = 0x40;
        ((int *)(gen_frame + 0x30))[0xd] = 0x5e;
        iVar3 = ((int *)(gen_frame + 0x30))[(int)((*(int *)(gen_frame + 0x28)))];
        goto LAB_008a7259;
      }
      goto LAB_008a7490;
    }
    ((int *)(gen_frame + 0x30))[0] = 0x23;
    ((int *)(gen_frame + 0x30))[1] = 0xffffffff;
    ((int *)(gen_frame + 0x30))[2] = 0x34;
    ((int *)(gen_frame + 0x30))[3] = 0x36;
    ((int *)(gen_frame + 0x30))[4] = 0x38;
    ((int *)(gen_frame + 0x30))[5] = 0x47;
    ((int *)(gen_frame + 0x30))[6] = 0x48;
    ((int *)(gen_frame + 0x30))[7] = 0x56;
    ((int *)(gen_frame + 0x30))[8] = 0xffffffff;
    ((int *)(gen_frame + 0x30))[9] = 0xffffffff;
    ((int *)(gen_frame + 0x30))[10] = 0xffffffff;
    ((int *)(gen_frame + 0x30))[0xb] = 0xffffffff;
    ((int *)(gen_frame + 0x30))[0xc] = 0xffffffff;
    ((int *)(gen_frame + 0x30))[0xd] = 0xffffffff;
    iVar3 = ((int *)(gen_frame + 0x30))[(int)((*(int *)(gen_frame + 0x28)))];
LAB_008a7259: ;
    if (((iVar3 < 0) || (*(undefined * PTR32 *)(iVar4 + 4) == (undefined *)0x0)) ||
       (bVar1 = F_008906c0(*(undefined * PTR32 *)(iVar4 + 4),param_1,iVar3), bVar1 == 0))
    goto switchD_008a71e1_default;
    uVar2 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x24)),0);
    F_005a2670(((undefined1 *)(gen_frame + 0x24)));
    (*(byte *)(gen_frame + 0x2f)) = 1;
    break;
  case 1: ;
    if (param_1 != 7) {
      if ((char)param_2 != '\0') goto LAB_008a74de;
      if (param_1 != 8) goto LAB_008a7490;
    }
    uVar2 = F_0055dcb0();
    F_0059b860(*(undefined * PTR32 *)(uVar2 + 0x14),*((undefined4 *)GEN_TOP((*(int *)(this + 700) + 4))),0);
    uVar2 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x1c)),0);
    F_005a2670(((undefined1 *)(gen_frame + 0x1c)));
    (*(byte *)(gen_frame + 0x2f)) = 1;
    break;
  case 2: ;
    if (param_1 == 7) {
      ((int *)(gen_frame + 0x30))[0] = 8;
      ((int *)(gen_frame + 0x30))[1] = 0xffffffff;
      ((int *)(gen_frame + 0x30))[2] = 10;
      ((int *)(gen_frame + 0x30))[3] = 0xb;
      ((int *)(gen_frame + 0x30))[4] = 0xc;
      ((int *)(gen_frame + 0x30))[5] = 0xe;
      ((int *)(gen_frame + 0x30))[6] = 0xf;
      ((int *)(gen_frame + 0x30))[7] = 0x10;
      ((int *)(gen_frame + 0x30))[8] = 0xffffffff;
      ((int *)(gen_frame + 0x30))[9] = 0xffffffff;
      ((int *)(gen_frame + 0x30))[10] = 0xffffffff;
      ((int *)(gen_frame + 0x30))[0xb] = 0xffffffff;
      ((int *)(gen_frame + 0x30))[0xc] = 0xffffffff;
      ((int *)(gen_frame + 0x30))[0xd] = 0xffffffff;
      iVar3 = ((int *)(gen_frame + 0x30))[(int)((*(int *)(gen_frame + 0x28)))];
    }
    else {
      if ((char)param_2 != '\0') goto LAB_008a74de;
      if (param_1 != 8) goto LAB_008a7490;
      ((int *)(gen_frame + 0x30))[0xb] = 7;
      ((int *)(gen_frame + 0x30))[0xd] = 7;
      ((int *)(gen_frame + 0x30))[0] = -1;
      ((int *)(gen_frame + 0x30))[1] = 1;
      ((int *)(gen_frame + 0x30))[2] = 0xffffffff;
      ((int *)(gen_frame + 0x30))[3] = 0xffffffff;
      ((int *)(gen_frame + 0x30))[4] = 0xffffffff;
      ((int *)(gen_frame + 0x30))[5] = 0xffffffff;
      ((int *)(gen_frame + 0x30))[6] = 0xffffffff;
      ((int *)(gen_frame + 0x30))[7] = 0xffffffff;
      ((int *)(gen_frame + 0x30))[8] = 4;
      ((int *)(gen_frame + 0x30))[9] = 3;
      ((int *)(gen_frame + 0x30))[10] = 5;
      ((int *)(gen_frame + 0x30))[0xc] = 6;
      iVar3 = ((int *)(gen_frame + 0x30))[(int)((*(int *)(gen_frame + 0x28)))];
    }
    if (((iVar3 < 0) || (*(undefined * PTR32 *)(iVar4 + 4) == (undefined *)0x0)) ||
       (bVar1 = F_007abcd0(*(undefined * PTR32 *)(iVar4 + 4),iVar3,param_1), bVar1 == 0))
    goto switchD_008a71e1_default;
    uVar2 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0xc)),0);
    F_005a2670(((undefined1 *)(gen_frame + 0xc)));
    (*(byte *)(gen_frame + 0x2f)) = 1;
    break;
  case 3: ;
    if (param_1 != 7) {
      if ((char)param_2 != '\0') goto LAB_008a74de;
      if (param_1 != 8) goto LAB_008a7490;
    }
    if (*(undefined * PTR32 *)(iVar4 + 4) == (undefined *)0x0) goto switchD_008a71e1_default;
    F_0080c150(*(undefined * PTR32 *)(iVar4 + 4),(*(int *)(gen_frame + 0x28)),param_1);
    uVar2 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x14)),0);
    F_005a2670(((undefined1 *)(gen_frame + 0x14)));
    (*(byte *)(gen_frame + 0x2f)) = 1;
    break;
  default: ;
switchD_008a71e1_default: ;
    if ((char)param_2 != '\0') goto LAB_008a74de;
LAB_008a7490: ;
    if (param_1 == 7) {
      uVar6 = 8;
    }
    else {
      if (param_1 != 8) goto LAB_008a74de;
      uVar6 = 7;
    }
    uVar2 = F_005b1020((undefined *)this,uVar6,0);
    (*(byte *)(gen_frame + 0x2f)) = (byte)uVar2;
    if ((byte)uVar2 == 0) goto LAB_008a74de;
  }
LAB_008a74b2: ;
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9e0(uVar2);
  iVar4 = 0;
  pAVar5 = this + 0x20c;
  do {
    if (uVar2 == *(uint *)pAVar5) {
      if ((-1 < iVar4) && (iVar4 < 0xe)) {
        F_0056b630(this,0x2fb,7,0,9,0,0);
        goto LAB_008a74de;
      }
      break;
    }
    iVar4 = iVar4 + 1;
    pAVar5 = pAVar5 + 4;
  } while (iVar4 < 0xe);
  F_0056b780(this,0);
LAB_008a74de: ;
  bVar1 = (*(byte *)(gen_frame + 0x2f));
  F_00c47745(((int *)(gen_frame + 0x30))[0xe] ^ (uint)(uint)(gen_frame + 0x6c));
  return bVar1;
}

/* ref: FUN_008a7530 */
uint F_008a7530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a7530u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  ushort uVar1;
  ushort uVar2;
  uint in_EAX = 0;
  int iVar3;
  
  if (((*(int *)&gen_args[1]) < 0) || (iVar3 = (*(int *)&gen_args[1]), 3 < (*(int *)&gen_args[1]))) {
    iVar3 = 0;
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x280))) != iVar3) {
    in_EAX = 0;
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 700))) != 0) {
      in_EAX = F_00588cd0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x284))),&(*(int *)&gen_args[1]),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 700))),1);
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 700))) = 0;
    }
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 700))) != 0) {
    return in_EAX;
  }
  switch((unsigned int)(uintptr_t)(iVar3)) {
  case 0: ;
    in_EAX = F_0094c5a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x284))),"CharacterStatus",0x3e,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7d4,1,0,0
                         );
    break;
  case 1: ;
    in_EAX = F_0094c620(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x284))),"CharacterProfile",0,0,1,0,0);
    break;
  case 2: ;
    in_EAX = F_0094c6a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x284))),"CharacterClass",0,0,1,0,0);
    break;
  case 3: ;
    in_EAX = F_00955ef0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x284))),"CharacterCurrency",0,0,1,0,0);
    break;
  default: ;
    goto switchD_008a7589_default;
  }
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 700))) = in_EAX;
switchD_008a7589_default: ;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 700))) != 0) {
    uVar1 = F_00559d70(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x194))));
    uVar2 = F_00559d90(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x194))));
    in_EAX = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 700)));
    *(ushort *)(in_EAX + 0x28) = uVar1;
    *(ushort *)(in_EAX + 0x2a) = uVar2;
  }
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x280))) = iVar3;
  return in_EAX;
}

/* ref: Client::UI2::AddonCharacterStatus::vf47 */
unsigned int F_008a7660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a7660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  undefined * this;
  undefined * this_00;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  
  iVar3 = *(int *)(param_2 + 0xc);
  iVar1 = *(int *)(param_2 + 0xf4);
  F_0057eb30(*(undefined * PTR32 *)((int)param_1 + 0x1c0),*((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x700))),0,0,
               0,0);
  this_00 = (undefined *)F_00561490(*(undefined * PTR32 *)((int)param_1 + 0x1c8),3);
  F_005840a0(this_00,9,0,param_1,0);
  F_005840a0(this_00,0xc,0,param_1,0);
  iVar2 = *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x50)));
  this = *(undefined * PTR32 *)((int)param_1 + 0x1c4);
  if (iVar2 == 2) {
    F_0055a300(this,0);
    F_0057eb30(*(undefined * PTR32 *)((int)param_1 + 0x194),*((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x20))),0,0
                 ,0,0);
    F_0057eb30(*(undefined * PTR32 *)((int)param_1 + 0x198),*((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x24))),0,0
                 ,0,0);
    iVar2 = *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x24)));
    fVar4 = (float)iVar2;
    if ((GEN_ISNAN(fVar4) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
        ((GEN_ISNAN(fVar4) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar4 == *(float *)&REFG(undefined, 0x1088114))) {
      fVar4 = ((float)GEN_TOF(((float10)*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x20))) / (float10)iVar2)));
    }
    F_00568230(*(undefined4 *)((int)param_1 + 0x1b8),fVar4);
    uVar5 = 0x66;
  }
  else {
    if (iVar2 != 4) {
      F_0055a300(this,1);
      F_0057eb30(*(undefined * PTR32 *)((int)param_1 + 0x18c),*((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 8))),0,0,
                   0,0);
      F_0057eb30(*(undefined * PTR32 *)((int)param_1 + 400),*((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0xc))),0,0,
                   0,0);
      iVar2 = *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0xc)));
      fVar4 = (float)iVar2;
      if ((GEN_ISNAN(fVar4) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
          ((GEN_ISNAN(fVar4) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar4 == *(float *)&REFG(undefined, 0x1088114))) {
        fVar4 = ((float)GEN_TOF(((float10)*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 8))) / (float10)iVar2)));
      }
      F_00568230(*(undefined4 *)((int)param_1 + 0x1b0),fVar4);
      F_0059d670(*(undefined * PTR32 *)((int)param_1 + 0x180),0x65);
      F_00568380(this_00,9,0,param_1,0,0);
      F_00568380(this_00,0xc,0,param_1,0,0);
      F_0055a3c0(this_00,1);
      goto LAB_008a78b6;
    }
    F_0055a300(this,0);
    F_0057eb30(*(undefined * PTR32 *)((int)param_1 + 0x19c),*((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x18))),0,0
                 ,0,0);
    F_0057eb30(*(undefined * PTR32 *)((int)param_1 + 0x1a0),*((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x1c))),0,0
                 ,0,0);
    iVar2 = *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x1c)));
    fVar4 = (float)iVar2;
    if ((GEN_ISNAN(fVar4) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
        ((GEN_ISNAN(fVar4) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar4 == *(float *)&REFG(undefined, 0x1088114))) {
      F_00568230(*(undefined4 *)((int)param_1 + 0x1bc),
                   ((float)GEN_TOF(((float10)*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x18))) / (float10)iVar2))));
      uVar5 = 0x67;
    }
    else {
      F_00568230(*(undefined4 *)((int)param_1 + 0x1bc),fVar4);
      uVar5 = 0x67;
    }
  }
  F_0059d670(*(undefined * PTR32 *)((int)param_1 + 0x180),uVar5);
LAB_008a78b6: ;
  F_0057eb30(*(undefined * PTR32 *)((int)param_1 + 0x184),**(undefined4 * PTR32 *)(iVar3 + 0x20),0,0,0,0);
  F_0057eb30(*(undefined * PTR32 *)((int)param_1 + 0x188),*((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 4))),0,0,0,0)
  ;
  iVar2 = (*(int * PTR32 *)(iVar3 + 0x20))[1];
  fVar4 = (float)iVar2;
  if ((GEN_ISNAN(fVar4) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
      ((GEN_ISNAN(fVar4) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar4 == *(float *)&REFG(undefined, 0x1088114))) {
    fVar4 = ((float)GEN_TOF((((float10)GEN_TOD(**(int * PTR32 *)(iVar3 + 0x20))) / (float10)iVar2)));
  }
  F_00568230(*(undefined4 *)((int)param_1 + 0x1ac),fVar4);
  F_0057eb30(*(undefined * PTR32 *)((int)param_1 + 0x1a4),*((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x10))),0,0,0
               ,0);
  F_0057eb30(*(undefined * PTR32 *)((int)param_1 + 0x1a8),*((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x14))),0,0,0
               ,0);
  iVar2 = *((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x14)));
  fVar4 = (float)iVar2;
  if ((GEN_ISNAN(fVar4) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
      ((GEN_ISNAN(fVar4) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar4 == *(float *)&REFG(undefined, 0x1088114))) {
    fVar4 = ((float)GEN_TOF(((float10)*((int *)GEN_TOP((*(int *)(iVar3 + 0x20) + 0x10))) / (float10)iVar2)));
  }
  F_00568230(*(undefined4 *)((int)param_1 + 0x1b4),fVar4);
  iVar3 = 0;
  do {
    F_0057eb30(*(undefined * PTR32 *)((int)param_1 + iVar3 + 0x24c),
                 *((undefined4 *)GEN_TOP((iVar3 + *(int *)(iVar1 + 0x20)))),0,0,0,0);
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x7c);
  F_00890610(param_1);
  return 0;
}

/* ref: Client::UI2::AddonCharacterStatus::vf59 */
byte F_008a79e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a79e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar2 = F_005b1020((undefined *)this,param_1,param_2);
  if ((char)uVar2 == '\0') {
    uVar2 = F_0055dcb0();
    uVar2 = F_0055b9e0(uVar2);
    uVar2 = F_00561680(uVar2);
    uVar2 = F_007ab070(uVar2,param_1,param_2);
    if ((int)uVar2 < 1) {
      return 0;
    }
    if (uVar2 == 0xff) {
      return 0;
    }
    iVar5 = param_1;
    uVar3 = F_0055dcb0();
    bVar1 = F_0080af30(this,uVar3,uVar2,iVar5);
    if (bVar1 == 0) {
      uVar2 = F_0055dcb0();
      uVar2 = F_0055b9e0(uVar2);
      uVar2 = F_00561680(uVar2);
      if (param_1 == 8) {
        uVar6 = 0x58;
        uVar4 = 8;
      }
      else if (param_1 == 9) {
        if ((char)param_2 != '\0') {
          return 0;
        }
        if (uVar2 == *(uint *)(this + 0x1e8)) {
          uVar6 = 0x58;
          uVar4 = 9;
        }
        else {
          uVar2 = F_0055e2f0(this,0x61);
          uVar2 = F_0055a2d0(uVar2);
          if ((char)uVar2 == '\0') {
            uVar2 = F_0055e2f0(this,0x68);
            uVar2 = F_0055a2d0(uVar2);
            if ((char)uVar2 == '\0') {
              return 0;
            }
            uVar6 = 0x6e;
            uVar4 = 9;
          }
          else {
            uVar6 = 0x67;
            uVar4 = 9;
          }
        }
      }
      else {
        if (param_1 != 10) {
          return 0;
        }
        if ((char)param_2 != '\0') {
          return 0;
        }
        if (uVar2 == *(uint *)(this + 0x228)) {
          uVar6 = 0x34;
          uVar4 = 10;
        }
        else {
          uVar6 = 0x29;
          uVar4 = 10;
        }
      }
      bVar1 = F_008906c0(this,uVar4,uVar6);
      if (bVar1 == 0) {
        return 0;
      }
    }
    uVar2 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x4)),0);
    F_005a2670(((undefined1 *)(gen_frame + 0x4)));
  }
  return 1;
}

/* ref: Client::UI2::AddonCharacterCurrency::vf59 */
uint F_008a7b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a7b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var_01 = 0;
  undefined4 in_ecx;
  undefined3 extraout_var_02 = 0;
  undefined * pAVar5;
  int iVar6;
  int iVar7;
  
  ((int *)(gen_frame + 0xc))[0xf] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b9e0(uVar2);
  bVar1 = F_0055de10(this,uVar2);
  if (bVar1 == 0) {
    F_00c47745(((int *)(gen_frame + 0xc))[0xf] ^ (uint)(uint)(gen_frame + 0x4c));
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_00890770(this,uVar2,param_1,param_2);
  uVar3 = CONCAT31(extraout_var_00,bVar1);
  if (bVar1 != 0) goto LAB_008a7d7a;
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b9e0(uVar3);
  uVar3 = F_00561680(uVar3);
  uVar3 = F_007ab070(uVar3,param_1,param_2);
  iVar6 = 0;
  if ((0 < (int)uVar3) && (uVar3 != 0xff)) {
    iVar7 = param_1;
    uVar4 = F_0055dcb0();
    bVar1 = F_0080af30(this,uVar4,uVar3,iVar7);
    uVar3 = CONCAT31(extraout_var_01,bVar1);
    if (bVar1 != 0) {
      uVar2 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((int *)(gen_frame + 0xc)),0);
      uVar2 = F_005a2670(((int *)(gen_frame + 0xc)));
      F_00c47745(((int *)(gen_frame + 0xc))[0xf] ^ (uint)(uint)(gen_frame + 0x4c));
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  if ((param_1 != 7) && (param_1 != 8)) goto LAB_008a7d8f;
  ((int *)(gen_frame + 0xc))[2] = -1;
  (*(int *)(gen_frame + 0x0)) = 0;
  uVar3 = F_0055a2d0(*(undefined4 *)(this + 0x18c));
  if ((char)uVar3 == '\0') {
    (*(int * PTR32 *)(gen_frame + 0x8)) = (int *)&REFG(undefined, 0x132df98);
LAB_008a7c68: ;
    pAVar5 = this + 0x1b4;
    ((int *)(gen_frame + 0xc))[1] = 3;
    do {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar5 + 0x3c))))(*(int * PTR32 *)pAVar5);
      if (uVar3 == uVar2) {
        (*(int *)(gen_frame + 0x0)) = *(int *)pAVar5;
        ((int *)(gen_frame + 0xc))[2] = *(*(int * PTR32 *)(gen_frame + 0x8));
      }
      in_ecx = 0;
      if (*(int *)pAVar5 != 0) {
        in_ecx = *(undefined4 *)(*(int *)pAVar5 + 0x70);
      }
      uVar3 = F_0055a2d0(in_ecx);
      if ((char)uVar3 != '\0') {
        (*(int * PTR32 *)(gen_frame + 0x8)) = (*(int * PTR32 *)(gen_frame + 0x8)) + 1;
      }
      pAVar5 = pAVar5 + 0xc;
      iVar6 = ((int *)(gen_frame + 0xc))[1] + -1;
      ((int *)(gen_frame + 0xc))[1] = iVar6;
    } while (iVar6 != 0);
    if (((int *)(gen_frame + 0xc))[2] < 0) goto LAB_008a7d8f;
  }
  else {
    ((int *)(gen_frame + 0xc))[0] = 0;
    ((int *)(gen_frame + 0xc))[1] = 1;
    pAVar5 = this + 400;
    do {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar5 + 0x3c))))(*(int * PTR32 *)pAVar5);
      if (uVar3 == uVar2) {
        (*(int *)(gen_frame + 0x0)) = *(int *)pAVar5;
        ((int *)(gen_frame + 0xc))[2] = ((int *)(gen_frame + 0xc))[(int)(iVar6)];
      }
      iVar6 = iVar6 + 1;
      pAVar5 = pAVar5 + 0x10;
    } while (iVar6 < 2);
    if (((int *)(gen_frame + 0xc))[2] < 0) {
      (*(int * PTR32 *)(gen_frame + 0x8)) = &REFG(undefined4, 0x132dfa4);
      goto LAB_008a7c68;
    }
  }
  uVar3 = 0;
  if ((*(int *)(gen_frame + 0x0)) != 0) {
    uVar3 = F_007ab070((*(int *)(gen_frame + 0x0)),param_1,param_2);
    if (-1 < (int)uVar3) {
      ((int *)(gen_frame + 0xc))[3] = 2;
      ((int *)(gen_frame + 0xc))[4] = 1;
      ((int *)(gen_frame + 0xc))[5] = 3;
      ((int *)(gen_frame + 0xc))[6] = 9;
      ((int *)(gen_frame + 0xc))[7] = 4;
      ((int *)(gen_frame + 0xc))[8] = 8;
      ((int *)(gen_frame + 0xc))[9] = 5;
      ((int *)(gen_frame + 0xc))[10] = 10;
      ((int *)(gen_frame + 0xc))[0xb] = 6;
      ((int *)(gen_frame + 0xc))[0xc] = 0xc;
      ((int *)(gen_frame + 0xc))[0xd] = 7;
      ((int *)(gen_frame + 0xc))[0xe] = 0xb;
      iVar6 = ((int *)(gen_frame + 0xc))[(int)((uint)(param_1 != 8) + ((int *)(gen_frame + 0xc))[2] * 2 + 3)];
      uVar2 = F_0055dcb0();
      bVar1 = F_0080af80(this,uVar2,iVar6,param_1);
      uVar3 = CONCAT31(extraout_var_02,bVar1);
      if (bVar1 != 0) {
        uVar2 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((int *)(gen_frame + 0xc)),0);
        uVar3 = F_005a2670(((int *)(gen_frame + 0xc)));
LAB_008a7d7a: ;
        F_00c47745(((int *)(gen_frame + 0xc))[0xf] ^ (uint)(uint)(gen_frame + 0x4c));
        return CONCAT31((int3)(uVar3 >> 8),1);
      }
    }
  }
LAB_008a7d8f: ;
  F_00c47745(((int *)(gen_frame + 0xc))[0xf] ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar3 & 0xffffff00;
}

/* ref: Client::UI2::AddonAreaMap::vf46 */
byte F_008a7db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a7db0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined * pAVar1;
  float fVar2;
  int * piVar3;
  code * pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 * puVar7;
  uint uVar8;
  undefined * pvVar9;
  int * piVar10;
  undefined1 uVar11;
  undefined * pAVar12;
  byte * pbVar13;
  undefined1 AVar14;
  int iVar15;
  undefined * pAVar16;
  bool bVar17;
  float fVar18;
  
  ((uint *)(gen_frame + 0x18))[8] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(int *)(gen_frame + 0x10)) = param_2;
  if (param_2 == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c) ^ (uint)(uint)(gen_frame + 0x3c));
    return 0;
  }
  piVar10 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1b4) + 0x88)));
  (*(int * PTR32 *)(gen_frame + 0xc)) = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1b0) + 0x88)));
  if (this[0x4f4] == (undefined1)0x0) {
    if ((*(byte *)(param_2 + 0x10) & 0xf) == 0) {
      iVar15 = 0;
    }
    else {
      iVar15 = *(int *)(param_2 + 0x14);
    }
    if (((*(byte *)(param_2 + 8) & 0xf) != 0) && (*(int *)(param_2 + 0xc) != 0)) {
      F_00c49908(this + 0x360,8,*(int *)(param_2 + 0xc));
    }
    if (iVar15 != 0) {
      F_00c49908(this + 0x368,8,iVar15);
    }
    uVar5 = F_0055dcb0();
    pvVar9 = (undefined *)(uVar5 + 0xe0);
    F_00560760(((undefined4 *)(gen_frame + 0x0)));
    if ((*(byte *)(param_2 + 0x668) & 0xf) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(param_2 + 0x66c);
    }
    ((undefined4 *)(gen_frame + 0x0))[0] = uVar6;
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)(uint)(byte)this[0x13a];
    puVar7 = ((undefined4 *)(gen_frame + 0x0));
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x38))))(*(int * PTR32 *)(this + 400));
    F_00590ad0(pvVar9,2,(*(undefined * PTR32 *)(gen_frame + 0x14)),uVar5,puVar7);
    if ((*(byte *)(param_2 + 0x640) & 0xf) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(param_2 + 0x644);
    }
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)(uint)(byte)this[0x13a];
    ((undefined4 *)(gen_frame + 0x0))[0] = uVar6;
    puVar7 = ((undefined4 *)(gen_frame + 0x0));
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a0) + 0x38))))(*(int * PTR32 *)(this + 0x1a0));
    F_00590ad0(pvVar9,2,(*(undefined * PTR32 *)(gen_frame + 0x14)),uVar5,puVar7);
    if ((*(byte *)(param_2 + 0x650) & 0xf) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(param_2 + 0x654);
    }
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)(uint)(byte)this[0x13a];
    ((undefined4 *)(gen_frame + 0x0))[0] = uVar6;
    puVar7 = ((undefined4 *)(gen_frame + 0x0));
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x19c) + 0x38))))(*(int * PTR32 *)(this + 0x19c));
    F_00590ad0(pvVar9,2,(*(undefined * PTR32 *)(gen_frame + 0x14)),uVar5,puVar7);
    if ((*(byte *)(param_2 + 0x658) & 0xf) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(param_2 + 0x65c);
    }
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)(uint)(byte)this[0x13a];
    ((undefined4 *)(gen_frame + 0x0))[0] = uVar6;
    puVar7 = ((undefined4 *)(gen_frame + 0x0));
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a4) + 0x38))))(*(int * PTR32 *)(this + 0x1a4));
    F_00590ad0(pvVar9,2,(*(undefined * PTR32 *)(gen_frame + 0x14)),uVar5,puVar7);
    if ((*(byte *)(param_2 + 0x660) & 0xf) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(param_2 + 0x664);
    }
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)(uint)(byte)this[0x13a];
    ((undefined4 *)(gen_frame + 0x0))[0] = uVar6;
    puVar7 = ((undefined4 *)(gen_frame + 0x0));
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a8) + 0x38))))(*(int * PTR32 *)(this + 0x1a8));
    F_00590ad0(pvVar9,2,(*(undefined * PTR32 *)(gen_frame + 0x14)),uVar5,puVar7);
    F_008915c0(this,0);
    F_0084fec0(this);
    if ((*(byte *)(param_2 + 0x30) & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(param_2 + 0x34);
    }
    (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)(uVar5 & 0xffff);
    if ((undefined *)0x10 < (undefined *)(uVar5 & 0xffff)) {
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)0x10;
    }
    if ((*(undefined * PTR32 *)(gen_frame + 0x14)) != (undefined *)0x0) {
      pAVar12 = this + 0x2d8;
      puVar7 = (undefined4 *)(param_2 + 0x23c);
      pAVar16 = (*(undefined * PTR32 *)(gen_frame + 0x14));
      do {
        if ((*(byte *)(puVar7 + -0x81) & 0xf) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = puVar7[-0x80];
        }
        *(undefined4 *)(pAVar12 + -0x40) = uVar6;
        if ((*(byte *)(puVar7 + -1) & 0xf) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *puVar7;
        }
        *(undefined4 *)pAVar12 = uVar6;
        puVar7 = puVar7 + 2;
        pAVar12 = pAVar12 + 4;
        pAVar16 = pAVar16 + -1;
      } while (pAVar16 != (undefined *)0x0);
    }
    if (*(undefined * PTR32 *)(this + 0x1b0) != (undefined *)0x0) {
      F_0059caa0(*(undefined * PTR32 *)(this + 0x1b0),0);
      F_0059ead0((*(int * PTR32 *)(gen_frame + 0xc)),(*(undefined * PTR32 *)(gen_frame + 0x14)),this + 0x2d8,1);
    }
    this[0x4f4] = (undefined1)0x1;
  }
  if ((*(byte *)(param_2 + 0x670) & 0xf) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(param_2 + 0x674);
  }
  *(short *)(this + 0x4c0) = (short)uVar6;
  F_00850110(this,uVar6);
  if ((*(byte *)(param_2 + 0x18) & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)(param_2 + 0x1c);
  }
  if (((uVar5 & 0x10000) != 0) && (*(short *)(this + 0x27e) = (short)uVar5, (short)uVar5 == 2)) {
    pvVar9 = *(undefined * PTR32 *)(this + 0x1a0);
    this[0x4ef] = (undefined1)0x1;
    if ((pvVar9 != (undefined *)0x0) && (*(char *)((int)pvVar9 + 0x88) != '\x01')) {
      F_0059dde0(pvVar9,1);
    }
  }
  if ((*(byte *)(param_2 + 0x438) & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)(param_2 + 0x43c);
  }
  if ((uVar5 & 0x10000) != 0) {
    pAVar12 = (undefined *)(uVar5 & 0xffff);
    if (pAVar12 < (undefined *)0x11) {
      if (pAVar12 != (undefined *)0x0) goto LAB_008a80d9;
      if ((*(byte *)((*(int *)(gen_frame + 0x10)) + 0x440) & 0xf) == 0) {
        *(undefined4 *)(this + 0x318) = 0;
      }
      else {
        *(undefined4 *)(this + 0x318) = *(undefined4 *)((*(int *)(gen_frame + 0x10)) + 0x444);
      }
    }
    else {
      pAVar12 = (undefined *)0x10;
LAB_008a80d9: ;
      pAVar16 = this + 0x318;
      pbVar13 = (byte *)((*(int *)(gen_frame + 0x10)) + 0x440);
      (*(undefined * PTR32 *)(gen_frame + 0x14)) = pAVar12;
      do {
        if ((*pbVar13 & 0xf) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined4 *)(pbVar13 + 4);
        }
        *(undefined4 *)pAVar16 = uVar6;
        pbVar13 = pbVar13 + 8;
        pAVar16 = pAVar16 + 4;
        pAVar1 = (*(undefined * PTR32 *)(gen_frame + 0x14)) + -1;
        (*(undefined * PTR32 *)(gen_frame + 0x14)) = pAVar1;
      } while (pAVar1 != (undefined *)0x0);
    }
    piVar3 = *(int * PTR32 *)(this + 0x1b4);
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,(uint)(pAVar12 != (undefined *)0x0));
      F_005b2b20(*(undefined * PTR32 *)(this + 0x1b4),*(undefined4 *)(this + 0x4a0),0);
      F_0059ead0(piVar10,pAVar12,this + 0x318,1);
      uVar5 = (int)uVar5 >> 0x11 & 0xffff;
      if ((piVar10 == (int *)0x0) ||
         (uVar8 = ((code *)*(gen_code32 *)(*piVar10 + 0x7c))(piVar10), (int)uVar5 < (int)uVar8)) {
        *(uint *)(this + 0x494) = uVar5;
      }
      else {
        *(undefined4 *)(this + 0x494) = 0xffffffff;
        uVar5 = 0;
      }
      F_0059caa0(*(undefined * PTR32 *)(this + 0x1b4),uVar5);
    }
  }
  iVar15 = (*(int *)(gen_frame + 0x10));
  if ((*(byte *)((*(int *)(gen_frame + 0x10)) + 0x30) & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)((*(int *)(gen_frame + 0x10)) + 0x34);
  }
  if ((uVar5 & 0x10000) != 0) {
    uVar5 = (int)uVar5 >> 0x11 & 0xffff;
    if (((*(int * PTR32 *)(gen_frame + 0xc)) == (int *)0x0) ||
       (uVar8 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0xc)) + 0x7c))((*(int * PTR32 *)(gen_frame + 0xc))), (int)uVar8 <= (int)uVar5)) {
      *(undefined4 *)(this + 0x490) = 0xffffffff;
      F_00562c40(*(undefined * PTR32 *)(this + 0x1b0));
    }
    else {
      *(uint *)(this + 0x490) = uVar5;
      F_0059caa0(*(undefined * PTR32 *)(this + 0x1b0),uVar5);
    }
  }
  if ((*(byte *)(iVar15 + 0x6b8) & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)(iVar15 + 0x6bc);
  }
  if ((uVar5 & 0x10000) != 0) {
    *(uint *)(this + 0x4b0) = uVar5 & 0xffff;
    F_007ae170(this,(int)uVar5 >> 0x11 & 0xffff);
    ((uint *)(gen_frame + 0x18))[0] = 0x65;
    ((uint *)(gen_frame + 0x18))[1] = 0x65;
    ((uint *)(gen_frame + 0x18))[2] = 0x66;
    ((uint *)(gen_frame + 0x18))[3] = 0x67;
    ((uint *)(gen_frame + 0x18))[4] = 0x68;
    ((uint *)(gen_frame + 0x18))[5] = 0x69;
    ((uint *)(gen_frame + 0x18))[6] = 0x6a;
    ((uint *)(gen_frame + 0x18))[7] = 0x6b;
    if (*(uint *)(this + 0x4b0) < 8) {
      F_0059d640(*(undefined * PTR32 *)(this + 0x1c0),((uint *)(gen_frame + 0x18))[(int)(*(uint *)(this + 0x4b0))]);
      uVar5 = 0;
      if (*(int *)(this + 0x4b0) != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x14)) = this + 0x1c4;
        pbVar13 = (byte *)((*(int *)(gen_frame + 0x10)) + 0x678);
        do {
          if (((*pbVar13 & 0xf) != 0) && (*(int *)(pbVar13 + 4) != 0)) {
            F_00589280(*(undefined * PTR32 *)(*(undefined * PTR32 *)(gen_frame + 0x14)),*(int *)(pbVar13 + 4));
          }
          (*(undefined * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 *)(gen_frame + 0x14)) + 4;
          uVar5 = uVar5 + 1;
          pbVar13 = pbVar13 + 8;
        } while (uVar5 < *(uint *)(this + 0x4b0));
      }
    }
  }
  uVar6 = REFG(float, 0x1087f04);
  if ((*(byte *)((*(int *)(gen_frame + 0x10)) + 0x28) & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)((*(int *)(gen_frame + 0x10)) + 0x2c);
  }
  if ((uVar5 & 1) != 0) {
    *(undefined4 *)(this + 0x24c) = REFG(float, 0x1087f04);
    *((undefined4 *)GEN_TOP((this + (*(uint *)(this + 0x4a4) >> 2 & 1) * 4 + 0x358))) = uVar6;
    F_008915c0(this,1);
    F_0084fec0(this);
    uVar5 = (int)((double)*(float *)(this + 0x35c) * *(double *)&REFG(undefined, 0x1088118)) << 8 |
            (int)(*(double *)&REFG(undefined, 0x1088118) * (double)*(float *)(this + 0x358));
    if (this[0x4f1] != (undefined1)0x0) {
      uVar5 = uVar5 | 0x10000;
    }
    if (this[0x4f0] != (undefined1)0x0) {
      uVar5 = uVar5 | 0x20000;
    }
    pcVar4 = *(gen_code32 *)(*(int *)this + 0x7c);
    *(uint *)(this + 0xfc) = uVar5;
    (*pcVar4)(this,1);
  }
  if ((*(byte *)((*(int *)(gen_frame + 0x10)) + 0x20) & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)((*(int *)(gen_frame + 0x10)) + 0x24);
  }
  *(uint *)(this + 0x4a4) = uVar5;
  uVar5 = uVar5 >> 2 & 1;
  uVar6 = *(undefined4 *)(this + uVar5 * 4 + 0x358);
  *(undefined4 *)(this + 0x24c) = uVar6;
  *(undefined4 *)(this + uVar5 * 4 + 0x358) = uVar6;
  F_008915c0(this,1);
  if (((byte)this[0xf9] & 1) != 0) {
    this[0x4ed] = (undefined1)0x0;
    uVar5 = F_0055e2f0(this,0xd);
    if (((uVar5 == 0) || (pvVar9 = (undefined *)F_00559c20(uVar5), pvVar9 == (undefined *)0x0)) ||
       (uVar5 = F_005613a0(pvVar9), uVar5 != 6)) {
      pvVar9 = (undefined *)0x0;
    }
    F_0059dbe0(pvVar9,(int)(((float10)*(float *)(this + 0x24c) - (float10)*(double *)&REFG(undefined, 0x1094878)
                              ) * (float10)*(double *)&REFG(undefined, 0x1094788)),1);
    this[0x4ed] = (undefined1)0x1;
  }
  uVar5 = (int)((double)*(float *)(this + 0x35c) * *(double *)&REFG(undefined, 0x1088118)) << 8 |
          (int)(*(double *)&REFG(undefined, 0x1088118) * (double)*(float *)(this + 0x358));
  if (this[0x4f1] != (undefined1)0x0) {
    uVar5 = uVar5 | 0x10000;
  }
  if (this[0x4f0] != (undefined1)0x0) {
    uVar5 = uVar5 | 0x20000;
  }
  pcVar4 = *(gen_code32 *)(*(int *)this + 0x7c);
  *(uint *)(this + 0xfc) = uVar5;
  (*pcVar4)(this,1);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x194) + 0x28))))
            (*(int * PTR32 *)(this + 0x194),(uint)(~(byte)this[0x4a4] & 1));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x198) + 0x28))))
            (*(int * PTR32 *)(this + 0x198),(uint)(~(byte)this[0x4a4] & 1));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1ac) + 0x28))))
            (*(int * PTR32 *)(this + 0x1ac),(uint)(~(byte)this[0x4a4] & 1));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x19c) + 0x28))))
            (*(int * PTR32 *)(this + 0x19c),(uint)(~(byte)(*(uint *)(this + 0x4a4) >> 1) & 1));
  bVar17 = GEN_ISNAN(*(float *)(this + 0x24c)) || GEN_ISNAN(REFG(float, 0x10c2084));
  if ((bVar17 == (bVar17 || *(float *)(this + 0x24c) == REFG(float, 0x10c2084))) &&
     ((*(uint *)(this + 0x4a4) >> 2 & 1) == 0)) {
    uVar11 = 1;
  }
  else {
    uVar11 = 0;
  }
  if (*(int *)(this + 0x184) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(this + 0x184) + 0xbc))) = uVar11;
  }
  F_008915c0(this,1);
  fVar18 = *(float *)(this + 0x480);
  (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar18)));
  if ((float10)0 < (float10)fVar18) {
    fVar2 = *(float *)(this + 0x484);
    (*(int * PTR32 *)(gen_frame + 0xc)) = ((int *)(uintptr_t)gen_fl2bits((float)(fVar2)));
    if ((float10)0 < (float10)fVar2) {
      F_0084ff30(this,fVar18,fVar2);
      *(undefined4 *)(this + 0x480) = 0;
      *(undefined4 *)(this + 0x484) = 0;
      goto LAB_008a85b1;
    }
  }
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x54))(this,0);
  fVar18 = (float)(uVar5 & 0xffff);
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x50))(this,0);
  F_0084ff30(this,(float)(uVar5 & 0xffff),fVar18);
LAB_008a85b1: ;
  this[0x4f5] = (undefined1)0x0;
  this[0x4fb] = (undefined1)0x0;
  F_007ae070(this);
  if (*(int *)(this + 0x4ac) != -1) {
    F_0084fde0(this,*(int *)(this + 0x4ac));
    *(undefined4 *)(this + 0x4ac) = 0xffffffff;
  }
  if ((*(byte *)((*(int *)(gen_frame + 0x10)) + 0x6c0) & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)((*(int *)(gen_frame + 0x10)) + 0x6c4);
  }
  if ((uVar5 & 0xff) != 0xffffffff) {
    AVar14 = SUB41(uVar5,0);
    if (AVar14 == (undefined1)0x0) {
      uVar8 = (uint)(byte)this[0x4f9];
    }
    else {
      uVar8 = 0;
    }
    F_00587960(this,uVar8,0);
    if (AVar14 == (undefined1)0x0) {
      F_007ae610(this);
    }
    else {
      uVar8 = F_0055dcb0();
      piVar10 = (int *)F_0057f810(*(undefined * PTR32 *)(uVar8 + 0x14),uVar5 & 0xff);
      if (piVar10 != (int *)0x0) {
        uVar5 = F_0055dcb0();
        uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 0x14) + 0x3c))))(*(int * PTR32 *)(uVar5 + 0x14));
        if ((((char)uVar5 != '\0') && ((*(byte *)((int)piVar10 + 0xf9) & 4) == 0)) &&
           ((*(byte *)(piVar10 + 0x3e) & 1) == 0)) {
          ((code *)*(gen_code32 *)(*piVar10 + 0x18))(piVar10,0,0);
        }
        this[0x4fa] = AVar14;
      }
    }
  }
  F_00c47745(((uint *)(gen_frame + 0x18))[8] ^ (uint)(uint)(gen_frame + 0x3c));
  return 1;
}

/* ref: Client::UI2::AddonAreaMap::vf55 */
unsigned int F_008a8690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a8690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  undefined * pvVar2;
  float fVar3;
  byte bVar4;
  byte bVar5;
  float10 fVar6;
  
  fVar3 = REFG(float, 0x10928e4);
  fVar6 = (float10)*(double *)&REFG(undefined, 0x1088118);
  fVar1 = ((float)GEN_TOF((((float10)GEN_TOD((*(uint *)(this + 0xfc) & 0xff))) / fVar6)));
  *(float *)(this + 0x358) = fVar1;
  if (((!GEN_ISNAN((float10)REFG(float, 0x10c2084)) && !GEN_ISNAN((float10)fVar1)) &&
       !((float10)REFG(float, 0x10c2084) <= (float10)fVar1)) || (fVar3 < fVar1)) {
    *(undefined4 *)(this + 0x358) = REFG(float, 0x1087f04);
  }
  fVar1 = ((float)GEN_TOF((((float10)GEN_TOD(((int)*(uint *)(this + 0xfc) >> 8 & 0xff))) / fVar6)));
  *(float *)(this + 0x35c) = fVar1;
  if (((!GEN_ISNAN((float10)REFG(float, 0x10c2084)) && !GEN_ISNAN((float10)fVar1)) &&
       !((float10)REFG(float, 0x10c2084) <= (float10)fVar1)) || (fVar3 < *(float *)(this + 0x358))) {
    *(undefined4 *)(this + 0x35c) = REFG(float, 0x1088138);
  }
  *(undefined4 *)(this + 0x24c) = *(undefined4 *)(this + 0x358);
  *((undefined4 *)GEN_TOP((this + (*(uint *)(this + 0x4a4) >> 2 & 1) * 4 + 0x358))) =
       *(undefined4 *)(this + 0x358);
  F_008915c0(this,1);
  F_0084fec0(this);
  pvVar2 = *(undefined * PTR32 *)(this + 0x1a4);
  bVar4 = ~(byte)this[0xfe] & 1;
  gen_piece_set(&(*(uint *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)gen_fl2bits(fVar1) >> 8)));
  (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),~(byte)this[0xfe]) & 0xffffff01;
  this[0x4f1] = (undefined1)(bVar4 == 0);
  if ((pvVar2 != (undefined *)0x0) && (*(byte *)((int)pvVar2 + 0x88) != bVar4)) {
    F_0059dde0(pvVar2,(*(uint *)(gen_frame + 0x8)));
  }
  bVar4 = ~(byte)(*(uint *)(this + 0xfc) >> 0x11);
  bVar5 = bVar4 & 1;
  this[0x4f0] = (undefined1)(bVar5 == 0);
  pvVar2 = *(undefined * PTR32 *)(this + 0x1a8);
  (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),bVar4) & 0xffffff01;
  if ((pvVar2 != (undefined *)0x0) && (*(byte *)((int)pvVar2 + 0x88) != bVar5)) {
    F_0059dde0(pvVar2,(*(uint *)(gen_frame + 0x8)));
  }
  F_00850340(this);
  return 0;
}

/* ref: FUN_008a87e0 */
uint F_008a87e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a87e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  char * pcVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  
  iVar12 = *(int *)((int)param_1 + 0x184);
  uVar3 = 0;
  if (iVar12 != 0) {
    fVar5 = (float10)*(float *)((int)param_1 + 0x240);
    fVar8 = (float10)1;
    fVar9 = ((float10)*(float *)((int)param_1 + 0x250) *
            ((float10)((float)GEN_TOF(((float10)(int)*(short *)param_2 -
                             (float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)(iVar12 + 0x88) + 0x30))) -
                                             (float10)(int)*(short *)(iVar12 + 0x290))))))) *
            (float10)*(double *)&REFG(undefined, 0x10c4488))) / fVar5 + fVar8;
    fVar6 = (((float10)((float)GEN_TOF(((float10)(int)*(short *)(param_2 + 2) -
                              (float10)((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)(iVar12 + 0x88) + 0x34))) -
                                              (float10)(int)*(short *)(iVar12 + 0x292))))))) *
             (float10)*(double *)&REFG(undefined, 0x10c4488)) * (float10)*(float *)((int)param_1 + 0x250)) / fVar5
            + fVar8;
    fVar1 = (float)fVar6;
    fVar7 = (float10)(float)fVar9;
    if (((((float10)1 <= fVar7) &&
         (fVar8 = (float10)(float)((float10)*(double *)&REFG(undefined, 0x10d7900) / fVar5 + fVar8),
         fVar7 <= fVar8)) && (REFG(float, 0x1087f04) <= fVar1)) && ((float10)fVar1 <= fVar8)) {
      iVar4 = (int)fVar9;
      iVar2 = (int)fVar6;
      iVar12 = (int)param_1 + 0x368;
      iVar11 = (int)param_1 + 0x360;
      pcVar10 = "%s%d %s%d";
      uVar3 = F_0055dcb0();
      uVar3 = F_0055baf0(uVar3,pcVar10,iVar11,iVar4,iVar12,iVar2);
      F_00584110(*(undefined * PTR32 *)((int)param_1 + 0x1f0),uVar3);
      uVar13 = 1;
    }
    else {
      uVar13 = 0;
    }
    F_0055a300(*(undefined * PTR32 *)((int)param_1 + 0x1ec),uVar13);
    uVar3 = F_0080d430(param_1,(uint)*(ushort *)param_2,(uint)*(ushort *)(param_2 + 2),0xe);
    if (uVar3 != *(uint *)((int)param_1 + 0x4ac)) {
      F_0084fde0(param_1,*(uint *)((int)param_1 + 0x4ac));
    }
    if (uVar3 != 0xffffffff) {
      F_0084fca0(param_1,param_2,uVar3);
    }
    *(uint *)((int)param_1 + 0x4ac) = uVar3;
    uVar3 = F_007ae070(param_1);
  }
  return uVar3;
}

/* ref: FUN_008a8970 */
unsigned int F_008a8970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a8970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(char *)((int)this + 0x4ee) != '\x01') {
    F_00891290(this,param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_008a8990 */
uint F_008a8990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a8990u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  uint in_EAX = 0;
  
  if ((*(byte *)((int)param_1 + 0x4a4) & 1) == 0) {
    fVar1 = ((float)GEN_TOF(((float10)(int)*(short *)(param_2 + 4) * (float10)*(double *)&REFG(undefined, 0x1094878) +
                   (float10)*(float *)((int)param_1 + 0x24c))));
    *(float *)((int)param_1 + 0x24c) = fVar1;
    *((float *)GEN_TOP(((int)param_1 + (*(uint *)((int)param_1 + 0x4a4) >> 2 & 1) * 4 + 0x358))) = fVar1;
    F_008915c0(param_1,1);
    F_0084fec0(param_1);
    in_EAX = F_007ae540(param_1);
  }
  return in_EAX;
}

/* ref: FUN_008a8a00 */
uint F_008a8a00(unsigned int gen_a0)
{
  GEN_ENTER(0x8a8a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  uint uVar2;
  
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x24c) + (float10)*(double *)&REFG(undefined, 0x1094878))));
  *(float *)((int)this + 0x24c) = fVar1;
  *((float *)GEN_TOP(((int)this + (*(uint *)((int)this + 0x4a4) >> 2 & 1) * 4 + 0x358))) = fVar1;
  F_008915c0(this,1);
  F_0084fec0(this);
  uVar2 = F_007ae540(this);
  return uVar2;
}

/* ref: FUN_008a8a50 */
uint F_008a8a50(unsigned int gen_a0)
{
  GEN_ENTER(0x8a8a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  uint uVar2;
  
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x24c) - (float10)*(double *)&REFG(undefined, 0x1094878))));
  *(float *)((int)this + 0x24c) = fVar1;
  *((float *)GEN_TOP(((int)this + (*(uint *)((int)this + 0x4a4) >> 2 & 1) * 4 + 0x358))) = fVar1;
  F_008915c0(this,1);
  F_0084fec0(this);
  uVar2 = F_007ae540(this);
  return uVar2;
}

/* ref: FUN_008a8aa0 */
uint F_008a8aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a8aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  uint in_EAX = 0;
  float10 fVar2;
  
  if (*(char *)((int)param_1 + 0x4ed) == '\x01') {
    fVar2 = (float10)*(int *)param_2;
    if (*(int *)param_2 < 0) {
      fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar1 = (float)((float10)*(double *)&REFG(undefined, 0x1094878) + fVar2 * (float10)*(double *)&REFG(undefined, 0x1094878));
    *(float *)((int)param_1 + 0x24c) = fVar1;
    *((float *)GEN_TOP(((int)param_1 + (*(uint *)((int)param_1 + 0x4a4) >> 2 & 1) * 4 + 0x358))) = fVar1;
    F_008915c0(param_1,1);
    F_0084fec0(param_1);
    in_EAX = F_007ae540(param_1);
  }
  return in_EAX;
}

/* ref: FUN_008a8b10 */
uint F_008a8b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a8b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int in_ecx;
  undefined2 uVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  
  in_ecx = *(int *)((int)this + 0x200);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  if (in_ecx != 0) {
    (*(float *)(gen_frame + 0x18)) = *(float *)(in_ecx + 0x30);
    fVar3 = F_0055a750(in_ecx);
    fVar4 = (float10)(*(float *)(gen_frame + 0x18));
    (*(float *)(gen_frame + 0x18)) = *(float *)(in_ecx + 0x34);
    uVar1 = (undefined2)(int)(fVar3 + fVar4);
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x0)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 2)),uVar1);
    fVar4 = F_0055a760(in_ecx);
    uVar1 = (undefined2)(int)(fVar4 + (float10)(*(float *)(gen_frame + 0x18)));
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 2)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x0)) = CONCAT22(uVar1,(undefined2)(*(undefined4 *)(gen_frame + 0x0)));
  }
  if (param_1 == 0) {
    uVar2 = F_008a87e0(this,(uint)&(*(undefined4 *)(gen_frame + 0x0)));
  }
  else {
    uVar2 = param_1 - 1;
    if (uVar2 == 0) {
      F_00891290(this,&(*(undefined4 *)(gen_frame + 0x0)));
      uVar2 = F_0084fc00(this,&(*(undefined4 *)(gen_frame + 0x0)));
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_008a8bb0 */
unsigned int F_008a8bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8a8bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  
  cVar1 = (char)param_1;
  if (*(char *)((int)this + 0x4f7) != cVar1) {
    *(char *)((int)this + 0x4f7) = cVar1;
    F_0055a300(*(undefined * PTR32 *)((int)this + 0x200),param_1);
    if (cVar1 != '\0') {
      F_008a8b10(this,0);
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonMiniTalk::vf47 */
uint F_008a8bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a8bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  undefined1 AVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  byte * pbVar7;
  undefined4 uVar8;
  int iVar9;
  uint * this_00;
  int iVar10;
  undefined * pAVar11;
  float10 fVar12;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  iVar9 = *(int *)(param_1 + 0x88);
  uVar6 = *(uint *)(param_2 + 0x7c);
  (*(int *)(gen_frame + 0x1c)) = iVar9;
  (*(uint *)(gen_frame + 0xc)) = uVar6;
  if ((iVar9 != 0) && (uVar6 != 0)) {
    uVar6 = **(uint * PTR32 *)(iVar9 + 0x20);
    if (uVar6 == 2) {
      pAVar11 = this + 0x1a7;
      iVar9 = 10;
      do {
        *pAVar11 = (undefined1)((byte)*pAVar11 & 0xfe);
        F_0055a300(*(undefined * PTR32 *)(pAVar11 + -0x1b),0);
        pAVar11 = pAVar11 + 0x1c;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      uVar6 = *(uint *)(this + 0xf4) >> 0x14 & 0xf;
      if ((uVar6 != 5) && (uVar6 != 4)) {
        uVar6 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0,0);
        F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
        return uVar6;
      }
    }
    else if (0 < (int)uVar6) {
      (*(uint *)(gen_frame + 0x2c)) = 0;
      (*(int *)(gen_frame + 0x24)) = 0x14;
      pAVar11 = this + 0x194;
      do {
        iVar10 = (*(int *)(gen_frame + 0x24));
        iVar9 = *(int *)((*(int *)(gen_frame + 0x1c)) + 0x20);
        iVar3 = *(int *)(iVar9 + -0x10 + (*(int *)(gen_frame + 0x24)));
        (*(int *)(gen_frame + 0x8)) = *(int *)(iVar9 + -8 + (*(int *)(gen_frame + 0x24)));
        (*(uint *)(gen_frame + 0x20)) = *(uint *)(iVar9 + (*(int *)(gen_frame + 0x24)));
        (*(uint *)(gen_frame + 0x18)) = *(uint *)(iVar9 + -4 + (*(int *)(gen_frame + 0x24)));
        (*(uint *)(gen_frame + 0x14)) = *(uint *)(iVar9 + -0xc + (*(int *)(gen_frame + 0x24)));
        (*(float *)(gen_frame + 0x34)) = gen_bits2f(iVar3);
        (*(float *)(gen_frame + 0x30)) = *((float *)GEN_TOP(((*(uint *)(gen_frame + 0x2c)) + *(int *)((*(uint *)(gen_frame + 0xc)) + 0x20))));
        if (iVar3 == 0) {
          if (*(int *)(pAVar11 + 0xc) != 0) {
            pAVar11[0x13] = (undefined1)((byte)pAVar11[0x13] | 1);
            *(undefined4 *)(pAVar11 + 0xc) = 0;
            F_0059d640(*(undefined * PTR32 *)(pAVar11 + -4),4);
          }
        }
        else {
          bVar4 = F_005b8a10(this);
          if ((bVar4 != 0) && ((char)this[0x10e] < '\x01')) {
            ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,0);
          }
          if (gen_bits2f(*(int *)(pAVar11 + 0xc)) != (*(float *)(gen_frame + 0x34))) {
            pAVar11[0x13] = (undefined1)((byte)pAVar11[0x13] & 0xfe);
            *(float *)(pAVar11 + 0xc) = (*(float *)(gen_frame + 0x34));
            F_0055a300(*(undefined * PTR32 *)(pAVar11 + -8),1);
            F_0059d640(*(undefined * PTR32 *)(pAVar11 + -4),(uint)*(ushort *)(this + (*(int *)(gen_frame + 0x8)) * 2 + 0x2a4));
            (*(undefined4 *)(gen_frame + 0x38)) = 0;
            (*(undefined4 *)(gen_frame + 0x40)) = 0;
            (*(undefined4 *)(gen_frame + 0x48)) = 0;
            (*(undefined4 *)(gen_frame + 0x50)) = 0;
            F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),6);
            (*(float *)(gen_frame + 0x3c)) = (*(float *)(gen_frame + 0x30));
            F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),4);
            (*(undefined4 *)(gen_frame + 0x44)) = 0xc2;
            uVar6 = F_0055ab00(*(undefined4 *)pAVar11);
            F_005a2710(&(*(undefined4 *)(gen_frame + 0x48)),4);
            (*(uint *)(gen_frame + 0x4c)) = uVar6;
            bVar4 = F_0055ab50(*(undefined4 *)pAVar11);
            F_005a2710(&(*(undefined4 *)(gen_frame + 0x50)),4);
            (*(uint *)(gen_frame + 0x54)) = (uint)bVar4;
            uVar6 = F_0055dcb0();
            pbVar7 = ((byte *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar6 + 0x38) + 4))))
                                       (*(int * PTR32 *)(uVar6 + 0x38),((undefined1 *)(gen_frame + 0x0)),0x2a,4,&(*(undefined4 *)(gen_frame + 0x38)))));
            if ((*pbVar7 & 0xf) == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = *(undefined4 *)(pbVar7 + 4);
            }
            F_00584110(*(undefined * PTR32 *)pAVar11,uVar8);
            F_005a2670(((undefined1 *)(gen_frame + 0x0)));
            F_00577d20(*(undefined * PTR32 *)pAVar11,&(*(uint *)(gen_frame + 0x28)),((undefined1 *)(gen_frame + 0x10)),0,0,REFG(undefined4, 0x108cc50),0);
            uVar6 = F_00584550(*(undefined * PTR32 *)pAVar11);
            uVar5 = (ushort)(*(uint *)(gen_frame + 0x28));
            if (uVar5 < 0x27) {
LAB_008a8e1d: ;
              iVar9 = 0x41;
            }
            else if (uVar5 < 0xc2) {
              iVar9 = ((*(uint *)(gen_frame + 0x28)) & 0xffff) + 0x1b;
            }
            else {
              if (uVar5 < 0x27) goto LAB_008a8e1d;
              iVar9 = 0xdd;
            }
            (*(float *)(gen_frame + 0x34)) = gen_bits2f(iVar9);
            F_0055a060(*(undefined4 *)(pAVar11 + 4),iVar9);
            F_0055a060(*(undefined4 *)pAVar11,(*(uint *)(gen_frame + 0x28)));
            fVar12 = (float10)(int)gen_fl2bits((*(float *)(gen_frame + 0x34)));
            (*(float *)(gen_frame + 0x30)) = gen_bits2f((uint)*(ushort *)(this + 0x2b4));
            (*(float *)(gen_frame + 0x34)) = (float)(fVar12 * (float10)REFG(double, 0x1088108));
            fVar1 = ((float)GEN_TOF(((float10)*(ushort *)(this + 0x2b4) -
                           (float10)(float)(fVar12 * (float10)REFG(double, 0x1088108)))));
            (*(float *)(gen_frame + 0x30)) = fVar1;
            F_00559e70(*(undefined4 *)(pAVar11 + 4),fVar1);
            (*(float *)(gen_frame + 0x30)) = gen_bits2f((uint)*(ushort *)(this + 0x2ac));
            fVar1 = ((float)GEN_TOF(((float10)*(ushort *)(this + 0x2ac) - (float10)(*(float *)(gen_frame + 0x34)))));
            (*(float *)(gen_frame + 0x30)) = fVar1;
            F_00559e70(*(undefined4 *)pAVar11,fVar1);
            fVar12 = F_0055a750(*(undefined4 *)(pAVar11 + 8));
            (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(-fVar12));
            F_00559e70(*(undefined4 *)(pAVar11 + 8),((float)GEN_TOF(-fVar12)));
            (*(float *)(gen_frame + 0x34)) = 5.04467e-44;
            if (1 < uVar6) {
              (*(float *)(gen_frame + 0x34)) = gen_bits2f(uVar6 * 0x10 + 0x14);
            }
            iVar9 = (int)gen_fl2bits((*(float *)(gen_frame + 0x34))) - (uint)*(ushort *)(this + 0x2b2);
            F_0055a080(*(undefined4 *)(pAVar11 + 4),(uint)*(ushort *)(this + 0x2b2) + iVar9);
            F_0055a080(*(undefined4 *)pAVar11,
                         (uint)(ushort)(*(short *)(this + 0x2aa) + (short)iVar9));
            F_00559f00(*(undefined4 *)(pAVar11 + 4),
                         (float)(int)((uint)*(ushort *)(this + 0x2b6) - (int)gen_fl2bits((*(float *)(gen_frame + 0x34)))))
            ;
            F_00559f00(*(undefined4 *)pAVar11,
                         (float)(int)((uint)*(ushort *)(this + 0x2ae) - (int)gen_fl2bits((*(float *)(gen_frame + 0x34)))))
            ;
            F_00559f00(*(undefined4 *)(pAVar11 + 8),
                         (float)(int)(((uint)*(ushort *)(this + 0x2be) - (int)gen_fl2bits((*(float *)(gen_frame + 0x34))))
                                     + iVar9));
            this_00 = &(*(uint *)(gen_frame + 0x58));
            (*(float *)(gen_frame + 0x34)) = 4.2039e-45;
            do {
              this_00 = this_00 + -2;
              F_005a2670(this_00);
              iVar9 = (int)gen_fl2bits((*(float *)(gen_frame + 0x34))) + -1;
              (*(float *)(gen_frame + 0x34)) = gen_bits2f(iVar9);
              iVar10 = (*(int *)(gen_frame + 0x24));
            } while (-1 < iVar9);
          }
          AVar2 = pAVar11[0x13];
          if (((byte)AVar2 >> 1 & 1) != (*(uint *)(gen_frame + 0x20))) {
            (*(float *)(gen_frame + 0x30)) = gen_bits2f((*(uint *)(gen_frame + 0x20)));
            fVar12 = (float10)(int)(*(uint *)(gen_frame + 0x20));
            pAVar11[0x13] =
                 (undefined1)(((char)(*(uint *)(gen_frame + 0x20)) * '\x02' ^ (byte)AVar2) & 2 ^ (byte)AVar2);
            if ((int)(*(uint *)(gen_frame + 0x20)) < 0) {
              fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
            }
            fVar1 = ((float)GEN_TOF(((float10)1 - (fVar12 + fVar12))));
            (*(float *)(gen_frame + 0x30)) = fVar1;
            F_00568230(*(undefined4 *)(pAVar11 + 8),fVar1);
            *(short *)(pAVar11 + 0x10) = (short)(*(uint *)(gen_frame + 0x20)) * -0xe + 7;
          }
          F_00559da0(*(undefined4 *)(pAVar11 + -8),
                       (float)(ushort)((short)((*(uint *)(gen_frame + 0x18)) >> 0x10) + *(short *)(pAVar11 + 0x10)),
                       (float)((*(uint *)(gen_frame + 0x18)) & 0xffff));
          if ((byte)pAVar11[0x12] != (*(uint *)(gen_frame + 0x14))) {
            F_008917f0(this,(uint)(byte)pAVar11[0x12],(*(uint *)(gen_frame + 0x14)));
          }
        }
        uVar6 = (*(uint *)(gen_frame + 0x2c)) + 4;
        pAVar11 = pAVar11 + 0x1c;
        (*(int *)(gen_frame + 0x24)) = iVar10 + 0x14;
        (*(uint *)(gen_frame + 0x2c)) = uVar6;
      } while (uVar6 < 0x28);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar6;
}

/* ref: FUN_008a9060 */
uint F_008a9060(unsigned int gen_a0)
{
  GEN_ENTER(0x8a9060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d790c));
  F_00954550((undefined *)((int)this + 0x38c4));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonPopUpText::vf2 */
unsigned int F_008a9080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8a9080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * puVar1;
  int iVar2;
  
  if ((short)param_1 == 0x41) {
    puVar1 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)(this + 0x38c4)));
    while ((iVar2 = 0, puVar1 != *(undefined4 * PTR32 *)(this + 0x38c4) &&
           (iVar2 = puVar1[2], *(short *)(iVar2 + 8) != param_2))) {
      puVar1 = (undefined4 *)*puVar1;
    }
    F_007aef70(iVar2,param_4);
  }
  return 0;
}

/* ref: FUN_008a90d0 */
uint F_008a90d0(unsigned int gen_a0)
{
  GEN_ENTER(0x8a90d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d7a0c));
  F_009545f0((undefined *)((int)this + 0x12fc));
  iVar4 = 9;
  piVar5 = (int *)((int)this + 0x12d4);
  do {
    piVar1 = (int *)piVar5[-8];
    piVar2 = (int *)*piVar1;
    piVar6 = piVar5 + -8;
    *piVar1 = (int)piVar1;
    *(int *)(*piVar6 + 4) = *piVar6;
    piVar5[-7] = 0;
    if (piVar2 != (int *)*piVar6) {
      do {
        piVar5 = (int *)*piVar2;
        F_00429760(piVar2,0xc,400);
        piVar2 = piVar5;
      } while (piVar5 != (int *)*piVar6);
    }
    F_00429760(*piVar6,0xc,400);
    iVar4 = iVar4 + -1;
    piVar5 = piVar6;
  } while (-1 < iVar4);
  uVar3 = F_00590600(this);
  return uVar3;
}

/* ref: FUN_008a9150 */
uint F_008a9150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a9150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int * piVar1;
  undefined4 * puVar2;
  undefined2 uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  ushort uVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined2 extraout_var = 0;
  
  puVar9 = param_1;
  if (((param_1 != param_2) && (param_1 < &REFG(undefined, 0xa))) && (param_2 < &REFG(undefined, 0xa))) {
    piVar1 = (int *)((int)((int)(uintptr_t)param_1) * 0x20 + 0x1194 + (int)this);
    uVar3 = *(undefined2 *)((int)piVar1 + 0xe);
    puVar2 = (undefined4 *)((int)((int)(uintptr_t)param_2) * 0x20 + 0x1194 + (int)this);
    *(undefined2 *)((int)piVar1 + 0xe) = *(undefined2 *)((int)puVar2 + 0xe);
    *(undefined2 *)((int)puVar2 + 0xe) = uVar3;
    puVar9 = (undefined4 *)*piVar1;
    for (puVar4 = (undefined4 *)*puVar9; puVar4 != puVar9; puVar4 = (undefined4 *)*puVar4) {
      uVar7 = *(ushort *)((int)piVar1 + 0xe);
      puVar5 = (undefined4 *)puVar4[2];
      if ((puVar5 != (undefined4 *)0x0) && (uVar8 = F_0055a2a0(*puVar5), (ushort)uVar8 != uVar7))
      {
        *(undefined1 *)((int)this + 0x12f8) = 1;
        F_0055a2b0(*puVar5,(uint)uVar7);
      }
    }
    puVar4 = (undefined4 *)*puVar2;
    puVar9 = puVar4;
    for (puVar5 = (undefined4 *)*puVar4; puVar5 != puVar4; puVar5 = (undefined4 *)*puVar5) {
      puVar6 = (undefined4 *)puVar5[2];
      uVar7 = *(ushort *)((int)puVar2 + 0xe);
      if ((puVar6 != (undefined4 *)0x0) &&
         (puVar9 = (undefined4 *)F_0055a2a0(*puVar6), (ushort)puVar9 != uVar7)) {
        *(undefined1 *)((int)this + 0x12f8) = 1;
        uVar7 = F_0055a2b0(*puVar6,(uint)uVar7);
        puVar9 = ((undefined4 *)GEN_TOP(CONCAT22(extraout_var,uVar7)));
      }
    }
    if (*(char *)((int)this + 0x12f8) != '\0') {
      puVar9 = (undefined4 *)F_00591da0((undefined *)((int)this + 0x24));
      *(undefined1 *)((int)this + 0x12f8) = 0;
    }
  }
  return (uint)puVar9;
}

/* ref: FUN_008a9260 */
uint F_008a9260(unsigned int gen_a0)
{
  GEN_ENTER(0x8a9260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d7b0c));
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
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  puVar1 = (undefined4 *)((int)this + 0x214);
  iVar2 = 0x3f;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 3;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1 = puVar1 + 8;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x20;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) & 0xbf;
  return (uint)this;
}

/* ref: FUN_008a9340 */
uint F_008a9340(unsigned int gen_a0)
{
  GEN_ENTER(0x8a9340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d7b0c));
  iVar2 = 0x3f;
  this_00 = (undefined *)((int)this + 0xa20);
  do {
    this_00 = (undefined *)((int)this_00 + -0x20);
    F_005a2670(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  iVar2 = *(int *)((int)this + 0x1d0);
  if (iVar2 != 0) {
    F_00429760(iVar2,(*(int *)((int)this + 0x1d8) - iVar2 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined4 *)((int)this + 0x1d8) = 0;
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: FUN_008a93b0 */
byte F_008a93b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8a93b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  undefined4 in_esi = (undefined4)gen_a1;
  undefined4 in_edi = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  byte * param_5 = (byte *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  int iVar2;
  undefined * this;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  byte * pbVar6;
  
  uVar5 = 0;
  do {
    F_00589280(*(undefined * PTR32 *)(in_ecx[0x74] + uVar5 * 4),"");
    iVar2 = *(int *)(in_ecx[0x74] + uVar5 * 4);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(iVar2 + 0x70);
    }
    F_00559e70(uVar1,(float)(int)(short)((short)in_ecx[0x81] * (short)uVar5 + (short)in_ecx[0x80])
                );
    uVar5 = uVar5 + 1;
  } while (uVar5 < 7);
  iVar2 = in_ecx[0x286];
  in_ecx[0x84] = -1;
  in_ecx[0x83] = 0;
  ((byte *)(gen_frame + 0x0))[0] = 0;
  ((byte *)(gen_frame + 0x0))[1] = 0;
  ((byte *)(gen_frame + 0x0))[2] = 0;
  ((byte *)(gen_frame + 0x0))[3] = 0;
  ((byte *)(gen_frame + 0x0))[4] = 0;
  ((byte *)(gen_frame + 0x0))[5] = 0;
  ((byte *)(gen_frame + 0x0))[6] = 0;
  ((byte *)(gen_frame + 0x0))[7] = 0;
  ((byte *)(gen_frame + 0x0))[8] = 0;
  ((byte *)(gen_frame + 0x0))[9] = 0;
  ((byte *)(gen_frame + 0x0))[10] = 0;
  ((byte *)(gen_frame + 0x0))[0xb] = 0;
  ((byte *)(gen_frame + 0x0))[0xc] = 3;
  ((byte *)(gen_frame + 0x0))[0xd] = 0;
  ((byte *)(gen_frame + 0x0))[0xe] = 0;
  ((byte *)(gen_frame + 0x0))[0xf] = 0;
  ((byte *)(gen_frame + 0x0))[0x10] = 0;
  ((byte *)(gen_frame + 0x0))[0x11] = 0;
  ((byte *)(gen_frame + 0x0))[0x12] = 0;
  ((byte *)(gen_frame + 0x0))[0x13] = 0;
  ((byte *)(gen_frame + 0x0))[0x14] = 0;
  ((byte *)(gen_frame + 0x0))[0x15] = 0;
  ((byte *)(gen_frame + 0x0))[0x16] = 0;
  ((byte *)(gen_frame + 0x0))[0x17] = 0;
  ((byte *)(gen_frame + 0x0))[0x18] = 0;
  ((byte *)(gen_frame + 0x0))[0x19] = 0;
  ((byte *)(gen_frame + 0x0))[0x1a] = 0;
  ((byte *)(gen_frame + 0x0))[0x1b] = 0;
  ((byte *)(gen_frame + 0x0))[0x1c] = 0;
  ((byte *)(gen_frame + 0x0))[0x1d] = 0;
  ((byte *)(gen_frame + 0x0))[0x1e] = 0;
  ((byte *)(gen_frame + 0x0))[0x1f] = 0;
  if (iVar2 < 0x40) {
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)) = in_ecx[iVar2 * 8 + 0x85];
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)) = in_ecx[iVar2 * 8 + 0x86];
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) = in_ecx[iVar2 * 8 + 0x87];
    F_00596cd0(((byte *)(gen_frame + 0x0)) + 0xc,in_ecx + iVar2 * 8 + 0x88);
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 20)) = in_ecx[iVar2 * 8 + 0x8a];
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 24)) = in_ecx[iVar2 * 8 + 0x8b];
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 28)) = in_ecx[iVar2 * 8 + 0x8c];
  }
  else {
    in_ecx[0x286] = 0;
  }
  if (param_5 != (byte *)0x0) {
    if ((param_5[0x10] & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(param_5 + 0x14);
    }
    in_ecx[0x7f] = uVar5;
    if (7 < uVar5) {
      in_ecx[0x7f] = 7;
    }
    (*(uint *)(gen_frame + 0x28)) = 0;
    if (in_ecx[0x7f] != 0) {
      piVar4 = in_ecx + 0x86;
      pbVar6 = param_5 + 0x2c;
      do {
        if ((pbVar6[-0x14] & 0xf) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(pbVar6 + -0x10);
        }
        piVar4[-1] = iVar2;
        if ((pbVar6[-0xc] & 0xf) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(pbVar6 + -8);
        }
        *piVar4 = iVar2;
        if ((pbVar6[-4] & 0xf) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)pbVar6;
        }
        piVar4[1] = iVar2;
        if ((pbVar6[4] & 0xf) == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = *(undefined4 *)(pbVar6 + 8);
        }
        (*(undefined4 *)(gen_frame + 0x24)) = uVar1;
        (*(undefined4 *)(gen_frame + 0x20)) = 6;
        F_00596cd0(piVar4 + 2,&(*(undefined4 *)(gen_frame + 0x20)));
        F_005a2670(&(*(undefined4 *)(gen_frame + 0x20)));
        if ((pbVar6[0xc] & 0xf) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(pbVar6 + 0x10);
        }
        piVar4[4] = iVar2;
        uVar5 = (*(uint *)(gen_frame + 0x28)) + 1;
        piVar4 = piVar4 + 8;
        pbVar6 = pbVar6 + 0x28;
        (*(uint *)(gen_frame + 0x28)) = uVar5;
      } while (uVar5 < (uint)in_ecx[0x7f]);
    }
    if ((*param_5 & 0xf) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_5 + 4);
    }
    in_ecx[0x83] = iVar2;
    if ((param_5[8] & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_5 + 0xc);
    }
    F_008924c0(in_ecx,uVar1,1);
  }
  uVar5 = F_0055dcb0();
  uVar5 = F_0055b990(uVar5);
  iVar2 = *(int *)(uVar5 + 0x30);
  uVar5 = 0;
  if (in_ecx[0x7f] != 0) {
    piVar4 = in_ecx + 0x8c;
    do {
      piVar4[-1] = *((int *)GEN_TOP((*(int *)(iVar2 + 0x20) + 4 + uVar5 * 4)));
      *piVar4 = *((int *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x104 + uVar5 * 4)));
      uVar5 = uVar5 + 1;
      piVar4 = piVar4 + 8;
    } while (uVar5 < (uint)in_ecx[0x7f]);
  }
  iVar2 = in_ecx[0x286];
  if (((iVar2 < 0) || (in_ecx[0x7f] <= iVar2)) || (in_ecx[iVar2 * 8 + 0x86] != (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 4)))) {
    uVar5 = 0;
    in_ecx[0x286] = 0;
    if (in_ecx[0x7f] != 0) {
      piVar4 = in_ecx + 0x8b;
      do {
        if (*piVar4 == 0) {
          in_ecx[0x286] = uVar5;
          break;
        }
        uVar5 = uVar5 + 1;
        piVar4 = piVar4 + 8;
      } while (uVar5 < (uint)in_ecx[0x7f]);
    }
    iVar2 = in_ecx[0x286];
  }
  in_ecx[0x84] = iVar2;
  F_00853260(in_ecx);
  piVar4 = *(int * PTR32 *)(in_ecx[0x74] + in_ecx[0x286] * 4);
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x3c))(piVar4,in_ecx,0);
  this = (undefined *)F_0055dcb0();
  F_0059b300(this,uVar5,in_edi,in_esi);
  F_00584110((undefined *)in_ecx[0x61],&REFG(undefined, 0x10c21cc));
  iVar2 = *in_ecx;
  in_ecx[0x82] = 0;
  uVar5 = F_0055dcb0();
  uVar5 = F_0055b9a0(uVar5);
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b990(uVar3);
  ((code *)*(gen_code32 *)(iVar2 + 0xbc))(in_ecx,uVar3,uVar5);
  F_005a2670(((byte *)(gen_frame + 0x0)) + 0xc);
  return 1;
}

/* ref: FUN_008a96c0 */
uint F_008a96c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8a96c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  F_005a2710(&(*(undefined4 *)(gen_frame + 0x14)),3);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  if ((*(char *)(param_3 + 1) == '\0') || (*(char *)(param_3 + 1) == '\x02')) {
    switch((unsigned int)(uintptr_t)(*param_3)) {
    case 2: ;
    case 3: ;
      uVar1 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 4))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0xc)),0x1f,1,&(*(undefined4 *)(gen_frame + 0x14)));
      F_005a2670(((undefined1 *)(gen_frame + 0xc)));
      F_00557670(param_2,0);
      break;
    case 7: ;
    case 8: ;
    case 9: ;
    case 10: ;
      F_008922a0(this,param_1,param_2,param_3);
      F_00557670(param_2,0);
      uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
      return uVar1;
    }
  }
  uVar1 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeCharaName::vf25 */
uint F_008a9790(unsigned int gen_a0)
{
  GEN_ENTER(0x8a9790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0,0);
  if (*(undefined * PTR32 *)(this + 0x180) != (undefined *)0x0) {
    uVar1 = F_00896ac0(*(undefined * PTR32 *)(this + 0x180),0xffffffff,0,0,"");
  }
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeFeature::vf2 */
unsigned int F_008a97c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8a97c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  
  if ((((((byte)this[0xf9] & 1) != 0) &&
       (this_00 = *(undefined * PTR32 *)(this + 0x180), this_00 != (undefined *)0x0)) &&
      (uVar1 = *(uint *)(this + 0xf4) >> 0x14 & 0xf, uVar1 != 5)) && (uVar1 != 4)) {
    switch((unsigned int)(uintptr_t)((undefined2)param_1)) {
    case 6: ;
      uVar1 = F_005bdbc0((undefined *)*param_3,1);
      if (*(int *)(uVar1 + 0x110) != *(int *)(this + 0x28c)) {
        F_007c4f00(this,*(int *)(uVar1 + 0x110));
        return 0;
      }
      break;
    case 7: ;
      if (*(int *)(this + 0x290) != -1) {
        F_007c4f60(this,*(int *)(this + 0x290));
        return 0;
      }
      F_007c50d0(this);
      return 0;
    case 0xc: ;
      if (((char)param_4[1] == '\0') && ((*param_4 == 2 || (*param_4 == 3)))) {
        F_00896ac0(this_00,0xffffffff,0,0,"");
        return 0;
      }
      break;
    case 0xf: ;
      F_0081c250(this_00,param_3,param_4);
      break;
    case 0x17: ;
      if (param_2 == 0x26) {
        F_00896ac0(this_00,0xffffffff,0,0,"");
        return 0;
      }
      if (param_2 == 0x25) {
        (*(undefined4 *)(gen_frame + 0x4)) = 3;
        (*(undefined4 *)(gen_frame + 0x8)) = 100;
        F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
        F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
        return 0;
      }
      if (param_2 == 4) {
        F_007c5140(this);
        return 0;
      }
      uVar1 = F_005bdbc0((undefined *)*param_3,1);
      F_007c4f60(this,*(undefined4 *)(uVar1 + 0x110));
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_008a9960 */
uint F_008a9960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8a9960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x180) != (undefined *)0x0) {
    this = (undefined *)F_00896ac0(*(undefined * PTR32 *)((int)this + 0x180),param_2,
                                *(undefined4 *)((int)this + 0x28c),param_1,"");
  }
  return (uint)this;
}

/* ref: FUN_008a99b0 */
uint F_008a99b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8a99b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  
  piVar1 = param_2;
  if (((char)param_2[1] == '\0') &&
     ((piVar1 = (int *)*param_2, piVar1 == (int *)0x2 || (piVar1 == (int *)0x3)))) {
    piVar1 = (int *)F_00896ac0(this,param_3,0,0,"");
  }
  return (uint)piVar1;
}

/* ref: Client::UI2::AddonCharaMakeProgressSubRaceGender::vf2 */
uint F_008a99e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8a99e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint * param_4 = (uint *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint * puVar5;
  undefined4 uVar6;
  char * pcVar7;
  undefined4 uVar8;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(uint *)(gen_frame + 0x38)) = uVar1;
  if (((byte)this[0xf9] & 1) != 0) {
    this_00 = *(undefined * PTR32 *)(this + 0x180);
    if (((this_00 != (undefined *)0x0) && (uVar1 = *(uint *)(this + 0xf4) >> 0x14 & 0xf, uVar1 != 5)) &&
       (uVar1 != 4)) {
      uVar2 = param_1 & 0xffff;
      uVar1 = uVar2 - 6;
      if (uVar1 < 0x12) {
        uVar1 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x8a9e60) + uVar2 + 2)));
        switch((unsigned int)(uintptr_t)(uVar2)) {
        case 6: ;
          uVar1 = param_2 / 10;
          uVar2 = param_2 % 10;
          if (1 < uVar1) {
            uVar1 = *(uint *)(this + 0x1a8);
          }
          uVar3 = F_007c58b0(uVar2,uVar1);
          (*(uint *)(gen_frame + 0x1c)) = uVar3;
          (*(undefined4 *)(gen_frame + 0x10)) = 3;
          (*(undefined4 *)(gen_frame + 0x18)) = 3;
          (*(undefined4 *)(gen_frame + 0x20)) = 3;
          (*(undefined4 *)(gen_frame + 0x30)) = 3;
          (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((int)this_00 + 0x380);
          (*(undefined4 *)(gen_frame + 0x24)) = 0;
          (*(undefined4 *)(gen_frame + 0x28)) = 6;
          (*(char * PTR32 *)(gen_frame + 0x2c)) = "";
          (*(undefined4 *)(gen_frame + 0x34)) = 2;
          F_005a9110(this_00,5,&(*(undefined4 *)(gen_frame + 0x10)));
          puVar5 = &(*(uint *)(gen_frame + 0x38));
          (*(int *)(gen_frame + 0xc)) = 4;
          do {
            puVar5 = puVar5 + -2;
            F_005a2670(puVar5);
            (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
          } while (-1 < (*(int *)(gen_frame + 0xc)));
          F_007c52e0(*(undefined * PTR32 *)(this + 0x180),0,uVar2);
          uVar1 = F_0081c9c0(this,uVar2,uVar1);
          F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
          return uVar1;
        case 7: ;
          uVar1 = F_007c58b0(*(undefined4 *)(this + 0x1a4),*(undefined4 *)(this + 0x1a8));
          (*(uint *)(gen_frame + 0x1c)) = uVar1;
          (*(undefined4 *)(gen_frame + 0x10)) = 3;
          (*(undefined4 *)(gen_frame + 0x18)) = 3;
          (*(undefined4 *)(gen_frame + 0x20)) = 3;
          (*(undefined4 *)(gen_frame + 0x30)) = 3;
          (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((int)this_00 + 0x380);
          (*(undefined4 *)(gen_frame + 0x24)) = 0;
          (*(undefined4 *)(gen_frame + 0x28)) = 6;
          (*(char * PTR32 *)(gen_frame + 0x2c)) = "";
          (*(undefined4 *)(gen_frame + 0x34)) = 2;
          F_005a9110(this_00,5,&(*(undefined4 *)(gen_frame + 0x10)));
          puVar5 = &(*(uint *)(gen_frame + 0x38));
          iVar4 = 4;
          do {
            puVar5 = puVar5 + -2;
            F_005a2670(puVar5);
            iVar4 = iVar4 + -1;
          } while (-1 < iVar4);
          F_007c52e0(*(undefined * PTR32 *)(this + 0x180),0,*(undefined4 *)(this + 0x1a4));
          uVar1 = param_2 / 10;
          if (1 < uVar1) {
            uVar1 = *(uint *)(this + 0x1a8);
          }
          uVar1 = F_0081ca30(this,param_2 % 10,uVar1);
          F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
          return uVar1;
        case 0xc: ;
          if ((char)param_4[1] == '\0') {
            if (param_2 == 0x28) {
              if (*param_4 == 2) {
                uVar8 = 0;
                uVar6 = 1;
                uVar1 = F_0081caa0(this);
                F_0059b390(this,uVar1,uVar6,uVar8);
                F_00557670(param_3,0);
                uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x34))))(*(int * PTR32 *)(this + 0x18c));
                F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
                return uVar1;
              }
            }
            else {
              if (param_2 == 0x1e) {
                uVar1 = F_008a99b0(this_00,param_3,param_4,0xffffffff);
                F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
                return uVar1;
              }
              if ((param_2 < 0x1e) && ((uVar1 = *param_4, uVar1 == 7 || (uVar1 == 8)))) {
                iVar4 = *(int *)(this + 0x1a8);
                pcVar7 = "";
                uVar6 = 0;
                *(uint *)(this + 0x1a8) = (uint)(iVar4 == 0);
                *(uint *)(this + 0x1a4) = param_2 % 10;
                uVar1 = F_007c58b0(param_2 % 10,(uint)(iVar4 == 0));
                F_00896ac0(this_00,0,uVar1,uVar6,pcVar7);
                F_0081c7f0(this,*(undefined4 *)(this + 0x1a4),*(undefined4 *)(this + 0x1a8),
                             param_2);
                ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x188) + 0x34))))(*(int * PTR32 *)(this + 0x188));
                uVar1 = F_00557670(param_3,0);
                F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
                return uVar1;
              }
            }
          }
          break;
        case 0xf: ;
          uVar1 = F_0081c250(this_00,param_3,param_4);
          break;
        case 0x17: ;
          if (param_2 != *((ushort *)GEN_TOP((*(int *)(this + 0x188) + 100)))) {
            if (param_2 == *((ushort *)GEN_TOP((*(int *)(this + 0x18c) + 100)))) {
              uVar1 = F_00896ac0(this_00,0xffffffff,0,0,"");
              F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
              return uVar1;
            }
            if (param_2 / 10 == 0) {
              *(undefined4 *)(this + 0x1a8) = 0;
            }
            else if (param_2 / 10 == 1) {
              *(undefined4 *)(this + 0x1a8) = 1;
            }
            *(uint *)(this + 0x1a4) = param_2 % 10;
            F_0081c7f0(this,param_2 % 10,*(undefined4 *)(this + 0x1a8),param_2);
            pcVar7 = "";
            uVar6 = 0;
            uVar1 = F_007c58b0(*(undefined4 *)(this + 0x1a4),*(undefined4 *)(this + 0x1a8));
            F_00896ac0(*(undefined * PTR32 *)(this + 0x180),0,uVar1,uVar6,pcVar7);
            *(undefined4 *)(this + 0x184) = *(undefined4 *)(this + 0x1a4);
            if ((*(byte *)((int)param_4 + 7) & 8) != 0) {
              F_0059b390(this,*(undefined4 *)(this + 0x188),1,0);
            }
            uVar1 = F_00557670(param_3,0);
            F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
            return uVar1;
          }
          F_00896ac0(this_00,1,*(undefined4 *)(this + 0x1a4),0,"");
          uVar1 = F_005c06b0(*(undefined4 *)(this + 0x18c));
          if ((char)uVar1 != '\0') {
            uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xf8))(this);
            F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
            return uVar1;
          }
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: Client::UI2::AddonCharaMakeProgressSubTribe::vf2 */
uint F_008a9e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8a9e80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint * puVar4;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar1;
  if ((((((byte)this[0xf9] & 1) != 0) &&
       (this_00 = *(undefined * PTR32 *)(this + 0x180), this_00 != (undefined *)0x0)) &&
      (uVar1 = *(uint *)(this + 0xf4) >> 0x14 & 0xf, uVar1 != 5)) && (uVar1 != 4)) {
    uVar2 = param_1 & 0xffff;
    uVar1 = uVar2 - 6;
    if (uVar1 < 0x12) {
      uVar1 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x8aa1a8) + uVar2 + 2)));
      switch((unsigned int)(uintptr_t)(uVar2)) {
      case 6: ;
        (*(undefined4 *)(gen_frame + 0x0)) = 3;
        (*(undefined4 *)(gen_frame + 0x8)) = 3;
        (*(undefined4 *)(gen_frame + 0x10)) = 3;
        (*(undefined4 *)(gen_frame + 0x20)) = 3;
        (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this_00 + 0x380);
        (*(uint *)(gen_frame + 0xc)) = param_2;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 6;
        (*(char * PTR32 *)(gen_frame + 0x1c)) = "";
        (*(undefined4 *)(gen_frame + 0x24)) = 2;
        F_005a9110(this_00,5,&(*(undefined4 *)(gen_frame + 0x0)));
        puVar4 = &(*(uint *)(gen_frame + 0x28));
        iVar3 = 4;
        do {
          puVar4 = puVar4 + -2;
          F_005a2670(puVar4);
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
        uVar1 = F_007c52e0(*(undefined * PTR32 *)(this + 0x180),1,param_2);
        F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
        return uVar1;
      case 7: ;
        if (param_2 != *(uint *)(this + 0x19c)) {
          (*(uint *)(gen_frame + 0xc)) = *(uint *)(this + 0x19c);
          (*(undefined4 *)(gen_frame + 0x0)) = 3;
          (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this_00 + 0x380);
          (*(undefined4 *)(gen_frame + 0x8)) = 3;
          (*(undefined4 *)(gen_frame + 0x10)) = 3;
          (*(undefined4 *)(gen_frame + 0x14)) = 0;
          (*(undefined4 *)(gen_frame + 0x18)) = 6;
          (*(char * PTR32 *)(gen_frame + 0x1c)) = "";
          (*(undefined4 *)(gen_frame + 0x20)) = 3;
          (*(undefined4 *)(gen_frame + 0x24)) = 2;
          F_005a9110(this_00,5,&(*(undefined4 *)(gen_frame + 0x0)));
          puVar4 = &(*(uint *)(gen_frame + 0x28));
          iVar3 = 4;
          do {
            puVar4 = puVar4 + -2;
            F_005a2670(puVar4);
            iVar3 = iVar3 + -1;
          } while (-1 < iVar3);
          uVar1 = F_007c52e0(*(undefined * PTR32 *)(this + 0x180),1,*(undefined4 *)(this + 0x19c));
          F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
          return uVar1;
        }
        break;
      case 0xc: ;
        if ((param_2 != *((ushort *)GEN_TOP((*(int *)(this + 0x18c) + 100)))) &&
           (param_2 != *((ushort *)GEN_TOP((*(int *)(this + 400) + 100))))) {
          uVar1 = F_008a99b0(this_00,param_3,param_4,0xffffffff);
          F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
          return uVar1;
        }
        uVar1 = F_00557620(param_4);
        if ((char)uVar1 != '\0') {
          F_0059b390(this,*((undefined4 *)GEN_TOP((this + *(int *)(this + 0x184) * 4 + 0x194))),1,0);
          F_00557670(param_3,0);
          uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x34))))(*(int * PTR32 *)(this + 400));
          F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
          return uVar1;
        }
        break;
      case 0xf: ;
        uVar1 = F_0081c250(this_00,param_3,param_4);
        break;
      case 0x17: ;
        if (param_2 != *((ushort *)GEN_TOP((*(int *)(this + 0x18c) + 100)))) {
          if (param_2 == *((ushort *)GEN_TOP((*(int *)(this + 400) + 100)))) {
            uVar1 = F_00896ac0(this_00,0xffffffff,0,0,"");
            F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
            return uVar1;
          }
          *(uint *)(this + 0x19c) = param_2;
          F_0081cc20(this,param_2);
          F_00896ac0(*(undefined * PTR32 *)(this + 0x180),0,*(undefined4 *)(this + 0x19c),0,"");
          *(undefined4 *)(this + 0x184) = *(undefined4 *)(this + 0x19c);
          if ((*(byte *)(param_4 + 7) & 8) != 0) {
            F_0059b390(this,*(undefined4 *)(this + 0x18c),1,0);
          }
          uVar1 = F_00557670(param_3,0);
          F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
          return uVar1;
        }
        F_00896ac0(this_00,1,*(undefined4 *)(this + 0x19c),0,"");
        uVar1 = F_005c06b0(*(undefined4 *)(this + 400));
        if ((char)uVar1 != '\0') {
          uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xf8))(this);
          F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
          return uVar1;
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk::vf15 */
uint F_008aa1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8aa1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  uint uVar1;
  uint * this_01;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this,param_1);
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 4) + 0x180)));
  if (this_00 != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x0)) = 3;
    (*(undefined4 *)(gen_frame + 0x8)) = 3;
    (*(undefined4 *)(gen_frame + 0x10)) = 3;
    (*(undefined4 *)(gen_frame + 0x20)) = 3;
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this_00 + 0x380);
    (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 0x28c)));
    (*(undefined4 *)(gen_frame + 0x14)) = param_1;
    (*(undefined4 *)(gen_frame + 0x18)) = 6;
    (*(char * PTR32 *)(gen_frame + 0x1c)) = "";
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    F_005a9110(this_00,5,&(*(undefined4 *)(gen_frame + 0x0)));
    this_01 = &(*(uint *)(gen_frame + 0x28));
    iVar2 = 4;
    do {
      this_01 = this_01 + -2;
      uVar1 = F_005a2670(this_01);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtk::vf16 */
uint F_008aa280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8aa280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  uint uVar1;
  uint * this_01;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar1 = *(uint *)(this + 4);
  this_00 = *(undefined * PTR32 *)(uVar1 + 0x180);
  if (this_00 != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x0)) = 3;
    (*(undefined4 *)(gen_frame + 0x8)) = 3;
    (*(undefined4 *)(gen_frame + 0x10)) = 3;
    (*(undefined4 *)(gen_frame + 0x20)) = 3;
    (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(uVar1 + 0x28c);
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this_00 + 0x380);
    (*(undefined4 *)(gen_frame + 0x14)) = param_1;
    (*(undefined4 *)(gen_frame + 0x18)) = 6;
    (*(char * PTR32 *)(gen_frame + 0x1c)) = "";
    (*(undefined4 *)(gen_frame + 0x24)) = 2;
    F_005a9110(this_00,5,&(*(undefined4 *)(gen_frame + 0x0)));
    this_01 = &(*(uint *)(gen_frame + 0x28));
    iVar2 = 4;
    do {
      this_01 = this_01 + -2;
      uVar1 = F_005a2670(this_01);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconFeature::vf15 */
uint F_008aa310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8aa310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  uint uVar1;
  uint * this_01;
  uint uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar2 = 1 << ((byte)param_1 & 0x1f);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
  if ((uVar2 & uVar1) == 0) {
    uVar1 = uVar1 | uVar2;
  }
  else {
    uVar1 = uVar1 & ~uVar2;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this,uVar1);
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 4) + 0x180)));
  if (this_00 != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x0)) = 3;
    (*(undefined4 *)(gen_frame + 0x8)) = 3;
    (*(undefined4 *)(gen_frame + 0x10)) = 3;
    (*(undefined4 *)(gen_frame + 0x20)) = 3;
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this_00 + 0x380);
    (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 0x28c)));
    (*(uint *)(gen_frame + 0x14)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x18)) = 6;
    (*(char * PTR32 *)(gen_frame + 0x1c)) = "";
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    F_005a9110(this_00,5,&(*(undefined4 *)(gen_frame + 0x0)));
    this_01 = &(*(uint *)(gen_frame + 0x28));
    iVar3 = 4;
    do {
      this_01 = this_01 + -2;
      uVar2 = F_005a2670(this_01);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2;
}

/* ref: Client::UI2::CharaMakeFeature::OptionAtkListIconTatoo::vf15 */
uint F_008aa3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8aa3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  uint uVar1;
  uint * this_01;
  uint uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar2 = 1 << ((byte)param_1 & 0x1f);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
  if ((uVar2 & uVar1) == 0) {
    uVar1 = uVar1 | uVar2;
  }
  else {
    uVar1 = uVar1 & ~uVar2;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this,uVar1);
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + 4) + 0x180)));
  if (this_00 != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x0)) = 3;
    (*(undefined4 *)(gen_frame + 0x8)) = 3;
    (*(undefined4 *)(gen_frame + 0x10)) = 3;
    (*(undefined4 *)(gen_frame + 0x20)) = 3;
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this_00 + 0x380);
    (*(undefined4 *)(gen_frame + 0xc)) = *((undefined4 *)GEN_TOP((*(int *)(this + 4) + 0x28c)));
    (*(uint *)(gen_frame + 0x14)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x18)) = 6;
    (*(char * PTR32 *)(gen_frame + 0x1c)) = "";
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    F_005a9110(this_00,5,&(*(undefined4 *)(gen_frame + 0x0)));
    this_01 = &(*(uint *)(gen_frame + 0x28));
    iVar3 = 4;
    do {
      this_01 = this_01 + -2;
      uVar2 = F_005a2670(this_01);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2;
}

/* ref: Client::UI2::RaptureAtkHistory::vf4 */
uint F_008aa4b0(unsigned int gen_a0)
{
  GEN_ENTER(0x8aa4b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  if (*(int *)(this + 0x1c) < 0) {
    return 0x12fd328;
  }
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)(this + 4) != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)(this + 4))), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  uVar2 = *(int *)(this + 0x10) + *(int *)(this + 0x1c);
  if (((piVar3 == (int *)0x0) || ((int *)*piVar3 == (int *)0x0)) ||
     (piVar3 = *(int * PTR32 *)*piVar3, piVar3 == (int *)0x0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar3;
  }
  if (*(uint *)(iVar4 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar4 + 8);
  }
  return *((uint *)GEN_TOP((*(int *)(iVar4 + 4) + uVar2 * 4)));
}

/* ref: Client::UI2::RaptureAtkHistory::vf5 */
uint F_008aa500(unsigned int gen_a0)
{
  GEN_ENTER(0x8aa500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  if (*(int *)(this + 0x1c) < 0) {
    return 0x12fd328;
  }
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)(this + 4) != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)(this + 4))), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  uVar2 = *(int *)(this + 0x10) + *(int *)(this + 0x1c);
  if (((piVar3 == (int *)0x0) || ((int *)*piVar3 == (int *)0x0)) ||
     (piVar3 = *(int * PTR32 *)*piVar3, piVar3 == (int *)0x0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar3;
  }
  if (*(uint *)(iVar4 + 8) <= uVar2) {
    uVar2 = uVar2 - *(uint *)(iVar4 + 8);
  }
  return *((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar2 * 4))) + 0x54;
}

/* ref: Client::UI2::RaptureAtkModule::vf52 */
uint F_008aa550(unsigned int gen_a0)
{
  GEN_ENTER(0x8aa550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  undefined * pRVar6;
  
  piVar1 = *(int * PTR32 *)(this + 0x2db84);
  piVar3 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)(this + 0x2db84) + 4))) = *(int *)(this + 0x2db84);
  *(undefined4 *)(this + 0x2db88) = 0;
  if (piVar3 != *(int * PTR32 *)(this + 0x2db84)) {
    do {
      piVar1 = (int *)*piVar3;
      F_00429760(piVar3,0xc,400);
      piVar3 = piVar1;
    } while (piVar1 != (int *)*(int *)(this + 0x2db84));
  }
  puVar2 = *(undefined4 * PTR32 *)(this + 0x2db90);
  if (puVar2 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)(this + 0x2db90) = 0;
  }
  this[0x2db65] = (undefined1)0x0;
  *(undefined4 *)(this + 0x2db60) = 0;
  this[0x23191] = (undefined1)0x0;
  if (this[0x23190] != (undefined1)0x0) {
    pRVar6 = this + 0x23198;
    iVar5 = 0x65;
    do {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pRVar6 + 0xc))))(*(int * PTR32 *)pRVar6);
      pRVar6 = pRVar6 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined2 *)(this + 0x23190) = 0;
  F_0075dc20(this);
  F_008975e0(this);
  uVar4 = F_0058c5d0(this + 0x2db98);
  return uVar4;
}

/* ref: FUN_008aa620 */
byte F_008aa620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8aa620u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  byte bVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2db90))) != (undefined *)0x0) {
    bVar1 = F_007c8a90(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2db90))),(*(undefined4 *)&gen_args[1]));
    if (bVar1 == 0) {
      F_0095b550(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2db84))),&(*(undefined4 *)&gen_args[1]));
    }
  }
  return 1;
}

/* ref: FUN_008aa660 */
uint F_008aa660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8aa660u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int * piVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  int * piVar5;
  uint uVar6;
  int iVar7;
  int * PTR32 * this;
  uint * puVar8;
  undefined4 * puVar9;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(int * PTR32 *)(gen_frame + 0x14)) = param_2;
  uVar6 = param_1;
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    puVar8 = *(uint * PTR32 *)(param_1 + 4);
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(undefined4 *)(gen_frame + 0x1c)) = 0x14;
    bVar2 = *(byte *)((int)puVar8 + 0x37);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
    (*(uint *)(gen_frame + 0x24)) = (uint)bVar2;
    uVar3 = *(ushort *)((int)puVar8 + 0x32);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
    (*(uint *)(gen_frame + 0x2c)) = (uint)uVar3;
    uVar6 = *puVar8;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),6);
    (*(int *)(gen_frame + 0x34)) = (uVar6 & 0xffffff) + (int)puVar8;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    ((undefined4 *)(gen_frame + 0xc))[0] = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),4);
    (*(undefined4 *)(gen_frame + 0x8)) = 10;
    F_00594ec0(((undefined4 *)(gen_frame + 0xc)),10);
    iVar7 = 0;
    puVar9 = &(*(undefined4 *)(gen_frame + 0x18));
    do {
      F_0056c4f0(((undefined4 *)(gen_frame + 0xc)),iVar7,puVar9);
      piVar5 = (*(int * PTR32 *)(gen_frame + 0x14));
      iVar7 = iVar7 + 1;
      puVar9 = puVar9 + 2;
    } while (iVar7 < 10);
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x58))((*(int * PTR32 *)(gen_frame + 0x14)),REFG(undefined * PTR32, 0x132806c),10,&(*(undefined4 *)(gen_frame + 0x18)),0,0,0);
    this = &(*(int * PTR32 *)(gen_frame + 0x14));
    (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)0x1;
    do {
      this = this + -2;
      F_005a2670(this);
      piVar1 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x14)) + -1);
      (*(int * PTR32 *)(gen_frame + 0x14)) = piVar1;
    } while (-1 < (int)piVar1);
    if (piVar5[0xb6e2] != 0) {
      uVar4 = *(undefined4 *)(*(int *)piVar5[0xb6e1] + 8);
      F_0095b520(piVar5 + 0xb6e1);
      if ((undefined *)piVar5[0xb6e4] != (undefined *)0x0) {
        F_007c8a90((undefined *)piVar5[0xb6e4],uVar4);
      }
    }
    puVar8 = &(*(uint *)(gen_frame + 0x68));
    iVar7 = 9;
    do {
      puVar8 = puVar8 + -2;
      uVar6 = F_005a2670(puVar8);
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar6;
}

/* ref: FUN_008aa7d0 */
uint F_008aa7d0(unsigned int gen_a0)
{
  GEN_ENTER(0x8aa7d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00897c80((undefined *)((int)this + 0x23330),0x16,0,0);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 8))))(*(int * PTR32 *)((int)this + 0x23184),0x30,0);
  return uVar1;
}

/* ref: FUN_008aa800 */
uint F_008aa800(unsigned int gen_a0)
{
  GEN_ENTER(0x8aa800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00897c80((undefined *)((int)this + 0x23330),0x16,1,0);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x23184) + 8))))(*(int * PTR32 *)((int)this + 0x23184),0x30,1);
  return uVar1;
}

/* ref: FUN_008aa830 */
uint F_008aa830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8aa830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  undefined * this_01;
  uint uVar1;
  uint * this_02;
  int iVar2;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x28)) = uVar1;
  this_00 = *(undefined * PTR32 *)((int)this + 0x231ac);
  if (this_00 != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    iVar2 = ((char)param_1 != '\0') + 4;
    if (*(int *)((int)this_00 + 0xc) == 6) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this_00 + 4) + 0x48))))(*(int * PTR32 *)((int)this_00 + 4));
      this_01 = *(undefined * PTR32 *)(uVar1 + 0x130);
      if ((this_01 != (undefined *)0x0) && (*(int *)((int)this_01 + 0x14) == 2)) {
        F_00869af0(this_01,*(undefined4 *)((int)this_01 + 0x10),0,0,1);
      }
    }
    *(undefined4 *)((int)this_00 + 0x10) = 0;
    *(int *)((int)this_00 + 0x18) = iVar2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(int *)(gen_frame + 0xc)) = iVar2;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),2);
    (*(undefined1 *)(gen_frame + 0x24)) = 1;
    F_0086e5a0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),4);
    this_02 = &(*(uint *)(gen_frame + 0x28));
    iVar2 = 3;
    do {
      this_02 = this_02 + -2;
      uVar1 = F_005a2670(this_02);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_008aa910 */
unsigned int F_008aa910(unsigned int gen_a0)
{
  GEN_ENTER(0x8aa910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 0x231ac) != (undefined *)0x0) {
    F_0089aef0(*(undefined * PTR32 *)((int)this + 0x231ac),0,4);
  }
  return 0;
}

/* ref: FUN_008aa930 */
uint F_008aa930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8aa930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x232b4);
  *(undefined4 *)((int)this_00 + 0x28) = param_1;
  uVar3 = 0xb;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this_00 + 4) + 0x44))))(*(int * PTR32 *)((int)this_00 + 4));
  uVar1 = F_00435440(uVar1,uVar3);
  *(uint *)((int)this_00 + 0x24) = uVar1;
  if (uVar1 != 0) {
    F_00453fa0((undefined *)(uVar1 + 0x490),(int)this_00 + 0xc);
    uVar2 = F_00436a80(*(undefined * PTR32 *)((int)this_00 + 0x24));
    *(ulonglong *)((int)this_00 + 0x30) = uVar2;
  }
  *(undefined4 *)((int)this_00 + 0x3c) = *(undefined4 *)((int)this_00 + 0x34);
  *(undefined4 *)((int)this_00 + 0x44) = *(undefined4 *)((int)this_00 + 0x34);
  *(undefined4 *)((int)this_00 + 0x38) = *(undefined4 *)((int)this_00 + 0x30);
  *(undefined4 *)((int)this_00 + 0x40) = *(undefined4 *)((int)this_00 + 0x30);
  uVar1 = F_00881060(this_00);
  return uVar1;
}

/* ref: FUN_008aa9a0 */
uint F_008aa9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8aa9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0095ca60(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008aa9b0 */
unsigned int F_008aa9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8aa9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  int * piVar2;
  code * pcVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  
  if (*(int *)((int)this + 0x2db70) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x2db6c);
    piVar6 = (int *)*piVar1;
    while (piVar6 != piVar1) {
      piVar2 = (int *)piVar6[2];
      if (((piVar2 == (int *)0x0) || (*piVar2 == 0)) || (*(int *)(*piVar2 + 8) != 2)) {
        piVar6 = (int *)*piVar6;
      }
      else {
        pcVar3 = (code *)piVar6[3];
        iVar4 = piVar6[4];
        iVar5 = *piVar2;
        piVar2 = (int *)*piVar6;
        if (piVar6 != *(int * PTR32 *)((int)this + 0x2db6c)) {
          *(int * PTR32 *)piVar6[1] = piVar2;
          *(int *)(*piVar6 + 4) = piVar6[1];
          F_00429760(piVar6,0x14,400);
          *(int *)((int)this + 0x2db70) = *(int *)((int)this + 0x2db70) + -1;
        }
        piVar6 = piVar2;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(*(undefined4 *)(iVar5 + 0x18),iVar4);
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_008aac20 */
uint F_008aac20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8aac20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((2 < param_3) && (*(undefined * PTR32 *)((int)this + 0x231ac) != (undefined *)0x0)) {
    if ((param_2[0x10] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x14);
    }
    if ((param_2[8] & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0xc);
    }
    if ((*param_2 & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 4);
    }
    F_0089ad50(*(undefined * PTR32 *)((int)this + 0x231ac),uVar1,uVar2,uVar3,1);
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_008aac80 */
uint F_008aac80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8aac80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint * puVar2;
  
  uVar1 = F_00404270();
  puVar2 = (uint *)F_00406bd0(4,0,uVar1,0);
  (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar2;
  if (puVar2 != (uint *)0x0) {
    (*(undefined4 *)(gen_frame + 0x14)) = param_2;
    (*(undefined4 *)(gen_frame + 0x10)) = param_1;
    uVar1 = F_005922a0((undefined *)((int)this + 0x20e70),&(*(undefined4 *)(gen_frame + 0x10)));
    if (uVar1 != 0) {
      *puVar2 = uVar1;
      F_0095b470((undefined *)((int)this + 0x2db78),&(*(uint * PTR32 *)(gen_frame + 0x18)));
      (*(undefined4 *)(gen_frame + 0x8)) = param_3;
      (*(undefined4 *)(gen_frame + 0xc)) = param_4;
      (*(uint * PTR32 *)(gen_frame + 0x4)) = puVar2;
      F_0095b3b0((undefined *)((int)this + 0x2db6c),&(*(uint * PTR32 *)(gen_frame + 0x4)));
      return (uint)puVar2;
    }
    F_00406ad0(puVar2);
  }
  return 0;
}

/* ref: FUN_008aad20 */
uint F_008aad20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8aad20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  ulonglong uVar4;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x2db6c);
  piVar3 = (int *)*piVar2;
  do {
    if (piVar3 == piVar2) {
LAB_008aad6c: ;
      piVar2 = *(int * PTR32 *)((int)this + 0x2db78);
      piVar3 = (int *)*piVar2;
      if (piVar3 != piVar2) {
        while (puVar1 = (undefined4 *)piVar3[2], puVar1 != param_1) {
          piVar3 = (int *)*piVar3;
          if (piVar3 == piVar2) {
            return (uint)piVar2;
          }
        }
        F_005881e0((undefined *)((int)this + 0x20e70),*puVar1);
        piVar2 = (int *)F_00406ad0(puVar1);
        if (piVar3 != *(int * PTR32 *)((int)this + 0x2db78)) {
          *(int *)piVar3[1] = *piVar3;
          *(int *)(*piVar3 + 4) = piVar3[1];
          uVar4 = F_00429760(piVar3,0xc,400);
          piVar2 = (int *)uVar4;
          *(int *)((int)this + 0x2db7c) = *(int *)((int)this + 0x2db7c) + -1;
        }
      }
      return (uint)piVar2;
    }
    if ((undefined4 *)piVar3[2] == param_1) {
      if (piVar3 != piVar2) {
        *(int *)piVar3[1] = *piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
        F_00429760(piVar3,0x14,400);
        *(int *)((int)this + 0x2db70) = *(int *)((int)this + 0x2db70) + -1;
      }
      goto LAB_008aad6c;
    }
    piVar3 = (int *)*piVar3;
  } while( true );
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf6 */
unsigned int F_008aade0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8aade0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined * this_00;
  undefined4 uVar1;
  int * piVar2;
  undefined4 * puVar3;
  byte bVar4;
  uint uVar5;
  
  puVar3 = (*(undefined4 * PTR32 *)&gen_args[1]);
  this_00 = ((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1])));
  if (*((char *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[1]) + 0x1e))) == '\0') {
    F_00a34970(this_00,0x21);
    F_00a34de0(this_00,0x21);
    uVar1 = (*(undefined4 * PTR32 *)&gen_args[1])[2];
    piVar2 = ((int *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[1])[1]));
    if ((*((char *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 6))) == '\0') || (bVar4 = F_00a34de0(this_00,0x21), bVar4 != 0)) {
      (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined4 * PTR32 *)&gen_args[1]), 1, 3),*((undefined1 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[1]) + 0x1d))))));
      bVar4 = F_00762480((*(undefined * PTR32 *)&gen_args[0]),this_00,piVar2,uVar1,(*(undefined4 * PTR32 *)&gen_args[1]));
      if (bVar4 != 0) {
        *(undefined1 *)(puVar3 + 6) = 1;
      }
    }
    if (((*(char *)(puVar3 + 6) == '\0') && (piVar2 != (int *)0x0)) &&
       (uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2,puVar3[2]), (char)uVar5 != '\0')) {
      *(undefined1 *)(puVar3 + 6) = 1;
      *(undefined1 *)((int)puVar3 + 0x21) = 1;
    }
  }
  if ((*(char *)((int)puVar3 + 0x19) == '\0') && (bVar4 = F_00897870((*(undefined * PTR32 *)&gen_args[0]),this_00), bVar4 != 0)) {
    *(undefined1 *)((int)puVar3 + 0x19) = 1;
  }
  return 0;
}

/* ref: Client::UI2::RaptureAtkUnitManager::vf31 */
uint F_008aae90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8aae90u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  char cVar1;
  byte bVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  char * pcVar6;
  int iVar7;
  byte * pbVar8;
  uint uVar9;
  int * piVar10;
  byte * pbVar11;
  bool bVar12;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) == 0) || ((*(uint *)((*(int *)&gen_args[1]) + 0x120) >> 5 & 1) != 0)) {
    iVar7 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb4)));
    iVar5 = *(int *)(iVar7 + 4);
    piVar10 = (int *)F_004296a0(0xc,0,400);
    *piVar10 = iVar7;
    piVar10[1] = iVar5;
    if (piVar10 + 2 != (int *)0x0) {
      piVar10[2] = (*(int *)&gen_args[1]);
    }
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) == -2) {
                    
      F_00c4579a("list<T> too long");
    }
    *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb8))) + 1;
    *(int * PTR32 *)(iVar7 + 4) = piVar10;
    *(int * PTR32 *)piVar10[1] = piVar10;
  }
  else {
    pcVar6 = REFG(undefined * PTR32, 0x1328134);
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar7 = F_00c4b813((char *)((*(int *)&gen_args[1]) + 4),REFG(undefined * PTR32, 0x1328134),
                     (int)pcVar6 - (int)(REFG(undefined * PTR32, 0x1328134) + 1));
    if (iVar7 == 0) {
      this_00 = (*(undefined * PTR32 *)&gen_args[0]) + 0xb4;
      puVar3 = ((undefined4 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb4)))));
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = this_00;
      for (; puVar3 != *((undefined4 * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb4))); puVar3 = (undefined4 *)*puVar3) {
        pbVar8 = (byte *)(puVar3[2] + 4);
        pbVar11 = REFG(undefined * PTR32, 0x1328138);
        do {
          bVar2 = *pbVar8;
          bVar12 = bVar2 < *pbVar11;
          if (bVar2 != *pbVar11) {
LAB_008aaf28: ;
            iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto LAB_008aaf2d;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar8[1];
          bVar12 = bVar2 < pbVar11[1];
          if (bVar2 != pbVar11[1]) goto LAB_008aaf28;
          pbVar8 = pbVar8 + 2;
          pbVar11 = pbVar11 + 2;
        } while (bVar2 != 0);
        iVar7 = 0;
LAB_008aaf2d: ;
        if (iVar7 == 0) {
          uVar9 = F_005ce470(this_00,&(*(undefined * PTR32 *)(gen_frame + 0x8)),puVar3,&(*(int *)&gen_args[1]));
          return uVar9;
        }
      }
      piVar4 = *(int * PTR32 *)this_00;
      piVar10 = (int *)*piVar4;
      if (piVar10 != piVar4) {
        do {
          if ((*(uint *)(piVar10[2] + 0x120) >> 5 & 1) != 0) {
            uVar9 = F_005ce470(this_00,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar10,&(*(int *)&gen_args[1]));
            return uVar9;
          }
          piVar10 = (int *)*piVar10;
        } while (piVar10 != piVar4);
        return (uint)piVar10;
      }
    }
    else {
      piVar4 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xb4)));
      piVar10 = (int *)*piVar4;
      if (piVar10 != piVar4) {
        do {
          if ((*(uint *)(piVar10[2] + 0x120) >> 5 & 1) != 0) {
            uVar9 = F_005ce470((*(undefined * PTR32 *)&gen_args[0]) + 0xb4,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar10,&(*(int *)&gen_args[1]));
            return uVar9;
          }
          piVar10 = (int *)*piVar10;
        } while (piVar10 != piVar4);
        return (uint)piVar10;
      }
    }
  }
  return (uint)piVar10;
}

/* ref: FUN_008ab460 */
uint F_008ab460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8ab460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  code * pcVar1;
  uint uVar2;
  
  if ((char)param_1 != '\0') {
    *(undefined1 *)((int)this + 0x3d) = 1;
    F_00898410(this,0);
    *(uint *)((int)this + 0x24) = param_2;
    return param_2;
  }
  pcVar1 = *(gen_code32 *)(*(int *)this + 8);
  *(undefined1 *)((int)this + 0x3d) = 0;
  uVar2 = (*pcVar1)(this);
  *(uint *)((int)this + 0x24) = param_2;
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentContext::vf1 */
uint F_008ab9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8ab9b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x380];
  undefined * this_00;
  byte bVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_01;
  undefined4 extraout_EDX = 0;
  int iVar5;
  uint * this_02;
  ulonglong uVar6;
  undefined1 * puVar7;
  int * piVar8;
  int * piVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x378)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x37c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x60)) = param_1;
  if (((param_3 != 0) && (((byte)*param_2 & 0xf) == 3)) && (iVar5 = param_2[1], -1 < iVar5)) {
    switch((unsigned int)(uintptr_t)(this[iVar5 + 0x151])) {
    case (undefined1)0x1: ;
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
      pvVar3 = *(undefined * PTR32 *)(uVar4 + 0x1c);
      F_0042cc20(((undefined1 *)(gen_frame + 0x0)),&REFG(undefined, 0x10bdb06),REFG(undefined4, 0x108cc50));
      puVar7 = ((undefined1 *)(gen_frame + 0x0));
      uVar4 = F_0042a990(this + 0x210);
      uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x10c)),"/tell %s ",uVar4);
      F_0076b020(pvVar3,uVar4,puVar7);
      F_0042c880(((undefined1 *)(gen_frame + 0x10c)));
      F_0042c880(((undefined1 *)(gen_frame + 0x0)));
      break;
    case (undefined1)0x2: ;
      if ((**(int * PTR32 *)(this + 0x20c) == *(int *)(this + 0x268)) &&
         ((*(int * PTR32 *)(this + 0x20c))[1] == *(int *)(this + 0x26c))) {
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
        F_00878eb0(*(undefined * PTR32 *)(uVar4 + 0xd0),*(undefined4 *)(this + 0x20c),0,
                     *(undefined4 *)(this + 0x208));
      }
      break;
    case (undefined1)0x3: ;
      piVar8 = *(int * PTR32 *)(this + 0x20c);
      if (((piVar8 != (int *)0x0) && (*piVar8 == *(int *)(this + 0x268))) &&
         (piVar8[1] == *(int *)(this + 0x26c))) {
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
        pvVar3 = *(undefined * PTR32 *)(uVar4 + 0xd0);
        uVar10 = 8;
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x44))))(*(int * PTR32 *)(this + 4));
        uVar4 = F_00435440(uVar4,uVar10);
        uVar10 = *(undefined4 *)(this + 0x208);
        uVar4 = F_00436420(uVar4);
        F_00878eb0(pvVar3,*(undefined4 *)(this + 0x20c),uVar4,uVar10);
      }
      break;
    case (undefined1)0x4: ;
      piVar8 = *(int * PTR32 *)(this + 4);
      piVar9 = piVar8;
      uVar4 = F_0042a990(this + 0x210);
      uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x304)),"/trade \"%s\"",uVar4);
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x20))(piVar8)));
      F_00abefa0(pvVar3,uVar4,piVar9);
      F_0042c880(((undefined1 *)(gen_frame + 0x304)));
      break;
    case (undefined1)0x5: ;
      piVar8 = *(int * PTR32 *)(this + 4);
      piVar9 = piVar8;
      uVar4 = F_0042a990(this + 0x210);
      uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x2b0)),"/pcmd add \"%s\"",uVar4);
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x20))(piVar8)));
      F_00abefa0(pvVar3,uVar4,piVar9);
      F_0042c880(((undefined1 *)(gen_frame + 0x2b0)));
      break;
    case (undefined1)0x6: ;
      piVar8 = *(int * PTR32 *)(this + 4);
      piVar9 = piVar8;
      uVar4 = F_0042a990(this + 0x210);
      uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x25c)),"/pcmd leader \"%s\"",uVar4);
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x20))(piVar8)));
      F_00abefa0(pvVar3,uVar4,piVar9);
      F_0042c880(((undefined1 *)(gen_frame + 0x25c)));
      break;
    case (undefined1)0x7: ;
      piVar8 = *(int * PTR32 *)(this + 4);
      piVar9 = piVar8;
      uVar4 = F_0042a990(this + 0x210);
      uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x208)),"/pcmd kick \"%s\"",uVar4);
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x20))(piVar8)));
      F_00abefa0(pvVar3,uVar4,piVar9);
      F_0042c880(((undefined1 *)(gen_frame + 0x208)));
      break;
    case (undefined1)0x8: ;
      piVar8 = *(int * PTR32 *)(this + 4);
      piVar9 = piVar8;
      uVar4 = F_0042a990(this + 0x210);
      uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x160)),"/flist add \"%s\"",uVar4);
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x20))(piVar8)));
      F_00abefa0(pvVar3,uVar4,piVar9);
      F_0042c880(((undefined1 *)(gen_frame + 0x160)));
      break;
    case (undefined1)0x9: ;
    case (undefined1)0xa: ;
    case (undefined1)0xb: ;
    case (undefined1)0xc: ;
    case (undefined1)0xd: ;
    case (undefined1)0xe: ;
    case (undefined1)0xf: ;
    case (undefined1)0x10: ;
      uVar10 = 2;
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x44))))(*(int * PTR32 *)(this + 4));
      pvVar3 = (undefined *)F_00435440(uVar4,uVar10);
      puVar2 = (undefined4 *)F_00439130(pvVar3,(byte)this[iVar5 + 0x151] - 9);
      if ((puVar2 != (undefined4 *)0x0) && ((puVar2[4] & 0x700) < 0x201)) {
        piVar8 = *(int * PTR32 *)(this + 4);
        (*(int * PTR32 *)(gen_frame + 0x5c)) = piVar8;
        F_0042a990(this + 0x210);
        uVar4 = F_00439390(pvVar3,*puVar2,puVar2[1]);
        uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x64)),"/lcmd \"%s\" add \"%s\"",uVar4);
        pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x5c)) + 0x20))((*(int * PTR32 *)(gen_frame + 0x5c)))));
        F_00abefa0(pvVar3,uVar4,piVar8);
        F_0042c880(((undefined1 *)(gen_frame + 0x64)));
      }
      break;
    case (undefined1)0x11: ;
      piVar8 = *(int * PTR32 *)(this + 4);
      piVar9 = piVar8;
      uVar4 = F_0042a990(this + 0x210);
      uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0xb8)),"/blist add \"%s\"",uVar4);
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x20))(piVar8)));
      F_00abefa0(pvVar3,uVar4,piVar9);
      F_0042c880(((undefined1 *)(gen_frame + 0xb8)));
      break;
    case (undefined1)0x12: ;
      uVar10 = 0;
      uVar4 = F_0042a990(this + 0x210);
      uVar4 = F_00a64490(&REFG(undefined, 0x14a9a18),uVar4,uVar10);
      if (uVar4 != 0) {
        F_00769610(this);
        F_007cd730(this_01,uVar4,1);
        ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
        *(undefined1 *)((*(undefined4 * PTR32 *)(gen_frame + 0x60)) + 1) = 0;
        goto LAB_008ac0f0;
      }
      break;
    case (undefined1)0x13: ;
      bVar1 = F_00769bc0();
      if (bVar1 == 0) {
        F_00a7eea0(&REFG(char, 0x14ab068),(uint)(REFG(char, 0x14ab068) == '\0'));
      }
      else {
        uVar10 = 0;
        uVar6 = F_005339f0(&REFG(undefined4, 0x1375bc0));
        F_00543c00(&REFG(undefined4, 0x1375bc0),(int)uVar6,(int)(uVar6 >> 0x20),uVar10);
        F_00a7eea0(&REFG(char, 0x14ab068),1);
      }
      break;
    case (undefined1)0x14: ;
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
      pvVar3 = *(undefined * PTR32 *)(uVar4 + 0xa8);
      if (pvVar3 != (undefined *)0x0) {
        uVar4 = F_00a5f0b0(*(undefined4 *)(this + 0x270),*(undefined4 *)(this + 0x274));
        F_00771500(pvVar3,uVar4);
      }
      break;
    case (undefined1)0x15: ;
      F_00aec010(*(undefined4 *)(this + 0x270),*(undefined4 *)(this + 0x274));
      break;
    case (undefined1)0x16: ;
      piVar8 = *(int * PTR32 *)(this + 4);
      piVar9 = piVar8;
      uVar4 = F_0042a990(this + 0x210);
      uVar4 = F_0042ce40(((undefined1 *)(gen_frame + 0x1b4)),"/meldrequest \"%s\"",uVar4);
      pvVar3 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar8 + 0x20))(piVar8)));
      F_00abefa0(pvVar3,uVar4,piVar9);
      F_0042c880(((undefined1 *)(gen_frame + 0x1b4)));
      break;
    case (undefined1)0x17: ;
      uVar10 = 0xe;
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x44))))(*(int * PTR32 *)(this + 4));
      pvVar3 = (undefined *)F_00435440(uVar4,uVar10);
      if (pvVar3 != (undefined *)0x0) {
        uVar4 = F_0042a990(this + 0x210);
        F_0046b8f0(pvVar3,uVar4);
      }
      break;
    case (undefined1)0x18: ;
      uVar10 = 0xb;
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x44))))(*(int * PTR32 *)(this + 4));
      pvVar3 = (undefined *)F_00435440(uVar4,uVar10);
      if (pvVar3 != (undefined *)0x0) {
        uVar4 = F_0042a990(this + 0x210);
        F_0046b7e0(pvVar3,uVar4);
      }
      break;
    case (undefined1)0x19: ;
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
      pvVar3 = *(undefined * PTR32 *)(uVar4 + 0x110);
      if (pvVar3 != (undefined *)0x0) {
        if ((*(int *)(this + 0x270) == -0x20000000) && (*(int *)(this + 0x274) == 0)) {
          F_00880040(pvVar3,*(undefined4 *)(this + 0x268),*(undefined4 *)(this + 0x26c));
        }
        else {
          uVar4 = F_00a5f0b0(*(int *)(this + 0x270),*(int *)(this + 0x274));
          F_0087ffb0(pvVar3,uVar4);
        }
      }
      break;
    case (undefined1)0x1a: ;
      uVar10 = 0xf;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4))));
      F_007cc180(pvVar3,uVar10);
      break;
    case (undefined1)0x1b: ;
      uVar10 = 0x1a;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4))));
      F_007cc180(pvVar3,uVar10);
      break;
    case (undefined1)0x1c: ;
      if (*(char *)(REFG(undefined4, 0x1379694) + 0xb82) != '\0') {
        F_00a69a80();
      }
      break;
    case (undefined1)0x1d: ;
      if (REFG(undefined4, 0x1379694) != (undefined4 *)0x0) {
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP(*REFG(int * PTR32, 0x1379694))))(REFG(undefined4, 0x1379694));
        F_00ac8af0(&REFG(undefined, 0x14bcf40),6,2,uVar4,extraout_EDX);
      }
      break;
    case (undefined1)0x1e: ;
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
      pvVar3 = *(undefined * PTR32 *)(uVar4 + 0x20);
      if (pvVar3 != (undefined *)0x0) {
        (*(undefined4 *)(gen_frame + 0x358)) = 0;
        (*(undefined4 *)(gen_frame + 0x360)) = 0;
        (*(undefined4 *)(gen_frame + 0x368)) = 0;
        (*(undefined4 *)(gen_frame + 0x370)) = 0;
        if (*(int *)((int)pvVar3 + 0xc) == 6) {
          uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 4) + 0x48))))(*(int * PTR32 *)((int)pvVar3 + 4));
          this_00 = *(undefined * PTR32 *)(uVar4 + 0x130);
          if ((this_00 != (undefined *)0x0) && (*(int *)((int)this_00 + 0x14) == 2)) {
            F_00869af0(this_00,*(undefined4 *)((int)this_00 + 0x10),0,0,1);
          }
        }
        *(undefined4 *)((int)pvVar3 + 0x10) = 0;
        *(undefined4 *)((int)pvVar3 + 0x18) = 5;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x358)),3);
        (*(undefined4 *)(gen_frame + 0x35c)) = 5;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x360)),3);
        (*(undefined4 *)(gen_frame + 0x364)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x368)),3);
        (*(undefined4 *)(gen_frame + 0x36c)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x370)),2);
        (*(undefined1 *)(gen_frame + 0x374)) = 1;
        F_0086e5a0(pvVar3,&(*(undefined4 *)(gen_frame + 0x358)),4);
        this_02 = &(*(uint *)(gen_frame + 0x378));
        iVar5 = 3;
        do {
          this_02 = this_02 + -2;
          F_005a2670(this_02);
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
      }
      break;
    default: ;
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + iVar5 * 4 + 0x168) + 4))))
                (*(int * PTR32 *)(this + iVar5 * 4 + 0x168),((undefined1 *)(gen_frame + 0x54)),param_2,param_3,
                 *(undefined4 *)(this + iVar5 * 4 + 0x1b8));
      F_005a2670(((undefined1 *)(gen_frame + 0x54)));
    }
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x20c) = 0;
  *(undefined1 *)((*(undefined4 * PTR32 *)(gen_frame + 0x60)) + 1) = 1;
LAB_008ac0f0: ;
  puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x60));
  *(*(undefined4 * PTR32 *)(gen_frame + 0x60)) = 2;
  F_00c47745((*(uint *)(gen_frame + 0x378)) ^ (uint)(uint)(gen_frame + 0x37c));
  return (uint)puVar2;
}

/* ref: FUN_008ac190 */
uint F_008ac190(unsigned int gen_a0)
{
  GEN_ENTER(0x8ac190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  if (*(undefined * PTR32 *)(uVar1 + 0x20) != (undefined *)0x0) {
    uVar1 = F_0089aef0(*(undefined * PTR32 *)(uVar1 + 0x20),6,4);
  }
  return uVar1;
}

/* ref: FUN_008ac1b0 */
byte F_008ac1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8ac1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  int iVar1;
  uint uVar2;
  uint * this_01;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if ((*(byte *)(param_1 + 8) & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc);
  }
  if (iVar1 == 2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
    this_00 = *(undefined * PTR32 *)(uVar2 + 0x20);
    if (this_00 != (undefined *)0x0) {
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      *(undefined4 *)((int)this_00 + 0x10) = 0xdfa;
      *(undefined4 *)((int)this_00 + 0xc) = 6;
      *(undefined4 *)((int)this_00 + 0x18) = 4;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
      (*(undefined4 *)(gen_frame + 0xc)) = 4;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      (*(undefined4 *)(gen_frame + 0x1c)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),2);
      (*(undefined1 *)(gen_frame + 0x24)) = 1;
      F_0086e5a0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),4);
      this_01 = &(*(uint *)(gen_frame + 0x28));
      iVar1 = 3;
      do {
        this_01 = this_01 + -2;
        F_005a2670(this_01);
        iVar1 = iVar1 + -1;
      } while (-1 < iVar1);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 0;
}

/* ref: FUN_008ac290 */
byte F_008ac290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8ac290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  uVar3 = 0;
  if ((*(byte *)(param_1 + 8) & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0xc);
  }
  if (*(int *)((int)this + 0x14) == 2) {
    return 0;
  }
  switch((unsigned int)(uintptr_t)(*(int *)((int)this + 0x14))) {
  case 1: ;
    uVar3 = 5;
    break;
  case 3: ;
    uVar3 = 1;
    break;
  case 4: ;
    uVar3 = 2;
    break;
  case 5: ;
    uVar3 = 3;
    break;
  case 6: ;
    uVar3 = 4;
    break;
  case 7: ;
    uVar3 = 7;
    break;
  case 8: ;
    uVar3 = 8;
    break;
  case 9: ;
    uVar3 = 9;
  }
  if (*(undefined * PTR32 *)(uVar2 + 0x20) != (undefined *)0x0) {
    F_0089ad50(*(undefined * PTR32 *)(uVar2 + 0x20),uVar3,4,uVar4,1);
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar2 + 0x28);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  return 1;
}

/* ref: Client::UI2::Agent::AgentContentsFinder::vf13 */
uint F_008ac360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8ac360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = param_1 - 1;
  if ((uVar1 == 0) && (this[0xb979] != (undefined1)0x0)) {
    this[0xb979] = (undefined1)0x0;
    uVar1 = F_00898b30(this);
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentFateReward::vf2 */
uint F_008ac380(unsigned int gen_a0)
{
  GEN_ENTER(0x8ac380u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x200];
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  bool bVar4;
  uint * puVar5;
  int * piVar6;
  uint uVar7;
  undefined * pvVar8;
  undefined * puVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined * pAVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  (*(uint *)(gen_frame + 0x1f8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1fc);
  puVar5 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x10))(this)));
  if (((char)puVar5 != '\0') && (*(int *)(this + 8) != 0)) {
    piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    puVar5 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0x54))(piVar6,*(undefined4 *)(this + 8),0)));
    *(undefined4 *)(this + 8) = 0;
  }
  if (*(int *)(this + 0x1c) != 0) {
    uVar7 = *(uint *)(this + 0x18);
    iVar11 = 0;
    if (*(int * PTR32 *)(this + 0xc) != (int *)0x0) {
      iVar11 = **(int * PTR32 *)(this + 0xc);
    }
    if (*(uint *)(iVar11 + 8) <= uVar7) {
      uVar7 = uVar7 - *(uint *)(iVar11 + 8);
    }
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar11 + 4) + uVar7 * 4)));
    bVar4 = false;
    uVar7 = F_00ab24a0(puVar2[6]);
    if ((puVar2[6] == 0) || (uVar7 != 0)) {
      bVar4 = true;
    }
    puVar5 = (uint *)F_00ab3de0(*puVar2);
    if ((puVar5 != (uint *)0x0) && (bVar4)) {
      F_0042b630(((undefined1 *)(gen_frame + 0x104)));
      piVar6 = ((int *)(gen_frame + 0x158));
      iVar11 = 0x13;
      do {
        *piVar6 = 0;
        piVar6 = piVar6 + 2;
        iVar11 = iVar11 + -1;
      } while (-1 < iVar11);
      uVar10 = *puVar5;
      F_005a2710(((int *)(gen_frame + 0x158)),6);
      ((int *)(gen_frame + 0x158))[1] = (uVar10 & 0xffffff) + (int)puVar5;
      uVar10 = puVar5[10];
      F_005a2710(((undefined1 *)(gen_frame + 0x160)),3);
      (*(uint *)(gen_frame + 0x164)) = uVar10;
      cVar1 = *(char *)(puVar2 + 1);
      F_005a2710(((undefined1 *)(gen_frame + 0x168)),3);
      (*(uint *)(gen_frame + 0x16c)) = (uint)(cVar1 != '\0');
      uVar14 = puVar2[2];
      F_005a2710(((undefined1 *)(gen_frame + 0x170)),4);
      (*(undefined4 *)(gen_frame + 0x174)) = uVar14;
      (*(int *)(gen_frame + 0x0)) = 0xf022;
      F_0042e430(this + 0x28,&REFG(undefined, 0x10bdb6d));
      if (REFG(undefined1, 0x14ab29a) == 0) {
        puVar2[5] = 0xffffffff;
      }
      else {
        uVar10 = (uint)REFG(undefined1, 0x14ab29a);
        (*(int *)(gen_frame + 0x0)) = uVar10 + 0xf021;
        uVar14 = 0xad6;
        pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4))));
        uVar10 = F_00461bb0(pvVar8,uVar14,uVar10);
        F_0042e430(this + 0x28,uVar10);
      }
      iVar11 = puVar2[3];
      if (iVar11 < 0) {
        puVar9 = &REFG(undefined, 0x10bdb6e);
      }
      else {
        uVar14 = 0xc80;
        pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4))));
        puVar9 = (undefined *)F_00461bb0(pvVar8,uVar14,iVar11);
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0x8)),puVar9,REFG(undefined4, 0x108cc50));
      iVar11 = puVar2[4];
      if (iVar11 < 0) {
        puVar9 = &REFG(undefined, 0x10bdb6f);
      }
      else {
        uVar14 = 0xc80;
        pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4))));
        puVar9 = (undefined *)F_00461bb0(pvVar8,uVar14,iVar11);
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)),puVar9,REFG(undefined4, 0x108cc50));
      iVar11 = puVar2[5];
      if (iVar11 < 0) {
        puVar9 = &REFG(undefined, 0x10bdb7a);
      }
      else {
        uVar14 = 0xc80;
        pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4))));
        puVar9 = (undefined *)F_00461bb0(pvVar8,uVar14,iVar11);
      }
      F_0042cc20(((undefined1 *)(gen_frame + 0xb0)),puVar9,REFG(undefined4, 0x108cc50));
      uVar10 = F_0042a990(((undefined1 *)(gen_frame + 0x8)));
      F_005a2710(((undefined1 *)(gen_frame + 0x178)),6);
      (*(uint *)(gen_frame + 0x17c)) = uVar10;
      uVar10 = F_0042a990(((undefined1 *)(gen_frame + 0x5c)));
      F_005a2710(((undefined1 *)(gen_frame + 0x180)),6);
      (*(uint *)(gen_frame + 0x184)) = uVar10;
      uVar10 = F_0042a990(((undefined1 *)(gen_frame + 0xb0)));
      F_005a2710(((undefined1 *)(gen_frame + 0x188)),6);
      (*(uint *)(gen_frame + 0x18c)) = uVar10;
      F_005a2710(((undefined1 *)(gen_frame + 0x198)),3);
      (*(undefined4 *)(gen_frame + 0x19c)) = 0xf01f;
      F_005a2710(((undefined1 *)(gen_frame + 0x1a0)),3);
      (*(undefined4 *)(gen_frame + 0x1a4)) = 0xf020;
      F_005a2710(((undefined1 *)(gen_frame + 0x1a8)),3);
      (*(int *)(gen_frame + 0x1ac)) = (*(int *)(gen_frame + 0x0));
      if (puVar2[6] == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (uint)*(ushort *)(uVar7 + 0x7c);
      }
      F_005a2710(((undefined1 *)(gen_frame + 0x1b0)),4);
      (*(uint *)(gen_frame + 0x1b4)) = uVar10;
      uVar14 = puVar2[7];
      F_005a2710(((undefined1 *)(gen_frame + 0x1b8)),4);
      (*(undefined4 *)(gen_frame + 0x1bc)) = uVar14;
      uVar14 = puVar2[6];
      F_005a2710(((undefined1 *)(gen_frame + 0x1c0)),4);
      (*(undefined4 *)(gen_frame + 0x1c4)) = uVar14;
      puVar9 = (undefined *)F_00ab6240(puVar2[6],1,uVar7);
      if (puVar9 == (undefined *)0x0) {
        puVar9 = &REFG(undefined, 0x10bdb7b);
      }
      F_0042e430(((undefined1 *)(gen_frame + 0x104)),puVar9);
      uVar7 = F_0042a990(((undefined1 *)(gen_frame + 0x104)));
      F_005a2710(((undefined1 *)(gen_frame + 0x1c8)),6);
      uVar17 = 0;
      (*(uint *)(gen_frame + 0x1cc)) = uVar7;
      uVar15 = 0;
      uVar14 = 0xc81;
      pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4))));
      uVar7 = F_0043bd00(pvVar8,uVar14,uVar15,uVar17);
      F_005a2710(((undefined1 *)(gen_frame + 0x1d0)),6);
      uVar17 = 0;
      (*(uint *)(gen_frame + 0x1d4)) = uVar7;
      uVar15 = 0;
      uVar14 = 0xc82;
      pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4))));
      uVar7 = F_0043bd00(pvVar8,uVar14,uVar15,uVar17);
      F_005a2710(((undefined1 *)(gen_frame + 0x1d8)),6);
      (*(uint *)(gen_frame + 0x1dc)) = uVar7;
      uVar7 = F_0042a990(this + 0x28);
      F_005a2710(((undefined1 *)(gen_frame + 0x1e0)),6);
      (*(uint *)(gen_frame + 0x1e4)) = uVar7;
      iVar3 = (uint)(puVar2[5] != -1) * 2;
      iVar11 = iVar3 + 1;
      if (puVar2[6] != 0) {
        iVar11 = iVar3 + 2;
      }
      F_005a2710(((undefined1 *)(gen_frame + 0x1f0)),4);
      uVar18 = 4;
      uVar16 = 0;
      uVar17 = 0;
      piVar6 = ((int *)(gen_frame + 0x158));
      (*(int *)(gen_frame + 0x1f4)) = iVar11;
      uVar15 = 0x14;
      uVar14 = 0x5c;
      pAVar13 = this;
      pvVar8 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      uVar7 = F_008668b0(pvVar8,uVar14,uVar15,piVar6,pAVar13,uVar17,uVar16,uVar18);
      *(uint *)(this + 8) = uVar7;
      F_0042c880(((undefined1 *)(gen_frame + 0xb0)));
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)));
      F_0042c880(((undefined1 *)(gen_frame + 0x8)));
      puVar5 = &(*(uint *)(gen_frame + 0x1f8));
      iVar11 = 0x13;
      do {
        puVar5 = puVar5 + -2;
        F_005a2670(puVar5);
        iVar11 = iVar11 + -1;
      } while (-1 < iVar11);
      uVar12 = F_0042c880(((undefined1 *)(gen_frame + 0x104)));
      F_00c47745((*(uint *)(gen_frame + 0x1f8)) ^ (uint)(uint)(gen_frame + 0x1fc));
      return (uint)uVar12;
    }
    *(undefined4 *)(this + 0x24) = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x1f8)) ^ (uint)(uint)(gen_frame + 0x1fc));
  return (uint)puVar5;
}

/* ref: Client::UI2::Agent::AgentFateReward::vf5 */
uint F_008ac800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8ac800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = *(int *)(this + 0x24) - 1;
  if (uVar1 == 0) {
    if (*(int *)(this + 0x1c) != 0) {
      uVar1 = *(uint *)(this + 0x18);
      if (*(int * PTR32 *)(this + 0xc) == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = **(int * PTR32 *)(this + 0xc);
      }
      if (*(uint *)(iVar2 + 8) <= uVar1) {
        uVar1 = uVar1 - *(uint *)(iVar2 + 8);
      }
      uVar1 = F_00ab3de0(**((undefined4 * PTR32 *)GEN_TOP((*(int *)(iVar2 + 4) + uVar1 * 4))));
      if (uVar1 == 0) {
        return 0;
      }
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    }
    *(undefined4 *)(this + 0x24) = 0;
  }
  return uVar1;
}

/* ref: FUN_008aca10 */
byte F_008aca10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8aca10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char cVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  int * piVar6;
  undefined4 * puVar7;
  uint * puVar8;
  uint uVar9;
  
  iVar4 = (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  uVar9 = 0;
  puVar8 = ((uint *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[1]) + 0x54)));
  do {
    uVar2 = *puVar8;
    if (uVar2 != 0) {
      puVar7 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)(iVar4 + 0x18))[1]));
      cVar1 = *(char *)((int)puVar7 + 0x15);
      puVar3 = *(undefined4 * PTR32 *)(iVar4 + 0x18);
      while (cVar1 == '\0') {
        if ((uint)puVar7[3] < uVar2) {
          puVar5 = (undefined4 *)puVar7[2];
          puVar7 = puVar3;
        }
        else {
          puVar5 = (undefined4 *)*puVar7;
        }
        puVar3 = puVar7;
        puVar7 = puVar5;
        cVar1 = *(char *)((int)puVar5 + 0x15);
      }
      (*(undefined4 * PTR32 *)&gen_args[0]) = puVar3;
      if ((puVar3 == *(undefined4 * PTR32 *)(iVar4 + 0x18)) || (uVar2 < (uint)puVar3[3])) {
        (*(undefined4 * PTR32 *)&gen_args[1]) = *(undefined4 * PTR32 *)(iVar4 + 0x18);
        piVar6 = (int *)&(*(undefined4 * PTR32 *)&gen_args[1]);
      }
      else {
        piVar6 = (int *)&(*(undefined4 * PTR32 *)&gen_args[0]);
      }
      if ((*piVar6 == *(int *)(iVar4 + 0x18)) || (*(char *)(*piVar6 + 0x10) == '\0')) {
        return 0;
      }
    }
    uVar9 = uVar9 + 1;
    puVar8 = puVar8 + 1;
    if (9 < uVar9) {
      return 1;
    }
  } while( true );
}

/* ref: Client::UI2::Agent::AgentInspect::vf1 */
uint F_008aca90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8aca90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 uVar1;
  uint uVar2;
  undefined1 uVar3;
  
  uVar3 = 1;
  if ((*param_2 & 0xf) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
    this[0x142] = (undefined1)0x1;
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  case 1: ;
    uVar3 = 0;
    if (*(int *)(this + 0x18) != -0x20000000) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
      if (*(undefined * PTR32 *)(uVar2 + 0x110) != (undefined *)0x0) {
        F_0087ffb0(*(undefined * PTR32 *)(uVar2 + 0x110),*(undefined4 *)(this + 0x18));
      }
    }
    break;
  case 0xfffffffe: ;
  case 0xffffffff: ;
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 2;
    return (uint)param_1;
  }
  *(undefined1 *)(param_1 + 1) = uVar3;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentInspect::vf5 */
uint F_008acb40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8acb40u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*in_ecx + 0x10))(in_ecx);
  if ((char)uVar1 != '\0') {
    F_00827000(in_ecx,in_edi);
    if ((in_ecx[0x6d] == 2) && (*(char *)((int)in_ecx + 0x142) != '\0')) {
      F_00771ca0(in_ecx);
      in_ecx[0x6d] = 0;
    }
    if ((in_ecx[0x6e] == 2) && (*(char *)((int)in_ecx + 0x142) != '\0')) {
      F_00771d50(in_ecx);
      in_ecx[0x6e] = 0;
    }
    uVar1 = F_0089a8d0(in_ecx);
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentNpcTrade::vf1 */
uint F_008acbb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8acbb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_5;
  
  local_5 = 0;
  if (param_4 == 0) {
    if ((*param_2 & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 4);
    }
    switch((unsigned int)(uintptr_t)(uVar3)) {
    case 0: ;
      local_5 = 1;
      this[0x468] = (undefined1)0x1;
      F_0089b5a0(this);
      if (*(int *)(this + 8) != 0) {
        F_00ba08a0(&REFG(undefined, 0x14b0f2c),uVar3);
      }
      this[0x468] = (undefined1)0x0;
      *(undefined4 *)(this + 8) = 0;
      break;
    case 2: ;
      if ((param_2[8] & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(param_2 + 0xc);
      }
      if ((param_2[0x10] & 0xf) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 0x14);
      }
      if ((param_2[0x18] & 0xf) == 0) {
        F_0086fa30(this,uVar3,uVar2,0);
      }
      else {
        F_0086fa30(this,uVar3,uVar2,*(undefined4 *)(param_2 + 0x1c));
      }
      break;
    case 3: ;
      if ((param_2[8] & 0xf) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(param_2 + 0xc);
      }
      F_00a3ced0(&REFG(undefined, 0x14a4230),0x7d5,uVar3,1);
      F_0043f8b0(9);
      break;
    case 4: ;
      F_0089b610(this);
      break;
    case 0xfffffffe: ;
    case 0xffffffff: ;
      if (this[0x468] != (undefined1)0x0) {
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 2;
        return (uint)param_1;
      }
    case 1: ;
      local_5 = 1;
      F_0089b5a0(this);
      if (*(int *)(this + 8) != 0) {
        F_00ba08a0(&REFG(undefined, 0x14b0f2c),uVar3);
      }
      *(undefined4 *)(this + 8) = 0;
    }
    goto switchD_008acbe4_default;
  }
  if (param_4 != 1) goto switchD_008acbe4_default;
  if ((*param_2 & 0xf) == 0) {
LAB_008acd11: ;
    if ((param_2[8] & 0xf) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_2 + 0xc);
    }
    if ((((-1 < (char)this[200]) && (0 < *(short *)(this + 0xca))) &&
        (iVar1 < *(short *)(this + 0xca))) && (-1 < iVar1)) {
      F_00a47f70(&REFG(undefined, 0x14a4230),**(undefined4 * PTR32 *)(this + iVar1 * 4 + 0xd0),
                   (uint)*((ushort *)GEN_TOP((*(undefined4 * PTR32 *)(this + iVar1 * 4 + 0xd0) + 1))),0x7d5,
                   (uint)(ushort)(short)(char)this[200],1);
      F_0043f8b0(10);
    }
    this[200] = (undefined1)0xff;
    *(undefined2 *)(this + 0xca) = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
    if (iVar1 < -2) goto switchD_008acbe4_default;
    if (-1 < iVar1) {
      if (iVar1 != 0) goto switchD_008acbe4_default;
      goto LAB_008acd11;
    }
  }
  local_5 = 1;
  F_00774e30(this);
switchD_008acbe4_default: ;
  *(undefined1 *)(param_1 + 1) = local_5;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_008acf30 */
uint F_008acf30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8acf30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  byte bVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  if (param_4 == 0) {
    pvVar3 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),param_2);
    if ((pvVar3 == (undefined *)0x0) ||
       (pvVar3 = (undefined *)F_00a37da0(pvVar3,param_1), pvVar3 == (undefined *)0x0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_00a3a8a0(pvVar3);
      if ((1 < (int)uVar2) && (param_2 == 0x2ee1)) {
        *(undefined4 *)((int)this + 0x20) = 0x7d1;
        *(undefined4 *)((int)this + 0x24) = param_1;
        bVar1 = F_00871af0((undefined *)((int)this + -0xc),0x2ee1,param_1);
        return CONCAT31(extraout_var_00,bVar1);
      }
    }
    uVar2 = F_00a418c0(&REFG(undefined, 0x14a4230),param_2,param_1,uVar2);
    return uVar2;
  }
  if (param_4 != 1) {
    if (param_4 - 2U != 0) {
      return param_4 - 2U;
    }
    uVar2 = F_0089c550((undefined *)((int)this + -0xc),param_2,param_1);
    return uVar2;
  }
  pvVar3 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),param_2);
  if ((pvVar3 == (undefined *)0x0) ||
     (pvVar3 = (undefined *)F_00a37da0(pvVar3,param_1), pvVar3 == (undefined *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00a3a8a0(pvVar3);
    if ((1 < (int)uVar2) && (param_2 == 0x7d1)) {
      *(undefined4 *)((int)this + 0x20) = 0x2ee1;
      *(undefined4 *)((int)this + 0x24) = param_1;
      bVar1 = F_00871af0((undefined *)((int)this + -0xc),0x7d1,param_1);
      return CONCAT31(extraout_var,bVar1);
    }
  }
  uVar2 = F_00a41810(&REFG(undefined, 0x14a4230),param_2,param_1,uVar2);
  return uVar2;
}

/* ref: FUN_008ad040 */
byte F_008ad040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8ad040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((0 < param_2) && (((byte)*param_1 & 0xf) == 3)) {
    switch((unsigned int)(uintptr_t)(param_1[1])) {
    case 0: ;
      F_00871f60(this);
      return 0;
    case 1: ;
      if (*(int *)((int)this + 0x19ac) == 0) {
        F_0089bec0(this,param_2);
        return 0;
      }
      F_0089c4d0(this);
      return 0;
    case 2: ;
      if (*(int *)((int)this + 0x14) == 1) {
        if ((*(byte *)(param_1 + 2) & 0xf) == 0) {
          F_0089be60(this,0);
          return 0;
        }
        F_0089be60(this,param_1[3]);
        return 0;
      }
      if (*(int *)((int)this + 0x19ac) == 0) {
        return 0;
      }
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
      ((code *)*(gen_code32 *)(*piVar2 + 100))(piVar2,*(undefined4 *)((int)this + 0x19ac),1);
      return 0;
    case 3: ;
      if (*(int *)((int)this + 0x14) == 4) {
        piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
        ((code *)*(gen_code32 *)(*piVar2 + 100))(piVar2,*(undefined4 *)((int)this + 0x19ac),1);
        return 0;
      }
      break;
    case 4: ;
      if ((*(byte *)(param_1 + 4) & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = param_1[5];
      }
      if ((*(byte *)(param_1 + 6) & 0xf) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = param_1[7];
      }
      uVar3 = F_00760440(uVar5);
      this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),uVar3);
      if (((this_00 != (undefined *)0x0) && (uVar4 = F_00a37da0(this_00,uVar6), uVar4 != 0)) &&
         (uVar4 = F_0071d3a0(uVar4), (char)uVar4 == '\0')) {
        if (*(int *)((int)this + 0x14) == 1) {
          ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4))))((int)this + 0xc,uVar6,uVar3,0,0);
          return 0;
        }
        if (*(int *)((int)this + 0x14) == 4) {
          F_0089c550(this,uVar3,uVar6);
        }
      }
      return 0;
    case 5: ;
      if ((*(byte *)(param_1 + 4) & 0xf) == 0) {
        *(undefined4 *)((int)this + 0x44) = 0;
        return 0;
      }
      if ((uint)param_1[5] < 8) {
        *(undefined4 *)((int)this + 0x44) = param_1[5];
      }
      return 0;
    case 0xfffffffe: ;
      if ((*(int *)((int)this + 8) != 0) &&
         (piVar2 = *(int * PTR32 *)((int)this + 0x10), piVar2 != (int *)0x0)) {
        ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,((undefined1 *)(gen_frame + 0x4)),param_1,param_2,0);
        F_005a2670(((undefined1 *)(gen_frame + 0x4)));
      }
      *(undefined4 *)((int)this + 8) = 0;
      if (*(int *)((int)this + 0x19b0) != 0) {
        F_0089c4d0(this);
      }
      *(undefined4 *)((int)this + 0x14) = 0;
      return 1;
    case 0xffffffff: ;
      if (*(int *)((int)this + 0x14) == 4) {
        piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
        ((code *)*(gen_code32 *)(*piVar2 + 100))(piVar2,*(undefined4 *)((int)this + 8),0);
        piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
        ((code *)*(gen_code32 *)(*piVar2 + 100))(piVar2,*(undefined4 *)((int)this + 0x19ac),1);
        return 0;
      }
    }
    pcVar1 = *(gen_code32 *)(*(int *)this + 0xc);
    *(undefined4 *)((int)this + 8) = 0;
    (*pcVar1)(this);
  }
  return 1;
}

/* ref: FUN_008ad610 */
byte F_008ad610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8ad610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xa9c);
  if ((-1 < iVar1) && (iVar1 < *(int *)((int)this + 0xaa0))) {
    F_0089c550(this,0x2ee2,(int)*(short *)(iVar1 * 0xc0 + 0xb58 + (int)this));
  }
  *(undefined4 *)((int)this + 0xa9c) = 0xffffffff;
  return 1;
}

/* ref: FUN_008ad650 */
byte F_008ad650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8ad650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  undefined * this;
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  byte local_5;
  
  local_5 = 1;
  if ((0 < param_4) && (((byte)*param_3 & 0xf) == 3)) {
    switch((unsigned int)(uintptr_t)(param_3[1])) {
    case 0: ;
      if ((((*(int *)((int)in_ecx + 0xa94) != 0) && (*(int *)((int)in_ecx + 0xa98) != 0)) &&
          (*(int *)((int)in_ecx + 0x24) != 9999)) && (-1 < *(int *)((int)in_ecx + 0x28))) {
        F_00a3d7c0(&REFG(undefined, 0x14a4230),*(int *)((int)in_ecx + 0x24),
                     (uint)*(ushort *)((int)in_ecx + 0x28));
        if (*(int *)((int)in_ecx + 0x24) == 0x2ee2) {
          F_00a367f0(&REFG(undefined, 0x14a4230),(uint)*(ushort *)((int)in_ecx + 0x28),
                       *(undefined4 *)((int)in_ecx + 0xa94));
          F_0089c4a0(in_ecx,in_edi);
          uVar3 = 0x2e4;
          pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)in_ecx + 4) + 0x28))))
                                     (*(int * PTR32 *)((int)in_ecx + 4))));
          F_0046a630(pvVar1,uVar3);
        }
        else {
          pvVar1 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x2ee2);
          if ((pvVar1 != (undefined *)0x0) && (uVar2 = F_00a36440(pvVar1,0), uVar2 != 0)) {
            F_00a493a0(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)in_ecx + 0x24),
                         (uint)*(ushort *)((int)in_ecx + 0x28),0x2ee2,(uint)*(ushort *)(uVar2 + 4),
                         *(undefined4 *)((int)in_ecx + 0xa98));
            F_00a367f0(&REFG(undefined, 0x14a4230),(uint)*(ushort *)(uVar2 + 4),
                         *(undefined4 *)((int)in_ecx + 0xa94));
          }
        }
      }
    default: ;
      *(undefined4 *)((int)in_ecx + 0x19b0) = 0;
      F_00829580(in_ecx);
      break;
    case 2: ;
      local_5 = 0;
      if ((1 < param_4) && (((byte)param_3[2] & 0xf) == 3)) {
        *(undefined4 *)((int)in_ecx + 0xa94) = param_3[3];
        F_007dab60(in_ecx,0,in_edi);
        return 0;
      }
      break;
    case 3: ;
      local_5 = 0;
      if ((1 < param_4) && (((byte)param_3[2] & 0xf) == 3)) {
        *(undefined4 *)((int)in_ecx + 0xa98) = param_3[3];
        F_007dab60(in_ecx,0,in_edi);
        return 0;
      }
      break;
    case 4: ;
      local_5 = 0;
      pvVar1 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)in_ecx + 0x24));
      if ((pvVar1 != (undefined *)0x0) &&
         (pvVar1 = (undefined *)F_00a37da0(pvVar1,*(undefined4 *)((int)in_ecx + 0x28)),
         pvVar1 != (undefined *)0x0)) {
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)in_ecx + 4) + 0x48))))(*(int * PTR32 *)((int)in_ecx + 4));
        uVar3 = *(undefined4 *)((int)in_ecx + 0x19b0);
        this = *(undefined * PTR32 *)(uVar2 + 0xfc);
        uVar2 = F_00906df0(pvVar1);
        F_007dfc60(this,uVar2,uVar3);
        *(undefined1 *)((int)in_ecx + 0x19b5) = 1;
        return 0;
      }
    }
  }
  return local_5;
}

/* ref: Client::UI2::Agent::AgentRetainer::vf2 */
unsigned int F_008adef0(unsigned int gen_a0)
{
  GEN_ENTER(0x8adef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pAVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int * piVar6;
  undefined4 uVar7;
  
  if ((*(int *)(this + 8) == 0) && (*(int *)(this + 0x19ac) == 0)) {
    uVar7 = 9;
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x44))))(*(int * PTR32 *)(this + 4));
    uVar5 = F_00435440(uVar5,uVar7);
    *(uint *)(this + 0x18) = uVar5;
    bVar3 = false;
    bVar4 = false;
    switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0x14))) {
    case 1: ;
      F_00871e80(this);
      if (*(int *)(this + 8) != 0) {
        F_0089bbd0(this,0);
      }
      bVar4 = true;
      break;
    case 2: ;
    case 5: ;
      bVar3 = true;
      break;
    case 3: ;
    case 4: ;
      bVar3 = true;
      bVar4 = true;
      break;
    default: ;
      goto switchD_008adf37_default;
    }
    if ((*(int *)(this + 0x18) != 0) && (bVar3)) {
      F_00443f20();
      *(uint *)(this + 0x1c) = *(uint *)(this + 0x1c) & 0xfffffffe;
    }
    if ((*(int *)(this + 0x14) == 3) || (*(int *)(this + 0x14) == 4)) {
      F_00a6e080(&REFG(undefined, 0x14a9e40),0x32,0,0);
    }
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
    iVar2 = *(int *)(uVar5 + 0x28);
    if ((iVar2 != 0) && (bVar4)) {
      pAVar1 = this + 0xc;
      *(undefined4 *)(iVar2 + 0x210) = 0x61;
      *(undefined * PTR32 *)(iVar2 + 0x214) = pAVar1;
      *(undefined4 *)(iVar2 + 0x218) = 1;
      *(undefined1 *)(iVar2 + 0x21c) = 0;
      *(undefined4 *)(iVar2 + 0x220) = 0x62;
      *(undefined * PTR32 *)(iVar2 + 0x224) = pAVar1;
      *(undefined4 *)(iVar2 + 0x228) = 0;
      *(undefined1 *)(iVar2 + 0x22c) = 0;
      if ((*(int *)(this + 0x14) == 4) || (*(int *)(this + 0x14) == 3)) {
        *(undefined4 *)(iVar2 + 0x230) = 99;
        *(undefined * PTR32 *)(iVar2 + 0x234) = pAVar1;
        *(undefined4 *)(iVar2 + 0x238) = 2;
        *(undefined1 *)(iVar2 + 0x23c) = 0;
      }
    }
  }
  else {
    if (*(int *)(this + 0x14) == 1) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x18))();
      return 0;
    }
    if (*(int *)(this + 0x19ac) != 0) {
      piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      ((code *)*(gen_code32 *)(*piVar6 + 100))(piVar6,*(undefined4 *)(this + 0x19ac),1);
      return 0;
    }
  }
switchD_008adf37_default: ;
  return 0;
}

/* ref: Client::UI2::Agent::AgentRetainer::vf3 */
uint F_008ae080(unsigned int gen_a0)
{
  GEN_ENTER(0x8ae080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  iVar1 = *(int *)(uVar2 + 0x28);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x210) = 0;
    *(undefined4 *)(iVar1 + 0x214) = 0;
    *(undefined4 *)(iVar1 + 0x218) = 0;
    *(undefined1 *)(iVar1 + 0x21c) = 0;
    *(undefined4 *)(iVar1 + 0x220) = 0;
    *(undefined4 *)(iVar1 + 0x224) = 0;
    *(undefined4 *)(iVar1 + 0x228) = 0;
    *(undefined1 *)(iVar1 + 0x22c) = 0;
    *(undefined4 *)(iVar1 + 0x230) = 0;
    *(undefined4 *)(iVar1 + 0x234) = 0;
    *(undefined4 *)(iVar1 + 0x238) = 0;
    *(undefined1 *)(iVar1 + 0x23c) = 0;
  }
  *(undefined4 *)(this + 0x14) = 0;
  if (*(int *)(this + 8) != 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  F_007759b0(this);
  if (*(int *)(this + 8) != 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  this[0x19b4] = (undefined1)0x1;
  *(undefined4 *)(this + 0xa8c) = 0;
  F_0089c4d0(this);
  F_00829580(this);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  piVar3 = *(int * PTR32 *)(uVar2 + 0x28);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  }
  F_0089bdf0(this);
  piVar3 = *(int * PTR32 *)(this + 0x10);
  uVar2 = 0xffffffff;
  this[0x19a4] = (undefined1)0x0;
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  *(undefined4 *)(this + 0x3c) = 0xffffffff;
  *(undefined4 *)(this + 0x40) = 0xffffffff;
  *(undefined4 *)(this + 0x44) = 0;
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,((undefined1 *)(gen_frame + 0x4)),0,0,0);
    uVar2 = F_005a2670(((undefined1 *)(gen_frame + 0x4)));
    *(undefined4 *)(this + 0x10) = 0;
  }
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return uVar2;
}

/* ref: FUN_008ae280 */
uint F_008ae280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8ae280u, gen_a0, gen_a1, 0u, 0u);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)in_ecx + 0x14);
  if ((uVar1 != 3) && (uVar1 != 4)) {
    if (uVar1 == 2) {
      if (*(int *)((int)in_ecx + 8) == 0) {
        uVar1 = F_00871f60(in_ecx);
        return uVar1;
      }
    }
    else if (uVar1 == 5) {
      uVar1 = F_008722e0(in_ecx);
      return uVar1;
    }
    return uVar1;
  }
  uVar1 = F_0089bec0(in_ecx,in_edi);
  return uVar1;
}

/* ref: FUN_008ae2b0 */
uint F_008ae2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x8ae2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  byte bVar3;
  undefined * this_00;
  uint uVar4;
  float * pfVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xe0))(param_1)));
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = this_00;
  if (this_00 != (undefined *)0x0) {
    uVar4 = F_0046baf0(this_00,param_2,param_3,0);
    (*(uint *)(gen_frame + 0x28)) = uVar4;
    if (uVar4 != 0) {
      (*(uint * PTR32 *)(gen_frame + 0x2c)) = (uint *)((int)this + param_4 * 4 + 0x2c0);
      do {
        uVar4 = F_007761b0(this);
        if ((int)uVar4 < 0) {
          return param_4;
        }
        pfVar5 = (float *)F_0043e0d0(((undefined1 *)(gen_frame + 0x0)),param_1);
        (*(float *)(gen_frame + 0x10)) = *pfVar5;
        (*(float *)(gen_frame + 0x14)) = pfVar5[1];
        fVar1 = pfVar5[2];
        (*(float *)(gen_frame + 0x18)) = fVar1;
        iVar6 = *(int *)((int)this + 800) + 1;
        fVar7 = (float10)REFG(double, 0x1088108);
        fVar8 = (float10)*(double *)&REFG(undefined, 0x10944e0);
        (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*pfVar5 +
                          ((float10)*(float *)(&REFG(undefined, 0x13285e0) + *(int *)((int)this + 800) * 8) -
                          fVar7) * fVar8)));
        fVar2 = *(float *)(&REFG(undefined, 0x13285dc) + iVar6 * 8);
        *(int *)((int)this + 800) = iVar6;
        (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF((((float10)fVar2 - fVar7) * fVar8 + (float10)fVar1)));
        if (0x13 < iVar6) {
          *(undefined4 *)((int)this + 800) = 0;
        }
        bVar3 = F_0089cbd0(this,param_5,uVar4 * 9,param_6,uVar4,(*(uint *)(gen_frame + 0x28)),&(*(float *)(gen_frame + 0x10)),param_7,param_8
                             ,param_9);
        if (bVar3 != 0) {
          param_4 = param_4 + 1;
          *((undefined1 *)GEN_TOP(((uVar4 + 2) * 0x20 + (int)this))) = 1;
          pfVar5 = (float *)(uVar4 * 0x20 + 0x50 + (int)this);
          *pfVar5 = (*(float *)(gen_frame + 0x10));
          pfVar5[1] = (*(float *)(gen_frame + 0x14));
          pfVar5[2] = (*(float *)(gen_frame + 0x18));
          *(*(uint * PTR32 *)(gen_frame + 0x2c)) = uVar4;
          *(int *)((int)this + 0x310) = *(int *)((int)this + 0x310) + 1;
          (*(uint * PTR32 *)(gen_frame + 0x2c)) = (*(uint * PTR32 *)(gen_frame + 0x2c)) + 1;
        }
        uVar4 = F_0044e730((*(undefined * PTR32 *)(gen_frame + 0x24)));
        (*(uint *)(gen_frame + 0x28)) = uVar4;
      } while (uVar4 != 0);
    }
  }
  return param_4;
}

/* ref: Client::UI2::Agent::AgentStatus::vf1 */
uint F_008ae430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8ae430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_4 != 0) {
    iVar4 = 1;
    if ((param_4 == 1) &&
       ((((*param_2 & 0xf) == 0 || (*(int *)(param_2 + 4) == 0)) && (1 < param_3)))) {
      do {
        if (((param_2[iVar4 * 8] & 0xf) != 0) && (0 < *(int *)(param_2 + iVar4 * 8 + 4))) {
          F_00a686f0(&REFG(undefined1, 0x14ab070),iVar4 + -1,*(int *)(param_2 + iVar4 * 8 + 4));
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_3);
    }
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 2;
    return (uint)param_1;
  }
  if ((*param_2 & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 4);
  }
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 10: ;
    uVar3 = 0;
    uVar6 = 0;
    if (2 < param_3) {
      if ((param_2[8] & 0xf) != 0) {
        uVar3 = *(undefined4 *)(param_2 + 0xc);
      }
      if ((param_2[0x10] & 0xf) == 0) {
        F_00872670(this,uVar3,0);
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 2;
        return (uint)param_1;
      }
      uVar6 = *(undefined4 *)(param_2 + 0x14);
    }
    F_00872670(this,uVar3,uVar6);
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  case 0xb: ;
    F_007db040(this);
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  case 0xc: ;
    F_0089d6a0(this);
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  case 0xd: ;
    F_008726b0(this);
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  case 0xe: ;
    this[0x10] = (undefined1)((char)this[0x10] + -1);
    if (0x7f < (byte)this[0x10]) {
      F_00a6a9a0(&REFG(undefined, 0x14b29c0));
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    }
    break;
  case 0xf: ;
    if ((param_2[8] & 0xf) == 0) {
      F_00aa1550(REFG(undefined4, 0x1379694),0);
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    }
    iVar4 = *(int *)(param_2 + 0xc);
    if ((-1 < iVar4) && (iVar4 < 0x101)) {
      F_00aa1550(REFG(undefined4, 0x1379694),iVar4);
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    }
    break;
  case 0x10: ;
    if (1 < param_3) {
      if ((param_2[8] & 0xf) != 0) {
        F_00872630(this,*(undefined4 *)(param_2 + 0xc));
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 2;
        return (uint)param_1;
      }
      F_00872630(this,0);
      *(undefined1 *)(param_1 + 1) = 0;
      *param_1 = 2;
      return (uint)param_1;
    }
    break;
  case 0x11: ;
    uVar6 = 0;
    uVar3 = 0x95;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x3c))))(*(int * PTR32 *)(this + 4))));
    uVar2 = F_0043c920(pvVar1,uVar3,uVar6);
    uVar7 = 1;
    uVar5 = 1;
    uVar2 = uVar2 - 1 & 1;
    uVar6 = 0;
    uVar3 = 0x95;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x3c))))(*(int * PTR32 *)(this + 4))));
    F_00447870(pvVar1,uVar3,uVar2,uVar6,uVar5,uVar7);
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  case 0x12: ;
    uVar6 = 0;
    uVar3 = 0x96;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x3c))))(*(int * PTR32 *)(this + 4))));
    uVar2 = F_0043c920(pvVar1,uVar3,uVar6);
    uVar7 = 1;
    uVar5 = 1;
    uVar2 = uVar2 - 1 & 1;
    uVar6 = 0;
    uVar3 = 0x96;
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x3c))))(*(int * PTR32 *)(this + 4))));
    F_00447870(pvVar1,uVar3,uVar2,uVar6,uVar5,uVar7);
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  case 0x13: ;
    F_00776cc0(this,(uint)(this[0x3c] == (undefined1)0x0));
    break;
  default: ;
    ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 2;
    return (uint)param_1;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentStatus::vf5 */
unsigned int F_008ae740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8ae740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  F_00776460(this,REFG(undefined4, 0x14a4258));
  if ((this[0x10] != (undefined1)0x0) && (REFG(char, 0x14b29e4) == '\0')) {
    F_00776320(this);
    this[0x10] = (undefined1)0x0;
  }
  if (*(int *)(this + 8) != 0) {
    F_00776aa0(this);
  }
  if ((param_1 & 0x1f) == 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x3d);
    if (uVar2 != 0) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x14c) + 0x2c))))(*(int * PTR32 *)(uVar3 + 0x14c));
      uVar3 = (uint)((char)uVar3 != '\0');
      if (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x704))) != uVar3) {
        *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x704))) = uVar3;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x17c) + 0x2c))))(*(int * PTR32 *)(uVar3 + 0x17c));
      uVar3 = (uint)((char)uVar3 != '\0');
      if (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x708))) != uVar3) {
        *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x708))) = uVar3;
        *(undefined1 *)(uVar2 + 0x1d) = 1;
      }
    }
  }
  F_0089d6c0(this,param_1);
  return 0;
}

/* ref: Client::UI2::Agent::AgentTrade::vf1 */
uint F_008ae820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8ae820u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined * pAVar4;
  undefined4 uVar5;
  
  uVar2 = 0;
  if ((*param_2 & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2[1];
  }
  if (param_4 == 0) {
    switch((unsigned int)(uintptr_t)(uVar3)) {
    case 0: ;
      F_00a3b0f0(&REFG(undefined, 0x14a4230));
      *param_1 = 2;
      *(undefined1 *)(param_1 + 1) = 0;
      return (uint)param_1;
    case 1: ;
      goto switchD_008ae852_caseD_1;
    case 2: ;
      uVar3 = F_00a3ace0(&REFG(undefined, 0x14a4230));
      if (1000000 < (int)uVar3) {
        uVar3 = 1000000;
      }
      uVar5 = 1;
      pAVar4 = this;
      uVar1 = F_00a3ade0(&REFG(undefined, 0x14a4230));
      F_008730d0(this,0,uVar3,uVar1,pAVar4,uVar5);
      *param_1 = 2;
      *(undefined1 *)(param_1 + 1) = 0;
      return (uint)param_1;
    case 3: ;
    case 6: ;
      if (1 < param_3) {
        F_00777710(this);
        if ((param_2[2] & 0xf) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = param_2[3];
        }
        F_00a3ced0(&REFG(undefined, 0x14a4230),0x7d5,uVar3,1);
      }
      *param_1 = 2;
      *(undefined1 *)(param_1 + 1) = 0;
      return (uint)param_1;
    case 4: ;
      if (*(int *)(this + 0x424) != *(int *)(this + 8)) {
        F_00777710(this);
      }
      *param_1 = 2;
      *(undefined1 *)(param_1 + 1) = 0;
      return (uint)param_1;
    case 5: ;
      F_0089dc30(this);
      *param_1 = 2;
      *(undefined1 *)(param_1 + 1) = 0;
      return (uint)param_1;
    case 0xfffffffe: ;
    case 0xffffffff: ;
      if (this[0x428] != (undefined1)0x0) goto LAB_008ae86c;
switchD_008ae852_caseD_1: ;
      F_00a3b110(&REFG(undefined, 0x14a4230));
LAB_008ae86c: ;
      *param_1 = 2;
      *(undefined1 *)(param_1 + 1) = 0;
      return (uint)param_1;
    default: ;
      goto switchD_008ae852_default;
    }
  }
  if (param_4 != 1) goto switchD_008ae852_default;
  if ((*param_2 & 0xf) == 0) {
    uVar3 = 0;
LAB_008ae97e: ;
    F_00a3c780(&REFG(undefined, 0x14a4230),uVar3);
  }
  else {
    uVar3 = param_2[1];
    if (-1 < (int)uVar3) goto LAB_008ae97e;
  }
  *(undefined4 *)(this + 0x420) = 0;
  F_00777710(this);
  uVar2 = 1;
switchD_008ae852_default: ;
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = uVar2;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentTrade::vf2 */
unsigned int F_008ae9e0(unsigned int gen_a0)
{
  GEN_ENTER(0x8ae9e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined * pAVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (*(int *)(this + 8) == 0) {
    uVar8 = 4;
    uVar7 = 0;
    uVar6 = 0;
    uVar4 = 0;
    this[0x428] = (undefined1)0x0;
    uVar3 = 0;
    uVar2 = 0x16;
    pAVar5 = this;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = F_008668b0(this_00,uVar2,uVar3,uVar4,pAVar5,uVar6,uVar7,uVar8);
    *(uint *)(this + 8) = uVar1;
    *(uint *)(this + 0x424) = uVar1;
    F_0089da70(this);
    return 0;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentTrade::vf3 */
unsigned int F_008aea30(unsigned int gen_a0)
{
  GEN_ENTER(0x8aea30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  if (*(int *)(this + 8) != 0) {
    F_0089dbc0(this);
    if (*(int *)(this + 0x420) != 0) {
      piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 0x420),0);
      *(undefined4 *)(this + 0x420) = 0;
    }
    *(undefined4 *)(this + 0x424) = *(undefined4 *)(this + 8);
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return 0;
}

/* ref: FUN_008aeaa0 */
uint F_008aeaa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8aeaa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int * piVar8;
  undefined4 uVar9;
  undefined * puVar10;
  
  piVar1 = (int *)F_00ab1c90((*(uint *)&gen_args[3]) & 0xffff);
  piVar2 = piVar1;
  if ((piVar1 != (int *)0x0) && (REFG(int, 0x14b1260) != 0)) {
    (*(uint *)&gen_args[3]) = (uint)*(ushort *)((int)piVar1 + 0x1e);
    piVar2 = (int *)F_0095b670(&REFG(undefined, 0x14b1258),&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(uint *)&gen_args[3]));
    piVar8 = (*(int * PTR32 *)(gen_frame + 0x4));
    if ((*(int * PTR32 *)(gen_frame + 0x4)) != REFG(undefined4, 0x14b125c)) {
      (*(uint *)&gen_args[3]) = (uint)*(ushort *)(piVar1 + 8);
      piVar2 = (int *)F_0095bb90((*(int * PTR32 *)(gen_frame + 0x4)) + 4,&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(uint *)&gen_args[3]));
      if ((*(int * PTR32 *)(gen_frame + 0x4)) != (int *)piVar8[5]) {
        (*(uint *)&gen_args[3]) = F_00ab0430();
        uVar3 = F_00a68280(&REFG(undefined1, 0x14ab070),0xffffffff,0);
        piVar1 = (int *)(*(int * PTR32 *)(gen_frame + 0x4))[5];
        uVar6 = (uint)REFG(undefined1, 0x14ab0d4);
        piVar2 = (int *)*piVar1;
        (*(int * PTR32 *)(gen_frame + 0x4)) = piVar2;
        while (piVar2 != piVar1) {
          piVar8 = ((int *)GEN_TOP((piVar2[4] * 0x34 + *(int *)(piVar2[3] + 0x5c))));
          (*(int * PTR32 *)(gen_frame + 0x4)) = piVar2;
          if ((((*(byte *)((int)piVar8 + 0x32) & 1) == 0) && (piVar8[2] == 0xece1)) &&
             (iVar7 = 0, 0 < (int)(*(uint *)&gen_args[3]))) {
            do {
              piVar2 = (int *)F_00ab3cf0(iVar7);
              if (((piVar2 != (int *)0x0) && (*piVar2 == *piVar8)) &&
                 (((ushort)*(byte *)((int)piVar2 + 5) <= (ushort)uVar3 &&
                  (((ushort)uVar3 <= (ushort)*(byte *)((int)piVar2 + 6) &&
                   (piVar2 = (int *)F_00ab21d0((uint)*(byte *)(piVar2 + 1)),
                   *(char *)((int)piVar2 + uVar6 + 4) != '\0')))))) {
                uVar9 = 0;
                uVar4 = F_00404270();
                uVar4 = F_00406bd0(0x68,0,uVar4,uVar9);
                if (uVar4 == 0) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = F_0090cd40(uVar4);
                }
                if ((*(byte *)((int)piVar8 + 0x32) & 1) == 0) {
                  (*(int *)(gen_frame + 0x8)) = piVar8[2];
                }
                else {
                  (*(int *)(gen_frame + 0x8)) = 0;
                }
                puVar10 = &REFG(undefined, 0x10be332);
                uVar5 = F_0042a990(piVar8[1]);
                F_007799e0(uVar4,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),(*(int *)(gen_frame + 0x8)),uVar5,
                             puVar10);
                uVar5 = F_0046e680(GEN_TOF(gen_bits2f(piVar8[4])));
                *(short *)(uVar4 + 0x60) = (short)uVar5;
                piVar2 = (int *)F_0046e680(GEN_TOF(gen_bits2f(piVar8[6])));
                *(short *)(uVar4 + 0x62) = (short)piVar2;
                *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) * 4 + 0x1c))) = uVar4;
                *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 1;
                break;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < (int)(*(uint *)&gen_args[3]));
          }
          if (9 < *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)))) {
            return (uint)piVar2;
          }
          F_00910c10(&(*(int * PTR32 *)(gen_frame + 0x4)));
          piVar2 = (*(int * PTR32 *)(gen_frame + 0x4));
        }
      }
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_008aec80 */
unsigned int F_008aec80(unsigned int gen_a0)
{
  GEN_ENTER(0x8aec80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined * this_00;
  uint * this_01;
  undefined4 * puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  if ((*(char *)((int)this + 0xda8) != '\0') &&
     (uVar2 = F_00ab24a0(*(undefined4 *)((int)this + 0xda4)), uVar2 != 0)) {
    uVar6 = *(undefined4 *)((int)this + 0xda4);
    *(undefined1 *)((int)this + 0xda8) = 0;
    cVar1 = *(char *)(uVar2 + 0xa5);
    *(undefined1 *)((int)this + 0x1019) = 0;
    *(bool *)((int)this + 0xda9) = cVar1 != '\0';
    *(bool *)((int)this + 0xdaa) = 1 < *(uint *)(uVar2 + 0x28);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
    (*(undefined4 *)(gen_frame + 0xc)) = uVar6;
    uVar3 = F_00ab65a0(*(undefined4 *)((int)this + 0xda4),uVar2);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
    (*(uint *)(gen_frame + 0x14)) = uVar3;
    uVar3 = F_00ab6240(*(undefined4 *)((int)this + 0xda4),0,uVar2);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),6);
    uVar6 = *(undefined4 *)(uVar2 + 0x28);
    (*(uint *)(gen_frame + 0x1c)) = uVar3;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
    uVar9 = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = uVar6;
    uVar8 = 0;
    uVar6 = 0x7a9;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar4,uVar6,uVar8,uVar9);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),6);
    uVar9 = 0;
    (*(uint *)(gen_frame + 0x2c)) = uVar2;
    uVar8 = 0;
    uVar6 = 0x7a8;
    pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_0043bd00(pvVar4,uVar6,uVar8,uVar9);
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),6);
    uVar6 = *(undefined4 *)((int)this + 0xda0);
    uVar10 = 4;
    (*(uint *)(gen_frame + 0x34)) = uVar2;
    uVar7 = 1;
    puVar5 = &(*(undefined4 *)(gen_frame + 0x8));
    uVar9 = 6;
    uVar8 = 0x57;
    pvVar4 = this;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = F_008668b0(this_00,uVar8,uVar9,puVar5,pvVar4,uVar7,uVar6,uVar10);
    *(uint *)((int)this + 0xd9c) = uVar2;
    F_00a6e080(&REFG(undefined, 0x14a9e40),0x31,0,0);
    this_01 = &(*(uint *)(gen_frame + 0x38));
    (*(int *)(gen_frame + 0x4)) = 5;
    do {
      this_01 = this_01 + -2;
      F_005a2670(this_01);
      (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
    } while (-1 < (*(int *)(gen_frame + 0x4)));
  }
  if (0 < *(int *)((int)this + 0xd9c)) {
    F_0089ecc0(this);
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return 0;
}

/* ref: Client::UI2::Agent::AgentLetterEdit::vf2 */
uint F_008af740(unsigned int gen_a0)
{
  GEN_ENTER(0x8af740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  byte bVar1;
  uint uVar2;
  uint * puVar3;
  undefined * this_00;
  int iVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined * pAVar9;
  int iVar10;
  undefined4 uVar11;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  (*(uint *)(gen_frame + 0xc8)) = uVar2;
  if (*(int *)(this + 8) == 0) {
    bVar1 = F_00a4a790(&REFG(undefined, 0x14a7360),0x67);
    if (bVar1 == 0) {
      uVar2 = F_00a4a810(&REFG(undefined, 0x14a7360),0x67);
      F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
      return uVar2;
    }
    puVar3 = ((uint *)(gen_frame + 0x0));
    iVar4 = 0x18;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    uVar2 = F_0042a990(this + 0x20);
    F_005a2710(((uint *)(gen_frame + 0x0)),6);
    ((uint *)(gen_frame + 0x0))[1] = uVar2;
    F_00c48350(this + 200,0,0x48);
    uVar2 = F_0042a990(this + 0x74);
    F_005a2710(((undefined1 *)(gen_frame + 0x8)),6);
    (*(uint *)(gen_frame + 0xc)) = uVar2;
    puVar5 = ((undefined4 *)(gen_frame + 0x3c));
    iVar4 = 5;
    do {
      iVar6 = iVar4;
      F_005a2710(puVar5 + -0xb,4);
      puVar5[-10] = 0;
      F_005a2710(puVar5 + -1,3);
      *puVar5 = 0;
      F_005a2710(puVar5 + 0xb,4);
      puVar5[0xc] = 0;
      F_005a2710(puVar5 + 0x15,6);
      puVar5[0x16] = "";
      puVar5 = puVar5 + 2;
      iVar4 = iVar6 + -1;
    } while (iVar4 != 0);
    F_0042e430(this + 0x110,&REFG(undefined, 0x10c0520));
    uVar2 = F_0042a990(this + 0x110);
    F_005a2710(((undefined1 *)(gen_frame + 0x60)),6);
    uVar11 = 4;
    puVar3 = ((uint *)(gen_frame + 0x0));
    (*(uint *)(gen_frame + 0x64)) = uVar2;
    this[0x174] = (undefined1)0x0;
    uVar8 = 0x19;
    uVar7 = 0x30;
    pAVar9 = this;
    iVar10 = iVar4;
    this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar2 = F_008668b0(this_00,uVar7,uVar8,puVar3,pAVar9,iVar4,iVar10,uVar11);
    *(uint *)(this + 8) = uVar2;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
    F_0089ee60(this,0,0);
    puVar3 = &(*(uint *)(gen_frame + 0xc8));
    iVar6 = iVar6 + 0x17;
    do {
      puVar3 = puVar3 + -2;
      uVar2 = F_005a2670(puVar3);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc8)) ^ (uint)(uint)(gen_frame + 0xcc));
  return uVar2;
}

/* ref: FUN_008af8e0 */
uint F_008af8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8af8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  undefined * this_00;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  uint * this_01;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  bVar2 = *(byte *)(param_1 + 4);
  this_00 = *(undefined * PTR32 *)(param_1 + 8);
  uVar3 = bVar2 - 1;
  if (0xd < uVar3) goto switchD_008af910_caseD_2;
  uVar3 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x8afab8) + bVar2 + 3)));
  switch((unsigned int)(uintptr_t)(bVar2)) {
  case 1: ;
    if (*(char *)((int)this + 0x14) == '\0') {
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -8) + 0x1c))))(*(int * PTR32 *)((int)this + -8))));
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x68))(piVar4,*(undefined4 *)((int)this + 0x10));
      if ((char)uVar3 != '\0') {
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),4);
        (*(undefined4 *)(gen_frame + 0xc)) = 2;
        bVar2 = F_00441290(this_00,9);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),4);
        (*(uint *)(gen_frame + 0x1c)) = (uint)bVar2;
        piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -8) + 0x1c))))(*(int * PTR32 *)((int)this + -8))));
        ((code *)*(gen_code32 *)(*piVar4 + 0x5c))(piVar4,*(undefined4 *)((int)this + 0x10),4,&(*(undefined4 *)(gen_frame + 0x8)));
        this_01 = &(*(uint *)(gen_frame + 0x28));
        (*(int *)(gen_frame + 0x4)) = 3;
        do {
          this_01 = this_01 + -2;
          F_005a2670(this_01);
          (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
        } while (-1 < (*(int *)(gen_frame + 0x4)));
      }
    }
    F_0077d960((undefined *)((int)this + -0xc));
    F_0077c9a0((undefined *)((int)this + -0xc));
    bVar2 = F_00441b10();
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return CONCAT31(extraout_var,bVar2);
  case 2: ;
  case 3: ;
  case 7: ;
    goto switchD_008af910_caseD_2;
  case 4: ;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + -0xc) + 0xc))))((int)this + -0xc);
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return uVar3;
  case 5: ;
    uVar3 = F_0089fa30((undefined *)((int)this + -0xc));
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return uVar3;
  case 6: ;
  case 9: ;
    break;
  case 8: ;
    bVar2 = F_00436d60(this_00,4);
    uVar3 = CONCAT31(extraout_var_00,bVar2);
    if ((bVar2 != 0) && ((*(byte *)(param_1 + 0x10) & 1) == 0)) {
      cVar1 = *(char *)((int)this + 0x14);
      uVar3 = CONCAT31(extraout_var_00,cVar1);
      if (cVar1 != '\0') goto LAB_008afa2e;
LAB_008afa30: ;
      bVar2 = F_00441190();
      uVar3 = CONCAT31(extraout_var_01,bVar2);
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    }
    break;
  case 10: ;
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      cVar1 = *(char *)((int)this + 0x14);
LAB_008afa2e: ;
      if (cVar1 == '\x04') goto LAB_008afa30;
    }
    break;
  default: ;
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      bVar2 = *(byte *)((int)this + 0x14);
      uVar3 = (uint)bVar2;
      if ((bVar2 == 0) || (bVar2 == 4)) {
        bVar2 = F_00441190();
        uVar3 = CONCAT31(extraout_var_03,bVar2);
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
      }
    }
    goto switchD_008af910_caseD_2;
  }
  if ((*(byte *)(param_1 + 0x10) & 2) == 0) {
    bVar2 = F_00440db0();
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return CONCAT31(extraout_var_02,bVar2);
  }
switchD_008af910_caseD_2: ;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: FUN_008afad0 */
uint F_008afad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8afad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  this_00 = *(undefined * PTR32 *)(param_1 + 8);
  uVar2 = *(byte *)(param_1 + 4) - 1;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    bVar1 = F_00436b90(this_00);
    if (bVar1 != 0) goto switchD_008afaeb_caseD_7;
    bVar1 = F_00436d60(this_00,1);
    if (bVar1 == 0) {
      uVar2 = F_008a16e0((undefined *)((int)this + -0x10));
      return uVar2;
    }
    break;
  default: ;
    goto switchD_008afaeb_caseD_2;
  case 3: ;
  case 4: ;
    F_007e2a20((undefined *)((int)this + -0x10),1);
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -0xc) + 0x1c))))(*(int * PTR32 *)((int)this + -0xc))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x68))(piVar3,*(undefined4 *)((int)this + -8));
    if ((char)uVar2 != '\0') {
      uVar2 = F_008a14c0((undefined *)((int)this + -0x10),0xb4d);
      return uVar2;
    }
    *(undefined4 *)((int)this + 0x14b4) = 1;
    return uVar2;
  case 6: ;
switchD_008afaeb_caseD_7: ;
    uVar2 = F_008a1690((undefined *)((int)this + -0x10));
    return uVar2;
  case 7: ;
  }
  F_007e2a20((undefined *)((int)this + -0x10),0);
  uVar2 = F_0077ef40((undefined *)((int)this + -0x10));
switchD_008afaeb_caseD_2: ;
  return uVar2;
}

/* ref: FUN_008afbb0 */
uint F_008afbb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8afbb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined * pvVar6;
  undefined * this_00;
  int iVar7;
  undefined1 * this_01;
  uint * this_02;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  if (*(int *)((int)this + 0x18) == 0) {
    uVar13 = 0xb;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x44))))(*(int * PTR32 *)((int)this + 4));
    uVar4 = F_00435440(uVar4,uVar13);
    *(uint *)((int)this + 0x18) = uVar4;
  }
  *(undefined4 *)((int)this + 0x14) = param_1;
  uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar4 != '\0') {
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
    return uVar4;
  }
  if (*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) {
    F_00441300(*(undefined * PTR32 *)((int)this + 0x18),0);
    F_00453fa0(((undefined *)GEN_TOP((*(int *)((int)this + 0x18) + 0x490))),(int)this + 0x10);
  }
  *(undefined2 *)((int)this + 0x1c) = 2;
  F_00a37c20(&REFG(undefined, 0x14a4230));
  *(undefined4 *)((int)this + 0x14f0) = 0;
  *(undefined2 *)((int)this + 0x14ec) = 0;
  bVar3 = F_00a3a5d0(&REFG(undefined, 0x14a4230),22000);
  if (bVar3 != 0) {
    *(uint *)((int)this + 0x14f0) = *(uint *)((int)this + 0x14f0) | 0x40;
  }
  if (*(undefined * PTR32 *)((int)this + 0x18) == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    bVar3 = F_00436c80(*(undefined * PTR32 *)((int)this + 0x18),0);
    uVar4 = (uint)bVar3;
  }
  *(undefined4 *)((int)this + 0x14c4) = 1;
  puVar5 = ((undefined4 *)(gen_frame + 0x0));
  iVar7 = 0xe;
  do {
    *puVar5 = 0;
    puVar5 = puVar5 + 2;
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  F_005a2710(((undefined4 *)(gen_frame + 0x0)),4);
  bVar3 = *(byte *)((int)this + 0x1c);
  ((undefined4 *)(gen_frame + 0x0))[1] = 0xffff;
  F_005a2710(((undefined1 *)(gen_frame + 0x8)),4);
  bVar1 = *(byte *)((int)this + 0x1d);
  (*(uint *)(gen_frame + 0xc)) = (uint)bVar3;
  F_005a2710(((undefined1 *)(gen_frame + 0x10)),4);
  (*(uint *)(gen_frame + 0x14)) = (uint)bVar1;
  F_005a2710(((undefined1 *)(gen_frame + 0x18)),4);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  F_005a2710(((undefined1 *)(gen_frame + 0x20)),4);
  (*(uint *)(gen_frame + 0x24)) = uVar4;
  uVar4 = F_0077f0b0(this);
  F_005a2710(((undefined1 *)(gen_frame + 0x28)),4);
  uVar13 = 0;
  (*(uint *)(gen_frame + 0x2c)) = uVar4;
  if (*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) {
    bVar3 = F_00441290(*(undefined * PTR32 *)((int)this + 0x18),0x20);
    if (bVar3 == 0) {
      bVar3 = F_00441290(*(undefined * PTR32 *)((int)this + 0x18),0x1f);
      if (bVar3 == 0) {
        bVar3 = F_00441290(*(undefined * PTR32 *)((int)this + 0x18),0x1e);
        if (bVar3 != 0) {
          uVar13 = 0;
        }
      }
      else {
        uVar13 = 1;
      }
    }
    else {
      uVar13 = 2;
    }
  }
  F_005a2710(((undefined1 *)(gen_frame + 0x30)),4);
  (*(undefined4 *)(gen_frame + 0x34)) = uVar13;
  uVar13 = 0;
  if (*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) {
    bVar3 = F_00441290(*(undefined * PTR32 *)((int)this + 0x18),0x23);
    if (bVar3 == 0) {
      bVar3 = F_00441290(*(undefined * PTR32 *)((int)this + 0x18),0x22);
      if (bVar3 == 0) {
        bVar3 = F_00441290(*(undefined * PTR32 *)((int)this + 0x18),0x21);
        if (bVar3 != 0) {
          uVar13 = 0;
        }
      }
      else {
        uVar13 = 1;
      }
    }
    else {
      uVar13 = 2;
    }
  }
  F_005a2710(((undefined1 *)(gen_frame + 0x38)),4);
  cVar2 = *(char *)((int)this + 0x14ec);
  (*(undefined4 *)(gen_frame + 0x3c)) = uVar13;
  F_005a2710(((undefined1 *)(gen_frame + 0x40)),4);
  (*(uint *)(gen_frame + 0x44)) = (uint)(cVar2 == '\0');
  uVar13 = *(undefined4 *)((int)this + 0x14f0);
  F_005a2710(((undefined1 *)(gen_frame + 0x48)),4);
  (*(undefined4 *)(gen_frame + 0x4c)) = uVar13;
  iVar7 = 0;
  this_01 = ((undefined1 *)(gen_frame + 0x50));
  do {
    iVar7 = iVar7 + 1;
    uVar11 = 0;
    uVar13 = 0xb4a;
    iVar9 = iVar7;
    pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = F_00461c60(pvVar6,uVar13,iVar9,uVar11);
    F_005aa640(this_01,uVar4);
    this_01 = this_01 + 8;
  } while (iVar7 < 5);
  uVar12 = 4;
  uVar10 = 0;
  uVar8 = 0;
  puVar5 = ((undefined4 *)(gen_frame + 0x0));
  uVar11 = 0xf;
  uVar13 = 0xb1;
  pvVar6 = this;
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar4 = F_008668b0(this_00,uVar13,uVar11,puVar5,pvVar6,uVar8,uVar10,uVar12);
  *(uint *)((int)this + 8) = uVar4;
  if ((*(byte *)((int)this + 0x14f0) & 0x40) != 0) {
    F_008a1260(this);
  }
  this_02 = &(*(uint *)(gen_frame + 0x78));
  iVar7 = 0xe;
  do {
    this_02 = this_02 + -2;
    uVar4 = F_005a2670(this_02);
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar4;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyChest::vf3 */
uint F_008afe70(unsigned int gen_a0)
{
  GEN_ENTER(0x8afe70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  *(undefined4 *)(this + 0x1470) = 0xffffffff;
  *(undefined4 *)(this + 0x1474) = 0xffffffff;
  *(undefined4 *)(this + 0x14c4) = 0;
  if (*(int *)(this + 0x1490) != 9999) {
    F_00a3d7c0(&REFG(undefined, 0x14a4230),*(int *)(this + 0x1490),(uint)*(ushort *)(this + 0x1494));
  }
  *(undefined4 *)(this + 0x1490) = 9999;
  *(undefined4 *)(this + 0x1498) = 0;
  *(undefined4 *)(this + 0x149c) = 0;
  *(undefined2 *)(this + 0x1494) = 0;
  *(undefined4 *)(this + 0x14a0) = 9999;
  *(undefined4 *)(this + 0x14a8) = 0;
  *(undefined4 *)(this + 0x14ac) = 0;
  *(undefined2 *)(this + 0x14a4) = 0;
  *(undefined4 *)(this + 0x14b0) = 9999;
  *(undefined2 *)(this + 0x14b4) = 0;
  *(undefined4 *)(this + 0x14b8) = 0;
  *(undefined4 *)(this + 0x14bc) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  piVar2 = *(int * PTR32 *)(uVar1 + 0x24);
  if (piVar2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
    if (((char)uVar1 != '\0') && (piVar2[0x82] == *(int *)(this + 8))) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    }
  }
  if (*(int *)(this + 0x1480) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 0x1480),0);
    *(undefined4 *)(this + 0x1480) = 0;
  }
  if (*(int *)(this + 0x1484) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 0x1484),0);
    *(undefined4 *)(this + 0x1484) = 0;
  }
  if (*(int *)(this + 0x1488) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 0x1488),0);
    *(undefined4 *)(this + 0x1488) = 0;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  if (*(undefined * PTR32 *)(uVar1 + 0x20) != (undefined *)0x0) {
    F_0089aef0(*(undefined * PTR32 *)(uVar1 + 0x20),9,4);
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  piVar2 = *(int * PTR32 *)(uVar1 + 0x130);
  if ((piVar2 != (int *)0x0) && (piVar2[5] == 9)) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
  }
  uVar1 = 0;
  if (*(int *)(this + 0x18) != 0) {
    uVar1 = F_0044e020(((undefined *)GEN_TOP((*(int *)(this + 0x18) + 0x490))),this + 0x10);
  }
  if (*(int *)(this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  return uVar1;
}

/* ref: FUN_008b0030 */
uint F_008b0030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8b0030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  bool bVar1;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined * this_00;
  undefined3 extraout_var = 0;
  undefined4 uVar5;
  uint local_8;
  
  if (param_1 == 1000) {
    uVar5 = 0x749;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
    uVar4 = F_0046a630(pvVar3,uVar5);
    return uVar4;
  }
  pvVar3 = (undefined *)F_00a3a150(&REFG(undefined, 0x14a4230),param_1,param_2);
  this_00 = (undefined *)F_00a3a150(&REFG(undefined, 0x14a4230),param_3,param_4);
  uVar4 = 0;
  if (pvVar3 != (undefined *)0x0) {
    local_8 = 0;
    param_4 = 0;
    bVar1 = false;
    if ((*(char *)((int)pvVar3 + 6) != '\0') || (*(int *)((int)pvVar3 + 8) != 0)) {
      uVar4 = F_0046e5e0(pvVar3);
      local_8 = F_00ab24a0(uVar4);
      if (local_8 == 0) {
        bVar1 = true;
      }
    }
    if ((this_00 != (undefined *)0x0) &&
       ((*(char *)((int)this_00 + 6) != '\0' || (*(int *)((int)this_00 + 8) != 0)))) {
      uVar4 = F_0046e5e0(this_00);
      param_4 = F_00ab24a0(uVar4);
      if (param_4 == 0) goto LAB_008b00ea;
    }
    if (bVar1) {
LAB_008b00ea: ;
      F_00760f10((undefined *)((int)this + 0x14c8),pvVar3,0);
      uVar4 = F_00760f10((undefined *)((int)this + 0x14d8),this_00,0);
      *(undefined4 *)((int)this + 0x14c4) = 4;
      return uVar4;
    }
    if ((((int)param_3 < 20000) || (0x4e24 < (int)param_3)) && (param_3 != 0x55f1)) {
      bVar2 = F_0077f460(param_1);
      uVar4 = CONCAT31(extraout_var,bVar2);
      if (bVar2 != 0) {
        uVar4 = F_008a0fb0(this,pvVar3,this_00,local_8,param_4);
      }
    }
    else {
      uVar4 = param_3;
      if (this_00 != (undefined *)0x0) {
        uVar4 = F_008a0df0(this,pvVar3,this_00,local_8,param_4);
        return uVar4;
      }
    }
  }
  return uVar4;
}

/* ref: FUN_008b0180 */
uint F_008b0180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8b0180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  undefined4 uVar2;
  
  if ((param_1 == (int *)0x0) || ((*(char *)((int)param_1 + 6) == '\0' && (param_1[2] == 0)))) {
    uVar2 = 0x745;
  }
  else {
    if (*param_1 == 0x55f1) {
      uVar1 = F_008b0030(this,0x55f1,(int)(short)param_1[1],0x7d1,(int)(short)param_1[1]);
      return uVar1;
    }
    uVar1 = F_00a3a180(&REFG(undefined, 0x14a4230));
    if (uVar1 != 0) {
      uVar1 = F_008b0030(this,*param_1,(int)(short)param_1[1],9999,0);
      return uVar1;
    }
    uVar2 = 0x750;
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x28))))(*(int * PTR32 *)((int)this + 4))));
  uVar1 = F_0046a630(this_00,uVar2);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyExchange::vf1 */
uint F_008b0210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8b0210u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  byte bVar1;
  
  bVar1 = 0;
  if (param_4 == 0) {
    bVar1 = F_008a1730(this,param_2,param_3);
  }
  else {
    if (param_4 == 1) {
      if ((((*param_2 & 0xf) == 0) || (*(int *)(param_2 + 4) == 0)) && (*(int *)(this + 0x14) != 0))
      {
        F_00440ee0(*(undefined4 *)(this + 0x18));
      }
      *(undefined4 *)(this + 0x1c) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return (uint)param_1;
    }
    if (param_4 == 2) {
      if (((*param_2 & 0xf) == 0) || ((-2 < *(int *)(param_2 + 4) && (*(int *)(param_2 + 4) < 1))))
      {
        ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
      }
      *(undefined4 *)(this + 0x20) = 0;
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 2;
      return (uint)param_1;
    }
  }
  *(byte *)(param_1 + 1) = bVar1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyCrestEditor::vf1 */
uint F_008b02c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8b02c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined2 * param_4 = (undefined2 *)(uintptr_t)gen_a4;
  if ((0 < param_3) && (param_2 != 0)) {
    if (param_4 != (undefined2 *)0x0) {
      switch((unsigned int)(uintptr_t)(*param_4)) {
      case 0: ;
        F_008a1be0(this,param_1,param_2,param_3,param_4);
        return (uint)param_1;
      case 1: ;
        F_007e2e70(this,param_1,param_2,param_3,param_4);
        return (uint)param_1;
      case 2: ;
        F_007e2fd0(this,param_1,param_2,param_3,param_4);
        return (uint)param_1;
      case 3: ;
        F_007e3130(this,param_1,param_2,param_3,param_4);
        return (uint)param_1;
      case 4: ;
        F_0077f8c0(this,param_1,param_2,param_3,param_4);
        return (uint)param_1;
      }
    }
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 0;
    return (uint)param_1;
  }
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyCrestDecal::vf1 */
uint F_008b0390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8b0390u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  
  bVar1 = 0;
  switch((unsigned int)(uintptr_t)(param_4)) {
  case 0: ;
    bVar1 = F_008a1e40(this,param_2,param_3);
    *(byte *)(param_1 + 1) = bVar1;
    *param_1 = 2;
    return (uint)param_1;
  case 1: ;
    if (((*param_2 & 0xf) == 0) || ((-2 < *(int *)(param_2 + 4) && (*(int *)(param_2 + 4) < 1)))) {
      ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    }
    *(undefined4 *)(this + 0x18) = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 2;
    return (uint)param_1;
  case 2: ;
    bVar1 = F_007e3680(this,param_2,param_3);
    *(byte *)(param_1 + 1) = bVar1;
    *param_1 = 2;
    return (uint)param_1;
  case 3: ;
    bVar1 = F_007e36e0(this,param_2,param_3);
  }
  *(byte *)(param_1 + 1) = bVar1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_008b0460 */
uint F_008b0460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8b0460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  
  bVar1 = *(char *)(param_1 + 4) - 4;
  uVar3 = CONCAT31((int3)((uint)param_1 >> 8),bVar1);
  if (bVar1 < 2) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -8) + 0x1c))))(*(int * PTR32 *)((int)this + -8))));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2,*(undefined4 *)((int)this + -4));
    if ((char)uVar3 != '\0') {
      uVar3 = F_008a1fa0((undefined *)((int)this + -0xc),0x12e4);
      return uVar3;
    }
    *(undefined4 *)((int)this + 0x4e4c) = 1;
  }
  return uVar3;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyCrestDecal::vf5 */
uint F_008b04b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8b04b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  int * piVar4;
  undefined3 extraout_var_00 = 0;
  
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar3 != '\0') {
    iVar1 = *(int *)(this + 0x4e58);
    if (iVar1 == 1) {
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
      uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x68))(piVar4,*(undefined4 *)(this + 8));
      if ((char)uVar3 != '\0') {
        if (*(int *)(this + 0x14) != 0) {
          bVar2 = F_00436880(*(int *)(this + 0x14));
          uVar3 = CONCAT31(extraout_var_00,bVar2);
          if (bVar2 != 3) {
            uVar3 = F_008a1fa0(this,0x12e4);
            *(undefined4 *)(this + 0x4e58) = 0;
            return uVar3;
          }
        }
        *(undefined4 *)(this + 0x4e58) = 2;
      }
    }
    else if (iVar1 == 2) {
      bVar2 = F_007800b0(this);
      uVar3 = CONCAT31(extraout_var,bVar2);
      if (bVar2 != 0) {
        *(undefined4 *)(this + 0x4e58) = 0;
        return uVar3;
      }
    }
    else {
      uVar3 = iVar1 - 3;
      if (uVar3 == 0) {
        *(undefined4 *)(this + 0x4e58) = 0;
        uVar3 = *(uint *)(this + 0x24);
        if (uVar3 < *(uint *)(this + 0x2c)) {
          uVar3 = F_00881970(this,0,(int)(char)this[uVar3 * 200 + 0x48]);
          return uVar3;
        }
      }
    }
  }
  return uVar3;
}

/* ref: FUN_008b0570 */
uint F_008b0570(unsigned int gen_a0)
{
  GEN_ENTER(0x8b0570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar2 + 0x2c);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
    if ((char)uVar2 == '\0') {
      *(undefined1 *)((int)piVar1 + 0x3d) = 0;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      piVar1[9] = (int)this;
    }
  }
  return uVar2;
}

/* ref: FUN_008b05b0 */
uint F_008b05b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8b05b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte * pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined * this_00;
  undefined3 extraout_var = 0;
  ulonglong uVar6;
  
  uVar3 = F_00aca810(&REFG(undefined, 0x148a590));
  if (uVar3 != 0) {
    iVar4 = 0;
    do {
      *(undefined1 *)(uVar3 + 0x10 + iVar4) =
           *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xf5c) + 0xc + iVar4)));
      *(undefined1 *)(uVar3 + 0x11 + iVar4) =
           *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xf5c) + 0xd + iVar4)));
      iVar4 = iVar4 + 2;
    } while (iVar4 < 0x1a);
    pbVar1 = *(byte * PTR32 *)((int)this + 0xf5c);
    bVar2 = pbVar1[10];
    uVar5 = F_00ab3630((uint)pbVar1[2] + ((uint)pbVar1[1] + (uint)*pbVar1 * 2) * 2);
    *(undefined1 *)(uVar3 + 0x2a) = *(undefined1 *)(uVar5 + 0x1a40 + (uint)bVar2);
    this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    if (this_00 == (undefined *)0x0) {
      uVar6 = F_0046ff40();
      uVar5 = (uint)(uVar6 / 1000);
    }
    else {
      uVar5 = F_00975680(this_00);
    }
    *(uint *)(uVar3 + 0x2c) = uVar5;
    iVar4 = 0;
    do {
      *(undefined1 *)(uVar3 + 0x30 + iVar4) = *(undefined1 *)(iVar4 + param_2);
      if (*(char *)(iVar4 + param_2) == '\0') break;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xa1);
    (*(gen_code32 *)(gen_frame + 0x14)) = (code *)0x0;
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x916de0));
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x8a24a0));
    bVar2 = F_00acc730(&REFG(undefined, 0x148a590),param_1,&(*(gen_code32 *)(gen_frame + 0xc)),param_1);
    if (bVar2 != 0) {
      return CONCAT31(extraout_var,bVar2);
    }
  }
  uVar3 = F_008a2390(this);
  return uVar3;
}

/* ref: FUN_008b06d0 */
uint F_008b06d0(unsigned int gen_a0)
{
  GEN_ENTER(0x8b06d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  *(undefined1 *)((int)this + 0x68f) = 7;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  this_00 = *(undefined * PTR32 *)(uVar1 + 0x2c);
  *(undefined1 *)((int)this_00 + 0x3d) = 1;
  uVar1 = F_00898410(this_00,0);
  *(undefined * PTR32 *)((int)this_00 + 0x24) = this;
  return uVar1;
}

/* ref: FUN_008b0700 */
uint F_008b0700(unsigned int gen_a0)
{
  GEN_ENTER(0x8b0700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  code * pcVar2;
  uint uVar3;
  
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x48))))(*(int * PTR32 *)((int)this + 4));
  piVar1 = *(int * PTR32 *)(uVar3 + 0x2c);
  pcVar2 = *(gen_code32 *)(*piVar1 + 8);
  *(undefined1 *)((int)piVar1 + 0x3d) = 0;
  uVar3 = (*pcVar2)(piVar1);
  piVar1[9] = (int)this;
  return uVar3;
}

/* ref: FUN_008b0730 */
byte F_008b0730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8b0730u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  if (*(int *)((int)this + 0xc) == 0) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c) ^ (uint)(uint)(gen_frame + 0x3c));
    return 0;
  }
  piVar2 = (int *)F_00884650(this,param_1,param_2);
  if (piVar2 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = piVar2[4];
  }
  F_00e75840(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[27])REFP(0x10c45d4));
  (*(undefined1 *)(gen_frame + 0x2a)) = (undefined1)param_3;
  if (*piVar2 != 0) {
    uVar3 = F_00e3be40(*piVar2);
    if ((uVar3 != 0) && ((byte)(*(char *)(uVar3 + 0x56) - 1U) < 5)) {
      uVar4 = 0;
      do {
        ((undefined1 *)(gen_frame + 0xc))[(int)(uVar4)] = *(undefined1 *)(uVar3 + 0x56 + uVar4);
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0x1a);
      (*(uint *)(gen_frame + 0x2c)) = uVar5;
      if (*piVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (uint)*(byte *)(*piVar2 + 0x10);
      }
      bVar1 = F_00974b20(*(undefined * PTR32 *)((int)this + 8),uVar3,param_1,param_2,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)),this,
                           *(undefined4 *)((int)this + 0xc));
      *(uint *)((int)this + 0xfc) = (bVar1 == 0) + 0x1e;
      if (bVar1 != 0) {
        F_008a2ee0(this,param_1,param_2,param_3);
        piVar2[4] = uVar5 & 0xfffffffe;
      }
      F_00e75880(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
      F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
      return bVar1;
    }
  }
  F_00e75880(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return 0;
}

/* ref: FUN_008b0870 */
byte F_008b0870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8b0870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  int iVar2;
  undefined * this_00;
  
  iVar2 = 0;
  this_00 = (undefined *)((int)this + 8);
  do {
    bVar1 = F_008846f0(this_00,param_1,param_2);
    if (bVar1 != 0) {
      bVar1 = F_008b0730((undefined *)(iVar2 * 0x118 + 8 + (int)this),param_1,param_2,param_3);
      *(uint *)((int)this + 0x238) = (bVar1 != 0) + 0x1f;
      return bVar1;
    }
    iVar2 = iVar2 + 1;
    this_00 = (undefined *)((int)this_00 + 0x118);
  } while (iVar2 < 2);
  return 0;
}

/* ref: FUN_008b08e0 */
uint F_008b08e0(unsigned int gen_a0)
{
  GEN_ENTER(0x8b08e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  *(undefined2 *)((int)this + 0x250) = 0;
  iVar1 = *(int *)((int)this + 0x240);
  if (iVar1 != *(int *)((int)this + 0x244)) {
    uVar2 = F_00c46e20(iVar1,*(int *)((int)this + 0x244),0);
    *(int *)((int)this + 0x244) = iVar1;
  }
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentSupportSubView::vf16 */
uint F_008b0930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8b0930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  if (*(int *)(this + 0xc) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(uVar1 + 0x150);
  }
  uVar1 = *(uint *)(this + 0xc);
  if ((uVar1 != 0) && (this_00 = *(undefined * PTR32 *)(uVar1 + 0xc), this_00 != (undefined *)0x0)) {
    *(undefined4 *)(this + 0x10) = param_1;
    *(uint *)(this + 0x14) = param_2;
    uVar1 = param_2;
    if (*(int *)(this + 8) == 0) {
      switch((unsigned int)(uintptr_t)(param_1)) {
      case 1: ;
        uVar1 = F_0045d8f0(this_00,1,param_2);
        uVar1 = F_00885070(this,uVar1);
        return uVar1;
      case 3: ;
        uVar1 = F_0045d8f0(this_00,2,param_2);
        uVar1 = F_00885070(this,uVar1);
        return uVar1;
      case 4: ;
        uVar1 = F_0044cf40(this_00,4,param_2);
        uVar1 = F_008a32f0(this,uVar1);
        return uVar1;
      case 5: ;
        uVar1 = F_0044cf40(this_00,5,param_2);
        uVar1 = F_008a32f0(this,uVar1);
        return uVar1;
      case 6: ;
        uVar1 = F_0044cf40(this_00,6,param_2);
        uVar1 = F_008a32f0(this,uVar1);
        break;
      case 8: ;
        uVar1 = F_0044cfa0(this_00,0,param_2);
        uVar1 = F_008851a0(this,uVar1);
        return uVar1;
      case 9: ;
        uVar1 = F_0044cfa0(this_00,3,param_2);
        uVar1 = F_008851a0(this,uVar1);
        return uVar1;
      }
    }
  }
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentSupportSubEdit::vf1 */
uint F_008b0a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8b0a50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  uint * puVar1;
  int iVar2;
  byte bVar3;
  
  bVar3 = 0;
  if (param_4 == 0) {
    bVar3 = F_00885a90(this,param_2,param_3);
  }
  else if (param_4 == 1) {
    bVar3 = F_008a34e0(this,param_2,param_3);
  }
  else {
    if (param_4 != 2) goto LAB_008b0ac4;
    bVar3 = F_007e71d0(this,param_2,param_3);
  }
  if (bVar3 != 0) {
    *(undefined4 *)(this + 8) = 0;
    if (((*(uint *)(this + 0x18) < 4) && (*(int *)(this + 0xc) != 0)) &&
       (iVar2 = *((int *)GEN_TOP((*(int *)(this + 0xc) + 0xc))), iVar2 != 0)) {
      puVar1 = (uint *)(iVar2 + 0x184);
      *puVar1 = *puVar1 & 0xffffffcf;
    }
    *(undefined4 *)(this + 0x18) = 0xffffffff;
  }
LAB_008b0ac4: ;
  *(byte *)(param_1 + 1) = bVar3;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_008b0ae0 */
uint F_008b0ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8b0ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int * piVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint * puVar5;
  
  uVar3 = (*(uint *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  puVar5 = ((uint *)GEN_TOP((*(int *)((int)this + 4) + 0x120)));
  *puVar5 = *puVar5 | 0x40;
  iVar4 = *(int *)((int)this + 0xc4);
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = 0;
  (*(uint *)(gen_frame + 0xc)) = uVar3 & 0xffffff00;
  if (iVar4 < 0) {
    if (*(uint *)((int)this + 0x2c) < 0x7fffffff) {
      *(uint *)((int)this + 0xc4) = *(uint *)((int)this + 0x2c);
    }
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x38)));
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = 1;
    (*(uint *)(gen_frame + 0xc)) = CONCAT31((int3)(uVar3 >> 8),1);
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,((undefined1 *)(gen_frame + 0x0)),0);
    F_005a2670(((undefined1 *)(gen_frame + 0x0)));
    *(undefined4 *)((int)this + 100) = 0xffffd8f1;
  }
  else {
    uVar3 = F_00784f10(this,iVar4,param_1);
    *(uint *)((int)this + 0xc4) = uVar3;
    if ((int)uVar3 < *(int *)((int)this + 0x34)) {
      *(int *)((int)this + 0xc4) = *(int *)((int)this + 0x34);
    }
    else if (*(int *)((int)this + 0x38) < (int)uVar3) {
      *(int *)((int)this + 0xc4) = *(int *)((int)this + 0x38);
      F_0059b300(*(undefined * PTR32 *)((int)this + 0x18),*(undefined4 *)((int)this + 0xd4),
                   *(undefined4 *)((int)this + 0xcc),0);
      F_0055ad50(*(undefined * PTR32 *)((int)this + 8),0,0);
      F_008a3b30(this);
      if ((*((byte *)GEN_TOP((*(int *)((int)this + 4) + 0xfb))) & 2) != 0) {
        puVar5 = ((uint *)GEN_TOP((*(int *)((int)this + 4) + 0x120)));
        *puVar5 = *puVar5 & 0xffffffbf;
      }
      *(undefined1 *)((int)this + 0xa1) = 1;
      F_007e7b30(this,0);
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x38)));
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,((undefined1 *)(gen_frame + 0x0)),0);
      uVar3 = F_005a2670(((undefined1 *)(gen_frame + 0x0)));
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return uVar3;
    }
    if (*(int *)((int)this + 0xc4) != iVar4) {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x38)));
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,((undefined1 *)(gen_frame + 0x0)),0);
      F_005a2670(((undefined1 *)(gen_frame + 0x0)));
    }
    if (*(int *)((int)this + 0xc4) < *(int *)((int)this + 0x28)) {
      iVar4 = *(int *)((int)this + 0x2c) + -1;
      (*(int *)(gen_frame + 0x4)) = iVar4;
      if ((((*(int *)((int)this + 0xa4) != iVar4) || (iVar4 == 0x7fffffff)) ||
          (*(int *)((int)this + 0xa8) != 0)) ||
         ((*(uint *)((int)this + 0xac) != (uint)*(ushort *)((int)this + 0x3e) ||
          (*(uint *)((int)this + 0xb0) != (uint)*(ushort *)((int)this + 0x3c))))) {
        *(undefined2 *)((int)this + 0x68) = 0xff01;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 0;
        (*(undefined4 *)(gen_frame + 0x20)) = 0;
        (*(undefined4 *)(gen_frame + 0x28)) = 0;
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        (*(undefined4 *)(gen_frame + 0x38)) = 0;
        (*(undefined4 *)(gen_frame + 0x40)) = 0;
        (*(uint *)(gen_frame + 0xc)) = (uint)*(byte *)((int)this + 0x1c);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
        (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0xc));
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
        (*(int *)(gen_frame + 0x1c)) = iVar4;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),3);
        uVar2 = *(ushort *)((int)this + 0x3e);
        (*(undefined4 *)(gen_frame + 0x24)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x28)),3);
        (*(int *)(gen_frame + 0x2c)) = uVar2 + 1;
        uVar2 = *(ushort *)((int)this + 0x3c);
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x30)),3);
        (*(uint *)(gen_frame + 0x34)) = (uint)uVar2;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x38)),2);
        (*(undefined1 *)(gen_frame + 0x3c)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x40)),2);
        (*(undefined1 *)(gen_frame + 0x44)) = 0;
        piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x38)));
        ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,((undefined1 *)(gen_frame + 0x8)),0x16,7,&(*(undefined4 *)(gen_frame + 0x10)));
        F_005a2670(((undefined1 *)(gen_frame + 0x8)));
        puVar5 = &(*(uint *)(gen_frame + 0x48));
        (*(uint *)(gen_frame + 0xc)) = 6;
        do {
          puVar5 = puVar5 + -2;
          F_005a2670(puVar5);
          uVar3 = (*(uint *)(gen_frame + 0xc)) - 1;
          (*(uint *)(gen_frame + 0xc)) = uVar3;
        } while (-1 < (int)uVar3);
      }
      uVar2 = *(ushort *)((int)this + 0x3e);
      *(int *)((int)this + 0xa4) = (*(int *)(gen_frame + 0x4));
      *(undefined4 *)((int)this + 0xa8) = 0;
      *(uint *)((int)this + 0xac) = (uint)uVar2;
      *(uint *)((int)this + 0xb0) = (uint)*(ushort *)((int)this + 0x3c);
      *(undefined4 *)((int)this + 100) = 1;
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return (uint)uVar2;
    }
    if (*(int *)((int)this + 0x2c) < *(int *)((int)this + 0xc4)) {
      uVar3 = F_00784950(this,*(int *)((int)this + 0x2c) + 1,0,0,1);
      *(undefined4 *)((int)this + 100) = 0xffffffff;
      F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
      return uVar3;
    }
  }
  F_007e8480(this,(*(uint *)(gen_frame + 0xc)));
  uVar2 = F_0057edb0(*(undefined * PTR32 *)((int)this + 8),(uint)*(ushort *)((int)this + 0xc4));
  *(ushort *)((int)this + 0xca) = uVar2;
  if (uVar2 == 0) {
    *(undefined2 *)((int)this + 200) = 0xffff;
    uVar3 = F_0055ad50(*(undefined * PTR32 *)((int)this + 8),0,0);
    F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
    return uVar3;
  }
  *(undefined2 *)((int)this + 200) = 0;
  uVar3 = F_00785090(this,*(undefined4 *)((int)this + 0xc4),0);
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar3;
}

/* ref: FUN_008b0e10 */
uint F_008b0e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8b0e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_0055a2d0(*(undefined4 *)((int)this + 8));
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  F_0059b300(*(undefined * PTR32 *)((int)this + 0x18),*(undefined4 *)((int)this + 8),
               *(undefined4 *)((int)this + 4),0);
  *(undefined4 *)((int)this + 0xcc) = param_1;
  *(undefined4 *)((int)this + 0xd4) = param_3;
  *(undefined4 *)((int)this + 0xd0) = param_2;
  *(undefined4 *)((int)this + 0xc4) = 0xffffffff;
  *(undefined2 *)((int)this + 200) = 0xffff;
  uVar1 = F_008b0ae0(this,0xffffffff);
  return CONCAT31((int3)(uVar1 >> 8),1);
}

/* ref: FUN_008b0e80 */
unsigned int F_008b0e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8b0e80u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  int * piVar2;
  
  if ((*(int *)&gen_args[1]) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 500)));
    piVar2 = (int *)*piVar1;
    if (piVar2 != piVar1) {
      do {
        if (piVar2[2] == (*(int *)&gen_args[1])) break;
        piVar2 = (int *)*piVar2;
      } while (piVar2 != piVar1);
      if (piVar2 != piVar1) {
        return 0;
      }
    }
    F_0095b7f0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 500))),&(*(int *)&gen_args[1]));
  }
  return 0;
}

/* ref: FUN_008b0ec0 */
unsigned int F_008b0ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x8b0ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0x204) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x200);
    piVar2 = (int *)*piVar1;
    while (piVar3 = piVar2, piVar3 != piVar1) {
      piVar2 = (int *)piVar3[2];
      ((code *)*(gen_code32 *)(*piVar2 + 0xf8))(piVar2);
      uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x104))(piVar2);
      if ((char)uVar4 == '\0') {
        piVar2 = (int *)*piVar3;
      }
      else {
        ((code *)*(gen_code32 *)(*piVar2 + 0x108))(piVar2);
        piVar2 = (int *)*piVar3;
        if (piVar3 != *(int * PTR32 *)((int)this + 0x200)) {
          *(int * PTR32 *)piVar3[1] = piVar2;
          *(int *)(*piVar3 + 4) = piVar3[1];
          F_00429760(piVar3,0xc,400);
          *(int *)((int)this + 0x204) = *(int *)((int)this + 0x204) + -1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_008b0f50 */
unsigned int F_008b0f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8b0f50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  int * piVar2;
  
  if ((*(int *)&gen_args[1]) != 0) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x200)));
    piVar2 = (int *)*piVar1;
    if (piVar2 != piVar1) {
      do {
        if (piVar2[2] == (*(int *)&gen_args[1])) break;
        piVar2 = (int *)*piVar2;
      } while (piVar2 != piVar1);
      if (piVar2 != piVar1) {
        return 0;
      }
    }
    F_0095b7f0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x200))),&(*(int *)&gen_args[1]));
  }
  return 0;
}

/* ref: FUN_008b0f90 */
unsigned int F_008b0f90(unsigned int gen_a0)
{
  GEN_ENTER(0x8b0f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 4);
    piVar2 = (int *)*piVar1;
    while (piVar3 = piVar2, piVar3 != piVar1) {
      uVar4 = F_00572ca0((undefined *)(piVar3[3] + 4));
      if (uVar4 == 1) {
        piVar2 = (int *)*piVar3;
      }
      else {
        if ((code *)piVar3[4] != (code *)0x0) {
          (*(code *)piVar3[4])(piVar3[2],piVar3[3],piVar3[5]);
        }
        piVar2 = (int *)*piVar3;
        if (piVar3 != *(int * PTR32 *)((int)this + 4)) {
          *(int * PTR32 *)piVar3[1] = piVar2;
          *(int *)(*piVar3 + 4) = piVar3[1];
          F_00429760(piVar3,0x18,400);
          *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_008b1020 */
byte F_008b1020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x8b1020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  code * param_4 = (code *)(uintptr_t)gen_a4;
  int param_5 = (int)gen_a5;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  
  if (param_1 == (undefined *)0x0) {
    return 0;
  }
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)param_1 + 0x8c) + 8))) +
                  (uint)*(ushort *)((int)param_1 + 0x90) * 0xc)));
  if (iVar1 != 0) {
    F_0058f5b0(param_1);
    uVar4 = F_00591c00(param_1,param_2,param_3);
    if (-1 < (int)uVar4) {
      iVar2 = *(int *)((int)this + 4);
      iVar3 = *(int *)(iVar2 + 4);
      piVar5 = (int *)F_004296a0(0x18,0,400);
      *piVar5 = iVar2;
      piVar5[1] = iVar3;
      if (piVar5 + 2 != (int *)0x0) {
        piVar5[2] = (int)param_1;
        piVar5[3] = iVar1;
        piVar5[4] = (int)param_4;
        piVar5[5] = param_5;
      }
      if (*(int *)((int)this + 8) == -2) {
                    
        F_00c4579a("list<T> too long");
      }
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      *(int * PTR32 *)(iVar2 + 4) = piVar5;
      *(int * PTR32 *)piVar5[1] = piVar5;
      return 1;
    }
    if (param_4 != (code *)0x0) {
      (*param_4)(param_1,iVar1,param_5);
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonGrandCompanyBase::vf62 */
unsigned int F_008b1100(unsigned int gen_a0)
{
  GEN_ENTER(0x8b1100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_008b0f90(this + 0x1a0);
  return 0;
}

/* ref: Client::UI2::AddonGrandCompanyBase::vf63 */
unsigned int F_008b1110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8b1110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_8;
  
  iVar1 = param_2;
  if (3 < param_1) {
    uVar4 = 0;
    ((code *)*(gen_code32 *)(*(int *)this + 0x14))(0);
    if ((*(byte *)(param_2 + 0x10) & 0xf) == 0) {
      local_8 = 0;
    }
    else {
      local_8 = *(undefined4 *)(param_2 + 0x14);
    }
    if ((*(byte *)(param_2 + 8) & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0xc);
    }
    if ((*(byte *)(param_2 + 0x20) & 0xf) == 0) {
      param_1 = 0;
    }
    else {
      param_1 = *(undefined4 *)(param_2 + 0x24);
    }
    if ((*(byte *)(param_2 + 0x30) & 0xf) == 0) {
      param_2 = 0;
    }
    else {
      param_2 = *(undefined4 *)(param_2 + 0x34);
    }
    if ((*(byte *)(iVar1 + 0x38) & 0xf) != 0) {
      uVar4 = *(undefined4 *)(iVar1 + 0x3c);
    }
    if ((*(byte *)(iVar1 + 0x18) & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 0x1c);
    }
    F_0058bba0(*(undefined * PTR32 *)(this + 0x188),uVar2);
    if (*(int *)(this + 400) != 0) {
      F_008b1020(this + 0x1a0,*(int *)(this + 400),uVar4,uVar3,0,0);
    }
    F_008b1020(this + 0x1a0,*(undefined4 *)(this + 0x19c),param_1,0,0,0);
    F_008b1020(this + 0x1a0,*(undefined4 *)(this + 0x194),param_2,uVar3,0,0);
    F_008b1020(this + 0x1a0,*(undefined4 *)(this + 0x18c),local_8,0,0,0);
    F_0055dcb0();
    ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this);
    F_00559c60(*(undefined * PTR32 *)(this + 0x184),2);
  }
  return 0;
}

/* ref: Client::UI2::AddonScreenText::vf62 */
uint F_008b1260(unsigned int gen_a0)
{
  GEN_ENTER(0x8b1260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined * pAVar2;
  undefined3 extraout_var = 0;
  int * piVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  undefined * pAVar8;
  float10 fVar9;
  ulonglong uVar10;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  uVar5 = 0;
  pAVar8 = this + 0x184;
  do {
    if ((*(int *)(pAVar8 + 0x30) != 0) && (bVar1 = F_005610b0(pAVar8), bVar1 == 1))
    goto LAB_008b145c;
    uVar5 = uVar5 + 1;
    pAVar8 = pAVar8 + 0x70;
  } while (uVar5 < 10);
  pAVar8 = (undefined *)0x0;
  pAVar2 = (*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x1c4;
  iVar4 = 2;
  do {
    if (*(uint *)(pAVar2 + -0x10) != 0) {
      if ((*(uint *)(pAVar2 + -4) == 0) || (*(uint *)(pAVar2 + -4) == 10)) {
        pAVar8 = pAVar2 + -0x44;
      }
      else if (*(uint *)pAVar2 < 8) {
        *(uint *)pAVar2 = *(uint *)pAVar2 + 1;
      }
    }
    if (*(uint *)(pAVar2 + 0x60) != 0) {
      if ((*(uint *)(pAVar2 + 0x6c) == 0) || (*(uint *)(pAVar2 + 0x6c) == 10)) {
        pAVar8 = pAVar2 + 0x2c;
      }
      else if (*(uint *)(pAVar2 + 0x70) < 8) {
        *(uint *)(pAVar2 + 0x70) = *(uint *)(pAVar2 + 0x70) + 1;
      }
    }
    if (*(uint *)(pAVar2 + 0xd0) != 0) {
      if ((*(uint *)(pAVar2 + 0xdc) == 0) || (*(uint *)(pAVar2 + 0xdc) == 10)) {
        pAVar8 = pAVar2 + 0x9c;
      }
      else if (*(uint *)(pAVar2 + 0xe0) < 8) {
        *(uint *)(pAVar2 + 0xe0) = *(uint *)(pAVar2 + 0xe0) + 1;
      }
    }
    if (*(uint *)(pAVar2 + 0x140) != 0) {
      if ((*(uint *)(pAVar2 + 0x14c) == 0) || (*(uint *)(pAVar2 + 0x14c) == 10)) {
        pAVar8 = pAVar2 + 0x10c;
      }
      else if (*(uint *)(pAVar2 + 0x150) < 8) {
        *(uint *)(pAVar2 + 0x150) = *(uint *)(pAVar2 + 0x150) + 1;
      }
    }
    if (*(uint *)(pAVar2 + 0x1b0) != 0) {
      if ((*(uint *)(pAVar2 + 0x1bc) == 0) || (*(uint *)(pAVar2 + 0x1bc) == 10)) {
        pAVar8 = pAVar2 + 0x17c;
      }
      else if (*(uint *)(pAVar2 + 0x1c0) < 8) {
        *(uint *)(pAVar2 + 0x1c0) = *(uint *)(pAVar2 + 0x1c0) + 1;
      }
    }
    pAVar2 = pAVar2 + 0x230;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (pAVar8 != (undefined *)0x0) {
    *(uint *)(pAVar8 + 0x44) = *(uint *)(pAVar8 + 0x44) + 1;
    iVar4 = 10;
    if (9 < *(uint *)(pAVar8 + 0x44)) {
      pAVar2 = (*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x184;
      do {
        if ((*(int *)(pAVar2 + 0x30) != 0) && (*(int *)(pAVar2 + 0x3c) != 0)) {
          F_0056c5f0(pAVar2);
          (*(undefined4 *)(gen_frame + 0x10)) = 1;
          fVar9 = F_00559d80(*(undefined4 *)(pAVar2 + 0x44));
          (*(int * PTR32 *)(gen_frame + 0x14)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)(fVar9 - (float10)*(double *)&REFG(undefined, 0x10968a0)))));
          F_00595110(pAVar2,100,*(undefined4 *)(pAVar2 + 0x44),&(*(undefined4 *)(gen_frame + 0x10)),1,REFG(float, 0x1088068));
          F_0058d530(pAVar2);
          *(int *)(pAVar2 + 0x3c) = *(int *)(pAVar2 + 0x3c) + -1;
        }
        pAVar2 = pAVar2 + 0x70;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      F_0056c5f0(pAVar8 + 4);
      (*(undefined4 *)(gen_frame + 0x8)) = 5;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      F_00595110(pAVar8 + 4,100,*(uint *)(pAVar8 + 0x48),&(*(undefined4 *)(gen_frame + 0x8)),1,REFG(float, 0x1088068));
      F_0058d530(pAVar8 + 4);
      F_0056c650(pAVar8 + 4,0x3d,pAVar8,(*(undefined * PTR32 *)(gen_frame + 0x18)),0,0);
      *(uint *)(pAVar8 + 0x40) = 10;
      *(uint *)(pAVar8 + 0x34) = 2;
    }
  }
LAB_008b145c: ;
  piVar3 = *(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x5e0);
  piVar6 = (int *)*piVar3;
  (*(int * PTR32 *)(gen_frame + 0x14)) = piVar3;
  if (piVar6 != piVar3) {
    do {
      uVar5 = 0;
      do {
        bVar1 = F_008310f0((*(undefined * PTR32 *)(gen_frame + 0x18)),piVar6 + 2);
        pAVar8 = (*(undefined * PTR32 *)(gen_frame + 0x18));
        piVar3 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
        if (bVar1 == 1) {
          piVar7 = (int *)*piVar6;
          if (piVar6 != *(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x5e0)) {
            *(int * PTR32 *)piVar6[1] = piVar7;
            *(int *)(*piVar6 + 4) = piVar6[1];
            F_0042c880(piVar6 + 4);
            uVar10 = F_00429760(piVar6,0x6c,400);
            piVar3 = (int *)uVar10;
            *(int *)(pAVar8 + 0x5e4) = *(int *)(pAVar8 + 0x5e4) + -1;
          }
          goto LAB_008b148a;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 10);
      piVar7 = (int *)*piVar6;
LAB_008b148a: ;
      piVar6 = piVar7;
    } while (piVar7 != (*(int * PTR32 *)(gen_frame + 0x14)));
  }
  return (uint)piVar3;
}

/* ref: FUN_008b14e0 */
uint F_008b14e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8b14e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  F_008b1020((undefined *)((int)this + 0x1a8),*(undefined4 *)((int)this + 0x19c),param_1,param_2,
               ((code *)REFP(0x78b5f0)),this);
  F_0055dcb0();
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this);
  F_00577aa0(*(undefined * PTR32 *)((int)this + 0x184),1);
  *(uint *)((int)this + 0x18c) = param_3;
  return param_3;
}

/* ref: Client::UI2::AddonImageLocationTitleBase::vf63 */
unsigned int F_008b1570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8b1570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  iVar1 = param_2;
  if (8 < param_1) {
    uVar3 = 0;
    ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,0);
    F_0056c5f0(this + 0x1a8);
    F_00588f80(this + 0x1a8,0x3d,*(undefined4 *)(this + 0x180),this,0);
    F_0055a200(*(undefined4 *)(this + 0x180),0xff);
    if ((*(byte *)(param_2 + 0x20) & 0xf) == 0) {
      param_2 = 0;
    }
    else {
      param_2 = *(undefined4 *)(param_2 + 0x24);
    }
    if ((*(byte *)(iVar1 + 0x30) & 0xf) == 0) {
      local_8 = 0;
    }
    else {
      local_8 = *(undefined4 *)(iVar1 + 0x34);
    }
    if ((*(byte *)(iVar1 + 0x10) & 0xf) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x14);
    }
    if ((*(byte *)(iVar1 + 8) & 0xf) == 0) {
      param_1 = 0;
    }
    else {
      param_1 = *(undefined4 *)(iVar1 + 0xc);
    }
    if ((*(byte *)(iVar1 + 0x40) & 0xf) != 0) {
      uVar3 = *(undefined4 *)(iVar1 + 0x44);
    }
    F_0055dcb0();
    ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this);
    F_00577aa0(*(undefined * PTR32 *)(this + 0x184),1);
    *(undefined4 *)(this + 400) = uVar3;
    F_008871f0(this + 0x1d8);
    *(undefined4 *)(this + 0x18c) = 2;
    if (0 < iVar2) {
      *(undefined4 *)(this + 0x18c) = 3;
    }
    F_008b1020(this + 0x1d8,*(undefined4 *)(this + 0x198),param_2,param_1,((code *)REFP(0x78b8e0)),this);
    F_008b1020(this + 0x1d8,*(undefined4 *)(this + 0x19c),local_8,param_1,((code *)REFP(0x78b8e0)),this);
    if (0 < iVar2) {
      this[0x1a4] = (undefined1)0x1;
      F_0055a300(*(undefined * PTR32 *)(this + 0x1a0),1);
      F_008b1020(this + 0x1d8,*(undefined4 *)(this + 0x1a0),iVar2,0,((code *)REFP(0x78b8e0)),this);
      return 0;
    }
    this[0x1a4] = (undefined1)0x0;
    F_0055a300(*(undefined * PTR32 *)(this + 0x1a0),0);
  }
  return 0;
}

/* ref: Client::UI2::AddonImageLocationTitleBase::vf62 */
uint F_008b1720(unsigned int gen_a0)
{
  GEN_ENTER(0x8b1720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_008b0f90(this + 0x1d8);
  if (*(int *)(this + 0x188) == 1) {
    uVar1 = F_00567f70(*(undefined * PTR32 *)(this + 0x184));
    if ((uVar1 & 0xffff) == (int)*(short *)(this + 0x1ea)) {
      *(undefined4 *)(this + 0x188) = 2;
      uVar1 = F_00559cd0(*(undefined4 *)(this + 0x184));
      uVar1 = F_00559c60(*(undefined * PTR32 *)(this + 0x184),uVar1 + 1);
    }
  }
  else {
    uVar1 = *(int *)(this + 0x188) - 4;
    if ((uVar1 == 0) && (uVar1 = *(uint *)(this + 0x184), *(int *)(uVar1 + 0x1c) != 0)) {
      F_0056c5f0(this + 0x1a8);
      (*(undefined4 *)(gen_frame + 0x4)) = 5;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      F_00595110(this + 0x1a8,1000,*(undefined4 *)(this + 0x180),&(*(undefined4 *)(gen_frame + 0x4)),1,REFG(float, 0x1088068));
      F_0058d530(this + 0x1a8);
      *(undefined4 *)(this + 0x188) = 5;
      uVar1 = F_0056c650(this + 0x1a8,0x3d,*(undefined4 *)(this + 0x180),this,0,0);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: Client::UI2::AddonLevelUp::vf63 */
unsigned int F_008b1810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8b1810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_2;
  if (8 < param_1) {
    uVar2 = 0;
    ((code *)*(gen_code32 *)(*(int *)this + 0x14))(0);
    if ((*(byte *)(param_2 + 0x10) & 0xf) == 0) {
      param_2 = 0;
    }
    else {
      param_2 = *(undefined4 *)(param_2 + 0x14);
    }
    if ((*(byte *)(iVar1 + 8) & 0xf) == 0) {
      param_1 = 0;
    }
    else {
      param_1 = *(undefined4 *)(iVar1 + 0xc);
    }
    if ((*(byte *)(iVar1 + 0x40) & 0xf) != 0) {
      uVar2 = *(undefined4 *)(iVar1 + 0x44);
    }
    F_0055dcb0();
    F_00577aa0(*(undefined * PTR32 *)(this + 0x184),1);
    *(undefined4 *)(this + 0x188) = uVar2;
    ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this);
    F_008b1020(this + 400,*(undefined4 *)(this + 0x18c),param_2,param_1,((code *)REFP(0x78bcb0)),this);
  }
  return 0;
}

/* ref: Client::UI2::AddonLevelUp::vf62 */
unsigned int F_008b18f0(unsigned int gen_a0)
{
  GEN_ENTER(0x8b18f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_008b0f90(this + 400);
  return 0;
}

/* ref: Client::UI2::AddonWideText::vf62 */
uint F_008b1900(unsigned int gen_a0)
{
  GEN_ENTER(0x8b1900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar2 = F_00567f90(*(undefined * PTR32 *)(this + 0x184),0x66);
  uVar3 = F_00559cd0(*(undefined4 *)(this + 0x184));
  if ((uVar3 == uVar2) && (*(int *)(this + 0x194) != 0)) {
    piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 400)));
    uVar3 = F_0042a990(piVar1 + 2);
    iVar5 = piVar1[0x18];
    piVar1[0x17] = uVar3;
    uVar3 = F_0042a990(piVar1 + 2);
    uVar3 = F_0078bf80(this,uVar3,iVar5);
    if (piVar1 != *(int * PTR32 *)(this + 400)) {
      *(int *)piVar1[1] = *piVar1;
      *(int *)(*piVar1 + 4) = piVar1[1];
      F_0042c880(piVar1 + 2);
      uVar4 = F_00429760(piVar1,100,400);
      uVar3 = (uint)uVar4;
      *(int *)(this + 0x194) = *(int *)(this + 0x194) + -1;
    }
  }
  return uVar3;
}

/* ref: Client::UI2::AddonTextMonsterNoteBase::vf62 */
unsigned int F_008b1990(unsigned int gen_a0)
{
  GEN_ENTER(0x8b1990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_008b0f90(this + 400);
  return 0;
}

/* ref: Client::UI2::AddonTextMonsterNoteBase::vf67 */
uint F_008b19a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8b19a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00577aa0(*(undefined * PTR32 *)(this + 0x184),1);
  F_00584110(*(undefined * PTR32 *)(this + 0x18c),param_2);
  F_008b1020(this + 400,*(undefined4 *)(this + 0x188),param_1,0,((code *)REFP(0x78cc90)),this);
  F_0055dcb0();
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this);
  return uVar1;
}

/* ref: Client::UI2::AddonTextMonsterNote0::vf67 */
uint F_008b1a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8b1a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00584110(*(undefined * PTR32 *)(this + 0x1a0),param_3);
  uVar1 = F_008b19a0((undefined *)this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: Client::UI2::AddonTextMonsterNote1::vf67 */
uint F_008b1a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8b1a60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_0058bba0(*(undefined * PTR32 *)(this + 0x1a4),param_3);
  uVar1 = F_008b19a0((undefined *)this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: Client::UI2::AddonTextMonsterNote2::vf67 */
uint F_008b1a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8b1a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_0058bba0(*(undefined * PTR32 *)(this + 0x1a4),param_3);
  uVar1 = F_008b19a0((undefined *)this,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_008b1ac0 */
uint F_008b1ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8b1ac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_008b1020((undefined *)((int)this + 0x194),*(undefined4 *)((int)this + 0x188),param_1,0,((code *)REFP(0x78d180))
               ,this);
  F_00584110(*(undefined * PTR32 *)((int)this + 0x18c),param_3);
  F_0057eb30(*(undefined * PTR32 *)((int)this + 400),param_2,0,0,0,0);
  uVar1 = F_00559c60(*(undefined * PTR32 *)((int)this + 0x184),1);
  return uVar1;
}

/* ref: FUN_008b1b20 */
byte F_008b1b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8b1b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 * 0x40;
  if (*(int *)(iVar2 + 400 + (int)this) != param_4) {
    if (param_4 == 0) {
      F_007eeef0(this,param_1);
      *(undefined4 *)((int)this + iVar2 + 400) = 0;
      return 1;
    }
    iVar1 = *(int *)((int)this + iVar2 + 0x198);
    if (iVar1 == 0) {
      F_00831fe0(this,param_1);
    }
    else if ((*(byte *)(iVar1 + 0xf9) & 1) != 0) {
      F_00887900(this,param_1,param_2,param_3,param_4,0);
      *(int *)((int)this + iVar2 + 400) = param_4;
      return 1;
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonNaviMap::vf2 */
uint F_008b1b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8b1b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = param_1 & 0xffff;
  uVar3 = uVar2 - 5;
  if (uVar3 < 0x13) {
    uVar3 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x8b1c34) + uVar2 + 3)));
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 5: ;
    case 8: ;
    case 9: ;
      bVar1 = F_008a43d0(this,param_1,param_2,param_3,param_4);
      uVar3 = CONCAT31(extraout_var,bVar1);
      if (bVar1 != 0) {
        uVar3 = F_00557670(param_3,0);
      }
      break;
    case 6: ;
    case 7: ;
      uVar2 = F_0078ec00(this,param_3,param_1);
      return uVar2;
    case 0x17: ;
      if (param_2 == 2) {
        F_00832fa0(this);
      }
      else {
        if (param_2 == 3) {
          F_008883b0(this);
          uVar2 = F_00557670(param_3,0);
          return uVar2;
        }
        if (param_2 == 4) {
          F_00888360(this);
          uVar2 = F_00557670(param_3,0);
          return uVar2;
        }
      }
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    }
  }
  return uVar3;
}

/* ref: FUN_008b1c50 */
uint F_008b1c50(unsigned int gen_a0)
{
  GEN_ENTER(0x8b1c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  F_005903f0(this);
  uVar3 = REFG(float, 0x1094778);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d7c94));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 0x1a4) = uVar3;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  F_0055b910((undefined *)((int)this + 0x1bc));
  F_0055b910((undefined *)((int)this + 0x1ec));
  F_0055b910((undefined *)((int)this + 0x21c));
  uVar3 = 0;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(0x80,0,uVar1,uVar3);
  uVar3 = 0;
  *(uint *)((int)this + 0x194) = uVar1;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(0x80,0,uVar1,uVar3);
  *(uint *)((int)this + 0x198) = uVar1;
  iVar2 = 0;
  do {
    *((undefined4 *)GEN_TOP((iVar2 + *(int *)((int)this + 0x194)))) = 0;
    *((undefined4 *)GEN_TOP((iVar2 + *(int *)((int)this + 0x198)))) = 0;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x80);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x18;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0xa00;
  *(undefined4 *)((int)this + 0x1c0) = 1;
  *(undefined4 *)((int)this + 0x1e4) = REFG(undefined4, 0x13286a4);
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1e0) = 0x100010;
  *(undefined4 *)((int)this + 0x1f0) = 1;
  *(undefined4 *)((int)this + 0x214) = REFG(undefined4, 0x13286a4);
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x1f8) = 0;
  *(undefined4 *)((int)this + 0x210) = 0x400040;
  *(undefined4 *)((int)this + 0x220) = 1;
  *(undefined4 *)((int)this + 0x244) = REFG(undefined4, 0x13286a8);
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  return (uint)this;
}

/* ref: FUN_008b1df0 */
uint F_008b1df0(unsigned int gen_a0)
{
  GEN_ENTER(0x8b1df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  undefined * pvVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d7c94));
  pvVar3 = this;
  this_00 = (undefined *)F_0055dcb0();
  F_00586870(this_00,pvVar3);
  if (*(int *)((int)this + 0x198) != 0) {
    F_00406b30(*(int *)((int)this + 0x198));
    *(undefined4 *)((int)this + 0x198) = 0;
  }
  if (*(int *)((int)this + 0x194) != 0) {
    F_00406b30(*(int *)((int)this + 0x194));
    *(undefined4 *)((int)this + 0x194) = 0;
  }
  F_0055b980((int)this + 0x21c);
  F_0055b980((int)this + 0x1ec);
  F_0055b980((int)this + 0x1bc);
  iVar1 = *(int *)((int)this + 0x184);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x18c) - iVar1 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  uVar2 = F_00590600(this);
  return uVar2;
}

/* ref: Client::UI2::AddonHudLayoutScreen::vf37 */
uint F_008b1ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x8b1ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = F_0055dcb0();
  *(undefined1 *)(uVar2 + 0x21b) = 0;
  F_005aa060((undefined *)(uVar2 + 0x20c),0,0);
  iVar3 = *(int *)(this + 0x184);
  if (iVar3 != *(int *)(this + 0x188)) {
    F_00c46e20(iVar3,*(int *)(this + 0x188),0);
    *(int *)(this + 0x188) = iVar3;
  }
  iVar3 = 0;
  do {
    if (*((int *)GEN_TOP((*(int *)(this + 0x194) + iVar3))) != 0) {
      iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x194) + iVar3)));
      if (iVar1 != 0) {
        F_00406ad0(iVar1);
      }
      *((undefined4 *)GEN_TOP((iVar3 + *(int *)(this + 0x194)))) = 0;
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x80);
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: FUN_008b1f40 */
uint F_008b1f40(unsigned int gen_a0)
{
  GEN_ENTER(0x8b1f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  int local_8;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d7d94));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  iVar1 = (int)this + 0x198;
  local_8 = 2;
  do {
    F_0042b630(iVar1);
    iVar1 = iVar1 + 0x54;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0;
  puVar2 = (undefined4 *)((int)this + 0x2a4);
  local_8 = 0xf;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    F_0042b630(puVar2 + 4);
    puVar2 = puVar2 + 0x19;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  iVar1 = *(int *)((int)this + 0x294);
  if (iVar1 != *(int *)((int)this + 0x298)) {
    F_00c46e20(iVar1,*(int *)((int)this + 0x298),0);
    *(int *)((int)this + 0x298) = iVar1;
  }
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x8000;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: FUN_008b2030 */
uint F_008b2030(unsigned int gen_a0)
{
  GEN_ENTER(0x8b2030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * pvVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d7d94));
  iVar2 = 0xf;
  pvVar3 = (undefined *)((int)this + 0x8f4);
  do {
    pvVar3 = (undefined *)((int)pvVar3 + -100);
    F_0042c880(pvVar3);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  iVar2 = *(int *)((int)this + 0x294);
  if (iVar2 != 0) {
    F_00429760(iVar2,(*(int *)((int)this + 0x29c) - iVar2 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0;
  pvVar3 = (undefined *)((int)this + 0x294);
  iVar2 = 2;
  do {
    pvVar3 = (undefined *)((int)pvVar3 + -0x54);
    F_0042c880(pvVar3);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonFreeCompanyCrestEditor::vf47 */
unsigned int F_008b20c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8b20c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (((byte)this[0xf9] & 1) != 0) {
    F_008a4a80(this,param_1,param_2);
    return 0;
  }
  return 0;
}

/* ref: FUN_008b20e0 */
uint F_008b20e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8b20e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 600) = param_1;
  uVar2 = 0;
  puVar1 = (undefined4 *)((int)this + 400);
  do {
    F_0059dde0((undefined *)*puVar1,(uint)(*(uint *)((int)this + 600) == uVar2));
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (uVar2 < 3);
  F_008a4e20(this,((*((int *)GEN_TOP(((int)this + *(int *)((int)this + 600) * 0x10 + 0x20c))) -
                      *((int *)GEN_TOP(((int)this + *(int *)((int)this + 600) * 0x10 + 0x208))) >> 3) - 1U) /
                    0x18 + 1);
  uVar2 = F_0088c500(this);
  return uVar2;
}

/* ref: Client::UI2::AddonFreeCompanyCrestColor::vf2 */
uint F_008b2160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8b2160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1 & 0xffff;
  uVar3 = uVar2 - 0x17;
  if (uVar3 < 0xe) {
    uVar3 = (uint)(byte)(&REFG(undefined, 0x8b2289))[uVar2];
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 0x17: ;
      uVar3 = param_2;
      if ((short)param_2 == 0) {
        uVar3 = param_2 >> 0x10 & 0x7fff;
        if (uVar3 == 0) {
          uVar3 = F_007fabb0(this);
          return uVar3;
        }
        uVar3 = uVar3 - 1;
        if (uVar3 == 0) {
          uVar3 = F_00799f70(this,0,this + 0x1a0);
          return uVar3;
        }
      }
      break;
    case 0x1f: ;
    case 0x21: ;
      uVar3 = param_2;
      if ((param_2 & 0xffff) == 1) {
        uVar3 = F_008a4ef0(this,*(undefined4 *)(param_4 + 8),param_2 >> 0x10 & 0x7fff,
                             param_2 >> 0x1f);
        return uVar3;
      }
      break;
    case 0x20: ;
      uVar3 = (param_2 & 0xffff) - 1;
      if (uVar3 == 0) {
        uVar3 = F_007fabd0(this);
        return uVar3;
      }
      break;
    case 0x24: ;
      uVar3 = param_2 >> 0x10 & 0x7fff;
      this_00 = *(undefined * PTR32 *)(this + uVar3 * 4 + 0x188);
      if (*(undefined * PTR32 *)(this + 0x1bc) != this_00) {
        uVar2 = uVar3 * 2;
        *(undefined * PTR32 *)(this + 0x1bc) = this_00;
        iVar1 = *(int *)(this + 0x1c0) + uVar3 * 0x10;
        if (*(int *)(this + 0x1c0) < 8) {
          uVar3 = iVar1 + 8;
        }
        else {
          uVar3 = iVar1 - 8;
        }
        if ((*(byte *)(param_4 + 0x11) & 8) != 0) {
          if (this_00 != (undefined *)0x0) {
            F_00589700(this_00,1);
          }
          uVar2 = F_0079a010(this,uVar3);
        }
        uVar3 = uVar3 & 0x8000000f;
        if ((int)uVar3 < 0) {
          uVar3 = (uVar3 - 1 | 0xfffffff0) + 1;
        }
        *(uint *)(this + 0x1c0) = uVar3;
        return uVar2;
      }
      *(undefined4 *)(this + 0x1c0) = *(undefined4 *)(param_4 + 8);
      uVar3 = param_4;
    }
  }
  return uVar3;
}

/* ref: Client::UI2::AddonFreeCompanyCrestSymbolColor::vf2 */
uint F_008b22b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8b22b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1 & 0xffff;
  uVar2 = uVar1 - 0x17;
  if (uVar2 < 0xe) {
    uVar2 = (uint)*(byte *)(uVar1 + 0x8b232d);
    switch((unsigned int)(uintptr_t)(uVar1)) {
    case 0x17: ;
      uVar2 = param_2;
      if ((short)param_2 == 0) {
        uVar2 = param_2 >> 0x10 & 0x7fff;
        if (uVar2 == 0) {
          uVar2 = F_007fad10(this);
          return uVar2;
        }
        uVar2 = uVar2 - 1;
        if (uVar2 == 0) {
          uVar2 = F_0079a1a0(this,0,this + 0x1a0);
          return uVar2;
        }
      }
      break;
    case 0x1f: ;
    case 0x21: ;
    case 0x24: ;
      uVar2 = (param_2 & 0xffff) - 1;
      if (uVar2 == 0) {
        uVar2 = F_008a4fd0(this,*(undefined4 *)(param_4 + 8),param_2 >> 0x1f);
        return uVar2;
      }
      break;
    case 0x20: ;
      uVar2 = (param_2 & 0xffff) - 1;
      if (uVar2 == 0) {
        uVar2 = F_007fad30(this);
      }
    }
  }
  return uVar2;
}

/* ref: Client::UI2::AddonRecipeNoteBook::vf2 */
uint F_008b2360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8b2360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  undefined1 * puVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = param_1 & 0xffff;
  if (0x34 < uVar2 - 9) {
    return uVar2 - 9;
  }
  puVar3 = (undefined1 *)(uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x8b25ac) + uVar2 + 3)));
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 9: ;
    goto LAB_008b2572;
  case 0xc: ;
    if ((char)param_4[1] != '\0') {
      return (uint)param_4;
    }
    if (*param_4 != 1) {
      return (uint)param_4;
    }
LAB_008b2572: ;
    bVar1 = F_007a10c0(this,param_2);
    puVar3 = ((undefined1 *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
    if (bVar1 != 0) {
      puVar3 = (undefined1 *)F_00557670(param_3,0);
    }
    break;
  case 0x11: ;
    if (param_2 == (undefined1 *)0xe) {
      uVar2 = F_00802020(this,param_3,param_4);
      return uVar2;
    }
    puVar3 = param_2 + -0xf;
    if (puVar3 == (undefined1 *)0x0) {
      uVar2 = F_008020f0(this,param_3,param_4);
      return uVar2;
    }
    break;
  case 0x17: ;
    puVar3 = param_2 + -1;
    switch((unsigned int)(uintptr_t)(puVar3)) {
    case (undefined1 *)0x0: ;
      uVar2 = F_008a5e00(this,param_3,param_4);
      return uVar2;
    case (undefined1 *)0x1: ;
      uVar2 = F_00802240(this,param_3,param_4);
      return uVar2;
    case (undefined1 *)0x2: ;
      uVar2 = F_00802320(this,param_3,param_4);
      return uVar2;
    case (undefined1 *)0x3: ;
      uVar2 = F_007a1080(this,param_3,param_4);
      return uVar2;
    }
    break;
  case 0x1f: ;
    if (param_2 == &REFG(undefined, 0x5)) {
      uVar2 = F_007a0fb0(this,param_3,param_4);
      return uVar2;
    }
    break;
  case 0x20: ;
    if (param_2 == &REFG(undefined, 0x6)) {
      uVar2 = F_007a1050(this,param_3,param_4);
      return uVar2;
    }
    break;
  case 0x21: ;
    puVar3 = param_2;
    if ((undefined1 *)0x8 < param_2) {
      if (param_2 < (undefined1 *)0xb) {
        uVar2 = F_00802060(this,param_2,param_3,param_4);
        return uVar2;
      }
      if (param_2 == (undefined1 *)0xc) {
        uVar2 = F_00802130(this,param_3,param_4);
        return uVar2;
      }
    }
    break;
  case 0x24: ;
    if (param_2 == (undefined1 *)0x7) {
      uVar2 = F_0088e5b0(this,param_3,param_4);
      return uVar2;
    }
    if (param_2 == (undefined1 *)0x8) {
      uVar2 = F_0088e690(this,param_3,param_4);
      return uVar2;
    }
    puVar3 = param_2 + -0xb;
    if (puVar3 == (undefined1 *)0x0) {
      uVar2 = F_007a0ed0(this,param_3,param_4);
      return uVar2;
    }
    break;
  case 0x25: ;
    if (param_2 == (undefined1 *)0xd) {
      F_008021b0(this,param_3,param_4);
      uVar2 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x4)),3);
      uVar2 = F_005a2670(((undefined1 *)(gen_frame + 0x4)));
      return uVar2;
    }
    break;
  case 0x3c: ;
  case 0x3d: ;
    F_00557670(param_3,0);
    uVar2 = F_007a0b70(this + 0x218);
    return uVar2;
  }
  return (uint)puVar3;
}

/* ref: FUN_008b2600 */
uint F_008b2600(unsigned int gen_a0)
{
  GEN_ENTER(0x8b2600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d7e94));
  F_00580b80((undefined *)((int)this + 0x180));
  *(undefined2 *)((int)this + 0x1f0) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined2 *)((int)this + 0x1cc) = 0xff;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1d4) = 0;
  *(undefined2 *)((int)this + 0x1d8) = 0;
  *(undefined1 *)((int)this + 0x1e6) = 0;
  *(undefined4 *)((int)this + 0x1f8) = 0;
  *(undefined4 *)((int)this + 0x1fc) = 0;
  *(undefined4 *)((int)this + 0x200) = 0;
  *(undefined4 *)((int)this + 0x204) = 0;
  F_00580ea0((undefined *)((int)this + 0x21c));
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined1 *)((int)this + 0x25c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  F_0055e2a0(this,8,1);
  F_0055e2a0(this,0x20000000,0);
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0x44;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0xb00;
  *(undefined1 *)((int)this + 0x10f) = 3;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  return (uint)this;
}

/* ref: FUN_008b2720 */
uint F_008b2720(unsigned int gen_a0)
{
  GEN_ENTER(0x8b2720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d7e94));
  iVar1 = *(int *)((int)this + 0x290);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x298) - iVar1 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  F_00590cc0((undefined *)((int)this + 0x21c));
  F_00590930((undefined *)((int)this + 0x180));
  uVar2 = F_00590600(this);
  return uVar2;
}

/* ref: Client::UI2::AddonChatLog::vf60 */
byte F_008b2790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8b2790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint * puVar1;
  int in_ecx;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined4 uVar7;
  int iVar8;
  undefined * pAVar9;
  
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  uVar4 = F_0055dcb0();
  uVar4 = F_0055b9e0(uVar4);
  bVar3 = F_0055de10(this,uVar4);
  iVar8 = 0;
  if ((((bVar3 != 0) && (*(int *)(this + 0x1d0) != 0)) &&
      (in_ecx = *((int *)GEN_TOP((*(int *)(this + 0x1d0) + 0x88))), in_ecx != 0)) &&
     (bVar3 = F_005615c0(in_ecx,uVar4), bVar3 != 0)) {
    return 0;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (undefined *)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
  pAVar9 = this + 0x1a4;
  do {
    pvVar6 = *(undefined * PTR32 *)pAVar9;
    if (pvVar6 == (undefined *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)((int)pvVar6 + 0x70);
    }
    uVar5 = F_0055a350(uVar7);
    if ((char)uVar5 != '\0') {
      if (pvVar6 == (undefined *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)((int)pvVar6 + 0x70);
      }
      uVar5 = F_0055a2d0(uVar7);
      if ((char)uVar5 != '\0') {
        if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != (undefined *)0x0) {
          (*(undefined * PTR32 *)(gen_frame + 0x14)) = pvVar6;
          break;
        }
        if (*(char *)((int)pvVar6 + 0x88) == '\0') {
          (*(undefined * PTR32 *)(gen_frame + 0x10)) = pvVar6;
        }
        else {
          (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar6;
        }
      }
    }
    iVar8 = iVar8 + 1;
    pAVar9 = pAVar9 + 4;
  } while (iVar8 < 5);
  (*(char *)(gen_frame + 0x1b)) = 0;
  (*(char *)(gen_frame + 0x1a)) = 0;
  if ((*(undefined * PTR32 *)(gen_frame + 0x10)) == (undefined *)0x0) {
    (*(char *)(gen_frame + 0x1b)) = 1;
  }
  if ((*(undefined * PTR32 *)(gen_frame + 0x14)) == (undefined *)0x0) {
    (*(char *)(gen_frame + 0x1a)) = 1;
  }
  pAVar9 = (*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x1a4;
  iVar8 = 5;
  (*(char *)(gen_frame + 0x1a)) = (*(undefined * PTR32 *)(gen_frame + 0x14)) == (undefined *)0x0;
  (*(char *)(gen_frame + 0x1b)) = (*(undefined * PTR32 *)(gen_frame + 0x10)) == (undefined *)0x0;
  do {
    pvVar6 = *(undefined * PTR32 *)pAVar9;
    if (pvVar6 == (undefined *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)((int)pvVar6 + 0x70);
    }
    uVar5 = F_0055a350(uVar7);
    if ((char)uVar5 != '\0') {
      if (pvVar6 == (undefined *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)((int)pvVar6 + 0x70);
      }
      uVar5 = F_0055a2d0(uVar7);
      if ((char)uVar5 != '\0') {
        if ((*(undefined * PTR32 *)(gen_frame + 0x14)) == (undefined *)0x0) {
          (*(undefined * PTR32 *)(gen_frame + 0x14)) = pvVar6;
        }
        if ((*(char *)(gen_frame + 0x1b)) != '\0') {
          (*(undefined * PTR32 *)(gen_frame + 0x10)) = pvVar6;
        }
      }
    }
    pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    pAVar9 = pAVar9 + 4;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  pAVar9 = (*(undefined * PTR32 *)(gen_frame + 0xc));
  if (param_1 == 0xf) {
    if ((*(undefined * PTR32 *)(gen_frame + 0x14)) == (undefined *)0x0) {
      return 1;
    }
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == (*(undefined * PTR32 *)(gen_frame + 0x14))) {
      return 1;
    }
    if (((char)param_2 != '\0') && ((*(char *)(gen_frame + 0x1a)) != '\0')) {
      return 1;
    }
    bVar2 = false;
    iVar8 = 0;
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != (undefined *)0x0) {
      F_0059dde0((*(undefined * PTR32 *)(gen_frame + 0x8)),0);
      pAVar9 = (*(undefined * PTR32 *)(gen_frame + 0xc));
      uVar5 = F_00581060((*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x21c,**(int * PTR32 *)((int)pvVar6 + 0x110) + 1);
      if ((uVar5 != 0) && (iVar8 = *(int *)(uVar5 + 4), -1 < *(int *)(iVar8 + 0x264))) {
        bVar2 = true;
      }
    }
    F_008a6a00(pAVar9,**(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x110),(int)(char)pAVar9[0x1cc]);
    pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x14));
  }
  else {
    if (param_1 != 0x10) {
      return 0;
    }
    if ((*(undefined * PTR32 *)(gen_frame + 0x10)) == (undefined *)0x0) {
      return 1;
    }
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == (*(undefined * PTR32 *)(gen_frame + 0x10))) {
      return 1;
    }
    if (((char)param_2 != '\0') && ((*(char *)(gen_frame + 0x1b)) != '\0')) {
      return 1;
    }
    bVar2 = false;
    iVar8 = 0;
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != (undefined *)0x0) {
      F_0059dde0((*(undefined * PTR32 *)(gen_frame + 0x8)),0);
      pAVar9 = (*(undefined * PTR32 *)(gen_frame + 0xc));
      uVar5 = F_00581060((*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x21c,**(int * PTR32 *)((int)pvVar6 + 0x110) + 1);
      if ((uVar5 != 0) && (iVar8 = *(int *)(uVar5 + 4), -1 < *(int *)(iVar8 + 0x264))) {
        bVar2 = true;
      }
    }
    F_008a6a00(pAVar9,**(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x110),(int)(char)pAVar9[0x1cc]);
    pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x10));
  }
  F_0059dde0(pvVar6,1);
  uVar5 = F_0055dcb0();
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar5 + 0x38) + 8))))(*(int * PTR32 *)(uVar5 + 0x38),((undefined1 *)(gen_frame + 0x4)),0xd);
  F_005a2670(((undefined1 *)(gen_frame + 0x4)));
  if (bVar2) {
    if (-1 < *(int *)(iVar8 + 0x264)) {
      F_0059b300(*(undefined * PTR32 *)(iVar8 + 0x1b8),*(undefined4 *)(iVar8 + 0x270),
                   *(undefined4 *)(iVar8 + 0x26c),0);
      F_0055ad50(*(undefined * PTR32 *)(iVar8 + 0x1a8),0,0);
      F_008a3b30((undefined *)(iVar8 + 0x1a0));
      if ((*((byte *)GEN_TOP((*(int *)(iVar8 + 0x1a4) + 0xfb))) & 2) != 0) {
        puVar1 = ((uint *)GEN_TOP((*(int *)(iVar8 + 0x1a4) + 0x120)));
        *puVar1 = *puVar1 & 0xffffffbf;
      }
    }
    return 1;
  }
  uVar7 = 0;
  pvVar6 = (undefined *)F_0055dcb0();
  F_0059b300(pvVar6,uVar4,pAVar9,uVar7);
  return 1;
}

/* ref: FUN_008b2a80 */
byte F_008b2a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8b2a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  int * piVar2;
  char cVar3;
  ushort uVar4;
  uint in_EAX = 0;
  uint uVar5;
  undefined * pvVar6;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  byte local_5;
  
  pvVar6 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(int *)&gen_args[1]) * 4 + 0x1a4)));
  local_5 = 0;
  if (pvVar6 != (undefined *)0x0) {
    local_5 = 0;
    if (((char)(*(undefined4 *)&gen_args[2]) != '\0') && (*(char *)((int)pvVar6 + 0x88) != '\0')) {
      local_5 = 1;
      F_0059dde0(pvVar6,0);
      cVar3 = '\0';
      do {
        iVar8 = (((*(int *)&gen_args[1]) - cVar3) + -1) % 5;
        iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar8 * 4 + 0x1a4)));
        uVar7 = 0;
        if (iVar1 != 0) {
          uVar7 = *(undefined4 *)(iVar1 + 0x70);
        }
        uVar5 = F_0055a350(uVar7);
        if ((char)uVar5 != '\0') {
          piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + iVar8 * 4 + 0x1a4)));
          uVar5 = F_00561390();
          ((code *)*(gen_code32 *)(*piVar2 + 0x60))(piVar2,uVar5 + 0xc0);
          in_EAX = F_008a6a00((*(undefined * PTR32 *)&gen_args[0]),iVar8,(*(int *)&gen_args[1]));
          break;
        }
        cVar3 = cVar3 + '\x01';
        in_EAX = CONCAT31((int3)(uVar5 >> 8),cVar3);
      } while (cVar3 < '\x04');
    }
    bVar9 = (char)(*(undefined4 *)&gen_args[2]) == '\0';
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(int *)&gen_args[1]) * 4 + 0x1a4)));
    (*(undefined4 *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[2]), 1, 3),bVar9);
    ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,CONCAT31((int3)(in_EAX >> 8),bVar9));
    iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(int *)&gen_args[1]) * 4 + 0x1a4)));
    pvVar6 = (undefined *)0x0;
    if (iVar1 != 0) {
      pvVar6 = *(undefined * PTR32 *)(iVar1 + 0x70);
    }
    F_0055a300(pvVar6,(*(undefined4 *)&gen_args[2]));
    if ((char)(*(undefined4 *)&gen_args[3]) != '\0') {
      uVar5 = F_00581060(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x21c))),
                           **((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (*(int *)&gen_args[1]) * 4 + 0x1a4))) + 0x110))) + 1);
      piVar2 = *(int * PTR32 *)(uVar5 + 4);
      uVar7 = 0;
      if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x19c))) != 0) {
        uVar7 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x19c))) + 0x70)));
      }
      uVar4 = F_0055a030(uVar7);
      ((code *)*(gen_code32 *)(*piVar2 + 0x4c))
                (piVar2,(uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1ec))),
                 (uint)(ushort)(*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1ee))) - uVar4));
    }
  }
  F_0084c200((*(undefined * PTR32 *)&gen_args[0]));
  return local_5;
}

/* ref: FUN_008b2bd0 */
uint F_008b2bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8b2bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  int * in_ecx;
  
  uVar1 = F_00581000((undefined *)((int)this + 0x21c),param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    *(byte *)(uVar1 + 0x2e) = *(byte *)(uVar1 + 0x2e) & 0xfe;
    F_008b2a80(this,*(undefined4 *)(uVar1 + 0x1c),1,0);
    F_00560fd0((undefined *)((int)this + 0x21c),uVar1);
    if ((*(byte *)((int)param_1 + 0xf9) & 1) != 0) {
      uVar2 = F_0055e2f0(param_1,8);
      if (uVar2 != 0) {
        in_ecx = (int *)F_00559c20(uVar2);
        if (in_ecx != (int *)0x0) {
          uVar2 = F_005613a0(in_ecx);
          if (uVar2 == 1) {
            F_0056b460(in_ecx,1);
            uVar2 = ((code *)*(gen_code32 *)(*in_ecx + 0x3c))(in_ecx);
            *(byte *)((int)param_1 + 0xf9) = *(byte *)((int)param_1 + 0xf9) | 0x40;
            param_1[0x29] = uVar2;
          }
        }
      }
    }
    uVar2 = *(uint *)((int)this + 0xf4) >> 0x14 & 0xf;
    if ((uVar2 == 5) || (uVar2 == 4)) {
      uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1,1,0);
    }
  }
  return uVar2;
}

/* ref: FUN_008b2c90 */
unsigned int F_008b2c90(unsigned int gen_a0)
{
  GEN_ENTER(0x8b2c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  int * piVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined * this_00;
  int * piVar8;
  uint uVar9;
  int iVar10;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x18)) = (undefined1 *)((int)this + 0x25e);
  (*(int * PTR32 *)(gen_frame + 0x10)) = (int *)((int)this + 0x1a4);
  (*(int *)(gen_frame + 0x14)) = 0;
  iVar10 = (*(int *)(gen_frame + 0x14));
  do {
    (*(int *)(gen_frame + 0x14)) = iVar10;
    if (*(int * PTR32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x110) != (int *)0x0) {
      uVar5 = F_00581060((undefined *)((int)this + 0x21c),**(int * PTR32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 0x110) + 1);
      if (uVar5 == 0) {
        *(*(undefined1 * PTR32 *)(gen_frame + 0x18)) = 0;
      }
      else {
        *(*(undefined1 * PTR32 *)(gen_frame + 0x18)) = 1;
        (*(undefined1 * PTR32 *)(gen_frame + 0x18))[1] = *(byte *)(uVar5 + 0x2c) >> 3 & 1;
        piVar8 = *(int * PTR32 *)(uVar5 + 4);
        ((code *)*(gen_code32 *)(*piVar8 + 0x28))(piVar8,(*(undefined1 * PTR32 *)(gen_frame + 0x18)) + 2,(*(undefined1 * PTR32 *)(gen_frame + 0x18)) + 4);
        ((code *)*(gen_code32 *)(*piVar8 + 0x48))(piVar8,(*(undefined1 * PTR32 *)(gen_frame + 0x18)) + 6,(*(undefined1 * PTR32 *)(gen_frame + 0x18)) + 8,0);
        if ((*(byte *)(uVar5 + 0x2c) & 8) == 0) {
          uVar9 = F_00581000((undefined *)((int)this + 0x21c),*(undefined4 *)(uVar5 + 4));
          if (uVar9 != 0) {
            *(undefined1 *)(uVar9 + 0x2d) = 1;
          }
          F_008b2a80(this,(*(int *)(gen_frame + 0x14)),0,1);
          if (((((*(byte *)((int)piVar8 + 0xf9) & 1) != 0) &&
               (uVar9 = F_0055e2f0(piVar8,8), uVar9 != 0)) &&
              (uVar9 = F_00559c20(uVar9), uVar9 != 0)) &&
             (uVar6 = F_005613a0(uVar9), uVar6 == 1)) {
            F_0056b460(uVar9,0);
            *(byte *)((int)piVar8 + 0xf9) = *(byte *)((int)piVar8 + 0xf9) & 0xbf;
            piVar8[0x29] = piVar8[0x62];
          }
          F_00561040((undefined *)((int)this + 0x21c),uVar5);
        }
        *(byte *)(uVar5 + 0x2c) = *(byte *)(uVar5 + 0x2c) & 0xfb;
        *(undefined1 *)(piVar8 + 0x9e) = 1;
      }
    }
    (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)(gen_frame + 0x10)) + 1;
    (*(undefined1 * PTR32 *)(gen_frame + 0x18)) = (*(undefined1 * PTR32 *)(gen_frame + 0x18)) + 10;
    iVar10 = (*(int *)(gen_frame + 0x14)) + 1;
  } while (iVar10 < 4);
  ((code *)*(gen_code32 *)(*(int *)this + 0x28))
            (this,(int)this + iVar10 * 10 + 0x260,
             ((undefined *)GEN_TOP(((int)this + ((*(int *)(gen_frame + 0x14)) + 0x132 + iVar10 * 4) * 2))));
  ((code *)*(gen_code32 *)(*(int *)this + 0x48))
            (this,(int)this + iVar10 * 10 + 0x264,(int)this + iVar10 * 10 + 0x266,0);
  uVar5 = F_0055dcb0();
  uVar1 = *(ushort *)(uVar5 + 0x234);
  uVar6 = F_0055dcb0();
  uVar5 = (uint)TRUNC((double)uVar1 * *(double *)&REFG(undefined, 0x10c6318));
  (*(short *)(gen_frame + 0xc)) = (short)uVar5;
  sVar3 = (*(short *)(gen_frame + 0xc));
  uVar5 = uVar5 & 0xffff;
  uVar7 = (int)(uVar1 - uVar5) / 2;
  uVar9 = (uint)TRUNC((double)*(ushort *)(uVar6 + 0x238) * *(double *)&REFG(undefined, 0x1094818));
  (*(short *)(gen_frame + 0xc)) = (short)uVar9;
  sVar4 = (*(short *)(gen_frame + 0xc));
  uVar9 = uVar9 & 0xffff;
  uVar6 = (int)(*(ushort *)(uVar6 + 0x238) - uVar9) / 2;
  ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this,uVar7 & 0xffff,uVar6 & 0xffff);
  (*(undefined2 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x10)) + 0)) = (undefined2)uVar7;
  (*(short *)(gen_frame + 0xc)) = (short)uVar6;
  *(undefined2 *)((int)this + 0x1da) = (*(undefined2 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x10)) + 0));
  *(short *)((int)this + 0x1dc) = (*(short *)(gen_frame + 0xc));
  *(short *)((int)this + 0x1de) = sVar3;
  *(short *)((int)this + 0x1e0) = sVar4 - *(short *)((int)this + 0x1f0);
  F_0084be80(this,uVar5,uVar9,uVar5);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x204) + 0x28))))(*(int * PTR32 *)((int)this + 0x204),0);
  this_00 = (undefined *)0x0;
  if (*(int *)((int)this + 0x204) != 0) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x204) + 0x70)));
  }
  F_0055a300(this_00,0);
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined1 *)((int)this + 0x25c) = 1;
  if (((-1 < *(char *)((int)this + 0x1cc)) &&
      (iVar10 = *((int *)GEN_TOP(((int)this + *(char *)((int)this + 0x1cc) * 4 + 0x1a4))), iVar10 != 0)) &&
     ((piVar8 = *(int * PTR32 *)(iVar10 + 0x110), piVar8 != (int *)0x0 &&
      ((uVar5 = F_00581060((undefined *)((int)this + 0x21c),*piVar8 + 1), uVar5 != 0 &&
       (*(int *)(uVar5 + 4) != 0)))))) {
    F_00886700(((undefined *)GEN_TOP((*(int *)(uVar5 + 4) + 0x1a0))),1,1);
  }
  if ((*(byte *)((int)this + 0xf9) & 1) != 0) {
    uVar5 = F_0055dcb0();
    F_00594ae0(*(undefined * PTR32 *)(uVar5 + 0x14),(int)this + 0x290,0x20000000);
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x294);
  for (piVar8 = *(int * PTR32 *)((int)this + 0x290); piVar8 != piVar2; piVar8 = piVar8 + 1) {
    *(ushort *)(*piVar8 + 0x126) = *(ushort *)(*piVar8 + 0x126) | 8;
  }
  return 0;
}

/* ref: FUN_008b2fb0 */
uint F_008b2fb0(unsigned int gen_a0)
{
  GEN_ENTER(0x8b2fb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined * this_00;
  int * piVar5;
  ushort * puVar6;
  int * local_c;
  int local_8;
  
  local_c = (int *)((int)this + 0x1a4);
  local_8 = 0;
  puVar6 = (ushort *)((int)this + 0x266);
  iVar4 = local_8;
  do {
    local_8 = iVar4;
    if (((*(int * PTR32 *)(*local_c + 0x110) != (int *)0x0) &&
        (uVar3 = F_00581060((undefined *)((int)this + 0x21c),**(int * PTR32 *)(*local_c + 0x110) + 1),
        uVar3 != 0)) && ((char)puVar6[-4] != '\0')) {
      if (*(char *)((int)puVar6 + -7) == '\0') {
        F_008b2bd0(this,*(undefined4 *)(uVar3 + 4));
      }
      *(byte *)(uVar3 + 0x2c) =
           *(byte *)(uVar3 + 0x2c) ^ ((local_8 != 0) * '\x04' ^ *(byte *)(uVar3 + 0x2c)) & 4;
      piVar5 = *(int * PTR32 *)(uVar3 + 4);
      ((code *)*(gen_code32 *)(*piVar5 + 0x4c))(piVar5,(uint)puVar6[-1],(uint)*puVar6);
      F_00809130(piVar5,(uint)puVar6[-1],(uint)*puVar6);
      ((code *)*(gen_code32 *)(*piVar5 + 0x2c))(piVar5,(uint)puVar6[-3],(uint)puVar6[-2]);
      ((code *)*(gen_code32 *)(*piVar5 + 0x14))(piVar5,0);
      F_00886700(piVar5 + 0x68,1,1);
      *(undefined1 *)(piVar5 + 0x9e) = 0;
    }
    local_c = local_c + 1;
    iVar4 = local_8 + 1;
    puVar6 = puVar6 + 5;
  } while (iVar4 < 4);
  ((code *)*(gen_code32 *)(*(int *)this + 0x2c))
            (this,(uint)*(ushort *)((int)this + iVar4 * 10 + 0x260),
             (uint)*((ushort *)GEN_TOP(((int)this + (local_8 + 0x132 + iVar4 * 4) * 2))));
  ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,(int)this + 0x1da,(int)this + 0x1dc);
  uVar1 = *(ushort *)((int)this + iVar4 * 10 + 0x264);
  *(ushort *)((int)this + 0x1de) = uVar1;
  *(short *)((int)this + 0x1e0) =
       *(short *)((int)this + iVar4 * 10 + 0x266) - *(short *)((int)this + 0x1f0);
  F_0084be80(this,(uint)uVar1,(uint)*(ushort *)((int)this + iVar4 * 10 + 0x266),(uint)uVar1);
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x204) + 0x28))))(*(int * PTR32 *)((int)this + 0x204),1);
  this_00 = (undefined *)0x0;
  if (*(int *)((int)this + 0x204) != 0) {
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x204) + 0x70)));
  }
  F_0055a300(this_00,1);
  uVar3 = F_0055e2f0(this,7);
  if (uVar3 != 0) {
    *(uint *)((int)this + 0xa0) = uVar3;
  }
  *(undefined1 *)((int)this + 0x25c) = 0;
  if ((*(byte *)((int)this + 0xf9) & 1) != 0) {
    uVar3 = F_0055dcb0();
    F_00594ae0(*(undefined * PTR32 *)(uVar3 + 0x14),(int)this + 0x290,0x20000000);
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x294);
  for (piVar5 = *(int * PTR32 *)((int)this + 0x290); piVar5 != piVar2; piVar5 = piVar5 + 1) {
    *(ushort *)(*piVar5 + 0x126) = *(ushort *)(*piVar5 + 0x126) & 0xfff7;
  }
  return (uint)piVar5;
}

/* ref: Client::UI2::AddonChatLogPanel::vf59 */
uint F_008b31a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8b31a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  if ((param_1 == 9) && (*(int *)(this + 0x264) < 0)) {
    uVar1 = F_0055dcb0();
    uVar1 = F_0055b9e0(uVar1);
    uVar2 = F_0055dcb0();
    uVar2 = F_0055b9e0(uVar2);
    uVar1 = F_008b0e10(this + 0x1a0,this,uVar2,uVar1);
    return uVar1;
  }
  uVar1 = F_005b1020((undefined *)this,param_1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonChatLogPanel::vf55 */
uint F_008b3200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8b3200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  undefined * this_00;
  undefined1 AVar2;
  
  AVar2 = (undefined1)(*(int *)(this + 0xfc) != 0);
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),AVar2);
  this[0x2b9] = (undefined1)0x1;
  this[0x2b8] = AVar2;
  if ((((bool)AVar2) && (((byte)this[0xf9] & 1) != 0)) && (((byte)this[0xfb] & 2) == 0)) {
    AVar2 = this[0x13c];
    uVar1 = F_0055dcb0();
    this_00 = (undefined *)F_0057f810(*(undefined * PTR32 *)(uVar1 + 0x14),(uint)(byte)AVar2);
    uVar1 = 0;
    if (this_00 != (undefined *)0x0) {
      uVar1 = F_008b2bd0(this_00,this);
    }
  }
  return uVar1;
}

/* ref: FUN_008b3260 */
uint F_008b3260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8b3260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_008b0e10((undefined *)((int)this + 0x1a0),param_1,param_2,param_3);
  return uVar1;
}

/* ref: Client::UI2::AddonCharacter::vf44 */
uint F_008b3270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8b3270u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined1 AVar1;
  int * this_00;
  bool bVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int * piVar8;
  int * piVar9;
  undefined * pvVar10;
  undefined * pAVar11;
  byte * pbVar12;
  int iVar13;
  undefined4 * puVar14;
  
  F_0084dba0((*(undefined * PTR32 *)&gen_args[0]));
  F_0055aa90(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19c))),3);
  F_0057eb00(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19c))),1);
  iVar13 = 0;
  pAVar11 = (*(undefined * PTR32 *)&gen_args[0]) + 0x180;
  do {
    if (*(int *)pAVar11 == 0) {
      pvVar10 = (undefined *)0x0;
    }
    else {
      pvVar10 = *(undefined * PTR32 *)(*(int *)pAVar11 + 0x70);
    }
    F_00568380(pvVar10,0x17,iVar13 + 0xf,(*(undefined * PTR32 *)&gen_args[0]),0,0);
    iVar13 = iVar13 + 1;
    pAVar11 = pAVar11 + 4;
  } while (iVar13 < 4);
  F_00560760(((undefined4 *)(gen_frame + 0xc)));
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) == 0) {
    pvVar10 = (undefined *)0x0;
  }
  else {
    pvVar10 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) + 0x70)));
  }
  F_00568380(pvVar10,0x17,0x14,(*(undefined * PTR32 *)&gen_args[0]),0,0);
  if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 0x90))) & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 0x94)));
  }
  ((undefined4 *)(gen_frame + 0xc))[0] = uVar5;
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b0))) + 0x70)));
  }
  AVar1 = (*(undefined * PTR32 *)&gen_args[0])[0x13a];
  uVar6 = F_0055dcb0();
  F_00590ad0((undefined *)(uVar6 + 0xe0),2,(uint)(byte)AVar1,uVar5,((undefined4 *)(gen_frame + 0xc)));
  pvVar10 = (undefined *)0x0;
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b8))) != 0) {
    pvVar10 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b8))) + 0x70)));
  }
  F_00568380(pvVar10,0x17,0x15,(*(undefined * PTR32 *)&gen_args[0]),0,0);
  F_00568380(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x90))),0xc,0x15,(*(undefined * PTR32 *)&gen_args[0]),0,0);
  if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 0x98))) & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 0x9c)));
  }
  ((undefined4 *)(gen_frame + 0xc))[0] = uVar5;
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b8))) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1b8))) + 0x70)));
  }
  AVar1 = (*(undefined * PTR32 *)&gen_args[0])[0x13a];
  uVar6 = F_0055dcb0();
  F_00590ad0((undefined *)(uVar6 + 0xe0),2,(uint)(byte)AVar1,uVar5,((undefined4 *)(gen_frame + 0xc)));
  pvVar10 = (undefined *)0x0;
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))) != 0) {
    pvVar10 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))) + 0x70)));
  }
  F_00568380(pvVar10,0x17,0x16,(*(undefined * PTR32 *)&gen_args[0]),0,0);
  if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 0x88))) & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 0x8c)));
  }
  ((undefined4 *)(gen_frame + 0xc))[0] = uVar5;
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a8))) + 0x70)));
  }
  AVar1 = (*(undefined * PTR32 *)&gen_args[0])[0x13a];
  uVar6 = F_0055dcb0();
  F_00590ad0((undefined *)(uVar6 + 0xe0),2,(uint)(byte)AVar1,uVar5,((undefined4 *)(gen_frame + 0xc)));
  pvVar10 = (undefined *)0x0;
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))) != 0) {
    pvVar10 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))) + 0x70)));
  }
  F_00568380(pvVar10,0x17,0x17,(*(undefined * PTR32 *)&gen_args[0]),0,0);
  if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 0xb0))) & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 0xb4)));
  }
  AVar1 = (*(undefined * PTR32 *)&gen_args[0])[0x13a];
  ((undefined4 *)(gen_frame + 0xc))[0] = uVar5;
  uVar6 = F_0055dcb0();
  puVar14 = ((undefined4 *)(gen_frame + 0xc));
  uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))) + 0x38))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c0))));
  F_00590ad0((undefined *)(uVar6 + 0xe0),2,(uint)(byte)AVar1,uVar7,puVar14);
  pvVar10 = (undefined *)0x0;
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))) != 0) {
    pvVar10 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))) + 0x70)));
  }
  F_00568380(pvVar10,0x17,0x18,(*(undefined * PTR32 *)&gen_args[0]),0,0);
  if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 0xa8))) & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 0xac)));
  }
  AVar1 = (*(undefined * PTR32 *)&gen_args[0])[0x13a];
  ((undefined4 *)(gen_frame + 0xc))[0] = uVar5;
  uVar6 = F_0055dcb0();
  puVar14 = ((undefined4 *)(gen_frame + 0xc));
  uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))) + 0x38))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c4))));
  F_00590ad0((undefined *)(uVar6 + 0xe0),2,(uint)(byte)AVar1,uVar7,puVar14);
  pvVar10 = (undefined *)0x0;
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) != 0) {
    pvVar10 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) + 0x70)));
  }
  F_00568380(pvVar10,0x17,0x19,(*(undefined * PTR32 *)&gen_args[0]),0,0);
  if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 0xa0))) & 0xf) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 0xa4)));
  }
  AVar1 = (*(undefined * PTR32 *)&gen_args[0])[0x13a];
  ((undefined4 *)(gen_frame + 0xc))[0] = uVar5;
  uVar6 = F_0055dcb0();
  puVar14 = ((undefined4 *)(gen_frame + 0xc));
  uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))) + 0x38))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c8))));
  F_00590ad0((undefined *)(uVar6 + 0xe0),2,(uint)(byte)AVar1,uVar7,puVar14);
  if (0 < (*(int *)&gen_args[1])) {
    pAVar11 = (*(undefined * PTR32 *)&gen_args[0]) + 0x2c8;
    pbVar12 = ((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 0x18)));
    (*(int *)&gen_args[1]) = 0xe;
    do {
      if ((*pbVar12 & 0xf) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(pbVar12 + 4);
      }
      F_0042e430(pAVar11,uVar5);
      pbVar12 = pbVar12 + 8;
      pAVar11 = pAVar11 + 0x5c;
      (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) + -1;
    } while ((*(int *)&gen_args[1]) != 0);
  }
  pAVar11 = (*(undefined * PTR32 *)&gen_args[0]) + 0x7d4;
  iVar13 = (int)(*(undefined * PTR32 *)&gen_args[2]) + 0xb8;
  (*(undefined * PTR32 *)&gen_args[2]) = (undefined *)0x3e;
  do {
    F_00596cd0(pAVar11,iVar13);
    iVar13 = iVar13 + 8;
    pAVar11 = pAVar11 + 8;
    (*(undefined * PTR32 *)&gen_args[2]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + -1)));
  } while ((*(undefined * PTR32 *)&gen_args[2]) != (undefined *)0x0);
  F_0059dde0(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x280))) * 4 + 0x180))),1);
  uVar6 = F_0055dcb0();
  uVar6 = F_0055b9a0(uVar6);
  F_00584110(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 400))),**((undefined4 * PTR32 *)GEN_TOP((*(int *)(uVar6 + 8) + 0x20))));
  (*(undefined * PTR32 *)&gen_args[2]) = (*(undefined * PTR32 *)&gen_args[0]) + 0x2c0;
  (*(int *)&gen_args[1]) = 1;
  do {
    iVar13 = *(int *)(*(undefined * PTR32 *)&gen_args[2]);
    if (iVar13 != 0) {
      uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar13 + 0x84) + 0x28))))(iVar13 + 0x84);
      *(int *)(uVar6 + 4) = (*(int *)&gen_args[1]) + -1;
      *(short *)(iVar13 + 0x9c) = (short)(*(int *)&gen_args[1]) + -1;
      *(undefined4 *)(iVar13 + 0xa0) = 0x18;
      F_00568380(*(undefined * PTR32 *)(iVar13 + 0x70),0x30,(*(int *)&gen_args[1]),(*(undefined * PTR32 *)&gen_args[0]),0,0);
      F_00568380(*(undefined * PTR32 *)(iVar13 + 0x70),0x34,(*(int *)&gen_args[1]),(*(undefined * PTR32 *)&gen_args[0]),0,0);
      F_00568380(*(undefined * PTR32 *)(iVar13 + 0x70),0x2d,(*(int *)&gen_args[1]),(*(undefined * PTR32 *)&gen_args[0]),0,0);
      F_00568380(*(undefined * PTR32 *)(iVar13 + 0x70),3,(*(int *)&gen_args[1]),(*(undefined * PTR32 *)&gen_args[0]),0,0);
      F_00568380(*(undefined * PTR32 *)(iVar13 + 0x70),0xc,(*(int *)&gen_args[1]),(*(undefined * PTR32 *)&gen_args[0]),0,0);
      F_00568380(*(undefined * PTR32 *)(iVar13 + 0x70),0x32,(*(int *)&gen_args[1]),(*(undefined * PTR32 *)&gen_args[0]),0,0);
      F_00568380(*(undefined * PTR32 *)(iVar13 + 0x70),0x33,(*(int *)&gen_args[1]),(*(undefined * PTR32 *)&gen_args[0]),0,0);
    }
    (*(undefined * PTR32 *)&gen_args[2]) = (*(undefined * PTR32 *)&gen_args[2]) + 0x5c;
    bVar2 = (*(int *)&gen_args[1]) < 0xe;
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) + 1;
  } while (bVar2);
  F_00568380(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x27c))),0x31,0x1b,(*(undefined * PTR32 *)&gen_args[0]),0,0);
  F_00568380(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x27c))),0x30,0x1b,(*(undefined * PTR32 *)&gen_args[0]),0,0);
  F_0055a460(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x27c))),1);
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 2000))) != 0) {
    F_00591c80(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1bc))),*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 2000))));
  }
  uVar3 = F_00559d70(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1a0))));
  uVar4 = F_00559d70(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x19c))));
  *((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x7cc))) = uVar3 - uVar4;
  F_0080b2f0((*(undefined * PTR32 *)&gen_args[0]));
  F_0056b630((*(undefined * PTR32 *)&gen_args[0]),0x2fb,7,0,9,0,0);
  if ((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x280))) != 0) && (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 700))) != 0)) {
    F_00588cd0((*(undefined * PTR32 *)&gen_args[0]) + 0x284,&(*(undefined * PTR32 *)&gen_args[2]),*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 700))),1);
    *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 700))) = 0;
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 700))) == 0) {
    if (((*(undefined * PTR32 *)&gen_args[0])[0x2b8] == (undefined1)0x0) || (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x29c))) == 0)) {
      uVar6 = 0;
    }
    else {
      this_00 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x2a0))) + 0x14)));
      (*(uint *)(gen_frame + 0x18)) = *((ushort *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x29c))) + 0xf6))) & 0xf;
      piVar8 = (int *)F_0057f860(this_00,"CharacterStatus");
      (*(undefined * PTR32 *)&gen_args[2]) = (undefined *)0x0;
      if ((piVar8 == (int *)0x0) || ((*(byte *)((int)piVar8 + 0xfb) & 8) == 0)) {
        uVar5 = 0;
        uVar6 = F_00404270();
        piVar8 = (int *)F_00406bd0(0x2c8,0,uVar6,uVar5);
        if (piVar8 != (int *)0x0) {
          F_005903f0(piVar8);
          *piVar8 = (int)(*(undefined * PTR32 (*)[62])REFP(0x10ccc4c));
          piVar8[0x60] = 0;
          piVar8[0x61] = 0;
          piVar8[0x62] = 0;
          piVar8[99] = 0;
          piVar8[100] = 0;
          piVar8[0x65] = 0;
          piVar8[0x66] = 0;
          piVar8[0x67] = 0;
          piVar8[0x68] = 0;
          piVar8[0x69] = 0;
          piVar8[0x6a] = 0;
          piVar8[0x70] = 0;
          piVar8[0x71] = 0;
          piVar8[0x72] = 0;
          piVar8[0x73] = 0;
          piVar9 = piVar8 + 0x93;
          iVar13 = 0x1f;
          do {
            piVar9[-0x1f] = 0;
            *piVar9 = 0;
            piVar9 = piVar9 + 1;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
          *(byte *)((int)piVar8 + 0xf9) = *(byte *)((int)piVar8 + 0xf9) | 0x44;
          *(byte *)((int)piVar8 + 0xfa) = *(byte *)((int)piVar8 + 0xfa) | 0x40;
          F_005a8d00(piVar8,0x3e,(*(undefined * PTR32 *)&gen_args[0]) + 0x7d4);
          uVar6 = F_0057fac0(this_00,piVar8,"CharacterStatus");
          if (uVar6 == 0) {
            ((code *)*(gen_code32 *)*piVar8)(piVar8,1);
          }
          else {
            (*(undefined * PTR32 *)&gen_args[2]) = (undefined *)(uint)*(byte *)((int)piVar8 + 0x13a);
            (*((code *)GEN_TOP(((undefined4 *)*piVar8)[3])))(piVar8,(*(uint *)(gen_frame + 0x18)),0);
          }
        }
      }
      else {
        uVar6 = ((code *)*(gen_code32 *)(*this_00 + 0x28))(this_00,piVar8,0x3e,(*(undefined * PTR32 *)&gen_args[0]) + 0x7d4);
        if ((char)uVar6 != '\0') {
          ((code *)*(gen_code32 *)(*piVar8 + 0x14))(piVar8,0);
          (*(undefined * PTR32 *)&gen_args[2]) = (undefined *)(uint)*(byte *)((int)piVar8 + 0x13a);
        }
      }
      uVar6 = F_00594fc0((*(undefined * PTR32 *)&gen_args[0]) + 0x284,(*(undefined * PTR32 *)&gen_args[2]),1,0,0,(*(undefined * PTR32 *)&gen_args[2]),0,1,0,0);
      if ((uVar6 != 0) && (*(int *)(uVar6 + 4) != 0)) {
        *((undefined1 *)GEN_TOP((*(int *)(uVar6 + 4) + 0x13b))) =
             *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x29c))) + 0x13a)));
      }
    }
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 700))) = uVar6;
    if (uVar6 != 0) {
      uVar3 = F_00559d70(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x194))));
      uVar4 = F_00559d90(*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x194))));
      iVar13 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 700)));
      *(ushort *)(iVar13 + 0x28) = uVar3;
      *(ushort *)(iVar13 + 0x2a) = uVar4;
    }
    *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x280))) = 0;
  }
  F_005a91d0((*(undefined * PTR32 *)&gen_args[0]),0,2);
  F_005a91d0((*(undefined * PTR32 *)&gen_args[0]),1,3);
  F_005a91d0((*(undefined * PTR32 *)&gen_args[0]),0,7);
  F_005a91d0((*(undefined * PTR32 *)&gen_args[0]),1,8);
  F_005a91d0((*(undefined * PTR32 *)&gen_args[0]),0,0x38);
  uVar6 = F_005a91d0((*(undefined * PTR32 *)&gen_args[0]),1,0x3d);
  return uVar6;
}

/* ref: Client::UI2::AddonCharacter::vf60 */
byte F_008b3d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8b3d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined * pAVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = *(uint *)(this + 0x280);
  (*(uint *)(gen_frame + 0x10)) = uVar2;
  (*(uint *)(gen_frame + 0x14)) = uVar2;
  (*(char *)(gen_frame + 0x1b)) = '\0';
  if (*(int *)(this + 700) != 0) {
    uVar1 = F_0055dcb0();
    if (*((int *)GEN_TOP((*(int *)(uVar1 + 0x14) + 0xcc))) == *((int *)GEN_TOP((*(int *)(this + 700) + 4)))) {
      (*(char *)(gen_frame + 0x1b)) = '\x01';
    }
  }
  if (param_1 == 0xf) {
    if (((char)param_2 != '\0') && (2 < (int)uVar2)) goto LAB_008b3d76;
    uVar1 = uVar2 + 1;
  }
  else {
    if ((param_1 != 0x10) || (((char)param_2 != '\0' && ((int)uVar2 < 1)))) goto LAB_008b3d76;
    uVar1 = uVar2 + 3;
  }
  uVar1 = uVar1 & 0x80000003;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  (*(uint *)(gen_frame + 0x14)) = uVar1;
LAB_008b3d76: ;
  F_008a7530(this,(*(uint *)(gen_frame + 0x14)));
  if (uVar2 != *(uint *)(this + 0x280)) {
    uVar2 = F_0055dcb0();
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x38) + 8))))(*(int * PTR32 *)(uVar2 + 0x38),((undefined1 *)(gen_frame + 0x8)),0xd);
    F_005a2670(((undefined1 *)(gen_frame + 0x8)));
  }
  pAVar4 = this + 0x180;
  iVar3 = 4;
  do {
    F_0059dde0(*(undefined * PTR32 *)pAVar4,0);
    pAVar4 = pAVar4 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  F_0059dde0(*(undefined * PTR32 *)(this + (*(uint *)(gen_frame + 0x14)) * 4 + 0x180),1);
  if ((*(char *)(gen_frame + 0x1b)) != '\0') {
    if ((*(uint *)(this + 0x280) < 4) && (*(int *)(this + 700) != 0)) {
      uVar2 = F_0055dcb0();
      F_0059b860(*(undefined * PTR32 *)(uVar2 + 0x14),*((undefined4 *)GEN_TOP((*(int *)(this + 700) + 4))),0);
    }
    else {
      uVar6 = 0;
      uVar5 = 1;
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d4) + 0x3c))))(*(int * PTR32 *)(this + 0x1d4));
      F_0059b340(this,uVar2,uVar5,uVar6);
    }
  }
  return (*(uint *)(gen_frame + 0x10)) != *(uint *)(this + 0x280);
}

/* ref: Client::UI2::AddonAreaMap::vf52 */
byte F_008b3e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8b3e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  undefined4 uVar2;
  undefined * this_00;
  undefined1 * this_01;
  int iVar3;
  
  if ((char)param_1[1] == '\0') {
    iVar3 = *param_1;
    if (iVar3 == 4) {
      ((code *)*(gen_code32 *)(*(int *)this + 100))(this);
      uVar1 = *(uint *)(this + 0xf4) >> 0x14 & 0xf;
      if ((uVar1 == 5) || (uVar1 == 4)) {
        uVar1 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x14)),0x18);
        F_005a2670(((undefined1 *)(gen_frame + 0x14)));
      }
      return 1;
    }
    if (iVar3 == 5) {
      if (1 < *(uint *)(this + 0x4b0)) {
        F_007ae170(this,(*(int *)(this + 0x4b4) + 1U) % *(uint *)(this + 0x4b0));
        (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(this + 0x4b4);
        (*(undefined4 *)(gen_frame + 0x4)) = 3;
        (*(undefined4 *)(gen_frame + 0x8)) = 4;
        (*(undefined4 *)(gen_frame + 0xc)) = 4;
        F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0x4)));
        F_0059b390(this,*((undefined4 *)GEN_TOP((*(int *)(this + 0x1b4) + 0x84))),1,0);
        uVar1 = F_0055dcb0();
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x14)),1);
        F_005a2670(((undefined1 *)(gen_frame + 0x14)));
        this_01 = ((undefined1 *)(gen_frame + 0x14));
        iVar3 = 1;
        do {
          this_01 = this_01 + -8;
          F_005a2670(this_01);
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
        return 1;
      }
      uVar2 = 0;
      if (*((int *)GEN_TOP((*(int *)(this + 0x1b4) + 0x84))) != 0) {
        uVar2 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x1b4) + 0x84))) + 0x70)));
      }
      uVar1 = F_0055a350(uVar2);
      if ((char)uVar1 == '\0') {
        uVar2 = 0;
        if (*((int *)GEN_TOP((*(int *)(this + 0x1b0) + 0x84))) != 0) {
          uVar2 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x1b0) + 0x84))) + 0x70)));
        }
        uVar1 = F_0055a350(uVar2);
        if ((char)uVar1 == '\0') {
          return 1;
        }
        this_00 = *(undefined * PTR32 *)(this + 0x1b0);
      }
      else {
        this_00 = *(undefined * PTR32 *)(this + 0x1b4);
      }
      F_0059fc30(this_00);
      uVar1 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar1 + 0x38) + 8))))(*(int * PTR32 *)(uVar1 + 0x38),((undefined1 *)(gen_frame + 0x14)),1);
      F_005a2670(((undefined1 *)(gen_frame + 0x14)));
      return 1;
    }
    if (iVar3 == 0xf) {
      if (this[0x4f7] != (undefined1)0x0) {
        F_008a8b10(this,1);
      }
      return 1;
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonAreaMap::vf53 */
unsigned int F_008b3ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8b3ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined * pvVar2;
  undefined1 AVar3;
  undefined4 uVar4;
  undefined4 local_8;
  
  if (((byte)this[0xf9] & 1) != 0) {
    F_0080d140(this);
    bVar1 = F_0056c7e0();
    if ((bVar1 == 0) || ((char)param_1 == '\0')) {
      AVar3 = (undefined1)0x0;
    }
    else {
      AVar3 = (undefined1)0x1;
    }
    local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),AVar3);
    if (this[0x4f7] != AVar3) {
      this[0x4f7] = AVar3;
      F_0055a300(*(undefined * PTR32 *)(this + 0x200),local_8);
      if (AVar3 != (undefined1)0x0) {
        F_008a8b10(this,0);
      }
    }
    if (this[0x4f7] != (undefined1)0x0) {
      this[0x4fd] = (undefined1)0x1;
    }
    if ((char)param_1 == '\0') {
      F_00587960(this,(uint)(byte)this[0x4f9],0);
      F_007ae610(this);
    }
    uVar4 = param_1;
    pvVar2 = (undefined *)F_0055e2f0(this,0x28);
    F_0055a300(pvVar2,uVar4);
    uVar4 = param_1;
    pvVar2 = (undefined *)F_0055e2f0(this,0xb);
    F_0055a300(pvVar2,uVar4);
    pvVar2 = (undefined *)F_0055e2f0(this,5);
    F_0055a300(pvVar2,param_1);
  }
  return 0;
}

/* ref: FUN_008b40c0 */
uint F_008b40c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8b40c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  if ((*(char *)((int)this + 0x4ee) != '\x01') && (*(char *)((int)this + 0x4ec) != '\x01')) {
    if (*(char *)((int)this + 0x4f3) == '\0') {
      uVar1 = F_0055a300(*(undefined * PTR32 *)((int)this + 0x1ec),0);
      return uVar1;
    }
    if (*(char *)((int)this + 0x4f7) != '\0') {
      *(undefined1 *)((int)this + 0x4f7) = 0;
      F_0055a300(*(undefined * PTR32 *)((int)this + 0x200),0);
    }
    uVar1 = F_008a87e0(this,param_1);
  }
  return uVar1;
}

/* ref: FUN_008b4120 */
byte F_008b4120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8b4120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  short sVar2;
  double dVar3;
  byte bVar4;
  uint uVar5;
  
  bVar4 = F_00a34870(*(undefined * PTR32 *)(param_3 + 8),0x16f);
  if (bVar4 == 0) {
    bVar4 = F_00a34de0(*(undefined * PTR32 *)(param_3 + 8),0x16f);
    if (bVar4 == 0) {
      bVar4 = F_00a34970(*(undefined * PTR32 *)(param_3 + 8),1);
      if (bVar4 == 0) {
        bVar4 = F_00a34970(*(undefined * PTR32 *)(param_3 + 8),0xf);
        if (bVar4 != 0) {
          F_007ae3c0(param_1);
          return 0;
        }
        bVar4 = F_00a34970(*(undefined * PTR32 *)(param_3 + 8),0x170);
        if (bVar4 == 0) {
          if ((*(short *)(param_3 + 4) == 0) && (*(short *)(param_3 + 6) == 0)) {
            return 0;
          }
          bVar4 = F_0056c800();
          if (bVar4 != 0) {
            return 0;
          }
          sVar2 = *(short *)(param_3 + 6);
          dVar3 = *(double *)&REFG(undefined, 0x1094878);
          if ((float10)((float)GEN_TOF(ABS((float10)(int)sVar2))) +
              (float10)((float)GEN_TOF(ABS((float10)(int)*(short *)(param_3 + 4)))) <
              (float10)*(double *)&REFG(undefined, 0x1088118)) {
            dVar3 = *(double *)&REFG(double, 0x10948e0);
          }
          *(float *)((int)param_1 + 0x244) =
               ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x244) +
                      (float10)((float)GEN_TOF(((float10)(int)*(short *)(param_3 + 4) * (float10)dVar3))))));
          *(float *)((int)param_1 + 0x248) =
               ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x248) -
                      (float10)(float)((float10)(int)sVar2 * (float10)dVar3))));
          F_007ad100((undefined *)((int)param_1 + 0x204));
          *(undefined4 *)((int)param_1 + 0x210) = *(undefined4 *)((int)param_1 + 0x25c);
          *(undefined4 *)((int)param_1 + 0x214) = *(undefined4 *)((int)param_1 + 0x260);
          F_007ae110(param_1,0);
          F_007ace70((undefined *)((int)param_1 + 0x204));
          *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
          *(undefined1 *)(param_2 + 0x15) = 2;
        }
        else {
          F_0080cd10(param_1,(uint)(*((char *)GEN_TOP((*(int *)((int)param_1 + 0x1a0) + 0x88))) == '\0'));
          F_00557670(param_2,0);
        }
        if (*(char *)((int)param_1 + 0x4f7) != '\x01') {
          *(undefined1 *)((int)param_1 + 0x4f7) = 1;
          F_0055a300(*(undefined * PTR32 *)((int)param_1 + 0x200),1);
          F_008a8b10(param_1,0);
        }
      }
      else {
        bVar4 = F_007ae220(param_1,*(undefined4 *)((int)param_1 + 0x4ac));
        if (bVar4 != 0) {
          uVar5 = F_0055dcb0();
          uVar5 = F_0055b9e0(uVar5);
          bVar4 = F_005615c0(*(undefined4 *)((int)param_1 + 0x1b4),uVar5);
          if (bVar4 != 0) {
            F_005a1660(*(undefined * PTR32 *)((int)param_1 + 0x1b4));
            return 0;
          }
          bVar4 = F_005615c0(*(undefined4 *)((int)param_1 + 0x1b0),uVar5);
          if (bVar4 != 0) {
            F_005a1660(*(undefined * PTR32 *)((int)param_1 + 0x1b0));
            return 0;
          }
        }
      }
    }
    else if (*(char *)((int)param_1 + 0x4fe) != '\0') {
      F_00557670(param_2,0);
      *(undefined1 *)((int)param_1 + 0x4fe) = 0;
      return 0;
    }
  }
  else if (*(short *)(param_3 + 6) != 0) {
    fVar1 = ((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x1094878) *
                    ((float10)((float)GEN_TOF(((float10)(int)*(short *)(param_3 + 6) /
                                     (float10)*(double *)&REFG(undefined, 0x1088118)))) *
                    (float10)*(double *)&REFG(undefined, 0x1094878)) + (float10)*(float *)((int)param_1 + 0x24c))));
    *(float *)((int)param_1 + 0x24c) = fVar1;
    *((float *)GEN_TOP(((int)param_1 + (*(uint *)((int)param_1 + 0x4a4) >> 2 & 1) * 4 + 0x358))) = fVar1;
    F_008915c0(param_1,1);
    F_0084fec0(param_1);
    F_007ae540(param_1);
    F_00557670(param_2,0);
    *(uint *)(param_2 + 0x14) = *(uint *)(param_2 + 0x14) | 0x80000;
    *(undefined1 *)(param_2 + 0x15) = 2;
    if (*(char *)((int)param_1 + 0x4f7) != '\x01') {
      *(undefined1 *)((int)param_1 + 0x4f7) = 1;
      F_0055a300(*(undefined * PTR32 *)((int)param_1 + 0x200),1);
      F_008a8b10(param_1,0);
    }
    *(undefined1 *)((int)param_1 + 0x4fe) = 1;
    return 0;
  }
  return 0;
}

/* ref: FUN_008b4430 */
uint F_008b4430(unsigned int gen_a0)
{
  GEN_ENTER(0x8b4430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  int in_ecx;
  undefined2 uVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar1 = *(float *)((int)this + 0x244);
  (*(float *)(gen_frame + 0x18)) = fVar1;
  bVar4 = GEN_ISNAN((float10)*(float *)((int)this + 0x488)) || GEN_ISNAN((float10)fVar1);
  if (bVar4 != (bVar4 || (float10)*(float *)((int)this + 0x488) == (float10)fVar1)) {
    fVar6 = (float10)*(float *)((int)this + 0x248);
    fVar7 = (float10)*(float *)((int)this + 0x48c);
    bVar4 = GEN_ISNAN(fVar7) || GEN_ISNAN(fVar6);
    bVar5 = bVar4 || fVar7 == fVar6;
    if ((bVar4 != bVar5) && (*(char *)((int)this + 0x4fd) == '\0')) {
      return CONCAT22((short)((uint)in_EAX >> 0x10),
                      CONCAT11(bVar5 << 6 | bVar4 << 2 | 2U | !(fVar6 <= fVar7),(char)in_EAX));
    }
  }
  *(undefined4 *)((int)this + 0x48c) = *(undefined4 *)((int)this + 0x248);
  in_ecx = *(int *)((int)this + 0x200);
  *(float *)((int)this + 0x488) = fVar1;
  *(undefined1 *)((int)this + 0x4fd) = 0;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  if (in_ecx != 0) {
    (*(float *)(gen_frame + 0x18)) = *(float *)(in_ecx + 0x30);
    fVar7 = F_0055a750(in_ecx);
    fVar6 = (float10)(*(float *)(gen_frame + 0x18));
    (*(float *)(gen_frame + 0x18)) = *(float *)(in_ecx + 0x34);
    uVar2 = (undefined2)(int)(fVar7 + fVar6);
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 0)) = uVar2;
    (*(undefined4 *)(gen_frame + 0x0)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 2)),uVar2);
    fVar6 = F_0055a760(in_ecx);
    uVar2 = (undefined2)(int)(fVar6 + (float10)(*(float *)(gen_frame + 0x18)));
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 2)) = uVar2;
    (*(undefined4 *)(gen_frame + 0x0)) = CONCAT22(uVar2,(undefined2)(*(undefined4 *)(gen_frame + 0x0)));
  }
  uVar3 = F_008a87e0(this,(uint)&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar3;
}

/* ref: FUN_008b4500 */
uint F_008b4500(unsigned int gen_a0)
{
  GEN_ENTER(0x8b4500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d790c));
  *(undefined4 *)((int)this + 0x38c8) = 0;
  uVar3 = F_004296a0(0xc,0,400);
  uVar1 = REFG(float, 0x1087f04);
  *(uint *)((int)this + 0x38c4) = uVar3;
  *(uint *)uVar3 = uVar3;
  *((int *)GEN_TOP((*(int *)((int)this + 0x38c4) + 4))) = *(int *)((int)this + 0x38c4);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x880;
  bVar2 = *(byte *)((int)this + 0xf9) | 0x84;
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar2) & 0x77 ^ bVar2 | 8;
  *(undefined4 *)((int)this + 0x38d0) = uVar1;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc6;
  F_0055e2a0(this,4,1);
  F_0055e2a0(this,0x20000000,0);
  return (uint)this;
}

/* ref: Client::UI2::AddonPopUpText::vf38 */
uint F_008b45c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x8b45c0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  int iVar2;
  int * piVar3;
  undefined4 * puVar4;
  int iVar5;
  int * piVar6;
  int * piVar7;
  uint uVar8;
  int * piVar9;
  float10 fVar10;
  ulonglong uVar11;
  
  piVar7 = (int *)F_005a2370(param_1,param_2);
  if (param_1[0xe32] != 0) {
    uVar8 = F_0055dcb0();
    piVar7 = (int *)F_0055b990(uVar8);
    if ((piVar7 != (int *)0x0) && (iVar2 = piVar7[0x20], iVar2 != 0)) {
      piVar3 = (int *)param_1[0xe31];
      piVar7 = piVar3;
      piVar9 = (int *)*piVar3;
      while (piVar6 = piVar9, piVar6 != piVar3) {
        puVar4 = (undefined4 *)piVar6[2];
        iVar5 = *(int *)(iVar2 + 0x20);
        uVar8 = *((uint *)GEN_TOP((iVar5 + 8 + *(short *)(puVar4 + 2) * 0x24)));
        fVar1 = ((float)GEN_TOF(((float10)*((int *)GEN_TOP((iVar5 + 0xc + *(short *)(puVar4 + 2) * 0x24))) *
                       (float10)*(double *)&REFG(undefined, 0x10928e8))));
        F_00559da0(*puVar4,(float)(uVar8 >> 0x10),(float)(uVar8 & 0xffff));
        if ((float10)fVar1 < (float10)REFG(float, 0x1088068)) {
          fVar10 = ((float10)GEN_TOD(gen_bits2f(param_1[0xe34]))) * (float10)REFG(double, 0x1088108);
        }
        else {
          fVar10 = (float10)fVar1 * ((float10)GEN_TOD(gen_bits2f(param_1[0xe34])));
        }
        F_00568210(*puVar4,(float)fVar10,(float)fVar10);
        F_0055a200(*puVar4,(int)TRUNC((double)fVar1 * *(double *)&REFG(undefined, 0x1088100)) & 0xff);
        piVar9 = (int *)F_00559cb0(puVar4[1]);
        piVar7 = (int *)F_00559cd0(puVar4[1]);
        if (((GEN_ISNAN(*(float *)&REFG(undefined, 0x10c20f8)) || GEN_ISNAN(fVar1)) ||
             (*(float *)&REFG(undefined, 0x10c20f8) < fVar1 || *(float *)&REFG(undefined, 0x10c20f8) == fVar1)) &&
           (piVar7 < piVar9)) {
          piVar9 = (int *)*piVar6;
        }
        else {
          F_007aee80(param_1,(int)*(short *)(puVar4 + 2));
          *(byte *)((int)puVar4 + 0xb) = *(byte *)((int)puVar4 + 0xb) & 0xfe;
          *(undefined2 *)(puVar4 + 2) = 0xffff;
          F_0055a300((undefined *)*puVar4,0);
          piVar7 = (int *)F_005840a0((undefined *)puVar4[1],0x41,(int)*(short *)(puVar4 + 2),param_1,0)
          ;
          if ((*(byte *)((int)puVar4 + 0xb) & 2) != 0) {
            piVar7 = (int *)F_0080daf0(param_1,puVar4);
          }
          piVar9 = (int *)*piVar6;
          if (piVar6 != (int *)param_1[0xe31]) {
            *(int * PTR32 *)piVar6[1] = piVar9;
            *(int *)(*piVar6 + 4) = piVar6[1];
            uVar11 = F_00429760(piVar6,0xc,400);
            piVar7 = (int *)uVar11;
            param_1[0xe32] = param_1[0xe32] + -1;
          }
        }
      }
      if (param_1[0xe32] == 0) {
        piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1,0,0)));
      }
    }
  }
  return (uint)piVar7;
}

/* ref: Client::UI2::AddonPopUpText::vf46 */
byte F_008b47a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8b47a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0;
  }
  uVar6 = F_0055dcb0();
  uVar6 = F_0055b990(uVar6);
  uVar7 = F_0055dcb0();
  uVar7 = F_0055b9a0(uVar7);
  if ((uVar6 != 0) && (uVar7 != 0)) {
    (*(int *)(gen_frame + 0x14)) = *(int *)(uVar6 + 0x80);
    (*(int *)(gen_frame + 0x10)) = *(int *)(uVar7 + 0x74);
    if ((*(int *)(uVar6 + 0x80) != 0) && (*(int *)(uVar7 + 0x74) != 0)) {
      (*(int *)(gen_frame + 0x18)) = 0;
      if (0 < param_1) {
        do {
          iVar8 = (*(int *)(gen_frame + 0x18));
          if ((*(int *)(gen_frame + 0x18)) != 0) {
            if ((0x4b < *(uint *)(this + 0x38c8)) &&
               (piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x38c4))), piVar1 != *(int * PTR32 *)(this + 0x38c4))) {
              F_00850950(this,piVar1[2]);
              F_0095bc60(this + 0x38c4,((undefined1 *)(gen_frame + 0x0)),piVar1);
            }
            if ((*(byte *)(param_2 + (*(int *)(gen_frame + 0x18)) * 8) & 0xf) == 0) {
              iVar8 = 0;
            }
            else {
              iVar8 = *(int *)(param_2 + 4 + (*(int *)(gen_frame + 0x18)) * 8);
            }
            iVar2 = *(int *)((*(int *)(gen_frame + 0x14)) + 0x20);
            uVar6 = *(uint *)(iVar2 + 8 + iVar8 * 0x24);
            (*(uint *)(gen_frame + 0x4)) = uVar6;
            uVar3 = *(undefined4 *)(iVar2 + 0x10 + iVar8 * 0x24);
            (*(undefined4 *)(gen_frame + 0x8)) = uVar3;
            uVar4 = *(undefined4 *)(iVar2 + 0x14 + iVar8 * 0x24);
            (*(undefined4 *)(gen_frame + 0xc)) = uVar4;
            uVar6 = F_00850660(this,*(uint *)(iVar2 + iVar8 * 0x24),uVar6,uVar3,uVar4,
                                 *(undefined4 *)(iVar2 + 0x1c + iVar8 * 0x24),
                                 *(undefined4 *)(iVar2 + 0x20 + iVar8 * 0x24),
                                 *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x10)) + 0x20) + iVar8 * 4))));
            (*(uint *)(gen_frame + 0x4)) = uVar6;
            if (uVar6 == 0) {
              F_007aee80(this,iVar8);
              iVar8 = (*(int *)(gen_frame + 0x18));
            }
            else {
              bVar5 = F_005b8a10(this);
              if ((bVar5 != 0) && ((char)this[0x10e] < '\x01')) {
                ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,0);
              }
              F_007aeef0(this,uVar6);
              *(short *)(uVar6 + 8) = (short)iVar8;
              F_0095bc00(this + 0x38c4,&(*(uint *)(gen_frame + 0x4)));
              iVar8 = (*(int *)(gen_frame + 0x18));
            }
          }
          (*(int *)(gen_frame + 0x18)) = iVar8 + 1;
        } while (iVar8 + 1 < param_1);
      }
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_008b4930 */
uint F_008b4930(unsigned int gen_a0)
{
  GEN_ENTER(0x8b4930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  uint * puVar4;
  int local_8;
  
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d7a0c));
  puVar4 = (uint *)((int)this + 0x1194);
  local_8 = 9;
  do {
    puVar4[1] = 0;
    uVar3 = F_004296a0(0xc,0,400);
    *puVar4 = uVar3;
    *(uint *)uVar3 = uVar3;
    uVar3 = *puVar4;
    puVar4 = puVar4 + 8;
    local_8 = local_8 + -1;
    *(uint *)(uVar3 + 4) = uVar3;
  } while (-1 < local_8);
  *(undefined4 *)((int)this + 0x12e4) = 0;
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x12e0) = 0;
  *(undefined4 *)((int)this + 0x12e8) = 0;
  *(undefined4 *)((int)this + 0x12ec) = 0;
  *(undefined4 *)((int)this + 0x12f0) = 0;
  *(undefined4 *)((int)this + 0x12f4) = uVar1;
  *(undefined1 *)((int)this + 0x12f8) = 0;
  *(undefined4 *)((int)this + 0x1300) = 0;
  uVar3 = F_004296a0(0xc,0,400);
  *(uint *)((int)this + 0x12fc) = uVar3;
  *(uint *)uVar3 = uVar3;
  *((int *)GEN_TOP((*(int *)((int)this + 0x12fc) + 4))) = *(int *)((int)this + 0x12fc);
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x880;
  bVar2 = *(byte *)((int)this + 0xf9) | 0x84;
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar2) & 0x77 ^ bVar2 | 8;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc6;
  F_0055e2a0(this,4,1);
  F_0055e2a0(this,0x20000000,0);
  return (uint)this;
}

/* ref: Client::UI2::AddonFlyText::vf47 */
uint F_008b4a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8b4a50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * pAVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0x78);
  uVar2 = param_1;
  if ((iVar1 != 0) && (uVar2 = param_2, *(int *)(param_2 + 0x6c) != 0)) {
    uVar5 = 0;
    uVar4 = 0x2c;
    pAVar3 = this + 0x1198;
    do {
      if ((*(int *)pAVar3 != 0) &&
         (uVar2 = *((uint *)GEN_TOP((uVar4 + *(int *)(iVar1 + 0x20)))), uVar5 != uVar2)) {
        uVar2 = F_008a9150(this,uVar5,uVar2);
      }
      uVar4 = uVar4 + 4;
      uVar5 = uVar5 + 1;
      pAVar3 = pAVar3 + 0x20;
    } while (uVar4 < 0x54);
  }
  return uVar2;
}

/* ref: FUN_008b4ac0 */
uint F_008b4ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8b4ac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  int * piVar7;
  int * piVar8;
  float * pfVar9;
  int * piVar10;
  undefined4 * puVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)((*(uint *)&gen_args[2]) * 0x20 + 0x1194 + (*(int *)&gen_args[0]));
  piVar10 = *(int * PTR32 *)((*(int *)&gen_args[0]) + 0x12fc);
  piVar8 = (int *)*piVar10;
  *piVar10 = (int)piVar10;
  *((int *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x12fc) + 4))) = *(int *)((*(int *)&gen_args[0]) + 0x12fc);
  *(undefined4 *)((*(int *)&gen_args[0]) + 0x1300) = 0;
  if (piVar8 != *(int * PTR32 *)((*(int *)&gen_args[0]) + 0x12fc)) {
    do {
      piVar10 = (int *)*piVar8;
      F_00429760(piVar8,0xc,400);
      piVar8 = piVar10;
    } while (piVar10 != (int *)*(int *)((*(int *)&gen_args[0]) + 0x12fc));
  }
  (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)*(*(int * PTR32 *)(gen_frame + 0x18));
  piVar10 = (int *)*(*(int * PTR32 *)(gen_frame + 0x14));
  puVar2 = (undefined4 *)0x0;
  while ((*(int * PTR32 *)(gen_frame + 0x14)) != piVar10) {
    puVar11 = *(undefined4 * PTR32 *)((*(int * PTR32 *)(gen_frame + 0x14))[1] + 8);
    fVar12 = F_00559d60(*puVar11);
    (*(uint *)&gen_args[2]) = (uint)gen_fl2bits((float)(fVar12 + ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)(gen_frame + 0x18))[6])))));
    F_00559e70(*puVar11,GEN_TOF(gen_bits2f((*(uint *)&gen_args[2]))));
    fVar12 = F_00559d80(*puVar11);
    (*(uint *)&gen_args[2]) = (uint)gen_fl2bits((float)(fVar12 + ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)(gen_frame + 0x18))[7])))));
    F_00559f00(*puVar11,GEN_TOF(gen_bits2f((*(uint *)&gen_args[2]))));
    fVar12 = F_00559d80(*puVar11);
    (*(uint *)&gen_args[2]) = (uint)gen_fl2bits((float)(fVar12 + ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3]))))));
    F_00559f00(*puVar11,GEN_TOF(gen_bits2f((*(uint *)&gen_args[2]))));
    if (puVar2 != (undefined4 *)0x0) {
      if (gen_bits2f((*(uint *)&gen_args[3])) < 0.0) {
        uVar5 = F_0055a030(*puVar11);
        (*(uint *)&gen_args[2]) = uVar5 - 0xb;
        fVar12 = F_00559d80(*puVar2);
        fVar13 = F_00559d80(*puVar11);
        (*(uint *)&gen_args[2]) = (uint)gen_fl2bits(((float)GEN_TOF(((float10)(int)(uVar5 - 0xb) -
                                           ((float10)(double)fVar12 - fVar13)))));
        if ((float10)0 < ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2]))))) {
          (*(uint *)&gen_args[3]) = (uint)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) -
                                             ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2]))))));
          fVar12 = F_00559d80(*puVar11);
          (*(uint *)&gen_args[2]) = (uint)gen_fl2bits((float)(fVar12 - ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2]))))));
          F_00559f00(*puVar11,GEN_TOF(gen_bits2f((*(uint *)&gen_args[2]))));
        }
      }
      else {
        uVar5 = F_0055a030(*puVar11);
        (*(uint *)&gen_args[2]) = uVar5 - 0xb;
        fVar12 = F_00559d80(*puVar11);
        fVar13 = F_00559d80(*puVar2);
        (*(uint *)&gen_args[2]) = (uint)gen_fl2bits(((float)GEN_TOF(((float10)(int)(uVar5 - 0xb) -
                                           ((float10)(double)fVar12 - fVar13)))));
        if ((float10)0 < ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2]))))) {
          (*(uint *)&gen_args[3]) = (uint)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) +
                                             ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3]))))));
          fVar12 = F_00559d80(*puVar11);
          (*(uint *)&gen_args[2]) = (uint)gen_fl2bits((float)(fVar12 + ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2]))))));
          F_00559f00(*puVar11,GEN_TOF(gen_bits2f((*(uint *)&gen_args[2]))));
        }
      }
    }
    fVar12 = F_00559d80(*puVar11);
    (*(uint *)&gen_args[2]) = (uint)gen_fl2bits((float)(fVar12 - ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)(gen_frame + 0x18))[5])))));
    if (!GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[3]))) && !(0.0 <= gen_bits2f((*(uint *)&gen_args[3])))) {
      (*(uint *)&gen_args[2]) = (uint)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) * (float10)REFG(double, 0x1094890)));
    }
    iVar3 = *(int *)((*(int *)&gen_args[0]) + 0x12d4 + (*(int *)&gen_args[1]) * 4);
    fVar12 = (float10)iVar3;
    if (iVar3 < 0) {
      fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar13 = ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2]))));
    if (fVar12 <= fVar13) {
      iVar3 = *(int *)((*(int *)&gen_args[0]) + 0x12fc);
      (*(uint *)&gen_args[2]) = *(uint *)(iVar3 + 4);
      piVar8 = (int *)F_004296a0(0xc,0,400);
      piVar8[1] = (*(uint *)&gen_args[2]);
      *piVar8 = iVar3;
      if (piVar8 + 2 != (int *)0x0) {
        piVar8[2] = (int)puVar11;
      }
      if (*(int *)((*(int *)&gen_args[0]) + 0x1300) == -2) {
                    
        F_00c4579a("list<T> too long");
      }
      *(int *)((*(int *)&gen_args[0]) + 0x1300) = *(int *)((*(int *)&gen_args[0]) + 0x1300) + 1;
      *(int * PTR32 *)(iVar3 + 4) = piVar8;
      *(int * PTR32 *)piVar8[1] = piVar8;
      puVar11 = (undefined4 *)0x0;
    }
    else {
      (*(uint *)&gen_args[2]) = iVar3 - *(int *)((*(int *)&gen_args[0]) + 0x12f0);
      fVar12 = (float10)(int)(*(uint *)&gen_args[2]);
      if ((int)(*(uint *)&gen_args[2]) < 0) {
        fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      if (fVar12 <= fVar13) {
        iVar4 = *(int *)((*(int *)&gen_args[0]) + 0x12f0);
        fVar12 = (float10)(iVar3 - iVar4);
        if (iVar3 - iVar4 < 0) {
          fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        fVar14 = (float10)iVar4;
        if (iVar4 < 0) {
          fVar14 = fVar14 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1087f04);
        (*(float *)(gen_frame + 0xc)) = 0.0;
        pfVar9 = (float *)&(*(uint *)&gen_args[2]);
        fVar1 = ((float)GEN_TOF(((float10)1 - (fVar13 - fVar12) / fVar14)));
        (*(uint *)&gen_args[2]) = (uint)gen_fl2bits(fVar1);
        if (!((float10)fVar1 < (float10)1)) {
          pfVar9 = &(*(float *)(gen_frame + 0x10));
        }
        if (!(0.0 < *pfVar9)) {
          pfVar9 = &(*(float *)(gen_frame + 0xc));
        }
        (*(uint *)&gen_args[2]) = CONCAT22(((undefined2)0x27f),(short)(uint)gen_fl2bits(*pfVar9));
        uVar6 = (int)TRUNC((double)*pfVar9 * *(double *)&REFG(undefined, 0x1088100)) & 0xff;
      }
      else {
        uVar6 = 0xff;
      }
      F_0055a200(*puVar11,uVar6);
    }
    (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)(*(int * PTR32 *)(gen_frame + 0x14))[1];
    puVar2 = puVar11;
  }
  (*(uint *)&gen_args[3]) = *(int *)((*(int *)&gen_args[0]) + 0x12fc);
  piVar10 = *(int * PTR32 *)(*(uint *)&gen_args[3]);
  if (piVar10 != (int *)(*(uint *)&gen_args[3])) {
    do {
      puVar2 = (undefined4 *)piVar10[2];
      if (puVar2 != (undefined4 *)0x0) {
        *(ushort *)(puVar2 + 1) = *(ushort *)(puVar2 + 1) & 0xfffe;
        F_0055a300((undefined *)*puVar2,0);
        if ((*(byte *)(puVar2 + 1) & 2) != 0) {
          uVar6 = F_00568410((undefined *)*puVar2);
          F_00590210((undefined *)((*(int *)&gen_args[0]) + 0x24),uVar6,(uint)*(ushort *)((int)puVar2 + 6));
          *(ushort *)(puVar2 + 1) = *(ushort *)(puVar2 + 1) & 0xfffd;
          *puVar2 = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          puVar2[4] = 0;
          puVar2[5] = 0;
          puVar2[6] = 0;
          puVar2[7] = 0;
          puVar2[8] = 0;
        }
      }
      piVar8 = (int *)*(*(int * PTR32 *)(gen_frame + 0x18));
      piVar7 = (int *)*piVar8;
      if (piVar7 != piVar8) {
        do {
          if ((undefined4 *)piVar7[2] == puVar2) break;
          piVar7 = (int *)*piVar7;
        } while (piVar7 != piVar8);
        if (piVar7 != piVar8) {
          *(int *)piVar7[1] = *piVar7;
          *(int *)(*piVar7 + 4) = piVar7[1];
          F_00429760(piVar7,0xc,400);
          (*(int * PTR32 *)(gen_frame + 0x18))[1] = (*(int * PTR32 *)(gen_frame + 0x18))[1] + -1;
        }
      }
      piVar10 = (int *)*piVar10;
    } while (piVar10 != (int *)(*(uint *)&gen_args[3]));
  }
  return (*(int * PTR32 *)(gen_frame + 0x18))[1];
}

/* ref: FUN_008b4eb0 */
uint F_008b4eb0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x8b4eb0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int * local_c;
  
  uVar3 = F_0055dcb0();
  uVar3 = F_0055b990(uVar3);
  uVar4 = F_0055dcb0();
  uVar4 = F_0055b9a0(uVar4);
  if ((((uVar3 != 0) && (uVar4 != 0)) && (*(int *)(uVar3 + 0x78) != 0)) &&
     (*(int *)(uVar4 + 0x6c) != 0)) {
    iVar2 = *((int *)GEN_TOP((*(int *)(uVar3 + 0x78) + 0x20)));
    iVar6 = (int)*(uint *)(iVar2 + 0xc) >> 0x10;
    uVar3 = *(uint *)(iVar2 + 0xc) & 0xffff;
    fVar1 = gen_bits2f(param_1[0x479]);
    param_1[0x479] = (int)gen_fl2bits((float)iVar6);
    param_1[0x47b] = (int)gen_fl2bits((float)((float10)iVar6 - (float10)fVar1));
    fVar1 = gen_bits2f(param_1[0x47a]);
    param_1[0x47a] = (int)gen_fl2bits((float)uVar3);
    param_1[0x47c] = (int)gen_fl2bits((float)((float10)uVar3 - (float10)fVar1));
    iVar6 = (int)*(uint *)(iVar2 + 0x10) >> 0x10;
    uVar3 = *(uint *)(iVar2 + 0x10) & 0xffff;
    param_1[0x483] = (int)gen_fl2bits((float)((float10)iVar6 - ((float10)GEN_TOD(gen_bits2f(param_1[0x481])))))
    ;
    param_1[0x484] = (int)gen_fl2bits((float)((float10)uVar3 - ((float10)GEN_TOD(gen_bits2f(param_1[0x482])))))
    ;
    param_1[0x481] = (int)gen_fl2bits((float)iVar6);
    param_1[0x482] = (int)gen_fl2bits((float)uVar3);
    iVar6 = (int)*(uint *)(iVar2 + 0x14) >> 0x10;
    uVar3 = *(uint *)(iVar2 + 0x14) & 0xffff;
    param_1[0x48b] = (int)gen_fl2bits((float)((float10)iVar6 - ((float10)GEN_TOD(gen_bits2f(param_1[0x489])))))
    ;
    param_1[0x48c] = (int)gen_fl2bits((float)((float10)uVar3 - ((float10)GEN_TOD(gen_bits2f(param_1[0x48a])))))
    ;
    param_1[0x489] = (int)gen_fl2bits((float)iVar6);
    param_1[0x48a] = (int)gen_fl2bits((float)uVar3);
    iVar6 = (int)*(uint *)(iVar2 + 0x18) >> 0x10;
    uVar3 = *(uint *)(iVar2 + 0x18) & 0xffff;
    param_1[0x493] = (int)gen_fl2bits((float)((float10)iVar6 - ((float10)GEN_TOD(gen_bits2f(param_1[0x491])))))
    ;
    param_1[0x494] = (int)gen_fl2bits((float)((float10)uVar3 - ((float10)GEN_TOD(gen_bits2f(param_1[0x492])))))
    ;
    param_1[0x491] = (int)gen_fl2bits((float)iVar6);
    param_1[0x492] = (int)gen_fl2bits((float)uVar3);
    iVar6 = (int)*(uint *)(iVar2 + 0x1c) >> 0x10;
    uVar4 = *(uint *)(iVar2 + 0x1c) & 0xffff;
    uVar3 = 0;
    param_1[0x49b] = (int)gen_fl2bits((float)((float10)iVar6 - ((float10)GEN_TOD(gen_bits2f(param_1[0x499])))))
    ;
    param_1[0x49c] = (int)gen_fl2bits((float)((float10)uVar4 - ((float10)GEN_TOD(gen_bits2f(param_1[0x49a])))))
    ;
    param_1[0x499] = (int)gen_fl2bits((float)iVar6);
    param_1[0x49a] = (int)gen_fl2bits((float)uVar4);
    iVar6 = (int)*(uint *)(iVar2 + 0x20) >> 0x10;
    uVar4 = *(uint *)(iVar2 + 0x20) & 0xffff;
    param_1[0x4a3] = (int)gen_fl2bits((float)((float10)iVar6 - ((float10)GEN_TOD(gen_bits2f(param_1[0x4a1])))))
    ;
    param_1[0x4a4] = (int)gen_fl2bits((float)((float10)uVar4 - ((float10)GEN_TOD(gen_bits2f(param_1[0x4a2])))))
    ;
    param_1[0x4a1] = (int)gen_fl2bits((float)iVar6);
    param_1[0x4a2] = (int)gen_fl2bits((float)uVar4);
    iVar6 = (int)*(uint *)(iVar2 + 0x24) >> 0x10;
    uVar4 = *(uint *)(iVar2 + 0x24) & 0xffff;
    param_1[0x4ab] = (int)gen_fl2bits((float)((float10)iVar6 - ((float10)GEN_TOD(gen_bits2f(param_1[0x4a9])))))
    ;
    param_1[0x4ac] = (int)gen_fl2bits((float)((float10)uVar4 - ((float10)GEN_TOD(gen_bits2f(param_1[0x4aa])))))
    ;
    param_1[0x4a9] = (int)gen_fl2bits((float)iVar6);
    param_1[0x4aa] = (int)gen_fl2bits((float)uVar4);
    iVar6 = (int)*(uint *)(iVar2 + 0x28) >> 0x10;
    uVar4 = *(uint *)(iVar2 + 0x28) & 0xffff;
    param_1[0x4b3] = (int)gen_fl2bits((float)((float10)iVar6 - ((float10)GEN_TOD(gen_bits2f(param_1[0x4b1])))))
    ;
    param_1[0x4b4] = (int)gen_fl2bits((float)((float10)uVar4 - ((float10)GEN_TOD(gen_bits2f(param_1[0x4b2])))))
    ;
    param_1[0x4b1] = (int)gen_fl2bits((float)iVar6);
    param_1[0x4b2] = (int)gen_fl2bits((float)uVar4);
    fVar1 = (float)(((float10)GEN_TOD(gen_bits2f(param_1[0x4b9]))) * (float10)param_2);
    if ((float10)0 < (float10)fVar1) {
      if (param_1[0x466] != 0) {
        uVar3 = F_008b4ac0(param_1,0,0,(uint)gen_fl2bits(fVar1));
      }
      if (param_1[0x46e] != 0) {
        uVar4 = F_008b4ac0(param_1,1,1,(uint)gen_fl2bits(fVar1));
        uVar3 = uVar3 + uVar4;
      }
      local_c = param_1 + 0x476;
      uVar4 = 2;
      do {
        if (*local_c != 0) {
          uVar5 = F_008b4ac0(param_1,2,uVar4,(unsigned int)gen_fl2bits((float)((uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0))));
          uVar3 = uVar3 + uVar5;
        }
        local_c = local_c + 8;
        uVar4 = uVar4 + 1;
      } while (uVar4 < 10);
      uVar4 = (uint)param_1[0x3d] >> 0x14 & 0xf;
      if (uVar3 == 0) {
        if ((uVar4 != 5) && (uVar4 != 4)) {
          uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1,0,0);
          return uVar3;
        }
      }
      else if (((uVar4 == 5) || (uVar4 == 4)) && (*(char *)((int)param_1 + 0x10e) < '\x01')) {
        uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1,0);
        return uVar3;
      }
    }
  }
  return uVar4;
}

/* ref: FUN_008b52a0 */
unsigned int F_008b52a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x8b52a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  int param_7 = (int)gen_a6;
  int param_8 = (int)gen_a7;
  uint param_9 = (uint)gen_a8;
  int param_10 = (int)gen_a9;
  int * piVar1;
  float fVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int * piVar7;
  undefined4 * puVar8;
  int iVar9;
  float10 fVar10;
  float10 fVar11;
  uint local_c;
  
  if (param_2 < 10) {
    piVar1 = (int *)(param_2 * 0x20 + 0x1194 + (int)param_1);
    local_c = 0;
    if (param_3 != 0) {
      param_8 = param_8 * 4;
      iVar9 = param_5 * 4 + 8;
      do {
        if (*((int *)GEN_TOP((iVar9 + -8 + *(int *)(param_4 + 0x20)))) == 0) {
          return 0;
        }
        if ((((uint)*(ushort *)(piVar1 + 3) <= (uint)piVar1[1]) &&
            (piVar7 = *(int * PTR32 *)*piVar1, piVar7 != (int *)*piVar1)) &&
           (F_0080e000(param_1,piVar7[2]), piVar7 != (int *)*piVar1)) {
          *(int *)piVar7[1] = *piVar7;
          *(int *)(*piVar7 + 4) = piVar7[1];
          F_00429760(piVar7,0xc,400);
          piVar1[1] = piVar1[1] + -1;
        }
        iVar4 = *(int *)(param_4 + 0x20);
        fVar10 = (float10)*(int *)(iVar4 + 0x18 + iVar9);
        if (*(int *)(iVar4 + 0x18 + iVar9) < 0) {
          fVar10 = fVar10 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        puVar8 = ((undefined4 *)GEN_TOP((param_8 + *(int *)(param_7 + 0x20))));
        puVar8 = (undefined4 *)
                 F_0080dde0(param_1,*(uint *)(iVar4 + -4 + iVar9),*(undefined4 *)(iVar4 + iVar9),
                              *(undefined4 *)(iVar4 + 4 + iVar9),puVar8[1],
                              *(undefined4 *)(iVar4 + 0xc + iVar9),
                              *(undefined4 *)(iVar4 + 0x10 + iVar9),*puVar8,
                              ((float)GEN_TOF((((fVar10 * (float10)*(float *)((int)param_1 + 0x12e4)) *
                                      (float10)REFG(double, 0x1091858)) * (float10)param_10))));
        if (puVar8 != (undefined4 *)0x0) {
          fVar10 = F_00559d60(*puVar8);
          fVar2 = gen_bits2f(piVar1[4]);
          fVar11 = F_0055a750(*puVar8);
          F_00559e70(*puVar8,((float)GEN_TOF(((float10)(double)(fVar10 + (float10)fVar2) - fVar11))));
          fVar10 = F_00559d80(*puVar8);
          fVar2 = gen_bits2f(piVar1[5]);
          fVar11 = F_0055a760(*puVar8);
          F_00559f00(*puVar8,((float)GEN_TOF(((float10)(double)(fVar10 + (float10)fVar2) - fVar11))));
          F_00559c60((undefined *)puVar8[2],1);
          uVar3 = *(ushort *)((int)piVar1 + 0xe);
          uVar6 = F_0055a2a0(*puVar8);
          if ((ushort)uVar6 != uVar3) {
            *(undefined1 *)((int)param_1 + 0x12f8) = 1;
            F_0055a2b0(*puVar8,(uint)uVar3);
          }
          iVar4 = *piVar1;
          iVar5 = *(int *)(iVar4 + 4);
          piVar7 = (int *)F_004296a0(0xc,0,400);
          *piVar7 = iVar4;
          piVar7[1] = iVar5;
          if (piVar7 + 2 != (int *)0x0) {
            piVar7[2] = (int)puVar8;
          }
          if (piVar1[1] == -2) {
                    
            F_00c4579a("list<T> too long");
          }
          piVar1[1] = piVar1[1] + 1;
          *(int * PTR32 *)(iVar4 + 4) = piVar7;
          *(int * PTR32 *)piVar7[1] = piVar7;
        }
        iVar9 = iVar9 + param_6 * 4;
        param_8 = param_8 + param_9 * 4;
        local_c = local_c + 1;
      } while (local_c < param_3);
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonNeedGreed::vf46 */
byte F_008b54f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8b54f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 in_esi = (undefined4)gen_a1;
  undefined4 in_edi = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  if ((*(byte *)(in_ecx + 0xf9) & 1) != 0) {
    F_008a93b0(in_ecx,in_esi,in_edi,param_4,param_5);
  }
  return 1;
}

/* ref: Client::UI2::AddonNeedGreed::vf2 */
uint F_008b5510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8b5510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = param_1 & 0xffff;
  if (uVar1 == 0xc) {
    uVar1 = F_008a96c0(this,param_2,param_3,param_4);
  }
  else if (uVar1 == 0x17) {
    uVar1 = param_2;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case 1: ;
    case 2: ;
    case 3: ;
      uVar1 = F_007b1830(this,param_2,param_3,param_4);
      return uVar1;
    case 4: ;
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 100))(this);
      return uVar1;
    case 5: ;
      uVar1 = F_008923c0(this,param_2,param_3,param_4);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_008b5590 */
byte F_008b5590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8b5590u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  ((uint *)(gen_frame + 0x4))[5] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (*(int *)((int)this + 0x20c) != param_1) {
    *(int *)((int)this + 0x20c) = param_1;
    ((uint *)(gen_frame + 0x4))[0] = 0x65;
    ((uint *)(gen_frame + 0x4))[1] = 0x66;
    ((uint *)(gen_frame + 0x4))[2] = 0x67;
    ((uint *)(gen_frame + 0x4))[3] = 0x68;
    ((uint *)(gen_frame + 0x4))[4] = 0x69;
    F_0059d640(*(undefined * PTR32 *)((int)this + 0x1b8),((uint *)(gen_frame + 0x4))[(int)(param_1)]);
    F_00588e00((undefined *)((int)this + 0x180),1);
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
      uVar1 = F_00955fc0((undefined *)((int)this + 0x180),"AddonConfigCharacterOperation",param_2,
                           param_3,1,0,0);
      *(uint *)((int)this + 0x1e4) = uVar1;
      break;
    case 1: ;
      uVar1 = F_00956040((undefined *)((int)this + 0x180),"AddonConfigCharacterHud",param_2,param_3,1,0
                           ,0);
      *(uint *)((int)this + 0x1e8) = uVar1;
      break;
    case 2: ;
      uVar1 = F_009560c0((undefined *)((int)this + 0x180),"AddonConfigCharacterNamePlate",param_2,
                           param_3,1,0,0);
      *(uint *)((int)this + 0x1ec) = uVar1;
      break;
    case 3: ;
      uVar1 = F_00956140((undefined *)((int)this + 0x180),"AddonConfigCharacterHotBar",param_2,param_3,
                           1,0,0);
      *(uint *)((int)this + 0x1f0) = uVar1;
      break;
    case 4: ;
      uVar1 = F_0095cbf0((undefined *)((int)this + 0x180),"AddonConfigCharacterChatLog",param_2,param_3
                           ,1,0,0);
      *(uint *)((int)this + 500) = uVar1;
    }
    if (*(char *)((int)this + 0x214) == '\0') {
      ((code *)*(gen_code32 *)(*(int *)this + 0x8c))(this);
    }
    *(undefined1 *)((int)this + 0x215) = 0;
    F_007bae00(this);
    F_00c47745(((uint *)(gen_frame + 0x4))[5] ^ (uint)(uint)(gen_frame + 0x1c));
    return 1;
  }
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: Client::UI2::AddonCharaMake::vf46 */
byte F_008b5720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8b5720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_2;
  if ((*(byte *)(param_2 + 0xe48) & 0xf) == 0) {
    param_2 = 0;
  }
  else {
    param_2 = *(uint *)(param_2 + 0xe4c);
  }
  if ((param_2 & 0x10) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0xb8))))(*(int * PTR32 *)(this + 0x180),param_1,iVar2);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x188) + 0xb8))))(*(int * PTR32 *)(this + 0x188),param_1,iVar2);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0xb8))))(*(int * PTR32 *)(this + 0x18c),param_1,iVar2);
  }
  if (((param_2 & 0x20) != 0) && (*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x180))) != (undefined *)0x0)) {
    F_00896ac0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x18c) + 0x180))),1,0xffffffff,0,"");
  }
  if ((param_2 & 0x40) != 0) {
    uVar3 = F_0055dcb0();
    F_00560650((undefined *)(uVar3 + 0x1e4));
  }
  if ((char)param_2 < '\0') {
    uVar3 = F_0055dcb0();
    F_00560680((undefined *)(uVar3 + 0x1e4));
  }
  if ((param_2 & 0x100) != 0) {
    F_007c55c0(*(undefined * PTR32 *)(this + 0x180),0);
  }
  if ((param_2 & 0x200) != 0) {
    F_007c55c0(*(undefined * PTR32 *)(this + 0x180),1);
  }
  if (((param_2 & 1) != 0) && (*((int *)GEN_TOP((*(int *)(this + 0x1b4) + 0x184))) != 0)) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1b4) + 0x184)));
    ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0);
  }
  if (((param_2 & 2) != 0) && (*((int *)GEN_TOP((*(int *)(this + 0x1b4) + 0x184))) != 0)) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1b4) + 0x184)));
    ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,1);
  }
  if ((param_2 & 4) != 0) {
    F_007c43c0(*(undefined * PTR32 *)(this + 0x1a8),0);
  }
  if ((param_2 & 8) != 0) {
    F_007c43c0(*(undefined * PTR32 *)(this + 0x1a8),1);
  }
  return 1;
}

/* ref: Client::UI2::AddonCharaMakeClassSelector::vf2 */
uint F_008b5880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8b5880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int * PTR32 * ppiVar5;
  undefined4 uVar6;
  
  piVar1 = (int *)(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c));
  (*(int * PTR32 *)(gen_frame + 0x28)) = piVar1;
  this_00 = *(undefined * PTR32 *)(this + 0x180);
  if ((((this_00 != (undefined *)0x0) && (*(int *)(this + 0x1a4) != 0)) &&
      (piVar1 = ((int *)GEN_TOP((*(uint *)(this + 0xf4) >> 0x14 & 0xf))), piVar1 != (int *)&REFG(undefined, 0x5))) &&
     (piVar1 != (int *)&REFG(undefined, 0x4))) {
    uVar2 = param_1 & 0xffff;
    piVar1 = (int *)(uVar2 - 0xc);
    if (piVar1 < (int *)0x1e) {
      piVar1 = (int *)(uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x8b5c50) + uVar2)));
      switch((unsigned int)(uintptr_t)(uVar2)) {
      case 0xc: ;
        if (param_2 < (int *)0x9) {
          if (((char)param_4[1] == '\0') && ((*param_4 == 2 || (*param_4 == 3)))) {
            F_00896ac0(this_00,2,*(undefined4 *)(this + 0x194),0,"");
            F_007c52e0(*(undefined * PTR32 *)(this + 0x180),5,*(undefined4 *)(this + 0x194));
            uVar2 = F_007c46f0(*(undefined4 *)(this + 0x194));
            F_007c3690(*(undefined * PTR32 *)(this + 0x1a4),uVar2);
          }
          uVar2 = F_008a99b0(*(undefined * PTR32 *)(this + 0x180),param_3,param_4,0xffffffff);
          F_00c47745((uint)(*(int * PTR32 *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
          return uVar2;
        }
        piVar1 = (int *)F_00557620(param_4);
        if ((char)piVar1 != '\0') {
          piVar1 = *(int * PTR32 *)(this + 0x188);
          ((code *)*(gen_code32 *)(*piVar1 + 0x74))(piVar1,piVar1[0x30],0);
          iVar4 = *((int *)GEN_TOP((*(int *)(this + 0x188) + 0xc0)));
          if (0 < iVar4) {
            uVar6 = 0;
            uVar2 = F_0056dc60(*(int *)(this + 0x188),iVar4);
            uVar2 = F_0057c6c0(*(undefined * PTR32 *)(this + 0x188),uVar2);
            F_005928f0(*(undefined * PTR32 *)(this + 0x188),uVar2,uVar6);
          }
          F_0059b390(this,*(undefined4 *)(this + 0x188),1,0);
          F_00557670(param_3,0);
          uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x34))))(*(int * PTR32 *)(this + 400));
          F_00c47745((uint)(*(int * PTR32 *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
          return uVar2;
        }
        break;
      case 0xf: ;
        piVar1 = (int *)F_0081c250(this_00,param_3,param_4);
        break;
      case 0x17: ;
        if (param_2 == (int *)0x9) {
          uVar2 = F_00896ac0(this_00,1,*(undefined4 *)(this + 0x194),0,"");
          F_00c47745((uint)(*(int * PTR32 *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
          return uVar2;
        }
        piVar1 = param_2;
        if (param_2 == (int *)&REFG(undefined, 0xa)) {
          uVar2 = F_00896ac0(this_00,0xffffffff,0,0,"");
          F_00c47745((uint)(*(int * PTR32 *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
          return uVar2;
        }
        break;
      case 0x1f: ;
        piVar1 = (int *)param_4[1];
        iVar4 = *(int *)(*piVar1 + 4);
        if (-1 < iVar4) {
          (*(undefined4 *)(gen_frame + 0x0)) = 3;
          (*(undefined4 *)(gen_frame + 0x8)) = 3;
          (*(undefined4 *)(gen_frame + 0x10)) = 3;
          (*(undefined4 *)(gen_frame + 0x20)) = 3;
          (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this_00 + 0x380);
          (*(int *)(gen_frame + 0xc)) = iVar4;
          (*(undefined4 *)(gen_frame + 0x14)) = 0;
          (*(undefined4 *)(gen_frame + 0x18)) = 6;
          (*(char * PTR32 *)(gen_frame + 0x1c)) = "";
          (*(undefined4 *)(gen_frame + 0x24)) = 2;
          F_005a9110(this_00,5,&(*(undefined4 *)(gen_frame + 0x0)));
          ppiVar5 = &(*(int * PTR32 *)(gen_frame + 0x28));
          iVar3 = 4;
          do {
            ppiVar5 = ppiVar5 + -2;
            F_005a2670(ppiVar5);
            iVar3 = iVar3 + -1;
          } while (-1 < iVar3);
          F_007c52e0(*(undefined * PTR32 *)(this + 0x180),5,iVar4);
          goto LAB_008b5ab8;
        }
        break;
      case 0x20: ;
        (*(int *)(gen_frame + 0xc)) = *(int *)(this + 0x194);
        (*(undefined4 *)(gen_frame + 0x0)) = 3;
        (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this_00 + 0x380);
        (*(undefined4 *)(gen_frame + 0x8)) = 3;
        (*(undefined4 *)(gen_frame + 0x10)) = 3;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(undefined4 *)(gen_frame + 0x18)) = 6;
        (*(char * PTR32 *)(gen_frame + 0x1c)) = "";
        (*(undefined4 *)(gen_frame + 0x20)) = 3;
        (*(undefined4 *)(gen_frame + 0x24)) = 2;
        F_005a9110(this_00,5,&(*(undefined4 *)(gen_frame + 0x0)));
        ppiVar5 = &(*(int * PTR32 *)(gen_frame + 0x28));
        iVar4 = 4;
        do {
          ppiVar5 = ppiVar5 + -2;
          F_005a2670(ppiVar5);
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
        F_007c52e0(*(undefined * PTR32 *)(this + 0x180),5,*(undefined4 *)(this + 0x194));
        iVar4 = *(int *)(this + 0x194);
LAB_008b5ab8: ;
        uVar2 = F_007c46f0(iVar4);
        uVar2 = F_007c3690(*(undefined * PTR32 *)(this + 0x1a4),uVar2);
        F_00c47745((uint)(*(int * PTR32 *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
        return uVar2;
      case 0x21: ;
        piVar1 = *(int * PTR32 *)(*(int *)param_4[1] + 4);
        if (-1 < (int)piVar1) {
          *(int * PTR32 *)(this + 0x194) = piVar1;
          piVar1 = (int *)F_00896ac0(this_00,0,piVar1,0,"");
          if (((*(byte *)((int)param_4 + 0x11) & 8) != 0) &&
             (piVar1 = (int *)0x0, *(int *)(this + 0x18c) != 0)) {
            F_0059b390(this,*(int *)(this + 0x18c),1,0);
            uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x34))))(*(int * PTR32 *)(this + 0x18c));
            F_00c47745((uint)(*(int * PTR32 *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
            return uVar2;
          }
        }
        break;
      case 0x29: ;
        if ((*(byte *)(param_4[1] + 0x2a) & 1) != 0) {
          uVar2 = F_007c4730(this,(uint)(param_4[2] != 0));
          F_00c47745((uint)(*(int * PTR32 *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
          return uVar2;
        }
      }
    }
  }
  F_00c47745((uint)(*(int * PTR32 *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return (uint)piVar1;
}

/* ref: Client::UI2::AddonCharaMakeWorldServer::vf2 */
unsigned int F_008b5c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8b5c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char * pcVar5;
  
  this_00 = *(undefined * PTR32 *)(this + 0x180);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  uVar2 = *(uint *)(this + 0xf4) >> 0x14 & 0xf;
  if (uVar2 == 5) {
    return 0;
  }
  if (uVar2 == 4) {
    return 0;
  }
  switch((unsigned int)(uintptr_t)((undefined2)param_1)) {
  case 0xc: ;
    if (((param_2 != *((ushort *)GEN_TOP((*(int *)(this + 0x1a4) + 100)))) &&
        (param_2 != *((ushort *)GEN_TOP((*(int *)(this + 0x1a8) + 100))))) &&
       (param_2 != *((ushort *)GEN_TOP((*(int *)(this + 0x1ac) + 100))))) {
      F_008a99b0(this_00,param_3,param_4,0xffffffff);
      return 0;
    }
    uVar2 = F_00557620(param_4);
    if ((char)uVar2 != '\0') {
      piVar1 = *(int * PTR32 *)(this + 0x1b0);
      ((code *)*(gen_code32 *)(*piVar1 + 0x74))(piVar1,piVar1[0x30],0);
      F_0059b390(this,*(undefined4 *)(this + 0x1b0),1,0);
      F_00557670(param_3,0);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a8) + 0x34))))(*(int * PTR32 *)(this + 0x1a8));
      return 0;
    }
    break;
  case 0xf: ;
    F_0081c250(this_00,param_3,param_4);
    break;
  case 0x17: ;
    if (param_2 == *((ushort *)GEN_TOP((*(int *)(this + 0x1a4) + 100)))) {
      pcVar5 = "";
      uVar3 = 0;
      uVar2 = F_007c4a70(*(undefined4 *)(this + 400),
                           *((undefined4 *)GEN_TOP((*(int *)(this + 0x1b0) + 0xc0))));
      F_00896ac0(this_00,1,uVar2,uVar3,pcVar5);
      return 0;
    }
    if (param_2 == *((ushort *)GEN_TOP((*(int *)(this + 0x1a8) + 100)))) {
      F_00896ac0(this_00,0xffffffff,0,0,"");
      return 0;
    }
    if (param_2 == *((ushort *)GEN_TOP((*(int *)(this + 0x1ac) + 100)))) {
      F_007c4b00(this);
      return 0;
    }
    if (param_2 == *((ushort *)GEN_TOP((*(int *)(this + 0x1b4) + 100)))) {
      F_00860be0(this,0);
      return 0;
    }
    if (param_2 == *((ushort *)GEN_TOP((*(int *)(this + 0x1b8) + 100)))) {
      F_00860be0(this,1);
      return 0;
    }
    break;
  case 0x1f: ;
    uVar3 = *(undefined4 *)(param_4 + 8);
    uVar4 = *(undefined4 *)(this + 400);
    goto LAB_008b5e19;
  case 0x20: ;
    uVar3 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x1b0) + 0xc0)));
    uVar4 = *(undefined4 *)(this + 400);
LAB_008b5e19: ;
    uVar2 = F_007c4a70(uVar4,uVar3);
    F_007c52e0(this_00,6,uVar2);
    return 0;
  case 0x21: ;
    uVar2 = F_007c4a70(*(undefined4 *)(this + 400),*(undefined4 *)(param_4 + 8));
    F_00896ac0(this_00,0,uVar2,0,"");
    *(uint *)(this + 0x218) = uVar2;
    if (((*(byte *)(param_4 + 0x11) & 8) != 0) && (*(int *)(this + 0x1a4) != 0)) {
      F_0059b390(this,*(int *)(this + 0x1a4),1,0);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a4) + 0x34))))(*(int * PTR32 *)(this + 0x1a4));
      return 0;
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonCharaMakeGuardian::vf2 */
unsigned int F_008b5f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8b5f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined * this_00;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  this_00 = *(undefined * PTR32 *)(this + 0x180);
  if (((this_00 != (undefined *)0x0) && (uVar1 = *(uint *)(this + 0xf4) >> 0x14 & 0xf, uVar1 != 5)) &&
     (uVar1 != 4)) {
    switch((unsigned int)(uintptr_t)((undefined2)param_1)) {
    case 6: ;
      F_007c52e0(this_00,4,param_2 + -2);
      return 0;
    case 7: ;
      F_007c52e0(this_00,4,*(undefined4 *)(this + 0x188));
      return 0;
    case 0xc: ;
      if ((param_2 != -2) && (param_2 != -1)) {
        F_008a99b0(this_00,param_3,param_4,0xffffffff);
        return 0;
      }
      uVar1 = F_00557620(param_4);
      if ((char)uVar1 != '\0') {
        uVar3 = 0;
        uVar2 = 1;
        uVar1 = F_00860fd0(this);
        F_0059b390(this,uVar1,uVar2,uVar3);
        F_00557670(param_3,0);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0x34))))(*(int * PTR32 *)(this + 400));
        return 0;
      }
      break;
    case 0xf: ;
      F_0081c250(this_00,param_3,param_4);
      break;
    case 0x17: ;
      if (param_2 == 0) {
        F_00896ac0(this_00,1,*(undefined4 *)(this + 0x188),0,"");
        return 0;
      }
      if (param_2 == 1) {
        F_00896ac0(this_00,0xffffffff,0,0,"");
        return 0;
      }
      *(int *)(this + 0x188) = param_2 + -2;
      F_00896ac0(this_00,0,param_2 + -2,0,"");
      if ((*(byte *)(param_4 + 7) & 8) != 0) {
        F_0059b390(this,*(undefined4 *)(this + 0x18c),1,0);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0x34))))(*(int * PTR32 *)(this + 0x18c));
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_008b60b0 */
uint F_008b60b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8b60b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  uVar1 = F_0055e2f0(param_1,3);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 4)) {
    uVar1 = 0;
  }
  *(uint *)this = uVar1;
  uVar1 = F_0055e2f0(param_1,4);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 4)) {
    uVar1 = 0;
  }
  *(uint *)((int)this + 4) = uVar1;
  uVar1 = F_0055e2f0(param_1,5);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 4)) {
    uVar1 = 0;
  }
  *(uint *)((int)this + 8) = uVar1;
  uVar1 = F_0055e2f0(param_1,6);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 4)) {
    uVar1 = 0;
  }
  *(uint *)((int)this + 0xc) = uVar1;
  uVar1 = F_0055e2f0(param_1,0xc);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 9)) {
    uVar1 = 0;
  }
  *(uint *)((int)this + 0x10) = uVar1;
  uVar1 = F_0055e2f0(param_1,0x12);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 9)) {
    uVar1 = 0;
  }
  *(uint *)((int)this + 0x14) = uVar1;
  uVar1 = F_0055e2f0(param_1,0x18);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 9)) {
    uVar1 = 0;
  }
  *(uint *)((int)this + 0x18) = uVar1;
  uVar1 = F_0055e2f0(param_1,0x1f);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 7)) {
    uVar1 = 0;
  }
  *(uint *)((int)this + 0x50) = uVar1;
  uVar1 = F_0055e2f0(param_1,0x20);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 1)) {
    uVar1 = 0;
  }
  *(uint *)((int)this + 0x4c) = uVar1;
  uVar1 = F_0055e2f0(param_1,0x22);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 10)) {
    uVar1 = 0;
  }
  *(uint *)((int)this + 0x54) = uVar1;
  uVar1 = F_0055e2f0(param_1,0x23);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 9)) {
    uVar1 = 0;
  }
  *(uint *)((int)this + 0x58) = uVar1;
  uVar1 = F_0055e2f0(param_1,0x27);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00559c20(uVar1);
    if ((uVar1 == 0) || (uVar2 = F_005613a0(uVar1), uVar2 != 1)) {
      uVar1 = 0;
    }
  }
  *(uint *)((int)this + 0x7c) = uVar1;
  uVar1 = F_0055e2f0(param_1,0x2a);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00559c20(uVar1);
    if ((uVar1 == 0) || (uVar2 = F_005613a0(uVar1), uVar2 != 1)) {
      uVar1 = 0;
    }
  }
  *(uint *)((int)this + 0x80) = uVar1;
  uVar1 = F_0055e2f0(param_1,0x2d);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00559c20(uVar1);
    if ((uVar1 == 0) || (uVar2 = F_005613a0(uVar1), uVar2 != 1)) {
      uVar1 = 0;
    }
  }
  *(uint *)((int)this + 0x84) = uVar1;
  uVar1 = F_0055e2f0(param_1,0x30);
  if (uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00559c20(uVar1);
    if ((uVar1 == 0) || (uVar2 = F_005613a0(uVar1), uVar2 != 1)) {
      uVar1 = 0;
    }
  }
  *(uint *)((int)this + 0x88) = uVar1;
  uVar1 = F_0055e2f0(param_1,0x33);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 9)) {
    uVar1 = 0;
  }
  *(uint *)((int)this + 0x8c) = uVar1;
  pvVar3 = (undefined *)F_0055e340(param_1,0x28);
  F_00584580(pvVar3,1);
  pvVar3 = (undefined *)F_0055e340(param_1,0x2b);
  F_00584580(pvVar3,1);
  pvVar3 = (undefined *)F_0055e340(param_1,0x2e);
  F_00584580(pvVar3,1);
  pvVar3 = (undefined *)F_0055e340(param_1,0x31);
  F_00584580(pvVar3,1);
  return (uint)this;
}

/* ref: FUN_008b6480 */
uint F_008b6480(unsigned int gen_a0)
{
  GEN_ENTER(0x8b6480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d7f94));
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) & 0xbf;
  *(undefined1 *)((int)this + 0x198) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: FUN_008b64d0 */
uint F_008b64d0(unsigned int gen_a0)
{
  GEN_ENTER(0x8b64d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d7f94));
  iVar1 = *(int *)((int)this + 0x188);
  if (iVar1 != *(int *)((int)this + 0x18c)) {
    F_00c46e20(iVar1,*(int *)((int)this + 0x18c),0);
    *(int *)((int)this + 0x18c) = iVar1;
  }
  iVar1 = *(int *)((int)this + 0x188);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 400) - iVar1 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  uVar2 = F_00590600(this);
  return uVar2;
}

/* ref: FUN_008b6560 */
uint F_008b6560(unsigned int gen_a0)
{
  GEN_ENTER(0x8b6560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d8094));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1cc) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  F_0042b630((int)this + 0x1dc);
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 8;
  return (uint)this;
}

/* ref: FUN_008b6600 */
uint F_008b6600(unsigned int gen_a0)
{
  GEN_ENTER(0x8b6600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d8094));
  F_0042c880((undefined *)((int)this + 0x1dc));
  iVar1 = *(int *)((int)this + 400);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x198) - iVar1 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  iVar1 = *(int *)((int)this + 0x180);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x188) - iVar1 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  uVar2 = F_00590600(this);
  return uVar2;
}

/* ref: FUN_008b66a0 */
uint F_008b66a0(unsigned int gen_a0)
{
  GEN_ENTER(0x8b66a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d8194));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
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
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) & 0xdf;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) & 0xbf;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined2 *)((int)this + 0x1c4) = 0;
  *(undefined2 *)((int)this + 0x136) = 0x17;
  return (uint)this;
}

/* ref: FUN_008b6740 */
uint F_008b6740(unsigned int gen_a0)
{
  GEN_ENTER(0x8b6740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d8194));
  iVar1 = *(int *)((int)this + 0x180);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x188) - iVar1 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  uVar2 = F_00590600(this);
  return uVar2;
}

/* ref: Client::UI2::AddonSupportSubView::vf37 */
uint F_008b67a0(unsigned int gen_a0)
{
  GEN_ENTER(0x8b67a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x19c) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x19c) + 0x70))),0x17,0,this,0);
  }
  if (*(int *)(this + 0x1a0) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a0) + 0x70))),0x17,1,this,0);
  }
  if (*(int *)(this + 0x1a4) != 0) {
    F_005840a0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1a4) + 0x70))),0x17,2,this,0);
  }
  iVar1 = *(int *)(this + 0x180);
  if (iVar1 != *(int *)(this + 0x184)) {
    F_00c46e20(iVar1,*(int *)(this + 0x184),0);
    *(int *)(this + 0x184) = iVar1;
  }
  uVar2 = F_005b0510((undefined *)this);
  return uVar2;
}

/* ref: FUN_008b6830 */
uint F_008b6830(unsigned int gen_a0)
{
  GEN_ENTER(0x8b6830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10d82c0));
  puVar1 = (undefined4 *)((int)this + 4);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,400);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_008b6880 */
uint F_008b6880(unsigned int gen_a0)
{
  GEN_ENTER(0x8b6880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_004878c0((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  return uVar1;
}

/* ref: Client::UI2::RaptureAtkModule::vf53 */
unsigned int F_008b6dd0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x8b6dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined * pvVar1;
  int iVar2;
  undefined4 * puVar3;
  
  F_00762790((undefined *)((int)in_ecx + 0x23330));
  F_0075ddd0(in_ecx,(undefined4)gen_fl2bits(param_3));
  if (*(char *)((int)in_ecx + 0x23190) != '\0') {
    *(int *)((int)in_ecx + 0x23194) = *(int *)((int)in_ecx + 0x23194) + 1;
    puVar3 = (undefined4 *)((int)in_ecx + 0x23198);
    iVar2 = 0x65;
    do {
      ((code *)*(gen_code32 *)(*(int *)*puVar3 + 0x14))((int *)*puVar3,*(undefined4 *)((int)in_ecx + 0x23194));
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(undefined1 *)((int)in_ecx + 0x23191) = 0;
  }
  if (*(char *)((int)in_ecx + 0x2db65) != '\0') {
    *(int *)((int)in_ecx + 0x2db60) = *(int *)((int)in_ecx + 0x2db60) + 1;
    F_008aaa60(in_ecx,in_edi,param_3);
  }
  F_00820930(in_ecx,param_3);
  if ((*(byte *)((int)in_ecx + 0x230bf) & 0x10) != 0) {
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)in_ecx + 0x23184) + 0x30))))
                               (*(int * PTR32 *)((int)in_ecx + 0x23184))));
    F_004597f0(pvVar1);
  }
  pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)in_ecx + 0x23184) + 0x30))))
                             (*(int * PTR32 *)((int)in_ecx + 0x23184))));
  F_00459980(pvVar1);
  *(undefined1 *)((int)in_ecx + 0x230bf) = 0;
  if (*(char *)((int)in_ecx + 0x2db68) != '\0') {
    *(undefined1 *)((int)in_ecx + 0x2db68) = 0;
  }
  return 0;
}

/* ref: FUN_008b6eb0 */
uint F_008b6eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8b6eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_008afbb0(*(undefined * PTR32 *)((int)this + 0x232ac),param_1);
  return uVar1;
}

/* ref: FUN_008b6ec0 */
uint F_008b6ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8b6ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_009661c0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008b6ed0 */
uint F_008b6ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8b6ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte * pbVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined * pvVar5;
  uint uVar6;
  int iVar7;
  undefined4 * puVar8;
  
  pbVar1 = (*(byte * PTR32 *)&gen_args[2]);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(*(byte * PTR32 *)&gen_args[2]) & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *((undefined4 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[2]) + 4)));
  }
  uVar4 = F_00760440(uVar3);
  if ((pbVar1[8] & 0xf) == 0) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(pbVar1 + 0xc);
  }
  if ((pbVar1[0x10] & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(pbVar1 + 0x14);
  }
  (*(byte * PTR32 *)&gen_args[2]) = (byte *)F_00760440(uVar3);
  uVar3 = (*(undefined4 *)(gen_frame + 0x8));
  if ((pbVar1[0x18] & 0xf) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(pbVar1 + 0x1c);
  }
  (*(int *)(gen_frame + 0x0)) = iVar7;
  if (((*(byte * PTR32 *)&gen_args[2]) == (byte *)0x3e8) &&
     (((iVar7 < 0 || (0xd < iVar7)) &&
      (bVar2 = F_007c9670(uVar4,(*(undefined4 *)(gen_frame + 0x8)),&(*(byte * PTR32 *)&gen_args[2]),&(*(int *)(gen_frame + 0x0))), bVar2 == 0)))) goto LAB_008b708e;
  iVar7 = (*(int *)(gen_frame + 0x0));
  if (uVar4 == 0x7d2) {
    pvVar5 = *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x23268);
    uVar3 = (*(undefined4 *)(gen_frame + 0x8));
    if (pvVar5 != (undefined *)0x0) {
      switch((unsigned int)(uintptr_t)((*(undefined4 *)(gen_frame + 0x8)))) {
      case 0: ;
        puVar8 = (undefined4 *)((int)pvVar5 + 200);
        break;
      case 1: ;
        puVar8 = (undefined4 *)((int)pvVar5 + 0xd4);
        break;
      case 2: ;
        puVar8 = (undefined4 *)((int)pvVar5 + 0xe0);
        break;
      case 3: ;
        puVar8 = (undefined4 *)((int)pvVar5 + 0xec);
        break;
      case 4: ;
        puVar8 = (undefined4 *)((int)pvVar5 + 0xf8);
        break;
      default: ;
        puVar8 = (undefined4 *)0x0;
      }
      F_00a3ced0(&REFG(undefined, 0x14a4230),0x7d2,(*(undefined4 *)(gen_frame + 0x8)),1);
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      F_007dfef0(pvVar5,0);
      uVar3 = (*(undefined4 *)(gen_frame + 0x8));
    }
LAB_008b6ffd: ;
    if ((((((19999 < (int)(*(byte * PTR32 *)&gen_args[2])) && ((int)(*(byte * PTR32 *)&gen_args[2]) < 0x4e25)) || ((*(byte * PTR32 *)&gen_args[2]) == (byte *)0x55f1)) ||
         ((19999 < (int)uVar4 && ((int)uVar4 < 0x4e25)))) || (uVar4 == 0x55f1)) &&
       (*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x232ac) != (undefined *)0x0)) {
      F_008b0030(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x232ac),uVar4,uVar3,(*(byte * PTR32 *)&gen_args[2]),iVar7);
      *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
  }
  else {
    if (uVar4 != 0x2ee1) {
      if (uVar4 == 0x2ee2) {
        pvVar5 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),0x2ee2);
        if ((pvVar5 != (undefined *)0x0) &&
           (pvVar5 = (undefined *)F_00a37da0(pvVar5,uVar3), pvVar5 != (undefined *)0x0)) {
          uVar6 = F_0046e5e0(pvVar5);
          bVar2 = F_00a377b0(uVar6);
          if (bVar2 != 0) goto LAB_008b708e;
        }
        pvVar5 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),(*(byte * PTR32 *)&gen_args[2]));
        if ((pvVar5 != (undefined *)0x0) && (uVar6 = F_00a37da0(pvVar5,iVar7), uVar6 != 0)) {
          if (*(char *)(uVar6 + 6) != '\0') goto LAB_008b708e;
          if (*(int *)(uVar6 + 8) != 0) {
            *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
            return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
          }
        }
      }
      goto LAB_008b6ffd;
    }
    if ((*(byte * PTR32 *)&gen_args[2]) != (byte *)0x7d1) goto LAB_008b6ffd;
    if ((*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x23274) != (undefined *)0x0) &&
       (bVar2 = F_00871e00(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x23274),0x2ee1,uVar3,0x7d1,(*(int *)(gen_frame + 0x0))),
       bVar2 != 0)) goto LAB_008b708e;
  }
  F_00a47f70(&REFG(undefined, 0x14a4230),uVar4,uVar3,(*(byte * PTR32 *)&gen_args[2]),iVar7,1);
LAB_008b708e: ;
  *(*(undefined4 * PTR32 *)&gen_args[1]) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_008b7150 */
uint F_008b7150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8b7150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d82dc));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  *(undefined2 *)((int)this + 0x14) = 0;
  F_00768c80(this);
  *(gen_code32 *)((int)this + 0x238) = ((code *)REFP(0x898a30));
  *(gen_code32 *)((int)this + 0x23c) = ((code *)REFP(0x823b20));
  *(gen_code32 *)((int)this + 0x240) = ((code *)REFP(0x7cd110));
  *(gen_code32 *)((int)this + 0x244) = ((code *)REFP(0x7cd150));
  *(undefined4 *)((int)this + 0x248) = 0x349;
  *(undefined4 *)((int)this + 0x24c) = 0x34a;
  *(undefined4 *)((int)this + 0x250) = 0x34b;
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentArmouryBoard::vf1 */
uint F_008b71d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8b71d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  undefined * this_00;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  
  bVar2 = 1;
  if (param_3 < 2) goto switchD_008b71f5_default;
  if ((*param_2 & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_2 + 4);
  }
  switch((unsigned int)(uintptr_t)(uVar4)) {
  case 0: ;
    bVar2 = F_0076ac20(this,param_2);
    break;
  case 1: ;
    bVar2 = F_008ac1b0(this,param_2);
    break;
  case 2: ;
    bVar2 = F_007cea20(this,param_2);
    break;
  case 3: ;
    bVar2 = F_0076ac50(this,param_2);
    break;
  case 5: ;
    bVar2 = F_007ceac0(this,param_2);
    break;
  case 6: ;
    bVar2 = F_007ceb20(this,param_2);
    break;
  case 7: ;
    bVar2 = F_007ceb80(this,param_2);
    break;
  case 8: ;
    bVar2 = F_007cebe0(this,param_2);
    break;
  case 9: ;
    bVar2 = F_008ac290(this,param_2);
    break;
  case 10: ;
    bVar2 = F_007cec40(this,param_2);
    break;
  case 0xb: ;
    bVar2 = F_007ceca0(this,param_2);
    break;
  case 0xc: ;
    bVar2 = F_008241b0(this,param_2);
    break;
  case 0xd: ;
    if (this[0x8e54] != (undefined1)0x0) {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
      this_00 = *(undefined * PTR32 *)(uVar3 + 0x20);
      if (this_00 != (undefined *)0x0) {
        F_0089aef0(this_00,*(undefined4 *)((int)this_00 + 0xc),4);
      }
      this[0x8e54] = (undefined1)0x0;
    }
  case 4: ;
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 2;
    return (uint)param_1;
  case 0xfffffffe: ;
  case 0xffffffff: ;
    F_008ac190(this);
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
    piVar1 = *(int * PTR32 *)(uVar3 + 0x28);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    }
    bVar2 = 1;
  default: ;
    goto switchD_008b71f5_default;
  }
  if (bVar2 != 0) {
switchD_008b71f5_default: ;
    *(undefined4 *)(this + 8) = 0;
  }
  *(byte *)(param_1 + 1) = bVar2;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: Client::UI2::Agent::AgentArmouryBoard::vf3 */
uint F_008b7340(unsigned int gen_a0)
{
  GEN_ENTER(0x8b7340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  piVar1 = *(int * PTR32 *)(uVar2 + 0x28);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x48))))(*(int * PTR32 *)(this + 4));
  if (*(undefined * PTR32 *)(uVar2 + 0x20) != (undefined *)0x0) {
    uVar2 = F_0089aef0(*(undefined * PTR32 *)(uVar2 + 0x20),6,4);
  }
  return uVar2;
}

/* ref: FUN_008b73b0 */
uint F_008b73b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8b73b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  undefined2 * puVar2;
  int iVar3;
  char cVar4;
  int * piVar5;
  int iVar6;
  int * piVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  uint * puVar11;
  undefined4 * puVar12;
  uint uVar13;
  undefined * pvVar14;
  uint uVar15;
  int * piVar16;
  
  iVar6 = (int)param_2;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  if (*(ushort *)((int)this + 0xa0) == 0) {
    return 0;
  }
  (*(int *)(gen_frame + 0x14)) = 0xd;
  (*(int *)(gen_frame + 0x4)) = 0xd;
  uVar15 = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0x10)) = 10;
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (undefined4 *)(uint)*(ushort *)((int)this + 0xa0);
  F_009536a0((undefined *)(param_1 + 4),&(*(int *)(gen_frame + 0x0)),&(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
  if (((*(int *)(gen_frame + 0x0)) != *(int *)(param_1 + 8)) &&
     (piVar16 = ((int *)GEN_TOP(**(int * PTR32 *)((*(int *)(gen_frame + 0x0)) + 0x14))), param_2 = piVar16,
     piVar16 != *(int * PTR32 *)((*(int *)(gen_frame + 0x0)) + 0x14))) {
    do {
      pvVar14 = (*(undefined * PTR32 *)(gen_frame + 0x18));
      uVar9 = F_0076ce50((*(undefined * PTR32 *)(gen_frame + 0x18)));
      if ((short)uVar9 == 0) {
        iVar10 = piVar16[4];
        if (*(ushort *)((int)pvVar14 + 0xa2) < 8) {
          puVar2 = ((undefined2 *)GEN_TOP(((int)pvVar14 + ((uint)*(ushort *)((int)pvVar14 + 0xa2) * 3 + 0x30) * 2)));
          puVar2[1] = (short)piVar16[3];
          *puVar2 = (short)uVar15;
          puVar2[2] = (short)iVar10;
          pvVar14 = (*(undefined * PTR32 *)(gen_frame + 0x18));
        }
        *(undefined2 *)((int)pvVar14 + 0xa4) = 0xffff;
      }
      uVar15 = uVar15 << 8 | 0x12;
      if (*((uint *)GEN_TOP((*(int *)(iVar6 + 0x20) + (*(int *)(gen_frame + 0x14)) * 4))) != uVar15) {
        *((uint *)GEN_TOP((*(int *)(iVar6 + 0x20) + (*(int *)(gen_frame + 0x14)) * 4))) = uVar15;
        *(undefined1 *)(iVar6 + 0x1d) = 1;
      }
      iVar10 = CONCAT22((short)piVar16[3],(short)piVar16[4]);
      if (*((int *)GEN_TOP((*(int *)(iVar6 + 0x20) + 4 + (*(int *)(gen_frame + 0x14)) * 4))) != iVar10) {
        *((int *)GEN_TOP((*(int *)(iVar6 + 0x20) + 4 + (*(int *)(gen_frame + 0x14)) * 4))) = iVar10;
        *(undefined1 *)(iVar6 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(iVar6 + 0x20) + 8 + (*(int *)(gen_frame + 0x14)) * 4))) != 2) {
        *((undefined4 *)GEN_TOP((*(int *)(iVar6 + 0x20) + 8 + (*(int *)(gen_frame + 0x14)) * 4))) = 2;
        *(undefined1 *)(iVar6 + 0x1d) = 1;
      }
      puVar11 = (uint *)F_00ab2750((uint)*(ushort *)(piVar16 + 3));
      if (puVar11 == (uint *)0x0) {
        iVar10 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x90);
      }
      else {
        iVar10 = (*puVar11 & 0xffffff) + (int)puVar11;
      }
      iVar1 = (*(int *)(gen_frame + 0x10)) * 4;
      if (iVar10 != *((int *)GEN_TOP((*(int *)(param_3 + 0x20) + (*(int *)(gen_frame + 0x10)) * 4)))) {
        *(undefined1 *)(param_3 + 0x1d) = 1;
      }
      iVar3 = (*(int *)(gen_frame + 0x14)) + 3;
      (*(int *)(gen_frame + 0x14)) = iVar3;
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
      uVar15 = (*(uint *)(gen_frame + 0x8)) + 1;
      *((int *)GEN_TOP((*(int *)(param_3 + 0x20) + iVar1))) = iVar10;
      (*(uint *)(gen_frame + 0x8)) = uVar15;
      if (0xff < uVar15) {
        if (*((uint *)GEN_TOP((*(int *)(iVar6 + 0x20) + 0x2c))) != uVar15) {
          *((uint *)GEN_TOP((*(int *)(iVar6 + 0x20) + 0x2c))) = uVar15;
          *(undefined1 *)(iVar6 + 0x1d) = 1;
        }
        return 4;
      }
      uVar9 = 0;
      (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (undefined4 *)piVar16[5];
      if ((undefined4 *)piVar16[5] != (undefined4 *)piVar16[6]) {
        iVar10 = iVar3 * 4 + 8;
        do {
          if (*(short *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0xa4) < 0) {
            *(short *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0xa4) = (short)uVar9;
          }
          uVar15 = (*(uint *)(gen_frame + 0x8)) << 8 | 0x20;
          if (*((uint *)GEN_TOP((iVar10 + -8 + *(int *)(iVar6 + 0x20)))) != uVar15) {
            *((uint *)GEN_TOP((iVar10 + -8 + *(int *)(iVar6 + 0x20)))) = uVar15;
            *(undefined1 *)(iVar6 + 0x1d) = 1;
          }
          uVar15 = (uint)*(ushort *)(piVar16 + 3) << 0x10 | uVar9;
          if (*((uint *)GEN_TOP((iVar10 + -4 + *(int *)(iVar6 + 0x20)))) != uVar15) {
            *((uint *)GEN_TOP((iVar10 + -4 + *(int *)(iVar6 + 0x20)))) = uVar15;
            *(undefined1 *)(iVar6 + 0x1d) = 1;
          }
          uVar9 = uVar9 + 1;
          uVar13 = (uint)(*(char *)((*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x21) != '\0');
          uVar15 = uVar13;
          if (*(char *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x85) != '\0') {
            uVar15 = uVar13 | 4;
            bVar8 = F_008aca10(param_1,(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
            if (bVar8 != 0) {
              uVar15 = uVar13 | 6;
            }
          }
          if (*((uint *)GEN_TOP((*(int *)(iVar6 + 0x20) + iVar10))) != uVar15) {
            *((uint *)GEN_TOP((*(int *)(iVar6 + 0x20) + iVar10))) = uVar15;
            *(undefined1 *)(iVar6 + 0x1d) = 1;
          }
          if (*(char *)*(*(undefined4 * PTR32 *)(gen_frame + 0xc)) == '\0') {
            uVar15 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x90);
          }
          else {
            uVar15 = F_0042a990((*(undefined4 * PTR32 *)(gen_frame + 0xc)));
          }
          if (*(char *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x85) == '\0') {
            uVar15 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x90);
          }
          iVar1 = (*(int *)(gen_frame + 0x10)) * 4;
          if (uVar15 != *((uint *)GEN_TOP((*(int *)(param_3 + 0x20) + (*(int *)(gen_frame + 0x10)) * 4)))) {
            *(undefined1 *)(param_3 + 0x1d) = 1;
          }
          (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 1;
          *((uint *)GEN_TOP((*(int *)(param_3 + 0x20) + iVar1))) = uVar15;
          uVar15 = (*(uint *)(gen_frame + 0x8)) + 1;
          (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x14));
          iVar10 = iVar10 + 0xc;
          (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 3;
          (*(uint *)(gen_frame + 0x8)) = uVar15;
          if (0xff < uVar15) {
            if (*((uint *)GEN_TOP((*(int *)(iVar6 + 0x20) + 0x2c))) != uVar15) {
              *((uint *)GEN_TOP((*(int *)(iVar6 + 0x20) + 0x2c))) = uVar15;
              *(undefined1 *)(iVar6 + 0x1d) = 1;
            }
            return 4;
          }
          puVar12 = (*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x22;
          (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar12;
          piVar16 = param_2;
        } while (puVar12 != (undefined4 *)param_2[6]);
      }
      puVar11 = ((uint *)GEN_TOP((*(int *)(iVar6 + 0x20) + (*(int *)(gen_frame + 0x4)) * 4)));
      uVar9 = *puVar11;
      uVar13 = uVar9 | 1;
      if (uVar9 != uVar13) {
        *puVar11 = uVar13;
        *(undefined1 *)(iVar6 + 0x1d) = 1;
      }
      if (*(char *)((int)piVar16 + 0x25) == '\0') {
        piVar5 = (int *)piVar16[2];
        if (*(char *)((int)piVar5 + 0x25) == '\0') {
          cVar4 = *(char *)(*piVar5 + 0x25);
          piVar16 = piVar5;
          piVar5 = (int *)*piVar5;
          while (param_2 = piVar16, cVar4 == '\0') {
            cVar4 = *(char *)(*piVar5 + 0x25);
            piVar16 = piVar5;
            piVar5 = (int *)*piVar5;
          }
        }
        else {
          cVar4 = *(char *)(piVar16[1] + 0x25);
          piVar7 = (int *)piVar16[1];
          piVar5 = piVar16;
          while ((piVar16 = piVar7, param_2 = piVar16, cVar4 == '\0' &&
                 (piVar5 == (int *)piVar16[2]))) {
            cVar4 = *(char *)(piVar16[1] + 0x25);
            piVar7 = (int *)piVar16[1];
            piVar5 = piVar16;
          }
        }
      }
      (*(uint *)(gen_frame + 0x8)) = uVar15;
    } while (piVar16 != *(int * PTR32 *)((*(int *)(gen_frame + 0x0)) + 0x14));
  }
  if (*((uint *)GEN_TOP((*(int *)(iVar6 + 0x20) + 0x2c))) != uVar15) {
    *((uint *)GEN_TOP((*(int *)(iVar6 + 0x20) + 0x2c))) = uVar15;
    *(undefined1 *)(iVar6 + 0x1d) = 1;
  }
  return -(uint)(uVar15 != 0) & 4;
}

/* ref: FUN_008b7730 */
uint F_008b7730(unsigned int gen_a0)
{
  GEN_ENTER(0x8b7730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  ulonglong uVar4;
  undefined4 * puVar5;
  
  puVar1 = (undefined4 *)((int)this + 0xc);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d832c));
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10d8320));
  puVar5 = puVar1;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4));
  F_0043cff0(puVar5);
  F_00954ba0((undefined *)((int)this + 0x24));
  uVar4 = F_00429760(*(undefined4 *)((int)this + 0x24),8,400);
  uVar2 = (uint)uVar4;
  *(undefined4 *)((int)this + 0x24) = 0;
  *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x10909b4));
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    uVar2 = F_00414620(*(undefined * PTR32 *)((int)this + 0x14),puVar1);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar3 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar2;
}

/* ref: FUN_008b77d0 */
uint F_008b77d0(unsigned int gen_a0)
{
  GEN_ENTER(0x8b77d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  int local_8;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 9999;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  puVar4 = (undefined4 *)((int)this + 0x20);
  local_8 = 1;
  do {
    *puVar4 = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042b630(puVar4 + 1);
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    puVar4[0x18] = 0;
    *(undefined2 *)(puVar4 + 0x19) = 0;
    *(undefined1 *)((int)puVar4 + 0x66) = 0;
    puVar4 = puVar4 + 0x1a;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined2 *)((int)this + 0xf4) = 0;
  *(undefined1 *)((int)this + 0xf6) = 0;
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 4) < 100) {
    uVar3 = F_004296a0(0x640,0,400);
    F_009572d0(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar3,(int)this + 0xc);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00429760(iVar1,*(int *)((int)this + 8) - iVar1 & 0xfffffff0,400);
    }
    *(uint *)((int)this + 8) = uVar3 + 0x640;
    *(uint *)((int)this + 4) = (iVar2 - iVar1 & 0xfffffff0U) + uVar3;
    *(uint *)this = uVar3;
  }
  return (uint)this;
}

/* ref: FUN_008b78b0 */
uint F_008b78b0(unsigned int gen_a0)
{
  GEN_ENTER(0x8b78b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar3 = 1;
  puVar2 = (undefined4 *)((int)this + 0xf0);
  do {
    puVar2[-0x1a] = (*(undefined * PTR32 (*)[3])REFP(0x10c3eec));
    F_0042c880(puVar2 + -0x19);
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + -0x1a;
  } while (-1 < iVar3);
  iVar3 = *(int *)this;
  uVar1 = 0;
  if (iVar3 != 0) {
    uVar4 = F_00429760(iVar3,*(int *)((int)this + 8) - iVar3 & 0xfffffff0,400);
    uVar1 = (uint)uVar4;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_008b7900 */
uint F_008b7900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8b7900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d837c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d8370));
  F_008b77d0((undefined *)((int)this + 0x10));
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  F_0042b630((int)this + 0x128);
  F_0042b630((int)this + 0x17c);
  F_0042b630((int)this + 0x1d0);
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  *(undefined4 *)((int)this + 0x234) = 0;
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined1 *)((int)this + 0x23c) = 0;
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentRetainer::vf1 */
uint F_008b79c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x8b79c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  undefined4 in_edi = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int iVar1;
  byte bVar2;
  
  bVar2 = 1;
  switch((unsigned int)(uintptr_t)(param_6)) {
  case 0: ;
    bVar2 = F_008ad040(in_ecx,param_4,param_5);
    *(byte *)(param_3 + 1) = bVar2;
    *param_3 = 2;
    return (uint)param_3;
  case 1: ;
    bVar2 = F_007da9e0(in_ecx,param_4,param_5);
    *(byte *)(param_3 + 1) = bVar2;
    *param_3 = 2;
    return (uint)param_3;
  case 2: ;
    bVar2 = F_0089ba90(in_ecx,param_4,param_5);
    *(byte *)(param_3 + 1) = bVar2;
    *param_3 = 2;
    return (uint)param_3;
  case 3: ;
    bVar2 = F_008ad2f0(in_ecx,param_4,param_5);
    *(byte *)(param_3 + 1) = bVar2;
    *param_3 = 2;
    return (uint)param_3;
  case 4: ;
    iVar1 = *(int *)((int)in_ecx + 0xa9c);
    if ((-1 < iVar1) && (iVar1 < *(int *)((int)in_ecx + 0xaa0))) {
      F_00a41810(&REFG(undefined, 0x14a4230),0x2ee2,(uint)*(ushort *)(iVar1 * 0xc0 + 0xb58 + (int)in_ecx),
                   *(undefined4 *)(iVar1 * 0xc0 + 0xb00 + (int)in_ecx));
    }
    *(undefined4 *)((int)in_ecx + 0xa9c) = 0xffffffff;
    *(undefined1 *)(param_3 + 1) = 1;
    *param_3 = 2;
    return (uint)param_3;
  case 5: ;
    iVar1 = *(int *)((int)in_ecx + 0xa9c);
    if ((-1 < iVar1) && (iVar1 < *(int *)((int)in_ecx + 0xaa0))) {
      F_00a418c0(&REFG(undefined, 0x14a4230),0x2ee2,(uint)*(ushort *)(iVar1 * 0xc0 + 0xb58 + (int)in_ecx),
                   *(undefined4 *)(iVar1 * 0xc0 + 0xb00 + (int)in_ecx));
    }
    *(undefined4 *)((int)in_ecx + 0xa9c) = 0xffffffff;
    *(undefined1 *)(param_3 + 1) = 1;
    *param_3 = 2;
    return (uint)param_3;
  case 6: ;
    bVar2 = F_008ad610(in_ecx,param_4,param_5);
    *(byte *)(param_3 + 1) = bVar2;
    *param_3 = 2;
    return (uint)param_3;
  case 7: ;
    bVar2 = F_008ad650(in_ecx,in_edi,param_4,param_5);
    *(byte *)(param_3 + 1) = bVar2;
    *param_3 = 2;
    return (uint)param_3;
  case 8: ;
    bVar2 = F_007758e0(in_ecx,param_4,param_5);
  }
  *(byte *)(param_3 + 1) = bVar2;
  *param_3 = 2;
  return (uint)param_3;
}

/* ref: FUN_008b8260 */
unsigned int F_008b8260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x8b8260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  undefined * this_00;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint * puVar8;
  undefined * pvVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x20);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,0x1d);
  (*(uint *)(gen_frame + 0x1c)) = uVar3;
  if ((uVar2 != 0) && (uVar3 != 0)) {
    if ((*(uint *)((int)this + 0xc) >> 1 & 1) == 0) {
      *(undefined4 *)((int)this + 0x318) = param_4;
      *(undefined4 *)((int)this + 0x31c) = param_5;
      return 0;
    }
    (*(uint * PTR32 *)(gen_frame + 0x28)) = (uint *)((int)this + 0x50);
    (*(uint *)(gen_frame + 0x2c)) = 0xc;
    do {
      if ((char)(*(uint * PTR32 *)(gen_frame + 0x28))[-4] != '\0') {
        F_0046fe00((undefined *)(param_1 + 0x10),((undefined1 *)(gen_frame + 0x0)),(*(uint * PTR32 *)(gen_frame + 0x28)));
        uVar3 = F_00431490(((undefined1 *)(gen_frame + 0x0)),param_2,param_3);
        puVar4 = ((uint *)GEN_TOP(((*(uint *)(gen_frame + 0x2c)) + -4 + *(int *)(uVar2 + 0x20))));
        if (*puVar4 != uVar3) {
          *puVar4 = uVar3;
          *(undefined1 *)(uVar2 + 0x1d) = 1;
        }
        uVar3 = F_0043e110(param_1,(*(uint * PTR32 *)(gen_frame + 0x28)));
        if (*((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + (*(uint *)(gen_frame + 0x2c))))) != uVar3) {
          *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + (*(uint *)(gen_frame + 0x2c))))) = uVar3;
          *(undefined1 *)(uVar2 + 0x1d) = 1;
        }
      }
      iVar5 = (*(uint *)(gen_frame + 0x2c)) + 0x24;
      (*(uint * PTR32 *)(gen_frame + 0x28)) = (*(uint * PTR32 *)(gen_frame + 0x28)) + 8;
      (*(uint *)(gen_frame + 0x2c)) = iVar5;
    } while (iVar5 < 0x2dc);
    (*(uint *)(gen_frame + 0x20)) = REFG(int, 0x1379694);
    (*(uint *)(gen_frame + 0x2c)) = 0;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x4c))))(*(int * PTR32 *)((int)this + 4));
    (*(uint * PTR32 *)(gen_frame + 0x18)) = (uint *)*(uint *)(uVar3 + 0x729c);
    (*(uint * PTR32 *)(gen_frame + 0x24)) = (uint *)0x0;
    if (0 < (int)*(uint *)(uVar3 + 0x729c)) {
      (*(uint * PTR32 *)(gen_frame + 0x28)) = (uint *)0x71d4;
      do {
        if (0x13 < *(int *)((int)this + 0x310)) break;
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x4c))))(*(int * PTR32 *)((int)this + 4));
        if ((*(uint *)(gen_frame + 0x20)) != **(int * PTR32 *)((int)(*(uint * PTR32 *)(gen_frame + 0x28)) + uVar3)) {
          uVar3 = F_008ae2b0(this,**(int * PTR32 *)((int)(*(uint * PTR32 *)(gen_frame + 0x28)) + uVar3),
                               *(undefined4 *)((int)this + 0x318),*(undefined4 *)((int)this + 0x31c)
                               ,(*(uint *)(gen_frame + 0x2c)),uVar2,(*(uint *)(gen_frame + 0x1c)),param_2,param_3,param_1);
          (*(uint *)(gen_frame + 0x2c)) = uVar3;
        }
        (*(uint * PTR32 *)(gen_frame + 0x28)) = (*(uint * PTR32 *)(gen_frame + 0x28)) + 1;
        iVar5 = (int)(*(uint * PTR32 *)(gen_frame + 0x24)) + 1;
        (*(uint * PTR32 *)(gen_frame + 0x24)) = (uint *)iVar5;
      } while (iVar5 < (int)(*(uint * PTR32 *)(gen_frame + 0x18)));
    }
    if ((((*(uint *)(gen_frame + 0x20)) != 0) && (REFG(int, 0x1375bbc) == 0)) && (*(int *)(param_1 + 0xe0) != 0)) {
      uVar2 = F_008ae2b0(this,(*(uint *)(gen_frame + 0x20)),*(undefined4 *)((int)this + 0x318),
                           *(undefined4 *)((int)this + 0x31c),(*(uint *)(gen_frame + 0x2c)),uVar2,(*(uint *)(gen_frame + 0x1c)),param_2,
                           param_3,param_1);
      (*(uint *)(gen_frame + 0x2c)) = uVar2;
    }
    uVar2 = (*(uint *)(gen_frame + 0x2c));
    if (0 < (int)(*(uint *)(gen_frame + 0x2c))) {
      uVar7 = (*(uint *)(gen_frame + 0x2c)) + 1;
      uVar12 = 0;
      (*(uint *)(gen_frame + 0x20)) = uVar7;
      uVar3 = F_00404270();
      uVar6 = -(uint)((int)((ulonglong)uVar7 * 8 >> 0x20) != 0) | (uint)((ulonglong)uVar7 * 8);
      puVar4 = (uint *)F_00406c00(-(uint)(0xfffffffb < uVar6) | uVar6 + 4,0,uVar3,uVar12);
      if (puVar4 == (uint *)0x0) {
        (*(uint * PTR32 *)(gen_frame + 0x24)) = (uint *)0x0;
      }
      else {
        *puVar4 = uVar7;
        puVar8 = puVar4 + 1;
        for (; -1 < (int)uVar2; uVar2 = uVar2 - 1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 2;
        }
        (*(uint * PTR32 *)(gen_frame + 0x24)) = puVar4 + 1;
      }
      puVar4 = (*(uint * PTR32 *)(gen_frame + 0x24));
      F_005a2710((*(uint * PTR32 *)(gen_frame + 0x24)),3);
      puVar4[1] = 0;
      if (0 < (int)(*(uint *)(gen_frame + 0x2c))) {
        (*(uint * PTR32 *)(gen_frame + 0x28)) = (uint *)((int)this + 0x2c0);
        (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x2c));
        puVar8 = puVar4;
        do {
          (*(uint * PTR32 *)(gen_frame + 0x18)) = (uint *)*(*(uint * PTR32 *)(gen_frame + 0x28));
          F_005a2710(puVar8 + 2,3);
          (*(uint * PTR32 *)(gen_frame + 0x28)) = (*(uint * PTR32 *)(gen_frame + 0x28)) + 1;
          puVar8[3] = (uint)(*(uint * PTR32 *)(gen_frame + 0x18));
          uVar2 = (*(uint *)(gen_frame + 0x1c)) - 1;
          (*(uint *)(gen_frame + 0x1c)) = uVar2;
          puVar4 = (*(uint * PTR32 *)(gen_frame + 0x24));
          puVar8 = puVar8 + 2;
        } while (uVar2 != 0);
      }
      piVar1 = *(int * PTR32 *)((int)this + 4);
      if (*(int *)((int)this + 8) == 0) {
        uVar13 = 4;
        uVar11 = 0;
        uVar10 = 0;
        uVar12 = 0x3d;
        uVar2 = (*(uint *)(gen_frame + 0x20));
        puVar8 = puVar4;
        pvVar9 = this;
        this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
        uVar2 = F_008668b0(this_00,uVar12,uVar2,puVar8,pvVar9,uVar10,uVar11,uVar13);
        *(uint *)((int)this + 8) = uVar2;
      }
      else {
        piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
        ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1,*(undefined4 *)((int)this + 8),(*(uint *)(gen_frame + 0x20)),puVar4);
      }
      puVar8 = puVar4 + puVar4[-1] * 2;
      (*(uint *)(gen_frame + 0x1c)) = puVar4[-1] - 1;
      (*(uint * PTR32 *)(gen_frame + 0x18)) = puVar4 + -1;
      while (-1 < (int)(*(uint *)(gen_frame + 0x1c))) {
        puVar8 = puVar8 + -2;
        F_005a2670(puVar8);
        (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) + -1;
      }
      F_00406b30((*(uint * PTR32 *)(gen_frame + 0x18)));
    }
    *(undefined4 *)((int)this + 0x318) = param_4;
    *(undefined4 *)((int)this + 0x31c) = param_5;
  }
  return 0;
}

/* ref: FUN_008b8590 */
unsigned int F_008b8590(unsigned int gen_a0)
{
  GEN_ENTER(0x8b8590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined1 *)((int)this + 0x3b0) = 5;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined1 *)((int)this + 0x364) = 1;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined1 *)((int)this + 0x36c) = 1;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined1 *)((int)this + 0x374) = 1;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined1 *)((int)this + 0x37c) = 1;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined1 *)((int)this + 900) = 1;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined1 *)((int)this + 0x38c) = 1;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined1 *)((int)this + 0x394) = 1;
  *(undefined4 *)((int)this + 0x398) = 0;
  *(undefined1 *)((int)this + 0x39c) = 1;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined1 *)((int)this + 0x3a4) = 1;
  *(undefined4 *)((int)this + 0x3a8) = 0;
  *(undefined1 *)((int)this + 0x3ac) = 1;
  F_0095c1c0((undefined *)((int)this + 0x324));
  *(undefined1 *)((int)this + 0x33c) = 0;
  *(undefined4 *)((int)this + 0x340) = 0;
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,0x22);
  if ((uVar2 != 0) && (**(int * PTR32 *)(uVar2 + 0x20) != 2)) {
    **(int * PTR32 *)(uVar2 + 0x20) = 2;
    *(undefined1 *)(uVar2 + 0x1d) = 1;
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentItemSearch::vf5 */
unsigned int F_008b87b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8b87b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_007df380(this);
  F_008aec80(this);
  return 0;
}

/* ref: FUN_008b87d0 */
byte F_008b87d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8b87d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  code * pcVar1;
  int * piVar2;
  undefined4 uVar3;
  uint in_ecx;
  uint uVar4;
  
  (*(byte *)(gen_frame + 0xb)) = 0;
  if ((*param_1 & 0xf) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 4);
  }
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
    if ((param_1[8] & 0xf) != 0) {
      F_007e2920(this,0,*(undefined4 *)(param_1 + 0xc));
      return (*(byte *)(gen_frame + 0xb));
    }
    F_007e2920(this,0,0);
    return (*(byte *)(gen_frame + 0xb));
  case 1: ;
    F_007e2920(this,1,0);
    return (*(byte *)(gen_frame + 0xb));
  case 2: ;
    F_008808f0(this);
    return (*(byte *)(gen_frame + 0xb));
  case 3: ;
    if ((param_1[8] & 0xf) != 0) {
      F_00880c90(this,*(undefined4 *)(param_1 + 0xc));
      return (*(byte *)(gen_frame + 0xb));
    }
    F_00880c90(this,0);
    return (*(byte *)(gen_frame + 0xb));
  case 4: ;
    if ((param_1[8] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0xc);
    }
    in_ecx = F_0077f490(this,uVar3);
    if ((in_ecx != 0) && (uVar4 = F_0071d3a0(in_ecx), (char)uVar4 == '\0')) {
      F_008b0180(this,in_ecx);
      return (*(byte *)(gen_frame + 0xb));
    }
    break;
  case 5: ;
    F_008a1400(this);
    return (*(byte *)(gen_frame + 0xb));
  case 6: ;
    F_008a1260(this);
    break;
  case 0xfffffffe: ;
  case 0xffffffff: ;
    pcVar1 = *(gen_code32 *)(*(int *)this + 0xc);
    (*(byte *)(gen_frame + 0xb)) = 1;
    *(undefined4 *)((int)this + 8) = 0;
    (*pcVar1)(this);
    piVar2 = *(int * PTR32 *)((int)this + 0x14);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,((undefined1 *)(gen_frame + 0x0)),param_1,param_2,0);
      F_005a2670(((undefined1 *)(gen_frame + 0x0)));
      *(undefined4 *)((int)this + 0x14) = 0;
      return (*(byte *)(gen_frame + 0xb));
    }
  }
  return (*(byte *)(gen_frame + 0xb));
}

/* ref: FUN_008b8960 */
byte F_008b8960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8b8960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (((*param_1 & 0xf) == 0) || (*(int *)(param_1 + 4) == 0)) {
    uVar1 = F_00a3a150(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x14b0),
                         (int)*(short *)((int)this + 0x14b4));
    F_008b0180(this,uVar1);
  }
  *(undefined4 *)((int)this + 0x14b0) = 9999;
  *(undefined2 *)((int)this + 0x14b4) = 0;
  *(undefined4 *)((int)this + 0x14b8) = 0;
  *(undefined4 *)((int)this + 0x14bc) = 0;
  return 1;
}

/* ref: FUN_008b89c0 */
unsigned int F_008b89c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8b89c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  int * piVar2;
  
  if (param_2 == 0x7d1) {
    if ((*(char *)((int)this + 0x10) != '\x01') && (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0)) {
      bVar1 = F_00441290(*(undefined * PTR32 *)((int)this + 0xc),0x20);
      if (bVar1 != 0) {
        F_007e2920((undefined *)((int)this + -0xc),1,0);
      }
    }
    if (*(char *)((int)this + 0x14e1) == '\0') {
      F_008b0030((undefined *)((int)this + -0xc),0x7d1,param_1,0x55f1,param_1);
      return 0;
    }
  }
  else if ((*(char *)((int)this + 0x10) == '\0') && (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0)) {
    bVar1 = F_00441290(*(undefined * PTR32 *)((int)this + 0xc),
                         (uint)(byte)(&REFG(undefined1, 0x10c0596))[(uint)*(byte *)((int)this + 0x11) * 3]);
    if (bVar1 != 0) {
      piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -8) + 0x1c))))(*(int * PTR32 *)((int)this + -8))));
      ((code *)*(gen_code32 *)(*piVar2 + 0x6c))(piVar2,*(undefined4 *)((int)this + -4));
    }
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyChest::vf2 */
uint F_008b8a60(unsigned int gen_a0)
{
  GEN_ENTER(0x8b8a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_008afbb0(this,0);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyChest::vf5 */
uint F_008b8a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8b8a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 AVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar3 != '\0') {
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,0x37);
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,0x33);
    if ((uVar5 != 0) && (uVar3 != 0)) {
      if (this[0x1c] == (undefined1)0x0) {
        F_007e2600(this,uVar5,uVar3);
      }
      else if (this[0x1c] == (undefined1)0x1) {
        F_0077ed10(this,uVar5,uVar3);
      }
      F_008a11c0(this,uVar5,uVar3);
      uVar3 = *(uint *)(this + 0x14c4);
      switch((unsigned int)(uintptr_t)(uVar3)) {
      case 0: ;
        AVar1 = (undefined1)F_00a37a90(&REFG(undefined, 0x14a4230));
        uVar3 = CONCAT31(extraout_var,AVar1);
        if (this[0x14ec] != AVar1) {
          this[0x14ec] = AVar1;
          uVar3 = F_0077eff0(this);
          return uVar3;
        }
        break;
      case 1: ;
        piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
        uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x68))(piVar4,*(undefined4 *)(this + 8));
        if ((char)uVar3 != '\0') {
          *(undefined4 *)(this + 0x14c4) = 0;
          if (((byte)this[0x14f0] & 0x40) == 0) {
            uVar3 = F_008a14c0(this,0xb89);
            return uVar3;
          }
          if (*(int *)(this + 0x18) != 0) {
            bVar2 = F_00436880(*(int *)(this + 0x18));
            uVar3 = CONCAT31(extraout_var_00,bVar2);
            if (bVar2 != 1) {
              bVar2 = F_00436880(*(undefined4 *)(this + 0x18));
              uVar3 = CONCAT31(extraout_var_01,bVar2);
              if (bVar2 != 2) {
                bVar2 = F_00436880(*(undefined4 *)(this + 0x18));
                uVar3 = CONCAT31(extraout_var_02,bVar2);
                if (bVar2 != 3) {
                  uVar3 = F_008a14c0(this,0xb4d);
                  return uVar3;
                }
              }
            }
          }
        }
        break;
      case 2: ;
        *(undefined4 *)(this + 0x14c4) = 0;
        uVar3 = F_008a1690(this);
        return uVar3;
      case 3: ;
        *(undefined4 *)(this + 0x14c4) = 0;
        uVar3 = F_008a16e0(this);
        return uVar3;
      case 4: ;
        *(undefined4 *)(this + 0x14c4) = 0;
        uVar3 = F_008b0030(this,*(undefined4 *)(this + 0x14c8),(int)*(short *)(this + 0x14cc),
                             *(undefined4 *)(this + 0x14d8),(int)*(short *)(this + 0x14dc));
        return uVar3;
      case 5: ;
        uVar7 = *(undefined4 *)(this + 0x14e8);
        uVar6 = *(undefined4 *)(this + 0x14d4);
        *(undefined4 *)(this + 0x14c4) = 0;
        uVar3 = F_00760f80(this + 0x14d8);
        uVar5 = F_00760f80(this + 0x14c8);
        uVar3 = F_00880510(this,uVar5,uVar3,uVar6,uVar7);
      }
    }
  }
  return uVar3;
}

/* ref: FUN_008b8c70 */
uint F_008b8c70(unsigned int gen_a0)
{
  GEN_ENTER(0x8b8c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x10d83c4));
  F_00955490((undefined *)((int)this + 0xec),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0xf0),
               *(undefined4 * PTR32 *)((int)this + 0xf0));
  F_00429760(*(undefined4 *)((int)this + 0xf0),0x28,400);
  F_00e5bc00((int)this + 200);
  iVar1 = *(int *)((int)this + 0x9c);
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 0xa4) - iVar1) / 0x18) * 0x18,400);
  }
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  uVar3 = F_0042c880((undefined *)((int)this + 0x44));
  uVar2 = (uint)uVar3;
  iVar1 = *(int *)((int)this + 0x18);
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,((*(int *)((int)this + 0x20) - iVar1) / 0x54) * 0x54,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  F_00e3c0c0(this);
  return uVar2;
}

/* ref: FUN_008b8d60 */
uint F_008b8d60(unsigned int gen_a0)
{
  GEN_ENTER(0x8b8d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  F_0042c880((undefined *)((int)this + 0x260));
  iVar2 = *(int *)((int)this + 0x240);
  if (iVar2 != 0) {
    F_00429760(iVar2,(*(int *)((int)this + 0x248) - iVar2 >> 2) * 4,400);
  }
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined4 *)((int)this + 0x248) = 0;
  this_00 = (undefined *)((int)this + 0x238);
  iVar2 = 1;
  do {
    this_00 = (undefined *)((int)this_00 + -0x118);
    uVar1 = F_008b8c70(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return uVar1;
}

/* ref: FUN_008b8de0 */
uint F_008b8de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8b8de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  undefined3 extraout_var = 0;
  uint uVar3;
  int * piVar4;
  int iVar5;
  int * piVar2;
  
  *(undefined2 *)((int)this + 0x250) = 0;
  iVar5 = *(int *)((int)this + 0x240);
  if (iVar5 != *(int *)((int)this + 0x244)) {
    F_00c46e20(iVar5,*(int *)((int)this + 0x244),0);
    *(int *)((int)this + 0x244) = iVar5;
  }
  iVar5 = 0;
  piVar4 = (int *)((int)this + 0x34);
  while( true ) {
    bVar1 = F_008846f0(piVar4 + -0xb,param_2,param_3);
    piVar2 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar1)));
    if (bVar1 != 0) break;
    if ((piVar4[-8] != 0) && (*piVar4 != 0)) {
      for (piVar2 = *(int * PTR32 *)*piVar4; piVar2 != ((int *)GEN_TOP(((undefined4 *)*piVar4)[1]));
          piVar2 = piVar2 + 1) {
        if ((*(int *)(*piVar2 + 8) == param_2) && (*(int *)(*piVar2 + 0xc) == param_3))
        goto LAB_008b8e96;
      }
    }
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 0x46;
    if (1 < iVar5) {
      return (uint)piVar2 & 0xffffff00;
    }
  }
LAB_008b8e96: ;
  uVar3 = F_0082d250((undefined *)(iVar5 * 0x118 + 8 + (int)this),param_4);
  *(uint *)((int)this + 0x238) = ((char)uVar3 != '\0') + 0xc;
  return uVar3;
}

/* ref: FUN_008b8ed0 */
uint F_008b8ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8b8ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int iVar2;
  int * piVar3;
  bool bVar4;
  uint uVar5;
  uint * puVar6;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar5 = param_2;
  if (*(char *)((int)this + 0x68) != '\0') goto LAB_008b908e;
  cVar1 = (char)param_3[1];
  uVar5 = CONCAT31((int3)(param_2 >> 8),cVar1);
  if ((cVar1 != '\0') && (cVar1 != '\x02')) goto LAB_008b908e;
  bVar4 = false;
  if (-1 < *(int *)((int)this + 0xc4)) {
    uVar5 = F_0055a2d0(*(undefined4 *)((int)this + 8));
    if ((char)uVar5 == '\0') {
      F_0059b300(*(undefined * PTR32 *)((int)this + 0x18),*(undefined4 *)((int)this + 0xd0),
                   *(undefined4 *)((int)this + 0xcc),0);
      F_0055ad50(*(undefined * PTR32 *)((int)this + 8),0,0);
      F_008a3b30(this);
      if ((*((byte *)GEN_TOP((*(int *)((int)this + 4) + 0xfb))) & 2) != 0) {
        puVar6 = ((uint *)GEN_TOP((*(int *)((int)this + 4) + 0x120)));
        *puVar6 = *puVar6 & 0xffffffbf;
      }
    }
    else {
      iVar2 = *param_3;
      if (iVar2 == 9) {
        F_008b0ae0(this,0xffffffff);
      }
      else if (iVar2 == 10) {
        F_008b0ae0(this,1);
      }
      else if ((iVar2 == 8) && ((char)param_3[1] != '\x02')) {
        F_007e8160(this,1);
      }
      else if ((iVar2 == 7) && ((char)param_3[1] != '\x02')) {
        F_007e8160(this,0xffffffff);
      }
      else if ((iVar2 == 1) || (iVar2 == 4)) {
        F_007e8450(this);
      }
      else {
        if ((iVar2 != 2) && (iVar2 != 3)) {
          if ((iVar2 == 5) && ((*((byte *)GEN_TOP((*(int *)((int)this + 4) + 0xfb))) & 2) == 0)) {
            F_008a3c80(this,0);
            (*(undefined4 *)(gen_frame + 0x10)) = 0;
            (*(undefined4 *)(gen_frame + 0x18)) = 0;
            (*(undefined4 *)(gen_frame + 0x20)) = 0;
            F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
            (*(undefined4 *)(gen_frame + 0x14)) = 0xc;
            F_005a9170(*(undefined * PTR32 *)((int)this + 4),3,&(*(undefined4 *)(gen_frame + 0x10)));
            bVar4 = true;
            puVar6 = &(*(uint *)(gen_frame + 0x28));
            (*(int *)(gen_frame + 0xc)) = 2;
            do {
              puVar6 = puVar6 + -2;
              F_005a2670(puVar6);
              iVar2 = (*(int *)(gen_frame + 0xc)) + -1;
              (*(int *)(gen_frame + 0xc)) = iVar2;
            } while (-1 < iVar2);
          }
          goto LAB_008b9076;
        }
        F_008a3c80(this,0);
        piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x38)));
        ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3,((undefined1 *)(gen_frame + 0x8)),3);
        F_005a2670(((undefined1 *)(gen_frame + 0x8)));
      }
    }
    bVar4 = true;
  }
LAB_008b9076: ;
  uVar5 = F_0055a350(*(undefined4 *)((int)this + 0xc));
  if (bVar4) {
    uVar5 = F_00557670(param_2,0);
  }
LAB_008b908e: ;
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar5;
}

/* ref: Client::UI2::LogViewer::vf2 */
uint F_008b90a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8b90a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = param_2 & 0xffff;
  if (0x37 < uVar2 - 3) {
    return uVar2 - 3;
  }
  uVar3 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x8b9224) + uVar2 + 1)));
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 3: ;
    if (param_3 == 0x101) {
      *(undefined1 *)((int)param_1 + 0xb4) = 1;
      uVar2 = F_00557670(param_4,0);
      return uVar2;
    }
    uVar3 = param_3;
    if (param_3 == 2) {
      *(undefined1 *)((int)param_1 + 0xbe) = 1;
      *(undefined1 *)((int)param_1 + 0xa1) = 0;
      uVar2 = F_00557670(param_4,0);
      return uVar2;
    }
    break;
  case 4: ;
    if (param_3 == 0x102) {
      *(undefined1 *)((int)param_1 + 0xb4) = 0;
      uVar2 = F_00557670(param_4,0);
      return uVar2;
    }
    if (param_3 != 3) {
      return param_3;
    }
    *(undefined1 *)((int)param_1 + 0xbe) = 0;
    if ((float10)1 <=
        (float10)((float)GEN_TOF(((float10)*((int *)GEN_TOP((*(int *)((int)param_1 + 0x10) + 0xb0))) /
                        (float10)*((int *)GEN_TOP((*(int *)((int)param_1 + 0x10) + 0xa8))))))) {
      *(undefined1 *)((int)param_1 + 0xa1) = 1;
      uVar2 = F_00557670(param_4,0);
      return uVar2;
    }
    goto LAB_008b91f3;
  case 8: ;
    uVar2 = F_0082d7e0(param_1,param_4,param_5);
    return uVar2;
  case 0xc: ;
    if (param_3 == 0) {
      uVar2 = F_008b8ed0(param_1,0,param_4,param_5);
      return uVar2;
    }
    break;
  case 0xf: ;
    if (param_3 != 0) {
      return uVar3;
    }
    bVar1 = F_008a3d40(param_1,param_5);
    if (bVar1 == 0) {
      return CONCAT31(extraout_var,bVar1);
    }
LAB_008b91f3: ;
    uVar3 = F_00557670(param_4,0);
    break;
  case 0x12: ;
    uVar3 = F_0055b9e0(*(undefined4 *)((int)param_1 + 0x18));
    if (uVar3 == 0) {
      uVar2 = F_008a3b30(param_1);
      return uVar2;
    }
    break;
  case 0x19: ;
    F_0082d790(param_1,param_4,param_5);
    uVar2 = F_00557670(param_4,0);
    return uVar2;
  case 0x3a: ;
    uVar2 = F_00784e70(param_1);
    return uVar2;
  }
  return uVar3;
}

/* ref: FUN_008b9280 */
unsigned int F_008b9280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8b9280u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10d8464));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = param_2;
  return 0;
}

/* ref: FUN_008b92b0 */
uint F_008b92b0(unsigned int gen_a0)
{
  GEN_ENTER(0x8b92b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10d8464));
  iVar1 = *(int *)((int)this + 4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,*(int *)((int)this + 0xc) - iVar1 & 0xfffffff0,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar2;
}

/* ref: FUN_008b92f0 */
unsigned int F_008b92f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8b92f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00962eb0((undefined *)((int)this + 4),param_1);
  return 0;
}

/* ref: Client::UI2::AddonScreenInfo::vf36 */
uint F_008b9300(unsigned int gen_a0)
{
  GEN_ENTER(0x8b9300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  undefined * pvVar3;
  
  F_0055dc60((undefined *)this);
  *(undefined4 *)(this + 0x22c) = 0;
  *(undefined4 *)(this + 0x230) = 0;
  *(undefined4 *)(this + 0x234) = 0;
  *(undefined4 *)(this + 0x238) = 0;
  *(undefined4 *)(this + 0x23c) = 0;
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined4 *)(this + 0x244) = 0;
  *(undefined4 *)(this + 0x248) = 0;
  *(undefined4 *)(this + 0x24c) = 0;
  *(undefined4 *)(this + 0x250) = 0;
  *(undefined4 *)(this + 0x254) = 0;
  *(undefined4 *)(this + 600) = 0;
  *(undefined4 *)(this + 0x25c) = 0;
  *(undefined4 *)(this + 0x260) = 0;
  *(undefined4 *)(this + 0x264) = 0;
  *(undefined4 *)(this + 0x268) = 0;
  *(undefined4 *)(this + 0x26c) = 0;
  *(undefined4 *)(this + 0x270) = 0;
  piVar1 = *(int * PTR32 *)(this + 500);
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)(this + 500) + 4))) = *(int *)(this + 500);
  *(undefined4 *)(this + 0x1f8) = 0;
  if (piVar2 != *(int * PTR32 *)(this + 500)) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0xc,400);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)(this + 500));
  }
  piVar1 = *(int * PTR32 *)(this + 0x200);
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)(this + 0x200) + 4))) = *(int *)(this + 0x200);
  *(undefined4 *)(this + 0x204) = 0;
  if (piVar2 != *(int * PTR32 *)(this + 0x200)) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0xc,400);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)(this + 0x200));
  }
  *(undefined4 *)(this + 0x21c) = 0;
  *(undefined4 *)(this + 0x220) = 0;
  *(undefined4 *)(this + 0x224) = 0;
  *(undefined4 *)(this + 0x228) = 0;
  F_0095c260(this + 0x210);
  pvVar3 = F_00c48350(this + 0x180,0,0x48);
  return (uint)pvVar3;
}

/* ref: Client::UI2::AddonScreenInfo::vf37 */
uint F_008b9440(unsigned int gen_a0)
{
  GEN_ENTER(0x8b9440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  undefined * pAVar6;
  
  bVar2 = F_005609d0(this + 0x1c8,0x3a);
  if (bVar2 != 0) {
    F_00588be0(this + 0x1c8,0x3a,0,this);
    F_005609b0(this + 0x1c8);
  }
  piVar1 = *(int * PTR32 *)(this + 500);
  piVar3 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)(this + 500) + 4))) = *(int *)(this + 500);
  *(undefined4 *)(this + 0x1f8) = 0;
  if (piVar3 != *(int * PTR32 *)(this + 500)) {
    do {
      piVar1 = (int *)*piVar3;
      F_00429760(piVar3,0xc,400);
      piVar3 = piVar1;
    } while (piVar1 != (int *)*(int *)(this + 500));
  }
  piVar1 = *(int * PTR32 *)(this + 0x200);
  piVar3 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *((int *)GEN_TOP((*(int *)(this + 0x200) + 4))) = *(int *)(this + 0x200);
  *(undefined4 *)(this + 0x204) = 0;
  if (piVar3 != *(int * PTR32 *)(this + 0x200)) {
    do {
      piVar1 = (int *)*piVar3;
      F_00429760(piVar3,0xc,400);
      piVar3 = piVar1;
    } while (piVar1 != (int *)*(int *)(this + 0x200));
  }
  *(undefined4 *)(this + 0x21c) = 0;
  *(undefined4 *)(this + 0x220) = 0;
  *(undefined4 *)(this + 0x224) = 0;
  *(undefined4 *)(this + 0x228) = 0;
  F_0095c260(this + 0x210);
  pAVar6 = this + 0x22c;
  iVar5 = 0x12;
  do {
    piVar1 = *(int * PTR32 *)pAVar6;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,1,0);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar6 + 0x10))))(*(int * PTR32 *)pAVar6,1);
      *(int *)pAVar6 = 0;
    }
    pAVar6 = pAVar6 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar4 = F_005b0510((undefined *)this);
  return uVar4;
}

/* ref: Client::UI2::AddonScreenInfo::vf38 */
unsigned int F_008b9560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8b9560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  undefined * pAVar5;
  
  if (this[0x274] == (undefined1)0x0) {
    this[0x274] = (undefined1)0x1;
    uVar4 = 0;
    pAVar5 = this + 0x22c;
    do {
      if ((*(int *)pAVar5 != 0) && ((*(byte *)(*(int *)pAVar5 + 0xf9) & 1) == 0)) {
        this[0x274] = (undefined1)0x0;
        break;
      }
      uVar4 = uVar4 + 1;
      pAVar5 = pAVar5 + 4;
    } while (uVar4 < 0x12);
    if (this[0x274] == (undefined1)0x0) {
      return 0;
    }
  }
  if (*(int *)(this + 0x204) != 0) {
    piVar1 = *(int * PTR32 *)(this + 0x200);
    piVar2 = (int *)*piVar1;
    while (piVar3 = piVar2, piVar3 != piVar1) {
      piVar2 = (int *)piVar3[2];
      ((code *)*(gen_code32 *)(*piVar2 + 0xf8))(piVar2);
      uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x104))(piVar2);
      if ((char)uVar4 == '\0') {
        piVar2 = (int *)*piVar3;
      }
      else {
        ((code *)*(gen_code32 *)(*piVar2 + 0x108))(piVar2);
        piVar2 = (int *)*piVar3;
        if (piVar3 != *(int * PTR32 *)(this + 0x200)) {
          *(int * PTR32 *)piVar3[1] = piVar2;
          *(int *)(*piVar3 + 4) = piVar3[1];
          F_00429760(piVar3,0xc,400);
          *(int *)(this + 0x204) = *(int *)(this + 0x204) + -1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_008b9640 */
uint F_008b9640(unsigned int gen_a0)
{
  GEN_ENTER(0x8b9640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0x1f8) != 0) {
    piVar2 = *(int * PTR32 *)((int)this + 500);
    piVar4 = (int *)*piVar2;
    (*(int * PTR32 *)(gen_frame + 0x8)) = piVar2;
    if (piVar4 != piVar2) {
      do {
        piVar2 = (int *)piVar4[2];
        ((code *)*(gen_code32 *)(*piVar2 + 0xf8))(piVar2);
        uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x104))(piVar2);
        if ((char)uVar1 == '\0') {
          piVar2 = (int *)*piVar4;
        }
        else {
          ((code *)*(gen_code32 *)(*piVar2 + 0x108))(piVar2);
          piVar2 = (int *)*piVar4;
          if (piVar4 != *(int * PTR32 *)((int)this + 500)) {
            *(int * PTR32 *)piVar4[1] = piVar2;
            *(int *)(*piVar4 + 4) = piVar4[1];
            F_00429760(piVar4,0xc,400);
            *(int *)((int)this + 0x1f8) = *(int *)((int)this + 0x1f8) + -1;
          }
        }
        piVar4 = piVar2;
      } while (piVar2 != (*(int * PTR32 *)(gen_frame + 0x8)));
    }
  }
  piVar2 = (int *)F_00966110((undefined *)((int)this + 0x20c));
  uVar1 = 0;
  if (piVar2 != (int *)0x0) {
    piVar4 = *(int * PTR32 *)((int)this + 500);
    piVar3 = (int *)*piVar4;
    (*(int * PTR32 *)(gen_frame + 0x8)) = piVar2;
    if (piVar3 != piVar4) {
      do {
        if ((int *)piVar3[2] == piVar2) break;
        piVar3 = (int *)*piVar3;
      } while (piVar3 != piVar4);
      if (piVar3 != piVar4) {
        return (uint)piVar2;
      }
    }
    uVar1 = F_0095b7f0((undefined *)((int)this + 500),&(*(int * PTR32 *)(gen_frame + 0x8)));
  }
  return uVar1;
}

/* ref: Client::UI2::AddonGetAction::vf44 */
uint F_008b9710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8b9710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  *(undefined4 *)(this + 0x94) = 0;
  F_0055e2a0(this,(-(uint)(((byte)this[0xf6] & 0xf) != 10) & 0xf8000002) + 0x8000000,1);
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x180) = uVar1;
  F_00559c20(uVar1);
  uVar1 = F_0055e2f0(this,1);
  *(uint *)(this + 0x184) = uVar1;
  uVar1 = F_0055e340(this,2);
  *(uint *)(this + 0x198) = uVar1;
  uVar1 = F_0055e340(this,3);
  *(uint *)(this + 0x19c) = uVar1;
  uVar1 = F_0055e2f0(this,4);
  *(uint *)(this + 0x1a0) = uVar1;
  uVar1 = F_0055e2f0(this,5);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 0xf)) {
    uVar1 = 0;
  }
  *(uint *)(this + 0x1a4) = uVar1;
  uVar1 = F_0055e2f0(this,6);
  if (((uVar1 == 0) || (uVar1 = F_00559c20(uVar1), uVar1 == 0)) ||
     (uVar2 = F_005613a0(uVar1), uVar2 != 0xf)) {
    uVar1 = 0;
  }
  *(uint *)(this + 0x1a8) = uVar1;
  uVar1 = F_00962e00(this + 0x18c);
  return uVar1;
}

/* ref: Client::UI2::AddonGetAction::vf62 */
uint F_008b9810(unsigned int gen_a0)
{
  GEN_ENTER(0x8b9810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar2 = F_00559cb0(*(undefined4 *)(this + 0x184));
  uVar3 = F_00559cd0(*(undefined4 *)(this + 0x184));
  if ((uVar2 <= uVar3) && (*(int *)(this + 400) != 0)) {
    iVar1 = **(int * PTR32 *)(this + 0x18c);
    uVar2 = F_0042a990(iVar1 + 0xc);
    *(uint *)(iVar1 + 0x60) = uVar2;
    uVar2 = F_0042a990(iVar1 + 100);
    *(uint *)(iVar1 + 0xb8) = uVar2;
    F_007ecf60(this,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x60),uVar2);
    uVar3 = F_00962da0(this + 0x18c,&(*(undefined * PTR32 *)(gen_frame + 0x8)),iVar1);
  }
  return uVar3;
}

/* ref: Client::UI2::AddonScreenText::vf63 */
uint F_008b9890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8b9890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(uint *)(gen_frame + 0x68)) = uVar2;
  if (3 < param_1) {
    (*(undefined4 *)(gen_frame + 0x4)) = 0xffffffff;
    (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
    F_0042b630(((undefined1 *)(gen_frame + 0xc)));
    (*(uint *)(gen_frame + 0x60)) = 4;
    (*(undefined4 *)(gen_frame + 0x64)) = 0x15;
    if ((param_2[0x10] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x14);
    }
    (*(undefined4 *)(gen_frame + 0x4)) = uVar3;
    if ((param_2[0x20] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x24);
    }
    (*(undefined4 *)(gen_frame + 0x8)) = uVar3;
    if ((param_2[0x18] & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x1c);
    }
    F_0042e430(((undefined1 *)(gen_frame + 0xc)),uVar3);
    if ((param_2[8] & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(param_2 + 0xc);
    }
    (*(uint *)(gen_frame + 0x60)) = uVar2 & 0xff;
    if ((*param_2 & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 4);
    }
    (*(undefined4 *)(gen_frame + 0x64)) = uVar3;
    bVar1 = F_008310f0(this,&(*(undefined4 *)(gen_frame + 0x4)));
    if (bVar1 == 0) {
      F_0095c2e0(this + 0x5e0,*(undefined4 *)(this + 0x5e0),&(*(undefined4 *)(gen_frame + 0x4)));
    }
    uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0xc)));
    uVar2 = (uint)uVar4;
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar2;
}

/* ref: Client::UI2::AddonImage::vf63 */
unsigned int F_008b9970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8b9970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (2 < param_1) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,0);
    if ((*(byte *)(param_2 + 0x10) & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x14);
    }
    if ((*(byte *)(param_2 + 8) & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0xc);
    }
    if ((*(byte *)(param_2 + 0x40) & 0xf) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_2 + 0x44);
    }
    if (this[0x188] != (undefined1)0x0) {
      (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
      (*(undefined4 *)(gen_frame + 0x4)) = uVar2;
      (*(undefined4 *)(gen_frame + 0x0)) = uVar3;
      F_0095b910(this + 400,&(*(undefined4 *)(gen_frame + 0x0)));
      return 0;
    }
    F_008b14e0(this,uVar3,uVar2,uVar1);
    this[0x188] = (undefined1)0x1;
  }
  return 0;
}

/* ref: Client::UI2::AddonImage::vf62 */
uint F_008b9a00(unsigned int gen_a0)
{
  GEN_ENTER(0x8b9a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  F_008b0f90(this + 0x1a8);
  uVar2 = F_00559cb0(*(undefined4 *)(this + 0x184));
  uVar3 = F_00559cd0(*(undefined4 *)(this + 0x184));
  if ((uVar2 <= uVar3) && (*(int *)(this + 0x194) != 0)) {
    piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 400)));
    uVar3 = F_008b14e0(this,piVar1[2],piVar1[3],piVar1[4]);
    if (piVar1 != *(int * PTR32 *)(this + 400)) {
      *(int *)piVar1[1] = *piVar1;
      *(int *)(*piVar1 + 4) = piVar1[1];
      uVar4 = F_00429760(piVar1,0x14,400);
      uVar3 = (uint)uVar4;
      *(int *)(this + 0x194) = *(int *)(this + 0x194) + -1;
    }
  }
  return uVar3;
}

/* ref: Client::UI2::AddonTextAchievementUnlocked::vf62 */
uint F_008b9a80(unsigned int gen_a0)
{
  GEN_ENTER(0x8b9a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  F_008b0f90(this + 0x194);
  uVar2 = F_00559cb0(*(undefined4 *)(this + 0x184));
  uVar3 = F_00559cd0(*(undefined4 *)(this + 0x184));
  if ((uVar2 <= uVar3) && (*(int *)(this + 0x1a8) != 0)) {
    piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)(this + 0x1a4)));
    uVar2 = F_0042a990(piVar1 + 4);
    piVar1[0x19] = uVar2;
    uVar2 = F_0042a990(piVar1 + 4);
    uVar3 = F_008b1ac0(this,piVar1[3],piVar1[2],uVar2);
    if (piVar1 != *(int * PTR32 *)(this + 0x1a4)) {
      *(int *)piVar1[1] = *piVar1;
      *(int *)(*piVar1 + 4) = piVar1[1];
      F_0042c880(piVar1 + 4);
      uVar4 = F_00429760(piVar1,0x68,400);
      uVar3 = (uint)uVar4;
      *(int *)(this + 0x1a8) = *(int *)(this + 0x1a8) + -1;
    }
  }
  return uVar3;
}

/* ref: FUN_008b9b20 */
uint F_008b9b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8b9b20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  uint uVar4;
  uint uVar5;
  undefined3 extraout_var_02 = 0;
  undefined3 extraout_var_03 = 0;
  undefined3 extraout_var_04 = 0;
  undefined1 * this_00;
  
  this_00 = (gen_frame + 0x1c);
  iVar1 = *(int *)(param_2 + 0x24);
  iVar2 = *(int *)(param_3 + 0x20);
  uVar5 = param_2;
  if ((param_1 & 8) != 0) {
    bVar3 = F_008b1b20(this,3,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x10c))),
                         *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x110))),
                         *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x13c))));
    uVar5 = CONCAT31(extraout_var,bVar3);
    if (bVar3 != 0) {
      uVar5 = *(uint *)((int)this + 0x250);
      if (uVar5 == 0) {
        *(undefined4 *)((int)this + 0x180) = 0;
      }
      else if (*(int *)((int)this + 0x180) < (int)uVar5) {
        (*(undefined4 *)(gen_frame + 0xc)) = 3;
        (*(undefined4 *)(gen_frame + 0x14)) = 3;
        (*(undefined4 *)(gen_frame + 0x18)) = 3;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        F_005a9110(this,2,&(*(undefined4 *)(gen_frame + 0xc)));
        *(uint *)((int)this + 0x180) = uVar5;
        param_2 = 1;
        do {
          this_00 = this_00 + -8;
          uVar5 = F_005a2670(this_00);
          param_2 = param_2 + -1;
        } while (-1 < (int)param_2);
      }
    }
  }
  if ((param_1 & 4) != 0) {
    bVar3 = F_008b1b20(this,2,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x114))),
                         *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x118))),
                         *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x140))));
    uVar5 = CONCAT31(extraout_var_00,bVar3);
  }
  if ((param_1 & 0x20) != 0) {
    bVar3 = F_008b1b20(this,5,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x11c))),
                         *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x120))),
                         *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x144))));
    uVar5 = CONCAT31(extraout_var_01,bVar3);
  }
  if ((param_1 & 0x40) != 0) {
    uVar5 = *((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x150)));
    if (*(uint *)((int)this + 0x310) != uVar5) {
      if (uVar5 == 0) {
        uVar4 = F_007eeef0(this,6);
      }
      else {
        if (*(int *)((int)this + 0x318) == 0) {
          uVar5 = F_00831fe0(this,6);
          goto LAB_008b9c91;
        }
        if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x318) + 0xf9))) & 1) == 0) goto LAB_008b9c91;
        uVar4 = F_00887900(this,6,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x134))),"",uVar5,0);
      }
      *(uint *)((int)this + 0x310) = uVar5;
      uVar5 = uVar4;
    }
  }
LAB_008b9c91: ;
  if ((param_1 & 2) != 0) {
    bVar3 = F_008b1b20(this,1,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x124))),
                         *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x128))),
                         *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x148))));
    uVar5 = CONCAT31(extraout_var_02,bVar3);
  }
  if ((param_1 & 0x10) != 0) {
    bVar3 = F_008b1b20(this,4,*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 300))),
                         *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x20) + 0x130))),
                         *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x14c))));
    uVar5 = CONCAT31(extraout_var_03,bVar3);
  }
  if ((param_1 & 0x80) != 0) {
    iVar2 = *(int *)(iVar2 + 0x20);
    bVar3 = F_008a4350(this,7,*(undefined4 *)(iVar2 + 0x170),*(undefined4 *)(iVar2 + 0x174),
                         *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0x1ac))),
                         *(undefined4 *)(iVar2 + 0x178));
    uVar5 = CONCAT31(extraout_var_04,bVar3);
  }
  return uVar5;
}

/* ref: FUN_008b9d20 */
uint F_008b9d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8b9d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)((int)this + 600);
  F_008b20e0(this,param_1);
  if ((*(int *)((int)this + 0x1c8) != 0) && (iVar1 == param_1)) {
    uVar4 = 0;
    uVar3 = 1;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c8) + 0x3c))))(*(int * PTR32 *)((int)this + 0x1c8));
    F_0059b340(this,uVar2,uVar3,uVar4);
  }
  uVar2 = F_007fa8f0(this);
  return uVar2;
}

/* ref: Client::UI2::AddonChatLog::vf46 */
byte F_008b9d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8b9d70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char * pcVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int * piVar5;
  undefined * pvVar6;
  byte * pbVar7;
  uint uVar8;
  undefined1 AVar9;
  undefined4 uVar10;
  undefined * pAVar11;
  ushort uVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  
  uVar13 = 0;
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if ((*param_2 & 0xf) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 4);
    if (10 < uVar4) {
      return 1;
    }
  }
  switch((unsigned int)(uintptr_t)(uVar4)) {
  default: ;
    if ((param_2[8] & 0xf) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined4 *)(param_2 + 0xc);
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x1f8),uVar10);
    iVar14 = 0;
    (*(byte * PTR32 *)(gen_frame + 0x8)) = param_2 + 0x10;
    pAVar11 = this + 0x1a4;
    do {
      if (*(undefined * PTR32 *)pAVar11 != (undefined *)0x0) {
        if ((((*(*(byte * PTR32 *)(gen_frame + 0x8)) & 0xf) != 0) && (pcVar1 = *(char * PTR32 *)((*(byte * PTR32 *)(gen_frame + 0x8)) + 4), pcVar1 != (char *)0x0))
           && (*pcVar1 != '\0')) {
          F_00589280(*(undefined * PTR32 *)pAVar11,pcVar1);
          uVar13 = F_00561db0(*(int *)pAVar11);
          F_008902e0(this,iVar14,uVar13);
        }
        *(undefined2 *)(*(int *)pAVar11 + 0x134) = 0;
      }
      iVar14 = iVar14 + 1;
      (*(byte * PTR32 *)(gen_frame + 0x8)) = (*(byte * PTR32 *)(gen_frame + 0x8)) + 8;
      pAVar11 = pAVar11 + 4;
    } while (iVar14 < 5);
    F_0084c200(this);
    F_0084be30(this);
    if ((param_2[0xb0] & 0xf) == 0) {
      this[0x1ea] = (undefined1)0x0;
      return 1;
    }
    this[0x1ea] = SUB41(*(undefined4 *)(param_2 + 0xb4),0);
    return 1;
  case 1: ;
    if ((param_2[0x30] & 0xf) != 0) {
      uVar13 = *(uint *)(param_2 + 0x34);
    }
    if ((param_2[0x38] & 0xf) == 0) {
      (*(byte * PTR32 *)(gen_frame + 0x8)) = (byte *)0x0;
    }
    else {
      (*(byte * PTR32 *)(gen_frame + 0x8)) = (byte *)*(uint *)(param_2 + 0x3c);
    }
    uVar12 = (ushort)uVar13;
    if (*(ushort *)(this + 0x1d8) < uVar12) {
      *(ushort *)(this + 0x1d8) = uVar12;
      if (*(int *)(this + 0x1d4) != 0) {
        F_00406810(*(int *)(this + 0x1d4));
        *(undefined4 *)(this + 0x1d4) = 0;
      }
      piVar5 = (int *)F_00404270();
      uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5,(uint)*(ushort *)(this + 0x1d8) * 4,0x10);
      *(uint *)(this + 0x1d4) = uVar4;
    }
    iVar14 = 0;
    if (uVar12 != 0) {
      pbVar7 = param_2 + 0x40;
      uVar4 = uVar13 & 0xffff;
      do {
        if ((*pbVar7 & 0xf) == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined4 *)(pbVar7 + 4);
        }
        *((undefined4 *)GEN_TOP((iVar14 + *(int *)(this + 0x1d4)))) = uVar10;
        pbVar7 = pbVar7 + 8;
        iVar14 = iVar14 + 4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    F_0059ead0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1d0) + 0x88))),uVar13,0,1);
    F_005b2060(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1d0) + 0x88))),uVar13);
    F_0059caa0(*(undefined * PTR32 *)(this + 0x1d0),(uint)(*(byte * PTR32 *)(gen_frame + 0x8)) & 0xffff);
    ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1d0) + 0x88))) + 0x70))))
              (*((int * PTR32 *)GEN_TOP((*(int *)(this + 0x1d0) + 0x88))));
    F_00581b80(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x1d0) + 0x88))));
    return 1;
  case 2: ;
    if ((param_2[8] & 0xf) == 0) {
      F_00584110(*(undefined * PTR32 *)(this + 0x1f8),0);
      return 1;
    }
    F_00584110(*(undefined * PTR32 *)(this + 0x1f8),*(undefined4 *)(param_2 + 0xc));
    return 1;
  case 3: ;
    if (((byte)this[0xf9] & 1) != 0) {
      if ((param_2[0xa8] & 0xf) != 0) {
        uVar13 = *(uint *)(param_2 + 0xac);
      }
      if (*(int *)(this + uVar13 * 4 + 0x1a4) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + uVar13 * 4 + 0x1a4) + 0x28))))
                  (*(int * PTR32 *)(this + uVar13 * 4 + 0x1a4),1);
        pvVar6 = (undefined *)0x0;
        if (*(int *)(this + uVar13 * 4 + 0x1a4) != 0) {
          pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + uVar13 * 4 + 0x1a4) + 0x70)));
        }
        F_0055a300(pvVar6,1);
        if ((param_2[0xa0] & 0xf) == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined4 *)(param_2 + 0xa4);
        }
        F_00589280(*(undefined * PTR32 *)(this + uVar13 * 4 + 0x1a4),uVar10);
        uVar4 = F_00561db0(*(undefined4 *)(this + uVar13 * 4 + 0x1a4));
        F_008902e0(this,uVar13,uVar4);
        F_0084c200(this);
        F_0084be30(this);
        return 1;
      }
    }
    break;
  case 4: ;
    if (((byte)this[0xf9] & 1) != 0) {
      if ((param_2[0xa8] & 0xf) != 0) {
        uVar13 = *(uint *)(param_2 + 0xac);
      }
      if (*(int *)(this + uVar13 * 4 + 0x1a4) != 0) {
        if (*((char *)GEN_TOP((*(int *)(this + uVar13 * 4 + 0x1a4) + 0x88))) != '\0') {
          cVar2 = '\0';
          do {
            uVar8 = ((uVar13 - (int)cVar2) - 1) % 5;
            uVar4 = F_005c0730(*(undefined4 *)(this + uVar8 * 4 + 0x1a4));
            if ((char)uVar4 != '\0') {
              F_00908c20(*(undefined * PTR32 *)(this + uVar8 * 4 + 0x1a4));
              F_008a6a00(this,uVar8,uVar13);
              break;
            }
            cVar2 = cVar2 + '\x01';
          } while (cVar2 < '\x04');
        }
        F_007a89f0(this,uVar13);
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + uVar13 * 4 + 0x1a4) + 0x28))))
                  (*(int * PTR32 *)(this + uVar13 * 4 + 0x1a4),0);
        if (*(int *)(this + uVar13 * 4 + 0x1a4) == 0) {
          pvVar6 = (undefined *)0x0;
        }
        else {
          pvVar6 = *((undefined * PTR32 *)GEN_TOP((*(int *)(this + uVar13 * 4 + 0x1a4) + 0x70)));
        }
        F_0055a300(pvVar6,0);
        F_0084be30(this);
        F_0084c200(this);
        return 1;
      }
    }
    break;
  case 5: ;
    if (((((byte)this[0xf9] & 1) != 0) && (bVar3 = F_007a8b50(), bVar3 == 0)) &&
       (uVar13 = F_0055a2d0(*((undefined4 *)GEN_TOP((*(int *)(this + 0x19c) + 0x300)))), (char)uVar13 == '\0'
       )) {
      iVar14 = 0;
      do {
        pvVar6 = (undefined *)F_007a8b00(this,iVar14);
        if ((pvVar6 != (undefined *)0x0) && (-1 < *(int *)((int)pvVar6 + 0x264))) {
          F_00962820(pvVar6);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < 5);
      if (this[0x259] == (undefined1)0x0) {
        uVar13 = F_0055dcb0();
        F_0055e6d0(*(undefined * PTR32 *)(uVar13 + 0x14));
      }
      uVar15 = 0;
      this[0x259] = (undefined1)0x1;
      this[0x25b] = (undefined1)0x1;
      uVar10 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x19c) + 0x98)));
      pAVar11 = this;
      pvVar6 = (undefined *)F_0055dcb0();
      F_0059b300(pvVar6,uVar10,pAVar11,uVar15);
      this[0x25b] = (undefined1)0x0;
      if (((byte)*(undefined4 *)(param_2 + 0x10) & 0xf) == 6) {
        pcVar1 = *(char * PTR32 *)(param_2 + 0x14);
        if ((param_2[0x18] & 0xf) == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined4 *)(param_2 + 0x1c);
        }
        if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
          F_005abc40(*(undefined * PTR32 *)(this + 0x19c),pcVar1,uVar10,1);
        }
      }
      bVar3 = F_005b8a10(this);
      if (bVar3 != 0) {
        ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,0);
        pAVar11 = this + 0x1a8;
        param_2 = (byte *)0x4;
        do {
          if ((((*(int * PTR32 *)(*(int *)pAVar11 + 0x110) != (int *)0x0) &&
               (uVar13 = F_00581060(this + 0x21c,**(int * PTR32 *)(*(int *)pAVar11 + 0x110) + 1),
               uVar13 != 0)) && ((*(byte *)(uVar13 + 0x2c) & 8) == 0)) &&
             ((*(int *)(uVar13 + 4) != 0 && (bVar3 = F_005b8a10(*(int *)(uVar13 + 4)), bVar3 != 0)
              ))) {
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar13 + 4) + 0x14))))(*(int * PTR32 *)(uVar13 + 4),0);
          }
          pAVar11 = pAVar11 + 4;
          param_2 = (byte *)((int)param_2 + -1);
        } while (param_2 != (byte *)0x0);
        return 1;
      }
    }
    break;
  case 6: ;
    if ((param_2[0xb0] & 0xf) == 0) {
      AVar9 = (undefined1)0x0;
    }
    else {
      AVar9 = SUB41(*(undefined4 *)(param_2 + 0xb4),0);
    }
    this[0x1ea] = AVar9;
    if (((byte)this[0xf9] & 1) != 0) {
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),4);
      (*(byte * PTR32 *)(gen_frame + 0x8)) = (byte *)(uint)(byte)AVar9;
      pAVar11 = this + 0x1a4;
      iVar14 = 5;
      do {
        uVar13 = F_00581060(this + 0x21c,**(int * PTR32 *)(*(int *)pAVar11 + 0x110) + 1);
        if (uVar13 != 0) {
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar13 + 4) + 0xb8))))(*(int * PTR32 *)(uVar13 + 4),1,&(*(undefined4 *)(gen_frame + 0x4)));
        }
        pAVar11 = pAVar11 + 4;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
      return 1;
    }
    break;
  case 7: ;
    if (((param_2[0xa8] & 0xf) != 0) && (*(int *)(param_2 + 0xac) != 0)) {
      F_0055a370(*(undefined4 *)(this + 0x208),0);
      F_0055a370(*(undefined4 *)(this + 0x1fc),0);
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d0) + 0x28))))(*(int * PTR32 *)(this + 0x1d0),0);
      F_008a6a00(this,0,0xffffffff);
      pAVar11 = this + 0x1a8;
      iVar14 = 4;
      do {
        if (*(int *)pAVar11 != 0) {
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar11 + 0x28))))(*(int * PTR32 *)pAVar11,0);
        }
        pAVar11 = pAVar11 + 4;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      return 1;
    }
    F_0084be30(this);
    F_0055a370(*(undefined4 *)(this + 0x1fc),1);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d0) + 0x28))))(*(int * PTR32 *)(this + 0x1d0),1);
    pAVar11 = this + 0x1a8;
    iVar14 = 4;
    do {
      if (*(int *)pAVar11 != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar11 + 0x28))))(*(int * PTR32 *)pAVar11,1);
      }
      pAVar11 = pAVar11 + 4;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    return 1;
  case 8: ;
    pAVar11 = this + 0x1a4;
    iVar14 = 5;
    do {
      uVar13 = F_00581060(this + 0x21c,**(int * PTR32 *)(*(int *)pAVar11 + 0x110) + 1);
      if (uVar13 != 0) {
        F_0084c8b0(*(undefined * PTR32 *)(uVar13 + 4));
      }
      pAVar11 = pAVar11 + 4;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
    return 1;
  case 9: ;
    if (this[0x25c] == (undefined1)0x0) {
      F_008b2c90(this);
      return 1;
    }
    goto LAB_008ba417;
  case 10: ;
    if (this[0x25c] == (undefined1)0x0) {
      return 1;
    }
LAB_008ba417: ;
    F_008b2fb0(this);
  }
  return 1;
}

/* ref: Client::UI2::AddonChatLog::vf59 */
uint F_008ba460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8ba460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1 == 9) && (-1 < (char)this[0x1cc])) {
    uVar2 = F_00581060(this + 0x21c,
                         **((int * PTR32 *)GEN_TOP((*(int *)(this + (char)this[0x1cc] * 4 + 0x1a4) + 0x110))) + 1);
    if (uVar2 != 0) {
      iVar1 = *(int *)(uVar2 + 4);
      uVar2 = F_0055dcb0();
      uVar2 = F_0055b9e0(uVar2);
      uVar3 = F_0055e2f0(this,0xd);
      if (uVar2 == uVar3) {
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x19c) + 0x38))))(*(int * PTR32 *)(this + 0x19c));
      }
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x19c) + 0x38))))(*(int * PTR32 *)(this + 0x19c));
      uVar2 = F_008b0e10((undefined *)(iVar1 + 0x1a0),this,uVar2,uVar3);
      return uVar2;
    }
    return 0;
  }
  uVar2 = F_005b1020((undefined *)this,param_1,param_2);
  return uVar2;
}

/* ref: Client::UI2::AddonChatLog::vf38 */
uint F_008ba510(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x8ba510u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined * pvVar1;
  int * piVar2;
  undefined * pvVar3;
  uint uVar4;
  int iVar5;
  undefined * pvVar6;
  int iVar7;
  
  F_005a2370(param_1,param_2);
  F_0059d8b0((int)param_1 + 0x21c,param_2);
  pvVar3 = (undefined *)F_008085a0(param_1);
  if ((*(byte *)((int)param_1 + 0xf9) & 1) != 0) {
    uVar4 = F_0055dcb0();
    pvVar1 = *((undefined * PTR32 *)GEN_TOP((*(int *)(uVar4 + 0x14) + 0xcc)));
    pvVar3 = *(undefined * PTR32 *)((int)param_1 + 0x254);
    if (pvVar3 != pvVar1) {
      if (pvVar3 != param_1) {
        pvVar6 = (undefined *)0x0;
        do {
          pvVar3 = pvVar6;
          if ((((-1 < (int)pvVar6) ||
               (pvVar3 = (undefined *)(int)*(char *)((int)param_1 + 0x1cc), -1 < (int)pvVar3)) &&
              (iVar7 = *(int *)((int)param_1 + (int)((int)(uintptr_t)pvVar3) * 4 + 0x1a4), pvVar3 = (undefined *)0x0,
              iVar7 != 0)) &&
             (piVar2 = *(int * PTR32 *)(iVar7 + 0x110), pvVar3 = (undefined *)0x0, piVar2 != (int *)0x0)) {
            uVar4 = F_00581060((undefined *)((int)param_1 + 0x21c),*piVar2 + 1);
            pvVar3 = (undefined *)0x0;
            if (((uVar4 != 0) && (pvVar3 = *(undefined * PTR32 *)(uVar4 + 4), pvVar3 != (undefined *)0x0)) &&
               ((*(undefined * PTR32 *)((int)param_1 + 0x254) == pvVar3 ||
                (*(char *)((int)pvVar3 + 0x261) != '\0')))) break;
          }
          pvVar6 = (undefined *)((int)pvVar6 + 1);
          if (4 < (int)pvVar6) {
            *(undefined * PTR32 *)((int)param_1 + 0x254) = pvVar1;
            return (uint)pvVar3;
          }
        } while( true );
      }
      if (pvVar1 != param_1) {
        iVar7 = 0;
        do {
          iVar5 = iVar7;
          if (((-1 < iVar7) || (iVar5 = (int)*(char *)((int)param_1 + 0x1cc), -1 < iVar5)) &&
             ((iVar5 = *(int *)((int)param_1 + iVar5 * 4 + 0x1a4), iVar5 != 0 &&
              (piVar2 = *(int * PTR32 *)(iVar5 + 0x110), piVar2 != (int *)0x0)))) {
            uVar4 = F_00581060((undefined *)((int)param_1 + 0x21c),*piVar2 + 1);
            if (((uVar4 != 0) && (pvVar3 = *(undefined * PTR32 *)(uVar4 + 4), pvVar3 != (undefined *)0x0)) &&
               ((pvVar1 == pvVar3 || (*(char *)((int)pvVar3 + 0x261) != '\0')))) goto LAB_008ba64b;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 5);
        pvVar3 = (undefined *)F_007a87a0(param_1);
        if (*(char *)((int)param_1 + 0x25c) != '\0') {
          pvVar3 = (undefined *)F_008b2fb0(param_1);
        }
      }
LAB_008ba64b: ;
      *(undefined * PTR32 *)((int)param_1 + 0x254) = pvVar1;
    }
  }
  return (uint)pvVar3;
}

/* ref: FUN_008ba660 */
uint F_008ba660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8ba660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  int iVar2;
  int * piVar3;
  ushort uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined * this_00;
  uint in_ecx;
  undefined4 uVar7;
  
  puVar5 = (undefined4 *)F_00581000((undefined *)((int)this + 0x21c),*param_3);
  if ((puVar5 != (undefined4 *)0x0) && ((undefined *)puVar5[1] != (undefined *)0x0)) {
    uVar6 = F_0055e2f0((undefined *)puVar5[1],3);
    puVar5[3] = uVar6;
    uVar6 = F_0055e2f0((undefined *)puVar5[1],9);
    uVar7 = *puVar5;
    puVar5[4] = uVar6;
    this_00 = (undefined *)F_0055e340((undefined *)puVar5[1],6);
    F_00584110(this_00,uVar7);
    iVar2 = *(int *)((int)this + puVar5[7] * 4 + 0x1a4);
    if (iVar2 != 0) {
      if (*(char *)(iVar2 + 0x88) != '\0') {
        F_008a6a00(this,puVar5[7],(int)*(char *)((int)this + 0x1cc));
      }
      uVar4 = F_0055a020(*(undefined4 *)(iVar2 + 0x70));
      uVar6 = (uint)uVar4;
      in_ecx = F_0055e2f0((undefined *)puVar5[1],5);
      F_0055a060(in_ecx,uVar6);
    }
    bVar1 = *(byte *)((int)this + 0x1ea);
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    F_005a2710(&(*(undefined4 *)(gen_frame + 0x4)),4);
    (*(uint *)(gen_frame + 0x8)) = (uint)bVar1;
    piVar3 = (int *)puVar5[1];
    ((code *)*(gen_code32 *)(*piVar3 + 0xb8))(piVar3,1,&(*(undefined4 *)(gen_frame + 0x4)));
    if ((puVar5[7] != 0) && ((char)piVar3[0xae] != '\0')) {
      F_008b2bd0(this,piVar3);
      uVar6 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
      return uVar6;
    }
    ((code *)*(gen_code32 *)(*(int *)puVar5[1] + 0x14))((int *)puVar5[1],0);
    F_008b2a80(this,puVar5[7],0,1);
    F_00808460(this,puVar5[1]);
    puVar5 = (undefined4 *)F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return (uint)puVar5;
}

/* ref: FUN_008ba790 */
uint F_008ba790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8ba790u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  cVar1 = *(char *)(param_3 + 6);
  uVar2 = F_0055e2f0(this,*(undefined4 *)(*param_2 + 4));
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar2 = F_00559c20(uVar2);
    uVar3 = 0;
    if (((uVar2 != 0) && (uVar3 = F_005613a0(uVar2), uVar3 == 0xb)) &&
       (uVar3 = F_0055a350(*(undefined4 *)(uVar2 + 0x70)), (char)uVar3 != '\0')) {
      iVar4 = **(int * PTR32 *)(uVar2 + 0x110);
      if (cVar1 == '\0') {
        uVar3 = F_008a6a00(this,iVar4,(int)*(char *)((int)this + 0x1cc));
        F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
        return uVar3;
      }
      if (1 < iVar4) {
        if (*(char *)((int)this + 0x25c) != '\0') {
          F_008b2fb0(this);
        }
        (*(undefined4 *)(gen_frame + 0x0)) = 0;
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x0)),3);
        (*(undefined4 *)(gen_frame + 0x4)) = 4;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x8)),3);
        (*(undefined4 *)(gen_frame + 0xc)) = 1;
        F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),4);
        (*(int *)(gen_frame + 0x14)) = iVar4;
        F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
        this_00 = &(*(uint *)(gen_frame + 0x18));
        iVar4 = 2;
        do {
          this_00 = this_00 + -2;
          uVar3 = F_005a2670(this_00);
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar3;
}

/* ref: FUN_008ba8c0 */
byte F_008ba8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8ba8c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  uint * this_00;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  bVar2 = F_00a34970(*(undefined * PTR32 *)(param_1 + 8),4);
  if (bVar2 == 0) {
    bVar2 = F_00a34970(*(undefined * PTR32 *)(param_1 + 8),5);
    if (bVar2 != 0) {
      if (*(char *)((int)this + 0x25c) == '\0') {
        F_008b2c90(this);
      }
      else {
        F_008b2fb0(this);
      }
      uVar3 = F_0055dcb0();
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar3 + 0x38) + 8))))(*(int * PTR32 *)(uVar3 + 0x38),((undefined1 *)(gen_frame + 0x8)),0x19);
      F_005a2670(((undefined1 *)(gen_frame + 0x8)));
      F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
      return 1;
    }
  }
  else if ('\x01' < *(char *)((int)this + 0x1cc)) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + *(char *)((int)this + 0x1cc) * 4 + 0x1a4))) + 0x110)));
    uVar3 = F_00581060((undefined *)((int)this + 0x21c),*piVar1 + 1);
    if (((uVar3 != 0) && (*(int *)(uVar3 + 4) != 0)) && (*((int *)GEN_TOP((*(int *)(uVar3 + 4) + 0x264))) < 0))
    {
      if (*(char *)((int)this + 0x25c) != '\0') {
        F_008b2fb0(this);
      }
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x10)),3);
      (*(undefined4 *)(gen_frame + 0x14)) = 4;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x18)),3);
      iVar4 = *piVar1;
      (*(undefined4 *)(gen_frame + 0x1c)) = 1;
      F_005a2710(&(*(undefined4 *)(gen_frame + 0x20)),4);
      (*(int *)(gen_frame + 0x24)) = iVar4;
      F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x10)));
      this_00 = &(*(uint *)(gen_frame + 0x28));
      iVar4 = 2;
      do {
        this_00 = this_00 + -2;
        F_005a2670(this_00);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 0;
}

/* ref: Client::UI2::AddonAreaMap::vf2 */
uint F_008baa20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8baa20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined3 extraout_var = 0;
  
  uVar2 = param_1 & 0xffff;
  if (0x1e < uVar2 - 3) {
    return uVar2 - 3;
  }
  uVar3 = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x8bacc4) + uVar2 + 1)));
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 3: ;
    if (this[0x4ee] != (undefined1)0x1) {
      F_00891290(this,param_4);
    }
    uVar2 = F_00557670(param_3,0);
    return uVar2;
  case 4: ;
    if ((param_2 & 0xffff) == 0xe) {
      uVar3 = 0;
      if (this[0x4ee] != (undefined1)0x0) {
        uVar2 = F_0084fc00(this,param_4);
        return uVar2;
      }
    }
    else {
      uVar3 = (param_2 & 0xffff) - 0xf;
      if (uVar3 == 0) {
        uVar2 = F_0080cdc0(this,param_4);
        return uVar2;
      }
    }
    break;
  case 5: ;
    uVar3 = param_2 & 0xffff;
    if (uVar3 == 0xc) {
      uVar2 = F_0080cb90(this,param_4);
      return uVar2;
    }
    if (uVar3 == 0xd) {
      uVar2 = F_008914b0(this,param_4);
      return uVar2;
    }
    uVar3 = uVar3 - 0x12;
    if (uVar3 == 0) {
      uVar2 = F_008b40c0(this,param_4);
      return uVar2;
    }
    break;
  case 6: ;
    if ((short)param_2 == 0xb) {
LAB_008bac60: ;
      uVar2 = F_007ad720(this,param_1);
      return uVar2;
    }
    break;
  case 7: ;
    uVar3 = param_2 & 0xffff;
    if (uVar3 == 0xb) goto LAB_008bac60;
    if (uVar3 == 0x12) {
      uVar2 = F_00891440(this,param_4);
      return uVar2;
    }
    break;
  case 8: ;
    if ((short)param_2 == 0x12) {
      uVar2 = F_008a8990(this,param_4);
      return uVar2;
    }
    break;
  case 0xf: ;
    bVar1 = F_008b4120(this,param_3,param_4);
    uVar3 = CONCAT31(extraout_var,bVar1);
    break;
  case 0x16: ;
    if ((param_2 & 0xffff) == 10) {
      uVar2 = F_007ad5f0(this);
      return uVar2;
    }
    uVar3 = param_2;
    if ((param_2 & 0xffff) == 0x13) {
      uVar2 = F_007ad5a0(this,param_2 >> 0x10);
      return uVar2;
    }
    break;
  case 0x17: ;
    switch((unsigned int)(uintptr_t)(param_2 & 0xffff)) {
    case 1: ;
      F_008a8a50(this);
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    case 2: ;
      F_008a8a00(this);
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    case 3: ;
      F_0080ccd0(this,(uint)*((byte *)GEN_TOP((*(int *)(this + 0x1a4) + 0x88))));
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    case 4: ;
      F_0080cd10(this,(uint)*((byte *)GEN_TOP((*(int *)(this + 0x1a0) + 0x88))));
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    case 5: ;
      F_007ad520(this);
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    case 6: ;
      ((code *)*(gen_code32 *)(*(int *)this + 100))();
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    default: ;
      goto switchD_008baa51_caseD_7;
    case 8: ;
      F_007ad570(this);
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    case 9: ;
      F_00891470(this,(uint)*((byte *)GEN_TOP((*(int *)(this + 0x1a8) + 0x88))));
      uVar2 = F_00557670(param_3,0);
      return uVar2;
    case 0x10: ;
      iVar4 = *((int *)GEN_TOP((*(int *)(this + 0x1b0) + 0x88)));
      if (iVar4 == 0) {
        uVar5 = 0;
      }
      else {
LAB_008bab3e: ;
        uVar5 = *(undefined4 *)(iVar4 + 0x70);
      }
      break;
    case 0x11: ;
      iVar4 = *((int *)GEN_TOP((*(int *)(this + 0x1b4) + 0x88)));
      uVar5 = 0;
      if (iVar4 != 0) goto LAB_008bab3e;
    }
    *(undefined4 *)(this + 0x98) = uVar5;
switchD_008baa51_caseD_7: ;
    uVar2 = F_00557670(param_3,0);
    return uVar2;
  case 0x1b: ;
    uVar2 = F_008a8aa0(this,param_4);
    return uVar2;
  case 0x21: ;
    if ((param_2 & 0xffff) == 0x10) {
      uVar2 = F_007ad790(this,param_4);
      return uVar2;
    }
    uVar3 = (param_2 & 0xffff) - 0x11;
    if (uVar3 == 0) {
      uVar2 = F_007ad810(this,param_4);
      return uVar2;
    }
  }
  return uVar3;
}

/* ref: Client::UI2::AddonAreaMap::vf38 */
uint F_008bad30(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x8bad30u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  uint uVar2;
  
  uVar2 = F_005a2370(param_1,param_2);
  if ((*(byte *)((int)param_1 + 0xf9) & 1) != 0) {
    bVar1 = F_0056c7e0();
    if (*(byte *)((int)param_1 + 0x4f6) != bVar1) {
      bVar1 = F_0056c7e0();
      *(byte *)((int)param_1 + 0x4f6) = bVar1;
      F_007ada30(param_1);
    }
    if (*(int *)((int)param_1 + 0x4ac) != -1) {
      F_00850020(param_1);
      F_007ad950(param_1,*(undefined4 *)((int)param_1 + 0x4ac),0);
    }
    if (*(char *)((int)param_1 + 0x4f7) != '\0') {
      F_008b4430(param_1);
    }
    uVar2 = F_0055dcb0();
    if ((*((undefined * PTR32 *)GEN_TOP((*(int *)(uVar2 + 0x14) + 0xcc))) != param_1) &&
       (uVar2 = (uint)*(byte *)((int)param_1 + 0x4f9), (int)*(char *)((int)param_1 + 0x10c) != uVar2
       )) {
      F_00587960(param_1,uVar2,0);
      uVar2 = F_007ae610(param_1);
    }
    if (*(char *)((int)param_1 + 0x4fa) != '\0') {
      uVar2 = F_0055dcb0();
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x14) + 0x3c))))(*(int * PTR32 *)(uVar2 + 0x14));
      if ((char)uVar2 != '\0') {
        uVar2 = F_0055dcb0();
        uVar2 = F_0057f810(*(undefined * PTR32 *)(uVar2 + 0x14),(uint)*(byte *)((int)param_1 + 0x4fa));
        if (uVar2 == 0) {
          *(undefined1 *)((int)param_1 + 0x4fa) = 0;
        }
      }
    }
  }
  return uVar2;
}

/* ref: Client::UI2::AddonFlyText::vf38 */
uint F_008bae20(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x8bae20u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  F_005a2370(param_1,param_2);
  uVar1 = F_008b4eb0(param_1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonFlyText::vf46 */
byte F_008bae50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8bae50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float10 fVar9;
  int local_c;
  
  if ((param_1 == (undefined *)0x0) || (param_2 == 0)) {
    return 0;
  }
  uVar6 = F_0055dcb0();
  uVar6 = F_0055b990(uVar6);
  uVar7 = F_0055dcb0();
  uVar7 = F_0055b9a0(uVar7);
  if ((uVar6 != 0) && (uVar7 != 0)) {
    iVar1 = *(int *)(uVar6 + 0x78);
    iVar2 = *(int *)(uVar7 + 0x6c);
    if ((iVar1 != 0) && (iVar2 != 0)) {
      iVar8 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xb10)));
      if (*(int *)(this + 0x12e0) != iVar8) {
        fVar9 = (float10)iVar8;
        *(int *)(this + 0x12e0) = iVar8;
        if (iVar8 < 0) {
          fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        *(float *)(this + 0x12e4) =
             ((float)GEN_TOF(((fVar9 * (float10)*(double *)&REFG(double, 0x10d8468)) * (float10)*(double *)&REFG(undefined, 0x10928e8)
                    )));
      }
      iVar8 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xb08)));
      if (*(int *)(this + 0x12e8) != iVar8) {
        *(int *)(this + 0x12e8) = iVar8;
        *(short *)(this + 0x11a0) = (short)iVar8;
        *(short *)(this + 0x11c0) = (short)iVar8;
        *(int *)(this + 0x12d4) = iVar8 * 0x2e;
        *(int *)(this + 0x12d8) = iVar8 * 0x2e;
      }
      iVar8 = *((int *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xb0c)));
      if (*(int *)(this + 0x12ec) != iVar8) {
        *(int *)(this + 0x12ec) = iVar8;
        *(short *)(this + 0x11e0) = (short)iVar8;
        *(undefined2 *)(this + 0x1200) = *(undefined2 *)(this + 0x12ec);
        *(undefined2 *)(this + 0x1220) = *(undefined2 *)(this + 0x12ec);
        *(undefined2 *)(this + 0x1240) = *(undefined2 *)(this + 0x12ec);
        *(undefined2 *)(this + 0x1260) = *(undefined2 *)(this + 0x12ec);
        *(undefined2 *)(this + 0x1280) = *(undefined2 *)(this + 0x12ec);
        *(undefined2 *)(this + 0x12a0) = *(undefined2 *)(this + 0x12ec);
        *(undefined2 *)(this + 0x12c0) = *(undefined2 *)(this + 0x12ec);
        *(int *)(this + 0x12dc) = *(int *)(this + 0x12ec) * 0x2e;
      }
      uVar6 = **(uint * PTR32 *)(iVar1 + 0x20);
      param_1 = this + 0x1194;
      param_2 = 1;
      local_c = 10;
      do {
        if ((param_2 & uVar6) != 0) {
          puVar3 = *(undefined4 * PTR32 *)param_1;
          for (puVar4 = (undefined4 *)*puVar3; puVar4 != puVar3; puVar4 = (undefined4 *)*puVar4) {
            puVar5 = (undefined4 *)puVar4[2];
            if (puVar5 != (undefined4 *)0x0) {
              *(ushort *)(puVar5 + 1) = *(ushort *)(puVar5 + 1) & 0xfffe;
              F_0055a300((undefined *)*puVar5,0);
              if ((*(byte *)(puVar5 + 1) & 2) != 0) {
                uVar7 = F_00568410((undefined *)*puVar5);
                F_00590210(this + 0x24,uVar7,(uint)*(ushort *)((int)puVar5 + 6));
                *(ushort *)(puVar5 + 1) = *(ushort *)(puVar5 + 1) & 0xfffd;
                *puVar5 = 0;
                puVar5[2] = 0;
                puVar5[3] = 0;
                puVar5[4] = 0;
                puVar5[5] = 0;
                puVar5[6] = 0;
                puVar5[7] = 0;
                puVar5[8] = 0;
              }
            }
          }
          F_00945ed0(param_1);
        }
        param_1 = param_1 + 0x20;
        param_2 = param_2 << 1 | (uint)((int)param_2 < 0);
        local_c = local_c + -1;
      } while (local_c != 0);
      uVar6 = *((uint *)GEN_TOP((*(int *)(iVar1 + 0x20) + 0xb04)));
      if ((uVar6 & 1) != 0) {
        F_008b52a0(this,0,0xe,iVar1,0x15,9,iVar2,0,2,0);
      }
      if ((uVar6 & 2) != 0) {
        F_008b52a0(this,1,0xe,iVar1,0x93,9,iVar2,0x1c,2,0);
      }
      iVar8 = 0;
      param_2 = 1;
      param_1 = (undefined *)0x111;
      uVar7 = 0x38;
      do {
        if ((uVar6 & (param_2 << 2 | param_2 >> 0x1e)) != 0) {
          F_008b52a0(this,iVar8 + 2,6,iVar1,param_1,9,iVar2,uVar7,2,0xffffffff);
        }
        param_1 = (undefined *)((int)param_1 + 0x36);
        iVar8 = iVar8 + 1;
        uVar7 = uVar7 + 0xc;
        param_2 = param_2 << 1 | (uint)((int)param_2 < 0);
      } while (uVar7 < 0x98);
      if (this[0x12f8] != (undefined1)0x0) {
        F_00591da0(this + 0x24);
        this[0x12f8] = (undefined1)0x0;
      }
      return 1;
    }
  }
  return 0;
}

/* ref: Client::UI2::AddonConfigCharacter::vf46 */
byte F_008bb150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8bb150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  byte * pbVar2;
  undefined1 AVar3;
  byte bVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  pbVar2 = param_2;
  if (this[0x211] != (undefined1)0x0) {
    if ((param_2[0x18] & 0xf) == 0) {
      param_2 = (byte *)0x0;
    }
    else {
      param_2 = *(byte * PTR32 *)(param_2 + 0x1c);
    }
    if (((*pbVar2 & 0xf) == 0) || (*(int *)(pbVar2 + 4) == 0)) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1bc) + 0x28))))(*(int * PTR32 *)(this + 0x1bc),0);
      this[0x210] = (undefined1)0x0;
    }
    else {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1bc) + 0x28))))(*(int * PTR32 *)(this + 0x1bc),1);
      this[0x210] = (undefined1)0x1;
    }
    if (((pbVar2[0x10] & 0xf) == 0) || (*(int *)(pbVar2 + 0x14) == 0)) {
      uVar7 = 0x65;
    }
    else {
      uVar7 = 0x66;
    }
    F_0059d670(*(undefined * PTR32 *)(this + 0x1cc),uVar7);
    if (((pbVar2[0x30] & 0xf) != 0) && (pbVar2[0x34] != 0)) {
      F_00580fa0(this + 0x180);
    }
    if (((pbVar2[0x38] & 0xf) == 0) || (*(int *)(pbVar2 + 0x3c) == 0)) {
      if ((*(undefined * PTR32 *)(this + 0x1c8) != (undefined *)0x0) && (this[0x213] == (undefined1)0x0)) {
        F_0059dde0(*(undefined * PTR32 *)(this + 0x1c8),0);
        F_00560760(((undefined4 *)(gen_frame + 0xc)));
        ((undefined4 *)(gen_frame + 0xc))[0] = *(undefined4 *)(this + 0x220);
        iVar1 = *(int *)(this + 0x1c8);
        if (iVar1 == 0) {
          (*(int *)(gen_frame + 0x18)) = iVar1;
        }
        else {
          (*(int *)(gen_frame + 0x18)) = *(int *)(iVar1 + 0x70);
        }
        AVar3 = this[0x13a];
        uVar6 = F_0055dcb0();
        F_00590ad0((undefined *)(uVar6 + 0xe0),3,(uint)(byte)AVar3,(*(int *)(gen_frame + 0x18)),((undefined4 *)(gen_frame + 0xc)));
        iVar1 = *(int *)(this + 0x1c8);
        if (iVar1 == 0) {
          (*(int *)(gen_frame + 0x18)) = iVar1;
        }
        else {
          (*(int *)(gen_frame + 0x18)) = *(int *)(iVar1 + 0x70);
        }
        AVar3 = this[0x13a];
        uVar6 = F_0055dcb0();
        F_00590be0((undefined *)(uVar6 + 0xe0),3,(uint)(byte)AVar3,(*(int *)(gen_frame + 0x18)),((undefined4 *)(gen_frame + 0xc)));
        this[0x213] = (undefined1)0x1;
      }
    }
    else if ((*(undefined * PTR32 *)(this + 0x1c8) != (undefined *)0x0) && (this[0x213] != (undefined1)0x0)
            ) {
      F_0059dde0(*(undefined * PTR32 *)(this + 0x1c8),1);
      F_00560760(((undefined4 *)(gen_frame + 0xc)));
      iVar1 = *(int *)(this + 0x1c8);
      ((undefined4 *)(gen_frame + 0xc))[0] = *(undefined4 *)(this + 0x224);
      if (iVar1 == 0) {
        (*(int *)(gen_frame + 0x18)) = iVar1;
      }
      else {
        (*(int *)(gen_frame + 0x18)) = *(int *)(iVar1 + 0x70);
      }
      AVar3 = this[0x13a];
      uVar6 = F_0055dcb0();
      F_00590ad0((undefined *)(uVar6 + 0xe0),3,(uint)(byte)AVar3,(*(int *)(gen_frame + 0x18)),((undefined4 *)(gen_frame + 0xc)));
      iVar1 = *(int *)(this + 0x1c8);
      if (iVar1 == 0) {
        (*(int *)(gen_frame + 0x18)) = iVar1;
      }
      else {
        (*(int *)(gen_frame + 0x18)) = *(int *)(iVar1 + 0x70);
      }
      AVar3 = this[0x13a];
      uVar6 = F_0055dcb0();
      F_00590be0((undefined *)(uVar6 + 0xe0),3,(uint)(byte)AVar3,(*(int *)(gen_frame + 0x18)),((undefined4 *)(gen_frame + 0xc)));
      this[0x213] = (undefined1)0x0;
    }
    if ((pbVar2[0x40] & 0xf) == 0) {
      AVar3 = (undefined1)0x0;
    }
    else {
      AVar3 = *(undefined *)(pbVar2 + 0x44);
    }
    this[0x215] = AVar3;
    if ((pbVar2[0x48] & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (undefined2)*(undefined4 *)(pbVar2 + 0x4c);
    }
    *(undefined2 *)(this + 0x216) = uVar5;
    if ((pbVar2[0x50] & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (undefined2)*(undefined4 *)(pbVar2 + 0x54);
    }
    *(undefined2 *)(this + 0x21a) = uVar5;
    if ((pbVar2[0x58] & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (undefined2)*(undefined4 *)(pbVar2 + 0x5c);
    }
    *(undefined2 *)(this + 0x218) = uVar5;
    if ((pbVar2[0x60] & 0xf) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (undefined2)*(undefined4 *)(pbVar2 + 100);
    }
    *(undefined2 *)(this + 0x21c) = uVar5;
    switch((unsigned int)(uintptr_t)(param_2)) {
    case (byte *)0x0: ;
    case (byte *)0x1: ;
    case (byte *)0x2: ;
    case (byte *)0x3: ;
    case (byte *)0x4: ;
      *(byte * PTR32 *)(this + 0x1f8) = param_2;
      uVar7 = 0;
      break;
    case (byte *)0x5: ;
    case (byte *)0x6: ;
    case (byte *)0x7: ;
      *(int *)(this + 0x1fc) = (int)param_2 + -5;
      uVar7 = 1;
      break;
    case (byte *)0x8: ;
    case (byte *)0x9: ;
    case (byte *)0xa: ;
    case (byte *)0xb: ;
      *(int *)(this + 0x200) = (int)param_2 + -8;
      uVar7 = 2;
      break;
    case (byte *)0xc: ;
    case (byte *)0xd: ;
    case (byte *)0xe: ;
      *(int *)(this + 0x204) = (int)param_2 + -0xc;
      uVar7 = 3;
      break;
    case (byte *)0xf: ;
      uVar7 = 4;
      break;
    default: ;
      goto switchD_008bb3d0_default;
    }
    bVar4 = F_008b5590(this,uVar7,param_1,pbVar2);
    if (bVar4 == 0) {
      F_00816fe0(this,param_1,pbVar2);
    }
  }
switchD_008bb3d0_default: ;
  return 1;
}

/* ref: Client::UI2::AddonSupportMain::vf44 */
uint F_008bb470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8bb470u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined * this_00;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (*(int *)(this + 0x180) == 0) {
    pvVar2 = (undefined *)F_00406b90(0xa0,0,0);
    if (pvVar2 == (undefined *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = F_008b60b0(pvVar2,this);
    }
    *(uint *)(this + 0x180) = uVar3;
  }
  if (**(int * PTR32 *)(this + 0x180) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x70)));
  }
  F_00568380(pvVar2,0x17,0,this,0,0);
  if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 4))) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 4))) + 0x70)));
  }
  F_00568380(pvVar2,0x17,1,this,0,0);
  if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 8))) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 8))) + 0x70)));
  }
  F_00568380(pvVar2,0x17,2,this,0,0);
  if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 0xc))) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 0xc))) + 0x70)));
  }
  F_00568380(pvVar2,0x17,3,this,0,0);
  F_005624c0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x10))),1,1,0);
  F_005624c0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x14))),1,1,0);
  F_005624c0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x18))),1,1,0);
  F_005624c0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x58))),1,1,0);
  F_005624c0(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x8c))),1,1,0);
  if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x10))) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x10))) + 0x70)));
  }
  F_00568380(pvVar2,0x21,4,this,0,0);
  if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x14))) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x14))) + 0x70)));
  }
  F_00568380(pvVar2,0x21,5,this,0,0);
  if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x18))) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x18))) + 0x70)));
  }
  F_00568380(pvVar2,0x21,6,this,0,0);
  if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x4c))) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x4c))) + 0x70)));
  }
  F_00568380(pvVar2,0x17,7,this,0,0);
  if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x54))) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x54))) + 0x70)));
  }
  F_00568380(pvVar2,0x21,8,this,0,0);
  if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x58))) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x58))) + 0x70)));
  }
  F_00568380(pvVar2,0x21,9,this,0,0);
  if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x7c))) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x7c))) + 0x70)));
  }
  F_00568380(pvVar2,0x17,10,this,0,0);
  if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x80))) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x80))) + 0x70)));
  }
  F_00568380(pvVar2,0x17,0xb,this,0,0);
  if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x84))) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x84))) + 0x70)));
  }
  F_00568380(pvVar2,0x17,0xc,this,0,0);
  if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x88))) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x88))) + 0x70)));
  }
  F_00568380(pvVar2,0x17,0xd,this,0,0);
  if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x8c))) == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x8c))) + 0x70)));
  }
  F_00568380(pvVar2,0x21,0xe,this,0,0);
  iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x180) + 0x50)));
  *(undefined * PTR32 *)(iVar1 + 0x144) = this;
  *(gen_code32 *)(iVar1 + 0x148) = ((code *)REFP(0x7c7d60));
  *(undefined4 *)(iVar1 + 0x14c) = 0;
  *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x50))) + 0x2fc))) = this;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 4;
  ((undefined * PTR32 *)(gen_frame + 0x14))[1] = this;
  (*(gen_code32 *)(gen_frame + 0x1c)) = ((code *)REFP(0x81f2b0));
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  F_00574320(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x10))),((undefined * PTR32 *)(gen_frame + 0x14)) + 1,&(*(undefined4 *)(gen_frame + 0x8)),1,0);
  (*(undefined4 *)(gen_frame + 0x8)) = 4;
  ((undefined * PTR32 *)(gen_frame + 0x14))[1] = this;
  (*(gen_code32 *)(gen_frame + 0x1c)) = ((code *)REFP(0x81f2e0));
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  F_00574320(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x14))),((undefined * PTR32 *)(gen_frame + 0x14)) + 1,&(*(undefined4 *)(gen_frame + 0x8)),1,0);
  (*(undefined4 *)(gen_frame + 0x8)) = 4;
  ((undefined * PTR32 *)(gen_frame + 0x14))[1] = this;
  (*(gen_code32 *)(gen_frame + 0x1c)) = ((code *)REFP(0x81f310));
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  F_00574320(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x18))),((undefined * PTR32 *)(gen_frame + 0x14)) + 1,&(*(undefined4 *)(gen_frame + 0x8)),1,0);
  (*(undefined4 *)(gen_frame + 0x8)) = 2;
  ((undefined * PTR32 *)(gen_frame + 0x14))[1] = this;
  (*(gen_code32 *)(gen_frame + 0x1c)) = ((code *)REFP(0x81f340));
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  F_00574320(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x54))) + 0x88))),((undefined * PTR32 *)(gen_frame + 0x14)) + 1,&(*(undefined4 *)(gen_frame + 0x8)),1,0
              );
  (*(undefined4 *)(gen_frame + 0x8)) = 4;
  ((undefined * PTR32 *)(gen_frame + 0x14))[1] = this;
  (*(gen_code32 *)(gen_frame + 0x1c)) = ((code *)REFP(0x81f370));
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  F_00574320(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x58))),((undefined * PTR32 *)(gen_frame + 0x14)) + 1,&(*(undefined4 *)(gen_frame + 0x8)),1,0);
  (*(undefined4 *)(gen_frame + 0x8)) = 4;
  ((undefined * PTR32 *)(gen_frame + 0x14))[1] = this;
  (*(gen_code32 *)(gen_frame + 0x1c)) = ((code *)REFP(0x81f3a0));
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  F_00574320(*((undefined * PTR32 *)GEN_TOP((*(int *)(this + 0x180) + 0x8c))),((undefined * PTR32 *)(gen_frame + 0x14)) + 1,&(*(undefined4 *)(gen_frame + 0x8)),1,0);
  uVar3 = F_0055dcb0();
  pvVar2 = *(undefined * PTR32 *)(uVar3 + 0x30);
  ((undefined * PTR32 *)(gen_frame + 0x14))[0] = (undefined *)0xd;
  ((undefined * PTR32 *)(gen_frame + 0x14))[1] = (undefined *)0x13;
  (*(gen_code32 *)(gen_frame + 0x1c)) = (code *)0x19;
  (*(undefined4 *)(gen_frame + 0x20)) = 0x24;
  (*(undefined4 *)(gen_frame + 0x24)) = 0x34;
  (*(uint *)(gen_frame + 0x4)) = 0;
  do {
    this_00 = (undefined *)F_0055e340(this,((undefined * PTR32 *)(gen_frame + 0x14))[(int)((*(uint *)(gen_frame + 0x4)))]);
    if (this_00 != (undefined *)0x0) {
      uVar3 = F_0043bd00(pvVar2,0x11b1,0,0);
      F_00584110(this_00,uVar3);
      F_0055a300(this_00,1);
    }
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
  } while ((*(uint *)(gen_frame + 0x4)) < 5);
  ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this,param_1,param_2);
  F_0059dde0(((undefined *)GEN_TOP(**(undefined4 * PTR32 *)(this + 0x180))),1);
  F_007c7dc0(this);
  pvVar2 = (undefined *)F_0055e2f0(this,8);
  if (pvVar2 != (undefined *)0x0) {
    F_0059d670(pvVar2,0x65);
  }
  pvVar2 = (undefined *)F_0055e2f0(this,0xe);
  if (pvVar2 != (undefined *)0x0) {
    F_0059d670(pvVar2,0x65);
  }
  pvVar2 = (undefined *)F_0055e2f0(this,0x14);
  uVar3 = 0;
  if (pvVar2 != (undefined *)0x0) {
    uVar3 = F_0059d670(pvVar2,0x65);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar3;
}

/* ref: Client::UI2::AddonSupportMain::vf25 */
uint F_008bb960(unsigned int gen_a0)
{
  GEN_ENTER(0x8bb960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  
  if (*(int *)(this + 0x180) != 0) {
    iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x180) + 0x50)));
    *(undefined4 *)(iVar1 + 0x144) = 0;
    *(undefined4 *)(iVar1 + 0x148) = 0;
    *(undefined4 *)(iVar1 + 0x14c) = 0;
    if (**(int * PTR32 *)(this + 0x180) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,0,this,0);
    if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 4))) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 4))) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,1,this,0);
    if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 8))) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 8))) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,2,this,0);
    if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 0xc))) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 0xc))) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,3,this,0);
    if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x10))) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x10))) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,4,this,0);
    if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x14))) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x14))) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,5,this,0);
    if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x18))) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x18))) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,6,this,0);
    if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x4c))) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x4c))) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,7,this,0);
    if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x54))) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x54))) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,8,this,0);
    if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x58))) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x58))) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,9,this,0);
    if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x7c))) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x7c))) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,10,this,0);
    if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x80))) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x80))) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,0xb,this,0);
    if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x84))) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x84))) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,0xc,this,0);
    if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x88))) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x88))) + 0x70)));
    }
    F_005840a0(pvVar2,0x17,0xd,this,0);
    if (*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x8c))) == 0) {
      pvVar2 = (undefined *)0x0;
    }
    else {
      pvVar2 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 0x180) + 0x8c))) + 0x70)));
    }
    F_005840a0(pvVar2,0x21,0xe,this,0);
    pvVar2 = *(undefined * PTR32 *)(this + 0x180);
    if (pvVar2 != (undefined *)0x0) {
      F_009629c0(pvVar2);
      F_00406ad0(pvVar2);
      *(undefined4 *)(this + 0x180) = 0;
    }
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  F_005a9110(this,1,&(*(undefined4 *)(gen_frame + 0x4)));
  uVar3 = F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
  return uVar3;
}

/* ref: FUN_008bbbe0 */
uint F_008bbbe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8bbbe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined * this_00;
  uint uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  F_0042cbc0(((undefined1 *)(gen_frame + 0xc4)),param_2);
  F_0042cc20(((undefined1 *)(gen_frame + 0x70)),&REFG(undefined, 0x10bda14),REFG(undefined4, 0x108cc50));
  uVar2 = F_0042c910(((undefined1 *)(gen_frame + 0xc4)),((undefined1 *)(gen_frame + 0x70)),REFG(undefined4, 0x108cc50));
  if (uVar2 == REFG(undefined4, 0x108cc50)) {
    F_0042aca0(((undefined1 *)(gen_frame + 0xc4)));
  }
  else {
    F_0042b9e0(((undefined1 *)(gen_frame + 0xc4)),uVar2 + 1,REFG(undefined4, 0x108cc50));
  }
  F_0042c880(((undefined1 *)(gen_frame + 0x70)));
  uVar2 = F_0042b790(((undefined1 *)(gen_frame + 0xc4)));
  if (uVar2 != 0) {
    uVar2 = *(uint *)((int)this + 0x10);
    this_00 = (undefined *)((int)this + 4);
    uVar5 = *(int *)((int)this + 0x14) + uVar2;
    ((int * PTR32 *)(gen_frame + 0x8))[0] = *(int * PTR32 *)((int)this + 4);
    for (; uVar2 != uVar5; uVar2 = uVar2 + 1) {
      if (((int * PTR32 *)(gen_frame + 0x8))[0] == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *((int * PTR32 *)(gen_frame + 0x8))[0];
      }
      uVar3 = uVar2;
      if (*(uint *)(iVar4 + 8) <= uVar2) {
        uVar3 = uVar2 - *(uint *)(iVar4 + 8);
      }
      bVar1 = F_0042ac50(((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar3 * 4))) + 0x54))),((undefined1 *)(gen_frame + 0xc4)));
      if (bVar1 != 0) {
        uVar7 = 0;
        if ((((int * PTR32 *)(gen_frame + 0x8))[0] != (int *)0x0) && (((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x8))[0])) != (undefined4 *)0x0)) {
          uVar7 = *((undefined4 *)GEN_TOP(*((int * PTR32 *)(gen_frame + 0x8))[0]));
        }
        F_00968000(this_00,((int * PTR32 *)(gen_frame + 0x8)),uVar7,0,uVar2);
        break;
      }
    }
    F_0042cbc0(((undefined1 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x14)));
    F_0042cbc0(((undefined1 *)(gen_frame + 0x70)),((undefined1 *)(gen_frame + 0xc4)));
    F_00967f80(this_00,((undefined1 *)(gen_frame + 0x1c)));
    F_0042c880(((undefined1 *)(gen_frame + 0x70)));
    F_0042c880(((undefined1 *)(gen_frame + 0x1c)));
    if (9 < *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x14)) {
      F_00484da0(this_00);
    }
  }
  uVar6 = F_0042c880(((undefined1 *)(gen_frame + 0xc4)));
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
  return (uint)uVar6;
}

/* ref: FUN_008bbd80 */
uint F_008bbd80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8bbd80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0096b1a0(this,REFG(undefined * PTR32, 0x1328098),param_2,param_3,param_4,param_5,param_6,
                       5);
  return uVar1;
}

/* ref: FUN_008bbdb0 */
uint F_008bbdb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8bbdb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0096b330(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008bbdc0 */
uint F_008bbdc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8bbdc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0096b4c0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008bbdd0 */
uint F_008bbdd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8bbdd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0096b650(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008bbde0 */
uint F_008bbde0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8bbde0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0096b7e0(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_008bbdf0 */
uint F_008bbdf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x8bbdf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = F_0096b970(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentEmote::vf2 */
uint F_008bbe00(unsigned int gen_a0)
{
  GEN_ENTER(0x8bbe00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  byte bVar2;
  char cVar3;
  int * piVar4;
  int * piVar5;
  undefined * pAVar6;
  uint uVar7;
  undefined4 * puVar8;
  undefined * pvVar9;
  int * piVar10;
  undefined4 * puVar11;
  uint * puVar12;
  char * pcVar13;
  int iVar14;
  undefined * puVar15;
  uint * puVar16;
  ulonglong uVar17;
  undefined * pAVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  uVar7 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if ((char)uVar7 != '\0') {
    uVar7 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    return uVar7;
  }
  uVar23 = 0;
  uVar7 = F_00404270();
  puVar8 = (undefined4 *)F_00406c00(0xad4,0,uVar7,uVar23);
  if (puVar8 == (undefined4 *)0x0) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (undefined4 *)0x0;
  }
  else {
    *puVar8 = 0x15a;
    iVar14 = 0x159;
    puVar11 = puVar8 + 1;
    do {
      *puVar11 = 0;
      puVar11 = puVar11 + 2;
      iVar14 = iVar14 + -1;
    } while (-1 < iVar14);
    (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar8 + 1;
  }
  puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x24));
  uVar21 = 0;
  uVar19 = 0;
  uVar23 = 0x30c;
  pvVar9 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4))));
  uVar7 = F_0043bd00(pvVar9,uVar23,uVar19,uVar21);
  F_005a2710(puVar8,6);
  puVar8[1] = uVar7;
  uVar21 = 0;
  uVar19 = 0;
  uVar23 = 0x30d;
  pvVar9 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4))));
  uVar7 = F_0043bd00(pvVar9,uVar23,uVar19,uVar21);
  F_005a2710(puVar8 + 2,6);
  puVar8[3] = uVar7;
  F_005a2710(puVar8 + 4,4);
  puVar8[5] = 0;
  F_005a2710(puVar8 + 6,4);
  puVar8[7] = 0x100;
  (*(int *)(gen_frame + 0x8)) = 0;
  piVar10 = (int *)F_004296a0(0x18,0,400);
  (*(int * PTR32 *)(gen_frame + 0x4)) = piVar10;
  *piVar10 = (int)piVar10;
  piVar10[1] = (int)piVar10;
  piVar10[2] = (int)piVar10;
  *(undefined1 *)(piVar10 + 5) = 1;
  *(undefined1 *)((int)piVar10 + 0x15) = 1;
  F_00954490(((undefined1 *)(gen_frame + 0x0)));
  iVar14 = 1;
  do {
    switch((unsigned int)(uintptr_t)(iVar14)) {
    case 0x33: ;
    case 0x34: ;
    case 0x35: ;
    case 0x55: ;
      break;
    default: ;
switchD_008bbf4f_caseD_36: ;
      uVar7 = F_00ab28a0(iVar14);
      if (((uVar7 != 0) && (bVar1 = *(byte *)(uVar7 + 0x28), bVar1 != 0)) &&
         ((bVar2 = *(byte *)(uVar7 + 0x29), bVar2 == 0 ||
          (((&REFG(undefined1, 0x14b4ec0))[bVar2 >> 3] & (byte)(1 << (bVar2 & 7))) != 0)))) {
        puVar11 = (undefined4 *)F_004296a0(0x18,0,400);
        *puVar11 = (*(int * PTR32 *)(gen_frame + 0x4));
        puVar11[1] = (*(int * PTR32 *)(gen_frame + 0x4));
        puVar11[2] = (*(int * PTR32 *)(gen_frame + 0x4));
        *(undefined2 *)(puVar11 + 5) = 0;
        if (puVar11 + 3 != (uint *)0x0) {
          puVar11[3] = (uint)bVar1;
          puVar11[4] = iVar14;
        }
        F_00956ec0(((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x10)),puVar11,0);
      }
      break;
    case 0x37: ;
    case 0x38: ;
    case 0x39: ;
      if (iVar14 == 0x37) {
        if (REFG(char, 0x14ab29a) == '\x01') goto switchD_008bbf4f_caseD_36;
      }
      else if (iVar14 == 0x38) {
        if (REFG(char, 0x14ab29a) == '\x02') goto switchD_008bbf4f_caseD_36;
      }
      else if ((iVar14 == 0x39) && (REFG(char, 0x14ab29a) == '\x03')) goto switchD_008bbf4f_caseD_36;
    }
    iVar14 = iVar14 + 1;
    if (0x54 < iVar14) {
      if ((*(int *)(gen_frame + 0x8)) != 0) {
        (*(int *)(gen_frame + 0x20)) = 0;
        (*(int * PTR32 *)(gen_frame + 0x28)) = (int *)*(*(int * PTR32 *)(gen_frame + 0x4));
        if ((int *)*(*(int * PTR32 *)(gen_frame + 0x4)) != (*(int * PTR32 *)(gen_frame + 0x4))) {
          puVar16 = puVar8 + 0x11;
          do {
            (*(uint *)(gen_frame + 0x14)) = (*(int * PTR32 *)(gen_frame + 0x28))[4];
            puVar12 = (uint *)F_00ab28a0((*(int * PTR32 *)(gen_frame + 0x28))[4]);
            (*(uint * PTR32 *)(gen_frame + 0x1c)) = puVar12;
            if (puVar12 == (uint *)0x0) {
              puVar15 = &REFG(undefined, 0x10bdb5f);
            }
            else {
              puVar15 = ((undefined *)GEN_TOP(((*puVar12 & 0xffffff) + (int)puVar12)));
            }
            F_005a2710(puVar16 + -5,6);
            puVar16[-4] = (uint)puVar15;
            F_005a2710(puVar16 + -3,4);
            puVar16[-2] = (*(uint *)(gen_frame + 0x14));
            if ((*(uint * PTR32 *)(gen_frame + 0x1c)) == (uint *)0x0) {
              uVar7 = 0;
            }
            else {
              uVar7 = (uint)(ushort)(*(uint * PTR32 *)(gen_frame + 0x1c))[8];
            }
            F_005a2710(puVar16 + 1,4);
            puVar16[2] = uVar7;
            F_005a2710(puVar16 + -1,6);
            *puVar16 = (uint)&REFG(undefined, 0x10bdb67);
            piVar10 = *(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x18)) + 0xc);
            if (((piVar10 != (int *)0x0) && ((*(uint * PTR32 *)(gen_frame + 0x1c)) != (uint *)0x0)) &&
               (piVar10 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar10 + 0x24))(piVar10,(*(uint * PTR32 *)(gen_frame + 0x1c))[7]))),
               puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x24)), piVar10 != (int *)0x0)) {
              uVar23 = 8;
              pvVar9 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar10 + 8))(piVar10)));
              pcVar13 = (char *)F_00cb0950(pvVar9,uVar23);
              if (*pcVar13 == '\0') {
                uVar23 = 5;
              }
              else {
                uVar23 = 8;
              }
              pvVar9 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar10 + 8))(piVar10)));
              uVar7 = F_00cb0950(pvVar9,uVar23);
              F_005a2710(puVar16 + -1,6);
              *puVar16 = uVar7;
              puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x24));
            }
            (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
            puVar16 = puVar16 + 8;
            if (*(char *)((int)(*(int * PTR32 *)(gen_frame + 0x28)) + 0x15) == '\0') {
              piVar10 = (int *)(*(int * PTR32 *)(gen_frame + 0x28))[2];
              if (*(char *)((int)piVar10 + 0x15) == '\0') {
                cVar3 = *(char *)(*piVar10 + 0x15);
                piVar4 = (int *)*piVar10;
                while (cVar3 == '\0') {
                  cVar3 = *(char *)(*piVar4 + 0x15);
                  piVar10 = piVar4;
                  piVar4 = (int *)*piVar4;
                }
                (*(int * PTR32 *)(gen_frame + 0x28)) = piVar10;
              }
              else {
                cVar3 = *(char *)((*(int * PTR32 *)(gen_frame + 0x28))[1] + 0x15);
                piVar4 = (int *)(*(int * PTR32 *)(gen_frame + 0x28))[1];
                piVar10 = (*(int * PTR32 *)(gen_frame + 0x28));
                while ((piVar5 = piVar4, cVar3 == '\0' && (piVar10 == (int *)piVar5[2]))) {
                  (*(int * PTR32 *)(gen_frame + 0x28)) = piVar5;
                  cVar3 = *(char *)(piVar5[1] + 0x15);
                  piVar4 = (int *)piVar5[1];
                  piVar10 = piVar5;
                }
                (*(int * PTR32 *)(gen_frame + 0x28)) = piVar5;
              }
            }
          } while ((*(int * PTR32 *)(gen_frame + 0x28)) != (*(int * PTR32 *)(gen_frame + 0x4)));
        }
        F_005a2710(puVar8 + 10,4);
        pAVar6 = (*(undefined * PTR32 *)(gen_frame + 0x18));
        uVar22 = 4;
        uVar20 = 0;
        uVar21 = 0;
        puVar8[0xb] = (*(int *)(gen_frame + 0x20));
        uVar19 = 0x15a;
        uVar23 = 0x1d;
        puVar11 = puVar8;
        pAVar18 = (*(undefined * PTR32 *)(gen_frame + 0x18));
        pvVar9 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x18)) + 4) + 0x1c))))(*(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x18)) + 4))));
        uVar7 = F_008668b0(pvVar9,uVar23,uVar19,puVar11,pAVar18,uVar21,uVar20,uVar22);
        *(uint *)(pAVar6 + 8) = uVar7;
        iVar14 = puVar8[-1];
        puVar11 = puVar8 + iVar14 * 2;
        while (iVar14 = iVar14 + -1, -1 < iVar14) {
          puVar11 = puVar11 + -2;
          F_005a2670(puVar11);
        }
        F_00406b30(puVar8 + -1);
      }
      F_009555d0(((undefined1 *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x14)),*(*(int * PTR32 *)(gen_frame + 0x4)),(*(int * PTR32 *)(gen_frame + 0x4)));
      uVar17 = F_00429760((*(int * PTR32 *)(gen_frame + 0x4)),0x18,400);
      return (uint)uVar17;
    }
  } while( true );
}

/* ref: FUN_008bc220 */
uint F_008bc220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x8bc220u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  
  (*(undefined1 *)(gen_frame + 0x10)) = (undefined1)param_2;
  (*(undefined4 *)(gen_frame + 0x14)) = param_3;
  (*(undefined4 *)(gen_frame + 0xc)) = param_1;
  (*(undefined4 *)(gen_frame + 0x1c)) = param_5;
  (*(undefined4 *)(gen_frame + 0x20)) = param_6;
  (*(undefined4 *)(gen_frame + 0x18)) = param_4;
  (*(undefined4 *)(gen_frame + 0x28)) = param_8;
  (*(undefined4 *)(gen_frame + 0x24)) = param_7;
  F_00968390((undefined *)((int)this + 0xc),&(*(undefined4 *)(gen_frame + 0xc)));
  if (((5 < *(uint *)((int)this + 0x1c)) && (*(int *)((int)this + 0x1c) != 0)) &&
     (iVar1 = *(int *)((int)this + 0x1c) + -1, *(int *)((int)this + 0x1c) = iVar1, iVar1 == 0)) {
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  return uVar2;
}

/* ref: FUN_008bc2a0 */
uint F_008bc2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8bc2a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x36);
  if (uVar1 < 100) {
    (*(uint *)(gen_frame + 0x14)) = (uint)*(ushort *)(param_1 + 0x34);
    (*(undefined4 *)(gen_frame + 0x18)) = param_2;
    uVar1 = F_00967030((undefined *)((int)this + uVar1 * 0x10 + 0x2e58),((undefined1 *)(gen_frame + 0xc)),&(*(uint *)(gen_frame + 0x14)));
  }
  return uVar1;
}

/* ref: FUN_008bc2e0 */
byte F_008bc2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8bc2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined * this_00;
  
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -8) + 0x1c))))(*(int * PTR32 *)((int)this + -8))));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,0x3e);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + -8) + 0x1c))))(*(int * PTR32 *)((int)this + -8))));
  uVar6 = ((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,0x39);
  if ((uVar5 != 0) && (uVar6 != 0)) {
    if (param_1 < 0x107) {
      if (param_1 == 0x106) {
        uVar1 = **(uint * PTR32 *)(uVar5 + 0x20);
        uVar7 = F_008991d0((undefined *)((int)this + -0xc),&REFG(undefined, 0x14ac184),uVar5,uVar6);
        **(uint * PTR32 *)(uVar5 + 0x20) = uVar1 | uVar7;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
        uVar1 = *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xc94)));
        uVar6 = F_00824900((undefined *)((int)this + -0xc),&REFG(undefined, 0x14ac184),uVar5,uVar6);
        *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xc94))) = uVar1 | uVar6;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
        ((code *)*(gen_code32 *)(*(int *)this + 4))(this,0x107);
        return 0;
      }
      if (param_1 == 5) {
        bVar2 = F_00898ed0((undefined *)((int)this + -0xc),&REFG(undefined, 0x14ac184));
        if (bVar2 == 0) {
          F_0086b3a0((undefined *)((int)this + -0xc),&REFG(undefined, 0x14ac184));
        }
        if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 8))) != (uint)*(ushort *)((int)this + 0x96)) {
          *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 8))) = (uint)*(ushort *)((int)this + 0x96);
          *(undefined1 *)(uVar5 + 0x1d) = 1;
        }
        uVar1 = **(uint * PTR32 *)(uVar5 + 0x20);
        uVar6 = F_0086b590((undefined *)((int)this + -0xc),&REFG(undefined, 0x14ac184),uVar5,uVar6);
        **(uint * PTR32 *)(uVar5 + 0x20) = uVar1 | uVar6;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
        ((code *)*(gen_code32 *)(*(int *)this + 4))(this,0x105);
        return 0;
      }
      if (param_1 == 0x105) {
        uVar3 = F_0076ce30((int)this + -0xc);
        if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x30))) != (uint)uVar3) {
          *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x30))) = (uint)uVar3;
          *(undefined1 *)(uVar5 + 0x1d) = 1;
        }
        uVar1 = **(uint * PTR32 *)(uVar5 + 0x20);
        uVar6 = F_008b73b0(this_00,&REFG(undefined, 0x14ac184),uVar5,uVar6);
        **(uint * PTR32 *)(uVar5 + 0x20) = uVar1 | uVar6;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
        ((code *)*(gen_code32 *)(*(int *)this + 4))(this,0x106);
        return 0;
      }
    }
    else if (param_1 == 0x107) {
      uVar1 = **(uint * PTR32 *)(uVar5 + 0x20);
      uVar7 = F_008ac850((int)this + -0xc,this,&REFG(undefined, 0x14ac184),uVar5,uVar6);
      **(uint * PTR32 *)(uVar5 + 0x20) = uVar1 | uVar7;
      *(undefined1 *)(uVar5 + 0x1d) = 1;
      uVar1 = *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xc94)));
      uVar6 = F_00899390((undefined *)((int)this + -0xc),&REFG(undefined, 0x14ac184),uVar5,uVar6);
      *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0xc94))) = uVar1 | uVar6;
      *(undefined1 *)(uVar5 + 0x1d) = 1;
    }
  }
  return 0;
}

/* ref: FUN_008bc4e0 */
uint F_008bc4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8bc4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) =
       (*(undefined * PTR32 (*)[2])REFP(0x10909b4));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d832c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d8320));
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  puVar1 = (undefined4 *)((int)this + 0x24);
  *puVar1 = 0;
  puVar2 = (undefined4 *)F_004296a0(8,0,400);
  *puVar1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar1 = puVar1;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined1 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  iVar3 = (int)this + 0xc;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4));
  F_0043cfd0(iVar3);
  return (uint)this;
}

/* ref: FUN_008bc580 */
unsigned int F_008bc580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8bc580u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d847c));
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[7] = 10000;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  *(undefined1 *)(in_ecx + 10) = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  return 0;
}

/* ref: FUN_008bc5c0 */
uint F_008bc5c0(unsigned int gen_a0)
{
  GEN_ENTER(0x8bc5c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  uint uVar2;
  
  if (*(int *)this != *(int *)((int)this + 4)) {
    *(int *)((int)this + 4) = *(int *)this;
  }
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x20) + 4)));
  *(undefined1 *)((int)this + 0xf5) = 0;
  (*pcVar1)((int)this + 0x20);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x88) + 4))))((int)this + 0x88);
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined1 *)((int)this + 0xf4) = 0;
  return uVar2;
}

/* ref: FUN_008bc630 */
unsigned int F_008bc630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8bc630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  bool bVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  if ((uint)(*(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 4) < 100) {
    if (*(char *)((int)param_1 + 6) == '\0') {
      uVar2 = *(uint *)((int)param_1 + 8);
      if ((*(byte *)((int)param_1 + 0x14) & 1) != 0) {
        uVar2 = uVar2 + 1000000;
      }
    }
    else {
      this_00 = (undefined *)F_00a3a860(param_1);
      uVar2 = F_0046e5e0(this_00);
    }
    if (((int)uVar2 < 1000000) || (1999999 < (int)uVar2)) {
      *(byte *)((int)this + 0xf5) = *(byte *)((int)this + 0xf5) | 1;
      bVar1 = false;
    }
    else {
      *(byte *)((int)this + 0xf5) = *(byte *)((int)this + 0xf5) | 2;
      bVar1 = true;
    }
    uVar3 = F_00ab24a0(uVar2);
    if (uVar3 != 0) {
      piVar4 = (int *)((int)this + 0x88);
      if (!bVar1) {
        piVar4 = (int *)((int)this + 0x20);
      }
      ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4,uVar2,uVar3);
    }
    (*(undefined2 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 9999;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    F_00760f10(&(*(undefined4 *)(gen_frame + 0xc)),param_1,0);
    F_00969190(this,&(*(undefined4 *)(gen_frame + 0xc)));
  }
  return 0;
}

/* ref: FUN_008bc700 */
byte F_008bc700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8bc700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  char cVar1;
  int iVar2;
  undefined * this_00;
  undefined * this_01;
  undefined * this_02;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if ((*(char *)((int)this + 0xf6) == '\0') || (param_1 < 1)) {
    return 0;
  }
  if (*(int *)((int)this + 0x18) != 0) {
    F_00a3d7c0(&REFG(undefined, 0x14a4230),*(undefined4 *)((int)this + 0x10),(uint)*(ushort *)((int)this + 0x14)
                );
  }
  *(undefined4 *)((int)this + 0x10) = 9999;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  F_008bc5c0(this);
  iVar5 = param_1;
  if (param_1 - 1000000U < 1000000) {
    iVar5 = param_1 + -1000000;
  }
  *(int *)((int)this + 0xf0) = iVar5;
  *(undefined1 *)((int)this + 0xf4) = (undefined1)param_2;
  param_2 = 0;
  do {
    this_00 = (undefined *)F_00a36f30(&REFG(undefined, 0x14a4230),param_2);
    if (this_00 != (undefined *)0x0) {
      iVar2 = *(int *)((int)this_00 + 0xc);
      iVar6 = 0;
      if (0 < iVar2) {
        do {
          this_01 = (undefined *)F_00a37da0(this_00,iVar6);
          if (this_01 != (undefined *)0x0) {
            if (*(char *)((int)this_01 + 6) == '\0') {
              if (*(int *)((int)this_01 + 8) == 0) goto LAB_008bc80e;
              iVar3 = *(int *)((int)this_01 + 8);
            }
            else {
              this_02 = (undefined *)F_00a3a860(this_01);
              cVar1 = *(char *)((int)this_02 + 6);
              while (cVar1 == '\0') {
                this_02 = (undefined *)F_00a3a860(this_02);
                cVar1 = *(char *)((int)this_02 + 6);
              }
              iVar3 = *(int *)((int)this_02 + 8);
            }
            if ((iVar5 == iVar3) && (uVar4 = F_00a37c50(this_01), uVar4 == 0)) {
              F_008bc630(this,this_01);
            }
          }
LAB_008bc80e: ;
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar2);
      }
    }
    param_2 = param_2 + 1;
    if (3 < param_2) {
      return *(int *)this != *(int *)((int)this + 4);
    }
  } while( true );
}

/* ref: FUN_008bc850 */
uint F_008bc850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8bc850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  undefined * this_00;
  uint uVar6;
  undefined4 * puVar7;
  uint uVar8;
  undefined * pvVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  byte * pbVar13;
  undefined * pvVar14;
  int iVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int local_24;
  int local_20;
  int local_1c;
  int local_10;
  
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x24))(piVar4,0x1c);
  piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,0x19)));
  if (((uVar5 != 0) && (this_00 != (undefined *)0x0)) && (*(int *)((int)this + 0x22c) != 0)) {
    uVar6 = param_1 & 1;
    if (uVar6 != 0) {
      F_007da110((undefined *)((int)this + 0x10));
      puVar7 = (undefined4 *)F_00a69640(&REFG(undefined, 0x14ab790));
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 9999;
        *(undefined2 *)(puVar7 + 2) = 0;
      }
    }
    F_008bc5c0((undefined *)((int)this + 0x10));
    if (*REFG(int * PTR32, 0x14ab7d0) != 0) {
      iVar12 = *(int *)((int)this + 0x238) * 0x444 + *REFG(int * PTR32, 0x14ab7d0);
      if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x6fc))) != (uint)*(byte *)(iVar12 + 0x3ec)) {
        *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x6fc))) = (uint)*(byte *)(iVar12 + 0x3ec);
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x6f8))) != *(int *)(iVar12 + 0x3d8)) {
        *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x6f8))) = *(int *)(iVar12 + 0x3d8);
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x7dc))) != *(int *)(iVar12 + 0x3dc)) {
        *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x7dc))) = *(int *)(iVar12 + 0x3dc);
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      uVar19 = 0;
      uVar18 = 1;
      uVar17 = 0;
      uVar8 = F_0042a990(iVar12 + 900);
      F_00431250(this_00,0x8c,uVar8,uVar17,uVar18,uVar19);
      pvVar14 = (undefined *)((int)this + 0x1d0);
      F_0042e430(pvVar14,&REFG(undefined, 0x10be093));
      if ((*(byte *)(iVar12 + 0x3f1) & 8) == 0) {
        uVar19 = 0;
        uVar18 = 0;
        uVar17 = 0x18c;
        pvVar9 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar8 = F_0043bd00(pvVar9,uVar17,uVar18,uVar19);
        F_0042d540(pvVar14,uVar8);
        F_0042d540(pvVar14,&REFG(undefined, 0x10c0284));
      }
      uVar8 = (uint)*(ushort *)(iVar12 + 1000);
      if (*(ushort *)(iVar12 + 1000) != 0) {
        uVar17 = 0x170;
        pvVar9 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar8 = F_00460bd0(pvVar9,uVar17,uVar8);
        F_0042d540(pvVar14,uVar8);
        F_0042d540(pvVar14,&REFG(undefined, 0x10c0288));
      }
      uVar8 = (uint)*(ushort *)(iVar12 + 0x3ea);
      if (*(ushort *)(iVar12 + 0x3ea) != 0) {
        uVar17 = 0x171;
        pvVar9 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar8 = F_00460bd0(pvVar9,uVar17,uVar8);
        F_0042d540(pvVar14,uVar8);
        F_0042d540(pvVar14,&REFG(undefined, 0x10c028c));
      }
      if ((*(byte *)(iVar12 + 0x3f1) & 4) == 0) {
        uVar19 = 0;
        uVar18 = 0;
        uVar17 = 0x199;
        pvVar9 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
        uVar8 = F_0043bd00(pvVar9,uVar17,uVar18,uVar19);
        F_0042d540(pvVar14,uVar8);
        F_0042d540(pvVar14,&REFG(undefined, 0x10c0290));
      }
      if (*(byte *)(iVar12 + 0x3ef) != 0) {
        F_0042d4d0(pvVar14,&REFG(undefined, 0x14ab870) + (uint)*(byte *)(iVar12 + 0x3ef) * 0x54);
      }
      uVar19 = 0;
      uVar18 = 1;
      uVar17 = 0;
      uVar8 = F_0042a990(pvVar14);
      F_00431250(this_00,0x8d,uVar8,uVar17,uVar18,uVar19);
      bVar3 = F_00a69690();
      if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x7e0))) != (uint)bVar3) {
        *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x7e0))) = (uint)bVar3;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      uVar8 = param_1 & 2;
      if (uVar8 != 0) {
        if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x700))) != (uint)*(ushort *)(iVar12 + 0x3e6)) {
          *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x700))) = (uint)*(ushort *)(iVar12 + 0x3e6);
          *(undefined1 *)(uVar5 + 0x1d) = 1;
        }
        if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x704))) != (uint)*(ushort *)(iVar12 + 0x3e2)) {
          *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x704))) = (uint)*(ushort *)(iVar12 + 0x3e2);
          *(undefined1 *)(uVar5 + 0x1d) = 1;
        }
        uVar10 = F_00a68de0(&REFG(undefined, 0x14ab790));
        if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x708))) != uVar10) {
          *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x708))) = uVar10;
          *(undefined1 *)(uVar5 + 0x1d) = 1;
        }
        if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x7e4))) != (uint)*(ushort *)(iVar12 + 0x3e4)) {
          *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x7e4))) = (uint)*(ushort *)(iVar12 + 0x3e4);
          *(undefined1 *)(uVar5 + 0x1d) = 1;
        }
      }
      param_1 = 0;
      iVar15 = 0x718;
      pbVar13 = (byte *)(iVar12 + 0x380);
      local_10 = 2;
      do {
        if (*pbVar13 != 0xff) {
          iVar11 = (uint)*pbVar13 * 0x60;
          if (uVar6 != 0) {
            if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + -8 + iVar15))) != *(int *)(&REFG(undefined, 0x14abb10) + iVar11))
            {
              *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + -8 + iVar15))) = *(int *)(&REFG(undefined, 0x14abb10) + iVar11);
              *(undefined1 *)(uVar5 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + -4 + iVar15))) != *(int *)(&REFG(undefined, 0x14abb14) + iVar11))
            {
              *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + -4 + iVar15))) = *(int *)(&REFG(undefined, 0x14abb14) + iVar11);
              *(undefined1 *)(uVar5 + 0x1d) = 1;
            }
            if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + iVar15))) != (uint)pbVar13[1]) {
              *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + iVar15))) = (uint)pbVar13[1];
              *(undefined1 *)(uVar5 + 0x1d) = 1;
            }
          }
          if (uVar8 != 0) {
            if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4 + iVar15))) !=
                (uint)*(ushort *)(&REFG(undefined, 0x14abb18) + iVar11)) {
              *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4 + iVar15))) =
                   (uint)*(ushort *)(&REFG(undefined, 0x14abb18) + iVar11);
              *(undefined1 *)(uVar5 + 0x1d) = 1;
            }
          }
          param_1 = param_1 + 1;
          iVar15 = iVar15 + 0x10;
        }
        pbVar13 = pbVar13 + 2;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x70c))) != param_1) {
        *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x70c))) = param_1;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      iVar15 = 0x748;
      local_10 = 0;
      param_1 = 0x8e;
      local_24 = -1;
      local_20 = 0;
      local_1c = 0x748;
      piVar4 = (int *)(iVar12 + 100);
      do {
        iVar12 = *piVar4;
        if (iVar12 != 0) {
          if (uVar6 != 0) {
            bVar16 = (*(byte *)((int)piVar4 + 10) & 1) != 0;
            if (bVar16) {
              local_24 = local_20;
            }
            uVar10 = (uint)bVar16;
            if (*((int *)GEN_TOP((iVar15 + -0x14 + *(int *)(uVar5 + 0x20)))) != iVar12) {
              *((int *)GEN_TOP((iVar15 + -0x14 + *(int *)(uVar5 + 0x20)))) = iVar12;
              *(undefined1 *)(uVar5 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((iVar15 + -0x10 + *(int *)(uVar5 + 0x20)))) != piVar4[1]) {
              *((int *)GEN_TOP((iVar15 + -0x10 + *(int *)(uVar5 + 0x20)))) = piVar4[1];
              *(undefined1 *)(uVar5 + 0x1d) = 1;
            }
            if (*((uint *)GEN_TOP((iVar15 + -0xc + *(int *)(uVar5 + 0x20)))) != (uint)*(byte *)(piVar4 + 2)) {
              *((uint *)GEN_TOP((iVar15 + -0xc + *(int *)(uVar5 + 0x20)))) = (uint)*(byte *)(piVar4 + 2);
              *(undefined1 *)(uVar5 + 0x1d) = 1;
            }
            if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + iVar15))) != uVar10) {
              *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + iVar15))) = uVar10;
              *(undefined1 *)(uVar5 + 0x1d) = 1;
            }
            if (*((int *)GEN_TOP((iVar15 + 4 + *(int *)(uVar5 + 0x20)))) != 0) {
              *((undefined4 *)GEN_TOP((iVar15 + 4 + *(int *)(uVar5 + 0x20)))) = 0;
              *(undefined1 *)(uVar5 + 0x1d) = 1;
            }
            uVar19 = 0;
            uVar18 = 1;
            uVar17 = 0;
            uVar10 = F_0042a990(piVar4 + -0x15);
            F_00431250(this_00,param_1,uVar10,uVar17,uVar18,uVar19);
          }
          if ((uVar8 != 0) && ((*(byte *)((int)piVar4 + -0x5a) & 1) != 0)) {
            uVar1 = *(ushort *)((int)piVar4 + -0x5e);
            uVar2 = *(ushort *)(piVar4 + -0x18);
            bVar3 = *(byte *)(piVar4 + 2);
            if (*((int *)GEN_TOP((local_1c + -8 + *(int *)(uVar5 + 0x20)))) != piVar4[-0x18]) {
              *((int *)GEN_TOP((local_1c + -8 + *(int *)(uVar5 + 0x20)))) = piVar4[-0x18];
              *(undefined1 *)(uVar5 + 0x1d) = 1;
            }
            uVar10 = (uint)*(byte *)((int)piVar4 + -0x5b) << 0x10 | (uint)*(byte *)(piVar4 + -0x17);
            if (*((uint *)GEN_TOP((local_1c + -4 + *(int *)(uVar5 + 0x20)))) != uVar10) {
              *((uint *)GEN_TOP((local_1c + -4 + *(int *)(uVar5 + 0x20)))) = uVar10;
              *(undefined1 *)(uVar5 + 0x1d) = 1;
            }
            uVar10 = (uint)((uint)bVar3 <= (uint)uVar2 + (uint)uVar1) << 0x10 |
                     (uint)*(byte *)(piVar4 + 2);
            iVar15 = local_1c;
            if (*((uint *)GEN_TOP((local_1c + -0xc + *(int *)(uVar5 + 0x20)))) != uVar10) {
              *((uint *)GEN_TOP((local_1c + -0xc + *(int *)(uVar5 + 0x20)))) = uVar10;
              *(undefined1 *)(uVar5 + 0x1d) = 1;
            }
          }
          local_10 = local_10 + 1;
          iVar15 = iVar15 + 0x1c;
          param_1 = param_1 + 1;
          local_1c = iVar15;
        }
        local_20 = local_20 + 1;
        piVar4 = piVar4 + 0x1c;
      } while (local_20 < 6);
      uVar19 = 0;
      uVar18 = 0;
      uVar17 = 0xe06;
      pvVar14 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x18))))(*(int * PTR32 *)((int)this + 4))));
      uVar10 = F_0043bd00(pvVar14,uVar17,uVar18,uVar19);
      if (uVar10 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x288)))) {
        *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x288))) = uVar10;
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
      if (local_24 < 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = local_24 << 0x10 | 1;
      }
      if (*((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4))) != uVar10) {
        *((uint *)GEN_TOP((*(int *)(uVar5 + 0x20) + 4))) = uVar10;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      if (*((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x730))) != local_10) {
        *((int *)GEN_TOP((*(int *)(uVar5 + 0x20) + 0x730))) = local_10;
        *(undefined1 *)(uVar5 + 0x1d) = 1;
      }
      uVar5 = 0;
      if (uVar8 != 0) {
        uVar5 = 8;
      }
      if (uVar6 == 0) {
        return uVar5;
      }
      return uVar5 | 4;
    }
  }
  return 0;
}

/* ref: FUN_008bce10 */
uint F_008bce10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8bce10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d84c4));
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 9999;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  F_0042b630((int)this + 0x28);
  F_0042b630((int)this + 0x7c);
  F_0042b630((int)this + 0xd0);
  *(undefined4 *)((int)this + 0x124) = 0xffffffff;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  puVar1 = (undefined4 *)((int)this + 0x140);
  iVar2 = 99;
  do {
    *puVar1 = 9999;
    *(undefined2 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(undefined1 *)((int)this + 0x780) = 0;
  *(undefined4 *)((int)this + 0x784) = 0;
  *(undefined4 *)((int)this + 0x788) = 0;
  *(undefined4 *)((int)this + 0xaac) = 0;
  *(undefined4 *)((int)this + 0xab0) = 0;
  *(undefined2 *)((int)this + 0xab8) = 0;
  *(undefined4 *)((int)this + 0xabc) = 0;
  *(undefined4 *)((int)this + 0xac0) = 0;
  *(undefined1 *)((int)this + 0xac8) = 0;
  *(undefined4 *)((int)this + 0xacc) = 0;
  *(undefined4 *)((int)this + 0xab4) = 9999;
  *(undefined4 *)((int)this + 0xac4) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_008bcf10 */
uint F_008bcf10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8bcf10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined1 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d850c));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  uVar1 = F_004296a0(0x40,0,400);
  *(uint *)((int)this + 0x1c) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 4))) = *(int *)((int)this + 0x1c);
  *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 8))) = *(int *)((int)this + 0x1c);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x38))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x39))) = 1;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  puVar2 = (undefined1 *)((int)this + 0x40);
  iVar4 = 0x13;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 0x20;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  *(undefined4 *)((int)this + 0x310) = 0;
  *(undefined4 *)((int)this + 0x318) = 0;
  *(undefined4 *)((int)this + 0x31c) = 0;
  *(undefined4 *)((int)this + 800) = 0;
  *(undefined4 *)((int)this + 0x324) = 0;
  puVar3 = (undefined4 *)F_004296a0(8,0,400);
  puVar5 = (undefined4 *)((int)this + 0x324);
  *puVar5 = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  *(undefined4 * PTR32 *)*puVar5 = puVar5;
  *(undefined4 *)((int)this + 0x328) = 0;
  *(undefined4 *)((int)this + 0x32c) = 0;
  *(undefined4 *)((int)this + 0x330) = 0;
  *(undefined4 *)((int)this + 0x334) = 0;
  *(undefined1 *)((int)this + 0x33c) = 0;
  *(undefined4 *)((int)this + 0x340) = 0;
  *(undefined4 *)((int)this + 0x360) = 0;
  *(undefined1 *)((int)this + 0x364) = 1;
  *(undefined4 *)((int)this + 0x368) = 0;
  *(undefined1 *)((int)this + 0x36c) = 1;
  *(undefined4 *)((int)this + 0x370) = 0;
  *(undefined1 *)((int)this + 0x374) = 1;
  *(undefined4 *)((int)this + 0x378) = 0;
  *(undefined1 *)((int)this + 0x37c) = 1;
  *(undefined4 *)((int)this + 0x380) = 0;
  *(undefined1 *)((int)this + 900) = 1;
  *(undefined4 *)((int)this + 0x388) = 0;
  *(undefined1 *)((int)this + 0x38c) = 1;
  *(undefined4 *)((int)this + 0x390) = 0;
  *(undefined1 *)((int)this + 0x394) = 1;
  *(undefined4 *)((int)this + 0x398) = 0;
  *(undefined1 *)((int)this + 0x39c) = 1;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined1 *)((int)this + 0x3a4) = 1;
  *(undefined4 *)((int)this + 0x3a8) = 0;
  *(undefined1 *)((int)this + 0x3ac) = 1;
  *(undefined1 *)((int)this + 0x3b0) = 0;
  F_00953db0((undefined *)((int)this + 0x18));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x28) = 3;
  puVar5 = (undefined4 *)((int)this + 0x2c0);
  puVar2 = (undefined1 *)((int)this + 0x40);
  iVar4 = 0x14;
  do {
    *puVar2 = 0;
    *puVar5 = 0;
    puVar2 = puVar2 + 0x20;
    puVar5 = puVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined4 *)((int)this + 0x310) = 0;
  *(undefined4 *)((int)this + 0x318) = 0;
  *(undefined4 *)((int)this + 0x31c) = 0;
  *(undefined4 *)((int)this + 800) = 0;
  F_008b8590(this);
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentScreenLog::vf3 */
unsigned int F_008bd0d0(unsigned int gen_a0)
{
  GEN_ENTER(0x8bd0d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * pAVar2;
  undefined * pAVar3;
  int iVar4;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  F_00953db0(this + 0x18);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x28) = 3;
  pAVar3 = this + 0x2c0;
  pAVar2 = this + 0x40;
  iVar4 = 0x14;
  do {
    *pAVar2 = (undefined1)0x0;
    *(undefined4 *)pAVar3 = 0;
    pAVar2 = pAVar2 + 0x20;
    pAVar3 = pAVar3 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined4 *)(this + 0x310) = 0;
  *(undefined4 *)(this + 0x318) = 0;
  *(undefined4 *)(this + 0x31c) = 0;
  *(undefined4 *)(this + 800) = 0;
  F_008b8590(this);
  return 0;
}

/* ref: FUN_008bd5a0 */
unsigned int F_008bd5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8bd5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d8554));
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0xffffffff;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xe] = 0;
  in_ecx[0xf] = 0;
  in_ecx[0x10] = 0;
  in_ecx[0x11] = 0;
  in_ecx[0x13] = 0;
  in_ecx[0x14] = 0;
  return 0;
}

/* ref: FUN_008bd600 */
uint F_008bd600(unsigned int gen_a0)
{
  GEN_ENTER(0x8bd600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d8554));
  if (*(int *)((int)this + 0x14) != 0) {
    F_00406ad0(*(int *)((int)this + 0x14));
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  if (*(int *)((int)this + 0x38) != 0) {
    F_00406b30(*(int *)((int)this + 0x38) + -4);
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  if (*(int *)((int)this + 0x34) != 0) {
    F_00406b30(*(int *)((int)this + 0x34));
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  uVar1 = F_004876d0((undefined *)((int)this + 0x3c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar1;
}

/* ref: FUN_008bd680 */
uint F_008bd680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8bd680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d859c));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
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
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x30) = 0xffffffff;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined2 *)((int)this + 0x90) = 0x101;
  *(undefined1 *)((int)this + 0x92) = 0;
  return (uint)this;
}

/* ref: FUN_008bd720 */
uint F_008bd720(unsigned int gen_a0)
{
  GEN_ENTER(0x8bd720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d859c));
  if (*(int *)((int)this + 0x5c) != 0) {
    F_00406b30(*(int *)((int)this + 0x5c) + -4);
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  if (*(int *)((int)this + 0x58) != 0) {
    F_00406b30(*(int *)((int)this + 0x58) + -4);
    *(undefined4 *)((int)this + 0x58) = 0;
  }
  if (*(int *)((int)this + 0x54) != 0) {
    F_00406b30(*(int *)((int)this + 0x54));
    *(undefined4 *)((int)this + 0x54) = 0;
  }
  if (*(int *)((int)this + 0x50) != 0) {
    F_00406b30(*(int *)((int)this + 0x50));
    *(undefined4 *)((int)this + 0x50) = 0;
  }
  F_004876d0((undefined *)((int)this + 0x70));
  uVar1 = F_004876d0((undefined *)((int)this + 0x60));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar1;
}

/* ref: FUN_008bd7c0 */
unsigned int F_008bd7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8bd7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d85e4));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0xffffffff;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  return 0;
}

/* ref: FUN_008bd820 */
uint F_008bd820(unsigned int gen_a0)
{
  GEN_ENTER(0x8bd820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d85e4));
  if (*(int *)((int)this + 0x30) != 0) {
    F_00406b30(*(int *)((int)this + 0x30));
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  if (*(int *)((int)this + 0x38) != 0) {
    F_00406b30(*(int *)((int)this + 0x38));
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  if (*(int *)((int)this + 0x3c) != 0) {
    F_00406b30(*(int *)((int)this + 0x3c) + -4);
    *(undefined4 *)((int)this + 0x3c) = 0;
  }
  uVar1 = F_004876d0((undefined *)((int)this + 0x44));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar2 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return uVar1;
}

/* ref: FUN_008bd8a0 */
unsigned int F_008bd8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x8bd8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  ushort * puVar1;
  float fVar2;
  ushort * puVar3;
  byte bVar4;
  uint uVar5;
  float * pfVar6;
  uint uVar7;
  uint uVar8;
  undefined * pvVar9;
  ushort * puVar10;
  int iVar11;
  ushort * puVar12;
  float10 fVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  undefined * puVar16;
  ushort * PTR32 * ppuVar17;
  
  ((uint *)(gen_frame + 0x20))[6] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  if (REFG(int, 0x1488344) == 0) {
LAB_008bdb32: ;
    F_00c47745(((uint *)(gen_frame + 0x20))[6] ^ (uint)(uint)(gen_frame + 0x3c));
    return 0;
  }
  ppuVar17 = &(*(ushort * PTR32 *)(gen_frame + 0x4));
  (*(ushort * PTR32 *)(gen_frame + 0x4)) = (ushort *)0x0;
  (*(ushort * PTR32 *)(gen_frame + 0x8)) = (ushort *)0x0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  F_006b8c00();
  F_006b8f20(param_3,ppuVar17);
  iVar11 = (int)(*(ushort * PTR32 *)(gen_frame + 0x8)) - (int)((int)(uintptr_t)(*(ushort * PTR32 *)(gen_frame + 0x4))) >> 0x1f;
  if (((int)(*(ushort * PTR32 *)(gen_frame + 0x8)) - (int)(*(ushort * PTR32 *)(gen_frame + 0x4))) / 0x34 + iVar11 != iVar11) {
    ((uint *)(gen_frame + 0x20))[0] = 0xec2a;
    ((uint *)(gen_frame + 0x20))[1] = 0xec55;
    ((uint *)(gen_frame + 0x20))[2] = 0xec56;
    ((uint *)(gen_frame + 0x20))[3] = 0xec57;
    ((uint *)(gen_frame + 0x20))[4] = 0xec58;
    ((uint *)(gen_frame + 0x20))[5] = 0xec59;
    uVar5 = F_00a68280(&REFG(undefined1, 0x14ab070),0xffffffff,0);
    (*(uint *)(gen_frame + 0x14)) = uVar5 & 0xffff;
    if (REFG(undefined4, 0x1379694) != (undefined *)0x0) {
      pfVar6 = (float *)F_00a5feb0(REFG(undefined4, 0x1379694));
      puVar3 = (*(ushort * PTR32 *)(gen_frame + 0x8));
      (*(float *)(gen_frame + 0x18)) = REFG(float, 0x10d8624);
      uVar5 = F_00476000();
      puVar10 = puVar3;
      if ((*(ushort * PTR32 *)(gen_frame + 0x4)) != puVar3) {
        puVar12 = (*(ushort * PTR32 *)(gen_frame + 0x4)) + 0x18;
        do {
          if ((puVar12[1] & 2) == 0) {
            iVar11 = 0;
            do {
              uVar7 = F_00907bc0(puVar12 + -0x18);
              if (uVar7 == ((uint *)(gen_frame + 0x20))[(int)(iVar11)]) {
                uVar8 = (uint)*puVar12;
                uVar7 = uVar8;
                pvVar9 = (undefined *)F_00b070f0();
                bVar4 = F_00b08860(pvVar9,uVar7);
                if (((ushort)(*(uint *)(gen_frame + 0x14)) < bVar4) || (bVar4 + 5 < ((*(uint *)(gen_frame + 0x14)) & 0xffff))) break;
                uVar7 = uVar8;
                pvVar9 = (undefined *)F_00b070f0();
                uVar7 = F_00b084c0(pvVar9,uVar7);
                if ((uVar7 != 0) && (bVar4 = F_00b07f50(uVar7), bVar4 != 0)) {
                  pvVar9 = (undefined *)F_00b070f0();
                  uVar14 = F_00b08810(pvVar9,uVar8);
                  if (((longlong)uVar14 < 0) ||
                     (((longlong)uVar14 < 0x100000000 && ((uint)uVar14 < uVar5 + 0xb4)))) break;
                }
                (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(((float10)*(float *)(puVar12 + -0xc) - (float10)pfVar6[2])));
                fVar13 = (float10)((float)GEN_TOF(((float10)*(float *)(puVar12 + -0xc) - (float10)pfVar6[2])));
                fVar2 = ((float)GEN_TOF((((float10)((float)GEN_TOF(((float10)*(float *)(puVar12 + -0x10) -
                                                 (float10)*pfVar6))) *
                                 (float10)((float)GEN_TOF(((float10)*(float *)(puVar12 + -0x10) -
                                                 (float10)*pfVar6))) + fVar13 * fVar13) -
                               (float10)*(float *)(puVar12 + -10) *
                               (float10)*(float *)(puVar12 + -10))));
                (*(float *)(gen_frame + 0x1c)) = fVar2;
                if ((float10)fVar2 < (float10)(*(float *)(gen_frame + 0x18))) {
                  (*(float *)(gen_frame + 0x18)) = fVar2;
                  puVar10 = puVar12 + -0x18;
                }
                break;
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < 6);
          }
          puVar1 = puVar12 + 2;
          puVar12 = puVar12 + 0x1a;
        } while (puVar1 != puVar3);
      }
      if (puVar10 != puVar3) {
        uVar15 = 0;
        uVar7 = F_00404270();
        uVar7 = F_00406bd0(0x78,0,uVar7,uVar15);
        if (uVar7 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = F_0090cdb0(uVar7);
        }
        if ((puVar10[0x19] & 1) == 0) {
          uVar15 = *(undefined4 *)(puVar10 + 4);
        }
        else {
          uVar15 = 0;
        }
        puVar16 = &REFG(undefined, 0x10be32f);
        uVar8 = F_0042a990(*(undefined4 *)(puVar10 + 2));
        F_007799e0(uVar7,param_1,param_2,*(undefined4 *)((int)this + 0x10),uVar15,uVar8,puVar16);
        *(ushort *)(uVar7 + 0x60) = puVar10[0x18];
        uVar8 = (uint)puVar10[0x18];
        pvVar9 = (undefined *)F_00b070f0();
        uVar14 = F_00b08810(pvVar9,uVar8);
        *(ulonglong *)(uVar7 + 0x68) = uVar14;
        if (((int)(uVar14 >> 0x20) < 1) &&
           (((longlong)uVar14 < 0 || (*(uint *)(uVar7 + 0x68) < uVar5 + 0xb4)))) {
          *(undefined1 *)(uVar7 + 0x70) = 0;
        }
        *((uint *)GEN_TOP(((int)this + *(int *)((int)this + 0x10) * 4 + 0x1c))) = uVar7;
        *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
      }
      F_00968180(&(*(ushort * PTR32 *)(gen_frame + 0x4)));
      goto LAB_008bdb32;
    }
  }
  F_00968180(&(*(ushort * PTR32 *)(gen_frame + 0x4)));
  F_00c47745(((uint *)(gen_frame + 0x20))[6] ^ (uint)(uint)(gen_frame + 0x3c));
  return 0;
}

/* ref: FUN_008bdb50 */
unsigned int F_008bdb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8bdb50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  in_ecx[2] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[16])REFP(0x10d862c));
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[7] = 0;
  return 0;
}

/* ref: Client::UI2::Agent::AgentBait::vf3 */
uint F_008bdb80(unsigned int gen_a0)
{
  GEN_ENTER(0x8bdb80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  uVar2 = *(uint *)(this + 0x10);
  if (*(uint *)(this + 0xc) != uVar2) {
    uVar2 = F_0093ff10(uVar2,uVar2,*(uint *)(this + 0xc),this);
    *(uint *)(this + 0x10) = uVar2;
  }
  *(undefined4 *)(this + 0x1c) = 0;
  return uVar2;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyChest::vf1 */
uint F_008bdbe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8bdbe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  byte bVar1;
  
  bVar1 = 0;
  switch((unsigned int)(uintptr_t)(param_4)) {
  case 0: ;
    bVar1 = F_008b87d0(this,param_2,param_3);
    *(byte *)(param_1 + 1) = bVar1;
    *param_1 = 2;
    return (uint)param_1;
  case 1: ;
    if (((*param_2 & 0xf) == 0) || ((-2 < *(int *)(param_2 + 4) && (*(int *)(param_2 + 4) < 1)))) {
      ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    }
    *(undefined4 *)(this + 0x1480) = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 2;
    return (uint)param_1;
  case 2: ;
    bVar1 = F_0077eb60(this,param_2,param_3);
    *(byte *)(param_1 + 1) = bVar1;
    *param_1 = 2;
    return (uint)param_1;
  case 3: ;
    bVar1 = F_008a0b50(this,param_2,param_3);
    *(byte *)(param_1 + 1) = bVar1;
    *param_1 = 2;
    return (uint)param_1;
  case 4: ;
    bVar1 = F_008a0d00(this,param_2,param_3);
    *(byte *)(param_1 + 1) = bVar1;
    *param_1 = 2;
    return (uint)param_1;
  case 5: ;
    bVar1 = F_008b8960(this,param_2,param_3);
  }
  *(byte *)(param_1 + 1) = bVar1;
  *param_1 = 2;
  return (uint)param_1;
}

/* ref: FUN_008bdd00 */
uint F_008bdd00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8bdd00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  ((int *)(gen_frame + 0xb4))[5] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xcc);
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,1)));
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,2);
  if (((uVar2 == 0) || (this_00 == (undefined *)0x0)) || ((int)param_2 < 0)) goto LAB_008be03f;
  uVar4 = **(uint * PTR32 *)(uVar2 + 0x20) | 0x20;
  if (**(uint * PTR32 *)(uVar2 + 0x20) != uVar4) {
    **(uint * PTR32 *)(uVar2 + 0x20) = uVar4;
    *(undefined1 *)(uVar2 + 0x1d) = 1;
  }
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    iVar5 = param_2 * 2 + 0x6e;
    if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x180))) != param_2 + 0x1ec31) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x180))) = param_2 + 0x1ec31;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    break;
  case 1: ;
    ((int *)(gen_frame + 0xb4))[0] = 0x1ec3b;
    ((int *)(gen_frame + 0xb4))[1] = 0x1ec45;
    ((int *)(gen_frame + 0xb4))[2] = 0x1ec4f;
    ((int *)(gen_frame + 0xb4))[3] = 0x1ec59;
    ((int *)(gen_frame + 0xb4))[4] = 0x1ec63;
    if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x180))) !=
        ((int *)(gen_frame + 0xb4))[(int)(**(byte * PTR32 *)((int)this + 0xf5c))] + param_2) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x180))) = ((int *)(gen_frame + 0xb4))[(int)(**(byte * PTR32 *)((int)this + 0xf5c))] + param_2
      ;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    if (*(char *)((int)this + 0x1fa8) == '\x01') {
      iVar5 = (param_2 + 0x140 + (uint)**(byte * PTR32 *)((int)this + 0xf5c) * 2) * 2;
    }
    else {
      iVar5 = (param_2 + 0x3c + (uint)**(byte * PTR32 *)((int)this + 0xf5c) * 2) * 2;
    }
    break;
  default: ;
    if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x180))) != -1) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x180))) = 0xffffffff;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    goto LAB_008be03f;
  case 3: ;
    if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x180))) != 0x1ec95) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x180))) = 0x1ec95;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    iVar5 = 0x7b5;
    break;
  case 4: ;
    if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x180))) != param_2 + 0x1ecf9) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x180))) = param_2 + 0x1ecf9;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    ((int *)(gen_frame + 0xb4))[1] = 0;
    ((int *)(gen_frame + 0xb4))[2] = 0;
    ((int *)(gen_frame + 0xb4))[3] = 0;
    F_0042cc20(((undefined1 *)(gen_frame + 0xc)),&REFG(undefined, 0x10c063c),REFG(undefined4, 0x108cc50));
    uVar6 = REFG(undefined4, 0x108cc50);
    uVar2 = F_00780c30(param_2 * 2 + 0x9a);
    F_0042cc20(((undefined1 *)(gen_frame + 0x60)),uVar2,uVar6);
    F_00ada1b0(((undefined1 *)(gen_frame + 0x60)),((undefined1 *)(gen_frame + 0xc)),((int *)(gen_frame + 0xb4)) + 1);
    F_0042c880(((undefined1 *)(gen_frame + 0x60)));
    F_0042c880(((undefined1 *)(gen_frame + 0xc)));
    if ((((int *)(gen_frame + 0xb4))[2] - ((int *)(gen_frame + 0xb4))[1]) / 0x54 == 2) {
      uVar8 = 0;
      uVar7 = 1;
      uVar6 = 0;
      uVar2 = F_0042a990(((int *)(gen_frame + 0xb4))[1]);
      F_00431250(this_00,0x77,uVar2,uVar6,uVar7,uVar8);
      uVar8 = 0;
      uVar7 = 1;
      uVar6 = 0;
      uVar2 = F_0042a990(((int *)(gen_frame + 0xb4))[1] + 0x54);
      F_00431250(this_00,0x79,uVar2,uVar6,uVar7,uVar8);
    }
    F_004876d0(((int *)(gen_frame + 0xb4)) + 1);
    uVar2 = F_00780bd0(param_2 + 0x1d7);
    goto LAB_008bdf65;
  case 5: ;
    if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x180))) != param_2 + 0x1ed5d) {
      *((uint *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x180))) = param_2 + 0x1ed5d;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    iVar5 = param_2 * 2 + 0xb2;
    break;
  case 6: ;
    if (*((int *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x180))) != 0x1ee25) {
      *((undefined4 *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x180))) = 0x1ee25;
      *(undefined1 *)(uVar2 + 0x1d) = 1;
    }
    puVar3 = (uint *)F_00ab3ee0((uint)*((ushort *)GEN_TOP((*(int *)(uVar2 + 0x20) + 0x22 +
                                         ((param_2 & 0xff) + ((int)param_2 >> 8) * 0x28) * 4))));
    uVar2 = 0;
    if (puVar3 != (uint *)0x0) {
      iVar5 = (int)puVar3 + (puVar3[1] & 0xffffff) + 4;
      if (iVar5 != *((int *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x1dc)))) {
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
      }
      *((int *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x1dc))) = iVar5;
      iVar5 = (*puVar3 & 0xffffff) + (int)puVar3;
      uVar2 = *(uint *)((int)this_00 + 0x20);
      if (iVar5 != *(int *)(uVar2 + 0x1e0)) {
        *(int *)(uVar2 + 0x1e0) = iVar5;
        *(undefined1 *)((int)this_00 + 0x1d) = 1;
        F_00c47745(((int *)(gen_frame + 0xb4))[5] ^ (uint)(uint)(gen_frame + 0xcc));
        return uVar2;
      }
    }
    goto LAB_008be03f;
  }
  uVar2 = F_00780c00(iVar5);
LAB_008bdf65: ;
  if (uVar2 != *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x1e0)))) {
    *((uint *)GEN_TOP((*(int *)((int)this_00 + 0x20) + 0x1e0))) = uVar2;
    *(undefined1 *)((int)this_00 + 0x1d) = 1;
    F_00c47745(((int *)(gen_frame + 0xb4))[5] ^ (uint)(uint)(gen_frame + 0xcc));
    return uVar2;
  }
LAB_008be03f: ;
  F_00c47745(((int *)(gen_frame + 0xb4))[5] ^ (uint)(uint)(gen_frame + 0xcc));
  return uVar2;
}

/* ref: FUN_008be070 */
uint F_008be070(unsigned int gen_a0)
{
  GEN_ENTER(0x8be070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00e3c0b0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[39])REFP(0x10d83c4));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  F_00e3bd90((int)this + 0x38);
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  F_00e5bbd0((int)this + 200);
  *(undefined * PTR32 * PTR32 *)((int)this + 200) = (*(undefined * PTR32 (*)[27])REFP(0x10c4564));
  *(undefined4 *)((int)this + 0xf4) = 0;
  uVar1 = F_004296a0(0x28,0,400);
  *(uint *)((int)this + 0xf0) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0xf0) + 4))) = *(int *)((int)this + 0xf0);
  *((int *)GEN_TOP((*(int *)((int)this + 0xf0) + 8))) = *(int *)((int)this + 0xf0);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xf0) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xf0) + 0x21))) = 1;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 1000;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  F_00962f90((undefined *)((int)this + 0x18),0x28);
  return (uint)this;
}

/* ref: FUN_008be170 */
uint F_008be170(unsigned int gen_a0)
{
  GEN_ENTER(0x8be170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  undefined * local_8;
  
  F_00974790(*(undefined * PTR32 *)((int)this + 8),*(undefined4 *)((int)this + 0xc));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  pvVar1 = *(undefined * PTR32 *)((int)this + 0x18);
  local_8 = this;
  if (pvVar1 != *(undefined * PTR32 *)((int)this + 0x1c)) {
    *(undefined * PTR32 *)((int)this + 0x1c) = pvVar1;
    local_8 = pvVar1;
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x10c) = 1000;
  uVar2 = *(uint *)((int)this + 0xa0);
  if (*(uint *)((int)this + 0x9c) != uVar2) {
    uVar2 = F_0093f7f0(uVar2,uVar2,*(uint *)((int)this + 0x9c),local_8);
    *(uint *)((int)this + 0xa0) = uVar2;
  }
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  return uVar2;
}

/* ref: FUN_008be230 */
byte F_008be230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8be230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int iVar2;
  undefined4 * puVar3;
  byte bVar4;
  uint uVar5;
  
  if (*(int *)((int)this + 0xc) == 0) {
    return 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  if ((((piVar1 == (int *)0x0) || ((int)param_1 < 0)) || (piVar1[1] - *piVar1 >> 2 <= (int)param_1))
     || (*(int *)((int)this + 0xfc) < 7)) {
    return 0;
  }
  iVar2 = *piVar1;
  if ((uint)(piVar1[1] - iVar2 >> 2) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  if ((uint)(piVar1[1] - iVar2 >> 2) <= param_1) {
                    
    F_00c457e7("invalid vector<T> subscript");
  }
  puVar3 = *(undefined4 * PTR32 *)(param_1 * 4 + iVar2);
  uVar5 = F_00974950(*(undefined * PTR32 *)((int)this + 8),(uint)*((byte *)GEN_TOP((*(int *)(iVar2 + param_1 * 4) + 8))),
                       *puVar3,puVar3[1],this,*(undefined4 *)((int)this + 0xc));
  bVar4 = (byte)uVar5;
  *(uint *)((int)this + 0xfc) = (bVar4 == 0) + 8;
  if (bVar4 != 0) {
    *(undefined4 *)((int)this + 0x14) = 0;
    F_00969050((undefined *)((int)this + 0x9c));
    F_00968f40((undefined *)((int)this + 0x18));
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined4 *)((int)this + 0x30) = 0;
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  return bVar4;
}

/* ref: FUN_008be320 */
uint F_008be320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8be320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint * this_00;
  int * piVar1;
  int in_ecx;
  uint uVar2;
  int * piVar3;
  
  uVar2 = *(uint *)((int)this + 0xa0);
  this_00 = (uint *)((int)this + 0x9c);
  if (*this_00 != uVar2) {
    uVar2 = F_0093f7f0(uVar2,uVar2,*this_00,param_1);
    *(uint *)((int)this + 0xa0) = uVar2;
  }
  if (param_1 != (int *)0x0) {
    uVar2 = F_009630c0(this_00,param_1[1] - *param_1 >> 2);
    piVar1 = (int *)param_1[1];
    for (piVar3 = (int *)*param_1; piVar3 != piVar1; piVar3 = piVar3 + 1) {
      in_ecx = *piVar3;
      if ((*(int *)(in_ecx + 0xc) != 0) || (*(int *)(in_ecx + 8) != 0)) {
        ((int *)(gen_frame + 0x4))[0] = in_ecx;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        if (in_ecx != 0) {
          (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(in_ecx + 8);
          (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(in_ecx + 0xc);
          uVar2 = F_00e3be40(in_ecx);
          (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(uVar2 + 0xb4);
        }
        uVar2 = F_00968f90(this_00,((int *)(gen_frame + 0x4)));
      }
    }
  }
  return uVar2;
}

/* ref: FUN_008be3d0 */
uint F_008be3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8be3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int * this_00;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  ulonglong uVar6;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  this_00 = (int *)((int)this + 0x18);
  if (*this_00 != *(int *)((int)this + 0x1c)) {
    *(int *)((int)this + 0x1c) = *this_00;
  }
  F_0042b630(((undefined1 *)(gen_frame + 0x4)));
  puVar1 = (undefined4 *)param_1[1];
  for (puVar5 = (undefined4 *)*param_1; puVar5 != puVar1; puVar5 = puVar5 + 0x15) {
    if ((puVar5 < *(undefined4 * PTR32 *)((int)this + 0x1c)) &&
       (puVar3 = (undefined4 *)*this_00, puVar3 <= puVar5)) {
      if (*(int *)((int)this + 0x1c) == *(int *)((int)this + 0x20)) {
        F_00964b20(this_00,1);
      }
      puVar4 = *(undefined4 * PTR32 *)((int)this + 0x1c);
      puVar3 = ((undefined4 *)GEN_TOP(((((int)puVar5 - (int)puVar3) / 0x54) * 0x54 + *this_00)));
    }
    else {
      if (*(undefined4 * PTR32 *)((int)this + 0x1c) == *(undefined4 * PTR32 *)((int)this + 0x20)) {
        F_00964b20(this_00,1);
      }
      puVar4 = *(undefined4 * PTR32 *)((int)this + 0x1c);
      puVar3 = puVar5;
    }
    if (puVar4 != (undefined4 *)0x0) {
      for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
    *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + 0x54;
  }
  uVar6 = F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return (uint)uVar6;
}

/* ref: FUN_008be4d0 */
uint F_008be4d0(unsigned int gen_a0)
{
  GEN_ENTER(0x8be4d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = F_008be320(this,*(undefined4 *)((int)this + 0x14));
  iVar1 = *(int *)((int)this + 4);
  *(undefined2 *)(iVar1 + 0x250) = 0;
  iVar2 = *(int *)(iVar1 + 0x240);
  if (iVar2 != *(int *)(iVar1 + 0x244)) {
    uVar3 = F_00c46e20(iVar2,*(int *)(iVar1 + 0x244),0);
    *(int *)(iVar1 + 0x244) = iVar2;
  }
  return uVar3;
}

/* ref: FUN_008be520 */
uint F_008be520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8be520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  
  *(int *)this = param_1;
  this_00 = (undefined *)((int)this + 8);
  param_1 = 1;
  do {
    F_008be070(this_00);
    this_00 = (undefined *)((int)this_00 + 0x118);
    param_1 = param_1 + -1;
  } while (-1 < param_1);
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined4 *)((int)this + 0x248) = 0;
  *(undefined2 *)((int)this + 0x250) = 0;
  *(undefined4 *)((int)this + 0x254) = 0;
  *(undefined4 *)((int)this + 600) = 0;
  *(undefined4 *)((int)this + 0x25c) = 0;
  F_0042cc20((undefined *)((int)this + 0x260),"",REFG(undefined4, 0x108cc50));
  *(undefined4 *)((int)this + 0x2b4) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined * PTR32 *)((int)this + 0xc) = this;
  *(undefined * PTR32 *)((int)this + 0x124) = this;
  *(undefined4 *)((int)this + 0x228) = 1;
  return (uint)this;
}

/* ref: FUN_008be5d0 */
uint F_008be5d0(unsigned int gen_a0)
{
  GEN_ENTER(0x8be5d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  *(undefined4 *)((int)this + 0x238) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined2 *)((int)this + 0x250) = 0;
  iVar2 = *(int *)((int)this + 0x240);
  if (iVar2 != *(int *)((int)this + 0x244)) {
    F_00c46e20(iVar2,*(int *)((int)this + 0x244),0);
    *(int *)((int)this + 0x244) = iVar2;
  }
  this_00 = (undefined *)((int)this + 8);
  iVar2 = 2;
  do {
    uVar1 = F_008be170(this_00);
    this_00 = (undefined *)((int)this_00 + 0x118);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_008be640 */
uint F_008be640(unsigned int gen_a0)
{
  GEN_ENTER(0x8be640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  
  piVar2 = (int *)((int)this + 0x104);
  iVar4 = 2;
  piVar3 = piVar2;
  do {
    if (*piVar3 == 1) {
      if (piVar3[-0x3a] == 0) {
        F_008be230(piVar3 + -0x3f,(int)*(char *)(*(int *)this + 0x670));
      }
      else {
        *piVar3 = 10;
      }
    }
    piVar3 = piVar3 + 0x46;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  bVar1 = 1;
  iVar4 = 0;
  do {
    if (*piVar2 < 10) {
      bVar1 = 0;
      break;
    }
    iVar4 = iVar4 + 1;
    piVar2 = piVar2 + 0x46;
  } while (iVar4 < 2);
  *(uint *)((int)this + 0x238) = bVar1 + 10;
  return bVar1 + 10;
}

/* ref: FUN_008be6d0 */
byte F_008be6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x8be6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  undefined * this_00;
  
  *(undefined2 *)((int)this + 0x250) = 0;
  iVar1 = *(int *)((int)this + 0x240);
  if (iVar1 != *(int *)((int)this + 0x244)) {
    F_00c46e20(iVar1,*(int *)((int)this + 0x244),0);
    *(int *)((int)this + 0x244) = iVar1;
  }
  *(undefined4 *)((int)this + 0x238) = 8;
  this_00 = (undefined *)((int)this + 8);
  iVar1 = 2;
  do {
    F_008be230(this_00,param_1);
    this_00 = (undefined *)((int)this_00 + 0x118);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  F_00783760(this);
  return 1;
}

/* ref: FUN_008be750 */
uint F_008be750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8be750u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * PTR32 * ppvVar1;
  undefined * PTR32 * ppvVar2;
  undefined4 * puVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  pvVar4 = (*(undefined * PTR32 *)&gen_args[1]);
  (*(uint *)(gen_frame + 0x10)) = (*(uint *)&gen_args[2]);
  ppvVar1 = *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[3]);
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[1]);
  (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)&gen_args[4]);
  if (&(*(undefined * PTR32 *)(gen_frame + 0xc)) < ppvVar1) {
    ppvVar2 = *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
    if (ppvVar2 <= &(*(undefined * PTR32 *)(gen_frame + 0xc))) {
      if (ppvVar1 == *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)))) {
        F_009643f0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),1);
      }
      puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
      puVar6 = ((undefined4 *)GEN_TOP((((int)&(*(undefined * PTR32 *)(gen_frame + 0xc)) - (int)ppvVar2 & 0xfffffff0U) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))));
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar6;
        puVar3[1] = puVar6[1];
        puVar3[2] = puVar6[2];
        puVar3[3] = puVar6[3];
      }
      goto LAB_008be7e9;
    }
  }
  if (ppvVar1 == *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)))) {
    F_009643f0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),1);
  }
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = pvVar4;
    puVar3[1] = (*(uint *)(gen_frame + 0x10));
    puVar3[2] = (*(undefined4 *)(gen_frame + 0x14));
    puVar3[3] = (*(undefined4 *)(gen_frame + 0x18));
  }
LAB_008be7e9: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x10;
  F_0055a000((*(undefined * PTR32 *)&gen_args[1]),&(*(uint *)&gen_args[2]),&(*(undefined4 *)&gen_args[3]));
  uVar5 = (*(uint *)&gen_args[2]) & 0xffff;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) < (int)uVar5) {
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = uVar5;
    return (uint)&(*(undefined * PTR32 *)&gen_args[1]);
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
  return uVar5;
}

/* ref: FUN_008be830 */
uint F_008be830(unsigned int gen_a0)
{
  GEN_ENTER(0x8be830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 4) != *(int *)((int)this + 8)) {
    *(int *)((int)this + 8) = *(int *)((int)this + 4);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return 0;
}

/* ref: FUN_008be870 */
uint F_008be870(unsigned int gen_a0)
{
  GEN_ENTER(0x8be870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d8674));
  F_0056c400((undefined *)((int)this + 0x1c8),400,0);
  *(undefined4 *)((int)this + 0x1f0) = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x1f8) = 0;
  uVar2 = F_004296a0(0xc,0,400);
  *(uint *)((int)this + 500) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 500) + 4))) = *(int *)((int)this + 500);
  *(undefined4 *)((int)this + 0x204) = 0;
  uVar2 = F_004296a0(0xc,0,400);
  *(uint *)((int)this + 0x200) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x200) + 4))) = *(int *)((int)this + 0x200);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20c) = (*(undefined * PTR32 (*)[1])REFP(0x10d8474));
  *(undefined4 *)((int)this + 0x214) = 0;
  uVar2 = F_004296a0(0x110,0,400);
  *(uint *)((int)this + 0x210) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x210) + 4))) = *(int *)((int)this + 0x210);
  *(undefined4 *)((int)this + 0x21c) = 0;
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  *(undefined4 *)((int)this + 0x228) = 0;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0xa08;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x80;
  *(undefined1 *)((int)this + 0x274) = 0;
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x5f ^ bVar1 | 0x20;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc0;
  F_00c48350((undefined *)((int)this + 0x180),0,0x48);
  return (uint)this;
}

/* ref: FUN_008be990 */
uint F_008be990(unsigned int gen_a0)
{
  GEN_ENTER(0x8be990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d8674));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20c) = (*(undefined * PTR32 (*)[1])REFP(0x10d8474));
  F_0095c260((undefined *)((int)this + 0x210));
  F_00429760(*(undefined4 *)((int)this + 0x210),0x110,400);
  F_00953fc0((undefined *)((int)this + 0x200));
  F_00953fc0((undefined *)((int)this + 500));
  F_00580e00((undefined *)((int)this + 0x1c8));
  uVar1 = F_00590600(this);
  return uVar1;
}

/* ref: Client::UI2::AddonScreenInfo::vf46 */
byte F_008bea00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8bea00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  
  if (((this[0x274] != (undefined1)0x0) && (param_1 != 0)) && (param_2 != (byte *)0x0)) {
    if ((*param_2 & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(param_2 + 4);
      if (0x14 < uVar2) {
        return 1;
      }
    }
    switch((unsigned int)(uintptr_t)(uVar2)) {
    default: ;
      if (*(int *)(this + 0x1a0) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a0) + 0xfc))))(*(int * PTR32 *)(this + 0x1a0),param_1,param_2);
        F_008b0e80(this,*(undefined4 *)(this + 0x1a0));
        return 1;
      }
      break;
    case 2: ;
      if (*(int *)(this + 400) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 400) + 0xfc))))(*(int * PTR32 *)(this + 400),param_1,param_2);
        F_008b0e80(this,*(undefined4 *)(this + 400));
        return 1;
      }
      break;
    case 3: ;
      if (*(int *)(this + 0x1a8) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a8) + 0xfc))))(*(int * PTR32 *)(this + 0x1a8),param_1,param_2);
        F_008b0e80(this,*(undefined4 *)(this + 0x1a8));
        return 1;
      }
      break;
    case 4: ;
      if (*(int *)(this + 0x198) != 0) {
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x198) + 0x188))) = 1;
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x198) + 0xfc))))(*(int * PTR32 *)(this + 0x198),param_1,param_2);
        F_008b0f50(this,*(undefined4 *)(this + 0x198));
        return 1;
      }
      break;
    case 5: ;
      if (*(int *)(this + 0x1a4) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1a4) + 0xfc))))(*(int * PTR32 *)(this + 0x1a4),param_1,param_2);
        F_008b0e80(this,*(undefined4 *)(this + 0x1a4));
        return 1;
      }
      break;
    case 6: ;
    case 7: ;
    case 0xd: ;
      break;
    case 8: ;
      if (*(int *)(this + 0x194) != 0) {
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x194) + 0x188))) = 3;
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x194) + 0xfc))))(*(int * PTR32 *)(this + 0x194),param_1,param_2);
        F_008b0f50(this,*(undefined4 *)(this + 0x194));
        return 1;
      }
      break;
    case 9: ;
      iVar1 = *(int *)(this + 0x194);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x188) == 3)) {
        *(undefined4 *)(iVar1 + 0x188) = 4;
        return 1;
      }
      break;
    case 10: ;
      if (*(int *)(this + 0x1b0) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1b0) + 0xfc))))(*(int * PTR32 *)(this + 0x1b0),param_1,param_2);
        F_008b0e80(this,*(undefined4 *)(this + 0x1b0));
        return 1;
      }
      break;
    case 0xb: ;
      if (*(int *)(this + 0x1ac) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1ac) + 0xfc))))(*(int * PTR32 *)(this + 0x1ac),param_1,param_2);
        F_008b0e80(this,*(undefined4 *)(this + 0x1ac));
        return 1;
      }
      break;
    case 0xc: ;
      if (*(int *)(this + 0x180) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x180) + 0xfc))))(*(int * PTR32 *)(this + 0x180),param_1,param_2);
        F_008b0e80(this,*(undefined4 *)(this + 0x180));
        return 1;
      }
      break;
    case 0xe: ;
      if (*(int *)(this + 0x19c) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x19c) + 0xfc))))(*(int * PTR32 *)(this + 0x19c),param_1,param_2);
        F_008b0e80(this,*(undefined4 *)(this + 0x19c));
        return 1;
      }
      break;
    case 0xf: ;
      if (*(int *)(this + 0x184) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x184) + 0xfc))))(*(int * PTR32 *)(this + 0x184),param_1,param_2);
        F_008b0e80(this,*(undefined4 *)(this + 0x184));
        return 1;
      }
      break;
    case 0x10: ;
      if (((param_2[0x38] & 0xf) == 0) || (*(int *)(param_2 + 0x3c) == 0)) {
        if (*(int *)(this + 0x18c) != 0) {
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x18c) + 0xfc))))(*(int * PTR32 *)(this + 0x18c),param_1,param_2);
          F_008b0e80(this,*(undefined4 *)(this + 0x18c));
          return 1;
        }
      }
      else if (*(int *)(this + 0x188) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x188) + 0xfc))))(*(int * PTR32 *)(this + 0x188),param_1,param_2);
        F_008b0e80(this,*(undefined4 *)(this + 0x188));
        return 1;
      }
      break;
    case 0x11: ;
      if ((*(int *)(this + 0x1b4) != 0) &&
         (uVar2 = F_0096b040(this + 0x20c,0,param_1,param_2), uVar2 != 0)) {
        F_008b0e80(this,*(undefined4 *)(this + 0x1b4));
        return 1;
      }
      break;
    case 0x12: ;
      if ((*(int *)(this + 0x1b8) != 0) &&
         (uVar2 = F_0096b040(this + 0x20c,1,param_1,param_2), uVar2 != 0)) {
        F_008b0e80(this,*(undefined4 *)(this + 0x1b8));
        return 1;
      }
      break;
    case 0x13: ;
      if ((*(int *)(this + 0x1bc) != 0) &&
         (uVar2 = F_0096b040(this + 0x20c,2,param_1,param_2), uVar2 != 0)) {
        F_008b0e80(this,*(undefined4 *)(this + 0x1bc));
        return 1;
      }
      break;
    case 0x14: ;
      if ((*(int *)(this + 0x1c4) != 0) &&
         (uVar2 = F_0096b040(this + 0x20c,3,param_1,param_2), uVar2 != 0)) {
        F_008b0e80(this,*(undefined4 *)(this + 0x1c4));
      }
    }
    return 1;
  }
  return 0;
}

/* ref: Client::UI2::AddonScreenInfo::vf2 */
unsigned int F_008bee80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8bee80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  if ((short)param_1 == 0x3a) {
    F_008b9640(this);
  }
  return 0;
}

/* ref: FUN_008beea0 */
uint F_008beea0(unsigned int gen_a0)
{
  GEN_ENTER(0x8beea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d8774));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined1 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  uVar2 = F_004296a0(0xbc,0,400);
  *(uint *)((int)this + 0x18c) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x18c) + 4))) = *(int *)((int)this + 0x18c);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x80;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc6;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x5f ^ bVar1 | 0x20;
  return (uint)this;
}

/* ref: Client::UI2::AddonGetAction::vf63 */
uint F_008bef50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8bef50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xbc);
  (*(uint *)(gen_frame + 0xb8)) = uVar2;
  if (3 < param_1) {
    uVar3 = 0;
    ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,0);
    if ((*(byte *)(param_2 + 0x10) & 0xf) == 0) {
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
    }
    else {
      (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(param_2 + 0x14);
    }
    if ((*(byte *)(param_2 + 0x28) & 0xf) != 0) {
      uVar3 = *(undefined4 *)(param_2 + 0x2c);
    }
    if ((*(byte *)(param_2 + 0x18) & 0xf) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(param_2 + 0x1c);
    }
    if (this[0x188] != (undefined1)0x0) {
      F_0042b630(((undefined1 *)(gen_frame + 0x8)));
      F_0042b630(((undefined1 *)(gen_frame + 0x60)));
      (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)(gen_frame + 0x0));
      F_0042e430(((undefined1 *)(gen_frame + 0x8)),uVar3);
      uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x8)));
      (*(uint *)(gen_frame + 0x5c)) = uVar2;
      F_0042e430(((undefined1 *)(gen_frame + 0x60)),uVar4);
      uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x60)));
      iVar1 = *(int *)(this + 0x18c);
      (*(uint *)(gen_frame + 0xb4)) = uVar2;
      uVar2 = F_0095c770(iVar1,*(undefined4 *)(iVar1 + 4),&(*(undefined4 *)(gen_frame + 0x4)));
      if (*(int *)(this + 400) == -2) {
                    
        F_00c4579a("list<T> too long");
      }
      *(int *)(this + 400) = *(int *)(this + 400) + 1;
      *(uint *)(iVar1 + 4) = uVar2;
      **(uint * PTR32 *)(uVar2 + 4) = uVar2;
      F_0042c880(((undefined1 *)(gen_frame + 0x60)));
      uVar5 = F_0042c880(((undefined1 *)(gen_frame + 0x8)));
      F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
      return (uint)uVar5;
    }
    F_007ecf60(this,(*(undefined4 *)(gen_frame + 0x0)),uVar3,uVar4);
    uVar2 = F_00559c60(*(undefined * PTR32 *)(this + 0x184),2);
    this[0x188] = (undefined1)0x1;
  }
  F_00c47745((*(uint *)(gen_frame + 0xb8)) ^ (uint)(uint)(gen_frame + 0xbc));
  return uVar2;
}

/* ref: FUN_008bf0b0 */
uint F_008bf0b0(unsigned int gen_a0)
{
  GEN_ENTER(0x8bf0b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  int local_8;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d8884));
  puVar3 = (undefined4 *)((int)this + 0x180);
  local_8 = 9;
  do {
    *puVar3 = 0;
    F_0058d480(puVar3 + 1);
    puVar3[0xd] = 0;
    puVar3[0xe] = 4;
    puVar3[0xf] = 0x15;
    puVar3[0x10] = 0xffffffff;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    puVar3[0x18] = 0;
    puVar3[0x19] = 0;
    puVar3[0x1a] = 0;
    puVar3[0x1b] = 0;
    puVar3 = puVar3 + 0x1c;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  *(undefined4 *)((int)this + 0x5e4) = 0;
  uVar2 = F_004296a0(0x6c,0,400);
  *(uint *)((int)this + 0x5e0) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x5e0) + 4))) = *(int *)((int)this + 0x5e0);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x80;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc4;
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x5f ^ bVar1 | 0x20;
  return (uint)this;
}

/* ref: FUN_008bf190 */
uint F_008bf190(unsigned int gen_a0)
{
  GEN_ENTER(0x8bf190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d8994));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  uVar2 = F_004296a0(100,0,400);
  *(uint *)((int)this + 400) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 400) + 4))) = *(int *)((int)this + 400);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x80;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc6;
  *(undefined1 *)((int)this + 0x19c) = 0;
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x5f ^ bVar1 | 0x20;
  return (uint)this;
}

/* ref: Client::UI2::AddonWideText::vf63 */
uint F_008bf230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8bf230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(uint *)(gen_frame + 0x68)) = uVar1;
  if (3 < param_1) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,0);
    if ((*(byte *)(param_2 + 0x18) & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0x1c);
    }
    if ((*(byte *)(param_2 + 0x20) & 0xf) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x24);
    }
    if (this[0x19c] != (undefined1)0x0) {
      F_0042b630(((undefined1 *)(gen_frame + 0xc)));
      F_0042e430(((undefined1 *)(gen_frame + 0xc)),uVar2);
      (*(undefined4 *)(gen_frame + 0x64)) = uVar3;
      F_00964250(this + 400,*(undefined4 *)(this + 400),((undefined1 *)(gen_frame + 0xc)));
      uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0xc)));
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return (uint)uVar4;
    }
    uVar1 = F_0078bf80(this,uVar2,uVar3);
    this[0x19c] = (undefined1)0x1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar1;
}

/* ref: FUN_008bf2f0 */
uint F_008bf2f0(unsigned int gen_a0)
{
  GEN_ENTER(0x8bf2f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[67])REFP(0x10d8aa4));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x194) = (*(undefined * PTR32 (*)[1])REFP(0x10d6bd0));
  *(undefined4 *)((int)this + 0x19c) = 0;
  uVar2 = F_004296a0(0x18,0,400);
  *(uint *)((int)this + 0x198) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x198) + 4))) = *(int *)((int)this + 0x198);
  *(undefined4 *)((int)this + 0x1a8) = 0;
  uVar2 = F_004296a0(0x68,0,400);
  *(uint *)((int)this + 0x1a4) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1a4) + 4))) = *(int *)((int)this + 0x1a4);
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x40;
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(uint *)((int)this + 0x120) = *(uint *)((int)this + 0x120) | 0x80;
  bVar1 = *(byte *)((int)this + 0xf9) | 0x80;
  *(byte *)((int)this + 0xf9) = *(byte *)((int)this + 0xf9) | 0xc6;
  *(undefined1 *)((int)this + 0x1b0) = 0;
  *(byte *)((int)this + 0xfb) = (*(byte *)((int)this + 0xfb) ^ bVar1) & 0x5f ^ bVar1 | 0x20;
  return (uint)this;
}

/* ref: Client::UI2::AddonTextAchievementUnlocked::vf63 */
uint F_008bf3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8bf3c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  (*(uint *)(gen_frame + 0x68)) = uVar1;
  if (3 < param_1) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this,0);
    if ((*(byte *)(param_2 + 8) & 0xf) == 0) {
      (*(undefined4 *)(gen_frame + 0x0)) = 0;
    }
    else {
      (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(param_2 + 0xc);
    }
    if ((*(byte *)(param_2 + 0x10) & 0xf) == 0) {
      (*(undefined4 *)(gen_frame + 0x4)) = 0;
    }
    else {
      (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_2 + 0x14);
    }
    if ((*(byte *)(param_2 + 0x18) & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0x1c);
    }
    if (this[0x1b0] != (undefined1)0x0) {
      F_0042b630(((undefined1 *)(gen_frame + 0x10)));
      (*(undefined4 *)(gen_frame + 0xc)) = (*(undefined4 *)(gen_frame + 0x4));
      (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)(gen_frame + 0x0));
      F_0042e430(((undefined1 *)(gen_frame + 0x10)),uVar2);
      F_009642f0(this + 0x1a4,*(undefined4 *)(this + 0x1a4),&(*(undefined4 *)(gen_frame + 0x8)));
      uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x10)));
      F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
      return (uint)uVar3;
    }
    F_0055dcb0();
    F_0055dcb0();
    ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this);
    uVar1 = F_008b1ac0(this,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),uVar2);
    this[0x1b0] = (undefined1)0x1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar1;
}

/* ref: Client::UI2::AddonNotification::vf34 */
unsigned int F_008bf4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8bf4f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined * pAVar3;
  int iVar4;
  
  if (param_2 == 0) {
    pAVar3 = this + 0x198;
    iVar4 = 8;
    do {
      this_00 = *(undefined * PTR32 *)pAVar3;
      if ((this_00 != (undefined *)0x0) && (this_00 != param_1)) {
        F_00594790(this_00);
      }
      pAVar3 = pAVar3 + 0x40;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    return 0;
  }
  if (param_2 - 1U < 9) {
    uVar1 = F_0055dcb0();
    uVar1 = F_0055b9a0(uVar1);
    uVar2 = F_0055dcb0();
    uVar2 = F_0055b990(uVar2);
    F_008b9b20(this,1 << ((char)param_2 - 1U & 0x1f),uVar2,uVar1);
  }
  return 0;
}

/* ref: Client::UI2::AddonNotification::vf47 */
uint F_008bf570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x8bf570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_008b9b20(this,0xffffffff,param_1,param_2);
  return uVar1;
}

/* ref: Client::UI2::AddonNotification::vf2 */
uint F_008bf590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x8bf590u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint * param_4 = (uint *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  uint * this_00;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar3 = param_1 & 0xffff;
  if (uVar3 != 9) {
    if (uVar3 != 0xc) {
      if (uVar3 == 0x3d) {
        F_007ef040(this,param_2);
        uVar3 = F_0055dcb0();
        uVar3 = F_0055b9a0(uVar3);
        uVar4 = F_0055dcb0();
        uVar4 = F_0055b990(uVar4);
        uVar3 = F_008b9b20(this,0xffffffff,uVar4,uVar3);
        F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
        return uVar3;
      }
      goto LAB_008bf6ad;
    }
    cVar1 = (char)param_4[1];
    uVar3 = (uint)CONCAT11((char)(param_1 >> 8),cVar1);
    if ((cVar1 != '\x01') || (*param_4 != 1)) {
      if (((cVar1 == '\0') || (cVar1 == '\x02')) &&
         ((uVar3 = *param_4, uVar3 == 9 || (uVar3 == 10)))) {
        F_00557670(param_3,0);
        bVar2 = F_0078dfc0(this,param_2,*param_4,(uint)(byte)param_4[1]);
        F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
        return CONCAT31(extraout_var,bVar2);
      }
      goto LAB_008bf6ad;
    }
  }
  F_00557670(param_3,0);
  (*(int *)(gen_frame + 0xc)) = param_2;
  (*(undefined4 *)(gen_frame + 0x0)) = 3;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 3;
  (*(undefined4 *)(gen_frame + 0x10)) = 6;
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + param_2 * 0x40 + 0x18c);
  F_005a9110(this,3,&(*(undefined4 *)(gen_frame + 0x0)));
  this_00 = &(*(uint *)(gen_frame + 0x18));
  iVar5 = 2;
  do {
    this_00 = this_00 + -2;
    uVar3 = F_005a2670(this_00);
    iVar5 = iVar5 + -1;
  } while (-1 < iVar5);
LAB_008bf6ad: ;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar3;
}

/* ref: Client::UI2::AddonNotification::vf27 */
uint F_008bf6c0(unsigned int gen_a0)
{
  GEN_ENTER(0x8bf6c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  F_007ef1b0(this);
  iVar3 = 0;
  do {
    F_007ef040(this,iVar3);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  uVar1 = F_0055dcb0();
  uVar1 = F_0055b9a0(uVar1);
  uVar2 = F_0055dcb0();
  uVar2 = F_0055b990(uVar2);
  uVar1 = F_008b9b20(this,0xffffffff,uVar2,uVar1);
  return uVar1;
}

/* ref: FUN_008bf710 */
uint F_008bf710(unsigned int gen_a0)
{
  GEN_ENTER(0x8bf710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  F_005903f0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d8bb4));
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined4 *)((int)this + 0x3a8) = 0;
  *(undefined4 *)((int)this + 0x3ac) = 0;
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3b8) = 0;
  *(undefined2 *)((int)this + 0x19c) = 0;
  *(undefined2 *)((int)this + 0x3a4) = 0x100;
  *(undefined2 *)((int)this + 0x3b4) = 0x18;
  F_00c48350((undefined *)((int)this + 0x1a0),0,0x200);
  iVar1 = *(int *)((int)this + 0x184);
  if (*(int *)((int)this + 0x180) != iVar1) {
    uVar2 = F_0094cc20(iVar1,iVar1,*(int *)((int)this + 0x180));
    *(uint *)((int)this + 0x184) = uVar2;
  }
  *(byte *)((int)this + 0xf8) = *(byte *)((int)this + 0xf8) | 0x80;
  *(byte *)((int)this + 0xfb) = *(byte *)((int)this + 0xfb) | 0x58;
  *(byte *)((int)this + 0xfa) = *(byte *)((int)this + 0xfa) | 0x12;
  F_0055e2a0(this,0x14000002,1);
  *(undefined1 *)((int)this + 0x10f) = 9;
  return (uint)this;
}

/* ref: FUN_008bf7f0 */
uint F_008bf7f0(unsigned int gen_a0)
{
  GEN_ENTER(0x8bf7f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d8bb4));
  iVar1 = *(int *)((int)this + 0x180);
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 0x188) - iVar1) / 0x14) * 0x14,400);
  }
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  uVar2 = F_00590600(this);
  return uVar2;
}

